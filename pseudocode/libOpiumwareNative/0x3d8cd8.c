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
 *  file-id: 0x3d8cd8:1044be75e1
 *  --------------------------------------------------------------------------*/

uint FUN_003d8cd8(code *param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
/* WM - chat: discord.gg/sdkhDjTex */
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined *puStack_f8;
  int iStack_ec;
  undefined auStack_c0 [80];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar17 = param_3;
  if (0 < (int)param_4) {
    uVar22 = param_4;
    do {
      uVar17 = 1;
      iVar5 = (*param_1)(param_2,&UNK_01c881b6,1);
      iVar7 = (int)uVar17;
      if (iVar5 == 0) goto LAB_003d9090;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  iVar7 = (int)uVar17;
  param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  uVar19 = (param_5 & 0xf0000) - 0x10000;
  uVar20 = uVar19 >> 0x10;
// more drops soon - github.com/pengussy
  uVar22 = 0xffffffff;
  if (uVar20 < 2) {
    if (uVar20 == 0) {
      iVar5 = 1;
      puStack_f8 = &UNK_01c309a8;
      iStack_ec = 1;
      pcVar21 = ",";
      uVar24 = 0;
    }
    else {
      if (uVar20 != 1) goto LAB_003d9094;
      iStack_ec = 3;
      iVar5 = 2;
      puStack_f8 = &UNK_01c8cc5c;
      pcVar21 = ", ";
      uVar24 = 0;
    }
  }
  else if (uVar20 == 2) {
    uVar24 = 0;
    iStack_ec = 3;
    iVar5 = 2;
    puStack_f8 = &UNK_01c8cc5c;
    pcVar21 = "; ";
  }
  else {
    if (uVar20 != 3) goto LAB_003d9094;
    iStack_ec = (int)(uVar19 >> 0x10);
    iVar5 = 1;
    puStack_f8 = &UNK_01c8cc5c;
    pcVar21 = "\n";
    uVar24 = param_4;
  }
  bVar4 = (param_5 & 0x800000) != 0;
  pcVar2 = "=";
  if (bVar4) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    pcVar2 = " = ";
  }
  iVar18 = 3;
  if (!bVar4) {
    iVar18 = 1;
  }
  uVar6 = func_0x00502acc(param_3);
  if ((int)uVar6 < 1) {
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return param_4;
    }
    goto LAB_003d90ec;
  }
  uVar23 = 0;
  uVar1 = (uint)param_5 & 0x600000;
  iVar8 = -1;
  do {
    uVar22 = uVar23;
    if ((param_5 & 0x100000) != 0) {
      uVar22 = uVar6 + ~uVar23;
    }
    uVar17 = func_0x00502a7c(param_3,uVar22);
    if (iVar8 != -1) {
      iVar7 = func_0x004e0db4(uVar17);
/* watermarked copy - do not remove */
      if (iVar8 == iVar7) {
        iVar7 = iStack_ec;
        iVar8 = (*param_1)(param_2,puStack_f8,iStack_ec);
        if (iVar8 == 0) goto LAB_003d9090;
        param_4 = param_4 + iStack_ec;
      }
      else {
        iVar7 = iVar5;
        iVar8 = (*param_1)(param_2,pcVar21,iVar5);
        uVar22 = uVar24;
        if (iVar8 == 0) goto LAB_003d9090;
        for (; uVar22 != 0; uVar22 = uVar22 - 1) {
          iVar7 = 1;
          iVar8 = (*param_1)(param_2,&UNK_01c881b6,1);
          if (iVar8 == 0) goto LAB_003d9090;
        }
        param_4 = iVar5 + uVar24 + param_4;
      }
    }
    iVar8 = func_0x004e0db4(uVar17);
    uVar12 = func_0x00440550(uVar17);
    uVar17 = func_0x00405b20(uVar17);
    uVar13 = func_0x004a0f90(uVar12);
    if (uVar1 != 0x600000) {
      if ((uVar1 == 0x400000) || ((int)uVar13 == 0)) {
        puVar14 = auStack_c0;
        func_0x004a0c1c(auStack_c0,0x50,uVar12,1);
        iVar11 = 0;
// proprietary - see LICENSE - do not sell
      }
      else if (uVar1 == 0x200000) {
        puVar14 = (undefined *)func_0x004a0804(uVar13);
        iVar11 = 0x19;
      }
      else if ((param_5 & 0x600000) == 0) {
        puVar14 = (undefined *)func_0x004a07e8(uVar13);
        iVar11 = 10;
      }
      else {
        iVar11 = 0;
        puVar14 = &UNK_01cb7848;
      }
      uVar15 = _strlen(puVar14);
      uVar12 = uVar15;
      iVar9 = (*param_1)(param_2,puVar14,uVar15);
      iVar7 = (int)uVar12;
      if (iVar9 == 0) goto LAB_003d9090;
/* WM - origin: github.com/pengussy */
      iVar9 = (int)uVar15;
      if ((((uint)param_5 >> 0x19 & 1) != 0) &&
         (iVar3 = iVar11 - iVar9, iVar3 != 0 && iVar9 <= iVar11)) {
        iVar11 = iVar3;
        do {
          iVar7 = 1;
          iVar10 = (*param_1)(param_2,&UNK_01c881b6,1);
          if (iVar10 == 0) goto LAB_003d9090;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        param_4 = iVar3 + param_4;
      }
      iVar7 = iVar18;
      iVar11 = (*param_1)(param_2,pcVar2,iVar18);
      if (iVar11 == 0) goto LAB_003d9090;
      param_4 = iVar18 + iVar9 + param_4;
    }
    uVar19 = 0;
    if ((int)uVar13 == 0 && (param_5 & 0x1000000) != 0) {
      uVar19 = 0x80;
    }
    uVar19 = uVar19 | param_5;
    iVar11 = FUN_003d9138(param_1,param_2,uVar19,uVar17);
    iVar7 = (int)uVar19;
    if (iVar11 < 0) goto LAB_003d9090;
    param_4 = iVar11 + param_4;
    uVar23 = uVar23 + 1;
/* wm:if you paid for this, you were scammed */
    uVar22 = param_4;
  } while (uVar23 != uVar6);
LAB_003d9094:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar22;
  }
LAB_003d90ec:
  lVar16 = ___stack_chk_fail();
  if (lVar16 == 0) {
    return 1;
  }
  iVar5 = func_0x003e9a60();
  return (uint)(iVar5 == iVar7);
LAB_003d9090:
  uVar22 = 0xffffffff;
  goto LAB_003d9094;
}

