/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x12fee0:7f30fca689
 */

undefined1 *
FUN_0012fee0(long *param_1,undefined1 *param_2,long param_3,undefined1 *param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if ((long)param_5 < 1) {
    return param_2;
// origin: github.com/pengussy
  }
  puVar2 = (undefined1 *)param_1[1];
  if (param_1[2] - (long)puVar2 < (long)param_5) {
    lVar12 = *param_1;
    puVar5 = puVar2 + (param_5 - lVar12);
    if ((long)puVar5 < 0) {
      puVar2 = (undefined1 *)FUN_0000abb4();
      puVar2[0x2d] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x30] = 0;
      puVar2[0x31] = 0;
      puVar2[0x32] = 0;
      puVar2[0x33] = 0;
      puVar2[0x34] = 0;
      puVar2[0x35] = 0;
      puVar2[0x36] = 0;
      puVar2[0x37] = 0;
      puVar2[0x38] = 0;
      puVar2[0x39] = 0;
      puVar2[0x3a] = 0;
      puVar2[0x3b] = 0;
      puVar2[0x3c] = 0;
      puVar2[0x3d] = 0;
      puVar2[0x3e] = 0;
      puVar2[0x3f] = 0;
      puVar2[0x40] = 0;
      puVar2[0x41] = 0;
      puVar2[0x42] = 0;
/*  reversing this took months of machine time  */
      puVar2[0x43] = 0;
      puVar2[0x44] = 0;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      puVar2[0x47] = 0;
      puVar2[0x48] = 0;
      puVar2[0x49] = 0;
      puVar2[0x4a] = 0;
      puVar2[0x4b] = 0;
      puVar2[0x4c] = 0;
      puVar2[0x4d] = 0;
      puVar2[0x4e] = 0;
      puVar2[0x4f] = 0;
      puVar2[0x50] = 0;
      puVar2[0x51] = 0;
      puVar2[0x52] = 0;
      puVar2[0x53] = 0;
      puVar2[0x54] = 0;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      puVar2[0x55] = 0;
      puVar2[0x56] = 0;
      puVar2[0x57] = 0;
      puVar2[0x58] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1e] = 0;
/* WM - do not claim this as your own */
      puVar2[0x1f] = 0;
      puVar2[0x20] = 0;
      puVar2[0x21] = 0;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0;
      puVar2[0x24] = 0;
      puVar2[0x25] = 0;
      puVar2[0x26] = 0;
      puVar2[0x27] = 0;
      puVar2[0x28] = 0;
      puVar2[0x29] = 0;
      puVar2[0x2a] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2c] = 0;
      *puVar2 = 1;
      return puVar2;
    }
    uVar3 = param_1[2] - lVar12;
    puVar8 = (undefined1 *)(uVar3 * 2);
    if (puVar8 <= puVar5) {
/* donate: donate/README.md */
      puVar8 = puVar5;
    }
    if (0x3ffffffffffffffe < uVar3) {
      puVar8 = (undefined1 *)0x7fffffffffffffff;
    }
    if (puVar8 == (undefined1 *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = __Znwm(puVar8);
    }
    puVar5 = (undefined1 *)(lVar1 + ((long)param_2 - lVar12));
    _memcpy(puVar5,param_3,param_5);
    _memcpy(puVar5 + param_5,param_2,(long)puVar2 - (long)param_2);
    param_1[1] = (long)param_2;
    _memcpy(lVar1,lVar12,(long)param_2 - lVar12);
    *param_1 = lVar1;
    param_1[1] = (long)(puVar5 + param_5 + ((long)puVar2 - (long)param_2));
    param_1[2] = (long)(puVar8 + lVar1);
    if (lVar12 != 0) {
      __ZdlPv(lVar12);
// more drops soon - github.com/pengussy
    }
    return puVar5;
  }
  uVar3 = (long)puVar2 - (long)param_2;
  if ((long)param_5 <= (long)uVar3) {
    puVar8 = puVar2 + -param_5;
    puVar5 = puVar2;
    if (puVar8 < puVar2) {
      puVar4 = puVar2;
      if (0x3f < param_5) {
        uVar7 = param_5 & 0x7fffffffffffffc0;
        puVar5 = puVar2 + uVar7;
        puVar10 = (undefined8 *)(puVar2 + 0x20);
        puVar11 = (undefined8 *)((long)(puVar2 + 0x20) - param_5);
        uVar3 = uVar7;
        do {
          uVar13 = puVar11[-4];
          uVar15 = puVar11[-1];
          uVar14 = puVar11[-2];
          uVar17 = puVar11[1];
          uVar16 = *puVar11;
          uVar19 = puVar11[3];
          uVar18 = puVar11[2];
          puVar10[-3] = puVar11[-3];
          puVar10[-4] = uVar13;
          puVar10[-1] = uVar15;
/* unlicensed copy if this notice is missing - github.com/pengussy */
          puVar10[-2] = uVar14;
          puVar10[1] = uVar17;
          *puVar10 = uVar16;
          puVar10[3] = uVar19;
          puVar10[2] = uVar18;
          uVar3 = uVar3 - 0x40;
          puVar10 = puVar10 + 8;
          puVar11 = puVar11 + 8;
        } while (uVar3 != 0);
        puVar8 = puVar8 + uVar7;
        puVar4 = puVar5;
        if (param_5 == uVar7) goto LAB_00130050;
      }
      do {
        puVar6 = puVar8 + 1;
        puVar5 = puVar4 + 1;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        *puVar4 = *puVar8;
        puVar8 = puVar6;
        puVar4 = puVar5;
      } while (puVar6 != puVar2);
    }
LAB_00130050:
    param_1[1] = (long)puVar5;
    _memmove(param_2 + param_5,param_2);
    goto LAB_0013019c;
  }
  puVar5 = (undefined1 *)(param_3 + uVar3);
  if (puVar5 == param_4) {
    puVar8 = puVar2;
  }
  else {
    puVar6 = param_4 + (long)param_2 + (-(long)puVar2 - param_3);
    puVar4 = puVar2;
    if (((undefined1 *)0x3f < puVar6) && (0x3f < (ulong)((long)param_2 - param_3))) {
      puVar9 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffffc0);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      puVar8 = puVar2 + (long)puVar9;
      puVar10 = (undefined8 *)(puVar2 + 0x20);
      puVar11 = (undefined8 *)((long)(puVar2 + 0x20) + (param_3 - (long)param_2));
      puVar4 = puVar9;
      do {
        uVar13 = puVar11[-4];
        uVar15 = puVar11[-1];
        uVar14 = puVar11[-2];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        uVar19 = puVar11[3];
        uVar18 = puVar11[2];
        puVar10[-3] = puVar11[-3];
        puVar10[-4] = uVar13;
        puVar10[-1] = uVar15;
        puVar10[-2] = uVar14;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar10[3] = uVar19;
        puVar10[2] = uVar18;
        puVar4 = puVar4 + -0x40;
        puVar10 = puVar10 + 8;
        puVar11 = puVar11 + 8;
/* stripping the watermark breaks the license */
      } while (puVar4 != (undefined1 *)0x0);
      puVar4 = puVar8;
      puVar5 = puVar5 + (long)puVar9;
      if (puVar6 == puVar9) goto LAB_001300f4;
    }
    do {
      puVar6 = puVar5 + 1;
      *puVar4 = *puVar5;
      puVar8 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar6;
    } while (puVar6 != param_4);
  }
