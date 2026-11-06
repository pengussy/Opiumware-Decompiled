/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2d8110:e15e8be9a5
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d8110(long param_1,dword *param_2,dword *param_3,dword *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong *puVar21;
  uint uVar22;
  uint *puVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  long lVar29;
/* WM - if you paid for this, you were scammed */
  long lVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  int iVar34;
  uint uVar35;
  undefined8 *puVar36;
  char cVar37;
  byte bVar38;
  byte bVar39;
  long lVar40;
  long lVar41;
  byte bVar42;
  uint uVar43;
  dword *pdVar44;
  dword *pdVar45;
  dword *pdVar46;
  dword *unaff_x20;
  ulong uVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  int iVar51;
  dword *unaff_x23;
  dword *pdVar52;
/* wm:donate: donate/README.md */
  ulong uVar53;
  dword *unaff_x24;
  ulong uVar54;
  long lVar55;
  long lVar56;
  ulong unaff_x26;
  uint *puVar57;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar58;
  ushort uVar59;
  undefined4 uVar60;
  undefined6 uVar61;
  undefined8 uVar62;
  undefined1 auVar63 [12];
  undefined1 auVar64 [12];
  undefined1 auVar71 [14];
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  undefined1 auVar72 [14];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  undefined1 auVar73 [14];
  undefined1 auVar74 [14];
  undefined1 auVar75 [14];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar68 [12];
  undefined1 auVar69 [12];
  undefined1 auVar70 [12];
  undefined1 auVar76 [14];
  undefined1 auVar77 [14];
  undefined1 auVar78 [14];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ushort uVar91;
  undefined4 uVar92;
  undefined6 uVar93;
  ulong uVar94;
  ushort uVar95;
  undefined4 uVar96;
  undefined6 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
/* keep the notice, keep the source honest - github.com/pengussy */
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  uint auStack_c60 [64];
  long lStack_b60;
  ulong uStack_b50;
  ulong uStack_b48;
  ulong uStack_b40;
  long lStack_b38;
  dword *pdStack_b30;
  dword *pdStack_b28;
  ulong uStack_b20;
  dword *pdStack_b18;
  dword *pdStack_b10;
  dword *pdStack_b08;
  long ******pppppplStack_b00;
/* wm:watermarked copy - do not remove */
  code *pcStack_af8;
  int iStack_aec;
  dword *pdStack_ae8;
  dword *pdStack_ae0;
  ulong uStack_ad8;
  dword adStack_ad0 [64];
  long lStack_9d0;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  long lStack_9a8;
  dword *pdStack_9a0;
  dword *pdStack_998;
  ulong uStack_990;
  dword *pdStack_988;
  dword *pdStack_980;
  dword *pdStack_978;
  undefined1 ******ppppppuStack_970;
  code *pcStack_968;
  int iStack_95c;
  dword *pdStack_958;
  dword *pdStack_950;
/* wm:keep the notice, keep the source honest */
  ulong uStack_948;
  dword adStack_940 [64];
  long lStack_840;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  long lStack_818;
  dword *pdStack_810;
  dword *pdStack_808;
  ulong uStack_800;
  dword *pdStack_7f8;
  dword *pdStack_7f0;
  dword *pdStack_7e8;
  undefined1 *****pppppuStack_7e0;
  undefined *puStack_7d8;
  int iStack_7cc;
  dword *pdStack_7c8;
  dword *pdStack_7c0;
  ulong uStack_7b8;
  dword adStack_7b0 [64];
  long lStack_6b0;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  long lStack_688;
  dword *pdStack_680;
  dword *pdStack_678;
  ulong uStack_670;
  dword *pdStack_668;
  dword *pdStack_660;
  dword *pdStack_658;
  undefined1 ****ppppuStack_650;
  code *pcStack_648;
  int iStack_63c;
  dword *pdStack_638;
  dword *pdStack_630;
  ulong uStack_628;
  dword adStack_620 [64];
/* reversing this took months of machine time - github.com/pengussy */
  long lStack_520;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  long lStack_4f8;
  dword *pdStack_4f0;
  dword *pdStack_4e8;
  ulong uStack_4e0;
  dword *pdStack_4d8;
  dword *pdStack_4d0;
  dword *pdStack_4c8;
  undefined1 ***pppuStack_4c0;
  code *pcStack_4b8;
  int iStack_4ac;
  dword *pdStack_4a8;
  dword *pdStack_4a0;
  ulong uStack_498;
  dword adStack_490 [64];
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
  undefined *puStack_328;
  int iStack_31c;
  dword *pdStack_318;
  dword *pdStack_310;
  ulong uStack_308;
  dword adStack_300 [64];
/* reversing this took months of machine time */
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
  dword adStack_170 [64];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(param_1 + 0x70);
  lVar40 = *(long *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x34);
  lVar55 = *(long *)(param_1 + 8);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar32 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar35 = *(uint *)(param_1 + 0x18);
  uStack_178 = (ulong)uVar35;
  uVar33 = (long)param_2 - lVar55;
  uVar31 = (uint)uVar33;
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(param_1 + 0x1c) <= uVar32 || *(int *)(param_1 + 0x28) != 0) {
    uVar22 = *(uint *)(param_1 + 0x1c);
  }
  uVar32 = *(uint *)(param_1 + 0x10c);
  if (4 < uVar32) {
    uVar32 = 5;
  }
  iVar34 = 1 << (ulong)(uVar32 & 0x1f);
  puVar36 = *(undefined8 **)(param_1 + 0xf8);
  uVar32 = *param_2 * -0x61c8864f >> (ulong)(0x18U - *(int *)((long)puVar36 + 0x34) & 0x1f);
  uVar25 = (ulong)(uVar32 >> 3 & 0x1fffffe0);
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar56 = puVar36[0xe] + uVar25 * 4;
  Hint_Prefetch(lVar56,0,0,0);
  Hint_Prefetch(lVar56 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  uVar49 = (uint)*(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    pdStack_180 = (dword *)CONCAT44(pdStack_180._4_4_,iVar5);
    pdStack_188 = param_3;
    lVar3 = param_1 + 0x40;
    uVar43 = *(uint *)(param_1 + 0x2c);
    uVar25 = (ulong)uVar43;
    lVar26 = lVar40;
    lVar27 = lVar41;
    if (0x180 < uVar31 - uVar43) {
      if (uVar43 < 0xffffffa0) {
        uVar94 = uVar25 + 0x60;
        do {
          uVar43 = (*(int *)(lVar55 + 8 + uVar25) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                   (ulong)(0x18U - iVar5 & 0x1f);
          uVar58 = (ulong)(uVar43 >> 3 & 0x1fffffe0);
          lVar26 = lVar41 + uVar58 * 4;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x40,0,0,0);
          Hint_Prefetch(lVar40 + uVar58,0,0,0);
          uVar48 = *(uint *)(lVar3 + (uVar25 & 7) * 4);
          *(uint *)(lVar3 + (uVar25 & 7) * 4) = uVar43;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          uVar58 = (ulong)(uVar48 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar40 + uVar58);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar43 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar43 = 0;
          }
          unaff_x24 = (dword *)(uVar43 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar48;
          *(int *)(lVar41 + uVar58 * 4 + (long)unaff_x24 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar94 != uVar25);
        lVar27 = *(long *)(param_1 + 0x70);
        lVar26 = *(long *)(param_1 + 0x38);
      }
      uVar43 = uVar31 - 0x20;
      uVar25 = (ulong)uVar43;
      iVar51 = (int)(undefined1 *)((long)param_2 + 1U) - (int)(undefined1 *)(lVar55 + uVar25);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar50 = 8;
      if (iVar51 + 1U < 8) {
        iVar50 = iVar51 + 1;
      }
      iVar51 = 0;
      if ((undefined1 *)(lVar55 + uVar25) <= (undefined1 *)((long)param_2 + 1U)) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        iVar51 = iVar50;
      }
      unaff_x20 = (dword *)(ulong)(iVar51 + uVar43);
      if (uVar43 < iVar51 + uVar43) {
        iVar50 = *(int *)(param_1 + 0x34);
        uVar48 = *(uint *)(param_1 + 0x60);
        unaff_x20 = (dword *)(ulong)uVar48;
        do {
          uVar8 = (*(int *)(lVar55 + uVar25) * -0x61c8864f ^ uVar48) >>
                  (ulong)(0x18U - iVar50 & 0x1f);
          unaff_x23 = (dword *)(ulong)uVar8;
          uVar94 = (ulong)(uVar8 >> 3 & 0x1fffffe0);
          unaff_x26 = lVar27 + uVar94 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar26 + uVar94,0,0,0);
          unaff_x24 = (dword *)(uVar25 & 7);
          *(uint *)(lVar3 + (long)unaff_x24 * 4) = uVar8;
          uVar25 = uVar25 + 1;
          iVar51 = iVar51 + -1;
        } while (iVar51 != 0);
      }
    }
/*  found on a paste site? it was re-uploaded illegally  */
    if (uVar43 < uVar31) {
      lVar29 = *(long *)(param_1 + 8);
      iVar50 = *(int *)(param_1 + 0x34);
      puVar23 = (uint *)(ulong)uVar43;
      unaff_x20 = (dword *)(uVar33 & 0xffffffff);
      do {
        uVar43 = (*(int *)(lVar29 + 8 + (long)puVar23) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                 (ulong)(0x18U - iVar50 & 0x1f);
        uVar25 = (ulong)(uVar43 >> 3 & 0x1fffffe0);
        lVar30 = lVar27 + uVar25 * 4;
        Hint_Prefetch(lVar30,0,0,0);
        Hint_Prefetch(lVar30 + 0x40,0,0,0);
        Hint_Prefetch(lVar26 + uVar25,0,0,0);
        uVar48 = *(uint *)(lVar3 + ((ulong)puVar23 & 7) * 4);
        unaff_x26 = (ulong)uVar48;
        *(uint *)(lVar3 + ((ulong)puVar23 & 7) * 4) = uVar43;
        uVar25 = (ulong)(uVar48 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar27 + uVar25 * 4);
        unaff_x23 = (dword *)(lVar26 + uVar25);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x1f);
        uVar43 = 0x1f;
        if (((byte)*unaff_x23 & 0x1f) != 1) {
          uVar43 = 0;
        }
        unaff_x27 = uVar43 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar48;
        unaff_x24[unaff_x27] = (uint)puVar23;
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (puVar23 < unaff_x20);
    }
    *(uint *)(param_1 + 0x2c) = uVar31;
    uVar43 = (*(int *)(lVar55 + (uVar33 & 0xffffffff) + 8) * -0x61c8864f ^ uVar49) >>
             (ulong)(0x18U - iVar5 & 0x1f);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    uVar25 = (ulong)(uVar43 >> 3 & 0x1fffffe0);
    lVar26 = lVar41 + uVar25 * 4;
    Hint_Prefetch(lVar26,0,0,0);
    Hint_Prefetch(lVar26 + 0x40,0,0,0);
    Hint_Prefetch(lVar40 + uVar25,0,0,0);
    uVar49 = *(uint *)(lVar3 + (uVar33 & 7) * 4);
    *(uint *)(lVar3 + (uVar33 & 7) * 4) = uVar43;
  }
  else {
    uVar49 = (*param_2 * -0x61c8864f ^ uVar49) >> (ulong)(0x18U - iVar5 & 0x1f);
    *(uint *)(param_1 + 0x2c) = uVar31;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar49;
  uVar33 = (ulong)(uVar49 >> 3) & 0x1fffffe0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar40 + uVar33);
  bVar39 = *pbVar2;
  pdVar44 = (dword *)(ulong)bVar39;
  bVar38 = (byte)uVar49;
  uVar91 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar38 == (byte)*(undefined2 *)pbVar2));
  uVar92 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar91));
  uVar93 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar92));
  uVar95 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
/*  watermarked copy - do not remove  */
                    -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar96 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar95));
  uVar97 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar96));
  uVar59 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar60 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar59));
  uVar61 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar60));
  uVar62 = CONCAT17(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar61));
  auVar63._0_10_ =
       CONCAT19(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar62));
  auVar63[10] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar63[0xb] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar71[0xc] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar71._0_12_ = auVar63;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  auVar71[0xd] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar105[0xe] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar105._0_14_ = auVar71;
  auVar105[0xf] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar33 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar38 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar38 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar97)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar97 >> 0x26),
                                      CONCAT15((char)((uint)uVar96 >> 0x16),
                                               CONCAT14((char)(uVar95 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar38 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar38 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar93)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar93 >> 0x26),
                                                           CONCAT11((char)((uint)uVar92 >> 0x16),
                                                                    (char)(uVar91 >> 6)))))))),
                    CONCAT17((char)(auVar105._14_2_ >> 6),
                             CONCAT16((char)(auVar71._12_2_ >> 6),
                                      CONCAT15((char)(auVar63._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar63._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar62 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar61 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar60 >> 0x16),(char)(uVar59 >> 6)))))))),4,1);
  uVar33 = (uVar33 >> ((ulong)bVar39 & 0x1f) * 2 | uVar33 << ((ulong)bVar39 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
/*  reversing this took months of machine time  */
  if (uVar33 != 0) {
    lVar40 = 0;
    do {
      uVar25 = (uVar33 << 1 & 0xcccccccccccccccc) >> 2 | (uVar33 << 1 & 0x3333333333333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar49 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + (bVar39 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar49 != 0) {
        uVar49 = *(uint *)(lVar41 + (ulong)uVar49 * 4);
        if (uVar49 < uVar22) goto LAB_002d83b8;
        Hint_Prefetch(lVar55 + (ulong)uVar49,0,0,0);
        adStack_170[lVar40] = uVar49;
        lVar40 = lVar40 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar34 == 0)) goto LAB_002d83b8;
    } while( true );
  }
  lVar40 = 0;
/*  thanks for reading - discord.gg/sdkhDjTex  */
LAB_002d83b8:
  uVar22 = 0x1f;
  if ((bVar39 & 0x1f) != 1) {
    uVar22 = 0;
  }
  lVar3 = (ulong)uVar22 + (ulong)(bVar39 - 1 & 0x1f);
  *pbVar2 = (byte)lVar3;
  pbVar2[lVar3] = bVar38;
  iVar5 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar5 + 1;
  *(int *)(lVar41 + lVar3 * 4) = iVar5;
  if (lVar40 == 0) {
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    unaff_x27 = (ulong)(uVar31 + 3);
    unaff_x26 = lVar55 + 8;
    uVar25 = 3;
    do {
      uVar49 = adStack_170[lVar41];
/*  more drops soon - github.com/pengussy  */
      pdVar46 = (dword *)(lVar55 + (ulong)uVar49);
      uVar22 = *(uint *)((long)pdVar46 + (uVar25 - 3));
      pdVar44 = (dword *)(ulong)uVar22;
      uVar43 = *(uint *)((long)param_2 + (uVar25 - 3));
      unaff_x20 = (dword *)(ulong)uVar43;
      if (uVar22 == uVar43) {
        if (param_2 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)param_2;
          if (*(uint **)pdVar46 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar46 = (dword *)(unaff_x26 + uVar49);
            pdVar45 = param_2 + 2;
            do {
              unaff_x23 = pdVar45;
              if ((uint *)((long)param_3 + -7) <= pdVar45) goto LAB_002d84a8;
              unaff_x20 = *(dword **)pdVar46;
              unaff_x23 = pdVar45 + 2;
              unaff_x24 = *(dword **)pdVar45;
              pdVar44 = pdVar44 + 2;
              pdVar46 = pdVar46 + 2;
              pdVar45 = unaff_x23;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            } while (unaff_x20 == unaff_x24);
            uVar33 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar33 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar46;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          unaff_x23 = param_2;
LAB_002d84a8:
          if (unaff_x23 < (uint *)((long)param_3 + -3)) {
            pdVar44 = unaff_x23 + 1;
            unaff_x20 = pdVar46 + 1;
            if (*pdVar46 == *unaff_x23) {
              unaff_x23 = pdVar44;
              pdVar46 = unaff_x20;
            }
/* WM - donate: donate/README.md */
          }
          if (unaff_x23 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)unaff_x23 + 2);
            unaff_x20 = (dword *)((long)pdVar46 + 2);
            if (*(short *)pdVar46 == *(short *)unaff_x23) {
              pdVar46 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar46;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar46 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar33 = (long)unaff_x23 - (long)param_2;
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar31 + 3) - uVar49);
          uVar25 = uVar33;
          if ((uint *)((long)param_2 + uVar33) == param_3) break;
        }
      }
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
/* wm:chat: discord.gg/sdkhDjTex */
    } while (lVar41 != lVar40);
  }
  bVar39 = *pbVar1;
  cVar37 = (char)uVar32;
  uVar91 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(cVar37 == (char)*(undefined2 *)pbVar1));
  uVar92 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 4)),uVar91));
  uVar93 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 8)),uVar92));
  uVar95 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar96 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar95));
  uVar97 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar96));
  uVar59 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                    -(cVar37 == (char)*(undefined2 *)(pbVar1 + 2)));
  uVar60 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 6)),uVar59));
  uVar61 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 10)),uVar60));
  uVar62 = CONCAT17(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar61));
  auVar64._0_10_ =
       CONCAT19(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar62));
  auVar64[10] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x16));
  auVar64[0xb] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar72[0xc] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar72._0_12_ = auVar64;
  auVar72[0xd] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar99[0xe] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar99._0_14_ = auVar72;
  auVar99[0xf] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar94 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar37 ==
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar37 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar97)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar97 >> 0x26),
                                      CONCAT15((char)((uint)uVar96 >> 0x16),
                                               CONCAT14((char)(uVar95 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar37 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(cVar37 ==
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar93)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar93 >> 0x26),
                                                           CONCAT11((char)((uint)uVar92 >> 0x16),
                                                                    (char)(uVar91 >> 6)))))))),
                    CONCAT17((char)(auVar99._14_2_ >> 6),
                             CONCAT16((char)(auVar72._12_2_ >> 6),
                                      CONCAT15((char)(auVar64._10_2_ >> 6),
/* WM - proprietary - see LICENSE - do not sell */
                                               CONCAT14((char)((unkuint10)auVar64._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar62 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar61 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar60 >> 0x16),(char)(uVar59 >> 6)))))))),4,1);
  uVar25 = (ulong)bVar39 & 0x1f;
  uVar25 = (uVar94 >> uVar25 * 2 | uVar94 << uVar25 * -2 + 0x40) & 0x5555555555555555;
  if (uVar25 != 0 && iVar34 != 0) {
    unaff_x27 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
    pdStack_180 = (dword *)*puVar36;
    unaff_x28 = puVar36[1];
    do {
      uVar94 = (uVar25 << 1 & 0xcccccccccccccccc) >> 2 | (uVar25 << 1 & 0x3333333333333333) << 2;
      uVar94 = (uVar94 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar94 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (bVar39 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar56 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto LAB_002d8600;
        Hint_Prefetch(unaff_x28 + uVar32,0,0,0);
        adStack_170[unaff_x27] = uVar32;
        unaff_x27 = unaff_x27 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar34 == 0)) goto LAB_002d8600;
    } while( true );
  }
  goto LAB_002d8690;
LAB_002d8d08:
  if (unaff_x27 != 0) {
    pdStack_318 = param_4;
    unaff_x24 = pdVar46 + 1;
    uVar22 = *pdVar46;
    unaff_x26 = (ulong)uVar22;
// unlicensed copy if this notice is missing
    iStack_31c = (uVar31 + ((int)pdStack_310 - (int)unaff_x28) + 3) - uVar35;
    pdVar45 = adStack_300;
    uVar25 = uVar33;
    do {
      pdVar44 = pdVar45 + 1;
      uVar35 = *pdVar45;
      unaff_x20 = (dword *)(ulong)uVar35;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar22) {
        param_4 = pdStack_310;
        lVar41 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar33 = lVar41 + 4;
        unaff_x23 = param_3;
        if (uVar25 < uVar33) {
          *(ulong *)pdStack_318 = (ulong)(iStack_31c - uVar35);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar46 + uVar33) == param_3) break;
        }
      }
      uVar33 = uVar25;
      unaff_x27 = unaff_x27 - 1;
      pdVar45 = pdVar44;
      uVar25 = uVar33;
    } while (unaff_x27 != 0);
  }
  goto LAB_002d8d98;
