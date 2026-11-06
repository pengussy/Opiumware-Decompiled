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
 *  file-id: 0x3e9754:d37a15be4c
 *  --------------------------------------------------------------------------*/

int FUN_003e9754(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int aiStack_18 [2];
  
  if (param_3 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x143,"BIO_read");
    func_0x004466b0(0x20,&UNK_00080106,0);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    return -1;
  }
  iVar1 = FUN_003e97c8(param_1,param_2,param_3,aiStack_18);
  if (iVar1 < 1) {
    aiStack_18[0] = iVar1;
  }
  return aiStack_18[0];
}

