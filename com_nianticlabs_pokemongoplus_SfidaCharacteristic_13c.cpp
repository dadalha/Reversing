/ (fcn) sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c 320
|   sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c (int arg3, int arg4);
|           ; var int local_0h @ sp+0x0
|           ; arg int arg3 @ r2
|           ; arg int arg4 @ r3
|           ; CALL XREF from 0x00038840 (sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit)
|           0x0003d13c      0028           cmp r0, 0                   ; zf=0x1 -> 0x1464c45 ; zf=0x1 -> 0x1464c45
|       ,=< 0x0003d13e      00f08980       beq.w 0x3d254               ; pc=0x3d254 -> 0x3a044770 ; likely
|       |   0x0003d142      2de9f043       push.w {r4, r5, r6, r7, r8, sb, lr} ; sp=0xffffffffffffffe4
|       |   0x0003d146      85b0           sub sp, 0x14                ; sp=0xffffffd0
|       |   0x0003d148      0446           mov r4, r0                  ; r4=0x0
|       |   0x0003d14a      0df10808       add.w r8, sp, 8             ; r8=0xffffffd8
|       |   0x0003d14e      fff775fe       bl sub.ZI_V_e3c             ; lr=0x3d156 -> 0x4479a803 ; pc=0x3ce3c -> 0x4ff0e92d
|       |   0x0003d152      4a49           ldr r1, aav.0x00131b4c      ; [0x3d27c:4]=0x131b4c aav.0x00131b4c ; r1=0x131b4c "pG"
|       |   ;-- aav.0x0003d154:
|       |   ; UNKNOWN XREF from 0x00146398 (aav.0x0014636c + 44)
|       |   0x0003d154      4246           mov r2, r8                  ; r2=0xffffffd8
|       |   0x0003d156      03a8           add r0, sp, 0xc             ; const char *s ; r0=0xffffffdc -> 0x464c457f
|       |   0x0003d158      7944           add r1, pc                  ; 0x16eca8 ; "com/nianticlabs/pokemongoplus/SfidaCharacteristic" ; r1=0x16eca8 -> 0x2f6d6f63 str.com_nianticlabs_pokemongoplus_SfidaCharacteristic
|       |   0x0003d15a      494d           ldr r5, aav.0x00131b7c      ; [0x3d280:4]=0x131b7c aav.0x00131b7c ; r5=0x131b7c -> 0x46080b01
|       |   0x0003d15c      17f17ef8       bl sub.strlen_25c           ; lr=0x3d164 -> 0xf005447d ; pc=0x15425c -> 0x460cb570
|       |   |                                                            ; size_t strlen(const char * s : 0xffffffdc =)
|       |   ; CODE XREF from 0x0003d45c (sub.AndroidService::CacheUuid_314 + 328)
|       |   0x0003d160      0399           ldr r1, [sp, 0xc]           ; r1=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d162      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d164      7d44           add r5, pc                  ; 0x16ece4 ; "()Ljava/lang/String;" ; r5=0x16ece4 -> 0x6a4c2928 str.Ljava_lang_String
|       |   0x0003d166      05f073fa       bl aav.0x00042650           ; lr=0x3d16e "{D" ; pc=0x42650 -> 0x43f0e92d
|       |   0x0003d16a      464b           ldr r3, aav.0x00131b6a      ; [0x3d284:4]=0x131b6a aav.0x00131b6a ; r3=0x131b6a -> 0x37ff060
|       |   0x0003d16c      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d16e      7b44           add r3, pc                  ; 0x16ecdc ; "getUuid" ; r3=0x16ecdc -> 0x55746567 str.getUuid
|       |   0x0003d170      0095           str r5, [sp]
|       |   0x0003d172      dff81491       ldr.w sb, aav.0x0014f3cc    ; [0x3d288:4]=0x14f3cc aav.0x0014f3cc ; sb=0x14f3cc -> 0x46041a82
|       |   0x0003d176      454d           ldr r5, aav.0x00131b8c      ; [0x3d28c:4]=0x131b8c aav.0x00131b8c ; r5=0x131b8c -> 0x4608d101
|       |   0x0003d178      f944           add sb, pc                  ; sb=0x18c548 -> 0x464c457f
|       |   0x0003d17a      454f           ldr r7, aav.0x00131292      ; [0x3d290:4]=0x131292 aav.0x00131292 ; r7=0x131292 -> 0xc0cf853
|       |   0x0003d17c      7d44           add r5, pc                  ; 0x16ed0c ; "()J" ; r5=0x16ed0c -> 0x4a2928 str.J
|       |   0x0003d17e      7f44           add r7, pc                  ; r7=0x16e414 "()V"
|       |   0x0003d180      0646           mov r6, r0                  ; r6=0x0
|       |   0x0003d182      0146           mov r1, r0                  ; r1=0x0
|       |   0x0003d184      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d186      05f0c3fc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d18e "1F{D" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d18a      424b           ldr r3, aav.0x00131b68      ; [0x3d294:4]=0x131b68 aav.0x00131b68 ; r3=0x131b68 -> 0xf060dd06
|       |   ;-- aav.0x0003d18c:
|       |   ; UNKNOWN XREF from 0x00146364 (aav.0x00146338 + 44)
|       |   0x0003d18c      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d18e      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d190      7b44           add r3, pc                  ; 0x16ecfc ; "getLongValue" ; r3=0x16ecfc -> 0x4c746567 str.getLongValue
|       |   0x0003d192      0095           str r5, [sp]
|       |   0x0003d194      c9f82c00       str.w r0, [sb, 0x2c]
|       |   0x0003d198      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d19a      05f0b9fc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d1a2 -> 0x46314b3e ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d19e      dff8f8e0       ldr.w lr, aav.0x00131b72    ; [0x3d298:4]=0x131b72 aav.0x00131b72 ; lr=0x131b72 -> 0x3b01f802
|       |   0x0003d1a2      3e4b           ldr r3, aav.0x00131b5e      ; [0x3d29c:4]=0x131b5e aav.0x00131b5e ; r3=0x131b5e -> 0xf8020308
|       |   0x0003d1a4      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d1a6      fe44           add lr, pc                  ; lr=0x16ed1c "()[B"
|       |   0x0003d1a8      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d1aa      cdf800e0       str.w lr, [sp]
|       |   0x0003d1ae      7b44           add r3, pc                  ; 0x16ed10 ; "getValue" ; r3=0x16ed10 -> 0x56746567 str.getValue
|       |   ;-- aav.0x0003d1b0:
|       |   ; UNKNOWN XREF from 0x00146334 (aav.0x00146310 + 36)
|       |   0x0003d1b0      c9f83000       str.w r0, [sb, 0x30]
|       |   0x0003d1b4      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d1b6      05f0abfc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d1be "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d1ba      394b           ldr r3, aav.0x00131b5e      ; [0x3d2a0:4]=0x131b5e aav.0x00131b5e ; r3=0x131b5e -> 0xf8020308
|       |   0x0003d1bc      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d1be      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d1c0      0097           str r7, [sp]
|       |   0x0003d1c2      7b44           add r3, pc                  ; 0x16ed24 ; "notifyValueChanged" ; r3=0x16ed24 -> 0x69746f6e str.notifyValueChanged
|       |   0x0003d1c4      c9f83400       str.w r0, [sb, 0x34]
|       |   0x0003d1c8      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d1ca      05f0a1fc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d1d2 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d1ce      354b           ldr r3, aav.0x00131b5e      ; [0x3d2a4:4]=0x131b5e aav.0x00131b5e ; r3=0x131b5e -> 0xf8020308
|       |   0x0003d1d0      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|       |   0x0003d1d2      3146           mov r1, r6                  ; r1=0x0
|       |   0x0003d1d4      0097           str r7, [sp]
|       |   0x0003d1d6      7b44           add r3, pc                  ; 0x16ed38 ; "cancelNotify" ; r3=0x16ed38 -> 0x636e6163 str.cancelNotify
|       |   0x0003d1d8      .dword 0x0008f8c9 ; aav.0x0008f8c8
|       |   0x0003d1dc      2046           mov r0, r4                  ; r0=0x0
|       |   0x0003d1de      05f097fc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d1e6 -> 0x46314b31 ; pc=0x42b10 -> 0x4ff0e92d
|       |   0x0003d1e2      dff8c4e0       ldr.w lr, aav.0x00131a06    ; [0x3d2a8:4]=0x131a06 aav.0x00131a06 ; lr=0x131a06 -> 0xbfd8287f
|      ||   0x0003d1e6      314b           ldr r3, aav.0x00131b52      ; [0x3d2ac:4]=0x131b52 aav.0x00131b52 ; r3=0x131b52 -> 0xd1012800
|      ||   0x0003d1e8      3146           mov r1, r6                  ; r1=0x0
|      ||   0x0003d1ea      fe44           add lr, pc                  ; 0x16ebf4 ; "([B)V" ; lr=0x16ebf4 -> 0x29425b28 str.B_V
|      ||   0x0003d1ec      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|      ||   0x0003d1ee      cdf800e0       str.w lr, [sp]
|      ||   0x0003d1f2      7b44           add r3, pc                  ; 0x16ed48 ; "writeByteArray" ; r3=0x16ed48 -> 0x74697277 str.writeByteArray
|      ||   0x0003d1f4      .dword 0x000cf8c9 ; aav.0x000cf8c8
|      ||   0x0003d1f8      2046           mov r0, r4                  ; r0=0x0
|      ||   0x0003d1fa      05f089fc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d202 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|      ||   0x0003d1fe      2c4b           ldr r3, aav.0x00131b4e      ; [0x3d2b0:4]=0x131b4e aav.0x00131b4e ; r3=0x131b4e -> 0x68c0bf00
|      ||   0x0003d200      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|      ||   0x0003d202      3146           mov r1, r6                  ; r1=0x0
|      ||   0x0003d204      0097           str r7, [sp]
|      ||   0x0003d206      7b44           add r3, pc                  ; 0x16ed58 ; "readValue" ; r3=0x16ed58 -> 0x64616572 str.readValue
|      ||   0x0003d208      .dword 0x0010f8c9 ; aav.0x0010f8c8
|      ||   0x0003d20c      2046           mov r0, r4                  ; r0=0x0
|      ||   0x0003d20e      05f07ffc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d216 "1F" ; pc=0x42b10 -> 0x4ff0e92d
|      ||   0x0003d212      284b           ldr r3, aav.0x00131b46      ; [0x3d2b4:4]=0x131b46 aav.0x00131b46 ; r3=0x131b46 -> 0x46082c09
|      ||   0x0003d214      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|      ||   0x0003d216      3146           mov r1, r6                  ; r1=0x0
|      ||   0x0003d218      0097           str r7, [sp]
|      ||   0x0003d21a      7b44           add r3, pc                  ; 0x16ed64 ; "enableNotify" ; r3=0x16ed64 -> 0x62616e65 str.enableNotify
|      ||   0x0003d21c      .dword 0x0014f8c9 ; aav.0x0014f8c8
|      ||   0x0003d220      2046           mov r0, r4                  ; r0=0x0
|      ||   0x0003d222      05f075fc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d22a "1F" ; pc=0x42b10 -> 0x4ff0e92d
|      ||   0x0003d226      244b           ldr r3, aav.0x00131b42      ; [0x3d2b8:4]=0x131b42 aav.0x00131b42 ; r3=0x131b42 -> 0xf8013109
|      ||   0x0003d228      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|      ||   0x0003d22a      3146           mov r1, r6                  ; r1=0x0
|      ||   0x0003d22c      0097           str r7, [sp]
|      ||   0x0003d22e      7b44           add r3, pc                  ; 0x16ed74 ; "disableNotify" ; r3=0x16ed74 -> 0x61736964 str.disableNotify
|      ||   0x0003d230      .dword 0x0000f8c9 ; aav.0x0000f8c8
|      ||   0x0003d234      2046           mov r0, r4                  ; r0=0x0
|      ||   0x0003d236      05f06bfc       bl sub.Android_JNI:_Method_b10 ; lr=0x3d23e -> 0x10cf1a2 ; pc=0x42b10 -> 0x4ff0e92d
|      ||   0x0003d23a      039a           ldr r2, [sp, 0xc]           ; r2=0x7ffc "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|      ||   0x0003d23c      1f4b           ldr r3, aav.0x0014e6fa      ; [0x3d2bc:4]=0x14e6fa aav.0x0014e6fa ; r3=0x14e6fa -> 0x9b22ae41
|      ||   0x0003d23e      a2f10c01       sub.w r1, r2, 0xc           ; 0x11f4 ; u"\"\b\u4285" ; r1=0x7ff0 "foPPvj"
|      ||   0x0003d242      7b44           add r3, pc                  ; 0x18b940 ; aav.0x0018b940 ; r3=0x18b940
|      ||   0x0003d244      1b68           ldr r3, [r3]                ; 0x18b940 ; aav.0x0018b940 ; arg4 ; r3=0x1953d4 -> 0x464c457f
|      ||   0x0003d246      9942           cmp r1, r3                  ; zf=0x0 ; zf=0x0
|      ||   0x0003d248      .dword 0x0004f8c9 ; aav.0x0004f8c8
|      ||   0x0003d24c      03d1           bne 0x3d256                 ; pc=0x3d256 -> 0xf3bf3a04 ; likely
|      ||   ; CODE XREF from 0x0003d270 (sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c)
|      ||   ; CODE XREF from 0x0003d27a (sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c)
|    ..---> 0x0003d24e      05b0           add sp, 0x14                ; sp=0xffffffe8 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|    ::||   0x0003d250      bde8f083       pop.w {r4, r5, r6, r7, r8, sb, pc} ; pc=0x7ffc ; sb=0x1bfed8da ; r8=0x7fdd ; r7=0x20387730 ; r6=0x7fdd ; r5=0xff8069e0 ; r4=0xf3 -> 0x163a38 ; sp=0x100000004 -> 0xf5e616a0
|    ::||   ; CODE XREF from 0x0003d13e (sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c)
|    ::|`-> 0x0003d254      7047           bx lr                       ; pc=0x3d23e -> 0x10cf1a2
|    ::|    ; CODE XREF from 0x0003d24c (sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c)
|    ::|    0x0003d256      043a           subs r2, 4                  ; r2=0x7ff8 "ZNK10__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_k" ; zf=0x0
|    ::|    0x0003d258      bff35f8f       dmb sy
|    ::|    ; CODE XREF from 0x0003d268 (sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c)
|    ::|.-> 0x0003d25c      52e8003f       ldrex r3, [r2]              ; arg3
|    ::|:   0x0003d260      581e           subs r0, r3, 1              ; r0=0x1953d3 -> 0x464c457f ; zf=0x0
|    ::|:   0x0003d262      42e80004       strex r4, r0, [r2]
|    ::|:   0x0003d266      002c           cmp r4, 0                   ; zf=0x0 ; zf=0x0
|    ::|`=< 0x0003d268      f8d1           bne 0x3d25c                 ; pc=0x3d25c -> 0x3f00e852 ; likely
|    ::|    0x0003d26a      002b           cmp r3, 0                   ; zf=0x0 ; zf=0x0
|    ::|    0x0003d26c      bff35f8f       dmb sy
|    `====< 0x0003d270      eddc           bgt 0x3d24e                 ; pc=0x3d24e -> 0xe8bdb005 ; likely
|     :|    0x0003d272      0846           mov r0, r1                  ; r0=0x7ff0 "foPPvj"
|     :|    0x0003d274      4146           mov r1, r8                  ; r1=0x7fdd "_catchEPKSt9type_infoPPvj"
|     :|    0x0003d276      16f1affa       bl fcn.001537d8             ; lr=0x3d27e -> 0x1b7c0013 ; pc=0x1537d8 -> 0xbdbcf7e3
\     `===< 0x0003d27a      e8e7           b 0x3d24e                   ; pc=0x3d24e -> 0xe8bdb005

int Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit(int arg)
{
    if (arg == 0)
    {
        return arg;
    }
}
