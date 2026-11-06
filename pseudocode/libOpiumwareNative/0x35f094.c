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
 *  file-id: 0x35f094:e6aefa40dd
 *  --------------------------------------------------------------------------*/

long FUN_0035f094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_8c;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
// more drops soon - github.com/pengussy
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  func_0x00446890();
  lVar2 = func_0x004535cc(param_1,param_2,param_3);
  if (lVar2 != 0) {
    iStack_8c = 0;
    func_0x00477f7c(auStack_88,"decrypt-only",&iStack_8c);
    func_0x00479f78(&uStack_b8);
    uStack_58 = uStack_b0;
    uStack_60 = uStack_b8;
    uStack_48 = uStack_a0;
    uStack_50 = uStack_a8;
    uStack_40 = uStack_98;
    iVar1 = func_0x00453270(lVar2,auStack_88);
    if ((iVar1 != 0) && (iStack_8c != 0)) {
      func_0x00451e8c(lVar2);
      lVar2 = 0;
    }
  }
  func_0x004468d8();
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return lVar2;
  }
  lVar2 = ___stack_chk_fail();
  lVar3 = func_0x003754d8();
  if (lVar3 == 0) {
    return 1;
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
/* wm:watermarked copy - do not remove */
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
    return 1;
  }
  return 1;
}

