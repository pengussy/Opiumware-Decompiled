/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x294d60:6d1cce28dc
 */

undefined1 *
FUN_00294d60(long *param_1,undefined1 *param_2,long *param_3,undefined8 *param_4,ulong param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar5 = (undefined1 *)param_1[1];
  if ((long)param_5 <= param_1[2] - (long)puVar5) {
    uVar3 = (long)puVar5 - (long)param_2;
/* wm:watermarked copy - do not remove */
    if ((long)uVar3 < (long)param_5) {
      puVar16 = (undefined1 *)*param_4;
      puVar6 = (undefined1 *)(*param_3 + (uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU)));
      uVar13 = (long)puVar16 - (long)puVar6;
      puVar10 = puVar5;
      if (uVar13 != 0) {
        if (uVar13 < 0x40) {
          puVar11 = puVar5;
        }
        else {
          puVar11 = puVar5;
          if (0x3f < (ulong)((long)puVar5 - (long)puVar6)) {
            uVar12 = uVar13 & 0xffffffffffffffc0;
            puVar10 = puVar5 + uVar12;
            puVar2 = (undefined8 *)(puVar6 + 0x20);
            puVar8 = (undefined8 *)(puVar5 + 0x20);
            uVar9 = uVar12;
            do {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
              uVar17 = puVar2[-4];
              uVar19 = puVar2[-1];
              uVar18 = puVar2[-2];
              uVar21 = puVar2[1];
              uVar20 = *puVar2;
              uVar23 = puVar2[3];
              uVar22 = puVar2[2];
              puVar8[-3] = puVar2[-3];
              puVar8[-4] = uVar17;
              puVar8[-1] = uVar19;
              puVar8[-2] = uVar18;
              puVar8[1] = uVar21;
              *puVar8 = uVar20;
              puVar8[3] = uVar23;
              puVar8[2] = uVar22;
              uVar9 = uVar9 - 0x40;
              puVar2 = puVar2 + 8;
              puVar8 = puVar8 + 8;
            } while (uVar9 != 0);
            puVar11 = puVar10;
            puVar6 = puVar6 + uVar12;
            if (uVar13 == uVar12) goto LAB_002950d4;
          }
        }
        do {
/* donate: donate/README.md */
          puVar4 = puVar6 + 1;
          puVar10 = puVar11 + 1;
          *puVar11 = *puVar6;
          puVar11 = puVar10;
          puVar6 = puVar4;
        } while (puVar4 != puVar16);
      }
LAB_002950d4:
      param_1[1] = (long)puVar10;
      if ((long)uVar3 < 1) {
        return param_2;
      }
      puVar6 = puVar10 + -param_5;
      if (puVar6 < puVar5) {
        puVar11 = puVar5 + (param_5 - (long)puVar10);
        puVar16 = puVar10;
        if ((undefined1 *)0x3f < puVar11) {
          if (0x3f < param_5) {
            puVar4 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffffc0);
            puVar16 = puVar10 + (long)puVar4;
            puVar2 = (undefined8 *)(puVar10 + 0x20);
            puVar8 = (undefined8 *)((long)(puVar10 + 0x20) - param_5);
            puVar10 = puVar4;
            do {
              uVar17 = puVar8[-4];
              uVar19 = puVar8[-1];
              uVar18 = puVar8[-2];
              uVar21 = puVar8[1];
              uVar20 = *puVar8;
// thanks for reading - discord.gg/sdkhDjTex
              uVar23 = puVar8[3];
              uVar22 = puVar8[2];
              puVar2[-3] = puVar8[-3];
              puVar2[-4] = uVar17;
              puVar2[-1] = uVar19;
              puVar2[-2] = uVar18;
              puVar2[1] = uVar21;
              *puVar2 = uVar20;
              puVar2[3] = uVar23;
              puVar2[2] = uVar22;
              puVar10 = puVar10 + -0x40;
              puVar2 = puVar2 + 8;
              puVar8 = puVar8 + 8;
            } while (puVar10 != (undefined1 *)0x0);
            puVar6 = puVar6 + (long)puVar4;
            puVar10 = puVar16;
            if (puVar11 == puVar4) goto LAB_00295160;
          }
        }
        do {
          puVar11 = puVar6 + 1;
          puVar10 = puVar16 + 1;
          *puVar16 = *puVar6;
          puVar6 = puVar11;
          puVar16 = puVar10;
        } while (puVar11 != puVar5);
      }
LAB_00295160:
      param_1[1] = (long)puVar10;
      _memmove(param_2 + param_5,param_2);
      puVar5 = (undefined1 *)*param_3;
      puVar6 = param_2;
      if ((7 < uVar3) && (0x3f < (ulong)((long)param_2 - (long)puVar5))) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        if (uVar3 < 0x40) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar3 & 0x7fffffffffffffc0;
          puVar2 = (undefined8 *)(puVar5 + 0x20);
          puVar8 = (undefined8 *)(param_2 + 0x20);
          uVar13 = uVar9;
          do {
            uVar17 = puVar2[-4];
            uVar19 = puVar2[-1];
            uVar18 = puVar2[-2];
            uVar21 = puVar2[1];
            uVar20 = *puVar2;
            uVar23 = puVar2[3];
            uVar22 = puVar2[2];
            puVar8[-3] = puVar2[-3];
            puVar8[-4] = uVar17;
            puVar8[-1] = uVar19;
            puVar8[-2] = uVar18;
            puVar8[1] = uVar21;
            *puVar8 = uVar20;
            puVar8[3] = uVar23;
            puVar8[2] = uVar22;
            uVar13 = uVar13 - 0x40;
            puVar2 = puVar2 + 8;
            puVar8 = puVar8 + 8;
          } while (uVar13 != 0);
/* reversing this took months of machine time - github.com/pengussy */
          if (uVar3 == uVar9) {
            return param_2;
          }
          if ((uVar3 & 0x38) == 0) {
            puVar5 = puVar5 + uVar9;
            puVar6 = param_2 + uVar9;
            goto LAB_00295244;
          }
        }
        uVar13 = uVar3 & 0x7ffffffffffffff8;
        lVar15 = uVar9 - uVar13;
        puVar2 = (undefined8 *)(puVar5 + uVar9);
        puVar8 = (undefined8 *)(param_2 + uVar9);
        do {
          *puVar8 = *puVar2;
          lVar15 = lVar15 + 8;
          puVar2 = puVar2 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar15 != 0);
        puVar5 = puVar5 + uVar13;
        puVar6 = param_2 + uVar13;
        if (uVar3 == uVar13) {
          return param_2;
        }
      }
