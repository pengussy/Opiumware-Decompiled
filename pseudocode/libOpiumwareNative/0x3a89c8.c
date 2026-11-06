/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a89c8:bddaa920ef
   =========================================================================== */

undefined8 FUN_003a89c8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x508) == 0) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0x29,2);
  if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
      (iVar1 = func_0x019ec0a0(param_2,(long)*(int *)(param_1 + 0xb40),2), iVar1 == 0)) ||
     (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
/* if you paid for this, you were scammed - github.com/pengussy */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x8e1,"tls_construct_stoc_psk");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

