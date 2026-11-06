/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2cf658:74763b6d04
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002cf658(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 (*pauVar1) [16];
  byte *pbVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong *puVar14;
  ulong *puVar15;
/* do not claim this as your own - github.com/pengussy */
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  byte bVar42;
  ushort uVar43;
  undefined4 uVar44;
  undefined6 uVar45;
  undefined8 uVar46;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  undefined1 auVar47 [12];
  undefined1 auVar50 [14];
  undefined1 auVar53 [16];
  undefined1 auVar48 [12];
  undefined1 auVar51 [14];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar49 [12];
  undefined1 auVar52 [14];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ushort uVar58;
  undefined4 uVar59;
  undefined6 uVar60;
  ushort uVar61;
  undefined4 uVar62;
  undefined6 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint auStack_ce8 [64];
  long lStack_be8;
  uint auStack_b78 [64];
  long lStack_a78;
  uint auStack_a08 [64];
  long lStack_908;
  uint auStack_898 [64];
  long lStack_798;
  uint auStack_728 [64];
  long lStack_628;
  uint auStack_5b8 [64];
  long lStack_4b8;
  uint auStack_448 [64];
  long lStack_348;
  uint auStack_2d8 [64];
  long lStack_1d8;
  uint auStack_168 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(param_1 + 0x70);
  lVar26 = *(long *)(param_1 + 0x38);
  iVar23 = *(int *)(param_1 + 0x34);
  lVar20 = *(long *)(param_1 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar22 = (long)param_2 - lVar20;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(param_1 + 0x1c) <= uVar31 || *(int *)(param_1 + 0x28) != 0) {
    uVar25 = *(uint *)(param_1 + 0x1c);
  }
  uVar31 = *(uint *)(param_1 + 0x10c);
  if (3 < uVar31) {
    uVar31 = 4;
  }
  uVar36 = (uint)*(undefined8 *)(param_1 + 0x60);
/* chat: discord.gg/sdkhDjTex */
  if (*(int *)(param_1 + 300) == 0) {
    lVar32 = param_1 + 0x40;
    uVar35 = *(uint *)(param_1 + 0x2c);
    uVar16 = (ulong)uVar35;
    lVar28 = lVar26;
    lVar17 = lVar27;
    if (0x180 < uVar21 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar41 = uVar16 + 0x60;
        do {
          uVar35 = (*(int *)(lVar20 + 8 + uVar16) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                   (ulong)(0x18U - iVar23 & 0x1f);
          uVar39 = (ulong)(uVar35 >> 4 & 0xffffff0);
          Hint_Prefetch(lVar27 + uVar39 * 4,0,0,0);
          Hint_Prefetch(lVar26 + uVar39,0,0,0);
          uVar24 = *(uint *)(lVar32 + (uVar16 & 7) * 4);
          *(uint *)(lVar32 + (uVar16 & 7) * 4) = uVar35;
          uVar39 = (ulong)(uVar24 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar26 + uVar39);
          uVar35 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar35 = 0;
          }
          lVar28 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0xf);
          *pbVar2 = (byte)lVar28;
          pbVar2[lVar28] = (byte)uVar24;
          *(int *)(lVar27 + uVar39 * 4 + lVar28 * 4) = (int)uVar16;
          uVar16 = uVar16 + 1;
        } while (uVar41 != uVar16);
        lVar17 = *(long *)(param_1 + 0x70);
        lVar28 = *(long *)(param_1 + 0x38);
      }
/* wm:stripping the watermark breaks the license */
      uVar35 = uVar21 - 0x20;
      uVar16 = (ulong)uVar35;
      iVar34 = (int)((long)param_2 + 1U) - (int)(lVar20 + uVar16);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar20 + uVar16 <= (long)param_2 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar38 = *(int *)(param_1 + 0x34);
        uVar35 = *(uint *)(param_1 + 0x60);
        uVar41 = uVar16;
        do {
          uVar24 = (*(int *)(lVar20 + uVar41) * -0x61c8864f ^ uVar35) >>
                   (ulong)(0x18U - iVar38 & 0x1f);
          uVar39 = (ulong)(uVar24 >> 4 & 0xffffff0);
          Hint_Prefetch(lVar17 + uVar39 * 4,0,0,0);
          Hint_Prefetch(lVar28 + uVar39,0,0,0);
          *(uint *)(lVar32 + (uVar41 & 7) * 4) = uVar24;
          uVar41 = uVar41 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if ((uint)uVar16 < uVar21) {
      lVar19 = *(long *)(param_1 + 8);
      iVar38 = *(int *)(param_1 + 0x34);
      do {
        uVar35 = (*(int *)(lVar19 + 8 + uVar16) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                 (ulong)(0x18U - iVar38 & 0x1f);
        uVar41 = (ulong)(uVar35 >> 4 & 0xffffff0);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        Hint_Prefetch(lVar17 + uVar41 * 4,0,0,0);
        Hint_Prefetch(lVar28 + uVar41,0,0,0);
        uVar24 = *(uint *)(lVar32 + (uVar16 & 7) * 4);
        *(uint *)(lVar32 + (uVar16 & 7) * 4) = uVar35;
        uVar41 = (ulong)(uVar24 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar28 + uVar41);
        uVar35 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar35 = 0;
        }
        lVar33 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar33;
        pbVar2[lVar33] = (byte)uVar24;
        *(int *)(lVar17 + uVar41 * 4 + lVar33 * 4) = (int)uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar16 < (uVar22 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar21;
    uVar35 = (*(int *)(lVar20 + (uVar22 & 0xffffffff) + 8) * -0x61c8864f ^ uVar36) >>
             (ulong)(0x18U - iVar23 & 0x1f);
    uVar16 = (ulong)(uVar35 >> 4 & 0xffffff0);
    Hint_Prefetch(lVar27 + uVar16 * 4,0,0,0);
    Hint_Prefetch(lVar26 + uVar16,0,0,0);
    uVar36 = *(uint *)(lVar32 + (uVar22 & 7) * 4);
    *(uint *)(lVar32 + (uVar22 & 7) * 4) = uVar35;
  }
  else {
    uVar36 = ((int)*param_2 * -0x61c8864f ^ uVar36) >> (ulong)(0x18U - iVar23 & 0x1f);
    *(uint *)(param_1 + 0x2c) = uVar21;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 4) & 0xffffff0;
  lVar27 = lVar27 + uVar22 * 4;
/* reversing this took months of machine time - github.com/pengussy */
  pauVar1 = (undefined1 (*) [16])(lVar26 + uVar22);
  bVar30 = (*pauVar1)[0];
  auVar68 = *pauVar1;
  bVar29 = (byte)uVar36;
  bVar42 = auVar68[0];
  uVar43 = CONCAT11(-(auVar68[9] == bVar29),-(auVar68[8] == bVar29));
  uVar44 = CONCAT13(-(auVar68[0xb] == bVar29),CONCAT12(-(auVar68[10] == bVar29),uVar43));
  uVar45 = CONCAT15(-(auVar68[0xd] == bVar29),CONCAT14(-(auVar68[0xc] == bVar29),uVar44));
  uVar22 = CONCAT17((char)(CONCAT17(-(auVar68[0xf] == bVar29),
                                    CONCAT16(-(auVar68[0xe] == bVar29),uVar45)) >> 0x34),
                    CONCAT16((char)((uint6)uVar45 >> 0x24),
                             CONCAT15((char)((uint)uVar44 >> 0x14),
                                      CONCAT14((char)(uVar43 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar68[7] == bVar29),
                                                                        -(auVar68[6] == bVar29)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar68[
                                                  5] == bVar29),-(auVar68[4] == bVar29)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar68[3] == bVar29),
                                                                           -(auVar68[2] == bVar29))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar68[1] == bVar29),
                                                                           -(bVar42 == bVar29)) >> 4
                                                                 ))))))));
  uVar16 = (ulong)bVar30 & 0xf;
  uVar22 = (uVar22 >> uVar16 * 4 | uVar22 << uVar16 * -4 + 0x40) & 0x8888888888888888;
  if (uVar22 != 0) {
    lVar26 = 0;
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar16 = (uVar22 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + (bVar30 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        if (uVar31 < uVar25) goto LAB_002cf8a4;
        Hint_Prefetch(lVar20 + (ulong)uVar31,0,0,0);
        auStack_168[lVar26] = uVar31;
        lVar26 = lVar26 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) goto LAB_002cf8a4;
    } while( true );
  }
  lVar26 = 0;