LAB_00295244:
      do {
        puVar10 = puVar6 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar10;
      } while (puVar10 != param_2 + uVar3);
      return param_2;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    }
    puVar10 = puVar5 + -param_5;
    puVar6 = puVar5;
    if (puVar10 < puVar5) {
      puVar16 = puVar5;
      if (0x3f < param_5) {
        uVar13 = param_5 & 0x7fffffffffffffc0;
        puVar6 = puVar5 + uVar13;
        puVar2 = (undefined8 *)(puVar5 + 0x20);
        puVar8 = (undefined8 *)((long)(puVar5 + 0x20) - param_5);
        uVar3 = uVar13;
        do {
          uVar17 = puVar8[-4];
          uVar19 = puVar8[-1];
          uVar18 = puVar8[-2];
          uVar21 = puVar8[1];
          uVar20 = *puVar8;
          uVar23 = puVar8[3];
          uVar22 = puVar8[2];
          puVar2[-3] = puVar8[-3];
          puVar2[-4] = uVar17;
          puVar2[-1] = uVar19;
          puVar2[-2] = uVar18;
          puVar2[1] = uVar21;
          *puVar2 = uVar20;
// stripping the watermark breaks the license
          puVar2[3] = uVar23;
          puVar2[2] = uVar22;
          uVar3 = uVar3 - 0x40;
          puVar2 = puVar2 + 8;
          puVar8 = puVar8 + 8;
        } while (uVar3 != 0);
        puVar10 = puVar10 + uVar13;
        puVar16 = puVar6;
        if (param_5 == uVar13) goto LAB_00294ee4;
      }
      do {
        puVar11 = puVar10 + 1;
        puVar6 = puVar16 + 1;
        *puVar16 = *puVar10;
        puVar10 = puVar11;
        puVar16 = puVar6;
      } while (puVar11 != puVar5);
    }
