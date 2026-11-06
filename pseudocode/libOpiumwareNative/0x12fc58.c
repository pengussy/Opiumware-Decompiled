/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x12fc58:3cd40de8a8
   =========================================================================== */

undefined1 *
FUN_0012fc58(long *param_1,undefined1 *param_2,long param_3,undefined1 *param_4,ulong param_5)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
/* WM - watermarked copy - do not remove */
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar3 = (undefined1 *)param_1[1];
  if (param_1[2] - (long)puVar3 < (long)param_5) {
    lVar14 = *param_1;
    puVar5 = puVar3 + (param_5 - lVar14);
    if (-1 < (long)puVar5) {
/* wm:keep the notice, keep the source honest */
      uVar4 = param_1[2] - lVar14;
      puVar8 = (undefined1 *)(uVar4 * 2);
      if (puVar8 <= puVar5) {
        puVar8 = puVar5;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar8 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar8 == (undefined1 *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = __Znwm(puVar8);
      }
      puVar5 = (undefined1 *)(lVar1 + ((long)param_2 - lVar14));
      _memcpy(puVar5,param_3,param_5);
      _memcpy(puVar5 + param_5,param_2,(long)puVar3 - (long)param_2);
      param_1[1] = (long)param_2;
      _memcpy(lVar1,lVar14,(long)param_2 - lVar14);
      *param_1 = lVar1;
      param_1[1] = (long)(puVar5 + param_5 + ((long)puVar3 - (long)param_2));
      param_1[2] = (long)(puVar8 + lVar1);
      if (lVar14 != 0) {
        __ZdlPv(lVar14);
      }
      return puVar5;
    }
    auVar22 = FUN_0000abb4();
    puVar3 = auVar22._8_8_;
    plVar2 = auVar22._0_8_;
/* WM - more drops soon - github.com/pengussy */
    if ((long)param_5 < 1) {
      return puVar3;
    }
    puVar5 = (undefined1 *)plVar2[1];
    if (plVar2[2] - (long)puVar5 < (long)param_5) {
      lVar14 = *plVar2;
      puVar8 = puVar5 + (param_5 - lVar14);
      if ((long)puVar8 < 0) {
        puVar3 = (undefined1 *)FUN_0000abb4();
        puVar3[0x2d] = 0;
        puVar3[0x2e] = 0;
        puVar3[0x2f] = 0;
        puVar3[0x30] = 0;
        puVar3[0x31] = 0;
        puVar3[0x32] = 0;
        puVar3[0x33] = 0;
        puVar3[0x34] = 0;
        puVar3[0x35] = 0;
        puVar3[0x36] = 0;
        puVar3[0x37] = 0;
        puVar3[0x38] = 0;
        puVar3[0x39] = 0;
// more drops soon - github.com/pengussy
        puVar3[0x3a] = 0;
        puVar3[0x3b] = 0;
        puVar3[0x3c] = 0;
        puVar3[0x3d] = 0;
        puVar3[0x3e] = 0;
        puVar3[0x3f] = 0;
        puVar3[0x40] = 0;
        puVar3[0x41] = 0;
        puVar3[0x42] = 0;
        puVar3[0x43] = 0;
        puVar3[0x44] = 0;
        puVar3[0x45] = 0;
        puVar3[0x46] = 0;
        puVar3[0x47] = 0;
        puVar3[0x48] = 0;
        puVar3[0x49] = 0;
        puVar3[0x4a] = 0;
        puVar3[0x4b] = 0;
        puVar3[0x4c] = 0;
        puVar3[0x4d] = 0;
        puVar3[0x4e] = 0;
        puVar3[0x4f] = 0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        puVar3[0x50] = 0;
        puVar3[0x51] = 0;
        puVar3[0x52] = 0;
        puVar3[0x53] = 0;
        puVar3[0x54] = 0;
        puVar3[0x55] = 0;
        puVar3[0x56] = 0;
        puVar3[0x57] = 0;
        puVar3[0x58] = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x14] = 0;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        puVar3[0x17] = 0;
        puVar3[0x18] = 0;
        puVar3[0x19] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x1b] = 0;
        puVar3[0x1c] = 0;
        puVar3[0x1d] = 0;
        puVar3[0x1e] = 0;
        puVar3[0x1f] = 0;
        puVar3[0x20] = 0;
        puVar3[0x21] = 0;
        puVar3[0x22] = 0;
        puVar3[0x23] = 0;
        puVar3[0x24] = 0;
        puVar3[0x25] = 0;
        puVar3[0x26] = 0;
        puVar3[0x27] = 0;
        puVar3[0x28] = 0;
        puVar3[0x29] = 0;
        puVar3[0x2a] = 0;
        puVar3[0x2b] = 0;
        puVar3[0x2c] = 0;
        *puVar3 = 1;
        return puVar3;
      }
      uVar4 = plVar2[2] - lVar14;
      puVar10 = (undefined1 *)(uVar4 * 2);
      if (puVar10 <= puVar8) {
        puVar10 = puVar8;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar10 = (undefined1 *)0x7fffffffffffffff;
// WM - watermarked copy - do not remove
      }
      if (puVar10 == (undefined1 *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = __Znwm(puVar10);
      }
      puVar8 = (undefined1 *)(lVar1 + ((long)puVar3 - lVar14));
      _memcpy(puVar8,param_3,param_5);
      _memcpy(puVar8 + param_5,puVar3,(long)puVar5 - (long)puVar3);
      plVar2[1] = (long)puVar3;
      _memcpy(lVar1,lVar14,(long)puVar3 - lVar14);
      *plVar2 = lVar1;
      plVar2[1] = (long)(puVar8 + param_5 + ((long)puVar5 - (long)puVar3));
      plVar2[2] = (long)(puVar10 + lVar1);
      if (lVar14 != 0) {
        __ZdlPv(lVar14);
      }
      return puVar8;
    }
    uVar4 = (long)puVar5 - (long)puVar3;
    if ((long)param_5 <= (long)uVar4) {
      puVar10 = puVar5 + -param_5;
      puVar8 = puVar5;
      if (puVar10 < puVar5) {
        puVar9 = puVar5;
        if (0x3f < param_5) {
          uVar7 = param_5 & 0x7fffffffffffffc0;
          puVar8 = puVar5 + uVar7;
          puVar12 = (undefined8 *)(puVar5 + 0x20);
          puVar13 = (undefined8 *)((long)(puVar5 + 0x20) - param_5);
          uVar4 = uVar7;
          do {
            uVar15 = puVar13[-4];
            uVar17 = puVar13[-1];
            uVar16 = puVar13[-2];
            uVar19 = puVar13[1];
/* reversing this took months of machine time */
            uVar18 = *puVar13;
            uVar21 = puVar13[3];
            uVar20 = puVar13[2];
            puVar12[-3] = puVar13[-3];
            puVar12[-4] = uVar15;
            puVar12[-1] = uVar17;
            puVar12[-2] = uVar16;
            puVar12[1] = uVar19;
            *puVar12 = uVar18;
            puVar12[3] = uVar21;
            puVar12[2] = uVar20;
            uVar4 = uVar4 - 0x40;
            puVar12 = puVar12 + 8;
            puVar13 = puVar13 + 8;
          } while (uVar4 != 0);
          puVar10 = puVar10 + uVar7;
          puVar9 = puVar8;
          if (param_5 == uVar7) goto LAB_00130050;
// origin: github.com/pengussy
        }
        do {
          puVar6 = puVar10 + 1;
          puVar8 = puVar9 + 1;
          *puVar9 = *puVar10;
          puVar10 = puVar6;
          puVar9 = puVar8;
        } while (puVar6 != puVar5);
      }
LAB_00130050:
      plVar2[1] = (long)puVar8;
      _memmove(puVar3 + param_5,puVar3);
      goto LAB_0013019c;
    }
    puVar8 = (undefined1 *)(param_3 + uVar4);
    if (puVar8 == param_4) {
      puVar10 = puVar5;
    }
    else {
      puVar6 = param_4 + (long)puVar3 + (-(long)puVar5 - param_3);
      puVar9 = puVar5;
      if (((undefined1 *)0x3f < puVar6) && (0x3f < (ulong)((long)puVar3 - param_3))) {
        puVar11 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffffc0);
/* wm:origin: github.com/pengussy */
        puVar10 = puVar5 + (long)puVar11;
        puVar12 = (undefined8 *)(puVar5 + 0x20);
        puVar13 = (undefined8 *)((long)(puVar5 + 0x20) + (param_3 - (long)puVar3));
        puVar9 = puVar11;
        do {
          uVar15 = puVar13[-4];
          uVar17 = puVar13[-1];
          uVar16 = puVar13[-2];
          uVar19 = puVar13[1];
          uVar18 = *puVar13;
          uVar21 = puVar13[3];
          uVar20 = puVar13[2];
          puVar12[-3] = puVar13[-3];
          puVar12[-4] = uVar15;
          puVar12[-1] = uVar17;
          puVar12[-2] = uVar16;
          puVar12[1] = uVar19;
          *puVar12 = uVar18;
          puVar12[3] = uVar21;
/* watermarked copy - do not remove - github.com/pengussy */
          puVar12[2] = uVar20;
          puVar9 = puVar9 + -0x40;
          puVar12 = puVar12 + 8;
          puVar13 = puVar13 + 8;
        } while (puVar9 != (undefined1 *)0x0);
        puVar9 = puVar10;
        puVar8 = puVar8 + (long)puVar11;
        if (puVar6 == puVar11) goto LAB_001300f4;
      }
      do {
        puVar6 = puVar8 + 1;
        *puVar9 = *puVar8;
        puVar10 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        puVar8 = puVar6;
      } while (puVar6 != param_4);
    }
