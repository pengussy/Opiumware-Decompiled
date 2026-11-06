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
 *  file-id: 0x3e95bc:38b0ff0f0d
 *  --------------------------------------------------------------------------*/

long FUN_003e95bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return -1;
  }
  if ((*(long *)(param_1 + 8) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x40),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x2a9,"BIO_ctrl");
    func_0x004466b0(0x20,0x79,0);
    return -2;
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e96d8;
LAB_003e9694:
    lVar2 = (*pcVar1)(param_1,6,param_4,0,param_2,param_3,1,0);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003e9694;
    lVar2 = (**(code **)(param_1 + 0x10))(param_1,6,param_4,param_2,param_3,1);
  }
  if (lVar2 < 1) {
    return lVar2;
/* WM - no support for modified copies */
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x40);
LAB_003e96d8:
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return lVar2;
    }
  }
  else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e9720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(param_1 + 0x10))(param_1,0x86,param_4,param_2,param_3,lVar2);
    return lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,0x86,param_4,0,param_2,param_3,lVar2,0);
  return lVar2;
}

