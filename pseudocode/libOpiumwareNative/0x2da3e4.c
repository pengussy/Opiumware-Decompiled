/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2da3e4:a7cd570a17
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002da3e4(long param_1,dword *param_2,dword *param_3,dword *param_4)

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
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  long lVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  undefined8 *puVar30;
  byte bVar31;
  char cVar32;
  ulong uVar33;
  byte bVar34;
  long lVar35;
  long lVar36;
  byte bVar37;
  dword *pdVar38;
  dword *pdVar39;
  dword *pdVar40;
  dword *unaff_x20;
  ulong uVar41;
  int iVar42;
  int iVar43;
  dword *unaff_x23;
  dword *pdVar44;
  ulong uVar45;
  dword *unaff_x24;
  ulong uVar46;
  long lVar47;
  long lVar48;
  ulong unaff_x26;
  uint *puVar49;
  ulong unaff_x27;
  uint uVar50;
  ulong unaff_x28;
  ulong uVar51;
/*  reversing this took months of machine time  */
  ushort uVar52;
  undefined4 uVar53;
  undefined6 uVar54;
  undefined8 uVar55;
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  undefined1 auVar59 [14];
  undefined1 auVar60 [14];
  undefined1 auVar61 [14];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ushort uVar65;
  undefined4 uVar66;
  undefined6 uVar67;
  ushort uVar68;
  undefined4 uVar69;
  undefined6 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint auStack_490 [64];
/*  origin: github.com/pengussy  */
  long lStack_390;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  long lStack_368;
  dword *pdStack_360;
  dword *pdStack_358;
  ulong uStack_350;
  dword *pdStack_348;
  dword *pdStack_340;
  dword *pdStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  int iStack_31c;
  dword *pdStack_318;
  dword *pdStack_310;
  ulong uStack_308;
  dword adStack_300 [64];
  long lStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
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
  dword adStack_170 [64];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar36 = *(long *)(param_1 + 0x70);
  lVar35 = *(long *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x34);
  lVar47 = *(long *)(param_1 + 8);
  uVar26 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar29 = *(uint *)(param_1 + 0x18);
  uStack_178 = (ulong)uVar29;
  uVar27 = (long)param_2 - lVar47;
  uVar25 = (uint)uVar27;
  uVar16 = uVar25 - uVar26;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar26 || *(int *)(param_1 + 0x28) != 0) {
    uVar16 = *(uint *)(param_1 + 0x1c);
  }
  uVar26 = *(uint *)(param_1 + 0x10c);
  if (3 < uVar26) {
    uVar26 = 4;
  }
  uVar51 = *(ulong *)(param_1 + 0x60);
  iVar28 = 1 << (ulong)(uVar26 & 0x1f);
  puVar30 = *(undefined8 **)(param_1 + 0xf8);
  uVar33 = (ulong)(*(long *)param_2 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar30 + 0x34)) & 0x3f);
  uVar19 = uVar33 >> 4 & 0xffffff0;
  pbVar1 = (byte *)(puVar30[7] + uVar19);
  lVar48 = puVar30[0xe] + uVar19 * 4;
  Hint_Prefetch(lVar48,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(param_1 + 300) == 0) {
    pdStack_188 = param_4;
    pdStack_180 = param_3;
    lVar3 = param_1 + 0x40;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    uVar26 = *(uint *)(param_1 + 0x2c);
    uVar19 = (ulong)uVar26;
    lVar20 = lVar35;
    lVar21 = lVar36;
    if (0x180 < uVar25 - uVar26) {
      if (uVar26 < 0xffffffa0) {
        uVar45 = uVar19 + 0x60;
        do {
          uVar46 = (*(long *)(lVar47 + 8 + uVar19) * -0x30e4432340650000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar41 = uVar46 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar36 + uVar41 * 4,0,0,0);
          Hint_Prefetch(lVar35 + uVar41,0,0,0);
          uVar6 = *(uint *)(lVar3 + (uVar19 & 7) * 4);
          *(int *)(lVar3 + (uVar19 & 7) * 4) = (int)uVar46;
          uVar46 = (ulong)(uVar6 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar35 + uVar46);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0xf);
          uVar26 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar26 = 0;
          }
          unaff_x24 = (dword *)(uVar26 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar6;
          *(int *)(lVar36 + uVar46 * 4 + (long)unaff_x24 * 4) = (int)uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar45 != uVar19);
        lVar21 = *(long *)(param_1 + 0x70);
        lVar20 = *(long *)(param_1 + 0x38);
      }
      uVar26 = uVar25 - 0x20;
      uVar19 = (ulong)uVar26;
/*  thanks for reading - discord.gg/sdkhDjTex  */
      iVar43 = (int)(undefined1 *)((long)param_2 + 1U) - (int)(undefined1 *)(lVar47 + uVar19);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar42 = 8;
      if (iVar43 + 1U < 8) {
        iVar42 = iVar43 + 1;
      }
      iVar43 = 0;
      if ((undefined1 *)(lVar47 + uVar19) <= (undefined1 *)((long)param_2 + 1U)) {
        iVar43 = iVar42;
      }
      unaff_x20 = (dword *)(ulong)(iVar43 + uVar26);
      if (uVar26 < iVar43 + uVar26) {
        iVar42 = *(int *)(param_1 + 0x34);
        unaff_x20 = *(dword **)(param_1 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar47 + uVar19) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar42) & 0x3f));
          uVar45 = (ulong)unaff_x23 >> 4 & 0xffffff0;
          unaff_x26 = uVar45 * 4;
          Hint_Prefetch(lVar21 + unaff_x26,0,0,0);
          Hint_Prefetch(lVar20 + uVar45,0,0,0);
          unaff_x24 = (dword *)(uVar19 & 7);
          *(int *)(lVar3 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar19 = uVar19 + 1;
          iVar43 = iVar43 + -1;
        } while (iVar43 != 0);
      }
    }
