global main
extern printf
main:
mov edi, format
xor eax, eax
call printf, 0
mov eax
ret
format: db "Hello, Hoberton\n", 0