LAB_002cf8a4:
  uVar25 = 0xf;
  if ((bVar42 & 0xf) != 1) {
    uVar25 = 0;
  }
  lVar32 = (ulong)uVar25 + (ulong)(bVar42 - 1 & 0xf);
  (*pauVar1)[0] = (char)lVar32;
  (*pauVar1)[lVar32] = bVar29;
  iVar23 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar32 * 4) = iVar23;
  if (lVar26 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_168[lVar27];
/* WM - do not claim this as your own */
      puVar14 = (ulong *)(lVar20 + (ulong)uVar25);
      if (*(int *)((long)puVar14 + (uVar16 - 3)) == *(int *)((long)param_2 + (uVar16 - 3))) {
        puVar15 = param_2;
        if (param_2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar14 == *param_2) {
            lVar32 = 0;
            puVar14 = (ulong *)(lVar20 + 8 + (ulong)uVar25);
            do {
              puVar15 = puVar15 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar15) goto LAB_002cf994;
              uVar22 = *puVar14;
              lVar32 = lVar32 + 8;
              puVar14 = puVar14 + 1;
            } while (uVar22 == *puVar15);
            uVar22 = *puVar15 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
/*  do not claim this as your own  */
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar32 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *param_2 ^ *puVar14;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002cf994:
          if (puVar15 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar14 == (int)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar14 = (ulong *)((long)puVar14 + 4);
            }
          }
          if (puVar15 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar14 == (short)*puVar15) {
/* wm:origin: github.com/pengussy */
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar15 = (ulong *)((long)puVar15 + 2);
            }
          }
          if (puVar15 < param_3) {
            if ((char)*puVar14 == (char)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
          }
          uVar22 = (long)puVar15 - (long)param_2;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)param_2 + uVar22) == param_3) break;
        }
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar26);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  iVar23 = *(int *)(lVar20 + 0x34);
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (4 < uVar31) {
    uVar31 = 5;
  }
  uVar36 = (uint)*(undefined8 *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
    uVar35 = *(uint *)(lVar20 + 0x2c);
    uVar16 = (ulong)uVar35;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar41 = uVar16 + 0x60;
        do {
          uVar35 = (*(int *)(lVar26 + 8 + uVar16) * -0x61c8864f ^ *(uint *)(lVar20 + 0x60)) >>
                   (ulong)(0x18U - iVar23 & 0x1f);
          uVar39 = (ulong)(uVar35 >> 3 & 0x1fffffe0);
          lVar17 = lVar27 + uVar39 * 4;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x40,0,0,0);
          Hint_Prefetch(lVar32 + uVar39,0,0,0);
          uVar24 = *(uint *)(lVar28 + (uVar16 & 7) * 4);
          *(uint *)(lVar28 + (uVar16 & 7) * 4) = uVar35;
          uVar39 = (ulong)(uVar24 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar32 + uVar39);
          uVar35 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            uVar35 = 0;
          }
          lVar17 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0x1f);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar24;
          *(int *)(lVar27 + uVar39 * 4 + lVar17 * 4) = (int)uVar16;
          uVar16 = uVar16 + 1;
        } while (uVar41 != uVar16);
        lVar19 = *(long *)(lVar20 + 0x70);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar35 = uVar21 - 0x20;
      uVar16 = (ulong)uVar35;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar16);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar16 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar24 = *(uint *)(lVar20 + 0x60);
/* wm:keep the notice, keep the source honest */
        do {
          uVar5 = (*(int *)(lVar26 + uVar16) * -0x61c8864f ^ uVar24) >>
                  (ulong)(0x18U - iVar38 & 0x1f);
          uVar41 = (ulong)(uVar5 >> 3 & 0x1fffffe0);
          lVar33 = lVar19 + uVar41 * 4;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x40,0,0,0);
          Hint_Prefetch(lVar17 + uVar41,0,0,0);
          *(uint *)(lVar28 + (uVar16 & 7) * 4) = uVar5;
          uVar16 = uVar16 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar16 = (ulong)uVar35;
      do {
        uVar35 = (*(int *)(lVar33 + 8 + uVar16) * -0x61c8864f ^ *(uint *)(lVar20 + 0x60)) >>
                 (ulong)(0x18U - iVar38 & 0x1f);
        uVar41 = (ulong)(uVar35 >> 3 & 0x1fffffe0);
        lVar3 = lVar19 + uVar41 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar17 + uVar41,0,0,0);
        uVar24 = *(uint *)(lVar28 + (uVar16 & 7) * 4);
        *(uint *)(lVar28 + (uVar16 & 7) * 4) = uVar35;
        uVar41 = (ulong)(uVar24 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar17 + uVar41);
        uVar35 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar35 = 0;
        }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar24;
        *(int *)(lVar19 + uVar41 * 4 + lVar3 * 4) = (int)uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar16 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
    uVar35 = (*(int *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x61c8864f ^ uVar36) >>
             (ulong)(0x18U - iVar23 & 0x1f);
    uVar16 = (ulong)(uVar35 >> 3 & 0x1fffffe0);
    lVar17 = lVar27 + uVar16 * 4;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x40,0,0,0);
    Hint_Prefetch(lVar32 + uVar16,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(uint *)(lVar28 + (uVar22 & 7) * 4) = uVar35;
  }
  else {
    uVar36 = ((int)*puVar14 * -0x61c8864f ^ uVar36) >> (ulong)(0x18U - iVar23 & 0x1f);
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar22 = (ulong)(uVar36 >> 3) & 0x1fffffe0;
  lVar27 = lVar27 + uVar22 * 4;
  pbVar2 = (byte *)(lVar32 + uVar22);
  bVar30 = *pbVar2;
  bVar29 = (byte)uVar36;
  uVar58 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)pbVar2));
  uVar59 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar58));
  uVar60 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar59));
  uVar61 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar62 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar61));
  uVar63 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar62));
  uVar43 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar44 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar43));
  uVar45 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar44));
  uVar46 = CONCAT17(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar45));
  auVar47._0_10_ =
       CONCAT19(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar46));
  auVar47[10] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x16));
// WM - origin: github.com/pengussy
  auVar47[0xb] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar50[0xc] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar50._0_12_ = auVar47;
  auVar50[0xd] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar68[0xe] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar68._0_14_ = auVar50;
  auVar68[0xf] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar22 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar29 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar29 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar63)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar63 >> 0x26),
                                      CONCAT15((char)((uint)uVar62 >> 0x16),
                                               CONCAT14((char)(uVar61 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar29 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar29 ==
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar60)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar60 >> 0x26),
                                                           CONCAT11((char)((uint)uVar59 >> 0x16),
                                                                    (char)(uVar58 >> 6)))))))),
                    CONCAT17((char)(auVar68._14_2_ >> 6),
                             CONCAT16((char)(auVar50._12_2_ >> 6),
                                      CONCAT15((char)(auVar47._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar47._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar46 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar45 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar44 >> 0x16),(char)(uVar43 >> 6)))))))),4,1);
  uVar22 = (uVar22 >> ((ulong)bVar30 & 0x1f) * 2 | uVar22 << ((ulong)bVar30 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar22 != 0) {
    lVar32 = 0;
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    do {
      uVar16 = (uVar22 << 1 & 0xcccccccccccccccc) >> 2 | (uVar22 << 1 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + (bVar30 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
        if (uVar31 < uVar25) goto LAB_002cfe14;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_2d8[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) goto LAB_002cfe14;
    } while( true );
  }
  lVar32 = 0;
LAB_002cfe14:
  uVar25 = 0x1f;
  if ((bVar30 & 0x1f) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(bVar30 - 1 & 0x1f);
  *pbVar2 = (byte)lVar28;
  pbVar2[lVar28] = bVar29;
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_2d8[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002cff04;
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002cff04:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
            if ((char)*puVar15 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        }
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_1d8) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_348 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
  iVar23 = *(int *)(lVar20 + 0x34);
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (5 < uVar31) {
    uVar31 = 6;
  }
  uVar36 = (uint)*(undefined8 *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
/* wm:unlicensed copy if this notice is missing */
    uVar35 = *(uint *)(lVar20 + 0x2c);
    uVar16 = (ulong)uVar35;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar41 = uVar16 + 0x60;
        do {
          uVar35 = (*(int *)(lVar26 + 8 + uVar16) * -0x61c8864f ^ *(uint *)(lVar20 + 0x60)) >>
                   (ulong)(0x18U - iVar23 & 0x1f);
          uVar39 = (ulong)(uVar35 >> 2 & 0x3fffffc0);
          lVar17 = lVar27 + uVar39 * 4;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x40,0,0,0);
          lVar17 = lVar32 + uVar39;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x20,0,0,0);
          uVar24 = *(uint *)(lVar28 + (uVar16 & 7) * 4);
          *(uint *)(lVar28 + (uVar16 & 7) * 4) = uVar35;
          uVar39 = (ulong)(uVar24 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar32 + uVar39);
          uVar35 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar35 = 0;
          }
          lVar17 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar24;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          *(int *)(lVar27 + uVar39 * 4 + lVar17 * 4) = (int)uVar16;
          uVar16 = uVar16 + 1;
        } while (uVar41 != uVar16);
        lVar19 = *(long *)(lVar20 + 0x70);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar35 = uVar21 - 0x20;
      uVar16 = (ulong)uVar35;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar16);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar16 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar35 < iVar34 + uVar35) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar24 = *(uint *)(lVar20 + 0x60);
/* watermarked copy - do not remove - github.com/pengussy */
        do {
          uVar5 = (*(int *)(lVar26 + uVar16) * -0x61c8864f ^ uVar24) >>
                  (ulong)(0x18U - iVar38 & 0x1f);
          uVar41 = (ulong)(uVar5 >> 2 & 0x3fffffc0);
          lVar33 = lVar19 + uVar41 * 4;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x40,0,0,0);
          lVar33 = lVar17 + uVar41;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x20,0,0,0);
          *(uint *)(lVar28 + (uVar16 & 7) * 4) = uVar5;
          uVar16 = uVar16 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar35 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar16 = (ulong)uVar35;
      do {
        uVar35 = (*(int *)(lVar33 + 8 + uVar16) * -0x61c8864f ^ *(uint *)(lVar20 + 0x60)) >>
                 (ulong)(0x18U - iVar38 & 0x1f);
        uVar41 = (ulong)(uVar35 >> 2 & 0x3fffffc0);
        lVar3 = lVar19 + uVar41 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar17 + uVar41;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar24 = *(uint *)(lVar28 + (uVar16 & 7) * 4);
        *(uint *)(lVar28 + (uVar16 & 7) * 4) = uVar35;
        uVar41 = (ulong)(uVar24 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar17 + uVar41);
        uVar35 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar35 = 0;
        }
        lVar3 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar24;
        *(int *)(lVar19 + uVar41 * 4 + lVar3 * 4) = (int)uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar16 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
    uVar35 = (*(int *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x61c8864f ^ uVar36) >>
             (ulong)(0x18U - iVar23 & 0x1f);
/* if you paid for this, you were scammed - github.com/pengussy */
    uVar16 = (ulong)(uVar35 >> 2 & 0x3fffffc0);
    lVar17 = lVar27 + uVar16 * 4;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x40,0,0,0);
    lVar17 = lVar32 + uVar16;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x20,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(uint *)(lVar28 + (uVar22 & 7) * 4) = uVar35;
  }
  else {
    uVar36 = ((int)*puVar14 * -0x61c8864f ^ uVar36) >> (ulong)(0x18U - iVar23 & 0x1f);
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 2) & 0x3fffffc0;
  lVar27 = lVar27 + uVar22 * 4;
  pbVar2 = (byte *)(lVar32 + uVar22);
  bVar30 = (byte)uVar36;
  auVar64[0] = -(pbVar2[1] == bVar30);
  auVar64[1] = -(pbVar2[5] == bVar30);
  auVar64[2] = -(pbVar2[9] == bVar30);
  auVar64[3] = -(pbVar2[0xd] == bVar30);
  auVar64[4] = -(pbVar2[0x11] == bVar30);
  auVar64[5] = -(pbVar2[0x15] == bVar30);
  auVar64[6] = -(pbVar2[0x19] == bVar30);
  auVar64[7] = -(pbVar2[0x1d] == bVar30);
  auVar64[8] = -(pbVar2[0x21] == bVar30);
  auVar64[9] = -(pbVar2[0x25] == bVar30);
  auVar64[10] = -(pbVar2[0x29] == bVar30);
  auVar64[0xb] = -(pbVar2[0x2d] == bVar30);
  auVar64[0xc] = -(pbVar2[0x31] == bVar30);
