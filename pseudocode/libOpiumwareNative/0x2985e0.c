/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2985e0:47144cde6d
   =========================================================================== */

long FUN_002985e0(ulong *param_1,ulong param_2,byte *param_3,ulong param_4,ushort *param_5,
                 int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
/* wm:watermarked copy - do not remove */
  ulong uVar15;
  ulong *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  
  if (param_4 < 3) {
    return 0;
  }
  if (param_2 < 9) {
    return 0;
  }
  puVar16 = (ulong *)((long)param_1 + (param_2 - 8));
  uVar8 = *param_5;
  lVar19 = (long)(1 << (ulong)(uVar8 - 1 & 0x1f));
  if (uVar8 == 0) {
    lVar19 = 1;
  }
  iVar6 = *(int *)(param_5 + lVar19 * 2 + (ulong)param_3[param_4 - 1] * 4 + 2 + 2);
  uVar24 = iVar6 + 0x8000;
  uVar22 = (ulong)param_5[(ulong)((uVar24 & 0xffff0000) - iVar6 >> ((ulong)(uVar24 >> 0x10) & 0x3f))
                          + (long)*(int *)(param_5 +
                                          lVar19 * 2 + (ulong)param_3[param_4 - 1] * 4 + 2) + 2];
  if ((param_4 & 1) == 0) {
    uVar21 = 0;
    uVar24 = 0;
    pbVar17 = param_3 + (param_4 - 2);
    iVar6 = *(int *)(param_5 + lVar19 * 2 + (ulong)*pbVar17 * 4 + 2 + 2);
    uVar1 = iVar6 + 0x8000;
    uVar9 = param_5[(ulong)((uVar1 & 0xffff0000) - iVar6 >> ((ulong)(uVar1 >> 0x10) & 0x3f)) +
                    (long)*(int *)(param_5 + lVar19 * 2 + (ulong)*pbVar17 * 4 + 2) + 2];
/* stripping the watermark breaks the license */
    puVar13 = param_1;
    uVar23 = uVar22;
  }
  else {
    pbVar17 = param_3 + (param_4 - 3);
    iVar7 = *(int *)(param_5 + lVar19 * 2 + (ulong)param_3[param_4 - 2] * 4 + 2 + 2);
    uVar1 = iVar7 + 0x8000;
    uVar23 = (ulong)param_5[(ulong)((uVar1 & 0xffff0000) - iVar7 >> ((ulong)(uVar1 >> 0x10) & 0x3f))
                            + (long)*(int *)(param_5 +
                                            lVar19 * 2 + (ulong)param_3[param_4 - 2] * 4 + 2) + 2];
    uVar21 = *(uint *)(param_5 + lVar19 * 2 + (ulong)*pbVar17 * 4 + 2 + 2) + uVar22;
    uVar1 = *(uint *)(&UNK_01adc4e8 + (uVar21 >> 0x10) * 4);
    uVar9 = param_5[(ulong)(param_5[(ulong)((uVar24 & 0xffff0000) - iVar6 >>
                                           ((ulong)(uVar24 >> 0x10) & 0x3f)) +
                                    (long)*(int *)(param_5 +
                                                  lVar19 * 2 + (ulong)param_3[param_4 - 1] * 4 + 2)
                                    + 2] >> (uVar21 >> 0x10 & 0x3f)) +
                    (long)*(int *)(param_5 + lVar19 * 2 + (ulong)*pbVar17 * 4 + 2) + 2];
    *param_1 = uVar1 & uVar22;
    puVar20 = (ulong *)((long)param_1 + (uVar21 >> 0x13));
    puVar13 = puVar20;
    if ((param_6 == 0) && (puVar13 = puVar16, puVar20 <= puVar16)) {
      puVar13 = puVar20;
    }
    uVar24 = (uint)(uVar21 >> 0x10) & 7;
    uVar21 = (uVar1 & uVar22) >> ((uVar21 >> 0x13 & 7) << 3);
  }
  uVar22 = (ulong)uVar9;
  if (((uint)param_4 >> 1 & 1) == 0) {
    pbVar18 = pbVar17 + -2;
/* WM - chat: discord.gg/sdkhDjTex */
    uVar12 = *(uint *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-1] * 4 + 2 + 2) + uVar23;
    uVar14 = uVar12 >> 0x10;
    uVar15 = *(uint *)(&UNK_01adc4e8 + uVar14 * 4) & uVar23;
    uVar23 = (ulong)param_5[(uVar23 >> (uVar14 & 0x3f)) +
                            (long)*(int *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-1] * 4 + 2) + 2];
    uVar14 = *(uint *)(param_5 + lVar19 * 2 + (ulong)*pbVar18 * 4 + 2 + 2) + uVar22;
    uVar11 = uVar14 >> 0x10;
    uVar1 = uVar24 + (int)(uVar12 >> 0x10);
    uVar2 = uVar1 + (int)(uVar14 >> 0x10);
    uVar21 = uVar15 << uVar24 |
             (*(uint *)(&UNK_01adc4e8 + uVar11 * 4) & uVar22) << ((ulong)uVar1 & 0x3f) | uVar21;
    uVar22 = (ulong)param_5[(ulong)(uVar9 >> (uVar11 & 0x3f)) +
                            (long)*(int *)(param_5 + lVar19 * 2 + (ulong)*pbVar18 * 4 + 2) + 2];
    uVar12 = (ulong)(uVar2 >> 3);
    *puVar13 = uVar21;
    puVar20 = (ulong *)((long)puVar13 + uVar12);
    pbVar17 = pbVar18;
    if (param_6 == 0) {
      puVar13 = puVar16;
      if (puVar20 <= puVar16) {
        puVar13 = puVar20;
      }
      uVar24 = uVar2 & 7;
      uVar21 = uVar21 >> ((uVar12 & 7) << 3);
    }
    else {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      uVar24 = uVar2 & 7;
      uVar21 = uVar21 >> ((uVar12 & 7) << 3);
      puVar13 = puVar20;
    }
  }
  puVar20 = puVar13;
  if (param_3 < pbVar17) {
    do {
      pbVar18 = pbVar17 + -4;
      uVar12 = uVar23 + *(uint *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-1] * 4 + 2 + 2);
      uVar11 = uVar12 >> 0x10;
      uVar9 = param_5[(uVar23 >> (uVar11 & 0x3f)) +
                      (long)*(int *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-1] * 4 + 2) + 2];
      uVar14 = uVar22 + *(uint *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-2] * 4 + 2 + 2);
      uVar15 = uVar14 >> 0x10;
      uVar1 = uVar24 + (int)(uVar12 >> 0x10);
      uVar2 = uVar1 + (int)(uVar14 >> 0x10);
      uVar10 = param_5[(uVar22 >> (uVar15 & 0x3f)) +
                       (long)*(int *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-2] * 4 + 2) + 2];
      uVar12 = (ulong)*(uint *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-3] * 4 + 2 + 2) +
               (ulong)uVar9;
      uVar25 = uVar12 >> 0x10;
      uVar14 = (ulong)*(uint *)(param_5 + lVar19 * 2 + (ulong)*pbVar18 * 4 + 2 + 2) + (ulong)uVar10;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      uVar26 = uVar14 >> 0x10;
      uVar3 = uVar2 + (int)(uVar12 >> 0x10);
      uVar4 = uVar3 + (int)(uVar14 >> 0x10);
      uVar14 = (ulong)(uVar4 >> 3);
      puVar5 = (ulong *)((long)puVar20 + uVar14);
      uVar12 = uVar23 & *(uint *)(&UNK_01adc4e8 + uVar11 * 4);
      uVar23 = (ulong)param_5[(ulong)(uVar9 >> (uVar25 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar19 * 2 + (ulong)pbVar17[-3] * 4 + 2) + 2]
      ;
      uVar21 = uVar12 << uVar24 | uVar21 |
               (uVar22 & *(uint *)(&UNK_01adc4e8 + uVar15 * 4)) << ((ulong)uVar1 & 0x3f) |
               ((ulong)*(uint *)(&UNK_01adc4e8 + uVar25 * 4) & (ulong)uVar9) <<
               ((ulong)uVar2 & 0x3f) |
               ((ulong)*(uint *)(&UNK_01adc4e8 + uVar26 * 4) & (ulong)uVar10) <<
               ((ulong)uVar3 & 0x3f);
      uVar22 = (ulong)param_5[(ulong)(uVar10 >> (uVar26 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar19 * 2 + (ulong)*pbVar18 * 4 + 2) + 2];
      puVar13 = puVar16;
      if (puVar5 <= puVar16 || param_6 != 0) {
        puVar13 = puVar5;
      }
      *puVar20 = uVar21;
      uVar24 = uVar4 & 7;
      uVar21 = uVar21 >> ((uVar14 & 7) << 3);
      pbVar17 = pbVar18;
      puVar20 = puVar13;
    } while (param_3 < pbVar18);
  }
  uVar1 = *(uint *)(&UNK_01adc4e8 + (ulong)uVar8 * 4);
  uVar21 = (uVar23 & uVar1) << uVar24 | uVar21;
  uVar24 = uVar24 + uVar8;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  uVar23 = (ulong)(uVar24 >> 3);
  *puVar13 = uVar21;
  puVar13 = (ulong *)((long)puVar13 + uVar23);
  puVar20 = puVar16;
  if (puVar13 <= puVar16) {
    puVar20 = puVar13;
  }
  uVar24 = uVar24 & 7;
  uVar22 = (uVar22 & uVar1) << uVar24 | uVar21 >> ((uVar23 & 7) << 3);
  uVar24 = uVar24 + uVar8;
  uVar21 = (ulong)(uVar24 >> 3);
  *puVar20 = uVar22;
  puVar20 = (ulong *)((long)puVar20 + uVar21);
  puVar13 = puVar16;
  if (puVar20 <= puVar16) {
    puVar13 = puVar20;
  }
  uVar24 = uVar24 & 7;
  uVar1 = uVar24 + 1;
  *puVar13 = uVar22 >> ((uVar21 & 7) << 3) | 1L << uVar24;
  puVar13 = (ulong *)((long)puVar13 + (ulong)(uVar1 >> 3));
  puVar20 = puVar16;
  if (puVar13 <= puVar16) {
    puVar20 = puVar13;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  }
  if (puVar16 <= puVar20) {
    return 0;
  }
  lVar19 = (long)puVar20 - (long)param_1;
  if ((uVar1 & 7) != 0) {
    lVar19 = lVar19 + 1;
  }
  return lVar19;
}

