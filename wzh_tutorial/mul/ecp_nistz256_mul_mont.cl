proc main(uint64 a0, uint64 a1, uint64 a2, uint64 a3, uint64 b0, uint64 b1, uint64 b2, uint64 b3, uint64 m0, uint64 m1, uint64 m2, uint64 m3) = 
{
  and [ m0 = 0xffffffffffffffff, m1 = 0x00000000ffffffff,
    m2 = 0x0000000000000000, m3 = 0xffffffff00000001 
    ]
&&
  and [ m0 = 0xffffffffffffffff@64, m1 = 0x00000000ffffffff@64,
    m2 = 0x0000000000000000@64, m3 = 0xffffffff00000001@64,
    limbs 64 [a0, a1, a2, a3] <u limbs 64 [m0, m1, m2, m3],
    limbs 64 [b0, b1, b2, b3] <u limbs 64 [m0, m1, m2, m3]
  ]
} 

mov L0x7fffffffd860 a0; mov L0x7fffffffd868 a1;
mov L0x7fffffffd870 a2; mov L0x7fffffffd878 a3;
mov L0x7fffffffd880 b0; mov L0x7fffffffd888 b1;
mov L0x7fffffffd890 b2; mov L0x7fffffffd898 b3;
mov L0x555555580008 0xffffffffffffffff@uint64;
mov L0x555555580010 0x00000000ffffffff@uint64;
mov L0x555555580018 0x0000000000000000@uint64;
mov L0x555555580020 0xffffffff00000001@uint64;
mov L0x7fffffffd828 0xffffffffffffffff@uint64;
mov L0x7fffffffd830 0xffffffffffffffff@uint64;
mov L0x7fffffffd838 0xffffffffffffffff@uint64;
mov L0x7fffffffd840 0xffffffffffffffff@uint64;
mov L0x7fffffffd848 0xffffffffffffffff@uint64;
mov L0x7fffffffd850 0xffffffffffffffff@uint64;