/* WM - donate: donate/README.md */
  auVar64[0xd] = -(pbVar2[0x35] == bVar30);
  auVar64[0xe] = -(pbVar2[0x39] == bVar30);
  auVar64[0xf] = -(pbVar2[0x3d] == bVar30);
  auVar53[0] = -(pbVar2[3] == bVar30);
  auVar53[1] = -(pbVar2[7] == bVar30);
  auVar53[2] = -(pbVar2[0xb] == bVar30);
  auVar53[3] = -(pbVar2[0xf] == bVar30);
  auVar53[4] = -(pbVar2[0x13] == bVar30);
  auVar53[5] = -(pbVar2[0x17] == bVar30);
  auVar53[6] = -(pbVar2[0x1b] == bVar30);
  auVar53[7] = -(pbVar2[0x1f] == bVar30);
  auVar53[8] = -(pbVar2[0x23] == bVar30);
  auVar53[9] = -(pbVar2[0x27] == bVar30);
  auVar53[10] = -(pbVar2[0x2b] == bVar30);
  auVar53[0xb] = -(pbVar2[0x2f] == bVar30);
  auVar53[0xc] = -(pbVar2[0x33] == bVar30);
  auVar53[0xd] = -(pbVar2[0x37] == bVar30);
  auVar53[0xe] = -(pbVar2[0x3b] == bVar30);
  auVar53[0xf] = -(pbVar2[0x3f] == bVar30);
  auVar65[1] = -(pbVar2[4] == bVar30);
  auVar65[0] = -(*pbVar2 == bVar30);
  auVar65[2] = -(pbVar2[8] == bVar30);
  auVar65[3] = -(pbVar2[0xc] == bVar30);
  auVar65[4] = -(pbVar2[0x10] == bVar30);
  auVar65[5] = -(pbVar2[0x14] == bVar30);
  auVar65[6] = -(pbVar2[0x18] == bVar30);
  auVar65[7] = -(pbVar2[0x1c] == bVar30);
  auVar65[8] = -(pbVar2[0x20] == bVar30);
  auVar65[9] = -(pbVar2[0x24] == bVar30);
  auVar65[10] = -(pbVar2[0x28] == bVar30);
  auVar65[0xb] = -(pbVar2[0x2c] == bVar30);
  auVar65[0xc] = -(pbVar2[0x30] == bVar30);
  auVar65[0xd] = -(pbVar2[0x34] == bVar30);
  auVar65[0xe] = -(pbVar2[0x38] == bVar30);
  auVar65[0xf] = -(pbVar2[0x3c] == bVar30);
  auVar65 = NEON_sri(auVar64,auVar65,1,1);
  auVar11[1] = -(pbVar2[6] == bVar30);
  auVar11[0] = -(pbVar2[2] == bVar30);
// donate: donate/README.md
  auVar11[2] = -(pbVar2[10] == bVar30);
  auVar11[3] = -(pbVar2[0xe] == bVar30);
  auVar11[4] = -(pbVar2[0x12] == bVar30);
  auVar11[5] = -(pbVar2[0x16] == bVar30);
  auVar11[6] = -(pbVar2[0x1a] == bVar30);
  auVar11[7] = -(pbVar2[0x1e] == bVar30);
  auVar11[8] = -(pbVar2[0x22] == bVar30);
  auVar11[9] = -(pbVar2[0x26] == bVar30);
  auVar11[10] = -(pbVar2[0x2a] == bVar30);
  auVar11[0xb] = -(pbVar2[0x2e] == bVar30);
  auVar11[0xc] = -(pbVar2[0x32] == bVar30);
  auVar11[0xd] = -(pbVar2[0x36] == bVar30);
  auVar11[0xe] = -(pbVar2[0x3a] == bVar30);
  auVar11[0xf] = -(pbVar2[0x3e] == bVar30);
  auVar68 = NEON_sri(auVar53,auVar11,1,1);
  auVar68 = NEON_sri(auVar68,auVar65,2,1);
  auVar68 = NEON_sri(auVar68,auVar68,4,1);
  uVar22 = CONCAT17((char)(auVar68._14_2_ >> 4),
                    CONCAT16((char)(auVar68._12_2_ >> 4),
/* WM - reversing this took months of machine time */
                             CONCAT15((char)(auVar68._10_2_ >> 4),
                                      CONCAT14((char)(auVar68._8_2_ >> 4),
                                               CONCAT13((char)(auVar68._6_2_ >> 4),
                                                        CONCAT12((char)(auVar68._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar68._2_2_ >> 4)
                                                                          ,(char)(auVar68._0_2_ >> 4
                                                                                 ))))))));
  lVar32 = 0;
  uVar36 = (uint)*pbVar2;
  if (uVar22 != 0) {
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    uVar16 = (ulong)*pbVar2 & 0x3f;
    uVar22 = uVar22 >> uVar16 | uVar22 << 0x40 - uVar16;
    do {
      uVar16 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + uVar36 & 0x3f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
        if (uVar31 < uVar25) break;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_448[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
/*  unlicensed copy if this notice is missing  */
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) break;
    } while( true );
  }
  uVar25 = 0x3f;
  if ((uVar36 & 0x3f) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(uVar36 - 1 & 0x3f);
  *pbVar2 = (byte)lVar28;
  pbVar2[lVar28] = bVar30;
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_448[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d0488;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002d0488:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
            if ((char)*puVar15 == (char)*puVar18) {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
        }
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_348) {
/*  origin: github.com/pengussy  */
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
  iVar23 = *(int *)(lVar20 + 0x34);
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (3 < uVar31) {
    uVar31 = 4;
  }
  uVar16 = *(ulong *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
    uVar36 = *(uint *)(lVar20 + 0x2c);
    uVar41 = (ulong)uVar36;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar36) {
      if (uVar36 < 0xffffffa0) {
        uVar39 = uVar41 + 0x60;
        do {
          uVar40 = (*(long *)(lVar26 + 8 + uVar41) * -0x30e4432345000000 ^ *(ulong *)(lVar20 + 0x60)
                   ) >> ((ulong)(0x38 - iVar23) & 0x3f);
/* watermarked copy - do not remove */
          uVar37 = uVar40 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar27 + uVar37 * 4,0,0,0);
          Hint_Prefetch(lVar32 + uVar37,0,0,0);
          uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar40 = (ulong)(uVar35 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar32 + uVar40);
          uVar36 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar36 = 0;
          }
          lVar17 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0xf);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar35;
          *(int *)(lVar27 + uVar40 * 4 + lVar17 * 4) = (int)uVar41;
          uVar41 = uVar41 + 1;
        } while (uVar39 != uVar41);
        lVar19 = *(long *)(lVar20 + 0x70);
/*  reversing this took months of machine time  */
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar36 = uVar21 - 0x20;
      uVar41 = (ulong)uVar36;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar41);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar41 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar36 < iVar34 + uVar36) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar39 = *(ulong *)(lVar20 + 0x60);
        do {
          uVar40 = (*(long *)(lVar26 + uVar41) * -0x30e4432345000000 ^ uVar39) >>
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                   ((ulong)(0x38 - iVar38) & 0x3f);
          uVar37 = uVar40 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar19 + uVar37 * 4,0,0,0);
          Hint_Prefetch(lVar17 + uVar37,0,0,0);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar41 = uVar41 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar36 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar41 = (ulong)uVar36;
      do {
        uVar39 = (*(long *)(lVar33 + 8 + uVar41) * -0x30e4432345000000 ^ *(ulong *)(lVar20 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar40 = uVar39 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar19 + uVar40 * 4,0,0,0);
        Hint_Prefetch(lVar17 + uVar40,0,0,0);
        uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
        *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar39;
        uVar39 = (ulong)(uVar35 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar17 + uVar39);
        uVar36 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar36 = 0;
        }
        lVar3 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar35;
        *(int *)(lVar19 + uVar39 * 4 + lVar3 * 4) = (int)uVar41;
/* found on a paste site? it was re-uploaded illegally */
        uVar41 = uVar41 + 1;
      } while (uVar41 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
    uVar41 = (*(long *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar16) >>
             ((ulong)(0x38 - iVar23) & 0x3f);
    uVar16 = uVar41 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar27 + uVar16 * 4,0,0,0);
    Hint_Prefetch(lVar32 + uVar16,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(int *)(lVar28 + (uVar22 & 7) * 4) = (int)uVar41;
  }
  else {
    uVar36 = (uint)((*puVar14 * -0x30e4432345000000 ^ uVar16) >> ((ulong)(0x38 - iVar23) & 0x3f));
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 4) & 0xffffff0;
  lVar27 = lVar27 + uVar22 * 4;
  pauVar1 = (undefined1 (*) [16])(lVar32 + uVar22);
// WM - keep the notice, keep the source honest
  bVar30 = (*pauVar1)[0];
  auVar68 = *pauVar1;
  bVar29 = (byte)uVar36;
  bVar42 = auVar68[0];
  uVar43 = CONCAT11(-(auVar68[9] == bVar29),-(auVar68[8] == bVar29));
  uVar44 = CONCAT13(-(auVar68[0xb] == bVar29),CONCAT12(-(auVar68[10] == bVar29),uVar43));
  uVar45 = CONCAT15(-(auVar68[0xd] == bVar29),CONCAT14(-(auVar68[0xc] == bVar29),uVar44));
  uVar22 = CONCAT17((char)(CONCAT17(-(auVar68[0xf] == bVar29),
                                    CONCAT16(-(auVar68[0xe] == bVar29),uVar45)) >> 0x34),
                    CONCAT16((char)((uint6)uVar45 >> 0x24),
                             CONCAT15((char)((uint)uVar44 >> 0x14),
                                      CONCAT14((char)(uVar43 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar68[7] == bVar29),
                                                                        -(auVar68[6] == bVar29)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar68[
                                                  5] == bVar29),-(auVar68[4] == bVar29)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar68[3] == bVar29),
                                                                           -(auVar68[2] == bVar29))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar68[1] == bVar29),
                                                                           -(bVar42 == bVar29)) >> 4
                                                                 ))))))));
  uVar16 = (ulong)bVar30 & 0xf;
  uVar22 = (uVar22 >> uVar16 * 4 | uVar22 << uVar16 * -4 + 0x40) & 0x8888888888888888;
  if (uVar22 != 0) {
    lVar32 = 0;
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar16 = (uVar22 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + (bVar30 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
// keep the notice, keep the source honest
        if (uVar31 < uVar25) goto LAB_002d0914;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_5b8[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) goto LAB_002d0914;
    } while( true );
  }
  lVar32 = 0;
LAB_002d0914:
  uVar25 = 0xf;
  if ((bVar42 & 0xf) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(bVar42 - 1 & 0xf);
  (*pauVar1)[0] = (char)lVar28;
  (*pauVar1)[lVar28] = bVar29;
/*  more drops soon - github.com/pengussy  */
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_5b8[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d0a04;
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002d0a04:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
            if ((char)*puVar15 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
        }
/*  stripping the watermark breaks the license  */
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_4b8) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_628 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
  iVar23 = *(int *)(lVar20 + 0x34);
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (4 < uVar31) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    uVar31 = 5;
  }
  uVar16 = *(ulong *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
    uVar36 = *(uint *)(lVar20 + 0x2c);
    uVar41 = (ulong)uVar36;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar36) {
      if (uVar36 < 0xffffffa0) {
        uVar39 = uVar41 + 0x60;
        do {
          uVar40 = (*(long *)(lVar26 + 8 + uVar41) * -0x30e4432345000000 ^ *(ulong *)(lVar20 + 0x60)
                   ) >> ((ulong)(0x38 - iVar23) & 0x3f);
          uVar37 = uVar40 >> 3 & 0x1fffffe0;
          lVar17 = lVar27 + uVar37 * 4;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x40,0,0,0);
          Hint_Prefetch(lVar32 + uVar37,0,0,0);
          uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar40 = (ulong)(uVar35 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar32 + uVar40);
          uVar36 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar36 = 0;
          }
          lVar17 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x1f);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar35;
/* reversing this took months of machine time */
          *(int *)(lVar27 + uVar40 * 4 + lVar17 * 4) = (int)uVar41;
          uVar41 = uVar41 + 1;
        } while (uVar39 != uVar41);
        lVar19 = *(long *)(lVar20 + 0x70);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar36 = uVar21 - 0x20;
      uVar41 = (ulong)uVar36;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar41);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar41 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar36 < iVar34 + uVar36) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar39 = *(ulong *)(lVar20 + 0x60);
        do {
          uVar40 = (*(long *)(lVar26 + uVar41) * -0x30e4432345000000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar38) & 0x3f);
          uVar37 = uVar40 >> 3 & 0x1fffffe0;
          lVar33 = lVar19 + uVar37 * 4;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x40,0,0,0);
          Hint_Prefetch(lVar17 + uVar37,0,0,0);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar41 = uVar41 + 1;
          iVar34 = iVar34 + -1;
