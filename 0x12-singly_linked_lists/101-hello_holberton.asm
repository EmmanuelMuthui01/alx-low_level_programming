extern printf		; Declare that we're using printf func from external library

section .text
	global main 	; Declare the entry point of the program as 'main'

main:
	push rbp	; Save base pointer
	mov rdi, fmt	; Load format string into rdi
	mov rsi, msg	; Load message string into rsi
	call printf	; Call the printf function
	mov rax, 0	; Clear rax (used for function return values)
	pop rbp		; Restore base pointer
	mov rax, 0	; Set rax to 0 (return value)
	ret		; Return from the function

section .data
	msg: db "Hello, Holberton", 0	; Null terminated string (message)
	fmt: db "%s", 10, 0		; Format string: %s followed by \n and '\0'
