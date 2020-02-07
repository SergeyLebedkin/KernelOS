    use16
    org     0x7C00

    ; disable interrupts
    cli

    ; clear Page Map Tables
    mov     eax, 0x0000
    mov     edi, 0xA000
ClearPageMaps:
    mov     [edi], eax
    add     edi, 4
    cmp     edi, 0xE000
    jl      ClearPageMaps

    ; build Page Map Level 4 (0xA000)
    mov 	eax, 0xB003
    mov		edi, 0xA000
    mov		[edi], eax

    ; build Page Map Level 3 (0xB000)
    mov     eax, 0xC003
    mov     edi, 0xB000
    mov     [edi], eax

    ; build Page Map Level 2 (0xC000)
    mov    eax, 0xD003
    mov    edi, 0xC000
    mov    [edi], eax

    ; build Page Map Level 1 (0xD000)
    mov     eax, 0x0003
    mov     edi, 0xD000
    xor     ecx, ecx
BuildPageMapLevel_1:
    mov     [edi], eax
    add     edi, 8
    add     eax, 0x1000
    inc     ecx
    cmp     edi, 0xE000
    jl      BuildPageMapLevel_1

    ; setup Page Tables pointer
    mov     edi, 0xA000
    mov     cr3, edi

    ; enable Physical-Address Extension (bit 5) and Page-Global (bit 7)
    mov     eax, 10100000b ; Set the PAE and PGE bit.
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

    ; allign size to 512 bytes
    times 510-($-$$) db 0
    ; boot sector magic
    dw 0xaa55
