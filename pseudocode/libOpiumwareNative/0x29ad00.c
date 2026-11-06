/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x29ad00:fcf1a65bf6
 */

long FUN_0029ad00(ulong *param_1,ulong param_2,long param_3,ulong param_4,ulong *param_5)

{
  bool bVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  if (param_2 < 8) {
/*  chat: discord.gg/sdkhDjTex  */
    return 0;
  }
  if (param_2 == 8) {
    return 0;
  }
  uVar12 = (uint)*param_5 & 0xff;
  puVar5 = (ulong *)((long)param_1 + (param_2 - 8));
  uVar3 = (uint)param_4;
  puVar8 = param_1;
  if (((*param_5 & 0xff) * param_4 >> 3) + 8 <= param_2 && uVar12 < 0xc) {
    if (uVar12 < 9) {
      if (uVar12 == 7) {
        uVar12 = uVar3 & 7;
        if (-1 < (int)-uVar3) {
          uVar12 = -(-uVar3 & 7);
        }
        if ((int)uVar12 < 1) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar7 = 0;
          pbVar10 = (byte *)(param_3 + (int)uVar3);
          uVar11 = uVar12 + 1;
/* donate: donate/README.md */
          do {
            pbVar10 = pbVar10 + -1;
            uVar14 = param_5[(ulong)*pbVar10 + 1];
            uVar9 = uVar9 >> (uVar14 & 0x3f) | uVar14 & 0xffffffffffffff00;
            uVar7 = uVar14 + uVar7;
            uVar11 = uVar11 - 1;
          } while (1 < uVar11);
          param_4 = (ulong)(uVar3 - uVar12);
          uVar14 = uVar7 & 7;
          *param_1 = uVar9 >> (-(uVar7 & 0xff) & 0x3f);
          puVar8 = (ulong *)((long)param_1 + ((uVar7 & 0xff) >> 3));
        }
        if ((param_4 & 0xf) != 0) {
          lVar6 = param_3 + (int)param_4;
          uVar15 = param_5[(ulong)*(byte *)(lVar6 + -1) + 1];
          uVar16 = param_5[(ulong)*(byte *)(lVar6 + -2) + 1];
          uVar18 = param_5[(ulong)*(byte *)(lVar6 + -3) + 1];
          uVar17 = param_5[(ulong)*(byte *)(lVar6 + -4) + 1];
          uVar20 = param_5[(ulong)*(byte *)(lVar6 + -5) + 1];
          uVar19 = param_5[(ulong)*(byte *)(lVar6 + -6) + 1];
          uVar13 = param_5[(ulong)*(byte *)(lVar6 + -7) + 1];
          param_4 = (long)(int)param_4 - 8;
          uVar7 = param_5[(ulong)*(byte *)(param_3 + param_4) + 1];
          uVar9 = (((((((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                       (uVar18 & 0x3f) | uVar18) >> (uVar17 & 0x3f) | uVar17) >> (uVar20 & 0x3f) |
                    uVar20) >> (uVar19 & 0x3f) | uVar19) >> (uVar13 & 0x3f) | uVar13) >>
                  (uVar7 & 0x3f) | uVar7 & 0xffffffffffffff00;
          uVar14 = uVar7 + uVar13 + uVar19 + uVar20 + uVar17 + uVar18 + uVar16 + uVar15 + uVar14;
          uVar7 = uVar14 & 0xff;
          uVar14 = uVar14 & 7;
          *puVar8 = uVar9 >> (-uVar7 & 0x3f);
          puVar8 = (ulong *)((long)puVar8 + (uVar7 >> 3));
        }
        if (0 < (int)param_4) {
          pbVar10 = (byte *)((param_4 & 0xffffffff) + param_3 + -8);
          uVar7 = param_4 & 0xffffffff;
          do {
            uVar13 = param_5[(ulong)pbVar10[7] + 1];
            uVar20 = param_5[(ulong)pbVar10[6] + 1];
            uVar15 = param_5[(ulong)pbVar10[5] + 1];
            uVar22 = param_5[(ulong)pbVar10[4] + 1];
            uVar16 = param_5[(ulong)pbVar10[3] + 1];
            uVar19 = param_5[(ulong)pbVar10[2] + 1];
            uVar21 = param_5[(ulong)pbVar10[1] + 1];
            uVar18 = param_5[(ulong)*pbVar10 + 1];
            uVar17 = (((((((uVar9 >> (uVar13 & 0x3f) | uVar13) >> (uVar20 & 0x3f) | uVar20) >>
                          (uVar15 & 0x3f) | uVar15) >> (uVar22 & 0x3f) | uVar22) >> (uVar16 & 0x3f)
                       | uVar16) >> (uVar19 & 0x3f) | uVar19) >> (uVar21 & 0x3f) | uVar21) >>
                     (uVar18 & 0x3f) | uVar18 & 0xffffffffffffff00;
            uVar13 = uVar18 + uVar21 + uVar19 + uVar16 + uVar22 + uVar15 + uVar20 + uVar13 + uVar14;
            uVar14 = uVar13 & 0xff;
            *puVar8 = uVar17 >> (-uVar14 & 0x3f);
            uVar20 = param_5[(ulong)pbVar10[-2] + 1];
            uVar19 = param_5[(ulong)pbVar10[-3] + 1];
            uVar9 = param_5[(ulong)pbVar10[-4] + 1];
            uVar21 = param_5[(ulong)pbVar10[-5] + 1];
            uVar15 = param_5[(ulong)pbVar10[-6] + 1];
            uVar16 = param_5[(ulong)pbVar10[-7] + 1];
            puVar8 = (ulong *)((long)puVar8 + (uVar14 >> 3));
            uVar18 = param_5[(ulong)pbVar10[-8] + 1];
            uVar14 = uVar18 + uVar16 + uVar15 + uVar21 +
                              uVar9 + uVar19 + uVar20 + param_5[(ulong)pbVar10[-1] + 1];
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
            uVar9 = ((((((param_5[(ulong)pbVar10[-1] + 1] >> (uVar20 & 0x3f) | uVar20) >>
                         (uVar19 & 0x3f) | uVar19) >> (uVar9 & 0x3f) | uVar9) >> (uVar21 & 0x3f) |
                      uVar21) >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
                    (uVar18 & 0x3f) | uVar18 & 0xffffffffffffff00 | uVar17 >> (uVar14 & 0x3f);
            uVar14 = uVar14 + (uVar13 & 7);
            uVar13 = uVar14 & 0xff;
            uVar14 = uVar14 & 7;
            *puVar8 = uVar9 >> (-uVar13 & 0x3f);
            puVar8 = (ulong *)((long)puVar8 + (uVar13 >> 3));
            pbVar10 = pbVar10 + -0x10;
            bVar1 = 0x10 < uVar7;
            uVar7 = uVar7 - 0x10;
          } while (bVar1);
        }
        goto LAB_0029af4c;
      }
      if (uVar12 == 8) {
/* watermarked copy - do not remove */
        iVar4 = (int)uVar3 % 7;
        if (iVar4 < 1) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar7 = 0;
          pbVar10 = (byte *)(param_3 + (int)uVar3);
          uVar12 = iVar4 + 1;
          do {
            pbVar10 = pbVar10 + -1;
            uVar14 = param_5[(ulong)*pbVar10 + 1];
            uVar9 = uVar9 >> (uVar14 & 0x3f) | uVar14 & 0xffffffffffffff00;
            uVar7 = uVar14 + uVar7;
            uVar12 = uVar12 - 1;
          } while (1 < uVar12);
          param_4 = (ulong)(uVar3 - iVar4);
          uVar14 = uVar7 & 7;
          *param_1 = uVar9 >> (-(uVar7 & 0xff) & 0x3f);
          puVar8 = (ulong *)((long)param_1 + ((uVar7 & 0xff) >> 3));
        }
        iVar4 = (int)param_4;
        if (0x12492492 < (iVar4 * -0x49249249 + 0x12492492U >> 1 | iVar4 * -0x80000000)) {
          lVar6 = param_3 + iVar4;
/* WM - do not claim this as your own */
          uVar15 = param_5[(ulong)*(byte *)(lVar6 + -1) + 1];
          uVar16 = param_5[(ulong)*(byte *)(lVar6 + -2) + 1];
          uVar18 = param_5[(ulong)*(byte *)(lVar6 + -3) + 1];
          uVar17 = param_5[(ulong)*(byte *)(lVar6 + -4) + 1];
          uVar20 = param_5[(ulong)*(byte *)(lVar6 + -5) + 1];
          uVar13 = param_5[(ulong)*(byte *)(lVar6 + -6) + 1];
          param_4 = (long)iVar4 - 7;
          uVar7 = param_5[(ulong)*(byte *)(param_3 + param_4) + 1];
          uVar9 = ((((((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
                      (uVar18 & 0x3f) | uVar18) >> (uVar17 & 0x3f) | uVar17) >> (uVar20 & 0x3f) |
                   uVar20) >> (uVar13 & 0x3f) | uVar13) >> (uVar7 & 0x3f) |
                  uVar7 & 0xffffffffffffff00;
          uVar7 = uVar7 + uVar13 + uVar20 + uVar17 + uVar18 + uVar16 + uVar15 + uVar14;
          uVar13 = uVar7 & 0xff;
          uVar14 = uVar7 & 7;
          *puVar8 = uVar9 >> (-uVar13 & 0x3f);
          puVar8 = (ulong *)((long)puVar8 + (uVar13 >> 3));
        }
        if (0 < (int)param_4) {
          pbVar10 = (byte *)((param_4 & 0xffffffff) + param_3 + -7);
          uVar7 = param_4 & 0xffffffff;
          do {
            uVar15 = param_5[(ulong)pbVar10[6] + 1];
            uVar20 = param_5[(ulong)pbVar10[5] + 1];
            uVar16 = param_5[(ulong)pbVar10[4] + 1];
            uVar21 = param_5[(ulong)pbVar10[3] + 1];
            uVar18 = param_5[(ulong)pbVar10[2] + 1];
            uVar19 = param_5[(ulong)pbVar10[1] + 1];
            uVar13 = param_5[(ulong)*pbVar10 + 1];
            uVar17 = ((((((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar20 & 0x3f) | uVar20) >>
/* wm:if you paid for this, you were scammed */
                         (uVar16 & 0x3f) | uVar16) >> (uVar21 & 0x3f) | uVar21) >> (uVar18 & 0x3f) |
                      uVar18) >> (uVar19 & 0x3f) | uVar19) >> (uVar13 & 0x3f) |
                     uVar13 & 0xffffffffffffff00;
            uVar13 = uVar13 + uVar19 + uVar18 + uVar21 + uVar16 + uVar20 + uVar15 + uVar14;
            uVar14 = uVar13 & 0xff;
            *puVar8 = uVar17 >> (-uVar14 & 0x3f);
            uVar20 = param_5[(ulong)pbVar10[-2] + 1];
            uVar19 = param_5[(ulong)pbVar10[-3] + 1];
            uVar15 = param_5[(ulong)pbVar10[-4] + 1];
            uVar21 = param_5[(ulong)pbVar10[-5] + 1];
            uVar16 = param_5[(ulong)pbVar10[-6] + 1];
            puVar8 = (ulong *)((long)puVar8 + (uVar14 >> 3));
            uVar18 = param_5[(ulong)pbVar10[-7] + 1];
            uVar9 = uVar18 + uVar16 + uVar21 +
                    uVar15 + uVar19 + uVar20 + param_5[(ulong)pbVar10[-1] + 1];
            uVar14 = uVar9 + (uVar13 & 7);
            uVar9 = (((((param_5[(ulong)pbVar10[-1] + 1] >> (uVar20 & 0x3f) | uVar20) >>
                        (uVar19 & 0x3f) | uVar19) >> (uVar15 & 0x3f) | uVar15) >> (uVar21 & 0x3f) |
                     uVar21) >> (uVar16 & 0x3f) | uVar16) >> (uVar18 & 0x3f) |
                    uVar18 & 0xffffffffffffff00 | uVar17 >> (uVar9 & 0x3f);
            uVar13 = uVar14 & 0xff;
/* reversing this took months of machine time - github.com/pengussy */
            uVar14 = uVar14 & 7;
            *puVar8 = uVar9 >> (-uVar13 & 0x3f);
            puVar8 = (ulong *)((long)puVar8 + (uVar13 >> 3));
            pbVar10 = pbVar10 + -0xe;
            bVar1 = 0xe < uVar7;
            uVar7 = uVar7 - 0xe;
          } while (bVar1);
        }
        goto LAB_0029af4c;
      }
    }
    else {
      if (uVar12 == 9) {
        iVar4 = (int)uVar3 % 6;
        if (iVar4 < 1) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar7 = 0;
          pbVar10 = (byte *)(param_3 + (int)uVar3);
          uVar12 = iVar4 + 1;
          do {
            pbVar10 = pbVar10 + -1;
            uVar14 = param_5[(ulong)*pbVar10 + 1];
            uVar9 = uVar9 >> (uVar14 & 0x3f) | uVar14 & 0xffffffffffffff00;
            uVar7 = uVar14 + uVar7;
/* WM - stripping the watermark breaks the license */
            uVar12 = uVar12 - 1;
          } while (1 < uVar12);
          param_4 = (ulong)(uVar3 - iVar4);
          uVar14 = uVar7 & 7;
          *param_1 = uVar9 >> (-(uVar7 & 0xff) & 0x3f);
          puVar8 = (ulong *)((long)param_1 + ((uVar7 & 0xff) >> 3));
        }
        iVar4 = (int)param_4;
        if (0x15555554 < (iVar4 * -0x55555555 + 0x2aaaaaa8U >> 2 | iVar4 * -0x40000000)) {
          lVar6 = param_3 + iVar4;
          uVar15 = param_5[(ulong)*(byte *)(lVar6 + -1) + 1];
          uVar16 = param_5[(ulong)*(byte *)(lVar6 + -2) + 1];
          uVar18 = param_5[(ulong)*(byte *)(lVar6 + -3) + 1];
          uVar17 = param_5[(ulong)*(byte *)(lVar6 + -4) + 1];
          uVar13 = param_5[(ulong)*(byte *)(lVar6 + -5) + 1];
          param_4 = (long)iVar4 - 6;
          uVar7 = param_5[(ulong)*(byte *)(param_3 + param_4) + 1];
          uVar9 = (((((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
                     (uVar18 & 0x3f) | uVar18) >> (uVar17 & 0x3f) | uVar17) >> (uVar13 & 0x3f) |
                  uVar13) >> (uVar7 & 0x3f) | uVar7 & 0xffffffffffffff00;
          uVar14 = uVar7 + uVar13 + uVar17 + uVar18 + uVar16 + uVar15 + uVar14;
          uVar7 = uVar14 & 0xff;
          uVar14 = uVar14 & 7;
          *puVar8 = uVar9 >> (-uVar7 & 0x3f);
          puVar8 = (ulong *)((long)puVar8 + (uVar7 >> 3));
        }
        if (0 < (int)param_4) {
          pbVar10 = (byte *)((param_4 & 0xffffffff) + param_3 + -6);
          uVar7 = param_4 & 0xffffffff;
          do {
            uVar13 = param_5[(ulong)pbVar10[5] + 1];
            uVar18 = param_5[(ulong)pbVar10[4] + 1];
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
            uVar16 = param_5[(ulong)pbVar10[3] + 1];
            uVar19 = param_5[(ulong)pbVar10[2] + 1];
            uVar17 = param_5[(ulong)pbVar10[1] + 1];
            uVar20 = param_5[(ulong)*pbVar10 + 1];
            uVar15 = (((((uVar9 >> (uVar13 & 0x3f) | uVar13) >> (uVar18 & 0x3f) | uVar18) >>
                        (uVar16 & 0x3f) | uVar16) >> (uVar19 & 0x3f) | uVar19) >> (uVar17 & 0x3f) |
                     uVar17) >> (uVar20 & 0x3f) | uVar20 & 0xffffffffffffff00;
            uVar13 = uVar20 + uVar17 + uVar19 + uVar16 + uVar18 + uVar13 + uVar14;
            uVar14 = uVar13 & 0xff;
            *puVar8 = uVar15 >> (-uVar14 & 0x3f);
            uVar17 = param_5[(ulong)pbVar10[-2] + 1];
            uVar18 = param_5[(ulong)pbVar10[-3] + 1];
            uVar9 = param_5[(ulong)pbVar10[-4] + 1];
            uVar20 = param_5[(ulong)pbVar10[-5] + 1];
            puVar8 = (ulong *)((long)puVar8 + (uVar14 >> 3));
            uVar16 = param_5[(ulong)pbVar10[-6] + 1];
            uVar14 = uVar16 + uVar20 + uVar9 + uVar18 + uVar17 + param_5[(ulong)pbVar10[-1] + 1];
            uVar9 = ((((param_5[(ulong)pbVar10[-1] + 1] >> (uVar17 & 0x3f) | uVar17) >>
                       (uVar18 & 0x3f) | uVar18) >> (uVar9 & 0x3f) | uVar9) >> (uVar20 & 0x3f) |
                    uVar20) >> (uVar16 & 0x3f) | uVar16 & 0xffffffffffffff00 |
                    uVar15 >> (uVar14 & 0x3f);
            uVar14 = uVar14 + (uVar13 & 7);
            uVar13 = uVar14 & 0xff;
            uVar14 = uVar14 & 7;
            *puVar8 = uVar9 >> (-uVar13 & 0x3f);
            puVar8 = (ulong *)((long)puVar8 + (uVar13 >> 3));
            pbVar10 = pbVar10 + -0xc;
            bVar1 = 0xc < uVar7;
            uVar7 = uVar7 - 0xc;
          } while (bVar1);
        }
        goto LAB_0029af4c;
      }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      if (uVar12 == 10) {
        iVar4 = (int)uVar3 % 5;
        if (iVar4 < 1) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar7 = 0;
          pbVar10 = (byte *)(param_3 + (int)uVar3);
          uVar12 = iVar4 + 1;
          do {
            pbVar10 = pbVar10 + -1;
            uVar14 = param_5[(ulong)*pbVar10 + 1];
            uVar9 = uVar9 >> (uVar14 & 0x3f) | uVar14 & 0xffffffffffffff00;
            uVar7 = uVar14 + uVar7;
            uVar12 = uVar12 - 1;
          } while (1 < uVar12);
          param_4 = (ulong)(uVar3 - iVar4);
          uVar14 = uVar7 & 7;
          *param_1 = uVar9 >> (-(uVar7 & 0xff) & 0x3f);
          puVar8 = (ulong *)((long)param_1 + ((uVar7 & 0xff) >> 3));
// reversing this took months of machine time
        }
        iVar4 = (int)param_4;
        if (0x19999998 < (iVar4 * -0x33333333 + 0x19999998U >> 1 | iVar4 * -0x80000000)) {
          lVar6 = param_3 + iVar4;
          uVar15 = param_5[(ulong)*(byte *)(lVar6 + -1) + 1];
          uVar16 = param_5[(ulong)*(byte *)(lVar6 + -2) + 1];
          uVar17 = param_5[(ulong)*(byte *)(lVar6 + -3) + 1];
          uVar13 = param_5[(ulong)*(byte *)(lVar6 + -4) + 1];
          param_4 = (long)iVar4 - 5;
          uVar7 = param_5[(ulong)*(byte *)(param_3 + param_4) + 1];
          uVar9 = ((((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
                    (uVar17 & 0x3f) | uVar17) >> (uVar13 & 0x3f) | uVar13) >> (uVar7 & 0x3f) | uVar7
          ;
          uVar14 = uVar7 + uVar13 + uVar17 + uVar16 + uVar15 + uVar14;
          uVar7 = uVar14 & 0xff;
          uVar14 = uVar14 & 7;
          *puVar8 = uVar9 >> (-uVar7 & 0x3f);
          puVar8 = (ulong *)((long)puVar8 + (uVar7 >> 3));
        }
        if (0 < (int)param_4) {
          pbVar10 = (byte *)((param_4 & 0xffffffff) + param_3 + -5);
          uVar7 = param_4 & 0xffffffff;
          do {
            uVar13 = param_5[(ulong)pbVar10[4] + 1];
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
            uVar16 = param_5[(ulong)pbVar10[3] + 1];
            uVar18 = param_5[(ulong)pbVar10[2] + 1];
            uVar17 = param_5[(ulong)pbVar10[1] + 1];
            uVar20 = param_5[(ulong)*pbVar10 + 1];
            uVar15 = ((((uVar9 >> (uVar13 & 0x3f) | uVar13) >> (uVar16 & 0x3f) | uVar16) >>
                       (uVar18 & 0x3f) | uVar18) >> (uVar17 & 0x3f) | uVar17) >> (uVar20 & 0x3f) |
                     uVar20;
            uVar14 = uVar20 + uVar17 + uVar18 + uVar16 + uVar13 + uVar14;
            uVar9 = uVar14 & 0xff;
            *puVar8 = uVar15 >> (-uVar9 & 0x3f);
            uVar16 = param_5[(ulong)pbVar10[-2] + 1];
            uVar17 = param_5[(ulong)pbVar10[-3] + 1];
            uVar13 = param_5[(ulong)pbVar10[-4] + 1];
            uVar18 = param_5[(ulong)pbVar10[-5] + 1];
            puVar8 = (ulong *)((long)puVar8 + (uVar9 >> 3));
            uVar9 = uVar18 + uVar13 + uVar17 + uVar16 + param_5[(ulong)pbVar10[-1] + 1];
            uVar14 = uVar9 + (uVar14 & 7);
            uVar9 = (((param_5[(ulong)pbVar10[-1] + 1] >> (uVar16 & 0x3f) | uVar16) >>
                      (uVar17 & 0x3f) | uVar17) >> (uVar13 & 0x3f) | uVar13) >> (uVar18 & 0x3f) |
                    uVar18 | uVar15 >> (uVar9 & 0x3f);
            uVar13 = uVar14 & 0xff;
            uVar14 = uVar14 & 7;
            *puVar8 = uVar9 >> (-uVar13 & 0x3f);
            puVar8 = (ulong *)((long)puVar8 + (uVar13 >> 3));
            pbVar10 = pbVar10 + -10;
/* wm:chat: discord.gg/sdkhDjTex */
            bVar1 = 10 < uVar7;
            uVar7 = uVar7 - 10;
          } while (bVar1);
        }
        goto LAB_0029af4c;
      }
      if (uVar12 == 0xb) {
        iVar4 = (int)uVar3 % 5;
        if (iVar4 < 1) {
          uVar14 = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar7 = 0;
          pbVar10 = (byte *)(param_3 + (int)uVar3);
          uVar12 = iVar4 + 1;
          do {
            pbVar10 = pbVar10 + -1;
            uVar14 = param_5[(ulong)*pbVar10 + 1];
            uVar9 = uVar9 >> (uVar14 & 0x3f) | uVar14 & 0xffffffffffffff00;
            uVar7 = uVar14 + uVar7;
            uVar12 = uVar12 - 1;
// do not claim this as your own
          } while (1 < uVar12);
          param_4 = (ulong)(uVar3 - iVar4);
          uVar14 = uVar7 & 7;
          *param_1 = uVar9 >> (-(uVar7 & 0xff) & 0x3f);
          puVar8 = (ulong *)((long)param_1 + ((uVar7 & 0xff) >> 3));
        }
        iVar4 = (int)param_4;
        if (0x19999998 < (iVar4 * -0x33333333 + 0x19999998U >> 1 | iVar4 * -0x80000000)) {
          lVar6 = param_3 + iVar4;
          uVar15 = param_5[(ulong)*(byte *)(lVar6 + -1) + 1];
          uVar16 = param_5[(ulong)*(byte *)(lVar6 + -2) + 1];
          uVar17 = param_5[(ulong)*(byte *)(lVar6 + -3) + 1];
          uVar13 = param_5[(ulong)*(byte *)(lVar6 + -4) + 1];
          param_4 = (long)iVar4 - 5;
          uVar7 = param_5[(ulong)*(byte *)(param_3 + param_4) + 1];
          uVar9 = ((((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
                    (uVar17 & 0x3f) | uVar17) >> (uVar13 & 0x3f) | uVar13) >> (uVar7 & 0x3f) |
                  uVar7 & 0xffffffffffffff00;
          uVar14 = uVar7 + uVar13 + uVar17 + uVar16 + uVar15 + uVar14;
          uVar7 = uVar14 & 0xff;
          uVar14 = uVar14 & 7;
          *puVar8 = uVar9 >> (-uVar7 & 0x3f);
          puVar8 = (ulong *)((long)puVar8 + (uVar7 >> 3));
        }
        if (0 < (int)param_4) {
          pbVar10 = (byte *)((param_4 & 0xffffffff) + param_3 + -5);
          uVar7 = param_4 & 0xffffffff;
          do {
            uVar13 = param_5[(ulong)pbVar10[4] + 1];
            uVar18 = param_5[(ulong)pbVar10[3] + 1];
            uVar16 = param_5[(ulong)pbVar10[2] + 1];
            uVar20 = param_5[(ulong)pbVar10[1] + 1];
            uVar17 = param_5[(ulong)*pbVar10 + 1];
            uVar15 = ((((uVar9 >> (uVar13 & 0x3f) | uVar13) >> (uVar18 & 0x3f) | uVar18) >>
// WM - origin: github.com/pengussy
                       (uVar16 & 0x3f) | uVar16) >> (uVar20 & 0x3f) | uVar20) >> (uVar17 & 0x3f) |
                     uVar17 & 0xffffffffffffff00;
            uVar14 = uVar17 + uVar20 + uVar16 + uVar18 + uVar13 + uVar14;
            uVar9 = uVar14 & 0xff;
            *puVar8 = uVar15 >> (-uVar9 & 0x3f);
            uVar17 = param_5[(ulong)pbVar10[-2] + 1];
            uVar18 = param_5[(ulong)pbVar10[-3] + 1];
            uVar13 = param_5[(ulong)pbVar10[-4] + 1];
            puVar8 = (ulong *)((long)puVar8 + (uVar9 >> 3));
            uVar16 = param_5[(ulong)pbVar10[-5] + 1];
            uVar9 = uVar16 + uVar13 + uVar18 + uVar17 + param_5[(ulong)pbVar10[-1] + 1];
            uVar14 = uVar9 + (uVar14 & 7);
            uVar9 = (((param_5[(ulong)pbVar10[-1] + 1] >> (uVar17 & 0x3f) | uVar17) >>
                      (uVar18 & 0x3f) | uVar18) >> (uVar13 & 0x3f) | uVar13) >> (uVar16 & 0x3f) |
                    uVar16 & 0xffffffffffffff00 | uVar15 >> (uVar9 & 0x3f);
            uVar13 = uVar14 & 0xff;
            uVar14 = uVar14 & 7;
            *puVar8 = uVar9 >> (-uVar13 & 0x3f);
            puVar8 = (ulong *)((long)puVar8 + (uVar13 >> 3));
            pbVar10 = pbVar10 + -10;
            bVar1 = 10 < uVar7;
            uVar7 = uVar7 - 10;
          } while (bVar1);
        }
        goto LAB_0029af4c;
      }
    }
    iVar4 = (int)uVar3 % 9;
    if (iVar4 < 1) {
      uVar14 = 0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar7 = 0;
      pbVar10 = (byte *)(param_3 + (int)uVar3);
      uVar12 = iVar4 + 1;
      do {
        pbVar10 = pbVar10 + -1;
        uVar14 = param_5[(ulong)*pbVar10 + 1];
        uVar9 = uVar9 >> (uVar14 & 0x3f) | uVar14 & 0xffffffffffffff00;
        uVar7 = uVar14 + uVar7;
        uVar12 = uVar12 - 1;
      } while (1 < uVar12);
      param_4 = (ulong)(uVar3 - iVar4);
      uVar14 = uVar7 & 7;
      *param_1 = uVar9 >> (-(uVar7 & 0xff) & 0x3f);
/* wm:no support for modified copies */
      puVar8 = (ulong *)((long)param_1 + ((uVar7 & 0xff) >> 3));
    }
    iVar4 = (int)param_4;
    if (0xe38e38e < (iVar4 * 0x38e38e39 + 0xe38e38eU >> 1 | iVar4 * -0x80000000)) {
      lVar6 = param_3 + iVar4;
      uVar15 = param_5[(ulong)*(byte *)(lVar6 + -1) + 1];
      uVar16 = param_5[(ulong)*(byte *)(lVar6 + -2) + 1];
      uVar18 = param_5[(ulong)*(byte *)(lVar6 + -3) + 1];
      uVar17 = param_5[(ulong)*(byte *)(lVar6 + -4) + 1];
      uVar20 = param_5[(ulong)*(byte *)(lVar6 + -5) + 1];
      uVar21 = param_5[(ulong)*(byte *)(lVar6 + -6) + 1];
      uVar19 = param_5[(ulong)*(byte *)(lVar6 + -7) + 1];
      uVar13 = param_5[(ulong)*(byte *)(lVar6 + -8) + 1];
      param_4 = (long)iVar4 - 9;
      uVar7 = param_5[(ulong)*(byte *)(param_3 + param_4) + 1];
      uVar9 = ((((((((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
/*  stripping the watermark breaks the license  */
                    (uVar18 & 0x3f) | uVar18) >> (uVar17 & 0x3f) | uVar17) >> (uVar20 & 0x3f) |
                 uVar20) >> (uVar21 & 0x3f) | uVar21) >> (uVar19 & 0x3f) | uVar19) >>
               (uVar13 & 0x3f) | uVar13) >> (uVar7 & 0x3f) | uVar7;
      uVar14 = uVar7 + uVar13 + uVar19 +
               uVar21 + uVar20 + uVar17 + uVar18 + uVar16 + uVar15 + uVar14;
      uVar7 = uVar14 & 0xff;
      uVar14 = uVar14 & 7;
      *puVar8 = uVar9 >> (-uVar7 & 0x3f);
      puVar8 = (ulong *)((long)puVar8 + (uVar7 >> 3));
    }
    if (0 < (int)param_4) {
      pbVar10 = (byte *)((param_4 & 0xffffffff) + param_3 + -9);
      uVar7 = param_4 & 0xffffffff;
      do {
        uVar13 = param_5[(ulong)pbVar10[8] + 1];
        uVar15 = param_5[(ulong)pbVar10[7] + 1];
        uVar18 = param_5[(ulong)pbVar10[6] + 1];
        uVar16 = param_5[(ulong)pbVar10[5] + 1];
/* reversing this took months of machine time */
        uVar20 = param_5[(ulong)pbVar10[4] + 1];
        uVar21 = param_5[(ulong)pbVar10[3] + 1];
        uVar19 = param_5[(ulong)pbVar10[2] + 1];
        uVar22 = param_5[(ulong)pbVar10[1] + 1];
        uVar23 = param_5[(ulong)*pbVar10 + 1];
        uVar17 = ((((((((uVar9 >> (uVar13 & 0x3f) | uVar13) >> (uVar15 & 0x3f) | uVar15) >>
                       (uVar18 & 0x3f) | uVar18) >> (uVar16 & 0x3f) | uVar16) >> (uVar20 & 0x3f) |
                    uVar20) >> (uVar21 & 0x3f) | uVar21) >> (uVar19 & 0x3f) | uVar19) >>
                  (uVar22 & 0x3f) | uVar22) >> (uVar23 & 0x3f) | uVar23;
        uVar13 = uVar23 + uVar22 + uVar19 +
                 uVar21 + uVar20 + uVar16 + uVar18 + uVar15 + uVar13 + uVar14;
        uVar14 = uVar13 & 0xff;
        *puVar8 = uVar17 >> (-uVar14 & 0x3f);
        uVar20 = param_5[(ulong)pbVar10[-2] + 1];
        uVar19 = param_5[(ulong)pbVar10[-3] + 1];
        uVar9 = param_5[(ulong)pbVar10[-4] + 1];
        uVar21 = param_5[(ulong)pbVar10[-5] + 1];
        uVar15 = param_5[(ulong)pbVar10[-6] + 1];
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        uVar16 = param_5[(ulong)pbVar10[-7] + 1];
        uVar22 = param_5[(ulong)pbVar10[-8] + 1];
        puVar8 = (ulong *)((long)puVar8 + (uVar14 >> 3));
        uVar18 = param_5[(ulong)pbVar10[-9] + 1];
        uVar14 = uVar18 + uVar22 +
                 uVar16 + uVar15 + uVar21 +
                 uVar9 + uVar19 + uVar20 + param_5[(ulong)pbVar10[-1] + 1];
        uVar9 = (((((((param_5[(ulong)pbVar10[-1] + 1] >> (uVar20 & 0x3f) | uVar20) >>
                      (uVar19 & 0x3f) | uVar19) >> (uVar9 & 0x3f) | uVar9) >> (uVar21 & 0x3f) |
                   uVar21) >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >>
                 (uVar22 & 0x3f) | uVar22) >> (uVar18 & 0x3f) | uVar18 | uVar17 >> (uVar14 & 0x3f);
        uVar14 = uVar14 + (uVar13 & 7);
        uVar13 = uVar14 & 0xff;
        uVar14 = uVar14 & 7;
        *puVar8 = uVar9 >> (-uVar13 & 0x3f);
        puVar8 = (ulong *)((long)puVar8 + (uVar13 >> 3));
        pbVar10 = pbVar10 + -0x12;
        bVar1 = 0x12 < uVar7;
        uVar7 = uVar7 - 0x12;
      } while (bVar1);
    }
    goto LAB_0029af4c;
  }
  uVar12 = uVar3 & 3;
  if (-1 < (int)-uVar3) {
    uVar12 = -(-uVar3 & 3);
  }
  if ((int)uVar12 < 1) {
    uVar14 = 0;
    uVar9 = 0;
    if ((param_4 & 7) != 0) goto LAB_0029adb8;
  }
  else {
    uVar9 = 0;
    uVar7 = 0;
// WM - watermarked copy - do not remove
    pbVar10 = (byte *)(param_3 + (int)uVar3);
    uVar11 = uVar12 + 1;
    do {
      pbVar10 = pbVar10 + -1;
      uVar14 = param_5[(ulong)*pbVar10 + 1];
      uVar9 = uVar9 >> (uVar14 & 0x3f) | uVar14 & 0xffffffffffffff00;
      uVar7 = uVar14 + uVar7;
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
    param_4 = (ulong)(uVar3 - uVar12);
    uVar14 = uVar7 & 7;
    *param_1 = uVar9 >> (-(uVar7 & 0xff) & 0x3f);
    puVar2 = (ulong *)((long)param_1 + ((uVar7 & 0xff) >> 3));
    puVar8 = puVar5;
    if (puVar2 <= puVar5) {
      puVar8 = puVar2;
    }
    if ((uVar3 - uVar12 & 7) != 0) {
LAB_0029adb8:
      lVar6 = param_3 + (int)param_4;
      uVar15 = param_5[(ulong)*(byte *)(lVar6 + -1) + 1];
      uVar16 = param_5[(ulong)*(byte *)(lVar6 + -2) + 1];
      uVar13 = param_5[(ulong)*(byte *)(lVar6 + -3) + 1];
      param_4 = (long)(int)param_4 - 4;
      uVar7 = param_5[(ulong)*(byte *)(param_3 + param_4) + 1];
      uVar9 = (((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >> (uVar13 & 0x3f)
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
              | uVar13) >> (uVar7 & 0x3f) | uVar7 & 0xffffffffffffff00;
      uVar7 = uVar7 + uVar13 + uVar16 + uVar15 + uVar14;
      uVar13 = uVar7 & 0xff;
      uVar14 = uVar7 & 7;
      *puVar8 = uVar9 >> (-uVar13 & 0x3f);
      puVar2 = (ulong *)((long)puVar8 + (uVar13 >> 3));
      puVar8 = puVar5;
      if (puVar2 <= puVar5) {
        puVar8 = puVar2;
      }
    }
  }
  if (0 < (int)param_4) {
    pbVar10 = (byte *)((param_4 & 0xffffffff) + param_3 + -4);
    uVar7 = param_4 & 0xffffffff;
    do {
      uVar15 = param_5[(ulong)pbVar10[3] + 1];
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      uVar16 = param_5[(ulong)pbVar10[2] + 1];
      uVar17 = param_5[(ulong)pbVar10[1] + 1];
      uVar13 = param_5[(ulong)*pbVar10 + 1];
      uVar9 = (((uVar9 >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) | uVar16) >> (uVar17 & 0x3f)
              | uVar17) >> (uVar13 & 0x3f) | uVar13 & 0xffffffffffffff00;
      uVar13 = uVar13 + uVar17 + uVar16 + uVar15 + uVar14;
      uVar14 = uVar13 & 0xff;
      *puVar8 = uVar9 >> (-uVar14 & 0x3f);
      uVar15 = param_5[(ulong)pbVar10[-2] + 1];
      uVar16 = param_5[(ulong)pbVar10[-3] + 1];
      puVar8 = (ulong *)((long)puVar8 + (uVar14 >> 3));
      puVar2 = puVar5;
      if (puVar8 <= puVar5) {
        puVar2 = puVar8;
      }
      uVar17 = param_5[(ulong)pbVar10[-4] + 1];
      uVar14 = uVar17 + uVar16 + uVar15 + param_5[(ulong)pbVar10[-1] + 1];
      uVar9 = ((param_5[(ulong)pbVar10[-1] + 1] >> (uVar15 & 0x3f) | uVar15) >> (uVar16 & 0x3f) |
// keep the notice, keep the source honest
              uVar16) >> (uVar17 & 0x3f) | uVar17 & 0xffffffffffffff00 | uVar9 >> (uVar14 & 0x3f);
      uVar14 = uVar14 + (uVar13 & 7);
      uVar13 = uVar14 & 0xff;
      uVar14 = uVar14 & 7;
      *puVar2 = uVar9 >> (-uVar13 & 0x3f);
      puVar2 = (ulong *)((long)puVar2 + (uVar13 >> 3));
      puVar8 = puVar5;
      if (puVar2 <= puVar5) {
        puVar8 = puVar2;
      }
      pbVar10 = pbVar10 + -8;
      bVar1 = 8 < uVar7;
      uVar7 = uVar7 - 8;
    } while (bVar1);
  }
LAB_0029af4c:
  uVar7 = uVar14 + 0x8000000000000001 & 0xffffffff;
  *puVar8 = (uVar9 >> 1 | 0x8000000000000000) >> (-uVar7 & 0x3f);
  puVar8 = (ulong *)((long)puVar8 + (uVar7 >> 3));
  puVar2 = puVar5;
  if (puVar8 <= puVar5) {
    puVar2 = puVar8;
  }
  if (puVar5 <= puVar2) {
    return 0;
  }
  lVar6 = (long)puVar2 - (long)param_1;
  if ((uVar14 + 0x8000000000000001 & 7) != 0) {
    lVar6 = lVar6 + 1;
  }
  return lVar6;
}
// no support for modified copies