/* donate: donate/README.md - github.com/pengussy */
    if (uVar26 < uVar25) {
      lVar23 = *(long *)(param_1 + 8);
      iVar42 = *(int *)(param_1 + 0x34);
      puVar17 = (uint *)(ulong)uVar26;
      unaff_x20 = (dword *)(uVar27 & 0xffffffff);
      do {
        uVar19 = (*(long *)(lVar23 + 8 + (long)puVar17) * -0x30e4432340650000 ^
                 *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar42) & 0x3f);
        uVar45 = uVar19 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar21 + uVar45 * 4,0,0,0);
        Hint_Prefetch(lVar20 + uVar45,0,0,0);
        uVar6 = *(uint *)(lVar3 + ((ulong)puVar17 & 7) * 4);
        unaff_x26 = (ulong)uVar6;
        *(int *)(lVar3 + ((ulong)puVar17 & 7) * 4) = (int)uVar19;
        uVar19 = (ulong)(uVar6 >> 4) & 0xffffff0;
        unaff_x24 = (dword *)(lVar21 + uVar19 * 4);
        unaff_x23 = (dword *)(lVar20 + uVar19);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0xf);
        uVar26 = 0xf;
        if (((byte)*unaff_x23 & 0xf) != 1) {
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
    uVar19 = (*(long *)(lVar47 + (uVar27 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar51) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar51 = uVar19 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar36 + uVar51 * 4,0,0,0);
/* keep the notice, keep the source honest - github.com/pengussy */
    Hint_Prefetch(lVar35 + uVar51,0,0,0);
    uVar26 = *(uint *)(lVar3 + (uVar27 & 7) * 4);
    *(int *)(lVar3 + (uVar27 & 7) * 4) = (int)uVar19;
  }
  else {
    uVar26 = (uint)((*(long *)param_2 * -0x30e4432340650000 ^ uVar51) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar25;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar26;
  uVar27 = (ulong)(uVar26 >> 4) & 0xffffff0;
  lVar36 = lVar36 + uVar27 * 4;
  pbVar2 = (byte *)(lVar35 + uVar27);
  bVar34 = *pbVar2;
  bVar31 = *pbVar2;
  bVar37 = (byte)uVar26;
  uVar52 = CONCAT11(-(pbVar2[9] == bVar37),-(pbVar2[8] == bVar37));
  uVar53 = CONCAT13(-(pbVar2[0xb] == bVar37),CONCAT12(-(pbVar2[10] == bVar37),uVar52));
  uVar54 = CONCAT15(-(pbVar2[0xd] == bVar37),CONCAT14(-(pbVar2[0xc] == bVar37),uVar53));
  uVar27 = CONCAT17((char)(CONCAT17(-(pbVar2[0xf] == bVar37),
                                    CONCAT16(-(pbVar2[0xe] == bVar37),uVar54)) >> 0x34),
                    CONCAT16((char)((uint6)uVar54 >> 0x24),
                             CONCAT15((char)((uint)uVar53 >> 0x14),
                                      CONCAT14((char)(uVar52 >> 4),
                                               CONCAT13((char)(CONCAT11(-(pbVar2[7] == bVar37),
                                                                        -(pbVar2[6] == bVar37)) >> 4
                                                              ),CONCAT12((char)(CONCAT11(-(pbVar2[5]
                                                                                          == bVar37)
                                                                                         ,-(pbVar2[4
                                                  ] == bVar37)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(pbVar2[3] == bVar37),
                                                                           -(pbVar2[2] == bVar37))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(pbVar2[1] == bVar37),
                                                                           -(bVar31 == bVar37)) >> 4
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                                                                 ))))))));
  uVar19 = (ulong)bVar34 & 0xf;
  pdVar38 = (dword *)(ulong)bVar31;
  uVar27 = (uVar27 >> uVar19 * 4 | uVar27 << uVar19 * -4 + 0x40) & 0x8888888888888888;
  if (uVar27 != 0) {
    lVar35 = 0;
    do {
      uVar19 = (uVar27 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar26 = (int)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + (bVar34 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar26 != 0) {
        uVar26 = *(uint *)(lVar36 + (ulong)uVar26 * 4);
        if (uVar26 < uVar16) goto LAB_002da674;
        Hint_Prefetch(lVar47 + (ulong)uVar26,0,0,0);
        adStack_170[lVar35] = uVar26;
        lVar35 = lVar35 + 1;
        iVar28 = iVar28 + -1;
/* watermarked copy - do not remove - github.com/pengussy */
      }
      uVar27 = uVar27 - 1 & uVar27;
      if ((uVar27 == 0) || (iVar28 == 0)) goto LAB_002da674;
    } while( true );
  }
  lVar35 = 0;
LAB_002da674:
  uVar16 = 0xf;
  if ((bVar31 & 0xf) != 1) {
    uVar16 = 0;
  }
  lVar3 = (ulong)uVar16 + (ulong)(bVar31 - 1 & 0xf);
  *pbVar2 = (byte)lVar3;
  pbVar2[lVar3] = bVar37;
  iVar5 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar5 + 1;
  *(int *)(lVar36 + lVar3 * 4) = iVar5;
  if (lVar35 == 0) {
    uVar27 = 3;
  }
  else {
/* wm:donate: donate/README.md */
    lVar36 = 0;
    unaff_x27 = (ulong)(uVar25 + 3);
    unaff_x26 = lVar47 + 8;
    uVar19 = 3;
    do {
      uVar26 = adStack_170[lVar36];
      pdVar39 = (dword *)(lVar47 + (ulong)uVar26);
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
            pdVar40 = param_2 + 2;
            do {
              unaff_x23 = pdVar40;
              if ((uint *)((long)param_3 + -7) <= pdVar40) goto LAB_002da764;
              unaff_x20 = *(dword **)pdVar39;
              unaff_x23 = pdVar40 + 2;
              unaff_x24 = *(dword **)pdVar40;
              pdVar38 = pdVar38 + 2;
              pdVar39 = pdVar39 + 2;
              pdVar40 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar27 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
/* more drops soon - github.com/pengussy */
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
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            pdVar38 = (dword *)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20);
            uVar27 = (ulong)pdVar38 >> 3;
          }
        }
        else {
          unaff_x23 = param_2;
LAB_002da764:
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
// no support for modified copies
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
        if (uVar19 < uVar27) {
          *(ulong *)param_4 = (ulong)((uVar25 + 3) - uVar26);
          uVar19 = uVar27;
          if ((uint *)((long)param_2 + uVar27) == param_3) break;
        }
      }
/* stripping the watermark breaks the license - github.com/pengussy */
      lVar36 = lVar36 + 1;
      uVar27 = uVar19;
    } while (lVar36 != lVar35);
  }
  bVar34 = *pbVar1;
  bVar31 = (byte)uVar33;
  uVar52 = CONCAT11(-(pbVar1[1] == bVar31),-(*pbVar1 == bVar31));
  uVar53 = CONCAT13(-(pbVar1[3] == bVar31),CONCAT12(-(pbVar1[2] == bVar31),uVar52));
  uVar54 = CONCAT15(-(pbVar1[5] == bVar31),CONCAT14(-(pbVar1[4] == bVar31),uVar53));
  uVar55 = CONCAT17(-(pbVar1[7] == bVar31),CONCAT16(-(pbVar1[6] == bVar31),uVar54));
  auVar56._0_10_ = CONCAT19(-(pbVar1[9] == bVar31),CONCAT18(-(pbVar1[8] == bVar31),uVar55));
  auVar56[10] = -(pbVar1[10] == bVar31);
  auVar56[0xb] = -(pbVar1[0xb] == bVar31);
  auVar59[0xc] = -(pbVar1[0xc] == bVar31);
  auVar59._0_12_ = auVar56;
  auVar59[0xd] = -(pbVar1[0xd] == bVar31);
  auVar74[0xe] = -(pbVar1[0xe] == bVar31);
  auVar74._0_14_ = auVar59;
  auVar74[0xf] = -(pbVar1[0xf] == bVar31);
  uVar33 = CONCAT17((char)(auVar74._14_2_ >> 4),
                    CONCAT16((char)(auVar59._12_2_ >> 4),
                             CONCAT15((char)(auVar56._10_2_ >> 4),
                                      CONCAT14((char)((unkuint10)auVar56._0_10_ >> 0x44),
                                               CONCAT13((char)((ulong)uVar55 >> 0x34),
                                                        CONCAT12((char)((uint6)uVar54 >> 0x24),
                                                                 CONCAT11((char)((uint)uVar53 >>
                                                                                0x14),
                                                                          (char)(uVar52 >> 4))))))))
  ;
  uVar19 = (ulong)bVar34 & 0xf;
  uVar19 = (uVar33 >> uVar19 * 4 | uVar33 << uVar19 * -4 + 0x40) & 0x8888888888888888;
  if (uVar19 != 0 && iVar28 != 0) {
    unaff_x27 = 0;
    uVar16 = *(uint *)(puVar30 + 3);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    pdStack_180 = (dword *)*puVar30;
    unaff_x28 = puVar30[1];
    do {
      uVar33 = (uVar19 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar26 = (int)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + (bVar34 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar26 != 0) {
        uVar26 = *(uint *)(lVar48 + (ulong)uVar26 * 4);
        if (uVar26 < uVar16) goto LAB_002da8b0;
        Hint_Prefetch(unaff_x28 + uVar26,0,0,0);
        adStack_170[unaff_x27] = uVar26;
        unaff_x27 = unaff_x27 + 1;
        iVar28 = iVar28 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar28 == 0)) goto LAB_002da8b0;
    } while( true );
  }
  goto LAB_002da940;
LAB_002daf9c:
  if (unaff_x27 != 0) {
    pdStack_318 = param_4;
    unaff_x24 = pdVar39 + 1;
    uVar16 = *pdVar39;
/* wm:proprietary - see LICENSE - do not sell */
    unaff_x26 = (ulong)uVar16;
    iStack_31c = (uVar25 + ((int)pdStack_310 - (int)unaff_x28) + 3) - uVar29;
    pdVar40 = adStack_300;
    uVar19 = uVar27;
    do {
      pdVar38 = pdVar40 + 1;
      uVar29 = *pdVar40;
      unaff_x20 = (dword *)(ulong)uVar29;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar16) {
        param_4 = pdStack_310;
        lVar36 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar27 = lVar36 + 4;
        unaff_x23 = param_3;
        if (uVar19 < uVar27) {
          *(ulong *)pdStack_318 = (ulong)(iStack_31c - uVar29);
          uVar19 = uVar27;
          if ((uint *)((long)pdVar39 + uVar27) == param_3) break;
        }
      }
/* chat: discord.gg/sdkhDjTex */
      uVar27 = uVar19;
      unaff_x27 = unaff_x27 - 1;
      pdVar40 = pdVar38;
      uVar19 = uVar27;
    } while (unaff_x27 != 0);
  }
  goto LAB_002db02c;
