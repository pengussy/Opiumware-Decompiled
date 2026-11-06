/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2d5840:0dd9b42bcc
   =========================================================================== */

void FUN_002d5840(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 (*pauVar1) [16];
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  int iVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong *puVar23;
  ulong *puVar24;
  long lVar25;
  byte bVar26;
  byte bVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  dword *unaff_x19;
  ulong uVar33;
  ulong unaff_x20;
  ulong uVar34;
// WM - watermarked copy - do not remove
  ulong *puVar35;
  ulong unaff_x23;
  int iVar36;
  uint uVar37;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  long lVar38;
  byte bVar39;
  ushort uVar40;
  undefined4 uVar41;
  undefined6 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [14];
  undefined1 auVar46 [16];
  ushort uVar47;
  undefined4 uVar48;
  undefined6 uVar49;
  ushort uVar50;
  undefined4 uVar51;
  undefined6 uVar52;
  undefined1 auVar53 [16];
// WM - keep the notice, keep the source honest
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint auStack_4d0 [64];
  long lStack_3d0;
  ulong *puStack_3c0;
  ulong *puStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong *puStack_390;
  ulong *puStack_388;
  ulong uStack_380;
  dword *pdStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  ulong *puStack_358;
  ulong *puStack_350;
  ulong *puStack_348;
  ulong *puStack_340;
  int iStack_334;
  ulong *puStack_330;
  ulong *puStack_328;
/* WM - origin: github.com/pengussy */
  uint auStack_320 [64];
  long lStack_220;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong *puStack_1e0;
  ulong *puStack_1d8;
  ulong uStack_1d0;
  dword *pdStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  int iStack_184;
  ulong *puStack_180;
  ulong *puStack_178;
  uint auStack_170 [64];
  long lStack_70;
  undefined1 auStack_68 [8];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  
  puStack_180 = param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar24 = *(ulong **)(param_1 + 0x70);
  puVar23 = *(ulong **)(param_1 + 0x38);
  iVar20 = *(int *)(param_1 + 0x34);
  puVar35 = *(ulong **)(param_1 + 8);
  puVar11 = *(ulong **)(param_1 + 0x10);
  uVar29 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar30 = *(uint *)(param_1 + 0x18);
  uVar18 = (ulong)uVar30;
  uVar17 = (long)param_2 - (long)puVar35;
  uVar16 = (uint)uVar17;
  uVar22 = uVar16 - uVar29;
  if (uVar16 - *(uint *)(param_1 + 0x1c) <= uVar29 || *(int *)(param_1 + 0x28) != 0) {
    uVar22 = *(uint *)(param_1 + 0x1c);
  }
  uVar29 = *(uint *)(param_1 + 0x10c);
  if (3 < uVar29) {
    uVar29 = 4;
  }
  uVar32 = *(ulong *)(param_1 + 0x60);
  puStack_178 = puVar35;
  if (*(int *)(param_1 + 300) == 0) {
    lVar7 = param_1 + 0x40;
    uVar13 = *(uint *)(param_1 + 0x2c);
    uVar33 = (ulong)uVar13;
    param_4 = puVar24;
    unaff_x27 = puVar23;
    if (0x180 < uVar16 - uVar13) {
      if (uVar13 < 0xffffffa0) {
        uVar28 = uVar33 + 0x60;
// reversing this took months of machine time
        do {
          uVar15 = (*(long *)((long)puVar35 + uVar33 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar34 = uVar15 >> 4 & 0xffffff0;
          Hint_Prefetch((long)puVar24 + uVar34 * 4,0,0,0);
          Hint_Prefetch((long)puVar23 + uVar34,0,0,0);
          uVar37 = *(uint *)(lVar7 + (uVar33 & 7) * 4);
          *(int *)(lVar7 + (uVar33 & 7) * 4) = (int)uVar15;
          uVar15 = (ulong)(uVar37 >> 4) & 0xffffff0;
          pbVar2 = (byte *)((long)puVar23 + uVar15);
          unaff_x23 = (ulong)(*pbVar2 - 1 & 0xf);
          uVar13 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar13 = 0;
          }
          unaff_x20 = uVar13 + unaff_x23;
          *pbVar2 = (byte)unaff_x20;
          pbVar2[unaff_x20] = (byte)uVar37;
          *(int *)((long)puVar24 + unaff_x20 * 4 + uVar15 * 4) = (int)uVar33;
          uVar33 = uVar33 + 1;
        } while (uVar28 != uVar33);
        param_4 = *(ulong **)(param_1 + 0x70);
        unaff_x27 = *(ulong **)(param_1 + 0x38);
      }
      uVar13 = uVar16 - 0x20;
      uVar33 = (ulong)uVar13;
      iVar12 = (int)((long)param_2 + 1U) - (int)((long)puVar35 + uVar33);
      unaff_x19 = &MACH_HEADER.cpusubtype;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      iVar36 = 8;
      if (iVar12 + 1U < 8) {
        iVar36 = iVar12 + 1;
      }
      iVar12 = 0;
      if ((long)puVar35 + uVar33 <= (long)param_2 + 1U) {
        iVar12 = iVar36;
      }
      if (uVar13 < iVar12 + uVar13) {
        iVar36 = *(int *)(param_1 + 0x34);
        uVar15 = *(ulong *)(param_1 + 0x60);
        uVar28 = uVar33;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puVar35 + uVar28) * -0x30e4432340650000 ^ uVar15)
                               >> ((ulong)(0x38 - iVar36) & 0x3f));
          uVar34 = (ulong)unaff_x19 >> 4 & 0xffffff0;
          unaff_x23 = uVar34 * 4;
          Hint_Prefetch((long)param_4 + unaff_x23,0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar34,0,0,0);
          unaff_x20 = uVar28 & 7;
          *(int *)(lVar7 + unaff_x20 * 4) = (int)unaff_x19;
/* WM - watermarked copy - do not remove */
          uVar28 = uVar28 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    if (uVar13 < uVar16) {
      lVar25 = *(long *)(param_1 + 8);
      iVar36 = *(int *)(param_1 + 0x34);
      do {
        uVar28 = (*(long *)(lVar25 + 8 + uVar33) * -0x30e4432340650000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar15 = uVar28 >> 4 & 0xffffff0;
        Hint_Prefetch((long)param_4 + uVar15 * 4,0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar15,0,0,0);
        uVar37 = *(uint *)(lVar7 + (uVar33 & 7) * 4);
        unaff_x23 = (ulong)uVar37;
        *(int *)(lVar7 + (uVar33 & 7) * 4) = (int)uVar28;
        uVar28 = (ulong)(uVar37 >> 4) & 0xffffff0;
        unaff_x20 = (long)param_4 + uVar28 * 4;
        unaff_x19 = (dword *)((long)unaff_x27 + uVar28);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0xf);
        uVar13 = 0xf;
        if (((byte)*unaff_x19 & 0xf) != 1) {
          uVar13 = 0;
        }
        lVar38 = uVar13 + unaff_x26;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        *(byte *)unaff_x19 = (byte)lVar38;
        *(byte *)((long)unaff_x19 + lVar38) = (byte)uVar37;
        *(int *)(unaff_x20 + lVar38 * 4) = (int)uVar33;
        uVar33 = uVar33 + 1;
      } while (uVar33 < (uVar17 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar16;
    uVar33 = (*(long *)((long)puVar35 + (uVar17 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar32)
             >> ((ulong)(0x38 - iVar20) & 0x3f);
    uVar32 = uVar33 >> 4 & 0xffffff0;
    Hint_Prefetch((long)puVar24 + uVar32 * 4,0,0,0);
    Hint_Prefetch((long)puVar23 + uVar32,0,0,0);
    uVar13 = *(uint *)(lVar7 + (uVar17 & 7) * 4);
    *(int *)(lVar7 + (uVar17 & 7) * 4) = (int)uVar33;
  }
  else {
    uVar13 = (uint)((*param_2 * -0x30e4432340650000 ^ uVar32) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar16;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar13;
  uVar28 = (ulong)(uVar13 >> 4) & 0xffffff0;
  pauVar1 = (undefined1 (*) [16])((long)puVar23 + uVar28);
  bVar27 = (*pauVar1)[0];
  auVar55 = *pauVar1;
  bVar26 = (byte)uVar13;
  bVar39 = auVar55[0];
  uVar40 = CONCAT11(-(auVar55[9] == bVar26),-(auVar55[8] == bVar26));
  uVar41 = CONCAT13(-(auVar55[0xb] == bVar26),CONCAT12(-(auVar55[10] == bVar26),uVar40));
  uVar42 = CONCAT15(-(auVar55[0xd] == bVar26),CONCAT14(-(auVar55[0xc] == bVar26),uVar41));
  uVar32 = CONCAT17((char)(CONCAT17(-(auVar55[0xf] == bVar26),
// keep the notice, keep the source honest
                                    CONCAT16(-(auVar55[0xe] == bVar26),uVar42)) >> 0x34),
                    CONCAT16((char)((uint6)uVar42 >> 0x24),
                             CONCAT15((char)((uint)uVar41 >> 0x14),
                                      CONCAT14((char)(uVar40 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar55[7] == bVar26),
                                                                        -(auVar55[6] == bVar26)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar55[
                                                  5] == bVar26),-(auVar55[4] == bVar26)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar55[3] == bVar26),
                                                                           -(auVar55[2] == bVar26))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar55[1] == bVar26),
                                                                           -(bVar39 == bVar26)) >> 4
                                                                 ))))))));
  uVar33 = (ulong)bVar27 & 0xf;
  uVar17 = 0;
  uVar32 = (uVar32 >> uVar33 * 4 | uVar32 << uVar33 * -4 + 0x40) & 0x8888888888888888;
  if (uVar32 != 0) {
    iVar20 = 1 << (ulong)(uVar29 & 0x1f);
    do {
      uVar33 = (uVar32 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
/*  found on a paste site? it was re-uploaded illegally  */
      uVar29 = (int)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + (bVar27 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar29 != 0) {
        uVar29 = *(uint *)((long)puVar24 + (ulong)uVar29 * 4 + uVar28 * 4);
        if (uVar29 < uVar22) break;
        param_4 = puVar11;
        if (uVar30 <= uVar29) {
          param_4 = puVar35;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar29,0,0,0);
        auStack_170[uVar17] = uVar29;
        uVar17 = uVar17 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar32 = uVar32 - 1 & uVar32;
      if ((uVar32 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
  uVar22 = 0xf;
  if ((bVar39 & 0xf) != 1) {
    uVar22 = 0;
  }
  lVar7 = (ulong)uVar22 + (ulong)(bVar39 - 1 & 0xf);
  (*pauVar1)[0] = (char)lVar7;
  (*pauVar1)[lVar7] = bVar26;
  iVar20 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar20 + 1;
  *(int *)((long)puVar24 + lVar7 * 4 + uVar28 * 4) = iVar20;
  if (uVar17 == 0) {
    uVar32 = 3;
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)param_2 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_198 = (ulong *)((long)param_3 + -1);
    puStack_190 = (ulong *)((long)param_3 + -3);
    iStack_184 = uVar16 + 3;
/* stripping the watermark breaks the license - github.com/pengussy */
    puStack_1a8 = param_2 + 1;
    puStack_1a0 = puVar35 + 1;
    uVar33 = 3;
    do {
      uVar22 = auStack_170[unaff_x26];
      unaff_x23 = (ulong)uVar22;
      if (uVar22 < uVar30) {
        if (*(int *)((long)puVar11 + unaff_x23) == (int)*param_2) {
          param_4 = (ulong *)((long)puVar11 + uVar18);
          lVar7 = func_0x002ad924((int *)((long)param_2 + 4),(int *)((long)puVar11 + unaff_x23) + 1,
                                  param_3,param_4,(long)puVar35 + uVar18);
          uVar32 = lVar7 + 4;
          puVar35 = puStack_178;
          unaff_x27 = puVar11;
          goto joined_r0x002d5c98;
        }
      }
      else {
        puVar23 = (ulong *)((long)puVar35 + unaff_x23);
        if (*(int *)((long)puVar23 + (uVar33 - 3)) == *(int *)((long)unaff_x19 + uVar33)) {
          if (param_2 < unaff_x28) {
            if (*puVar23 == *param_2) {
              lVar7 = 0;
              puVar23 = (ulong *)((long)puStack_1a0 + unaff_x23);
              puVar24 = puStack_1a8;
              do {
                if (unaff_x28 <= puVar24) goto LAB_002d5bf0;
                uVar28 = *puVar23;
/* if you paid for this, you were scammed - github.com/pengussy */
                uVar32 = *puVar24;
                lVar7 = lVar7 + 8;
                puVar23 = puVar23 + 1;
                puVar24 = puVar24 + 1;
              } while (uVar28 == uVar32);
              uVar32 = uVar32 ^ uVar28;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar32 = lVar7 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
            }
            else {
              uVar32 = *param_2 ^ *puVar23;
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
            }
          }
          else {
            puVar24 = param_2;
LAB_002d5bf0:
            if (puVar24 < puStack_190) {
              if ((int)*puVar23 == (int)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 4);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                puVar23 = (ulong *)((long)puVar23 + 4);
              }
            }
            if (puVar24 < puStack_198) {
              if ((short)*puVar23 == (short)*puVar24) {
                puVar23 = (ulong *)((long)puVar23 + 2);
                puVar24 = (ulong *)((long)puVar24 + 2);
              }
            }
            if (puVar24 < param_3) {
              if ((char)*puVar23 == (char)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
            }
            uVar32 = (long)puVar24 - (long)param_2;
          }
joined_r0x002d5c98:
          if (uVar33 < uVar32) {
            *puStack_180 = (ulong)(iStack_184 - uVar22);
            uVar33 = uVar32;
            unaff_x20 = uVar32;
            if ((ulong *)((long)param_2 + uVar32) == param_3) break;
          }
        }
      }
      uVar32 = uVar33;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = uVar32;
      uVar33 = uVar32;
    } while (unaff_x26 != uVar17);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    return;
  }
  auVar55 = ___stack_chk_fail(uVar32);
  puVar11 = auVar55._8_8_;
  lVar7 = auVar55._0_8_;
  puStack_210 = unaff_x28;
  puStack_208 = unaff_x27;
  uStack_200 = unaff_x26;
  uStack_1f8 = uVar17;
  uStack_1f0 = uVar18;
  uStack_1e8 = unaff_x23;
  puStack_1e0 = puVar35;
  puStack_1d8 = param_2;
  uStack_1d0 = unaff_x20;
  pdStack_1c8 = unaff_x19;
  puStack_1c0 = auStack_68 + 0x58;
  pcStack_1b8 = FUN_002d5e3c;
  puStack_330 = param_4;
  lStack_220 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar24 = *(ulong **)(lVar7 + 0x70);
  puVar23 = *(ulong **)(lVar7 + 0x38);
  iVar20 = *(int *)(lVar7 + 0x34);
  puStack_390 = *(ulong **)(lVar7 + 8);
  puVar35 = *(ulong **)(lVar7 + 0x10);
  uVar29 = 1 << (ulong)(*(uint *)(lVar7 + 0x100) & 0x1f);
  uVar30 = *(uint *)(lVar7 + 0x18);
  uVar18 = (long)puVar11 - (long)puStack_390;
  uVar16 = (uint)uVar18;
  uVar22 = uVar16 - uVar29;
  if (uVar16 - *(uint *)(lVar7 + 0x1c) <= uVar29 || *(int *)(lVar7 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar7 + 0x1c);
  }
  uVar29 = *(uint *)(lVar7 + 0x10c);
  if (4 < uVar29) {
    uVar29 = 5;
  }
/* wm:reversing this took months of machine time */
  uVar17 = *(ulong *)(lVar7 + 0x60);
  puStack_328 = puStack_390;
  if (*(int *)(lVar7 + 300) == 0) {
    lVar25 = lVar7 + 0x40;
    uVar13 = *(uint *)(lVar7 + 0x2c);
    uVar32 = (ulong)uVar13;
    param_4 = puVar24;
    unaff_x27 = puVar23;
    if (0x180 < uVar16 - uVar13) {
      if (uVar13 < 0xffffffa0) {
        uVar33 = uVar32 + 0x60;
        do {
          uVar28 = (*(long *)((long)puStack_390 + uVar32 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar7 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar15 = uVar28 >> 3 & 0x1fffffe0;
          lVar38 = (long)puVar24 + uVar15 * 4;
          Hint_Prefetch(lVar38,0,0,0);
          Hint_Prefetch(lVar38 + 0x40,0,0,0);
          Hint_Prefetch((long)puVar23 + uVar15,0,0,0);
          uVar37 = *(uint *)(lVar25 + (uVar32 & 7) * 4);
          *(int *)(lVar25 + (uVar32 & 7) * 4) = (int)uVar28;
          uVar28 = (ulong)(uVar37 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)((long)puVar23 + uVar28);
          unaff_x23 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar13 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar13 = 0;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          }
          unaff_x20 = uVar13 + unaff_x23;
          *pbVar2 = (byte)unaff_x20;
          pbVar2[unaff_x20] = (byte)uVar37;
          *(int *)((long)puVar24 + unaff_x20 * 4 + uVar28 * 4) = (int)uVar32;
          uVar32 = uVar32 + 1;
        } while (uVar33 != uVar32);
        param_4 = *(ulong **)(lVar7 + 0x70);
        unaff_x27 = *(ulong **)(lVar7 + 0x38);
      }
      uVar13 = uVar16 - 0x20;
      uVar32 = (ulong)uVar13;
      iVar12 = (int)((long)puVar11 + 1U) - (int)((long)puStack_390 + uVar32);
      unaff_x19 = &MACH_HEADER.cpusubtype;
      iVar36 = 8;
      if (iVar12 + 1U < 8) {
        iVar36 = iVar12 + 1;
      }
      iVar12 = 0;
      if ((long)puStack_390 + uVar32 <= (long)puVar11 + 1U) {
        iVar12 = iVar36;
      }
      if (uVar13 < iVar12 + uVar13) {
        iVar36 = *(int *)(lVar7 + 0x34);
        uVar28 = *(ulong *)(lVar7 + 0x60);
        uVar33 = uVar32;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puStack_390 + uVar33) * -0x30e4432340650000 ^
                                uVar28) >> ((ulong)(0x38 - iVar36) & 0x3f));
          uVar15 = (ulong)unaff_x19 >> 3 & 0x1fffffe0;
          unaff_x23 = (long)param_4 + uVar15 * 4;
/* no support for modified copies */
          Hint_Prefetch(unaff_x23,0,0,0);
          Hint_Prefetch(unaff_x23 + 0x40,0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar15,0,0,0);
          unaff_x20 = uVar33 & 7;
          *(int *)(lVar25 + unaff_x20 * 4) = (int)unaff_x19;
          uVar33 = uVar33 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    if (uVar13 < uVar16) {
      lVar38 = *(long *)(lVar7 + 8);
      iVar36 = *(int *)(lVar7 + 0x34);
      do {
        uVar33 = (*(long *)(lVar38 + 8 + uVar32) * -0x30e4432340650000 ^ *(ulong *)(lVar7 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar28 = uVar33 >> 3 & 0x1fffffe0;
        lVar31 = (long)param_4 + uVar28 * 4;
        Hint_Prefetch(lVar31,0,0,0);
        Hint_Prefetch(lVar31 + 0x40,0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar28,0,0,0);
        uVar37 = *(uint *)(lVar25 + (uVar32 & 7) * 4);
        unaff_x23 = (ulong)uVar37;
        *(int *)(lVar25 + (uVar32 & 7) * 4) = (int)uVar33;
        uVar33 = (ulong)(uVar37 >> 3) & 0x1fffffe0;
        unaff_x20 = (long)param_4 + uVar33 * 4;
        unaff_x19 = (dword *)((long)unaff_x27 + uVar33);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0x1f);
        uVar13 = 0x1f;
        if (((byte)*unaff_x19 & 0x1f) != 1) {
          uVar13 = 0;
/* wm:donate: donate/README.md */
        }
        lVar31 = uVar13 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar31;
        *(byte *)((long)unaff_x19 + lVar31) = (byte)uVar37;
        *(int *)(unaff_x20 + lVar31 * 4) = (int)uVar32;
        uVar32 = uVar32 + 1;
      } while (uVar32 < (uVar18 & 0xffffffff));
    }
    *(uint *)(lVar7 + 0x2c) = uVar16;
    uVar32 = (*(long *)((long)puStack_390 + (uVar18 & 0xffffffff) + 8) * -0x30e4432340650000 ^
             uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f);
    uVar17 = uVar32 >> 3 & 0x1fffffe0;
    lVar38 = (long)puVar24 + uVar17 * 4;
    Hint_Prefetch(lVar38,0,0,0);
    Hint_Prefetch(lVar38 + 0x40,0,0,0);
    Hint_Prefetch((long)puVar23 + uVar17,0,0,0);
    uVar13 = *(uint *)(lVar25 + (uVar18 & 7) * 4);
    *(int *)(lVar25 + (uVar18 & 7) * 4) = (int)uVar32;
  }
  else {
    uVar13 = (uint)((*puVar11 * -0x30e4432340650000 ^ uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(lVar7 + 0x2c) = uVar16;
  }
  *(uint *)(lVar7 + 0x68) = *(int *)(lVar7 + 0x68) + uVar13;
  uVar32 = (ulong)(uVar13 >> 3) & 0x1fffffe0;
  pbVar2 = (byte *)((long)puVar23 + uVar32);
  bVar27 = *pbVar2;
  bVar26 = (byte)uVar13;
  uVar47 = CONCAT11(-(bVar26 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                    -(bVar26 == (byte)*(undefined2 *)pbVar2));
  uVar48 = CONCAT13(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar47));
  uVar49 = CONCAT15(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar48));
  uVar50 = CONCAT11(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar51 = CONCAT13(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar50));
  uVar52 = CONCAT15(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar51));
  uVar40 = CONCAT11(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar41 = CONCAT13(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar40));
  uVar42 = CONCAT15(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar41));
  uVar43 = CONCAT17(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar42));
  auVar44._0_10_ =
       CONCAT19(-(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar43));
  auVar44[10] = -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar44[0xb] = -(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar45[0xc] = -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar45._0_12_ = auVar44;
  auVar45[0xd] = -(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
// WM - stripping the watermark breaks the license
  auVar55[0xe] = -(bVar26 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar55._0_14_ = auVar45;
  auVar55[0xf] = -(bVar26 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar17 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar26 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar26 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar52)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar52 >> 0x26),
                                      CONCAT15((char)((uint)uVar51 >> 0x16),
                                               CONCAT14((char)(uVar50 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar26 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar26 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar49)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar49 >> 0x26),
                                                           CONCAT11((char)((uint)uVar48 >> 0x16),
                                                                    (char)(uVar47 >> 6)))))))),
                    CONCAT17((char)(auVar55._14_2_ >> 6),
                             CONCAT16((char)(auVar45._12_2_ >> 6),
                                      CONCAT15((char)(auVar44._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar44._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar43 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar42 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar41 >> 0x16),(char)(uVar40 >> 6)))))))),4,1);
  uVar18 = 0;
  uVar17 = (uVar17 >> ((ulong)bVar27 & 0x1f) * 2 | uVar17 << ((ulong)bVar27 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar17 != 0) {
    iVar20 = 1 << (ulong)(uVar29 & 0x1f);
    do {
      uVar33 = (uVar17 << 1 & 0xcccccccccccccccc) >> 2 | (uVar17 << 1 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
/* WM - keep the notice, keep the source honest */
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + (bVar27 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar29 != 0) {
        uVar29 = *(uint *)((long)puVar24 + (ulong)uVar29 * 4 + uVar32 * 4);
        if (uVar29 < uVar22) break;
        param_4 = puVar35;
        if (uVar30 <= uVar29) {
          param_4 = puStack_390;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar29,0,0,0);
        auStack_320[uVar18] = uVar29;
        uVar18 = uVar18 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar17 = uVar17 - 1 & uVar17;
      if ((uVar17 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
  uVar22 = 0x1f;
  if ((bVar27 & 0x1f) != 1) {
    uVar22 = 0;
/* reversing this took months of machine time */
  }
  lVar25 = (ulong)uVar22 + (ulong)(bVar27 - 1 & 0x1f);
  *pbVar2 = (byte)lVar25;
  pbVar2[lVar25] = bVar26;
  iVar20 = *(int *)(lVar7 + 0x2c);
  *(int *)(lVar7 + 0x2c) = iVar20 + 1;
  *(int *)((long)puVar24 + lVar25 * 4 + uVar32 * 4) = iVar20;
  if (uVar18 == 0) {
    uVar17 = 3;
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)puVar11 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_348 = (ulong *)((long)param_3 + -1);
    puStack_340 = (ulong *)((long)param_3 + -3);
    iStack_334 = uVar16 + 3;
    puStack_358 = puVar11 + 1;
    puStack_350 = puStack_390 + 1;
    uVar32 = 3;
    do {
      uVar22 = auStack_320[unaff_x26];
      unaff_x23 = (ulong)uVar22;
      if (uVar22 < uVar30) {
        if (*(int *)((long)puVar35 + unaff_x23) == (int)*puVar11) {
          param_4 = (ulong *)((long)puVar35 + (ulong)uVar30);
          lVar7 = func_0x002ad924((int *)((long)puVar11 + 4),(int *)((long)puVar35 + unaff_x23) + 1)
          ;
          uVar17 = lVar7 + 4;
          puStack_390 = puStack_328;
          unaff_x27 = puVar35;
          goto joined_r0x002d62a4;
        }
      }
      else {
        puVar23 = (ulong *)((long)puStack_390 + unaff_x23);
        if (*(int *)((long)puVar23 + (uVar32 - 3)) == *(int *)((long)unaff_x19 + uVar32)) {
/*  watermarked copy - do not remove  */
          if (puVar11 < unaff_x28) {
            if (*puVar23 == *puVar11) {
              lVar7 = 0;
              puVar23 = (ulong *)((long)puStack_350 + unaff_x23);
              puVar24 = puStack_358;
              do {
                if (unaff_x28 <= puVar24) goto LAB_002d61fc;
                uVar33 = *puVar23;
                uVar17 = *puVar24;
                lVar7 = lVar7 + 8;
                puVar23 = puVar23 + 1;
                puVar24 = puVar24 + 1;
              } while (uVar33 == uVar17);
              uVar17 = uVar17 ^ uVar33;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = lVar7 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
            }
            else {
              uVar17 = *puVar11 ^ *puVar23;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
            }
          }
          else {
// origin: github.com/pengussy
            puVar24 = puVar11;
LAB_002d61fc:
            if (puVar24 < puStack_340) {
              if ((int)*puVar23 == (int)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 4);
                puVar23 = (ulong *)((long)puVar23 + 4);
              }
            }
            if (puVar24 < puStack_348) {
              if ((short)*puVar23 == (short)*puVar24) {
                puVar23 = (ulong *)((long)puVar23 + 2);
                puVar24 = (ulong *)((long)puVar24 + 2);
              }
            }
            if (puVar24 < param_3) {
              if ((char)*puVar23 == (char)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
            }
            uVar17 = (long)puVar24 - (long)puVar11;
          }
joined_r0x002d62a4:
          if (uVar32 < uVar17) {
            *puStack_330 = (ulong)(iStack_334 - uVar22);
            uVar32 = uVar17;
            unaff_x20 = uVar17;
            if ((ulong *)((long)puVar11 + uVar17) == param_3) break;
          }
        }
      }
// unlicensed copy if this notice is missing
      uVar17 = uVar32;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = uVar17;
      uVar32 = uVar17;
    } while (unaff_x26 != uVar18);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_220) {
    return;
  }
  auVar55 = ___stack_chk_fail(uVar17);
  puVar23 = auVar55._8_8_;
  lVar7 = auVar55._0_8_;
  puStack_3c0 = unaff_x28;
  puStack_3b8 = unaff_x27;
  uStack_3b0 = unaff_x26;
  uStack_3a8 = uVar18;
  uStack_3a0 = (ulong)uVar30;
  uStack_398 = unaff_x23;
/* chat: discord.gg/sdkhDjTex */
  puStack_388 = puVar11;
  uStack_380 = unaff_x20;
  pdStack_378 = unaff_x19;
  ppuStack_370 = &puStack_1c0;
  pcStack_368 = FUN_002d6450;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar24 = *(ulong **)(lVar7 + 0x70);
  lVar25 = *(long *)(lVar7 + 0x38);
  iVar20 = *(int *)(lVar7 + 0x34);
  puVar35 = *(ulong **)(lVar7 + 8);
  puVar11 = *(ulong **)(lVar7 + 0x10);
  uVar29 = 1 << (ulong)(*(uint *)(lVar7 + 0x100) & 0x1f);
  uVar30 = *(uint *)(lVar7 + 0x18);
  uVar18 = (long)puVar23 - (long)puVar35;
  uVar16 = (uint)uVar18;
  uVar22 = uVar16 - uVar29;
  if (uVar16 - *(uint *)(lVar7 + 0x1c) <= uVar29 || *(int *)(lVar7 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar7 + 0x1c);
  }
  uVar29 = *(uint *)(lVar7 + 0x10c);
/* wm:more drops soon - github.com/pengussy */
  if (5 < uVar29) {
    uVar29 = 6;
  }
  uVar17 = *(ulong *)(lVar7 + 0x60);
  if (*(int *)(lVar7 + 300) == 0) {
    lVar38 = lVar7 + 0x40;
    uVar13 = *(uint *)(lVar7 + 0x2c);
    uVar32 = (ulong)uVar13;
    puVar9 = puVar24;
    lVar31 = lVar25;
    if (0x180 < uVar16 - uVar13) {
      if (uVar13 < 0xffffffa0) {
        uVar33 = uVar32 + 0x60;
        do {
          uVar28 = (*(long *)((long)puVar35 + uVar32 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar7 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar15 = uVar28 >> 2 & 0x3fffffc0;
          lVar31 = (long)puVar24 + uVar15 * 4;
          Hint_Prefetch(lVar31,0,0,0);
          Hint_Prefetch(lVar31 + 0x40,0,0,0);
/* origin: github.com/pengussy */
          lVar31 = lVar25 + uVar15;
          Hint_Prefetch(lVar31,0,0,0);
          Hint_Prefetch(lVar31 + 0x20,0,0,0);
          uVar37 = *(uint *)(lVar38 + (uVar32 & 7) * 4);
          *(int *)(lVar38 + (uVar32 & 7) * 4) = (int)uVar28;
          uVar28 = (ulong)(uVar37 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar25 + uVar28);
          uVar13 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar13 = 0;
          }
          lVar31 = (ulong)uVar13 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar31;
          pbVar2[lVar31] = (byte)uVar37;
          *(int *)((long)puVar24 + lVar31 * 4 + uVar28 * 4) = (int)uVar32;
          uVar32 = uVar32 + 1;
        } while (uVar33 != uVar32);
        puVar9 = *(ulong **)(lVar7 + 0x70);
        lVar31 = *(long *)(lVar7 + 0x38);
      }
      uVar13 = uVar16 - 0x20;
      uVar32 = (ulong)uVar13;
      iVar12 = (int)((long)puVar23 + 1U) - (int)((long)puVar35 + uVar32);
      iVar36 = 8;
      if (iVar12 + 1U < 8) {
        iVar36 = iVar12 + 1;
      }
      iVar12 = 0;
      if ((long)puVar35 + uVar32 <= (long)puVar23 + 1U) {
        iVar12 = iVar36;
      }
      if (uVar13 < iVar12 + uVar13) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        iVar36 = *(int *)(lVar7 + 0x34);
        uVar28 = *(ulong *)(lVar7 + 0x60);
        uVar33 = uVar32;
        do {
          uVar15 = (*(long *)((long)puVar35 + uVar33) * -0x30e4432340650000 ^ uVar28) >>
                   ((ulong)(0x38 - iVar36) & 0x3f);
          uVar34 = uVar15 >> 2 & 0x3fffffc0;
          lVar10 = (long)puVar9 + uVar34 * 4;
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x40,0,0,0);
          lVar10 = lVar31 + uVar34;
          Hint_Prefetch(lVar10,0,0,0);
          Hint_Prefetch(lVar10 + 0x20,0,0,0);
          *(int *)(lVar38 + (uVar33 & 7) * 4) = (int)uVar15;
          uVar33 = uVar33 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
/*  proprietary - see LICENSE - do not sell  */
      }
    }
    if (uVar13 < uVar16) {
      lVar10 = *(long *)(lVar7 + 8);
      iVar36 = *(int *)(lVar7 + 0x34);
      do {
        uVar33 = (*(long *)(lVar10 + 8 + uVar32) * -0x30e4432340650000 ^ *(ulong *)(lVar7 + 0x60))
                 >> ((ulong)(0x38 - iVar36) & 0x3f);
        uVar28 = uVar33 >> 2 & 0x3fffffc0;
        lVar3 = (long)puVar9 + uVar28 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar31 + uVar28;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar37 = *(uint *)(lVar38 + (uVar32 & 7) * 4);
        *(int *)(lVar38 + (uVar32 & 7) * 4) = (int)uVar33;
        uVar33 = (ulong)(uVar37 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar31 + uVar33);
        uVar13 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar13 = 0;
        }
        lVar3 = (ulong)uVar13 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar37;
        *(int *)((long)puVar9 + lVar3 * 4 + uVar33 * 4) = (int)uVar32;
        uVar32 = uVar32 + 1;
      } while (uVar32 < (uVar18 & 0xffffffff));
    }
// WM - unlicensed copy if this notice is missing
    *(uint *)(lVar7 + 0x2c) = uVar16;
    puVar8 = *(ulong **)((long)puVar35 + (uVar18 & 0xffffffff) + 8);
    uVar32 = ((long)puVar8 * -0x30e4432340650000 ^ uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f);
    uVar17 = uVar32 >> 2 & 0x3fffffc0;
    lVar31 = (long)puVar24 + uVar17 * 4;
    Hint_Prefetch(lVar31,0,0,0);
    Hint_Prefetch(lVar31 + 0x40,0,0,0);
    lVar31 = lVar25 + uVar17;
    Hint_Prefetch(lVar31,0,0,0);
    Hint_Prefetch(lVar31 + 0x20,0,0,0);
    uVar13 = *(uint *)(lVar38 + (uVar18 & 7) * 4);
    *(int *)(lVar38 + (uVar18 & 7) * 4) = (int)uVar32;
  }
  else {
    uVar13 = (uint)((*puVar23 * -0x30e4432340650000 ^ uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(lVar7 + 0x2c) = uVar16;
    puVar8 = puVar23;
    puVar9 = param_4;
  }
  *(uint *)(lVar7 + 0x68) = *(int *)(lVar7 + 0x68) + uVar13;
  uVar18 = (ulong)(uVar13 >> 2) & 0x3fffffc0;
  pbVar2 = (byte *)(lVar25 + uVar18);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  bVar27 = (byte)uVar13;
  auVar53[0] = -(pbVar2[1] == bVar27);
  auVar53[1] = -(pbVar2[5] == bVar27);
  auVar53[2] = -(pbVar2[9] == bVar27);
  auVar53[3] = -(pbVar2[0xd] == bVar27);
  auVar53[4] = -(pbVar2[0x11] == bVar27);
  auVar53[5] = -(pbVar2[0x15] == bVar27);
  auVar53[6] = -(pbVar2[0x19] == bVar27);
  auVar53[7] = -(pbVar2[0x1d] == bVar27);
  auVar53[8] = -(pbVar2[0x21] == bVar27);
  auVar53[9] = -(pbVar2[0x25] == bVar27);
  auVar53[10] = -(pbVar2[0x29] == bVar27);
  auVar53[0xb] = -(pbVar2[0x2d] == bVar27);
  auVar53[0xc] = -(pbVar2[0x31] == bVar27);
  auVar53[0xd] = -(pbVar2[0x35] == bVar27);
  auVar53[0xe] = -(pbVar2[0x39] == bVar27);
  auVar53[0xf] = -(pbVar2[0x3d] == bVar27);
  auVar46[0] = -(pbVar2[3] == bVar27);
/* origin: github.com/pengussy - github.com/pengussy */
  auVar46[1] = -(pbVar2[7] == bVar27);
  auVar46[2] = -(pbVar2[0xb] == bVar27);
  auVar46[3] = -(pbVar2[0xf] == bVar27);
  auVar46[4] = -(pbVar2[0x13] == bVar27);
  auVar46[5] = -(pbVar2[0x17] == bVar27);
  auVar46[6] = -(pbVar2[0x1b] == bVar27);
  auVar46[7] = -(pbVar2[0x1f] == bVar27);
  auVar46[8] = -(pbVar2[0x23] == bVar27);
  auVar46[9] = -(pbVar2[0x27] == bVar27);
  auVar46[10] = -(pbVar2[0x2b] == bVar27);
  auVar46[0xb] = -(pbVar2[0x2f] == bVar27);
  auVar46[0xc] = -(pbVar2[0x33] == bVar27);
  auVar46[0xd] = -(pbVar2[0x37] == bVar27);
  auVar46[0xe] = -(pbVar2[0x3b] == bVar27);
  auVar46[0xf] = -(pbVar2[0x3f] == bVar27);
  auVar54[1] = -(pbVar2[4] == bVar27);
  auVar54[0] = -(*pbVar2 == bVar27);
  auVar54[2] = -(pbVar2[8] == bVar27);
  auVar54[3] = -(pbVar2[0xc] == bVar27);
  auVar54[4] = -(pbVar2[0x10] == bVar27);
  auVar54[5] = -(pbVar2[0x14] == bVar27);
  auVar54[6] = -(pbVar2[0x18] == bVar27);
  auVar54[7] = -(pbVar2[0x1c] == bVar27);
  auVar54[8] = -(pbVar2[0x20] == bVar27);
  auVar54[9] = -(pbVar2[0x24] == bVar27);
  auVar54[10] = -(pbVar2[0x28] == bVar27);
  auVar54[0xb] = -(pbVar2[0x2c] == bVar27);
  auVar54[0xc] = -(pbVar2[0x30] == bVar27);
  auVar54[0xd] = -(pbVar2[0x34] == bVar27);
  auVar54[0xe] = -(pbVar2[0x38] == bVar27);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  auVar54[0xf] = -(pbVar2[0x3c] == bVar27);
  auVar54 = NEON_sri(auVar53,auVar54,1,1);
  auVar6[1] = -(pbVar2[6] == bVar27);
  auVar6[0] = -(pbVar2[2] == bVar27);
  auVar6[2] = -(pbVar2[10] == bVar27);
  auVar6[3] = -(pbVar2[0xe] == bVar27);
  auVar6[4] = -(pbVar2[0x12] == bVar27);
  auVar6[5] = -(pbVar2[0x16] == bVar27);
  auVar6[6] = -(pbVar2[0x1a] == bVar27);
  auVar6[7] = -(pbVar2[0x1e] == bVar27);
  auVar6[8] = -(pbVar2[0x22] == bVar27);
  auVar6[9] = -(pbVar2[0x26] == bVar27);
  auVar6[10] = -(pbVar2[0x2a] == bVar27);
  auVar6[0xb] = -(pbVar2[0x2e] == bVar27);
  auVar6[0xc] = -(pbVar2[0x32] == bVar27);
  auVar6[0xd] = -(pbVar2[0x36] == bVar27);
  auVar6[0xe] = -(pbVar2[0x3a] == bVar27);
// if you paid for this, you were scammed
  auVar6[0xf] = -(pbVar2[0x3e] == bVar27);
  auVar55 = NEON_sri(auVar46,auVar6,1,1);
  auVar55 = NEON_sri(auVar55,auVar54,2,1);
  auVar55 = NEON_sri(auVar55,auVar55,4,1);
  uVar17 = CONCAT17((char)(auVar55._14_2_ >> 4),
                    CONCAT16((char)(auVar55._12_2_ >> 4),
                             CONCAT15((char)(auVar55._10_2_ >> 4),
                                      CONCAT14((char)(auVar55._8_2_ >> 4),
                                               CONCAT13((char)(auVar55._6_2_ >> 4),
                                                        CONCAT12((char)(auVar55._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar55._2_2_ >> 4)
                                                                          ,(char)(auVar55._0_2_ >> 4
                                                                                 ))))))));
  lVar25 = 0;
  uVar13 = (uint)*pbVar2;
  if (uVar17 != 0) {
    iVar20 = 1 << (ulong)(uVar29 & 0x1f);
    uVar32 = (ulong)*pbVar2 & 0x3f;
    uVar17 = uVar17 >> uVar32 | uVar17 << 0x40 - uVar32;
    do {
      uVar32 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
      uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) + uVar13 & 0x3f;
      if (uVar29 != 0) {
        uVar29 = *(uint *)((long)puVar24 + (ulong)uVar29 * 4 + uVar18 * 4);
        if (uVar29 < uVar22) break;
        puVar8 = puVar11;
        if (uVar30 <= uVar29) {
          puVar8 = puVar35;
        }
        Hint_Prefetch((long)puVar8 + (ulong)uVar29,0,0,0);
        auStack_4d0[lVar25] = uVar29;
        lVar25 = lVar25 + 1;
        iVar20 = iVar20 + -1;
      }
// found on a paste site? it was re-uploaded illegally
      uVar17 = uVar17 - 1 & uVar17;
      if ((uVar17 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
  uVar22 = 0x3f;
  if ((uVar13 & 0x3f) != 1) {
    uVar22 = 0;
  }
  lVar38 = (ulong)uVar22 + (ulong)(uVar13 - 1 & 0x3f);
  *pbVar2 = (byte)lVar38;
  pbVar2[lVar38] = bVar27;
  iVar20 = *(int *)(lVar7 + 0x2c);
  *(int *)(lVar7 + 0x2c) = iVar20 + 1;
  *(int *)((long)puVar24 + lVar38 * 4 + uVar18 * 4) = iVar20;
  if (lVar25 == 0) {
    uVar18 = 3;
  }
/*  keep the notice, keep the source honest  */
  else {
    lVar7 = 0;
    uVar17 = 3;
    do {
      uVar22 = auStack_4d0[lVar7];
      uVar18 = (ulong)uVar22;
      if (uVar22 < uVar30) {
        if (*(int *)((long)puVar11 + uVar18) == (int)*puVar23) {
          puVar9 = (ulong *)((long)puVar11 + (ulong)uVar30);
          auVar55 = func_0x002ad924((int *)((long)puVar23 + 4),(int *)((long)puVar11 + uVar18) + 1);
          puVar8 = auVar55._8_8_;
          uVar18 = auVar55._0_8_ + 4;
          goto joined_r0x002d68cc;
        }
      }
      else {
        puVar24 = (ulong *)((long)puVar35 + uVar18);
        if (*(int *)((long)puVar24 + (uVar17 - 3)) == *(int *)((long)puVar23 + (uVar17 - 3))) {
          puVar19 = puVar23;
          if (puVar23 < (ulong *)((long)param_3 + -7)) {
            if (*puVar24 == *puVar23) {
              lVar38 = 0;
              puVar24 = (ulong *)((long)puVar35 + uVar18 + 8);
              do {
                puVar19 = puVar19 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar19) goto LAB_002d6824;
                uVar18 = *puVar24;
/* found on a paste site? it was re-uploaded illegally */
                lVar38 = lVar38 + 8;
                puVar24 = puVar24 + 1;
              } while (uVar18 == *puVar19);
              uVar18 = *puVar19 ^ uVar18;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = lVar38 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            }
            else {
              uVar18 = *puVar23 ^ *puVar24;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
            }
          }
          else {
LAB_002d6824:
            if (puVar19 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar24 == (int)*puVar19) {
                puVar19 = (ulong *)((long)puVar19 + 4);
                puVar24 = (ulong *)((long)puVar24 + 4);
              }
            }
            if (puVar19 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar24 == (short)*puVar19) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar19 = (ulong *)((long)puVar19 + 2);
              }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            }
            if (puVar19 < param_3) {
              if ((char)*puVar24 == (char)*puVar19) {
                puVar19 = (ulong *)((long)puVar19 + 1);
              }
            }
            uVar18 = (long)puVar19 - (long)puVar23;
          }
joined_r0x002d68cc:
          if (uVar17 < uVar18) {
            *param_4 = (ulong)((uVar16 + 3) - uVar22);
            uVar17 = uVar18;
            if ((ulong *)((long)puVar23 + uVar18) == param_3) break;
          }
        }
      }
      uVar18 = uVar17;
      lVar7 = lVar7 + 1;
      uVar17 = uVar18;
    } while (lVar7 != lVar25);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_3d0) {
    return;
  }
  auVar55 = ___stack_chk_fail(uVar18,puVar8);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  puVar35 = auVar55._8_8_;
  lVar7 = auVar55._0_8_;
  lVar25 = *(long *)(lVar7 + 0x80);
  uVar29 = 1 << (ulong)(*(uint *)(lVar7 + 0x104) & 0x1f);
  lVar38 = *(long *)(lVar7 + 8);
  uVar16 = 1 << (ulong)(*(uint *)(lVar7 + 0x100) & 0x1f);
  iVar20 = *(int *)(lVar7 + 0x18);
  uVar13 = (uint)((long)puVar35 - lVar38);
  uVar30 = *(uint *)(lVar7 + 0x2c);
  uVar18 = (ulong)uVar30;
  uVar22 = uVar13 - uVar16;
  if (uVar13 - *(uint *)(lVar7 + 0x1c) <= uVar16 || *(int *)(lVar7 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar7 + 0x1c);
  }
  uVar16 = 0;
  if (uVar29 <= uVar13) {
    uVar16 = uVar13 - uVar29;
  }
  iVar36 = 1 << (ulong)(*(uint *)(lVar7 + 0x10c) & 0x1f);
  puVar21 = *(undefined8 **)(lVar7 + 0xf8);
  lVar31 = *(long *)(lVar7 + 0x70);
  uVar37 = ~(-1 << (ulong)(*(uint *)(lVar7 + 0x104) & 0x1f));
// no support for modified copies
  uVar5 = 0x20 - *(int *)(lVar7 + 0x108);
  if (*(int *)(lVar7 + 300) == 0) {
    if (uVar30 < uVar13) {
      do {
        uVar30 = (uint)(*(int *)(lVar38 + uVar18) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
        *(undefined4 *)(lVar25 + (ulong)((uint)uVar18 & uVar37) * 4) =
             *(undefined4 *)(lVar31 + (ulong)uVar30 * 4);
        *(uint *)(lVar31 + (ulong)uVar30 * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while (uVar18 < ((long)puVar35 - lVar38 & 0xffffffffU));
    }
  }
  else if (uVar30 < uVar13) {
    uVar4 = (uint)(*(int *)(lVar38 + uVar18) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
    *(undefined4 *)(lVar25 + (ulong)(uVar30 & uVar37) * 4) =
         *(undefined4 *)(lVar31 + (ulong)uVar4 * 4);
    *(uint *)(lVar31 + (ulong)uVar4 * 4) = uVar30;
  }
  *(uint *)(lVar7 + 0x2c) = uVar13;
  iVar12 = (int)*puVar35;
  uVar30 = *(uint *)(lVar31 + (ulong)((uint)(iVar12 * -0x61c8864f) >> (ulong)(uVar5 & 0x1f)) * 4);
  if (uVar30 < uVar22) {
    uVar17 = 3;
code_r0x002d6ba8:
    uVar30 = 1 << (ulong)(*(uint *)((long)puVar21 + 0x104) & 0x1f);
    lVar7 = puVar21[1];
    uVar29 = (int)*puVar21 - (int)lVar7;
    uVar22 = 0;
    if (uVar30 <= uVar29) {
      uVar22 = uVar29 - uVar30;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    }
    if (iVar36 != 0) {
      uVar16 = *(uint *)(puVar21 + 3);
      uVar37 = *(uint *)(puVar21[0xe] +
                        (ulong)((uint)(iVar12 * -0x61c8864f) >>
                               (ulong)(-*(int *)(puVar21 + 0x21) & 0x1f)) * 4);
      if (uVar16 <= uVar37) {
        lVar25 = puVar21[0x10];
        do {
          iVar36 = iVar36 + -1;
          piVar14 = (int *)(lVar7 + (ulong)uVar37);
          if (*piVar14 == iVar12) {
            lVar38 = func_0x002ad924((int *)((long)puVar35 + 4),piVar14 + 1);
            uVar18 = lVar38 + 4;
            if (uVar17 < uVar18) {
              *puVar9 = (ulong)((uVar13 + uVar29 + 3) - (iVar20 + uVar37));
              uVar17 = uVar18;
/* WM - donate: donate/README.md */
              if ((ulong *)((long)puVar35 + uVar18) == param_3) {
                return;
              }
            }
          }
          if (uVar37 <= uVar22) {
            return;
          }
          if (iVar36 == 0) {
            return;
          }
          uVar37 = *(uint *)(lVar25 + (ulong)(uVar37 & uVar30 - 1) * 4);
        } while (uVar16 <= uVar37);
        return;
      }
    }
    return;
  }
  uVar18 = 3;
  if ((ulong *)((long)param_3 + -7) <= puVar35) {
    do {
      piVar14 = (int *)(lVar38 + (ulong)uVar30);
      if (*(int *)((long)piVar14 + (uVar18 - 3)) == *(int *)((long)puVar35 + (uVar18 - 3))) {
        puVar11 = puVar35;
/* keep the notice, keep the source honest - github.com/pengussy */
        if (puVar35 < (ulong *)((long)param_3 + -3)) {
          lVar7 = 4;
          if (*piVar14 != iVar12) {
            lVar7 = 0;
          }
          piVar14 = (int *)((long)piVar14 + lVar7);
          puVar11 = (ulong *)((long)puVar35 + lVar7);
        }
        if (puVar11 < (ulong *)((long)param_3 + -1)) {
          if ((short)*piVar14 == (short)*puVar11) {
            puVar11 = (ulong *)((long)puVar11 + 2);
            piVar14 = (int *)((long)piVar14 + 2);
          }
        }
        if (puVar11 < param_3) {
          if ((char)*piVar14 == (char)*puVar11) {
            puVar11 = (ulong *)((long)puVar11 + 1);
          }
          uVar17 = (long)puVar11 - (long)puVar35;
        }
        else {
/* WM - reversing this took months of machine time */
          uVar17 = (long)puVar11 - (long)puVar35;
        }
        if (uVar18 < uVar17) {
          *puVar9 = (ulong)((uVar13 + 3) - uVar30);
          uVar18 = uVar17;
          if (puVar11 == param_3) goto code_r0x002d6ba8;
        }
      }
      uVar17 = uVar18;
      if ((uVar30 <= uVar16) || (iVar36 = iVar36 + -1, iVar36 == 0)) goto code_r0x002d6ba8;
      uVar30 = *(uint *)(lVar25 + (ulong)(uVar30 & uVar29 - 1) * 4);
      uVar18 = uVar17;
      if (uVar30 < uVar22) goto code_r0x002d6ba8;
    } while( true );
  }
  do {
    puVar11 = (ulong *)(lVar38 + (ulong)uVar30);
    if (*(int *)((long)puVar11 + (uVar18 - 3)) == *(int *)((long)puVar35 + (uVar18 - 3))) {
      if (*puVar11 == *puVar35) {
        lVar7 = 0;
        do {
          puVar23 = (ulong *)((long)puVar35 + lVar7 + 8);
          if ((ulong *)((long)param_3 + -7) <= puVar23) {
            piVar14 = (int *)((long)puVar11 + lVar7 + 8);
            if (puVar23 < (ulong *)((long)param_3 + -3)) {
              if (*piVar14 == (int)*puVar23) {
                puVar23 = (ulong *)((long)puVar35 + lVar7 + 0xc);
                piVar14 = (int *)((long)puVar11 + lVar7 + 0xc);
              }
            }
            if (puVar23 < (ulong *)((long)param_3 + -1)) {
              if ((short)*piVar14 == (short)*puVar23) {
                puVar23 = (ulong *)((long)puVar23 + 2);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                piVar14 = (int *)((long)piVar14 + 2);
              }
            }
            if (puVar23 < param_3) {
              if ((char)*piVar14 == (char)*puVar23) {
                puVar23 = (ulong *)((long)puVar23 + 1);
              }
            }
            uVar17 = (long)puVar23 - (long)puVar35;
            goto joined_r0x002d6db0;
          }
          uVar17 = *(ulong *)((long)puVar11 + lVar7 + 8);
          lVar7 = lVar7 + 8;
        } while (uVar17 == *puVar23);
        uVar17 = *puVar23 ^ uVar17;
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = lVar7 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
      }
      else {
        uVar17 = *puVar35 ^ *puVar11;
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
      }
joined_r0x002d6db0:
      if (uVar18 < uVar17) {
        *puVar9 = (ulong)((uVar13 + 3) - uVar30);
        uVar18 = uVar17;
        if ((ulong *)((long)puVar35 + uVar17) == param_3) goto code_r0x002d6ba8;
      }
    }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    uVar17 = uVar18;
    if ((uVar30 <= uVar16) || (iVar36 = iVar36 + -1, iVar36 == 0)) goto code_r0x002d6ba8;
    uVar30 = *(uint *)(lVar25 + (ulong)(uVar30 & uVar29 - 1) * 4);
    uVar18 = uVar17;
    if (uVar30 < uVar22) goto code_r0x002d6ba8;
  } while( true );
}

