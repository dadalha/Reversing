
/ (fcn) sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit 74
|   sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit (int arg1, int arg4);
|           ; arg int arg1 @ r0
|           ; arg int arg4 @ r3
|           ; UNKNOWN XREF from 0x0000064c (aav.0x0000064c + 0)
|           0x00038804      30b5           push {r4, r5, lr}           ; sp=0xfffffffffffffff4
|           0x00038806      83b0           sub sp, 0xc                 ; sp=0xffffffe8 (pstr 0x00007ffc) "0__cxxabiv117__class_type_info12__do_dyncastEiNS0_10__sub_kindE"
|           0x00038808      0368           ldr r3, [r0]                ; arg1
|           0x0003880a      02a9           add r1, sp, 8               ; 0x28a4 ; u"!\x0f\u60cb" ; r1=0xfffffff0 (pstr 0x00007fdd) "_catchEPKSt9type_infoPPvj"
|           0x0003880c      0025           movs r5, 0                  ; r5=0x0 ; zf=0x1 -> 0x1464c45
|           0x0003880e      0446           mov r4, r0                  ; r4=0x0
|           0x00038810      41f8045d       str r5, [r1, -0x4]!         ; r1=0xffffffec -> 0x464c457f
|           0x00038814      d3f86c33       ldr.w r3, [r3, 0x36c]       ; arg4 ; r3=0x2a719 "B"
|           0x00038818      9847           blx r3                      ; lr=0x3881e -> 0xfd51f009 ; pc=0x2a719 "B" ; CALL: 0x7fdd, 0x0, 0x7ffc, 0x1bfed8da
|       ,=< 0x0003881a      20b1           cbz r0, 0x38826             ; pc=0x38826 -> 0xf0099801 ; likely
|       |   0x0003881c      2846           mov r0, r5                  ; r0=0x0
|       |   0x0003881e      09f051fd       bl fcn.000422c4             ; lr=0x38826 -> 0xf0099801 ; pc=0x422c4 -> 0x447b4b01
|       |   0x00038822      03b0           add sp, 0xc                 ; 0x28a8 ; str.NS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb1ELb0ELb1EEEE21_M_inse ; sp=0xfffffff4 -> 0x464c457f
|       |   0x00038824      30bd           pop {r4, r5, pc}            ; pc=0x0 ; r5=0x7ffc ; r4=0x1bfed8da ; sp=0x100000000 -> 0x7fdd
|       |   ; CODE XREF from 0x0003881a (sym.Java_com_nianticlabs_pokemongoplus_bridge_BackgroundBridge_nativeInit)
|       `-> 0x00038826      0198           ldr r0, [sp, 4]             ; r0=0x10101 -> 0x17001853
|           0x00038828      09f04cfd       bl fcn.000422c4             ; lr=0x38830 -> 0x4620fbb3 ; pc=0x422c4 -> 0x447b4b01
|           0x0003882c      2046           mov r0, r4                  ; r0=0x1bfed8da
|           0x0003882e      05f0b3fb       bl sub.com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98 ; lr=0x38836 -> 0x4620f974 ; pc=0x3df98 -> 0xd0552800
|           0x00038832      2046           mov r0, r4                  ; r0=0x1bfed8da
|           0x00038834      05f074f9       bl sub.com_nianticlabs_pokemongoplus_SfidaPeripheral_b20 ; lr=0x3883c -> 0x4620fe35 ; pc=0x3db20 -> 0xf0002800
|           0x00038838      2046           mov r0, r4                  ; r0=0x1bfed8da
|           0x0003883a      04f035fe       bl sub.vDpOT_4a8            ; lr=0x38842 -> 0x4620fc7c ; pc=0x3d4a8 -> 0xd05f2800
|           0x0003883e      2046           mov r0, r4                  ; r0=0x1bfed8da
|           0x00038840      04f07cfc       bl sub.com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c ; lr=0x38848 -> 0xb003f857 ; pc=0x3d13c -> 0xf0002800
|           0x00038844      2046           mov r0, r4                  ; r0=0x1bfed8da
|           0x00038846      09f057f8       bl sub.com_nianticlabs_pokemongoplus_util_Crypt_8f8 ; lr=0x3884e -> 0xe92dbf00 ; pc=0x418f8 -> 0x41f0e92d
|           0x0003884a      03b0           add sp, 0xc                 ; 0x28c0 ; str. ; sp=0xc -> 0x464c457f aav.0x0000000c
\           0x0003884c      30bd           pop {r4, r5, pc}            ; pc=0x0 ; r5=0x280003 ; r4=0x1 -> 0x1464c45 ; sp=0x18 -> 0x464c457f aav.0x00000018


| -Ch     +0h (local_0h)
|
| -8h     +4h (local_4h)
|
| -4h     +8h (local_8h)
|
| SP0     +Ch


void BackgroundBridge_NativeInit(JNIEnv* env, jobject cls)
{
    intptr_t local_4h, local_Ch;
    JavaVM local_8h;
    
    local_4h = 0; // [r1 - 0x4]! = [r1 = sp + 8h - 4h] = [r1 = sp + 4h] = [r1 = &local_4h] = local_4h
    
    jint ret = env->GetJavaVM(env, &local_8h)
    if (ret != 0)
    {
        return fcn000422c4(local_4h) // Where `local_4h = 0`
    }

    fcn000422c4(local_4h);
    com_nianticlabs_pokemongoplus_SfidaBluetoothDriver_f98(0);
    com_nianticlabs_pokemongoplus_SfidaPeripheral_b20(0);
    vDpOT_4a8(0);
    com_nianticlabs_pokemongoplus_SfidaCharacteristic_13c(0);
    com_nianticlabs_pokemongoplus_util_Crypt_8f8(0);
}
