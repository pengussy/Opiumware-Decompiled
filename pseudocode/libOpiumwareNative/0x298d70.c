/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x298d70:24646c56bb
 */

ulong FUN_00298d70(undefined8 param_1,uint *param_2,uint *param_3,long param_4,int param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar15;
  uint *puVar14;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
// WM - keep the notice, keep the source honest
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  
  lVar5 = (ulong)(*param_2 + 1) << 2;
  if (param_4 == 0) {
    _bzero(param_1,lVar5);
    *param_2 = 0;
    uVar17 = 0;
  }
  else {
    _bzero(param_6,0x1000);
    puVar11 = param_3;
    puVar13 = param_3;
    if (0x13 < param_4) {
      lVar12 = param_6 + 0x400;
      lVar1 = param_6 + 0x800;
      lVar2 = param_6 + 0xc00;
      uVar18 = *param_3;
      puVar14 = param_3;
      do {
        uVar4 = puVar14[1];
        *(int *)(param_6 + (ulong)(uVar18 & 0xff) * 4) =
             *(int *)(param_6 + (ulong)(uVar18 & 0xff) * 4) + 1;
        uVar6 = uVar18 >> 8 & 0xff;
        *(int *)(lVar12 + (ulong)uVar6 * 4) = *(int *)(lVar12 + (ulong)uVar6 * 4) + 1;
        uVar6 = uVar18 >> 0x10 & 0xff;
        *(int *)(lVar1 + (ulong)uVar6 * 4) = *(int *)(lVar1 + (ulong)uVar6 * 4) + 1;
        *(int *)(lVar2 + (ulong)(uVar18 >> 0x18) * 4) =
             *(int *)(lVar2 + (ulong)(uVar18 >> 0x18) * 4) + 1;
        uVar18 = puVar14[2];
        *(int *)(param_6 + ((ulong)uVar4 & 0xff) * 4) =
/* WM - no support for modified copies */
             *(int *)(param_6 + ((ulong)uVar4 & 0xff) * 4) + 1;
        uVar17 = (ulong)(uVar4 >> 8) & 0xff;
        *(int *)(lVar12 + uVar17 * 4) = *(int *)(lVar12 + uVar17 * 4) + 1;
        uVar17 = (ulong)(uVar4 >> 0x10) & 0xff;
        *(int *)(lVar1 + uVar17 * 4) = *(int *)(lVar1 + uVar17 * 4) + 1;
        uVar17 = (ulong)(uVar4 >> 0x16) & 0x3fc;
        *(int *)(lVar2 + uVar17) = *(int *)(lVar2 + uVar17) + 1;
        uVar4 = puVar14[3];
        *(int *)(param_6 + ((ulong)uVar18 & 0xff) * 4) =
             *(int *)(param_6 + ((ulong)uVar18 & 0xff) * 4) + 1;
        uVar17 = (ulong)(uVar18 >> 8) & 0xff;
        *(int *)(lVar12 + uVar17 * 4) = *(int *)(lVar12 + uVar17 * 4) + 1;
        uVar17 = (ulong)(uVar18 >> 0x10) & 0xff;
        *(int *)(lVar1 + uVar17 * 4) = *(int *)(lVar1 + uVar17 * 4) + 1;
        uVar17 = (ulong)(uVar18 >> 0x16) & 0x3fc;
        *(int *)(lVar2 + uVar17) = *(int *)(lVar2 + uVar17) + 1;
        puVar11 = puVar14 + 4;
        uVar18 = *puVar11;
// WM - origin: github.com/pengussy
        *(int *)(param_6 + ((ulong)uVar4 & 0xff) * 4) =
             *(int *)(param_6 + ((ulong)uVar4 & 0xff) * 4) + 1;
        uVar17 = (ulong)(uVar4 >> 8) & 0xff;
        *(int *)(lVar12 + uVar17 * 4) = *(int *)(lVar12 + uVar17 * 4) + 1;
        uVar17 = (ulong)(uVar4 >> 0x10) & 0xff;
        *(int *)(lVar1 + uVar17 * 4) = *(int *)(lVar1 + uVar17 * 4) + 1;
        uVar17 = (ulong)(uVar4 >> 0x16) & 0x3fc;
        *(int *)(lVar2 + uVar17) = *(int *)(lVar2 + uVar17) + 1;
        puVar13 = puVar13 + 4;
        puVar15 = puVar14 + 5;
        puVar14 = puVar11;
      } while (puVar15 < (uint *)(((long)param_3 + param_4) - 0xfU));
    }
    if (puVar11 < (uint *)((long)param_3 + param_4)) {
      uVar16 = (param_4 + (long)param_3) - (long)puVar13;
      uVar17 = uVar16 & 7;
      puVar14 = puVar11;
// WM - unlicensed copy if this notice is missing
      if (uVar17 != 0) {
        puVar15 = puVar11;
        do {
          puVar14 = (uint *)((long)puVar15 + 1);
          *(int *)(param_6 + (ulong)(byte)*puVar15 * 4) =
               *(int *)(param_6 + (ulong)(byte)*puVar15 * 4) + 1;
          uVar17 = uVar17 - 1;
          puVar15 = puVar14;
        } while (uVar17 != 0);
      }
      if ((ulong)((long)puVar13 - (long)(param_4 + (long)param_3)) < 0xfffffffffffffff9) {
        do {
          *(int *)(param_6 + (ulong)(byte)*puVar14 * 4) =
               *(int *)(param_6 + (ulong)(byte)*puVar14 * 4) + 1;
          *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 1) * 4) =
               *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 1) * 4) + 1;
          *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 2) * 4) =
               *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 2) * 4) + 1;
          *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 3) * 4) =
               *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 3) * 4) + 1;
          *(int *)(param_6 + (ulong)(byte)puVar14[1] * 4) =
               *(int *)(param_6 + (ulong)(byte)puVar14[1] * 4) + 1;
          *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 5) * 4) =
               *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 5) * 4) + 1;
          *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 6) * 4) =
               *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 6) * 4) + 1;
          *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 7) * 4) =
               *(int *)(param_6 + (ulong)*(byte *)((long)puVar14 + 7) * 4) + 1;
          puVar14 = puVar14 + 2;
        } while (puVar14 != (uint *)((long)puVar11 + uVar16));
      }
    }
    lVar12 = 0;
