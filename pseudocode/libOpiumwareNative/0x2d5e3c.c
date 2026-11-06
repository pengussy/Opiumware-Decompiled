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
 *  file-id: 0x2d5e3c:5f2528fb4f
 *  --------------------------------------------------------------------------*/

void FUN_002d5e3c(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  byte bVar25;
  byte bVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
/* wm:do not claim this as your own */
  long lVar30;
  ulong uVar31;
  dword *unaff_x19;
  ulong unaff_x20;
  ulong uVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong unaff_x23;
  int iVar35;
  uint uVar36;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  long lVar37;
  ushort uVar38;
  undefined4 uVar39;
/* if you paid for this, you were scammed - github.com/pengussy */
  undefined6 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [12];
  undefined1 auVar43 [14];
  undefined1 auVar44 [16];
  ushort uVar45;
  undefined4 uVar46;
  undefined6 uVar47;
  ushort uVar48;
  undefined4 uVar49;
  undefined6 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint auStack_320 [64];
  long lStack_220;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong uStack_200;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
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
  
  puStack_180 = param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar23 = *(ulong **)(param_1 + 0x70);
  puVar22 = *(ulong **)(param_1 + 0x38);
/*  origin: github.com/pengussy  */
  iVar19 = *(int *)(param_1 + 0x34);
  puVar34 = *(ulong **)(param_1 + 8);
  puVar10 = *(ulong **)(param_1 + 0x10);
  uVar28 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar29 = *(uint *)(param_1 + 0x18);
  uVar17 = (ulong)uVar29;
  uVar16 = (long)param_2 - (long)puVar34;
  uVar15 = (uint)uVar16;
  uVar21 = uVar15 - uVar28;
  if (uVar15 - *(uint *)(param_1 + 0x1c) <= uVar28 || *(int *)(param_1 + 0x28) != 0) {
    uVar21 = *(uint *)(param_1 + 0x1c);
  }
  uVar28 = *(uint *)(param_1 + 0x10c);
  if (4 < uVar28) {
    uVar28 = 5;
  }
  uVar31 = *(ulong *)(param_1 + 0x60);
  puStack_178 = puVar34;
  if (*(int *)(param_1 + 300) == 0) {
    lVar6 = param_1 + 0x40;
    uVar12 = *(uint *)(param_1 + 0x2c);
    uVar27 = (ulong)uVar12;
    param_4 = puVar23;
    unaff_x27 = puVar22;
    if (0x180 < uVar15 - uVar12) {
      if (uVar12 < 0xffffffa0) {
        uVar32 = uVar27 + 0x60;
// WM - keep the notice, keep the source honest
        do {
          uVar14 = (*(long *)((long)puVar34 + uVar27 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar19) & 0x3f);
          uVar33 = uVar14 >> 3 & 0x1fffffe0;
          lVar24 = (long)puVar23 + uVar33 * 4;
          Hint_Prefetch(lVar24,0,0,0);
          Hint_Prefetch(lVar24 + 0x40,0,0,0);
          Hint_Prefetch((long)puVar22 + uVar33,0,0,0);
          uVar36 = *(uint *)(lVar6 + (uVar27 & 7) * 4);
          *(int *)(lVar6 + (uVar27 & 7) * 4) = (int)uVar14;
          uVar14 = (ulong)(uVar36 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)((long)puVar22 + uVar14);
          unaff_x23 = (ulong)(*pbVar1 - 1 & 0x1f);
          uVar12 = 0x1f;
          if ((*pbVar1 & 0x1f) != 1) {
            uVar12 = 0;
          }
          unaff_x20 = uVar12 + unaff_x23;
          *pbVar1 = (byte)unaff_x20;
          pbVar1[unaff_x20] = (byte)uVar36;
          *(int *)((long)puVar23 + unaff_x20 * 4 + uVar14 * 4) = (int)uVar27;
          uVar27 = uVar27 + 1;
        } while (uVar32 != uVar27);
/* if you paid for this, you were scammed */
        param_4 = *(ulong **)(param_1 + 0x70);
        unaff_x27 = *(ulong **)(param_1 + 0x38);
      }
      uVar12 = uVar15 - 0x20;
      uVar27 = (ulong)uVar12;
      iVar11 = (int)((long)param_2 + 1U) - (int)((long)puVar34 + uVar27);
      unaff_x19 = &MACH_HEADER.cpusubtype;
      iVar35 = 8;
      if (iVar11 + 1U < 8) {
        iVar35 = iVar11 + 1;
      }
      iVar11 = 0;
      if ((long)puVar34 + uVar27 <= (long)param_2 + 1U) {
        iVar11 = iVar35;
      }
      if (uVar12 < iVar11 + uVar12) {
        iVar35 = *(int *)(param_1 + 0x34);
        uVar14 = *(ulong *)(param_1 + 0x60);
        uVar32 = uVar27;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puVar34 + uVar32) * -0x30e4432340650000 ^ uVar14)
                               >> ((ulong)(0x38 - iVar35) & 0x3f));
          uVar33 = (ulong)unaff_x19 >> 3 & 0x1fffffe0;
          unaff_x23 = (long)param_4 + uVar33 * 4;
/*  chat: discord.gg/sdkhDjTex  */
          Hint_Prefetch(unaff_x23,0,0,0);
          Hint_Prefetch(unaff_x23 + 0x40,0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar33,0,0,0);
          unaff_x20 = uVar32 & 7;
          *(int *)(lVar6 + unaff_x20 * 4) = (int)unaff_x19;
          uVar32 = uVar32 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    if (uVar12 < uVar15) {
      lVar24 = *(long *)(param_1 + 8);
      iVar35 = *(int *)(param_1 + 0x34);
      do {
        uVar32 = (*(long *)(lVar24 + 8 + uVar27) * -0x30e4432340650000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar35) & 0x3f);
        uVar14 = uVar32 >> 3 & 0x1fffffe0;
/* origin: github.com/pengussy */
        lVar37 = (long)param_4 + uVar14 * 4;
        Hint_Prefetch(lVar37,0,0,0);
        Hint_Prefetch(lVar37 + 0x40,0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar14,0,0,0);
        uVar36 = *(uint *)(lVar6 + (uVar27 & 7) * 4);
        unaff_x23 = (ulong)uVar36;
        *(int *)(lVar6 + (uVar27 & 7) * 4) = (int)uVar32;
        uVar32 = (ulong)(uVar36 >> 3) & 0x1fffffe0;
        unaff_x20 = (long)param_4 + uVar32 * 4;
        unaff_x19 = (dword *)((long)unaff_x27 + uVar32);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0x1f);
        uVar12 = 0x1f;
        if (((byte)*unaff_x19 & 0x1f) != 1) {
          uVar12 = 0;
        }
        lVar37 = uVar12 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar37;
        *(byte *)((long)unaff_x19 + lVar37) = (byte)uVar36;
        *(int *)(unaff_x20 + lVar37 * 4) = (int)uVar27;
        uVar27 = uVar27 + 1;
      } while (uVar27 < (uVar16 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar15;
    uVar27 = (*(long *)((long)puVar34 + (uVar16 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar31)
             >> ((ulong)(0x38 - iVar19) & 0x3f);
    uVar31 = uVar27 >> 3 & 0x1fffffe0;
    lVar24 = (long)puVar23 + uVar31 * 4;
    Hint_Prefetch(lVar24,0,0,0);
    Hint_Prefetch(lVar24 + 0x40,0,0,0);
    Hint_Prefetch((long)puVar22 + uVar31,0,0,0);
    uVar12 = *(uint *)(lVar6 + (uVar16 & 7) * 4);
    *(int *)(lVar6 + (uVar16 & 7) * 4) = (int)uVar27;
  }
  else {
    uVar12 = (uint)((*param_2 * -0x30e4432340650000 ^ uVar31) >> ((ulong)(0x38 - iVar19) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar15;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar12;
  uVar27 = (ulong)(uVar12 >> 3) & 0x1fffffe0;
  pbVar1 = (byte *)((long)puVar22 + uVar27);
  bVar26 = *pbVar1;
  bVar25 = (byte)uVar12;
  uVar45 = CONCAT11(-(bVar25 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar25 == (byte)*(undefined2 *)pbVar1));
  uVar46 = CONCAT13(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar45));
  uVar47 = CONCAT15(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar46));
  uVar48 = CONCAT11(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar49 = CONCAT13(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar48));
  uVar50 = CONCAT15(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar49));
  uVar38 = CONCAT11(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
/* watermarked copy - do not remove */
                    -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 2)));
  uVar39 = CONCAT13(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar38));
  uVar40 = CONCAT15(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar39));
  uVar41 = CONCAT17(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar40));
  auVar42._0_10_ =
       CONCAT19(-(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar41));
  auVar42[10] = -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x16));
  auVar42[0xb] = -(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar43[0xc] = -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar43._0_12_ = auVar42;
  auVar43[0xd] = -(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar53[0xe] = -(bVar25 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
  auVar53._0_14_ = auVar43;
  auVar53[0xf] = -(bVar25 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar31 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar25 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar25 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar50)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar50 >> 0x26),
                                      CONCAT15((char)((uint)uVar49 >> 0x16),
                                               CONCAT14((char)(uVar48 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar25 ==
// more drops soon - github.com/pengussy
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar25 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar47)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar47 >> 0x26),
                                                           CONCAT11((char)((uint)uVar46 >> 0x16),
                                                                    (char)(uVar45 >> 6)))))))),
                    CONCAT17((char)(auVar53._14_2_ >> 6),
                             CONCAT16((char)(auVar43._12_2_ >> 6),
                                      CONCAT15((char)(auVar42._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar42._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar41 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar40 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar39 >> 0x16),(char)(uVar38 >> 6)))))))),4,1);
  uVar16 = 0;
  uVar31 = (uVar31 >> ((ulong)bVar26 & 0x1f) * 2 | uVar31 << ((ulong)bVar26 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar31 != 0) {
    iVar19 = 1 << (ulong)(uVar28 & 0x1f);
    do {
      uVar32 = (uVar31 << 1 & 0xcccccccccccccccc) >> 2 | (uVar31 << 1 & 0x3333333333333333) << 2;
      uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      uVar28 = (int)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) + (bVar26 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar28 != 0) {
        uVar28 = *(uint *)((long)puVar23 + (ulong)uVar28 * 4 + uVar27 * 4);
        if (uVar28 < uVar21) break;
        param_4 = puVar10;
        if (uVar29 <= uVar28) {
          param_4 = puVar34;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar28,0,0,0);
        auStack_170[uVar16] = uVar28;
        uVar16 = uVar16 + 1;
        iVar19 = iVar19 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar19 == 0)) break;
// WM - reversing this took months of machine time
    } while( true );
  }
  uVar21 = 0x1f;
  if ((bVar26 & 0x1f) != 1) {
    uVar21 = 0;
  }
  lVar6 = (ulong)uVar21 + (ulong)(bVar26 - 1 & 0x1f);
  *pbVar1 = (byte)lVar6;
  pbVar1[lVar6] = bVar25;
  iVar19 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar19 + 1;
  *(int *)((long)puVar23 + lVar6 * 4 + uVar27 * 4) = iVar19;
  if (uVar16 == 0) {
    uVar31 = 3;
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)param_2 + -3);
/*  do not claim this as your own  */
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_198 = (ulong *)((long)param_3 + -1);
    puStack_190 = (ulong *)((long)param_3 + -3);
    iStack_184 = uVar15 + 3;
    puStack_1a8 = param_2 + 1;
    puStack_1a0 = puVar34 + 1;
    uVar27 = 3;
    do {
      uVar21 = auStack_170[unaff_x26];
      unaff_x23 = (ulong)uVar21;
      if (uVar21 < uVar29) {
        if (*(int *)((long)puVar10 + unaff_x23) == (int)*param_2) {
          param_4 = (ulong *)((long)puVar10 + uVar17);
          lVar6 = func_0x002ad924((int *)((long)param_2 + 4),(int *)((long)puVar10 + unaff_x23) + 1,
                                  param_3,param_4,(long)puVar34 + uVar17);
          uVar31 = lVar6 + 4;
          puVar34 = puStack_178;
          unaff_x27 = puVar10;
          goto joined_r0x002d62a4;
        }
      }
      else {
        puVar22 = (ulong *)((long)puVar34 + unaff_x23);
        if (*(int *)((long)puVar22 + (uVar27 - 3)) == *(int *)((long)unaff_x19 + uVar27)) {
          if (param_2 < unaff_x28) {
            if (*puVar22 == *param_2) {
              lVar6 = 0;
              puVar22 = (ulong *)((long)puStack_1a0 + unaff_x23);
              puVar23 = puStack_1a8;
              do {
                if (unaff_x28 <= puVar23) goto LAB_002d61fc;
                uVar32 = *puVar22;
                uVar31 = *puVar23;
                lVar6 = lVar6 + 8;
                puVar22 = puVar22 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar32 == uVar31);
              uVar31 = uVar31 ^ uVar32;
/*  proprietary - see LICENSE - do not sell  */
              uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              uVar31 = lVar6 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
            }
            else {
              uVar31 = *param_2 ^ *puVar22;
              uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
            }
          }
          else {
            puVar23 = param_2;
LAB_002d61fc:
            if (puVar23 < puStack_190) {
              if ((int)*puVar22 == (int)*puVar23) {
                puVar23 = (ulong *)((long)puVar23 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
              }
            }
            if (puVar23 < puStack_198) {
              if ((short)*puVar22 == (short)*puVar23) {
                puVar22 = (ulong *)((long)puVar22 + 2);
                puVar23 = (ulong *)((long)puVar23 + 2);
              }
            }
            if (puVar23 < param_3) {
              if ((char)*puVar22 == (char)*puVar23) {
                puVar23 = (ulong *)((long)puVar23 + 1);
              }
            }
            uVar31 = (long)puVar23 - (long)param_2;
          }
joined_r0x002d62a4:
          if (uVar27 < uVar31) {
            *puStack_180 = (ulong)(iStack_184 - uVar21);
            uVar27 = uVar31;
            unaff_x20 = uVar31;
            if ((ulong *)((long)param_2 + uVar31) == param_3) break;
          }
        }
      }
      uVar31 = uVar27;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = uVar31;
      uVar27 = uVar31;
    } while (unaff_x26 != uVar16);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  auVar53 = ___stack_chk_fail(uVar31);
/* wm:unlicensed copy if this notice is missing */
  puVar22 = auVar53._8_8_;
  lVar6 = auVar53._0_8_;
  puStack_210 = unaff_x28;
  puStack_208 = unaff_x27;
  uStack_200 = unaff_x26;
  uStack_1f8 = uVar16;
  uStack_1f0 = uVar17;
  uStack_1e8 = unaff_x23;
  puStack_1e0 = puVar34;
  puStack_1d8 = param_2;
  uStack_1d0 = unaff_x20;
  pdStack_1c8 = unaff_x19;
  puStack_1c0 = auStack_68 + 0x58;
  pcStack_1b8 = FUN_002d6450;
  lStack_220 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar23 = *(ulong **)(lVar6 + 0x70);
  lVar24 = *(long *)(lVar6 + 0x38);
/* stripping the watermark breaks the license */
  iVar19 = *(int *)(lVar6 + 0x34);
  puVar34 = *(ulong **)(lVar6 + 8);
  puVar10 = *(ulong **)(lVar6 + 0x10);
  uVar28 = 1 << (ulong)(*(uint *)(lVar6 + 0x100) & 0x1f);
  uVar29 = *(uint *)(lVar6 + 0x18);
  uVar17 = (long)puVar22 - (long)puVar34;
  uVar15 = (uint)uVar17;
  uVar21 = uVar15 - uVar28;
  if (uVar15 - *(uint *)(lVar6 + 0x1c) <= uVar28 || *(int *)(lVar6 + 0x28) != 0) {
    uVar21 = *(uint *)(lVar6 + 0x1c);
  }
  uVar28 = *(uint *)(lVar6 + 0x10c);
  if (5 < uVar28) {
    uVar28 = 6;
  }
  uVar16 = *(ulong *)(lVar6 + 0x60);
  if (*(int *)(lVar6 + 300) == 0) {
    lVar37 = lVar6 + 0x40;
    uVar12 = *(uint *)(lVar6 + 0x2c);
    uVar31 = (ulong)uVar12;
/* origin: github.com/pengussy - github.com/pengussy */
    puVar8 = puVar23;
    lVar30 = lVar24;
    if (0x180 < uVar15 - uVar12) {
      if (uVar12 < 0xffffffa0) {
        uVar27 = uVar31 + 0x60;
        do {
          uVar32 = (*(long *)((long)puVar34 + uVar31 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar6 + 0x60)) >> ((ulong)(0x38 - iVar19) & 0x3f);
          uVar14 = uVar32 >> 2 & 0x3fffffc0;
          lVar30 = (long)puVar23 + uVar14 * 4;
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x40,0,0,0);
          lVar30 = lVar24 + uVar14;
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x20,0,0,0);
          uVar36 = *(uint *)(lVar37 + (uVar31 & 7) * 4);
          *(int *)(lVar37 + (uVar31 & 7) * 4) = (int)uVar32;
          uVar32 = (ulong)(uVar36 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar24 + uVar32);
          uVar12 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar12 = 0;
          }
          lVar30 = (ulong)uVar12 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar30;
          pbVar1[lVar30] = (byte)uVar36;
          *(int *)((long)puVar23 + lVar30 * 4 + uVar32 * 4) = (int)uVar31;
          uVar31 = uVar31 + 1;
        } while (uVar27 != uVar31);
        puVar8 = *(ulong **)(lVar6 + 0x70);
/* keep the notice, keep the source honest */
        lVar30 = *(long *)(lVar6 + 0x38);
      }
      uVar12 = uVar15 - 0x20;
      uVar31 = (ulong)uVar12;
      iVar11 = (int)((long)puVar22 + 1U) - (int)((long)puVar34 + uVar31);
      iVar35 = 8;
      if (iVar11 + 1U < 8) {
        iVar35 = iVar11 + 1;
      }
      iVar11 = 0;
      if ((long)puVar34 + uVar31 <= (long)puVar22 + 1U) {
        iVar11 = iVar35;
      }
      if (uVar12 < iVar11 + uVar12) {
        iVar35 = *(int *)(lVar6 + 0x34);
        uVar32 = *(ulong *)(lVar6 + 0x60);
        uVar27 = uVar31;
        do {
          uVar14 = (*(long *)((long)puVar34 + uVar27) * -0x30e4432340650000 ^ uVar32) >>
                   ((ulong)(0x38 - iVar35) & 0x3f);
          uVar33 = uVar14 >> 2 & 0x3fffffc0;
          lVar9 = (long)puVar8 + uVar33 * 4;
          Hint_Prefetch(lVar9,0,0,0);
          Hint_Prefetch(lVar9 + 0x40,0,0,0);
// chat: discord.gg/sdkhDjTex
          lVar9 = lVar30 + uVar33;
          Hint_Prefetch(lVar9,0,0,0);
          Hint_Prefetch(lVar9 + 0x20,0,0,0);
          *(int *)(lVar37 + (uVar27 & 7) * 4) = (int)uVar14;
          uVar27 = uVar27 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    if (uVar12 < uVar15) {
      lVar9 = *(long *)(lVar6 + 8);
      iVar35 = *(int *)(lVar6 + 0x34);
      do {
        uVar27 = (*(long *)(lVar9 + 8 + uVar31) * -0x30e4432340650000 ^ *(ulong *)(lVar6 + 0x60)) >>
                 ((ulong)(0x38 - iVar35) & 0x3f);
        uVar32 = uVar27 >> 2 & 0x3fffffc0;
        lVar2 = (long)puVar8 + uVar32 * 4;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x40,0,0,0);
        lVar2 = lVar30 + uVar32;
        Hint_Prefetch(lVar2,0,0,0);
        Hint_Prefetch(lVar2 + 0x20,0,0,0);
        uVar36 = *(uint *)(lVar37 + (uVar31 & 7) * 4);
        *(int *)(lVar37 + (uVar31 & 7) * 4) = (int)uVar27;
/* wm:chat: discord.gg/sdkhDjTex */
        uVar27 = (ulong)(uVar36 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar30 + uVar27);
        uVar12 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar12 = 0;
        }
        lVar2 = (ulong)uVar12 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar2;
        pbVar1[lVar2] = (byte)uVar36;
        *(int *)((long)puVar8 + lVar2 * 4 + uVar27 * 4) = (int)uVar31;
        uVar31 = uVar31 + 1;
      } while (uVar31 < (uVar17 & 0xffffffff));
    }
    *(uint *)(lVar6 + 0x2c) = uVar15;
    puVar7 = *(ulong **)((long)puVar34 + (uVar17 & 0xffffffff) + 8);
    uVar31 = ((long)puVar7 * -0x30e4432340650000 ^ uVar16) >> ((ulong)(0x38 - iVar19) & 0x3f);
    uVar16 = uVar31 >> 2 & 0x3fffffc0;
    lVar30 = (long)puVar23 + uVar16 * 4;
    Hint_Prefetch(lVar30,0,0,0);
    Hint_Prefetch(lVar30 + 0x40,0,0,0);
    lVar30 = lVar24 + uVar16;
    Hint_Prefetch(lVar30,0,0,0);
    Hint_Prefetch(lVar30 + 0x20,0,0,0);
    uVar12 = *(uint *)(lVar37 + (uVar17 & 7) * 4);
    *(int *)(lVar37 + (uVar17 & 7) * 4) = (int)uVar31;
  }
  else {
    uVar12 = (uint)((*puVar22 * -0x30e4432340650000 ^ uVar16) >> ((ulong)(0x38 - iVar19) & 0x3f));
    *(uint *)(lVar6 + 0x2c) = uVar15;
    puVar7 = puVar22;
    puVar8 = param_4;
  }
  *(uint *)(lVar6 + 0x68) = *(int *)(lVar6 + 0x68) + uVar12;
