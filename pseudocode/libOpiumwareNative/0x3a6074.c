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
 *  file-id: 0x3a6074:f4074ff567
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a6074(long param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  
  *(short *)(param_1 + 0x4de) = (short)param_2;
  *(short *)(param_1 + 0x4e8) = (short)param_2;
  *(undefined4 *)(*(long *)(param_1 + 0x900) + 0x308) = param_2;
  lVar2 = FUN_00350340();
  *(long *)(param_1 + 0x4e0) = lVar2;
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x27d,"tls_accept_ksgroup");
    func_0x003a9570(param_1,0x50,0x13a,0);
/* wm:no support for modified copies */
    return 0;
  }
  iVar1 = func_0x0036a9a4(lVar2,*param_3,param_3[2]);
  if (iVar1 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x284,"tls_accept_ksgroup");
    func_0x003a9570(param_1,0x2f,0x6c,0);
    return 0;
  }
  return 1;
}