/* no support for modified copies */
        } while (iVar34 != 0);
      }
    }
    if (uVar36 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar41 = (ulong)uVar36;
      do {
        uVar39 = (*(long *)(lVar33 + 8 + uVar41) * -0x30e4432345000000 ^ *(ulong *)(lVar20 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar40 = uVar39 >> 3 & 0x1fffffe0;
        lVar3 = lVar19 + uVar40 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar17 + uVar40,0,0,0);
        uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
        *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar39;
        uVar39 = (ulong)(uVar35 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar17 + uVar39);
        uVar36 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
          uVar36 = 0;
        }
        lVar3 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar35;
        *(int *)(lVar19 + uVar39 * 4 + lVar3 * 4) = (int)uVar41;
        uVar41 = uVar41 + 1;
      } while (uVar41 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
    uVar41 = (*(long *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar16) >>
/* wm:watermarked copy - do not remove */
             ((ulong)(0x38 - iVar23) & 0x3f);
    uVar16 = uVar41 >> 3 & 0x1fffffe0;
    lVar17 = lVar27 + uVar16 * 4;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x40,0,0,0);
    Hint_Prefetch(lVar32 + uVar16,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(int *)(lVar28 + (uVar22 & 7) * 4) = (int)uVar41;
  }
  else {
    uVar36 = (uint)((*puVar14 * -0x30e4432345000000 ^ uVar16) >> ((ulong)(0x38 - iVar23) & 0x3f));
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 3) & 0x1fffffe0;
  lVar27 = lVar27 + uVar22 * 4;
  pbVar2 = (byte *)(lVar32 + uVar22);
  bVar30 = *pbVar2;
  bVar29 = (byte)uVar36;
  uVar58 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)pbVar2));
  uVar59 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar58));
  uVar60 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar59));
  uVar61 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar62 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar61));
  uVar63 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar62));
  uVar43 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar44 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
// WM - proprietary - see LICENSE - do not sell
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar43));
  uVar45 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar44));
  uVar46 = CONCAT17(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar45));
  auVar48._0_10_ =
       CONCAT19(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar46));
  auVar48[10] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar48[0xb] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar51[0xc] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar51._0_12_ = auVar48;
  auVar51[0xd] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar54[0xe] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar54._0_14_ = auVar51;
  auVar54[0xf] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar22 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar29 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar29 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar63)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar63 >> 0x26),
                                      CONCAT15((char)((uint)uVar62 >> 0x16),
                                               CONCAT14((char)(uVar61 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar29 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar29 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar60)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar60 >> 0x26),
/* thanks for reading - discord.gg/sdkhDjTex */
                                                           CONCAT11((char)((uint)uVar59 >> 0x16),
                                                                    (char)(uVar58 >> 6)))))))),
                    CONCAT17((char)(auVar54._14_2_ >> 6),
                             CONCAT16((char)(auVar51._12_2_ >> 6),
                                      CONCAT15((char)(auVar48._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar48._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar46 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar45 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar44 >> 0x16),(char)(uVar43 >> 6)))))))),4,1);
  uVar22 = (uVar22 >> ((ulong)bVar30 & 0x1f) * 2 | uVar22 << ((ulong)bVar30 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar22 != 0) {
    lVar32 = 0;
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar16 = (uVar22 << 1 & 0xcccccccccccccccc) >> 2 | (uVar22 << 1 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + (bVar30 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
        if (uVar31 < uVar25) goto LAB_002d0e88;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_728[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) goto LAB_002d0e88;
    } while( true );
  }
  lVar32 = 0;
// watermarked copy - do not remove
LAB_002d0e88:
  uVar25 = 0x1f;
  if ((bVar30 & 0x1f) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(bVar30 - 1 & 0x1f);
  *pbVar2 = (byte)lVar28;
  pbVar2[lVar28] = bVar29;
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_728[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
/* wm:chat: discord.gg/sdkhDjTex */
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d0f78;
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002d0f78:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
/* wm:if you paid for this, you were scammed */
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
            if ((char)*puVar15 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
        }
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_628) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_798 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
  iVar23 = *(int *)(lVar20 + 0x34);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (5 < uVar31) {
    uVar31 = 6;
  }
  uVar16 = *(ulong *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
    uVar36 = *(uint *)(lVar20 + 0x2c);
    uVar41 = (ulong)uVar36;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar36) {
      if (uVar36 < 0xffffffa0) {
        uVar39 = uVar41 + 0x60;
        do {
          uVar40 = (*(long *)(lVar26 + 8 + uVar41) * -0x30e4432345000000 ^ *(ulong *)(lVar20 + 0x60)
                   ) >> ((ulong)(0x38 - iVar23) & 0x3f);
          uVar37 = uVar40 >> 2 & 0x3fffffc0;
          lVar17 = lVar27 + uVar37 * 4;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x40,0,0,0);
          lVar17 = lVar32 + uVar37;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x20,0,0,0);
          uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
/*  chat: discord.gg/sdkhDjTex  */
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar40 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar32 + uVar40);
          uVar36 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar36 = 0;
          }
          lVar17 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar35;
          *(int *)(lVar27 + uVar40 * 4 + lVar17 * 4) = (int)uVar41;
          uVar41 = uVar41 + 1;
        } while (uVar39 != uVar41);
        lVar19 = *(long *)(lVar20 + 0x70);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar36 = uVar21 - 0x20;
      uVar41 = (ulong)uVar36;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar41);
      iVar38 = 8;