/* wm:if you paid for this, you were scammed */
  uVar17 = (ulong)(uVar12 >> 2) & 0x3fffffc0;
  pbVar1 = (byte *)(lVar24 + uVar17);
  bVar26 = (byte)uVar12;
  auVar51[0] = -(pbVar1[1] == bVar26);
  auVar51[1] = -(pbVar1[5] == bVar26);
  auVar51[2] = -(pbVar1[9] == bVar26);
  auVar51[3] = -(pbVar1[0xd] == bVar26);
  auVar51[4] = -(pbVar1[0x11] == bVar26);
  auVar51[5] = -(pbVar1[0x15] == bVar26);
  auVar51[6] = -(pbVar1[0x19] == bVar26);
  auVar51[7] = -(pbVar1[0x1d] == bVar26);
  auVar51[8] = -(pbVar1[0x21] == bVar26);
  auVar51[9] = -(pbVar1[0x25] == bVar26);
  auVar51[10] = -(pbVar1[0x29] == bVar26);
  auVar51[0xb] = -(pbVar1[0x2d] == bVar26);
  auVar51[0xc] = -(pbVar1[0x31] == bVar26);
  auVar51[0xd] = -(pbVar1[0x35] == bVar26);
  auVar51[0xe] = -(pbVar1[0x39] == bVar26);
  auVar51[0xf] = -(pbVar1[0x3d] == bVar26);
  auVar44[0] = -(pbVar1[3] == bVar26);
  auVar44[1] = -(pbVar1[7] == bVar26);
  auVar44[2] = -(pbVar1[0xb] == bVar26);
  auVar44[3] = -(pbVar1[0xf] == bVar26);
  auVar44[4] = -(pbVar1[0x13] == bVar26);
  auVar44[5] = -(pbVar1[0x17] == bVar26);
  auVar44[6] = -(pbVar1[0x1b] == bVar26);
  auVar44[7] = -(pbVar1[0x1f] == bVar26);
  auVar44[8] = -(pbVar1[0x23] == bVar26);
  auVar44[9] = -(pbVar1[0x27] == bVar26);
  auVar44[10] = -(pbVar1[0x2b] == bVar26);
  auVar44[0xb] = -(pbVar1[0x2f] == bVar26);
  auVar44[0xc] = -(pbVar1[0x33] == bVar26);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  auVar44[0xd] = -(pbVar1[0x37] == bVar26);
  auVar44[0xe] = -(pbVar1[0x3b] == bVar26);
  auVar44[0xf] = -(pbVar1[0x3f] == bVar26);
  auVar52[1] = -(pbVar1[4] == bVar26);
  auVar52[0] = -(*pbVar1 == bVar26);
  auVar52[2] = -(pbVar1[8] == bVar26);
  auVar52[3] = -(pbVar1[0xc] == bVar26);
  auVar52[4] = -(pbVar1[0x10] == bVar26);
  auVar52[5] = -(pbVar1[0x14] == bVar26);
  auVar52[6] = -(pbVar1[0x18] == bVar26);
  auVar52[7] = -(pbVar1[0x1c] == bVar26);
  auVar52[8] = -(pbVar1[0x20] == bVar26);
  auVar52[9] = -(pbVar1[0x24] == bVar26);
  auVar52[10] = -(pbVar1[0x28] == bVar26);
  auVar52[0xb] = -(pbVar1[0x2c] == bVar26);
  auVar52[0xc] = -(pbVar1[0x30] == bVar26);
  auVar52[0xd] = -(pbVar1[0x34] == bVar26);
  auVar52[0xe] = -(pbVar1[0x38] == bVar26);
  auVar52[0xf] = -(pbVar1[0x3c] == bVar26);
  auVar52 = NEON_sri(auVar51,auVar52,1,1);
  auVar5[1] = -(pbVar1[6] == bVar26);
  auVar5[0] = -(pbVar1[2] == bVar26);
  auVar5[2] = -(pbVar1[10] == bVar26);
  auVar5[3] = -(pbVar1[0xe] == bVar26);
  auVar5[4] = -(pbVar1[0x12] == bVar26);
