/ (fcn) sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20 358
|   sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20 (int arg3, int arg4);
|           ; var int local_0h @ sp+0x0
|           ; arg int arg3 @ r2
|           ; arg int arg4 @ r3
|           ; CALL XREF from 0x00038834 (sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit)
|           0x0003db20      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|       ,=< 0x0003db22      00f09c80       beq.w 0x3dc5e               ; pc=0x3dc5e -> 0x3a044770 ; likely
|       |   0x0003db26      2de9f04f       push.w {r4, r5, r6, r7, r8, sb, sl, fp, lr} ; sp=0xffffffffffffffdc
|       |   0x0003db2a      85b0           sub sp, 0x14                ; sp=0xffffffc8
|       |   0x0003db2c      0446           mov r4, r0                  ; r4=0x0
|       |   0x0003db2e      0df10809       add.w sb, sp, 8             ; sb=0xffffffd0
|       |   0x0003db32      fff7d9fe       bl sub.sultIlED0Ev_8e8      ; lr=0x3db3a -> 0x4479a803 ; pc=0x3d8e8 -> 0x47f0e92d
|       |   0x0003db36      5449           ldr r1, aav.0x00131478      ; [0x3dc88:4]=0x131478 aav.0x00131478 ; r1=0x131478 -> 0x21006802
|       |   0x0003db38      4a46           mov r2, sb                  ; r2=0xffffffd0
|       |   0x0003db3a      03a8           add r0, sp, 0xc             ; const char *s ; r0=0xffffffd4 (pstr 0x0016e454) "(Ljava/lang/String;)V"
|       |   0x0003db3c      7944           add r1, pc                  ; 0x16efb8 ; "com/nianticlabs/pokemongoplus/SfidaPeripheral" ; r1=0x16efb8 -> 0x2f6d6f63 str.com_nianticlabs_pokemongoplus_SfidaPeripheral
|       |   0x0003db3e      dff84ca1       ldr.w sl, aav.0x001312ce    ; [0x3dc8c:4]=0x1312ce aav.0x001312ce ; sl=0x1312ce -> 0xf853682b
|       |   0x0003db42      16f18bfb       bl sub.strlen_25c           ; lr=0x3db4a -> 0xf00444fa ; pc=0x15425c -> 0x460cb570
|       |   |                                                            ; size_t strlen(const char * s : 0xffffffd4 = T..)
|       |   0x0003db46      0399           ldr r1, [sp, 0xc]           ; r1=0xffffffff -> 0x7ffcf5
|       |   0x0003db48      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003db4a      fa44           add sl, pc                  ; sl=0x16ee1c "()I"
|       |   0x0003db4c      04f080fd       bl aav.0x00042650           ; lr=0x3db54 -> 0xf8cd447b ; pc=0x42650 -> 0x43f0e92d
|       |   0x0003db50      4f4b           ldr r3, aav.0x00131490      ; [0x3dc90:4]=0x131490 aav.0x00131490 ; r3=0x131490 -> 0x4604b530
|       |   0x0003db52      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003db54      7b44           add r3, pc                  ; 0x16efe8 ; "getStateInt" ; r3=0x16efe8 -> 0x53746567 str.getStateInt
|       |   0x0003db56      cdf800a0       str.w sl, [sp]
|       |   0x0003db5a      4e4d           ldr r5, aav.0x0014e9e4      ; [0x3dc94:4]=0x14e9e4 aav.0x0014e9e4 ; r5=0x14e9e4 -> 0xd2044293
|       |   0x0003db5c      dff83881       ldr.w r8, aav.0x0013117c    ; [0x3dc98:4]=0x13117c aav.0x0013117c ; r8=0x13117c -> 0x60c32300
|       |   0x0003db60      7d44           add r5, pc                  ; r5=0x18c548 -> 0x464c457f
|       |   0x0003db62      4e4f           ldr r7, aav.0x001308a6      ; [0x3dc9c:4]=0x1308a6 aav.0x001308a6 ; r7=0x1308a6 -> 0x2001bf98
|       |   ; CODE XREF from 0x0003e07c (aav.0x0003e06e + 14)
|       |   0x0003db64      f844           add r8, pc                  ; 0x16ece4 ; "()Ljava/lang/String;" ; r8=0x16ece4 -> 0x6a4c2928 str.Ljava_lang_String
|       |   0x0003db66      dff838b1       ldr.w fp, aav.0x001314f4    ; [0x3dca0:4]=0x1314f4 aav.0x001314f4 ; fp=0x1314f4 -> 0x68186963
|       |   0x0003db6a      7f44           add r7, pc                  ; r7=0x16e414 "()V"
|       |   0x0003db6c      fb44           add fp, pc                  ; 0x16f064 ; "disconnect" ; fp=0x16f064 -> 0x63736964 str.disconnect
|       |   0x0003db6e      0646           mov r6, r0                  ; r6=0x0
|       |   0x0003db70      0146           mov r1, r0                  ; r1=0x0
|       |   0x0003db72      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003db74      04f0ccff       bl sub.Android_JNI:_Method_b10 ; lr=0x3db7c -> 0x447b4631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003db78      4a4b           ldr r3, aav.0x00131472      ; [0x3dca4:4]=0x131472 aav.0x00131472 ; r3=0x131472 -> 0x4283681b
|       |   0x0003db7a      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003db7c      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003db7e      7b44           add r3, pc                  ; 0x16eff4 ; "getIdentifier" ; r3=0x16eff4 -> 0x49746567 str.getIdentifier
|       |   0x0003db80      cdf80080       str.w r8, [sp]
|       |   0x0003db84      a866           str r0, [r5, 0x68]
|       |   0x0003db86      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003db88      04f0c2ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3db90 -> 0xf8cd4631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003db8c      464b           ldr r3, aav.0x0013146a      ; [0x3dca8:4]=0x13146a aav.0x0013146a ; r3=0x13146a -> 0x68e04b08
|       |   0x0003db8e      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003db90      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003db92      cdf80080       str.w r8, [sp]
|       |   0x0003db96      7b44           add r3, pc                  ; 0x16f004 ; "getName" ; r3=0x16f004 -> 0x4e746567 str.getName
|       |   0x0003db98      a861           str r0, [r5, 0x18]
|       |   0x0003db9a      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003db9c      04f0b8ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dba4 -> 0x46314b42 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dba0      dff808e1       ldr.w lr, aav.0x00131484    ; [0x3dcac:4]=0x131484 aav.0x00131484 ; lr=0x131484 -> 0xf0222c0c
|       |   0x0003dba4      424b           ldr r3, aav.0x00131458      ; [0x3dcb0:4]=0x131458 aav.0x00131458 ; r3=0x131458 -> 0xea09629c
|       |   0x0003dba6      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dba8      fe44           add lr, pc                  ; 0x16f030 ; "(Ljava/lang/String;)J" ; lr=0x16f030 -> 0x616a4c28 str.Ljava_lang_String__J
|       |   0x0003dbaa      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dbac      cdf800e0       str.w lr, [sp]
|       |   0x0003dbb0      7b44           add r3, pc                  ; 0x16f00c ; "getAdvertisingServiceDataLongValue" ; r3=0x16f00c -> 0x41746567 str.getAdvertisingServiceDataLongValue
|       |   0x0003dbb2      2865           str r0, [r5, 0x50]
|       |   0x0003dbb4      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dbb6      04f0abff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dbbe "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dbba      3e4b           ldr r3, aav.0x00131482      ; [0x3dcb4:4]=0x131482 aav.0x00131482 ; r3=0x131482 -> 0x2c0cf852
|       |   0x0003dbbc      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dbbe      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dbc0      0097           str r7, [sp]
|       |   0x0003dbc2      7b44           add r3, pc                  ; 0x16f048 ; "discoverServices" ; r3=0x16f048 -> 0x63736964 str.discoverServices
|       |   0x0003dbc4      6865           str r0, [r5, 0x54]
|       |   0x0003dbc6      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dbc8      04f0a2ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dbd0 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dbcc      3a4b           ldr r3, aav.0x00131484      ; [0x3dcb8:4]=0x131484 aav.0x00131484 ; r3=0x131484 -> 0xf0222c0c
|       |   0x0003dbce      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dbd0      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dbd2      0097           str r7, [sp]
|       |   0x0003dbd4      7b44           add r3, pc                  ; 0x16f05c ; "connect" ; r3=0x16f05c -> 0x6e6e6f63 str.connect
|       |   0x0003dbd6      e861           str r0, [r5, 0x1c]
|       |   0x0003dbd8      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dbda      04f099ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dbe2 -> 0x465b4631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dbde      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dbe0      0097           str r7, [sp]
|       |   0x0003dbe2      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dbe4      5b46           mov r3, fp                  ; r3=0x16f064 "disconnect" str.disconnect
|       |   0x0003dbe6      2862           str r0, [r5, 0x20]
|       |   0x0003dbe8      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dbea      04f091ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dbf2 -> 0xf8cd4631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dbee      334b           ldr r3, aav.0x00131474      ; [0x3dcbc:4]=0x131474 aav.0x00131474 ; r3=0x131474 -> 0xd0084283
|       |   0x0003dbf0      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dbf2      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dbf4      cdf800a0       str.w sl, [sp]
|       |   0x0003dbf8      7b44           add r3, pc                  ; 0x16f070 ; "getServiceCount" ; r3=0x16f070 -> 0x53746567 str.getServiceCount
|       |   0x0003dbfa      6862           str r0, [r5, 0x24]
|       |   0x0003dbfc      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dbfe      04f087ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dc06 -> 0x465b4631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dc02      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dc04      0097           str r7, [sp]
|       |   0x0003dc06      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dc08      5b46           mov r3, fp                  ; r3=0x16f064 "disconnect" str.disconnect
|       |   0x0003dc0a      a865           str r0, [r5, 0x58]
|       |   0x0003dc0c      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dc0e      04f07fff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dc16 -> 0x4631465b ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dc12      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dc14      0097           str r7, [sp]
|       |   0x0003dc16      5b46           mov r3, fp                  ; r3=0x16f064 "disconnect" str.disconnect
|       |   0x0003dc18      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dc1a      e865           str r0, [r5, 0x5c]
|       |   0x0003dc1c      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dc1e      04f077ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dc26 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dc22      274b           ldr r3, aav.0x00131452      ; [0x3dcc0:4]=0x131452 aav.0x00131452 ; r3=0x131452 -> 0x4770b9fe
|       |   0x0003dc24      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dc26      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dc28      0097           str r7, [sp]
|       |   0x0003dc2a      7b44           add r3, pc                  ; 0x16f080 ; "onCreate" ; r3=0x16f080 -> 0x72436e6f str.onCreate
|       |   0x0003dc2c      2866           str r0, [r5, 0x60]
|       |   0x0003dc2e      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dc30      04f06eff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dc38 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dc34      234b           ldr r3, aav.0x0013144c      ; [0x3dcc4:4]=0x13144c aav.0x0013144c ; r3=0x13144c -> 0x4b04f85d
|       |   0x0003dc36      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dc38      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dc3a      0097           str r7, [sp]
|       |   0x0003dc3c      7b44           add r3, pc                  ; 0x16f08c ; "onDestroy" ; r3=0x16f08c -> 0x65446e6f str.onDestroy
|       |   0x0003dc3e      e864           str r0, [r5, 0x4c]
|       |   0x0003dc40      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dc42      04f065ff       bl sub.Android_JNI:_Method_b10 ; lr=0x3dc4a -> 0x10cf1a2 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dc46      039a           ldr r2, [sp, 0xc]           ; r2=0xffffffff -> 0x7ffcf5
|       |   0x0003dc48      1f4b           ldr r3, aav.0x0014dcee      ; [0x3dcc8:4]=0x14dcee aav.0x0014dcee ; r3=0x14dcee -> 0xe6a49206
|       |   0x0003dc4a      a2f10c01       sub.w r1, r2, 0xc           ; r1=0xfffffff3 -> 0x8069f000
|       |   0x0003dc4e      7b44           add r3, pc                  ; 0x18b940 ; aav.0x0018b940 ; r3=0x18b940
|       |   0x0003dc50      1b68           ldr r3, [r3]                ; 0x18b940 ; aav.0x0018b940 ; arg4 ; r3=0x1953d4 -> 0x464c457f
|       |   0x0003dc52      9942           cmp r1, r3                  ; zf=0x0 ; zf=0x0
|       |   0x0003dc54      6866           str r0, [r5, 0x64]
|      ,==< 0x0003dc56      03d1           bne 0x3dc60                 ; pc=0x3dc60 -> 0xf3bf3a04 ; likely
|      ||   ; CODE XREF from 0x0003dc7a (sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20)
|      ||   ; CODE XREF from 0x0003dc84 (sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20)
|    ..---> 0x0003dc58      05b0           add sp, 0x14                ; sp=0xffffffe0 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|    ::||   0x0003dc5a      bde8f08f       pop.w {r4, r5, r6, r7, r8, sb, sl, fp, pc} ; pc=0x7ffc ; fp=0x1bfed8da ; sl=0x7fdd ; sb=0x20387730 ; r8=0x7fdd ; r7=0xff8069f0 ; r6=0xf3 -> 0x163a38 ; r5=0xf5e616a0 ; r4=0x7ffc ; sp=0x100000004 -> 0x1eb4ee6f
|    ::||   ; CODE XREF from 0x0003db22 (sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20)
|    ::|`-> 0x0003dc5e      7047           bx lr                       ; pc=0x3dc4a -> 0x10cf1a2
|    ::|    ; CODE XREF from 0x0003dc56 (sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20)
|    ::`--> 0x0003dc60      043a           subs r2, 4                  ; r2=0xfffffffb -> 0xe616a000 ; zf=0x0
|    ::     0x0003dc62      bff35f8f       dmb sy
|    ::     ; CODE XREF from 0x0003dc72 (sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20)
|    :: .-> 0x0003dc66      52e8003f       ldrex r3, [r2]              ; arg3
|    :: :   0x0003dc6a      581e           subs r0, r3, 1              ; r0=0x1953d3 -> 0x464c457f ; zf=0x0
|    :: :   0x0003dc6c      42e80004       strex r4, r0, [r2]
|    :: :   0x0003dc70      002c           cmp r4, 0                   ; zf=0x0 ; zf=0x0
|    :: `=< 0x0003dc72      f8d1           bne 0x3dc66                 ; pc=0x3dc66 -> 0x3f00e852 ; likely
|    ::     0x0003dc74      002b           cmp r3, 0                   ; zf=0x0 ; zf=0x0
|    ::     0x0003dc76      bff35f8f       dmb sy
|    `====< 0x0003dc7a      eddc           bgt 0x3dc58                 ; pc=0x3dc58 -> 0xe8bdb005 ; likely
|     :     0x0003dc7c      0846           mov r0, r1                  ; r0=0xfffffff3 -> 0x8069f000
|     :     0x0003dc7e      4946           mov r1, sb                  ; r1=0x20387730
|     :     0x0003dc80      15f1aafd       bl fcn.001537d8             ; lr=0x3dc88 -> 0x21006802 ; pc=0x1537d8 -> 0xbdbcf7e3
\     `===< 0x0003dc84      e8e7           b 0x3dc58                   ; pc=0x3dc58 -> 0xe8bdb005

int com_nianticlabs_pokemongoplus_SfidaPeripheral_b20(int arg)
{
    if (arg == 0)
    {
        return arg;
    }
}