code_r0x002d93e0:
  if (unaff_x27 != 0) {
    pdStack_4a8 = param_4;
    unaff_x24 = pdVar45 + 1;
    uVar22 = *pdVar45;
    unaff_x26 = (ulong)uVar22;
/*  origin: github.com/pengussy  */
    iStack_4ac = (uVar31 + ((int)pdStack_4a0 - (int)unaff_x28) + 3) - uVar35;
    pdVar46 = adStack_490;
    uVar25 = uVar33;
    do {
      pdVar44 = pdVar46 + 1;
      uVar35 = *pdVar46;
      unaff_x20 = (dword *)(ulong)uVar35;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar22) {
        param_4 = pdStack_4a0;
        lVar41 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar33 = lVar41 + 4;
        unaff_x23 = param_3;
        if (uVar25 < uVar33) {
          *(ulong *)pdStack_4a8 = (ulong)(iStack_4ac - uVar35);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar45 + uVar33) == param_3) break;
/*  if you paid for this, you were scammed  */
        }
      }
      uVar33 = uVar25;
      unaff_x27 = unaff_x27 - 1;
      pdVar46 = pdVar44;
      uVar25 = uVar33;
    } while (unaff_x27 != 0);
  }
  goto code_r0x002d9470;
LAB_002d9acc:
  if (unaff_x27 != 0) {
    pdStack_638 = param_4;
    unaff_x24 = pdVar46 + 1;
    uVar22 = *pdVar46;
    unaff_x26 = (ulong)uVar22;
    iStack_63c = (uVar31 + ((int)pdStack_630 - (int)unaff_x28) + 3) - uVar35;
    pdVar45 = adStack_620;
    uVar25 = uVar33;
    do {
      pdVar44 = pdVar45 + 1;
      uVar35 = *pdVar45;
      unaff_x20 = (dword *)(ulong)uVar35;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar22) {
        param_4 = pdStack_630;
        lVar41 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar33 = lVar41 + 4;
        unaff_x23 = param_3;
/* wm:reversing this took months of machine time */
        if (uVar25 < uVar33) {
          *(ulong *)pdStack_638 = (ulong)(iStack_63c - uVar35);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar46 + uVar33) == param_3) break;
        }
      }
      uVar33 = uVar25;
      unaff_x27 = unaff_x27 - 1;
      pdVar45 = pdVar44;
      uVar25 = uVar33;
    } while (unaff_x27 != 0);
  }
  goto LAB_002d9b5c;
LAB_002da1d8:
  if (unaff_x27 != 0) {
    pdStack_7c8 = param_4;
    unaff_x24 = pdVar45 + 1;
    uVar22 = *pdVar45;
    unaff_x26 = (ulong)uVar22;
    iStack_7cc = (uVar31 + ((int)pdStack_7c0 - (int)unaff_x28) + 3) - uVar35;
    pdVar46 = adStack_7b0;
    uVar25 = uVar33;
    do {
      pdVar44 = pdVar46 + 1;
      uVar35 = *pdVar46;
      unaff_x20 = (dword *)(ulong)uVar35;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar22) {
        param_4 = pdStack_7c0;
        lVar41 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar33 = lVar41 + 4;
        unaff_x23 = param_3;
        if (uVar25 < uVar33) {
          *(ulong *)pdStack_7c8 = (ulong)(iStack_7cc - uVar35);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar45 + uVar33) == param_3) break;
        }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      }
      uVar33 = uVar25;
      unaff_x27 = unaff_x27 - 1;
      pdVar46 = pdVar44;
      uVar25 = uVar33;
    } while (unaff_x27 != 0);
  }
  goto LAB_002da268;
code_r0x002da8b0:
  if (unaff_x27 != 0) {
    pdStack_958 = param_4;
    unaff_x24 = pdVar46 + 1;
    uVar22 = *pdVar46;
    unaff_x26 = (ulong)uVar22;
    iStack_95c = (uVar31 + ((int)pdStack_950 - (int)unaff_x28) + 3) - uVar35;
    pdVar45 = adStack_940;
    uVar25 = uVar33;
    do {
      pdVar44 = pdVar45 + 1;
      uVar35 = *pdVar45;
      unaff_x20 = (dword *)(ulong)uVar35;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar22) {
        param_4 = pdStack_950;
        lVar41 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar33 = lVar41 + 4;
        unaff_x23 = param_3;
        if (uVar25 < uVar33) {
          *(ulong *)pdStack_958 = (ulong)(iStack_95c - uVar35);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar46 + uVar33) == param_3) break;
/* origin: github.com/pengussy */
        }
      }
      uVar33 = uVar25;
      unaff_x27 = unaff_x27 - 1;
      pdVar45 = pdVar44;
      uVar25 = uVar33;
    } while (unaff_x27 != 0);
  }
  goto code_r0x002da940;
LAB_002daf9c:
  if (unaff_x27 != 0) {
    pdStack_ae8 = param_4;
    unaff_x24 = pdVar45 + 1;
    uVar22 = *pdVar45;
    unaff_x26 = (ulong)uVar22;
    iStack_aec = (uVar31 + ((int)pdStack_ae0 - (int)unaff_x28) + 3) - uVar35;
    pdVar46 = adStack_ad0;
    uVar25 = uVar33;
    do {
      pdVar44 = pdVar46 + 1;
      uVar35 = *pdVar46;
      unaff_x20 = (dword *)(ulong)uVar35;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar22) {
// WM - donate: donate/README.md
        param_4 = pdStack_ae0;
        lVar41 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar33 = lVar41 + 4;
        unaff_x23 = param_3;
        if (uVar25 < uVar33) {
          *(ulong *)pdStack_ae8 = (ulong)(iStack_aec - uVar35);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar45 + uVar33) == param_3) break;
        }
      }
      uVar33 = uVar25;
      unaff_x27 = unaff_x27 - 1;
      pdVar46 = pdVar44;
      uVar25 = uVar33;
    } while (unaff_x27 != 0);
  }
  goto LAB_002db02c;
LAB_002db6a8:
  if (lVar41 != 0) {
    uVar25 = *puVar21;
    puVar23 = auStack_c60;
    uVar94 = uVar33;
    do {
      uVar22 = *puVar23;
      puVar57 = (uint *)(lVar40 + (ulong)uVar22);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      if (*puVar57 == (uint)uVar25) {
        pdVar44 = pdVar46;
        lVar55 = func_0x002ad924((uint *)((long)puVar21 + 4),puVar57 + 1);
        uVar33 = lVar55 + 4;
        if (uVar94 < uVar33) {
          *(ulong *)param_4 =
               (ulong)(((uVar32 + ((int)pdVar46 - (int)lVar40) + 3) - iVar5) - uVar22);
          uVar94 = uVar33;
          if ((uint *)((long)puVar21 + uVar33) == param_3) break;
        }
      }
      uVar33 = uVar94;
      lVar41 = lVar41 + -1;
      puVar23 = puVar23 + 1;
      uVar94 = uVar33;
    } while (lVar41 != 0);
  }
  goto LAB_002db738;
LAB_002d8600:
  if (unaff_x27 != 0) {
    pdStack_188 = param_4;
    unaff_x24 = param_2 + 1;
    uVar22 = *param_2;
    unaff_x26 = (ulong)uVar22;
    iStack_18c = (uVar31 + ((int)pdStack_180 - (int)unaff_x28) + 3) - uVar35;
    pdVar46 = adStack_170;
    uVar25 = uVar33;
    do {
      pdVar44 = pdVar46 + 1;
      uVar35 = *pdVar46;
      unaff_x20 = (dword *)(ulong)uVar35;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar22) {
        param_4 = pdStack_180;
        lVar41 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1,param_3,
                                 pdStack_180,lVar55 + uStack_178);
        uVar33 = lVar41 + 4;
/* WM - keep the notice, keep the source honest */
        unaff_x23 = param_3;
        if (uVar25 < uVar33) {
          *(ulong *)pdStack_188 = (ulong)(iStack_18c - uVar35);
          uVar25 = uVar33;
          if ((uint *)((long)param_2 + uVar33) == param_3) break;
        }
      }
      uVar33 = uVar25;
      unaff_x27 = unaff_x27 - 1;
      pdVar46 = pdVar44;
      uVar25 = uVar33;
    } while (unaff_x27 != 0);
  }
LAB_002d8690:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
  pdVar46 = auVar105._8_8_;
  lVar40 = auVar105._0_8_;
/* if you paid for this, you were scammed */
  uStack_1f0 = unaff_x28;
  uStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  lStack_1d8 = lVar55;
  pdStack_1d0 = unaff_x24;
  pdStack_1c8 = unaff_x23;
  uStack_1c0 = uVar33;
  pdStack_1b8 = param_2;
  pdStack_1b0 = unaff_x20;
  pdStack_1a8 = pdVar44;
  puStack_1a0 = auStack_68 + 0x58;
  pcStack_198 = FUN_002d8804;
  lStack_200 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(lVar40 + 0x70);
  lVar55 = *(long *)(lVar40 + 0x38);
  iVar5 = *(int *)(lVar40 + 0x34);
  lVar56 = *(long *)(lVar40 + 8);
  uVar32 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  uVar35 = *(uint *)(lVar40 + 0x18);
  uStack_308 = (ulong)uVar35;
  uVar33 = (long)pdVar46 - lVar56;
  uVar31 = (uint)uVar33;
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(lVar40 + 0x1c) <= uVar32 || *(int *)(lVar40 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar40 + 0x1c);
  }
  uVar32 = *(uint *)(lVar40 + 0x10c);
/* origin: github.com/pengussy - github.com/pengussy */
  if (5 < uVar32) {
    uVar32 = 6;
  }
  iVar34 = 1 << (ulong)(uVar32 & 0x1f);
  puVar36 = *(undefined8 **)(lVar40 + 0xf8);
  uVar32 = *pdVar46 * -0x61c8864f >> (ulong)(0x18U - *(int *)((long)puVar36 + 0x34) & 0x1f);
  uVar25 = (ulong)(uVar32 >> 2 & 0x3fffffc0);
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar3 = puVar36[0xe] + uVar25 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  uVar49 = (uint)*(undefined8 *)(lVar40 + 0x60);
  if (*(int *)(lVar40 + 300) == 0) {
    pdStack_318 = param_3;
    lVar26 = lVar40 + 0x40;
    uVar43 = *(uint *)(lVar40 + 0x2c);
    uVar25 = (ulong)uVar43;
    pdStack_310 = (dword *)CONCAT44(pdStack_310._4_4_,iVar5);
    lVar27 = lVar55;
    lVar29 = lVar41;
    if (0x180 < uVar31 - uVar43) {
      if (uVar43 < 0xffffffa0) {
        uVar94 = uVar25 + 0x60;
        do {
          uVar43 = (*(int *)(lVar56 + 8 + uVar25) * -0x61c8864f ^ *(uint *)(lVar40 + 0x60)) >>
                   (ulong)(0x18U - iVar5 & 0x1f);
          uVar58 = (ulong)(uVar43 >> 2 & 0x3fffffc0);
/*  keep the notice, keep the source honest  */
          lVar27 = lVar41 + uVar58 * 4;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x40,0,0,0);
          lVar27 = lVar55 + uVar58;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x20,0,0,0);
          uVar48 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
          *(uint *)(lVar26 + (uVar25 & 7) * 4) = uVar43;
          uVar58 = (ulong)(uVar48 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar55 + uVar58);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x3f);
          uVar43 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar43 = 0;
          }
          unaff_x24 = (dword *)(uVar43 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar48;
          *(int *)(lVar41 + uVar58 * 4 + (long)unaff_x24 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar94 != uVar25);
        lVar29 = *(long *)(lVar40 + 0x70);
        lVar27 = *(long *)(lVar40 + 0x38);
      }
      uVar43 = uVar31 - 0x20;
      uVar25 = (ulong)uVar43;
      iVar50 = (int)(undefined1 *)((long)pdVar46 + 1U) - (int)(undefined1 *)(lVar56 + uVar25);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      uVar48 = 8;
      if (iVar50 + 1U < 8) {
        uVar48 = iVar50 + 1;
      }
      uVar8 = 0;
      if ((undefined1 *)(lVar56 + uVar25) <= (undefined1 *)((long)pdVar46 + 1U)) {
        uVar8 = uVar48;
      }
/* wm:proprietary - see LICENSE - do not sell */
      pdVar44 = (dword *)(ulong)uVar8;
      unaff_x20 = (dword *)(ulong)(uVar8 + uVar43);
      if (uVar43 < uVar8 + uVar43) {
        iVar50 = *(int *)(lVar40 + 0x34);
        uVar48 = *(uint *)(lVar40 + 0x60);
        unaff_x20 = (dword *)(ulong)uVar48;
        do {
          uVar8 = (*(int *)(lVar56 + uVar25) * -0x61c8864f ^ uVar48) >>
                  (ulong)(0x18U - iVar50 & 0x1f);
          unaff_x23 = (dword *)(ulong)uVar8;
          uVar94 = (ulong)(uVar8 >> 2 & 0x3fffffc0);
          unaff_x26 = lVar29 + uVar94 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          lVar30 = lVar27 + uVar94;
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x20,0,0,0);
          unaff_x24 = (dword *)(uVar25 & 7);
          *(uint *)(lVar26 + (long)unaff_x24 * 4) = uVar8;
          uVar25 = uVar25 + 1;
          uVar8 = (int)pdVar44 - 1;
          pdVar44 = (dword *)(ulong)uVar8;
        } while (uVar8 != 0);
        pdVar44 = (dword *)0x0;
      }
    }
    if (uVar43 < uVar31) {
      lVar30 = *(long *)(lVar40 + 8);
// WM - thanks for reading - discord.gg/sdkhDjTex
      uVar48 = 0x18 - *(int *)(lVar40 + 0x34);
      pdVar44 = (dword *)(ulong)uVar48;
      puVar23 = (uint *)(ulong)uVar43;
      unaff_x20 = (dword *)(uVar33 & 0xffffffff);
      do {
        uVar43 = (*(int *)(lVar30 + 8 + (long)puVar23) * -0x61c8864f ^ *(uint *)(lVar40 + 0x60)) >>
                 (ulong)(uVar48 & 0x1f);
        uVar25 = (ulong)(uVar43 >> 2 & 0x3fffffc0);
        lVar4 = lVar29 + uVar25 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar27 + uVar25;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar8 = *(uint *)(lVar26 + ((ulong)puVar23 & 7) * 4);
        unaff_x26 = (ulong)uVar8;
        *(uint *)(lVar26 + ((ulong)puVar23 & 7) * 4) = uVar43;
/* WM - origin: github.com/pengussy */
        uVar25 = (ulong)(uVar8 >> 2) & 0x3fffffc0;
        unaff_x24 = (dword *)(lVar29 + uVar25 * 4);
        unaff_x23 = (dword *)(lVar27 + uVar25);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x3f);
        uVar43 = 0x3f;
        if (((byte)*unaff_x23 & 0x3f) != 1) {
          uVar43 = 0;
        }
        unaff_x27 = uVar43 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar8;
        unaff_x24[unaff_x27] = (uint)puVar23;
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (puVar23 < unaff_x20);
    }
    *(uint *)(lVar40 + 0x2c) = uVar31;
    uVar43 = (*(int *)(lVar56 + (uVar33 & 0xffffffff) + 8) * -0x61c8864f ^ uVar49) >>
             (ulong)(0x18U - iVar5 & 0x1f);
    uVar25 = (ulong)(uVar43 >> 2 & 0x3fffffc0);
    lVar27 = lVar41 + uVar25 * 4;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x40,0,0,0);
    lVar27 = lVar55 + uVar25;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x20,0,0,0);
    uVar49 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
    *(uint *)(lVar26 + (uVar33 & 7) * 4) = uVar43;