LAB_002db6a8:
  if (lVar36 != 0) {
    uVar19 = *puVar14;
    puVar17 = auStack_490;
    uVar33 = uVar27;
    do {
      uVar16 = *puVar17;
      puVar49 = (uint *)(lVar35 + (ulong)uVar16);
      if (*puVar49 == (uint)uVar19) {
        pdVar38 = pdVar39;
// found on a paste site? it was re-uploaded illegally
        lVar47 = func_0x002ad924((uint *)((long)puVar14 + 4),puVar49 + 1);
        uVar27 = lVar47 + 4;
        if (uVar33 < uVar27) {
          *(ulong *)param_4 =
               (ulong)(((uVar26 + ((int)pdVar39 - (int)lVar35) + 3) - iVar5) - uVar16);
          uVar33 = uVar27;
          if ((uint *)((long)puVar14 + uVar27) == param_3) break;
        }
      }
      uVar27 = uVar33;
      lVar36 = lVar36 + -1;
      puVar17 = puVar17 + 1;
      uVar33 = uVar27;
    } while (lVar36 != 0);
  }
  goto LAB_002db738;
LAB_002da8b0:
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
      unaff_x20 = (dword *)(ulong)uVar29;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar16) {
        param_4 = pdStack_180;
        lVar36 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1,param_3,
                                 pdStack_180,lVar47 + uStack_178);
        uVar27 = lVar36 + 4;
        unaff_x23 = param_3;
/* WM - no support for modified copies */
        if (uVar19 < uVar27) {
          *(ulong *)pdStack_188 = (ulong)(iStack_18c - uVar29);
          uVar19 = uVar27;
          if ((uint *)((long)param_2 + uVar27) == param_3) break;
        }
      }
      uVar27 = uVar19;
      unaff_x27 = unaff_x27 - 1;
      pdVar39 = pdVar38;
      uVar19 = uVar27;
    } while (unaff_x27 != 0);
  }
LAB_002da940:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar27;
  }
  auVar74 = ___stack_chk_fail();
  pdVar39 = auVar74._8_8_;
  lVar35 = auVar74._0_8_;
  uStack_1f0 = unaff_x28;
  uStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  lStack_1d8 = lVar47;
  pdStack_1d0 = unaff_x24;
  pdStack_1c8 = unaff_x23;
  uStack_1c0 = uVar27;
  pdStack_1b8 = param_2;
  pdStack_1b0 = unaff_x20;
  pdStack_1a8 = pdVar38;
  puStack_1a0 = auStack_68 + 0x58;
  pcStack_198 = FUN_002daaa8;
  lStack_200 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar36 = *(long *)(lVar35 + 0x70);
  lVar47 = *(long *)(lVar35 + 0x38);
  iVar5 = *(int *)(lVar35 + 0x34);
  lVar48 = *(long *)(lVar35 + 8);
  uVar26 = 1 << (ulong)(*(uint *)(lVar35 + 0x100) & 0x1f);
  uVar29 = *(uint *)(lVar35 + 0x18);
  uStack_308 = (ulong)uVar29;
  uVar27 = (long)pdVar39 - lVar48;
  uVar25 = (uint)uVar27;
  uVar16 = uVar25 - uVar26;
  if (uVar25 - *(uint *)(lVar35 + 0x1c) <= uVar26 || *(int *)(lVar35 + 0x28) != 0) {
    uVar16 = *(uint *)(lVar35 + 0x1c);
  }
  uVar26 = *(uint *)(lVar35 + 0x10c);
  if (4 < uVar26) {
    uVar26 = 5;
  }
  uVar51 = *(ulong *)(lVar35 + 0x60);
  iVar28 = 1 << (ulong)(uVar26 & 0x1f);
  puVar30 = *(undefined8 **)(lVar35 + 0xf8);
  uVar33 = (ulong)(*(long *)pdVar39 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar30 + 0x34)) & 0x3f);
/* no support for modified copies */
  uVar19 = uVar33 >> 3 & 0x1fffffe0;
  pbVar1 = (byte *)(puVar30[7] + uVar19);
  lVar3 = puVar30[0xe] + uVar19 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar35 + 300) == 0) {
    pdStack_310 = (dword *)CONCAT44(pdStack_310._4_4_,iVar5);
    pdStack_318 = param_3;
    lVar20 = lVar35 + 0x40;
    uVar26 = *(uint *)(lVar35 + 0x2c);
    uVar19 = (ulong)uVar26;
    lVar21 = lVar47;
    lVar23 = lVar36;
    if (0x180 < uVar25 - uVar26) {
      if (uVar26 < 0xffffffa0) {
/*  if you paid for this, you were scammed  */
        uVar45 = uVar19 + 0x60;
        do {
          uVar46 = (*(long *)(lVar48 + 8 + uVar19) * -0x30e4432340650000 ^ *(ulong *)(lVar35 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar41 = uVar46 >> 3 & 0x1fffffe0;
          lVar21 = lVar36 + uVar41 * 4;
          Hint_Prefetch(lVar21,0,0,0);
          Hint_Prefetch(lVar21 + 0x40,0,0,0);
          Hint_Prefetch(lVar47 + uVar41,0,0,0);
          uVar6 = *(uint *)(lVar20 + (uVar19 & 7) * 4);
          *(int *)(lVar20 + (uVar19 & 7) * 4) = (int)uVar46;
          uVar46 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar47 + uVar46);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar26 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar26 = 0;
          }
          unaff_x24 = (dword *)(uVar26 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar6;
          *(int *)(lVar36 + uVar46 * 4 + (long)unaff_x24 * 4) = (int)uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar45 != uVar19);
        lVar23 = *(long *)(lVar35 + 0x70);
        lVar21 = *(long *)(lVar35 + 0x38);
/* WM - chat: discord.gg/sdkhDjTex */
      }
      uVar26 = uVar25 - 0x20;
      uVar19 = (ulong)uVar26;
      iVar43 = (int)(undefined1 *)((long)pdVar39 + 1U) - (int)(undefined1 *)(lVar48 + uVar19);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar42 = 8;
      if (iVar43 + 1U < 8) {
        iVar42 = iVar43 + 1;
      }
      iVar43 = 0;
      if ((undefined1 *)(lVar48 + uVar19) <= (undefined1 *)((long)pdVar39 + 1U)) {
        iVar43 = iVar42;
      }
      unaff_x20 = (dword *)(ulong)(iVar43 + uVar26);
      if (uVar26 < iVar43 + uVar26) {
        iVar42 = *(int *)(lVar35 + 0x34);
        unaff_x20 = *(dword **)(lVar35 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar48 + uVar19) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar42) & 0x3f));
          uVar45 = (ulong)unaff_x23 >> 3 & 0x1fffffe0;
          unaff_x26 = lVar23 + uVar45 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar21 + uVar45,0,0,0);
          unaff_x24 = (dword *)(uVar19 & 7);
          *(int *)(lVar20 + (long)unaff_x24 * 4) = (int)unaff_x23;