/*  proprietary - see LICENSE - do not sell  */
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar41 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar36 < iVar34 + uVar36) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar39 = *(ulong *)(lVar20 + 0x60);
        do {
          uVar40 = (*(long *)(lVar26 + uVar41) * -0x30e4432345000000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar38) & 0x3f);
          uVar37 = uVar40 >> 2 & 0x3fffffc0;
          lVar33 = lVar19 + uVar37 * 4;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x40,0,0,0);
          lVar33 = lVar17 + uVar37;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x20,0,0,0);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar41 = uVar41 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar36 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar41 = (ulong)uVar36;
      do {
        uVar39 = (*(long *)(lVar33 + 8 + uVar41) * -0x30e4432345000000 ^ *(ulong *)(lVar20 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar40 = uVar39 >> 2 & 0x3fffffc0;
        lVar3 = lVar19 + uVar40 * 4;
/* WM - origin: github.com/pengussy */
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar17 + uVar40;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
        *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar39;
        uVar39 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar17 + uVar39);
        uVar36 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar36 = 0;
        }
        lVar3 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar35;
        *(int *)(lVar19 + uVar39 * 4 + lVar3 * 4) = (int)uVar41;
        uVar41 = uVar41 + 1;
      } while (uVar41 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
    uVar41 = (*(long *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar16) >>
             ((ulong)(0x38 - iVar23) & 0x3f);
    uVar16 = uVar41 >> 2 & 0x3fffffc0;
    lVar17 = lVar27 + uVar16 * 4;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x40,0,0,0);
/* wm:reversing this took months of machine time */
    lVar17 = lVar32 + uVar16;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x20,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(int *)(lVar28 + (uVar22 & 7) * 4) = (int)uVar41;
  }
  else {
    uVar36 = (uint)((*puVar14 * -0x30e4432345000000 ^ uVar16) >> ((ulong)(0x38 - iVar23) & 0x3f));
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 2) & 0x3fffffc0;
  lVar27 = lVar27 + uVar22 * 4;
  pbVar2 = (byte *)(lVar32 + uVar22);
  bVar30 = (byte)uVar36;
  auVar66[0] = -(pbVar2[1] == bVar30);
  auVar66[1] = -(pbVar2[5] == bVar30);
  auVar66[2] = -(pbVar2[9] == bVar30);
  auVar66[3] = -(pbVar2[0xd] == bVar30);
  auVar66[4] = -(pbVar2[0x11] == bVar30);
  auVar66[5] = -(pbVar2[0x15] == bVar30);
  auVar66[6] = -(pbVar2[0x19] == bVar30);
  auVar66[7] = -(pbVar2[0x1d] == bVar30);
  auVar66[8] = -(pbVar2[0x21] == bVar30);
  auVar66[9] = -(pbVar2[0x25] == bVar30);
  auVar66[10] = -(pbVar2[0x29] == bVar30);
  auVar66[0xb] = -(pbVar2[0x2d] == bVar30);
  auVar66[0xc] = -(pbVar2[0x31] == bVar30);
  auVar66[0xd] = -(pbVar2[0x35] == bVar30);
  auVar66[0xe] = -(pbVar2[0x39] == bVar30);
  auVar66[0xf] = -(pbVar2[0x3d] == bVar30);
  auVar55[0] = -(pbVar2[3] == bVar30);
  auVar55[1] = -(pbVar2[7] == bVar30);
  auVar55[2] = -(pbVar2[0xb] == bVar30);
  auVar55[3] = -(pbVar2[0xf] == bVar30);
  auVar55[4] = -(pbVar2[0x13] == bVar30);
/*  watermarked copy - do not remove  */
  auVar55[5] = -(pbVar2[0x17] == bVar30);
  auVar55[6] = -(pbVar2[0x1b] == bVar30);
  auVar55[7] = -(pbVar2[0x1f] == bVar30);
  auVar55[8] = -(pbVar2[0x23] == bVar30);
  auVar55[9] = -(pbVar2[0x27] == bVar30);
  auVar55[10] = -(pbVar2[0x2b] == bVar30);
  auVar55[0xb] = -(pbVar2[0x2f] == bVar30);
  auVar55[0xc] = -(pbVar2[0x33] == bVar30);
  auVar55[0xd] = -(pbVar2[0x37] == bVar30);
  auVar55[0xe] = -(pbVar2[0x3b] == bVar30);
  auVar55[0xf] = -(pbVar2[0x3f] == bVar30);
  auVar9[1] = -(pbVar2[4] == bVar30);
  auVar9[0] = -(*pbVar2 == bVar30);
  auVar9[2] = -(pbVar2[8] == bVar30);
  auVar9[3] = -(pbVar2[0xc] == bVar30);
  auVar9[4] = -(pbVar2[0x10] == bVar30);
  auVar9[5] = -(pbVar2[0x14] == bVar30);
  auVar9[6] = -(pbVar2[0x18] == bVar30);
  auVar9[7] = -(pbVar2[0x1c] == bVar30);
  auVar9[8] = -(pbVar2[0x20] == bVar30);
  auVar9[9] = -(pbVar2[0x24] == bVar30);
  auVar9[10] = -(pbVar2[0x28] == bVar30);
  auVar9[0xb] = -(pbVar2[0x2c] == bVar30);
  auVar9[0xc] = -(pbVar2[0x30] == bVar30);
  auVar9[0xd] = -(pbVar2[0x34] == bVar30);
  auVar9[0xe] = -(pbVar2[0x38] == bVar30);
  auVar9[0xf] = -(pbVar2[0x3c] == bVar30);
  auVar65 = NEON_sri(auVar66,auVar9,1,1);
  auVar12[1] = -(pbVar2[6] == bVar30);
  auVar12[0] = -(pbVar2[2] == bVar30);
  auVar12[2] = -(pbVar2[10] == bVar30);
  auVar12[3] = -(pbVar2[0xe] == bVar30);
  auVar12[4] = -(pbVar2[0x12] == bVar30);
  auVar12[5] = -(pbVar2[0x16] == bVar30);