/* WM - more drops soon - github.com/pengussy */
  }
  else {
    uVar49 = (*pdVar46 * -0x61c8864f ^ uVar49) >> (ulong)(0x18U - iVar5 & 0x1f);
    *(uint *)(lVar40 + 0x2c) = uVar31;
  }
  *(uint *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + uVar49;
  uVar33 = (ulong)(uVar49 >> 2) & 0x3fffffc0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar55 + uVar33);
  bVar39 = (byte)uVar49;
  auVar98[0] = -(pbVar2[1] == bVar39);
  auVar98[1] = -(pbVar2[5] == bVar39);
  auVar98[2] = -(pbVar2[9] == bVar39);
  auVar98[3] = -(pbVar2[0xd] == bVar39);
  auVar98[4] = -(pbVar2[0x11] == bVar39);
  auVar98[5] = -(pbVar2[0x15] == bVar39);
  auVar98[6] = -(pbVar2[0x19] == bVar39);
  auVar98[7] = -(pbVar2[0x1d] == bVar39);
  auVar98[8] = -(pbVar2[0x21] == bVar39);
  auVar98[9] = -(pbVar2[0x25] == bVar39);
  auVar98[10] = -(pbVar2[0x29] == bVar39);
  auVar98[0xb] = -(pbVar2[0x2d] == bVar39);
  auVar98[0xc] = -(pbVar2[0x31] == bVar39);
  auVar98[0xd] = -(pbVar2[0x35] == bVar39);
  auVar98[0xe] = -(pbVar2[0x39] == bVar39);
  auVar98[0xf] = -(pbVar2[0x3d] == bVar39);
  auVar79[0] = -(pbVar2[3] == bVar39);
  auVar79[1] = -(pbVar2[7] == bVar39);
  auVar79[2] = -(pbVar2[0xb] == bVar39);
  auVar79[3] = -(pbVar2[0xf] == bVar39);
  auVar79[4] = -(pbVar2[0x13] == bVar39);
  auVar79[5] = -(pbVar2[0x17] == bVar39);
  auVar79[6] = -(pbVar2[0x1b] == bVar39);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  auVar79[7] = -(pbVar2[0x1f] == bVar39);
  auVar79[8] = -(pbVar2[0x23] == bVar39);
  auVar79[9] = -(pbVar2[0x27] == bVar39);
  auVar79[10] = -(pbVar2[0x2b] == bVar39);
  auVar79[0xb] = -(pbVar2[0x2f] == bVar39);
  auVar79[0xc] = -(pbVar2[0x33] == bVar39);
  auVar79[0xd] = -(pbVar2[0x37] == bVar39);
  auVar79[0xe] = -(pbVar2[0x3b] == bVar39);
  auVar79[0xf] = -(pbVar2[0x3f] == bVar39);
  auVar9[1] = -(pbVar2[4] == bVar39);
  auVar9[0] = -(*pbVar2 == bVar39);
  auVar9[2] = -(pbVar2[8] == bVar39);
  auVar9[3] = -(pbVar2[0xc] == bVar39);
  auVar9[4] = -(pbVar2[0x10] == bVar39);
  auVar9[5] = -(pbVar2[0x14] == bVar39);
  auVar9[6] = -(pbVar2[0x18] == bVar39);
  auVar9[7] = -(pbVar2[0x1c] == bVar39);
  auVar9[8] = -(pbVar2[0x20] == bVar39);
  auVar9[9] = -(pbVar2[0x24] == bVar39);
  auVar9[10] = -(pbVar2[0x28] == bVar39);
  auVar9[0xb] = -(pbVar2[0x2c] == bVar39);
  auVar9[0xc] = -(pbVar2[0x30] == bVar39);
  auVar9[0xd] = -(pbVar2[0x34] == bVar39);
  auVar9[0xe] = -(pbVar2[0x38] == bVar39);
  auVar9[0xf] = -(pbVar2[0x3c] == bVar39);
  auVar99 = NEON_sri(auVar98,auVar9,1,1);
  auVar15[1] = -(pbVar2[6] == bVar39);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar15[0] = -(pbVar2[2] == bVar39);
  auVar15[2] = -(pbVar2[10] == bVar39);
  auVar15[3] = -(pbVar2[0xe] == bVar39);
  auVar15[4] = -(pbVar2[0x12] == bVar39);
  auVar15[5] = -(pbVar2[0x16] == bVar39);
  auVar15[6] = -(pbVar2[0x1a] == bVar39);
  auVar15[7] = -(pbVar2[0x1e] == bVar39);
  auVar15[8] = -(pbVar2[0x22] == bVar39);
  auVar15[9] = -(pbVar2[0x26] == bVar39);
  auVar15[10] = -(pbVar2[0x2a] == bVar39);
  auVar15[0xb] = -(pbVar2[0x2e] == bVar39);
  auVar15[0xc] = -(pbVar2[0x32] == bVar39);
  auVar15[0xd] = -(pbVar2[0x36] == bVar39);
  auVar15[0xe] = -(pbVar2[0x3a] == bVar39);
  auVar15[0xf] = -(pbVar2[0x3e] == bVar39);
  auVar105 = NEON_sri(auVar79,auVar15,1,1);
  auVar105 = NEON_sri(auVar105,auVar99,2,1);
  auVar105 = NEON_sri(auVar105,auVar105,4,1);
  uVar33 = CONCAT17((char)(auVar105._14_2_ >> 4),
                    CONCAT16((char)(auVar105._12_2_ >> 4),
                             CONCAT15((char)(auVar105._10_2_ >> 4),
                                      CONCAT14((char)(auVar105._8_2_ >> 4),
                                               CONCAT13((char)(auVar105._6_2_ >> 4),
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
                                                        CONCAT12((char)(auVar105._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar105._2_2_ >> 4
                                                                                ),(char)(auVar105.
                                                  _0_2_ >> 4))))))));
  lVar55 = 0;
  uVar49 = (uint)*pbVar2;
  if (uVar33 != 0) {
    uVar25 = (ulong)*pbVar2 & 0x3f;
    uVar33 = uVar33 >> uVar25 | uVar33 << 0x40 - uVar25;
    do {
      uVar25 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar43 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + uVar49 & 0x3f;
      if (uVar43 != 0) {
        uVar43 = *(uint *)(lVar41 + (ulong)uVar43 * 4);
        if (uVar43 < uVar22) break;
        Hint_Prefetch(lVar56 + (ulong)uVar43,0,0,0);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        adStack_300[lVar55] = uVar43;
        lVar55 = lVar55 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar34 == 0)) break;
    } while( true );
  }
  uVar22 = 0x3f;
  if ((uVar49 & 0x3f) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(uVar49 - 1 & 0x3f);
  *pbVar2 = (byte)lVar26;
  pbVar2[lVar26] = bVar39;
  iVar5 = *(int *)(lVar40 + 0x2c);
  *(int *)(lVar40 + 0x2c) = iVar5 + 1;
  *(int *)(lVar41 + lVar26 * 4) = iVar5;
  if (lVar55 == 0) {
/* wm:origin: github.com/pengussy */
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    unaff_x27 = (ulong)(uVar31 + 3);
    unaff_x26 = lVar56 + 8;
    uVar25 = 3;
    do {
      uVar49 = adStack_300[lVar41];
      pdVar45 = (dword *)(lVar56 + (ulong)uVar49);
      uVar22 = *(uint *)((long)pdVar45 + (uVar25 - 3));
      pdVar44 = (dword *)(ulong)uVar22;
      uVar43 = *(uint *)((long)pdVar46 + (uVar25 - 3));
      unaff_x20 = (dword *)(ulong)uVar43;
      if (uVar22 == uVar43) {
        if (pdVar46 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar46;
          if (*(uint **)pdVar45 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar45 = (dword *)(unaff_x26 + uVar49);
            pdVar52 = pdVar46 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar52) goto LAB_002d8bac;
              unaff_x20 = *(dword **)pdVar45;
              unaff_x23 = pdVar52 + 2;
              unaff_x24 = *(dword **)pdVar52;
              pdVar44 = pdVar44 + 2;
              pdVar45 = pdVar45 + 2;
              pdVar52 = unaff_x23;
// if you paid for this, you were scammed
            } while (unaff_x20 == unaff_x24);
            uVar33 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar33 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar45;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
/* donate: donate/README.md */
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar52 = pdVar46;
LAB_002d8bac:
          if (pdVar52 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar52 + 1;
            unaff_x20 = pdVar45 + 1;
            if (*pdVar45 == *pdVar52) {
              pdVar52 = pdVar44;
              pdVar45 = unaff_x20;
            }
          }
          unaff_x23 = pdVar52;
          if (pdVar52 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar52 + 2);
            unaff_x20 = (dword *)((long)pdVar45 + 2);
            if (*(short *)pdVar45 == *(short *)pdVar52) {
              pdVar45 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar45;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar45 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar33 = (long)unaff_x23 - (long)pdVar46;
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar31 + 3) - uVar49);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar46 + uVar33) == param_3) break;
        }
      }
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
    } while (lVar41 != lVar55);
  }
  bVar39 = (byte)uVar32;
  auVar100[0] = -(pbVar1[1] == bVar39);
  auVar100[1] = -(pbVar1[5] == bVar39);
  auVar100[2] = -(pbVar1[9] == bVar39);
  auVar100[3] = -(pbVar1[0xd] == bVar39);
  auVar100[4] = -(pbVar1[0x11] == bVar39);
  auVar100[5] = -(pbVar1[0x15] == bVar39);
  auVar100[6] = -(pbVar1[0x19] == bVar39);
  auVar100[7] = -(pbVar1[0x1d] == bVar39);
  auVar100[8] = -(pbVar1[0x21] == bVar39);
  auVar100[9] = -(pbVar1[0x25] == bVar39);
  auVar100[10] = -(pbVar1[0x29] == bVar39);
  auVar100[0xb] = -(pbVar1[0x2d] == bVar39);
  auVar100[0xc] = -(pbVar1[0x31] == bVar39);
  auVar100[0xd] = -(pbVar1[0x35] == bVar39);
  auVar100[0xe] = -(pbVar1[0x39] == bVar39);
  auVar100[0xf] = -(pbVar1[0x3d] == bVar39);
// WM - origin: github.com/pengussy
  auVar80[0] = -(pbVar1[3] == bVar39);
  auVar80[1] = -(pbVar1[7] == bVar39);
  auVar80[2] = -(pbVar1[0xb] == bVar39);
  auVar80[3] = -(pbVar1[0xf] == bVar39);
  auVar80[4] = -(pbVar1[0x13] == bVar39);
  auVar80[5] = -(pbVar1[0x17] == bVar39);
  auVar80[6] = -(pbVar1[0x1b] == bVar39);
  auVar80[7] = -(pbVar1[0x1f] == bVar39);
  auVar80[8] = -(pbVar1[0x23] == bVar39);
  auVar80[9] = -(pbVar1[0x27] == bVar39);
  auVar80[10] = -(pbVar1[0x2b] == bVar39);
  auVar80[0xb] = -(pbVar1[0x2f] == bVar39);
  auVar80[0xc] = -(pbVar1[0x33] == bVar39);
  auVar80[0xd] = -(pbVar1[0x37] == bVar39);
  auVar80[0xe] = -(pbVar1[0x3b] == bVar39);
  auVar80[0xf] = -(pbVar1[0x3f] == bVar39);
  auVar10[1] = -(pbVar1[4] == bVar39);
  auVar10[0] = -(*pbVar1 == bVar39);
  auVar10[2] = -(pbVar1[8] == bVar39);
  auVar10[3] = -(pbVar1[0xc] == bVar39);
  auVar10[4] = -(pbVar1[0x10] == bVar39);
  auVar10[5] = -(pbVar1[0x14] == bVar39);
  auVar10[6] = -(pbVar1[0x18] == bVar39);
  auVar10[7] = -(pbVar1[0x1c] == bVar39);
  auVar10[8] = -(pbVar1[0x20] == bVar39);
  auVar10[9] = -(pbVar1[0x24] == bVar39);
  auVar10[10] = -(pbVar1[0x28] == bVar39);
  auVar10[0xb] = -(pbVar1[0x2c] == bVar39);
/*  proprietary - see LICENSE - do not sell  */
  auVar10[0xc] = -(pbVar1[0x30] == bVar39);
  auVar10[0xd] = -(pbVar1[0x34] == bVar39);
  auVar10[0xe] = -(pbVar1[0x38] == bVar39);
  auVar10[0xf] = -(pbVar1[0x3c] == bVar39);
  auVar99 = NEON_sri(auVar100,auVar10,1,1);
  auVar16[1] = -(pbVar1[6] == bVar39);
  auVar16[0] = -(pbVar1[2] == bVar39);
  auVar16[2] = -(pbVar1[10] == bVar39);
  auVar16[3] = -(pbVar1[0xe] == bVar39);
  auVar16[4] = -(pbVar1[0x12] == bVar39);
  auVar16[5] = -(pbVar1[0x16] == bVar39);
  auVar16[6] = -(pbVar1[0x1a] == bVar39);
  auVar16[7] = -(pbVar1[0x1e] == bVar39);
  auVar16[8] = -(pbVar1[0x22] == bVar39);
  auVar16[9] = -(pbVar1[0x26] == bVar39);
  auVar16[10] = -(pbVar1[0x2a] == bVar39);
  auVar16[0xb] = -(pbVar1[0x2e] == bVar39);
  auVar16[0xc] = -(pbVar1[0x32] == bVar39);
  auVar16[0xd] = -(pbVar1[0x36] == bVar39);
  auVar16[0xe] = -(pbVar1[0x3a] == bVar39);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  auVar16[0xf] = -(pbVar1[0x3e] == bVar39);
  auVar105 = NEON_sri(auVar80,auVar16,1,1);
  auVar105 = NEON_sri(auVar105,auVar99,2,1);
  auVar105 = NEON_sri(auVar105,auVar105,4,1);
  uVar25 = CONCAT17((char)(auVar105._14_2_ >> 4),
                    CONCAT16((char)(auVar105._12_2_ >> 4),
                             CONCAT15((char)(auVar105._10_2_ >> 4),
                                      CONCAT14((char)(auVar105._8_2_ >> 4),
                                               CONCAT13((char)(auVar105._6_2_ >> 4),
                                                        CONCAT12((char)(auVar105._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar105._2_2_ >> 4
                                                                                ),(char)(auVar105.
                                                  _0_2_ >> 4))))))));
  if (uVar25 != 0 && iVar34 != 0) {
    unaff_x27 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
    pdStack_310 = (dword *)*puVar36;
    unaff_x28 = puVar36[1];
    bVar39 = *pbVar1;
    uVar94 = (ulong)bVar39 & 0x3f;
    uVar25 = uVar25 >> uVar94 | uVar25 << 0x40 - uVar94;
    do {
      uVar94 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
      uVar94 = (uVar94 & 0xcccccccccccccccc) >> 2 | (uVar94 & 0x3333333333333333) << 2;
      uVar94 = (uVar94 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar94 & 0xf0f0f0f0f0f0f0f) << 4;
/* WM - no support for modified copies */
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (uint)bVar39 & 0x3f;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar3 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto LAB_002d8d08;
        Hint_Prefetch(unaff_x28 + uVar32,0,0,0);
        adStack_300[unaff_x27] = uVar32;
        unaff_x27 = unaff_x27 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar34 == 0)) goto LAB_002d8d08;
    } while( true );
  }
LAB_002d8d98:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_200) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
  pdVar45 = auVar105._8_8_;
  lVar40 = auVar105._0_8_;
  uStack_380 = unaff_x28;
  uStack_378 = unaff_x27;
  uStack_370 = unaff_x26;
  lStack_368 = lVar56;
  pdStack_360 = unaff_x24;
  pdStack_358 = unaff_x23;
  uStack_350 = uVar33;
  pdStack_348 = pdVar46;
  pdStack_340 = unaff_x20;
  pdStack_338 = pdVar44;
  ppuStack_330 = &puStack_1a0;
  puStack_328 = &SUB_002d8f14;
  lStack_390 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(lVar40 + 0x70);
  lVar55 = *(long *)(lVar40 + 0x38);
/* wm:if you paid for this, you were scammed */
  iVar5 = *(int *)(lVar40 + 0x34);
  lVar56 = *(long *)(lVar40 + 8);
  uVar32 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  uVar35 = *(uint *)(lVar40 + 0x18);
  uStack_498 = (ulong)uVar35;
  uVar33 = (long)pdVar45 - lVar56;
  uVar31 = (uint)uVar33;
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(lVar40 + 0x1c) <= uVar32 || *(int *)(lVar40 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar40 + 0x1c);
  }
  uVar32 = *(uint *)(lVar40 + 0x10c);
  if (3 < uVar32) {
    uVar32 = 4;
  }
  uVar58 = *(ulong *)(lVar40 + 0x60);
  iVar34 = 1 << (ulong)(uVar32 & 0x1f);
  puVar36 = *(undefined8 **)(lVar40 + 0xf8);
  uVar94 = (ulong)(*(long *)pdVar45 * -0x30e4432345000000) >>
           ((ulong)(0x38 - *(int *)((long)puVar36 + 0x34)) & 0x3f);
  uVar25 = uVar94 >> 4 & 0xffffff0;
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar3 = puVar36[0xe] + uVar25 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar40 + 300) == 0) {
    pdStack_4a8 = param_4;
    pdStack_4a0 = param_3;
    lVar26 = lVar40 + 0x40;
    uVar32 = *(uint *)(lVar40 + 0x2c);
    uVar25 = (ulong)uVar32;
    lVar27 = lVar55;
    lVar29 = lVar41;
    if (0x180 < uVar31 - uVar32) {
      if (uVar32 < 0xffffffa0) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        uVar53 = uVar25 + 0x60;
        do {
          uVar54 = (*(long *)(lVar56 + 8 + uVar25) * -0x30e4432345000000 ^ *(ulong *)(lVar40 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar47 = uVar54 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar41 + uVar47 * 4,0,0,0);
          Hint_Prefetch(lVar55 + uVar47,0,0,0);
          uVar49 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
          *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar54;
          uVar54 = (ulong)(uVar49 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar55 + uVar54);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0xf);
          uVar32 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar32 = 0;
          }
          unaff_x24 = (dword *)(uVar32 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar49;
          *(int *)(lVar41 + uVar54 * 4 + (long)unaff_x24 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar53 != uVar25);
        lVar29 = *(long *)(lVar40 + 0x70);
        lVar27 = *(long *)(lVar40 + 0x38);
      }
      uVar32 = uVar31 - 0x20;
      uVar25 = (ulong)uVar32;
      iVar51 = (int)(undefined1 *)((long)pdVar45 + 1U) - (int)(undefined1 *)(lVar56 + uVar25);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar50 = 8;
      if (iVar51 + 1U < 8) {
        iVar50 = iVar51 + 1;
      }
      iVar51 = 0;
      if ((undefined1 *)(lVar56 + uVar25) <= (undefined1 *)((long)pdVar45 + 1U)) {
/* WM - unlicensed copy if this notice is missing */
        iVar51 = iVar50;
      }
      unaff_x20 = (dword *)(ulong)(iVar51 + uVar32);
      if (uVar32 < iVar51 + uVar32) {
        iVar50 = *(int *)(lVar40 + 0x34);
        unaff_x20 = *(dword **)(lVar40 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar56 + uVar25) * -0x30e4432345000000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar50) & 0x3f));
          uVar53 = (ulong)unaff_x23 >> 4 & 0xffffff0;
          unaff_x26 = uVar53 * 4;
          Hint_Prefetch(lVar29 + unaff_x26,0,0,0);
          Hint_Prefetch(lVar27 + uVar53,0,0,0);
          unaff_x24 = (dword *)(uVar25 & 7);
          *(int *)(lVar26 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar25 = uVar25 + 1;
          iVar51 = iVar51 + -1;
        } while (iVar51 != 0);
      }
    }
    if (uVar32 < uVar31) {
      lVar30 = *(long *)(lVar40 + 8);
      iVar50 = *(int *)(lVar40 + 0x34);
// WM - found on a paste site? it was re-uploaded illegally
      puVar23 = (uint *)(ulong)uVar32;
      unaff_x20 = (dword *)(uVar33 & 0xffffffff);
      do {
        uVar25 = (*(long *)(lVar30 + 8 + (long)puVar23) * -0x30e4432345000000 ^
                 *(ulong *)(lVar40 + 0x60)) >> ((ulong)(0x38 - iVar50) & 0x3f);
        uVar53 = uVar25 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar29 + uVar53 * 4,0,0,0);
        Hint_Prefetch(lVar27 + uVar53,0,0,0);
        uVar49 = *(uint *)(lVar26 + ((ulong)puVar23 & 7) * 4);
        unaff_x26 = (ulong)uVar49;
        *(int *)(lVar26 + ((ulong)puVar23 & 7) * 4) = (int)uVar25;
        uVar25 = (ulong)(uVar49 >> 4) & 0xffffff0;
        unaff_x24 = (dword *)(lVar29 + uVar25 * 4);
        unaff_x23 = (dword *)(lVar27 + uVar25);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0xf);
        uVar32 = 0xf;
        if (((byte)*unaff_x23 & 0xf) != 1) {
          uVar32 = 0;
        }
        unaff_x27 = uVar32 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar49;
        unaff_x24[unaff_x27] = (uint)puVar23;
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (puVar23 < unaff_x20);
    }
    *(uint *)(lVar40 + 0x2c) = uVar31;
    uVar25 = (*(long *)(lVar56 + (uVar33 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar58) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar58 = uVar25 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar41 + uVar58 * 4,0,0,0);
    Hint_Prefetch(lVar55 + uVar58,0,0,0);
    uVar32 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
    *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar25;
  }
  else {
// WM - proprietary - see LICENSE - do not sell
    uVar32 = (uint)((*(long *)pdVar45 * -0x30e4432345000000 ^ uVar58) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar40 + 0x2c) = uVar31;
  }
  *(uint *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + uVar32;
  uVar33 = (ulong)(uVar32 >> 4) & 0xffffff0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar55 + uVar33);
  bVar39 = *pbVar2;
  bVar38 = *pbVar2;
  bVar42 = (byte)uVar32;
  uVar59 = CONCAT11(-(pbVar2[9] == bVar42),-(pbVar2[8] == bVar42));
  uVar60 = CONCAT13(-(pbVar2[0xb] == bVar42),CONCAT12(-(pbVar2[10] == bVar42),uVar59));
  uVar61 = CONCAT15(-(pbVar2[0xd] == bVar42),CONCAT14(-(pbVar2[0xc] == bVar42),uVar60));
  uVar33 = CONCAT17((char)(CONCAT17(-(pbVar2[0xf] == bVar42),
                                    CONCAT16(-(pbVar2[0xe] == bVar42),uVar61)) >> 0x34),
                    CONCAT16((char)((uint6)uVar61 >> 0x24),
                             CONCAT15((char)((uint)uVar60 >> 0x14),
                                      CONCAT14((char)(uVar59 >> 4),
                                               CONCAT13((char)(CONCAT11(-(pbVar2[7] == bVar42),
                                                                        -(pbVar2[6] == bVar42)) >> 4
                                                              ),CONCAT12((char)(CONCAT11(-(pbVar2[5]
/* wm:stripping the watermark breaks the license */
                                                                                          == bVar42)
                                                                                         ,-(pbVar2[4
                                                  ] == bVar42)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(pbVar2[3] == bVar42),
                                                                           -(pbVar2[2] == bVar42))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(pbVar2[1] == bVar42),
                                                                           -(bVar38 == bVar42)) >> 4
                                                                 ))))))));
  uVar25 = (ulong)bVar39 & 0xf;
  pdVar44 = (dword *)(ulong)bVar38;
  uVar33 = (uVar33 >> uVar25 * 4 | uVar33 << uVar25 * -4 + 0x40) & 0x8888888888888888;
  if (uVar33 != 0) {
    lVar55 = 0;
    do {
      uVar25 = (uVar33 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + (bVar39 & 0x3f) * 4 >> 2 & 0xf;
// origin: github.com/pengussy
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar41 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto code_r0x002d91a4;
        Hint_Prefetch(lVar56 + (ulong)uVar32,0,0,0);
        adStack_490[lVar55] = uVar32;
        lVar55 = lVar55 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar34 == 0)) goto code_r0x002d91a4;
    } while( true );
  }
  lVar55 = 0;
