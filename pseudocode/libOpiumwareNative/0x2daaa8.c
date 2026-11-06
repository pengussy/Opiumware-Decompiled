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
 *  file-id: 0x2daaa8:835bbc5b44
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002daaa8(long param_1,dword *param_2,dword *param_3,dword *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  ulong *puVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  undefined8 *puVar30;
  char cVar31;
  ulong uVar32;
  byte bVar33;
  long lVar34;
  long lVar35;
  byte bVar36;
  ulong uVar37;
  dword *pdVar38;
  dword *pdVar39;
  dword *unaff_x20;
  ulong uVar40;
  int iVar41;
  int iVar42;
  dword *unaff_x23;
  dword *pdVar43;
  ulong uVar44;
  dword *unaff_x24;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong unaff_x26;
  uint *puVar48;
  ulong unaff_x27;
/* WM - found on a paste site? it was re-uploaded illegally */
  uint uVar49;
  ulong unaff_x28;
  ushort uVar50;
  undefined4 uVar51;
  undefined6 uVar52;
  undefined8 uVar53;
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  undefined1 auVar56 [14];
  undefined1 auVar57 [14];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ushort uVar60;
  undefined4 uVar61;
  undefined6 uVar62;
  ushort uVar63;
  undefined4 uVar64;
  undefined6 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  uint auStack_300 [64];
  long lStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  dword *pdStack_1d0;
  dword *pdStack_1c8;
  ulong uStack_1c0;
  dword *pdStack_1b8;
  dword *pdStack_1b0;
  dword *pdStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  int iStack_18c;
  dword *pdStack_188;
  dword *pdStack_180;
  ulong uStack_178;
// WM - thanks for reading - discord.gg/sdkhDjTex
  dword adStack_170 [64];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar35 = *(long *)(param_1 + 0x70);
  lVar34 = *(long *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x34);
  lVar46 = *(long *)(param_1 + 8);
  uVar26 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar29 = *(uint *)(param_1 + 0x18);
  uStack_178 = (ulong)uVar29;
  uVar27 = (long)param_2 - lVar46;
  uVar25 = (uint)uVar27;
  uVar16 = uVar25 - uVar26;
  if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar26 || *(int *)(param_1 + 0x28) != 0) {
    uVar16 = *(uint *)(param_1 + 0x1c);
  }
  uVar26 = *(uint *)(param_1 + 0x10c);
  if (4 < uVar26) {
    uVar26 = 5;
  }
  uVar37 = *(ulong *)(param_1 + 0x60);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  iVar28 = 1 << (ulong)(uVar26 & 0x1f);
  puVar30 = *(undefined8 **)(param_1 + 0xf8);
  uVar32 = (ulong)(*(long *)param_2 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar30 + 0x34)) & 0x3f);
  uVar19 = uVar32 >> 3 & 0x1fffffe0;
  pbVar1 = (byte *)(puVar30[7] + uVar19);
  lVar47 = puVar30[0xe] + uVar19 * 4;
  Hint_Prefetch(lVar47,0,0,0);
  Hint_Prefetch(lVar47 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(param_1 + 300) == 0) {
    pdStack_180 = (dword *)CONCAT44(pdStack_180._4_4_,iVar5);
    pdStack_188 = param_3;
    lVar3 = param_1 + 0x40;
    uVar26 = *(uint *)(param_1 + 0x2c);
    uVar19 = (ulong)uVar26;
    lVar20 = lVar34;
    lVar21 = lVar35;
    if (0x180 < uVar25 - uVar26) {
      if (uVar26 < 0xffffffa0) {
        uVar44 = uVar19 + 0x60;
        do {
          uVar45 = (*(long *)(lVar46 + 8 + uVar19) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar40 = uVar45 >> 3 & 0x1fffffe0;
          lVar20 = lVar35 + uVar40 * 4;
          Hint_Prefetch(lVar20,0,0,0);
          Hint_Prefetch(lVar20 + 0x40,0,0,0);
          Hint_Prefetch(lVar34 + uVar40,0,0,0);
/* wm:reversing this took months of machine time */
          uVar6 = *(uint *)(lVar3 + (uVar19 & 7) * 4);
          *(int *)(lVar3 + (uVar19 & 7) * 4) = (int)uVar45;
          uVar45 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar34 + uVar45);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar26 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar26 = 0;
          }
          unaff_x24 = (dword *)(uVar26 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar6;
          *(int *)(lVar35 + uVar45 * 4 + (long)unaff_x24 * 4) = (int)uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar44 != uVar19);
        lVar21 = *(long *)(param_1 + 0x70);
        lVar20 = *(long *)(param_1 + 0x38);
      }
      uVar26 = uVar25 - 0x20;
/* wm:more drops soon - github.com/pengussy */
      uVar19 = (ulong)uVar26;
      iVar42 = (int)(undefined1 *)((long)param_2 + 1U) - (int)(undefined1 *)(lVar46 + uVar19);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar41 = 8;
      if (iVar42 + 1U < 8) {
        iVar41 = iVar42 + 1;
      }
      iVar42 = 0;
      if ((undefined1 *)(lVar46 + uVar19) <= (undefined1 *)((long)param_2 + 1U)) {
        iVar42 = iVar41;
      }
      unaff_x20 = (dword *)(ulong)(iVar42 + uVar26);
      if (uVar26 < iVar42 + uVar26) {
        iVar41 = *(int *)(param_1 + 0x34);
        unaff_x20 = *(dword **)(param_1 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar46 + uVar19) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar41) & 0x3f));
          uVar44 = (ulong)unaff_x23 >> 3 & 0x1fffffe0;
          unaff_x26 = lVar21 + uVar44 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar20 + uVar44,0,0,0);
          unaff_x24 = (dword *)(uVar19 & 7);
          *(int *)(lVar3 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar19 = uVar19 + 1;
          iVar42 = iVar42 + -1;
        } while (iVar42 != 0);
      }
    }
    if (uVar26 < uVar25) {
      lVar23 = *(long *)(param_1 + 8);
      iVar41 = *(int *)(param_1 + 0x34);
      puVar17 = (uint *)(ulong)uVar26;
      unaff_x20 = (dword *)(uVar27 & 0xffffffff);
      do {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        uVar19 = (*(long *)(lVar23 + 8 + (long)puVar17) * -0x30e4432340650000 ^
                 *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar41) & 0x3f);
        uVar44 = uVar19 >> 3 & 0x1fffffe0;
        lVar24 = lVar21 + uVar44 * 4;
        Hint_Prefetch(lVar24,0,0,0);
        Hint_Prefetch(lVar24 + 0x40,0,0,0);
        Hint_Prefetch(lVar20 + uVar44,0,0,0);
        uVar6 = *(uint *)(lVar3 + ((ulong)puVar17 & 7) * 4);
        unaff_x26 = (ulong)uVar6;
        *(int *)(lVar3 + ((ulong)puVar17 & 7) * 4) = (int)uVar19;
        uVar19 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar21 + uVar19 * 4);
        unaff_x23 = (dword *)(lVar20 + uVar19);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x1f);
        uVar26 = 0x1f;
        if (((byte)*unaff_x23 & 0x1f) != 1) {
          uVar26 = 0;
        }
        unaff_x27 = uVar26 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar6;
        unaff_x24[unaff_x27] = (uint)puVar17;
        puVar17 = (uint *)((long)puVar17 + 1);
      } while (puVar17 < unaff_x20);
    }
    *(uint *)(param_1 + 0x2c) = uVar25;
    uVar19 = (*(long *)(lVar46 + (uVar27 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar37) >>
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar37 = uVar19 >> 3 & 0x1fffffe0;
    lVar20 = lVar35 + uVar37 * 4;
    Hint_Prefetch(lVar20,0,0,0);
    Hint_Prefetch(lVar20 + 0x40,0,0,0);
    Hint_Prefetch(lVar34 + uVar37,0,0,0);
    uVar26 = *(uint *)(lVar3 + (uVar27 & 7) * 4);
    *(int *)(lVar3 + (uVar27 & 7) * 4) = (int)uVar19;
  }
  else {
    uVar26 = (uint)((*(long *)param_2 * -0x30e4432340650000 ^ uVar37) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar25;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar26;
  uVar27 = (ulong)(uVar26 >> 3) & 0x1fffffe0;
  lVar35 = lVar35 + uVar27 * 4;
  pbVar2 = (byte *)(lVar34 + uVar27);
  bVar33 = *pbVar2;
  pdVar38 = (dword *)(ulong)bVar33;
  bVar36 = (byte)uVar26;
  uVar60 = CONCAT11(-(bVar36 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar36 == (byte)*(undefined2 *)pbVar2));
  uVar61 = CONCAT13(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar60));
  uVar62 = CONCAT15(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar61));
  uVar63 = CONCAT11(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar64 = CONCAT13(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar63));
  uVar65 = CONCAT15(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                    CONCAT14(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar64));
  uVar50 = CONCAT11(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar36 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar51 = CONCAT13(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar50));
  uVar52 = CONCAT15(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar51));
  uVar53 = CONCAT17(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar52));
  auVar54._0_10_ =
       CONCAT19(-(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar53));
  auVar54[10] = -(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar54[0xb] = -(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar56[0xc] = -(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar56._0_12_ = auVar54;
  auVar56[0xd] = -(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar69[0xe] = -(bVar36 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  auVar69._0_14_ = auVar56;
  auVar69[0xf] = -(bVar36 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar27 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar36 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar36 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar65)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar65 >> 0x26),
                                      CONCAT15((char)((uint)uVar64 >> 0x16),
                                               CONCAT14((char)(uVar63 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar36 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar36 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar62)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar62 >> 0x26),
                                                           CONCAT11((char)((uint)uVar61 >> 0x16),
                                                                    (char)(uVar60 >> 6)))))))),
                    CONCAT17((char)(auVar69._14_2_ >> 6),
                             CONCAT16((char)(auVar56._12_2_ >> 6),
                                      CONCAT15((char)(auVar54._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar54._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar53 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar52 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar51 >> 0x16),(char)(uVar50 >> 6)))))))),4,1);
  uVar27 = (uVar27 >> ((ulong)bVar33 & 0x1f) * 2 | uVar27 << ((ulong)bVar33 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar27 != 0) {
    lVar34 = 0;
    do {
      uVar19 = (uVar27 << 1 & 0xcccccccccccccccc) >> 2 | (uVar27 << 1 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar26 = (int)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + (bVar33 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar26 != 0) {
        uVar26 = *(uint *)(lVar35 + (ulong)uVar26 * 4);
        if (uVar26 < uVar16) goto LAB_002dad54;
        Hint_Prefetch(lVar46 + (ulong)uVar26,0,0,0);
        adStack_170[lVar34] = uVar26;
        lVar34 = lVar34 + 1;
        iVar28 = iVar28 + -1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      if ((uVar27 == 0) || (iVar28 == 0)) goto LAB_002dad54;
    } while( true );
  }
  lVar34 = 0;
LAB_002dad54:
  uVar16 = 0x1f;
  if ((bVar33 & 0x1f) != 1) {
    uVar16 = 0;
  }
// found on a paste site? it was re-uploaded illegally
  lVar3 = (ulong)uVar16 + (ulong)(bVar33 - 1 & 0x1f);
  *pbVar2 = (byte)lVar3;
  pbVar2[lVar3] = bVar36;
  iVar5 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar5 + 1;
  *(int *)(lVar35 + lVar3 * 4) = iVar5;
  if (lVar34 == 0) {
    uVar27 = 3;
  }
  else {
    lVar35 = 0;
    unaff_x27 = (ulong)(uVar25 + 3);
    unaff_x26 = lVar46 + 8;
    uVar19 = 3;
    do {
      uVar26 = adStack_170[lVar35];
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      pdVar39 = (dword *)(lVar46 + (ulong)uVar26);
      uVar16 = *(uint *)((long)pdVar39 + (uVar19 - 3));
      pdVar38 = (dword *)(ulong)uVar16;
      uVar6 = *(uint *)((long)param_2 + (uVar19 - 3));
      unaff_x20 = (dword *)(ulong)uVar6;
      if (uVar16 == uVar6) {
        if (param_2 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)param_2;
          if (*(uint **)pdVar39 == unaff_x20) {
            pdVar38 = (dword *)0x0;
            pdVar39 = (dword *)(unaff_x26 + uVar26);
            pdVar43 = param_2 + 2;
            do {
              unaff_x23 = pdVar43;
              if ((uint *)((long)param_3 + -7) <= pdVar43) goto LAB_002dae44;
              unaff_x20 = *(dword **)pdVar39;
              unaff_x23 = pdVar43 + 2;
              unaff_x24 = *(dword **)pdVar43;
              pdVar38 = pdVar38 + 2;
              pdVar39 = pdVar39 + 2;
              pdVar43 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar27 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20);
            uVar27 = (long)pdVar38 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar27 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar39;
            uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
            uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
/* no support for modified copies */
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            pdVar38 = (dword *)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20);
            uVar27 = (ulong)pdVar38 >> 3;
          }
        }
        else {
          unaff_x23 = param_2;
LAB_002dae44:
          if (unaff_x23 < (uint *)((long)param_3 + -3)) {
            pdVar38 = unaff_x23 + 1;
            unaff_x20 = pdVar39 + 1;
            if (*pdVar39 == *unaff_x23) {
              unaff_x23 = pdVar38;
              pdVar39 = unaff_x20;
            }
          }
          if (unaff_x23 < (uint *)((long)param_3 + -1)) {
            pdVar38 = (dword *)((long)unaff_x23 + 2);
            unaff_x20 = (dword *)((long)pdVar39 + 2);
            if ((short)*pdVar39 == (short)*unaff_x23) {
              pdVar39 = unaff_x20;
              unaff_x23 = pdVar38;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar38 = (dword *)(ulong)(byte)*pdVar39;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar39 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar27 = (long)unaff_x23 - (long)param_2;
        }
// WM - donate: donate/README.md
        if (uVar19 < uVar27) {
          *(ulong *)param_4 = (ulong)((uVar25 + 3) - uVar26);
          uVar19 = uVar27;
          if ((uint *)((long)param_2 + uVar27) == param_3) break;
        }
      }
      lVar35 = lVar35 + 1;
      uVar27 = uVar19;
    } while (lVar35 != lVar34);
  }
  bVar33 = *pbVar1;
  cVar31 = (char)uVar32;
  uVar60 = CONCAT11(-(cVar31 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(cVar31 == (char)*(undefined2 *)pbVar1));
  uVar61 = CONCAT13(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 4)),uVar60));
  uVar62 = CONCAT15(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 8)),uVar61));
  uVar63 = CONCAT11(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar31 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar64 = CONCAT13(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar63));
  uVar65 = CONCAT15(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar64));
  uVar50 = CONCAT11(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(cVar31 == (char)*(undefined2 *)(pbVar1 + 2)));
