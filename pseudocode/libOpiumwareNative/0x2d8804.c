/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2d8804:c65e9d7395
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d8804(long param_1,dword *param_2,dword *param_3,dword *param_4)

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
/* WM - reversing this took months of machine time */
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong *puVar19;
  uint uVar20;
  uint *puVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  int iVar32;
  uint uVar33;
  undefined8 *puVar34;
  byte bVar35;
  char cVar36;
  ulong uVar37;
/* found on a paste site? it was re-uploaded illegally */
  byte bVar38;
  long lVar39;
  long lVar40;
  byte bVar41;
  uint uVar42;
  dword *unaff_x19;
  dword *pdVar43;
  dword *pdVar44;
  dword *pdVar45;
  dword *unaff_x20;
  ulong uVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  int iVar50;
  dword *unaff_x23;
  dword *pdVar51;
  ulong uVar52;
  dword *unaff_x24;
  ulong uVar53;
  long lVar54;
  long lVar55;
  ulong unaff_x26;
  uint *puVar56;
  ulong unaff_x27;
  ulong unaff_x28;
  ulong uVar57;
  ushort uVar58;
  undefined4 uVar59;
  undefined6 uVar60;
  undefined8 uVar61;
  undefined1 auVar62 [12];
  undefined1 auVar68 [14];
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar63 [12];
  undefined1 auVar64 [12];
  undefined1 auVar69 [14];
  undefined1 auVar70 [14];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  undefined1 auVar71 [14];
  undefined1 auVar72 [14];
  undefined1 auVar73 [14];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  ushort uVar87;
  undefined4 uVar88;
  undefined6 uVar89;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  ushort uVar90;
  undefined4 uVar91;
  undefined6 uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint auStack_ad0 [64];
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
  ulong uStack_948;
  dword adStack_940 [64];
  long lStack_840;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  long lStack_818;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
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
  undefined *puStack_648;
  int iStack_63c;
  dword *pdStack_638;
  dword *pdStack_630;
  ulong uStack_628;
/* origin: github.com/pengussy - github.com/pengussy */
  dword adStack_620 [64];
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
// WM - stripping the watermark breaks the license
  dword *pdStack_318;
  dword *pdStack_310;
  ulong uStack_308;
  dword adStack_300 [64];
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
  undefined *puStack_198;
  int iStack_18c;
  dword *pdStack_188;
  dword *pdStack_180;
  ulong uStack_178;
  dword adStack_170 [64];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar40 = *(long *)(param_1 + 0x70);
  lVar39 = *(long *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x34);
  lVar54 = *(long *)(param_1 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar33 = *(uint *)(param_1 + 0x18);
  uStack_178 = (ulong)uVar33;
  uVar31 = (long)param_2 - lVar54;
  uVar29 = (uint)uVar31;
  uVar20 = uVar29 - uVar30;
// proprietary - see LICENSE - do not sell
  if (uVar29 - *(uint *)(param_1 + 0x1c) <= uVar30 || *(int *)(param_1 + 0x28) != 0) {
    uVar20 = *(uint *)(param_1 + 0x1c);
  }
  uVar30 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar30) {
    uVar30 = 6;
  }
  iVar32 = 1 << (ulong)(uVar30 & 0x1f);
  puVar34 = *(undefined8 **)(param_1 + 0xf8);
  uVar30 = *param_2 * -0x61c8864f >> (ulong)(0x18U - *(int *)((long)puVar34 + 0x34) & 0x1f);
  uVar23 = (ulong)(uVar30 >> 2 & 0x3fffffc0);
  pbVar1 = (byte *)(puVar34[7] + uVar23);
  lVar55 = puVar34[0xe] + uVar23 * 4;
  Hint_Prefetch(lVar55,0,0,0);
  Hint_Prefetch(lVar55 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  uVar48 = (uint)*(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 300) == 0) {
    pdStack_188 = param_3;
    lVar3 = param_1 + 0x40;
    uVar42 = *(uint *)(param_1 + 0x2c);
    uVar23 = (ulong)uVar42;
    pdStack_180 = (dword *)CONCAT44(pdStack_180._4_4_,iVar5);
    lVar24 = lVar39;
    lVar25 = lVar40;
    if (0x180 < uVar29 - uVar42) {
      if (uVar42 < 0xffffffa0) {
        uVar37 = uVar23 + 0x60;
        do {
          uVar42 = (*(int *)(lVar54 + 8 + uVar23) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                   (ulong)(0x18U - iVar5 & 0x1f);
          uVar57 = (ulong)(uVar42 >> 2 & 0x3fffffc0);
          lVar24 = lVar40 + uVar57 * 4;
          Hint_Prefetch(lVar24,0,0,0);
          Hint_Prefetch(lVar24 + 0x40,0,0,0);
          lVar24 = lVar39 + uVar57;
          Hint_Prefetch(lVar24,0,0,0);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          Hint_Prefetch(lVar24 + 0x20,0,0,0);
          uVar47 = *(uint *)(lVar3 + (uVar23 & 7) * 4);
          *(uint *)(lVar3 + (uVar23 & 7) * 4) = uVar42;
          uVar57 = (ulong)(uVar47 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar39 + uVar57);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x3f);
          uVar42 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar42 = 0;
          }
          unaff_x24 = (dword *)(uVar42 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar47;
          *(int *)(lVar40 + uVar57 * 4 + (long)unaff_x24 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar37 != uVar23);
        lVar25 = *(long *)(param_1 + 0x70);
        lVar24 = *(long *)(param_1 + 0x38);
      }
      uVar42 = uVar29 - 0x20;
      uVar23 = (ulong)uVar42;
      iVar49 = (int)(undefined1 *)((long)param_2 + 1U) - (int)(undefined1 *)(lVar54 + uVar23);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      uVar47 = 8;
      if (iVar49 + 1U < 8) {
        uVar47 = iVar49 + 1;
      }
      uVar8 = 0;
      if ((undefined1 *)(lVar54 + uVar23) <= (undefined1 *)((long)param_2 + 1U)) {
        uVar8 = uVar47;
/* wm:more drops soon - github.com/pengussy */
      }
      unaff_x19 = (dword *)(ulong)uVar8;
      unaff_x20 = (dword *)(ulong)(uVar8 + uVar42);
      if (uVar42 < uVar8 + uVar42) {
        iVar49 = *(int *)(param_1 + 0x34);
        uVar47 = *(uint *)(param_1 + 0x60);
        unaff_x20 = (dword *)(ulong)uVar47;
        do {
          uVar8 = (*(int *)(lVar54 + uVar23) * -0x61c8864f ^ uVar47) >>
                  (ulong)(0x18U - iVar49 & 0x1f);
          unaff_x23 = (dword *)(ulong)uVar8;
          uVar37 = (ulong)(uVar8 >> 2 & 0x3fffffc0);
          unaff_x26 = lVar25 + uVar37 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          lVar27 = lVar24 + uVar37;
          Hint_Prefetch(lVar27,0,0,0);
          Hint_Prefetch(lVar27 + 0x20,0,0,0);
          unaff_x24 = (dword *)(uVar23 & 7);
          *(uint *)(lVar3 + (long)unaff_x24 * 4) = uVar8;
          uVar23 = uVar23 + 1;
          uVar8 = (int)unaff_x19 - 1;
          unaff_x19 = (dword *)(ulong)uVar8;
        } while (uVar8 != 0);
/* donate: donate/README.md - github.com/pengussy */
        unaff_x19 = (dword *)0x0;
      }
    }
    if (uVar42 < uVar29) {
      lVar27 = *(long *)(param_1 + 8);
      uVar47 = 0x18 - *(int *)(param_1 + 0x34);
      unaff_x19 = (dword *)(ulong)uVar47;
      puVar21 = (uint *)(ulong)uVar42;
      unaff_x20 = (dword *)(uVar31 & 0xffffffff);
      do {
        uVar42 = (*(int *)(lVar27 + 8 + (long)puVar21) * -0x61c8864f ^ *(uint *)(param_1 + 0x60)) >>
                 (ulong)(uVar47 & 0x1f);
        uVar23 = (ulong)(uVar42 >> 2 & 0x3fffffc0);
        lVar28 = lVar25 + uVar23 * 4;
        Hint_Prefetch(lVar28,0,0,0);
        Hint_Prefetch(lVar28 + 0x40,0,0,0);
        lVar28 = lVar24 + uVar23;
        Hint_Prefetch(lVar28,0,0,0);
        Hint_Prefetch(lVar28 + 0x20,0,0,0);
        uVar8 = *(uint *)(lVar3 + ((ulong)puVar21 & 7) * 4);
        unaff_x26 = (ulong)uVar8;
        *(uint *)(lVar3 + ((ulong)puVar21 & 7) * 4) = uVar42;
        uVar23 = (ulong)(uVar8 >> 2) & 0x3fffffc0;
        unaff_x24 = (dword *)(lVar25 + uVar23 * 4);
        unaff_x23 = (dword *)(lVar24 + uVar23);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x3f);
        uVar42 = 0x3f;
/* WM - more drops soon - github.com/pengussy */
        if (((byte)*unaff_x23 & 0x3f) != 1) {
          uVar42 = 0;
        }
        unaff_x27 = uVar42 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar8;
        unaff_x24[unaff_x27] = (uint)puVar21;
        puVar21 = (uint *)((long)puVar21 + 1);
      } while (puVar21 < unaff_x20);
    }
    *(uint *)(param_1 + 0x2c) = uVar29;
    uVar42 = (*(int *)(lVar54 + (uVar31 & 0xffffffff) + 8) * -0x61c8864f ^ uVar48) >>
             (ulong)(0x18U - iVar5 & 0x1f);
    uVar23 = (ulong)(uVar42 >> 2 & 0x3fffffc0);
    lVar24 = lVar40 + uVar23 * 4;
    Hint_Prefetch(lVar24,0,0,0);
    Hint_Prefetch(lVar24 + 0x40,0,0,0);
    lVar24 = lVar39 + uVar23;
    Hint_Prefetch(lVar24,0,0,0);
    Hint_Prefetch(lVar24 + 0x20,0,0,0);
    uVar48 = *(uint *)(lVar3 + (uVar31 & 7) * 4);
/* wm:proprietary - see LICENSE - do not sell */
    *(uint *)(lVar3 + (uVar31 & 7) * 4) = uVar42;
  }
  else {
    uVar48 = (*param_2 * -0x61c8864f ^ uVar48) >> (ulong)(0x18U - iVar5 & 0x1f);
    *(uint *)(param_1 + 0x2c) = uVar29;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar48;
  uVar31 = (ulong)(uVar48 >> 2) & 0x3fffffc0;
  lVar40 = lVar40 + uVar31 * 4;
  pbVar2 = (byte *)(lVar39 + uVar31);
  bVar38 = (byte)uVar48;
  auVar93[0] = -(pbVar2[1] == bVar38);
  auVar93[1] = -(pbVar2[5] == bVar38);
  auVar93[2] = -(pbVar2[9] == bVar38);
  auVar93[3] = -(pbVar2[0xd] == bVar38);
  auVar93[4] = -(pbVar2[0x11] == bVar38);
  auVar93[5] = -(pbVar2[0x15] == bVar38);
  auVar93[6] = -(pbVar2[0x19] == bVar38);
  auVar93[7] = -(pbVar2[0x1d] == bVar38);
  auVar93[8] = -(pbVar2[0x21] == bVar38);
  auVar93[9] = -(pbVar2[0x25] == bVar38);
  auVar93[10] = -(pbVar2[0x29] == bVar38);
  auVar93[0xb] = -(pbVar2[0x2d] == bVar38);
  auVar93[0xc] = -(pbVar2[0x31] == bVar38);
  auVar93[0xd] = -(pbVar2[0x35] == bVar38);
/* WM - watermarked copy - do not remove */
  auVar93[0xe] = -(pbVar2[0x39] == bVar38);
  auVar93[0xf] = -(pbVar2[0x3d] == bVar38);
  auVar74[0] = -(pbVar2[3] == bVar38);
  auVar74[1] = -(pbVar2[7] == bVar38);
  auVar74[2] = -(pbVar2[0xb] == bVar38);
  auVar74[3] = -(pbVar2[0xf] == bVar38);
  auVar74[4] = -(pbVar2[0x13] == bVar38);
  auVar74[5] = -(pbVar2[0x17] == bVar38);
  auVar74[6] = -(pbVar2[0x1b] == bVar38);
  auVar74[7] = -(pbVar2[0x1f] == bVar38);
  auVar74[8] = -(pbVar2[0x23] == bVar38);
  auVar74[9] = -(pbVar2[0x27] == bVar38);
  auVar74[10] = -(pbVar2[0x2b] == bVar38);
  auVar74[0xb] = -(pbVar2[0x2f] == bVar38);
  auVar74[0xc] = -(pbVar2[0x33] == bVar38);
  auVar74[0xd] = -(pbVar2[0x37] == bVar38);
  auVar74[0xe] = -(pbVar2[0x3b] == bVar38);
  auVar74[0xf] = -(pbVar2[0x3f] == bVar38);
  auVar75[1] = -(pbVar2[4] == bVar38);
  auVar75[0] = -(*pbVar2 == bVar38);
  auVar75[2] = -(pbVar2[8] == bVar38);
  auVar75[3] = -(pbVar2[0xc] == bVar38);
  auVar75[4] = -(pbVar2[0x10] == bVar38);
  auVar75[5] = -(pbVar2[0x14] == bVar38);
  auVar75[6] = -(pbVar2[0x18] == bVar38);
  auVar75[7] = -(pbVar2[0x1c] == bVar38);
  auVar75[8] = -(pbVar2[0x20] == bVar38);
  auVar75[9] = -(pbVar2[0x24] == bVar38);
/*  no support for modified copies  */
  auVar75[10] = -(pbVar2[0x28] == bVar38);
  auVar75[0xb] = -(pbVar2[0x2c] == bVar38);
  auVar75[0xc] = -(pbVar2[0x30] == bVar38);
  auVar75[0xd] = -(pbVar2[0x34] == bVar38);
  auVar75[0xe] = -(pbVar2[0x38] == bVar38);
  auVar75[0xf] = -(pbVar2[0x3c] == bVar38);
  auVar93 = NEON_sri(auVar93,auVar75,1,1);
  auVar95[1] = -(pbVar2[6] == bVar38);
  auVar95[0] = -(pbVar2[2] == bVar38);
  auVar95[2] = -(pbVar2[10] == bVar38);
  auVar95[3] = -(pbVar2[0xe] == bVar38);
  auVar95[4] = -(pbVar2[0x12] == bVar38);
  auVar95[5] = -(pbVar2[0x16] == bVar38);
  auVar95[6] = -(pbVar2[0x1a] == bVar38);
  auVar95[7] = -(pbVar2[0x1e] == bVar38);
  auVar95[8] = -(pbVar2[0x22] == bVar38);
  auVar95[9] = -(pbVar2[0x26] == bVar38);
  auVar95[10] = -(pbVar2[0x2a] == bVar38);
  auVar95[0xb] = -(pbVar2[0x2e] == bVar38);
  auVar95[0xc] = -(pbVar2[0x32] == bVar38);
  auVar95[0xd] = -(pbVar2[0x36] == bVar38);
  auVar95[0xe] = -(pbVar2[0x3a] == bVar38);
  auVar95[0xf] = -(pbVar2[0x3e] == bVar38);
  auVar75 = NEON_sri(auVar74,auVar95,1,1);
  auVar75 = NEON_sri(auVar75,auVar93,2,1);
  auVar75 = NEON_sri(auVar75,auVar75,4,1);
  uVar31 = CONCAT17((char)(auVar75._14_2_ >> 4),
                    CONCAT16((char)(auVar75._12_2_ >> 4),
                             CONCAT15((char)(auVar75._10_2_ >> 4),
                                      CONCAT14((char)(auVar75._8_2_ >> 4),
                                               CONCAT13((char)(auVar75._6_2_ >> 4),
                                                        CONCAT12((char)(auVar75._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar75._2_2_ >> 4)
                                                                          ,(char)(auVar75._0_2_ >> 4
                                                                                 ))))))));
  lVar39 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  uVar48 = (uint)*pbVar2;
  if (uVar31 != 0) {
    uVar23 = (ulong)*pbVar2 & 0x3f;
    uVar31 = uVar31 >> uVar23 | uVar31 << 0x40 - uVar23;
    do {
      uVar23 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar42 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + uVar48 & 0x3f;
      if (uVar42 != 0) {
        uVar42 = *(uint *)(lVar40 + (ulong)uVar42 * 4);
        if (uVar42 < uVar20) break;
        Hint_Prefetch(lVar54 + (ulong)uVar42,0,0,0);
        adStack_170[lVar39] = uVar42;
        lVar39 = lVar39 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar32 == 0)) break;
    } while( true );
  }
  uVar20 = 0x3f;
  if ((uVar48 & 0x3f) != 1) {
    uVar20 = 0;
  }
  lVar3 = (ulong)uVar20 + (ulong)(uVar48 - 1 & 0x3f);
  *pbVar2 = (byte)lVar3;
  pbVar2[lVar3] = bVar38;
