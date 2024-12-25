proc main (uint64 a0, uint64 a1, uint64 a2, uint64 a3,
uint64 b0, uint64 b1, uint64 b2, uint64 b3,
uint64 m0, uint64 m1, uint64 m2, uint64 m3) =
{
  true
&&
and [ m0 = 0xffffffffffffffff@64, m1 = 0x00000000ffffffff@64,
m2 = 0x0000000000000000@64, m3 = 0xffffffff00000001@64,
limbs 64 [a0, a1, a2, a3] <u limbs 64 [m0, m1, m2, m3],
limbs 64 [b0, b1, b2, b3] <u limbs 64 [m0, m1, m2, m3]
]
}

mov L0x7fffffffd830 a0; mov L0x7fffffffd838 a1;
mov L0x7fffffffd840 a2; mov L0x7fffffffd848 a3;
mov L0x7fffffffd850 b0; mov L0x7fffffffd858 b1;
mov L0x7fffffffd860 b2; mov L0x7fffffffd868 b3;
mov L0x555555580000 0xffffffffffffffff@uint64;
mov L0x555555580008 0x00000000ffffffff@uint64;
mov L0x555555580010 0x0000000000000000@uint64;
mov L0x555555580018 0xffffffff00000001@uint64;


(* mov    (%rsi),%r8                               #! EA = L0x7fffffffd830; Value = 0x0000000000000000; PC = 0x555555555424 *)
mov r8 L0x7fffffffd830;
(* xor    %r13,%r13                                #! PC = 0x555555555427 *)
mov r13 0@uint64;
(* mov    0x8(%rsi),%r9                            #! EA = L0x7fffffffd838; Value = 0x0000000000000000; PC = 0x55555555542a *)
mov r9 L0x7fffffffd838;
(* mov    0x10(%rsi),%r10                          #! EA = L0x7fffffffd840; Value = 0x0000000000000000; PC = 0x55555555542e *)
mov r10 L0x7fffffffd840;
(* mov    0x18(%rsi),%r11                          #! EA = L0x7fffffffd848; Value = 0x0000000000000000; PC = 0x555555555432 *)
mov r11 L0x7fffffffd848;
(* lea    0x2abc3(%rip),%rsi        # 0x555555580000#! PC = 0x555555555436 *)
mov rsi L0x555555580000;
(* add    (%rdx),%r8                               #! EA = L0x7fffffffd850; Value = 0x0000000000000000; PC = 0x55555555543d *)
adds carry r8 r8 L0x7fffffffd850;
(* adc    0x8(%rdx),%r9                            #! EA = L0x7fffffffd858; Value = 0x0000000000000000; PC = 0x555555555440 *)
adcs carry r9 r9 L0x7fffffffd858 carry;
(* mov    %r8,%rax                                 #! PC = 0x555555555444 *)
mov rax r8;
(* adc    0x10(%rdx),%r10                          #! EA = L0x7fffffffd860; Value = 0x0000000000000000; PC = 0x555555555447 *)
adcs carry r10 r10 L0x7fffffffd860 carry;
(* adc    0x18(%rdx),%r11                          #! EA = L0x7fffffffd868; Value = 0x0000000000000000; PC = 0x55555555544b *)
adcs carry r11 r11 L0x7fffffffd868 carry;
(* mov    %r9,%rdx                                 #! PC = 0x55555555544f *)
mov rdx r9;
(* adc    $0x0,%r13                                #! PC = 0x555555555452 *)
adc r13 r13 0@uint64 carry;
(* sub    (%rsi),%r8                               #! EA = L0x555555580000; Value = 0xffffffffffffffff; PC = 0x555555555456 *)
subb carry r8 r8 L0x555555580000;
(* mov    %r10,%rcx                                #! PC = 0x555555555459 *)
mov rcx r10;
(* sbb    0x8(%rsi),%r9                            #! EA = L0x555555580008; Value = 0x00000000ffffffff; PC = 0x55555555545c *)
sbbs carry r9 r9 L0x555555580008 carry;
(* sbb    0x10(%rsi),%r10                          #! EA = L0x555555580010; Value = 0x0000000000000000; PC = 0x555555555460 *)
sbbs carry r10 r10 L0x555555580010 carry;
(* mov    %r11,%r12                                #! PC = 0x555555555464 *)
mov r12 r11;
(* sbb    0x18(%rsi),%r11                          #! EA = L0x555555580018; Value = 0xffffffff00000001; PC = 0x555555555467 *)
sbbs carry r11 r11 L0x555555580018 carry;
(* sbb    $0x0,%r13                                #! PC = 0x55555555546b *)
sbbs carry r13 r13 0@uint64 carry;
(* cmovb  %rax,%r8                                 #! PC = 0x55555555546f *)
cmov r8 carry rax r8;
(* cmovb  %rdx,%r9                                 #! PC = 0x555555555473 *)
cmov r9 carry rdx r9;
(* mov    %r8,(%rdi)                               #! EA = L0x7fffffffd870; PC = 0x555555555477 *)
mov L0x7fffffffd870 r8;
(* cmovb  %rcx,%r10                                #! PC = 0x55555555547a *)
cmov r10 carry rcx r10;
(* mov    %r9,0x8(%rdi)                            #! EA = L0x7fffffffd878; PC = 0x55555555547e *)
mov L0x7fffffffd878 r9;
(* cmovb  %r12,%r11                                #! PC = 0x555555555482 *)
cmov r11 carry r12 r11;
(* mov    %r10,0x10(%rdi)                          #! EA = L0x7fffffffd880; PC = 0x555555555486 *)
mov L0x7fffffffd880 r10;
(* mov    %r11,0x18(%rdi)                          #! EA = L0x7fffffffd888; PC = 0x55555555548a *)
mov L0x7fffffffd888 r11;
(* mov    (%rsp),%r13                              #! EA = L0x7fffffffd818; Value = 0x0000555555555169; PC = 0x55555555548e *)
# mov    (%rsp),%%r13                              #! L0x7fffffffd818 = L0x7fffffffd818; 0x0000555555555169 = 0x0000555555555169; 0x55555555548e = 0x55555555548e;
(* mov    0x8(%rsp),%r12                           #! EA = L0x7fffffffd820; Value = 0x00007fffffffd9b8; PC = 0x555555555492 *)
# mov    0x8(%rsp),%%r12                           #! L0x7fffffffd820 = L0x7fffffffd820; 0x00007fffffffd9b8 = 0x00007fffffffd9b8; 0x555555555492 = 0x555555555492;
(* lea    0x10(%rsp),%rsp                          #! PC = 0x555555555497 *)
# lea    0x10(%rsp),%rsp                          #! 0x555555555497 = 0x555555555497;
(* #! <- SP = 0x7fffffffd828 *)
#! 0x7fffffffd828 = 0x7fffffffd828;
(* #repz ret                                       #! PC = 0x55555555549c *)
#repz ret                                       #! 0x55555555549c = 0x55555555549c;


mov c0 L0x7fffffffd870; mov c1 L0x7fffffffd878;
mov c2 L0x7fffffffd880; mov c3 L0x7fffffffd888;


{
  true
  &&
 and [ eqmod (limbs 64 [c0, c1, c2, c3, 0@64])
((limbs 64 [a0, a1, a2, a3, 0@64]) +
(limbs 64 [b0, b1, b2, b3, 0@64]))
(limbs 64 [m0, m1, m2, m3, 0@64]),
(limbs 64 [c0, c1, c2, c3] <u limbs 64 [m0, m1, m2, m3]) ]
}

