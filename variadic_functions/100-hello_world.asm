section .data
	txt: db "Hello, World" , 0xA
	txtl: EQU $ - txt

global main

section .text

main:
	MOV rax, 0x1
	MOV rdi, 0x1
	MOV rsi, txt
	MOV rdx, txtl
	SYSCALL

	MOV rax, 0x3C
	MOV rdi, 0x0
	SYSCALL