code_r0x002d91a4:
  uVar22 = 0xf;
  if ((bVar38 & 0xf) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(bVar38 - 1 & 0xf);
  *pbVar2 = (byte)lVar26;
  pbVar2[lVar26] = bVar42;
  iVar5 = *(int *)(lVar40 + 0x2c);
  *(int *)(lVar40 + 0x2c) = iVar5 + 1;
  *(int *)(lVar41 + lVar26 * 4) = iVar5;
  if (lVar55 == 0) {
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    unaff_x27 = (ulong)(uVar31 + 3);
    unaff_x26 = lVar56 + 8;
    uVar25 = 3;
    do {
      uVar32 = adStack_490[lVar41];
      pdVar46 = (dword *)(lVar56 + (ulong)uVar32);
      uVar22 = *(uint *)((long)pdVar46 + (uVar25 - 3));
      pdVar44 = (dword *)(ulong)uVar22;
// WM - stripping the watermark breaks the license
      uVar49 = *(uint *)((long)pdVar45 + (uVar25 - 3));
      unaff_x20 = (dword *)(ulong)uVar49;
      if (uVar22 == uVar49) {
        if (pdVar45 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar45;
          if (*(uint **)pdVar46 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar46 = (dword *)(unaff_x26 + uVar32);
            pdVar52 = pdVar45 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar52) goto code_r0x002d9294;
              unaff_x20 = *(dword **)pdVar46;
              unaff_x23 = pdVar52 + 2;
              unaff_x24 = *(dword **)pdVar52;
              pdVar44 = pdVar44 + 2;
              pdVar46 = pdVar46 + 2;
              pdVar52 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar33 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            uVar33 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar33 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar46;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar52 = pdVar45;
code_r0x002d9294:
          if (pdVar52 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar52 + 1;
            unaff_x20 = pdVar46 + 1;
            if (*pdVar46 == *pdVar52) {
              pdVar52 = pdVar44;
              pdVar46 = unaff_x20;
            }
          }
          unaff_x23 = pdVar52;
          if (pdVar52 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar52 + 2);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            unaff_x20 = (dword *)((long)pdVar46 + 2);
            if (*(short *)pdVar46 == *(short *)pdVar52) {
              pdVar46 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar46;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar46 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar33 = (long)unaff_x23 - (long)pdVar45;
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar31 + 3) - uVar32);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar45 + uVar33) == param_3) break;
        }
      }
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
    } while (lVar41 != lVar55);
  }
  bVar39 = *pbVar1;
  bVar38 = (byte)uVar94;
  uVar59 = CONCAT11(-(pbVar1[1] == bVar38),-(*pbVar1 == bVar38));
  uVar60 = CONCAT13(-(pbVar1[3] == bVar38),CONCAT12(-(pbVar1[2] == bVar38),uVar59));
  uVar61 = CONCAT15(-(pbVar1[5] == bVar38),CONCAT14(-(pbVar1[4] == bVar38),uVar60));
  uVar62 = CONCAT17(-(pbVar1[7] == bVar38),CONCAT16(-(pbVar1[6] == bVar38),uVar61));
/* wm:no support for modified copies */
  auVar65._0_10_ = CONCAT19(-(pbVar1[9] == bVar38),CONCAT18(-(pbVar1[8] == bVar38),uVar62));
  auVar65[10] = -(pbVar1[10] == bVar38);
  auVar65[0xb] = -(pbVar1[0xb] == bVar38);
  auVar73[0xc] = -(pbVar1[0xc] == bVar38);
  auVar73._0_12_ = auVar65;
  auVar73[0xd] = -(pbVar1[0xd] == bVar38);
  auVar81[0xe] = -(pbVar1[0xe] == bVar38);
  auVar81._0_14_ = auVar73;
  auVar81[0xf] = -(pbVar1[0xf] == bVar38);
  uVar94 = CONCAT17((char)(auVar81._14_2_ >> 4),
                    CONCAT16((char)(auVar73._12_2_ >> 4),
                             CONCAT15((char)(auVar65._10_2_ >> 4),
                                      CONCAT14((char)((unkuint10)auVar65._0_10_ >> 0x44),
                                               CONCAT13((char)((ulong)uVar62 >> 0x34),
                                                        CONCAT12((char)((uint6)uVar61 >> 0x24),
                                                                 CONCAT11((char)((uint)uVar60 >>
                                                                                0x14),
                                                                          (char)(uVar59 >> 4))))))))
  ;
  uVar25 = (ulong)bVar39 & 0xf;
  uVar25 = (uVar94 >> uVar25 * 4 | uVar94 << uVar25 * -4 + 0x40) & 0x8888888888888888;
  if (uVar25 != 0 && iVar34 != 0) {
    unaff_x27 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    pdStack_4a0 = (dword *)*puVar36;
    unaff_x28 = puVar36[1];
    do {
      uVar94 = (uVar25 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (bVar39 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar3 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto code_r0x002d93e0;
        Hint_Prefetch(unaff_x28 + uVar32,0,0,0);
        adStack_490[unaff_x27] = uVar32;
        unaff_x27 = unaff_x27 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar34 == 0)) goto code_r0x002d93e0;
    } while( true );
  }
code_r0x002d9470:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_390) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
  pdVar46 = auVar105._8_8_;
// more drops soon - github.com/pengussy
  lVar40 = auVar105._0_8_;
  uStack_510 = unaff_x28;
  uStack_508 = unaff_x27;
  uStack_500 = unaff_x26;
  lStack_4f8 = lVar56;
  pdStack_4f0 = unaff_x24;
  pdStack_4e8 = unaff_x23;
  uStack_4e0 = uVar33;
  pdStack_4d8 = pdVar45;
  pdStack_4d0 = unaff_x20;
  pdStack_4c8 = pdVar44;
  pppuStack_4c0 = &ppuStack_330;
  pcStack_4b8 = FUN_002d95d8;
  lStack_520 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(lVar40 + 0x70);
  lVar55 = *(long *)(lVar40 + 0x38);
  iVar5 = *(int *)(lVar40 + 0x34);
  lVar56 = *(long *)(lVar40 + 8);
  uVar32 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  uVar35 = *(uint *)(lVar40 + 0x18);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  uStack_628 = (ulong)uVar35;
  uVar33 = (long)pdVar46 - lVar56;
  uVar31 = (uint)uVar33;
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(lVar40 + 0x1c) <= uVar32 || *(int *)(lVar40 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar40 + 0x1c);
  }
  uVar32 = *(uint *)(lVar40 + 0x10c);
  if (4 < uVar32) {
    uVar32 = 5;
  }
  uVar58 = *(ulong *)(lVar40 + 0x60);
  iVar34 = 1 << (ulong)(uVar32 & 0x1f);
  puVar36 = *(undefined8 **)(lVar40 + 0xf8);
  uVar94 = (ulong)(*(long *)pdVar46 * -0x30e4432345000000) >>
           ((ulong)(0x38 - *(int *)((long)puVar36 + 0x34)) & 0x3f);
  uVar25 = uVar94 >> 3 & 0x1fffffe0;
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar3 = puVar36[0xe] + uVar25 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar40 + 300) == 0) {
    pdStack_630 = (dword *)CONCAT44(pdStack_630._4_4_,iVar5);
    pdStack_638 = param_3;
    lVar26 = lVar40 + 0x40;
    uVar32 = *(uint *)(lVar40 + 0x2c);
    uVar25 = (ulong)uVar32;
    lVar27 = lVar55;
    lVar29 = lVar41;
    if (0x180 < uVar31 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar53 = uVar25 + 0x60;
// WM - unlicensed copy if this notice is missing
        do {
          uVar54 = (*(long *)(lVar56 + 8 + uVar25) * -0x30e4432345000000 ^ *(ulong *)(lVar40 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar47 = uVar54 >> 3 & 0x1fffffe0;
          lVar27 = lVar41 + uVar47 * 4;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x40,0,0,0);
          Hint_Prefetch(lVar55 + uVar47,0,0,0);
          uVar49 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
          *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar54;
          uVar54 = (ulong)(uVar49 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar55 + uVar54);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar32 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar32 = 0;
          }
          unaff_x24 = (dword *)(uVar32 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar49;
          *(int *)(lVar41 + uVar54 * 4 + (long)unaff_x24 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar53 != uVar25);
        lVar29 = *(long *)(lVar40 + 0x70);
        lVar27 = *(long *)(lVar40 + 0x38);
      }
      uVar32 = uVar31 - 0x20;
      uVar25 = (ulong)uVar32;
      iVar51 = (int)(undefined1 *)((long)pdVar46 + 1U) - (int)(undefined1 *)(lVar56 + uVar25);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar50 = 8;
      if (iVar51 + 1U < 8) {
        iVar50 = iVar51 + 1;
      }
      iVar51 = 0;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      if ((undefined1 *)(lVar56 + uVar25) <= (undefined1 *)((long)pdVar46 + 1U)) {
        iVar51 = iVar50;
      }
      unaff_x20 = (dword *)(ulong)(iVar51 + uVar32);
      if (uVar32 < iVar51 + uVar32) {
        iVar50 = *(int *)(lVar40 + 0x34);
        unaff_x20 = *(dword **)(lVar40 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar56 + uVar25) * -0x30e4432345000000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar50) & 0x3f));
          uVar53 = (ulong)unaff_x23 >> 3 & 0x1fffffe0;
          unaff_x26 = lVar29 + uVar53 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar27 + uVar53,0,0,0);
          unaff_x24 = (dword *)(uVar25 & 7);
          *(int *)(lVar26 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar25 = uVar25 + 1;
          iVar51 = iVar51 + -1;
        } while (iVar51 != 0);
      }
    }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (uVar32 < uVar31) {
      lVar30 = *(long *)(lVar40 + 8);
      iVar50 = *(int *)(lVar40 + 0x34);
      puVar23 = (uint *)(ulong)uVar32;
      unaff_x20 = (dword *)(uVar33 & 0xffffffff);
      do {
        uVar25 = (*(long *)(lVar30 + 8 + (long)puVar23) * -0x30e4432345000000 ^
                 *(ulong *)(lVar40 + 0x60)) >> ((ulong)(0x38 - iVar50) & 0x3f);
        uVar53 = uVar25 >> 3 & 0x1fffffe0;
        lVar4 = lVar29 + uVar53 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        Hint_Prefetch(lVar27 + uVar53,0,0,0);
        uVar49 = *(uint *)(lVar26 + ((ulong)puVar23 & 7) * 4);
        unaff_x26 = (ulong)uVar49;
        *(int *)(lVar26 + ((ulong)puVar23 & 7) * 4) = (int)uVar25;
        uVar25 = (ulong)(uVar49 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar29 + uVar25 * 4);
        unaff_x23 = (dword *)(lVar27 + uVar25);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x1f);
        uVar32 = 0x1f;
        if (((byte)*unaff_x23 & 0x1f) != 1) {
          uVar32 = 0;
        }
        unaff_x27 = uVar32 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar49;
        unaff_x24[unaff_x27] = (uint)puVar23;
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (puVar23 < unaff_x20);
    }
    *(uint *)(lVar40 + 0x2c) = uVar31;
/* WM - found on a paste site? it was re-uploaded illegally */
    uVar25 = (*(long *)(lVar56 + (uVar33 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar58) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar58 = uVar25 >> 3 & 0x1fffffe0;
    lVar27 = lVar41 + uVar58 * 4;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x40,0,0,0);
    Hint_Prefetch(lVar55 + uVar58,0,0,0);
    uVar32 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
    *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar25;
  }
  else {
    uVar32 = (uint)((*(long *)pdVar46 * -0x30e4432345000000 ^ uVar58) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar40 + 0x2c) = uVar31;
  }
  *(uint *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + uVar32;
  uVar33 = (ulong)(uVar32 >> 3) & 0x1fffffe0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar55 + uVar33);
  bVar39 = *pbVar2;
  pdVar44 = (dword *)(ulong)bVar39;
  bVar38 = (byte)uVar32;
  uVar91 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                    -(bVar38 == (byte)*(undefined2 *)pbVar2));
  uVar92 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar91));
  uVar93 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar92));
  uVar95 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar96 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar95));
  uVar97 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar96));
  uVar59 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar60 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar59));
  uVar61 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar60));
  uVar62 = CONCAT17(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar61));
  auVar66._0_10_ =
       CONCAT19(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar62));
  auVar66[10] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar66[0xb] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar74[0xc] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar74._0_12_ = auVar66;
  auVar74[0xd] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar82[0xe] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar82._0_14_ = auVar74;
  auVar82[0xf] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar33 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar38 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar38 ==
/* wm:unlicensed copy if this notice is missing */
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar97)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar97 >> 0x26),
                                      CONCAT15((char)((uint)uVar96 >> 0x16),
                                               CONCAT14((char)(uVar95 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar38 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar38 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar93)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar93 >> 0x26),
                                                           CONCAT11((char)((uint)uVar92 >> 0x16),
                                                                    (char)(uVar91 >> 6)))))))),
                    CONCAT17((char)(auVar82._14_2_ >> 6),
                             CONCAT16((char)(auVar74._12_2_ >> 6),
                                      CONCAT15((char)(auVar66._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar66._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar62 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar61 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar60 >> 0x16),(char)(uVar59 >> 6)))))))),4,1);
  uVar33 = (uVar33 >> ((ulong)bVar39 & 0x1f) * 2 | uVar33 << ((ulong)bVar39 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar33 != 0) {
    lVar55 = 0;
    do {
      uVar25 = (uVar33 << 1 & 0xcccccccccccccccc) >> 2 | (uVar33 << 1 & 0x3333333333333333) << 2;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + (bVar39 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar41 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto LAB_002d9884;
        Hint_Prefetch(lVar56 + (ulong)uVar32,0,0,0);
        adStack_620[lVar55] = uVar32;
        lVar55 = lVar55 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar34 == 0)) goto LAB_002d9884;
    } while( true );
  }
  lVar55 = 0;
LAB_002d9884:
  uVar22 = 0x1f;
  if ((bVar39 & 0x1f) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(bVar39 - 1 & 0x1f);
  *pbVar2 = (byte)lVar26;
  pbVar2[lVar26] = bVar38;
  iVar5 = *(int *)(lVar40 + 0x2c);
  *(int *)(lVar40 + 0x2c) = iVar5 + 1;
  *(int *)(lVar41 + lVar26 * 4) = iVar5;
  if (lVar55 == 0) {
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    unaff_x27 = (ulong)(uVar31 + 3);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    unaff_x26 = lVar56 + 8;
    uVar25 = 3;
    do {
      uVar32 = adStack_620[lVar41];
      pdVar45 = (dword *)(lVar56 + (ulong)uVar32);
      uVar22 = *(uint *)((long)pdVar45 + (uVar25 - 3));
      pdVar44 = (dword *)(ulong)uVar22;
      uVar49 = *(uint *)((long)pdVar46 + (uVar25 - 3));
      unaff_x20 = (dword *)(ulong)uVar49;
      if (uVar22 == uVar49) {
        if (pdVar46 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar46;
          if (*(uint **)pdVar45 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar45 = (dword *)(unaff_x26 + uVar32);
            pdVar52 = pdVar46 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar52) goto LAB_002d9974;
              unaff_x20 = *(dword **)pdVar45;
              unaff_x23 = pdVar52 + 2;
              unaff_x24 = *(dword **)pdVar52;
              pdVar44 = pdVar44 + 2;
              pdVar45 = pdVar45 + 2;
              pdVar52 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar33 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
// WM - chat: discord.gg/sdkhDjTex
            uVar33 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar45;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar52 = pdVar46;
LAB_002d9974:
          if (pdVar52 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar52 + 1;
            unaff_x20 = pdVar45 + 1;
            if (*pdVar45 == *pdVar52) {
              pdVar52 = pdVar44;
/*  chat: discord.gg/sdkhDjTex  */
              pdVar45 = unaff_x20;
            }
          }
          unaff_x23 = pdVar52;
          if (pdVar52 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar52 + 2);
            unaff_x20 = (dword *)((long)pdVar45 + 2);
            if (*(short *)pdVar45 == *(short *)pdVar52) {
              pdVar45 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar45;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar45 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar33 = (long)unaff_x23 - (long)pdVar46;
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar31 + 3) - uVar32);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar46 + uVar33) == param_3) break;
        }
      }
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
    } while (lVar41 != lVar55);
  }
  bVar39 = *pbVar1;
// WM - watermarked copy - do not remove
  cVar37 = (char)uVar94;
  uVar91 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(cVar37 == (char)*(undefined2 *)pbVar1));
  uVar92 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 4)),uVar91));
  uVar93 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 8)),uVar92));
  uVar95 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar96 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar95));
  uVar97 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar96));
  uVar59 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(cVar37 == (char)*(undefined2 *)(pbVar1 + 2)));
  uVar60 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
// found on a paste site? it was re-uploaded illegally
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 6)),uVar59));
  uVar61 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 10)),uVar60));
  uVar62 = CONCAT17(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar61));
  auVar67._0_10_ =
       CONCAT19(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar62));
  auVar67[10] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x16));
  auVar67[0xb] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar75[0xc] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar75._0_12_ = auVar67;
  auVar75[0xd] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar83[0xe] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar83._0_14_ = auVar75;
  auVar83[0xf] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar94 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar37 ==
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar37 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar97)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar97 >> 0x26),
                                      CONCAT15((char)((uint)uVar96 >> 0x16),
                                               CONCAT14((char)(uVar95 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar37 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(cVar37 ==
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar93)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar93 >> 0x26),
// proprietary - see LICENSE - do not sell
                                                           CONCAT11((char)((uint)uVar92 >> 0x16),
                                                                    (char)(uVar91 >> 6)))))))),
                    CONCAT17((char)(auVar83._14_2_ >> 6),
                             CONCAT16((char)(auVar75._12_2_ >> 6),
                                      CONCAT15((char)(auVar67._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar67._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar62 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar61 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar60 >> 0x16),(char)(uVar59 >> 6)))))))),4,1);
  uVar25 = (ulong)bVar39 & 0x1f;
  uVar25 = (uVar94 >> uVar25 * 2 | uVar94 << uVar25 * -2 + 0x40) & 0x5555555555555555;
  if (uVar25 != 0 && iVar34 != 0) {
    unaff_x27 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
    pdStack_630 = (dword *)*puVar36;
    unaff_x28 = puVar36[1];
    do {
      uVar94 = (uVar25 << 1 & 0xcccccccccccccccc) >> 2 | (uVar25 << 1 & 0x3333333333333333) << 2;
      uVar94 = (uVar94 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar94 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
/* if you paid for this, you were scammed - github.com/pengussy */
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (bVar39 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar3 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto LAB_002d9acc;
        Hint_Prefetch(unaff_x28 + uVar32,0,0,0);
        adStack_620[unaff_x27] = uVar32;
        unaff_x27 = unaff_x27 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar34 == 0)) goto LAB_002d9acc;
    } while( true );
  }
LAB_002d9b5c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_520) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  pdVar45 = auVar105._8_8_;
  lVar40 = auVar105._0_8_;
  uStack_6a0 = unaff_x28;
  uStack_698 = unaff_x27;
  uStack_690 = unaff_x26;
  lStack_688 = lVar56;
  pdStack_680 = unaff_x24;
  pdStack_678 = unaff_x23;
  uStack_670 = uVar33;
  pdStack_668 = pdVar46;
  pdStack_660 = unaff_x20;
  pdStack_658 = pdVar44;
  ppppuStack_650 = &pppuStack_4c0;
  pcStack_648 = FUN_002d9cd0;
  lStack_6b0 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(lVar40 + 0x70);
  lVar55 = *(long *)(lVar40 + 0x38);
  iVar5 = *(int *)(lVar40 + 0x34);
  lVar56 = *(long *)(lVar40 + 8);
  uVar32 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  uVar35 = *(uint *)(lVar40 + 0x18);
  uStack_7b8 = (ulong)uVar35;
  uVar33 = (long)pdVar45 - lVar56;
