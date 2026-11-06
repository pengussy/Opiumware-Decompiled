/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x29e40c:0951df38f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0029e40c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  short sVar6;
  short sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  uint extraout_w13;
  int iVar17;
  uint uVar18;
  uint extraout_w14;
  uint uVar19;
  short *psVar20;
  uint extraout_w15;
  uint uVar21;
  long lVar22;
  byte bVar23;
  byte bVar24;
/* found on a paste site? it was re-uploaded illegally */
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  short sVar41;
  ushort uVar42;
  short sVar44;
  short sVar45;
  short sVar46;
  undefined1 auVar43 [16];
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint auStack_114 [4];
  short sStack_104;
  short sStack_102;
  short sStack_100;
  short sStack_fe;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  short sStack_fc;
  short sStack_fa;
  short sStack_f8;
  short sStack_f6;
  short sStack_f4;
  short sStack_f2;
  short sStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short sStack_e8;
  short sStack_e6;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short sStack_b8;
  short sStack_b6;
  undefined8 uStack_b4;
  short sStack_ac;
  undefined4 uStack_a8;
  short asStack_a4 [30];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  *(undefined4 *)(param_1 + 0x808) = 1;
  uStack_118 = 0x1f;
  auStack_114[0] = 0xff;
  uStack_a8 = 1;
  lVar22 = param_4 + -8;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  uVar12 = FUN_002997ec(param_1,auStack_114,param_3 + 8,lVar22,&uStack_a8);
  if ((uStack_a8 == 0) && (auStack_114[0] == 0xff)) {
    *(undefined4 *)(param_1 + 0x808) = 2;
  }
  if (uVar12 < 0xffffffffffffff89) {
    lVar1 = param_3 + 8 + uVar12;
    uVar13 = func_0x0029635c(&uStack_a8,&uStack_118,auStack_114,lVar1,lVar22 - uVar12);
    if (((uVar13 < 0xffffffffffffff89) && (auStack_114[0] < 9)) &&
       (uVar14 = func_0x002979e8(param_1 + 0x810,&uStack_a8,0x1f,auStack_114[0],param_2,
                                 &UNK_00002200), uVar14 < 0xffffffffffffff89)) {
      lVar1 = lVar1 + uVar13;
      uStack_11c = 0x34;
      uVar14 = func_0x0029635c(auStack_114,&uStack_11c,&uStack_120,lVar1,lVar22 - (uVar12 + uVar13))
      ;
      if (((uVar14 < 0xffffffffffffff89) && (uStack_120 < 10)) &&
         (uVar15 = func_0x002979e8(param_1 + 0xb14,auStack_114,uStack_11c,uStack_120,param_2,
                                   &UNK_00002200), uVar15 < 0xffffffffffffff89)) {
        bVar23 = -((short)auStack_114[0] == 0) | -((short)uStack_b4 == 0) |
                 -((short)uStack_d4 == 0) | -(sStack_f4 == 0);
        bVar24 = -((short)(auStack_114[0] >> 0x10) == 0) | -((short)((ulong)uStack_b4 >> 0x10) == 0)
                 | -((short)((ulong)uStack_d4 >> 0x10) == 0) | -(sStack_f2 == 0);
        bVar25 = -((short)auStack_114[1] == 0) | -((short)((ulong)uStack_b4 >> 0x20) == 0) |
                 -((short)((ulong)uStack_d4 >> 0x20) == 0) | -(sStack_f0 == 0);
        bVar26 = -((short)(auStack_114[1] >> 0x10) == 0) | -((short)((ulong)uStack_b4 >> 0x30) == 0)
                 | -((short)((ulong)uStack_d4 >> 0x30) == 0) | -(sStack_ee == 0);
        bVar27 = -((short)auStack_114[2] == 0) | -((short)uStack_cc == 0) | -(sStack_ec == 0);
        bVar28 = -(auStack_114[2]._2_2_ == 0) |
                 -((short)((ulong)uStack_cc >> 0x10) == 0) | -(sStack_ea == 0);
        bVar29 = -((short)auStack_114[3] == 0) |
                 -((short)((ulong)uStack_cc >> 0x20) == 0) | -(sStack_e8 == 0);
        bVar30 = -(auStack_114[3]._2_2_ == 0) |
                 -((short)((ulong)uStack_cc >> 0x30) == 0) | -(sStack_e6 == 0);
        bVar31 = -(sStack_104 == 0) | -(sStack_c4 == 0) | -((short)uStack_e4 == 0);
        bVar32 = -(sStack_102 == 0) | -(sStack_c2 == 0) | -((short)((ulong)uStack_e4 >> 0x10) == 0);
        bVar33 = -(sStack_100 == 0) | -(sStack_c0 == 0) | -((short)((ulong)uStack_e4 >> 0x20) == 0);
        bVar34 = -(sStack_fe == 0) | -(sStack_be == 0) | -((short)((ulong)uStack_e4 >> 0x30) == 0);
        bVar35 = -(sStack_fc == 0) | -(sStack_bc == 0) | -((short)uStack_dc == 0);
        bVar36 = -(sStack_fa == 0) | -(sStack_ba == 0) | -((short)((ulong)uStack_dc >> 0x10) == 0);
// proprietary - see LICENSE - do not sell
        bVar37 = -(sStack_f8 == 0) | -(sStack_b8 == 0) | -((short)((ulong)uStack_dc >> 0x20) == 0);
        bVar38 = -(sStack_f6 == 0) | -(sStack_b6 == 0) | -((short)((ulong)uStack_dc >> 0x30) == 0);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        auVar39[0xf] = bVar38;
        auVar4[1] = bVar24;
        auVar4[0] = bVar23;
        auVar4[2] = bVar25;
        auVar4[3] = bVar26;
        auVar4[4] = bVar27;
        auVar4[5] = bVar28;
        auVar4[6] = bVar29;
        auVar4[7] = bVar30;
        auVar4[8] = bVar31;
        auVar4[9] = bVar32;
        auVar4[10] = bVar33;
        auVar4[0xb] = bVar34;
        auVar4[0xc] = bVar35;
        auVar4[0xd] = bVar36;
        auVar4[0xe] = bVar37;
        auVar4[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar4,8,1);
        uVar15 = CONCAT17(bVar30 | auVar39[7],
                          CONCAT16(bVar29 | auVar39[6],
                                   CONCAT15(bVar28 | auVar39[5],
                                            CONCAT14(bVar27 | auVar39[4],
                                                     CONCAT13(bVar26 | auVar39[3],
                                                              CONCAT12(bVar25 | auVar39[2],
                                                                       CONCAT11(bVar24 | auVar39[1],
                                                                                bVar23 | auVar39[0])
                                                                      ))))));
        uVar15 = uVar15 | uVar15 >> 0x20;
        uVar18 = (uint)uVar15 | (uint)(uVar15 >> 0x10);
        uVar16 = 1;
        if ((0x33 < uStack_11c && sStack_ac != 0) && ((uVar18 | uVar18 >> 8) & 1) == 0) {
          uVar16 = 2;
        }
        *(undefined4 *)(&UNK_000015e8 + param_1) = uVar16;
        lVar1 = lVar1 + uVar14;
        uStack_11c = 0x23;
        lVar22 = uVar12 + uVar13 + uVar14 + 8;
        uVar12 = func_0x0029635c(auStack_114,&uStack_11c,&uStack_120,lVar1,param_4 - lVar22);
// stripping the watermark breaks the license
        if (((uVar12 < 0xffffffffffffff89) && (uStack_120 < 10)) &&
           (uVar13 = func_0x002979e8("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                     + param_1 + 0x20,auStack_114,uStack_11c,uStack_120,param_2,
                                     &UNK_00002200), uVar13 < 0xffffffffffffff89)) {
          sVar6 = -(ushort)((short)uStack_e4 == 0);
          sVar7 = -(ushort)((short)((ulong)uStack_e4 >> 0x10) == 0);
          bVar24 = (byte)sVar7;
          auVar10[1] = -(sStack_102 == 0);
          auVar10[0] = -(sStack_104 == 0);
          bVar25 = -((short)auStack_114[0] == 0);
          bVar26 = -((short)(auStack_114[0] >> 0x10) == 0);
          bVar27 = -((short)auStack_114[1] == 0);
          bVar28 = -((short)(auStack_114[1] >> 0x10) == 0);
          auVar9[1] = bVar26;
          auVar9[0] = bVar25;
          sVar41 = -(ushort)((short)uStack_d4 == 0);
          sVar44 = -(ushort)((short)((ulong)uStack_d4 >> 0x10) == 0);
          sVar45 = -(ushort)((short)((ulong)uStack_d4 >> 0x20) == 0);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
          sVar46 = -(ushort)((short)((ulong)uStack_d4 >> 0x30) == 0);
          bVar23 = (byte)sVar6;
          auVar43._8_8_ = _UNK_01adc5d8;
          auVar43._0_8_ = _UNK_01adc5d0;
          auVar8[1] = bVar23 | (byte)((ushort)sVar41 >> 8);
          auVar8[0] = bVar25 | (byte)sVar41;
          auVar8[2] = bVar26 | (byte)sVar44;
          auVar8[3] = (byte)((ushort)sVar6 >> 8) | (byte)((ushort)sVar44 >> 8);
          auVar8[4] = bVar27 | (byte)sVar45;
          auVar8[5] = bVar24 | (byte)((ushort)sVar45 >> 8);
          auVar8[6] = bVar28 | (byte)sVar46;
          auVar8[7] = (byte)((ushort)sVar7 >> 8) | (byte)((ushort)sVar46 >> 8);
          auVar8._8_8_ = 0;
          auVar9[2] = bVar27;
          auVar9[3] = bVar28;
          auVar9[4] = -((short)auStack_114[2] == 0);
          auVar9[5] = -(auStack_114[2]._2_2_ == 0);
          auVar9[6] = -((short)auStack_114[3] == 0);
          auVar9[7] = -(auStack_114[3]._2_2_ == 0);
          auVar9._8_8_ = 0;
          auVar10[2] = -(sStack_100 == 0);
          auVar10[3] = -(sStack_fe == 0);
          auVar10[4] = -(sStack_fc == 0);
          auVar10[5] = -(sStack_fa == 0);
          auVar10[6] = -(sStack_f8 == 0);
/* if you paid for this, you were scammed - github.com/pengussy */
          auVar10[7] = -(sStack_f6 == 0);
          auVar10._8_8_ = 0;
          auVar39 = a64_TBL(ZEXT816(0),auVar8,auVar9,auVar10,auVar43);
          auVar5[1] = -((char)((auVar39[1] | -(sStack_f2 == 0)) << 7) < '\0');
          auVar5[0] = -((char)((auVar39[0] | -(sStack_f4 == 0)) << 7) < '\0');
          auVar5[2] = -((char)((auVar39[2] | -(sStack_f0 == 0)) << 7) < '\0');
          auVar5[3] = -((char)((auVar39[3] | -(sStack_ee == 0)) << 7) < '\0');
          auVar5[4] = -((char)((auVar39[4] | -(sStack_ec == 0)) << 7) < '\0');
          auVar5[5] = -((char)((auVar39[5] | -(sStack_ea == 0)) << 7) < '\0');
          auVar5[6] = -((char)((auVar39[6] | -(sStack_e8 == 0)) << 7) < '\0');
          auVar5[7] = -((char)((auVar39[7] | -(sStack_e6 == 0)) << 7) < '\0');
          auVar5[8] = -((char)((auVar39[8] | bVar23) << 7) < '\0');
          auVar5[9] = -((char)((auVar39[9] | bVar24) << 7) < '\0');
          auVar5[10] = -((char)((auVar39[10] | -((short)((ulong)uStack_e4 >> 0x20) == 0)) << 7) <
                        '\0');
          auVar5[0xb] = -((char)((auVar39[0xb] | -((short)((ulong)uStack_e4 >> 0x30) == 0)) << 7) <
                         '\0');
          auVar5[0xc] = -((char)((auVar39[0xc] | -((short)uStack_dc == 0)) << 7) < '\0');
// WM - thanks for reading - discord.gg/sdkhDjTex
          auVar5[0xd] = -((char)((auVar39[0xd] | -((short)((ulong)uStack_dc >> 0x10) == 0)) << 7) <
                         '\0');
          auVar5[0xe] = -((char)((auVar39[0xe] | -((short)((ulong)uStack_dc >> 0x20) == 0)) << 7) <
                         '\0');
          auVar5[0xf] = -((char)((auVar39[0xf] | -((short)((ulong)uStack_dc >> 0x30) == 0)) << 7) <
                         '\0');
          bVar23 = NEON_umaxv(auVar5,1);
          uVar16 = 1;
          if (0x22 < uStack_11c && (bVar23 & 1) == 0) {
            uVar16 = 2;
          }
          *(undefined4 *)(&UNK_000015ec + param_1) = uVar16;
          puVar2 = (uint *)(lVar1 + uVar12);
          if (puVar2 + 3 <= (uint *)(param_3 + param_4)) {
            uVar13 = (ulong)*puVar2;
            *(uint *)(&UNK_000015f0 + param_1) = *puVar2;
            uVar14 = (ulong)puVar2[1];
            *(uint *)(&UNK_000015f4 + param_1) = puVar2[1];
            uVar15 = (ulong)puVar2[2];
            *(uint *)(&UNK_000015f8 + param_1) = puVar2[2];
            lVar22 = lVar22 + uVar12 + 0xc;
            uVar12 = param_4 - lVar22;
            uVar18 = (uint)LZCOUNT((int)uVar12 + 0x20000) ^ 0x1f;
            if (0xfffdffff < uVar12) {
/* WM - keep the notice, keep the source honest */
              uVar18 = 0x1f;
            }
            if (uStack_118 < uVar18) goto LAB_0029e7dc;
            uVar21 = uVar18 + 1;
            uVar19 = uVar21 & 0x38;
            psVar20 = (short *)&uStack_a8;
            uVar11 = uVar19;
            do {
              uVar11 = uVar11 - 8;
              auVar40._0_2_ = -(ushort)(*psVar20 == 0);
              auVar40._2_2_ = -(ushort)(psVar20[1] == 0);
              auVar40._4_2_ = -(ushort)(psVar20[2] == 0);
              auVar40._6_2_ = -(ushort)(psVar20[3] == 0);
              auVar40._8_2_ = -(ushort)(psVar20[4] == 0);
              auVar40._10_2_ = -(ushort)(psVar20[5] == 0);
              auVar40._12_2_ = -(ushort)(psVar20[6] == 0);
              auVar40._14_2_ = -(ushort)(psVar20[7] == 0);
              uVar42 = NEON_umaxv(auVar40,2);
/* wm:keep the notice, keep the source honest */
              if ((uVar42 & 1) != 0) break;
              psVar20 = psVar20 + 8;
            } while (uVar11 != 0);
            if ((byte)(((byte)auVar40._0_2_ & (byte)_UNK_01adc5e0) +
                       ((byte)auVar40._2_2_ & (byte)((ulong)_UNK_01adc5e0 >> 0x10)) +
                       ((byte)auVar40._4_2_ & (byte)((ulong)_UNK_01adc5e0 >> 0x20)) +
                       ((byte)auVar40._6_2_ & (byte)((ulong)_UNK_01adc5e0 >> 0x30)) +
                       ((byte)auVar40._8_2_ & (byte)_UNK_01adc5e8) +
                       ((byte)auVar40._10_2_ & (byte)((ulong)_UNK_01adc5e8 >> 0x10)) +
                       ((byte)auVar40._12_2_ & (byte)((ulong)_UNK_01adc5e8 >> 0x20)) +
                      ((byte)auVar40._14_2_ & (byte)((ulong)_UNK_01adc5e8 >> 0x30))) == '\0')
            goto LAB_0029e834;
            goto LAB_0029e7dc;
          }
        }
      }
    }
  }
  lVar22 = -0x1e;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return;
  }
