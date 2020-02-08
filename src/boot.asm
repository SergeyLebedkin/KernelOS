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
    mov     ecx, 4096 * 4 ; 4 pages by 4096 bytes
    rep     stosb

    ; build Page Map Level 4 (0xA000)
    mov     eax, 0xB003
    mov     edi, 0xA000
    mov     [edi], eax
    mov     edi, 0xA800
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

    ; load Global Descriptor Table
    lgdt [GDT64Pointer]

    ; jump to Long Mode
    jmp 0x8:LongMode

    use64
LongMode:
    ; clear segments registers
    xor     ax, ax
    mov     ds, ax
    mov     es, ax
    mov     fs, ax
    mov     gs, ax
    mov     ss, ax

    jmp     $

    ; Blank out the screen to a blue color.
    mov     edi, 0xB8000
    mov     rcx, 500
    mov     rax, 0x1F201F201F201F20
    rep     stosq

    jmp     $

    ; Global Descriptor Table
GDT64:
    dq 0x0000000000000000 ; zero
    dq 0x0020980000000000 ; code
    dq 0x0000900000000000 ; data
    ; Global Descriptor Table Pointer
GDT64Pointer:
    dw $ - GDT64 - 1
    dq GDT64

    ; allign size to 512 bytes
    times 510 - ($-$$) db 0
    ; boot sector magic
    dw 0xaa55