/* wm:if you paid for this, you were scammed */
  iVar5 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar5 + 1;
  *(int *)(lVar40 + lVar3 * 4) = iVar5;
  if (lVar39 == 0) {
    uVar31 = 3;
  }
  else {
    lVar40 = 0;
    unaff_x27 = (ulong)(uVar29 + 3);
    unaff_x26 = lVar54 + 8;
    uVar23 = 3;
    do {
      uVar48 = adStack_170[lVar40];
      pdVar44 = (dword *)(lVar54 + (ulong)uVar48);
      uVar20 = *(uint *)((long)pdVar44 + (uVar23 - 3));
      unaff_x19 = (dword *)(ulong)uVar20;
      uVar42 = *(uint *)((long)param_2 + (uVar23 - 3));
      unaff_x20 = (dword *)(ulong)uVar42;
      if (uVar20 == uVar42) {
        if (param_2 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)param_2;
          if (*(uint **)pdVar44 == unaff_x20) {
            unaff_x19 = (dword *)0x0;
            pdVar44 = (dword *)(unaff_x26 + uVar48);
            pdVar43 = param_2 + 2;
            do {
              unaff_x23 = pdVar43;
              if ((uint *)((long)param_3 + -7) <= pdVar43) goto LAB_002d8bac;
              unaff_x20 = *(dword **)pdVar44;
              unaff_x23 = pdVar43 + 2;
              unaff_x24 = *(dword **)pdVar43;
              unaff_x19 = unaff_x19 + 2;
              pdVar44 = pdVar44 + 2;
              pdVar43 = unaff_x23;
// keep the notice, keep the source honest
            } while (unaff_x20 == unaff_x24);
            uVar31 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (long)unaff_x19 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar31 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar44;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            unaff_x19 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (ulong)unaff_x19 >> 3;
          }
        }
        else {
          unaff_x23 = param_2;
LAB_002d8bac:
          if (unaff_x23 < (uint *)((long)param_3 + -3)) {
            unaff_x19 = unaff_x23 + 1;
            unaff_x20 = pdVar44 + 1;
            if (*pdVar44 == *unaff_x23) {
              unaff_x23 = unaff_x19;
              pdVar44 = unaff_x20;
            }
          }
          if (unaff_x23 < (uint *)((long)param_3 + -1)) {
            unaff_x19 = (dword *)((long)unaff_x23 + 2);
            unaff_x20 = (dword *)((long)pdVar44 + 2);
/*  stripping the watermark breaks the license  */
            if (*(short *)pdVar44 == *(short *)unaff_x23) {
              pdVar44 = unaff_x20;
              unaff_x23 = unaff_x19;
            }
          }
          if (unaff_x23 < param_3) {
            unaff_x19 = (dword *)(ulong)(byte)*pdVar44;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar44 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar31 = (long)unaff_x23 - (long)param_2;
        }
        if (uVar23 < uVar31) {
          *(ulong *)param_4 = (ulong)((uVar29 + 3) - uVar48);
          uVar23 = uVar31;
          if ((uint *)((long)param_2 + uVar31) == param_3) break;
        }
      }
      lVar40 = lVar40 + 1;
      uVar31 = uVar23;
// WM - no support for modified copies
    } while (lVar40 != lVar39);
  }
  bVar38 = (byte)uVar30;
  auVar94[0] = -(pbVar1[1] == bVar38);
  auVar94[1] = -(pbVar1[5] == bVar38);
  auVar94[2] = -(pbVar1[9] == bVar38);
  auVar94[3] = -(pbVar1[0xd] == bVar38);
  auVar94[4] = -(pbVar1[0x11] == bVar38);
  auVar94[5] = -(pbVar1[0x15] == bVar38);
  auVar94[6] = -(pbVar1[0x19] == bVar38);
  auVar94[7] = -(pbVar1[0x1d] == bVar38);
  auVar94[8] = -(pbVar1[0x21] == bVar38);
  auVar94[9] = -(pbVar1[0x25] == bVar38);
  auVar94[10] = -(pbVar1[0x29] == bVar38);
  auVar94[0xb] = -(pbVar1[0x2d] == bVar38);
  auVar94[0xc] = -(pbVar1[0x31] == bVar38);
  auVar94[0xd] = -(pbVar1[0x35] == bVar38);
  auVar94[0xe] = -(pbVar1[0x39] == bVar38);
  auVar94[0xf] = -(pbVar1[0x3d] == bVar38);
  auVar76[0] = -(pbVar1[3] == bVar38);
  auVar76[1] = -(pbVar1[7] == bVar38);
  auVar76[2] = -(pbVar1[0xb] == bVar38);
  auVar76[3] = -(pbVar1[0xf] == bVar38);
  auVar76[4] = -(pbVar1[0x13] == bVar38);
  auVar76[5] = -(pbVar1[0x17] == bVar38);
  auVar76[6] = -(pbVar1[0x1b] == bVar38);
  auVar76[7] = -(pbVar1[0x1f] == bVar38);
  auVar76[8] = -(pbVar1[0x23] == bVar38);
  auVar76[9] = -(pbVar1[0x27] == bVar38);
  auVar76[10] = -(pbVar1[0x2b] == bVar38);
  auVar76[0xb] = -(pbVar1[0x2f] == bVar38);
  auVar76[0xc] = -(pbVar1[0x33] == bVar38);
  auVar76[0xd] = -(pbVar1[0x37] == bVar38);
  auVar76[0xe] = -(pbVar1[0x3b] == bVar38);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  auVar76[0xf] = -(pbVar1[0x3f] == bVar38);
  auVar9[1] = -(pbVar1[4] == bVar38);
  auVar9[0] = -(*pbVar1 == bVar38);
  auVar9[2] = -(pbVar1[8] == bVar38);
  auVar9[3] = -(pbVar1[0xc] == bVar38);
  auVar9[4] = -(pbVar1[0x10] == bVar38);
  auVar9[5] = -(pbVar1[0x14] == bVar38);
  auVar9[6] = -(pbVar1[0x18] == bVar38);
  auVar9[7] = -(pbVar1[0x1c] == bVar38);
  auVar9[8] = -(pbVar1[0x20] == bVar38);
  auVar9[9] = -(pbVar1[0x24] == bVar38);
  auVar9[10] = -(pbVar1[0x28] == bVar38);
  auVar9[0xb] = -(pbVar1[0x2c] == bVar38);
  auVar9[0xc] = -(pbVar1[0x30] == bVar38);
  auVar9[0xd] = -(pbVar1[0x34] == bVar38);
  auVar9[0xe] = -(pbVar1[0x38] == bVar38);
  auVar9[0xf] = -(pbVar1[0x3c] == bVar38);
  auVar95 = NEON_sri(auVar94,auVar9,1,1);
  auVar14[1] = -(pbVar1[6] == bVar38);
  auVar14[0] = -(pbVar1[2] == bVar38);
  auVar14[2] = -(pbVar1[10] == bVar38);
  auVar14[3] = -(pbVar1[0xe] == bVar38);
  auVar14[4] = -(pbVar1[0x12] == bVar38);
  auVar14[5] = -(pbVar1[0x16] == bVar38);
  auVar14[6] = -(pbVar1[0x1a] == bVar38);
  auVar14[7] = -(pbVar1[0x1e] == bVar38);
  auVar14[8] = -(pbVar1[0x22] == bVar38);
  auVar14[9] = -(pbVar1[0x26] == bVar38);
  auVar14[10] = -(pbVar1[0x2a] == bVar38);
  auVar14[0xb] = -(pbVar1[0x2e] == bVar38);
/* wm:unlicensed copy if this notice is missing */
  auVar14[0xc] = -(pbVar1[0x32] == bVar38);
  auVar14[0xd] = -(pbVar1[0x36] == bVar38);
  auVar14[0xe] = -(pbVar1[0x3a] == bVar38);
  auVar14[0xf] = -(pbVar1[0x3e] == bVar38);
  auVar75 = NEON_sri(auVar76,auVar14,1,1);
  auVar75 = NEON_sri(auVar75,auVar95,2,1);
  auVar75 = NEON_sri(auVar75,auVar75,4,1);
  uVar23 = CONCAT17((char)(auVar75._14_2_ >> 4),
                    CONCAT16((char)(auVar75._12_2_ >> 4),
                             CONCAT15((char)(auVar75._10_2_ >> 4),
                                      CONCAT14((char)(auVar75._8_2_ >> 4),
                                               CONCAT13((char)(auVar75._6_2_ >> 4),
                                                        CONCAT12((char)(auVar75._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar75._2_2_ >> 4)
                                                                          ,(char)(auVar75._0_2_ >> 4
                                                                                 ))))))));
  if (uVar23 != 0 && iVar32 != 0) {
    unaff_x27 = 0;
    uVar20 = *(uint *)(puVar34 + 3);
    pdStack_180 = (dword *)*puVar34;
    unaff_x28 = puVar34[1];
    bVar38 = *pbVar1;
    uVar37 = (ulong)bVar38 & 0x3f;
    uVar23 = uVar23 >> uVar37 | uVar23 << 0x40 - uVar37;
    do {
      uVar37 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
      uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) + (uint)bVar38 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar55 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto LAB_002d8d08;
        Hint_Prefetch(unaff_x28 + uVar30,0,0,0);
        adStack_170[unaff_x27] = uVar30;
        unaff_x27 = unaff_x27 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar32 == 0)) goto LAB_002d8d08;
    } while( true );
  }
  goto LAB_002d8d98;
code_r0x002d93e0:
  if (unaff_x27 != 0) {
    pdStack_318 = param_4;
    unaff_x24 = pdVar44 + 1;
    uVar20 = *pdVar44;
    unaff_x26 = (ulong)uVar20;
    iStack_31c = (uVar29 + ((int)pdStack_310 - (int)unaff_x28) + 3) - uVar33;
// origin: github.com/pengussy
    pdVar45 = adStack_300;
    uVar23 = uVar31;
    do {
      pdVar43 = pdVar45 + 1;
      uVar33 = *pdVar45;
      unaff_x20 = (dword *)(ulong)uVar33;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar20) {
        param_4 = pdStack_310;
        lVar40 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar31 = lVar40 + 4;
        unaff_x23 = param_3;
        if (uVar23 < uVar31) {
          *(ulong *)pdStack_318 = (ulong)(iStack_31c - uVar33);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar44 + uVar31) == param_3) break;
        }
      }
/* wm:donate: donate/README.md */
      uVar31 = uVar23;
      unaff_x27 = unaff_x27 - 1;
      pdVar45 = pdVar43;
      uVar23 = uVar31;
    } while (unaff_x27 != 0);
  }
  goto code_r0x002d9470;
code_r0x002d9acc:
  if (unaff_x27 != 0) {
    pdStack_4a8 = param_4;
    unaff_x24 = pdVar45 + 1;
    uVar20 = *pdVar45;
    unaff_x26 = (ulong)uVar20;
    iStack_4ac = (uVar29 + ((int)pdStack_4a0 - (int)unaff_x28) + 3) - uVar33;
    pdVar43 = adStack_490;
    uVar23 = uVar31;
    do {
      pdVar44 = pdVar43 + 1;
      uVar33 = *pdVar43;
      unaff_x20 = (dword *)(ulong)uVar33;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar20) {
        param_4 = pdStack_4a0;
        lVar40 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar31 = lVar40 + 4;
        unaff_x23 = param_3;
        if (uVar23 < uVar31) {
          *(ulong *)pdStack_4a8 = (ulong)(iStack_4ac - uVar33);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar45 + uVar31) == param_3) break;
/* keep the notice, keep the source honest */
        }
      }
      uVar31 = uVar23;
      unaff_x27 = unaff_x27 - 1;
      pdVar43 = pdVar44;
      uVar23 = uVar31;
    } while (unaff_x27 != 0);
  }
  goto code_r0x002d9b5c;
LAB_002da1d8:
  if (unaff_x27 != 0) {
    pdStack_638 = param_4;
    unaff_x24 = pdVar43 + 1;
    uVar20 = *pdVar43;
    unaff_x26 = (ulong)uVar20;
    iStack_63c = (uVar29 + ((int)pdStack_630 - (int)unaff_x28) + 3) - uVar33;
    pdVar45 = adStack_620;
    uVar23 = uVar31;
    do {
      pdVar44 = pdVar45 + 1;
      uVar33 = *pdVar45;
      unaff_x20 = (dword *)(ulong)uVar33;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar20) {
// found on a paste site? it was re-uploaded illegally
        param_4 = pdStack_630;
        lVar40 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar31 = lVar40 + 4;
        unaff_x23 = param_3;
        if (uVar23 < uVar31) {
          *(ulong *)pdStack_638 = (ulong)(iStack_63c - uVar33);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar43 + uVar31) == param_3) break;
        }
      }
      uVar31 = uVar23;
      unaff_x27 = unaff_x27 - 1;
      pdVar45 = pdVar44;
      uVar23 = uVar31;
    } while (unaff_x27 != 0);
  }
  goto LAB_002da268;
code_r0x002da8b0:
  if (unaff_x27 != 0) {
    pdStack_7c8 = param_4;
    unaff_x24 = pdVar45 + 1;
    uVar20 = *pdVar45;
    unaff_x26 = (ulong)uVar20;
    iStack_7cc = (uVar29 + ((int)pdStack_7c0 - (int)unaff_x28) + 3) - uVar33;
    pdVar43 = adStack_7b0;
    uVar23 = uVar31;
    do {
      pdVar44 = pdVar43 + 1;
      uVar33 = *pdVar43;
// WM - keep the notice, keep the source honest
      unaff_x20 = (dword *)(ulong)uVar33;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar20) {
        param_4 = pdStack_7c0;
        lVar40 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar31 = lVar40 + 4;
        unaff_x23 = param_3;
        if (uVar23 < uVar31) {
          *(ulong *)pdStack_7c8 = (ulong)(iStack_7cc - uVar33);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar45 + uVar31) == param_3) break;
        }
      }
      uVar31 = uVar23;
      unaff_x27 = unaff_x27 - 1;
      pdVar43 = pdVar44;
      uVar23 = uVar31;
    } while (unaff_x27 != 0);
  }
  goto code_r0x002da940;
code_r0x002daf9c:
/* wm:origin: github.com/pengussy */
  if (unaff_x27 != 0) {
    pdStack_958 = param_4;
    unaff_x24 = pdVar43 + 1;
    uVar20 = *pdVar43;
    unaff_x26 = (ulong)uVar20;
    iStack_95c = (uVar29 + ((int)pdStack_950 - (int)unaff_x28) + 3) - uVar33;
    pdVar45 = adStack_940;
    uVar23 = uVar31;
    do {
      pdVar44 = pdVar45 + 1;
      uVar33 = *pdVar45;
      unaff_x20 = (dword *)(ulong)uVar33;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar20) {
        param_4 = pdStack_950;
        lVar40 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar31 = lVar40 + 4;
        unaff_x23 = param_3;
        if (uVar23 < uVar31) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          *(ulong *)pdStack_958 = (ulong)(iStack_95c - uVar33);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar43 + uVar31) == param_3) break;
        }
      }
      uVar31 = uVar23;
      unaff_x27 = unaff_x27 - 1;
      pdVar45 = pdVar44;
      uVar23 = uVar31;
    } while (unaff_x27 != 0);
  }
  goto code_r0x002db02c;
LAB_002db6a8:
  if (lVar40 != 0) {
    uVar23 = *puVar19;
    puVar21 = auStack_ad0;
    uVar37 = uVar31;
    do {
      uVar20 = *puVar21;
      puVar56 = (uint *)(lVar39 + (ulong)uVar20);
/*  found on a paste site? it was re-uploaded illegally  */
      if (*puVar56 == (uint)uVar23) {
        pdVar44 = pdVar43;
        lVar54 = func_0x002ad924((uint *)((long)puVar19 + 4),puVar56 + 1);
        uVar31 = lVar54 + 4;
        if (uVar37 < uVar31) {
          *(ulong *)param_4 =
               (ulong)(((uVar30 + ((int)pdVar43 - (int)lVar39) + 3) - iVar5) - uVar20);
          uVar37 = uVar31;
          if ((uint *)((long)puVar19 + uVar31) == param_3) break;
        }
      }
      uVar31 = uVar37;
      lVar40 = lVar40 + -1;
      puVar21 = puVar21 + 1;
      uVar37 = uVar31;
    } while (lVar40 != 0);
  }
  goto LAB_002db738;
/* WM - origin: github.com/pengussy */
LAB_002d8d08:
  if (unaff_x27 != 0) {
    pdStack_188 = param_4;
    unaff_x24 = param_2 + 1;
    uVar20 = *param_2;
    unaff_x26 = (ulong)uVar20;
    iStack_18c = (uVar29 + ((int)pdStack_180 - (int)unaff_x28) + 3) - uVar33;
    pdVar44 = adStack_170;
    uVar23 = uVar31;
    do {
      unaff_x19 = pdVar44 + 1;
      uVar33 = *pdVar44;
      unaff_x20 = (dword *)(ulong)uVar33;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar20) {
        param_4 = pdStack_180;
        lVar40 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1,param_3,
                                 pdStack_180,lVar54 + uStack_178);
        uVar31 = lVar40 + 4;
        unaff_x23 = param_3;
        if (uVar23 < uVar31) {
          *(ulong *)pdStack_188 = (ulong)(iStack_18c - uVar33);
          uVar23 = uVar31;
          if ((uint *)((long)param_2 + uVar31) == param_3) break;
        }
      }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      uVar31 = uVar23;
      unaff_x27 = unaff_x27 - 1;
      pdVar44 = unaff_x19;
      uVar23 = uVar31;
    } while (unaff_x27 != 0);
  }
LAB_002d8d98:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar31;
  }
  auVar75 = ___stack_chk_fail();
  pdVar44 = auVar75._8_8_;
  lVar39 = auVar75._0_8_;
  uStack_1f0 = unaff_x28;
  uStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  lStack_1d8 = lVar54;
  pdStack_1d0 = unaff_x24;
  pdStack_1c8 = unaff_x23;
  uStack_1c0 = uVar31;
  pdStack_1b8 = param_2;
  pdStack_1b0 = unaff_x20;
  pdStack_1a8 = unaff_x19;
  puStack_1a0 = auStack_68 + 0x58;
  puStack_198 = &SUB_002d8f14;
  lStack_200 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar40 = *(long *)(lVar39 + 0x70);
  lVar54 = *(long *)(lVar39 + 0x38);
  iVar5 = *(int *)(lVar39 + 0x34);