/* watermarked copy - do not remove */
  uVar31 = (uint)uVar33;
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(lVar40 + 0x1c) <= uVar32 || *(int *)(lVar40 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar40 + 0x1c);
  }
  uVar32 = *(uint *)(lVar40 + 0x10c);
  if (5 < uVar32) {
    uVar32 = 6;
  }
  uVar58 = *(ulong *)(lVar40 + 0x60);
  iVar34 = 1 << (ulong)(uVar32 & 0x1f);
  puVar36 = *(undefined8 **)(lVar40 + 0xf8);
  uVar94 = (ulong)(*(long *)pdVar45 * -0x30e4432345000000) >>
           ((ulong)(0x38 - *(int *)((long)puVar36 + 0x34)) & 0x3f);
  uVar25 = uVar94 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar3 = puVar36[0xe] + uVar25 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  if (*(int *)(lVar40 + 300) == 0) {
    pdStack_7c8 = param_3;
    lVar26 = lVar40 + 0x40;
    uVar32 = *(uint *)(lVar40 + 0x2c);
    uVar25 = (ulong)uVar32;
    pdStack_7c0 = (dword *)CONCAT44(pdStack_7c0._4_4_,iVar5);
    lVar27 = lVar55;
    lVar29 = lVar41;
    if (0x180 < uVar31 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar53 = uVar25 + 0x60;
        do {
          uVar54 = (*(long *)(lVar56 + 8 + uVar25) * -0x30e4432345000000 ^ *(ulong *)(lVar40 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar47 = uVar54 >> 2 & 0x3fffffc0;
          lVar27 = lVar41 + uVar47 * 4;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x40,0,0,0);
          lVar27 = lVar55 + uVar47;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x20,0,0,0);
          uVar49 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar54;
          uVar54 = (ulong)(uVar49 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar55 + uVar54);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x3f);
          uVar32 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar32 = 0;
          }
          unaff_x24 = (dword *)(uVar32 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar49;
          *(int *)(lVar41 + uVar54 * 4 + (long)unaff_x24 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar53 != uVar25);
        lVar29 = *(long *)(lVar40 + 0x70);
        lVar27 = *(long *)(lVar40 + 0x38);
/*  do not claim this as your own  */
      }
      uVar32 = uVar31 - 0x20;
      uVar25 = (ulong)uVar32;
      iVar50 = (int)(undefined1 *)((long)pdVar45 + 1U) - (int)(undefined1 *)(lVar56 + uVar25);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      uVar49 = 8;
      if (iVar50 + 1U < 8) {
        uVar49 = iVar50 + 1;
      }
      uVar43 = 0;
      if ((undefined1 *)(lVar56 + uVar25) <= (undefined1 *)((long)pdVar45 + 1U)) {
        uVar43 = uVar49;
      }
      pdVar44 = (dword *)(ulong)uVar43;
      unaff_x20 = (dword *)(ulong)(uVar43 + uVar32);
      if (uVar32 < uVar43 + uVar32) {
        iVar50 = *(int *)(lVar40 + 0x34);
        unaff_x20 = *(dword **)(lVar40 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar56 + uVar25) * -0x30e4432345000000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar50) & 0x3f));
          uVar53 = (ulong)unaff_x23 >> 2 & 0x3fffffc0;
          unaff_x26 = lVar29 + uVar53 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          lVar30 = lVar27 + uVar53;
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x20,0,0,0);
          unaff_x24 = (dword *)(uVar25 & 7);
          *(int *)(lVar26 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar25 = uVar25 + 1;
          uVar49 = (int)pdVar44 - 1;
          pdVar44 = (dword *)(ulong)uVar49;
        } while (uVar49 != 0);
        pdVar44 = (dword *)0x0;
/*  unlicensed copy if this notice is missing  */
      }
    }
    if (uVar32 < uVar31) {
      lVar30 = *(long *)(lVar40 + 8);
      pdVar44 = (dword *)(ulong)(0x38 - *(int *)(lVar40 + 0x34));
      puVar23 = (uint *)(ulong)uVar32;
      unaff_x20 = (dword *)(uVar33 & 0xffffffff);
      do {
        uVar25 = (*(long *)(lVar30 + 8 + (long)puVar23) * -0x30e4432345000000 ^
                 *(ulong *)(lVar40 + 0x60)) >> ((ulong)pdVar44 & 0x3f);
        uVar53 = uVar25 >> 2 & 0x3fffffc0;
        lVar4 = lVar29 + uVar53 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar27 + uVar53;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar49 = *(uint *)(lVar26 + ((ulong)puVar23 & 7) * 4);
        unaff_x26 = (ulong)uVar49;
        *(int *)(lVar26 + ((ulong)puVar23 & 7) * 4) = (int)uVar25;
        uVar25 = (ulong)(uVar49 >> 2) & 0x3fffffc0;
        unaff_x24 = (dword *)(lVar29 + uVar25 * 4);
        unaff_x23 = (dword *)(lVar27 + uVar25);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x3f);
        uVar32 = 0x3f;
        if (((byte)*unaff_x23 & 0x3f) != 1) {
          uVar32 = 0;
        }
        unaff_x27 = uVar32 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
/* found on a paste site? it was re-uploaded illegally */
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar49;
        unaff_x24[unaff_x27] = (uint)puVar23;
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (puVar23 < unaff_x20);
    }
    *(uint *)(lVar40 + 0x2c) = uVar31;
    uVar25 = (*(long *)(lVar56 + (uVar33 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar58) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar58 = uVar25 >> 2 & 0x3fffffc0;
    lVar27 = lVar41 + uVar58 * 4;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x40,0,0,0);
    lVar27 = lVar55 + uVar58;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x20,0,0,0);
    uVar32 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
    *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar25;
// donate: donate/README.md
  }
  else {
    uVar32 = (uint)((*(long *)pdVar45 * -0x30e4432345000000 ^ uVar58) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar40 + 0x2c) = uVar31;
  }
  *(uint *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + uVar32;
  uVar33 = (ulong)(uVar32 >> 2) & 0x3fffffc0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar55 + uVar33);
  bVar39 = (byte)uVar32;
  auVar101[0] = -(pbVar2[1] == bVar39);
  auVar101[1] = -(pbVar2[5] == bVar39);
  auVar101[2] = -(pbVar2[9] == bVar39);
  auVar101[3] = -(pbVar2[0xd] == bVar39);
  auVar101[4] = -(pbVar2[0x11] == bVar39);
  auVar101[5] = -(pbVar2[0x15] == bVar39);
  auVar101[6] = -(pbVar2[0x19] == bVar39);
  auVar101[7] = -(pbVar2[0x1d] == bVar39);
  auVar101[8] = -(pbVar2[0x21] == bVar39);
  auVar101[9] = -(pbVar2[0x25] == bVar39);
  auVar101[10] = -(pbVar2[0x29] == bVar39);
  auVar101[0xb] = -(pbVar2[0x2d] == bVar39);
  auVar101[0xc] = -(pbVar2[0x31] == bVar39);
  auVar101[0xd] = -(pbVar2[0x35] == bVar39);
  auVar101[0xe] = -(pbVar2[0x39] == bVar39);
  auVar101[0xf] = -(pbVar2[0x3d] == bVar39);
  auVar84[0] = -(pbVar2[3] == bVar39);
  auVar84[1] = -(pbVar2[7] == bVar39);
  auVar84[2] = -(pbVar2[0xb] == bVar39);
  auVar84[3] = -(pbVar2[0xf] == bVar39);
  auVar84[4] = -(pbVar2[0x13] == bVar39);
  auVar84[5] = -(pbVar2[0x17] == bVar39);
/* thanks for reading - discord.gg/sdkhDjTex */
  auVar84[6] = -(pbVar2[0x1b] == bVar39);
  auVar84[7] = -(pbVar2[0x1f] == bVar39);
  auVar84[8] = -(pbVar2[0x23] == bVar39);
  auVar84[9] = -(pbVar2[0x27] == bVar39);
  auVar84[10] = -(pbVar2[0x2b] == bVar39);
  auVar84[0xb] = -(pbVar2[0x2f] == bVar39);
  auVar84[0xc] = -(pbVar2[0x33] == bVar39);
  auVar84[0xd] = -(pbVar2[0x37] == bVar39);
  auVar84[0xe] = -(pbVar2[0x3b] == bVar39);
  auVar84[0xf] = -(pbVar2[0x3f] == bVar39);
  auVar11[1] = -(pbVar2[4] == bVar39);
  auVar11[0] = -(*pbVar2 == bVar39);
  auVar11[2] = -(pbVar2[8] == bVar39);
  auVar11[3] = -(pbVar2[0xc] == bVar39);
  auVar11[4] = -(pbVar2[0x10] == bVar39);
  auVar11[5] = -(pbVar2[0x14] == bVar39);
  auVar11[6] = -(pbVar2[0x18] == bVar39);
  auVar11[7] = -(pbVar2[0x1c] == bVar39);
  auVar11[8] = -(pbVar2[0x20] == bVar39);
  auVar11[9] = -(pbVar2[0x24] == bVar39);
  auVar11[10] = -(pbVar2[0x28] == bVar39);
  auVar11[0xb] = -(pbVar2[0x2c] == bVar39);
  auVar11[0xc] = -(pbVar2[0x30] == bVar39);
  auVar11[0xd] = -(pbVar2[0x34] == bVar39);
  auVar11[0xe] = -(pbVar2[0x38] == bVar39);
// WM - no support for modified copies
  auVar11[0xf] = -(pbVar2[0x3c] == bVar39);
  auVar99 = NEON_sri(auVar101,auVar11,1,1);
  auVar17[1] = -(pbVar2[6] == bVar39);
  auVar17[0] = -(pbVar2[2] == bVar39);
  auVar17[2] = -(pbVar2[10] == bVar39);
  auVar17[3] = -(pbVar2[0xe] == bVar39);
  auVar17[4] = -(pbVar2[0x12] == bVar39);
  auVar17[5] = -(pbVar2[0x16] == bVar39);
  auVar17[6] = -(pbVar2[0x1a] == bVar39);
  auVar17[7] = -(pbVar2[0x1e] == bVar39);
  auVar17[8] = -(pbVar2[0x22] == bVar39);
  auVar17[9] = -(pbVar2[0x26] == bVar39);
  auVar17[10] = -(pbVar2[0x2a] == bVar39);
  auVar17[0xb] = -(pbVar2[0x2e] == bVar39);
  auVar17[0xc] = -(pbVar2[0x32] == bVar39);
  auVar17[0xd] = -(pbVar2[0x36] == bVar39);
  auVar17[0xe] = -(pbVar2[0x3a] == bVar39);
  auVar17[0xf] = -(pbVar2[0x3e] == bVar39);
  auVar105 = NEON_sri(auVar84,auVar17,1,1);
  auVar105 = NEON_sri(auVar105,auVar99,2,1);
  auVar105 = NEON_sri(auVar105,auVar105,4,1);
  uVar33 = CONCAT17((char)(auVar105._14_2_ >> 4),
                    CONCAT16((char)(auVar105._12_2_ >> 4),
                             CONCAT15((char)(auVar105._10_2_ >> 4),
                                      CONCAT14((char)(auVar105._8_2_ >> 4),
                                               CONCAT13((char)(auVar105._6_2_ >> 4),
                                                        CONCAT12((char)(auVar105._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar105._2_2_ >> 4
                                                                                ),(char)(auVar105.
                                                  _0_2_ >> 4))))))));
  lVar55 = 0;
  uVar32 = (uint)*pbVar2;
/* WM - watermarked copy - do not remove */
  if (uVar33 != 0) {
    uVar25 = (ulong)*pbVar2 & 0x3f;
    uVar33 = uVar33 >> uVar25 | uVar33 << 0x40 - uVar25;
    do {
      uVar25 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar49 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + uVar32 & 0x3f;
      if (uVar49 != 0) {
        uVar49 = *(uint *)(lVar41 + (ulong)uVar49 * 4);
        if (uVar49 < uVar22) break;
        Hint_Prefetch(lVar56 + (ulong)uVar49,0,0,0);
        adStack_7b0[lVar55] = uVar49;
        lVar55 = lVar55 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar34 == 0)) break;
    } while( true );
  }
  uVar22 = 0x3f;
  if ((uVar32 & 0x3f) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(uVar32 - 1 & 0x3f);
  *pbVar2 = (byte)lVar26;
  pbVar2[lVar26] = bVar39;
/*  no support for modified copies  */
  iVar5 = *(int *)(lVar40 + 0x2c);
  *(int *)(lVar40 + 0x2c) = iVar5 + 1;
  *(int *)(lVar41 + lVar26 * 4) = iVar5;
  if (lVar55 == 0) {
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    unaff_x27 = (ulong)(uVar31 + 3);
    unaff_x26 = lVar56 + 8;
    uVar25 = 3;
    do {
      uVar32 = adStack_7b0[lVar41];
      pdVar46 = (dword *)(lVar56 + (ulong)uVar32);
      uVar22 = *(uint *)((long)pdVar46 + (uVar25 - 3));
      pdVar44 = (dword *)(ulong)uVar22;
      uVar49 = *(uint *)((long)pdVar45 + (uVar25 - 3));
      unaff_x20 = (dword *)(ulong)uVar49;
      if (uVar22 == uVar49) {
        if (pdVar45 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar45;
          if (*(uint **)pdVar46 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar46 = (dword *)(unaff_x26 + uVar32);
            pdVar52 = pdVar45 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar52) goto LAB_002da07c;
              unaff_x20 = *(dword **)pdVar46;
              unaff_x23 = pdVar52 + 2;
              unaff_x24 = *(dword **)pdVar52;
              pdVar44 = pdVar44 + 2;
              pdVar46 = pdVar46 + 2;
              pdVar52 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
            uVar33 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar33 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar46;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar52 = pdVar45;
LAB_002da07c:
          if (pdVar52 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar52 + 1;
            unaff_x20 = pdVar46 + 1;
            if (*pdVar46 == *pdVar52) {
              pdVar52 = pdVar44;
              pdVar46 = unaff_x20;
            }
          }
          unaff_x23 = pdVar52;
          if (pdVar52 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar52 + 2);
            unaff_x20 = (dword *)((long)pdVar46 + 2);
            if (*(short *)pdVar46 == *(short *)pdVar52) {
              pdVar46 = unaff_x20;
              unaff_x23 = pdVar44;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar46;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar46 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar33 = (long)unaff_x23 - (long)pdVar45;
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar31 + 3) - uVar32);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar45 + uVar33) == param_3) break;
        }
      }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
    } while (lVar41 != lVar55);
  }
  bVar39 = (byte)uVar94;
  auVar102[0] = -(pbVar1[1] == bVar39);
  auVar102[1] = -(pbVar1[5] == bVar39);
  auVar102[2] = -(pbVar1[9] == bVar39);
  auVar102[3] = -(pbVar1[0xd] == bVar39);
  auVar102[4] = -(pbVar1[0x11] == bVar39);
  auVar102[5] = -(pbVar1[0x15] == bVar39);
  auVar102[6] = -(pbVar1[0x19] == bVar39);
  auVar102[7] = -(pbVar1[0x1d] == bVar39);
  auVar102[8] = -(pbVar1[0x21] == bVar39);
  auVar102[9] = -(pbVar1[0x25] == bVar39);
  auVar102[10] = -(pbVar1[0x29] == bVar39);
  auVar102[0xb] = -(pbVar1[0x2d] == bVar39);
  auVar102[0xc] = -(pbVar1[0x31] == bVar39);
  auVar102[0xd] = -(pbVar1[0x35] == bVar39);
  auVar102[0xe] = -(pbVar1[0x39] == bVar39);
/* stripping the watermark breaks the license - github.com/pengussy */
  auVar102[0xf] = -(pbVar1[0x3d] == bVar39);
  auVar85[0] = -(pbVar1[3] == bVar39);
  auVar85[1] = -(pbVar1[7] == bVar39);
  auVar85[2] = -(pbVar1[0xb] == bVar39);
  auVar85[3] = -(pbVar1[0xf] == bVar39);
  auVar85[4] = -(pbVar1[0x13] == bVar39);
  auVar85[5] = -(pbVar1[0x17] == bVar39);
  auVar85[6] = -(pbVar1[0x1b] == bVar39);
  auVar85[7] = -(pbVar1[0x1f] == bVar39);
  auVar85[8] = -(pbVar1[0x23] == bVar39);
  auVar85[9] = -(pbVar1[0x27] == bVar39);
  auVar85[10] = -(pbVar1[0x2b] == bVar39);
  auVar85[0xb] = -(pbVar1[0x2f] == bVar39);
  auVar85[0xc] = -(pbVar1[0x33] == bVar39);
  auVar85[0xd] = -(pbVar1[0x37] == bVar39);
  auVar85[0xe] = -(pbVar1[0x3b] == bVar39);
  auVar85[0xf] = -(pbVar1[0x3f] == bVar39);
  auVar12[1] = -(pbVar1[4] == bVar39);
  auVar12[0] = -(*pbVar1 == bVar39);
  auVar12[2] = -(pbVar1[8] == bVar39);
  auVar12[3] = -(pbVar1[0xc] == bVar39);
  auVar12[4] = -(pbVar1[0x10] == bVar39);
  auVar12[5] = -(pbVar1[0x14] == bVar39);
  auVar12[6] = -(pbVar1[0x18] == bVar39);
  auVar12[7] = -(pbVar1[0x1c] == bVar39);
/*  stripping the watermark breaks the license  */
  auVar12[8] = -(pbVar1[0x20] == bVar39);
  auVar12[9] = -(pbVar1[0x24] == bVar39);
  auVar12[10] = -(pbVar1[0x28] == bVar39);
  auVar12[0xb] = -(pbVar1[0x2c] == bVar39);
  auVar12[0xc] = -(pbVar1[0x30] == bVar39);
  auVar12[0xd] = -(pbVar1[0x34] == bVar39);
  auVar12[0xe] = -(pbVar1[0x38] == bVar39);
  auVar12[0xf] = -(pbVar1[0x3c] == bVar39);
  auVar99 = NEON_sri(auVar102,auVar12,1,1);
  auVar18[1] = -(pbVar1[6] == bVar39);
  auVar18[0] = -(pbVar1[2] == bVar39);
  auVar18[2] = -(pbVar1[10] == bVar39);
  auVar18[3] = -(pbVar1[0xe] == bVar39);
  auVar18[4] = -(pbVar1[0x12] == bVar39);
  auVar18[5] = -(pbVar1[0x16] == bVar39);
  auVar18[6] = -(pbVar1[0x1a] == bVar39);
  auVar18[7] = -(pbVar1[0x1e] == bVar39);
  auVar18[8] = -(pbVar1[0x22] == bVar39);
  auVar18[9] = -(pbVar1[0x26] == bVar39);
  auVar18[10] = -(pbVar1[0x2a] == bVar39);
  auVar18[0xb] = -(pbVar1[0x2e] == bVar39);
  auVar18[0xc] = -(pbVar1[0x32] == bVar39);
  auVar18[0xd] = -(pbVar1[0x36] == bVar39);
  auVar18[0xe] = -(pbVar1[0x3a] == bVar39);
  auVar18[0xf] = -(pbVar1[0x3e] == bVar39);
  auVar105 = NEON_sri(auVar85,auVar18,1,1);
  auVar105 = NEON_sri(auVar105,auVar99,2,1);
  auVar105 = NEON_sri(auVar105,auVar105,4,1);
  uVar25 = CONCAT17((char)(auVar105._14_2_ >> 4),
                    CONCAT16((char)(auVar105._12_2_ >> 4),
                             CONCAT15((char)(auVar105._10_2_ >> 4),
                                      CONCAT14((char)(auVar105._8_2_ >> 4),
                                               CONCAT13((char)(auVar105._6_2_ >> 4),
                                                        CONCAT12((char)(auVar105._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar105._2_2_ >> 4
                                                                                ),(char)(auVar105.
                                                  _0_2_ >> 4))))))));
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  if (uVar25 != 0 && iVar34 != 0) {
    unaff_x27 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
    pdStack_7c0 = (dword *)*puVar36;
    unaff_x28 = puVar36[1];
    bVar39 = *pbVar1;
    uVar94 = (ulong)bVar39 & 0x3f;
    uVar25 = uVar25 >> uVar94 | uVar25 << 0x40 - uVar94;
    do {
      uVar94 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
      uVar94 = (uVar94 & 0xcccccccccccccccc) >> 2 | (uVar94 & 0x3333333333333333) << 2;
      uVar94 = (uVar94 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar94 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (uint)bVar39 & 0x3f;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar3 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto LAB_002da1d8;
        Hint_Prefetch(unaff_x28 + uVar32,0,0,0);
        adStack_7b0[unaff_x27] = uVar32;
        unaff_x27 = unaff_x27 + 1;
// do not claim this as your own
        iVar34 = iVar34 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar34 == 0)) goto LAB_002da1d8;
    } while( true );
  }
