/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a7c60:b9c3579782
 */

undefined8 FUN_003a7c60(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb1c) == 0) {
    return 2;
  }
  if (*(int *)(*(long *)(param_1 + 0x300) + 0x28) != 0x40) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x300) + 0x24);
    if (iVar1 < 0x40000) {
      if ((iVar1 != 4) && (iVar1 != 0x400)) goto LAB_003a7cd4;
    }
    else if ((iVar1 != 0x40000) && ((iVar1 != 0x800000 && (iVar1 != 0x400000)))) {
LAB_003a7cd4:
      iVar1 = func_0x019ec0a0(param_2,0x16,2);
// WM - chat: discord.gg/sdkhDjTex
      if ((iVar1 == 0) || (iVar1 = func_0x019ec0a0(param_2,0,2), iVar1 == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x761,"tls_construct_stoc_etm");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
      }
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0xb1c) = 0;
  return 2;
}

