/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a7d58:d1d653d76b
   =========================================================================== */

undefined8 FUN_003a7d58(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x161) >> 1 & 1) == 0) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0x17,2);
  if ((iVar1 == 0) || (iVar1 = func_0x019ec0a0(param_2,0,2), iVar1 == 0)) {
    func_0x004464bc();
/*  proprietary - see LICENSE - do not sell  */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x771,"tls_construct_stoc_ems");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

