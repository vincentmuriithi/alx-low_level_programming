section .data
hello db "Hello, Holberton", 0
newline db 10, 0   ; Newline character and null terminator

section .text
global main

extern printf

main:
push rbp
mov rdi, hello
call printf
mov rdi, newline  ; Load the newline character
call printf
add rsp, 8
mov rax, 0x60    ; Exit syscall
xor rdi, rdi     ; Return code 0
syscall

