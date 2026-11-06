/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39d864:9d6d58d80e
   =========================================================================== */

undefined8 FUN_0039d864(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    return 1;
  }
  if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
    return 1;
  }
  iVar1 = **(int **)(param_1 + 0x18);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  if (((iVar1 < 0x304) || (iVar1 == 0x10000)) || (*(int *)(param_1 + 0x508) != 0)) {
    return 1;
  }
  func_0x004464bc(1);
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                  ,0x648,"final_sig_algs");
  func_0x003a9570(param_1,0x6d,0x70,0);
  return 0;
}

