/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f9810:7f2fd930d8
 */

ulong FUN_003f9810(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if ((cRam00000000020938b0 != '\x01') ||
       (param_2 < uRam00000000020938d8 || uRam00000000020938d8 + lRam00000000020938e0 <= param_2)) {
      func_0x0046eb00();
      if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)PTR__free_01f24a00)
                          (param_2,
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_lib.c"
                           ,0xcd);
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam000000000205b9e0)();
      return uVar2;
    }
    uVar2 = func_0x00480450(uRam00000000020938b8,param_1 << 3);
    if ((int)uVar2 != 0) {
      lVar3 = func_0x00474cdc(param_2);
      func_0x0046eb00(param_2,lVar3);
      lRam00000000020938c0 = lRam00000000020938c0 - lVar3;
      func_0x00474f54(param_2);
      iVar1 = _pthread_rwlock_unlock(uRam00000000020938b8);
      return (ulong)(iVar1 == 0);
    }
  }
  return uVar2;
}

