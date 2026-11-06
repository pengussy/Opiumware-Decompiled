/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xb3f0:2448c6a580
 */

ulong FUN_0000b3f0(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 auStack_60 [16];
  
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  if (param_2 == (long *)0x0) {
    return 0x80070057;
  }
  if (*param_2 == 0) {
    return 0x80070057;
  }
  if ((ulong)param_2[1] < 8) {
    return 0x80070057;
  }
  if (param_4 == 0) {
    return 0x80070057;
  }
  if ((int)param_2[2] != 0) {
    return 0x80070057;
  }
  func_0x01726f20(auStack_60,*(undefined8 *)(param_1 + 0x10));
  plStack_68 = (long *)0x0;
  lVar10 = func_0x01434090(*param_2,param_2[1]);
  if (lVar10 == 0) {
    plStack_70 = (long *)0x0;
    uVar19 = func_0x01728674(*param_2,(int)param_2[1],(int)param_2[1],&plStack_70);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    if ((int)(uint)uVar19 < 0) {
      uVar17 = 0;
      lVar10 = 0;
    }
    else {
      plStack_78 = (long *)0x0;
      uVar9 = func_0x017297e0(plStack_70,&plStack_78);
      uVar17 = (uint)uVar19;
      if (0x7fffffff < uVar9) {
        uVar17 = uVar9;
      }
      uVar19 = (ulong)uVar17;
      if (((int)uVar9 < 0) ||
         (iVar8 = func_0x015ceca4(*(undefined8 *)(param_1 + 0x10),plStack_78,&plStack_68), iVar8 < 0
         )) {
        lVar10 = 0;
      }
      else {
        uVar12 = (**(code **)(*plStack_68 + 0x18))();
        uVar13 = (**(code **)(*plStack_68 + 0x20))();
        lVar10 = func_0x01434090(uVar12,uVar13);
      }
      if (plStack_78 != (long *)0x0) {
        (**(code **)(*plStack_78 + 0x10))();
      }
      uVar17 = ~uVar9 >> 0x1f;
    }
    if (plStack_70 != (long *)0x0) {
      (**(code **)(*plStack_70 + 0x10))();
    }
    if (uVar17 == 0) goto LAB_0000b7c4;
    if (lVar10 != 0) goto LAB_0000b474;
/* proprietary - see LICENSE - do not sell */
    piVar16 = (int *)*param_2;
    uVar19 = param_2[1];
    uVar17 = (uint)uVar19;
    if (uVar17 < 0x18) {
      uVar9 = piVar16[1];
    }
    else {
      uVar9 = piVar16[1];
      if (((((ulong)uVar9 * 4 <= (uVar19 & 0xffffffff)) && (0x10 < uVar17 - 8)) &&
          (uVar1 = piVar16[5] + piVar16[4], (uint)piVar16[4] < uVar1)) &&
         ((uVar1 <= uVar17 - 8 && (piVar16[2] == 0x4c495844)))) {
        uVar19 = func_0x013a457c(piVar16,0,param_3,param_4);
        goto LAB_0000b7c4;
      }
    }
    if (0x17 < uVar9) {
      uVar20 = (ulong)uVar9;
      if ((uVar20 + 8 <= uVar19) && (*piVar16 == 0x54415453)) {
        uVar17 = uVar17 - (int)(uVar20 + 8);
        if (uVar17 < 9) {
/* origin: github.com/pengussy */
          piVar18 = (int *)0x0;
        }
        else {
          uVar9 = *(uint *)((long)piVar16 + uVar20 + 0xc);
          if ((uVar9 < 8) || ((ulong)uVar17 < (ulong)uVar9 + 8)) goto LAB_0000b7bc;
          piVar18 = (int *)((long)piVar16 + uVar20 + 8);
          uVar19 = 0x80070057;
          if (*piVar18 != 0x54414452) goto LAB_0000b7c4;
        }
        goto LAB_0000b4e4;
      }
    }
LAB_0000b7bc:
    uVar19 = 0x80070057;
  }
  else {
LAB_0000b474:
    iVar8 = func_0x014340bc(lVar10,param_2[1]);
    uVar19 = 0x80070057;
    if (iVar8 == 0) goto LAB_0000b7c4;
    auVar21 = func_0x0143405c(lVar10);
    uVar20 = auVar21._8_8_;
    lVar11 = auVar21._0_8_;
    auVar22 = func_0x01434064(lVar10);
    uVar19 = 0x80aa0011;
    if (auVar22 == auVar21._0_12_) {
      piVar14 = (int *)0x0;
      piVar15 = (int *)0x0;
      piVar16 = (int *)0x0;
      piVar18 = (int *)0x0;
    }
    else {
      if (lVar11 != auVar22._0_8_) goto LAB_0000b7c4;
      piVar18 = (int *)0x0;
      piVar16 = (int *)0x0;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      piVar15 = (int *)0x0;
      piVar14 = (int *)0x0;
      do {
        piVar2 = (int *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x20 + (uVar20 & 0xffffffff) * 4));
        iVar8 = *piVar2;
        piVar4 = piVar18;
        piVar5 = piVar16;
        piVar6 = piVar15;
        piVar7 = piVar14;
        if (iVar8 < 0x54414452) {
          piVar7 = piVar2;
          piVar3 = piVar14;
          if (iVar8 != 0x42444c49) {
            piVar5 = piVar2;
            piVar7 = piVar14;
            piVar3 = piVar16;
            if (iVar8 != 0x4c495844) goto LAB_0000b5dc;
          }
joined_r0x0000b654:
          piVar14 = piVar7;
          piVar15 = piVar6;
          piVar16 = piVar5;
          piVar18 = piVar4;
          if (piVar3 != (int *)0x0) goto LAB_0000b7c4;
        }
        else {
          piVar4 = piVar2;
          piVar3 = piVar18;
          if (iVar8 == 0x54414452) goto joined_r0x0000b654;
/*  if you paid for this, you were scammed  */
          piVar4 = piVar18;
          piVar6 = piVar2;
          piVar3 = piVar15;
          if (iVar8 == 0x54415453) goto joined_r0x0000b654;
        }
LAB_0000b5dc:
        uVar17 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar17;
      } while (auVar22._8_4_ != uVar17);
    }
    if (piVar14 != (int *)0x0) {
      piVar16 = piVar14;
    }
    if (piVar15 != (int *)0x0) {
      piVar16 = piVar15;
    }
    if (piVar16 == (int *)0x0) {
      uVar19 = 0x80aa0012;
      goto LAB_0000b7c4;
    }
LAB_0000b4e4:
    uVar19 = func_0x013a45c8(piVar16,piVar18,param_3,param_4);
  }
LAB_0000b7c4:
  if (plStack_68 != (long *)0x0) {
    (**(code **)(*plStack_68 + 0x10))();
  }
  func_0x01726f84(auStack_60);
  return uVar19;
}