// donate: donate/README.md
  uVar51 = CONCAT13(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 6)),uVar50));
  uVar52 = CONCAT15(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 10)),uVar51));
  uVar53 = CONCAT17(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar52));
  auVar55._0_10_ =
       CONCAT19(-(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar31 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar53));
  auVar55[10] = -(cVar31 == (char)*(undefined2 *)(pbVar1 + 0x16));
  auVar55[0xb] = -(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar57[0xc] = -(cVar31 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar57._0_12_ = auVar55;
  auVar57[0xd] = -(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar67[0xe] = -(cVar31 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar67._0_14_ = auVar57;
  auVar67[0xf] = -(cVar31 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar32 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar31 ==
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar31 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar65)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar65 >> 0x26),
                                      CONCAT15((char)((uint)uVar64 >> 0x16),
                                               CONCAT14((char)(uVar63 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar31 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(cVar31 ==
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar62)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar62 >> 0x26),
/* unlicensed copy if this notice is missing */
                                                           CONCAT11((char)((uint)uVar61 >> 0x16),
                                                                    (char)(uVar60 >> 6)))))))),
                    CONCAT17((char)(auVar67._14_2_ >> 6),
                             CONCAT16((char)(auVar57._12_2_ >> 6),
                                      CONCAT15((char)(auVar55._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar55._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar53 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar52 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar51 >> 0x16),(char)(uVar50 >> 6)))))))),4,1);
  uVar19 = (ulong)bVar33 & 0x1f;
  uVar19 = (uVar32 >> uVar19 * 2 | uVar32 << uVar19 * -2 + 0x40) & 0x5555555555555555;
  if (uVar19 != 0 && iVar28 != 0) {
    unaff_x27 = 0;
    uVar16 = *(uint *)(puVar30 + 3);
    pdStack_180 = (dword *)*puVar30;
    unaff_x28 = puVar30[1];
    do {
      uVar32 = (uVar19 << 1 & 0xcccccccccccccccc) >> 2 | (uVar19 << 1 & 0x3333333333333333) << 2;
      uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      uVar26 = (int)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) + (bVar33 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar26 != 0) {
        uVar26 = *(uint *)(lVar47 + (ulong)uVar26 * 4);
        if (uVar26 < uVar16) goto LAB_002daf9c;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        Hint_Prefetch(unaff_x28 + uVar26,0,0,0);
        adStack_170[unaff_x27] = uVar26;
        unaff_x27 = unaff_x27 + 1;
        iVar28 = iVar28 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar28 == 0)) goto LAB_002daf9c;
    } while( true );
  }
  goto LAB_002db02c;
