section .data
hello db "Hello, Holberton", 0

section .text
global main

extern printf

main:
push rbp
mov rdi, hello
call printf
add rsp, 8
mov rax, 0x60    ; Exit syscall
xor rdi, rdi     ; Return code 0
syscall
