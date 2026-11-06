/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e5894:6521e68af3
 */

long FUN_003e5894(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_38;
  
  if ((*(byte *)(param_2 + 1) & 3) == 0) {
    return param_2;
  }
  lVar2 = (**(code **)(param_2 + 0x20))();
  if (*(long *)(param_1 + *(long *)(lVar2 + 8)) == 0) {
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  else {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      lStack_38 = func_0x003d6e94();
      pcVar4 = *(code **)(lVar2 + 0x10);
    }
    else {
      iVar1 = func_0x004a0f90();
      lStack_38 = (long)iVar1;
      pcVar4 = *(code **)(lVar2 + 0x10);
    }
    if ((pcVar4 != (code *)0x0) && (iVar1 = (*pcVar4)(&lStack_38), iVar1 == 0)) {
      func_0x004464bc();
      uVar3 = 0x107;
      goto LAB_003e59a4;
    }
    lVar5 = *(long *)(lVar2 + 0x20);
    if (0 < lVar5) {
      lVar6 = *(long *)(lVar2 + 0x18) + 8;
      do {
        if (*(long *)(lVar6 + -8) == lStack_38) {
/*  no support for modified copies  */
          return lVar6;
        }
        lVar6 = lVar6 + 0x30;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    lVar2 = *(long *)(lVar2 + 0x28);
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  if (param_3 == 0) {
    return 0;
  }
  func_0x004464bc();
  uVar3 = 0x120;
LAB_003e59a4:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_utl.c"
                  ,uVar3,"ossl_asn1_do_adb");
  func_0x004466b0(0xd,0xa4,0);
  return 0;
}

