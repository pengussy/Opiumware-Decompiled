/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3a7354:0cfd23a490
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a7354(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd18) != 1) {
    return 2;
  }
  if (*(int *)(param_1 + 0x508) != 0) {
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
      return 2;
    }
    iVar1 = **(int **)(param_1 + 0x18);
    if (iVar1 < 0x304) {
      return 2;
    }
    if (iVar1 == 0x10000) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      return 2;
    }
  }
  iVar1 = func_0x019ec0a0(param_2,0,2);
  if ((iVar1 == 0) || (iVar1 = func_0x019ec0a0(param_2,0,2), iVar1 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x64c,"tls_construct_stoc_server_name");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