/* no support for modified copies */
  lVar55 = *(long *)(lVar39 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar39 + 0x100) & 0x1f);
  uVar33 = *(uint *)(lVar39 + 0x18);
  uStack_308 = (ulong)uVar33;
  uVar31 = (long)pdVar44 - lVar55;
  uVar29 = (uint)uVar31;
  uVar20 = uVar29 - uVar30;
  if (uVar29 - *(uint *)(lVar39 + 0x1c) <= uVar30 || *(int *)(lVar39 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar39 + 0x1c);
  }
  uVar30 = *(uint *)(lVar39 + 0x10c);
  if (3 < uVar30) {
    uVar30 = 4;
  }
  uVar57 = *(ulong *)(lVar39 + 0x60);
  iVar32 = 1 << (ulong)(uVar30 & 0x1f);
  puVar34 = *(undefined8 **)(lVar39 + 0xf8);
  uVar37 = (ulong)(*(long *)pdVar44 * -0x30e4432345000000) >>
           ((ulong)(0x38 - *(int *)((long)puVar34 + 0x34)) & 0x3f);
  uVar23 = uVar37 >> 4 & 0xffffff0;
  pbVar1 = (byte *)(puVar34[7] + uVar23);
  lVar3 = puVar34[0xe] + uVar23 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar39 + 300) == 0) {
    pdStack_318 = param_4;
    pdStack_310 = param_3;
    lVar24 = lVar39 + 0x40;
    uVar30 = *(uint *)(lVar39 + 0x2c);
    uVar23 = (ulong)uVar30;
/* WM - found on a paste site? it was re-uploaded illegally */
    lVar25 = lVar54;
    lVar27 = lVar40;
    if (0x180 < uVar29 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar52 = uVar23 + 0x60;
        do {
          uVar53 = (*(long *)(lVar55 + 8 + uVar23) * -0x30e4432345000000 ^ *(ulong *)(lVar39 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar46 = uVar53 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar40 + uVar46 * 4,0,0,0);
          Hint_Prefetch(lVar54 + uVar46,0,0,0);
          uVar48 = *(uint *)(lVar24 + (uVar23 & 7) * 4);
          *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar53;
          uVar53 = (ulong)(uVar48 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar54 + uVar53);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0xf);
          uVar30 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar30 = 0;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
          }
          unaff_x24 = (dword *)(uVar30 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar48;
          *(int *)(lVar40 + uVar53 * 4 + (long)unaff_x24 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar52 != uVar23);
        lVar27 = *(long *)(lVar39 + 0x70);
        lVar25 = *(long *)(lVar39 + 0x38);
      }
      uVar30 = uVar29 - 0x20;
      uVar23 = (ulong)uVar30;
      iVar50 = (int)(undefined1 *)((long)pdVar44 + 1U) - (int)(undefined1 *)(lVar55 + uVar23);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar49 = 8;
      if (iVar50 + 1U < 8) {
        iVar49 = iVar50 + 1;
      }
      iVar50 = 0;
      if ((undefined1 *)(lVar55 + uVar23) <= (undefined1 *)((long)pdVar44 + 1U)) {
        iVar50 = iVar49;
      }
      unaff_x20 = (dword *)(ulong)(iVar50 + uVar30);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      if (uVar30 < iVar50 + uVar30) {
        iVar49 = *(int *)(lVar39 + 0x34);
        unaff_x20 = *(dword **)(lVar39 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar55 + uVar23) * -0x30e4432345000000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar49) & 0x3f));
          uVar52 = (ulong)unaff_x23 >> 4 & 0xffffff0;
          unaff_x26 = uVar52 * 4;
          Hint_Prefetch(lVar27 + unaff_x26,0,0,0);
          Hint_Prefetch(lVar25 + uVar52,0,0,0);
          unaff_x24 = (dword *)(uVar23 & 7);
          *(int *)(lVar24 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar23 = uVar23 + 1;
          iVar50 = iVar50 + -1;
        } while (iVar50 != 0);
      }
    }
    if (uVar30 < uVar29) {
      lVar28 = *(long *)(lVar39 + 8);
      iVar49 = *(int *)(lVar39 + 0x34);
      puVar21 = (uint *)(ulong)uVar30;
      unaff_x20 = (dword *)(uVar31 & 0xffffffff);
      do {
        uVar23 = (*(long *)(lVar28 + 8 + (long)puVar21) * -0x30e4432345000000 ^
                 *(ulong *)(lVar39 + 0x60)) >> ((ulong)(0x38 - iVar49) & 0x3f);
        uVar52 = uVar23 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar27 + uVar52 * 4,0,0,0);
        Hint_Prefetch(lVar25 + uVar52,0,0,0);
// WM - thanks for reading - discord.gg/sdkhDjTex
        uVar48 = *(uint *)(lVar24 + ((ulong)puVar21 & 7) * 4);
        unaff_x26 = (ulong)uVar48;
        *(int *)(lVar24 + ((ulong)puVar21 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar48 >> 4) & 0xffffff0;
        unaff_x24 = (dword *)(lVar27 + uVar23 * 4);
        unaff_x23 = (dword *)(lVar25 + uVar23);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0xf);
        uVar30 = 0xf;
        if (((byte)*unaff_x23 & 0xf) != 1) {
          uVar30 = 0;
        }
        unaff_x27 = uVar30 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar48;
        unaff_x24[unaff_x27] = (uint)puVar21;
        puVar21 = (uint *)((long)puVar21 + 1);
      } while (puVar21 < unaff_x20);
    }
    *(uint *)(lVar39 + 0x2c) = uVar29;
    uVar23 = (*(long *)(lVar55 + (uVar31 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar57) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar57 = uVar23 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar40 + uVar57 * 4,0,0,0);
    Hint_Prefetch(lVar54 + uVar57,0,0,0);
    uVar30 = *(uint *)(lVar24 + (uVar31 & 7) * 4);
    *(int *)(lVar24 + (uVar31 & 7) * 4) = (int)uVar23;
  }
  else {
    uVar30 = (uint)((*(long *)pdVar44 * -0x30e4432345000000 ^ uVar57) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar39 + 0x2c) = uVar29;
  }
  *(uint *)(lVar39 + 0x68) = *(int *)(lVar39 + 0x68) + uVar30;
  uVar31 = (ulong)(uVar30 >> 4) & 0xffffff0;
  lVar40 = lVar40 + uVar31 * 4;
  pbVar2 = (byte *)(lVar54 + uVar31);
  bVar38 = *pbVar2;
  bVar35 = *pbVar2;
// do not claim this as your own
  bVar41 = (byte)uVar30;
  uVar58 = CONCAT11(-(pbVar2[9] == bVar41),-(pbVar2[8] == bVar41));
  uVar59 = CONCAT13(-(pbVar2[0xb] == bVar41),CONCAT12(-(pbVar2[10] == bVar41),uVar58));
  uVar60 = CONCAT15(-(pbVar2[0xd] == bVar41),CONCAT14(-(pbVar2[0xc] == bVar41),uVar59));
  uVar31 = CONCAT17((char)(CONCAT17(-(pbVar2[0xf] == bVar41),
                                    CONCAT16(-(pbVar2[0xe] == bVar41),uVar60)) >> 0x34),
                    CONCAT16((char)((uint6)uVar60 >> 0x24),
                             CONCAT15((char)((uint)uVar59 >> 0x14),
                                      CONCAT14((char)(uVar58 >> 4),
                                               CONCAT13((char)(CONCAT11(-(pbVar2[7] == bVar41),
                                                                        -(pbVar2[6] == bVar41)) >> 4
                                                              ),CONCAT12((char)(CONCAT11(-(pbVar2[5]
                                                                                          == bVar41)
                                                                                         ,-(pbVar2[4
                                                  ] == bVar41)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(pbVar2[3] == bVar41),
                                                                           -(pbVar2[2] == bVar41))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(pbVar2[1] == bVar41),
                                                                           -(bVar35 == bVar41)) >> 4
                                                                 ))))))));
  uVar23 = (ulong)bVar38 & 0xf;
  pdVar43 = (dword *)(ulong)bVar35;
  uVar31 = (uVar31 >> uVar23 * 4 | uVar31 << uVar23 * -4 + 0x40) & 0x8888888888888888;
  if (uVar31 != 0) {
    lVar54 = 0;
    do {
      uVar23 = (uVar31 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + (bVar38 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar40 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002d91a4;
        Hint_Prefetch(lVar55 + (ulong)uVar30,0,0,0);
        adStack_300[lVar54] = uVar30;
        lVar54 = lVar54 + 1;
/* unlicensed copy if this notice is missing */
        iVar32 = iVar32 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar32 == 0)) goto code_r0x002d91a4;
    } while( true );
  }
  lVar54 = 0;
code_r0x002d91a4:
  uVar20 = 0xf;
  if ((bVar35 & 0xf) != 1) {
    uVar20 = 0;
  }
  lVar24 = (ulong)uVar20 + (ulong)(bVar35 - 1 & 0xf);
  *pbVar2 = (byte)lVar24;
  pbVar2[lVar24] = bVar41;
  iVar5 = *(int *)(lVar39 + 0x2c);
  *(int *)(lVar39 + 0x2c) = iVar5 + 1;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  *(int *)(lVar40 + lVar24 * 4) = iVar5;
  if (lVar54 == 0) {
    uVar31 = 3;
  }
  else {
    lVar40 = 0;
    unaff_x27 = (ulong)(uVar29 + 3);
    unaff_x26 = lVar55 + 8;
    uVar23 = 3;
    do {
      uVar30 = adStack_300[lVar40];
      pdVar45 = (dword *)(lVar55 + (ulong)uVar30);
      uVar20 = *(uint *)((long)pdVar45 + (uVar23 - 3));
      pdVar43 = (dword *)(ulong)uVar20;
      uVar48 = *(uint *)((long)pdVar44 + (uVar23 - 3));
      unaff_x20 = (dword *)(ulong)uVar48;
      if (uVar20 == uVar48) {
        if (pdVar44 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar44;
          if (*(uint **)pdVar45 == unaff_x20) {
            pdVar43 = (dword *)0x0;
// more drops soon - github.com/pengussy
            pdVar45 = (dword *)(unaff_x26 + uVar30);
            pdVar51 = pdVar44 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar51) goto code_r0x002d9294;
              unaff_x20 = *(dword **)pdVar45;
              unaff_x23 = pdVar51 + 2;
              unaff_x24 = *(dword **)pdVar51;
              pdVar43 = pdVar43 + 2;
              pdVar45 = pdVar45 + 2;
              pdVar51 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar31 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (long)pdVar43 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar31 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar45;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
// WM - more drops soon - github.com/pengussy
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            pdVar43 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (ulong)pdVar43 >> 3;
          }
        }
        else {
          pdVar51 = pdVar44;
code_r0x002d9294:
          if (pdVar51 < (uint *)((long)param_3 + -3)) {
            pdVar43 = pdVar51 + 1;
            unaff_x20 = pdVar45 + 1;
            if (*pdVar45 == *pdVar51) {
              pdVar51 = pdVar43;
              pdVar45 = unaff_x20;
            }
          }
          unaff_x23 = pdVar51;
          if (pdVar51 < (uint *)((long)param_3 + -1)) {
            pdVar43 = (dword *)((long)pdVar51 + 2);
            unaff_x20 = (dword *)((long)pdVar45 + 2);
            if (*(short *)pdVar45 == *(short *)pdVar51) {
              pdVar45 = unaff_x20;
              unaff_x23 = pdVar43;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar43 = (dword *)(ulong)(byte)*pdVar45;
/* unlicensed copy if this notice is missing - github.com/pengussy */
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar45 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar31 = (long)unaff_x23 - (long)pdVar44;
        }
        if (uVar23 < uVar31) {
          *(ulong *)param_4 = (ulong)((uVar29 + 3) - uVar30);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar44 + uVar31) == param_3) break;
        }
      }
      lVar40 = lVar40 + 1;
      uVar31 = uVar23;
    } while (lVar40 != lVar54);
  }
  bVar38 = *pbVar1;
  bVar35 = (byte)uVar37;
  uVar58 = CONCAT11(-(pbVar1[1] == bVar35),-(*pbVar1 == bVar35));
  uVar59 = CONCAT13(-(pbVar1[3] == bVar35),CONCAT12(-(pbVar1[2] == bVar35),uVar58));
  uVar60 = CONCAT15(-(pbVar1[5] == bVar35),CONCAT14(-(pbVar1[4] == bVar35),uVar59));
  uVar61 = CONCAT17(-(pbVar1[7] == bVar35),CONCAT16(-(pbVar1[6] == bVar35),uVar60));
  auVar62._0_10_ = CONCAT19(-(pbVar1[9] == bVar35),CONCAT18(-(pbVar1[8] == bVar35),uVar61));
  auVar62[10] = -(pbVar1[10] == bVar35);
  auVar62[0xb] = -(pbVar1[0xb] == bVar35);
  auVar68[0xc] = -(pbVar1[0xc] == bVar35);
  auVar68._0_12_ = auVar62;
  auVar68[0xd] = -(pbVar1[0xd] == bVar35);
  auVar77[0xe] = -(pbVar1[0xe] == bVar35);
  auVar77._0_14_ = auVar68;
  auVar77[0xf] = -(pbVar1[0xf] == bVar35);
  uVar37 = CONCAT17((char)(auVar77._14_2_ >> 4),
                    CONCAT16((char)(auVar68._12_2_ >> 4),
                             CONCAT15((char)(auVar62._10_2_ >> 4),
                                      CONCAT14((char)((unkuint10)auVar62._0_10_ >> 0x44),
// WM - watermarked copy - do not remove
                                               CONCAT13((char)((ulong)uVar61 >> 0x34),
                                                        CONCAT12((char)((uint6)uVar60 >> 0x24),
                                                                 CONCAT11((char)((uint)uVar59 >>
                                                                                0x14),
                                                                          (char)(uVar58 >> 4))))))))
  ;
  uVar23 = (ulong)bVar38 & 0xf;
  uVar23 = (uVar37 >> uVar23 * 4 | uVar37 << uVar23 * -4 + 0x40) & 0x8888888888888888;
  if (uVar23 != 0 && iVar32 != 0) {
    unaff_x27 = 0;
    uVar20 = *(uint *)(puVar34 + 3);
    pdStack_310 = (dword *)*puVar34;
    unaff_x28 = puVar34[1];
    do {
      uVar37 = (uVar23 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) + (bVar38 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar3 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002d93e0;
        Hint_Prefetch(unaff_x28 + uVar30,0,0,0);
        adStack_300[unaff_x27] = uVar30;
        unaff_x27 = unaff_x27 + 1;
        iVar32 = iVar32 + -1;
// WM - do not claim this as your own
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar32 == 0)) goto code_r0x002d93e0;
    } while( true );
  }
code_r0x002d9470:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_200) {
    return uVar31;
  }
  auVar75 = ___stack_chk_fail();
  pdVar45 = auVar75._8_8_;
  lVar39 = auVar75._0_8_;
  uStack_380 = unaff_x28;
  uStack_378 = unaff_x27;
  uStack_370 = unaff_x26;
  lStack_368 = lVar55;
  pdStack_360 = unaff_x24;
  pdStack_358 = unaff_x23;
  uStack_350 = uVar31;
  pdStack_348 = pdVar44;
  pdStack_340 = unaff_x20;
  pdStack_338 = pdVar43;
  ppuStack_330 = &puStack_1a0;
  puStack_328 = &SUB_002d95d8;
  lStack_390 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar40 = *(long *)(lVar39 + 0x70);
  lVar54 = *(long *)(lVar39 + 0x38);
  iVar5 = *(int *)(lVar39 + 0x34);
  lVar55 = *(long *)(lVar39 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar39 + 0x100) & 0x1f);
  uVar33 = *(uint *)(lVar39 + 0x18);
/* WM - donate: donate/README.md */
  uStack_498 = (ulong)uVar33;
  uVar31 = (long)pdVar45 - lVar55;
  uVar29 = (uint)uVar31;
  uVar20 = uVar29 - uVar30;
  if (uVar29 - *(uint *)(lVar39 + 0x1c) <= uVar30 || *(int *)(lVar39 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar39 + 0x1c);
  }
  uVar30 = *(uint *)(lVar39 + 0x10c);
  if (4 < uVar30) {
    uVar30 = 5;
  }
  uVar57 = *(ulong *)(lVar39 + 0x60);
  iVar32 = 1 << (ulong)(uVar30 & 0x1f);
  puVar34 = *(undefined8 **)(lVar39 + 0xf8);
  uVar37 = (ulong)(*(long *)pdVar45 * -0x30e4432345000000) >>
           ((ulong)(0x38 - *(int *)((long)puVar34 + 0x34)) & 0x3f);
  uVar23 = uVar37 >> 3 & 0x1fffffe0;
  pbVar1 = (byte *)(puVar34[7] + uVar23);
  lVar3 = puVar34[0xe] + uVar23 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar39 + 300) == 0) {
    pdStack_4a0 = (dword *)CONCAT44(pdStack_4a0._4_4_,iVar5);
    pdStack_4a8 = param_3;
    lVar24 = lVar39 + 0x40;
    uVar30 = *(uint *)(lVar39 + 0x2c);
    uVar23 = (ulong)uVar30;
/* proprietary - see LICENSE - do not sell */
    lVar25 = lVar54;
    lVar27 = lVar40;
    if (0x180 < uVar29 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar52 = uVar23 + 0x60;
        do {
          uVar53 = (*(long *)(lVar55 + 8 + uVar23) * -0x30e4432345000000 ^ *(ulong *)(lVar39 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar46 = uVar53 >> 3 & 0x1fffffe0;
          lVar25 = lVar40 + uVar46 * 4;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x40,0,0,0);
          Hint_Prefetch(lVar54 + uVar46,0,0,0);
          uVar48 = *(uint *)(lVar24 + (uVar23 & 7) * 4);
          *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar53;
          uVar53 = (ulong)(uVar48 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar54 + uVar53);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar30 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar30 = 0;
          }
          unaff_x24 = (dword *)(uVar30 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar48;
          *(int *)(lVar40 + uVar53 * 4 + (long)unaff_x24 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
/*  thanks for reading - discord.gg/sdkhDjTex  */
        } while (uVar52 != uVar23);
        lVar27 = *(long *)(lVar39 + 0x70);
        lVar25 = *(long *)(lVar39 + 0x38);
      }
      uVar30 = uVar29 - 0x20;
      uVar23 = (ulong)uVar30;
      iVar50 = (int)(undefined1 *)((long)pdVar45 + 1U) - (int)(undefined1 *)(lVar55 + uVar23);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar49 = 8;
      if (iVar50 + 1U < 8) {
        iVar49 = iVar50 + 1;
      }
      iVar50 = 0;
      if ((undefined1 *)(lVar55 + uVar23) <= (undefined1 *)((long)pdVar45 + 1U)) {
        iVar50 = iVar49;
      }
      unaff_x20 = (dword *)(ulong)(iVar50 + uVar30);
      if (uVar30 < iVar50 + uVar30) {
        iVar49 = *(int *)(lVar39 + 0x34);
        unaff_x20 = *(dword **)(lVar39 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar55 + uVar23) * -0x30e4432345000000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar49) & 0x3f));
          uVar52 = (ulong)unaff_x23 >> 3 & 0x1fffffe0;
          unaff_x26 = lVar27 + uVar52 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar25 + uVar52,0,0,0);
// WM - unlicensed copy if this notice is missing
          unaff_x24 = (dword *)(uVar23 & 7);
          *(int *)(lVar24 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar23 = uVar23 + 1;
          iVar50 = iVar50 + -1;
        } while (iVar50 != 0);
      }
    }
    if (uVar30 < uVar29) {
      lVar28 = *(long *)(lVar39 + 8);
      iVar49 = *(int *)(lVar39 + 0x34);
      puVar21 = (uint *)(ulong)uVar30;
      unaff_x20 = (dword *)(uVar31 & 0xffffffff);
      do {
        uVar23 = (*(long *)(lVar28 + 8 + (long)puVar21) * -0x30e4432345000000 ^
                 *(ulong *)(lVar39 + 0x60)) >> ((ulong)(0x38 - iVar49) & 0x3f);
        uVar52 = uVar23 >> 3 & 0x1fffffe0;
        lVar4 = lVar27 + uVar52 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        Hint_Prefetch(lVar25 + uVar52,0,0,0);
        uVar48 = *(uint *)(lVar24 + ((ulong)puVar21 & 7) * 4);
        unaff_x26 = (ulong)uVar48;
        *(int *)(lVar24 + ((ulong)puVar21 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar48 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar27 + uVar23 * 4);
        unaff_x23 = (dword *)(lVar25 + uVar23);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x1f);
        uVar30 = 0x1f;
        if (((byte)*unaff_x23 & 0x1f) != 1) {
          uVar30 = 0;
        }
        unaff_x27 = uVar30 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar48;
        unaff_x24[unaff_x27] = (uint)puVar21;
/* wm:watermarked copy - do not remove */
        puVar21 = (uint *)((long)puVar21 + 1);
      } while (puVar21 < unaff_x20);
    }
    *(uint *)(lVar39 + 0x2c) = uVar29;
    uVar23 = (*(long *)(lVar55 + (uVar31 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar57) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar57 = uVar23 >> 3 & 0x1fffffe0;
    lVar25 = lVar40 + uVar57 * 4;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x40,0,0,0);
    Hint_Prefetch(lVar54 + uVar57,0,0,0);
    uVar30 = *(uint *)(lVar24 + (uVar31 & 7) * 4);
    *(int *)(lVar24 + (uVar31 & 7) * 4) = (int)uVar23;
  }
  else {
    uVar30 = (uint)((*(long *)pdVar45 * -0x30e4432345000000 ^ uVar57) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar39 + 0x2c) = uVar29;
  }
  *(uint *)(lVar39 + 0x68) = *(int *)(lVar39 + 0x68) + uVar30;
  uVar31 = (ulong)(uVar30 >> 3) & 0x1fffffe0;
  lVar40 = lVar40 + uVar31 * 4;
  pbVar2 = (byte *)(lVar54 + uVar31);
  bVar38 = *pbVar2;
  pdVar44 = (dword *)(ulong)bVar38;
  bVar35 = (byte)uVar30;
  uVar87 = CONCAT11(-(bVar35 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar35 == (byte)*(undefined2 *)pbVar2));