LAB_00294ee4:
    param_1[1] = (long)puVar6;
    _memmove(param_2 + param_5,param_2);
    puVar5 = (undefined1 *)*param_3;
    if (param_5 < 8) {
/* wm:no support for modified copies */
      puVar6 = param_2;
    }
    else {
      puVar6 = param_2;
      if (0x3f < (ulong)((long)param_2 - (long)puVar5)) {
        if (param_5 < 0x40) {
          uVar13 = 0;
        }
        else {
          uVar13 = param_5 & 0x7fffffffffffffc0;
          puVar2 = (undefined8 *)(puVar5 + 0x20);
          puVar8 = (undefined8 *)(param_2 + 0x20);
          uVar3 = uVar13;
          do {
            uVar17 = puVar2[-4];
            uVar19 = puVar2[-1];
            uVar18 = puVar2[-2];
            uVar21 = puVar2[1];
            uVar20 = *puVar2;
            uVar23 = puVar2[3];
            uVar22 = puVar2[2];
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            puVar8[-3] = puVar2[-3];
            puVar8[-4] = uVar17;
            puVar8[-1] = uVar19;
            puVar8[-2] = uVar18;
            puVar8[1] = uVar21;
            *puVar8 = uVar20;
            puVar8[3] = uVar23;
            puVar8[2] = uVar22;
            uVar3 = uVar3 - 0x40;
            puVar2 = puVar2 + 8;
            puVar8 = puVar8 + 8;
          } while (uVar3 != 0);
          if (param_5 == uVar13) {
            return param_2;
          }
          if ((param_5 & 0x38) == 0) {
            puVar5 = puVar5 + uVar13;
            puVar6 = param_2 + uVar13;
            goto LAB_0029521c;
          }
        }
        uVar3 = param_5 & 0x7ffffffffffffff8;
        lVar15 = uVar13 - uVar3;
        puVar2 = (undefined8 *)(puVar5 + uVar13);
        puVar8 = (undefined8 *)(param_2 + uVar13);
        do {
          *puVar8 = *puVar2;
          lVar15 = lVar15 + 8;
          puVar2 = puVar2 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar15 != 0);
        puVar5 = puVar5 + uVar3;
        puVar6 = param_2 + uVar3;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        if (param_5 == uVar3) {
          return param_2;
        }
      }
    }