// WM - unlicensed copy if this notice is missing
  auVar12[6] = -(pbVar2[0x1a] == bVar30);
  auVar12[7] = -(pbVar2[0x1e] == bVar30);
  auVar12[8] = -(pbVar2[0x22] == bVar30);
  auVar12[9] = -(pbVar2[0x26] == bVar30);
  auVar12[10] = -(pbVar2[0x2a] == bVar30);
  auVar12[0xb] = -(pbVar2[0x2e] == bVar30);
  auVar12[0xc] = -(pbVar2[0x32] == bVar30);
  auVar12[0xd] = -(pbVar2[0x36] == bVar30);
  auVar12[0xe] = -(pbVar2[0x3a] == bVar30);
  auVar12[0xf] = -(pbVar2[0x3e] == bVar30);
  auVar68 = NEON_sri(auVar55,auVar12,1,1);
  auVar68 = NEON_sri(auVar68,auVar65,2,1);
  auVar68 = NEON_sri(auVar68,auVar68,4,1);
  uVar22 = CONCAT17((char)(auVar68._14_2_ >> 4),
                    CONCAT16((char)(auVar68._12_2_ >> 4),
                             CONCAT15((char)(auVar68._10_2_ >> 4),
                                      CONCAT14((char)(auVar68._8_2_ >> 4),
                                               CONCAT13((char)(auVar68._6_2_ >> 4),
                                                        CONCAT12((char)(auVar68._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar68._2_2_ >> 4)
                                                                          ,(char)(auVar68._0_2_ >> 4
                                                                                 ))))))));
  lVar32 = 0;
  uVar36 = (uint)*pbVar2;
  if (uVar22 != 0) {
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    uVar16 = (ulong)*pbVar2 & 0x3f;
    uVar22 = uVar22 >> uVar16 | uVar22 << 0x40 - uVar16;
    do {
      uVar16 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + uVar36 & 0x3f;
/* WM - unlicensed copy if this notice is missing */
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
        if (uVar31 < uVar25) break;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_898[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) break;
    } while( true );
  }
  uVar25 = 0x3f;
  if ((uVar36 & 0x3f) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(uVar36 - 1 & 0x3f);
  *pbVar2 = (byte)lVar28;
  pbVar2[lVar28] = bVar30;
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_898[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
/* proprietary - see LICENSE - do not sell */
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d1500;
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
/* WM - found on a paste site? it was re-uploaded illegally */
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002d1500:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
            if ((char)*puVar15 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
/* WM - if you paid for this, you were scammed */
        }
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_798) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_908 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
  iVar23 = *(int *)(lVar20 + 0x34);
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
// origin: github.com/pengussy
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (3 < uVar31) {
    uVar31 = 4;
  }
  uVar16 = *(ulong *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
    uVar36 = *(uint *)(lVar20 + 0x2c);
    uVar41 = (ulong)uVar36;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar36) {
      if (uVar36 < 0xffffffa0) {
        uVar39 = uVar41 + 0x60;
        do {
          uVar40 = (*(long *)(lVar26 + 8 + uVar41) * -0x30e4432340650000 ^ *(ulong *)(lVar20 + 0x60)
                   ) >> ((ulong)(0x38 - iVar23) & 0x3f);
          uVar37 = uVar40 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar27 + uVar37 * 4,0,0,0);
/* origin: github.com/pengussy - github.com/pengussy */
          Hint_Prefetch(lVar32 + uVar37,0,0,0);
          uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar40 = (ulong)(uVar35 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar32 + uVar40);
          uVar36 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar36 = 0;
          }
          lVar17 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0xf);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar35;
          *(int *)(lVar27 + uVar40 * 4 + lVar17 * 4) = (int)uVar41;
          uVar41 = uVar41 + 1;
        } while (uVar39 != uVar41);
        lVar19 = *(long *)(lVar20 + 0x70);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar36 = uVar21 - 0x20;
      uVar41 = (ulong)uVar36;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar41);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar41 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar36 < iVar34 + uVar36) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar39 = *(ulong *)(lVar20 + 0x60);
        do {
// WM - found on a paste site? it was re-uploaded illegally
          uVar40 = (*(long *)(lVar26 + uVar41) * -0x30e4432340650000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar38) & 0x3f);
          uVar37 = uVar40 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar19 + uVar37 * 4,0,0,0);
          Hint_Prefetch(lVar17 + uVar37,0,0,0);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar41 = uVar41 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar36 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar41 = (ulong)uVar36;
      do {
        uVar39 = (*(long *)(lVar33 + 8 + uVar41) * -0x30e4432340650000 ^ *(ulong *)(lVar20 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar40 = uVar39 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar19 + uVar40 * 4,0,0,0);
        Hint_Prefetch(lVar17 + uVar40,0,0,0);
        uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
        *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar39;
        uVar39 = (ulong)(uVar35 >> 4) & 0xffffff0;
        pbVar2 = (byte *)(lVar17 + uVar39);
        uVar36 = 0xf;
        if ((*pbVar2 & 0xf) != 1) {
          uVar36 = 0;
        }
        lVar3 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0xf);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar35;
        *(int *)(lVar19 + uVar39 * 4 + lVar3 * 4) = (int)uVar41;
        uVar41 = uVar41 + 1;
      } while (uVar41 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar41 = (*(long *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar16) >>
             ((ulong)(0x38 - iVar23) & 0x3f);
    uVar16 = uVar41 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar27 + uVar16 * 4,0,0,0);
    Hint_Prefetch(lVar32 + uVar16,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(int *)(lVar28 + (uVar22 & 7) * 4) = (int)uVar41;
  }
  else {
    uVar36 = (uint)((*puVar14 * -0x30e4432340650000 ^ uVar16) >> ((ulong)(0x38 - iVar23) & 0x3f));
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 4) & 0xffffff0;
  lVar27 = lVar27 + uVar22 * 4;
  pauVar1 = (undefined1 (*) [16])(lVar32 + uVar22);
  bVar30 = (*pauVar1)[0];
  auVar68 = *pauVar1;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  bVar29 = (byte)uVar36;
  bVar42 = auVar68[0];
  uVar43 = CONCAT11(-(auVar68[9] == bVar29),-(auVar68[8] == bVar29));
  uVar44 = CONCAT13(-(auVar68[0xb] == bVar29),CONCAT12(-(auVar68[10] == bVar29),uVar43));
  uVar45 = CONCAT15(-(auVar68[0xd] == bVar29),CONCAT14(-(auVar68[0xc] == bVar29),uVar44));
  uVar22 = CONCAT17((char)(CONCAT17(-(auVar68[0xf] == bVar29),
                                    CONCAT16(-(auVar68[0xe] == bVar29),uVar45)) >> 0x34),
                    CONCAT16((char)((uint6)uVar45 >> 0x24),
                             CONCAT15((char)((uint)uVar44 >> 0x14),
                                      CONCAT14((char)(uVar43 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar68[7] == bVar29),
                                                                        -(auVar68[6] == bVar29)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar68[
                                                  5] == bVar29),-(auVar68[4] == bVar29)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar68[3] == bVar29),
                                                                           -(auVar68[2] == bVar29))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar68[1] == bVar29),
                                                                           -(bVar42 == bVar29)) >> 4
                                                                 ))))))));
  uVar16 = (ulong)bVar30 & 0xf;
  uVar22 = (uVar22 >> uVar16 * 4 | uVar22 << uVar16 * -4 + 0x40) & 0x8888888888888888;
  if (uVar22 != 0) {
    lVar32 = 0;
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar16 = (uVar22 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + (bVar30 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
/* do not claim this as your own */
        if (uVar31 < uVar25) goto LAB_002d198c;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_a08[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) goto LAB_002d198c;
    } while( true );
  }
  lVar32 = 0;
LAB_002d198c:
  uVar25 = 0xf;
  if ((bVar42 & 0xf) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(bVar42 - 1 & 0xf);
  (*pauVar1)[0] = (char)lVar28;
  (*pauVar1)[lVar28] = bVar29;
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
/* stripping the watermark breaks the license */
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_a08[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d1a7c;
// WM - donate: donate/README.md
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002d1a7c:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
// WM - thanks for reading - discord.gg/sdkhDjTex
            if ((char)*puVar15 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
        }
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_908) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_a78 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
  iVar23 = *(int *)(lVar20 + 0x34);
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (4 < uVar31) {
    uVar31 = 5;
  }
  uVar16 = *(ulong *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
    uVar36 = *(uint *)(lVar20 + 0x2c);
    uVar41 = (ulong)uVar36;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar36) {
      if (uVar36 < 0xffffffa0) {
        uVar39 = uVar41 + 0x60;
        do {
          uVar40 = (*(long *)(lVar26 + 8 + uVar41) * -0x30e4432340650000 ^ *(ulong *)(lVar20 + 0x60)
                   ) >> ((ulong)(0x38 - iVar23) & 0x3f);
          uVar37 = uVar40 >> 3 & 0x1fffffe0;
          lVar17 = lVar27 + uVar37 * 4;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x40,0,0,0);
          Hint_Prefetch(lVar32 + uVar37,0,0,0);
          uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar40 = (ulong)(uVar35 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar32 + uVar40);
          uVar36 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar36 = 0;
          }
          lVar17 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x1f);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar35;
// more drops soon - github.com/pengussy
          *(int *)(lVar27 + uVar40 * 4 + lVar17 * 4) = (int)uVar41;
          uVar41 = uVar41 + 1;
        } while (uVar39 != uVar41);
        lVar19 = *(long *)(lVar20 + 0x70);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar36 = uVar21 - 0x20;
      uVar41 = (ulong)uVar36;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar41);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar41 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
      }
      if (uVar36 < iVar34 + uVar36) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar39 = *(ulong *)(lVar20 + 0x60);
        do {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          uVar40 = (*(long *)(lVar26 + uVar41) * -0x30e4432340650000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar38) & 0x3f);
          uVar37 = uVar40 >> 3 & 0x1fffffe0;
          lVar33 = lVar19 + uVar37 * 4;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x40,0,0,0);
          Hint_Prefetch(lVar17 + uVar37,0,0,0);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar41 = uVar41 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar36 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar41 = (ulong)uVar36;
      do {
        uVar39 = (*(long *)(lVar33 + 8 + uVar41) * -0x30e4432340650000 ^ *(ulong *)(lVar20 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar40 = uVar39 >> 3 & 0x1fffffe0;
        lVar3 = lVar19 + uVar40 * 4;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        Hint_Prefetch(lVar17 + uVar40,0,0,0);
        uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
        *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar39;
        uVar39 = (ulong)(uVar35 >> 3) & 0x1fffffe0;
        pbVar2 = (byte *)(lVar17 + uVar39);
        uVar36 = 0x1f;
        if ((*pbVar2 & 0x1f) != 1) {
/* if you paid for this, you were scammed */
          uVar36 = 0;
        }
        lVar3 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x1f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar35;
        *(int *)(lVar19 + uVar39 * 4 + lVar3 * 4) = (int)uVar41;
        uVar41 = uVar41 + 1;
      } while (uVar41 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
    uVar41 = (*(long *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar16) >>
             ((ulong)(0x38 - iVar23) & 0x3f);
    uVar16 = uVar41 >> 3 & 0x1fffffe0;
    lVar17 = lVar27 + uVar16 * 4;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x40,0,0,0);
    Hint_Prefetch(lVar32 + uVar16,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(int *)(lVar28 + (uVar22 & 7) * 4) = (int)uVar41;
  }
  else {
    uVar36 = (uint)((*puVar14 * -0x30e4432340650000 ^ uVar16) >> ((ulong)(0x38 - iVar23) & 0x3f));
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 3) & 0x1fffffe0;
  lVar27 = lVar27 + uVar22 * 4;
  pbVar2 = (byte *)(lVar32 + uVar22);
  bVar30 = *pbVar2;
  bVar29 = (byte)uVar36;
  uVar58 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
/* wm:do not claim this as your own */
                    -(bVar29 == (byte)*(undefined2 *)pbVar2));
  uVar59 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar58));
  uVar60 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar59));
  uVar61 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar62 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar61));
  uVar63 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar62));
  uVar43 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar44 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar43));
  uVar45 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar44));
  uVar46 = CONCAT17(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar45));
  auVar49._0_10_ =
       CONCAT19(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar46));
  auVar49[10] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar49[0xb] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar52[0xc] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar52._0_12_ = auVar49;
  auVar52[0xd] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar56[0xe] = -(bVar29 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar56._0_14_ = auVar52;
  auVar56[0xf] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
// proprietary - see LICENSE - do not sell
  uVar22 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar29 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar29 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar63)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar63 >> 0x26),
                                      CONCAT15((char)((uint)uVar62 >> 0x16),
                                               CONCAT14((char)(uVar61 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar29 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar29 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar60)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar60 >> 0x26),
                                                           CONCAT11((char)((uint)uVar59 >> 0x16),
                                                                    (char)(uVar58 >> 6)))))))),
                    CONCAT17((char)(auVar56._14_2_ >> 6),
                             CONCAT16((char)(auVar52._12_2_ >> 6),
                                      CONCAT15((char)(auVar49._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar49._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar46 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar45 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar44 >> 0x16),(char)(uVar43 >> 6)))))))),4,1);
  uVar22 = (uVar22 >> ((ulong)bVar30 & 0x1f) * 2 | uVar22 << ((ulong)bVar30 & 0x1f) * -2 + 0x40) &
