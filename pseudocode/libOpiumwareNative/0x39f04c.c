/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39f04c:ff63ef2d31
 */

undefined8 FUN_0039f04c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uStack_38;
  
  piVar3 = *(int **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x9d4);
  if ((*(byte *)(*(long *)(piVar3 + 0x36) + 0x50) >> 3 & 1) == 0) {
    if (iVar1 < 0x303) {
      return 2;
    }
    if ((*piVar3 != 0x10000) && (*(int *)(param_1 + 0x48) < 0x303)) {
      return 2;
    }
  }
  else if ((iVar1 == 0x100 || 0xfefd < iVar1) ||
          ((*piVar3 != 0x1ffff &&
           (*(int *)(param_1 + 0x48) == 0x100 || 0xfefd < *(int *)(param_1 + 0x48))))) {
    return 2;
  }
  if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0))
     && ((*(int *)(param_1 + 0xc3c) == 0 &&
         (uVar2 = func_0x0039b9e0(param_1,param_2), (uint)uVar2 < 2)))) {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    return uVar2;
  }
  uVar2 = func_0x00365ec4(param_1,1,&uStack_38);
  iVar1 = func_0x019ec0a0(param_2,0xd,2);
  if ((((iVar1 == 0) ||
       ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
        (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)))) ||
      (iVar1 = func_0x00367f84(param_1,param_2,uStack_38,uVar2), iVar1 == 0)) ||
     ((iVar1 = func_0x00476494(param_2), iVar1 == 0 ||
      (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x1ca,"tls_construct_ctos_sig_algs");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