LAB_002da268:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_6b0) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
  pdVar46 = auVar105._8_8_;
  lVar40 = auVar105._0_8_;
  uStack_830 = unaff_x28;
  uStack_828 = unaff_x27;
  uStack_820 = unaff_x26;
  lStack_818 = lVar56;
  pdStack_810 = unaff_x24;
  pdStack_808 = unaff_x23;
  uStack_800 = uVar33;
  pdStack_7f8 = pdVar45;
  pdStack_7f0 = unaff_x20;
  pdStack_7e8 = pdVar44;
  pppppuStack_7e0 = &ppppuStack_650;
  puStack_7d8 = &SUB_002da3e4;
  lStack_840 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(lVar40 + 0x70);
  lVar55 = *(long *)(lVar40 + 0x38);
  iVar5 = *(int *)(lVar40 + 0x34);
  lVar56 = *(long *)(lVar40 + 8);
  uVar32 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  uVar35 = *(uint *)(lVar40 + 0x18);
  uStack_948 = (ulong)uVar35;
  uVar33 = (long)pdVar46 - lVar56;
  uVar31 = (uint)uVar33;
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(lVar40 + 0x1c) <= uVar32 || *(int *)(lVar40 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar40 + 0x1c);
/* do not claim this as your own - github.com/pengussy */
  }
  uVar32 = *(uint *)(lVar40 + 0x10c);
  if (3 < uVar32) {
    uVar32 = 4;
  }
  uVar58 = *(ulong *)(lVar40 + 0x60);
  iVar34 = 1 << (ulong)(uVar32 & 0x1f);
  puVar36 = *(undefined8 **)(lVar40 + 0xf8);
  uVar94 = (ulong)(*(long *)pdVar46 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar36 + 0x34)) & 0x3f);
  uVar25 = uVar94 >> 4 & 0xffffff0;
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar3 = puVar36[0xe] + uVar25 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar40 + 300) == 0) {
    pdStack_958 = param_4;
    pdStack_950 = param_3;
    lVar26 = lVar40 + 0x40;
    uVar32 = *(uint *)(lVar40 + 0x2c);
    uVar25 = (ulong)uVar32;
    lVar27 = lVar55;
    lVar29 = lVar41;
    if (0x180 < uVar31 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar53 = uVar25 + 0x60;
        do {
          uVar54 = (*(long *)(lVar56 + 8 + uVar25) * -0x30e4432340650000 ^ *(ulong *)(lVar40 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar47 = uVar54 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar41 + uVar47 * 4,0,0,0);
          Hint_Prefetch(lVar55 + uVar47,0,0,0);
          uVar49 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
          *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar54;
          uVar54 = (ulong)(uVar49 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar55 + uVar54);
// reversing this took months of machine time
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0xf);
          uVar32 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar32 = 0;
          }
          unaff_x24 = (dword *)(uVar32 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar49;
          *(int *)(lVar41 + uVar54 * 4 + (long)unaff_x24 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar53 != uVar25);
        lVar29 = *(long *)(lVar40 + 0x70);
        lVar27 = *(long *)(lVar40 + 0x38);
      }
      uVar32 = uVar31 - 0x20;
      uVar25 = (ulong)uVar32;
      iVar51 = (int)(undefined1 *)((long)pdVar46 + 1U) - (int)(undefined1 *)(lVar56 + uVar25);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar50 = 8;
      if (iVar51 + 1U < 8) {
        iVar50 = iVar51 + 1;
      }
/* no support for modified copies */
      iVar51 = 0;
      if ((undefined1 *)(lVar56 + uVar25) <= (undefined1 *)((long)pdVar46 + 1U)) {
        iVar51 = iVar50;
      }
      unaff_x20 = (dword *)(ulong)(iVar51 + uVar32);
      if (uVar32 < iVar51 + uVar32) {
        iVar50 = *(int *)(lVar40 + 0x34);
        unaff_x20 = *(dword **)(lVar40 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar56 + uVar25) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar50) & 0x3f));
          uVar53 = (ulong)unaff_x23 >> 4 & 0xffffff0;
          unaff_x26 = uVar53 * 4;
          Hint_Prefetch(lVar29 + unaff_x26,0,0,0);
          Hint_Prefetch(lVar27 + uVar53,0,0,0);
          unaff_x24 = (dword *)(uVar25 & 7);
          *(int *)(lVar26 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar25 = uVar25 + 1;
          iVar51 = iVar51 + -1;
        } while (iVar51 != 0);
      }
    }
    if (uVar32 < uVar31) {
      lVar30 = *(long *)(lVar40 + 8);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      iVar50 = *(int *)(lVar40 + 0x34);
      puVar23 = (uint *)(ulong)uVar32;
      unaff_x20 = (dword *)(uVar33 & 0xffffffff);
      do {
        uVar25 = (*(long *)(lVar30 + 8 + (long)puVar23) * -0x30e4432340650000 ^
                 *(ulong *)(lVar40 + 0x60)) >> ((ulong)(0x38 - iVar50) & 0x3f);
        uVar53 = uVar25 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar29 + uVar53 * 4,0,0,0);
        Hint_Prefetch(lVar27 + uVar53,0,0,0);
        uVar49 = *(uint *)(lVar26 + ((ulong)puVar23 & 7) * 4);
        unaff_x26 = (ulong)uVar49;
        *(int *)(lVar26 + ((ulong)puVar23 & 7) * 4) = (int)uVar25;
        uVar25 = (ulong)(uVar49 >> 4) & 0xffffff0;
        unaff_x24 = (dword *)(lVar29 + uVar25 * 4);
        unaff_x23 = (dword *)(lVar27 + uVar25);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0xf);
        uVar32 = 0xf;
        if (((byte)*unaff_x23 & 0xf) != 1) {
          uVar32 = 0;
        }
        unaff_x27 = uVar32 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar49;
        unaff_x24[unaff_x27] = (uint)puVar23;
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (puVar23 < unaff_x20);
    }
    *(uint *)(lVar40 + 0x2c) = uVar31;
    uVar25 = (*(long *)(lVar56 + (uVar33 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar58) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar58 = uVar25 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar41 + uVar58 * 4,0,0,0);
/* do not claim this as your own */
    Hint_Prefetch(lVar55 + uVar58,0,0,0);
    uVar32 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
    *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar25;
  }
  else {
    uVar32 = (uint)((*(long *)pdVar46 * -0x30e4432340650000 ^ uVar58) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar40 + 0x2c) = uVar31;
  }
  *(uint *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + uVar32;
  uVar33 = (ulong)(uVar32 >> 4) & 0xffffff0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar55 + uVar33);
  bVar39 = *pbVar2;
  bVar38 = *pbVar2;
  bVar42 = (byte)uVar32;
  uVar59 = CONCAT11(-(pbVar2[9] == bVar42),-(pbVar2[8] == bVar42));
  uVar60 = CONCAT13(-(pbVar2[0xb] == bVar42),CONCAT12(-(pbVar2[10] == bVar42),uVar59));
/* proprietary - see LICENSE - do not sell */
  uVar61 = CONCAT15(-(pbVar2[0xd] == bVar42),CONCAT14(-(pbVar2[0xc] == bVar42),uVar60));
  uVar33 = CONCAT17((char)(CONCAT17(-(pbVar2[0xf] == bVar42),
                                    CONCAT16(-(pbVar2[0xe] == bVar42),uVar61)) >> 0x34),
                    CONCAT16((char)((uint6)uVar61 >> 0x24),
                             CONCAT15((char)((uint)uVar60 >> 0x14),
                                      CONCAT14((char)(uVar59 >> 4),
                                               CONCAT13((char)(CONCAT11(-(pbVar2[7] == bVar42),
                                                                        -(pbVar2[6] == bVar42)) >> 4
                                                              ),CONCAT12((char)(CONCAT11(-(pbVar2[5]
                                                                                          == bVar42)
                                                                                         ,-(pbVar2[4
                                                  ] == bVar42)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(pbVar2[3] == bVar42),
                                                                           -(pbVar2[2] == bVar42))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(pbVar2[1] == bVar42),
                                                                           -(bVar38 == bVar42)) >> 4
                                                                 ))))))));
  uVar25 = (ulong)bVar39 & 0xf;
  pdVar44 = (dword *)(ulong)bVar38;
// watermarked copy - do not remove
  uVar33 = (uVar33 >> uVar25 * 4 | uVar33 << uVar25 * -4 + 0x40) & 0x8888888888888888;
  if (uVar33 != 0) {
    lVar55 = 0;
    do {
      uVar25 = (uVar33 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + (bVar39 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar41 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto code_r0x002da674;
        Hint_Prefetch(lVar56 + (ulong)uVar32,0,0,0);
        adStack_940[lVar55] = uVar32;
        lVar55 = lVar55 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar34 == 0)) goto code_r0x002da674;
    } while( true );
  }
  lVar55 = 0;
code_r0x002da674:
  uVar22 = 0xf;
  if ((bVar38 & 0xf) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(bVar38 - 1 & 0xf);
  *pbVar2 = (byte)lVar26;
  pbVar2[lVar26] = bVar42;
// thanks for reading - discord.gg/sdkhDjTex
  iVar5 = *(int *)(lVar40 + 0x2c);
  *(int *)(lVar40 + 0x2c) = iVar5 + 1;
  *(int *)(lVar41 + lVar26 * 4) = iVar5;
  if (lVar55 == 0) {
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    unaff_x27 = (ulong)(uVar31 + 3);
    unaff_x26 = lVar56 + 8;
    uVar25 = 3;
    do {
      uVar32 = adStack_940[lVar41];
      pdVar45 = (dword *)(lVar56 + (ulong)uVar32);
      uVar22 = *(uint *)((long)pdVar45 + (uVar25 - 3));
      pdVar44 = (dword *)(ulong)uVar22;
      uVar49 = *(uint *)((long)pdVar46 + (uVar25 - 3));
      unaff_x20 = (dword *)(ulong)uVar49;
      if (uVar22 == uVar49) {
        if (pdVar46 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar46;
          if (*(uint **)pdVar45 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar45 = (dword *)(unaff_x26 + uVar32);
            pdVar52 = pdVar46 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar52) goto code_r0x002da764;
              unaff_x20 = *(dword **)pdVar45;
              unaff_x23 = pdVar52 + 2;
              unaff_x24 = *(dword **)pdVar52;
              pdVar44 = pdVar44 + 2;
              pdVar45 = pdVar45 + 2;
/* keep the notice, keep the source honest */
              pdVar52 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar33 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar33 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar45;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
// chat: discord.gg/sdkhDjTex
            uVar33 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar52 = pdVar46;
code_r0x002da764:
          if (pdVar52 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar52 + 1;
            unaff_x20 = pdVar45 + 1;
            if (*pdVar45 == *pdVar52) {
              pdVar52 = pdVar44;
              pdVar45 = unaff_x20;
            }
          }
          unaff_x23 = pdVar52;
          if (pdVar52 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar52 + 2);
            unaff_x20 = (dword *)((long)pdVar45 + 2);
            if (*(short *)pdVar45 == *(short *)pdVar52) {
              pdVar45 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar45;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar45 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar33 = (long)unaff_x23 - (long)pdVar46;
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar31 + 3) - uVar32);
          uVar25 = uVar33;
          if ((uint *)((long)pdVar46 + uVar33) == param_3) break;
/* WM - reversing this took months of machine time */
        }
      }
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
    } while (lVar41 != lVar55);
  }
  bVar39 = *pbVar1;
  bVar38 = (byte)uVar94;
  uVar59 = CONCAT11(-(pbVar1[1] == bVar38),-(*pbVar1 == bVar38));
  uVar60 = CONCAT13(-(pbVar1[3] == bVar38),CONCAT12(-(pbVar1[2] == bVar38),uVar59));
  uVar61 = CONCAT15(-(pbVar1[5] == bVar38),CONCAT14(-(pbVar1[4] == bVar38),uVar60));
  uVar62 = CONCAT17(-(pbVar1[7] == bVar38),CONCAT16(-(pbVar1[6] == bVar38),uVar61));
  auVar68._0_10_ = CONCAT19(-(pbVar1[9] == bVar38),CONCAT18(-(pbVar1[8] == bVar38),uVar62));
  auVar68[10] = -(pbVar1[10] == bVar38);
  auVar68[0xb] = -(pbVar1[0xb] == bVar38);
  auVar76[0xc] = -(pbVar1[0xc] == bVar38);
  auVar76._0_12_ = auVar68;
  auVar76[0xd] = -(pbVar1[0xd] == bVar38);
  auVar86[0xe] = -(pbVar1[0xe] == bVar38);
  auVar86._0_14_ = auVar76;
  auVar86[0xf] = -(pbVar1[0xf] == bVar38);
  uVar94 = CONCAT17((char)(auVar86._14_2_ >> 4),
                    CONCAT16((char)(auVar76._12_2_ >> 4),
                             CONCAT15((char)(auVar68._10_2_ >> 4),
                                      CONCAT14((char)((unkuint10)auVar68._0_10_ >> 0x44),
// keep the notice, keep the source honest
                                               CONCAT13((char)((ulong)uVar62 >> 0x34),
                                                        CONCAT12((char)((uint6)uVar61 >> 0x24),
                                                                 CONCAT11((char)((uint)uVar60 >>
                                                                                0x14),
                                                                          (char)(uVar59 >> 4))))))))
  ;
  uVar25 = (ulong)bVar39 & 0xf;
  uVar25 = (uVar94 >> uVar25 * 4 | uVar94 << uVar25 * -4 + 0x40) & 0x8888888888888888;
  if (uVar25 != 0 && iVar34 != 0) {
    unaff_x27 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
    pdStack_950 = (dword *)*puVar36;
    unaff_x28 = puVar36[1];
    do {
      uVar94 = (uVar25 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (bVar39 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar3 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto code_r0x002da8b0;
        Hint_Prefetch(unaff_x28 + uVar32,0,0,0);
        adStack_940[unaff_x27] = uVar32;
        unaff_x27 = unaff_x27 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar34 == 0)) goto code_r0x002da8b0;
    } while( true );
  }
code_r0x002da940:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_840) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
/* WM - chat: discord.gg/sdkhDjTex */
  pdVar45 = auVar105._8_8_;
  lVar40 = auVar105._0_8_;
  uStack_9c0 = unaff_x28;
  uStack_9b8 = unaff_x27;
  uStack_9b0 = unaff_x26;
  lStack_9a8 = lVar56;
  pdStack_9a0 = unaff_x24;
  pdStack_998 = unaff_x23;
  uStack_990 = uVar33;
  pdStack_988 = pdVar46;
  pdStack_980 = unaff_x20;
  pdStack_978 = pdVar44;
  ppppppuStack_970 = &pppppuStack_7e0;
  pcStack_968 = FUN_002daaa8;
  lStack_9d0 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(lVar40 + 0x70);
  lVar55 = *(long *)(lVar40 + 0x38);
  iVar5 = *(int *)(lVar40 + 0x34);
  lVar56 = *(long *)(lVar40 + 8);
  uVar32 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  uVar35 = *(uint *)(lVar40 + 0x18);
  uStack_ad8 = (ulong)uVar35;
  uVar33 = (long)pdVar45 - lVar56;
  uVar31 = (uint)uVar33;
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(lVar40 + 0x1c) <= uVar32 || *(int *)(lVar40 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar40 + 0x1c);
  }
  uVar32 = *(uint *)(lVar40 + 0x10c);
  if (4 < uVar32) {
    uVar32 = 5;
  }
  uVar58 = *(ulong *)(lVar40 + 0x60);
  iVar34 = 1 << (ulong)(uVar32 & 0x1f);
  puVar36 = *(undefined8 **)(lVar40 + 0xf8);
  uVar94 = (ulong)(*(long *)pdVar45 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar36 + 0x34)) & 0x3f);
  uVar25 = uVar94 >> 3 & 0x1fffffe0;
