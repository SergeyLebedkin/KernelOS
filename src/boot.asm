    use16
    org     0x7C00

    ; disable interrupts
    cli

    ; open Line A20
    in      al, 92h
    or      al, 00000010b
    out     92h, al

    ; clear Page Map Tables
    xor     eax, eax
    mov     edi, 0xA000
ClearPageMaps:
    mov     [edi], eax
    add     edi, 4
    cmp     edi, 0xE000
    jl      ClearPageMaps

    ; build Page Map Level 4 (0xA000)
    mov     eax, 0xB003
    mov     edi, 0xA000
    mov     [edi], eax

    ; build Page Map Level 3 (0xB000)
    mov     eax, 0xC003
    mov     edi, 0xB000
    mov     [edi], eax

    ; build Page Map Level 2 (0xC000)
    mov     eax, 0xD003
    mov     edi, 0xC000
    mov     [edi], eax

    ; build Page Map Level 1 (0xD000)
    mov     eax, 0x0003
    mov     edi, 0xD000
BuildPageMapLevel_1:
    mov     [edi], eax
    add     edi, 8
    add     eax, 0x1000
    cmp     edi, 0xE000
    jl      BuildPageMapLevel_1

    ; setup Page Tables pointer
    mov     edi, 0x0000A000 ; set address
    mov     cr3, edi

    ; enable Physical-Address Extension (bit 5) and Page-Global (bit 7)
    mov     eax, 10100000b ; set the PAE and PGE bit.
    mov     cr4, eax

    ; enable Long Mode (bit 8)
    mov     ecx, 0xC0000080
    rdmsr
    or      eax, 0x00000100 ; set bit 8.
    wrmsr

    ; enable Protected-Mode (bit 0) and Pagind (bit 31)
    mov     eax, cr0
    or      eax, 0x80000001 ; set bit 0 and bit 31
    mov     cr0, eax
    
    jmp     $

; print hex
; ax - value
printh:
    push    ax
    push    bx
    push    dx
    push    si

    ; store original value
    mov     dx, ax
    ; load hex codes table
    mov     si, HEX_CODES_TABLE

    ; print prefix
    mov     al, '0'
    call    printc
    mov     al, 'x'
    call    printc

    ; print bits 15-12
    mov     bx, dx
    shr     bx, 12
    and     bx, 0x000f
    mov     al, byte [si + bx]
    call    printc

    ; print bits 11-8
    mov     bx, dx
    shr     bx, 8
    and     bx, 0x000f
    mov     al, byte [si + bx]
    call    printc

    ; print bits 11-8
    mov     bx, dx
    shr     bx, 4
    and     bx, 0x000f
    mov     al, byte [si + bx]
    call    printc

    ; print bits 11-8
    mov     bx, dx
    and     bx, 0x000f
    mov     al, byte [si + bx]
    call    printc

    ; print space
    mov     al, ' '
    call    printc

    pop     si
    pop     dx
    pop     bx
    pop     ax
    ret

; print character
; al - simbol
printc:
    push    ax
    mov     ah, 0x0e
    int     10h
    pop     ax
    ret
; hex codes table
HEX_CODES_TABLE: db '0123456789ABCDEF'

    ; allign size to 512 bytes
    times 510-($-$$) db 0
    ; boot sector magic
    dw 0xaa55