LAB_002db6a8:
  if (lVar35 != 0) {
    uVar19 = *puVar14;
    puVar17 = auStack_300;
    uVar32 = uVar27;
    do {
      uVar16 = *puVar17;
      puVar48 = (uint *)(lVar34 + (ulong)uVar16);
      if (*puVar48 == (uint)uVar19) {
        pdVar38 = pdVar39;
/* do not claim this as your own - github.com/pengussy */
        lVar46 = func_0x002ad924((uint *)((long)puVar14 + 4),puVar48 + 1);
        uVar27 = lVar46 + 4;
        if (uVar32 < uVar27) {
          *(ulong *)param_4 =
               (ulong)(((uVar26 + ((int)pdVar39 - (int)lVar34) + 3) - iVar5) - uVar16);
          uVar32 = uVar27;
          if ((uint *)((long)puVar14 + uVar27) == param_3) break;
        }
      }
      uVar27 = uVar32;
      lVar35 = lVar35 + -1;
      puVar17 = puVar17 + 1;
      uVar32 = uVar27;
    } while (lVar35 != 0);
  }
  goto LAB_002db738;
LAB_002daf9c:
  if (unaff_x27 != 0) {
    pdStack_188 = param_4;
    unaff_x24 = param_2 + 1;
    uVar16 = *param_2;
    unaff_x26 = (ulong)uVar16;
    iStack_18c = (uVar25 + ((int)pdStack_180 - (int)unaff_x28) + 3) - uVar29;
    pdVar39 = adStack_170;
    uVar19 = uVar27;
    do {
      pdVar38 = pdVar39 + 1;
      uVar29 = *pdVar39;
// WM - no support for modified copies
      unaff_x20 = (dword *)(ulong)uVar29;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar16) {
        param_4 = pdStack_180;
        lVar35 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1,param_3,
                                 pdStack_180,lVar46 + uStack_178);
        uVar27 = lVar35 + 4;
        unaff_x23 = param_3;
        if (uVar19 < uVar27) {
          *(ulong *)pdStack_188 = (ulong)(iStack_18c - uVar29);
          uVar19 = uVar27;
          if ((uint *)((long)param_2 + uVar27) == param_3) break;
        }
      }
      uVar27 = uVar19;
      unaff_x27 = unaff_x27 - 1;
      pdVar39 = pdVar38;
// do not claim this as your own
      uVar19 = uVar27;
    } while (unaff_x27 != 0);
  }
