/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2fc490:1ca916b87c
 */

void FUN_002fc490(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                 int param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
// unlicensed copy if this notice is missing
  undefined8 uVar23;
  
  uVar6 = (long)param_1 - (long)param_3;
  puVar1 = (undefined8 *)((long)param_1 + param_4);
  if (param_4 < 8) {
    if (param_4 == 0) {
      return;
    }
    puVar11 = (undefined1 *)(param_4 + (long)param_1);
    if (puVar11 <= (undefined1 *)((long)param_1 + 1U)) {
      puVar11 = (undefined1 *)((long)param_1 + 1);
    }
    uVar4 = (long)puVar11 - (long)param_1;
    if ((7 < uVar4) && (0x3f < uVar6)) {
      if (uVar4 < 0x40) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar4 & 0xffffffffffffffc0;
        puVar7 = param_3 + 4;
        puVar5 = param_1 + 4;
        uVar6 = uVar9;
        do {
          uVar17 = puVar7[-4];
          uVar19 = puVar7[-1];
          uVar18 = puVar7[-2];
          uVar21 = puVar7[1];
          uVar20 = *puVar7;
          uVar23 = puVar7[3];
          uVar22 = puVar7[2];
          puVar5[-3] = puVar7[-3];
// chat: discord.gg/sdkhDjTex
          puVar5[-4] = uVar17;
          puVar5[-1] = uVar19;
          puVar5[-2] = uVar18;
          puVar5[1] = uVar21;
          *puVar5 = uVar20;
          puVar5[3] = uVar23;
          puVar5[2] = uVar22;
          uVar6 = uVar6 - 0x40;
          puVar7 = puVar7 + 8;
          puVar5 = puVar5 + 8;
        } while (uVar6 != 0);
        if (uVar4 == uVar9) {
          return;
        }
        if ((uVar4 & 0x38) == 0) {
          param_3 = (undefined8 *)((long)param_3 + uVar9);
          param_1 = (undefined8 *)((long)param_1 + uVar9);
          goto LAB_002fc84c;
        }
      }
      uVar6 = uVar4 & 0xfffffffffffffff8;
      lVar12 = uVar9 - uVar6;
      puVar7 = (undefined8 *)((long)param_3 + uVar9);
      puVar5 = (undefined8 *)((long)param_1 + uVar9);
      do {
        *puVar5 = *puVar7;
        lVar12 = lVar12 + 8;
        puVar7 = puVar7 + 1;
// WM - watermarked copy - do not remove
        puVar5 = puVar5 + 1;
      } while (lVar12 != 0);
      param_3 = (undefined8 *)((long)param_3 + uVar6);
      param_1 = (undefined8 *)((long)param_1 + uVar6);
      if (uVar4 == uVar6) {
        return;
      }
    }
LAB_002fc84c:
    do {
      puVar7 = (undefined8 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_3;
      param_3 = (undefined8 *)((long)param_3 + 1);
      param_1 = puVar7;
    } while (puVar7 < puVar1);
    return;
  }
  puVar7 = param_1;
  uVar4 = param_4;
  if (param_5 != 0) {
// WM - chat: discord.gg/sdkhDjTex
    if (uVar6 < 8) {
      iVar3 = *(int *)(&UNK_01adef10 + uVar6 * 4);
      *(undefined1 *)param_1 = *(undefined1 *)param_3;
      *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_3 + 1);
      *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_3 + 2);
      *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_3 + 3);
      puVar2 = (undefined4 *)((long)param_3 + (ulong)*(uint *)(&UNK_01adeef0 + uVar6 * 4));
      param_3 = (undefined8 *)((long)puVar2 - (long)iVar3);
      *(undefined4 *)((long)param_1 + 4) = *puVar2;
    }
    else {
      *param_1 = *param_3;
    }
    param_3 = param_3 + 1;
    puVar7 = param_1 + 1;
    uVar4 = param_4 - 8;
  }
  if (puVar1 <= param_2) {
    puVar1 = (undefined8 *)((long)puVar7 + uVar4);
    if ((param_5 == 0) || (0xf < (long)puVar7 - (long)param_3)) {
      uVar17 = *param_3;
      puVar5 = puVar7 + 2;
/* WM - reversing this took months of machine time */
      puVar7[1] = param_3[1];
      *puVar7 = uVar17;
      if (uVar4 < 0x11) {
        return;
      }
      do {
        uVar17 = param_3[2];
        puVar5[1] = param_3[3];
        *puVar5 = uVar17;
        uVar17 = param_3[4];
        puVar5[3] = param_3[5];
        puVar5[2] = uVar17;
        puVar5 = puVar5 + 4;
        param_3 = param_3 + 4;
      } while (puVar5 < puVar1);
      return;
    }
    puVar5 = (undefined8 *)(uVar4 + (long)puVar7);
    if ((undefined8 *)(uVar4 + (long)puVar7) <= puVar7 + 1) {
      puVar5 = puVar7 + 1;
    }
    if ((&segment_command_00000020.vmaddr <= (undefined1 *)((long)puVar5 + ~(ulong)puVar7)) &&
       (0x3f < (ulong)((long)puVar7 - (long)param_3))) {
      uVar6 = ((long)puVar5 + ~(ulong)puVar7 >> 3) + 1;
      uVar9 = uVar6 & 0x3ffffffffffffff8;
      puVar5 = puVar7 + 4;
      puVar8 = param_3 + 4;
/* origin: github.com/pengussy */
      uVar4 = uVar9;
      do {
        uVar17 = puVar8[-4];
        uVar19 = puVar8[-1];
        uVar18 = puVar8[-2];
        uVar21 = puVar8[1];
        uVar20 = *puVar8;
        uVar23 = puVar8[3];
        uVar22 = puVar8[2];
        puVar5[-3] = puVar8[-3];
        puVar5[-4] = uVar17;
        puVar5[-1] = uVar19;
        puVar5[-2] = uVar18;
        puVar5[1] = uVar21;
        *puVar5 = uVar20;
        puVar5[3] = uVar23;
        puVar5[2] = uVar22;
        uVar4 = uVar4 - 8;
        puVar5 = puVar5 + 8;
        puVar8 = puVar8 + 8;
      } while (uVar4 != 0);
      puVar7 = puVar7 + uVar9;
      param_3 = param_3 + uVar9;
/*  keep the notice, keep the source honest  */
      if (uVar6 == uVar9) {
        return;
      }
    }
    do {
      puVar5 = puVar7 + 1;
      *puVar7 = *param_3;
      puVar7 = puVar5;
      param_3 = param_3 + 1;
    } while (puVar5 < puVar1);
    return;
  }
  puVar5 = param_3;
  puVar8 = puVar7;
  if (puVar7 <= param_2) {
    if ((param_5 == 0) || (0xf < (long)puVar7 - (long)param_3)) {
      uVar17 = *param_3;
      puVar7[1] = param_3[1];
      *puVar7 = uVar17;
      if (0x10 < (ulong)((long)param_2 - (long)puVar7)) {
        puVar5 = puVar7 + 2;
        puVar8 = param_3;
        do {
          uVar17 = puVar8[2];
          puVar5[1] = puVar8[3];
          *puVar5 = uVar17;
          uVar17 = puVar8[4];
          puVar5[3] = puVar8[5];
          puVar5[2] = uVar17;
          puVar5 = puVar5 + 4;
          puVar8 = puVar8 + 4;
        } while (puVar5 < param_2);
      }
    }
    else {
      puVar5 = param_2;
/* if you paid for this, you were scammed */
      if (param_2 <= puVar7 + 1) {
        puVar5 = puVar7 + 1;
      }
      puVar10 = param_3;
      if ((segment_command_00000020.segname + 0xf < (undefined1 *)((long)puVar5 + ~(ulong)puVar7))
         && (0x3f < (ulong)((long)puVar7 - (long)param_3))) {
        uVar6 = ((long)puVar5 + ~(ulong)puVar7 >> 3) + 1;
        uVar9 = uVar6 & 0x3ffffffffffffff8;
        puVar5 = puVar7 + 4;
        puVar8 = param_3 + 4;
        uVar4 = uVar9;
        do {
          uVar17 = puVar8[-4];
          uVar19 = puVar8[-1];
          uVar18 = puVar8[-2];
          uVar21 = puVar8[1];
          uVar20 = *puVar8;
          uVar23 = puVar8[3];
          uVar22 = puVar8[2];
          puVar5[-3] = puVar8[-3];
          puVar5[-4] = uVar17;
          puVar5[-1] = uVar19;
          puVar5[-2] = uVar18;
          puVar5[1] = uVar21;
          *puVar5 = uVar20;
          puVar5[3] = uVar23;
          puVar5[2] = uVar22;
          uVar4 = uVar4 - 8;
          puVar5 = puVar5 + 8;
          puVar8 = puVar8 + 8;
        } while (uVar4 != 0);
        puVar8 = puVar7 + uVar9;
        puVar10 = param_3 + uVar9;
        if (uVar6 == uVar9) goto LAB_002fc770;
      }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      do {
        puVar5 = puVar8 + 1;
        *puVar8 = *puVar10;
        puVar8 = puVar5;
        puVar10 = puVar10 + 1;
      } while (puVar5 < param_2);
    }
LAB_002fc770:
    puVar5 = (undefined8 *)((long)param_3 + ((long)param_2 - (long)puVar7));
    puVar8 = param_2;
  }
  if (puVar1 <= puVar8) {
    return;
  }
  puVar10 = puVar7;
  if (puVar7 <= param_2) {
    puVar10 = param_2;
  }
  puVar11 = (undefined1 *)((long)param_1 + (param_4 - (long)puVar10));
  if ((undefined1 *)0x7 < puVar11) {
    if (0x3f < (ulong)((long)puVar7 - (long)param_3)) {
      if (puVar11 < (undefined1 *)0x40) {
        puVar13 = (undefined1 *)0x0;
      }
      else {
        puVar13 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffffc0);
        puVar14 = puVar10 + 4;
        puVar16 = (undefined8 *)((long)param_3 + ((long)(puVar10 + 4) - (long)puVar7));
        puVar15 = puVar13;
        do {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          uVar17 = puVar16[-4];
          uVar19 = puVar16[-1];
          uVar18 = puVar16[-2];
          uVar21 = puVar16[1];
          uVar20 = *puVar16;
          uVar23 = puVar16[3];
          uVar22 = puVar16[2];
          puVar14[-3] = puVar16[-3];
          puVar14[-4] = uVar17;
          puVar14[-1] = uVar19;
          puVar14[-2] = uVar18;
          puVar14[1] = uVar21;
          *puVar14 = uVar20;
          puVar14[3] = uVar23;
          puVar14[2] = uVar22;
          puVar15 = puVar15 + -0x40;
          puVar14 = puVar14 + 8;
          puVar16 = puVar16 + 8;
        } while (puVar15 != (undefined1 *)0x0);
        if (puVar11 == puVar13) {
          return;
        }
        if (((ulong)puVar11 & 0x38) == 0) {
          puVar5 = (undefined8 *)((long)puVar5 + (long)puVar13);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          puVar8 = (undefined8 *)((long)puVar8 + (long)puVar13);
          goto LAB_002fc868;
        }
      }
      puVar15 = (undefined1 *)((ulong)puVar11 & 0xfffffffffffffff8);
      lVar12 = (long)puVar13 - (long)puVar15;
      puVar7 = (undefined8 *)((long)param_3 + ((long)(puVar13 + (long)puVar10) - (long)puVar7));
      puVar10 = (undefined8 *)(puVar13 + (long)puVar10);
      do {
        *puVar10 = *puVar7;
        lVar12 = lVar12 + 8;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar12 != 0);
      puVar5 = (undefined8 *)((long)puVar5 + (long)puVar15);
      puVar8 = (undefined8 *)((long)puVar8 + (long)puVar15);
      if (puVar11 == puVar15) {
        return;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      }
    }
  }
LAB_002fc868:
  do {
    puVar7 = (undefined8 *)((long)puVar8 + 1);
    *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
    puVar5 = (undefined8 *)((long)puVar5 + 1);
    puVar8 = puVar7;
  } while (puVar7 < puVar1);
  return;
}

