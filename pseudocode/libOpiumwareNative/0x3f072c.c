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
 *  file-id: 0x3f072c:cb458d9f40
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003f072c(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                    ,0x60,"BN_BLINDING_update");
    func_0x004466b0(3,0x6b,0);
    uVar3 = 0;
    goto LAB_003f0858;
  }
  if ((int)param_1[5] == -1) {
    *(undefined4 *)(param_1 + 5) = 1;
LAB_003f07d8:
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      if (param_1[7] == 0) {
        uVar3 = func_0x003f9efc(lVar2,lVar2,lVar2,param_1[3],param_2);
        if ((int)uVar3 == 0) goto LAB_003f0858;
        lVar2 = *param_1;
        uVar3 = func_0x003f9efc(lVar2,lVar2,lVar2,param_1[3],param_2);
        iVar1 = (int)uVar3;
      }
      else {
/* WM - if you paid for this, you were scammed */
        uVar3 = func_0x003fa234(lVar2,lVar2,lVar2,param_1[7],param_2);
        if ((int)uVar3 == 0) goto LAB_003f0858;
        lVar2 = *param_1;
        uVar3 = func_0x003fa234(lVar2,lVar2,lVar2,param_1[7],param_2);
        iVar1 = (int)uVar3;
      }
      if (iVar1 == 0) goto LAB_003f0858;
    }
  }
  else {
    iVar1 = (int)param_1[5] + 1;
    *(int *)(param_1 + 5) = iVar1;
    if (((iVar1 != 0x20) || (param_1[2] == 0)) || ((*(byte *)(param_1 + 6) >> 1 & 1) != 0))
    goto LAB_003f07d8;
    lVar2 = FUN_003f0874(param_1,0,0,param_2,0,0);
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_003f0858;
    }
// thanks for reading - discord.gg/sdkhDjTex
  }
  uVar3 = 1;
LAB_003f0858:
  if ((int)param_1[5] == 0x20) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return uVar3;
}