(* #! -> SP = 0x7fffffffd858 *)
#! 0x7fffffffd858 = 0x7fffffffd858;
(* mov    $0x80100,%ecx                            #! PC = 0x5555555562e0 *)
mov ecx 0x80100@uint64;
(* mov    (%rdx),%rdx                              #! EA = L0x7fffffffd880; Value = 0x0000000000000000; PC = 0x555555556323 *)
mov rdx L0x7fffffffd880;
(* mov    (%rsi),%r9                               #! EA = L0x7fffffffd860; Value = 0x0000000000000000; PC = 0x555555556326 *)
mov r9 L0x7fffffffd860;
(* mov    0x8(%rsi),%r10                           #! EA = L0x7fffffffd868; Value = 0x0000000000000000; PC = 0x555555556329 *)
mov r10 L0x7fffffffd868;
(* mov    0x10(%rsi),%r11                          #! EA = L0x7fffffffd870; Value = 0x0000000000000000; PC = 0x55555555632d *)
mov r11 L0x7fffffffd870;
(* mov    0x18(%rsi),%r12                          #! EA = L0x7fffffffd878; Value = 0x0000000000000000; PC = 0x555555556331 *)
mov r12 L0x7fffffffd878;
(* #call   0x555555556800 <__ecp_nistz256_mul_montx>#! PC = 0x555555556339 *)
#call   0x555555556800 <__ecp_nistz256_mul_montx>#! 0x555555556339 = 0x555555556339;
(* #! -> SP = 0x7fffffffd820 *)
#! 0x7fffffffd820 = 0x7fffffffd820;
(* mulx   %r9,%r8,%r9                              #! PC = 0x555555556800 *)
mull r9 r8 rdx r9;
(* mulx   %r10,%rcx,%r10                           #! PC = 0x555555556805 *)
mull r10 rcx rdx r10;
(* mov    $0x20,%r14                               #! PC = 0x55555555680a *)
mov r14 0x20@uint64;
(* xor    %r13,%r13                                #! PC = 0x555555556811 *)
mov r13 0@uint64;
clear carry;
clear overflow;
(* mulx   %r11,%rbp,%r11                           #! PC = 0x555555556814 *)
mull r11 rbp rdx r11;
(* mov    0x297f8(%rip),%r15        # 0x555555580018#! EA = L0x555555580018; Value = 0xffffffff00000001; PC = 0x555555556819 *)
mov r15 L0x555555580018;
(* adc    %rcx,%r9                                 #! PC = 0x555555556820 *)
adcs carry r9 r9 rcx carry;
(* mulx   %r12,%rcx,%r12                           #! PC = 0x555555556823 *)
mull r12 rcx rdx r12;
(* mov    %r8,%rdx                                 #! PC = 0x555555556828 *)
mov rdx r8;
(* adc    %rbp,%r10                                #! PC = 0x55555555682b *)
adcs carry r10 r10 rbp carry;
(* shlx   %r14,%r8,%rbp                            #! PC = 0x55555555682e *)
assert r14=32 && true;
split ddc rbp r8 32;
shl rbp rbp 32;
(* adc    %rcx,%r11                                #! PC = 0x555555556833 *)
adcs carry r11 r11 rcx carry;
(* shrx   %r14,%r8,%rcx                            #! PC = 0x555555556836 *)
assert r14=32 && true; 
split rcx dc r8 32; 
assert true && rcx=ddc; 
assume rcx=ddc && true;
(* adc    $0x0,%r12                                #! PC = 0x55555555683b *)
adc r12 r12 0x0@uint64 carry;
(* add    %rbp,%r9                                 #! PC = 0x55555555683f *)
adds carry r9 r9 rbp;
(* adc    %rcx,%r10                                #! PC = 0x555555556842 *)
adcs carry r10 r10 rcx carry;
(* mulx   %r15,%rcx,%rbp                           #! PC = 0x555555556845 *)
mull rbp rcx rdx r15;
(* mov    0x8(%rbx),%rdx                           #! EA = L0x7fffffffd888; Value = 0x0000000000000000; PC = 0x55555555684a *)
mov rdx L0x7fffffffd888;
(* adc    %rcx,%r11                                #! PC = 0x55555555684e *)
adcs carry r11 r11 rcx carry;
(* adc    %rbp,%r12                                #! PC = 0x555555556851 *)
adcs carry r12 r12 rbp carry;
(* adc    $0x0,%r13                                #! PC = 0x555555556854 *)
adc r13 r13 0x0@uint64 carry;
(* xor    %r8,%r8                                  #! PC = 0x555555556858 *)
mov r8 0@uint64;
clear carry;
clear overflow;
(* mulx   0x80(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd860; Value = 0x0000000000000000; PC = 0x55555555685b *)
mull rbp rcx rdx L0x7fffffffd860;
(* adcx   %rcx,%r9                                 #! PC = 0x555555556864 *)
adcs carry r9 r9 rcx carry;
(* adox   %rbp,%r10                                #! PC = 0x55555555686a *)
adcs overflow r10 r10 rbp overflow;
(* mulx   0x88(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd868; Value = 0x0000000000000000; PC = 0x555555556870 *)
mull rbp rcx rdx L0x7fffffffd868;
(* adcx   %rcx,%r10                                #! PC = 0x555555556879 *)
adcs carry r10 r10 rcx carry;
(* adox   %rbp,%r11                                #! PC = 0x55555555687f *)
adcs overflow r11 r11 rbp overflow;
(* mulx   0x90(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd870; Value = 0x0000000000000000; PC = 0x555555556885 *)
mull rbp rcx rdx L0x7fffffffd870;
(* adcx   %rcx,%r11                                #! PC = 0x55555555688e *)
adcs carry r11 r11 rcx carry;
(* adox   %rbp,%r12                                #! PC = 0x555555556894 *)
adcs overflow r12 r12 rbp overflow;
(* mulx   0x98(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd878; Value = 0x0000000000000000; PC = 0x55555555689a *)
mull rbp rcx rdx L0x7fffffffd878;
(* mov    %r9,%rdx                                 #! PC = 0x5555555568a3 *)
mov rdx r9;
(* adcx   %rcx,%r12                                #! PC = 0x5555555568a6 *)
adcs carry r12 r12 rcx carry;
(* shlx   %r14,%r9,%rcx                            #! PC = 0x5555555568ac *)
assert r14=32 && true;
split ddc rcx r9 32;
shl rcx rcx 32;
(* adox   %rbp,%r13                                #! PC = 0x5555555568b1 *)
adcs overflow r13 r13 rbp overflow;
(* shrx   %r14,%r9,%rbp                            #! PC = 0x5555555568b7 *)
assert r14=32 && true; 
split rbp dc r9 32; 
assert true && rbp=ddc; 
assume rbp=ddc && true;
(* adcx   %r8,%r13                                 #! PC = 0x5555555568bc *)
adcs carry r13 r13 r8 carry;
(* adox   %r8,%r8                                  #! PC = 0x5555555568c2 *)
adcs overflow r8 r8 r8 overflow;
(* adc    $0x0,%r8                                 #! PC = 0x5555555568c8 *)
adc r8 r8 0x0@uint64 carry;
(* add    %rcx,%r10                                #! PC = 0x5555555568cc *)
adds carry r10 r10 rcx;
(* adc    %rbp,%r11                                #! PC = 0x5555555568cf *)
adcs carry r11 r11 rbp carry;
(* mulx   %r15,%rcx,%rbp                           #! PC = 0x5555555568d2 *)
mull rbp rcx rdx r15;
(* mov    0x10(%rbx),%rdx                          #! EA = L0x7fffffffd890; Value = 0x0000000000000000; PC = 0x5555555568d7 *)
mov rdx L0x7fffffffd890;
(* adc    %rcx,%r12                                #! PC = 0x5555555568db *)
adcs carry r12 r12 rcx carry;
(* adc    %rbp,%r13                                #! PC = 0x5555555568de *)
adcs carry r13 r13 rbp carry;
(* adc    $0x0,%r8                                 #! PC = 0x5555555568e1 *)
adc r8 r8 0x0@uint64 carry;
(* xor    %r9,%r9                                  #! PC = 0x5555555568e5 *)
mov r9 0@uint64;
clear carry;
clear overflow;
(* mulx   0x80(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd860; Value = 0x0000000000000000; PC = 0x5555555568e8 *)
mull rbp rcx rdx L0x7fffffffd860;
(* adcx   %rcx,%r10                                #! PC = 0x5555555568f1 *)
adcs carry r10 r10 rcx carry;
(* adox   %rbp,%r11                                #! PC = 0x5555555568f7 *)
adcs overflow r11 r11 rbp overflow;
(* mulx   0x88(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd868; Value = 0x0000000000000000; PC = 0x5555555568fd *)
mull rbp rcx rdx L0x7fffffffd868;
(* adcx   %rcx,%r11                                #! PC = 0x555555556906 *)
adcs carry r11 r11 rcx carry;
(* adox   %rbp,%r12                                #! PC = 0x55555555690c *)
adcs overflow r12 r12 rbp overflow;
(* mulx   0x90(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd870; Value = 0x0000000000000000; PC = 0x555555556912 *)
mull rbp rcx rdx L0x7fffffffd870;
(* adcx   %rcx,%r12                                #! PC = 0x55555555691b *)
adcs carry r12 r12 rcx carry;
(* adox   %rbp,%r13                                #! PC = 0x555555556921 *)
adcs overflow r13 r13 rbp overflow;
(* mulx   0x98(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd878; Value = 0x0000000000000000; PC = 0x555555556927 *)
mull rbp rcx rdx L0x7fffffffd878;
(* mov    %r10,%rdx                                #! PC = 0x555555556930 *)
mov rdx r10;
(* adcx   %rcx,%r13                                #! PC = 0x555555556933 *)
adcs carry r13 r13 rcx carry;
(* shlx   %r14,%r10,%rcx                           #! PC = 0x555555556939 *)
assert r14=32 && true;
split ddc rcx r10 32;
shl rcx rcx 32;
(* adox   %rbp,%r8                                 #! PC = 0x55555555693e *)
adcs overflow r8 r8 rbp overflow;
(* shrx   %r14,%r10,%rbp                           #! PC = 0x555555556944 *)
assert r14=32 && true; 
split rbp dc r10 32; 
assert true && rbp=ddc; 
assume rbp=ddc && true;
(* adcx   %r9,%r8                                  #! PC = 0x555555556949 *)
adcs carry r8 r8 r9 carry;
(* adox   %r9,%r9                                  #! PC = 0x55555555694f *)
adcs overflow r9 r9 r9 overflow;
(* adc    $0x0,%r9                                 #! PC = 0x555555556955 *)
adc r9 r9 0x0@uint64 carry;
(* add    %rcx,%r11                                #! PC = 0x555555556959 *)
adds carry r11 r11 rcx;
(* adc    %rbp,%r12                                #! PC = 0x55555555695c *)
adcs carry r12 r12 rbp carry;
(* mulx   %r15,%rcx,%rbp                           #! PC = 0x55555555695f *)
mull rbp rcx rdx r15;
(* mov    0x18(%rbx),%rdx                          #! EA = L0x7fffffffd898; Value = 0x0000000000000000; PC = 0x555555556964 *)
mov rdx L0x7fffffffd898;
(* adc    %rcx,%r13                                #! PC = 0x555555556968 *)
adcs carry r13 r13 rcx carry;
(* adc    %rbp,%r8                                 #! PC = 0x55555555696b *)
adcs carry r8 r8 rbp carry;
(* adc    $0x0,%r9                                 #! PC = 0x55555555696e *)
adc r9 r9 0x0@uint64 carry;
(* xor    %r10,%r10                                #! PC = 0x555555556972 *)
mov r10 0@uint64;
clear carry;
clear overflow;
(* mulx   0x80(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd860; Value = 0x0000000000000000; PC = 0x555555556975 *)
mull rbp rcx rdx L0x7fffffffd860;
(* adcx   %rcx,%r11                                #! PC = 0x55555555697e *)
adcs carry r11 r11 rcx carry;
(* adox   %rbp,%r12                                #! PC = 0x555555556984 *)
adcs overflow r12 r12 rbp overflow;
(* mulx   0x88(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd868; Value = 0x0000000000000000; PC = 0x55555555698a *)
mull rbp rcx rdx L0x7fffffffd868;
(* adcx   %rcx,%r12                                #! PC = 0x555555556993 *)
adcs carry r12 r12 rcx carry;
(* adox   %rbp,%r13                                #! PC = 0x555555556999 *)
adcs overflow r13 r13 rbp overflow;
(* mulx   0x90(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd870; Value = 0x0000000000000000; PC = 0x55555555699f *)
mull rbp rcx rdx L0x7fffffffd870;
(* adcx   %rcx,%r13                                #! PC = 0x5555555569a8 *)
adcs carry r13 r13 rcx carry;
(* adox   %rbp,%r8                                 #! PC = 0x5555555569ae *)
adcs overflow r8 r8 rbp overflow;
(* mulx   0x98(%rsi),%rcx,%rbp                     #! EA = L0x7fffffffd878; Value = 0x0000000000000000; PC = 0x5555555569b4 *)
mull rbp rcx rdx L0x7fffffffd878;
(* mov    %r11,%rdx                                #! PC = 0x5555555569bd *)
mov rdx r11;
(* adcx   %rcx,%r8                                 #! PC = 0x5555555569c0 *)
adcs carry r8 r8 rcx carry;
(* shlx   %r14,%r11,%rcx                           #! PC = 0x5555555569c6 *)
assert r14=32 && true;
split ddc rcx r11 32;
shl rcx rcx 32;
(* adox   %rbp,%r9                                 #! PC = 0x5555555569cb *)
adcs overflow r9 r9 rbp overflow;
(* shrx   %r14,%r11,%rbp                           #! PC = 0x5555555569d1 *)
assert r14=32 && true; 
split rbp dc r11 32; 
assert true && rbp=ddc; 
assume rbp=ddc && true;
(* adcx   %r10,%r9                                 #! PC = 0x5555555569d6 *)
adcs carry r9 r9 r10 carry;
(* adox   %r10,%r10                                #! PC = 0x5555555569dc *)
adcs overflow r10 r10 r10 overflow;
(* adc    $0x0,%r10                                #! PC = 0x5555555569e2 *)
adc r10 r10 0x0@uint64 carry;
(* add    %rcx,%r12                                #! PC = 0x5555555569e6 *)
adds carry r12 r12 rcx;
(* adc    %rbp,%r13                                #! PC = 0x5555555569e9 *)
adcs carry r13 r13 rbp carry;
(* mulx   %r15,%rcx,%rbp                           #! PC = 0x5555555569ec *)
mull rbp rcx rdx r15;
(* mov    %r12,%rbx                                #! PC = 0x5555555569f1 *)
mov rbx r12;
(* mov    0x2960d(%rip),%r14        # 0x555555580008#! EA = L0x555555580008; Value = 0x00000000ffffffff; PC = 0x5555555569f4 *)
mov r14 L0x555555580008;
(* adc    %rcx,%r8                                 #! PC = 0x5555555569fb *)
adcs carry r8 r8 rcx carry;
(* mov    %r13,%rdx                                #! PC = 0x5555555569fe *)
mov rdx r13;
(* adc    %rbp,%r9                                 #! PC = 0x555555556a01 *)
adcs carry r9 r9 rbp carry;
(* adc    $0x0,%r10                                #! PC = 0x555555556a04 *)
adc r10 r10 0x0@uint64 carry;
(* xor    %eax,%eax                                #! PC = 0x555555556a08 *)
mov eax 0@uint64;
clear carry;
clear overflow;
(* mov    %r8,%rcx                                 #! PC = 0x555555556a0a *)
mov rcx r8;
(* sbb    $0xffffffffffffffff,%r12                 #! PC = 0x555555556a0d *)
sbbs carry r12 r12 0xffffffffffffffff@uint64 carry;
(* sbb    %r14,%r13                                #! PC = 0x555555556a11 *)
sbbs carry r13 r13 r14 carry;
(* sbb    $0x0,%r8                                 #! PC = 0x555555556a14 *)
sbbs carry r8 r8 0x0@uint64 carry;
(* mov    %r9,%rbp                                 #! PC = 0x555555556a18 *)
mov rbp r9;
(* sbb    %r15,%r9                                 #! PC = 0x555555556a1b *)
sbbs carry r9 r9 r15 carry;
(* sbb    $0x0,%r10                                #! PC = 0x555555556a1e *)
sbbs carry r10 r10 0x0@uint64 carry;
(* cmovb  %rbx,%r12                                #! PC = 0x555555556a22 *)
cmov r12 carry rbx r12;
(* cmovb  %rdx,%r13                                #! PC = 0x555555556a26 *)
cmov r13 carry rdx r13;
(* mov    %r12,(%rdi)                              #! EA = L0x7fffffffd8a0; PC = 0x555555556a2a *)
mov L0x7fffffffd8a0 r12;
(* cmovb  %rcx,%r8                                 #! PC = 0x555555556a2d *)
cmov r8 carry rcx r8;
(* mov    %r13,0x8(%rdi)                           #! EA = L0x7fffffffd8a8; PC = 0x555555556a31 *)
mov L0x7fffffffd8a8 r13;
(* cmovb  %rbp,%r9                                 #! PC = 0x555555556a35 *)
cmov r9 carry rbp r9;
(* mov    %r8,0x10(%rdi)                           #! EA = L0x7fffffffd8b0; PC = 0x555555556a39 *)
mov L0x7fffffffd8b0 r8;
(* mov    %r9,0x18(%rdi)                           #! EA = L0x7fffffffd8b8; PC = 0x555555556a3d *)
mov L0x7fffffffd8b8 r9;
(* #! <- SP = 0x7fffffffd820 *)
#! 0x7fffffffd820 = 0x7fffffffd820;
(* #repz ret                                       #! PC = 0x555555556a41 *)
#repz ret                                       #! 0x555555556a41 = 0x555555556a41;
(* mov    (%rsp),%r15                              #! EA = L0x7fffffffd828; Value = 0x00007ffff7ffd040; PC = 0x55555555633e *)
mov r15 L0x7fffffffd828;
(* mov    0x8(%rsp),%r14                           #! EA = L0x7fffffffd830; Value = 0x0000555555581db8; PC = 0x555555556342 *)
mov r14 L0x7fffffffd830;
(* mov    0x10(%rsp),%r13                          #! EA = L0x7fffffffd838; Value = 0x0000555555555169; PC = 0x555555556347 *)
mov r13 L0x7fffffffd838;
(* mov    0x18(%rsp),%r12                          #! EA = L0x7fffffffd840; Value = 0x00007fffffffd9e8; PC = 0x55555555634c *)
mov r12 L0x7fffffffd840;
(* mov    0x20(%rsp),%rbx                          #! EA = L0x7fffffffd848; Value = 0x0000000000000000; PC = 0x555555556351 *)
mov rbx L0x7fffffffd848;
(* mov    0x28(%rsp),%rbp                          #! EA = L0x7fffffffd850; Value = 0x00007fffffffd8d0; PC = 0x555555556356 *)
mov rbp L0x7fffffffd850;
(* #! <- SP = 0x7fffffffd858 *)
#! 0x7fffffffd858 = 0x7fffffffd858;
(* #repz ret                                       #! PC = 0x555555556360 *)
#repz ret                                       #! 0x555555556360 = 0x555555556360;

mov c0 L0x7fffffffd8a0; mov c1 L0x7fffffffd8a8;
mov c2 L0x7fffffffd8b0; mov c3 L0x7fffffffd8b8;

assert true && and [carry=0@1,overflow=0@1];
assume and [carry=0,overflow=0] && true;

ghost r12o@uint64, r13o@uint64, r8o@uint64, r9o@uint64, r10o@uint64 :
and [r12o=r12, r13o=r13, r8o=r8, r9o=r9, r10o=r10]
&& and [r12o=r12, r13o=r13, r8o=r8, r9o=r9, r10o=r10];

assert true && eqmod (limbs 64 [r12, r13, r8, r9, 0@64])
(limbs 64 [r12o, r13o, r8o, r9o, r10o])
(limbs 64 [m0, m1, m2, m3, 0@64]);

assume eqmod (limbs 64 [r12, r13, r8, r9, 0])
(limbs 64 [r12o, r13o, r8o, r9o, r10o])
(limbs 64 [m0, m1, m2, m3, 0]) && true;


{
  eqmod (limbs 64 [0, 0, 0, 0, c0, c1, c2, c3])
  (limbs 64 [a0, a1, a2, a3] * limbs 64 [b0, b1, b2, b3])
  (limbs 64 [m0, m1, m2, m3])
  &&
  limbs 64 [c0, c1, c2, c3] <u limbs 64 [m0, m1, m2, m3]
}
