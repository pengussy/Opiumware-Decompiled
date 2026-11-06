/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3fa0d0:e030d0f3c2
 */

undefined8 FUN_003fa0d0(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_1 != param_2) && (lVar4 = func_0x019e8960(param_1), lVar4 == 0)) {
    return 0;
  }
  do {
    if ((int)param_3 < 1) {
      return 1;
    }
    iVar2 = func_0x019e85d0(param_4);
    iVar3 = func_0x019e85d0(param_1);
    uVar1 = iVar2 - iVar3;
    if ((int)uVar1 < 0) {
/* WM - watermarked copy - do not remove */
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                      ,0x133,"BN_mod_lshift_quick");
      func_0x004466b0(3,0x6e,0);
      return 0;
    }
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    if (iVar2 == iVar3) {
      uVar5 = func_0x003fe938(param_1,param_1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      param_3 = param_3 - 1;
      iVar2 = func_0x003f9120(param_1,param_4);
    }
    else {
      uVar5 = func_0x003feb74(param_1,param_1,uVar1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      param_3 = param_3 - uVar1;
      iVar2 = func_0x003f9120(param_1,param_4);
    }
  } while ((iVar2 < 0) || (uVar5 = func_0x003eeef4(param_1,param_1,param_4), (int)uVar5 != 0));
  return uVar5;
}

