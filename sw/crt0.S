	.section .text.init
	.globl _start

_start:
	la	sp, __stack_top

	la	t0, __bss_start
	la	t1, __bss_end
1:	bgeu	t0, t1, 2f
	sw	zero, 0(t0)
	addi	t0, t0, 4
	j	1b
2:
	call	main

	/* sim_exit(main()) via CSR_DSCRATCH SIM_CTRL_EXIT */
	andi	a0, a0, 0xFF
	csrw	0x7b2, a0
3:	j	3b