LAB_0029e830:
// unlicensed copy if this notice is missing
  ___stack_chk_fail(lVar22);
  uVar13 = extraout_x8;
  uVar14 = extraout_x9;
  uVar15 = extraout_x10;
  lVar22 = extraout_x11;
  uVar12 = extraout_x12;
  uVar19 = extraout_w14;
  uVar21 = extraout_w15;
  uVar18 = extraout_w13;
LAB_0029e834:
  if (uVar21 != uVar19) {
    iVar17 = (uVar18 + 1) - uVar19;
    psVar20 = (short *)((long)asStack_a4 + (((ulong)((uVar18 + 1) * 2) & 0xf0) - 4));
    do {
      if (*psVar20 == 0) goto LAB_0029e7dc;
      iVar17 = iVar17 + -1;
      psVar20 = psVar20 + 1;
    } while (iVar17 != 0);
  }
  uVar16 = 2;
  goto LAB_0029e7e0;
LAB_0029e7dc:
  uVar16 = 1;
LAB_0029e7e0:
  *(undefined4 *)(&UNK_000015e4 + param_1) = uVar16;
/* wm:proprietary - see LICENSE - do not sell */
  lVar1 = -0x1e;
  if (uVar15 <= uVar12 && (int)uVar15 != 0) {
    lVar1 = lVar22;
  }
  lVar22 = -0x1e;
  if (uVar14 <= uVar12) {
    lVar22 = lVar1;
  }
  lVar1 = -0x1e;
  if ((int)uVar14 != 0) {
    lVar1 = lVar22;
  }
  lVar3 = -0x1e;
  if (uVar13 <= uVar12) {
    lVar3 = lVar1;
  }
  lVar22 = -0x1e;
  if ((int)uVar13 != 0) {
    lVar22 = lVar3;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return;
/*  origin: github.com/pengussy  */
  }
  goto LAB_0029e830;
}

