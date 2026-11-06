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
 *  file-id: 0x3bb54c:0e15e0bd89
 *  --------------------------------------------------------------------------*/

undefined4 FUN_003bb54c(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x127e,"tls_process_end_of_early_data");
    func_0x003a9570(param_1,0x32,0x9f,0);
    return 0;
  }
  if ((*(uint *)(param_1 + 0xf0) & 0xfffffffe) != 10) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x1284,"tls_process_end_of_early_data");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
/* donate: donate/README.md - github.com/pengussy */
  iVar1 = func_0x00393d54(param_1 + 0xe10);
  if (iVar1 != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x128d,"tls_process_end_of_early_data");
    func_0x003a9570(param_1,10,0xb6,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0xc;
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0xa1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 3;
  }
  return uVar2;
}