/* WM - more drops soon - github.com/pengussy */
          uVar19 = uVar19 + 1;
          iVar43 = iVar43 + -1;
        } while (iVar43 != 0);
      }
    }
    if (uVar26 < uVar25) {
      lVar24 = *(long *)(lVar35 + 8);
      iVar42 = *(int *)(lVar35 + 0x34);
      puVar17 = (uint *)(ulong)uVar26;
      unaff_x20 = (dword *)(uVar27 & 0xffffffff);
      do {
        uVar19 = (*(long *)(lVar24 + 8 + (long)puVar17) * -0x30e4432340650000 ^
                 *(ulong *)(lVar35 + 0x60)) >> ((ulong)(0x38 - iVar42) & 0x3f);
        uVar45 = uVar19 >> 3 & 0x1fffffe0;
        lVar4 = lVar23 + uVar45 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        Hint_Prefetch(lVar21 + uVar45,0,0,0);
        uVar6 = *(uint *)(lVar20 + ((ulong)puVar17 & 7) * 4);
        unaff_x26 = (ulong)uVar6;
        *(int *)(lVar20 + ((ulong)puVar17 & 7) * 4) = (int)uVar19;
        uVar19 = (ulong)(uVar6 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar23 + uVar19 * 4);
        unaff_x23 = (dword *)(lVar21 + uVar19);
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
// WM - donate: donate/README.md
    }
    *(uint *)(lVar35 + 0x2c) = uVar25;
    uVar19 = (*(long *)(lVar48 + (uVar27 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar51) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar51 = uVar19 >> 3 & 0x1fffffe0;
    lVar21 = lVar36 + uVar51 * 4;
    Hint_Prefetch(lVar21,0,0,0);
    Hint_Prefetch(lVar21 + 0x40,0,0,0);
    Hint_Prefetch(lVar47 + uVar51,0,0,0);
    uVar26 = *(uint *)(lVar20 + (uVar27 & 7) * 4);
    *(int *)(lVar20 + (uVar27 & 7) * 4) = (int)uVar19;
  }
  else {
    uVar26 = (uint)((*(long *)pdVar39 * -0x30e4432340650000 ^ uVar51) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar35 + 0x2c) = uVar25;
  }
  *(uint *)(lVar35 + 0x68) = *(int *)(lVar35 + 0x68) + uVar26;
  uVar27 = (ulong)(uVar26 >> 3) & 0x1fffffe0;
  lVar36 = lVar36 + uVar27 * 4;
  pbVar2 = (byte *)(lVar47 + uVar27);
/* WM - found on a paste site? it was re-uploaded illegally */
  bVar34 = *pbVar2;
  pdVar38 = (dword *)(ulong)bVar34;
  bVar31 = (byte)uVar26;
  uVar65 = CONCAT11(-(bVar31 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar31 == (byte)*(undefined2 *)pbVar2));
  uVar66 = CONCAT13(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar65));
  uVar67 = CONCAT15(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar66));
  uVar68 = CONCAT11(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar69 = CONCAT13(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar68));
  uVar70 = CONCAT15(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar69));
  uVar52 = CONCAT11(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar31 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar53 = CONCAT13(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar52));
  uVar54 = CONCAT15(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar53));
  uVar55 = CONCAT17(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar54));
  auVar57._0_10_ =
       CONCAT19(-(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar55));
  auVar57[10] = -(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar57[0xb] = -(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar60[0xc] = -(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar60._0_12_ = auVar57;
  auVar60[0xd] = -(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar72[0xe] = -(bVar31 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar72._0_14_ = auVar60;
  auVar72[0xf] = -(bVar31 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar27 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar31 ==
// donate: donate/README.md
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar31 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar70)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar70 >> 0x26),
                                      CONCAT15((char)((uint)uVar69 >> 0x16),
                                               CONCAT14((char)(uVar68 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar31 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar31 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar67)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar67 >> 0x26),
                                                           CONCAT11((char)((uint)uVar66 >> 0x16),
                                                                    (char)(uVar65 >> 6)))))))),
                    CONCAT17((char)(auVar72._14_2_ >> 6),
                             CONCAT16((char)(auVar60._12_2_ >> 6),
                                      CONCAT15((char)(auVar57._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar57._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar55 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar54 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar53 >> 0x16),(char)(uVar52 >> 6)))))))),4,1);
  uVar27 = (uVar27 >> ((ulong)bVar34 & 0x1f) * 2 | uVar27 << ((ulong)bVar34 & 0x1f) * -2 + 0x40) &
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
           0x5555555555555555;
  if (uVar27 != 0) {
    lVar47 = 0;
    do {
      uVar19 = (uVar27 << 1 & 0xcccccccccccccccc) >> 2 | (uVar27 << 1 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar26 = (int)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + (bVar34 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar26 != 0) {
        uVar26 = *(uint *)(lVar36 + (ulong)uVar26 * 4);
        if (uVar26 < uVar16) goto LAB_002dad54;
        Hint_Prefetch(lVar48 + (ulong)uVar26,0,0,0);
        adStack_300[lVar47] = uVar26;
        lVar47 = lVar47 + 1;
        iVar28 = iVar28 + -1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      if ((uVar27 == 0) || (iVar28 == 0)) goto LAB_002dad54;
    } while( true );
  }
  lVar47 = 0;
LAB_002dad54:
  uVar16 = 0x1f;
  if ((bVar34 & 0x1f) != 1) {
    uVar16 = 0;
  }
  lVar20 = (ulong)uVar16 + (ulong)(bVar34 - 1 & 0x1f);
  *pbVar2 = (byte)lVar20;
  pbVar2[lVar20] = bVar31;
  iVar5 = *(int *)(lVar35 + 0x2c);
  *(int *)(lVar35 + 0x2c) = iVar5 + 1;
  *(int *)(lVar36 + lVar20 * 4) = iVar5;
  if (lVar47 == 0) {
    uVar27 = 3;
  }
  else {
    lVar36 = 0;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    unaff_x27 = (ulong)(uVar25 + 3);
    unaff_x26 = lVar48 + 8;
    uVar19 = 3;
    do {
      uVar26 = adStack_300[lVar36];
      pdVar40 = (dword *)(lVar48 + (ulong)uVar26);
      uVar16 = *(uint *)((long)pdVar40 + (uVar19 - 3));
      pdVar38 = (dword *)(ulong)uVar16;
      uVar6 = *(uint *)((long)pdVar39 + (uVar19 - 3));
      unaff_x20 = (dword *)(ulong)uVar6;
      if (uVar16 == uVar6) {
        if (pdVar39 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar39;
          if (*(uint **)pdVar40 == unaff_x20) {
            pdVar38 = (dword *)0x0;
            pdVar40 = (dword *)(unaff_x26 + uVar26);
            pdVar44 = pdVar39 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar44) goto LAB_002dae44;
              unaff_x20 = *(dword **)pdVar40;
              unaff_x23 = pdVar44 + 2;
              unaff_x24 = *(dword **)pdVar44;
              pdVar38 = pdVar38 + 2;
              pdVar40 = pdVar40 + 2;
              pdVar44 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar27 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            unaff_x20 = (dword *)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20);
            uVar27 = (long)pdVar38 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar27 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar40;
            uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
            uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            pdVar38 = (dword *)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20);
            uVar27 = (ulong)pdVar38 >> 3;
          }
        }
        else {
          pdVar44 = pdVar39;
LAB_002dae44:
          if (pdVar44 < (uint *)((long)param_3 + -3)) {
            pdVar38 = pdVar44 + 1;
            unaff_x20 = pdVar40 + 1;
            if (*pdVar40 == *pdVar44) {
              pdVar44 = pdVar38;
              pdVar40 = unaff_x20;
            }
          }
          unaff_x23 = pdVar44;
          if (pdVar44 < (uint *)((long)param_3 + -1)) {
            pdVar38 = (dword *)((long)pdVar44 + 2);
            unaff_x20 = (dword *)((long)pdVar40 + 2);
            if ((short)*pdVar40 == (short)*pdVar44) {
/* wm:found on a paste site? it was re-uploaded illegally */
              pdVar40 = unaff_x20;
              unaff_x23 = pdVar38;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar38 = (dword *)(ulong)(byte)*pdVar40;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar40 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar27 = (long)unaff_x23 - (long)pdVar39;
        }
        if (uVar19 < uVar27) {
          *(ulong *)param_4 = (ulong)((uVar25 + 3) - uVar26);
          uVar19 = uVar27;
          if ((uint *)((long)pdVar39 + uVar27) == param_3) break;
        }
      }
      lVar36 = lVar36 + 1;
      uVar27 = uVar19;
    } while (lVar36 != lVar47);
  }
  bVar34 = *pbVar1;
  cVar32 = (char)uVar33;
/*  proprietary - see LICENSE - do not sell  */
  uVar65 = CONCAT11(-(cVar32 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(cVar32 == (char)*(undefined2 *)pbVar1));
  uVar66 = CONCAT13(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 4)),uVar65));
  uVar67 = CONCAT15(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 8)),uVar66));
  uVar68 = CONCAT11(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar32 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar69 = CONCAT13(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar68));
  uVar70 = CONCAT15(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar69));
  uVar52 = CONCAT11(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(cVar32 == (char)*(undefined2 *)(pbVar1 + 2)));
  uVar53 = CONCAT13(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 6)),uVar52));
  uVar54 = CONCAT15(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 10)),uVar53));
  uVar55 = CONCAT17(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar54));
