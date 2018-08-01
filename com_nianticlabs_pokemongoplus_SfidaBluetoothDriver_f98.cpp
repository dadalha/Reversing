/ (fcn) sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98 216
|   sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98 (int arg3, int arg4);
|           ; var int local_0h @ sp+0x0
|           ; arg int arg3 @ r2
|           ; arg int arg4 @ r3
|           ; CALL XREF from 0x0003882e (sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit)
|           0x0003df98      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|       ,=< 0x0003df9a      55d0           beq 0x3e048                 ; pc=0x3e048 -> 0x3a044770 ; likely
|       |   0x0003df9c      2de9f043       push.w {r4, r5, r6, r7, r8, sb, lr} ; sp=0xffffffffffffffe4
|       |   0x0003dfa0      85b0           sub sp, 0x14                ; sp=0xffffffd0
|       |   0x0003dfa2      0446           mov r4, r0                  ; r4=0x0
|       |   0x0003dfa4      0df10809       add.w sb, sp, 8             ; sb=0xffffffd8
|       |   0x0003dfa8      fff736ff       bl sub.nativeStartCallback_e18 ; lr=0x3dfb0 -> 0x4479a803 ; pc=0x3de18 -> 0xb08fb5f0
|       |   0x0003dfac      3049           ldr r1, aav.0x0013113e      ; [0x3e070:4]=0x13113e aav.0x0013113e ; r1=0x13113e -> 0x477060c3
|       |   0x0003dfae      4a46           mov r2, sb                  ; r2=0xffffffd8
|       |   0x0003dfb0      03a8           add r0, sp, 0xc             ; const char *s ; r0=0xffffffdc -> 0x464c457f
|       |   0x0003dfb2      7944           add r1, pc                  ; 0x16f0f4 ; "com/nianticlabs/pokemongoplus/SfidaBluetoothDriver" ; r1=0x16f0f4 -> 0x2f6d6f63 str.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver
|       |   0x0003dfb4      2f4f           ldr r7, aav.0x00130e3e      ; [0x3e074:4]=0x130e3e aav.0x00130e3e ; r7=0x130e3e -> 0xe894d0c7
|       |   0x0003dfb6      16f151f9       bl sub.strlen_25c           ; lr=0x3dfbe -> 0xf004447f ; pc=0x15425c -> 0x460cb570
|       |   |                                                            ; size_t strlen(const char * s : 0xffffffdc =)
|       |   0x0003dfba      0399           ldr r1, [sp, 0xc]           ; r1=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003dfbc      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dfbe      7f44           add r7, pc                  ; 0x16ee00 ; "()Z" ; r7=0x16ee00 -> 0x5a2928 str.Z
|       |   0x0003dfc0      04f046fb       bl aav.0x00042650           ; lr=0x3dfc8 "{D" ; pc=0x42650 -> 0x43f0e92d
|       |   0x0003dfc4      2c4b           ldr r3, aav.0x0013115c      ; [0x3e078:4]=0x13115c aav.0x0013115c ; r3=0x13115c -> 0x460d6803
|       |   0x0003dfc6      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003dfc8      7b44           add r3, pc                  ; 0x16f128 ; "IsScanning" ; r3=0x16f128 -> 0x63537349 str.IsScanning
|       |   0x0003dfca      0097           str r7, [sp]
|       |   0x0003dfcc      2b4d           ldr r5, aav.0x0014e572      ; [0x3e07c:4]=0x14e572 aav.0x0014e572 ; r5=0x14e572 -> 0x429368c2
|       |   0x0003dfce      dff8b080       ldr.w r8, aav.0x0013043a    ; [0x3e080:4]=0x13043a aav.0x0013043a ; r8=0x13043a -> 0x2000d1d2
|       |   0x0003dfd2      7d44           add r5, pc                  ; r5=0x18c548 -> 0x464c457f
|       |   0x0003dfd4      2b4f           ldr r7, aav.0x00130478      ; [0x3e084:4]=0x130478 aav.0x00130478 ; r7=0x130478 -> 0xe00f4605
|       |   0x0003dfd6      f844           add r8, pc                  ; r8=0x16e414 "()V"
|       |   0x0003dfd8      7f44           add r7, pc                  ; 0x16e454 ; "(Ljava/lang/String;)V" ; r7=0x16e454 -> 0x616a4c28 str.Ljava_lang_String__V
|       |   0x0003dfda      0646           mov r6, r0                  ; r6=0x0
|       |   0x0003dfdc      0146           mov r1, r0                  ; r1=0x0
|       |   0x0003dfde      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dfe0      04f096fd       bl sub.Android_JNI:_Method_b10 ; lr=0x3dfe8 -> 0xf8cd4631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dfe4      284b           ldr r3, aav.0x00131142      ; [0x3e088:4]=0x131142 aav.0x00131142 ; r3=0x131142 -> 0x2001bf00
|       |   0x0003dfe6      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003dfe8      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dfea      cdf80080       str.w r8, [sp]
|       |   0x0003dfee      7b44           add r3, pc                  ; 0x16f134 ; "startDriver" ; r3=0x16f134 -> 0x72617473 str.startDriver
|       |   0x0003dff0      e866           str r0, [r5, 0x6c]
|       |   0x0003dff2      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003dff4      04f08cfd       bl sub.Android_JNI:_Method_b10 ; lr=0x3dffc -> 0xf8cd4631 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003dff8      244b           ldr r3, aav.0x0013113a      ; [0x3e08c:4]=0x13113a aav.0x0013113a ; r3=0x13113a "pG"
|       |   0x0003dffa      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003dffc      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003dffe      cdf80080       str.w r8, [sp]
|       |   0x0003e002      7b44           add r3, pc                  ; 0x16f140 ; "stopDriver" ; r3=0x16f140 -> 0x706f7473 str.stopDriver
|       |   0x0003e004      2867           str r0, [r5, 0x70]
|       |   0x0003e006      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003e008      04f082fd       bl sub.Android_JNI:_Method_b10 ; lr=0x3e010 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003e00c      204b           ldr r3, aav.0x00131134      ; [0x3e090:4]=0x131134 aav.0x00131134 ; r3=0x131134 -> 0x47702001
|       |   0x0003e00e      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003e010      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003e012      0097           str r7, [sp]
|       |   0x0003e014      7b44           add r3, pc                  ; 0x16f14c ; "startScanning" ; r3=0x16f14c -> 0x72617473 str.startScanning
|       |   0x0003e016      6867           str r0, [r5, 0x74]
|       |   0x0003e018      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003e01a      04f079fd       bl sub.Android_JNI:_Method_b10 ; lr=0x3e022 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003e01e      1d4b           ldr r3, aav.0x00131132      ; [0x3e094:4]=0x131132 aav.0x00131132 ; r3=0x131132 -> 0x2001bd70
|       |   0x0003e020      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003e022      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003e024      0097           str r7, [sp]
|       |   0x0003e026      7b44           add r3, pc                  ; 0x16f15c ; "stopScanning" ; r3=0x16f15c -> 0x706f7473 str.stopScanning
|       |   0x0003e028      a867           str r0, [r5, 0x78]
|       |   0x0003e02a      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003e02c      04f070fd       bl sub.Android_JNI:_Method_b10 ; lr=0x3e034 -> 0x10cf1a2 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003e030      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003e032      194b           ldr r3, aav.0x0014d904      ; [0x3e098:4]=0x14d904 aav.0x0014d904 ; r3=0x14d904 -> 0x461139ff
|       |   0x0003e034      a2f10c01       sub.w r1, r2, 0xc           ; r1=0x7ff0 "foPPvj"
|       |   0x0003e038      7b44           add r3, pc                  ; 0x18b940 ; aav.0x0018b940 ; r3=0x18b940
|       |   0x0003e03a      1b68           ldr r3, [r3]                ; 0x18b940 ; aav.0x0018b940 ; arg4 ; r3=0x1953d4 -> 0x464c457f
|       |   0x0003e03c      9942           cmp r1, r3                  ; zf=0x0 ; zf=0x0
|       |   0x0003e03e      a862           str r0, [r5, 0x28]
|      ,==< 0x0003e040      03d1           bne 0x3e04a                 ; pc=0x3e04a -> 0xf3bf3a04 ; likely
|      ||   ; CODE XREF from 0x0003e064 (sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98)
|      ||   ; CODE XREF from 0x0003e06e (sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98)
|    ..---> 0x0003e042      05b0           add sp, 0x14                ; sp=0xffffffe8 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|    ::||   0x0003e044      bde8f083       pop.w {r4, r5, r6, r7, r8, sb, pc} ; pc=0x7ffc ; sb=0x1bfed8da ; r8=0x7fdd ; r7=0x20387730 ; r6=0x7fdd ; r5=0xff8069e0 ; r4=0xf3 -> 0x163a38 ; sp=0x100000004 -> 0xf5e616a0
|    ::||   ; CODE XREF from 0x0003df9a (sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98)
|    ::|`-> 0x0003e048      7047           bx lr                       ; pc=0x3e034 -> 0x10cf1a2
|    ::|    ; CODE XREF from 0x0003e040 (sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98)
|    ::`--> 0x0003e04a      043a           subs r2, 4                  ; r2=0x7ff8 "ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_k" ; zf=0x0
|    ::     0x0003e04c      bff35f8f       dmb sy
|    ::     ; CODE XREF from 0x0003e05c (sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98)
|    :: .-> 0x0003e050      52e8003f       ldrex r3, [r2]              ; arg3
|    :: :   0x0003e054      581e           subs r0, r3, 1              ; r0=0x1953d3 -> 0x464c457f ; zf=0x0
|    :: :   0x0003e056      42e80004       strex r4, r0, [r2]
|    :: :   0x0003e05a      002c           cmp r4, 0                   ; zf=0x0 ; zf=0x0
|    :: `=< 0x0003e05c      f8d1           bne 0x3e050                 ; pc=0x3e050 -> 0x3f00e852 ; likely
|    ::     0x0003e05e      002b           cmp r3, 0                   ; zf=0x0 ; zf=0x0
|    ::     0x0003e060      bff35f8f       dmb sy
|    `====< 0x0003e064      eddc           bgt 0x3e042                 ; pc=0x3e042 -> 0xe8bdb005 ; likely
|     :     0x0003e066      0846           mov r0, r1                  ; r0=0x7ff0 "foPPvj"
|     :     0x0003e068      4946           mov r1, sb                  ; r1=0x1bfed8da
|     :     0x0003e06a      15f1b5fb       bl fcn.001537d8             ; lr=0x3e072 -> 0xe3e0013 ; pc=0x1537d8 -> 0xbdbcf7e3
|     |     ;-- aav.0x0003e06e:
|     |     ; UNKNOWN XREF from 0x0014e168 (aav.0x0014e0dc + 140)
\     `===< 0x0003e06e      e8e7           b 0x3e042                   ; pc=0x3e042 -> 0xe8bdb005


int com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98(int arg)
{
    if (arg == 0)
    {
        return arg;
    }

    
}