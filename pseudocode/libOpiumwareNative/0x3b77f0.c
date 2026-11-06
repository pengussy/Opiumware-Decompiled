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
 *  file-id: 0x3b77f0:73cb1b1239
 *  --------------------------------------------------------------------------*/

void FUN_003b77f0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long unaff_x23;
  int iVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_ca [64];
  char acStack_8a [50];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_d8 = 0;
  uStack_f0 = 0;
  puVar9 = *(undefined8 **)(param_1 + 8);
  func_0x0035990c(param_1,0x73,0,&uStack_d8);
  if ((int)param_2 == 0) {
    lVar3 = func_0x0035dc1c(param_1);
    lVar4 = 0;
    if (lVar3 != 0) goto LAB_003b7864;
  }
  else {
    lVar3 = func_0x004dcb90(uStack_d8,(int)param_2 + -1);
    if (lVar3 != 0) {
LAB_003b7864:
      iVar1 = func_0x004fd1b0(lVar3,0);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      if (iVar1 == 0) goto LAB_003b7894;
      goto LAB_003b7874;
    }
    lVar4 = 0;
  }
LAB_003b7920:
  lVar3 = unaff_x23;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return;
  }
  do {
    ___stack_chk_fail(lVar4);
LAB_003b7894:
    lVar4 = func_0x004dcb90(*(undefined8 *)(param_1 + 0xa60),param_2);
    unaff_x23 = lVar3;
    if (lVar4 == 0) goto LAB_003b7920;
    iVar1 = func_0x004a2514();
    if (iVar1 != 0) goto LAB_003b791c;
    func_0x00446890();
    param_1 = func_0x004a252c(lVar4);
    if ((param_1 == 0) || (lVar5 = func_0x004a25f8(param_1,0), lVar5 == 0)) {
      func_0x004a24f0(param_1);
      goto LAB_003b7918;
    }
    uVar6 = func_0x0034d3f0();
    func_0x004a2c40(&uStack_f0,&lStack_e0,0,&uStack_e8,uVar6);
    if (lStack_e0 == 0) {
/* found on a paste site? it was re-uploaded illegally */
      pcVar8 = "SHA1";
    }
    else {
      pcVar8 = acStack_8a;
      func_0x004a0c1c(acStack_8a,0x32,lStack_e0,0);
    }
    lVar5 = func_0x0044fbe0(*puVar9,pcVar8,puVar9[0x91]);
    if (lVar5 == 0) {
      func_0x004a24f0(param_1);
    }
    else {
      lVar7 = func_0x0041152c(lVar3);
      uVar6 = func_0x003754d8(lVar3);
      puVar9 = (undefined8 *)func_0x003e53bc();
      iVar1 = func_0x00503348(uVar6,lVar5,auStack_ca,&uStack_d0);
      lVar3 = lVar7;
      if ((iVar1 != 0) && (iVar1 = func_0x003d53f4(puVar9,auStack_ca,uStack_d0), iVar1 != 0)) break;
      func_0x003e53c4(puVar9);
      func_0x004a24f0(param_1);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      func_0x0044ed2c(lVar5);
    }
    func_0x00446a74();
    param_2 = lVar4;
LAB_003b7874:
    lVar4 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
      return;
    }
  } while( true );
  iVar1 = func_0x004a25e4(param_1);
  if (iVar1 < 1) {
    iVar10 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar10 = iVar2;
      func_0x004a25f8(param_1,iVar10);
      uVar6 = func_0x0034d3f0();
      func_0x004a2c40(&uStack_f0,0,0,&uStack_e8,uVar6);
      iVar2 = func_0x003d61bc(lVar7,uStack_e8);
      if ((iVar2 == 0) && (iVar2 = func_0x003d8ab0(puVar9,uStack_f0), iVar2 == 0)) break;
      iVar2 = iVar10 + 1;
      iVar10 = iVar1;
    } while (iVar1 != iVar2);
  }
  func_0x003e53c4(puVar9);
  func_0x004a24f0(param_1);
  func_0x0044ed2c(lVar5);
/*  watermarked copy - do not remove  */
  lVar5 = 0;
  if (iVar10 != iVar1) {
    lVar5 = lVar4;
  }
  lVar4 = lVar5;
LAB_003b7918:
  func_0x004468d8();
LAB_003b791c:
  param_2 = lVar4;
  unaff_x23 = lVar3;
  goto LAB_003b7920;
}