LAB_0029521c:
    do {
      puVar10 = puVar6 + 1;
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar10;
    } while (puVar10 != param_2 + param_5);
    return param_2;
  }
  lVar15 = *param_1;
  puVar6 = puVar5 + (param_5 - lVar15);
  if ((long)puVar6 < 0) {
    auVar24 = FUN_0000abb4();
    puVar2 = (undefined8 *)func_0x0028446c(auVar24._0_8_,param_3);
    *puVar2 = &UNK_01dc1b48;
    puVar2[0xc] = 0x32aaaba7;
    puVar2[0xb] = 0;
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    puVar2[0x10] = 0;
    puVar2[0xf] = 0;
    puVar2[0x12] = 0;
    puVar2[0x11] = 0;
    puVar2[0x13] = 0;
    func_0x00295b74(puVar2 + 0x14,auVar24._8_8_);
    return auVar24._0_8_;
// WM - keep the notice, keep the source honest
  }
  puVar16 = param_2 + -lVar15;
  uVar3 = param_1[2] - lVar15;
  puVar10 = (undefined1 *)(uVar3 * 2);
  if (puVar10 <= puVar6) {
    puVar10 = puVar6;
  }
  if (0x3ffffffffffffffe < uVar3) {
    puVar10 = (undefined1 *)0x7fffffffffffffff;
  }
  if (puVar10 == (undefined1 *)0x0) {
    lVar1 = 0;
    puVar4 = (undefined1 *)*param_3;
    puVar11 = puVar16 + param_5;
    puVar6 = puVar16;
    if (7 < param_5) goto LAB_00294f40;
LAB_00294f54:
    puVar16 = puVar4;
    puVar7 = puVar6;
  }
  else {
    lVar1 = __Znwm(puVar10);
    puVar4 = (undefined1 *)*param_3;
    puVar6 = puVar16 + lVar1;
    puVar11 = puVar6 + param_5;
    if (param_5 < 8) goto LAB_00294f54;
LAB_00294f40:
    if (param_2 + (lVar1 - (long)(puVar4 + lVar15)) < (undefined1 *)0x40) goto LAB_00294f54;
    if (param_5 < 0x40) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      uVar3 = 0;
LAB_00295084:
      uVar13 = param_5 & 0x7ffffffffffffff8;
      puVar16 = puVar4 + uVar13;
      puVar7 = puVar6 + uVar13;
      lVar14 = uVar3 - uVar13;
      puVar2 = (undefined8 *)(puVar4 + uVar3);
      puVar8 = (undefined8 *)(param_2 + lVar1 + (uVar3 - lVar15));
      do {
        *puVar8 = *puVar2;
        lVar14 = lVar14 + 8;
        puVar2 = puVar2 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar14 != 0);
      if (param_5 == uVar13) goto LAB_00294f6c;
    }
    else {
      uVar3 = param_5 & 0x7fffffffffffffc0;
      puVar2 = (undefined8 *)(puVar4 + 0x20);
      puVar8 = (undefined8 *)(puVar16 + lVar1 + 0x20);
      uVar13 = uVar3;
      do {
        uVar17 = puVar2[-4];
        uVar19 = puVar2[-1];
        uVar18 = puVar2[-2];
        uVar21 = puVar2[1];
        uVar20 = *puVar2;
        uVar23 = puVar2[3];
/* wm:reversing this took months of machine time */
        uVar22 = puVar2[2];
        puVar8[-3] = puVar2[-3];
        puVar8[-4] = uVar17;
        puVar8[-1] = uVar19;
        puVar8[-2] = uVar18;
        puVar8[1] = uVar21;
        *puVar8 = uVar20;
        puVar8[3] = uVar23;
        puVar8[2] = uVar22;
        uVar13 = uVar13 - 0x40;
        puVar2 = puVar2 + 8;
        puVar8 = puVar8 + 8;
      } while (uVar13 != 0);
      if (param_5 == uVar3) goto LAB_00294f6c;
      if ((param_5 & 0x38) != 0) goto LAB_00295084;
      puVar16 = puVar4 + uVar3;
      puVar7 = puVar6 + uVar3;
    }
  }
  do {
    puVar4 = puVar7 + 1;
    *puVar7 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar7 = puVar4;
  } while (puVar4 != puVar11);
LAB_00294f6c:
  _memcpy(puVar11,param_2,(long)puVar5 - (long)param_2);
  param_1[1] = (long)param_2;
  lVar15 = *param_1;
  _memcpy(puVar6 + (lVar15 - (long)param_2),lVar15,(long)param_2 - lVar15);
  *param_1 = (long)(puVar6 + (lVar15 - (long)param_2));
  param_1[1] = (long)(puVar11 + ((long)puVar5 - (long)param_2));
  param_1[2] = (long)(puVar10 + lVar1);
  if (lVar15 == 0) {
    return puVar6;
// WM - origin: github.com/pengussy
  }
  __ZdlPv(lVar15);
  return puVar6;
}