/*  do not claim this as your own  */
  uVar88 = CONCAT13(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar87));
  uVar89 = CONCAT15(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar88));
  uVar90 = CONCAT11(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar91 = CONCAT13(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar90));
  uVar92 = CONCAT15(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar91));
  uVar58 = CONCAT11(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar59 = CONCAT13(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar58));
  uVar60 = CONCAT15(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar59));
  uVar61 = CONCAT17(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar60));
  auVar63._0_10_ =
       CONCAT19(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar61));
  auVar63[10] = -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar63[0xb] = -(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
/* WM - if you paid for this, you were scammed */
  auVar69[0xc] = -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar69._0_12_ = auVar63;
  auVar69[0xd] = -(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar78[0xe] = -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar78._0_14_ = auVar69;
  auVar78[0xf] = -(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar31 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar35 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar35 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar92)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar92 >> 0x26),
                                      CONCAT15((char)((uint)uVar91 >> 0x16),
                                               CONCAT14((char)(uVar90 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar35 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar35 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar89)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar89 >> 0x26),
                                                           CONCAT11((char)((uint)uVar88 >> 0x16),
                                                                    (char)(uVar87 >> 6)))))))),
                    CONCAT17((char)(auVar78._14_2_ >> 6),
                             CONCAT16((char)(auVar69._12_2_ >> 6),
                                      CONCAT15((char)(auVar63._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar63._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar61 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar60 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar59 >> 0x16),(char)(uVar58 >> 6)))))))),4,1);
  uVar31 = (uVar31 >> ((ulong)bVar38 & 0x1f) * 2 | uVar31 << ((ulong)bVar38 & 0x1f) * -2 + 0x40) &
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
           0x5555555555555555;
  if (uVar31 != 0) {
    lVar54 = 0;
    do {
      uVar23 = (uVar31 << 1 & 0xcccccccccccccccc) >> 2 | (uVar31 << 1 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + (bVar38 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar40 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002d9884;
        Hint_Prefetch(lVar55 + (ulong)uVar30,0,0,0);
        adStack_490[lVar54] = uVar30;
        lVar54 = lVar54 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar32 == 0)) goto code_r0x002d9884;
    } while( true );
  }
  lVar54 = 0;
code_r0x002d9884:
  uVar20 = 0x1f;
/* watermarked copy - do not remove - github.com/pengussy */
  if ((bVar38 & 0x1f) != 1) {
    uVar20 = 0;
  }
  lVar24 = (ulong)uVar20 + (ulong)(bVar38 - 1 & 0x1f);
  *pbVar2 = (byte)lVar24;
  pbVar2[lVar24] = bVar35;
  iVar5 = *(int *)(lVar39 + 0x2c);
  *(int *)(lVar39 + 0x2c) = iVar5 + 1;
  *(int *)(lVar40 + lVar24 * 4) = iVar5;
  if (lVar54 == 0) {
    uVar31 = 3;
  }
  else {
    lVar40 = 0;
    unaff_x27 = (ulong)(uVar29 + 3);
    unaff_x26 = lVar55 + 8;
    uVar23 = 3;
    do {
      uVar30 = adStack_490[lVar40];
      pdVar43 = (dword *)(lVar55 + (ulong)uVar30);
      uVar20 = *(uint *)((long)pdVar43 + (uVar23 - 3));
      pdVar44 = (dword *)(ulong)uVar20;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar48 = *(uint *)((long)pdVar45 + (uVar23 - 3));
      unaff_x20 = (dword *)(ulong)uVar48;
      if (uVar20 == uVar48) {
        if (pdVar45 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar45;
          if (*(uint **)pdVar43 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar43 = (dword *)(unaff_x26 + uVar30);
            pdVar51 = pdVar45 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar51) goto code_r0x002d9974;
              unaff_x20 = *(dword **)pdVar43;
              unaff_x23 = pdVar51 + 2;
              unaff_x24 = *(dword **)pdVar51;
              pdVar44 = pdVar44 + 2;
              pdVar43 = pdVar43 + 2;
              pdVar51 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar31 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar31 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar43;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (ulong)pdVar44 >> 3;
          }
        }
/* wm:found on a paste site? it was re-uploaded illegally */
        else {
          pdVar51 = pdVar45;
code_r0x002d9974:
          if (pdVar51 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar51 + 1;
            unaff_x20 = pdVar43 + 1;
            if (*pdVar43 == *pdVar51) {
              pdVar51 = pdVar44;
              pdVar43 = unaff_x20;
            }
          }
          unaff_x23 = pdVar51;
          if (pdVar51 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar51 + 2);
            unaff_x20 = (dword *)((long)pdVar43 + 2);
            if (*(short *)pdVar43 == *(short *)pdVar51) {
              pdVar43 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar43;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar43 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
/* WM - no support for modified copies */
            }
          }
          uVar31 = (long)unaff_x23 - (long)pdVar45;
        }
        if (uVar23 < uVar31) {
          *(ulong *)param_4 = (ulong)((uVar29 + 3) - uVar30);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar45 + uVar31) == param_3) break;
        }
      }
      lVar40 = lVar40 + 1;
      uVar31 = uVar23;
    } while (lVar40 != lVar54);
  }
  bVar38 = *pbVar1;
  cVar36 = (char)uVar37;
  uVar87 = CONCAT11(-(cVar36 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
/* WM - stripping the watermark breaks the license */
                    -(cVar36 == (char)*(undefined2 *)pbVar1));
  uVar88 = CONCAT13(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 4)),uVar87));
  uVar89 = CONCAT15(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 8)),uVar88));
  uVar90 = CONCAT11(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar91 = CONCAT13(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar90));
  uVar92 = CONCAT15(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar91));
  uVar58 = CONCAT11(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(cVar36 == (char)*(undefined2 *)(pbVar1 + 2)));
  uVar59 = CONCAT13(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 6)),uVar58));
  uVar60 = CONCAT15(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 10)),uVar59));
  uVar61 = CONCAT17(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar60));
  auVar64._0_10_ =
       CONCAT19(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar61));
  auVar64[10] = -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x16));
/* origin: github.com/pengussy */
  auVar64[0xb] = -(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar70[0xc] = -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar70._0_12_ = auVar64;
  auVar70[0xd] = -(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar79[0xe] = -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar79._0_14_ = auVar70;
  auVar79[0xf] = -(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar37 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar36 ==
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar36 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar92)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar92 >> 0x26),
                                      CONCAT15((char)((uint)uVar91 >> 0x16),
                                               CONCAT14((char)(uVar90 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar36 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(cVar36 ==
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar89)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar89 >> 0x26),
                                                           CONCAT11((char)((uint)uVar88 >> 0x16),
                                                                    (char)(uVar87 >> 6)))))))),
                    CONCAT17((char)(auVar79._14_2_ >> 6),
                             CONCAT16((char)(auVar70._12_2_ >> 6),
                                      CONCAT15((char)(auVar64._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar64._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar61 >> 0x36),
// no support for modified copies
                                                                 CONCAT12((char)((uint6)uVar60 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar59 >> 0x16),(char)(uVar58 >> 6)))))))),4,1);
  uVar23 = (ulong)bVar38 & 0x1f;
  uVar23 = (uVar37 >> uVar23 * 2 | uVar37 << uVar23 * -2 + 0x40) & 0x5555555555555555;
  if (uVar23 != 0 && iVar32 != 0) {
    unaff_x27 = 0;
    uVar20 = *(uint *)(puVar34 + 3);
    pdStack_4a0 = (dword *)*puVar34;
    unaff_x28 = puVar34[1];
    do {
      uVar37 = (uVar23 << 1 & 0xcccccccccccccccc) >> 2 | (uVar23 << 1 & 0x3333333333333333) << 2;
      uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) + (bVar38 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar3 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002d9acc;
        Hint_Prefetch(unaff_x28 + uVar30,0,0,0);
        adStack_490[unaff_x27] = uVar30;
        unaff_x27 = unaff_x27 + 1;
        iVar32 = iVar32 + -1;
/* watermarked copy - do not remove */
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar32 == 0)) goto code_r0x002d9acc;
    } while( true );
  }
code_r0x002d9b5c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_390) {
    return uVar31;
  }
  auVar75 = ___stack_chk_fail();
  pdVar43 = auVar75._8_8_;
  lVar39 = auVar75._0_8_;
  uStack_510 = unaff_x28;
  uStack_508 = unaff_x27;
  uStack_500 = unaff_x26;
  lStack_4f8 = lVar55;
  pdStack_4f0 = unaff_x24;
  pdStack_4e8 = unaff_x23;
  uStack_4e0 = uVar31;
  pdStack_4d8 = pdVar45;
  pdStack_4d0 = unaff_x20;
  pdStack_4c8 = pdVar44;
  pppuStack_4c0 = &ppuStack_330;
  pcStack_4b8 = FUN_002d9cd0;
  lStack_520 = *(long *)PTR____stack_chk_guard_01f20200;
/* WM - proprietary - see LICENSE - do not sell */
  lVar40 = *(long *)(lVar39 + 0x70);
  lVar54 = *(long *)(lVar39 + 0x38);
  iVar5 = *(int *)(lVar39 + 0x34);
  lVar55 = *(long *)(lVar39 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar39 + 0x100) & 0x1f);
  uVar33 = *(uint *)(lVar39 + 0x18);
  uStack_628 = (ulong)uVar33;
  uVar31 = (long)pdVar43 - lVar55;
  uVar29 = (uint)uVar31;
  uVar20 = uVar29 - uVar30;
  if (uVar29 - *(uint *)(lVar39 + 0x1c) <= uVar30 || *(int *)(lVar39 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar39 + 0x1c);
  }
  uVar30 = *(uint *)(lVar39 + 0x10c);
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar57 = *(ulong *)(lVar39 + 0x60);
  iVar32 = 1 << (ulong)(uVar30 & 0x1f);
  puVar34 = *(undefined8 **)(lVar39 + 0xf8);
  uVar37 = (ulong)(*(long *)pdVar43 * -0x30e4432345000000) >>
           ((ulong)(0x38 - *(int *)((long)puVar34 + 0x34)) & 0x3f);
  uVar23 = uVar37 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar34[7] + uVar23);
  lVar3 = puVar34[0xe] + uVar23 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(lVar39 + 300) == 0) {
    pdStack_638 = param_3;
/*  donate: donate/README.md  */
    lVar24 = lVar39 + 0x40;
    uVar30 = *(uint *)(lVar39 + 0x2c);
    uVar23 = (ulong)uVar30;
    pdStack_630 = (dword *)CONCAT44(pdStack_630._4_4_,iVar5);
    lVar25 = lVar54;
    lVar27 = lVar40;
    if (0x180 < uVar29 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar52 = uVar23 + 0x60;
        do {
          uVar53 = (*(long *)(lVar55 + 8 + uVar23) * -0x30e4432345000000 ^ *(ulong *)(lVar39 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar46 = uVar53 >> 2 & 0x3fffffc0;
          lVar25 = lVar40 + uVar46 * 4;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x40,0,0,0);
          lVar25 = lVar54 + uVar46;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x20,0,0,0);
          uVar48 = *(uint *)(lVar24 + (uVar23 & 7) * 4);
          *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar53;
          uVar53 = (ulong)(uVar48 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar54 + uVar53);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x3f);
          uVar30 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar30 = 0;
          }
          unaff_x24 = (dword *)(uVar30 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar48;
          *(int *)(lVar40 + uVar53 * 4 + (long)unaff_x24 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar52 != uVar23);
        lVar27 = *(long *)(lVar39 + 0x70);
        lVar25 = *(long *)(lVar39 + 0x38);
      }
      uVar30 = uVar29 - 0x20;
      uVar23 = (ulong)uVar30;
      iVar49 = (int)(undefined1 *)((long)pdVar43 + 1U) - (int)(undefined1 *)(lVar55 + uVar23);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      uVar48 = 8;
      if (iVar49 + 1U < 8) {
        uVar48 = iVar49 + 1;
      }
      uVar42 = 0;
      if ((undefined1 *)(lVar55 + uVar23) <= (undefined1 *)((long)pdVar43 + 1U)) {
        uVar42 = uVar48;
/* more drops soon - github.com/pengussy */
      }
      pdVar44 = (dword *)(ulong)uVar42;
      unaff_x20 = (dword *)(ulong)(uVar42 + uVar30);
      if (uVar30 < uVar42 + uVar30) {
        iVar49 = *(int *)(lVar39 + 0x34);
        unaff_x20 = *(dword **)(lVar39 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar55 + uVar23) * -0x30e4432345000000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar49) & 0x3f));
          uVar52 = (ulong)unaff_x23 >> 2 & 0x3fffffc0;
          unaff_x26 = lVar27 + uVar52 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          lVar28 = lVar25 + uVar52;
          Hint_Prefetch(lVar28,0,0,0);
          Hint_Prefetch(lVar28 + 0x20,0,0,0);
          unaff_x24 = (dword *)(uVar23 & 7);
          *(int *)(lVar24 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar23 = uVar23 + 1;
          uVar48 = (int)pdVar44 - 1;
          pdVar44 = (dword *)(ulong)uVar48;
        } while (uVar48 != 0);
/*  keep the notice, keep the source honest  */
        pdVar44 = (dword *)0x0;
      }
    }
    if (uVar30 < uVar29) {
      lVar28 = *(long *)(lVar39 + 8);
      pdVar44 = (dword *)(ulong)(0x38 - *(int *)(lVar39 + 0x34));
      puVar21 = (uint *)(ulong)uVar30;
      unaff_x20 = (dword *)(uVar31 & 0xffffffff);
      do {
        uVar23 = (*(long *)(lVar28 + 8 + (long)puVar21) * -0x30e4432345000000 ^
                 *(ulong *)(lVar39 + 0x60)) >> ((ulong)pdVar44 & 0x3f);
        uVar52 = uVar23 >> 2 & 0x3fffffc0;
        lVar4 = lVar27 + uVar52 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar25 + uVar52;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar48 = *(uint *)(lVar24 + ((ulong)puVar21 & 7) * 4);
        unaff_x26 = (ulong)uVar48;
        *(int *)(lVar24 + ((ulong)puVar21 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar48 >> 2) & 0x3fffffc0;
        unaff_x24 = (dword *)(lVar27 + uVar23 * 4);
        unaff_x23 = (dword *)(lVar25 + uVar23);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x3f);
        uVar30 = 0x3f;
        if (((byte)*unaff_x23 & 0x3f) != 1) {
          uVar30 = 0;
        }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        unaff_x27 = uVar30 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar48;
        unaff_x24[unaff_x27] = (uint)puVar21;
        puVar21 = (uint *)((long)puVar21 + 1);
      } while (puVar21 < unaff_x20);
    }
    *(uint *)(lVar39 + 0x2c) = uVar29;
    uVar23 = (*(long *)(lVar55 + (uVar31 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar57) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar57 = uVar23 >> 2 & 0x3fffffc0;
    lVar25 = lVar40 + uVar57 * 4;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x40,0,0,0);
    lVar25 = lVar54 + uVar57;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x20,0,0,0);
    uVar30 = *(uint *)(lVar24 + (uVar31 & 7) * 4);
    *(int *)(lVar24 + (uVar31 & 7) * 4) = (int)uVar23;
