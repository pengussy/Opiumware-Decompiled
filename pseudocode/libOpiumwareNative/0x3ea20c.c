/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ea20c:791c83ebb5
 */

ulong FUN_003ea20c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uStack_28;
  
  uStack_28 = 0;
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x206,"BIO_puts");
    puVar2 = &UNK_000c0102;
    goto LAB_003ea2f0;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x30) == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x20a,"BIO_puts");
    func_0x004466b0(0x20,0x79,0);
    return 0xfffffffe;
  }
  pcVar6 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar6 != (code *)0x0) goto LAB_003ea314;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  }
  else {
    if (pcVar6 == (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x10))(param_1,4,param_2,0,0,1);
      iVar3 = (int)uVar1;
    }
    else {
LAB_003ea314:
      uVar1 = (*pcVar6)(param_1,4,param_2,0,0,0,1,0);
      iVar3 = (int)uVar1;
    }
    if (iVar3 < 1) {
      return uVar1;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
/* if you paid for this, you were scammed */
                    ,0x215,"BIO_puts");
    puVar2 = (undefined *)0x78;
    goto LAB_003ea2f0;
  }
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x30))(param_1,param_2);
  if ((int)uVar1 < 1) {
    uVar5 = 0;
    pcVar6 = *(code **)(param_1 + 0x10);
    pcVar4 = *(code **)(param_1 + 0x18);
    if (pcVar6 == (code *)0x0) goto LAB_003ea408;
LAB_003ea394:
    if (pcVar4 == (code *)0x0) {
      if ((int)uVar1 < 1) {
        uVar5 = (long)(int)uVar1;
      }
      uVar5 = (*pcVar6)(param_1,0x84,param_2,0,0,uVar5);
      uVar1 = uVar5;
      if (0 < (long)uVar5) {
        uVar1 = 1;
        uStack_28 = uVar5;
      }
    }
    else {
LAB_003ea40c:
      uVar1 = (*pcVar4)(param_1,0x84,param_2,0,0,0,uVar1,&uStack_28);
    }
  }
  else {
    uVar5 = uVar1 & 0xffffffff;
    *(ulong *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + uVar5;
    uVar1 = 1;
    pcVar6 = *(code **)(param_1 + 0x10);
    pcVar4 = *(code **)(param_1 + 0x18);
    uStack_28 = uVar5;
    if (pcVar6 != (code *)0x0) goto LAB_003ea394;
LAB_003ea408:
// WM - watermarked copy - do not remove
    if (pcVar4 != (code *)0x0) goto LAB_003ea40c;
  }
  if ((int)uVar1 < 1) {
    return uVar1;
  }
  if (uStack_28 >> 0x1f == 0) {
    return uStack_28;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                  ,0x227,"BIO_puts");
  puVar2 = (undefined *)0x66;
LAB_003ea2f0:
  func_0x004466b0(0x20,puVar2,0);
  return 0xffffffff;
}

