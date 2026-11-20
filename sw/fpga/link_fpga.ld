/* FPGA link script for the Boolean board.
 * Main memory is the 128KB block RAM at 0x0000_0000 (axi4_bram, DEPTH_WORDS=32768).
 * The core resets to 0x0000_2000 (reset_vector_i in fpga/boolean/top.v), so the
 * program is linked there and the image ends at the top of the BRAM (0x0002_0000).
 */
ENTRY(_start)

MEMORY
{
    RAM (rwx) : ORIGIN = 0x00002000, LENGTH = 0x0001E000
}

SECTIONS
{
    .text : ALIGN(4) {
        *(.text.init)
        *(.text .text.*)
    } > RAM

    .rodata : ALIGN(4) {
        *(.rodata .rodata.*)
    } > RAM

    .data : ALIGN(4) {
        *(.data .data.*)
        *(.sdata .sdata.*)
    } > RAM

    .bss (NOLOAD) : ALIGN(4) {
        __bss_start = .;
        *(.bss .bss.*)
        *(.sbss .sbss.*)
        *(COMMON)
        . = ALIGN(4);
        __bss_end = .;
    } > RAM

    .stack (NOLOAD) : ALIGN(16) {
        . += 0x4000;
        . = ALIGN(16);
        __stack_top = .;
    } > RAM
}
