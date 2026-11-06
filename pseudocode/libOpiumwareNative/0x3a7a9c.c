/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a7a9c:d9a2df5a5b
   =========================================================================== */

undefined8 FUN_003a7a9c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x4b8) == 0) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0x10,2);
  if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
      (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
     (((iVar1 = func_0x004766ec(param_2,*(undefined8 *)(param_1 + 0x4b8),
                                *(undefined8 *)(param_1 + 0x4c0),1), iVar1 == 0 ||
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)) ||
      (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x72d,"tls_construct_stoc_alpn");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

