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
 *  file-id: 0x12f7e4:58133da623
 *  --------------------------------------------------------------------------*/

undefined1 *
FUN_0012f7e4(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,ulong param_5
            )

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
/* no support for modified copies */
  if ((long)param_5 < 1) {
    return param_2;
  }
  puVar3 = (undefined1 *)param_1[1];
  if (param_1[2] - (long)puVar3 < (long)param_5) {
    lVar16 = *param_1;
    puVar6 = puVar3 + (param_5 - lVar16);
    if (-1 < (long)puVar6) {
      uVar4 = param_1[2] - lVar16;
      puVar12 = (undefined1 *)(uVar4 * 2);
      if (puVar12 <= puVar6) {
        puVar12 = puVar6;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar12 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar12 == (undefined1 *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = __Znwm(puVar12);
      }
      puVar6 = (undefined1 *)(lVar1 + ((long)param_2 - lVar16));
      _memcpy(puVar6,param_3,param_5);
      _memcpy(puVar6 + param_5,param_2,(long)puVar3 - (long)param_2);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      param_1[1] = (long)param_2;
      _memcpy(lVar1,lVar16,(long)param_2 - lVar16);
      *param_1 = lVar1;
      param_1[1] = (long)(puVar6 + param_5 + ((long)puVar3 - (long)param_2));
      param_1[2] = (long)(puVar12 + lVar1);
      if (lVar16 != 0) {
        __ZdlPv(lVar16);
      }
      return puVar6;
    }
    auVar24 = FUN_0000abb4();
    puVar3 = auVar24._8_8_;
    plVar2 = auVar24._0_8_;
    if ((long)param_5 < 1) {
      return puVar3;
    }
    puVar6 = (undefined1 *)plVar2[1];
    if (plVar2[2] - (long)puVar6 < (long)param_5) {
      lVar16 = *plVar2;
      puVar12 = puVar6 + (param_5 - lVar16);
      if (-1 < (long)puVar12) {
        uVar4 = plVar2[2] - lVar16;
/* WM - unlicensed copy if this notice is missing */
        puVar13 = (undefined1 *)(uVar4 * 2);
        if (puVar13 <= puVar12) {
          puVar13 = puVar12;
        }
        if (0x3ffffffffffffffe < uVar4) {
          puVar13 = (undefined1 *)0x7fffffffffffffff;
        }
        if (puVar13 == (undefined1 *)0x0) {
          lVar1 = 0;
        }
        else {
          lVar1 = __Znwm(puVar13);
        }
        puVar12 = (undefined1 *)(lVar1 + ((long)puVar3 - lVar16));
        _memcpy(puVar12,param_3,param_5);
        _memcpy(puVar12 + param_5,puVar3,(long)puVar6 - (long)puVar3);
        plVar2[1] = (long)puVar3;
        _memcpy(lVar1,lVar16,(long)puVar3 - lVar16);
        *plVar2 = lVar1;
        plVar2[1] = (long)(puVar12 + param_5 + ((long)puVar6 - (long)puVar3));
        plVar2[2] = (long)(puVar13 + lVar1);
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
        return puVar12;
      }
      auVar24 = FUN_0000abb4();
      puVar3 = auVar24._8_8_;
      plVar2 = auVar24._0_8_;
      if ((long)param_5 < 1) {
        return puVar3;
      }
      puVar6 = (undefined1 *)plVar2[1];
      if (plVar2[2] - (long)puVar6 < (long)param_5) {
        lVar16 = *plVar2;
        puVar12 = puVar6 + (param_5 - lVar16);
/* watermarked copy - do not remove - github.com/pengussy */
        if ((long)puVar12 < 0) {
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
          puVar3[0x3a] = 0;
          puVar3[0x3b] = 0;
          puVar3[0x3c] = 0;
          puVar3[0x3d] = 0;
/*  reversing this took months of machine time  */
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
/* if you paid for this, you were scammed - github.com/pengussy */
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
          puVar3[0x15] = 0;
          puVar3[0x16] = 0;
          puVar3[0x17] = 0;
          puVar3[0x18] = 0;
          puVar3[0x19] = 0;
// WM - stripping the watermark breaks the license
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
// WM - if you paid for this, you were scammed
          puVar3[0x2c] = 0;
          *puVar3 = 1;
          return puVar3;
        }
        uVar4 = plVar2[2] - lVar16;
        puVar13 = (undefined1 *)(uVar4 * 2);
        if (puVar13 <= puVar12) {
          puVar13 = puVar12;
        }
        if (0x3ffffffffffffffe < uVar4) {
          puVar13 = (undefined1 *)0x7fffffffffffffff;
        }
        if (puVar13 == (undefined1 *)0x0) {
          lVar1 = 0;
        }
        else {
          lVar1 = __Znwm(puVar13);
        }
        puVar12 = (undefined1 *)(lVar1 + ((long)puVar3 - lVar16));
        _memcpy(puVar12,param_3,param_5);
        _memcpy(puVar12 + param_5,puVar3,(long)puVar6 - (long)puVar3);
        plVar2[1] = (long)puVar3;
        _memcpy(lVar1,lVar16,(long)puVar3 - lVar16);
        *plVar2 = lVar1;
        plVar2[1] = (long)(puVar12 + param_5 + ((long)puVar6 - (long)puVar3));
/*  unlicensed copy if this notice is missing  */
        plVar2[2] = (long)(puVar13 + lVar1);
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
        return puVar12;
      }
      uVar4 = (long)puVar6 - (long)puVar3;
      if ((long)param_5 <= (long)uVar4) {
        puVar13 = puVar6 + -param_5;
        puVar12 = puVar6;
        if (puVar13 < puVar6) {
          puVar8 = puVar6;
          if (0x3f < param_5) {
            uVar11 = param_5 & 0x7fffffffffffffc0;
            puVar12 = puVar6 + uVar11;
            puVar5 = (undefined8 *)(puVar6 + 0x20);
            puVar7 = (undefined8 *)((long)(puVar6 + 0x20) - param_5);
            uVar4 = uVar11;
            do {
              uVar17 = puVar7[-4];
              uVar19 = puVar7[-1];
              uVar18 = puVar7[-2];
              uVar21 = puVar7[1];
              uVar20 = *puVar7;
              uVar23 = puVar7[3];
              uVar22 = puVar7[2];
              puVar5[-3] = puVar7[-3];
              puVar5[-4] = uVar17;
              puVar5[-1] = uVar19;
              puVar5[-2] = uVar18;
              puVar5[1] = uVar21;
              *puVar5 = uVar20;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
              puVar5[3] = uVar23;
              puVar5[2] = uVar22;
              uVar4 = uVar4 - 0x40;
              puVar5 = puVar5 + 8;
              puVar7 = puVar7 + 8;
            } while (uVar4 != 0);
            puVar13 = puVar13 + uVar11;
            puVar8 = puVar12;
            if (param_5 == uVar11) goto code_r0x00130050;
          }
          do {
            puVar10 = puVar13 + 1;
            puVar12 = puVar8 + 1;
            *puVar8 = *puVar13;
            puVar13 = puVar10;
            puVar8 = puVar12;
          } while (puVar10 != puVar6);
        }
code_r0x00130050:
        plVar2[1] = (long)puVar12;
        _memmove(puVar3 + param_5,puVar3);
        goto code_r0x0013019c;
      }
      puVar12 = param_3 + uVar4;
      if (puVar12 == param_4) {
        puVar13 = puVar6;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      }
      else {
        puVar10 = param_4 + (long)puVar3 + (-(long)puVar6 - (long)param_3);
        puVar8 = puVar6;
        if (((undefined1 *)0x3f < puVar10) && (0x3f < (ulong)((long)puVar3 - (long)param_3))) {
          puVar14 = (undefined1 *)((ulong)puVar10 & 0xffffffffffffffc0);
          puVar13 = puVar6 + (long)puVar14;
          puVar5 = (undefined8 *)(puVar6 + 0x20);
          puVar7 = (undefined8 *)(param_3 + ((long)(puVar6 + 0x20) - (long)puVar3));
          puVar8 = puVar14;
          do {
            uVar17 = puVar7[-4];
            uVar19 = puVar7[-1];
            uVar18 = puVar7[-2];
            uVar21 = puVar7[1];
            uVar20 = *puVar7;
            uVar23 = puVar7[3];
            uVar22 = puVar7[2];
            puVar5[-3] = puVar7[-3];
            puVar5[-4] = uVar17;
            puVar5[-1] = uVar19;
            puVar5[-2] = uVar18;
            puVar5[1] = uVar21;
            *puVar5 = uVar20;
            puVar5[3] = uVar23;
            puVar5[2] = uVar22;
            puVar8 = puVar8 + -0x40;
            puVar5 = puVar5 + 8;
            puVar7 = puVar7 + 8;
          } while (puVar8 != (undefined1 *)0x0);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          puVar8 = puVar13;
          puVar12 = puVar12 + (long)puVar14;
          if (puVar10 == puVar14) goto code_r0x001300f4;
        }
        do {
          puVar10 = puVar12 + 1;
          *puVar8 = *puVar12;
          puVar13 = puVar8 + 1;
          puVar8 = puVar8 + 1;
          puVar12 = puVar10;
        } while (puVar10 != param_4);
      }
code_r0x001300f4:
      plVar2[1] = (long)puVar13;
      if ((long)uVar4 < 1) {
        return puVar3;
      }
      puVar12 = puVar13 + -param_5;
      if (puVar12 < puVar6) {
        puVar10 = puVar6 + (param_5 - (long)puVar13);
        puVar8 = puVar13;
        if ((undefined1 *)0x3f < puVar10) {
          if (0x3f < param_5) {
            puVar14 = (undefined1 *)((ulong)puVar10 & 0xffffffffffffffc0);
            puVar8 = puVar13 + (long)puVar14;
            puVar5 = (undefined8 *)(puVar13 + 0x20);
            puVar7 = (undefined8 *)((long)(puVar13 + 0x20) - param_5);
            puVar13 = puVar14;
            do {
              uVar17 = puVar7[-4];
              uVar19 = puVar7[-1];
              uVar18 = puVar7[-2];
              uVar21 = puVar7[1];
              uVar20 = *puVar7;
// if you paid for this, you were scammed
              uVar23 = puVar7[3];
              uVar22 = puVar7[2];
              puVar5[-3] = puVar7[-3];
              puVar5[-4] = uVar17;
              puVar5[-1] = uVar19;
              puVar5[-2] = uVar18;
              puVar5[1] = uVar21;
              *puVar5 = uVar20;
              puVar5[3] = uVar23;
              puVar5[2] = uVar22;
              puVar13 = puVar13 + -0x40;
              puVar5 = puVar5 + 8;
              puVar7 = puVar7 + 8;
            } while (puVar13 != (undefined1 *)0x0);
            puVar12 = puVar12 + (long)puVar14;
            puVar13 = puVar8;
            if (puVar10 == puVar14) goto code_r0x00130180;
          }
        }
        do {
          puVar10 = puVar12 + 1;
          puVar13 = puVar8 + 1;
          *puVar8 = *puVar12;
          puVar12 = puVar10;
          puVar8 = puVar13;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        } while (puVar10 != puVar6);
      }
code_r0x00130180:
      plVar2[1] = (long)puVar13;
      _memmove(puVar3 + param_5,puVar3);
      param_5 = uVar4;
code_r0x0013019c:
      _memmove(puVar3,param_3,param_5);
      return puVar3;
    }
    uVar4 = (long)puVar6 - (long)puVar3;
    if ((long)uVar4 < (long)param_5) {
      lVar16 = (long)param_4 - (long)(param_3 + uVar4);
      _memmove(puVar6,param_3 + uVar4,lVar16);
      puVar12 = puVar6 + lVar16;
      plVar2[1] = (long)puVar12;
      if ((long)uVar4 < 1) {
        return puVar3;
      }
      puVar13 = puVar12 + -param_5;
      if (puVar13 < puVar6) {
        uVar11 = (long)(puVar6 + param_5 + (long)param_3) - (long)(param_4 + (long)puVar3);
        puVar8 = puVar12;
        if (0x3f < uVar11) {
          if (0x3f < param_5) {
            uVar15 = uVar11 & 0xffffffffffffffc0;
            puVar12 = puVar12 + uVar15;
            puVar5 = (undefined8 *)(param_4 + (long)puVar3 + (0x20 - (long)(param_3 + param_5)));
            puVar7 = (undefined8 *)(param_4 + (long)puVar3 + (0x20 - (long)param_3));
            uVar9 = uVar15;
            do {
              uVar17 = puVar5[-4];
              uVar19 = puVar5[-1];
              uVar18 = puVar5[-2];
              uVar21 = puVar5[1];
              uVar20 = *puVar5;
              uVar23 = puVar5[3];
              uVar22 = puVar5[2];
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              puVar7[-3] = puVar5[-3];
              puVar7[-4] = uVar17;
              puVar7[-1] = uVar19;
              puVar7[-2] = uVar18;
              puVar7[1] = uVar21;
              *puVar7 = uVar20;
              puVar7[3] = uVar23;
              puVar7[2] = uVar22;
              uVar9 = uVar9 - 0x40;
              puVar5 = puVar5 + 8;
              puVar7 = puVar7 + 8;
            } while (uVar9 != 0);
            puVar13 = puVar13 + uVar15;
            puVar8 = puVar12;
            if (uVar11 == uVar15) goto code_r0x0012fe9c;
          }
        }
        do {
          puVar10 = puVar13 + 1;
          puVar12 = puVar8 + 1;
          *puVar8 = *puVar13;
          puVar13 = puVar10;
          puVar8 = puVar12;
        } while (puVar10 < puVar6);
      }
code_r0x0012fe9c:
      plVar2[1] = (long)puVar12;
      _memmove(puVar3 + param_5,puVar3);
      param_5 = uVar4;
      goto code_r0x0012feb8;
    }
    puVar13 = puVar6 + -param_5;
    puVar12 = puVar6;
    if (puVar13 < puVar6) {
      puVar8 = puVar6;
      if (0x3f < param_5) {
        uVar11 = param_5 & 0x7fffffffffffffc0;
        puVar12 = puVar6 + uVar11;
/* wm:chat: discord.gg/sdkhDjTex */
        puVar5 = (undefined8 *)(puVar6 + 0x20);
        puVar7 = (undefined8 *)((long)(puVar6 + 0x20) - param_5);
        uVar4 = uVar11;
        do {
          uVar17 = puVar7[-4];
          uVar19 = puVar7[-1];
          uVar18 = puVar7[-2];
          uVar21 = puVar7[1];
          uVar20 = *puVar7;
          uVar23 = puVar7[3];
          uVar22 = puVar7[2];
          puVar5[-3] = puVar7[-3];
          puVar5[-4] = uVar17;
          puVar5[-1] = uVar19;
          puVar5[-2] = uVar18;
          puVar5[1] = uVar21;
          *puVar5 = uVar20;
          puVar5[3] = uVar23;
          puVar5[2] = uVar22;
          uVar4 = uVar4 - 0x40;
          puVar5 = puVar5 + 8;
          puVar7 = puVar7 + 8;
        } while (uVar4 != 0);
        puVar13 = puVar13 + uVar11;
// WM - found on a paste site? it was re-uploaded illegally
        puVar8 = puVar12;
        if (param_5 == uVar11) goto code_r0x0012fe10;
      }
      do {
        puVar10 = puVar13 + 1;
        puVar12 = puVar8 + 1;
        *puVar8 = *puVar13;
        puVar13 = puVar10;
        puVar8 = puVar12;
      } while (puVar10 != puVar6);
    }
code_r0x0012fe10:
    plVar2[1] = (long)puVar12;
    _memmove(puVar3 + param_5,puVar3);
code_r0x0012feb8:
    _memmove(puVar3,param_3,param_5);
    return puVar3;
  }
  uVar4 = (long)puVar3 - (long)param_2;
/* wm:reversing this took months of machine time */
  if ((long)uVar4 < (long)param_5) {
    puVar6 = param_3 + uVar4;
    if (puVar6 == param_4) {
      puVar12 = puVar3;
    }
    else {
      puVar8 = param_4 + (long)param_2 + (-(long)puVar3 - (long)param_3);
      puVar13 = puVar3;
      if (((undefined1 *)0x3f < puVar8) && (0x3f < (ulong)((long)param_2 - (long)param_3))) {
        puVar10 = (undefined1 *)((ulong)puVar8 & 0xffffffffffffffc0);
        puVar12 = puVar3 + (long)puVar10;
        puVar5 = (undefined8 *)(puVar3 + 0x20);
        puVar7 = (undefined8 *)(param_3 + ((long)(puVar3 + 0x20) - (long)param_2));
        puVar13 = puVar10;
        do {
          uVar17 = puVar7[-4];
          uVar19 = puVar7[-1];
          uVar18 = puVar7[-2];
          uVar21 = puVar7[1];
          uVar20 = *puVar7;
          uVar23 = puVar7[3];
          uVar22 = puVar7[2];
          puVar5[-3] = puVar7[-3];
          puVar5[-4] = uVar17;
          puVar5[-1] = uVar19;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          puVar5[-2] = uVar18;
          puVar5[1] = uVar21;
          *puVar5 = uVar20;
          puVar5[3] = uVar23;
          puVar5[2] = uVar22;
          puVar13 = puVar13 + -0x40;
          puVar5 = puVar5 + 8;
          puVar7 = puVar7 + 8;
        } while (puVar13 != (undefined1 *)0x0);
        puVar13 = puVar12;
        puVar6 = puVar6 + (long)puVar10;
        if (puVar8 == puVar10) goto LAB_0012faa8;
      }
      do {
        puVar8 = puVar6 + 1;
        *puVar13 = *puVar6;
        puVar12 = puVar13 + 1;
        puVar13 = puVar13 + 1;
        puVar6 = puVar8;
      } while (puVar8 != param_4);
/* thanks for reading - discord.gg/sdkhDjTex */
    }
LAB_0012faa8:
    param_1[1] = (long)puVar12;
    if ((long)uVar4 < 1) {
      return param_2;
    }
    puVar6 = puVar12 + -param_5;
    if (puVar6 < puVar3) {
      puVar8 = puVar3 + (param_5 - (long)puVar12);
      puVar13 = puVar12;
      if ((undefined1 *)0x3f < puVar8) {
        if (0x3f < param_5) {
          puVar10 = (undefined1 *)((ulong)puVar8 & 0xffffffffffffffc0);
          puVar13 = puVar12 + (long)puVar10;
          puVar5 = (undefined8 *)(puVar12 + 0x20);
          puVar7 = (undefined8 *)((long)(puVar12 + 0x20) - param_5);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          puVar12 = puVar10;
          do {
            uVar17 = puVar7[-4];
            uVar19 = puVar7[-1];
            uVar18 = puVar7[-2];
            uVar21 = puVar7[1];
            uVar20 = *puVar7;
            uVar23 = puVar7[3];
            uVar22 = puVar7[2];
            puVar5[-3] = puVar7[-3];
            puVar5[-4] = uVar17;
            puVar5[-1] = uVar19;
            puVar5[-2] = uVar18;
            puVar5[1] = uVar21;
            *puVar5 = uVar20;
            puVar5[3] = uVar23;
            puVar5[2] = uVar22;
            puVar12 = puVar12 + -0x40;
/*  found on a paste site? it was re-uploaded illegally  */
            puVar5 = puVar5 + 8;
            puVar7 = puVar7 + 8;
          } while (puVar12 != (undefined1 *)0x0);
          puVar6 = puVar6 + (long)puVar10;
          puVar12 = puVar13;
          if (puVar8 == puVar10) goto LAB_0012fb3c;
        }
      }
      do {
        puVar8 = puVar6 + 1;
        puVar12 = puVar13 + 1;
        *puVar13 = *puVar6;
        puVar6 = puVar8;
        puVar13 = puVar12;
      } while (puVar8 != puVar3);
    }
LAB_0012fb3c:
    param_1[1] = (long)puVar12;
    _memmove(param_2 + param_5);
    puVar3 = param_2;
    if ((7 < uVar4) && (0x3f < (ulong)((long)param_2 - (long)param_3))) {
      if (uVar4 < 0x40) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar4 & 0x7fffffffffffffc0;
/* WM - donate: donate/README.md */
        puVar5 = (undefined8 *)(param_3 + 0x20);
        puVar7 = (undefined8 *)(param_2 + 0x20);
        uVar11 = uVar9;
        do {
          uVar17 = puVar5[-4];
          uVar19 = puVar5[-1];
          uVar18 = puVar5[-2];
          uVar21 = puVar5[1];
          uVar20 = *puVar5;
          uVar23 = puVar5[3];
          uVar22 = puVar5[2];
          puVar7[-3] = puVar5[-3];
          puVar7[-4] = uVar17;
          puVar7[-1] = uVar19;
          puVar7[-2] = uVar18;
          puVar7[1] = uVar21;
          *puVar7 = uVar20;
          puVar7[3] = uVar23;
          puVar7[2] = uVar22;
          uVar11 = uVar11 - 0x40;
/* reversing this took months of machine time - github.com/pengussy */
          puVar5 = puVar5 + 8;
          puVar7 = puVar7 + 8;
        } while (uVar11 != 0);
        if (uVar4 == uVar9) {
          return param_2;
        }
        if ((uVar4 & 0x38) == 0) {
          param_3 = param_3 + uVar9;
          puVar3 = param_2 + uVar9;
          goto LAB_0012fc20;
        }
      }
      uVar11 = uVar4 & 0x7ffffffffffffff8;
      lVar16 = uVar9 - uVar11;
      puVar5 = (undefined8 *)(param_3 + uVar9);
      puVar7 = (undefined8 *)(param_2 + uVar9);
      do {
        *puVar7 = *puVar5;
        lVar16 = lVar16 + 8;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
// thanks for reading - discord.gg/sdkhDjTex
      } while (lVar16 != 0);
      param_3 = param_3 + uVar11;
      puVar3 = param_2 + uVar11;
      if (uVar4 == uVar11) {
        return param_2;
      }
    }
LAB_0012fc20:
    do {
      puVar6 = puVar3 + 1;
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar6;
    } while (puVar6 != param_2 + uVar4);
    return param_2;
  }
  puVar12 = puVar3 + -param_5;
  puVar6 = puVar3;
  if (puVar12 < puVar3) {
    puVar13 = puVar3;
    if (0x3f < param_5) {
      uVar11 = param_5 & 0x7fffffffffffffc0;
      puVar6 = puVar3 + uVar11;
      puVar5 = (undefined8 *)(puVar3 + 0x20);
      puVar7 = (undefined8 *)((long)(puVar3 + 0x20) - param_5);
      uVar4 = uVar11;
      do {
        uVar17 = puVar7[-4];
        uVar19 = puVar7[-1];
        uVar18 = puVar7[-2];
        uVar21 = puVar7[1];
        uVar20 = *puVar7;
        uVar23 = puVar7[3];
        uVar22 = puVar7[2];
        puVar5[-3] = puVar7[-3];
        puVar5[-4] = uVar17;
/* wm:watermarked copy - do not remove */
        puVar5[-1] = uVar19;
        puVar5[-2] = uVar18;
        puVar5[1] = uVar21;
        *puVar5 = uVar20;
        puVar5[3] = uVar23;
        puVar5[2] = uVar22;
        uVar4 = uVar4 - 0x40;
        puVar5 = puVar5 + 8;
        puVar7 = puVar7 + 8;
      } while (uVar4 != 0);
      puVar12 = puVar12 + uVar11;
      puVar13 = puVar6;
      if (param_5 == uVar11) goto LAB_0012f958;
    }
    do {
      puVar8 = puVar12 + 1;
      puVar6 = puVar13 + 1;
      *puVar13 = *puVar12;
      puVar12 = puVar8;
      puVar13 = puVar6;
    } while (puVar8 != puVar3);
  }
