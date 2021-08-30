section	.text
				global	_ft_strdup
				extern	_malloc
				extern _ft_strlen
				extern _ft_strcpy

_ft_strdup:
				call 	_ft_strlen
				inc		rax
				push	rdi
				mov		rdi,rax
				call	_malloc
				mov		rdi,rax
				pop		rsi
				call	_ft_strcpy
				ret