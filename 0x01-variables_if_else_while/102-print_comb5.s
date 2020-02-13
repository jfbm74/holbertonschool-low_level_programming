	.file	"102-print_comb5.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$48, -16(%rbp)
	jmp	.L2
.L11:
	movl	$48, -12(%rbp)
	jmp	.L3
.L10:
	movl	-16(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L4
.L9:
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.L5
.L8:
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	movl	$32, %edi
	call	putchar
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	cmpl	$57, -16(%rbp)
	jne	.L6
	cmpl	$56, -12(%rbp)
	jne	.L6
	cmpl	$57, -8(%rbp)
	jne	.L6
	cmpl	$57, -4(%rbp)
	je	.L7
.L6:
	movl	$44, %edi
	call	putchar
	movl	$32, %edi
	call	putchar
.L7:
	addl	$1, -4(%rbp)
.L5:
	cmpl	$57, -4(%rbp)
	jle	.L8
	addl	$1, -8(%rbp)
.L4:
	cmpl	$57, -8(%rbp)
	jle	.L9
	addl	$1, -12(%rbp)
.L3:
	cmpl	$56, -12(%rbp)
	jle	.L10
	addl	$1, -16(%rbp)
.L2:
	cmpl	$57, -16(%rbp)
	jle	.L11
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
