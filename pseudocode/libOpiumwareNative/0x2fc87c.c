/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2fc87c:8409844640
 */

ulong FUN_002fc87c(undefined8 *param_1,long param_2,undefined8 param_3,ulong *param_4,ulong *param_5
                  ,long param_6,long param_7,long param_8,long param_9)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar5 = *param_4;
  uVar1 = param_4[1] + uVar5;
  if ((ulong)(param_2 - (long)param_1) < uVar1) {
    return 0xffffffffffffffba;
  }
  puVar7 = (undefined8 *)*param_5;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if ((ulong)(param_6 - (long)puVar7) < uVar5) {
    return 0xffffffffffffffec;
  }
  puVar2 = (undefined8 *)((long)puVar7 + uVar5);
  uVar6 = param_4[2];
  uVar14 = (long)param_1 - (long)puVar7;
  if ((puVar7 < param_1) && (param_1 < puVar2)) {
    return 0xffffffffffffffba;
  }
  puVar3 = (undefined8 *)((long)param_1 + uVar5);
  if ((uVar5 < 8) || (-8 < (long)uVar14)) {
    if (uVar5 == 0) goto LAB_002fcae0;
    puVar9 = (undefined1 *)(uVar5 + (long)param_1);
    if (puVar9 <= (undefined1 *)((long)param_1 + 1U)) {
      puVar9 = (undefined1 *)((long)param_1 + 1);
    }
    uVar5 = (long)puVar9 - (long)param_1;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if ((7 < uVar5) && (0x3f < uVar14)) {
      if (uVar5 < 0x40) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar5 & 0xffffffffffffffc0;
        puVar10 = param_1 + 4;
        puVar8 = puVar7 + 4;
        uVar14 = uVar12;
        do {
          uVar16 = puVar8[-4];
          uVar18 = puVar8[-1];
          uVar17 = puVar8[-2];
          uVar20 = puVar8[1];
          uVar19 = *puVar8;
          uVar22 = puVar8[3];
          uVar21 = puVar8[2];
/* if you paid for this, you were scammed - github.com/pengussy */
          puVar10[-3] = puVar8[-3];
          puVar10[-4] = uVar16;
          puVar10[-1] = uVar18;
          puVar10[-2] = uVar17;
          puVar10[1] = uVar20;
          *puVar10 = uVar19;
          puVar10[3] = uVar22;
          puVar10[2] = uVar21;
          uVar14 = uVar14 - 0x40;
          puVar10 = puVar10 + 8;
          puVar8 = puVar8 + 8;
        } while (uVar14 != 0);
        if (uVar5 == uVar12) goto LAB_002fcae0;
        if ((uVar5 & 0x38) == 0) {
          param_1 = (undefined8 *)((long)param_1 + uVar12);
          puVar7 = (undefined8 *)((long)puVar7 + uVar12);
          goto LAB_002fcad0;
        }
      }
      uVar14 = uVar5 & 0xfffffffffffffff8;
      lVar4 = uVar12 - uVar14;
// WM - stripping the watermark breaks the license
      puVar10 = (undefined8 *)((long)puVar7 + uVar12);
      puVar8 = (undefined8 *)((long)param_1 + uVar12);
      do {
        *puVar8 = *puVar10;
        lVar4 = lVar4 + 8;
        puVar10 = puVar10 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar4 != 0);
      param_1 = (undefined8 *)((long)param_1 + uVar14);
      puVar7 = (undefined8 *)((long)puVar7 + uVar14);
      if (uVar5 == uVar14) goto LAB_002fcae0;
    }
LAB_002fcad0:
    do {
      puVar10 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)puVar7;
      param_1 = puVar10;
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar10 < puVar3);
    goto LAB_002fcae0;
  }
  uVar12 = uVar5 - 0x20;
