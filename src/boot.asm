    use16
    org     0x7C00

    ; define Long Mode Code Segment Descriptor Selector
    CODE_SEGMENT equ 0x08

    mov     ax, 0x1000
    mov     es, ax
    xor     bx, bx   ; [es:bx] <- pointer to buffer where the data will be stored
    mov     ah, 0x02 ; ah <- int 0x13 function. 0x02 = 'read'
    mov     al, 0x02 ; al <- number of sectors to read (0x01 .. 0x80)
    mov     cl, 0x02 ; cl <- sector (0x01 .. 0x11)
    mov     ch, 0x00 ; ch <- cylinder (0x0 .. 0x3FF, upper 2 bits in 'cl')
    mov     dh, 0x00 ; dh <- head number (0x0 .. 0xF)
    int     0x13     ; BIOS interrupt
    mov     ax, ds
    mov     es, ax

    ; disable interrupts
    cli

    ; open Line A20
    in      al, 92h
    or      al, 00000010b
    out     92h, al

    ; clear Page Map Tables
    xor     eax, eax
    mov     edi, 0xA000
    mov     ecx, 2048 * 4 ; 4 pages by 2048 words
    rep     stosw

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
    lgdt    [GDT64Pointer]

    ; jump to Long Mode
    jmp     CODE_SEGMENT:LongMode

    use64
LongMode:
    ; clear segments registers
    xor     ax, ax
    mov     ds, ax
    mov     es, ax
    mov     fs, ax
    mov     gs, ax
    mov     ss, ax

    mov     rax, 0xFFFF_8000_0001_0000
    jmp     rax

    ; Global Descriptor Table
GDT64:
    dq 0x0000_0000_0000_0000 ; zero
    dq 0x0020_9800_0000_0000 ; code
    dq 0x0000_9000_0000_0000 ; data (not necessary)
    ; Global Descriptor Table Pointer
GDT64Pointer:
    dw $ - GDT64 - 1
    dq GDT64

    ; allign size to 512 bytes
    times 510 - ($-$$) db 0
    ; boot sector magic
    dw 0xaa55
