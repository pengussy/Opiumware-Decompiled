/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x346ba0:9e33abc837
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00346ba0(ulong *param_1,uint *param_2,ulong param_3,ulong *param_4,ulong param_5,ulong *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong *unaff_x19;
  ulong *unaff_x20;
  uint *unaff_x22;
  undefined8 unaff_x23;
  ulong *unaff_x24;
  int iVar23;
/*  unlicensed copy if this notice is missing  */
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte bVar28;
  ulong uVar29;
  undefined8 uVar30;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined8 uVar31;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined8 uVar38;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined8 uVar46;
  undefined1 uVar53;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined8 uVar54;
  byte bVar61;
  undefined1 auVar62 [16];
  ulong uStack_1f8;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [84];
  undefined4 uStack_194;
  long lStack_190;
/*  reversing this took months of machine time  */
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong *puStack_160;
  undefined8 uStack_158;
  uint *puStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  uint uStack_110;
  int iStack_10c;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
/* wm:stripping the watermark breaks the license */
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  ulong *puStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  ulong *puStack_90;
  long lStack_80;
  undefined1 auStack_78 [8];
  
  lStack_80 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar7 = 1;
  puVar9 = param_4;
  if (param_5 <= param_3) {
    if ((param_5 & 3) == 0) {
      *param_6 = param_5;
      uVar18 = _UNK_01ae5c98;
      uStack_98 = uStack_98 & 0xffff0000;
      uVar11 = *param_2;
      if ((uVar11 & 0x1e) == 0x10) {
        auStack_78[(ulong)((uVar11 & 0x11) - 0x10) - 0x20] = 1;
      }
      if ((uVar11 & 0x3c0) == 0x200) {
        auStack_78[(ulong)((uVar11 >> 5 & 0x11) - 0x10) - 0x20] = 1;
      }
      if ((uVar11 & 0x7800) == 0x4000) {
        auStack_78[(ulong)((uVar11 >> 10 & 0x11) - 0x10) - 0x20] = 1;
      }
      if ((uVar11 & 0x1e0000) == 0x100000) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        auStack_78[(ulong)((uVar11 >> 0x10 & 0x11) - 0x10) - 0x20] = 1;
      }
      if (4 < param_5) {
        uVar11 = param_2[1];
        if ((uVar11 & 0x1e) == 0x10) {
          auStack_78[(ulong)((uVar11 & 0x11) - 0x10) - 0x20] = 1;
        }
        if ((uVar11 & 0x3c0) == 0x200) {
          auStack_78[(ulong)((uVar11 >> 5 & 0x11) - 0x10) - 0x20] = 1;
        }
        if ((uVar11 & 0x7800) == 0x4000) {
          auStack_78[(ulong)((uVar11 >> 10 & 0x11) - 0x10) - 0x20] = 1;
        }
        if ((uVar11 & 0x1e0000) == 0x100000) {
          auStack_78[(ulong)((uVar11 >> 0x10 & 0x11) - 0x10) - 0x20] = 1;
        }
        if (8 < param_5) {
          uVar11 = param_2[2];
          if ((uVar11 & 0x1e) == 0x10) {
            auStack_78[(ulong)((uVar11 & 0x11) - 0x10) - 0x20] = 1;
          }
          if ((uVar11 & 0x3c0) == 0x200) {
            auStack_78[(ulong)((uVar11 >> 5 & 0x11) - 0x10) - 0x20] = 1;
          }
          if ((uVar11 & 0x7800) == 0x4000) {
            auStack_78[(ulong)((uVar11 >> 10 & 0x11) - 0x10) - 0x20] = 1;
          }
          if ((uVar11 & 0x1e0000) == 0x100000) {
            auStack_78[(ulong)((uVar11 >> 0x10 & 0x11) - 0x10) - 0x20] = 1;
          }
          if (0xc < param_5) {
            uVar11 = param_2[3];
            if ((uVar11 & 0x1e) == 0x10) {
              auStack_78[(ulong)((uVar11 & 0x11) - 0x10) - 0x20] = 1;
            }
            if ((uVar11 & 0x3c0) == 0x200) {
              auStack_78[(ulong)((uVar11 >> 5 & 0x11) - 0x10) - 0x20] = 1;
// WM - unlicensed copy if this notice is missing
            }
            if ((uVar11 & 0x7800) == 0x4000) {
              auStack_78[(ulong)((uVar11 >> 10 & 0x11) - 0x10) - 0x20] = 1;
            }
            if ((uVar11 & 0x1e0000) == 0x100000) {
              auStack_78[(ulong)((uVar11 >> 0x10 & 0x11) - 0x10) - 0x20] = 1;
            }
          }
        }
      }
      unaff_x25 = 0;
      unaff_x27 = 0;
      unaff_x28 = 0;
      uVar11 = 0;
      if ((byte)uStack_98 == 0) {
        uVar11 = 0x10;
      }
      if (uStack_98._1_1_ == 0) {
        uVar11 = 0x11;
      }
      lStack_120 = (long)param_4 + (0x600 - (long)param_1);
      uStack_a4 = (uint)(uStack_98._1_1_ & (byte)uStack_98);
/* wm:watermarked copy - do not remove */
      uStack_a8 = uVar11 | 0x58000040;
      uStack_ac = uVar11 << 5 | 0xd61f0000;
      iStack_10c = uStack_a8 + 0x40;
      uStack_110 = uVar11 << 5 | 0xd63f0000;
      puStack_a0 = param_1 + -0x1000000;
      uStack_108 = (ulong)(0xffffffc - (int)param_4);
      lStack_b8 = 0x7fffffc - (long)param_4;
      unaff_x26 = -(long)param_4;
      uStack_118 = (ulong)(uint)-(int)param_4;
      lVar22 = 0x8000000 - (long)param_4;
      uVar29 = 0xd503201fd503201f;
      uVar8 = 0xd503201fd503201f;
      unaff_x23 = 0x10000000;
      uVar31 = 0x1fffe0001fffe0;
      uVar38 = 0x1fffe0001fffe0;
      uStack_d8 = _UNK_01ae5ca8;
      uStack_e0 = _UNK_01ae5ca0;
      uStack_c8 = 0xd503201fd503201f;
      uStack_d0 = 0xd503201fd503201f;
      uStack_f8 = _UNK_01ae5cb8;
      uStack_100 = _UNK_01ae5cb0;
      uStack_e8 = 0x1fffe0001fffe0;
      uStack_f0 = 0x1fffe0001fffe0;
      unaff_x19 = param_4;
      uVar7 = _UNK_01ae5ca0;
      uVar30 = _UNK_01ae5ca8;
      uVar46 = _UNK_01ae5cb0;
      uVar54 = _UNK_01ae5cb8;
      lStack_c0 = lVar22;
      do {
        uVar11 = *(uint *)((long)param_2 + unaff_x27);
        unaff_x19[1] = uVar8;
        *unaff_x19 = uVar29;
        unaff_x19[3] = uVar8;
/* wm:unlicensed copy if this notice is missing */
        unaff_x19[2] = uVar29;
        bVar32 = (byte)((ulong)uVar31 >> 8);
        bVar33 = (byte)((ulong)uVar31 >> 0x10);
        bVar34 = (byte)((ulong)uVar31 >> 0x18);
        bVar35 = (byte)((ulong)uVar31 >> 0x20);
        bVar36 = (byte)((ulong)uVar31 >> 0x28);
        bVar37 = (byte)((ulong)uVar31 >> 0x30);
        bVar39 = (byte)((ulong)uVar38 >> 8);
        bVar40 = (byte)((ulong)uVar38 >> 0x10);
        bVar41 = (byte)((ulong)uVar38 >> 0x18);
        bVar42 = (byte)((ulong)uVar38 >> 0x20);
        bVar43 = (byte)((ulong)uVar38 >> 0x28);
        bVar44 = (byte)((ulong)uVar38 >> 0x30);
        bVar45 = (byte)((ulong)uVar38 >> 0x38);
        bVar47 = (byte)((ulong)uVar46 >> 8);
        bVar48 = (byte)((ulong)uVar46 >> 0x10);
        bVar49 = (byte)((ulong)uVar46 >> 0x18);
        bVar50 = (byte)((ulong)uVar46 >> 0x20);
        bVar51 = (byte)((ulong)uVar46 >> 0x28);
        bVar52 = (byte)((ulong)uVar46 >> 0x30);
        uVar53 = (undefined1)((ulong)uVar46 >> 0x38);
        bVar55 = (byte)((ulong)uVar54 >> 8);
        bVar56 = (byte)((ulong)uVar54 >> 0x10);
        bVar57 = (byte)((ulong)uVar54 >> 0x18);
        bVar58 = (byte)((ulong)uVar54 >> 0x20);
        bVar59 = (byte)((ulong)uVar54 >> 0x28);
        bVar60 = (byte)((ulong)uVar54 >> 0x30);
        bVar61 = (byte)((ulong)uVar54 >> 0x38);
/* origin: github.com/pengussy */
        if ((uVar11 & 0x1f000000) == 0x10000000) {
          lVar14 = (ulong)((uVar11 >> 3 & 0x1ffffc | uVar11 >> 0x1d & 3) ^ 0x100000) - 0x100000;
          lVar19 = ((long)param_1 + unaff_x27 & 0xfffffffffffff000U) + lVar14 * 0x1000;
          if (-1 < (int)uVar11) {
            lVar19 = lVar14 + (long)param_1 + unaff_x27;
          }
          bVar28 = (byte)uVar11 & 0x1f;
          iVar23 = (uint)lVar19 << 5;
          auVar24._8_8_ = lVar19;
          auVar24._0_8_ = lVar19;
          uVar10 = (uint)lVar19 >> 0xb;
          auVar62._8_8_ = uVar30;
          auVar62._0_8_ = uVar7;
          auVar62 = NEON_ushl(auVar24,auVar62,8);
          uVar16 = CONCAT44(uVar11,uVar11) & 0x1f0000001f;
          auVar25._0_8_ =
               CONCAT17(uVar53,CONCAT16(bVar52 | (byte)((ulong)lVar19 >> 0x18) >> 3 & bVar37,
                                        CONCAT15(bVar51 | (byte)(uVar10 >> 8) & bVar36,
                                                 CONCAT14(bVar28 | bVar50 | (byte)uVar10 & bVar35,
                                                          CONCAT13(bVar49 | (byte)((uint)iVar23 >>
                                                                                  0x18) & bVar34,
                                                                   CONCAT12(bVar48 | (byte)((uint)
                                                  iVar23 >> 0x10) & bVar33,
                                                  CONCAT11(bVar47 | (byte)((uint)iVar23 >> 8) &
                                                                    bVar32,
                                                           bVar28 | (byte)uVar46 |
                                                           (byte)iVar23 & (byte)uVar31)))))));
          auVar25[8] = (byte)uVar16 | (byte)uVar54 | auVar62[0] & (byte)uVar38;
          auVar25[9] = bVar55 | auVar62[1] & bVar39;
          auVar25[10] = bVar56 | auVar62[2] & bVar40;
          auVar25[0xb] = bVar57 | auVar62[3] & bVar41;
          auVar25[0xc] = (byte)(uVar16 >> 0x20) | bVar58 | auVar62[8] & bVar42;
          auVar25[0xd] = bVar59 | auVar62[9] & bVar43;
          auVar25[0xe] = bVar60 | auVar62[10] & bVar44;
          auVar25[0xf] = bVar61 | auVar62[0xb] & bVar45;
/* watermarked copy - do not remove */
          unaff_x19[1] = auVar25._8_8_;
          *unaff_x19 = auVar25._0_8_;
        }
        else if ((uVar11 & 0x7c000000) == 0x14000000) {
          uVar16 = ((ulong)uVar11 & 0x3ffffff) << 2 ^ 0x8000000;
          puVar15 = (ulong *)((long)puStack_a0 + uVar16 + unaff_x27);
          if (param_1 <= puVar15) {
            uVar16 = (unaff_x27 + uVar16) - 0x8000000;
            if (uVar16 < *param_6) {
              puVar15 = param_4 + uVar16;
            }
          }
          uVar16 = unaff_x26 + unaff_x25 + (long)puVar15;
          if ((uVar16 & 3) == 0 && (ulong)(lVar22 + unaff_x25 + (long)puVar15) >> 0x1c == 0) {
            uVar10 = 0x94000000;
            if (-1 < (int)uVar11) {
              uVar10 = 0x14000000;
// WM - reversing this took months of machine time
            }
            *(uint *)unaff_x19 = uVar10 | (uint)uVar16 >> 2 & 0x3ffffff;
          }
          else {
            if ((uStack_a4 & 1) != 0) goto LAB_003474bc;
            if ((int)uVar11 < 0) {
              *(int *)unaff_x19 = iStack_10c;
              *(uint *)((long)unaff_x19 + 4) = uStack_110;
              unaff_x19[1] = uVar18;
              unaff_x19[2] = (ulong)puVar15;
            }
            else {
LAB_003471dc:
              *(uint *)unaff_x19 = uStack_a8;
              *(uint *)((long)unaff_x19 + 4) = uStack_ac;
              unaff_x19[1] = (ulong)puVar15;
            }
          }
        }
        else {
          uVar10 = 0x54000000;
          iVar23 = (int)unaff_x25;
          if (((uVar11 & 0xff000000) == 0x54000000) ||
             (uVar10 = uVar11 & 0x7e000000, (uVar10 | 0x2000000) == 0x36000000)) {
            uVar12 = 0x3fff;
            if (uVar10 != 0x36000000) {
              uVar12 = 0x7ffff;
            }
            uVar16 = 0x2000;
            if (uVar10 != 0x36000000) {
              uVar16 = 0x40000;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
            }
            lVar19 = ((uVar16 ^ uVar12 & uVar11 >> 5) - uVar16) * 4;
            puVar15 = (ulong *)((long)param_1 + lVar19 + unaff_x27);
            if (param_1 <= puVar15) {
              uVar16 = unaff_x27 + lVar19;
              if (uVar16 < *param_6) {
                puVar15 = param_4 + uVar16;
              }
            }
            iVar13 = (int)puVar15;
            if ((uVar11 & 0xff000000) == 0x54000000) {
              if (((uVar11 ^ 0xffffffff) & 0xe) == 0) {
                if (((int)unaff_x26 + iVar23 + iVar13 & 3U) == 0 &&
                    (ulong)((long)puVar15 + unaff_x25 + lVar22) >> 0x1c == 0) {
                  *(uint *)unaff_x19 =
                       (uint)((int)uStack_118 + iVar23 + iVar13) >> 2 & 0x3ffffff | 0x14000000;
                  goto LAB_00347068;
                }
                if ((uStack_a4 & 1) == 0) goto LAB_003471dc;
                goto LAB_003474bc;
              }
              uVar10 = 1;
            }
            else {
              uVar10 = 0x1000000;
            }
            if (((int)unaff_x26 + iVar23 + iVar13 & 3U) == 0 &&
                (ulong)((long)puVar15 + unaff_x25 + lStack_b8) >> 0x1c == 0) {
              uStack_98 = (uint)((int)uStack_108 + iVar23 + iVar13) >> 2 & 0x3ffffff | 0x14000000;
              param_3 = 4;
            }
            else {
              if ((uStack_a4 & 1) != 0) goto LAB_003474bc;
              uStack_98 = uStack_a8;
              uStack_94 = uStack_ac;
/* stripping the watermark breaks the license */
              param_3 = 0x10;
              puStack_90 = puVar15;
            }
            *(uint *)unaff_x19 =
                 (uVar10 ^ uVar11 & (uVar12 << 5 ^ 0xffffffff)) + (int)param_3 * 8 + 0x20;
            _memcpy((int *)((long)unaff_x19 + 4),&uStack_98);
            lVar22 = lStack_c0;
            uVar29 = uStack_d0;
            uVar8 = uStack_c8;
            uVar7 = uStack_e0;
            uVar30 = uStack_d8;
            uVar31 = uStack_f0;
            uVar38 = uStack_e8;
            uVar46 = uStack_100;
            uVar54 = uStack_f8;
          }
          else if ((uVar11 & 0x3b000000) == 0x18000000) {
            uVar16 = (ulong)(uVar11 >> 3) & 0x1ffffc ^ 0x100000;
            piVar17 = (int *)((long)param_1 + unaff_x27);
            if ((ulong *)((long)piVar17 + (uVar16 - 0x100000)) < param_1) {
              piVar17 = (int *)((long)param_1 + unaff_x28 * 4);
/* donate: donate/README.md */
            }
            else {
              lVar19 = lStack_120;
              if (*param_6 <= (unaff_x27 + uVar16) - 0x100000) {
                lVar19 = 0;
              }
              uVar16 = lVar19 + uVar16;
            }
            uVar21 = (long)piVar17 + (uVar16 - 0x100000);
            uVar16 = unaff_x26 + unaff_x25 + uVar21;
            if ((uVar16 & 3) == 0 && uVar16 + 0x100000 >> 0x15 == 0) {
              *(uint *)unaff_x19 =
                   uVar11 & 0xdc000000 |
                   uVar11 & 0x1f |
                   ((uint)((int)uStack_118 + iVar23 + (int)uVar21) >> 2 & 0x7ffff) << 5;
            }
            else {
              uVar10 = uVar11 >> 0x1e;
              if (((uVar11 >> 0x1a & 1) != 0) && (uVar10 == 3)) goto LAB_003474bc;
/*  watermarked copy - do not remove  */
              uVar12 = uVar11 & 0x1f;
              uVar2 = uVar11 >> 0x1a & 1;
              if (uVar10 == 3 || uVar12 == 0x1f) {
                uVar2 = 1;
              }
              if (uVar2 == 0) {
                lVar19 = 0;
                uVar4 = uVar12;
              }
              else {
                *(int *)unaff_x19 = -0x7e8f00f;
                lVar19 = 4;
                uVar4 = 0x11;
              }
              puVar1 = (undefined8 *)((long)unaff_x19 + lVar19);
              iVar23 = (int)uVar21 << 5;
              auVar26._8_8_ = uVar21;
              auVar26._0_8_ = uVar21;
/* WM - more drops soon - github.com/pengussy */
              uVar20 = (uint)(uVar21 >> 0xb) & 0x1fffff;
              auVar3._8_8_ = uVar30;
              auVar3._0_8_ = uVar7;
              auVar62 = NEON_ushl(auVar26,auVar3,8);
              bVar28 = (byte)uVar4;
              auVar27._0_8_ =
                   CONCAT17(uVar53,CONCAT16(bVar52 | (byte)(uVar20 >> 0x10) & bVar37,
                                            CONCAT15(bVar51 | (byte)(uVar20 >> 8) & bVar36,
                                                     CONCAT14(bVar28 | bVar50 |
                                                              (byte)uVar20 & bVar35,
                                                              CONCAT13(bVar49 | (byte)((uint)iVar23
                                                                                      >> 0x18) &
                                                                                bVar34,
                                                                       CONCAT12(bVar48 | (byte)((
                                                  uint)iVar23 >> 0x10) & bVar33,
                                                  CONCAT11(bVar47 | (byte)((uint)iVar23 >> 8) &
                                                                    bVar32,
                                                           bVar28 | (byte)uVar46 |
                                                           (byte)iVar23 & (byte)uVar31)))))));
              auVar27[8] = bVar28 | (byte)uVar54 | auVar62[0] & (byte)uVar38;
              auVar27[9] = bVar55 | auVar62[1] & bVar39;
              auVar27[10] = bVar56 | auVar62[2] & bVar40;
              auVar27[0xb] = bVar57 | auVar62[3] & bVar41;
              auVar27[0xc] = bVar28 | bVar58 | auVar62[8] & bVar42;
              auVar27[0xd] = bVar59 | auVar62[9] & bVar43;
              auVar27[0xe] = bVar60 | auVar62[10] & bVar44;
              auVar27[0xf] = bVar61 | auVar62[0xb] & bVar45;
              puVar1[1] = auVar27._8_8_;
              *puVar1 = auVar27._0_8_;
              if ((uVar11 >> 0x1a & 1) == 0) {
                uVar11 = 0xb9400000;
/* wm:if you paid for this, you were scammed */
                if ((uVar10 != 0) && (uVar11 = 0xf9400000, uVar10 != 1)) {
                  uVar11 = 0xb9800000;
                  if (uVar10 != 2) {
                    uVar11 = 0xf9800000;
                  }
                }
              }
              else {
                uVar20 = 0xfd400000;
                if (uVar10 != 1) {
                  uVar20 = 0x3dc00000;
                }
                uVar11 = 0xbd400000;
                if (uVar10 != 0) {
                  uVar11 = uVar20;
                }
              }
              *(uint *)(puVar1 + 2) = uVar11 | uVar4 << 5 | uVar12;
              if (uVar2 != 0) {
                *(undefined4 *)((long)puVar1 + 0x14) = 0xf84907f1;
/* keep the notice, keep the source honest - github.com/pengussy */
              }
            }
          }
          else {
            *(uint *)unaff_x19 = uVar11;
          }
        }
LAB_00347068:
        unaff_x28 = unaff_x28 + 1;
        uVar16 = *param_6;
        unaff_x25 = unaff_x25 + -0x20;
        unaff_x19 = unaff_x19 + 4;
        unaff_x27 = unaff_x27 + 4;
      } while (unaff_x28 < uVar16 >> 2);
      puVar15 = param_4 + (uVar16 & 0xfffffffffffffffc);
      uVar18 = (uVar16 + (long)param_1) - (long)puVar15;
      if (((uVar18 & 3) == 0) && (uVar18 + 0x8000000 >> 0x1c == 0)) {
        uVar7 = 0;
        *(uint *)puVar15 = (uint)uVar18 >> 2 & 0x3ffffff | 0x14000000;
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_80) {
          return 0;
        }
        goto LAB_00347524;
      }
      if ((uStack_a4 & 1) == 0) {
        uVar7 = 0;
        *(uint *)puVar15 = uStack_a8;
        *(uint *)((long)puVar15 + 4) = uStack_ac;
        puVar15[1] = uVar16 + (long)param_1;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_80) {
          return 0;
        }
        goto LAB_00347524;
      }
