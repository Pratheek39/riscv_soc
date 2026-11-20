#!/usr/bin/env python3
"""Generate a $readmemh word image for axi4_bram from a 32-bit little-endian ELF.

usage: gen_mem.py <elf> <out.hex> [depth_words=32768]

Each PT_LOAD segment is copied to its absolute physical address (p_paddr),
i.e. image byte offset = p_paddr. The memory maps address 0 to image offset 0.
Words are little-endian, one 32-bit hex word per line.
"""
import struct, sys

elf_path, out_path = sys.argv[1], sys.argv[2]
depth = int(sys.argv[3]) if len(sys.argv) > 3 else 32768

blob = open(elf_path, "rb").read()
assert blob[:4] == b"\x7fELF" and blob[4] == 1 and blob[5] == 1, "need ELF32 little-endian"

e_phoff, = struct.unpack_from("<I", blob, 0x1C)
e_phentsize, e_phnum = struct.unpack_from("<HH", blob, 0x2A)

segments = []
for i in range(e_phnum):
    p_type, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz = struct.unpack_from(
        "<IIIIII", blob, e_phoff + i * e_phentsize)
    if p_type == 1 and p_memsz:  # PT_LOAD
        segments.append((p_paddr, p_offset, p_filesz, p_memsz))

low = min(s[0] for s in segments)
image = bytearray(depth * 4)
for paddr, off, filesz, memsz in segments:
    dst = paddr
    assert dst + memsz <= len(image), "program does not fit in BRAM"
    image[dst:dst + filesz] = blob[off:off + filesz]   # .bss stays zero

with open(out_path, "w") as f:
    for i in range(0, len(image), 4):
        f.write("%08x\n" % int.from_bytes(image[i:i + 4], "little"))

print("wrote %s: %d words; segments: %s"
      % (out_path, depth, ", ".join("0x%08x+%d" % (p, m) for p, _, _, m in segments)))