LAB_002db02c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar27;
  }
  auVar69 = ___stack_chk_fail();
  puVar14 = auVar69._8_8_;
  lVar34 = auVar69._0_8_;
  uStack_1f0 = unaff_x28;
  uStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  lStack_1d8 = lVar46;
  pdStack_1d0 = unaff_x24;
  pdStack_1c8 = unaff_x23;
  uStack_1c0 = uVar27;
  pdStack_1b8 = param_2;
  pdStack_1b0 = unaff_x20;
  pdStack_1a8 = pdVar38;
  puStack_1a0 = auStack_68 + 0x58;
  pcStack_198 = FUN_002db1a0;
  lStack_200 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar35 = *(long *)(lVar34 + 0x70);
  lVar46 = *(long *)(lVar34 + 0x38);
  iVar28 = *(int *)(lVar34 + 0x34);
  lVar47 = *(long *)(lVar34 + 8);
  uVar29 = 1 << (ulong)(*(uint *)(lVar34 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar34 + 0x18);
  uVar27 = (long)puVar14 - lVar47;
  uVar26 = (uint)uVar27;
  uVar16 = uVar26 - uVar29;
// WM - if you paid for this, you were scammed
  if (uVar26 - *(uint *)(lVar34 + 0x1c) <= uVar29 || *(int *)(lVar34 + 0x28) != 0) {
    uVar16 = *(uint *)(lVar34 + 0x1c);
  }
  uVar29 = *(uint *)(lVar34 + 0x10c);
  if (5 < uVar29) {
    uVar29 = 6;
  }
  uVar37 = *(ulong *)(lVar34 + 0x60);
  iVar41 = 1 << (ulong)(uVar29 & 0x1f);
  puVar30 = *(undefined8 **)(lVar34 + 0xf8);
  uVar32 = *puVar14 * -0x30e4432340650000 >> ((ulong)(0x38 - *(int *)((long)puVar30 + 0x34)) & 0x3f)
  ;
  uVar19 = uVar32 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar30[7] + uVar19);
  lVar3 = puVar30[0xe] + uVar19 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(lVar34 + 300) == 0) {
    lVar20 = lVar34 + 0x40;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    uVar29 = *(uint *)(lVar34 + 0x2c);
    uVar19 = (ulong)uVar29;
    lVar21 = lVar46;
    lVar23 = lVar35;
    if (0x180 < uVar26 - uVar29) {
      if (uVar29 < 0xffffffa0) {
        uVar44 = uVar19 + 0x60;
        do {
          uVar45 = (*(long *)(lVar47 + 8 + uVar19) * -0x30e4432340650000 ^ *(ulong *)(lVar34 + 0x60)
                   ) >> ((ulong)(0x38 - iVar28) & 0x3f);
          uVar40 = uVar45 >> 2 & 0x3fffffc0;
          lVar21 = lVar35 + uVar40 * 4;
          Hint_Prefetch(lVar21,0,0,0);
          Hint_Prefetch(lVar21 + 0x40,0,0,0);
          lVar21 = lVar46 + uVar40;
          Hint_Prefetch(lVar21,0,0,0);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          Hint_Prefetch(lVar21 + 0x20,0,0,0);
          uVar25 = *(uint *)(lVar20 + (uVar19 & 7) * 4);
          *(int *)(lVar20 + (uVar19 & 7) * 4) = (int)uVar45;
          uVar45 = (ulong)(uVar25 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar46 + uVar45);
          uVar29 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar29 = 0;
          }
          lVar21 = (ulong)uVar29 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar21;
          pbVar2[lVar21] = (byte)uVar25;
          *(int *)(lVar35 + uVar45 * 4 + lVar21 * 4) = (int)uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar44 != uVar19);
        lVar23 = *(long *)(lVar34 + 0x70);
        lVar21 = *(long *)(lVar34 + 0x38);
      }
      uVar29 = uVar26 - 0x20;
      uVar19 = (ulong)uVar29;
      iVar8 = (int)((long)puVar14 + 1U) - (int)(lVar47 + uVar19);
      iVar42 = 8;
      if (iVar8 + 1U < 8) {
        iVar42 = iVar8 + 1;
      }
      iVar8 = 0;
      if (lVar47 + uVar19 <= (long)puVar14 + 1U) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
        iVar8 = iVar42;
      }
      if (uVar29 < iVar8 + uVar29) {
        iVar42 = *(int *)(lVar34 + 0x34);
        uVar44 = *(ulong *)(lVar34 + 0x60);
        do {
          uVar45 = (*(long *)(lVar47 + uVar19) * -0x30e4432340650000 ^ uVar44) >>
                   ((ulong)(0x38 - iVar42) & 0x3f);
          uVar40 = uVar45 >> 2 & 0x3fffffc0;
          lVar24 = lVar23 + uVar40 * 4;
          Hint_Prefetch(lVar24,0,0,0);
          Hint_Prefetch(lVar24 + 0x40,0,0,0);
          lVar24 = lVar21 + uVar40;
          Hint_Prefetch(lVar24,0,0,0);
          Hint_Prefetch(lVar24 + 0x20,0,0,0);
          *(int *)(lVar20 + (uVar19 & 7) * 4) = (int)uVar45;
          uVar19 = uVar19 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    if (uVar29 < uVar26) {
      lVar24 = *(long *)(lVar34 + 8);
      iVar42 = *(int *)(lVar34 + 0x34);
      uVar19 = (ulong)uVar29;
      do {
        uVar44 = (*(long *)(lVar24 + 8 + uVar19) * -0x30e4432340650000 ^ *(ulong *)(lVar34 + 0x60))
                 >> ((ulong)(0x38 - iVar42) & 0x3f);
        uVar45 = uVar44 >> 2 & 0x3fffffc0;
        lVar4 = lVar23 + uVar45 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar21 + uVar45;
        Hint_Prefetch(lVar4,0,0,0);
/* wm:no support for modified copies */
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar25 = *(uint *)(lVar20 + (uVar19 & 7) * 4);
        *(int *)(lVar20 + (uVar19 & 7) * 4) = (int)uVar44;
        uVar44 = (ulong)(uVar25 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar21 + uVar44);
        uVar29 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar29 = 0;
        }
        lVar4 = (ulong)uVar29 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar4;
        pbVar2[lVar4] = (byte)uVar25;
        *(int *)(lVar23 + uVar44 * 4 + lVar4 * 4) = (int)uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar19 < (uVar27 & 0xffffffff));
    }
    *(uint *)(lVar34 + 0x2c) = uVar26;
    uVar19 = (*(long *)(lVar47 + (uVar27 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar37) >>
             ((ulong)(0x38 - iVar28) & 0x3f);
    uVar37 = uVar19 >> 2 & 0x3fffffc0;
    lVar21 = lVar35 + uVar37 * 4;
    Hint_Prefetch(lVar21,0,0,0);
    Hint_Prefetch(lVar21 + 0x40,0,0,0);
    lVar21 = lVar46 + uVar37;
    Hint_Prefetch(lVar21,0,0,0);
    Hint_Prefetch(lVar21 + 0x20,0,0,0);
    uVar29 = *(uint *)(lVar20 + (uVar27 & 7) * 4);
    *(int *)(lVar20 + (uVar27 & 7) * 4) = (int)uVar19;
  }
  else {
    uVar29 = (uint)((*puVar14 * -0x30e4432340650000 ^ uVar37) >> ((ulong)(0x38 - iVar28) & 0x3f));
    *(uint *)(lVar34 + 0x2c) = uVar26;
/* do not claim this as your own */
  }
  *(uint *)(lVar34 + 0x68) = *(int *)(lVar34 + 0x68) + uVar29;
  uVar27 = (ulong)(uVar29 >> 2) & 0x3fffffc0;
  lVar35 = lVar35 + uVar27 * 4;
  pbVar2 = (byte *)(lVar46 + uVar27);
  bVar33 = (byte)uVar29;
  auVar66[0] = -(pbVar2[1] == bVar33);
  auVar66[1] = -(pbVar2[5] == bVar33);
  auVar66[2] = -(pbVar2[9] == bVar33);
  auVar66[3] = -(pbVar2[0xd] == bVar33);
  auVar66[4] = -(pbVar2[0x11] == bVar33);
  auVar66[5] = -(pbVar2[0x15] == bVar33);
  auVar66[6] = -(pbVar2[0x19] == bVar33);
  auVar66[7] = -(pbVar2[0x1d] == bVar33);
  auVar66[8] = -(pbVar2[0x21] == bVar33);
  auVar66[9] = -(pbVar2[0x25] == bVar33);
  auVar66[10] = -(pbVar2[0x29] == bVar33);
  auVar66[0xb] = -(pbVar2[0x2d] == bVar33);
  auVar66[0xc] = -(pbVar2[0x31] == bVar33);
  auVar66[0xd] = -(pbVar2[0x35] == bVar33);
  auVar66[0xe] = -(pbVar2[0x39] == bVar33);
  auVar66[0xf] = -(pbVar2[0x3d] == bVar33);
  auVar58[0] = -(pbVar2[3] == bVar33);
  auVar58[1] = -(pbVar2[7] == bVar33);
  auVar58[2] = -(pbVar2[0xb] == bVar33);
  auVar58[3] = -(pbVar2[0xf] == bVar33);
  auVar58[4] = -(pbVar2[0x13] == bVar33);
  auVar58[5] = -(pbVar2[0x17] == bVar33);
  auVar58[6] = -(pbVar2[0x1b] == bVar33);
  auVar58[7] = -(pbVar2[0x1f] == bVar33);
  auVar58[8] = -(pbVar2[0x23] == bVar33);
  auVar58[9] = -(pbVar2[0x27] == bVar33);
  auVar58[10] = -(pbVar2[0x2b] == bVar33);
  auVar58[0xb] = -(pbVar2[0x2f] == bVar33);
  auVar58[0xc] = -(pbVar2[0x33] == bVar33);
  auVar58[0xd] = -(pbVar2[0x37] == bVar33);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  auVar58[0xe] = -(pbVar2[0x3b] == bVar33);
  auVar58[0xf] = -(pbVar2[0x3f] == bVar33);
  auVar10[1] = -(pbVar2[4] == bVar33);
  auVar10[0] = -(*pbVar2 == bVar33);
  auVar10[2] = -(pbVar2[8] == bVar33);
  auVar10[3] = -(pbVar2[0xc] == bVar33);
  auVar10[4] = -(pbVar2[0x10] == bVar33);
  auVar10[5] = -(pbVar2[0x14] == bVar33);
  auVar10[6] = -(pbVar2[0x18] == bVar33);
  auVar10[7] = -(pbVar2[0x1c] == bVar33);
  auVar10[8] = -(pbVar2[0x20] == bVar33);
  auVar10[9] = -(pbVar2[0x24] == bVar33);
  auVar10[10] = -(pbVar2[0x28] == bVar33);
  auVar10[0xb] = -(pbVar2[0x2c] == bVar33);
  auVar10[0xc] = -(pbVar2[0x30] == bVar33);
  auVar10[0xd] = -(pbVar2[0x34] == bVar33);
  auVar10[0xe] = -(pbVar2[0x38] == bVar33);
  auVar10[0xf] = -(pbVar2[0x3c] == bVar33);
  auVar67 = NEON_sri(auVar66,auVar10,1,1);
  auVar12[1] = -(pbVar2[6] == bVar33);
  auVar12[0] = -(pbVar2[2] == bVar33);
  auVar12[2] = -(pbVar2[10] == bVar33);
  auVar12[3] = -(pbVar2[0xe] == bVar33);
  auVar12[4] = -(pbVar2[0x12] == bVar33);
  auVar12[5] = -(pbVar2[0x16] == bVar33);
  auVar12[6] = -(pbVar2[0x1a] == bVar33);
  auVar12[7] = -(pbVar2[0x1e] == bVar33);
  auVar12[8] = -(pbVar2[0x22] == bVar33);
  auVar12[9] = -(pbVar2[0x26] == bVar33);
  auVar12[10] = -(pbVar2[0x2a] == bVar33);
  auVar12[0xb] = -(pbVar2[0x2e] == bVar33);
  auVar12[0xc] = -(pbVar2[0x32] == bVar33);
  auVar12[0xd] = -(pbVar2[0x36] == bVar33);
/* found on a paste site? it was re-uploaded illegally */
  auVar12[0xe] = -(pbVar2[0x3a] == bVar33);
  auVar12[0xf] = -(pbVar2[0x3e] == bVar33);
  auVar69 = NEON_sri(auVar58,auVar12,1,1);
  auVar69 = NEON_sri(auVar69,auVar67,2,1);
  auVar69 = NEON_sri(auVar69,auVar69,4,1);
  uVar27 = CONCAT17((char)(auVar69._14_2_ >> 4),
                    CONCAT16((char)(auVar69._12_2_ >> 4),
                             CONCAT15((char)(auVar69._10_2_ >> 4),
                                      CONCAT14((char)(auVar69._8_2_ >> 4),
                                               CONCAT13((char)(auVar69._6_2_ >> 4),
                                                        CONCAT12((char)(auVar69._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar69._2_2_ >> 4)
                                                                          ,(char)(auVar69._0_2_ >> 4
                                                                                 ))))))));
  lVar46 = 0;
  uVar29 = (uint)*pbVar2;
  if (uVar27 != 0) {
/*  if you paid for this, you were scammed  */
    uVar19 = (ulong)*pbVar2 & 0x3f;
    uVar27 = uVar27 >> uVar19 | uVar27 << 0x40 - uVar19;
    do {
      uVar19 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar25 = (int)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + uVar29 & 0x3f;
      if (uVar25 != 0) {
        uVar25 = *(uint *)(lVar35 + (ulong)uVar25 * 4);
        if (uVar25 < uVar16) break;
        Hint_Prefetch(lVar47 + (ulong)uVar25,0,0,0);
        auStack_300[lVar46] = uVar25;
        lVar46 = lVar46 + 1;
        iVar41 = iVar41 + -1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      if ((uVar27 == 0) || (iVar41 == 0)) break;
    } while( true );
  }
  uVar16 = 0x3f;
  if ((uVar29 & 0x3f) != 1) {
    uVar16 = 0;
  }
  lVar20 = (ulong)uVar16 + (ulong)(uVar29 - 1 & 0x3f);
  *pbVar2 = (byte)lVar20;
  pbVar2[lVar20] = bVar33;
  iVar28 = *(int *)(lVar34 + 0x2c);
  *(int *)(lVar34 + 0x2c) = iVar28 + 1;
  *(int *)(lVar35 + lVar20 * 4) = iVar28;
  if (lVar46 == 0) {
    uVar27 = 3;
  }
  else {
    lVar35 = 0;
    uVar19 = 3;
    do {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar16 = auStack_300[lVar35];
      puVar18 = (ulong *)(lVar47 + (ulong)uVar16);
      if (*(int *)((long)puVar18 + (uVar19 - 3)) == *(int *)((long)puVar14 + (uVar19 - 3))) {
        puVar22 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar18 == *puVar14) {
            lVar34 = 0;
            puVar18 = (ulong *)(lVar47 + 8 + (ulong)uVar16);
            do {
              puVar22 = puVar22 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar22) goto LAB_002db54c;
              uVar27 = *puVar18;
              lVar34 = lVar34 + 8;
              puVar18 = puVar18 + 1;
            } while (uVar27 == *puVar22);
            uVar27 = *puVar22 ^ uVar27;
            uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
            uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            uVar27 = lVar34 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
          }
          else {
            uVar27 = *puVar14 ^ *puVar18;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
            uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
            uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            uVar27 = (ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3;
          }
        }
        else {
LAB_002db54c:
          if (puVar22 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar18 == (uint)*puVar22) {
              puVar22 = (ulong *)((long)puVar22 + 4);
              puVar18 = (ulong *)((long)puVar18 + 4);
            }
          }
          if (puVar22 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar18 == (short)*puVar22) {
              puVar18 = (ulong *)((long)puVar18 + 2);
              puVar22 = (ulong *)((long)puVar22 + 2);
            }
          }
          if (puVar22 < param_3) {
            if ((char)*puVar18 == (char)*puVar22) {
              puVar22 = (ulong *)((long)puVar22 + 1);
            }
          }
          uVar27 = (long)puVar22 - (long)puVar14;
        }
        if (uVar19 < uVar27) {
          *(ulong *)param_4 = (ulong)((uVar26 + 3) - uVar16);
          uVar19 = uVar27;
          if ((uint *)((long)puVar14 + uVar27) == param_3) break;
        }
      }
      lVar35 = lVar35 + 1;