/*  donate: donate/README.md  */
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar3 = puVar36[0xe] + uVar25 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar40 + 300) == 0) {
    pdStack_ae0 = (dword *)CONCAT44(pdStack_ae0._4_4_,iVar5);
    pdStack_ae8 = param_3;
    lVar26 = lVar40 + 0x40;
    uVar32 = *(uint *)(lVar40 + 0x2c);
    uVar25 = (ulong)uVar32;
    lVar27 = lVar55;
    lVar29 = lVar41;
    if (0x180 < uVar31 - uVar32) {
      if (uVar32 < 0xffffffa0) {
        uVar53 = uVar25 + 0x60;
        do {
          uVar54 = (*(long *)(lVar56 + 8 + uVar25) * -0x30e4432340650000 ^ *(ulong *)(lVar40 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar47 = uVar54 >> 3 & 0x1fffffe0;
          lVar27 = lVar41 + uVar47 * 4;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x40,0,0,0);
          Hint_Prefetch(lVar55 + uVar47,0,0,0);
          uVar49 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
          *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar54;
          uVar54 = (ulong)(uVar49 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar55 + uVar54);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar32 = 0x1f;
// WM - do not claim this as your own
          if ((*pbVar2 & 0x1f) != 1) {
            uVar32 = 0;
          }
          unaff_x24 = (dword *)(uVar32 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar49;
          *(int *)(lVar41 + uVar54 * 4 + (long)unaff_x24 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar53 != uVar25);
        lVar29 = *(long *)(lVar40 + 0x70);
        lVar27 = *(long *)(lVar40 + 0x38);
      }
      uVar32 = uVar31 - 0x20;
      uVar25 = (ulong)uVar32;
      iVar51 = (int)(undefined1 *)((long)pdVar45 + 1U) - (int)(undefined1 *)(lVar56 + uVar25);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar50 = 8;
      if (iVar51 + 1U < 8) {
        iVar50 = iVar51 + 1;
      }
      iVar51 = 0;
      if ((undefined1 *)(lVar56 + uVar25) <= (undefined1 *)((long)pdVar45 + 1U)) {
        iVar51 = iVar50;
      }
      unaff_x20 = (dword *)(ulong)(iVar51 + uVar32);
      if (uVar32 < iVar51 + uVar32) {
        iVar50 = *(int *)(lVar40 + 0x34);
/* more drops soon - github.com/pengussy - github.com/pengussy */
        unaff_x20 = *(dword **)(lVar40 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar56 + uVar25) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar50) & 0x3f));
          uVar53 = (ulong)unaff_x23 >> 3 & 0x1fffffe0;
          unaff_x26 = lVar29 + uVar53 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar27 + uVar53,0,0,0);
          unaff_x24 = (dword *)(uVar25 & 7);
          *(int *)(lVar26 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar25 = uVar25 + 1;
          iVar51 = iVar51 + -1;
        } while (iVar51 != 0);
      }
    }
    if (uVar32 < uVar31) {
      lVar30 = *(long *)(lVar40 + 8);
      iVar50 = *(int *)(lVar40 + 0x34);
      puVar23 = (uint *)(ulong)uVar32;
      unaff_x20 = (dword *)(uVar33 & 0xffffffff);
      do {
        uVar25 = (*(long *)(lVar30 + 8 + (long)puVar23) * -0x30e4432340650000 ^
                 *(ulong *)(lVar40 + 0x60)) >> ((ulong)(0x38 - iVar50) & 0x3f);
        uVar53 = uVar25 >> 3 & 0x1fffffe0;
        lVar4 = lVar29 + uVar53 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        Hint_Prefetch(lVar27 + uVar53,0,0,0);
/* watermarked copy - do not remove - github.com/pengussy */
        uVar49 = *(uint *)(lVar26 + ((ulong)puVar23 & 7) * 4);
        unaff_x26 = (ulong)uVar49;
        *(int *)(lVar26 + ((ulong)puVar23 & 7) * 4) = (int)uVar25;
        uVar25 = (ulong)(uVar49 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar29 + uVar25 * 4);
        unaff_x23 = (dword *)(lVar27 + uVar25);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x1f);
        uVar32 = 0x1f;
        if (((byte)*unaff_x23 & 0x1f) != 1) {
          uVar32 = 0;
        }
        unaff_x27 = uVar32 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar49;
        unaff_x24[unaff_x27] = (uint)puVar23;
        puVar23 = (uint *)((long)puVar23 + 1);
      } while (puVar23 < unaff_x20);
    }
    *(uint *)(lVar40 + 0x2c) = uVar31;
    uVar25 = (*(long *)(lVar56 + (uVar33 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar58) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar58 = uVar25 >> 3 & 0x1fffffe0;
    lVar27 = lVar41 + uVar58 * 4;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x40,0,0,0);
    Hint_Prefetch(lVar55 + uVar58,0,0,0);
    uVar32 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
    *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar25;
  }
  else {
/* unlicensed copy if this notice is missing - github.com/pengussy */
    uVar32 = (uint)((*(long *)pdVar45 * -0x30e4432340650000 ^ uVar58) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar40 + 0x2c) = uVar31;
  }
  *(uint *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + uVar32;
  uVar33 = (ulong)(uVar32 >> 3) & 0x1fffffe0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar55 + uVar33);
  bVar39 = *pbVar2;
  pdVar44 = (dword *)(ulong)bVar39;
  bVar38 = (byte)uVar32;
  uVar91 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar38 == (byte)*(undefined2 *)pbVar2));
  uVar92 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar91));
  uVar93 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar92));
  uVar95 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar96 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar95));
  uVar97 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar96));
  uVar59 = CONCAT11(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar60 = CONCAT13(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar59));
  uVar61 = CONCAT15(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar60));
  uVar62 = CONCAT17(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar61));
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  auVar69._0_10_ =
       CONCAT19(-(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar62));
  auVar69[10] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar69[0xb] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar77[0xc] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar77._0_12_ = auVar69;
  auVar77[0xd] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar87[0xe] = -(bVar38 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar87._0_14_ = auVar77;
  auVar87[0xf] = -(bVar38 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar33 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar38 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar38 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar97)
                                            ) >> 0x36),
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                             CONCAT16((char)((uint6)uVar97 >> 0x26),
                                      CONCAT15((char)((uint)uVar96 >> 0x16),
                                               CONCAT14((char)(uVar95 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar38 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar38 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar93)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar93 >> 0x26),
                                                           CONCAT11((char)((uint)uVar92 >> 0x16),
                                                                    (char)(uVar91 >> 6)))))))),
                    CONCAT17((char)(auVar87._14_2_ >> 6),
                             CONCAT16((char)(auVar77._12_2_ >> 6),
                                      CONCAT15((char)(auVar69._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar69._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar62 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar61 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar60 >> 0x16),(char)(uVar59 >> 6)))))))),4,1);
  uVar33 = (uVar33 >> ((ulong)bVar39 & 0x1f) * 2 | uVar33 << ((ulong)bVar39 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar33 != 0) {
    lVar55 = 0;
    do {
      uVar25 = (uVar33 << 1 & 0xcccccccccccccccc) >> 2 | (uVar33 << 1 & 0x3333333333333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + (bVar39 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar41 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto LAB_002dad54;
        Hint_Prefetch(lVar56 + (ulong)uVar32,0,0,0);
        adStack_ad0[lVar55] = uVar32;
        lVar55 = lVar55 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar34 == 0)) goto LAB_002dad54;
    } while( true );
  }
  lVar55 = 0;
LAB_002dad54:
  uVar22 = 0x1f;
  if ((bVar39 & 0x1f) != 1) {
// no support for modified copies
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(bVar39 - 1 & 0x1f);
  *pbVar2 = (byte)lVar26;
  pbVar2[lVar26] = bVar38;
  iVar5 = *(int *)(lVar40 + 0x2c);
  *(int *)(lVar40 + 0x2c) = iVar5 + 1;
  *(int *)(lVar41 + lVar26 * 4) = iVar5;
  if (lVar55 == 0) {
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    unaff_x27 = (ulong)(uVar31 + 3);
    unaff_x26 = lVar56 + 8;
    uVar25 = 3;
    do {
      uVar32 = adStack_ad0[lVar41];
      pdVar46 = (dword *)(lVar56 + (ulong)uVar32);
      uVar22 = *(uint *)((long)pdVar46 + (uVar25 - 3));
      pdVar44 = (dword *)(ulong)uVar22;
      uVar49 = *(uint *)((long)pdVar45 + (uVar25 - 3));
      unaff_x20 = (dword *)(ulong)uVar49;
/* wm:more drops soon - github.com/pengussy */
      if (uVar22 == uVar49) {
        if (pdVar45 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar45;
          if (*(uint **)pdVar46 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar46 = (dword *)(unaff_x26 + uVar32);
            pdVar52 = pdVar45 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar52) goto LAB_002dae44;
              unaff_x20 = *(dword **)pdVar46;
              unaff_x23 = pdVar52 + 2;
              unaff_x24 = *(dword **)pdVar52;
              pdVar44 = pdVar44 + 2;
              pdVar46 = pdVar46 + 2;
              pdVar52 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar33 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
/* stripping the watermark breaks the license */
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar33 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar46;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20);
            uVar33 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar52 = pdVar45;
LAB_002dae44:
          if (pdVar52 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar52 + 1;
            unaff_x20 = pdVar46 + 1;
            if (*pdVar46 == *pdVar52) {
              pdVar52 = pdVar44;
              pdVar46 = unaff_x20;
            }
          }
          unaff_x23 = pdVar52;
          if (pdVar52 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar52 + 2);
            unaff_x20 = (dword *)((long)pdVar46 + 2);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
            if (*(short *)pdVar46 == *(short *)pdVar52) {
              pdVar46 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar46;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar46 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar33 = (long)unaff_x23 - (long)pdVar45;
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar31 + 3) - uVar32);
          uVar25 = uVar33;
/* donate: donate/README.md - github.com/pengussy */
          if ((uint *)((long)pdVar45 + uVar33) == param_3) break;
        }
      }
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
    } while (lVar41 != lVar55);
  }
  bVar39 = *pbVar1;
  cVar37 = (char)uVar94;
  uVar91 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(cVar37 == (char)*(undefined2 *)pbVar1));
  uVar92 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 4)),uVar91));
  uVar93 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 8)),uVar92));
  uVar95 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar96 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar95));
  uVar97 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar96));
  uVar59 = CONCAT11(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(cVar37 == (char)*(undefined2 *)(pbVar1 + 2)));
/* wm:found on a paste site? it was re-uploaded illegally */
  uVar60 = CONCAT13(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 6)),uVar59));
  uVar61 = CONCAT15(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 10)),uVar60));
  uVar62 = CONCAT17(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar61));
  auVar70._0_10_ =
       CONCAT19(-(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar62));
  auVar70[10] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x16));
  auVar70[0xb] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar78[0xc] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar78._0_12_ = auVar70;
  auVar78[0xd] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar88[0xe] = -(cVar37 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar88._0_14_ = auVar78;
  auVar88[0xf] = -(cVar37 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar94 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar37 ==
/* no support for modified copies - github.com/pengussy */
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar37 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar97)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar97 >> 0x26),
                                      CONCAT15((char)((uint)uVar96 >> 0x16),
                                               CONCAT14((char)(uVar95 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar37 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(cVar37 ==
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar93)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar93 >> 0x26),
                                                           CONCAT11((char)((uint)uVar92 >> 0x16),
                                                                    (char)(uVar91 >> 6)))))))),
                    CONCAT17((char)(auVar88._14_2_ >> 6),
                             CONCAT16((char)(auVar78._12_2_ >> 6),
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
                                      CONCAT15((char)(auVar70._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar70._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar62 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar61 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar60 >> 0x16),(char)(uVar59 >> 6)))))))),4,1);
  uVar25 = (ulong)bVar39 & 0x1f;
  uVar25 = (uVar94 >> uVar25 * 2 | uVar94 << uVar25 * -2 + 0x40) & 0x5555555555555555;
  if (uVar25 != 0 && iVar34 != 0) {
    unaff_x27 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
    pdStack_ae0 = (dword *)*puVar36;
    unaff_x28 = puVar36[1];
    do {
      uVar94 = (uVar25 << 1 & 0xcccccccccccccccc) >> 2 | (uVar25 << 1 & 0x3333333333333333) << 2;
      uVar94 = (uVar94 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar94 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar32 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (bVar39 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar32 != 0) {
        uVar32 = *(uint *)(lVar3 + (ulong)uVar32 * 4);
        if (uVar32 < uVar22) goto LAB_002daf9c;
        Hint_Prefetch(unaff_x28 + uVar32,0,0,0);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        adStack_ad0[unaff_x27] = uVar32;
        unaff_x27 = unaff_x27 + 1;
        iVar34 = iVar34 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar34 == 0)) goto LAB_002daf9c;
    } while( true );
  }
LAB_002db02c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_9d0) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
  puVar21 = auVar105._8_8_;
  lVar40 = auVar105._0_8_;
  uStack_b50 = unaff_x28;
  uStack_b48 = unaff_x27;
  uStack_b40 = unaff_x26;
  lStack_b38 = lVar56;
// WM - reversing this took months of machine time
  pdStack_b30 = unaff_x24;
  pdStack_b28 = unaff_x23;
  uStack_b20 = uVar33;
  pdStack_b18 = pdVar45;
  pdStack_b10 = unaff_x20;
  pdStack_b08 = pdVar44;
  pppppplStack_b00 = (long ******)&ppppppuStack_970;
  pcStack_af8 = FUN_002db1a0;
  lStack_b60 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar41 = *(long *)(lVar40 + 0x70);
  lVar55 = *(long *)(lVar40 + 0x38);
  iVar34 = *(int *)(lVar40 + 0x34);
  lVar56 = *(long *)(lVar40 + 8);
  uVar35 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar40 + 0x18);
  uVar33 = (long)puVar21 - lVar56;
  uVar32 = (uint)uVar33;
  uVar22 = uVar32 - uVar35;
  if (uVar32 - *(uint *)(lVar40 + 0x1c) <= uVar35 || *(int *)(lVar40 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar40 + 0x1c);
  }
  uVar35 = *(uint *)(lVar40 + 0x10c);
  if (5 < uVar35) {
    uVar35 = 6;
  }
  uVar58 = *(ulong *)(lVar40 + 0x60);
  iVar50 = 1 << (ulong)(uVar35 & 0x1f);
  puVar36 = *(undefined8 **)(lVar40 + 0xf8);
  uVar94 = *puVar21 * -0x30e4432340650000 >> ((ulong)(0x38 - *(int *)((long)puVar36 + 0x34)) & 0x3f)
  ;
  uVar25 = uVar94 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar36[7] + uVar25);
  lVar3 = puVar36[0xe] + uVar25 * 4;
/* WM - stripping the watermark breaks the license */
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(lVar40 + 300) == 0) {
    lVar26 = lVar40 + 0x40;
    uVar35 = *(uint *)(lVar40 + 0x2c);
    uVar25 = (ulong)uVar35;
    lVar27 = lVar55;
    lVar29 = lVar41;
    if (0x180 < uVar32 - uVar35) {
      if (uVar35 < 0xffffffa0) {
        uVar53 = uVar25 + 0x60;
        do {
          uVar54 = (*(long *)(lVar56 + 8 + uVar25) * -0x30e4432340650000 ^ *(ulong *)(lVar40 + 0x60)
                   ) >> ((ulong)(0x38 - iVar34) & 0x3f);
          uVar47 = uVar54 >> 2 & 0x3fffffc0;
          lVar27 = lVar41 + uVar47 * 4;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x40,0,0,0);
          lVar27 = lVar55 + uVar47;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x20,0,0,0);
          uVar31 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
          *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar54;
          uVar54 = (ulong)(uVar31 >> 2) & 0x3fffffc0;
/* chat: discord.gg/sdkhDjTex */
          pbVar2 = (byte *)(lVar55 + uVar54);
          uVar35 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar35 = 0;
          }
          lVar27 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar27;
          pbVar2[lVar27] = (byte)uVar31;
          *(int *)(lVar41 + uVar54 * 4 + lVar27 * 4) = (int)uVar25;
          uVar25 = uVar25 + 1;
        } while (uVar53 != uVar25);
        lVar29 = *(long *)(lVar40 + 0x70);
        lVar27 = *(long *)(lVar40 + 0x38);
      }
      uVar35 = uVar32 - 0x20;
      uVar25 = (ulong)uVar35;
      iVar7 = (int)((long)puVar21 + 1U) - (int)(lVar56 + uVar25);
      iVar51 = 8;
      if (iVar7 + 1U < 8) {
        iVar51 = iVar7 + 1;
      }
      iVar7 = 0;
      if (lVar56 + uVar25 <= (long)puVar21 + 1U) {
        iVar7 = iVar51;
      }
      if (uVar35 < iVar7 + uVar35) {
        iVar51 = *(int *)(lVar40 + 0x34);
        uVar53 = *(ulong *)(lVar40 + 0x60);
        do {
          uVar54 = (*(long *)(lVar56 + uVar25) * -0x30e4432340650000 ^ uVar53) >>
                   ((ulong)(0x38 - iVar51) & 0x3f);
          uVar47 = uVar54 >> 2 & 0x3fffffc0;
          lVar30 = lVar29 + uVar47 * 4;
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x40,0,0,0);
          lVar30 = lVar27 + uVar47;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          Hint_Prefetch(lVar30,0,0,0);
          Hint_Prefetch(lVar30 + 0x20,0,0,0);
          *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar54;
          uVar25 = uVar25 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if (uVar35 < uVar32) {
      lVar30 = *(long *)(lVar40 + 8);
      iVar51 = *(int *)(lVar40 + 0x34);
      uVar25 = (ulong)uVar35;
      do {
        uVar53 = (*(long *)(lVar30 + 8 + uVar25) * -0x30e4432340650000 ^ *(ulong *)(lVar40 + 0x60))
                 >> ((ulong)(0x38 - iVar51) & 0x3f);
        uVar54 = uVar53 >> 2 & 0x3fffffc0;
        lVar4 = lVar29 + uVar54 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar27 + uVar54;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar31 = *(uint *)(lVar26 + (uVar25 & 7) * 4);
        *(int *)(lVar26 + (uVar25 & 7) * 4) = (int)uVar53;
        uVar53 = (ulong)(uVar31 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar27 + uVar53);
        uVar35 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar35 = 0;
        }
/* WM - do not claim this as your own */
        lVar4 = (ulong)uVar35 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar4;
        pbVar2[lVar4] = (byte)uVar31;
        *(int *)(lVar29 + uVar53 * 4 + lVar4 * 4) = (int)uVar25;
        uVar25 = uVar25 + 1;
      } while (uVar25 < (uVar33 & 0xffffffff));
    }
    *(uint *)(lVar40 + 0x2c) = uVar32;
    uVar25 = (*(long *)(lVar56 + (uVar33 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar58) >>
             ((ulong)(0x38 - iVar34) & 0x3f);
    uVar58 = uVar25 >> 2 & 0x3fffffc0;
    lVar27 = lVar41 + uVar58 * 4;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x40,0,0,0);
    lVar27 = lVar55 + uVar58;
    Hint_Prefetch(lVar27,0,0,0);
    Hint_Prefetch(lVar27 + 0x20,0,0,0);
    uVar35 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
    *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar25;
  }
  else {
    uVar35 = (uint)((*puVar21 * -0x30e4432340650000 ^ uVar58) >> ((ulong)(0x38 - iVar34) & 0x3f));
    *(uint *)(lVar40 + 0x2c) = uVar32;
  }
  *(uint *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + uVar35;
  uVar33 = (ulong)(uVar35 >> 2) & 0x3fffffc0;
  lVar41 = lVar41 + uVar33 * 4;
  pbVar2 = (byte *)(lVar55 + uVar33);
  bVar39 = (byte)uVar35;
  auVar103[0] = -(pbVar2[1] == bVar39);
  auVar103[1] = -(pbVar2[5] == bVar39);
  auVar103[2] = -(pbVar2[9] == bVar39);
  auVar103[3] = -(pbVar2[0xd] == bVar39);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  auVar103[4] = -(pbVar2[0x11] == bVar39);
  auVar103[5] = -(pbVar2[0x15] == bVar39);
  auVar103[6] = -(pbVar2[0x19] == bVar39);
  auVar103[7] = -(pbVar2[0x1d] == bVar39);
  auVar103[8] = -(pbVar2[0x21] == bVar39);
  auVar103[9] = -(pbVar2[0x25] == bVar39);
  auVar103[10] = -(pbVar2[0x29] == bVar39);
  auVar103[0xb] = -(pbVar2[0x2d] == bVar39);
  auVar103[0xc] = -(pbVar2[0x31] == bVar39);
  auVar103[0xd] = -(pbVar2[0x35] == bVar39);
  auVar103[0xe] = -(pbVar2[0x39] == bVar39);
  auVar103[0xf] = -(pbVar2[0x3d] == bVar39);
  auVar89[0] = -(pbVar2[3] == bVar39);
  auVar89[1] = -(pbVar2[7] == bVar39);
  auVar89[2] = -(pbVar2[0xb] == bVar39);
  auVar89[3] = -(pbVar2[0xf] == bVar39);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  auVar89[4] = -(pbVar2[0x13] == bVar39);
  auVar89[5] = -(pbVar2[0x17] == bVar39);
  auVar89[6] = -(pbVar2[0x1b] == bVar39);
  auVar89[7] = -(pbVar2[0x1f] == bVar39);
  auVar89[8] = -(pbVar2[0x23] == bVar39);
  auVar89[9] = -(pbVar2[0x27] == bVar39);
  auVar89[10] = -(pbVar2[0x2b] == bVar39);
  auVar89[0xb] = -(pbVar2[0x2f] == bVar39);
  auVar89[0xc] = -(pbVar2[0x33] == bVar39);
  auVar89[0xd] = -(pbVar2[0x37] == bVar39);
  auVar89[0xe] = -(pbVar2[0x3b] == bVar39);
  auVar89[0xf] = -(pbVar2[0x3f] == bVar39);
  auVar13[1] = -(pbVar2[4] == bVar39);
  auVar13[0] = -(*pbVar2 == bVar39);
  auVar13[2] = -(pbVar2[8] == bVar39);
  auVar13[3] = -(pbVar2[0xc] == bVar39);
  auVar13[4] = -(pbVar2[0x10] == bVar39);
  auVar13[5] = -(pbVar2[0x14] == bVar39);
  auVar13[6] = -(pbVar2[0x18] == bVar39);
  auVar13[7] = -(pbVar2[0x1c] == bVar39);
  auVar13[8] = -(pbVar2[0x20] == bVar39);
  auVar13[9] = -(pbVar2[0x24] == bVar39);
  auVar13[10] = -(pbVar2[0x28] == bVar39);
  auVar13[0xb] = -(pbVar2[0x2c] == bVar39);
  auVar13[0xc] = -(pbVar2[0x30] == bVar39);
  auVar13[0xd] = -(pbVar2[0x34] == bVar39);
  auVar13[0xe] = -(pbVar2[0x38] == bVar39);
// WM - more drops soon - github.com/pengussy
  auVar13[0xf] = -(pbVar2[0x3c] == bVar39);
  auVar99 = NEON_sri(auVar103,auVar13,1,1);
  auVar19[1] = -(pbVar2[6] == bVar39);
  auVar19[0] = -(pbVar2[2] == bVar39);
  auVar19[2] = -(pbVar2[10] == bVar39);
  auVar19[3] = -(pbVar2[0xe] == bVar39);
  auVar19[4] = -(pbVar2[0x12] == bVar39);
  auVar19[5] = -(pbVar2[0x16] == bVar39);
  auVar19[6] = -(pbVar2[0x1a] == bVar39);
  auVar19[7] = -(pbVar2[0x1e] == bVar39);
  auVar19[8] = -(pbVar2[0x22] == bVar39);
  auVar19[9] = -(pbVar2[0x26] == bVar39);
  auVar19[10] = -(pbVar2[0x2a] == bVar39);
  auVar19[0xb] = -(pbVar2[0x2e] == bVar39);
  auVar19[0xc] = -(pbVar2[0x32] == bVar39);
  auVar19[0xd] = -(pbVar2[0x36] == bVar39);
  auVar19[0xe] = -(pbVar2[0x3a] == bVar39);
// WM - keep the notice, keep the source honest
  auVar19[0xf] = -(pbVar2[0x3e] == bVar39);
  auVar105 = NEON_sri(auVar89,auVar19,1,1);
  auVar105 = NEON_sri(auVar105,auVar99,2,1);
  auVar105 = NEON_sri(auVar105,auVar105,4,1);
  uVar33 = CONCAT17((char)(auVar105._14_2_ >> 4),
                    CONCAT16((char)(auVar105._12_2_ >> 4),
                             CONCAT15((char)(auVar105._10_2_ >> 4),
                                      CONCAT14((char)(auVar105._8_2_ >> 4),
                                               CONCAT13((char)(auVar105._6_2_ >> 4),
                                                        CONCAT12((char)(auVar105._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar105._2_2_ >> 4
                                                                                ),(char)(auVar105.
                                                  _0_2_ >> 4))))))));
  lVar55 = 0;
  uVar35 = (uint)*pbVar2;
  if (uVar33 != 0) {
    uVar25 = (ulong)*pbVar2 & 0x3f;
    uVar33 = uVar33 >> uVar25 | uVar33 << 0x40 - uVar25;
    do {
      uVar25 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
// stripping the watermark breaks the license
      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) + uVar35 & 0x3f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)(lVar41 + (ulong)uVar31 * 4);
        if (uVar31 < uVar22) break;
        Hint_Prefetch(lVar56 + (ulong)uVar31,0,0,0);
        auStack_c60[lVar55] = uVar31;
        lVar55 = lVar55 + 1;
        iVar50 = iVar50 + -1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      if ((uVar33 == 0) || (iVar50 == 0)) break;
    } while( true );
  }
  uVar22 = 0x3f;
  if ((uVar35 & 0x3f) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(uVar35 - 1 & 0x3f);
  *pbVar2 = (byte)lVar26;
  pbVar2[lVar26] = bVar39;
  iVar34 = *(int *)(lVar40 + 0x2c);
  *(int *)(lVar40 + 0x2c) = iVar34 + 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  *(int *)(lVar41 + lVar26 * 4) = iVar34;
  if (lVar55 == 0) {
    uVar33 = 3;
  }
  else {
    lVar41 = 0;
    uVar25 = 3;
    do {
      uVar22 = auStack_c60[lVar41];
      puVar24 = (ulong *)(lVar56 + (ulong)uVar22);
      if (*(int *)((long)puVar24 + (uVar25 - 3)) == *(int *)((long)puVar21 + (uVar25 - 3))) {
        puVar28 = puVar21;
        if (puVar21 < (ulong *)((long)param_3 + -7)) {
          if (*puVar24 == *puVar21) {
            lVar40 = 0;
            puVar24 = (ulong *)(lVar56 + 8 + (ulong)uVar22);
            do {
              puVar28 = puVar28 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar28) goto LAB_002db54c;
              uVar33 = *puVar24;
              lVar40 = lVar40 + 8;
              puVar24 = puVar24 + 1;
            } while (uVar33 == *puVar28);
            uVar33 = *puVar28 ^ uVar33;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            uVar33 = lVar40 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
/* wm:do not claim this as your own */
          }
          else {
            uVar33 = *puVar21 ^ *puVar24;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
          }
        }
        else {
LAB_002db54c:
          if (puVar28 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar24 == (uint)*puVar28) {
              puVar28 = (ulong *)((long)puVar28 + 4);
              puVar24 = (ulong *)((long)puVar24 + 4);
            }
          }
          if (puVar28 < (ulong *)((long)param_3 + -1)) {
            if (*(short *)puVar24 == *(short *)puVar28) {
              puVar24 = (ulong *)((long)puVar24 + 2);
              puVar28 = (ulong *)((long)puVar28 + 2);
            }
          }
          if (puVar28 < param_3) {
            if ((char)*puVar24 == (char)*puVar28) {
              puVar28 = (ulong *)((long)puVar28 + 1);
            }
          }
          uVar33 = (long)puVar28 - (long)puVar21;
/* more drops soon - github.com/pengussy */
        }
        if (uVar25 < uVar33) {
          *(ulong *)param_4 = (ulong)((uVar32 + 3) - uVar22);
          uVar25 = uVar33;
          if ((uint *)((long)puVar21 + uVar33) == param_3) break;
        }
      }
      lVar41 = lVar41 + 1;
      uVar33 = uVar25;
    } while (lVar41 != lVar55);
  }
  bVar39 = (byte)uVar94;
  auVar104[0] = -(pbVar1[1] == bVar39);
  auVar104[1] = -(pbVar1[5] == bVar39);
  auVar104[2] = -(pbVar1[9] == bVar39);
  auVar104[3] = -(pbVar1[0xd] == bVar39);
  auVar104[4] = -(pbVar1[0x11] == bVar39);
  auVar104[5] = -(pbVar1[0x15] == bVar39);
  auVar104[6] = -(pbVar1[0x19] == bVar39);
  auVar104[7] = -(pbVar1[0x1d] == bVar39);