/* wm:stripping the watermark breaks the license */
  auVar5[5] = -(pbVar1[0x16] == bVar26);
  auVar5[6] = -(pbVar1[0x1a] == bVar26);
  auVar5[7] = -(pbVar1[0x1e] == bVar26);
  auVar5[8] = -(pbVar1[0x22] == bVar26);
  auVar5[9] = -(pbVar1[0x26] == bVar26);
  auVar5[10] = -(pbVar1[0x2a] == bVar26);
  auVar5[0xb] = -(pbVar1[0x2e] == bVar26);
  auVar5[0xc] = -(pbVar1[0x32] == bVar26);
  auVar5[0xd] = -(pbVar1[0x36] == bVar26);
  auVar5[0xe] = -(pbVar1[0x3a] == bVar26);
  auVar5[0xf] = -(pbVar1[0x3e] == bVar26);
  auVar53 = NEON_sri(auVar44,auVar5,1,1);
  auVar53 = NEON_sri(auVar53,auVar52,2,1);
  auVar53 = NEON_sri(auVar53,auVar53,4,1);
  uVar16 = CONCAT17((char)(auVar53._14_2_ >> 4),
                    CONCAT16((char)(auVar53._12_2_ >> 4),
                             CONCAT15((char)(auVar53._10_2_ >> 4),
                                      CONCAT14((char)(auVar53._8_2_ >> 4),
                                               CONCAT13((char)(auVar53._6_2_ >> 4),
                                                        CONCAT12((char)(auVar53._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar53._2_2_ >> 4)
                                                                          ,(char)(auVar53._0_2_ >> 4
                                                                                 ))))))));
  lVar24 = 0;
  uVar12 = (uint)*pbVar1;
  if (uVar16 != 0) {
    iVar19 = 1 << (ulong)(uVar28 & 0x1f);
    uVar31 = (ulong)*pbVar1 & 0x3f;
    uVar16 = uVar16 >> uVar31 | uVar16 << 0x40 - uVar31;
    do {
      uVar31 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      uVar28 = (int)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) + uVar12 & 0x3f;
      if (uVar28 != 0) {
        uVar28 = *(uint *)((long)puVar23 + (ulong)uVar28 * 4 + uVar17 * 4);
        if (uVar28 < uVar21) break;
        puVar7 = puVar10;
        if (uVar29 <= uVar28) {
          puVar7 = puVar34;
        }
        Hint_Prefetch((long)puVar7 + (ulong)uVar28,0,0,0);
        auStack_320[lVar24] = uVar28;
        lVar24 = lVar24 + 1;
        iVar19 = iVar19 + -1;
      }
      uVar16 = uVar16 - 1 & uVar16;
      if ((uVar16 == 0) || (iVar19 == 0)) break;
    } while( true );
  }
  uVar21 = 0x3f;
  if ((uVar12 & 0x3f) != 1) {
    uVar21 = 0;
  }
  lVar37 = (ulong)uVar21 + (ulong)(uVar12 - 1 & 0x3f);
  *pbVar1 = (byte)lVar37;
  pbVar1[lVar37] = bVar26;
  iVar19 = *(int *)(lVar6 + 0x2c);
  *(int *)(lVar6 + 0x2c) = iVar19 + 1;
  *(int *)((long)puVar23 + lVar37 * 4 + uVar17 * 4) = iVar19;
  if (lVar24 == 0) {
    uVar17 = 3;
  }
  else {
    lVar6 = 0;
    uVar16 = 3;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    do {
      uVar21 = auStack_320[lVar6];
      uVar17 = (ulong)uVar21;
      if (uVar21 < uVar29) {
        if (*(int *)((long)puVar10 + uVar17) == (int)*puVar22) {
          puVar8 = (ulong *)((long)puVar10 + (ulong)uVar29);
          auVar53 = func_0x002ad924((int *)((long)puVar22 + 4),(int *)((long)puVar10 + uVar17) + 1);
          puVar7 = auVar53._8_8_;
          uVar17 = auVar53._0_8_ + 4;
          goto joined_r0x002d68cc;
        }
      }
      else {
        puVar23 = (ulong *)((long)puVar34 + uVar17);
        if (*(int *)((long)puVar23 + (uVar16 - 3)) == *(int *)((long)puVar22 + (uVar16 - 3))) {
          puVar18 = puVar22;
          if (puVar22 < (ulong *)((long)param_3 + -7)) {
            if (*puVar23 == *puVar22) {
              lVar37 = 0;
              puVar23 = (ulong *)((long)puVar34 + uVar17 + 8);
              do {
                puVar18 = puVar18 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d6824;
                uVar17 = *puVar23;
                lVar37 = lVar37 + 8;
                puVar23 = puVar23 + 1;
              } while (uVar17 == *puVar18);
              uVar17 = *puVar18 ^ uVar17;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = lVar37 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
            }
// proprietary - see LICENSE - do not sell
            else {
              uVar17 = *puVar22 ^ *puVar23;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
            }
          }
          else {
LAB_002d6824:
            if (puVar18 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar23 == (int)*puVar18) {
                puVar18 = (ulong *)((long)puVar18 + 4);
                puVar23 = (ulong *)((long)puVar23 + 4);
              }
            }
            if (puVar18 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar23 == (short)*puVar18) {
                puVar23 = (ulong *)((long)puVar23 + 2);
                puVar18 = (ulong *)((long)puVar18 + 2);
              }
            }
            if (puVar18 < param_3) {
              if ((char)*puVar23 == (char)*puVar18) {
                puVar18 = (ulong *)((long)puVar18 + 1);
              }
            }
            uVar17 = (long)puVar18 - (long)puVar22;
          }
joined_r0x002d68cc:
          if (uVar16 < uVar17) {
            *param_4 = (ulong)((uVar15 + 3) - uVar21);
/* proprietary - see LICENSE - do not sell */
            uVar16 = uVar17;
            if ((ulong *)((long)puVar22 + uVar17) == param_3) break;
          }
        }
      }
      uVar17 = uVar16;
      lVar6 = lVar6 + 1;
      uVar16 = uVar17;
    } while (lVar6 != lVar24);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_220) {
    return;
  }
  auVar53 = ___stack_chk_fail(uVar17,puVar7);
  puVar34 = auVar53._8_8_;
  lVar6 = auVar53._0_8_;
  lVar24 = *(long *)(lVar6 + 0x80);
  uVar28 = 1 << (ulong)(*(uint *)(lVar6 + 0x104) & 0x1f);
  lVar37 = *(long *)(lVar6 + 8);
  uVar15 = 1 << (ulong)(*(uint *)(lVar6 + 0x100) & 0x1f);
  iVar19 = *(int *)(lVar6 + 0x18);
  uVar12 = (uint)((long)puVar34 - lVar37);
  uVar29 = *(uint *)(lVar6 + 0x2c);
  uVar17 = (ulong)uVar29;
  uVar21 = uVar12 - uVar15;
  if (uVar12 - *(uint *)(lVar6 + 0x1c) <= uVar15 || *(int *)(lVar6 + 0x28) != 0) {
    uVar21 = *(uint *)(lVar6 + 0x1c);
  }