/* WM - keep the notice, keep the source honest */
           0x5555555555555555;
  if (uVar22 != 0) {
    lVar32 = 0;
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar16 = (uVar22 << 1 & 0xcccccccccccccccc) >> 2 | (uVar22 << 1 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + (bVar30 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
        if (uVar31 < uVar25) goto LAB_002d1f00;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_b78[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) goto LAB_002d1f00;
    } while( true );
  }
  lVar32 = 0;
LAB_002d1f00:
  uVar25 = 0x1f;
  if ((bVar30 & 0x1f) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(bVar30 - 1 & 0x1f);
/* wm:found on a paste site? it was re-uploaded illegally */
  *pbVar2 = (byte)lVar28;
  pbVar2[lVar28] = bVar29;
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_b78[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d1ff0;
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_002d1ff0:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
            if ((char)*puVar15 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
        }
// do not claim this as your own
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_a78) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
  lVar20 = auVar68._0_8_;
  lStack_be8 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar27 = *(long *)(lVar20 + 0x70);
  lVar32 = *(long *)(lVar20 + 0x38);
  iVar23 = *(int *)(lVar20 + 0x34);
  lVar26 = *(long *)(lVar20 + 8);
  uVar31 = 1 << (ulong)(*(uint *)(lVar20 + 0x100) & 0x1f);
  uVar22 = (long)puVar14 - lVar26;
  uVar21 = (uint)uVar22;
  uVar25 = uVar21 - uVar31;
  if (uVar21 - *(uint *)(lVar20 + 0x1c) <= uVar31 || *(int *)(lVar20 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar20 + 0x1c);
  }
  uVar31 = *(uint *)(lVar20 + 0x10c);
  if (5 < uVar31) {
    uVar31 = 6;
  }
  uVar16 = *(ulong *)(lVar20 + 0x60);
  if (*(int *)(lVar20 + 300) == 0) {
    lVar28 = lVar20 + 0x40;
    uVar36 = *(uint *)(lVar20 + 0x2c);
    uVar41 = (ulong)uVar36;
    lVar17 = lVar32;
    lVar19 = lVar27;
    if (0x180 < uVar21 - uVar36) {
      if (uVar36 < 0xffffffa0) {
        uVar39 = uVar41 + 0x60;
/*  donate: donate/README.md  */
        do {
          uVar40 = (*(long *)(lVar26 + 8 + uVar41) * -0x30e4432340650000 ^ *(ulong *)(lVar20 + 0x60)
                   ) >> ((ulong)(0x38 - iVar23) & 0x3f);
          uVar37 = uVar40 >> 2 & 0x3fffffc0;
          lVar17 = lVar27 + uVar37 * 4;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x40,0,0,0);
          lVar17 = lVar32 + uVar37;
          Hint_Prefetch(lVar17,0,0,0);
          Hint_Prefetch(lVar17 + 0x20,0,0,0);
          uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar40 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar32 + uVar40);
          uVar36 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar36 = 0;
          }
          lVar17 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar17;
          pbVar2[lVar17] = (byte)uVar35;
          *(int *)(lVar27 + uVar40 * 4 + lVar17 * 4) = (int)uVar41;
          uVar41 = uVar41 + 1;
        } while (uVar39 != uVar41);
        lVar19 = *(long *)(lVar20 + 0x70);
        lVar17 = *(long *)(lVar20 + 0x38);
      }
      uVar36 = uVar21 - 0x20;
      uVar41 = (ulong)uVar36;
      iVar34 = (int)((long)puVar14 + 1U) - (int)(lVar26 + uVar41);
      iVar38 = 8;
      if (iVar34 + 1U < 8) {
        iVar38 = iVar34 + 1;
      }
      iVar34 = 0;
      if (lVar26 + uVar41 <= (long)puVar14 + 1U) {
        iVar34 = iVar38;
// thanks for reading - discord.gg/sdkhDjTex
      }
      if (uVar36 < iVar34 + uVar36) {
        iVar38 = *(int *)(lVar20 + 0x34);
        uVar39 = *(ulong *)(lVar20 + 0x60);
        do {
          uVar40 = (*(long *)(lVar26 + uVar41) * -0x30e4432340650000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar38) & 0x3f);
          uVar37 = uVar40 >> 2 & 0x3fffffc0;
          lVar33 = lVar19 + uVar37 * 4;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x40,0,0,0);
          lVar33 = lVar17 + uVar37;
          Hint_Prefetch(lVar33,0,0,0);
          Hint_Prefetch(lVar33 + 0x20,0,0,0);
          *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar40;
          uVar41 = uVar41 + 1;
          iVar34 = iVar34 + -1;
        } while (iVar34 != 0);
      }
    }
    if (uVar36 < uVar21) {
      lVar33 = *(long *)(lVar20 + 8);
      iVar38 = *(int *)(lVar20 + 0x34);
      uVar41 = (ulong)uVar36;
      do {
        uVar39 = (*(long *)(lVar33 + 8 + uVar41) * -0x30e4432340650000 ^ *(ulong *)(lVar20 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar40 = uVar39 >> 2 & 0x3fffffc0;
        lVar3 = lVar19 + uVar40 * 4;
/* wm:no support for modified copies */
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x40,0,0,0);
        lVar3 = lVar17 + uVar40;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar35 = *(uint *)(lVar28 + (uVar41 & 7) * 4);
        *(int *)(lVar28 + (uVar41 & 7) * 4) = (int)uVar39;
        uVar39 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar17 + uVar39);
        uVar36 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar36 = 0;
        }
        lVar3 = (ulong)uVar36 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar3;
        pbVar2[lVar3] = (byte)uVar35;
        *(int *)(lVar19 + uVar39 * 4 + lVar3 * 4) = (int)uVar41;
        uVar41 = uVar41 + 1;
/* no support for modified copies - github.com/pengussy */
      } while (uVar41 < (uVar22 & 0xffffffff));
    }
    *(uint *)(lVar20 + 0x2c) = uVar21;
    uVar41 = (*(long *)(lVar26 + (uVar22 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar16) >>
             ((ulong)(0x38 - iVar23) & 0x3f);
    uVar16 = uVar41 >> 2 & 0x3fffffc0;
    lVar17 = lVar27 + uVar16 * 4;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x40,0,0,0);
    lVar17 = lVar32 + uVar16;
    Hint_Prefetch(lVar17,0,0,0);
    Hint_Prefetch(lVar17 + 0x20,0,0,0);
    uVar36 = *(uint *)(lVar28 + (uVar22 & 7) * 4);
    *(int *)(lVar28 + (uVar22 & 7) * 4) = (int)uVar41;
  }
  else {
    uVar36 = (uint)((*puVar14 * -0x30e4432340650000 ^ uVar16) >> ((ulong)(0x38 - iVar23) & 0x3f));
    *(uint *)(lVar20 + 0x2c) = uVar21;
  }
  *(uint *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + uVar36;
  uVar22 = (ulong)(uVar36 >> 2) & 0x3fffffc0;
  lVar27 = lVar27 + uVar22 * 4;
  pbVar2 = (byte *)(lVar32 + uVar22);
  bVar30 = (byte)uVar36;
  auVar67[0] = -(pbVar2[1] == bVar30);
  auVar67[1] = -(pbVar2[5] == bVar30);
  auVar67[2] = -(pbVar2[9] == bVar30);
/* WM - chat: discord.gg/sdkhDjTex */
  auVar67[3] = -(pbVar2[0xd] == bVar30);
  auVar67[4] = -(pbVar2[0x11] == bVar30);
  auVar67[5] = -(pbVar2[0x15] == bVar30);
  auVar67[6] = -(pbVar2[0x19] == bVar30);
  auVar67[7] = -(pbVar2[0x1d] == bVar30);
  auVar67[8] = -(pbVar2[0x21] == bVar30);
  auVar67[9] = -(pbVar2[0x25] == bVar30);
  auVar67[10] = -(pbVar2[0x29] == bVar30);
  auVar67[0xb] = -(pbVar2[0x2d] == bVar30);
  auVar67[0xc] = -(pbVar2[0x31] == bVar30);
  auVar67[0xd] = -(pbVar2[0x35] == bVar30);
  auVar67[0xe] = -(pbVar2[0x39] == bVar30);
  auVar67[0xf] = -(pbVar2[0x3d] == bVar30);
  auVar57[0] = -(pbVar2[3] == bVar30);
  auVar57[1] = -(pbVar2[7] == bVar30);
  auVar57[2] = -(pbVar2[0xb] == bVar30);
  auVar57[3] = -(pbVar2[0xf] == bVar30);
  auVar57[4] = -(pbVar2[0x13] == bVar30);
  auVar57[5] = -(pbVar2[0x17] == bVar30);
  auVar57[6] = -(pbVar2[0x1b] == bVar30);
  auVar57[7] = -(pbVar2[0x1f] == bVar30);
  auVar57[8] = -(pbVar2[0x23] == bVar30);
  auVar57[9] = -(pbVar2[0x27] == bVar30);
  auVar57[10] = -(pbVar2[0x2b] == bVar30);
  auVar57[0xb] = -(pbVar2[0x2f] == bVar30);
  auVar57[0xc] = -(pbVar2[0x33] == bVar30);
  auVar57[0xd] = -(pbVar2[0x37] == bVar30);
  auVar57[0xe] = -(pbVar2[0x3b] == bVar30);
  auVar57[0xf] = -(pbVar2[0x3f] == bVar30);
  auVar10[1] = -(pbVar2[4] == bVar30);
  auVar10[0] = -(*pbVar2 == bVar30);
  auVar10[2] = -(pbVar2[8] == bVar30);
  auVar10[3] = -(pbVar2[0xc] == bVar30);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  auVar10[4] = -(pbVar2[0x10] == bVar30);
  auVar10[5] = -(pbVar2[0x14] == bVar30);
  auVar10[6] = -(pbVar2[0x18] == bVar30);
  auVar10[7] = -(pbVar2[0x1c] == bVar30);
  auVar10[8] = -(pbVar2[0x20] == bVar30);
  auVar10[9] = -(pbVar2[0x24] == bVar30);
  auVar10[10] = -(pbVar2[0x28] == bVar30);
  auVar10[0xb] = -(pbVar2[0x2c] == bVar30);
  auVar10[0xc] = -(pbVar2[0x30] == bVar30);
  auVar10[0xd] = -(pbVar2[0x34] == bVar30);
  auVar10[0xe] = -(pbVar2[0x38] == bVar30);
  auVar10[0xf] = -(pbVar2[0x3c] == bVar30);
  auVar65 = NEON_sri(auVar67,auVar10,1,1);
  auVar13[1] = -(pbVar2[6] == bVar30);
  auVar13[0] = -(pbVar2[2] == bVar30);
  auVar13[2] = -(pbVar2[10] == bVar30);
/* more drops soon - github.com/pengussy */
  auVar13[3] = -(pbVar2[0xe] == bVar30);
  auVar13[4] = -(pbVar2[0x12] == bVar30);
  auVar13[5] = -(pbVar2[0x16] == bVar30);
  auVar13[6] = -(pbVar2[0x1a] == bVar30);
  auVar13[7] = -(pbVar2[0x1e] == bVar30);
  auVar13[8] = -(pbVar2[0x22] == bVar30);
  auVar13[9] = -(pbVar2[0x26] == bVar30);
  auVar13[10] = -(pbVar2[0x2a] == bVar30);
  auVar13[0xb] = -(pbVar2[0x2e] == bVar30);
  auVar13[0xc] = -(pbVar2[0x32] == bVar30);
  auVar13[0xd] = -(pbVar2[0x36] == bVar30);
  auVar13[0xe] = -(pbVar2[0x3a] == bVar30);
  auVar13[0xf] = -(pbVar2[0x3e] == bVar30);
  auVar68 = NEON_sri(auVar57,auVar13,1,1);
  auVar68 = NEON_sri(auVar68,auVar65,2,1);
  auVar68 = NEON_sri(auVar68,auVar68,4,1);
  uVar22 = CONCAT17((char)(auVar68._14_2_ >> 4),
                    CONCAT16((char)(auVar68._12_2_ >> 4),
                             CONCAT15((char)(auVar68._10_2_ >> 4),
                                      CONCAT14((char)(auVar68._8_2_ >> 4),
                                               CONCAT13((char)(auVar68._6_2_ >> 4),
                                                        CONCAT12((char)(auVar68._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar68._2_2_ >> 4)
                                                                          ,(char)(auVar68._0_2_ >> 4
                                                                                 ))))))));
  lVar32 = 0;
  uVar36 = (uint)*pbVar2;
  if (uVar22 != 0) {
    iVar23 = 1 << (ulong)(uVar31 & 0x1f);
    uVar16 = (ulong)*pbVar2 & 0x3f;
    uVar22 = uVar22 >> uVar16 | uVar22 << 0x40 - uVar16;
    do {
      uVar16 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
/* WM - no support for modified copies */
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + uVar36 & 0x3f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar27 + (ulong)uVar31 * 4);
        if (uVar31 < uVar25) break;
        Hint_Prefetch(lVar26 + (ulong)uVar31,0,0,0);
        auStack_ce8[lVar32] = uVar31;
        lVar32 = lVar32 + 1;
        iVar23 = iVar23 + -1;
      }
      uVar22 = uVar22 - 1 & uVar22;
      if ((uVar22 == 0) || (iVar23 == 0)) break;
    } while( true );
  }
  uVar25 = 0x3f;
  if ((uVar36 & 0x3f) != 1) {
    uVar25 = 0;
  }
  lVar28 = (ulong)uVar25 + (ulong)(uVar36 - 1 & 0x3f);
  *pbVar2 = (byte)lVar28;
  pbVar2[lVar28] = bVar30;
  iVar23 = *(int *)(lVar20 + 0x2c);
  *(int *)(lVar20 + 0x2c) = iVar23 + 1;
  *(int *)(lVar27 + lVar28 * 4) = iVar23;
  if (lVar32 == 0) {
    uVar22 = 3;
  }
  else {
    lVar27 = 0;
    uVar16 = 3;
    do {
      uVar25 = auStack_ce8[lVar27];
      puVar15 = (ulong *)(lVar26 + (ulong)uVar25);
      if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
/*  found on a paste site? it was re-uploaded illegally  */
        puVar18 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar15 == *puVar14) {
            lVar20 = 0;
            puVar15 = (ulong *)(lVar26 + 8 + (ulong)uVar25);
            do {
              puVar18 = puVar18 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_002d2578;
              uVar22 = *puVar15;
              lVar20 = lVar20 + 8;
              puVar15 = puVar15 + 1;
            } while (uVar22 == *puVar18);
            uVar22 = *puVar18 ^ uVar22;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar20 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar14 ^ *puVar15;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
// chat: discord.gg/sdkhDjTex
          }
        }
        else {
LAB_002d2578:
          if (puVar18 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar15 == (int)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
          }
          if (puVar18 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar18) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar18 = (ulong *)((long)puVar18 + 2);
            }
          }
          if (puVar18 < param_3) {
            if ((char)*puVar15 == (char)*puVar18) {
              puVar18 = (ulong *)((long)puVar18 + 1);
            }
          }
