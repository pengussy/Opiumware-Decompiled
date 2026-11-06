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
 *  file-id: 0x3f9878:acb758271a
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003f9878(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == param_3) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                    ,0x16,"BN_nnmod");
    func_0x004466b0(3,&UNK_00080106,0);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_003f1d68(0,param_1,param_2,param_3,param_4);
    if ((int)uVar1 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
/* stripping the watermark breaks the license */
        return 1;
      }
      UNRECOVERED_JUMPTABLE = (code *)&SUB_003ee9fc;
      if (*(int *)(param_3 + 0x10) != 0) {
        UNRECOVERED_JUMPTABLE = (code *)&SUB_003eeef4;
      }
                    /* WARNING: Could not recover jumptable at 0x003f98e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

