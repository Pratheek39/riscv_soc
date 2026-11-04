ENTRY(_start)

MEMORY
{
    RAM (rwx) : ORIGIN = 0x80000000, LENGTH = 1M
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
        . += 0x8000;
        . = ALIGN(16);
        __stack_top = .;
    } > RAM
}
