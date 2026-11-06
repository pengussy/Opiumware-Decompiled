/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e522c:e996115900
 */

bool FUN_003e522c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_88 [80];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  func_0x004a0f90(param_2);
  func_0x004a0804();
  func_0x004a0c1c(auStack_88,0x50,param_2,1);
  iVar4 = (int)param_2;
  iVar1 = func_0x003ead9c(param_1,"%s (%s)");
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return 0 < iVar1;
  }
  auVar5 = ___stack_chk_fail(0 < iVar1);
  piVar3 = auVar5._8_8_;
  uVar2 = auVar5._0_8_;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  if (piVar3[1] == 3) {
    iVar1 = func_0x003ead9c(uVar2," (%ld unused bits)\n");
  }
  else {
    iVar1 = FUN_003ea20c(uVar2,"\n");
  }
  if ((iVar1 < 1) ||
     ((0 < *piVar3 &&
      (iVar1 = func_0x003e918c(uVar2,*(undefined8 *)(piVar3 + 2),*piVar3,iVar4 + 2), iVar1 < 1)))) {
    return false;
  }
  return true;
}