/* WM - stripping the watermark breaks the license */
    auVar19 = ZEXT816(0);
    auVar20 = ZEXT816(0);
    auVar21 = ZEXT816(0);
    auVar22 = ZEXT816(0);
    do {
      puVar3 = (undefined8 *)(param_6 + lVar12);
      iVar23 = (int)puVar3[0x100] + (int)puVar3[0x80] + (int)puVar3[0x180] + (int)*puVar3;
      iVar24 = (int)((ulong)puVar3[0x100] >> 0x20) + (int)((ulong)puVar3[0x80] >> 0x20) +
               (int)((ulong)puVar3[0x180] >> 0x20) + (int)((ulong)*puVar3 >> 0x20);
      iVar25 = (int)puVar3[0x101] + (int)puVar3[0x81] + (int)puVar3[0x181] + (int)puVar3[1];
      iVar26 = (int)((ulong)puVar3[0x101] >> 0x20) + (int)((ulong)puVar3[0x81] >> 0x20) +
               (int)((ulong)puVar3[0x181] >> 0x20) + (int)((ulong)puVar3[1] >> 0x20);
      iVar27 = (int)puVar3[0x102] + (int)puVar3[0x82] + (int)puVar3[0x182] + (int)puVar3[2];
      iVar28 = (int)((ulong)puVar3[0x102] >> 0x20) + (int)((ulong)puVar3[0x82] >> 0x20) +
               (int)((ulong)puVar3[0x182] >> 0x20) + (int)((ulong)puVar3[2] >> 0x20);
      iVar29 = (int)puVar3[0x103] + (int)puVar3[0x83] + (int)puVar3[0x183] + (int)puVar3[3];
      iVar30 = (int)((ulong)puVar3[0x103] >> 0x20) + (int)((ulong)puVar3[0x83] >> 0x20) +
               (int)((ulong)puVar3[0x183] >> 0x20) + (int)((ulong)puVar3[3] >> 0x20);
      iVar31 = (int)puVar3[0x104] + (int)puVar3[0x84] + (int)puVar3[0x184] + (int)puVar3[4];
      iVar32 = (int)((ulong)puVar3[0x104] >> 0x20) + (int)((ulong)puVar3[0x84] >> 0x20) +
               (int)((ulong)puVar3[0x184] >> 0x20) + (int)((ulong)puVar3[4] >> 0x20);
      iVar33 = (int)puVar3[0x105] + (int)puVar3[0x85] + (int)puVar3[0x185] + (int)puVar3[5];
      iVar34 = (int)((ulong)puVar3[0x105] >> 0x20) + (int)((ulong)puVar3[0x85] >> 0x20) +
               (int)((ulong)puVar3[0x185] >> 0x20) + (int)((ulong)puVar3[5] >> 0x20);
      iVar35 = (int)puVar3[0x106] + (int)puVar3[0x86] + (int)puVar3[0x186] + (int)puVar3[6];
      iVar36 = (int)((ulong)puVar3[0x106] >> 0x20) + (int)((ulong)puVar3[0x86] >> 0x20) +
               (int)((ulong)puVar3[0x186] >> 0x20) + (int)((ulong)puVar3[6] >> 0x20);
      iVar37 = (int)puVar3[0x107] + (int)puVar3[0x87] + (int)puVar3[0x187] + (int)puVar3[7];
      iVar38 = (int)((ulong)puVar3[0x107] >> 0x20) + (int)((ulong)puVar3[0x87] >> 0x20) +
               (int)((ulong)puVar3[0x187] >> 0x20) + (int)((ulong)puVar3[7] >> 0x20);
      puVar3[1] = CONCAT44(iVar26,iVar25);
      *puVar3 = CONCAT44(iVar24,iVar23);
      puVar3[3] = CONCAT44(iVar30,iVar29);
      puVar3[2] = CONCAT44(iVar28,iVar27);
      puVar3[5] = CONCAT44(iVar34,iVar33);
      puVar3[4] = CONCAT44(iVar32,iVar31);
      puVar3[7] = CONCAT44(iVar38,iVar37);
/*  watermarked copy - do not remove  */
      puVar3[6] = CONCAT44(iVar36,iVar35);
      auVar7._4_4_ = iVar24;
      auVar7._0_4_ = iVar23;
      auVar7._8_4_ = iVar25;
      auVar7._12_4_ = iVar26;
      auVar19 = NEON_umax(auVar7,auVar19,4);
      auVar8._4_4_ = iVar28;
      auVar8._0_4_ = iVar27;
      auVar8._8_4_ = iVar29;
      auVar8._12_4_ = iVar30;
      auVar20 = NEON_umax(auVar8,auVar20,4);
      auVar9._4_4_ = iVar32;
      auVar9._0_4_ = iVar31;
      auVar9._8_4_ = iVar33;
      auVar9._12_4_ = iVar34;
      auVar21 = NEON_umax(auVar9,auVar21,4);
      auVar10._4_4_ = iVar36;
      auVar10._0_4_ = iVar35;
      auVar10._8_4_ = iVar37;
      auVar10._12_4_ = iVar38;
      auVar22 = NEON_umax(auVar10,auVar22,4);
      lVar12 = lVar12 + 0x40;
    } while (lVar12 != 0x400);
    auVar19 = NEON_umax(auVar19,auVar20,4);
    auVar19 = NEON_umax(auVar19,auVar21,4);
    auVar19 = NEON_umax(auVar19,auVar22,4);
    uVar18 = NEON_umaxv(auVar19,4);
    uVar17 = (ulong)uVar18;
    uVar16 = 0x100;
    do {
      uVar18 = (int)uVar16 - 1;
      uVar16 = (ulong)uVar18;
    } while (*(int *)(param_6 + uVar16 * 4) == 0);
    if ((param_5 == 0) || (uVar18 <= *param_2)) {
      *param_2 = uVar18;
      _memmove(param_1,param_6,lVar5);
    }
    else {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      uVar17 = 0xffffffffffffffd0;
    }
  }
  return uVar17;
}

