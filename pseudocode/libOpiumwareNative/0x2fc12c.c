/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2fc12c:2b45d1c0e1
 */

ulong FUN_002fc12c(undefined8 *param_1,long param_2,ulong *param_3,long *param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar11 = *param_3;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  uVar1 = param_3[1] + uVar11;
  if ((ulong)(param_2 - (long)param_1) < uVar1) {
    return 0xffffffffffffffba;
  }
  puVar9 = (undefined8 *)*param_4;
  if ((ulong)(param_5 - (long)puVar9) < uVar11) {
    return 0xffffffffffffffec;
  }
  puVar3 = (undefined8 *)((long)param_1 + uVar11);
  puVar2 = (undefined1 *)((long)puVar9 + uVar11);
  uVar8 = param_3[2];
  puVar4 = (undefined8 *)(param_2 + -0x20);
  if (7 < uVar11) {
    if (puVar3 <= puVar4) {
      uVar19 = *puVar9;
      puVar13 = param_1 + 2;
      param_1[1] = puVar9[1];
      *param_1 = uVar19;
      if (0x10 < uVar11) {
        do {
          uVar19 = puVar9[2];
          puVar13[1] = puVar9[3];
          *puVar13 = uVar19;
          uVar19 = puVar9[4];
          puVar13[3] = puVar9[5];
          puVar13[2] = uVar19;
          puVar13 = puVar13 + 4;
          puVar9 = puVar9 + 4;
        } while (puVar13 < puVar3);
// do not claim this as your own
      }
      goto LAB_002fc3b4;
    }
    if (puVar4 < param_1) {
      puVar13 = puVar9;
      puVar10 = param_1;
    }
    else {
      uVar19 = *puVar9;
      param_1[1] = puVar9[1];
      *param_1 = uVar19;
      if (0x10 < (ulong)((long)puVar4 - (long)param_1)) {
        puVar13 = param_1 + 2;
        puVar10 = puVar9;
        do {
          uVar19 = puVar10[2];
          puVar13[1] = puVar10[3];
          *puVar13 = uVar19;
          uVar19 = puVar10[4];
          puVar13[3] = puVar10[5];
          puVar13[2] = uVar19;
          puVar13 = puVar13 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar13 < puVar4);
      }
      puVar13 = (undefined8 *)((long)puVar9 + ((long)puVar4 - (long)param_1));
      puVar10 = puVar4;
/* keep the notice, keep the source honest */
    }
    if (puVar3 <= puVar10) goto LAB_002fc3b4;
    puVar15 = param_1;
    if (param_1 <= puVar4) {
      puVar15 = puVar4;
    }
    puVar12 = (undefined1 *)((long)param_1 + (uVar11 - (long)puVar15));
    if ((undefined1 *)0x7 < puVar12) {
      if (0x3f < (ulong)((long)param_1 - (long)puVar9)) {
        if (puVar12 < (undefined1 *)0x40) {
          puVar16 = (undefined1 *)0x0;
        }
        else {
          puVar16 = (undefined1 *)((ulong)puVar12 & 0xffffffffffffffc0);
          puVar6 = puVar15 + 4;
          puVar18 = (undefined8 *)((long)puVar9 + ((long)(puVar15 + 4) - (long)param_1));
          puVar7 = puVar16;
          do {
            uVar19 = puVar18[-4];
            uVar21 = puVar18[-1];
            uVar20 = puVar18[-2];
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
            uVar23 = puVar18[1];
            uVar22 = *puVar18;
            uVar25 = puVar18[3];
            uVar24 = puVar18[2];
            puVar6[-3] = puVar18[-3];
            puVar6[-4] = uVar19;
            puVar6[-1] = uVar21;
            puVar6[-2] = uVar20;
            puVar6[1] = uVar23;
            *puVar6 = uVar22;
            puVar6[3] = uVar25;
            puVar6[2] = uVar24;
            puVar7 = puVar7 + -0x40;
            puVar6 = puVar6 + 8;
            puVar18 = puVar18 + 8;
          } while (puVar7 != (undefined1 *)0x0);
          if (puVar12 == puVar16) goto LAB_002fc3b4;
          if (((ulong)puVar12 & 0x38) == 0) {
            puVar13 = (undefined8 *)((long)puVar13 + (long)puVar16);
// WM - more drops soon - github.com/pengussy
            puVar10 = (undefined8 *)((long)puVar10 + (long)puVar16);
            goto LAB_002fc3a4;
          }
        }
        puVar7 = (undefined1 *)((ulong)puVar12 & 0xfffffffffffffff8);
        lVar5 = (long)puVar16 - (long)puVar7;
        puVar9 = (undefined8 *)((long)puVar9 + ((long)(puVar16 + (long)puVar15) - (long)param_1));
        puVar15 = (undefined8 *)(puVar16 + (long)puVar15);
        do {
          *puVar15 = *puVar9;
          lVar5 = lVar5 + 8;
          puVar9 = puVar9 + 1;
          puVar15 = puVar15 + 1;
        } while (lVar5 != 0);
        puVar13 = (undefined8 *)((long)puVar13 + (long)puVar7);
        puVar10 = (undefined8 *)((long)puVar10 + (long)puVar7);
        if (puVar12 == puVar7) goto LAB_002fc3b4;
      }
    }
LAB_002fc3a4:
    do {
      puVar9 = (undefined8 *)((long)puVar10 + 1);
      *(undefined1 *)puVar10 = *(undefined1 *)puVar13;
      puVar13 = (undefined8 *)((long)puVar13 + 1);
      puVar10 = puVar9;
    } while (puVar9 < puVar3);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    goto LAB_002fc3b4;
  }
  if (uVar11 == 0) goto LAB_002fc3b4;
  puVar12 = (undefined1 *)(uVar11 + (long)param_1);
  if (puVar12 <= (undefined1 *)((long)param_1 + 1U)) {
    puVar12 = (undefined1 *)((long)param_1 + 1);
  }
  uVar11 = (long)puVar12 - (long)param_1;
  if ((7 < uVar11) && (0x3f < (ulong)((long)param_1 - (long)puVar9))) {
    if (uVar11 < 0x40) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar11 & 0xffffffffffffffc0;
      puVar13 = puVar9 + 4;
      puVar10 = param_1 + 4;
      uVar17 = uVar14;
      do {
        uVar19 = puVar13[-4];
        uVar21 = puVar13[-1];
        uVar20 = puVar13[-2];
        uVar23 = puVar13[1];
        uVar22 = *puVar13;
        uVar25 = puVar13[3];
        uVar24 = puVar13[2];
        puVar10[-3] = puVar13[-3];
        puVar10[-4] = uVar19;
        puVar10[-1] = uVar21;
        puVar10[-2] = uVar20;
        puVar10[1] = uVar23;
        *puVar10 = uVar22;
        puVar10[3] = uVar25;
        puVar10[2] = uVar24;
        uVar17 = uVar17 - 0x40;
        puVar13 = puVar13 + 8;
        puVar10 = puVar10 + 8;
      } while (uVar17 != 0);
/* if you paid for this, you were scammed */
      if (uVar11 == uVar14) goto LAB_002fc3b4;
      if ((uVar11 & 0x38) == 0) {
        puVar9 = (undefined8 *)((long)puVar9 + uVar14);
        param_1 = (undefined8 *)((long)param_1 + uVar14);
        goto LAB_002fc388;
      }
    }
    uVar17 = uVar11 & 0xfffffffffffffff8;
    lVar5 = uVar14 - uVar17;
    puVar13 = (undefined8 *)((long)param_1 + uVar14);
    puVar10 = (undefined8 *)((long)puVar9 + uVar14);
    do {
      *puVar13 = *puVar10;
      lVar5 = lVar5 + 8;
      puVar13 = puVar13 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar5 != 0);
    puVar9 = (undefined8 *)((long)puVar9 + uVar17);
    param_1 = (undefined8 *)((long)param_1 + uVar17);
    if (uVar11 == uVar17) goto LAB_002fc3b4;
  }