// WM - stripping the watermark breaks the license
          uVar22 = (long)puVar18 - (long)puVar14;
        }
        if (uVar16 < uVar22) {
          *param_4 = (ulong)((uVar21 + 3) - uVar25);
          uVar16 = uVar22;
          if ((ulong *)((long)puVar14 + uVar22) == param_3) break;
        }
      }
      uVar22 = uVar16;
      lVar27 = lVar27 + 1;
      uVar16 = uVar22;
    } while (lVar27 != lVar32);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_be8) {
    return uVar22;
  }
  auVar68 = ___stack_chk_fail(uVar22);
  puVar14 = auVar68._8_8_;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  lVar26 = auVar68._0_8_;
  lVar32 = *(long *)(lVar26 + 0x80);
  uVar36 = 1 << (ulong)(*(uint *)(lVar26 + 0x104) & 0x1f);
  lVar27 = *(long *)(lVar26 + 8);
  lVar20 = *(long *)(lVar26 + 0x10);
  uVar35 = 1 << (ulong)(*(uint *)(lVar26 + 0x100) & 0x1f);
  uVar31 = *(uint *)(lVar26 + 0x18);
  uVar24 = (uint)((long)puVar14 - lVar27);
  uVar21 = *(uint *)(lVar26 + 0x2c);
  uVar22 = (ulong)uVar21;
  uVar25 = uVar24 - uVar35;
  if (uVar24 - *(uint *)(lVar26 + 0x1c) <= uVar35 || *(int *)(lVar26 + 0x28) != 0) {
    uVar25 = *(uint *)(lVar26 + 0x1c);
  }
  uVar35 = 0;
  if (uVar36 <= uVar24) {
    uVar35 = uVar24 - uVar36;
  }
  uVar5 = *(uint *)(lVar26 + 0x10c);
  lVar28 = *(long *)(lVar26 + 0x70);
  uVar7 = ~(-1 << (ulong)(*(uint *)(lVar26 + 0x104) & 0x1f));
  uVar8 = 0x20 - *(int *)(lVar26 + 0x108);
  if (*(int *)(lVar26 + 300) == 0) {
    if (uVar21 < uVar24) {
      do {
        uVar21 = (uint)(*(int *)(lVar27 + uVar22) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar32 + (ulong)((uint)uVar22 & uVar7) * 4) =
             *(undefined4 *)(lVar28 + (ulong)uVar21 * 4);
        *(uint *)(lVar28 + (ulong)uVar21 * 4) = (uint)uVar22;
        uVar22 = uVar22 + 1;
      } while (uVar22 < ((long)puVar14 - lVar27 & 0xffffffffU));
    }
  }
  else if (uVar21 < uVar24) {
/* origin: github.com/pengussy */
    uVar6 = (uint)(*(int *)(lVar27 + uVar22) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar32 + (ulong)(uVar21 & uVar7) * 4) =
         *(undefined4 *)(lVar28 + (ulong)uVar6 * 4);
    *(uint *)(lVar28 + (ulong)uVar6 * 4) = uVar21;
  }
  *(uint *)(lVar26 + 0x2c) = uVar24;
  uVar22 = *puVar14;
  uVar21 = *(uint *)(lVar28 + (ulong)((uint)((int)uVar22 * -0x61c8864f) >> (ulong)(uVar8 & 0x1f)) *
                              4);
  if (uVar21 < uVar25) {
    uVar16 = 3;
  }
  else {
    iVar23 = 1 << (ulong)(uVar5 & 0x1f);
    uVar16 = 3;
    do {
      uVar41 = (ulong)uVar21;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      if (uVar21 < uVar31) {
        piVar4 = (int *)(lVar20 + uVar41);
        if (*piVar4 == (int)uVar22) {
          lVar26 = func_0x002ad924((int *)((long)puVar14 + 4),piVar4 + 1,param_3,
                                   lVar20 + (ulong)uVar31,lVar27 + (ulong)uVar31);
          uVar41 = lVar26 + 4;
          goto joined_r0x002d2a54;
        }
      }
      else {
        puVar15 = (ulong *)(lVar27 + uVar41);
        if (*(int *)((long)puVar15 + (uVar16 - 3)) == *(int *)((long)puVar14 + (uVar16 - 3))) {
          puVar18 = puVar14;
          if (puVar14 < (ulong *)((long)param_3 + -7)) {
            if (*puVar15 == *puVar14) {
              lVar26 = 0;
              puVar15 = (ulong *)(lVar27 + 8 + uVar41);
              do {
                puVar18 = puVar18 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar18) goto code_r0x002d29fc;
                uVar41 = *puVar15;
                lVar26 = lVar26 + 8;
                puVar15 = puVar15 + 1;
// WM - no support for modified copies
              } while (uVar41 == *puVar18);
              uVar41 = *puVar18 ^ uVar41;
              uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1;
              uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
              uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
              uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
              uVar41 = lVar26 + ((ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3);
            }
            else {
              uVar41 = *puVar14 ^ *puVar15;
              uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1;
              uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
              uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
              uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
              uVar41 = (ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3;
            }
          }
          else {
code_r0x002d29fc:
            if (puVar18 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar15 == (int)*puVar18) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar18 = (ulong *)((long)puVar18 + 4);
              }
            }
            if (puVar18 < (ulong *)((long)param_3 + -1)) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
              if ((short)*puVar15 == (short)*puVar18) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar18 = (ulong *)((long)puVar18 + 2);
              }
            }
            if (puVar18 < param_3) {
              if ((char)*puVar15 == (char)*puVar18) {
                puVar18 = (ulong *)((long)puVar18 + 1);
              }
            }
            uVar41 = (long)puVar18 - (long)puVar14;
          }
joined_r0x002d2a54:
          if (uVar16 < uVar41) {
            *param_4 = (ulong)((uVar24 + 3) - uVar21);
            uVar16 = uVar41;
            if ((ulong *)((long)puVar14 + uVar41) == param_3) {
              return uVar41;
            }
          }
        }
      }
      if ((uVar21 <= uVar35) || (iVar23 = iVar23 + -1, iVar23 == 0)) {
        return uVar16;
      }
      uVar21 = *(uint *)(lVar32 + (ulong)(uVar21 & uVar36 - 1) * 4);
    } while (uVar25 <= uVar21);
  }
  return uVar16;
}