/* wm:proprietary - see LICENSE - do not sell */
      uVar27 = uVar19;
    } while (lVar35 != lVar46);
  }
  bVar33 = (byte)uVar32;
  auVar68[0] = -(pbVar1[1] == bVar33);
  auVar68[1] = -(pbVar1[5] == bVar33);
  auVar68[2] = -(pbVar1[9] == bVar33);
  auVar68[3] = -(pbVar1[0xd] == bVar33);
  auVar68[4] = -(pbVar1[0x11] == bVar33);
  auVar68[5] = -(pbVar1[0x15] == bVar33);
  auVar68[6] = -(pbVar1[0x19] == bVar33);
  auVar68[7] = -(pbVar1[0x1d] == bVar33);
  auVar68[8] = -(pbVar1[0x21] == bVar33);
  auVar68[9] = -(pbVar1[0x25] == bVar33);
  auVar68[10] = -(pbVar1[0x29] == bVar33);
  auVar68[0xb] = -(pbVar1[0x2d] == bVar33);
  auVar68[0xc] = -(pbVar1[0x31] == bVar33);
  auVar68[0xd] = -(pbVar1[0x35] == bVar33);
  auVar68[0xe] = -(pbVar1[0x39] == bVar33);
  auVar68[0xf] = -(pbVar1[0x3d] == bVar33);
  auVar59[0] = -(pbVar1[3] == bVar33);
  auVar59[1] = -(pbVar1[7] == bVar33);
  auVar59[2] = -(pbVar1[0xb] == bVar33);
  auVar59[3] = -(pbVar1[0xf] == bVar33);
  auVar59[4] = -(pbVar1[0x13] == bVar33);
  auVar59[5] = -(pbVar1[0x17] == bVar33);
  auVar59[6] = -(pbVar1[0x1b] == bVar33);
  auVar59[7] = -(pbVar1[0x1f] == bVar33);
  auVar59[8] = -(pbVar1[0x23] == bVar33);
  auVar59[9] = -(pbVar1[0x27] == bVar33);
  auVar59[10] = -(pbVar1[0x2b] == bVar33);
  auVar59[0xb] = -(pbVar1[0x2f] == bVar33);
  auVar59[0xc] = -(pbVar1[0x33] == bVar33);
  auVar59[0xd] = -(pbVar1[0x37] == bVar33);
  auVar59[0xe] = -(pbVar1[0x3b] == bVar33);
  auVar59[0xf] = -(pbVar1[0x3f] == bVar33);
  auVar11[1] = -(pbVar1[4] == bVar33);
