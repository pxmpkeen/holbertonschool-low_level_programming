exp.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    rsp,0x8
    1008:	48 8b 05 d9 2f 00 00 	mov    rax,QWORD PTR [rip+0x2fd9]        # 3fe8 <__gmon_start__>
    100f:	48 85 c0             	test   rax,rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   rax
    1016:	48 83 c4 08          	add    rsp,0x8
    101a:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 a2 2f 00 00    	push   QWORD PTR [rip+0x2fa2]        # 3fc8 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 a3 2f 00 00 	bnd jmp QWORD PTR [rip+0x2fa3]        # 3fd0 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nop    DWORD PTR [rax]

Disassembly of section .plt.got:

0000000000001030 <__cxa_finalize@plt>:
    1030:	f3 0f 1e fa          	endbr64 
    1034:	f2 ff 25 bd 2f 00 00 	bnd jmp QWORD PTR [rip+0x2fbd]        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    103b:	0f 1f 44 00 00       	nop    DWORD PTR [rax+rax*1+0x0]

Disassembly of section .text:

0000000000001040 <_start>:
    1040:	f3 0f 1e fa          	endbr64 
    1044:	31 ed                	xor    ebp,ebp
    1046:	49 89 d1             	mov    r9,rdx
    1049:	5e                   	pop    rsi
    104a:	48 89 e2             	mov    rdx,rsp
    104d:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
    1051:	50                   	push   rax
    1052:	54                   	push   rsp
    1053:	4c 8d 05 56 01 00 00 	lea    r8,[rip+0x156]        # 11b0 <__libc_csu_fini>
    105a:	48 8d 0d df 00 00 00 	lea    rcx,[rip+0xdf]        # 1140 <__libc_csu_init>
    1061:	48 8d 3d c1 00 00 00 	lea    rdi,[rip+0xc1]        # 1129 <main>
    1068:	ff 15 72 2f 00 00    	call   QWORD PTR [rip+0x2f72]        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    106e:	f4                   	hlt    
    106f:	90                   	nop

0000000000001070 <deregister_tm_clones>:
    1070:	48 8d 3d 99 2f 00 00 	lea    rdi,[rip+0x2f99]        # 4010 <__TMC_END__>
    1077:	48 8d 05 92 2f 00 00 	lea    rax,[rip+0x2f92]        # 4010 <__TMC_END__>
    107e:	48 39 f8             	cmp    rax,rdi
    1081:	74 15                	je     1098 <deregister_tm_clones+0x28>
    1083:	48 8b 05 4e 2f 00 00 	mov    rax,QWORD PTR [rip+0x2f4e]        # 3fd8 <_ITM_deregisterTMCloneTable>
    108a:	48 85 c0             	test   rax,rax
    108d:	74 09                	je     1098 <deregister_tm_clones+0x28>
    108f:	ff e0                	jmp    rax
    1091:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1098:	c3                   	ret    
    1099:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000010a0 <register_tm_clones>:
    10a0:	48 8d 3d 69 2f 00 00 	lea    rdi,[rip+0x2f69]        # 4010 <__TMC_END__>
    10a7:	48 8d 35 62 2f 00 00 	lea    rsi,[rip+0x2f62]        # 4010 <__TMC_END__>
    10ae:	48 29 fe             	sub    rsi,rdi
    10b1:	48 89 f0             	mov    rax,rsi
    10b4:	48 c1 ee 3f          	shr    rsi,0x3f
    10b8:	48 c1 f8 03          	sar    rax,0x3
    10bc:	48 01 c6             	add    rsi,rax
    10bf:	48 d1 fe             	sar    rsi,1
    10c2:	74 14                	je     10d8 <register_tm_clones+0x38>
    10c4:	48 8b 05 25 2f 00 00 	mov    rax,QWORD PTR [rip+0x2f25]        # 3ff0 <_ITM_registerTMCloneTable>
    10cb:	48 85 c0             	test   rax,rax
    10ce:	74 08                	je     10d8 <register_tm_clones+0x38>
    10d0:	ff e0                	jmp    rax
    10d2:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    10d8:	c3                   	ret    
    10d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000010e0 <__do_global_dtors_aux>:
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	80 3d 25 2f 00 00 00 	cmp    BYTE PTR [rip+0x2f25],0x0        # 4010 <__TMC_END__>
    10eb:	75 2b                	jne    1118 <__do_global_dtors_aux+0x38>
    10ed:	55                   	push   rbp
    10ee:	48 83 3d 02 2f 00 00 	cmp    QWORD PTR [rip+0x2f02],0x0        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    10f5:	00 
    10f6:	48 89 e5             	mov    rbp,rsp
    10f9:	74 0c                	je     1107 <__do_global_dtors_aux+0x27>
    10fb:	48 8b 3d 06 2f 00 00 	mov    rdi,QWORD PTR [rip+0x2f06]        # 4008 <__dso_handle>
    1102:	e8 29 ff ff ff       	call   1030 <__cxa_finalize@plt>
    1107:	e8 64 ff ff ff       	call   1070 <deregister_tm_clones>
    110c:	c6 05 fd 2e 00 00 01 	mov    BYTE PTR [rip+0x2efd],0x1        # 4010 <__TMC_END__>
    1113:	5d                   	pop    rbp
    1114:	c3                   	ret    
    1115:	0f 1f 00             	nop    DWORD PTR [rax]
    1118:	c3                   	ret    
    1119:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001120 <frame_dummy>:
    1120:	f3 0f 1e fa          	endbr64 
    1124:	e9 77 ff ff ff       	jmp    10a0 <register_tm_clones>