/* do not claim this as your own - github.com/pengussy */
  }
  else {
    uVar30 = (uint)((*(long *)pdVar43 * -0x30e4432345000000 ^ uVar57) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar39 + 0x2c) = uVar29;
  }
  *(uint *)(lVar39 + 0x68) = *(int *)(lVar39 + 0x68) + uVar30;
  uVar31 = (ulong)(uVar30 >> 2) & 0x3fffffc0;
  lVar40 = lVar40 + uVar31 * 4;
  pbVar2 = (byte *)(lVar54 + uVar31);
  bVar38 = (byte)uVar30;
  auVar96[0] = -(pbVar2[1] == bVar38);
  auVar96[1] = -(pbVar2[5] == bVar38);
  auVar96[2] = -(pbVar2[9] == bVar38);
  auVar96[3] = -(pbVar2[0xd] == bVar38);
  auVar96[4] = -(pbVar2[0x11] == bVar38);
  auVar96[5] = -(pbVar2[0x15] == bVar38);
  auVar96[6] = -(pbVar2[0x19] == bVar38);
  auVar96[7] = -(pbVar2[0x1d] == bVar38);
  auVar96[8] = -(pbVar2[0x21] == bVar38);
  auVar96[9] = -(pbVar2[0x25] == bVar38);
  auVar96[10] = -(pbVar2[0x29] == bVar38);
  auVar96[0xb] = -(pbVar2[0x2d] == bVar38);
  auVar96[0xc] = -(pbVar2[0x31] == bVar38);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar96[0xd] = -(pbVar2[0x35] == bVar38);
  auVar96[0xe] = -(pbVar2[0x39] == bVar38);
  auVar96[0xf] = -(pbVar2[0x3d] == bVar38);
  auVar80[0] = -(pbVar2[3] == bVar38);
  auVar80[1] = -(pbVar2[7] == bVar38);
  auVar80[2] = -(pbVar2[0xb] == bVar38);
  auVar80[3] = -(pbVar2[0xf] == bVar38);
  auVar80[4] = -(pbVar2[0x13] == bVar38);
  auVar80[5] = -(pbVar2[0x17] == bVar38);
  auVar80[6] = -(pbVar2[0x1b] == bVar38);
  auVar80[7] = -(pbVar2[0x1f] == bVar38);
  auVar80[8] = -(pbVar2[0x23] == bVar38);
  auVar80[9] = -(pbVar2[0x27] == bVar38);
  auVar80[10] = -(pbVar2[0x2b] == bVar38);
  auVar80[0xb] = -(pbVar2[0x2f] == bVar38);
  auVar80[0xc] = -(pbVar2[0x33] == bVar38);
  auVar80[0xd] = -(pbVar2[0x37] == bVar38);
  auVar80[0xe] = -(pbVar2[0x3b] == bVar38);
  auVar80[0xf] = -(pbVar2[0x3f] == bVar38);
  auVar10[1] = -(pbVar2[4] == bVar38);
  auVar10[0] = -(*pbVar2 == bVar38);
  auVar10[2] = -(pbVar2[8] == bVar38);
  auVar10[3] = -(pbVar2[0xc] == bVar38);
  auVar10[4] = -(pbVar2[0x10] == bVar38);
  auVar10[5] = -(pbVar2[0x14] == bVar38);
  auVar10[6] = -(pbVar2[0x18] == bVar38);
  auVar10[7] = -(pbVar2[0x1c] == bVar38);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  auVar10[8] = -(pbVar2[0x20] == bVar38);
  auVar10[9] = -(pbVar2[0x24] == bVar38);
  auVar10[10] = -(pbVar2[0x28] == bVar38);
  auVar10[0xb] = -(pbVar2[0x2c] == bVar38);
  auVar10[0xc] = -(pbVar2[0x30] == bVar38);
  auVar10[0xd] = -(pbVar2[0x34] == bVar38);
  auVar10[0xe] = -(pbVar2[0x38] == bVar38);
  auVar10[0xf] = -(pbVar2[0x3c] == bVar38);
  auVar95 = NEON_sri(auVar96,auVar10,1,1);
  auVar15[1] = -(pbVar2[6] == bVar38);
  auVar15[0] = -(pbVar2[2] == bVar38);
  auVar15[2] = -(pbVar2[10] == bVar38);
  auVar15[3] = -(pbVar2[0xe] == bVar38);
  auVar15[4] = -(pbVar2[0x12] == bVar38);
  auVar15[5] = -(pbVar2[0x16] == bVar38);
  auVar15[6] = -(pbVar2[0x1a] == bVar38);
  auVar15[7] = -(pbVar2[0x1e] == bVar38);
  auVar15[8] = -(pbVar2[0x22] == bVar38);
  auVar15[9] = -(pbVar2[0x26] == bVar38);
  auVar15[10] = -(pbVar2[0x2a] == bVar38);
  auVar15[0xb] = -(pbVar2[0x2e] == bVar38);
  auVar15[0xc] = -(pbVar2[0x32] == bVar38);
  auVar15[0xd] = -(pbVar2[0x36] == bVar38);
  auVar15[0xe] = -(pbVar2[0x3a] == bVar38);
  auVar15[0xf] = -(pbVar2[0x3e] == bVar38);
  auVar75 = NEON_sri(auVar80,auVar15,1,1);
  auVar75 = NEON_sri(auVar75,auVar95,2,1);
  auVar75 = NEON_sri(auVar75,auVar75,4,1);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  uVar31 = CONCAT17((char)(auVar75._14_2_ >> 4),
                    CONCAT16((char)(auVar75._12_2_ >> 4),
                             CONCAT15((char)(auVar75._10_2_ >> 4),
                                      CONCAT14((char)(auVar75._8_2_ >> 4),
                                               CONCAT13((char)(auVar75._6_2_ >> 4),
                                                        CONCAT12((char)(auVar75._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar75._2_2_ >> 4)
                                                                          ,(char)(auVar75._0_2_ >> 4
                                                                                 ))))))));
  lVar54 = 0;
  uVar30 = (uint)*pbVar2;
  if (uVar31 != 0) {
    uVar23 = (ulong)*pbVar2 & 0x3f;
    uVar31 = uVar31 >> uVar23 | uVar31 << 0x40 - uVar23;
    do {
      uVar23 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar48 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + uVar30 & 0x3f;
      if (uVar48 != 0) {
        uVar48 = *(uint *)(lVar40 + (ulong)uVar48 * 4);
        if (uVar48 < uVar20) break;
        Hint_Prefetch(lVar55 + (ulong)uVar48,0,0,0);
        adStack_620[lVar54] = uVar48;
        lVar54 = lVar54 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar32 == 0)) break;
    } while( true );
  }
  uVar20 = 0x3f;
  if ((uVar30 & 0x3f) != 1) {
    uVar20 = 0;
  }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  lVar24 = (ulong)uVar20 + (ulong)(uVar30 - 1 & 0x3f);
  *pbVar2 = (byte)lVar24;
  pbVar2[lVar24] = bVar38;
  iVar5 = *(int *)(lVar39 + 0x2c);
  *(int *)(lVar39 + 0x2c) = iVar5 + 1;
  *(int *)(lVar40 + lVar24 * 4) = iVar5;
  if (lVar54 == 0) {
    uVar31 = 3;
  }
  else {
    lVar40 = 0;
    unaff_x27 = (ulong)(uVar29 + 3);
    unaff_x26 = lVar55 + 8;
    uVar23 = 3;
    do {
      uVar30 = adStack_620[lVar40];
      pdVar45 = (dword *)(lVar55 + (ulong)uVar30);
      uVar20 = *(uint *)((long)pdVar45 + (uVar23 - 3));
      pdVar44 = (dword *)(ulong)uVar20;
      uVar48 = *(uint *)((long)pdVar43 + (uVar23 - 3));
      unaff_x20 = (dword *)(ulong)uVar48;
      if (uVar20 == uVar48) {
        if (pdVar43 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar43;
          if (*(uint **)pdVar45 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar45 = (dword *)(unaff_x26 + uVar30);
            pdVar51 = pdVar43 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar51) goto LAB_002da07c;
/* reversing this took months of machine time */
              unaff_x20 = *(dword **)pdVar45;
              unaff_x23 = pdVar51 + 2;
              unaff_x24 = *(dword **)pdVar51;
              pdVar44 = pdVar44 + 2;
              pdVar45 = pdVar45 + 2;
              pdVar51 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar31 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
/* if you paid for this, you were scammed - github.com/pengussy */
          else {
            uVar31 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar45;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar51 = pdVar43;
LAB_002da07c:
          if (pdVar51 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar51 + 1;
            unaff_x20 = pdVar45 + 1;
            if (*pdVar45 == *pdVar51) {
              pdVar51 = pdVar44;
              pdVar45 = unaff_x20;
            }
          }
          unaff_x23 = pdVar51;
          if (pdVar51 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar51 + 2);
            unaff_x20 = (dword *)((long)pdVar45 + 2);
            if (*(short *)pdVar45 == *(short *)pdVar51) {
              pdVar45 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar45;
// WM - reversing this took months of machine time
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar45 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar31 = (long)unaff_x23 - (long)pdVar43;
        }
        if (uVar23 < uVar31) {
          *(ulong *)param_4 = (ulong)((uVar29 + 3) - uVar30);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar43 + uVar31) == param_3) break;
        }
      }
      lVar40 = lVar40 + 1;
      uVar31 = uVar23;
    } while (lVar40 != lVar54);
  }
  bVar38 = (byte)uVar37;
  auVar97[0] = -(pbVar1[1] == bVar38);
  auVar97[1] = -(pbVar1[5] == bVar38);
  auVar97[2] = -(pbVar1[9] == bVar38);
  auVar97[3] = -(pbVar1[0xd] == bVar38);
  auVar97[4] = -(pbVar1[0x11] == bVar38);
  auVar97[5] = -(pbVar1[0x15] == bVar38);
  auVar97[6] = -(pbVar1[0x19] == bVar38);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  auVar97[7] = -(pbVar1[0x1d] == bVar38);
  auVar97[8] = -(pbVar1[0x21] == bVar38);
  auVar97[9] = -(pbVar1[0x25] == bVar38);
  auVar97[10] = -(pbVar1[0x29] == bVar38);
  auVar97[0xb] = -(pbVar1[0x2d] == bVar38);
  auVar97[0xc] = -(pbVar1[0x31] == bVar38);
  auVar97[0xd] = -(pbVar1[0x35] == bVar38);
  auVar97[0xe] = -(pbVar1[0x39] == bVar38);
  auVar97[0xf] = -(pbVar1[0x3d] == bVar38);
  auVar81[0] = -(pbVar1[3] == bVar38);
  auVar81[1] = -(pbVar1[7] == bVar38);
  auVar81[2] = -(pbVar1[0xb] == bVar38);
  auVar81[3] = -(pbVar1[0xf] == bVar38);
  auVar81[4] = -(pbVar1[0x13] == bVar38);
  auVar81[5] = -(pbVar1[0x17] == bVar38);
  auVar81[6] = -(pbVar1[0x1b] == bVar38);
  auVar81[7] = -(pbVar1[0x1f] == bVar38);
  auVar81[8] = -(pbVar1[0x23] == bVar38);
  auVar81[9] = -(pbVar1[0x27] == bVar38);
  auVar81[10] = -(pbVar1[0x2b] == bVar38);
  auVar81[0xb] = -(pbVar1[0x2f] == bVar38);
/* WM - chat: discord.gg/sdkhDjTex */
  auVar81[0xc] = -(pbVar1[0x33] == bVar38);
  auVar81[0xd] = -(pbVar1[0x37] == bVar38);
  auVar81[0xe] = -(pbVar1[0x3b] == bVar38);
  auVar81[0xf] = -(pbVar1[0x3f] == bVar38);
  auVar11[1] = -(pbVar1[4] == bVar38);
  auVar11[0] = -(*pbVar1 == bVar38);
  auVar11[2] = -(pbVar1[8] == bVar38);
  auVar11[3] = -(pbVar1[0xc] == bVar38);
  auVar11[4] = -(pbVar1[0x10] == bVar38);
  auVar11[5] = -(pbVar1[0x14] == bVar38);
  auVar11[6] = -(pbVar1[0x18] == bVar38);
  auVar11[7] = -(pbVar1[0x1c] == bVar38);
  auVar11[8] = -(pbVar1[0x20] == bVar38);
  auVar11[9] = -(pbVar1[0x24] == bVar38);
  auVar11[10] = -(pbVar1[0x28] == bVar38);
  auVar11[0xb] = -(pbVar1[0x2c] == bVar38);
  auVar11[0xc] = -(pbVar1[0x30] == bVar38);
  auVar11[0xd] = -(pbVar1[0x34] == bVar38);
  auVar11[0xe] = -(pbVar1[0x38] == bVar38);
  auVar11[0xf] = -(pbVar1[0x3c] == bVar38);
  auVar95 = NEON_sri(auVar97,auVar11,1,1);
  auVar16[1] = -(pbVar1[6] == bVar38);
  auVar16[0] = -(pbVar1[2] == bVar38);
  auVar16[2] = -(pbVar1[10] == bVar38);
  auVar16[3] = -(pbVar1[0xe] == bVar38);
  auVar16[4] = -(pbVar1[0x12] == bVar38);
  auVar16[5] = -(pbVar1[0x16] == bVar38);
  auVar16[6] = -(pbVar1[0x1a] == bVar38);
  auVar16[7] = -(pbVar1[0x1e] == bVar38);
  auVar16[8] = -(pbVar1[0x22] == bVar38);
  auVar16[9] = -(pbVar1[0x26] == bVar38);
  auVar16[10] = -(pbVar1[0x2a] == bVar38);
  auVar16[0xb] = -(pbVar1[0x2e] == bVar38);
  auVar16[0xc] = -(pbVar1[0x32] == bVar38);
  auVar16[0xd] = -(pbVar1[0x36] == bVar38);
  auVar16[0xe] = -(pbVar1[0x3a] == bVar38);
  auVar16[0xf] = -(pbVar1[0x3e] == bVar38);
/* donate: donate/README.md */
  auVar75 = NEON_sri(auVar81,auVar16,1,1);
  auVar75 = NEON_sri(auVar75,auVar95,2,1);
  auVar75 = NEON_sri(auVar75,auVar75,4,1);
  uVar23 = CONCAT17((char)(auVar75._14_2_ >> 4),
                    CONCAT16((char)(auVar75._12_2_ >> 4),
                             CONCAT15((char)(auVar75._10_2_ >> 4),
                                      CONCAT14((char)(auVar75._8_2_ >> 4),
                                               CONCAT13((char)(auVar75._6_2_ >> 4),
                                                        CONCAT12((char)(auVar75._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar75._2_2_ >> 4)
                                                                          ,(char)(auVar75._0_2_ >> 4
                                                                                 ))))))));
  if (uVar23 != 0 && iVar32 != 0) {
    unaff_x27 = 0;
    uVar20 = *(uint *)(puVar34 + 3);
    pdStack_630 = (dword *)*puVar34;
    unaff_x28 = puVar34[1];
    bVar38 = *pbVar1;
    uVar37 = (ulong)bVar38 & 0x3f;
    uVar23 = uVar23 >> uVar37 | uVar23 << 0x40 - uVar37;
    do {
      uVar37 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
      uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
/*  unlicensed copy if this notice is missing  */
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) + (uint)bVar38 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar3 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto LAB_002da1d8;
        Hint_Prefetch(unaff_x28 + uVar30,0,0,0);
        adStack_620[unaff_x27] = uVar30;
        unaff_x27 = unaff_x27 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar32 == 0)) goto LAB_002da1d8;
    } while( true );
  }
LAB_002da268:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_520) {
    return uVar31;
  }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar75 = ___stack_chk_fail();
  pdVar45 = auVar75._8_8_;
  lVar39 = auVar75._0_8_;
  uStack_6a0 = unaff_x28;
  uStack_698 = unaff_x27;
  uStack_690 = unaff_x26;
  lStack_688 = lVar55;
  pdStack_680 = unaff_x24;
  pdStack_678 = unaff_x23;
  uStack_670 = uVar31;
  pdStack_668 = pdVar43;
  pdStack_660 = unaff_x20;
  pdStack_658 = pdVar44;
  ppppuStack_650 = &pppuStack_4c0;
  puStack_648 = &SUB_002da3e4;
  lStack_6b0 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar40 = *(long *)(lVar39 + 0x70);
  lVar54 = *(long *)(lVar39 + 0x38);
/* wm:reversing this took months of machine time */
  iVar5 = *(int *)(lVar39 + 0x34);
  lVar55 = *(long *)(lVar39 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar39 + 0x100) & 0x1f);
  uVar33 = *(uint *)(lVar39 + 0x18);
  uStack_7b8 = (ulong)uVar33;
  uVar31 = (long)pdVar45 - lVar55;
  uVar29 = (uint)uVar31;
  uVar20 = uVar29 - uVar30;
  if (uVar29 - *(uint *)(lVar39 + 0x1c) <= uVar30 || *(int *)(lVar39 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar39 + 0x1c);
  }
  uVar30 = *(uint *)(lVar39 + 0x10c);
  if (3 < uVar30) {
    uVar30 = 4;
  }
  uVar57 = *(ulong *)(lVar39 + 0x60);
  iVar32 = 1 << (ulong)(uVar30 & 0x1f);
  puVar34 = *(undefined8 **)(lVar39 + 0xf8);
  uVar37 = (ulong)(*(long *)pdVar45 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar34 + 0x34)) & 0x3f);
  uVar23 = uVar37 >> 4 & 0xffffff0;
  pbVar1 = (byte *)(puVar34[7] + uVar23);
  lVar3 = puVar34[0xe] + uVar23 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar39 + 300) == 0) {
    pdStack_7c8 = param_4;
    pdStack_7c0 = param_3;
    lVar24 = lVar39 + 0x40;
    uVar30 = *(uint *)(lVar39 + 0x2c);
    uVar23 = (ulong)uVar30;
    lVar25 = lVar54;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    lVar27 = lVar40;
    if (0x180 < uVar29 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar52 = uVar23 + 0x60;
        do {
          uVar53 = (*(long *)(lVar55 + 8 + uVar23) * -0x30e4432340650000 ^ *(ulong *)(lVar39 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar46 = uVar53 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar40 + uVar46 * 4,0,0,0);
          Hint_Prefetch(lVar54 + uVar46,0,0,0);
          uVar48 = *(uint *)(lVar24 + (uVar23 & 7) * 4);
          *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar53;
          uVar53 = (ulong)(uVar48 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar54 + uVar53);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0xf);
          uVar30 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar30 = 0;
          }
          unaff_x24 = (dword *)(uVar30 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar48;
          *(int *)(lVar40 + uVar53 * 4 + (long)unaff_x24 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar52 != uVar23);
        lVar27 = *(long *)(lVar39 + 0x70);
        lVar25 = *(long *)(lVar39 + 0x38);
      }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar30 = uVar29 - 0x20;
      uVar23 = (ulong)uVar30;
      iVar50 = (int)(undefined1 *)((long)pdVar45 + 1U) - (int)(undefined1 *)(lVar55 + uVar23);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar49 = 8;
      if (iVar50 + 1U < 8) {
        iVar49 = iVar50 + 1;
      }
      iVar50 = 0;
      if ((undefined1 *)(lVar55 + uVar23) <= (undefined1 *)((long)pdVar45 + 1U)) {
        iVar50 = iVar49;
      }
      unaff_x20 = (dword *)(ulong)(iVar50 + uVar30);
      if (uVar30 < iVar50 + uVar30) {
        iVar49 = *(int *)(lVar39 + 0x34);
        unaff_x20 = *(dword **)(lVar39 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar55 + uVar23) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar49) & 0x3f));
          uVar52 = (ulong)unaff_x23 >> 4 & 0xffffff0;
/* stripping the watermark breaks the license - github.com/pengussy */
          unaff_x26 = uVar52 * 4;
          Hint_Prefetch(lVar27 + unaff_x26,0,0,0);
          Hint_Prefetch(lVar25 + uVar52,0,0,0);
          unaff_x24 = (dword *)(uVar23 & 7);
          *(int *)(lVar24 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar23 = uVar23 + 1;
          iVar50 = iVar50 + -1;
        } while (iVar50 != 0);
      }
    }
    if (uVar30 < uVar29) {
      lVar28 = *(long *)(lVar39 + 8);
      iVar49 = *(int *)(lVar39 + 0x34);
      puVar21 = (uint *)(ulong)uVar30;
      unaff_x20 = (dword *)(uVar31 & 0xffffffff);
      do {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        uVar23 = (*(long *)(lVar28 + 8 + (long)puVar21) * -0x30e4432340650000 ^
                 *(ulong *)(lVar39 + 0x60)) >> ((ulong)(0x38 - iVar49) & 0x3f);
        uVar52 = uVar23 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar27 + uVar52 * 4,0,0,0);
        Hint_Prefetch(lVar25 + uVar52,0,0,0);
        uVar48 = *(uint *)(lVar24 + ((ulong)puVar21 & 7) * 4);
        unaff_x26 = (ulong)uVar48;
        *(int *)(lVar24 + ((ulong)puVar21 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar48 >> 4) & 0xffffff0;
        unaff_x24 = (dword *)(lVar27 + uVar23 * 4);
        unaff_x23 = (dword *)(lVar25 + uVar23);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0xf);
        uVar30 = 0xf;
        if (((byte)*unaff_x23 & 0xf) != 1) {
          uVar30 = 0;
        }
        unaff_x27 = uVar30 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar48;
        unaff_x24[unaff_x27] = (uint)puVar21;
        puVar21 = (uint *)((long)puVar21 + 1);
      } while (puVar21 < unaff_x20);
/* no support for modified copies - github.com/pengussy */
    }
    *(uint *)(lVar39 + 0x2c) = uVar29;
    uVar23 = (*(long *)(lVar55 + (uVar31 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar57) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar57 = uVar23 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar40 + uVar57 * 4,0,0,0);
    Hint_Prefetch(lVar54 + uVar57,0,0,0);
    uVar30 = *(uint *)(lVar24 + (uVar31 & 7) * 4);
    *(int *)(lVar24 + (uVar31 & 7) * 4) = (int)uVar23;
  }
  else {
    uVar30 = (uint)((*(long *)pdVar45 * -0x30e4432340650000 ^ uVar57) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar39 + 0x2c) = uVar29;
  }
  *(uint *)(lVar39 + 0x68) = *(int *)(lVar39 + 0x68) + uVar30;
  uVar31 = (ulong)(uVar30 >> 4) & 0xffffff0;
