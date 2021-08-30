section .text
global      _ft_strcpy

_ft_strcpy:
            xor rax, rax
_while:
            cmp byte[rsi + rax], 0
            je _end
            mov r9b, byte[rsi + rax]
            mov byte[rdi + rax], r9b
            inc rax
            jmp _while
_end:
            mov byte[rdi + rax], 0
            mov rax, rdi
            ret