// do not claim this as your own
  uVar15 = 0;
  if (uVar28 <= uVar12) {
    uVar15 = uVar12 - uVar28;
  }
  iVar35 = 1 << (ulong)(*(uint *)(lVar6 + 0x10c) & 0x1f);
  puVar20 = *(undefined8 **)(lVar6 + 0xf8);
  lVar30 = *(long *)(lVar6 + 0x70);
  uVar36 = ~(-1 << (ulong)(*(uint *)(lVar6 + 0x104) & 0x1f));
  uVar4 = 0x20 - *(int *)(lVar6 + 0x108);
  if (*(int *)(lVar6 + 300) == 0) {
    if (uVar29 < uVar12) {
      do {
        uVar29 = (uint)(*(int *)(lVar37 + uVar17) * -0x61c8864f) >> (ulong)(uVar4 & 0x1f);
        *(undefined4 *)(lVar24 + (ulong)((uint)uVar17 & uVar36) * 4) =
             *(undefined4 *)(lVar30 + (ulong)uVar29 * 4);
        *(uint *)(lVar30 + (ulong)uVar29 * 4) = (uint)uVar17;
        uVar17 = uVar17 + 1;
      } while (uVar17 < ((long)puVar34 - lVar37 & 0xffffffffU));
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    }
  }
  else if (uVar29 < uVar12) {
    uVar3 = (uint)(*(int *)(lVar37 + uVar17) * -0x61c8864f) >> (ulong)(uVar4 & 0x1f);
    *(undefined4 *)(lVar24 + (ulong)(uVar29 & uVar36) * 4) =
         *(undefined4 *)(lVar30 + (ulong)uVar3 * 4);
    *(uint *)(lVar30 + (ulong)uVar3 * 4) = uVar29;
  }
  *(uint *)(lVar6 + 0x2c) = uVar12;
  iVar11 = (int)*puVar34;
  uVar29 = *(uint *)(lVar30 + (ulong)((uint)(iVar11 * -0x61c8864f) >> (ulong)(uVar4 & 0x1f)) * 4);
  if (uVar29 < uVar21) {
    uVar16 = 3;
code_r0x002d6ba8:
    uVar29 = 1 << (ulong)(*(uint *)((long)puVar20 + 0x104) & 0x1f);
    lVar6 = puVar20[1];
    uVar28 = (int)*puVar20 - (int)lVar6;
    uVar21 = 0;
    if (uVar29 <= uVar28) {
      uVar21 = uVar28 - uVar29;
    }
    if (iVar35 != 0) {
      uVar15 = *(uint *)(puVar20 + 3);
      uVar36 = *(uint *)(puVar20[0xe] +
                        (ulong)((uint)(iVar11 * -0x61c8864f) >>
                               (ulong)(-*(int *)(puVar20 + 0x21) & 0x1f)) * 4);
      if (uVar15 <= uVar36) {
        lVar24 = puVar20[0x10];
        do {
          iVar35 = iVar35 + -1;
          piVar13 = (int *)(lVar6 + (ulong)uVar36);
          if (*piVar13 == iVar11) {
            lVar37 = func_0x002ad924((int *)((long)puVar34 + 4),piVar13 + 1);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
            uVar17 = lVar37 + 4;
            if (uVar16 < uVar17) {
              *puVar8 = (ulong)((uVar12 + uVar28 + 3) - (iVar19 + uVar36));
              uVar16 = uVar17;
              if ((ulong *)((long)puVar34 + uVar17) == param_3) {
                return;
              }
            }
          }
          if (uVar36 <= uVar21) {
            return;
          }
          if (iVar35 == 0) {
            return;
          }
          uVar36 = *(uint *)(lVar24 + (ulong)(uVar36 & uVar29 - 1) * 4);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        } while (uVar15 <= uVar36);
        return;
      }
    }
    return;
  }
  uVar17 = 3;
  if ((ulong *)((long)param_3 + -7) <= puVar34) {
    do {
      piVar13 = (int *)(lVar37 + (ulong)uVar29);
      if (*(int *)((long)piVar13 + (uVar17 - 3)) == *(int *)((long)puVar34 + (uVar17 - 3))) {
        puVar10 = puVar34;
        if (puVar34 < (ulong *)((long)param_3 + -3)) {
          lVar6 = 4;
          if (*piVar13 != iVar11) {
            lVar6 = 0;
          }
          piVar13 = (int *)((long)piVar13 + lVar6);
          puVar10 = (ulong *)((long)puVar34 + lVar6);
        }
        if (puVar10 < (ulong *)((long)param_3 + -1)) {
          if ((short)*piVar13 == (short)*puVar10) {
            puVar10 = (ulong *)((long)puVar10 + 2);
            piVar13 = (int *)((long)piVar13 + 2);
          }
        }
        if (puVar10 < param_3) {
          if ((char)*piVar13 == (char)*puVar10) {
            puVar10 = (ulong *)((long)puVar10 + 1);
/* reversing this took months of machine time - github.com/pengussy */
          }
          uVar16 = (long)puVar10 - (long)puVar34;
        }
        else {
          uVar16 = (long)puVar10 - (long)puVar34;
        }
        if (uVar17 < uVar16) {
          *puVar8 = (ulong)((uVar12 + 3) - uVar29);
          uVar17 = uVar16;
          if (puVar10 == param_3) goto code_r0x002d6ba8;
        }
      }
      uVar16 = uVar17;
      if ((uVar29 <= uVar15) || (iVar35 = iVar35 + -1, iVar35 == 0)) goto code_r0x002d6ba8;
      uVar29 = *(uint *)(lVar24 + (ulong)(uVar29 & uVar28 - 1) * 4);
      uVar17 = uVar16;
      if (uVar29 < uVar21) goto code_r0x002d6ba8;
    } while( true );
  }
  do {
    puVar10 = (ulong *)(lVar37 + (ulong)uVar29);
    if (*(int *)((long)puVar10 + (uVar17 - 3)) == *(int *)((long)puVar34 + (uVar17 - 3))) {
      if (*puVar10 == *puVar34) {
        lVar6 = 0;
        do {
          puVar22 = (ulong *)((long)puVar34 + lVar6 + 8);
// keep the notice, keep the source honest
          if ((ulong *)((long)param_3 + -7) <= puVar22) {
            piVar13 = (int *)((long)puVar10 + lVar6 + 8);
            if (puVar22 < (ulong *)((long)param_3 + -3)) {
              if (*piVar13 == (int)*puVar22) {
                puVar22 = (ulong *)((long)puVar34 + lVar6 + 0xc);
                piVar13 = (int *)((long)puVar10 + lVar6 + 0xc);
              }
            }
            if (puVar22 < (ulong *)((long)param_3 + -1)) {
              if ((short)*piVar13 == (short)*puVar22) {
                puVar22 = (ulong *)((long)puVar22 + 2);
                piVar13 = (int *)((long)piVar13 + 2);
              }
            }
            if (puVar22 < param_3) {
              if ((char)*piVar13 == (char)*puVar22) {
                puVar22 = (ulong *)((long)puVar22 + 1);
              }
            }
            uVar16 = (long)puVar22 - (long)puVar34;
            goto joined_r0x002d6db0;
          }
          uVar16 = *(ulong *)((long)puVar10 + lVar6 + 8);
          lVar6 = lVar6 + 8;
        } while (uVar16 == *puVar22);
        uVar16 = *puVar22 ^ uVar16;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = lVar6 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
      }
      else {
        uVar16 = *puVar34 ^ *puVar10;
        uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
      }
joined_r0x002d6db0:
      if (uVar17 < uVar16) {
        *puVar8 = (ulong)((uVar12 + 3) - uVar29);
        uVar17 = uVar16;
        if ((ulong *)((long)puVar34 + uVar16) == param_3) goto code_r0x002d6ba8;
      }
    }
    uVar16 = uVar17;
    if ((uVar29 <= uVar15) || (iVar35 = iVar35 + -1, iVar35 == 0)) goto code_r0x002d6ba8;
    uVar29 = *(uint *)(lVar24 + (ulong)(uVar29 & uVar28 - 1) * 4);
    uVar17 = uVar16;
    if (uVar29 < uVar21) goto code_r0x002d6ba8;
  } while( true );
}

