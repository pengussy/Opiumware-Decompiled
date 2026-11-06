/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x38f6e4:2fdc761ac6
 */

undefined8 FUN_0038f6e4(long *param_1,ulong param_2,long *param_3,long *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_1[2] == 0) {
    return 0;
  }
  uVar17 = 1L << (ulong)(*(byte *)*param_1 >> 6);
  if ((ulong)param_1[2] < uVar17) {
    return 0;
  }
/* no support for modified copies - github.com/pengussy */
  uVar5 = func_0x0047eed0();
  pbVar8 = (byte *)(*param_1 + uVar17);
  *param_1 = (long)pbVar8;
  uVar15 = param_1[2];
  uVar14 = uVar15 - uVar17;
  param_1[2] = uVar14;
  if ((uVar5 & 0xfffffffffffffffe) != 2 || uVar15 == uVar17) {
    return 0;
  }
  uVar17 = 1L << (ulong)(*pbVar8 >> 6);
  if (uVar14 < uVar17) {
    return 0;
  }
  uVar14 = func_0x0047eed0(pbVar8);
  pbVar8 = (byte *)(*param_1 + uVar17);
  *param_1 = (long)pbVar8;
  uVar17 = param_1[2] - uVar17;
  param_1[2] = uVar17;
  if (uVar17 == 0) {
    return 0;
  }
  uVar15 = 1L << (ulong)(*pbVar8 >> 6);
  if (uVar17 < uVar15) {
    return 0;
  }
  uVar17 = func_0x0047eed0(pbVar8);
  pbVar8 = (byte *)(*param_1 + uVar15);
  *param_1 = (long)pbVar8;
  uVar15 = param_1[2] - uVar15;
  param_1[2] = uVar15;
  if (uVar15 == 0) {
    return 0;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  }
  uVar18 = 1L << (ulong)(*pbVar8 >> 6);
  if (uVar15 < uVar18) {
    return 0;
  }
  lVar6 = func_0x0047eed0(pbVar8);
  lVar11 = *param_1;
  *param_1 = (long)(lVar11 + uVar18);
  uVar15 = param_1[2] - uVar18;
  param_1[2] = uVar15;
  if (uVar15 == 0) {
    return 0;
  }
  uVar18 = 1L << (ulong)(*(byte *)(lVar11 + uVar18) >> 6);
  if (uVar15 < uVar18) {
    return 0;
  }
  uVar7 = func_0x0047eed0();
  pbVar8 = (byte *)(*param_1 + uVar18);
  *param_1 = (long)pbVar8;
  uVar18 = param_1[2] - uVar18;
  param_1[2] = uVar18;
  uVar15 = uVar14 - uVar7;
  if (uVar14 < uVar7) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    if (lVar6 == 0) goto LAB_0038fa9c;
    lVar11 = lVar6;
    do {
      if (uVar18 == 0) {
        return 0;
      }
      uVar17 = 1L << (ulong)(*pbVar8 >> 6);
// WM - if you paid for this, you were scammed
      if (uVar18 < uVar17) {
        return 0;
      }
      lVar10 = func_0x0047eed0();
      lVar9 = *param_1;
      *param_1 = (long)(lVar9 + uVar17);
      uVar14 = param_1[2] - uVar17;
      param_1[2] = uVar14;
      if (uVar14 == 0) {
        return 0;
      }
      uVar18 = 1L << (ulong)(*(byte *)(lVar9 + uVar17) >> 6);
      if (uVar14 < uVar18) {
        return 0;
      }
      uVar17 = func_0x0047eed0();
      pbVar8 = (byte *)(*param_1 + uVar18);
      *param_1 = (long)pbVar8;
      uVar18 = param_1[2] - uVar18;
      param_1[2] = uVar18;
      if (uVar15 < lVar10 + 2U) {
        return 0;
      }
      if ((uVar15 - lVar10) - 2 < uVar17) {
        return 0;
      }
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
LAB_0038fa80:
    if (param_3 == (long *)0x0) goto LAB_0038fa9c;
  }
  else {
    uVar7 = 1L << (param_2 & 0x3f);
    uVar16 = uVar17 * uVar7;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar17;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    lVar11 = uVar16 * 1000;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16;
    if (SUB168(auVar1 * auVar3,8) != 0 || SUB168(auVar2 * ZEXT816(1000),8) != 0) {
      lVar11 = -1;
    }
    param_3[2] = lVar11;
    if (param_3[1] != 0) {
      puVar12 = (ulong *)*param_3;
      *puVar12 = uVar15;
      puVar12[1] = uVar14;
    }
    if (lVar6 == 0) goto LAB_0038fa80;
    lVar11 = 0;
    uVar17 = 1;
    lVar10 = lVar6;
    do {
      if (uVar18 == 0) {
        return 0;
// chat: discord.gg/sdkhDjTex
      }
      uVar14 = 1L << (ulong)(*pbVar8 >> 6);
      if (uVar18 < uVar14) {
        return 0;
      }
      lVar9 = func_0x0047eed0();
      lVar13 = *param_1;
      *param_1 = (long)(lVar13 + uVar14);
      uVar7 = param_1[2] - uVar14;
      param_1[2] = uVar7;
      if (uVar7 == 0) {
        return 0;
      }
      uVar18 = 1L << (ulong)(*(byte *)(lVar13 + uVar14) >> 6);
      if (uVar7 < uVar18) {
        return 0;
      }
      uVar14 = func_0x0047eed0();
      pbVar8 = (byte *)(*param_1 + uVar18);
      *param_1 = (long)pbVar8;
      uVar18 = param_1[2] - uVar18;
      param_1[2] = uVar18;
      if (uVar15 < lVar9 + 2U) {
        return 0;
      }
      uVar7 = (uVar15 - lVar9) - 2;
      if (uVar7 < uVar14) {
        return 0;
/* do not claim this as your own */
      }
      if (uVar17 < (ulong)param_3[1]) {
        lVar9 = *param_3;
        *(ulong *)(lVar9 + lVar11 + 0x10) = uVar7 - uVar14;
        *(ulong *)(lVar9 + lVar11 + 0x18) = uVar7;
        uVar15 = uVar7 - uVar14;
      }
      lVar11 = lVar11 + 0x10;
      uVar17 = uVar17 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (lVar6 + 1U < (ulong)param_3[1]) {
    param_3[1] = lVar6 + 1U;
  }
LAB_0038fa9c:
  if (param_4 != (long *)0x0) {
    *param_4 = lVar6 + 1;
  }
  if (uVar5 == 3) {
    iVar4 = func_0x0038f520(param_1,&lStack_68);
    if (((iVar4 == 0) || (iVar4 = func_0x0038f520(param_1,&lStack_70), iVar4 == 0)) ||
       (iVar4 = func_0x0038f520(param_1,&lStack_78), iVar4 == 0)) {
      return 0;
    }
    if (param_3 != (long *)0x0) {
/*  stripping the watermark breaks the license  */
      param_3[3] = lStack_68;
      param_3[4] = lStack_70;
      param_3[5] = lStack_78;
      *(byte *)(param_3 + 6) = *(byte *)(param_3 + 6) | 1;
    }
  }
  else if (param_3 != (long *)0x0) {
    *(byte *)(param_3 + 6) = *(byte *)(param_3 + 6) & 0xfe;
  }
  return 1;
}