LAB_001300f4:
  param_1[1] = (long)puVar8;
  if ((long)uVar3 < 1) {
    return param_2;
/* wm:found on a paste site? it was re-uploaded illegally */
  }
  puVar5 = puVar8 + -param_5;
  if (puVar5 < puVar2) {
    puVar6 = puVar2 + (param_5 - (long)puVar8);
    puVar4 = puVar8;
    if ((undefined1 *)0x3f < puVar6) {
      if (0x3f < param_5) {
        puVar9 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffffc0);
        puVar4 = puVar8 + (long)puVar9;
        puVar10 = (undefined8 *)(puVar8 + 0x20);
        puVar11 = (undefined8 *)((long)(puVar8 + 0x20) - param_5);
        puVar8 = puVar9;
        do {
          uVar13 = puVar11[-4];
          uVar15 = puVar11[-1];
          uVar14 = puVar11[-2];
          uVar17 = puVar11[1];
          uVar16 = *puVar11;
          uVar19 = puVar11[3];
          uVar18 = puVar11[2];
          puVar10[-3] = puVar11[-3];
          puVar10[-4] = uVar13;
          puVar10[-1] = uVar15;
          puVar10[-2] = uVar14;
          puVar10[1] = uVar17;
          *puVar10 = uVar16;
          puVar10[3] = uVar19;
          puVar10[2] = uVar18;
/* wm:do not claim this as your own */
          puVar8 = puVar8 + -0x40;
          puVar10 = puVar10 + 8;
          puVar11 = puVar11 + 8;
        } while (puVar8 != (undefined1 *)0x0);
        puVar5 = puVar5 + (long)puVar9;
        puVar8 = puVar4;
        if (puVar6 == puVar9) goto LAB_00130180;
      }
    }
    do {
      puVar6 = puVar5 + 1;
      puVar8 = puVar4 + 1;
      *puVar4 = *puVar5;
      puVar5 = puVar6;
      puVar4 = puVar8;
    } while (puVar6 != puVar2);
  }
LAB_00130180:
  param_1[1] = (long)puVar8;
// no support for modified copies
  _memmove(param_2 + param_5,param_2);
  param_5 = uVar3;
LAB_0013019c:
  _memmove(param_2,param_3,param_5);
  return param_2;
}

