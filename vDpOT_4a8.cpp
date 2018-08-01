/ (fcn) sub.vDpOT_4a8 236
|   sub.vDpOT_4a8 (int arg3, int arg4);
|           ; var int local_0h @ sp+0x0
|           ; arg int arg3 @ r2
|           ; arg int arg4 @ r3
|           ; CALL XREF from 0x0003883a (sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit)
|           0x0003d4a8      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|       ,=< 0x0003d4aa      5fd0           beq 0x3d56c                 ; pc=0x3d56c -> 0x3a044770 ; likely
|       |   0x0003d4ac      2de9f043       push.w {r4, r5, r6, r7, r8, sb, lr} ; sp=0xffffffffffffffe4
|       |   0x0003d4b0      85b0           sub sp, 0x14                ; sp=0xffffffd0
|       |   0x0003d4b2      0df10808       add.w r8, sp, 8             ; r8=0xffffffd8
|       |   0x0003d4b6      3749           ldr r1, aav.0x00131906      ; [0x3d594:4]=0x131906 aav.0x00131906 ; r1=0x131906 -> 0x75437503
|       |   0x0003d4b8      0446           mov r4, r0                  ; r4=0x0
|       |   0x0003d4ba      03a8           add r0, sp, 0xc             ; const char *s ; r0=0xffffffdc -> 0x464c457f
|       |   0x0003d4bc      4246           mov r2, r8                  ; r2=0xffffffd8
|       |   0x0003d4be      7944           add r1, pc                  ; r1=0x16edc8 "com/nianticlabs/pokemongoplus/SfidaService" str.com_nianticlabs_pokemongoplus_SfidaService
|       |   0x0003d4c0      16f1ccfe       bl sub.strlen_25c           ; lr=0x3d4c8 -> 0xf0054d33 ; pc=0x15425c -> 0x460cb570
|       |   |                                                            ; size_t strlen(const char * s : 0xffffffdc =)
|       |   0x0003d4c4      0399           ldr r1, [sp, 0xc]           ; r1=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d4c6      2046           mov r0, r4                  ; 0x6c3d ; "vDpOT_" ; r0=0x0
|       |   0x0003d4c8      334d           ldr r5, aav.0x0013180e      ; [0x3d598:4]=0x13180e aav.0x0013180e ; r5=0x13180e -> 0x46206822
|       |   0x0003d4ca      05f0c1f8       bl aav.0x00042650           ; lr=0x3d4d2 "}D{D" ; pc=0x42650 -> 0x43f0e92d
|       |   0x0003d4ce      334b           ldr r3, aav.0x00131804      ; [0x3d59c:4]=0x131804 aav.0x00131804 ; r3=0x131804 -> 0x471841f0
|       |   0x0003d4d0      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d4d2      7d44           add r5, pc                  ; r5=0x16ece4 "()Ljava/lang/String;" str.Ljava_lang_String
|       |   0x0003d4d4      7b44           add r3, pc                  ; r3=0x16ecdc "getUuid" str.getUuid
|       |   0x0003d4d6      0095           str r5, [sp]
|       |   0x0003d4d8      dff8c490       ldr.w sb, aav.0x0014f066    ; [0x3d5a0:4]=0x14f066 aav.0x0014f066 ; sb=0x14f066 -> 0xbf151c41
|       |   0x0003d4dc      314d           ldr r5, aav.0x0013191a      ; [0x3d5a4:4]=0x13191a aav.0x0013191a ; r5=0x13191a -> 0x682247a8
|       |   0x0003d4de      f944           add sb, pc                  ; sb=0x18c548 -> 0x464c457f
|       |   0x0003d4e0      314f           ldr r7, aav.0x00131938      ; [0x3d5a8:4]=0x131938 aav.0x00131938 ; r7=0x131938 -> 0xbfb8d006
|       |   0x0003d4e2      7d44           add r5, pc                  ; r5=0x16ee00 "()Z" str.Z
|       |   0x0003d4e4      7f44           add r7, pc                  ; r7=0x16ee20 "getCharacteristic" str.getCharacteristic
|       |   0x0003d4e6      0646           mov r6, r0                  ; r6=0x0
|       |   0x0003d4e8      0146           mov r1, r0                  ; r1=0x0
|       |   0x0003d4ea      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d4ec      05f010fb       bl sub.Android_JNI:_Method_b10 ; lr=0x3d4f4 -> 0x9a034631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d4f0      2e4b           ldr r3, aav.0x001318f8      ; [0x3d5ac:4]=0x1318f8 aav.0x001318f8 ; r3=0x1318f8 -> 0x73837343
|       |   0x0003d4f2      0095           str r5, [sp]
|       |   0x0003d4f4      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d4f6      039a           ldr r2, [sp, 0xc]           ; 0x12e ; aav.0x0000012e ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d4f8      7b44           add r3, pc                  ; r3=0x16edf4 "isPrimary" str.isPrimary
|       |   0x0003d4fa      4d46           mov r5, sb                  ; r5=0x18c548 -> 0x464c457f
|       |   0x0003d4fc      c9f83800       str.w r0, [sb, 0x38]
|       |   0x0003d500      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d502      05f005fb       bl sub.Android_JNI:_Method_b10 ; lr=0x3d50a -> 0x46314b2a ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d506      dff8a8e0       ldr.w lr, aav.0x0013190a    ; [0x3d5b0:4]=0x13190a aav.0x0013190a ; lr=0x13190a -> 0x75c37583
|       |   0x0003d50a      2a4b           ldr r3, aav.0x001318ea      ; [0x3d5b4:4]=0x1318ea aav.0x001318ea ; r3=0x1318ea -> 0x447b69d5
|       |   0x0003d50c      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d50e      fe44           add lr, pc                  ; lr=0x16ee1c "()I"
|       |   0x0003d510      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d512      cdf800e0       str.w lr, [sp]
|       |   0x0003d516      7b44           add r3, pc                  ; r3=0x16ee04 "getCharacteristicCount" str.getCharacteristicCount
|       |   0x0003d518      c9f84000       str.w r0, [sb, 0x40]
|       |   0x0003d51c      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d51e      05f0f7fa       bl sub.Android_JNI:_Method_b10 ; lr=0x3d526 -> 0x46319a03 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d522      dff894e0       ldr.w lr, aav.0x00131906    ; [0x3d5b8:4]=0x131906 aav.0x00131906 ; lr=0x131906 -> 0x75437503
|       |   0x0003d526      039a           ldr r2, [sp, 0xc]           ; 0x99 ; case.0x13c99c.4 ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d528      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d52a      fe44           add lr, pc                  ; lr=0x16ee34 "(I)Lcom/nianticlabs/pokemongoplus/SfidaCharacteristic;" str.I_Lcom_nianticlabs_pokemongoplus_SfidaCharacteristic
|       |   0x0003d52c      3b46           mov r3, r7                  ; r3=0x16ee20 "getCharacteristic" str.getCharacteristic
|       |   0x0003d52e      cdf800e0       str.w lr, [sp]
|       |   0x0003d532      b946           mov sb, r7                  ; sb=0x16ee20 "getCharacteristic" str.getCharacteristic
|       |   0x0003d534      e863           str r0, [r5, 0x3c]
|       |   0x0003d536      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d538      05f0eafa       bl sub.Android_JNI:_Method_b10 ; lr=0x3d540 -> 0x46319a03 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d53c      dff87ce0       ldr.w lr, aav.0x00131924    ; [0x3d5bc:4]=0x131924 aav.0x00131924 ; lr=0x131924 -> 0x6c534070
|       |   0x0003d540      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d542      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d544      fe44           add lr, pc                  ; 0x16ee6c ; "(Ljava/lang/String;)Lcom/nianticlabs/pokemongoplus/SfidaCharacteristic;" ; lr=0x16ee6c -> 0x616a4c28 str.Ljava_lang_String__Lcom_nianticlabs_pokemongoplus_SfidaCharacteristic
|       |   0x0003d546      4b46           mov r3, sb                  ; r3=0x16ee20 "getCharacteristic" str.getCharacteristic
|       |   0x0003d548      cdf800e0       str.w lr, [sp]
|       |   0x0003d54c      6864           str r0, [r5, 0x44]
|       |   0x0003d54e      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d550      05f0defa       bl sub.Android_JNI:_Method_b10 ; lr=0x3d558 -> 0x10cf1a2 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d554      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d556      1a4b           ldr r3, aav.0x0014e3e0      ; [0x3d5c0:4]=0x14e3e0 aav.0x0014e3e0 ; r3=0x14e3e0 -> 0xb017980d
|       |   0x0003d558      a2f10c01       sub.w r1, r2, 0xc           ; r1=0x7ff0 "foPPvj"
|       |   0x0003d55c      7b44           add r3, pc                  ; 0x18b940 ; aav.0x0018b940 ; r3=0x18b940
|       |   0x0003d55e      1b68           ldr r3, [r3]                ; 0x18b940 ; aav.0x0018b940 ; arg4 ; r3=0x1953d4 -> 0x464c457f
|       |   0x0003d560      9942           cmp r1, r3                  ; zf=0x0 ; zf=0x0
|       |   0x0003d562      a864           str r0, [r5, 0x48]
|      ,==< 0x0003d564      03d1           bne 0x3d56e                 ; pc=0x3d56e -> 0xf3bf3a04 ; likely
|      ||   ; CODE XREF from 0x0003d588 (sub.vDpOT_4a8)
|      ||   ; CODE XREF from 0x0003d592 (sub.vDpOT_4a8)
|    ..---> 0x0003d566      05b0           add sp, 0x14                ; sp=0xffffffe8 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|    ::||   0x0003d568      bde8f083       pop.w {r4, r5, r6, r7, r8, sb, pc} ; pc=0x7ffc ; sb=0x1bfed8da ; r8=0x7fdd ; r7=0x20387730 ; r6=0x7fdd ; r5=0xff8069e0 ; r4=0xf3 -> 0x163a38 ; sp=0x100000004 -> 0xf5e616a0
|    ::||   ; CODE XREF from 0x0003d4aa (sub.vDpOT_4a8)
|    ::|`-> 0x0003d56c      7047           bx lr                       ; pc=0x3d558 -> 0x10cf1a2
|    ::|    ; CODE XREF from 0x0003d564 (sub.vDpOT_4a8)
|    ::`--> 0x0003d56e      043a           subs r2, 4                  ; r2=0x7ff8 "ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_k" ; zf=0x0
|    ::     0x0003d570      bff35f8f       dmb sy
|    ::     ; CODE XREF from 0x0003d580 (sub.vDpOT_4a8)
|    :: .-> 0x0003d574      52e8003f       ldrex r3, [r2]              ; arg3
|    :: :   0x0003d578      581e           subs r0, r3, 1              ; r0=0x1953d3 -> 0x464c457f ; zf=0x0
|    :: :   0x0003d57a      42e80004       strex r4, r0, [r2]
|    :: :   0x0003d57e      002c           cmp r4, 0                   ; zf=0x0 ; zf=0x0
|    :: `=< 0x0003d580      f8d1           bne 0x3d574                 ; pc=0x3d574 -> 0x3f00e852 ; likely
|    ::     0x0003d582      002b           cmp r3, 0                   ; zf=0x0 ; zf=0x0
|    ::     0x0003d584      bff35f8f       dmb sy
|    `====< 0x0003d588      eddc           bgt 0x3d566                 ; pc=0x3d566 -> 0xe8bdb005 ; likely
|     :     0x0003d58a      0846           mov r0, r1                  ; r0=0x7ff0 "foPPvj"
|     :     0x0003d58c      4146           mov r1, r8                  ; r1=0x7fdd "_catchEPKSt9type_infoPPvj"
|     :     0x0003d58e      16f123f9       bl fcn.001537d8             ; lr=0x3d596 -> 0x180e0013 ; pc=0x1537d8 -> 0xbdbcf7e3
\     `===< 0x0003d592      e8e7           b 0x3d566                   ; pc=0x3d566 -> 0xe8bdb005

int vDpOT_4a8(int arg)
{
    if (arg == 0)
    {
        return arg;
    }
}
