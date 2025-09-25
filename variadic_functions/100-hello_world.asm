; File: 100-hello_world.asm
section .data
msg:    db  "Hello, World", 10    ; النص مع newline
len     equ $ - msg               ; الطول

section .text
global _start

_start:
    ; write(1, msg, len)
    mov     rax, 1          ; syscall: sys_write (1)
    mov     rdi, 1          ; file descriptor: stdout (1)
    lea     rsi, [rel msg]  ; pointer to message
    mov     rdx, len        ; message length
    syscall

    ; exit(0)
    mov     rax, 60         ; syscall: sys_exit (60)
    xor     rdi, rdi        ; status 0
    syscall