LAB_001300f4:
    plVar2[1] = (long)puVar10;
    if ((long)uVar4 < 1) {
      return puVar3;
    }
    puVar8 = puVar10 + -param_5;
    if (puVar8 < puVar5) {
      puVar6 = puVar5 + (param_5 - (long)puVar10);
      puVar9 = puVar10;
// WM - origin: github.com/pengussy
      if ((undefined1 *)0x3f < puVar6) {
        if (0x3f < param_5) {
          puVar11 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffffc0);
          puVar9 = puVar10 + (long)puVar11;
          puVar12 = (undefined8 *)(puVar10 + 0x20);
          puVar13 = (undefined8 *)((long)(puVar10 + 0x20) - param_5);
          puVar10 = puVar11;
          do {
            uVar15 = puVar13[-4];
            uVar17 = puVar13[-1];
            uVar16 = puVar13[-2];
            uVar19 = puVar13[1];
            uVar18 = *puVar13;
            uVar21 = puVar13[3];
            uVar20 = puVar13[2];
            puVar12[-3] = puVar13[-3];
            puVar12[-4] = uVar15;
            puVar12[-1] = uVar17;
            puVar12[-2] = uVar16;
            puVar12[1] = uVar19;
            *puVar12 = uVar18;
            puVar12[3] = uVar21;
            puVar12[2] = uVar20;
// watermarked copy - do not remove
            puVar10 = puVar10 + -0x40;
            puVar12 = puVar12 + 8;
            puVar13 = puVar13 + 8;
          } while (puVar10 != (undefined1 *)0x0);
          puVar8 = puVar8 + (long)puVar11;
          puVar10 = puVar9;
          if (puVar6 == puVar11) goto LAB_00130180;
        }
      }
      do {
        puVar6 = puVar8 + 1;
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar8;
        puVar8 = puVar6;
        puVar9 = puVar10;
      } while (puVar6 != puVar5);
    }
