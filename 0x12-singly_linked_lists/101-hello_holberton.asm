section .data
    msg db 'Hello, Holberton', 0xa, 0

section .text
    global _start

_start:
    ; prepare the arguments for printf
    push dword 0      ; null terminator
    push dword msg    ; pointer to the message
    call printf       ; call the printf function

    ; exit the program
    xor eax, eax      ; return value 0
    mov ebx, eax      ; status code 0
    mov eax, 1        ; system call number for exit
    int 0x80          ; invoke the system call
