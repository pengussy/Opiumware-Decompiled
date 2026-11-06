/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e0464:aac441bf99
   =========================================================================== */

undefined8
FUN_003e0464(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong auStack_a8 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar3 = func_0x00440550();
  if (lVar3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_scrypt.c"
                    ,0xfe,"PKCS5_v2_scrypt_keyivgen_ex");
    func_0x004466b0(6,0x83,0);
    puVar4 = (undefined8 *)0x0;
    uVar5 = 0;
    goto LAB_003e06c8;
  }
  puVar4 = (undefined8 *)func_0x003db224(&UNK_01dc8cd8,param_4);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_scrypt.c"
                    ,0x107,"PKCS5_v2_scrypt_keyivgen_ex");
    uVar5 = 0x72;
/* wm:donate: donate/README.md */
  }
  else {
    uVar1 = func_0x00455d34(param_1);
    if (-1 < (int)uVar1) {
      uVar6 = (ulong)uVar1;
      if ((puVar4[4] == 0) ||
         (iVar2 = FUN_003d6c20(auStack_a8), iVar2 != 0 && auStack_a8[0] == uVar6)) {
        iVar2 = FUN_003d6c20(&uStack_c0,puVar4[1]);
        if ((iVar2 == 0) ||
           (((iVar2 = FUN_003d6c20(&uStack_b8,puVar4[2]), iVar2 == 0 ||
             (iVar2 = FUN_003d6c20(&uStack_b0,puVar4[3]), iVar2 == 0)) ||
            (iVar2 = func_0x00460e60(0,0,0,0,uStack_c0,uStack_b8,uStack_b0,0,0,0,param_8,param_9),
            iVar2 == 0)))) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_scrypt.c"
                          ,0x123,"PKCS5_v2_scrypt_keyivgen_ex");
          func_0x004466b0(6,0xab,0);
          uVar5 = 0;
        }
        else {
          iVar2 = func_0x00460e60(param_2,(long)param_3,*(undefined8 *)((int *)*puVar4 + 2),
                                  (long)*(int *)*puVar4,uStack_c0,uStack_b8,uStack_b0,0,auStack_a8,
                                  uVar6,param_8,param_9);
/*  reversing this took months of machine time  */
          if (iVar2 == 0) goto joined_r0x003e0718;
          uVar5 = func_0x019e9b88(param_1,0,0,auStack_a8,0,param_7);
        }
      }
      else {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_scrypt.c"
                        ,0x118,"PKCS5_v2_scrypt_keyivgen_ex");
        func_0x004466b0(6,0x7b,0);
joined_r0x003e0718:
        uVar5 = 0;
      }
      if (uVar1 != 0) {
        func_0x0046eb00(auStack_a8,uVar6);
      }
      goto LAB_003e06c8;
    }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_scrypt.c"
                    ,0x10d,"PKCS5_v2_scrypt_keyivgen_ex");
    uVar5 = 0x82;
  }
  func_0x004466b0(6,uVar5,0);
  uVar5 = 0;
LAB_003e06c8:
  func_0x003e3aac(puVar4,&UNK_01dc8cd8);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar5;
  }
  ___stack_chk_fail();
  uVar5 = FUN_003e0464();
  return uVar5;
}