0000000000001129 <main>:
    1129:	f3 0f 1e fa          	endbr64 
    112d:	55                   	push   rbp
    112e:	48 89 e5             	mov    rbp,rsp
    1131:	c7 45 fc 11 00 00 00 	mov    DWORD PTR [rbp-0x4],0x11
    1138:	b8 00 00 00 00       	mov    eax,0x0
    113d:	5d                   	pop    rbp
    113e:	c3                   	ret    
    113f:	90                   	nop

0000000000001140 <__libc_csu_init>:
    1140:	f3 0f 1e fa          	endbr64 
    1144:	41 57                	push   r15
    1146:	4c 8d 3d a3 2c 00 00 	lea    r15,[rip+0x2ca3]        # 3df0 <__frame_dummy_init_array_entry>
    114d:	41 56                	push   r14
    114f:	49 89 d6             	mov    r14,rdx
    1152:	41 55                	push   r13
    1154:	49 89 f5             	mov    r13,rsi
    1157:	41 54                	push   r12
    1159:	41 89 fc             	mov    r12d,edi
    115c:	55                   	push   rbp
    115d:	48 8d 2d 94 2c 00 00 	lea    rbp,[rip+0x2c94]        # 3df8 <__do_global_dtors_aux_fini_array_entry>
    1164:	53                   	push   rbx
    1165:	4c 29 fd             	sub    rbp,r15
    1168:	48 83 ec 08          	sub    rsp,0x8
    116c:	e8 8f fe ff ff       	call   1000 <_init>
    1171:	48 c1 fd 03          	sar    rbp,0x3
    1175:	74 1f                	je     1196 <__libc_csu_init+0x56>
    1177:	31 db                	xor    ebx,ebx
    1179:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1180:	4c 89 f2             	mov    rdx,r14
    1183:	4c 89 ee             	mov    rsi,r13
    1186:	44 89 e7             	mov    edi,r12d
    1189:	41 ff 14 df          	call   QWORD PTR [r15+rbx*8]
    118d:	48 83 c3 01          	add    rbx,0x1
    1191:	48 39 dd             	cmp    rbp,rbx
    1194:	75 ea                	jne    1180 <__libc_csu_init+0x40>
    1196:	48 83 c4 08          	add    rsp,0x8
    119a:	5b                   	pop    rbx
    119b:	5d                   	pop    rbp
    119c:	41 5c                	pop    r12
    119e:	41 5d                	pop    r13
    11a0:	41 5e                	pop    r14
    11a2:	41 5f                	pop    r15
    11a4:	c3                   	ret    
    11a5:	66 66 2e 0f 1f 84 00 	data16 nop WORD PTR cs:[rax+rax*1+0x0]
    11ac:	00 00 00 00 

00000000000011b0 <__libc_csu_fini>:
    11b0:	f3 0f 1e fa          	endbr64 
    11b4:	c3                   	ret    

Disassembly of section .fini:

00000000000011b8 <_fini>:
    11b8:	f3 0f 1e fa          	endbr64 
    11bc:	48 83 ec 08          	sub    rsp,0x8
    11c0:	48 83 c4 08          	add    rsp,0x8
    11c4:	c3                   	ret    
