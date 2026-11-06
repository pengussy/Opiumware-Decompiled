/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a88a4:52726d48d6
 */

undefined8 FUN_003a88a4(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x2000) {
    if (*(int *)(&UNK_000016f8 + param_1) == 0) {
      return 2;
    }
    iVar1 = func_0x019ec0a0(param_2,0x2a,2);
    if (((iVar1 != 0) && (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
       ((iVar1 = func_0x019ec0a0(param_2,*(undefined4 *)(&UNK_000016f8 + param_1),4), iVar1 != 0 &&
        (iVar1 = func_0x00476494(param_2), iVar1 != 0)))) {
      return 1;
    }
    uVar2 = 0x8c2;
  }
  else {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (*(int *)(param_1 + 0xb20) != 2) {
      return 2;
    }
    iVar1 = func_0x019ec0a0(param_2,0x2a,2);
    if (((iVar1 != 0) && (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
       (iVar1 = func_0x00476494(param_2), iVar1 != 0)) {
      return 1;
    }
    uVar2 = 0x8cf;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar2,"tls_construct_stoc_early_data");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