/* WM - do not claim this as your own */
  auVar58._0_10_ =
       CONCAT19(-(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar32 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar55));
  auVar58[10] = -(cVar32 == (char)*(undefined2 *)(pbVar1 + 0x16));
  auVar58[0xb] = -(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar61[0xc] = -(cVar32 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar61._0_12_ = auVar58;
  auVar61[0xd] = -(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar62[0xe] = -(cVar32 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar62._0_14_ = auVar61;
  auVar62[0xf] = -(cVar32 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar33 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar32 ==
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar32 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar70)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar70 >> 0x26),
                                      CONCAT15((char)((uint)uVar69 >> 0x16),
                                               CONCAT14((char)(uVar68 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar32 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(cVar32 ==
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar67)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar67 >> 0x26),
                                                           CONCAT11((char)((uint)uVar66 >> 0x16),
                                                                    (char)(uVar65 >> 6)))))))),
                    CONCAT17((char)(auVar62._14_2_ >> 6),
                             CONCAT16((char)(auVar61._12_2_ >> 6),
                                      CONCAT15((char)(auVar58._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar58._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar55 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar54 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar53 >> 0x16),(char)(uVar52 >> 6)))))))),4,1);
  uVar19 = (ulong)bVar34 & 0x1f;
  uVar19 = (uVar33 >> uVar19 * 2 | uVar33 << uVar19 * -2 + 0x40) & 0x5555555555555555;
  if (uVar19 != 0 && iVar28 != 0) {
    unaff_x27 = 0;
    uVar16 = *(uint *)(puVar30 + 3);
    pdStack_310 = (dword *)*puVar30;
    unaff_x28 = puVar30[1];
    do {
      uVar33 = (uVar19 << 1 & 0xcccccccccccccccc) >> 2 | (uVar19 << 1 & 0x3333333333333333) << 2;
// unlicensed copy if this notice is missing
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar26 = (int)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + (bVar34 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar26 != 0) {
        uVar26 = *(uint *)(lVar3 + (ulong)uVar26 * 4);
        if (uVar26 < uVar16) goto LAB_002daf9c;
        Hint_Prefetch(unaff_x28 + uVar26,0,0,0);
        adStack_300[unaff_x27] = uVar26;
        unaff_x27 = unaff_x27 + 1;
        iVar28 = iVar28 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar28 == 0)) goto LAB_002daf9c;
    } while( true );
  }
LAB_002db02c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_200) {
    return uVar27;
  }
  auVar74 = ___stack_chk_fail();
  puVar14 = auVar74._8_8_;
  lVar35 = auVar74._0_8_;
  uStack_380 = unaff_x28;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  uStack_378 = unaff_x27;
  uStack_370 = unaff_x26;
  lStack_368 = lVar48;
  pdStack_360 = unaff_x24;
  pdStack_358 = unaff_x23;
  uStack_350 = uVar27;
  pdStack_348 = pdVar39;
  pdStack_340 = unaff_x20;
  pdStack_338 = pdVar38;
  ppuStack_330 = &puStack_1a0;
  pcStack_328 = FUN_002db1a0;
  lStack_390 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar36 = *(long *)(lVar35 + 0x70);
  lVar47 = *(long *)(lVar35 + 0x38);
  iVar28 = *(int *)(lVar35 + 0x34);
  lVar48 = *(long *)(lVar35 + 8);
  uVar29 = 1 << (ulong)(*(uint *)(lVar35 + 0x100) & 0x1f);