// stripping the watermark breaks the license
  lVar40 = lVar40 + uVar31 * 4;
  pbVar2 = (byte *)(lVar54 + uVar31);
  bVar38 = *pbVar2;
  bVar35 = *pbVar2;
  bVar41 = (byte)uVar30;
  uVar58 = CONCAT11(-(pbVar2[9] == bVar41),-(pbVar2[8] == bVar41));
  uVar59 = CONCAT13(-(pbVar2[0xb] == bVar41),CONCAT12(-(pbVar2[10] == bVar41),uVar58));
  uVar60 = CONCAT15(-(pbVar2[0xd] == bVar41),CONCAT14(-(pbVar2[0xc] == bVar41),uVar59));
  uVar31 = CONCAT17((char)(CONCAT17(-(pbVar2[0xf] == bVar41),
                                    CONCAT16(-(pbVar2[0xe] == bVar41),uVar60)) >> 0x34),
                    CONCAT16((char)((uint6)uVar60 >> 0x24),
                             CONCAT15((char)((uint)uVar59 >> 0x14),
                                      CONCAT14((char)(uVar58 >> 4),
                                               CONCAT13((char)(CONCAT11(-(pbVar2[7] == bVar41),
                                                                        -(pbVar2[6] == bVar41)) >> 4
                                                              ),CONCAT12((char)(CONCAT11(-(pbVar2[5]
                                                                                          == bVar41)
                                                                                         ,-(pbVar2[4
                                                  ] == bVar41)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(pbVar2[3] == bVar41),
/*  proprietary - see LICENSE - do not sell  */
                                                                           -(pbVar2[2] == bVar41))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(pbVar2[1] == bVar41),
                                                                           -(bVar35 == bVar41)) >> 4
                                                                 ))))))));
  uVar23 = (ulong)bVar38 & 0xf;
  pdVar44 = (dword *)(ulong)bVar35;
  uVar31 = (uVar31 >> uVar23 * 4 | uVar31 << uVar23 * -4 + 0x40) & 0x8888888888888888;
  if (uVar31 != 0) {
    lVar54 = 0;
    do {
      uVar23 = (uVar31 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + (bVar38 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar40 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002da674;
        Hint_Prefetch(lVar55 + (ulong)uVar30,0,0,0);
        adStack_7b0[lVar54] = uVar30;
        lVar54 = lVar54 + 1;
// unlicensed copy if this notice is missing
        iVar32 = iVar32 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar32 == 0)) goto code_r0x002da674;
    } while( true );
  }
  lVar54 = 0;
code_r0x002da674:
  uVar20 = 0xf;
  if ((bVar35 & 0xf) != 1) {
    uVar20 = 0;
  }
  lVar24 = (ulong)uVar20 + (ulong)(bVar35 - 1 & 0xf);
  *pbVar2 = (byte)lVar24;
  pbVar2[lVar24] = bVar41;
  iVar5 = *(int *)(lVar39 + 0x2c);
  *(int *)(lVar39 + 0x2c) = iVar5 + 1;
  *(int *)(lVar40 + lVar24 * 4) = iVar5;
/*  watermarked copy - do not remove  */
  if (lVar54 == 0) {
    uVar31 = 3;
  }
  else {
    lVar40 = 0;
    unaff_x27 = (ulong)(uVar29 + 3);
    unaff_x26 = lVar55 + 8;
    uVar23 = 3;
    do {
      uVar30 = adStack_7b0[lVar40];
      pdVar43 = (dword *)(lVar55 + (ulong)uVar30);
      uVar20 = *(uint *)((long)pdVar43 + (uVar23 - 3));
      pdVar44 = (dword *)(ulong)uVar20;
      uVar48 = *(uint *)((long)pdVar45 + (uVar23 - 3));
      unaff_x20 = (dword *)(ulong)uVar48;
      if (uVar20 == uVar48) {
        if (pdVar45 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar45;
          if (*(uint **)pdVar43 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar43 = (dword *)(unaff_x26 + uVar30);
            pdVar51 = pdVar45 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar51) goto code_r0x002da764;
              unaff_x20 = *(dword **)pdVar43;
              unaff_x23 = pdVar51 + 2;
              unaff_x24 = *(dword **)pdVar51;
              pdVar44 = pdVar44 + 2;
              pdVar43 = pdVar43 + 2;
              pdVar51 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
// reversing this took months of machine time
            uVar31 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar31 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar43;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
/* keep the notice, keep the source honest - github.com/pengussy */
            pdVar44 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar51 = pdVar45;
code_r0x002da764:
          if (pdVar51 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar51 + 1;
            unaff_x20 = pdVar43 + 1;
            if (*pdVar43 == *pdVar51) {
              pdVar51 = pdVar44;
              pdVar43 = unaff_x20;
            }
          }
          unaff_x23 = pdVar51;
// WM - origin: github.com/pengussy
          if (pdVar51 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar51 + 2);
            unaff_x20 = (dword *)((long)pdVar43 + 2);
            if (*(short *)pdVar43 == *(short *)pdVar51) {
              pdVar43 = unaff_x20;
              unaff_x23 = pdVar44;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar44 = (dword *)(ulong)(byte)*pdVar43;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar43 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar31 = (long)unaff_x23 - (long)pdVar45;
        }
        if (uVar23 < uVar31) {
          *(ulong *)param_4 = (ulong)((uVar29 + 3) - uVar30);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar45 + uVar31) == param_3) break;
        }
      }
/*  more drops soon - github.com/pengussy  */
      lVar40 = lVar40 + 1;
      uVar31 = uVar23;
    } while (lVar40 != lVar54);
  }
  bVar38 = *pbVar1;
  bVar35 = (byte)uVar37;
  uVar58 = CONCAT11(-(pbVar1[1] == bVar35),-(*pbVar1 == bVar35));
  uVar59 = CONCAT13(-(pbVar1[3] == bVar35),CONCAT12(-(pbVar1[2] == bVar35),uVar58));
  uVar60 = CONCAT15(-(pbVar1[5] == bVar35),CONCAT14(-(pbVar1[4] == bVar35),uVar59));
  uVar61 = CONCAT17(-(pbVar1[7] == bVar35),CONCAT16(-(pbVar1[6] == bVar35),uVar60));
  auVar65._0_10_ = CONCAT19(-(pbVar1[9] == bVar35),CONCAT18(-(pbVar1[8] == bVar35),uVar61));
  auVar65[10] = -(pbVar1[10] == bVar35);
  auVar65[0xb] = -(pbVar1[0xb] == bVar35);
  auVar71[0xc] = -(pbVar1[0xc] == bVar35);
  auVar71._0_12_ = auVar65;
  auVar71[0xd] = -(pbVar1[0xd] == bVar35);
  auVar82[0xe] = -(pbVar1[0xe] == bVar35);
  auVar82._0_14_ = auVar71;
  auVar82[0xf] = -(pbVar1[0xf] == bVar35);
  uVar37 = CONCAT17((char)(auVar82._14_2_ >> 4),
                    CONCAT16((char)(auVar71._12_2_ >> 4),
                             CONCAT15((char)(auVar65._10_2_ >> 4),
                                      CONCAT14((char)((unkuint10)auVar65._0_10_ >> 0x44),
                                               CONCAT13((char)((ulong)uVar61 >> 0x34),
                                                        CONCAT12((char)((uint6)uVar60 >> 0x24),
                                                                 CONCAT11((char)((uint)uVar59 >>
                                                                                0x14),
                                                                          (char)(uVar58 >> 4))))))))
  ;
  uVar23 = (ulong)bVar38 & 0xf;
  uVar23 = (uVar37 >> uVar23 * 4 | uVar37 << uVar23 * -4 + 0x40) & 0x8888888888888888;
  if (uVar23 != 0 && iVar32 != 0) {
    unaff_x27 = 0;
    uVar20 = *(uint *)(puVar34 + 3);
    pdStack_7c0 = (dword *)*puVar34;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    unaff_x28 = puVar34[1];
    do {
      uVar37 = (uVar23 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) + (bVar38 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar3 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002da8b0;
        Hint_Prefetch(unaff_x28 + uVar30,0,0,0);
        adStack_7b0[unaff_x27] = uVar30;
        unaff_x27 = unaff_x27 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar32 == 0)) goto code_r0x002da8b0;
/* reversing this took months of machine time - github.com/pengussy */
    } while( true );
  }
code_r0x002da940:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_6b0) {
    return uVar31;
  }
  auVar75 = ___stack_chk_fail();
  pdVar43 = auVar75._8_8_;
  lVar39 = auVar75._0_8_;
  uStack_830 = unaff_x28;
  uStack_828 = unaff_x27;
  uStack_820 = unaff_x26;
  lStack_818 = lVar55;
  pdStack_810 = unaff_x24;
  pdStack_808 = unaff_x23;
  uStack_800 = uVar31;
  pdStack_7f8 = pdVar45;
  pdStack_7f0 = unaff_x20;
  pdStack_7e8 = pdVar44;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  pppppuStack_7e0 = &ppppuStack_650;
  puStack_7d8 = &SUB_002daaa8;
  lStack_840 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar40 = *(long *)(lVar39 + 0x70);
  lVar54 = *(long *)(lVar39 + 0x38);
  iVar5 = *(int *)(lVar39 + 0x34);
  lVar55 = *(long *)(lVar39 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar39 + 0x100) & 0x1f);
  uVar33 = *(uint *)(lVar39 + 0x18);
  uStack_948 = (ulong)uVar33;
  uVar31 = (long)pdVar43 - lVar55;
  uVar29 = (uint)uVar31;
  uVar20 = uVar29 - uVar30;
  if (uVar29 - *(uint *)(lVar39 + 0x1c) <= uVar30 || *(int *)(lVar39 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar39 + 0x1c);
  }
  uVar30 = *(uint *)(lVar39 + 0x10c);
  if (4 < uVar30) {
    uVar30 = 5;
  }
  uVar57 = *(ulong *)(lVar39 + 0x60);
  iVar32 = 1 << (ulong)(uVar30 & 0x1f);
  puVar34 = *(undefined8 **)(lVar39 + 0xf8);
  uVar37 = (ulong)(*(long *)pdVar43 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar34 + 0x34)) & 0x3f);
  uVar23 = uVar37 >> 3 & 0x1fffffe0;
/* wm:keep the notice, keep the source honest */
  pbVar1 = (byte *)(puVar34[7] + uVar23);
  lVar3 = puVar34[0xe] + uVar23 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar39 + 300) == 0) {
    pdStack_950 = (dword *)CONCAT44(pdStack_950._4_4_,iVar5);
    pdStack_958 = param_3;
    lVar24 = lVar39 + 0x40;
    uVar30 = *(uint *)(lVar39 + 0x2c);
    uVar23 = (ulong)uVar30;
    lVar25 = lVar54;
    lVar27 = lVar40;
    if (0x180 < uVar29 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar52 = uVar23 + 0x60;
        do {
          uVar53 = (*(long *)(lVar55 + 8 + uVar23) * -0x30e4432340650000 ^ *(ulong *)(lVar39 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar46 = uVar53 >> 3 & 0x1fffffe0;
          lVar25 = lVar40 + uVar46 * 4;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x40,0,0,0);
          Hint_Prefetch(lVar54 + uVar46,0,0,0);
          uVar48 = *(uint *)(lVar24 + (uVar23 & 7) * 4);
          *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar53;
          uVar53 = (ulong)(uVar48 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar54 + uVar53);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
/* chat: discord.gg/sdkhDjTex */
          uVar30 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar30 = 0;
          }
          unaff_x24 = (dword *)(uVar30 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar48;
          *(int *)(lVar40 + uVar53 * 4 + (long)unaff_x24 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar52 != uVar23);
        lVar27 = *(long *)(lVar39 + 0x70);
        lVar25 = *(long *)(lVar39 + 0x38);
      }
      uVar30 = uVar29 - 0x20;
      uVar23 = (ulong)uVar30;
      iVar50 = (int)(undefined1 *)((long)pdVar43 + 1U) - (int)(undefined1 *)(lVar55 + uVar23);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar49 = 8;
      if (iVar50 + 1U < 8) {
        iVar49 = iVar50 + 1;
      }
      iVar50 = 0;
      if ((undefined1 *)(lVar55 + uVar23) <= (undefined1 *)((long)pdVar43 + 1U)) {
        iVar50 = iVar49;
      }
      unaff_x20 = (dword *)(ulong)(iVar50 + uVar30);
      if (uVar30 < iVar50 + uVar30) {
        iVar49 = *(int *)(lVar39 + 0x34);
        unaff_x20 = *(dword **)(lVar39 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar55 + uVar23) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar49) & 0x3f));
          uVar52 = (ulong)unaff_x23 >> 3 & 0x1fffffe0;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          unaff_x26 = lVar27 + uVar52 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar25 + uVar52,0,0,0);
          unaff_x24 = (dword *)(uVar23 & 7);
          *(int *)(lVar24 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar23 = uVar23 + 1;
          iVar50 = iVar50 + -1;
        } while (iVar50 != 0);
      }
    }
    if (uVar30 < uVar29) {
      lVar28 = *(long *)(lVar39 + 8);
      iVar49 = *(int *)(lVar39 + 0x34);
      puVar21 = (uint *)(ulong)uVar30;
      unaff_x20 = (dword *)(uVar31 & 0xffffffff);
      do {
        uVar23 = (*(long *)(lVar28 + 8 + (long)puVar21) * -0x30e4432340650000 ^
                 *(ulong *)(lVar39 + 0x60)) >> ((ulong)(0x38 - iVar49) & 0x3f);
        uVar52 = uVar23 >> 3 & 0x1fffffe0;
        lVar4 = lVar27 + uVar52 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        Hint_Prefetch(lVar25 + uVar52,0,0,0);
        uVar48 = *(uint *)(lVar24 + ((ulong)puVar21 & 7) * 4);
        unaff_x26 = (ulong)uVar48;
        *(int *)(lVar24 + ((ulong)puVar21 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar48 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar27 + uVar23 * 4);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        unaff_x23 = (dword *)(lVar25 + uVar23);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x1f);
        uVar30 = 0x1f;
        if (((byte)*unaff_x23 & 0x1f) != 1) {
          uVar30 = 0;
        }
        unaff_x27 = uVar30 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar48;
        unaff_x24[unaff_x27] = (uint)puVar21;
        puVar21 = (uint *)((long)puVar21 + 1);
      } while (puVar21 < unaff_x20);
    }
    *(uint *)(lVar39 + 0x2c) = uVar29;
    uVar23 = (*(long *)(lVar55 + (uVar31 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar57) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar57 = uVar23 >> 3 & 0x1fffffe0;
    lVar25 = lVar40 + uVar57 * 4;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x40,0,0,0);
    Hint_Prefetch(lVar54 + uVar57,0,0,0);
    uVar30 = *(uint *)(lVar24 + (uVar31 & 7) * 4);
    *(int *)(lVar24 + (uVar31 & 7) * 4) = (int)uVar23;
/* wm:no support for modified copies */
  }
  else {
    uVar30 = (uint)((*(long *)pdVar43 * -0x30e4432340650000 ^ uVar57) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar39 + 0x2c) = uVar29;
  }
  *(uint *)(lVar39 + 0x68) = *(int *)(lVar39 + 0x68) + uVar30;
  uVar31 = (ulong)(uVar30 >> 3) & 0x1fffffe0;
  lVar40 = lVar40 + uVar31 * 4;
  pbVar2 = (byte *)(lVar54 + uVar31);
  bVar38 = *pbVar2;
  pdVar44 = (dword *)(ulong)bVar38;
  bVar35 = (byte)uVar30;
  uVar87 = CONCAT11(-(bVar35 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar35 == (byte)*(undefined2 *)pbVar2));
  uVar88 = CONCAT13(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar87));
  uVar89 = CONCAT15(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar88));
  uVar90 = CONCAT11(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar91 = CONCAT13(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar90));
  uVar92 = CONCAT15(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar91));
  uVar58 = CONCAT11(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar59 = CONCAT13(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar58));
  uVar60 = CONCAT15(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar59));
  uVar61 = CONCAT17(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
                    CONCAT16(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar60));
  auVar66._0_10_ =
       CONCAT19(-(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar61));
  auVar66[10] = -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar66[0xb] = -(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar72[0xc] = -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar72._0_12_ = auVar66;
  auVar72[0xd] = -(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar83[0xe] = -(bVar35 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar83._0_14_ = auVar72;
  auVar83[0xf] = -(bVar35 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar31 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar35 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar35 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar92)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar92 >> 0x26),
                                      CONCAT15((char)((uint)uVar91 >> 0x16),
                                               CONCAT14((char)(uVar90 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar35 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar35 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar89)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar89 >> 0x26),
                                                           CONCAT11((char)((uint)uVar88 >> 0x16),
                                                                    (char)(uVar87 >> 6)))))))),
                    CONCAT17((char)(auVar83._14_2_ >> 6),
                             CONCAT16((char)(auVar72._12_2_ >> 6),
/*  chat: discord.gg/sdkhDjTex  */
                                      CONCAT15((char)(auVar66._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar66._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar61 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar60 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar59 >> 0x16),(char)(uVar58 >> 6)))))))),4,1);
  uVar31 = (uVar31 >> ((ulong)bVar38 & 0x1f) * 2 | uVar31 << ((ulong)bVar38 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar31 != 0) {
    lVar54 = 0;
    do {
      uVar23 = (uVar31 << 1 & 0xcccccccccccccccc) >> 2 | (uVar31 << 1 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + (bVar38 & 0x7f) * 2 >> 1 & 0x1f;
/* wm:do not claim this as your own */
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar40 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002dad54;
        Hint_Prefetch(lVar55 + (ulong)uVar30,0,0,0);
        adStack_940[lVar54] = uVar30;
        lVar54 = lVar54 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar32 == 0)) goto code_r0x002dad54;
    } while( true );
  }
  lVar54 = 0;