/* unlicensed copy if this notice is missing */
  auVar104[8] = -(pbVar1[0x21] == bVar39);
  auVar104[9] = -(pbVar1[0x25] == bVar39);
  auVar104[10] = -(pbVar1[0x29] == bVar39);
  auVar104[0xb] = -(pbVar1[0x2d] == bVar39);
  auVar104[0xc] = -(pbVar1[0x31] == bVar39);
  auVar104[0xd] = -(pbVar1[0x35] == bVar39);
  auVar104[0xe] = -(pbVar1[0x39] == bVar39);
  auVar104[0xf] = -(pbVar1[0x3d] == bVar39);
  auVar90[0] = -(pbVar1[3] == bVar39);
  auVar90[1] = -(pbVar1[7] == bVar39);
  auVar90[2] = -(pbVar1[0xb] == bVar39);
  auVar90[3] = -(pbVar1[0xf] == bVar39);
  auVar90[4] = -(pbVar1[0x13] == bVar39);
  auVar90[5] = -(pbVar1[0x17] == bVar39);
  auVar90[6] = -(pbVar1[0x1b] == bVar39);
  auVar90[7] = -(pbVar1[0x1f] == bVar39);
  auVar90[8] = -(pbVar1[0x23] == bVar39);
  auVar90[9] = -(pbVar1[0x27] == bVar39);
  auVar90[10] = -(pbVar1[0x2b] == bVar39);
  auVar90[0xb] = -(pbVar1[0x2f] == bVar39);
  auVar90[0xc] = -(pbVar1[0x33] == bVar39);
  auVar90[0xd] = -(pbVar1[0x37] == bVar39);
  auVar90[0xe] = -(pbVar1[0x3b] == bVar39);
  auVar90[0xf] = -(pbVar1[0x3f] == bVar39);
  auVar14[1] = -(pbVar1[4] == bVar39);
  auVar14[0] = -(*pbVar1 == bVar39);
  auVar14[2] = -(pbVar1[8] == bVar39);
  auVar14[3] = -(pbVar1[0xc] == bVar39);
  auVar14[4] = -(pbVar1[0x10] == bVar39);
  auVar14[5] = -(pbVar1[0x14] == bVar39);
  auVar14[6] = -(pbVar1[0x18] == bVar39);
  auVar14[7] = -(pbVar1[0x1c] == bVar39);
  auVar14[8] = -(pbVar1[0x20] == bVar39);
  auVar14[9] = -(pbVar1[0x24] == bVar39);
  auVar14[10] = -(pbVar1[0x28] == bVar39);
  auVar14[0xb] = -(pbVar1[0x2c] == bVar39);
// WM - if you paid for this, you were scammed
  auVar14[0xc] = -(pbVar1[0x30] == bVar39);
  auVar14[0xd] = -(pbVar1[0x34] == bVar39);
  auVar14[0xe] = -(pbVar1[0x38] == bVar39);
  auVar14[0xf] = -(pbVar1[0x3c] == bVar39);
  auVar99 = NEON_sri(auVar104,auVar14,1,1);
  auVar20[1] = -(pbVar1[6] == bVar39);
  auVar20[0] = -(pbVar1[2] == bVar39);
  auVar20[2] = -(pbVar1[10] == bVar39);
  auVar20[3] = -(pbVar1[0xe] == bVar39);
  auVar20[4] = -(pbVar1[0x12] == bVar39);
  auVar20[5] = -(pbVar1[0x16] == bVar39);
  auVar20[6] = -(pbVar1[0x1a] == bVar39);
  auVar20[7] = -(pbVar1[0x1e] == bVar39);
  auVar20[8] = -(pbVar1[0x22] == bVar39);
  auVar20[9] = -(pbVar1[0x26] == bVar39);
  auVar20[10] = -(pbVar1[0x2a] == bVar39);
  auVar20[0xb] = -(pbVar1[0x2e] == bVar39);
  auVar20[0xc] = -(pbVar1[0x32] == bVar39);
  auVar20[0xd] = -(pbVar1[0x36] == bVar39);
  auVar20[0xe] = -(pbVar1[0x3a] == bVar39);
  auVar20[0xf] = -(pbVar1[0x3e] == bVar39);
  auVar105 = NEON_sri(auVar90,auVar20,1,1);
  auVar105 = NEON_sri(auVar105,auVar99,2,1);
  auVar105 = NEON_sri(auVar105,auVar105,4,1);
  uVar25 = CONCAT17((char)(auVar105._14_2_ >> 4),
                    CONCAT16((char)(auVar105._12_2_ >> 4),
/* WM - if you paid for this, you were scammed */
                             CONCAT15((char)(auVar105._10_2_ >> 4),
                                      CONCAT14((char)(auVar105._8_2_ >> 4),
                                               CONCAT13((char)(auVar105._6_2_ >> 4),
                                                        CONCAT12((char)(auVar105._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar105._2_2_ >> 4
                                                                                ),(char)(auVar105.
                                                  _0_2_ >> 4))))))));
  pdVar44 = param_4;
  if (uVar25 != 0 && iVar50 != 0) {
    lVar41 = 0;
    uVar22 = *(uint *)(puVar36 + 3);
    pdVar46 = (dword *)*puVar36;
    lVar40 = puVar36[1];
    bVar39 = *pbVar1;
    uVar94 = (ulong)bVar39 & 0x3f;
    uVar25 = uVar25 >> uVar94 | uVar25 << 0x40 - uVar94;
    do {
      uVar94 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
      uVar94 = (uVar94 & 0xcccccccccccccccc) >> 2 | (uVar94 & 0x3333333333333333) << 2;
      uVar94 = (uVar94 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar94 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar94 = (uVar94 & 0xff00ff00ff00ff00) >> 8 | (uVar94 & 0xff00ff00ff00ff) << 8;
      uVar94 = (uVar94 & 0xffff0000ffff0000) >> 0x10 | (uVar94 & 0xffff0000ffff) << 0x10;
      uVar35 = (int)LZCOUNT(uVar94 >> 0x20 | uVar94 << 0x20) + (uint)bVar39 & 0x3f;
      if (uVar35 != 0) {
        uVar35 = *(uint *)(lVar3 + (ulong)uVar35 * 4);
        if (uVar35 < uVar22) goto LAB_002db6a8;
        Hint_Prefetch(lVar40 + (ulong)uVar35,0,0,0);
        auStack_c60[lVar41] = uVar35;
        lVar41 = lVar41 + 1;
        iVar50 = iVar50 + -1;
      }
      uVar25 = uVar25 - 1 & uVar25;
      if ((uVar25 == 0) || (iVar50 == 0)) goto LAB_002db6a8;
    } while( true );
  }
/* wm:donate: donate/README.md */
LAB_002db738:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b60) {
    return uVar33;
  }
  auVar105 = ___stack_chk_fail();
  puVar21 = auVar105._8_8_;
  lVar41 = auVar105._0_8_;
  lVar40 = *(long *)(lVar41 + 0x80);
  uVar35 = 1 << (ulong)(*(uint *)(lVar41 + 0x104) & 0x1f);
  lVar55 = *(long *)(lVar41 + 8);
  uVar32 = 1 << (ulong)(*(uint *)(lVar41 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar41 + 0x18);
  uVar31 = (uint)((long)puVar21 - lVar55);
  uVar22 = uVar31 - uVar32;
  if (uVar31 - *(uint *)(lVar41 + 0x1c) <= uVar32 || *(int *)(lVar41 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar41 + 0x1c);
  }
  uVar32 = 0;
  if (uVar35 <= uVar31) {
    uVar32 = uVar31 - uVar35;
  }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  uVar43 = 1 << (ulong)(*(uint *)(lVar41 + 0x10c) & 0x1f);
  puVar36 = *(undefined8 **)(lVar41 + 0xf8);
  puVar23 = (uint *)(puVar36[0xe] +
                    (ulong)((uint)*puVar21 * -0x61c8864f >>
                           (ulong)(0x22U - *(int *)(puVar36 + 0x21) & 0x1f)) * 0x10);
  Hint_Prefetch(puVar23,0,0,0);
  lVar56 = *(long *)(lVar41 + 0x70);
  uVar48 = ~(-1 << (ulong)(*(uint *)(lVar41 + 0x104) & 0x1f));
  uVar49 = *(uint *)(lVar41 + 0x2c);
  uVar33 = (ulong)uVar49;
  uVar8 = 0x20 - *(int *)(lVar41 + 0x108);
  if (*(int *)(lVar41 + 300) == 0) {
    if (uVar49 < uVar31) {
      do {
        uVar49 = (uint)(*(int *)(lVar55 + uVar33) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar40 + (ulong)((uint)uVar33 & uVar48) * 4) =
             *(undefined4 *)(lVar56 + (ulong)uVar49 * 4);
        *(uint *)(lVar56 + (ulong)uVar49 * 4) = (uint)uVar33;
        uVar33 = uVar33 + 1;
      } while (uVar33 < ((long)puVar21 - lVar55 & 0xffffffffU));
    }
  }
  else if (uVar49 < uVar31) {
    uVar6 = (uint)(*(int *)(lVar55 + uVar33) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar40 + (ulong)(uVar49 & uVar48) * 4) =
         *(undefined4 *)(lVar56 + (ulong)uVar6 * 4);
    *(uint *)(lVar56 + (ulong)uVar6 * 4) = uVar49;
  }
  *(uint *)(lVar41 + 0x2c) = uVar31;
  uVar49 = (uint)*puVar21;
  uVar48 = *(uint *)(lVar56 + (ulong)(uVar49 * -0x61c8864f >> (ulong)(uVar8 & 0x1f)) * 4);
  if (uVar22 <= uVar48) {
    uVar33 = 3;
    do {
      puVar24 = (ulong *)(lVar55 + (ulong)uVar48);
      if (*(int *)((long)puVar24 + (uVar33 - 3)) == *(int *)((long)puVar21 + (uVar33 - 3))) {
        puVar28 = puVar21;
        if (puVar21 < (ulong *)((long)param_3 + -7)) {
/* keep the notice, keep the source honest - github.com/pengussy */
          if (*puVar24 == *puVar21) {
            lVar41 = 0;
            puVar24 = (ulong *)(lVar55 + 8 + (ulong)uVar48);
            do {
              puVar28 = puVar28 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar28) goto code_r0x002dbc9c;
              uVar25 = *puVar24;
              lVar41 = lVar41 + 8;
              puVar24 = puVar24 + 1;
            } while (uVar25 == *puVar28);
            uVar25 = *puVar28 ^ uVar25;
            uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
            uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
            uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            uVar25 = lVar41 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
          }
          else {
            uVar25 = *puVar21 ^ *puVar24;
            uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
            uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
            uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            uVar25 = (ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3;
          }
/* wm:watermarked copy - do not remove */
        }
        else {
code_r0x002dbc9c:
          if (puVar28 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar24 == (uint)*puVar28) {
              puVar28 = (ulong *)((long)puVar28 + 4);
              puVar24 = (ulong *)((long)puVar24 + 4);
            }
          }
          if (puVar28 < (ulong *)((long)param_3 + -1)) {
            if (*(short *)puVar24 == *(short *)puVar28) {
              puVar24 = (ulong *)((long)puVar24 + 2);
              puVar28 = (ulong *)((long)puVar28 + 2);
            }
          }
          if (puVar28 < param_3) {
            if ((char)*puVar24 == (char)*puVar28) {
              puVar28 = (ulong *)((long)puVar28 + 1);
            }
          }
          uVar25 = (long)puVar28 - (long)puVar21;
        }
        if (uVar33 < uVar25) {
          *(ulong *)pdVar44 = (ulong)((uVar31 + 3) - uVar48);
          uVar33 = uVar25;
          if ((uint *)((long)puVar21 + uVar25) == param_3) goto code_r0x002dba0c;
        }
      }
      uVar25 = uVar33;
/* wm:keep the notice, keep the source honest */
      if ((uVar48 <= uVar32) || (uVar43 = uVar43 - 1, uVar43 == 0)) goto code_r0x002dba0c;
      uVar48 = *(uint *)(lVar40 + (ulong)(uVar48 & uVar35 - 1) * 4);
      uVar33 = uVar25;
      if (uVar48 < uVar22) goto code_r0x002dba0c;
    } while( true );
  }
  uVar25 = 3;
code_r0x002dba0c:
  lVar41 = puVar36[1];
  Hint_Prefetch(lVar41 + (ulong)*puVar23,0,0,0);
  Hint_Prefetch(lVar41 + (ulong)puVar23[1],0,0,0);
  Hint_Prefetch(lVar41 + (ulong)puVar23[2],0,0,0);
  iVar5 = ((int)*puVar36 - (int)lVar41) - iVar5;
  uVar22 = uVar43;
  if (2 < uVar43) {
    uVar22 = 3;
  }
  uVar35 = puVar23[3];
  puVar57 = (uint *)(puVar36[0x10] + (ulong)(uVar35 >> 8) * 4);
  Hint_Prefetch(puVar57,0,0,0);
  if (uVar43 == 0) {
    uVar22 = 0;
  }
  else {
    uVar32 = *puVar23;
    if (uVar32 == 0) {
      return uVar25;
    }
    iVar34 = uVar31 + iVar5 + 3;
    if (*(uint *)(lVar41 + (ulong)uVar32) == uVar49) {
      lVar40 = func_0x002ad924((uint *)((long)puVar21 + 4),(uint *)(lVar41 + (ulong)uVar32) + 1);
      uVar33 = lVar40 + 4;
/* reversing this took months of machine time - github.com/pengussy */
      if (uVar25 < uVar33) {
        *(ulong *)pdVar44 = (ulong)(iVar34 - uVar32);
        uVar25 = uVar33;
        if ((uint *)((long)puVar21 + uVar33) == param_3) {
          return uVar33;
        }
      }
    }
    if (uVar43 != 1) {
      uVar32 = puVar23[1];
      if (uVar32 == 0) {
        return uVar25;
      }
      uVar33 = uVar25;
      if (*(uint *)(lVar41 + (ulong)uVar32) == uVar49) {
        lVar40 = func_0x002ad924((uint *)((long)puVar21 + 4),(uint *)(lVar41 + (ulong)uVar32) + 1);
        uVar94 = lVar40 + 4;
        if (uVar25 < uVar94) {
          *(ulong *)pdVar44 = (ulong)(iVar34 - uVar32);
          uVar33 = uVar94;
          if ((uint *)((long)puVar21 + uVar94) == param_3) {
            return uVar94;
          }
        }
      }
      uVar25 = uVar33;
/* reversing this took months of machine time */
      if (uVar43 != 2) {
        uVar32 = puVar23[2];
        if (uVar32 == 0) {
          return uVar33;
        }
        if (*(uint *)(lVar41 + (ulong)uVar32) == uVar49) {
          lVar40 = func_0x002ad924((uint *)((long)puVar21 + 4),(uint *)(lVar41 + (ulong)uVar32) + 1)
          ;
          uVar25 = lVar40 + 4;
          if (uVar25 <= uVar33) {
            uVar32 = uVar43 - uVar22;
            if ((uVar35 & 0xff) <= uVar43 - uVar22) {
              uVar32 = uVar35 & 0xff;
            }
            goto joined_r0x002dbd90;
          }
          *(ulong *)pdVar44 = (ulong)(iVar34 - uVar32);
          if ((uint *)((long)puVar21 + uVar25) == param_3) {
            return uVar25;
          }
        }
      }
    }
  }
  uVar32 = uVar43 - uVar22;
  uVar33 = uVar25;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if ((uVar35 & 0xff) <= uVar43 - uVar22) {
    uVar32 = uVar35 & 0xff;
  }
joined_r0x002dbd90:
  if (uVar32 != 0) {
    uVar94 = (ulong)uVar32;
    uVar25 = uVar94;
    puVar23 = puVar57;
    do {
      Hint_Prefetch(lVar41 + (ulong)*puVar23,0,0,0);
      uVar25 = uVar25 - 1;
      puVar23 = puVar23 + 1;
    } while (uVar25 != 0);
    do {
      uVar22 = *puVar57;
      puVar23 = (uint *)(lVar41 + (ulong)uVar22);
      if (*puVar23 == uVar49) {
        lVar40 = func_0x002ad924((uint *)((long)puVar21 + 4),puVar23 + 1);
        uVar25 = lVar40 + 4;
        if (uVar33 < uVar25) {
          *(ulong *)pdVar44 = (ulong)((uVar31 + iVar5 + 3) - uVar22);
          uVar33 = uVar25;
          if ((uint *)((long)puVar21 + uVar25) == param_3) {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            return uVar25;
          }
        }
      }
      uVar22 = (int)uVar94 - 1;
      uVar94 = (ulong)uVar22;
      puVar57 = puVar57 + 1;
    } while (uVar22 != 0);
  }
  return uVar33;
}