// WM - reversing this took months of machine time
  iVar5 = *(int *)(lVar35 + 0x18);
  uVar27 = (long)puVar14 - lVar48;
  uVar26 = (uint)uVar27;
  uVar16 = uVar26 - uVar29;
  if (uVar26 - *(uint *)(lVar35 + 0x1c) <= uVar29 || *(int *)(lVar35 + 0x28) != 0) {
    uVar16 = *(uint *)(lVar35 + 0x1c);
  }
  uVar29 = *(uint *)(lVar35 + 0x10c);
  if (5 < uVar29) {
    uVar29 = 6;
  }
  uVar51 = *(ulong *)(lVar35 + 0x60);
  iVar42 = 1 << (ulong)(uVar29 & 0x1f);
  puVar30 = *(undefined8 **)(lVar35 + 0xf8);
  uVar33 = *puVar14 * -0x30e4432340650000 >> ((ulong)(0x38 - *(int *)((long)puVar30 + 0x34)) & 0x3f)
  ;
  uVar19 = uVar33 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar30[7] + uVar19);
  lVar3 = puVar30[0xe] + uVar19 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(lVar35 + 300) == 0) {
    lVar20 = lVar35 + 0x40;
    uVar29 = *(uint *)(lVar35 + 0x2c);
    uVar19 = (ulong)uVar29;
    lVar21 = lVar47;
    lVar23 = lVar36;
    if (0x180 < uVar26 - uVar29) {
      if (uVar29 < 0xffffffa0) {
        uVar45 = uVar19 + 0x60;
        do {
          uVar46 = (*(long *)(lVar48 + 8 + uVar19) * -0x30e4432340650000 ^ *(ulong *)(lVar35 + 0x60)
                   ) >> ((ulong)(0x38 - iVar28) & 0x3f);
          uVar41 = uVar46 >> 2 & 0x3fffffc0;
          lVar21 = lVar36 + uVar41 * 4;
/* WM - proprietary - see LICENSE - do not sell */
          Hint_Prefetch(lVar21,0,0,0);
          Hint_Prefetch(lVar21 + 0x40,0,0,0);
          lVar21 = lVar47 + uVar41;
          Hint_Prefetch(lVar21,0,0,0);
          Hint_Prefetch(lVar21 + 0x20,0,0,0);
          uVar25 = *(uint *)(lVar20 + (uVar19 & 7) * 4);
          *(int *)(lVar20 + (uVar19 & 7) * 4) = (int)uVar46;
          uVar46 = (ulong)(uVar25 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar47 + uVar46);
          uVar29 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar29 = 0;
          }
          lVar21 = (ulong)uVar29 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar21;
          pbVar2[lVar21] = (byte)uVar25;
          *(int *)(lVar36 + uVar46 * 4 + lVar21 * 4) = (int)uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar45 != uVar19);
        lVar23 = *(long *)(lVar35 + 0x70);
        lVar21 = *(long *)(lVar35 + 0x38);
      }
      uVar29 = uVar26 - 0x20;
      uVar19 = (ulong)uVar29;
      iVar8 = (int)((long)puVar14 + 1U) - (int)(lVar48 + uVar19);
      iVar43 = 8;
      if (iVar8 + 1U < 8) {
        iVar43 = iVar8 + 1;
      }
      iVar8 = 0;
      if (lVar48 + uVar19 <= (long)puVar14 + 1U) {
        iVar8 = iVar43;
      }
      if (uVar29 < iVar8 + uVar29) {
        iVar43 = *(int *)(lVar35 + 0x34);
        uVar45 = *(ulong *)(lVar35 + 0x60);
        do {
/*  no support for modified copies  */
          uVar46 = (*(long *)(lVar48 + uVar19) * -0x30e4432340650000 ^ uVar45) >>
                   ((ulong)(0x38 - iVar43) & 0x3f);
          uVar41 = uVar46 >> 2 & 0x3fffffc0;
          lVar24 = lVar23 + uVar41 * 4;
          Hint_Prefetch(lVar24,0,0,0);
          Hint_Prefetch(lVar24 + 0x40,0,0,0);
          lVar24 = lVar21 + uVar41;
          Hint_Prefetch(lVar24,0,0,0);
          Hint_Prefetch(lVar24 + 0x20,0,0,0);
          *(int *)(lVar20 + (uVar19 & 7) * 4) = (int)uVar46;
          uVar19 = uVar19 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    if (uVar29 < uVar26) {
      lVar24 = *(long *)(lVar35 + 8);
      iVar43 = *(int *)(lVar35 + 0x34);
      uVar19 = (ulong)uVar29;
/*  chat: discord.gg/sdkhDjTex  */
      do {
        uVar45 = (*(long *)(lVar24 + 8 + uVar19) * -0x30e4432340650000 ^ *(ulong *)(lVar35 + 0x60))
                 >> ((ulong)(0x38 - iVar43) & 0x3f);
        uVar46 = uVar45 >> 2 & 0x3fffffc0;
        lVar4 = lVar23 + uVar46 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar21 + uVar46;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar25 = *(uint *)(lVar20 + (uVar19 & 7) * 4);
        *(int *)(lVar20 + (uVar19 & 7) * 4) = (int)uVar45;
        uVar45 = (ulong)(uVar25 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar21 + uVar45);
        uVar29 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar29 = 0;
        }
        lVar4 = (ulong)uVar29 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar4;
        pbVar2[lVar4] = (byte)uVar25;
        *(int *)(lVar23 + uVar45 * 4 + lVar4 * 4) = (int)uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar19 < (uVar27 & 0xffffffff));
    }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    *(uint *)(lVar35 + 0x2c) = uVar26;
    uVar19 = (*(long *)(lVar48 + (uVar27 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar51) >>
             ((ulong)(0x38 - iVar28) & 0x3f);
    uVar51 = uVar19 >> 2 & 0x3fffffc0;
    lVar21 = lVar36 + uVar51 * 4;
    Hint_Prefetch(lVar21,0,0,0);
    Hint_Prefetch(lVar21 + 0x40,0,0,0);
    lVar21 = lVar47 + uVar51;
    Hint_Prefetch(lVar21,0,0,0);
    Hint_Prefetch(lVar21 + 0x20,0,0,0);
    uVar29 = *(uint *)(lVar20 + (uVar27 & 7) * 4);
    *(int *)(lVar20 + (uVar27 & 7) * 4) = (int)uVar19;
  }
  else {
    uVar29 = (uint)((*puVar14 * -0x30e4432340650000 ^ uVar51) >> ((ulong)(0x38 - iVar28) & 0x3f));
    *(uint *)(lVar35 + 0x2c) = uVar26;
  }
  *(uint *)(lVar35 + 0x68) = *(int *)(lVar35 + 0x68) + uVar29;
  uVar27 = (ulong)(uVar29 >> 2) & 0x3fffffc0;
  lVar36 = lVar36 + uVar27 * 4;
  pbVar2 = (byte *)(lVar47 + uVar27);
  bVar34 = (byte)uVar29;
  auVar71[0] = -(pbVar2[1] == bVar34);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  auVar71[1] = -(pbVar2[5] == bVar34);
  auVar71[2] = -(pbVar2[9] == bVar34);
  auVar71[3] = -(pbVar2[0xd] == bVar34);
  auVar71[4] = -(pbVar2[0x11] == bVar34);
  auVar71[5] = -(pbVar2[0x15] == bVar34);
  auVar71[6] = -(pbVar2[0x19] == bVar34);
  auVar71[7] = -(pbVar2[0x1d] == bVar34);
  auVar71[8] = -(pbVar2[0x21] == bVar34);
  auVar71[9] = -(pbVar2[0x25] == bVar34);
  auVar71[10] = -(pbVar2[0x29] == bVar34);
  auVar71[0xb] = -(pbVar2[0x2d] == bVar34);
  auVar71[0xc] = -(pbVar2[0x31] == bVar34);
  auVar71[0xd] = -(pbVar2[0x35] == bVar34);
  auVar71[0xe] = -(pbVar2[0x39] == bVar34);
  auVar71[0xf] = -(pbVar2[0x3d] == bVar34);
  auVar63[0] = -(pbVar2[3] == bVar34);
  auVar63[1] = -(pbVar2[7] == bVar34);
  auVar63[2] = -(pbVar2[0xb] == bVar34);
  auVar63[3] = -(pbVar2[0xf] == bVar34);
  auVar63[4] = -(pbVar2[0x13] == bVar34);
  auVar63[5] = -(pbVar2[0x17] == bVar34);
  auVar63[6] = -(pbVar2[0x1b] == bVar34);
  auVar63[7] = -(pbVar2[0x1f] == bVar34);
  auVar63[8] = -(pbVar2[0x23] == bVar34);
  auVar63[9] = -(pbVar2[0x27] == bVar34);
  auVar63[10] = -(pbVar2[0x2b] == bVar34);
  auVar63[0xb] = -(pbVar2[0x2f] == bVar34);
  auVar63[0xc] = -(pbVar2[0x33] == bVar34);
  auVar63[0xd] = -(pbVar2[0x37] == bVar34);
  auVar63[0xe] = -(pbVar2[0x3b] == bVar34);
  auVar63[0xf] = -(pbVar2[0x3f] == bVar34);
  auVar10[1] = -(pbVar2[4] == bVar34);
  auVar10[0] = -(*pbVar2 == bVar34);
  auVar10[2] = -(pbVar2[8] == bVar34);
  auVar10[3] = -(pbVar2[0xc] == bVar34);
  auVar10[4] = -(pbVar2[0x10] == bVar34);
  auVar10[5] = -(pbVar2[0x14] == bVar34);
  auVar10[6] = -(pbVar2[0x18] == bVar34);
/* WM - origin: github.com/pengussy */
  auVar10[7] = -(pbVar2[0x1c] == bVar34);
  auVar10[8] = -(pbVar2[0x20] == bVar34);
  auVar10[9] = -(pbVar2[0x24] == bVar34);
  auVar10[10] = -(pbVar2[0x28] == bVar34);
  auVar10[0xb] = -(pbVar2[0x2c] == bVar34);
  auVar10[0xc] = -(pbVar2[0x30] == bVar34);
  auVar10[0xd] = -(pbVar2[0x34] == bVar34);
  auVar10[0xe] = -(pbVar2[0x38] == bVar34);
  auVar10[0xf] = -(pbVar2[0x3c] == bVar34);
  auVar72 = NEON_sri(auVar71,auVar10,1,1);
  auVar12[1] = -(pbVar2[6] == bVar34);
  auVar12[0] = -(pbVar2[2] == bVar34);
  auVar12[2] = -(pbVar2[10] == bVar34);
  auVar12[3] = -(pbVar2[0xe] == bVar34);
  auVar12[4] = -(pbVar2[0x12] == bVar34);
  auVar12[5] = -(pbVar2[0x16] == bVar34);
  auVar12[6] = -(pbVar2[0x1a] == bVar34);
/* found on a paste site? it was re-uploaded illegally */
  auVar12[7] = -(pbVar2[0x1e] == bVar34);
  auVar12[8] = -(pbVar2[0x22] == bVar34);
  auVar12[9] = -(pbVar2[0x26] == bVar34);
  auVar12[10] = -(pbVar2[0x2a] == bVar34);
  auVar12[0xb] = -(pbVar2[0x2e] == bVar34);
  auVar12[0xc] = -(pbVar2[0x32] == bVar34);
  auVar12[0xd] = -(pbVar2[0x36] == bVar34);
  auVar12[0xe] = -(pbVar2[0x3a] == bVar34);
  auVar12[0xf] = -(pbVar2[0x3e] == bVar34);
  auVar74 = NEON_sri(auVar63,auVar12,1,1);
  auVar74 = NEON_sri(auVar74,auVar72,2,1);
  auVar74 = NEON_sri(auVar74,auVar74,4,1);
  uVar27 = CONCAT17((char)(auVar74._14_2_ >> 4),
                    CONCAT16((char)(auVar74._12_2_ >> 4),
                             CONCAT15((char)(auVar74._10_2_ >> 4),
                                      CONCAT14((char)(auVar74._8_2_ >> 4),
                                               CONCAT13((char)(auVar74._6_2_ >> 4),
                                                        CONCAT12((char)(auVar74._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar74._2_2_ >> 4)
                                                                          ,(char)(auVar74._0_2_ >> 4
                                                                                 ))))))));
  lVar47 = 0;
// WM - origin: github.com/pengussy
  uVar29 = (uint)*pbVar2;
  if (uVar27 != 0) {
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
        uVar25 = *(uint *)(lVar36 + (ulong)uVar25 * 4);
        if (uVar25 < uVar16) break;
        Hint_Prefetch(lVar48 + (ulong)uVar25,0,0,0);
        auStack_490[lVar47] = uVar25;
        lVar47 = lVar47 + 1;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        iVar42 = iVar42 + -1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      if ((uVar27 == 0) || (iVar42 == 0)) break;
    } while( true );
  }
  uVar16 = 0x3f;
  if ((uVar29 & 0x3f) != 1) {
    uVar16 = 0;
  }
  lVar20 = (ulong)uVar16 + (ulong)(uVar29 - 1 & 0x3f);
  *pbVar2 = (byte)lVar20;
  pbVar2[lVar20] = bVar34;
  iVar28 = *(int *)(lVar35 + 0x2c);
  *(int *)(lVar35 + 0x2c) = iVar28 + 1;
  *(int *)(lVar36 + lVar20 * 4) = iVar28;
  if (lVar47 == 0) {
    uVar27 = 3;
  }
  else {
    lVar36 = 0;
    uVar19 = 3;
    do {
      uVar16 = auStack_490[lVar36];
      puVar18 = (ulong *)(lVar48 + (ulong)uVar16);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      if (*(int *)((long)puVar18 + (uVar19 - 3)) == *(int *)((long)puVar14 + (uVar19 - 3))) {
        puVar22 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar18 == *puVar14) {
            lVar35 = 0;
            puVar18 = (ulong *)(lVar48 + 8 + (ulong)uVar16);
            do {
              puVar22 = puVar22 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar22) goto LAB_002db54c;
              uVar27 = *puVar18;
              lVar35 = lVar35 + 8;
              puVar18 = puVar18 + 1;
            } while (uVar27 == *puVar22);
            uVar27 = *puVar22 ^ uVar27;
            uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
            uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
            uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
            uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
            uVar27 = lVar35 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
          }
          else {
            uVar27 = *puVar14 ^ *puVar18;
// WM - keep the notice, keep the source honest
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
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
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
      lVar36 = lVar36 + 1;
      uVar27 = uVar19;
    } while (lVar36 != lVar47);
  }
  bVar34 = (byte)uVar33;
  auVar73[0] = -(pbVar1[1] == bVar34);
  auVar73[1] = -(pbVar1[5] == bVar34);
  auVar73[2] = -(pbVar1[9] == bVar34);
  auVar73[3] = -(pbVar1[0xd] == bVar34);
  auVar73[4] = -(pbVar1[0x11] == bVar34);
  auVar73[5] = -(pbVar1[0x15] == bVar34);
  auVar73[6] = -(pbVar1[0x19] == bVar34);
/* thanks for reading - discord.gg/sdkhDjTex */
  auVar73[7] = -(pbVar1[0x1d] == bVar34);
  auVar73[8] = -(pbVar1[0x21] == bVar34);
  auVar73[9] = -(pbVar1[0x25] == bVar34);
  auVar73[10] = -(pbVar1[0x29] == bVar34);
  auVar73[0xb] = -(pbVar1[0x2d] == bVar34);
  auVar73[0xc] = -(pbVar1[0x31] == bVar34);
  auVar73[0xd] = -(pbVar1[0x35] == bVar34);
  auVar73[0xe] = -(pbVar1[0x39] == bVar34);
  auVar73[0xf] = -(pbVar1[0x3d] == bVar34);
  auVar64[0] = -(pbVar1[3] == bVar34);
  auVar64[1] = -(pbVar1[7] == bVar34);
  auVar64[2] = -(pbVar1[0xb] == bVar34);
  auVar64[3] = -(pbVar1[0xf] == bVar34);
  auVar64[4] = -(pbVar1[0x13] == bVar34);
  auVar64[5] = -(pbVar1[0x17] == bVar34);
  auVar64[6] = -(pbVar1[0x1b] == bVar34);
  auVar64[7] = -(pbVar1[0x1f] == bVar34);
  auVar64[8] = -(pbVar1[0x23] == bVar34);
  auVar64[9] = -(pbVar1[0x27] == bVar34);
  auVar64[10] = -(pbVar1[0x2b] == bVar34);
  auVar64[0xb] = -(pbVar1[0x2f] == bVar34);
  auVar64[0xc] = -(pbVar1[0x33] == bVar34);
  auVar64[0xd] = -(pbVar1[0x37] == bVar34);
  auVar64[0xe] = -(pbVar1[0x3b] == bVar34);
  auVar64[0xf] = -(pbVar1[0x3f] == bVar34);
  auVar11[1] = -(pbVar1[4] == bVar34);
  auVar11[0] = -(*pbVar1 == bVar34);
  auVar11[2] = -(pbVar1[8] == bVar34);
  auVar11[3] = -(pbVar1[0xc] == bVar34);
  auVar11[4] = -(pbVar1[0x10] == bVar34);
  auVar11[5] = -(pbVar1[0x14] == bVar34);
  auVar11[6] = -(pbVar1[0x18] == bVar34);
  auVar11[7] = -(pbVar1[0x1c] == bVar34);
  auVar11[8] = -(pbVar1[0x20] == bVar34);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  auVar11[9] = -(pbVar1[0x24] == bVar34);
  auVar11[10] = -(pbVar1[0x28] == bVar34);
  auVar11[0xb] = -(pbVar1[0x2c] == bVar34);
  auVar11[0xc] = -(pbVar1[0x30] == bVar34);
  auVar11[0xd] = -(pbVar1[0x34] == bVar34);
  auVar11[0xe] = -(pbVar1[0x38] == bVar34);
  auVar11[0xf] = -(pbVar1[0x3c] == bVar34);
  auVar72 = NEON_sri(auVar73,auVar11,1,1);
  auVar13[1] = -(pbVar1[6] == bVar34);
  auVar13[0] = -(pbVar1[2] == bVar34);
  auVar13[2] = -(pbVar1[10] == bVar34);
  auVar13[3] = -(pbVar1[0xe] == bVar34);
  auVar13[4] = -(pbVar1[0x12] == bVar34);
  auVar13[5] = -(pbVar1[0x16] == bVar34);
  auVar13[6] = -(pbVar1[0x1a] == bVar34);
  auVar13[7] = -(pbVar1[0x1e] == bVar34);
  auVar13[8] = -(pbVar1[0x22] == bVar34);
  auVar13[9] = -(pbVar1[0x26] == bVar34);
  auVar13[10] = -(pbVar1[0x2a] == bVar34);
  auVar13[0xb] = -(pbVar1[0x2e] == bVar34);
  auVar13[0xc] = -(pbVar1[0x32] == bVar34);
  auVar13[0xd] = -(pbVar1[0x36] == bVar34);
  auVar13[0xe] = -(pbVar1[0x3a] == bVar34);
  auVar13[0xf] = -(pbVar1[0x3e] == bVar34);
  auVar74 = NEON_sri(auVar64,auVar13,1,1);
  auVar74 = NEON_sri(auVar74,auVar72,2,1);
  auVar74 = NEON_sri(auVar74,auVar74,4,1);
  uVar19 = CONCAT17((char)(auVar74._14_2_ >> 4),
                    CONCAT16((char)(auVar74._12_2_ >> 4),
                             CONCAT15((char)(auVar74._10_2_ >> 4),
                                      CONCAT14((char)(auVar74._8_2_ >> 4),
                                               CONCAT13((char)(auVar74._6_2_ >> 4),
                                                        CONCAT12((char)(auVar74._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar74._2_2_ >> 4)
                                                                          ,(char)(auVar74._0_2_ >> 4
                                                                                 ))))))));
  pdVar38 = param_4;