LAB_002fc388:
  do {
    puVar13 = (undefined8 *)((long)param_1 + 1);
    *(undefined1 *)param_1 = *(undefined1 *)puVar9;
    puVar9 = (undefined8 *)((long)puVar9 + 1);
    param_1 = puVar13;
  } while (puVar13 < puVar3);
LAB_002fc3b4:
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  lVar5 = (long)puVar3 - uVar8;
  *param_4 = (long)puVar2;
  if ((ulong)((long)puVar3 - param_6) < param_3[2]) {
    if ((ulong)((long)puVar3 - param_7) < param_3[2]) {
      return 0xffffffffffffffec;
    }
    uVar11 = param_3[1];
    lVar5 = lVar5 - param_6;
    if (uVar11 + lVar5 == 0 || (long)(uVar11 + lVar5) < 0 != SCARRY8(uVar11,lVar5)) {
      _memmove(puVar3,param_8 + lVar5,uVar11);
      return uVar1;
    }
    _memmove(puVar3,param_8 + lVar5,-lVar5);
    puVar3 = (undefined8 *)((long)puVar3 - lVar5);
    uVar11 = param_3[1] + lVar5;
    param_3[1] = uVar11;
    lVar5 = param_6;
  }
  else {
    uVar11 = param_3[1];
  }
  FUN_002fc490(puVar3,puVar4,lVar5,uVar11,1);
/* WM - proprietary - see LICENSE - do not sell */
  return uVar1;
}

