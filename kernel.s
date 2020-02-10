
./bin/kernel.bin:     file format binary


Disassembly of section .data:

0000000000000000 <.data>:
       0:	55                   	push   rbp
       1:	48 89 e5             	mov    rbp,rsp
       4:	48 83 ec 10          	sub    rsp,0x10
       8:	48 c7 45 f8 00 80 0b 	mov    QWORD PTR [rbp-0x8],0xb8000
       f:	00 
      10:	48 8b 45 f8          	mov    rax,QWORD PTR [rbp-0x8]
      14:	48 ba 20 1f 20 1f 20 	movabs rdx,0x1f201f201f201f20
      1b:	1f 20 1f 
      1e:	48 89 10             	mov    QWORD PTR [rax],rdx
      21:	eb fe                	jmp    0x21
      23:	90                   	nop
      24:	90                   	nop
      25:	90                   	nop
      26:	90                   	nop
      27:	90                   	nop
      28:	90                   	nop
      29:	90                   	nop
      2a:	90                   	nop
      2b:	90                   	nop
      2c:	90                   	nop
      2d:	90                   	nop
      2e:	90                   	nop
      2f:	90                   	nop
      30:	ff                   	(bad)  
      31:	ff                   	(bad)  
      32:	ff                   	(bad)  
      33:	ff                   	(bad)  
      34:	ff                   	(bad)  
      35:	ff                   	(bad)  
      36:	ff                   	(bad)  
      37:	ff 00                	inc    DWORD PTR [rax]
      39:	00 00                	add    BYTE PTR [rax],al
      3b:	00 00                	add    BYTE PTR [rax],al
      3d:	00 00                	add    BYTE PTR [rax],al
      3f:	00 ff                	add    bh,bh
      41:	ff                   	(bad)  
      42:	ff                   	(bad)  
      43:	ff                   	(bad)  
      44:	ff                   	(bad)  
      45:	ff                   	(bad)  
      46:	ff                   	(bad)  
      47:	ff 00                	inc    DWORD PTR [rax]
	...
     ffd:	00 00                	add    BYTE PTR [rax],al
     fff:	00 47 43             	add    BYTE PTR [rdi+0x43],al
    1002:	43 3a 20             	rex.XB cmp spl,BYTE PTR [r8]
    1005:	28 78 38             	sub    BYTE PTR [rax+0x38],bh
    1008:	36 5f                	ss pop rdi
    100a:	36 34 2d             	ss xor al,0x2d
    100d:	77 69                	ja     0x1078
    100f:	6e                   	outs   dx,BYTE PTR ds:[rsi]
    1010:	33 32                	xor    esi,DWORD PTR [rdx]
    1012:	2d 73 65 68 2d       	sub    eax,0x2d686573
    1017:	72 65                	jb     0x107e
    1019:	76 30                	jbe    0x104b
    101b:	2c 20                	sub    al,0x20
    101d:	42 75 69             	rex.X jne 0x1089
    1020:	6c                   	ins    BYTE PTR es:[rdi],dx
    1021:	74 20                	je     0x1043
    1023:	62                   	(bad)  
    1024:	79 20                	jns    0x1046
    1026:	4d 69 6e 47 57 2d 57 	imul   r13,QWORD PTR [r14+0x47],0x36572d57
    102d:	36 
    102e:	34 20                	xor    al,0x20
    1030:	70 72                	jo     0x10a4
    1032:	6f                   	outs   dx,DWORD PTR ds:[rsi]
    1033:	6a 65                	push   0x65
    1035:	63 74 29 20          	movsxd esi,DWORD PTR [rcx+rbp*1+0x20]
    1039:	38 2e                	cmp    BYTE PTR [rsi],ch
    103b:	31 2e                	xor    DWORD PTR [rsi],ebp
    103d:	30 00                	xor    BYTE PTR [rax],al
	...
    1fff:	00 00                	add    BYTE PTR [rax],al
    2001:	10 00                	adc    BYTE PTR [rax],al
    2003:	00 23                	add    BYTE PTR [rbx],ah
    2005:	10 00                	adc    BYTE PTR [rax],al
    2007:	00 00                	add    BYTE PTR [rax],al
    2009:	40 00 00             	add    BYTE PTR [rax],al
	...
    3000:	01 08                	add    DWORD PTR [rax],ecx
    3002:	03 05 08 12 04 03    	add    eax,DWORD PTR [rip+0x3041208]        # 0x3044210
    3008:	01 50 00             	add    DWORD PTR [rax+0x0],edx
	...
