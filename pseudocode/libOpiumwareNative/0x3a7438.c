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
 *  file-id: 0x3a7438:5ff3a3c193
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a7438(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (3 < *(byte *)(*(long *)(param_1 + 0x900) + 0x358) - 1) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,1,2);
  if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
      (iVar1 = func_0x019ec0a0(param_2,*(undefined1 *)(*(long *)(param_1 + 0x900) + 0x358),1),
      iVar1 == 0)) || (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
/* wm:keep the notice, keep the source honest */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x663,"tls_construct_stoc_maxfragmentlen");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

