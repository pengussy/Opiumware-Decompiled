/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a77d0:f329f084f3
   =========================================================================== */

undefined8 FUN_003a77d0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xa68) == 0) || (iVar1 = func_0x00366dac(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xa68) = 0;
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0x23,2);
  if ((iVar1 == 0) || (iVar1 = func_0x019ec0a0(param_2,0,2), iVar1 == 0)) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x6cb,"tls_construct_stoc_session_ticket");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

