extern printf

	section .text

	global main

main:
	    push rbp
	    mov rbp, rsp

	    mov rdi, msg
	    call printf

	    leave
	    ret

	section .data
	    msg     db  'Hello, Holberton', 16, 10, 0
