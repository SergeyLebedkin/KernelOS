
./bin/kernel.bin:     file format binary


Disassembly of section .data:

0000000000000000 <.data>:
       0:	55                   	push   rbp
       1:	48 89 e5             	mov    rbp,rsp
       4:	48 83 ec 20          	sub    rsp,0x20
       8:	b9 23 01 00 00       	mov    ecx,0x123
       d:	e8 20 00 00 00       	call   0x32
      12:	b9 67 45 00 00       	mov    ecx,0x4567
      17:	e8 16 00 00 00       	call   0x32
      1c:	b9 9a 78 00 00       	mov    ecx,0x789a
      21:	e8 0c 00 00 00       	call   0x32
      26:	b9 de bc 00 00       	mov    ecx,0xbcde
      2b:	e8 02 00 00 00       	call   0x32
      30:	eb fe                	jmp    0x30
      32:	55                   	push   rbp
      33:	48 89 e5             	mov    rbp,rsp
      36:	89 c8                	mov    eax,ecx
      38:	66 89 45 10          	mov    WORD PTR [rbp+0x10],ax
      3c:	48 8b 0d bd 0f 00 00 	mov    rcx,QWORD PTR [rip+0xfbd]        # 0x1000
      43:	8b 05 b7 4f 00 00    	mov    eax,DWORD PTR [rip+0x4fb7]        # 0x5000
      49:	8d 50 01             	lea    edx,[rax+0x1]
      4c:	89 15 ae 4f 00 00    	mov    DWORD PTR [rip+0x4fae],edx        # 0x5000
      52:	89 c0                	mov    eax,eax
      54:	48 01 c0             	add    rax,rax
      57:	48 01 c8             	add    rax,rcx
      5a:	66 c7 00 30 07       	mov    WORD PTR [rax],0x730
      5f:	48 8b 0d 9a 0f 00 00 	mov    rcx,QWORD PTR [rip+0xf9a]        # 0x1000
      66:	8b 05 94 4f 00 00    	mov    eax,DWORD PTR [rip+0x4f94]        # 0x5000
      6c:	8d 50 01             	lea    edx,[rax+0x1]
      6f:	89 15 8b 4f 00 00    	mov    DWORD PTR [rip+0x4f8b],edx        # 0x5000
      75:	89 c0                	mov    eax,eax
      77:	48 01 c0             	add    rax,rax
      7a:	48 01 c8             	add    rax,rcx
      7d:	66 c7 00 78 07       	mov    WORD PTR [rax],0x778
      82:	0f b7 45 10          	movzx  eax,WORD PTR [rbp+0x10]
      86:	66 c1 e8 0c          	shr    ax,0xc
      8a:	0f b7 c0             	movzx  eax,ax
      8d:	48 98                	cdqe   
      8f:	48 8d 15 6a 1f 00 00 	lea    rdx,[rip+0x1f6a]        # 0x2000
      96:	0f b6 04 10          	movzx  eax,BYTE PTR [rax+rdx*1]
      9a:	66 98                	cbw    
      9c:	80 cc 07             	or     ah,0x7
      9f:	89 c1                	mov    ecx,eax
      a1:	4c 8b 05 58 0f 00 00 	mov    r8,QWORD PTR [rip+0xf58]        # 0x1000
      a8:	8b 05 52 4f 00 00    	mov    eax,DWORD PTR [rip+0x4f52]        # 0x5000
      ae:	8d 50 01             	lea    edx,[rax+0x1]
      b1:	89 15 49 4f 00 00    	mov    DWORD PTR [rip+0x4f49],edx        # 0x5000
      b7:	89 c0                	mov    eax,eax
      b9:	48 01 c0             	add    rax,rax
      bc:	4c 01 c0             	add    rax,r8
      bf:	89 ca                	mov    edx,ecx
      c1:	66 89 10             	mov    WORD PTR [rax],dx
      c4:	0f b7 45 10          	movzx  eax,WORD PTR [rbp+0x10]
      c8:	c1 f8 08             	sar    eax,0x8
      cb:	83 e0 0f             	and    eax,0xf
      ce:	48 98                	cdqe   
      d0:	48 8d 15 29 1f 00 00 	lea    rdx,[rip+0x1f29]        # 0x2000
      d7:	0f b6 04 10          	movzx  eax,BYTE PTR [rax+rdx*1]
      db:	66 98                	cbw    
      dd:	80 cc 07             	or     ah,0x7
      e0:	89 c1                	mov    ecx,eax
      e2:	4c 8b 05 17 0f 00 00 	mov    r8,QWORD PTR [rip+0xf17]        # 0x1000
      e9:	8b 05 11 4f 00 00    	mov    eax,DWORD PTR [rip+0x4f11]        # 0x5000
      ef:	8d 50 01             	lea    edx,[rax+0x1]
      f2:	89 15 08 4f 00 00    	mov    DWORD PTR [rip+0x4f08],edx        # 0x5000
      f8:	89 c0                	mov    eax,eax
      fa:	48 01 c0             	add    rax,rax
      fd:	4c 01 c0             	add    rax,r8
     100:	89 ca                	mov    edx,ecx
     102:	66 89 10             	mov    WORD PTR [rax],dx
     105:	0f b7 45 10          	movzx  eax,WORD PTR [rbp+0x10]
     109:	c1 f8 04             	sar    eax,0x4
     10c:	83 e0 0f             	and    eax,0xf
     10f:	48 98                	cdqe   
     111:	48 8d 15 e8 1e 00 00 	lea    rdx,[rip+0x1ee8]        # 0x2000
     118:	0f b6 04 10          	movzx  eax,BYTE PTR [rax+rdx*1]
     11c:	66 98                	cbw    
     11e:	80 cc 07             	or     ah,0x7
     121:	89 c1                	mov    ecx,eax
     123:	4c 8b 05 d6 0e 00 00 	mov    r8,QWORD PTR [rip+0xed6]        # 0x1000
     12a:	8b 05 d0 4e 00 00    	mov    eax,DWORD PTR [rip+0x4ed0]        # 0x5000
     130:	8d 50 01             	lea    edx,[rax+0x1]
     133:	89 15 c7 4e 00 00    	mov    DWORD PTR [rip+0x4ec7],edx        # 0x5000
     139:	89 c0                	mov    eax,eax
     13b:	48 01 c0             	add    rax,rax
     13e:	4c 01 c0             	add    rax,r8
     141:	89 ca                	mov    edx,ecx
     143:	66 89 10             	mov    WORD PTR [rax],dx
     146:	0f b7 45 10          	movzx  eax,WORD PTR [rbp+0x10]
     14a:	83 e0 0f             	and    eax,0xf
     14d:	48 98                	cdqe   
     14f:	48 8d 15 aa 1e 00 00 	lea    rdx,[rip+0x1eaa]        # 0x2000
     156:	0f b6 04 10          	movzx  eax,BYTE PTR [rax+rdx*1]
     15a:	66 98                	cbw    
     15c:	80 cc 07             	or     ah,0x7
     15f:	89 c1                	mov    ecx,eax
     161:	4c 8b 05 98 0e 00 00 	mov    r8,QWORD PTR [rip+0xe98]        # 0x1000
     168:	8b 05 92 4e 00 00    	mov    eax,DWORD PTR [rip+0x4e92]        # 0x5000
     16e:	8d 50 01             	lea    edx,[rax+0x1]
     171:	89 15 89 4e 00 00    	mov    DWORD PTR [rip+0x4e89],edx        # 0x5000
     177:	89 c0                	mov    eax,eax
     179:	48 01 c0             	add    rax,rax
     17c:	4c 01 c0             	add    rax,r8
     17f:	89 ca                	mov    edx,ecx
     181:	66 89 10             	mov    WORD PTR [rax],dx
     184:	48 8b 0d 75 0e 00 00 	mov    rcx,QWORD PTR [rip+0xe75]        # 0x1000
     18b:	8b 05 6f 4e 00 00    	mov    eax,DWORD PTR [rip+0x4e6f]        # 0x5000
     191:	8d 50 01             	lea    edx,[rax+0x1]
     194:	89 15 66 4e 00 00    	mov    DWORD PTR [rip+0x4e66],edx        # 0x5000
     19a:	89 c0                	mov    eax,eax
     19c:	48 01 c0             	add    rax,rax
     19f:	48 01 c8             	add    rax,rcx
     1a2:	66 c7 00 20 07       	mov    WORD PTR [rax],0x720
     1a7:	90                   	nop
     1a8:	5d                   	pop    rbp
     1a9:	c3                   	ret    
     1aa:	90                   	nop
     1ab:	90                   	nop
     1ac:	90                   	nop
     1ad:	90                   	nop
     1ae:	90                   	nop
     1af:	90                   	nop
     1b0:	ff                   	(bad)  
     1b1:	ff                   	(bad)  
     1b2:	ff                   	(bad)  
     1b3:	ff                   	(bad)  
     1b4:	ff                   	(bad)  
     1b5:	ff                   	(bad)  
     1b6:	ff                   	(bad)  
     1b7:	ff 00                	inc    DWORD PTR [rax]
     1b9:	00 00                	add    BYTE PTR [rax],al
     1bb:	00 00                	add    BYTE PTR [rax],al
     1bd:	00 00                	add    BYTE PTR [rax],al
     1bf:	00 ff                	add    bh,bh
     1c1:	ff                   	(bad)  
     1c2:	ff                   	(bad)  
     1c3:	ff                   	(bad)  
     1c4:	ff                   	(bad)  
     1c5:	ff                   	(bad)  
     1c6:	ff                   	(bad)  
     1c7:	ff 00                	inc    DWORD PTR [rax]
	...
    1001:	80 0b 00             	or     BYTE PTR [rbx],0x0
	...
    2000:	30 31                	xor    BYTE PTR [rcx],dh
    2002:	32 33                	xor    dh,BYTE PTR [rbx]
    2004:	34 35                	xor    al,0x35
    2006:	36 37                	ss (bad) 
    2008:	38 39                	cmp    BYTE PTR [rcx],bh
    200a:	41                   	rex.B
    200b:	42                   	rex.X
    200c:	43                   	rex.XB
    200d:	44                   	rex.R
    200e:	45                   	rex.RB
    200f:	46 00 00             	rex.RX add BYTE PTR [rax],r8b
	...
    201e:	00 00                	add    BYTE PTR [rax],al
    2020:	47                   	rex.RXB
    2021:	43                   	rex.XB
    2022:	43 3a 20             	rex.XB cmp spl,BYTE PTR [r8]
    2025:	28 78 38             	sub    BYTE PTR [rax+0x38],bh
    2028:	36 5f                	ss pop rdi
    202a:	36 34 2d             	ss xor al,0x2d
    202d:	77 69                	ja     0x2098
    202f:	6e                   	outs   dx,BYTE PTR ds:[rsi]
    2030:	33 32                	xor    esi,DWORD PTR [rdx]
    2032:	2d 73 65 68 2d       	sub    eax,0x2d686573
    2037:	72 65                	jb     0x209e
    2039:	76 30                	jbe    0x206b
    203b:	2c 20                	sub    al,0x20
    203d:	42 75 69             	rex.X jne 0x20a9
    2040:	6c                   	ins    BYTE PTR es:[rdi],dx
    2041:	74 20                	je     0x2063
    2043:	62                   	(bad)  
    2044:	79 20                	jns    0x2066
    2046:	4d 69 6e 47 57 2d 57 	imul   r13,QWORD PTR [r14+0x47],0x36572d57
    204d:	36 
    204e:	34 20                	xor    al,0x20
    2050:	70 72                	jo     0x20c4
    2052:	6f                   	outs   dx,DWORD PTR ds:[rsi]
    2053:	6a 65                	push   0x65
    2055:	63 74 29 20          	movsxd esi,DWORD PTR [rcx+rbp*1+0x20]
    2059:	38 2e                	cmp    BYTE PTR [rsi],ch
    205b:	31 2e                	xor    DWORD PTR [rsi],ebp
    205d:	30 00                	xor    BYTE PTR [rax],al
	...
    2fff:	00 00                	add    BYTE PTR [rax],al
    3001:	10 00                	adc    BYTE PTR [rax],al
    3003:	00 32                	add    BYTE PTR [rdx],dh
    3005:	10 00                	adc    BYTE PTR [rax],al
    3007:	00 00                	add    BYTE PTR [rax],al
    3009:	50                   	push   rax
    300a:	00 00                	add    BYTE PTR [rax],al
    300c:	32 10                	xor    dl,BYTE PTR [rax]
    300e:	00 00                	add    BYTE PTR [rax],al
    3010:	aa                   	stos   BYTE PTR es:[rdi],al
    3011:	11 00                	adc    DWORD PTR [rax],eax
    3013:	00 0c 50             	add    BYTE PTR [rax+rdx*2],cl
	...
    3ffe:	00 00                	add    BYTE PTR [rax],al
    4000:	01 08                	add    DWORD PTR [rax],ecx
    4002:	03 05 08 32 04 03    	add    eax,DWORD PTR [rip+0x3043208]        # 0x3047210
    4008:	01 50 00             	add    DWORD PTR [rax+0x0],edx
    400b:	00 01                	add    BYTE PTR [rcx],al
    400d:	04 02                	add    al,0x2
    400f:	05 04 03 01 50       	add    eax,0x50010304
	...
