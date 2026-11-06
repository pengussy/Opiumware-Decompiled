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
 *  file-id: 0x33f148:69c23775bb
 *  --------------------------------------------------------------------------*/

ulong FUN_0033f148(float *param_1,undefined8 param_2,int param_3,ulong *param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float afStack_e0 [6];
  ulong uStack_c8;
/* watermarked copy - do not remove */
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  lVar5 = lRam00000000020973e0;
  lVar12 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if ((*(byte *)(lVar12 + 0xd1) & 1) == 0) {
    fVar17 = param_1[2] - *param_1;
    if (fVar17 <= 0.0) {
      return 0;
    }
    fVar23 = param_1[3] - param_1[1];
    if (fVar23 <= 0.0) {
      return 0;
    }
    fVar16 = 1.0;
    if ((param_3 == 1) && (fVar23 < fVar17)) {
      fVar27 = fVar17 + fVar17;
      if (fVar27 <= 1.0) {
        fVar27 = 1.0;
      }
/* wm:proprietary - see LICENSE - do not sell */
      fVar16 = 1.0;
      if (fVar23 / fVar27 <= 1.0) {
        fVar16 = fVar23 / fVar27;
      }
      if (fVar16 <= 0.0) {
        return 0;
      }
    }
    if (fVar23 <= fVar17) {
      fVar17 = fVar23;
    }
    fVar23 = *(float *)(lRam00000000020973e0 + 0xd04);
    if (fVar17 * 0.5 <= *(float *)(lRam00000000020973e0 + 0xd04)) {
      fVar23 = fVar17 * 0.5;
    }
    fVar18 = (float)(int)fVar23;
    afStack_e0[0] = (float)*(undefined8 *)param_1;
    afStack_e0[1] = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    fVar23 = afStack_e0[0] + fVar18;
    fVar29 = afStack_e0[1] + fVar18;
    afStack_e0[1] = fVar29;
    afStack_e0[0] = fVar23;
    afStack_e0[2] = (float)*(undefined8 *)(param_1 + 2);
    afStack_e0[3] = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
    fVar17 = afStack_e0[2] - fVar18;
    fVar18 = afStack_e0[3] - fVar18;
    afStack_e0[3] = fVar18;
    afStack_e0[2] = fVar17;
    fVar19 = fVar17 - fVar23;
    fVar30 = fVar18 - fVar29;
    fVar27 = fVar19;
    if (param_3 != 0) {
      fVar27 = fVar30;
    }
    if (1.0 <= fVar27) {
      uVar4 = param_6 - param_5;
/*  more drops soon - github.com/pengussy  */
      if (uVar4 == 0 || (long)param_6 < (long)param_5) {
        param_6 = param_5;
      }
      if ((long)param_6 < 2) {
        param_6 = 1;
      }
      uStack_b8 = CONCAT44(fVar30,fVar19);
      uVar13 = (ulong)param_3;
      fVar14 = *(float *)((long)&uStack_b8 + (long)param_3 * 4);
      if (*(float *)(lRam00000000020973e0 + 0xd08) <= fVar14) {
        fVar14 = *(float *)(lRam00000000020973e0 + 0xd08);
      }
      fVar24 = (float)(long)param_5;
      fVar20 = (fVar24 / (float)param_6) * fVar27;
      fVar15 = fVar27;
      if (fVar20 <= fVar27) {
        fVar15 = fVar20;
      }
      if (fVar14 <= fVar20) {
        fVar14 = fVar15;
      }
      uStack_e8 = *(undefined8 *)(param_1 + 2);
      uStack_f0 = *(undefined8 *)param_1;
      fVar15 = *(float *)(lRam00000000020973e0 + 0xc98);
      uVar9 = uVar13 ^ 1;
      uStack_b8 = *(undefined8 *)(*(long *)(lVar12 + 0x3c0) + 0x28);
      uVar28 = *(undefined8 *)(*(long *)(lVar12 + 0x3c0) + 0x30);
      uStack_b0 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) + (float)((ulong)uVar28 >> 0x20),
                           (float)uStack_b8 + (float)uVar28);
      uStack_c8 = *(ulong *)(*(long *)(lVar12 + 0x20) + 8);
      uVar28 = *(undefined8 *)(*(long *)(lVar12 + 0x20) + 0x10);
// reversing this took months of machine time
      uStack_c0 = CONCAT44((float)(uStack_c8 >> 0x20) + (float)((ulong)uVar28 >> 0x20),
                           (float)uStack_c8 + (float)uVar28);
      fVar20 = *(float *)((long)&uStack_b8 + uVar9 * 4);
      if (((fVar20 == afStack_e0[uVar9 + 6]) && (fVar20 < afStack_e0[uVar9 - 4])) &&
         (afStack_e0[uVar9 - 4] - fVar15 <= fVar20)) {
        afStack_e0[uVar9 - 4] = fVar20;
      }
      fVar20 = (float)(int)fVar14;
      fVar14 = *(float *)((long)&uStack_b0 + uVar9 * 4);
      if (fVar14 == *(float *)((long)&uStack_c0 + uVar9 * 4)) {
        fVar25 = *(float *)(((ulong)&uStack_f0 | 8) + uVar9 * 4);
        if ((fVar25 < fVar14) && (fVar14 <= fVar15 + fVar25)) {
          *(float *)(((ulong)&uStack_f0 | 8) + uVar9 * 4) = fVar14;
        }
      }
      uStack_c8 = uStack_c8 & 0xffffffffffffff00;
      cStack_f1 = '\0';
      FUN_00315614(param_1,param_2,0,2);
      FUN_0033e04c(&uStack_f0,param_2,&cStack_f1,&uStack_c8,0x40000);
      if ((long)uVar4 < 2) {
        uVar4 = 1;
      }
      fVar25 = (float)uVar4;
      fVar15 = (float)(long)*param_4 / fVar25;
      fVar14 = 1.0;
      if (fVar15 <= 1.0) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        fVar14 = fVar15;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar15) {
        fVar21 = fVar14;
      }
      fVar14 = ((fVar27 - fVar20) * fVar21) / fVar27;
      cVar6 = (char)uStack_c8;
      uVar9 = uStack_c8 & 0xff;
      if (((1.0 <= fVar16) && ((char)uStack_c8 != '\0')) && (fVar15 = fVar20 / fVar27, fVar15 < 1.0)
         ) {
        fVar26 = (*(float *)(lVar5 + uVar13 * 4 + 0x100) - afStack_e0[uVar13]) / fVar27;
        fVar21 = 1.0;
        if (fVar26 <= 1.0) {
          fVar21 = fVar26;
        }
        fVar22 = 0.0;
        if (0.0 <= fVar26) {
          fVar22 = fVar21;
        }
        uVar11 = (uint)(fVar15 + fVar14 < fVar22);
        if (fVar22 < fVar14) {
          uVar11 = 0xffffffff;
        }
        if (((&UNK_00001528)[lVar5] & 1) == 0) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          uVar10 = (uint)*(ushort *)(&UNK_0000263e + lVar5);
        }
        else {
          uVar10 = (uint)*(byte *)(lVar5 + 0x81);
          if ((*(byte *)(lVar5 + 0x81) != 0) && (uVar10 = 0, *(char *)(lVar5 + 0x11d) == '\0')) {
            uVar10 = uVar11;
          }
          *(short *)(&UNK_0000263e + lVar5) = (short)uVar10;
          fVar21 = 0.0;
          if (uVar11 == 0) {
            fVar21 = 0.0;
            if ((*(byte *)(lVar5 + 0x11d) & 1) == 0) {
              fVar21 = (fVar22 - fVar14) + fVar15 * -0.5;
            }
          }
          *(float *)(&UNK_00002640 + lVar5) = fVar21;
        }
        if ((uVar10 & 0xffff) == 0) {
          fVar15 = ((fVar22 - *(float *)(&UNK_00002640 + lVar5)) + fVar15 * -0.5) / (1.0 - fVar15);
          fVar14 = 1.0;
          if (fVar15 <= 1.0) {
            fVar14 = fVar15;
          }
          fVar24 = 0.0;
          if (0.0 <= fVar15) {
            fVar24 = fVar14;
          }
          uVar13 = (ulong)(fVar24 * fVar25);
          *param_4 = uVar13;
        }
        else {
          uVar13 = func_0x003195fc(0,1,0);
          if ((uVar13 & 1) == 0) {
            uVar13 = *param_4;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          }
          else {
            uVar13 = *param_4;
            if (uVar11 == (int)*(short *)(&UNK_0000263e + lVar5)) {
              if (*(short *)(&UNK_0000263e + lVar5) < 1) {
                fVar24 = -fVar24;
              }
              uVar1 = uVar13 + (long)fVar24;
              uVar3 = uVar1;
              if ((long)uVar4 <= (long)uVar1) {
                uVar3 = uVar4;
              }
              uVar13 = 0;
              if (-1 < (long)uVar1) {
                uVar13 = uVar3;
              }
              *param_4 = uVar13;
            }
          }
        }
        fVar25 = (float)(long)uVar13 / fVar25;
        fVar14 = 1.0;
        if (fVar25 <= 1.0) {
          fVar14 = fVar25;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar25) {
          fVar15 = fVar14;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        }
        fVar14 = ((fVar27 - fVar20) * fVar15) / fVar27;
      }
      uVar28 = func_0x002febb0(0x3f800000,0xe);
      uVar8 = 0xf;
      if (cStack_f1 != '\0') {
        uVar8 = 0x10;
      }
      uVar2 = 0x11;
      if (cVar6 == '\0') {
        uVar2 = uVar8;
      }
      uVar7 = func_0x002febb0(fVar16,uVar2);
      func_0x00323668(*(undefined4 *)(lVar12 + 0x60),*(undefined8 *)(lVar12 + 0x2c8),param_1,
                      param_1 + 2,uVar28,param_7);
      fVar16 = fVar29 + fVar14 * fVar30;
      fVar19 = fVar23 + fVar14 * fVar19;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      fVar27 = fVar16 + fVar20;
      if (param_3 == 0) {
        fVar27 = fVar18;
        fVar17 = fVar19 + fVar20;
        fVar16 = fVar29;
        fVar23 = fVar19;
      }
      uStack_b8 = CONCAT44(fVar16,fVar23);
      uStack_b0 = CONCAT44(fVar27,fVar17);
      func_0x00323668(*(undefined4 *)(lVar5 + 0xd00),*(undefined8 *)(lVar12 + 0x2c8),&uStack_b8,
                      &uStack_b0,uVar7,0);
      return uVar9;
    }
  }
  return 0;
}

