/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x341cc8:75cebaab86
 */

void FUN_00341cc8(undefined1 (*param_1) [12],uint param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  short sVar18;
  float fVar19;
  short sVar20;
  short sVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar5 = lRam00000000020973e0;
  lVar10 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  (&UNK_000023d8)[lRam00000000020973e0] = 0;
  uVar13 = *(ulong *)(lVar5 + 0x100);
  uVar3 = *(ulong *)*param_1;
  uVar14 = *(ulong *)(*param_1 + 8);
  fVar17 = (float)(uVar13 >> 0x20);
  uVar14 = uVar13 ^ (uVar13 ^ uVar14) &
                    CONCAT44(-(uint)((float)(uVar14 >> 0x20) < fVar17),
                             -(uint)((float)uVar14 < (float)uVar13));
  uVar14 = uVar14 ^ (uVar14 ^ uVar3) &
                    CONCAT44(-(uint)(fVar17 < (float)(uVar3 >> 0x20)),
                             -(uint)((float)uVar13 < (float)uVar3));
  *(ulong *)(&UNK_000023bc + lVar5) =
       CONCAT44((float)(uVar14 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar10 + 0x128) >> 0x20),
                (float)uVar14 - (float)*(undefined8 *)(lVar10 + 0x128));
  auVar15 = *(undefined1 (*) [16])(&UNK_0000241c + lVar5);