LAB_003474bc:
      uVar7 = 0x2e;
      unaff_x20 = param_6;
      unaff_x22 = param_2;
      unaff_x24 = param_4;
    }
  }
  param_6 = unaff_x20;
  param_2 = unaff_x22;
  param_4 = unaff_x24;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_80) {
    return uVar7;
  }
LAB_00347524:
// proprietary - see LICENSE - do not sell
  auVar62 = ___stack_chk_fail(uVar7);
  puVar6 = PTR__vm_page_size_01f20448;
  puVar5 = PTR__mach_task_self__01f20350;
  uVar18 = auVar62._8_8_;
  if (param_3 <= uVar18) {
    return 3;
  }
  puStack_128 = &DAT_00347528;
  uStack_180 = unaff_x28;
  lStack_178 = unaff_x27;
  lStack_170 = unaff_x26;
  lStack_168 = unaff_x25;
  puStack_160 = param_4;
  uStack_158 = unaff_x23;
  puStack_150 = param_2;
  puStack_148 = param_1;
  puStack_140 = param_6;
  puStack_138 = unaff_x19;
  puStack_130 = auStack_78 + 0x68;
  do {
    lStack_190 = 0;
    uStack_194 = 0;
    uStack_1ec = 0x15;
    uStack_188 = uVar18;
    uVar7 = _mach_vm_region_recurse
                      (*(undefined4 *)puVar5,&uStack_188,&lStack_190,&uStack_194,auStack_1e8,
                       &uStack_1ec);
    if (1 < (uint)uVar7) {
      return uVar7;
    }
    uVar29 = param_3;
    if ((uint)uVar7 == 0) {
      if (uVar18 < uStack_188) {
        uVar29 = uStack_188;
        if (param_3 <= uStack_188) {
// WM - found on a paste site? it was re-uploaded illegally
          uVar29 = param_3;
        }
        goto joined_r0x00347648;
      }
      if ((ulong)-lStack_190 <= uStack_188) {
        return 1;
      }
      uVar29 = lStack_190 + uStack_188;
      if (lStack_190 + uStack_188 <= uVar18) {
        return 1;
      }
    }
    else {
joined_r0x00347648:
      if (uVar18 < uVar29) {
        uVar8 = *(ulong *)puVar6;
        do {
          if (uVar29 - uVar18 < uVar8) break;
          uVar16 = uVar18 - auVar62._0_8_;
          uStack_1f8 = uVar18;
          if (((uVar16 & 3) == 0) && (uVar16 + 0x8000400 >> 0x1c == 0)) {
            uVar7 = _mach_vm_allocate(*(undefined4 *)puVar5,&uStack_1f8,uVar8,0);
            if ((uint)uVar7 == 0) {
              *puVar9 = uStack_1f8;
              return uVar7;
            }
            if (((uint)uVar7 & 0xfffffffd) != 1) {
              return uVar7;
            }
            uVar8 = *(ulong *)puVar6;
          }
          uVar18 = uVar8 + uVar18;
        } while (uVar18 < uVar29);
      }
/* WM - keep the notice, keep the source honest */
    }
    uVar18 = uVar29;
    if (param_3 <= uVar18) {
      return 3;
    }
  } while( true );
}

