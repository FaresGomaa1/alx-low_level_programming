section .data
    format db 'Hello, Holberton', 0   ; null-terminated string

section .text
    global main
    extern printf

main:
    sub rsp, 8                ; align the stack to a multiple of 16
    mov rdi, format           ; first argument: format string
    call printf               ; call printf function
    add rsp, 8                ; clean up the stack after the function call

    mov eax, 0                ; return 0 from the main function
    ret