code_r0x002dad54:
  uVar20 = 0x1f;
  if ((bVar38 & 0x1f) != 1) {
    uVar20 = 0;
  }
  lVar24 = (ulong)uVar20 + (ulong)(bVar38 - 1 & 0x1f);
  *pbVar2 = (byte)lVar24;
  pbVar2[lVar24] = bVar35;
  iVar5 = *(int *)(lVar39 + 0x2c);
  *(int *)(lVar39 + 0x2c) = iVar5 + 1;
  *(int *)(lVar40 + lVar24 * 4) = iVar5;
  if (lVar54 == 0) {
    uVar31 = 3;
  }
  else {
    lVar40 = 0;
    unaff_x27 = (ulong)(uVar29 + 3);
    unaff_x26 = lVar55 + 8;
    uVar23 = 3;
    do {
      uVar30 = adStack_940[lVar40];
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      pdVar45 = (dword *)(lVar55 + (ulong)uVar30);
      uVar20 = *(uint *)((long)pdVar45 + (uVar23 - 3));
      pdVar44 = (dword *)(ulong)uVar20;
      uVar48 = *(uint *)((long)pdVar43 + (uVar23 - 3));
      unaff_x20 = (dword *)(ulong)uVar48;
      if (uVar20 == uVar48) {
        if (pdVar43 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar43;
          if (*(uint **)pdVar45 == unaff_x20) {
            pdVar44 = (dword *)0x0;
            pdVar45 = (dword *)(unaff_x26 + uVar30);
            pdVar51 = pdVar43 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar51) goto code_r0x002dae44;
              unaff_x20 = *(dword **)pdVar45;
              unaff_x23 = pdVar51 + 2;
              unaff_x24 = *(dword **)pdVar51;
              pdVar44 = pdVar44 + 2;
              pdVar45 = pdVar45 + 2;
              pdVar51 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar31 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (long)pdVar44 + ((ulong)unaff_x20 >> 3);
// if you paid for this, you were scammed
          }
          else {
            uVar31 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar45;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            pdVar44 = (dword *)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20);
            uVar31 = (ulong)pdVar44 >> 3;
          }
        }
        else {
          pdVar51 = pdVar43;
code_r0x002dae44:
          if (pdVar51 < (uint *)((long)param_3 + -3)) {
            pdVar44 = pdVar51 + 1;
            unaff_x20 = pdVar45 + 1;
            if (*pdVar45 == *pdVar51) {
              pdVar51 = pdVar44;
              pdVar45 = unaff_x20;
            }
/*  if you paid for this, you were scammed  */
          }
          unaff_x23 = pdVar51;
          if (pdVar51 < (uint *)((long)param_3 + -1)) {
            pdVar44 = (dword *)((long)pdVar51 + 2);
            unaff_x20 = (dword *)((long)pdVar45 + 2);
            if (*(short *)pdVar45 == *(short *)pdVar51) {
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
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          }
          uVar31 = (long)unaff_x23 - (long)pdVar43;
        }
        if (uVar23 < uVar31) {
          *(ulong *)param_4 = (ulong)((uVar29 + 3) - uVar30);
          uVar23 = uVar31;
          if ((uint *)((long)pdVar43 + uVar31) == param_3) break;
        }
      }
      lVar40 = lVar40 + 1;
      uVar31 = uVar23;
    } while (lVar40 != lVar54);
  }
  bVar38 = *pbVar1;
  cVar36 = (char)uVar37;
  uVar87 = CONCAT11(-(cVar36 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(cVar36 == (char)*(undefined2 *)pbVar1));
  uVar88 = CONCAT13(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 4)),uVar87));
  uVar89 = CONCAT15(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 8)),uVar88));
  uVar90 = CONCAT11(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar91 = CONCAT13(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar90));
  uVar92 = CONCAT15(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar91));
  uVar58 = CONCAT11(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(cVar36 == (char)*(undefined2 *)(pbVar1 + 2)));
/* thanks for reading - discord.gg/sdkhDjTex */
  uVar59 = CONCAT13(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 6)),uVar58));
  uVar60 = CONCAT15(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 10)),uVar59));
  uVar61 = CONCAT17(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar60));
  auVar67._0_10_ =
       CONCAT19(-(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar61));
  auVar67[10] = -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x16));
  auVar67[0xb] = -(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar73[0xc] = -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar73._0_12_ = auVar67;
  auVar73[0xd] = -(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar84[0xe] = -(cVar36 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar84._0_14_ = auVar73;
  auVar84[0xf] = -(cVar36 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  uVar37 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar36 ==
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar36 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar92)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar92 >> 0x26),
                                      CONCAT15((char)((uint)uVar91 >> 0x16),
                                               CONCAT14((char)(uVar90 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar36 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(cVar36 ==
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar89)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar89 >> 0x26),
                                                           CONCAT11((char)((uint)uVar88 >> 0x16),
                                                                    (char)(uVar87 >> 6)))))))),
                    CONCAT17((char)(auVar84._14_2_ >> 6),
                             CONCAT16((char)(auVar73._12_2_ >> 6),
                                      CONCAT15((char)(auVar67._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar67._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar61 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar60 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar59 >> 0x16),(char)(uVar58 >> 6)))))))),4,1);
  uVar23 = (ulong)bVar38 & 0x1f;
  uVar23 = (uVar37 >> uVar23 * 2 | uVar37 << uVar23 * -2 + 0x40) & 0x5555555555555555;
  if (uVar23 != 0 && iVar32 != 0) {
    unaff_x27 = 0;
    uVar20 = *(uint *)(puVar34 + 3);
    pdStack_950 = (dword *)*puVar34;
    unaff_x28 = puVar34[1];
    do {
// watermarked copy - do not remove
      uVar37 = (uVar23 << 1 & 0xcccccccccccccccc) >> 2 | (uVar23 << 1 & 0x3333333333333333) << 2;
      uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) + (bVar38 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar3 + (ulong)uVar30 * 4);
        if (uVar30 < uVar20) goto code_r0x002daf9c;
        Hint_Prefetch(unaff_x28 + uVar30,0,0,0);
        adStack_940[unaff_x27] = uVar30;
        unaff_x27 = unaff_x27 + 1;
        iVar32 = iVar32 + -1;
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar32 == 0)) goto code_r0x002daf9c;
    } while( true );
  }
code_r0x002db02c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_840) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    return uVar31;
  }
  auVar75 = ___stack_chk_fail();
  puVar19 = auVar75._8_8_;
  lVar39 = auVar75._0_8_;
  uStack_9c0 = unaff_x28;
  uStack_9b8 = unaff_x27;
  uStack_9b0 = unaff_x26;
  lStack_9a8 = lVar55;
  pdStack_9a0 = unaff_x24;
  pdStack_998 = unaff_x23;
  uStack_990 = uVar31;
  pdStack_988 = pdVar43;
  pdStack_980 = unaff_x20;
  pdStack_978 = pdVar44;
  ppppppuStack_970 = &pppppuStack_7e0;
  pcStack_968 = FUN_002db1a0;
  lStack_9d0 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar40 = *(long *)(lVar39 + 0x70);
  lVar54 = *(long *)(lVar39 + 0x38);
  iVar32 = *(int *)(lVar39 + 0x34);
  lVar55 = *(long *)(lVar39 + 8);
  uVar33 = 1 << (ulong)(*(uint *)(lVar39 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar39 + 0x18);
  uVar31 = (long)puVar19 - lVar55;
  uVar30 = (uint)uVar31;
  uVar20 = uVar30 - uVar33;
  if (uVar30 - *(uint *)(lVar39 + 0x1c) <= uVar33 || *(int *)(lVar39 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar39 + 0x1c);
  }
  uVar33 = *(uint *)(lVar39 + 0x10c);
  if (5 < uVar33) {
    uVar33 = 6;
  }
  uVar57 = *(ulong *)(lVar39 + 0x60);
/*  origin: github.com/pengussy  */
  iVar49 = 1 << (ulong)(uVar33 & 0x1f);
  puVar34 = *(undefined8 **)(lVar39 + 0xf8);
  uVar37 = *puVar19 * -0x30e4432340650000 >> ((ulong)(0x38 - *(int *)((long)puVar34 + 0x34)) & 0x3f)
  ;
  uVar23 = uVar37 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar34[7] + uVar23);
  lVar3 = puVar34[0xe] + uVar23 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(lVar39 + 300) == 0) {
    lVar24 = lVar39 + 0x40;
    uVar33 = *(uint *)(lVar39 + 0x2c);
    uVar23 = (ulong)uVar33;
    lVar25 = lVar54;
    lVar27 = lVar40;
    if (0x180 < uVar30 - uVar33) {
      if (uVar33 < 0xffffffa0) {
        uVar52 = uVar23 + 0x60;
        do {
          uVar53 = (*(long *)(lVar55 + 8 + uVar23) * -0x30e4432340650000 ^ *(ulong *)(lVar39 + 0x60)
                   ) >> ((ulong)(0x38 - iVar32) & 0x3f);
          uVar46 = uVar53 >> 2 & 0x3fffffc0;
          lVar25 = lVar40 + uVar46 * 4;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x40,0,0,0);
          lVar25 = lVar54 + uVar46;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x20,0,0,0);
          uVar29 = *(uint *)(lVar24 + (uVar23 & 7) * 4);
          *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar53;
          uVar53 = (ulong)(uVar29 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar54 + uVar53);
          uVar33 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
// donate: donate/README.md
            uVar33 = 0;
          }
          lVar25 = (ulong)uVar33 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar25;
          pbVar2[lVar25] = (byte)uVar29;
          *(int *)(lVar40 + uVar53 * 4 + lVar25 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar52 != uVar23);
        lVar27 = *(long *)(lVar39 + 0x70);
        lVar25 = *(long *)(lVar39 + 0x38);
      }
      uVar33 = uVar30 - 0x20;
      uVar23 = (ulong)uVar33;
      iVar7 = (int)((long)puVar19 + 1U) - (int)(lVar55 + uVar23);
      iVar50 = 8;
      if (iVar7 + 1U < 8) {
        iVar50 = iVar7 + 1;
      }
      iVar7 = 0;
// WM - donate: donate/README.md
      if (lVar55 + uVar23 <= (long)puVar19 + 1U) {
        iVar7 = iVar50;
      }
      if (uVar33 < iVar7 + uVar33) {
        iVar50 = *(int *)(lVar39 + 0x34);
        uVar52 = *(ulong *)(lVar39 + 0x60);
        do {
          uVar53 = (*(long *)(lVar55 + uVar23) * -0x30e4432340650000 ^ uVar52) >>
                   ((ulong)(0x38 - iVar50) & 0x3f);
          uVar46 = uVar53 >> 2 & 0x3fffffc0;
          lVar28 = lVar27 + uVar46 * 4;
          Hint_Prefetch(lVar28,0,0,0);
          Hint_Prefetch(lVar28 + 0x40,0,0,0);
          lVar28 = lVar25 + uVar46;
          Hint_Prefetch(lVar28,0,0,0);
          Hint_Prefetch(lVar28 + 0x20,0,0,0);
          *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar53;
          uVar23 = uVar23 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if (uVar33 < uVar30) {
      lVar28 = *(long *)(lVar39 + 8);
      iVar50 = *(int *)(lVar39 + 0x34);
      uVar23 = (ulong)uVar33;
      do {
        uVar52 = (*(long *)(lVar28 + 8 + uVar23) * -0x30e4432340650000 ^ *(ulong *)(lVar39 + 0x60))
                 >> ((ulong)(0x38 - iVar50) & 0x3f);
        uVar53 = uVar52 >> 2 & 0x3fffffc0;
/* do not claim this as your own */
        lVar4 = lVar27 + uVar53 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar25 + uVar53;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar29 = *(uint *)(lVar24 + (uVar23 & 7) * 4);
        *(int *)(lVar24 + (uVar23 & 7) * 4) = (int)uVar52;
        uVar52 = (ulong)(uVar29 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar25 + uVar52);
        uVar33 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar33 = 0;
        }
        lVar4 = (ulong)uVar33 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar4;
        pbVar2[lVar4] = (byte)uVar29;
        *(int *)(lVar27 + uVar52 * 4 + lVar4 * 4) = (int)uVar23;
        uVar23 = uVar23 + 1;
      } while (uVar23 < (uVar31 & 0xffffffff));
    }
    *(uint *)(lVar39 + 0x2c) = uVar30;
    uVar23 = (*(long *)(lVar55 + (uVar31 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar57) >>
/* WM - do not claim this as your own */
             ((ulong)(0x38 - iVar32) & 0x3f);
    uVar57 = uVar23 >> 2 & 0x3fffffc0;
    lVar25 = lVar40 + uVar57 * 4;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x40,0,0,0);
    lVar25 = lVar54 + uVar57;
    Hint_Prefetch(lVar25,0,0,0);
    Hint_Prefetch(lVar25 + 0x20,0,0,0);
    uVar33 = *(uint *)(lVar24 + (uVar31 & 7) * 4);
    *(int *)(lVar24 + (uVar31 & 7) * 4) = (int)uVar23;
  }
  else {
    uVar33 = (uint)((*puVar19 * -0x30e4432340650000 ^ uVar57) >> ((ulong)(0x38 - iVar32) & 0x3f));
    *(uint *)(lVar39 + 0x2c) = uVar30;
  }
  *(uint *)(lVar39 + 0x68) = *(int *)(lVar39 + 0x68) + uVar33;
  uVar31 = (ulong)(uVar33 >> 2) & 0x3fffffc0;
  lVar40 = lVar40 + uVar31 * 4;
  pbVar2 = (byte *)(lVar54 + uVar31);
  bVar38 = (byte)uVar33;
  auVar98[0] = -(pbVar2[1] == bVar38);
  auVar98[1] = -(pbVar2[5] == bVar38);
  auVar98[2] = -(pbVar2[9] == bVar38);
  auVar98[3] = -(pbVar2[0xd] == bVar38);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar98[4] = -(pbVar2[0x11] == bVar38);
  auVar98[5] = -(pbVar2[0x15] == bVar38);
  auVar98[6] = -(pbVar2[0x19] == bVar38);
  auVar98[7] = -(pbVar2[0x1d] == bVar38);
  auVar98[8] = -(pbVar2[0x21] == bVar38);
  auVar98[9] = -(pbVar2[0x25] == bVar38);
  auVar98[10] = -(pbVar2[0x29] == bVar38);
  auVar98[0xb] = -(pbVar2[0x2d] == bVar38);
  auVar98[0xc] = -(pbVar2[0x31] == bVar38);
  auVar98[0xd] = -(pbVar2[0x35] == bVar38);
  auVar98[0xe] = -(pbVar2[0x39] == bVar38);
  auVar98[0xf] = -(pbVar2[0x3d] == bVar38);
  auVar85[0] = -(pbVar2[3] == bVar38);
  auVar85[1] = -(pbVar2[7] == bVar38);
  auVar85[2] = -(pbVar2[0xb] == bVar38);
  auVar85[3] = -(pbVar2[0xf] == bVar38);
  auVar85[4] = -(pbVar2[0x13] == bVar38);
  auVar85[5] = -(pbVar2[0x17] == bVar38);
  auVar85[6] = -(pbVar2[0x1b] == bVar38);
  auVar85[7] = -(pbVar2[0x1f] == bVar38);
  auVar85[8] = -(pbVar2[0x23] == bVar38);
  auVar85[9] = -(pbVar2[0x27] == bVar38);
  auVar85[10] = -(pbVar2[0x2b] == bVar38);
  auVar85[0xb] = -(pbVar2[0x2f] == bVar38);
  auVar85[0xc] = -(pbVar2[0x33] == bVar38);
  auVar85[0xd] = -(pbVar2[0x37] == bVar38);
  auVar85[0xe] = -(pbVar2[0x3b] == bVar38);
  auVar85[0xf] = -(pbVar2[0x3f] == bVar38);
  auVar12[1] = -(pbVar2[4] == bVar38);
  auVar12[0] = -(*pbVar2 == bVar38);
  auVar12[2] = -(pbVar2[8] == bVar38);
  auVar12[3] = -(pbVar2[0xc] == bVar38);
  auVar12[4] = -(pbVar2[0x10] == bVar38);
  auVar12[5] = -(pbVar2[0x14] == bVar38);
  auVar12[6] = -(pbVar2[0x18] == bVar38);
  auVar12[7] = -(pbVar2[0x1c] == bVar38);
  auVar12[8] = -(pbVar2[0x20] == bVar38);
// thanks for reading - discord.gg/sdkhDjTex
  auVar12[9] = -(pbVar2[0x24] == bVar38);
  auVar12[10] = -(pbVar2[0x28] == bVar38);
  auVar12[0xb] = -(pbVar2[0x2c] == bVar38);
  auVar12[0xc] = -(pbVar2[0x30] == bVar38);
  auVar12[0xd] = -(pbVar2[0x34] == bVar38);
  auVar12[0xe] = -(pbVar2[0x38] == bVar38);
  auVar12[0xf] = -(pbVar2[0x3c] == bVar38);
  auVar95 = NEON_sri(auVar98,auVar12,1,1);
  auVar17[1] = -(pbVar2[6] == bVar38);
  auVar17[0] = -(pbVar2[2] == bVar38);
  auVar17[2] = -(pbVar2[10] == bVar38);
  auVar17[3] = -(pbVar2[0xe] == bVar38);
  auVar17[4] = -(pbVar2[0x12] == bVar38);
  auVar17[5] = -(pbVar2[0x16] == bVar38);
  auVar17[6] = -(pbVar2[0x1a] == bVar38);
  auVar17[7] = -(pbVar2[0x1e] == bVar38);
  auVar17[8] = -(pbVar2[0x22] == bVar38);
  auVar17[9] = -(pbVar2[0x26] == bVar38);
  auVar17[10] = -(pbVar2[0x2a] == bVar38);
/* wm:chat: discord.gg/sdkhDjTex */
  auVar17[0xb] = -(pbVar2[0x2e] == bVar38);
  auVar17[0xc] = -(pbVar2[0x32] == bVar38);
  auVar17[0xd] = -(pbVar2[0x36] == bVar38);
  auVar17[0xe] = -(pbVar2[0x3a] == bVar38);
  auVar17[0xf] = -(pbVar2[0x3e] == bVar38);
  auVar75 = NEON_sri(auVar85,auVar17,1,1);
  auVar75 = NEON_sri(auVar75,auVar95,2,1);
  auVar75 = NEON_sri(auVar75,auVar75,4,1);
  uVar31 = CONCAT17((char)(auVar75._14_2_ >> 4),
                    CONCAT16((char)(auVar75._12_2_ >> 4),
                             CONCAT15((char)(auVar75._10_2_ >> 4),
                                      CONCAT14((char)(auVar75._8_2_ >> 4),
                                               CONCAT13((char)(auVar75._6_2_ >> 4),
                                                        CONCAT12((char)(auVar75._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar75._2_2_ >> 4)
                                                                          ,(char)(auVar75._0_2_ >> 4
                                                                                 ))))))));
  lVar54 = 0;
  uVar33 = (uint)*pbVar2;
  if (uVar31 != 0) {
    uVar23 = (ulong)*pbVar2 & 0x3f;
    uVar31 = uVar31 >> uVar23 | uVar31 << 0x40 - uVar23;
    do {
      uVar23 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar29 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + uVar33 & 0x3f;
      if (uVar29 != 0) {
        uVar29 = *(uint *)(lVar40 + (ulong)uVar29 * 4);
/*  reversing this took months of machine time  */
        if (uVar29 < uVar20) break;
        Hint_Prefetch(lVar55 + (ulong)uVar29,0,0,0);
        auStack_ad0[lVar54] = uVar29;
        lVar54 = lVar54 + 1;
        iVar49 = iVar49 + -1;
      }
      uVar31 = uVar31 - 1 & uVar31;
      if ((uVar31 == 0) || (iVar49 == 0)) break;
    } while( true );
  }
  uVar20 = 0x3f;
  if ((uVar33 & 0x3f) != 1) {
    uVar20 = 0;
  }
  lVar24 = (ulong)uVar20 + (ulong)(uVar33 - 1 & 0x3f);
  *pbVar2 = (byte)lVar24;
  pbVar2[lVar24] = bVar38;
  iVar32 = *(int *)(lVar39 + 0x2c);
  *(int *)(lVar39 + 0x2c) = iVar32 + 1;
  *(int *)(lVar40 + lVar24 * 4) = iVar32;
  if (lVar54 == 0) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    uVar31 = 3;
  }
  else {
    lVar40 = 0;
    uVar23 = 3;
    do {
      uVar20 = auStack_ad0[lVar40];
      puVar22 = (ulong *)(lVar55 + (ulong)uVar20);
      if (*(int *)((long)puVar22 + (uVar23 - 3)) == *(int *)((long)puVar19 + (uVar23 - 3))) {
        puVar26 = puVar19;
        if (puVar19 < (ulong *)((long)param_3 + -7)) {
          if (*puVar22 == *puVar19) {
            lVar39 = 0;
            puVar22 = (ulong *)(lVar55 + 8 + (ulong)uVar20);
            do {
              puVar26 = puVar26 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar26) goto LAB_002db54c;
              uVar31 = *puVar22;
/* stripping the watermark breaks the license */
              lVar39 = lVar39 + 8;
              puVar22 = puVar22 + 1;
            } while (uVar31 == *puVar26);
            uVar31 = *puVar26 ^ uVar31;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar39 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
          }
          else {
            uVar31 = *puVar19 ^ *puVar22;
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
          }
        }
        else {
LAB_002db54c:
          if (puVar26 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar22 == (uint)*puVar26) {
              puVar26 = (ulong *)((long)puVar26 + 4);
              puVar22 = (ulong *)((long)puVar22 + 4);
            }
          }
          if (puVar26 < (ulong *)((long)param_3 + -1)) {
            if (*(short *)puVar22 == *(short *)puVar26) {
              puVar22 = (ulong *)((long)puVar22 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
          }
          if (puVar26 < param_3) {
            if ((char)*puVar22 == (char)*puVar26) {
              puVar26 = (ulong *)((long)puVar26 + 1);
            }
          }
          uVar31 = (long)puVar26 - (long)puVar19;
        }
        if (uVar23 < uVar31) {
          *(ulong *)param_4 = (ulong)((uVar30 + 3) - uVar20);
          uVar23 = uVar31;
          if ((uint *)((long)puVar19 + uVar31) == param_3) break;
        }
      }
      lVar40 = lVar40 + 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      uVar31 = uVar23;
    } while (lVar40 != lVar54);
  }
  bVar38 = (byte)uVar37;
  auVar99[0] = -(pbVar1[1] == bVar38);
  auVar99[1] = -(pbVar1[5] == bVar38);
  auVar99[2] = -(pbVar1[9] == bVar38);
  auVar99[3] = -(pbVar1[0xd] == bVar38);
  auVar99[4] = -(pbVar1[0x11] == bVar38);
  auVar99[5] = -(pbVar1[0x15] == bVar38);
  auVar99[6] = -(pbVar1[0x19] == bVar38);
  auVar99[7] = -(pbVar1[0x1d] == bVar38);
  auVar99[8] = -(pbVar1[0x21] == bVar38);
  auVar99[9] = -(pbVar1[0x25] == bVar38);
  auVar99[10] = -(pbVar1[0x29] == bVar38);
  auVar99[0xb] = -(pbVar1[0x2d] == bVar38);
  auVar99[0xc] = -(pbVar1[0x31] == bVar38);
  auVar99[0xd] = -(pbVar1[0x35] == bVar38);
  auVar99[0xe] = -(pbVar1[0x39] == bVar38);
  auVar99[0xf] = -(pbVar1[0x3d] == bVar38);
  auVar86[0] = -(pbVar1[3] == bVar38);
  auVar86[1] = -(pbVar1[7] == bVar38);
  auVar86[2] = -(pbVar1[0xb] == bVar38);
  auVar86[3] = -(pbVar1[0xf] == bVar38);
  auVar86[4] = -(pbVar1[0x13] == bVar38);
  auVar86[5] = -(pbVar1[0x17] == bVar38);
  auVar86[6] = -(pbVar1[0x1b] == bVar38);
  auVar86[7] = -(pbVar1[0x1f] == bVar38);
  auVar86[8] = -(pbVar1[0x23] == bVar38);
  auVar86[9] = -(pbVar1[0x27] == bVar38);
  auVar86[10] = -(pbVar1[0x2b] == bVar38);