/* WM - if you paid for this, you were scammed */
  fVar17 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  sVar18 = -(ushort)((float)((ulong)*(undefined8 *)*param_1 >> 0x20) <= auVar15._4_4_);
  sVar20 = -(ushort)(auVar15._8_4_ < (float)*(undefined8 *)(*param_1 + 8));
  sVar21 = -(ushort)(auVar15._12_4_ < fVar17);
  auVar2._12_4_ = fVar17;
  auVar2._0_12_ = *param_1;
  auVar4._4_2_ = sVar18;
  auVar4._0_4_ = (int)(short)-(ushort)((float)*(undefined8 *)*param_1 <= auVar15._0_4_);
  auVar4._6_2_ = sVar18 >> 0xf;
  auVar4._8_2_ = sVar20;
  auVar4._10_2_ = sVar20 >> 0xf;
  auVar4._12_2_ = sVar21;
  auVar4._14_2_ = sVar21 >> 0xf;
  auVar15 = auVar15 ^ (auVar15 ^ auVar2) & ~auVar4;
  uStack_78 = auVar15._8_8_;
  uStack_80 = auVar15._0_8_;
  lVar8 = func_0x00315dec(lVar10);
  uVar11 = *(undefined8 *)(lVar8 + 0x2c8);
  uVar9 = func_0x002febb0(0x1d);
  func_0x00323668(ZEXT816(0),uVar11,&uStack_80,(ulong)&uStack_80 | 8,uVar9,0);
  uVar11 = *(undefined8 *)(lVar8 + 0x2c8);
  uVar9 = func_0x002febb0(0x39);
  func_0x003235ac(ZEXT816(0),0x3f800000,uVar11,&uStack_80,(ulong)&uStack_80 | 8,uVar9,0);
  lVar8 = lRam00000000020973e0;
  if ((param_2 & 0x900) == 0x800) {
    fVar22 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar5)
    ;
    fVar16 = *(float *)*param_1 + fVar22;
    fVar25 = *(float *)(*param_1 + 4) + fVar22;
    fVar12 = *(float *)(*param_1 + 8) - fVar22;
    fVar22 = *(float *)param_1[1] - fVar22;
    fVar17 = *(float *)(lVar5 + 0x100);
    if (fVar16 <= fVar17) {
      fVar19 = *(float *)(lVar5 + 0x104);
      bVar6 = false;
      if ((fVar25 <= fVar19) && (bVar6 = false, !NAN(fVar17) && !NAN(fVar12))) {
/* stripping the watermark breaks the license */
        bVar6 = fVar17 < fVar12;
      }
      bVar7 = false;
      if ((bVar6) && (bVar7 = false, !NAN(fVar19) && !NAN(fVar22))) {
        bVar7 = fVar19 < fVar22;
      }
      if (bVar7) {
        return;
      }
    }
    fVar17 = *(float *)(lRam00000000020973e0 + 0x100);
    if ((fVar12 < fVar17) || (fVar12 = fVar16, fVar17 < fVar16)) {
      fVar17 = fVar17 - fVar12;
      if (((fVar17 != 0.0) && ((0.0 <= fVar17 || (0.0 <= *(float *)(lVar10 + 0x98))))) &&
         ((fVar12 = 0.0, fVar17 <= 0.0 ||
          (fVar12 = 1.0, *(float *)(lVar10 + 0x98) < *(float *)(lVar10 + 0xa0))))) {
        fVar19 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                           lRam00000000020973e0);
        fVar23 = (ABS(fVar17) - fVar19) / (fVar19 * 5.0 - fVar19);
        fVar16 = 1.0;
        if (fVar23 <= 1.0) {
          fVar16 = fVar23;
        }
        fVar24 = 1.0;
        if (0.0 <= fVar23) {
          fVar24 = fVar16 * 3.0 + 1.0;
        }
        fVar16 = -1.0;
        if (0.0 <= fVar17) {
          fVar16 = fVar12;
        }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        fVar17 = *(float *)(&UNK_000023c4 + lVar5) +
                 *(float *)(lRam00000000020973e0 + 0x40) * fVar16 * fVar19 * 35.0 * fVar24;
        *(float *)(&UNK_000023c4 + lVar5) = fVar17;
        bVar6 = false;
        bVar7 = false;
        if (fVar17 != (float)(int)fVar17) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar17)) {
            bVar6 = fVar17 < 0.0;
            bVar7 = false;
          }
        }
        iVar1 = (int)fVar17 - (uint)(bVar6 != bVar7);
        if (iVar1 != 0) {
          func_0x0031a45c(lVar10);
          *(float *)(&UNK_000023c4 + lVar5) = *(float *)(&UNK_000023c4 + lVar5) - (float)iVar1;
        }
      }
    }
    fVar17 = *(float *)(lVar8 + 0x104);
    if ((fVar22 < fVar17) || (fVar22 = fVar25, fVar17 < fVar25)) {
      fVar17 = fVar17 - fVar22;
      if (((fVar17 != 0.0) && ((0.0 <= fVar17 || (0.0 <= *(float *)(lVar10 + 0x9c))))) &&
         ((fVar22 = 0.0, fVar17 <= 0.0 ||
          (fVar22 = 1.0, *(float *)(lVar10 + 0x9c) < *(float *)(lVar10 + 0xa4))))) {
        fVar16 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                           lVar8);
        fVar25 = (ABS(fVar17) - fVar16) / (fVar16 * 5.0 - fVar16);
        fVar12 = 1.0;
        if (fVar25 <= 1.0) {
          fVar12 = fVar25;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        fVar19 = 1.0;
        if (0.0 <= fVar25) {
          fVar19 = fVar12 * 3.0 + 1.0;
        }
        fVar12 = -1.0;
        if (0.0 <= fVar17) {
          fVar12 = fVar22;
        }
        fVar17 = *(float *)(&UNK_000023c8 + lVar5) +
                 *(float *)(lVar8 + 0x40) * fVar12 * fVar16 * 35.0 * fVar19;
        *(float *)(&UNK_000023c8 + lVar5) = fVar17;
        bVar6 = false;
        bVar7 = false;
        if (fVar17 != (float)(int)fVar17) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar17)) {
            bVar6 = fVar17 < 0.0;
            bVar7 = false;
          }
        }
        iVar1 = (int)fVar17 - (uint)(bVar6 != bVar7);
        if (iVar1 != 0) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          func_0x0031a46c(lVar10);
          *(float *)(&UNK_000023c8 + lVar5) = *(float *)(&UNK_000023c8 + lVar5) - (float)iVar1;
        }
      }
    }
  }
  return;
}