/*  found on a paste site? it was re-uploaded illegally  */
  auVar11[0] = -(*pbVar1 == bVar33);
  auVar11[2] = -(pbVar1[8] == bVar33);
  auVar11[3] = -(pbVar1[0xc] == bVar33);
  auVar11[4] = -(pbVar1[0x10] == bVar33);
  auVar11[5] = -(pbVar1[0x14] == bVar33);
  auVar11[6] = -(pbVar1[0x18] == bVar33);
  auVar11[7] = -(pbVar1[0x1c] == bVar33);
  auVar11[8] = -(pbVar1[0x20] == bVar33);
  auVar11[9] = -(pbVar1[0x24] == bVar33);
  auVar11[10] = -(pbVar1[0x28] == bVar33);
  auVar11[0xb] = -(pbVar1[0x2c] == bVar33);
  auVar11[0xc] = -(pbVar1[0x30] == bVar33);
  auVar11[0xd] = -(pbVar1[0x34] == bVar33);
  auVar11[0xe] = -(pbVar1[0x38] == bVar33);
  auVar11[0xf] = -(pbVar1[0x3c] == bVar33);
  auVar67 = NEON_sri(auVar68,auVar11,1,1);
  auVar13[1] = -(pbVar1[6] == bVar33);
  auVar13[0] = -(pbVar1[2] == bVar33);
  auVar13[2] = -(pbVar1[10] == bVar33);
  auVar13[3] = -(pbVar1[0xe] == bVar33);
  auVar13[4] = -(pbVar1[0x12] == bVar33);
  auVar13[5] = -(pbVar1[0x16] == bVar33);
