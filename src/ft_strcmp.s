section .text
    global _ft_strcmp

_ft_strcmp:
            mov rcx, 0
            mov rdx, 0
            mov r10, 0

_while:
            cmp BYTE [rdi + rcx], 0
            je _exit
            mov dl, BYTE [rdi + rcx]
            mov r10b, BYTE [rsi + rcx]
            cmp rdx, r10
            jne _exit     
            inc rcx
            jmp _while
_exit:
        mov dl, BYTE [rdi + rcx]
        mov r10b, BYTE [rsi + rcx]
        sub rdx, r10
        mov rax, rdx
        ret