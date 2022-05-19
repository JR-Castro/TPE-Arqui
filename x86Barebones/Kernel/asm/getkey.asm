GLOBAL getKey

getKey:
    push rbp
    mov rbp, rsp

    mov rax, 0
    in al, 64h      ;read status register
    and al, 01h     ;last bit signifies output has data for system
    cmp al, 0
    je .end
    in al, 60h      ;read output register

.end:
    mov rsp, rbp
    pop rbp
    ret