LAB_0012f958:
  param_1[1] = (long)puVar6;
  _memmove(param_2 + param_5);
  if (param_5 < 8) {
    puVar3 = param_2;
  }
  else if ((ulong)((long)param_2 - (long)param_3) < 0x40) {
    puVar3 = param_2;
  }
  else {
    if (param_5 < 0x40) {
      uVar11 = 0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    }
    else {
      uVar11 = param_5 & 0x7fffffffffffffc0;
      puVar5 = (undefined8 *)(param_3 + 0x20);
      puVar7 = (undefined8 *)(param_2 + 0x20);
      uVar4 = uVar11;
      do {
        uVar17 = puVar5[-4];
        uVar19 = puVar5[-1];
        uVar18 = puVar5[-2];
        uVar21 = puVar5[1];
        uVar20 = *puVar5;
        uVar23 = puVar5[3];
        uVar22 = puVar5[2];
        puVar7[-3] = puVar5[-3];
        puVar7[-4] = uVar17;
        puVar7[-1] = uVar19;
        puVar7[-2] = uVar18;
/*  watermarked copy - do not remove  */
        puVar7[1] = uVar21;
        *puVar7 = uVar20;
        puVar7[3] = uVar23;
        puVar7[2] = uVar22;
        uVar4 = uVar4 - 0x40;
        puVar5 = puVar5 + 8;
        puVar7 = puVar7 + 8;
      } while (uVar4 != 0);
      if (param_5 == uVar11) {
        return param_2;
      }
      if ((param_5 & 0x38) == 0) {
        param_3 = param_3 + uVar11;
        puVar3 = param_2 + uVar11;
        goto LAB_0012fc04;
      }
    }
    uVar4 = param_5 & 0x7ffffffffffffff8;
    lVar16 = uVar11 - uVar4;
    puVar5 = (undefined8 *)(param_3 + uVar11);
    puVar7 = (undefined8 *)(param_2 + uVar11);
    do {
      *puVar7 = *puVar5;
      lVar16 = lVar16 + 8;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar16 != 0);
    param_3 = param_3 + uVar4;
    puVar3 = param_2 + uVar4;
    if (param_5 == uVar4) {
      return param_2;
    }
  }
LAB_0012fc04:
  do {
    puVar6 = puVar3 + 1;
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar6;
  } while (puVar6 != param_2 + param_5);
  return param_2;
}