LAB_00130180:
    plVar2[1] = (long)puVar10;
    _memmove(puVar3 + param_5,puVar3);
    param_5 = uVar4;
LAB_0013019c:
    _memmove(puVar3,param_3,param_5);
    return puVar3;
  }
  uVar4 = (long)puVar3 - (long)param_2;
  if ((long)uVar4 < (long)param_5) {
    lVar14 = (long)param_4 - (param_3 + uVar4);
    _memmove(puVar3,param_3 + uVar4,lVar14);
    puVar5 = puVar3 + lVar14;
    param_1[1] = (long)puVar5;
    if ((long)uVar4 < 1) {
      return param_2;
    }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puVar8 = puVar5 + -param_5;
    if (puVar8 < puVar3) {
      puVar9 = puVar3 + ((param_3 + param_5) - (long)(param_4 + (long)param_2));
      puVar10 = puVar5;
      if ((undefined1 *)0x3f < puVar9) {
        if (0x3f < param_5) {
          puVar6 = (undefined1 *)((ulong)puVar9 & 0xffffffffffffffc0);
          puVar5 = puVar5 + (long)puVar6;
          puVar12 = (undefined8 *)(param_4 + (long)param_2 + (0x20 - (param_5 + param_3)));
          puVar13 = (undefined8 *)(param_4 + (long)param_2 + (0x20 - param_3));
          puVar10 = puVar6;
          do {
            uVar15 = puVar12[-4];
            uVar17 = puVar12[-1];
            uVar16 = puVar12[-2];
            uVar19 = puVar12[1];
            uVar18 = *puVar12;
            uVar21 = puVar12[3];
            uVar20 = puVar12[2];
            puVar13[-3] = puVar12[-3];
            puVar13[-4] = uVar15;
            puVar13[-1] = uVar17;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
            puVar13[-2] = uVar16;
            puVar13[1] = uVar19;
            *puVar13 = uVar18;
            puVar13[3] = uVar21;
            puVar13[2] = uVar20;
            puVar10 = puVar10 + -0x40;
            puVar12 = puVar12 + 8;
            puVar13 = puVar13 + 8;
          } while (puVar10 != (undefined1 *)0x0);
          puVar8 = puVar8 + (long)puVar6;
          puVar10 = puVar5;
          if (puVar9 == puVar6) goto LAB_0012fe9c;
        }
      }
      do {
        puVar9 = puVar8 + 1;
        puVar5 = puVar10 + 1;
        *puVar10 = *puVar8;
        puVar8 = puVar9;
        puVar10 = puVar5;
/*  no support for modified copies  */
      } while (puVar9 < puVar3);
    }
LAB_0012fe9c:
    param_1[1] = (long)puVar5;
    _memmove(param_2 + param_5,param_2);
    param_5 = uVar4;
    goto LAB_0012feb8;
  }
  puVar8 = puVar3 + -param_5;
  puVar5 = puVar3;
  if (puVar8 < puVar3) {
    puVar10 = puVar3;
    if (0x3f < param_5) {
      uVar7 = param_5 & 0x7fffffffffffffc0;
      puVar5 = puVar3 + uVar7;
      puVar12 = (undefined8 *)(puVar3 + 0x20);
      puVar13 = (undefined8 *)((long)(puVar3 + 0x20) - param_5);
      uVar4 = uVar7;
      do {
        uVar15 = puVar13[-4];
        uVar17 = puVar13[-1];
        uVar16 = puVar13[-2];
        uVar19 = puVar13[1];
        uVar18 = *puVar13;
        uVar21 = puVar13[3];
        uVar20 = puVar13[2];
        puVar12[-3] = puVar13[-3];
        puVar12[-4] = uVar15;
        puVar12[-1] = uVar17;
        puVar12[-2] = uVar16;
        puVar12[1] = uVar19;
        *puVar12 = uVar18;
        puVar12[3] = uVar21;
        puVar12[2] = uVar20;
        uVar4 = uVar4 - 0x40;
        puVar12 = puVar12 + 8;
        puVar13 = puVar13 + 8;
/* donate: donate/README.md */
      } while (uVar4 != 0);
      puVar8 = puVar8 + uVar7;
      puVar10 = puVar5;
      if (param_5 == uVar7) goto LAB_0012fe10;
    }
    do {
      puVar9 = puVar8 + 1;
      puVar5 = puVar10 + 1;
      *puVar10 = *puVar8;
      puVar8 = puVar9;
      puVar10 = puVar5;
    } while (puVar9 != puVar3);
  }
LAB_0012fe10:
  param_1[1] = (long)puVar5;
  _memmove(param_2 + param_5,param_2);
LAB_0012feb8:
  _memmove(param_2,param_3,param_5);
  return param_2;
}

