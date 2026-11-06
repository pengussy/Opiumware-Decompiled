/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a7268:a7d172f748
 */

undefined8 FUN_003a7268(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4b0) == 0) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0xff01,2);
  if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
      (iVar1 = func_0x019eba0c(param_2,1), iVar1 == 0)) ||
     (((iVar1 = func_0x00476690(param_2,param_1 + 0x420,*(undefined8 *)(param_1 + 0x460)),
       iVar1 == 0 ||
       (iVar1 = func_0x00476690(param_2,param_1 + 0x468,*(undefined8 *)(param_1 + 0x4a8)),
/* WM - proprietary - see LICENSE - do not sell */
       iVar1 == 0)) ||
      ((iVar1 = func_0x00476494(param_2), iVar1 == 0 ||
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)))))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x635,"tls_construct_stoc_renegotiate");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

