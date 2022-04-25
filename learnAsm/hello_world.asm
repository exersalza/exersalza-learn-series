; hello world comment
; Author: exersalza


global _start

section .text:

_start:
    mov eax, 0x4         ; Use the write syscall
    mov ebx, 1           ; Use standard out
    mov ecx, message
    mov edx, message_length
    int 0x80

    mov eax, 0x1
    mov ebx, 0
    int 0x80


section .data:
    message: db "Hello World!", 0xA
    message_length equ $-message
