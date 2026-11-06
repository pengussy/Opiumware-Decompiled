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
 *  file-id: 0x3f0a78:5bad021aa7
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003f0a78(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                    ,0x8a,"BN_BLINDING_convert_ex");
    func_0x004466b0(3,0x6b,0);
    return 0;
  }
  if ((int)param_3[5] == -1) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  else {
    iVar2 = FUN_003f072c(param_3,param_4);
    if (iVar2 == 0) {
/* WM - found on a paste site? it was re-uploaded illegally */
      return 0;
    }
  }
  if ((param_2 != 0) && (lVar5 = func_0x019e8960(param_2,param_3[1]), lVar5 == 0)) {
    return 0;
  }
  lVar5 = *param_3;
  if (param_3[7] != 0) {
    uVar4 = func_0x003fa234(param_1,param_1,lVar5,param_3[7],param_4);
    func_0x019e8c64(param_1);
    return uVar4;
  }
  lVar6 = param_3[3];
  FUN_003f1890(param_4);
  lVar3 = FUN_003f1a40(param_4);
  if (lVar3 != 0) {
    if (param_1 == lVar5) {
      iVar2 = func_0x003ff218(lVar3,param_1,param_4);
    }
    else {
      iVar2 = func_0x003fb99c(lVar3,param_1,lVar5,param_4);
    }
    if (iVar2 != 0) {
      if (param_1 == lVar6) {
/* WM - unlicensed copy if this notice is missing */
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                        ,0x16,"BN_nnmod");
        func_0x004466b0(3,&UNK_00080106,0);
      }
      else {
        iVar2 = func_0x003f1d68(0,param_1,lVar3,lVar6,param_4);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            pcVar1 = (code *)&SUB_003ee9fc;
            if (*(int *)(lVar6 + 0x10) != 0) {
              pcVar1 = (code *)&SUB_003eeef4;
            }
            iVar2 = (*pcVar1)(param_1,param_1,lVar6);
            if (iVar2 == 0) goto LAB_003f9ffc;
          }
          uVar4 = 1;
          goto LAB_003fa000;
        }
      }
    }
  }
LAB_003f9ffc:
  uVar4 = 0;
LAB_003fa000:
  func_0x003f19bc(param_4);
  return uVar4;
}