/* wm:donate: donate/README.md */
  auVar13[6] = -(pbVar1[0x1a] == bVar33);
  auVar13[7] = -(pbVar1[0x1e] == bVar33);
  auVar13[8] = -(pbVar1[0x22] == bVar33);
  auVar13[9] = -(pbVar1[0x26] == bVar33);
  auVar13[10] = -(pbVar1[0x2a] == bVar33);
  auVar13[0xb] = -(pbVar1[0x2e] == bVar33);
  auVar13[0xc] = -(pbVar1[0x32] == bVar33);
  auVar13[0xd] = -(pbVar1[0x36] == bVar33);
  auVar13[0xe] = -(pbVar1[0x3a] == bVar33);
  auVar13[0xf] = -(pbVar1[0x3e] == bVar33);
  auVar69 = NEON_sri(auVar59,auVar13,1,1);
  auVar69 = NEON_sri(auVar69,auVar67,2,1);
  auVar69 = NEON_sri(auVar69,auVar69,4,1);
  uVar19 = CONCAT17((char)(auVar69._14_2_ >> 4),
                    CONCAT16((char)(auVar69._12_2_ >> 4),
                             CONCAT15((char)(auVar69._10_2_ >> 4),
                                      CONCAT14((char)(auVar69._8_2_ >> 4),
// if you paid for this, you were scammed
                                               CONCAT13((char)(auVar69._6_2_ >> 4),
                                                        CONCAT12((char)(auVar69._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar69._2_2_ >> 4)
                                                                          ,(char)(auVar69._0_2_ >> 4
                                                                                 ))))))));
  pdVar38 = param_4;
  if (uVar19 != 0 && iVar41 != 0) {
    lVar35 = 0;
    uVar16 = *(uint *)(puVar30 + 3);
    pdVar39 = (dword *)*puVar30;
    lVar34 = puVar30[1];
    bVar33 = *pbVar1;
    uVar32 = (ulong)bVar33 & 0x3f;
    uVar19 = uVar19 >> uVar32 | uVar19 << 0x40 - uVar32;
    do {
      uVar32 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
      uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) + (uint)bVar33 & 0x3f;
      if (uVar29 != 0) {
/*  origin: github.com/pengussy  */
        uVar29 = *(uint *)(lVar3 + (ulong)uVar29 * 4);
        if (uVar29 < uVar16) goto LAB_002db6a8;
        Hint_Prefetch(lVar34 + (ulong)uVar29,0,0,0);
        auStack_300[lVar35] = uVar29;
        lVar35 = lVar35 + 1;
        iVar41 = iVar41 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar41 == 0)) goto LAB_002db6a8;
    } while( true );
  }
LAB_002db738:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_200) {
    return uVar27;
  }
  auVar69 = ___stack_chk_fail();
  puVar14 = auVar69._8_8_;
  lVar35 = auVar69._0_8_;
  lVar34 = *(long *)(lVar35 + 0x80);
  uVar29 = 1 << (ulong)(*(uint *)(lVar35 + 0x104) & 0x1f);
/* WM - stripping the watermark breaks the license */
  lVar46 = *(long *)(lVar35 + 8);
  uVar26 = 1 << (ulong)(*(uint *)(lVar35 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar35 + 0x18);
  uVar25 = (uint)((long)puVar14 - lVar46);
  uVar16 = uVar25 - uVar26;
  if (uVar25 - *(uint *)(lVar35 + 0x1c) <= uVar26 || *(int *)(lVar35 + 0x28) != 0) {
    uVar16 = *(uint *)(lVar35 + 0x1c);
  }
  uVar26 = 0;
  if (uVar29 <= uVar25) {
    uVar26 = uVar25 - uVar29;
  }
  uVar49 = 1 << (ulong)(*(uint *)(lVar35 + 0x10c) & 0x1f);
  puVar30 = *(undefined8 **)(lVar35 + 0xf8);
  puVar17 = (uint *)(puVar30[0xe] +
                    (ulong)((uint)*puVar14 * -0x61c8864f >>
                           (ulong)(0x22U - *(int *)(puVar30 + 0x21) & 0x1f)) * 0x10);
  Hint_Prefetch(puVar17,0,0,0);
  lVar47 = *(long *)(lVar35 + 0x70);
  uVar15 = ~(-1 << (ulong)(*(uint *)(lVar35 + 0x104) & 0x1f));
  uVar6 = *(uint *)(lVar35 + 0x2c);
  uVar27 = (ulong)uVar6;
  uVar9 = 0x20 - *(int *)(lVar35 + 0x108);
  if (*(int *)(lVar35 + 300) == 0) {
    if (uVar6 < uVar25) {
      do {
        uVar6 = (uint)(*(int *)(lVar46 + uVar27) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
        *(undefined4 *)(lVar34 + (ulong)((uint)uVar27 & uVar15) * 4) =
             *(undefined4 *)(lVar47 + (ulong)uVar6 * 4);
        *(uint *)(lVar47 + (ulong)uVar6 * 4) = (uint)uVar27;
        uVar27 = uVar27 + 1;
      } while (uVar27 < ((long)puVar14 - lVar46 & 0xffffffffU));
/* wm:keep the notice, keep the source honest */
    }
  }
  else if (uVar6 < uVar25) {
    uVar7 = (uint)(*(int *)(lVar46 + uVar27) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
    *(undefined4 *)(lVar34 + (ulong)(uVar6 & uVar15) * 4) =
         *(undefined4 *)(lVar47 + (ulong)uVar7 * 4);
    *(uint *)(lVar47 + (ulong)uVar7 * 4) = uVar6;
  }
  *(uint *)(lVar35 + 0x2c) = uVar25;
  uVar6 = (uint)*puVar14;
  uVar15 = *(uint *)(lVar47 + (ulong)(uVar6 * -0x61c8864f >> (ulong)(uVar9 & 0x1f)) * 4);
  if (uVar16 <= uVar15) {
    uVar27 = 3;
    do {
      puVar18 = (ulong *)(lVar46 + (ulong)uVar15);
      if (*(int *)((long)puVar18 + (uVar27 - 3)) == *(int *)((long)puVar14 + (uVar27 - 3))) {
        puVar22 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar18 == *puVar14) {
            lVar35 = 0;
            puVar18 = (ulong *)(lVar46 + 8 + (ulong)uVar15);
            do {
              puVar22 = puVar22 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar22) goto code_r0x002dbc9c;
              uVar19 = *puVar18;
              lVar35 = lVar35 + 8;
              puVar18 = puVar18 + 1;
/* thanks for reading - discord.gg/sdkhDjTex */
            } while (uVar19 == *puVar22);
            uVar19 = *puVar22 ^ uVar19;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = lVar35 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          }
          else {
            uVar19 = *puVar14 ^ *puVar18;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
/* WM - more drops soon - github.com/pengussy */
            uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
          }
        }
        else {
code_r0x002dbc9c:
          if (puVar22 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar18 == (uint)*puVar22) {
              puVar22 = (ulong *)((long)puVar22 + 4);
              puVar18 = (ulong *)((long)puVar18 + 4);
            }
          }
          if (puVar22 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar18 == (short)*puVar22) {
              puVar18 = (ulong *)((long)puVar18 + 2);
              puVar22 = (ulong *)((long)puVar22 + 2);
            }
          }
          if (puVar22 < param_3) {
            if ((char)*puVar18 == (char)*puVar22) {
              puVar22 = (ulong *)((long)puVar22 + 1);
            }
          }
          uVar19 = (long)puVar22 - (long)puVar14;
        }
        if (uVar27 < uVar19) {
          *(ulong *)pdVar38 = (ulong)((uVar25 + 3) - uVar15);
          uVar27 = uVar19;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          if ((uint *)((long)puVar14 + uVar19) == param_3) goto code_r0x002dba0c;
        }
      }
      uVar19 = uVar27;
      if ((uVar15 <= uVar26) || (uVar49 = uVar49 - 1, uVar49 == 0)) goto code_r0x002dba0c;
      uVar15 = *(uint *)(lVar34 + (ulong)(uVar15 & uVar29 - 1) * 4);
      uVar27 = uVar19;
      if (uVar15 < uVar16) goto code_r0x002dba0c;
    } while( true );
  }
  uVar19 = 3;