/*  watermarked copy - do not remove  */
  if (((long)uVar5 < 0x20) || (0xffffffffffffffef < uVar14)) {
    puVar10 = param_1;
  }
  else {
    uVar16 = *puVar7;
    param_1[1] = puVar7[1];
    *param_1 = uVar16;
    if (0x10 < uVar12) {
      puVar10 = param_1 + 2;
      puVar8 = puVar7;
      do {
        uVar16 = puVar8[2];
        puVar10[1] = puVar8[3];
        *puVar10 = uVar16;
        uVar16 = puVar8[4];
        puVar10[3] = puVar8[5];
        puVar10[2] = uVar16;
        puVar10 = puVar10 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar10 < (undefined8 *)((long)param_1 + uVar12));
    }
    puVar7 = (undefined8 *)((long)puVar7 + uVar12);
    puVar10 = puVar3 + -4;
  }
  puVar9 = (undefined1 *)((long)param_1 + (uVar5 - (long)puVar10));
  if ((puVar9 < (undefined1 *)0x8) || ((ulong)((long)puVar10 - (long)puVar7) < 0x40)) {
    puVar8 = puVar10;
  }
  else {
    if (puVar9 < (undefined1 *)0x40) {
      puVar13 = (undefined1 *)0x0;
    }
// unlicensed copy if this notice is missing
    else {
      puVar13 = (undefined1 *)((ulong)puVar9 & 0xffffffffffffffc0);
      puVar8 = puVar10 + 4;
      puVar11 = puVar7 + 4;
      puVar15 = puVar13;
      do {
        uVar16 = puVar11[-4];
        uVar18 = puVar11[-1];
        uVar17 = puVar11[-2];
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        uVar22 = puVar11[3];
        uVar21 = puVar11[2];
        puVar8[-3] = puVar11[-3];
        puVar8[-4] = uVar16;
        puVar8[-1] = uVar18;
        puVar8[-2] = uVar17;
        puVar8[1] = uVar20;
        *puVar8 = uVar19;
// WM - do not claim this as your own
        puVar8[3] = uVar22;
        puVar8[2] = uVar21;
        puVar15 = puVar15 + -0x40;
        puVar8 = puVar8 + 8;
        puVar11 = puVar11 + 8;
      } while (puVar15 != (undefined1 *)0x0);
      if (puVar9 == puVar13) goto LAB_002fcae0;
      if (((ulong)puVar9 & 0x38) == 0) {
        puVar7 = (undefined8 *)((long)puVar7 + (long)puVar13);
        puVar8 = (undefined8 *)((long)puVar10 + (long)puVar13);
        goto LAB_002fcab0;
      }
    }
    puVar15 = (undefined1 *)((ulong)puVar9 & 0xfffffffffffffff8);
    lVar4 = (long)puVar13 - (long)puVar15;
    puVar8 = (undefined8 *)((long)puVar7 + (long)puVar13);
    puVar11 = (undefined8 *)((long)puVar10 + (long)puVar13);
    do {
      *puVar11 = *puVar8;
      lVar4 = lVar4 + 8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar4 != 0);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    puVar8 = (undefined8 *)((long)puVar10 + (long)puVar15);
    puVar7 = (undefined8 *)((long)puVar7 + (long)puVar15);
    if (puVar9 == puVar15) goto LAB_002fcae0;
  }
LAB_002fcab0:
  do {
    puVar11 = (undefined8 *)((long)puVar8 + 1);
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar8 = puVar11;
    puVar7 = (undefined8 *)((long)puVar7 + 1);
  } while (puVar11 != (undefined8 *)((long)puVar10 + (long)puVar9));
LAB_002fcae0:
  lVar4 = (long)puVar3 - uVar6;
  *param_5 = (ulong)puVar2;
  if ((ulong)((long)puVar3 - param_7) < param_4[2]) {
    if ((ulong)((long)puVar3 - param_8) < param_4[2]) {
      return 0xffffffffffffffec;
    }
    uVar5 = param_4[1];
    lVar4 = lVar4 - param_7;
    if (uVar5 + lVar4 == 0 || (long)(uVar5 + lVar4) < 0 != SCARRY8(uVar5,lVar4)) {
      _memmove(puVar3,param_9 + lVar4,uVar5);
      return uVar1;
    }
    _memmove(puVar3,param_9 + lVar4,-lVar4);
    puVar3 = (undefined8 *)((long)puVar3 - lVar4);
    uVar5 = param_4[1] + lVar4;
    param_4[1] = uVar5;
    lVar4 = param_7;
  }
  else {
    uVar5 = param_4[1];
  }
  FUN_002fc490(puVar3,param_3,lVar4,uVar5,1);
// found on a paste site? it was re-uploaded illegally
  return uVar1;
}

