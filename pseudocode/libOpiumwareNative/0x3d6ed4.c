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
 *  file-id: 0x3d6ed4:6856117f07
 *  --------------------------------------------------------------------------*/

int * FUN_003d6ed4(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar3 = 0x8000d;
  if (param_2 == (int *)0x0) {
    piVar5 = (int *)func_0x003dd9fc(param_3);
    if (piVar5 == (int *)0x0) {
      uVar3 = 0x8010a;
      uVar6 = 0x1e8;
      goto LAB_003d6fd8;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    }
  }
  else {
    param_2[1] = (int)param_3;
    piVar5 = param_2;
  }
  iVar4 = func_0x003f9704(param_1);
  if ((iVar4 != 0) && (iVar4 = func_0x003f89fc(param_1), iVar4 == 0)) {
    piVar5[1] = piVar5[1] | 0x102;
  }
  iVar4 = func_0x019e85d0(param_1);
  uVar2 = iVar4 + 0xeU;
  if (-8 < iVar4) {
    uVar2 = iVar4 + 7;
  }
  iVar1 = (int)uVar2 >> 3;
  if (iVar4 + 0xeU < 0xf) {
    iVar1 = 1;
/* if you paid for this, you were scammed */
  }
  iVar4 = func_0x003dd758(piVar5,0,iVar1);
  if (iVar4 != 0) {
    iVar4 = func_0x003f89fc(param_1);
    if (iVar4 == 0) {
      iVar4 = func_0x019e8b94(param_1);
      *piVar5 = iVar4;
      return piVar5;
    }
    **(undefined1 **)(piVar5 + 2) = 0;
    *piVar5 = iVar1;
    return piVar5;
  }
  uVar6 = 0x1f5;
LAB_003d6fd8:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                  ,uVar6,"bn_to_asn1_string");
  func_0x004466b0(0xd,uVar3,0);
  if (piVar5 != param_2) {
    func_0x003e53f4(piVar5);
  }
  return (int *)0x0;
}