/* WM - if you paid for this, you were scammed */
  if (uVar19 != 0 && iVar42 != 0) {
    lVar36 = 0;
    uVar16 = *(uint *)(puVar30 + 3);
    pdVar39 = (dword *)*puVar30;
    lVar35 = puVar30[1];
    bVar34 = *pbVar1;
    uVar33 = (ulong)bVar34 & 0x3f;
    uVar19 = uVar19 >> uVar33 | uVar19 << 0x40 - uVar33;
    do {
      uVar33 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + (uint)bVar34 & 0x3f;
      if (uVar29 != 0) {
        uVar29 = *(uint *)(lVar3 + (ulong)uVar29 * 4);
        if (uVar29 < uVar16) goto LAB_002db6a8;
        Hint_Prefetch(lVar35 + (ulong)uVar29,0,0,0);
        auStack_490[lVar36] = uVar29;
        lVar36 = lVar36 + 1;
        iVar42 = iVar42 + -1;
      }
      uVar19 = uVar19 - 1 & uVar19;
      if ((uVar19 == 0) || (iVar42 == 0)) goto LAB_002db6a8;
    } while( true );
  }
/*  donate: donate/README.md  */
LAB_002db738:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_390) {
    return uVar27;
  }
  auVar74 = ___stack_chk_fail();
  puVar14 = auVar74._8_8_;
  lVar36 = auVar74._0_8_;
  lVar35 = *(long *)(lVar36 + 0x80);
  uVar29 = 1 << (ulong)(*(uint *)(lVar36 + 0x104) & 0x1f);
  lVar47 = *(long *)(lVar36 + 8);
  uVar26 = 1 << (ulong)(*(uint *)(lVar36 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar36 + 0x18);
  uVar25 = (uint)((long)puVar14 - lVar47);
  uVar16 = uVar25 - uVar26;
  if (uVar25 - *(uint *)(lVar36 + 0x1c) <= uVar26 || *(int *)(lVar36 + 0x28) != 0) {
    uVar16 = *(uint *)(lVar36 + 0x1c);
  }
  uVar26 = 0;
  if (uVar29 <= uVar25) {
    uVar26 = uVar25 - uVar29;
/* WM - unlicensed copy if this notice is missing */
  }
  uVar50 = 1 << (ulong)(*(uint *)(lVar36 + 0x10c) & 0x1f);
  puVar30 = *(undefined8 **)(lVar36 + 0xf8);
  puVar17 = (uint *)(puVar30[0xe] +
                    (ulong)((uint)*puVar14 * -0x61c8864f >>
                           (ulong)(0x22U - *(int *)(puVar30 + 0x21) & 0x1f)) * 0x10);
  Hint_Prefetch(puVar17,0,0,0);
  lVar48 = *(long *)(lVar36 + 0x70);
  uVar15 = ~(-1 << (ulong)(*(uint *)(lVar36 + 0x104) & 0x1f));
  uVar6 = *(uint *)(lVar36 + 0x2c);
  uVar27 = (ulong)uVar6;
  uVar9 = 0x20 - *(int *)(lVar36 + 0x108);
  if (*(int *)(lVar36 + 300) == 0) {
    if (uVar6 < uVar25) {
      do {
        uVar6 = (uint)(*(int *)(lVar47 + uVar27) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
        *(undefined4 *)(lVar35 + (ulong)((uint)uVar27 & uVar15) * 4) =
             *(undefined4 *)(lVar48 + (ulong)uVar6 * 4);
        *(uint *)(lVar48 + (ulong)uVar6 * 4) = (uint)uVar27;
        uVar27 = uVar27 + 1;
      } while (uVar27 < ((long)puVar14 - lVar47 & 0xffffffffU));
    }
  }
  else if (uVar6 < uVar25) {
    uVar7 = (uint)(*(int *)(lVar47 + uVar27) * -0x61c8864f) >> (ulong)(uVar9 & 0x1f);
    *(undefined4 *)(lVar35 + (ulong)(uVar6 & uVar15) * 4) =
         *(undefined4 *)(lVar48 + (ulong)uVar7 * 4);
    *(uint *)(lVar48 + (ulong)uVar7 * 4) = uVar6;
  }
  *(uint *)(lVar36 + 0x2c) = uVar25;
  uVar6 = (uint)*puVar14;
  uVar15 = *(uint *)(lVar48 + (ulong)(uVar6 * -0x61c8864f >> (ulong)(uVar9 & 0x1f)) * 4);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  if (uVar16 <= uVar15) {
    uVar27 = 3;
    do {
      puVar18 = (ulong *)(lVar47 + (ulong)uVar15);
      if (*(int *)((long)puVar18 + (uVar27 - 3)) == *(int *)((long)puVar14 + (uVar27 - 3))) {
        puVar22 = puVar14;
        if (puVar14 < (ulong *)((long)param_3 + -7)) {
          if (*puVar18 == *puVar14) {
            lVar36 = 0;
            puVar18 = (ulong *)(lVar47 + 8 + (ulong)uVar15);
            do {
              puVar22 = puVar22 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar22) goto code_r0x002dbc9c;
              uVar19 = *puVar18;
              lVar36 = lVar36 + 8;
              puVar18 = puVar18 + 1;
            } while (uVar19 == *puVar22);
            uVar19 = *puVar22 ^ uVar19;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
// WM - do not claim this as your own
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = lVar36 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          }
          else {
            uVar19 = *puVar14 ^ *puVar18;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
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
/* if you paid for this, you were scammed - github.com/pengussy */
          if ((uint *)((long)puVar14 + uVar19) == param_3) goto code_r0x002dba0c;
        }
      }
      uVar19 = uVar27;
      if ((uVar15 <= uVar26) || (uVar50 = uVar50 - 1, uVar50 == 0)) goto code_r0x002dba0c;
      uVar15 = *(uint *)(lVar35 + (ulong)(uVar15 & uVar29 - 1) * 4);
      uVar27 = uVar19;
      if (uVar15 < uVar16) goto code_r0x002dba0c;
    } while( true );
  }
  uVar19 = 3;
code_r0x002dba0c:
  lVar36 = puVar30[1];
  Hint_Prefetch(lVar36 + (ulong)*puVar17,0,0,0);
  Hint_Prefetch(lVar36 + (ulong)puVar17[1],0,0,0);
  Hint_Prefetch(lVar36 + (ulong)puVar17[2],0,0,0);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  iVar5 = ((int)*puVar30 - (int)lVar36) - iVar5;
  uVar16 = uVar50;
  if (2 < uVar50) {
    uVar16 = 3;
  }
  uVar29 = puVar17[3];
  puVar49 = (uint *)(puVar30[0x10] + (ulong)(uVar29 >> 8) * 4);
  Hint_Prefetch(puVar49,0,0,0);
  if (uVar50 == 0) {
    uVar16 = 0;
  }
  else {
    uVar26 = *puVar17;
    if (uVar26 == 0) {
      return uVar19;
    }
    iVar28 = uVar25 + iVar5 + 3;
    if (*(uint *)(lVar36 + (ulong)uVar26) == uVar6) {
      lVar35 = func_0x002ad924((uint *)((long)puVar14 + 4),(uint *)(lVar36 + (ulong)uVar26) + 1);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar27 = lVar35 + 4;
      if (uVar19 < uVar27) {
        *(ulong *)pdVar38 = (ulong)(iVar28 - uVar26);
        uVar19 = uVar27;
        if ((uint *)((long)puVar14 + uVar27) == param_3) {
          return uVar27;
        }
      }
    }
    if (uVar50 != 1) {
      uVar26 = puVar17[1];
      if (uVar26 == 0) {
        return uVar19;
      }
      uVar27 = uVar19;
      if (*(uint *)(lVar36 + (ulong)uVar26) == uVar6) {
        lVar35 = func_0x002ad924((uint *)((long)puVar14 + 4),(uint *)(lVar36 + (ulong)uVar26) + 1);
        uVar33 = lVar35 + 4;
        if (uVar19 < uVar33) {
          *(ulong *)pdVar38 = (ulong)(iVar28 - uVar26);
          uVar27 = uVar33;
          if ((uint *)((long)puVar14 + uVar33) == param_3) {
            return uVar33;
          }
// reversing this took months of machine time
        }
      }
      uVar19 = uVar27;
      if (uVar50 != 2) {
        uVar26 = puVar17[2];
        if (uVar26 == 0) {
          return uVar27;
        }
        if (*(uint *)(lVar36 + (ulong)uVar26) == uVar6) {
          lVar35 = func_0x002ad924((uint *)((long)puVar14 + 4),(uint *)(lVar36 + (ulong)uVar26) + 1)
          ;
          uVar19 = lVar35 + 4;
          if (uVar19 <= uVar27) {
            uVar26 = uVar50 - uVar16;
            if ((uVar29 & 0xff) <= uVar50 - uVar16) {
              uVar26 = uVar29 & 0xff;
            }
            goto joined_r0x002dbd90;
          }
          *(ulong *)pdVar38 = (ulong)(iVar28 - uVar26);
          if ((uint *)((long)puVar14 + uVar19) == param_3) {
            return uVar19;
          }
        }
      }
    }
  }
  uVar26 = uVar50 - uVar16;
  uVar27 = uVar19;
// WM - found on a paste site? it was re-uploaded illegally
  if ((uVar29 & 0xff) <= uVar50 - uVar16) {
    uVar26 = uVar29 & 0xff;
  }
joined_r0x002dbd90:
  if (uVar26 != 0) {
    uVar33 = (ulong)uVar26;
    uVar19 = uVar33;
    puVar17 = puVar49;
    do {
      Hint_Prefetch(lVar36 + (ulong)*puVar17,0,0,0);
      uVar19 = uVar19 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar19 != 0);
    do {
      uVar16 = *puVar49;
      puVar17 = (uint *)(lVar36 + (ulong)uVar16);
      if (*puVar17 == uVar6) {
        lVar35 = func_0x002ad924((uint *)((long)puVar14 + 4),puVar17 + 1);
        uVar19 = lVar35 + 4;
        if (uVar27 < uVar19) {
          *(ulong *)pdVar38 = (ulong)((uVar25 + iVar5 + 3) - uVar16);
          uVar27 = uVar19;
          if ((uint *)((long)puVar14 + uVar19) == param_3) {
            return uVar19;
          }
        }
      }
      uVar16 = (int)uVar33 - 1;
      uVar33 = (ulong)uVar16;
      puVar49 = puVar49 + 1;
    } while (uVar16 != 0);
  }
// thanks for reading - discord.gg/sdkhDjTex
  return uVar27;
}