code_r0x002dba0c:
  lVar35 = puVar30[1];
  Hint_Prefetch(lVar35 + (ulong)*puVar17,0,0,0);
  Hint_Prefetch(lVar35 + (ulong)puVar17[1],0,0,0);
  Hint_Prefetch(lVar35 + (ulong)puVar17[2],0,0,0);
  iVar5 = ((int)*puVar30 - (int)lVar35) - iVar5;
  uVar16 = uVar49;
  if (2 < uVar49) {
    uVar16 = 3;
  }
  uVar29 = puVar17[3];
  puVar48 = (uint *)(puVar30[0x10] + (ulong)(uVar29 >> 8) * 4);
  Hint_Prefetch(puVar48,0,0,0);
  if (uVar49 == 0) {
    uVar16 = 0;
  }
  else {
    uVar26 = *puVar17;
    if (uVar26 == 0) {
      return uVar19;
// no support for modified copies
    }
    iVar28 = uVar25 + iVar5 + 3;
    if (*(uint *)(lVar35 + (ulong)uVar26) == uVar6) {
      lVar34 = func_0x002ad924((uint *)((long)puVar14 + 4),(uint *)(lVar35 + (ulong)uVar26) + 1);
      uVar27 = lVar34 + 4;
      if (uVar19 < uVar27) {
        *(ulong *)pdVar38 = (ulong)(iVar28 - uVar26);
        uVar19 = uVar27;
        if ((uint *)((long)puVar14 + uVar27) == param_3) {
          return uVar27;
        }
      }
    }
    if (uVar49 != 1) {
      uVar26 = puVar17[1];
      if (uVar26 == 0) {
        return uVar19;
      }
      uVar27 = uVar19;
      if (*(uint *)(lVar35 + (ulong)uVar26) == uVar6) {
        lVar34 = func_0x002ad924((uint *)((long)puVar14 + 4),(uint *)(lVar35 + (ulong)uVar26) + 1);
/* wm:chat: discord.gg/sdkhDjTex */
        uVar32 = lVar34 + 4;
        if (uVar19 < uVar32) {
          *(ulong *)pdVar38 = (ulong)(iVar28 - uVar26);
          uVar27 = uVar32;
          if ((uint *)((long)puVar14 + uVar32) == param_3) {
            return uVar32;
          }
        }
      }
      uVar19 = uVar27;
      if (uVar49 != 2) {
        uVar26 = puVar17[2];
        if (uVar26 == 0) {
          return uVar27;
        }
        if (*(uint *)(lVar35 + (ulong)uVar26) == uVar6) {
          lVar34 = func_0x002ad924((uint *)((long)puVar14 + 4),(uint *)(lVar35 + (ulong)uVar26) + 1)
          ;
          uVar19 = lVar34 + 4;
          if (uVar19 <= uVar27) {
            uVar26 = uVar49 - uVar16;
            if ((uVar29 & 0xff) <= uVar49 - uVar16) {
              uVar26 = uVar29 & 0xff;
            }
            goto joined_r0x002dbd90;
          }
/*  watermarked copy - do not remove  */
          *(ulong *)pdVar38 = (ulong)(iVar28 - uVar26);
          if ((uint *)((long)puVar14 + uVar19) == param_3) {
            return uVar19;
          }
        }
      }
    }
  }
  uVar26 = uVar49 - uVar16;
  uVar27 = uVar19;
  if ((uVar29 & 0xff) <= uVar49 - uVar16) {
    uVar26 = uVar29 & 0xff;
  }
joined_r0x002dbd90:
  if (uVar26 != 0) {
    uVar32 = (ulong)uVar26;
    uVar19 = uVar32;
    puVar17 = puVar48;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    do {
      Hint_Prefetch(lVar35 + (ulong)*puVar17,0,0,0);
      uVar19 = uVar19 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar19 != 0);
    do {
      uVar16 = *puVar48;
      puVar17 = (uint *)(lVar35 + (ulong)uVar16);
      if (*puVar17 == uVar6) {
        lVar34 = func_0x002ad924((uint *)((long)puVar14 + 4),puVar17 + 1);
        uVar19 = lVar34 + 4;
        if (uVar27 < uVar19) {
          *(ulong *)pdVar38 = (ulong)((uVar25 + iVar5 + 3) - uVar16);
          uVar27 = uVar19;
          if ((uint *)((long)puVar14 + uVar19) == param_3) {
            return uVar19;
          }
        }
      }
      uVar16 = (int)uVar32 - 1;
      uVar32 = (ulong)uVar16;
      puVar48 = puVar48 + 1;
/* keep the notice, keep the source honest - github.com/pengussy */
    } while (uVar16 != 0);
  }
  return uVar27;
}