/* WM - unlicensed copy if this notice is missing */
  auVar86[0xb] = -(pbVar1[0x2f] == bVar38);
  auVar86[0xc] = -(pbVar1[0x33] == bVar38);
  auVar86[0xd] = -(pbVar1[0x37] == bVar38);
  auVar86[0xe] = -(pbVar1[0x3b] == bVar38);
  auVar86[0xf] = -(pbVar1[0x3f] == bVar38);
  auVar13[1] = -(pbVar1[4] == bVar38);
  auVar13[0] = -(*pbVar1 == bVar38);
  auVar13[2] = -(pbVar1[8] == bVar38);
  auVar13[3] = -(pbVar1[0xc] == bVar38);
  auVar13[4] = -(pbVar1[0x10] == bVar38);
  auVar13[5] = -(pbVar1[0x14] == bVar38);
  auVar13[6] = -(pbVar1[0x18] == bVar38);
  auVar13[7] = -(pbVar1[0x1c] == bVar38);
  auVar13[8] = -(pbVar1[0x20] == bVar38);
  auVar13[9] = -(pbVar1[0x24] == bVar38);
  auVar13[10] = -(pbVar1[0x28] == bVar38);
  auVar13[0xb] = -(pbVar1[0x2c] == bVar38);
  auVar13[0xc] = -(pbVar1[0x30] == bVar38);
  auVar13[0xd] = -(pbVar1[0x34] == bVar38);
  auVar13[0xe] = -(pbVar1[0x38] == bVar38);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  auVar13[0xf] = -(pbVar1[0x3c] == bVar38);
  auVar95 = NEON_sri(auVar99,auVar13,1,1);
  auVar18[1] = -(pbVar1[6] == bVar38);
  auVar18[0] = -(pbVar1[2] == bVar38);
  auVar18[2] = -(pbVar1[10] == bVar38);
  auVar18[3] = -(pbVar1[0xe] == bVar38);
  auVar18[4] = -(pbVar1[0x12] == bVar38);
  auVar18[5] = -(pbVar1[0x16] == bVar38);
  auVar18[6] = -(pbVar1[0x1a] == bVar38);
  auVar18[7] = -(pbVar1[0x1e] == bVar38);
  auVar18[8] = -(pbVar1[0x22] == bVar38);
  auVar18[9] = -(pbVar1[0x26] == bVar38);
  auVar18[10] = -(pbVar1[0x2a] == bVar38);
  auVar18[0xb] = -(pbVar1[0x2e] == bVar38);
  auVar18[0xc] = -(pbVar1[0x32] == bVar38);
  auVar18[0xd] = -(pbVar1[0x36] == bVar38);
  auVar18[0xe] = -(pbVar1[0x3a] == bVar38);
  auVar18[0xf] = -(pbVar1[0x3e] == bVar38);
  auVar75 = NEON_sri(auVar86,auVar18,1,1);
  auVar75 = NEON_sri(auVar75,auVar95,2,1);
  auVar75 = NEON_sri(auVar75,auVar75,4,1);
  uVar23 = CONCAT17((char)(auVar75._14_2_ >> 4),
                    CONCAT16((char)(auVar75._12_2_ >> 4),
                             CONCAT15((char)(auVar75._10_2_ >> 4),
                                      CONCAT14((char)(auVar75._8_2_ >> 4),
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                                               CONCAT13((char)(auVar75._6_2_ >> 4),
                                                        CONCAT12((char)(auVar75._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar75._2_2_ >> 4)
                                                                          ,(char)(auVar75._0_2_ >> 4
                                                                                 ))))))));
  pdVar44 = param_4;
  if (uVar23 != 0 && iVar49 != 0) {
    lVar40 = 0;
    uVar20 = *(uint *)(puVar34 + 3);
    pdVar43 = (dword *)*puVar34;
    lVar39 = puVar34[1];
    bVar38 = *pbVar1;
    uVar37 = (ulong)bVar38 & 0x3f;
    uVar23 = uVar23 >> uVar37 | uVar23 << 0x40 - uVar37;
    do {
      uVar37 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
      uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar33 = (int)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) + (uint)bVar38 & 0x3f;
      if (uVar33 != 0) {
        uVar33 = *(uint *)(lVar3 + (ulong)uVar33 * 4);
        if (uVar33 < uVar20) goto LAB_002db6a8;
        Hint_Prefetch(lVar39 + (ulong)uVar33,0,0,0);
        auStack_ad0[lVar40] = uVar33;
        lVar40 = lVar40 + 1;
        iVar49 = iVar49 + -1;
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar49 == 0)) goto LAB_002db6a8;
    } while( true );
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
LAB_002db738:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_9d0) {
    return uVar31;
  }
  auVar75 = ___stack_chk_fail();
  puVar19 = auVar75._8_8_;
  lVar40 = auVar75._0_8_;
  lVar39 = *(long *)(lVar40 + 0x80);
  uVar33 = 1 << (ulong)(*(uint *)(lVar40 + 0x104) & 0x1f);
  lVar54 = *(long *)(lVar40 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar40 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar40 + 0x18);
  uVar29 = (uint)((long)puVar19 - lVar54);
  uVar20 = uVar29 - uVar30;
  if (uVar29 - *(uint *)(lVar40 + 0x1c) <= uVar30 || *(int *)(lVar40 + 0x28) != 0) {
    uVar20 = *(uint *)(lVar40 + 0x1c);
  }
  uVar30 = 0;
  if (uVar33 <= uVar29) {
    uVar30 = uVar29 - uVar33;
  }
  uVar42 = 1 << (ulong)(*(uint *)(lVar40 + 0x10c) & 0x1f);
  puVar34 = *(undefined8 **)(lVar40 + 0xf8);
  puVar21 = (uint *)(puVar34[0xe] +
                    (ulong)((uint)*puVar19 * -0x61c8864f >>
                           (ulong)(0x22U - *(int *)(puVar34 + 0x21) & 0x1f)) * 0x10);
  Hint_Prefetch(puVar21,0,0,0);
  lVar55 = *(long *)(lVar40 + 0x70);
  uVar47 = ~(-1 << (ulong)(*(uint *)(lVar40 + 0x104) & 0x1f));
  uVar48 = *(uint *)(lVar40 + 0x2c);
  uVar31 = (ulong)uVar48;
  uVar8 = 0x20 - *(int *)(lVar40 + 0x108);
  if (*(int *)(lVar40 + 300) == 0) {
// WM - proprietary - see LICENSE - do not sell
    if (uVar48 < uVar29) {
      do {
        uVar48 = (uint)(*(int *)(lVar54 + uVar31) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar39 + (ulong)((uint)uVar31 & uVar47) * 4) =
             *(undefined4 *)(lVar55 + (ulong)uVar48 * 4);
        *(uint *)(lVar55 + (ulong)uVar48 * 4) = (uint)uVar31;
        uVar31 = uVar31 + 1;
      } while (uVar31 < ((long)puVar19 - lVar54 & 0xffffffffU));
    }
  }
  else if (uVar48 < uVar29) {
    uVar6 = (uint)(*(int *)(lVar54 + uVar31) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar39 + (ulong)(uVar48 & uVar47) * 4) =
         *(undefined4 *)(lVar55 + (ulong)uVar6 * 4);
    *(uint *)(lVar55 + (ulong)uVar6 * 4) = uVar48;
  }
  *(uint *)(lVar40 + 0x2c) = uVar29;
  uVar48 = (uint)*puVar19;
  uVar47 = *(uint *)(lVar55 + (ulong)(uVar48 * -0x61c8864f >> (ulong)(uVar8 & 0x1f)) * 4);
  if (uVar20 <= uVar47) {
// WM - chat: discord.gg/sdkhDjTex
    uVar31 = 3;
    do {
      puVar22 = (ulong *)(lVar54 + (ulong)uVar47);
      if (*(int *)((long)puVar22 + (uVar31 - 3)) == *(int *)((long)puVar19 + (uVar31 - 3))) {
        puVar26 = puVar19;
        if (puVar19 < (ulong *)((long)param_3 + -7)) {
          if (*puVar22 == *puVar19) {
            lVar40 = 0;
            puVar22 = (ulong *)(lVar54 + 8 + (ulong)uVar47);
            do {
              puVar26 = puVar26 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar26) goto code_r0x002dbc9c;
              uVar23 = *puVar22;
              lVar40 = lVar40 + 8;
              puVar22 = puVar22 + 1;
            } while (uVar23 == *puVar26);
            uVar23 = *puVar26 ^ uVar23;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = lVar40 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          }
          else {
            uVar23 = *puVar19 ^ *puVar22;
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
// WM - found on a paste site? it was re-uploaded illegally
          }
        }
        else {
code_r0x002dbc9c:
          if (puVar26 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar22 == (uint)*puVar26) {
              puVar26 = (ulong *)((long)puVar26 + 4);
              puVar22 = (ulong *)((long)puVar22 + 4);
            }
          }
          if (puVar26 < (ulong *)((long)param_3 + -1)) {
            if (*(short *)puVar22 == *(short *)puVar26) {
              puVar22 = (ulong *)((long)puVar22 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
          }
          if (puVar26 < param_3) {
            if ((char)*puVar22 == (char)*puVar26) {
              puVar26 = (ulong *)((long)puVar26 + 1);
            }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          }
          uVar23 = (long)puVar26 - (long)puVar19;
        }
        if (uVar31 < uVar23) {
          *(ulong *)pdVar44 = (ulong)((uVar29 + 3) - uVar47);
          uVar31 = uVar23;
          if ((uint *)((long)puVar19 + uVar23) == param_3) goto code_r0x002dba0c;
        }
      }
      uVar23 = uVar31;
      if ((uVar47 <= uVar30) || (uVar42 = uVar42 - 1, uVar42 == 0)) goto code_r0x002dba0c;
      uVar47 = *(uint *)(lVar39 + (ulong)(uVar47 & uVar33 - 1) * 4);
      uVar31 = uVar23;
      if (uVar47 < uVar20) goto code_r0x002dba0c;
    } while( true );
  }
  uVar23 = 3;
code_r0x002dba0c:
  lVar40 = puVar34[1];
  Hint_Prefetch(lVar40 + (ulong)*puVar21,0,0,0);
  Hint_Prefetch(lVar40 + (ulong)puVar21[1],0,0,0);
  Hint_Prefetch(lVar40 + (ulong)puVar21[2],0,0,0);
  iVar5 = ((int)*puVar34 - (int)lVar40) - iVar5;
  uVar20 = uVar42;
  if (2 < uVar42) {
    uVar20 = 3;
  }
  uVar33 = puVar21[3];
  puVar56 = (uint *)(puVar34[0x10] + (ulong)(uVar33 >> 8) * 4);
  Hint_Prefetch(puVar56,0,0,0);
  if (uVar42 == 0) {
    uVar20 = 0;
  }
  else {
    uVar30 = *puVar21;
    if (uVar30 == 0) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      return uVar23;
    }
    iVar32 = uVar29 + iVar5 + 3;
    if (*(uint *)(lVar40 + (ulong)uVar30) == uVar48) {
      lVar39 = func_0x002ad924((uint *)((long)puVar19 + 4),(uint *)(lVar40 + (ulong)uVar30) + 1);
      uVar31 = lVar39 + 4;
      if (uVar23 < uVar31) {
        *(ulong *)pdVar44 = (ulong)(iVar32 - uVar30);
        uVar23 = uVar31;
        if ((uint *)((long)puVar19 + uVar31) == param_3) {
          return uVar31;
        }
      }
    }
    if (uVar42 != 1) {
      uVar30 = puVar21[1];
      if (uVar30 == 0) {
        return uVar23;
      }
      uVar31 = uVar23;
      if (*(uint *)(lVar40 + (ulong)uVar30) == uVar48) {
        lVar39 = func_0x002ad924((uint *)((long)puVar19 + 4),(uint *)(lVar40 + (ulong)uVar30) + 1);
        uVar37 = lVar39 + 4;
        if (uVar23 < uVar37) {
          *(ulong *)pdVar44 = (ulong)(iVar32 - uVar30);
          uVar31 = uVar37;
          if ((uint *)((long)puVar19 + uVar37) == param_3) {
            return uVar37;
          }
        }
      }
      uVar23 = uVar31;
      if (uVar42 != 2) {
        uVar30 = puVar21[2];
        if (uVar30 == 0) {
          return uVar31;
        }
/* wm:stripping the watermark breaks the license */
        if (*(uint *)(lVar40 + (ulong)uVar30) == uVar48) {
          lVar39 = func_0x002ad924((uint *)((long)puVar19 + 4),(uint *)(lVar40 + (ulong)uVar30) + 1)
          ;
          uVar23 = lVar39 + 4;
          if (uVar23 <= uVar31) {
            uVar30 = uVar42 - uVar20;
            if ((uVar33 & 0xff) <= uVar42 - uVar20) {
              uVar30 = uVar33 & 0xff;
            }
            goto joined_r0x002dbd90;
          }
          *(ulong *)pdVar44 = (ulong)(iVar32 - uVar30);
          if ((uint *)((long)puVar19 + uVar23) == param_3) {
            return uVar23;
          }
        }
      }
    }
  }
  uVar30 = uVar42 - uVar20;
  uVar31 = uVar23;
  if ((uVar33 & 0xff) <= uVar42 - uVar20) {
    uVar30 = uVar33 & 0xff;
  }
joined_r0x002dbd90:
  if (uVar30 != 0) {
    uVar37 = (ulong)uVar30;
    uVar23 = uVar37;
    puVar21 = puVar56;
    do {
      Hint_Prefetch(lVar40 + (ulong)*puVar21,0,0,0);
      uVar23 = uVar23 - 1;
      puVar21 = puVar21 + 1;
    } while (uVar23 != 0);
    do {
      uVar20 = *puVar56;
      puVar21 = (uint *)(lVar40 + (ulong)uVar20);
// chat: discord.gg/sdkhDjTex
      if (*puVar21 == uVar48) {
        lVar39 = func_0x002ad924((uint *)((long)puVar19 + 4),puVar21 + 1);
        uVar23 = lVar39 + 4;
        if (uVar31 < uVar23) {
          *(ulong *)pdVar44 = (ulong)((uVar29 + iVar5 + 3) - uVar20);
          uVar31 = uVar23;
          if ((uint *)((long)puVar19 + uVar23) == param_3) {
            return uVar23;
          }
        }
      }
      uVar20 = (int)uVar37 - 1;
      uVar37 = (ulong)uVar20;
      puVar56 = puVar56 + 1;
    } while (uVar20 != 0);
  }
  return uVar31;
}

