section	.text
	extern	printf
	global	main

main:
	mov	edi, pf
	mov	eax, 0
	call	printf

section	.data
	pf db 'Hello, Holberton', 0xa, 0
