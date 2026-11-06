/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2e1ea0:fed1517368
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x002e2244) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_002e1ea0(long param_1,long *param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  ulong *puVar2;
  uint *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong **ppuVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong *puVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
/*  origin: github.com/pengussy  */
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  undefined8 *puVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  uint uVar38;
  ulong *puVar39;
  long lVar40;
  undefined4 *puVar41;
  ulong uVar42;
  int iVar43;
  ulong uVar44;
  uint *puVar45;
// more drops soon - github.com/pengussy
  uint *puVar46;
  int *piVar47;
  long lVar48;
  ulong *puVar49;
  ulong uVar50;
  ulong uVar51;
  ulong *puVar52;
  long *plVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  long *plVar57;
  ulong *puVar58;
  long lVar59;
  ulong *puVar60;
  uint uVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
/* wm:proprietary - see LICENSE - do not sell */
  ulong uStack_b0;
  ulong *puStack_a0;
  ulong *puStack_98;
  uint uStack_8c;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar27 = param_5 >> 0x14;
  if ((param_5 & 0xfffff) != 0) {
    uVar27 = uVar27 + 1;
  }
  if (param_5 == 0) {
    return 0;
  }
  uVar24 = 0;
  uVar50 = 0;
  uVar8 = 1 << (ulong)(*(uint *)(param_3 + 0x14) & 0x1f);
  uVar44 = param_2[3];
  do {
    if ((ulong)param_2[4] <= uVar44) {
      return 0;
    }
    puVar58 = (ulong *)(param_4 + uVar24 * 0x100000);
    puVar4 = (ulong *)(param_4 + param_5);
    if (0xfffff < param_5 + uVar24 * -0x100000) {
      puVar4 = puVar58 + 0x20000;
    }
    lVar59 = *(long *)(param_1 + 8);
    uVar26 = (int)puVar4 - (int)lVar59;
    if (uVar26 < 0xdac00001) {
      uVar38 = *(uint *)(param_1 + 0x1c);
      if (uVar26 <= *(int *)(param_1 + 0x30) + uVar8) goto LAB_002e1f90;
LAB_002e21a8:
      uVar26 = uVar26 - uVar8;
      if (uVar38 < uVar26) {
        *(uint *)(param_1 + 0x1c) = uVar26;
        uVar38 = uVar26;
/* wm:chat: discord.gg/sdkhDjTex */
      }
      uVar26 = *(uint *)(param_1 + 0x18);
      if (*(uint *)(param_1 + 0x18) < uVar38) {
        *(uint *)(param_1 + 0x18) = uVar38;
        uVar26 = uVar38;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      uStack_b0 = (ulong)*(uint *)(param_3 + 0xc);
      iVar31 = *(int *)(param_3 + 4);
      uVar30 = (ulong)*(uint *)(param_3 + 8);
      if (uVar38 < uVar26) goto LAB_002e21ec;
LAB_002e1fa8:
      lVar40 = 0;
      uVar33 = uVar26;
    }
    else {
      uVar26 = *(uint *)(param_3 + 4);
      uVar30 = 1L << ((ulong)uVar26 & 0x3f);
      uVar33 = ((int)puVar58 - (int)lVar59) - uVar8;
      uVar38 = uVar33 - 2;
      *(ulong *)(param_1 + 8) = lVar59 + (ulong)uVar38;
      *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar38;
      uVar20 = (uint)*(undefined8 *)(param_1 + 0x18);
      uVar64 = (uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      uVar34 = CONCAT44(uVar64 - uVar38,uVar20 - uVar38);
      *(ulong *)(param_1 + 0x18) =
           uVar34 ^ (uVar34 ^ 0x200000002) &
                    CONCAT44(-(uint)(uVar64 < uVar33),-(uint)(uVar20 < uVar33));
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      lVar59 = *(long *)(param_1 + 0x28);
      if (uVar26 < 3) {
        lVar40 = 0;
/* WM - watermarked copy - do not remove */
      }
      else {
        if (uVar26 < 5) {
          lVar16 = 0;
        }
        else {
          uVar34 = 0x10;
          if ((uVar30 & 0xf) != 0) {
            uVar34 = uVar30 & 0xf;
          }
          lVar40 = uVar30 - uVar34;
          puVar41 = (undefined4 *)(lVar59 + 0x40);
          uVar36 = uVar30;
          do {
            auVar61._0_4_ = puVar41[-0x10];
            auVar61._4_4_ = puVar41[-0xe];
            auVar61._8_4_ = puVar41[-0xc];
            auVar61._12_4_ = puVar41[-10];
            auVar66._0_4_ = puVar41[-8];
            auVar66._4_4_ = puVar41[-6];
            auVar66._8_4_ = puVar41[-4];
            auVar66._12_4_ = puVar41[-2];
            auVar63._4_4_ = uVar38;
            auVar63._0_4_ = uVar38;
            auVar63._8_4_ = uVar38;
            auVar63._12_4_ = uVar38;
            auVar63 = NEON_uqsub(auVar61,auVar63,4);
            puVar41[-0x10] = auVar63._0_4_;
            puVar41[-0xe] = auVar63._4_4_;
            puVar41[-0xc] = auVar63._8_4_;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
            puVar41[-10] = auVar63._12_4_;
            auVar65._4_4_ = uVar38;
            auVar65._0_4_ = uVar38;
            auVar65._8_4_ = uVar38;
            auVar65._12_4_ = uVar38;
            auVar63 = NEON_uqsub(auVar66,auVar65,4);
            auVar67._4_4_ = uVar38;
            auVar67._0_4_ = uVar38;
            auVar67._8_4_ = uVar38;
            auVar67._12_4_ = uVar38;
            auVar12._4_4_ = puVar41[2];
            auVar12._0_4_ = *puVar41;
            auVar12._8_4_ = puVar41[4];
            auVar12._12_4_ = puVar41[6];
            auVar65 = NEON_uqsub(auVar12,auVar67,4);
            puVar41[-8] = auVar63._0_4_;
            puVar41[-4] = auVar63._8_4_;
            auVar11._4_4_ = uVar38;
            auVar11._0_4_ = uVar38;
            auVar11._8_4_ = uVar38;
            auVar11._12_4_ = uVar38;
            auVar13._4_4_ = puVar41[10];
            auVar13._0_4_ = puVar41[8];
/*  stripping the watermark breaks the license  */
            auVar13._8_4_ = puVar41[0xc];
            auVar13._12_4_ = puVar41[0xe];
            auVar67 = NEON_uqsub(auVar13,auVar11,4);
            puVar41[-2] = auVar63._12_4_;
            puVar41[-6] = auVar63._4_4_;
            *puVar41 = auVar65._0_4_;
            puVar41[2] = auVar65._4_4_;
            puVar41[4] = auVar65._8_4_;
            puVar41[6] = auVar65._12_4_;
            puVar41[8] = auVar67._0_4_;
            puVar41[0xc] = auVar67._8_4_;
            puVar41[10] = auVar67._4_4_;
            puVar41[0xe] = auVar67._12_4_;
            puVar41 = puVar41 + 0x20;
            uVar36 = uVar36 - 0x10;
          } while (uVar34 != uVar36);
// WM - watermarked copy - do not remove
          lVar16 = lVar40;
          if (uVar34 < 5) goto LAB_002e2168;
        }
        uVar34 = 4;
        if ((uVar30 & 3) != 0) {
          uVar34 = uVar30 & 3;
        }
        lVar40 = uVar30 - uVar34;
        lVar56 = (uVar34 + lVar16) - uVar30;
        puVar41 = (undefined4 *)(lVar59 + lVar16 * 8);
        do {
          auVar62._0_4_ = *puVar41;
          auVar62._4_4_ = puVar41[2];
          auVar62._8_4_ = puVar41[4];
          auVar62._12_4_ = puVar41[6];
          auVar10._4_4_ = uVar38;
          auVar10._0_4_ = uVar38;
          auVar10._8_4_ = uVar38;
          auVar10._12_4_ = uVar38;
          auVar63 = NEON_uqsub(auVar62,auVar10,4);
          *puVar41 = auVar63._0_4_;
          puVar41[2] = auVar63._4_4_;
          puVar41[4] = auVar63._8_4_;
          puVar41[6] = auVar63._12_4_;
          lVar56 = lVar56 + 4;
          puVar41 = puVar41 + 8;
        } while (lVar56 != 0);
      }
LAB_002e2168:
      lVar16 = uVar30 - lVar40;
      puVar46 = (uint *)(lVar59 + lVar40 * 8);
      do {
        uVar26 = 0;
        if (uVar38 <= *puVar46) {
          uVar26 = *puVar46 - uVar38;
        }
        *puVar46 = uVar26;
/* wm:reversing this took months of machine time */
        lVar16 = lVar16 + -1;
        puVar46 = puVar46 + 2;
      } while (lVar16 != 0);
      *(undefined4 *)(param_1 + 0x30) = 0;
      lVar59 = *(long *)(param_1 + 8);
      uVar26 = (int)puVar4 - (int)lVar59;
      uVar38 = *(uint *)(param_1 + 0x1c);
      if (uVar8 < uVar26) goto LAB_002e21a8;
LAB_002e1f90:
      uVar26 = *(uint *)(param_1 + 0x18);
      uStack_b0 = (ulong)*(uint *)(param_3 + 0xc);
      iVar31 = *(int *)(param_3 + 4);
      uVar30 = (ulong)*(uint *)(param_3 + 8);
      if (uVar26 <= uVar38) goto LAB_002e1fa8;
LAB_002e21ec:
      lVar40 = *(long *)(param_1 + 0x10);
      uVar33 = uVar38;
    }
    puStack_a0 = (ulong *)(lVar40 + (ulong)uVar33);
    if (uVar26 <= uVar38) {
      puStack_a0 = (ulong *)0x0;
    }
    uVar34 = (ulong)uVar26;
    puVar5 = (ulong *)(lVar40 + uVar34);
    if (uVar26 <= uVar38) {
      puVar5 = (ulong *)0x0;
    }
    uVar36 = (long)puVar4 - (long)puVar58;
    if (uVar36 < uStack_b0) {
      uVar30 = uVar44;
LAB_002e1f2c:
      uVar50 = uVar36 + uVar50;
/* WM - if you paid for this, you were scammed */
      uVar44 = uVar30;
    }
    else {
      puVar2 = (ulong *)((long)puVar58 + uVar36);
      puVar15 = puVar2 + -1;
      uVar64 = *(uint *)(param_3 + 0x10);
      uVar20 = (uint)uStack_b0;
      if (0x3f < uVar20) {
        uVar20 = 0x40;
      }
      uVar9 = uVar20 - uVar64;
      if (uVar20 <= uVar64 - 1) {
        uVar9 = 0;
      }
      lStack_80 = ~(-1L << ((ulong)uVar64 & 0x3f)) << ((ulong)uVar9 & 0x3f);
      uStack_88 = 0xffffffff;
      puVar52 = (ulong *)((long)puVar58 + uStack_b0);
      uVar35 = uVar36;
      if (puVar52 < puVar15) {
        puStack_98 = (ulong *)(lVar59 + uVar34);
        puVar49 = (ulong *)((long)puVar2 - 7);
        do {
          uStack_8c = 0;
          lVar16 = func_0x002e1cec(&uStack_88,puVar52,(long)puVar15 - (long)puVar52,
                                   (long *)(param_1 + 0x40),&uStack_8c);
          uVar35 = (ulong)uStack_8c;
          if (uStack_8c != 0) {
            uVar20 = *(uint *)(param_3 + 8);
            lVar56 = *(long *)(param_1 + 0x28);
            uVar29 = uVar35;
            plVar53 = (long *)(param_1 + 0x40);
            plVar57 = (long *)(param_1 + 0x250);
            do {
              lVar28 = (long)puVar52 + (*plVar53 - uStack_b0);
              uVar17 = func_0x00297438(lVar28,uStack_b0,0);
// reversing this took months of machine time
              uVar64 = (uint)uVar17 & ~(-1 << (ulong)(iVar31 - (int)uVar30 & 0x1f));
              plVar57[-2] = lVar28;
              *(uint *)(plVar57 + -1) = uVar64;
              *(int *)((long)plVar57 + -4) = (int)((ulong)uVar17 >> 0x20);
              lVar28 = (ulong)uVar64 << ((ulong)uVar20 & 0x3f);
              *plVar57 = lVar56 + lVar28 * 8;
              Hint_Prefetch(lVar56 + lVar28 * 8,0,0,0);
              uVar29 = uVar29 - 1;
              plVar53 = plVar53 + 1;
              plVar57 = plVar57 + 3;
            } while (uVar29 != 0);
            uVar29 = 0;
            do {
              puVar32 = (undefined8 *)(param_1 + 0x240 + uVar29 * 0x18);
              puVar39 = (ulong *)*puVar32;
              uVar6 = (ulong)*(uint *)(puVar32 + 1);
              uVar20 = *(uint *)((long)puVar32 + 0xc);
              uVar37 = (long)puVar39 - lVar59;
              if (puVar39 < puVar58) {
LAB_002e2410:
// no support for modified copies
                uVar64 = *(uint *)(param_3 + 8);
                lVar56 = *(long *)(param_1 + 0x38);
                bVar7 = *(byte *)(lVar56 + uVar6);
                *(ulong *)(*(long *)(param_1 + 0x28) + (uVar6 << ((ulong)uVar64 & 0x3f)) * 8 +
                          (ulong)bVar7 * 8) = uVar37 & 0xffffffff | (ulong)uVar20 << 0x20;
                *(byte *)(lVar56 + uVar6) =
                     bVar7 + 1 & ((byte)(-1 << (ulong)(uVar64 & 0x1f)) ^ 0xff);
              }
              else {
                puVar46 = (uint *)puVar32[2];
                puVar3 = puVar46 + (1L << (uVar30 & 0x3f)) * 2;
                if (uVar38 < uVar26) {
                  uVar42 = 0;
                  lVar56 = 0;
                  uVar18 = 0;
                  puVar45 = (uint *)0x0;
                  do {
                    if (puVar46[1] == uVar20) {
                      uVar64 = *puVar46;
                      uVar22 = (ulong)uVar64;
                      if (uVar33 < uVar64) {
                        puVar19 = (ulong *)(lVar40 + uVar34);
                        lVar28 = lVar40;
                        if (uVar26 <= uVar64) {
                          puVar19 = puVar2;
                          lVar28 = lVar59;
                        }
                        puVar21 = (ulong *)(lVar28 + uVar22);
                        puVar23 = (ulong *)((long)puVar39 + ((long)puVar19 - (long)puVar21));
                        if (puVar4 <= puVar23) {
                          puVar23 = puVar2;
                        }
/* do not claim this as your own - github.com/pengussy */
                        if (puVar39 < (ulong *)((long)puVar23 - 7U)) {
                          if (*puVar21 == *puVar39) {
                            lVar48 = 0;
                            puVar25 = (ulong *)(lVar28 + uVar22);
                            puVar60 = puVar39 + 1;
                            do {
                              puVar25 = puVar25 + 1;
                              if ((ulong *)((long)puVar23 - 7U) <= puVar60) {
                                if (puVar60 < (ulong *)((long)puVar23 - 3U)) goto LAB_002e258c;
                                goto LAB_002e25a8;
                              }
                              uVar55 = *puVar60;
                              lVar48 = lVar48 + 8;
                              puVar60 = puVar60 + 1;
                            } while (*puVar25 == uVar55);
                            uVar55 = uVar55 ^ *puVar25;
                            uVar55 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar55 & 0x5555555555555555) << 1;
                            uVar55 = (uVar55 & 0xcccccccccccccccc) >> 2 |
                                     (uVar55 & 0x3333333333333333) << 2;
                            uVar55 = (uVar55 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar55 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar55 = (uVar55 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar55 & 0xff00ff00ff00ff) << 8;
                            uVar55 = (uVar55 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar55 & 0xffff0000ffff) << 0x10;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                            uVar55 = lVar48 + ((ulong)LZCOUNT(uVar55 >> 0x20 | uVar55 << 0x20) >> 3)
                            ;
                          }
                          else {
                            uVar55 = *puVar39 ^ *puVar21;
                            uVar55 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar55 & 0x5555555555555555) << 1;
                            uVar55 = (uVar55 & 0xcccccccccccccccc) >> 2 |
                                     (uVar55 & 0x3333333333333333) << 2;
                            uVar55 = (uVar55 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar55 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar55 = (uVar55 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar55 & 0xff00ff00ff00ff) << 8;
                            uVar55 = (uVar55 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar55 & 0xffff0000ffff) << 0x10;
                            uVar55 = (ulong)LZCOUNT(uVar55 >> 0x20 | uVar55 << 0x20) >> 3;
                          }
                        }
                        else {
                          puVar25 = puVar21;
                          puVar60 = puVar39;
                          if (puVar39 < (ulong *)((long)puVar23 - 3U)) {
LAB_002e258c:
                            if ((int)*puVar25 == (int)*puVar60) {
                              puVar60 = (ulong *)((long)puVar60 + 4);
                              puVar25 = (ulong *)((long)puVar25 + 4);
                            }
                          }
LAB_002e25a8:
                          if (puVar60 < (ulong *)((long)puVar23 - 1U)) {
                            if ((short)*puVar25 == (short)*puVar60) {
                              puVar60 = (ulong *)((long)puVar60 + 2);
                              puVar25 = (ulong *)((long)puVar25 + 2);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                            }
                          }
                          if (puVar60 < puVar23) {
                            if ((char)*puVar25 == (char)*puVar60) {
                              puVar60 = (ulong *)((long)puVar60 + 1);
                            }
                          }
                          uVar55 = (long)puVar60 - (long)puVar39;
                        }
                        if ((ulong *)((long)puVar21 + uVar55) == puVar19) {
                          puVar19 = (ulong *)((long)puVar39 + uVar55);
                          puVar23 = puVar19;
                          puVar25 = puStack_98;
                          if (puVar19 < puVar49) {
                            if (*puStack_98 == *puVar19) {
                              lVar48 = 0;
                              puVar25 = (ulong *)(lVar59 + 8 + uVar34);
                              puVar23 = (ulong *)((long)(puVar39 + 1) + uVar55);
                              do {
                                if (puVar49 <= puVar23) goto joined_r0x002e26d4;
                                uVar51 = *puVar25;
                                uVar54 = *puVar23;
                                lVar48 = lVar48 + 8;
                                puVar25 = puVar25 + 1;
                                puVar23 = puVar23 + 1;
                              } while (uVar51 == uVar54);
                              uVar54 = uVar54 ^ uVar51;
                              uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                       (uVar54 & 0x5555555555555555) << 1;
                              uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 |
/* WM - do not claim this as your own */
                                       (uVar54 & 0x3333333333333333) << 2;
                              uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                       (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                              uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 |
                                       (uVar54 & 0xff00ff00ff00ff) << 8;
                              uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                                       (uVar54 & 0xffff0000ffff) << 0x10;
                              uVar55 = lVar48 + ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >>
                                                3) + uVar55;
                            }
                            else {
                              uVar54 = *puVar19 ^ *puStack_98;
                              uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                       (uVar54 & 0x5555555555555555) << 1;
                              uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 |
                                       (uVar54 & 0x3333333333333333) << 2;
                              uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                       (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                              uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 |
                                       (uVar54 & 0xff00ff00ff00ff) << 8;
                              uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                                       (uVar54 & 0xffff0000ffff) << 0x10;
                              uVar55 = ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3) +
                                       uVar55;
                            }
                          }
                          else {
joined_r0x002e26d4:
                            if (puVar23 < (ulong *)((long)puVar2 - 3U)) {
                              if ((int)*puVar25 == (int)*puVar23) {
                                puVar23 = (ulong *)((long)puVar23 + 4);
                                puVar25 = (ulong *)((long)puVar25 + 4);
                              }
                            }
                            if (puVar23 < (ulong *)((long)puVar2 - 1U)) {
                              if ((short)*puVar25 == (short)*puVar23) {
                                puVar23 = (ulong *)((long)puVar23 + 2);
                                puVar25 = (ulong *)((long)puVar25 + 2);
                              }
                            }
                            if (puVar23 < puVar4) {
                              if ((char)*puVar25 == (char)*puVar23) {
                                puVar23 = (ulong *)((long)puVar23 + 1);
                              }
                            }
                            uVar55 = (long)puVar23 + (uVar55 - (long)puVar19);
                          }
                        }
                        if (uStack_b0 <= uVar55) {
                          lVar48 = 0;
                          ppuVar14 = &puStack_a0;
                          if (uVar26 <= uVar64) {
                            ppuVar14 = &puStack_98;
// found on a paste site? it was re-uploaded illegally
                          }
                          puVar19 = *ppuVar14;
                          if ((puVar58 < puVar39) && (puVar19 < puVar21)) {
                            lVar48 = 0;
                            puVar23 = (ulong *)(lVar28 + uVar22);
                            puVar25 = (ulong *)((long)puVar39 + -1);
                            do {
                              puVar23 = (ulong *)((long)puVar23 + -1);
                              if (((char)*puVar25 != *(char *)puVar23) ||
                                 (lVar48 = lVar48 + 1, puVar25 <= puVar58)) break;
                              puVar25 = (ulong *)((long)puVar25 + -1);
                            } while (puVar19 < puVar23);
                          }
                          if ((puVar19 != puStack_a0) &&
                             ((ulong *)((long)puVar21 - lVar48) == puVar19)) {
                            lVar28 = 0;
                            if ((puStack_a0 < puVar5) &&
                               (puVar58 < (ulong *)((long)puVar39 + -lVar48))) {
                              lVar28 = 0;
                              puVar19 = (ulong *)((long)puVar39 + -1 + -lVar48);
                              puVar21 = puVar5;
                              do {
                                puVar21 = (ulong *)((long)puVar21 - 1);
/* found on a paste site? it was re-uploaded illegally */
                                if (((char)*puVar19 != (char)*puVar21) ||
                                   (lVar28 = lVar28 + 1, puVar19 <= puVar58)) break;
                                puVar19 = (ulong *)((long)puVar19 + -1);
                              } while (puStack_a0 < puVar21);
                            }
                            lVar48 = lVar28 + lVar48;
                          }
                          if (uVar18 < lVar48 + uVar55) {
                            uVar18 = lVar48 + uVar55;
                            uVar42 = uVar55;
                            lVar56 = lVar48;
                            puVar45 = puVar46;
                          }
                        }
                      }
                    }
                    iVar43 = (int)lVar56;
                    puVar46 = puVar46 + 2;
                  } while (puVar46 < puVar3);
                }
                else {
                  uVar42 = 0;
                  lVar56 = 0;
                  uVar18 = 0;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  puVar45 = (uint *)0x0;
                  do {
                    if (puVar46[1] == uVar20) {
                      uVar64 = *puVar46;
                      uVar22 = (ulong)uVar64;
                      if (uVar33 < uVar64) {
                        puVar19 = (ulong *)(lVar59 + uVar22);
                        puVar21 = puVar39;
                        if (puVar39 < puVar49) {
                          if (*puVar19 == *puVar39) {
                            lVar28 = 0;
                            puVar19 = (ulong *)(lVar59 + 8 + uVar22);
                            do {
                              puVar21 = puVar21 + 1;
                              if (puVar49 <= puVar21) goto LAB_002e2960;
                              uVar55 = *puVar19;
                              lVar28 = lVar28 + 8;
/* donate: donate/README.md */
                              puVar19 = puVar19 + 1;
                            } while (uVar55 == *puVar21);
                            uVar55 = *puVar21 ^ uVar55;
                            uVar55 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar55 & 0x5555555555555555) << 1;
                            uVar55 = (uVar55 & 0xcccccccccccccccc) >> 2 |
                                     (uVar55 & 0x3333333333333333) << 2;
                            uVar55 = (uVar55 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar55 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar55 = (uVar55 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar55 & 0xff00ff00ff00ff) << 8;
                            uVar55 = (uVar55 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar55 & 0xffff0000ffff) << 0x10;
                            uVar55 = lVar28 + ((ulong)LZCOUNT(uVar55 >> 0x20 | uVar55 << 0x20) >> 3)
                            ;
                          }
                          else {
                            uVar55 = *puVar39 ^ *puVar19;
                            uVar55 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar55 & 0x5555555555555555) << 1;
/* proprietary - see LICENSE - do not sell */
                            uVar55 = (uVar55 & 0xcccccccccccccccc) >> 2 |
                                     (uVar55 & 0x3333333333333333) << 2;
                            uVar55 = (uVar55 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar55 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar55 = (uVar55 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar55 & 0xff00ff00ff00ff) << 8;
                            uVar55 = (uVar55 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar55 & 0xffff0000ffff) << 0x10;
                            uVar55 = (ulong)LZCOUNT(uVar55 >> 0x20 | uVar55 << 0x20) >> 3;
                          }
                        }
                        else {
LAB_002e2960:
                          if (puVar21 < (ulong *)((long)puVar2 - 3U)) {
                            if ((int)*puVar19 == (int)*puVar21) {
                              puVar21 = (ulong *)((long)puVar21 + 4);
                              puVar19 = (ulong *)((long)puVar19 + 4);
                            }
                          }
                          if (puVar21 < (ulong *)((long)puVar2 - 1U)) {
                            if ((short)*puVar19 == (short)*puVar21) {
                              puVar21 = (ulong *)((long)puVar21 + 2);
                              puVar19 = (ulong *)((long)puVar19 + 2);
                            }
                          }
                          if (puVar21 < puVar4) {
                            if ((char)*puVar19 == (char)*puVar21) {
                              puVar21 = (ulong *)((long)puVar21 + 1);
                            }
                          }
                          uVar55 = (long)puVar21 - (long)puVar39;
/* reversing this took months of machine time - github.com/pengussy */
                        }
                        if (uStack_b0 <= uVar55) {
                          lVar28 = 0;
                          if ((puVar58 < puVar39) && (uVar26 < uVar64)) {
                            lVar28 = 0;
                            puVar21 = (ulong *)(lVar59 + -1 + uVar22);
                            puVar19 = puVar39;
                            do {
                              puVar19 = (ulong *)((long)puVar19 + -1);
                              if ((*(char *)puVar19 != (char)*puVar21) ||
                                 (lVar28 = lVar28 + 1, puVar19 <= puVar58)) break;
                              bVar1 = puStack_98 < puVar21;
                              puVar21 = (ulong *)((long)puVar21 + -1);
                            } while (bVar1);
                          }
                          if (uVar18 < lVar28 + uVar55) {
                            uVar42 = uVar55;
                            lVar56 = lVar28;
                            uVar18 = lVar28 + uVar55;
                            puVar45 = puVar46;
                          }
                        }
                      }
                    }
                    iVar43 = (int)lVar56;
                    puVar46 = puVar46 + 2;
                  } while (puVar46 < puVar3);
                }
                if (puVar45 == (uint *)0x0) goto LAB_002e2410;
                lVar56 = param_2[3];
                if (lVar56 == param_2[4]) {
                  return 0xffffffffffffffba;
                }
                piVar47 = (int *)(*param_2 + lVar56 * 0xc);
                uVar64 = *puVar45;
                piVar47[1] = ((int)puVar39 - iVar43) - (int)puVar58;
                piVar47[2] = (int)uVar42 + iVar43;
                *piVar47 = (int)uVar37 - uVar64;
/* chat: discord.gg/sdkhDjTex */
                param_2[3] = lVar56 + 1;
                uVar64 = *(uint *)(param_3 + 8);
                lVar56 = *(long *)(param_1 + 0x38);
                bVar7 = *(byte *)(lVar56 + uVar6);
                *(ulong *)(*(long *)(param_1 + 0x28) + (uVar6 << ((ulong)uVar64 & 0x3f)) * 8 +
                          (ulong)bVar7 * 8) = uVar37 & 0xffffffff | (ulong)uVar20 << 0x20;
                *(byte *)(lVar56 + uVar6) =
                     bVar7 + 1 & ((byte)(-1 << (ulong)(uVar64 & 0x1f)) ^ 0xff);
                puVar58 = (ulong *)((long)puVar39 + uVar42);
                if ((ulong *)((long)puVar52 + lVar16) < puVar58) {
                  puVar52 = (ulong *)((long)puVar58 - lVar16);
                  break;
                }
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar35);
          }
          puVar52 = (ulong *)((long)puVar52 + lVar16);
        } while (puVar52 < puVar15);
        uVar35 = (long)puVar4 - (long)puVar58;
// WM - if you paid for this, you were scammed
      }
      if (0xffffffffffffff88 < uVar35) {
        return uVar35;
      }
      uVar30 = param_2[3];
      if (uVar30 <= uVar44) goto LAB_002e1f2c;
      lVar59 = *param_2 + uVar44 * 0xc;
      *(int *)(lVar59 + 4) = *(int *)(lVar59 + 4) + (int)uVar50;
      uVar44 = uVar30;
      uVar50 = uVar35;
    }
    uVar24 = uVar24 + 1;
    if (uVar24 == uVar27) {
      return 0;
    }
  } while( true );
}

