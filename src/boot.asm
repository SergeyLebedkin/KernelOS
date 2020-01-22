    use16
    org     0x7C00
    ; output some text
    mov     ax, 0xB000
    mov     es, ax
    mov     al, 'W'  ; symbol
    mov     ah, 0x24 ; color
    mov     bx, 0x8000
    mov     WORD [es:bx], ax
    hlt
    ; tail
    TIMES   510-($-$$) DB 0
    ; boot sector magic
    DW      0xAA55