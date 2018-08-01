/ (fcn) sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8 410
|   sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8 (int arg3, int arg4);
|           ; var int local_0h @ sp+0x0
|           ; var int local_10h @ sp+0x10
|           ; var int local_14h @ sp+0x14
|           ; arg int arg3 @ r2
|           ; arg int arg4 @ r3
|           ; CALL XREF from 0x00038846 (sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit)
|           0x000418f8      2de9f041       push.w {r4, r5, r6, r7, r8, lr} ; sp=0xffffffffffffffe8
|           0x000418fc      86b0           sub sp, 0x18                ; sp=0xffffffd0
|           0x000418fe      654f           ldr r7, aav.0x0014a564      ; [0x41a94:4]=0x14a564 aav.0x0014a564 ; r7=0x14a564 -> 0x4288685b
|           0x00041900      7f44           add r7, pc                  ; 0x18be68 ; r10 ; r7=0x18be68 -> 0x464c457f
|           ;-- aav.0x00041902:
|           ; UNKNOWN XREF from 0x0012e048 (aav.0x0012df9c + 172)
|           0x00041902      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|       ,=< 0x00041904      74d0           beq 0x419f0                 ; pc=0x419f0 -> 0xe8bdb006 ; likely
|       |   0x00041906      0df11008       add.w r8, sp, 0x10          ; r8=0xffffffe0 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0004190a      6349           ldr r1, aav.0x0012dac8      ; [0x41a98:4]=0x12dac8 aav.0x0012dac8 ; r1=0x12dac8 -> 0x447b463e
|       |   0x0004190c      0546           mov r5, r0                  ; r5=0x0
|       |   0x0004190e      03a8           add r0, sp, 0xc             ; const char *s ; r0=0xffffffdc -> 0x464c457f
|       |   0x00041910      7944           add r1, pc                  ; 0x16f3dc ; "com/nianticlabs/pokemongoplus/util/Crypt" ; r1=0x16f3dc -> 0x2f6d6f63 str.com_nianticlabs_pokemongoplus_util_Crypt
|       |   0x00041912      4246           mov r2, r8                  ; r2=0xffffffe0 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x00041914  ~   12f1a2fc       bl sub.strlen_25c           ; lr=0x4191c -> 0xf0019a03 ; pc=0x15425c -> 0x460cb570
|       |   |                                                            ; size_t strlen(const char * s : 0xffffffdc =)
|       |   ;-- aav.0x00041916:
|       |   ; UNKNOWN XREF from 0x00153af8 (sub.mongoplus_bridge_ClientBridge_dispose_a64)
|       |   0x00041916      a2fc4046       invalid
|       |   0x0004191a      2946           mov r1, r5                  ; r1=0x0
|       |   0x0004191c      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0004191e      01f05bfa       bl fcn.00042dd8             ; lr=0x41926 -> 0x447b2000 ; pc=0x42dd8 -> 0x460db538
|       |   0x00041922      5e4b           ldr r3, aav.0x0014acb4      ; [0x41a9c:4]=0x14acb4 aav.0x0014acb4 ; r3=0x14acb4 -> 0x1b4047b8
|       |   0x00041924      0499           ldr r1, [sp + local_10h]    ; r1=0x0
|       |   0x00041926      0020           movs r0, 0                  ; r0=0x0 ; zf=0x1 -> 0x1464c45
|       |   0x00041928      7b44           add r3, pc                  ; r3=0x18c5e0 -> 0x464c457f
|       |   0x0004192a      059a           ldr r2, [sp + local_14h]    ; r2=0x0
|       |   0x0004192c      0490           str r0, [sp + local_10h]
|       |   0x0004192e      5c68           ldr r4, [r3, 4]             ; arg4 ; r4=0x0
|       |   0x00041930      0590           str r0, [sp + local_14h]
|       |   0x00041932      .dword 0x0006e883 ; aav.0x0006e882
|       |   0x00041936      ecb1           cbz r4, 0x41974             ; pc=0x41974 -> 0x46284c4a ; likely
|       |   0x00041938      231d           adds r3, r4, 4              ; aav.0x00000004 ; r3=0x4 -> 0x17001853 ; zf=0x0
|       |   0x0004193a      bff35f8f       dmb sy
|       |   ; CODE XREF from 0x0004194a (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|      .--> 0x0004193e      53e8002f       ldrex r2, [r3]              ; arg4
|      :|   0x00041942      511e           subs r1, r2, 1              ; r1=0xffffffff -> 0x8069d800 ; zf=0x0
|      :|   0x00041944      43e80010       strex r0, r1, [r3]
|      :|   0x00041948      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|      `==< 0x0004194a      f8d1           bne 0x4193e                 ; unlikely
|       |   0x0004194c      012a           cmp r2, 1                   ; zf=0x0 ; zf=0x0
|       |   0x0004194e      bff35f8f       dmb sy
|      ,==< 0x00041952      6ad0           beq 0x41a2a                 ; unlikely
|      ||   ; CODE XREF from 0x00041a52 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|      ||   ; CODE XREF from 0x00041a5e (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|    ..---> 0x00041954      059c           ldr r4, [sp + local_14h]    ; r4=0x0
|   ,=====< 0x00041956      6cb1           cbz r4, 0x41974             ; pc=0x41974 -> 0x46284c4a ; likely
|   |::||   0x00041958      231d           adds r3, r4, 4              ; 0x1804 ; str. ; r3=0x4 -> 0x17001853 aav.0x00000004 ; zf=0x0
|   |::||   0x0004195a      bff35f8f       dmb sy
|   |::||   ; CODE XREF from 0x0004196a (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|  .------> 0x0004195e      53e8002f       ldrex r2, [r3]              ; arg4
|  :|::||   0x00041962      511e           subs r1, r2, 1              ; r1=0xffffffff -> 0x8069d800 ; zf=0x0
|  :|::||   0x00041964      43e80010       strex r0, r1, [r3]
|  :|::||   0x00041968      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|  `======< 0x0004196a      f8d1           bne 0x4195e                 ; unlikely
|   |::||   0x0004196c      012a           cmp r2, 1                   ; zf=0x0 ; zf=0x0
|   |::||   0x0004196e      bff35f8f       dmb sy
|  ,======< 0x00041972      40d0           beq 0x419f6                 ; unlikely
|  ||::||   ; CODE XREF from 0x00041936 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|  ||::||   ; CODE XREF from 0x00041956 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|  ||::||   ; CODE XREF from 0x00041a1e (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|  ||::||   ; CODE XREF from 0x00041a28 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| .-`-----> 0x00041974      4a4c           ldr r4, aav.0x0014ac62      ; [0x41aa0:4]=0x14ac62 aav.0x0014ac62 ; r4=0x14ac62 -> 0xf7fe9303
| :| ::||   0x00041976      2846           mov r0, r5                  ; r0=0x0
| :| ::||   0x00041978      4a4e           ldr r6, aav.0x0012d398      ; [0x41aa4:4]=0x12d398 aav.0x0012d398 ; r6=0x12d398 -> 0x68232308
| :| ::||   0x0004197a      7c44           add r4, pc                  ; r4=0x18c5e0 -> 0x464c457f
| :| ::||   0x0004197c      4a4b           ldr r3, aav.0x0012da80      ; [0x41aa8:4]=0x12da80 aav.0x0012da80 ; r3=0x12da80 -> 0x2316e9c5
| :| ::||   0x0004197e      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
| :| ::||   0x00041980      7e44           add r6, pc                  ; r6=0x16ed1c "()[B"
| :| ::||   0x00041982      2168           ldr r1, [r4]                ; r1=0x0
| :| ::||   0x00041984      7b44           add r3, pc                  ; 0x16f408 ; "generateNonce" ; r3=0x16f408 -> 0x656e6567 str.generateNonce
| :| ::||   0x00041986      0096           str r6, [sp]
| :| ::||   0x00041988      00f0d8ff       bl sub.Android_JNI:_Method_93c ; lr=0x41990 -> 0x6821447e ; pc=0x4293c -> 0x4ff0e92d
| :| ::||   0x0004198c      474e           ldr r6, aav.0x0012da94      ; [0x41aac:4]=0x12da94 aav.0x0012da94 ; r6=0x12da94 -> 0xfc3cf76b
| :| ::||   0x0004198e      484b           ldr r3, aav.0x0012da7e      ; [0x41ab0:4]=0x12da7e aav.0x0012da7e ; r3=0x12da7e -> 0xe9c5bf18
| :| ::||   0x00041990      7e44           add r6, pc                  ; 0x16f428 ; "([B[B)[B" ; r6=0x16f428 -> 0x5b425b28 str.B_B__B
| :| ::||   0x00041992      2168           ldr r1, [r4]                ; r1=0x0
| :| ::||   0x00041994      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
| :| ::||   0x00041996      7b44           add r3, pc                  ; 0x16f418 ; "unencryptNonce" ; r3=0x16f418 -> 0x6e656e75 str.unencryptNonce
| :| ::||   0x00041998      0096           str r6, [sp]
| :| ::||   0x0004199a      a060           str r0, [r4, 8]
| :| ::||   0x0004199c      2846           mov r0, r5                  ; r0=0x0
| :| ::||   0x0004199e      00f0cdff       bl sub.Android_JNI:_Method_93c ; lr=0x419a6 -> 0x447b9a03 ; pc=0x4293c -> 0x4ff0e92d
| :| ::||   0x000419a2      444b           ldr r3, aav.0x0012da88      ; [0x41ab4:4]=0x12da88 aav.0x0012da88 ; r3=0x12da88 -> 0xf1054b14
| :| ::||   0x000419a4      2168           ldr r1, [r4]                ; r1=0x0
| :| ::||   0x000419a6      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
| :| ::||   0x000419a8      7b44           add r3, pc                  ; 0x16f434 ; "encryptNonce" ; r3=0x16f434 -> 0x72636e65 str.encryptNonce
| :| ::||   0x000419aa      0096           str r6, [sp]
| :| ::||   ; CODE XREF from 0x00041aa8 (aav.0x00041a56 + 82)
| :| ::||   0x000419ac      424e           ldr r6, aav.0x0012daa6      ; [0x41ab8:4]=0x12daa6 aav.0x0012daa6 ; r6=0x12daa6 -> 0xfed1f00a
| :| ::||   0x000419ae      7e44           add r6, pc                  ; 0x16f458 ; "(Ljava/lang/String;[B)V" ; r6=0x16f458 -> 0x616a4c28 str.Ljava_lang_String__B_V
| :| ::||   0x000419b0      e060           str r0, [r4, 0xc]
| :| ::||   0x000419b2      2846           mov r0, r5                  ; r0=0x0
| :| ::||   0x000419b4      00f0c2ff       bl sub.Android_JNI:_Method_93c ; lr=0x419bc -> 0x447b9a03 ; pc=0x4293c -> 0x4ff0e92d
| :| ::||   0x000419b8      404b           ldr r3, aav.0x0012da82      ; [0x41abc:4]=0x12da82 aav.0x0012da82 ; r3=0x12da82 -> 0xb0072316
| :| ::||   0x000419ba      2168           ldr r1, [r4]                ; r1=0x0
| :| ::||   0x000419bc      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
| :| ::||   0x000419be      7b44           add r3, pc                  ; 0x16f444 ; "persistByteArray" ; r3=0x16f444 -> 0x73726570 str.persistByteArray
| :| ::||   0x000419c0      0096           str r6, [sp]
| :| ::||   0x000419c2      3f4e           ldr r6, aav.0x0012dac0      ; [0x41ac0:4]=0x12dac0 aav.0x0012dac0 ; r6=0x12dac0 "!m"
| :| ::||   ;-- aav.0x000419c4:
| :| ::||   ; CODE XREF from 0x00041abc (aav.0x00041a56 + 102)
| :| ::||   ; UNKNOWN XREF from 0x0014a444 (aav.0x0014a372 + 210)
| :| ::||   0x000419c4      7e44           add r6, pc                  ; 0x16f488 ; "(Ljava/lang/String;)[B" ; r6=0x16f488 -> 0x616a4c28 str.Ljava_lang_String___B
| :| ::||   0x000419c6      2061           str r0, [r4, 0x10]
| :| ::||   ; CODE XREF from 0x00041ab4 (aav.0x00041a56 + 94)
| :| ::||   0x000419c8      2846           mov r0, r5                  ; r0=0x0
| :| ::||   0x000419ca      00f0b7ff       bl sub.Android_JNI:_Method_93c ; lr=0x419d2 -> 0x447b9a03 ; pc=0x4293c -> 0x4ff0e92d
| :| ::||   0x000419ce      3d4b           ldr r3, aav.0x0012da98      ; [0x41ac4:4]=0x12da98 aav.0x0012da98 ; r3=0x12da98 -> 0xf240e7ac
| :| ::||   0x000419d0      2168           ldr r1, [r4]                ; r1=0x0
| :| ::||   0x000419d2      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
| :| ::||   0x000419d4      7b44           add r3, pc                  ; 0x16f470 ; "getPersistedByteArray" ; r3=0x16f470 -> 0x50746567 str.getPersistedByteArray
| :| ::||   0x000419d6      0096           str r6, [sp]
| :| ::||   ; CODE XREF from 0x00041aa4 (aav.0x00041a56 + 78)
| :| ::||   ; CODE XREF from 0x00041aac (aav.0x00041a56 + 86)
| :| ::||   0x000419d8      6061           str r0, [r4, 0x14]
| :| ::||   0x000419da      2846           mov r0, r5                  ; r0=0x0
| :| ::||   0x000419dc      00f0aeff       bl sub.Android_JNI:_Method_93c ; lr=0x419e4 -> 0x10cf1a2 ; pc=0x4293c -> 0x4ff0e92d
| :| ::||   0x000419e0      394b           ldr r3, [0x00041ac8]        ; [0x41ac8:4]=0xfffffad8 r2 ; r3=0xfffffad8 r2
| :| ::||   0x000419e2      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
| :| ::||   0x000419e4      a2f10c01       sub.w r1, r2, 0xc           ; r1=0x7ff0 "foPPvj"
| :| ::||   0x000419e8      a061           str r0, [r4, 0x18]
| :| ::||   0x000419ea      fb58           ldr r3, [r7, r3]            ; 0x18b940 ; aav.0x0018b940 ; r3=0x1953d4 -> 0x464c457f
| :| ::||   0x000419ec      9942           cmp r1, r3                  ; zf=0x0 ; zf=0x0
| :|,=====< 0x000419ee      37d1           bne 0x41a60                 ; pc=0x41a60 -> 0xf3bf3a04 ; likely
| :||::||   ; CODE XREF from 0x00041904 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| :||::||   ; CODE XREF from 0x00041a7a (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| :||::||   ; CODE XREF from 0x00041a84 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| ------`-> 0x000419f0      06b0           add sp, 0x18                ; sp=0xffffffec (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
| :||::|    0x000419f2      bde8f081       pop.w {r4, r5, r6, r7, r8, pc} ; pc=0x7ffc ; r8=0x1bfed8da ; r7=0x7fdd ; r6=0x20387730 ; r5=0x7fdd ; r4=0xff8069d8 ; sp=0x100000004 -> 0xf3
| :||::|    ; CODE XREF from 0x00041972 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| :`------> 0x000419f6      2268           ldr r2, [r4]                ; r2=0xffffffff -> 0x8069d800
| : |::|    ; CODE XREF from 0x00041ac4 (aav.0x00041a56 + 110)
| : |::|    0x000419f8      344b           ldr r3, [0x00041acc]        ; [0x41acc:4]=0xfffffc08 ; r3=0xfffffc08
| : |::|    0x000419fa      9268           ldr r2, [r2, 8]             ; arg3 ; r2=0x0
| : |::|    0x000419fc      fb58           ldr r3, [r7, r3]            ; r3=0x34366b65
| : |::|    0x000419fe      9a42           cmp r2, r3                  ; zf=0x0 ; zf=0x0
| : |::|,=< 0x00041a00      44d1           bne 0x41a8c                 ; pc=0x41a8c -> 0x47904620 ; likely
| : |::||   ; CODE XREF from 0x00041a90 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| :.------> 0x00041a02      04f10803       add.w r3, r4, 8             ; r3=0xff8069e0
| ::|::||   ;-- aav.0x00041a06:
| ::|::||   ; UNKNOWN XREF from 0x0012df34 (aav.0x0012ddac + 392)
| ::|::||   0x00041a06      bff35f8f       dmb sy
| ::|::||   ; CODE XREF from 0x00041a16 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| --------> 0x00041a0a      53e8002f       ldrex r2, [r3]              ; arg4
| ::|::||   0x00041a0e      511e           subs r1, r2, 1              ; r1=0xffffffff -> 0x8069d800 ; zf=0x0
| ::|::||   0x00041a10      43e80010       strex r0, r1, [r3]
| ::|::||   0x00041a14      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
| ========< 0x00041a16      f8d1           bne 0x41a0a                 ; unlikely
| ::|::||   0x00041a18      012a           cmp r2, 1                   ; zf=0x0 ; zf=0x0
| ::|::||   0x00041a1a      bff35f8f       dmb sy
| ::|::||   ;-- aav.0x00041a1e:
| ::|::||   ; UNKNOWN XREF from 0x0017fcfc (aav.0x0017f88c + 1136)
| ========< 0x00041a1e      a9d1           bne 0x41974                 ; pc=0x41974 -> 0x46284c4a ; likely
| ::|::||   0x00041a20      2368           ldr r3, [r4]                ; r3=0xffffffff -> 0x8069d800
| ::|::||   0x00041a22      2046           mov r0, r4                  ; r0=0xff8069d8
| ::|::||   0x00041a24      db68           ldr r3, [r3, 0xc]           ; arg4 ; r3=0x0
| ::|::||   0x00041a26      9847           blx r3                      ; lr=0x41a2c -> 0x68924b27 ; pc=0x0
| `=======< 0x00041a28      a4e7           b 0x41974                   ; pc=0x41974 -> 0x46284c4a
|  :|::||   ; CODE XREF from 0x00041952 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|  :|::`--> 0x00041a2a      2268           ldr r2, [r4]                ; r2=0xffffffff -> 0x8069d800
|  :|:: |   ; CODE XREF from 0x00041a98 (aav.0x00041a56 + 66)
|  :|:: |   0x00041a2c      274b           ldr r3, [0x00041acc]        ; [0x41acc:4]=0xfffffc08 ; r3=0xfffffc08
|  :|:: |   0x00041a2e      9268           ldr r2, [r2, 8]             ; arg3 ; r2=0x0
|  :|:: |   0x00041a30      fb58           ldr r3, [r7, r3]            ; r3=0x34366b65
|  :|:: |   0x00041a32      9a42           cmp r2, r3                  ; zf=0x0 ; zf=0x0
|  :|::,==< 0x00041a34      27d1           bne 0x41a86                 ; pc=0x41a86 -> 0x47904620 ; likely
|  :|::||   ; CODE XREF from 0x00041a8a (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| .-------> 0x00041a36      04f10803       add.w r3, r4, 8             ; r3=0xff8069e0
| ::|::||   0x00041a3a      bff35f8f       dmb sy
| ::|::||   ; CODE XREF from 0x00041a4a (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| --------> 0x00041a3e      53e8002f       ldrex r2, [r3]              ; arg4
| ::|::||   0x00041a42      511e           subs r1, r2, 1              ; r1=0xffffffff -> 0x8069d800 ; zf=0x0
| ::|::||   ; CODE XREF from 0x00041ac0 (aav.0x00041a56 + 106)
| ::|::||   0x00041a44      43e80010       strex r0, r1, [r3]
| ::|::||   0x00041a48      0028           cmp r0, 0                   ; zf=0x0 ; zf=0x0
| ========< 0x00041a4a      f8d1           bne 0x41a3e                 ; pc=0x41a3e -> 0x2f00e853 ; likely
| ::|::||   0x00041a4c      012a           cmp r2, 1                   ; zf=0x0 ; zf=0x0
| ::|::||   0x00041a4e      bff35f8f       dmb sy
| ::|`====< 0x00041a52      7ff47faf       bne.w 0x41954               ; pc=0x41954 -> 0xb16c9c05 ; likely
| ::| :||   ;-- aav.0x00041a56:
| ::| :||   ; UNKNOWN XREF from 0x001539a4 (fcn.00153974 + 48)
| ::| :||   0x00041a56      2368           ldr r3, [r4]                ; r3=0xffffffff -> 0x8069d800
| ::| :||   0x00041a58      2046           mov r0, r4                  ; r0=0xff8069d8
| ::| :||   0x00041a5a      db68           ldr r3, [r3, 0xc]           ; arg4 ; r3=0x0
| ::| :||   0x00041a5c      9847           blx r3                      ; lr=0x41a62 -> 0x8f5ff3bf ; pc=0x0
| ::| `===< 0x00041a5e      79e7           b 0x41954                   ; pc=0x41954 -> 0xb16c9c05
| ::|  ||   ; CODE XREF from 0x000419ee (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| ::`-----> 0x00041a60      043a           subs r2, 4                  ; r2=0xfffffffc (pstr 0x00007fdd) "_catchEPKSt9type_infoPPvj" ; zf=0x0
| ::   ||   0x00041a62      bff35f8f       dmb sy
| ::   ||   ; CODE XREF from 0x00041a72 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| ::  .---> 0x00041a66      52e8003f       ldrex r3, [r2]              ; arg3
| ::  :||   0x00041a6a      581e           subs r0, r3, 1              ; r0=0xffffffff -> 0x8069d800 ; zf=0x0
| ::  :||   0x00041a6c      42e80004       strex r4, r0, [r2]
| ::  :||   0x00041a70      002c           cmp r4, 0                   ; zf=0x0 ; zf=0x0
| ::  `===< 0x00041a72      f8d1           bne 0x41a66                 ; pc=0x41a66 -> 0x3f00e852 ; likely
| ::   ||   0x00041a74      002b           cmp r3, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
| ::   ||   0x00041a76      bff35f8f       dmb sy
| ========< 0x00041a7a      b9dc           bgt 0x419f0                 ; unlikely
| ::   ||   0x00041a7c      0846           mov r0, r1                  ; r0=0xffffffff -> 0x8069d800
| ::   ||   0x00041a7e      4146           mov r1, r8                  ; r1=0x1bfed8da
| ::   ||   0x00041a80      11f1aafe       bl fcn.001537d8             ; lr=0x41a88 -> 0xe7d44790 ; pc=0x1537d8 -> 0xbdbcf7e3
| ========< 0x00041a84      b4e7           b 0x419f0                   ; pc=0x419f0 -> 0xe8bdb006
| ::   ||   ; CODE XREF from 0x00041a34 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
| ::   `--> 0x00041a86      2046           mov r0, r4                  ; r0=0xff8069d8
| ::    |   0x00041a88      9047           blx r2                      ; lr=0x41a8e -> 0xe7b74790 ; pc=0xfffffffc (pstr 0x00007fdd) "_catchEPKSt9type_infoPPvj" ; CALL: 0x0, 0x280003, 0x1, 0x0
| `=======< 0x00041a8a      d4e7           b 0x41a36                   ; pc=0x41a36 -> 0x308f104
|  :    |   ; CODE XREF from 0x00041a00 (sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8)
|  :    `-> 0x00041a8c      2046           mov r0, r4                  ; r0=0xff8069d8
|  :        0x00041a8e      9047           blx r2                      ; lr=0x41a94 -> 0x4288685b ; pc=0xfffffffc (pstr 0x00007fdd) "_catchEPKSt9type_infoPPvj" ; CALL: 0x0, 0x280003, 0x1, 0x0
\  `======< 0x00041a90      b7e7           b 0x41a02                   ; pc=0x41a02 -> 0x308f104

int global_0012dac8h;

int com_nianticlabs_pokemongoplus_util_Crypt_8f8(int arg)
{
    if (arg == 0)
    {
        return arg;
    }

    intptr_t local_0h, local_4h, local_8h, local_Ch, local_10h, local_14h, local_18h;

    r7 = 0x0014a564 + pc
    r8 = &local_10h;
    r1 = 0x0012dac8 + pc;
    r5 = 0
    r0 = &local_Ch;
    r2 = r8;
    r0 = strlen_25c(&local_Ch, &global_0012dac8h, &local_10h);

|           0x000418fe      654f           ldr r7, aav.0x0014a564      ; [0x41a94:4]=0x14a564 aav.0x0014a564 ; r7=0x14a564 -> 0x4288685b
|           0x00041900      7f44           add r7, pc                  ; 0x18be68 ; r10 ; r7=0x18be68 -> 0x464c457f
|           ;-- aav.0x00041902:
|           ; UNKNOWN XREF from 0x0012e048 (aav.0x0012df9c + 172)
|           0x00041902      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|       ,=< 0x00041904      74d0           beq 0x419f0                 ; pc=0x419f0 -> 0xe8bdb006 ; likely
|       |   0x00041906      0df11008       add.w r8, sp, 0x10          ; r8=0xffffffe0 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0004190a      6349           ldr r1, aav.0x0012dac8      ; [0x41a98:4]=0x12dac8 aav.0x0012dac8 ; r1=0x12dac8 -> 0x447b463e
|       |   0x0004190c      0546           mov r5, r0                  ; r5=0x0
|       |   0x0004190e      03a8           add r0, sp, 0xc             ; const char *s ; r0=0xffffffdc -> 0x464c457f
|       |   0x00041910      7944           add r1, pc                  ; 0x16f3dc ; "com/nianticlabs/pokemongoplus/util/Crypt" ; r1=0x16f3dc -> 0x2f6d6f63 str.com_nianticlabs_pokemongoplus_util_Crypt
|       |   0x00041912      4246           mov r2, r8                  ; r2=0xffffffe0 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x00041914  ~   12f1a2fc       bl sub.strlen_25c           ; lr=0x4191c -> 0xf0019a03 ; pc=0x15425c -> 0x460cb570
|       |   |                                                            ; size_t strlen(const char * s : 0xffffffdc =)
}
