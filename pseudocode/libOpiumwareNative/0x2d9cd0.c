/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2d9cd0:51619fd82b
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002d9cd0(long param_1,dword *param_2,dword *param_3,dword *param_4)

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
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
// chat: discord.gg/sdkhDjTex
  int iVar29;
  uint uVar30;
  undefined8 *puVar31;
  byte bVar32;
  char cVar33;
  byte bVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  byte bVar38;
  ulong uVar39;
  dword *unaff_x19;
  dword *pdVar40;
  dword *pdVar41;
  dword *pdVar42;
  dword *unaff_x20;
  ulong uVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  dword *unaff_x23;
  dword *pdVar47;
  ulong uVar48;
  dword *unaff_x24;
  ulong uVar49;
  long lVar50;
  long lVar51;
  ulong unaff_x26;
  uint *puVar52;
  ulong unaff_x27;
  uint uVar53;
  ulong unaff_x28;
  ushort uVar54;
  undefined4 uVar55;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  undefined6 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [12];
  undefined1 auVar61 [14];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar62 [14];
  undefined1 auVar63 [14];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  ushort uVar72;
  undefined4 uVar73;
  undefined6 uVar74;
  ushort uVar75;
  undefined4 uVar76;
  undefined6 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
// stripping the watermark breaks the license
  uint auStack_620 [64];
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
  undefined *puStack_4b8;
  int iStack_4ac;
  dword *pdStack_4a8;
  dword *pdStack_4a0;
  ulong uStack_498;
  dword adStack_490 [64];
  long lStack_390;
// watermarked copy - do not remove
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
  long lStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
// reversing this took months of machine time
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
  lVar37 = *(long *)(param_1 + 0x70);
  lVar36 = *(long *)(param_1 + 0x38);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  iVar5 = *(int *)(param_1 + 0x34);
  lVar50 = *(long *)(param_1 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar30 = *(uint *)(param_1 + 0x18);
  uStack_178 = (ulong)uVar30;
  uVar28 = (long)param_2 - lVar50;
  uVar26 = (uint)uVar28;
  uVar17 = uVar26 - uVar27;
  if (uVar26 - *(uint *)(param_1 + 0x1c) <= uVar27 || *(int *)(param_1 + 0x28) != 0) {
    uVar17 = *(uint *)(param_1 + 0x1c);
  }
  uVar27 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar27) {
    uVar27 = 6;
  }
  uVar39 = *(ulong *)(param_1 + 0x60);
  iVar29 = 1 << (ulong)(uVar27 & 0x1f);
  puVar31 = *(undefined8 **)(param_1 + 0xf8);
  uVar35 = (ulong)(*(long *)param_2 * -0x30e4432345000000) >>
           ((ulong)(0x38 - *(int *)((long)puVar31 + 0x34)) & 0x3f);
  uVar20 = uVar35 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar31[7] + uVar20);
  lVar51 = puVar31[0xe] + uVar20 * 4;
/* WM - if you paid for this, you were scammed */
  Hint_Prefetch(lVar51,0,0,0);
  Hint_Prefetch(lVar51 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(param_1 + 300) == 0) {
    pdStack_188 = param_3;
    lVar3 = param_1 + 0x40;
    uVar27 = *(uint *)(param_1 + 0x2c);
    uVar20 = (ulong)uVar27;
    pdStack_180 = (dword *)CONCAT44(pdStack_180._4_4_,iVar5);
    lVar21 = lVar36;
    lVar22 = lVar37;
    if (0x180 < uVar26 - uVar27) {
      if (uVar27 < 0xffffffa0) {
        uVar48 = uVar20 + 0x60;
        do {
          uVar49 = (*(long *)(lVar50 + 8 + uVar20) * -0x30e4432345000000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar43 = uVar49 >> 2 & 0x3fffffc0;
          lVar21 = lVar37 + uVar43 * 4;
          Hint_Prefetch(lVar21,0,0,0);
          Hint_Prefetch(lVar21 + 0x40,0,0,0);
          lVar21 = lVar36 + uVar43;
          Hint_Prefetch(lVar21,0,0,0);
          Hint_Prefetch(lVar21 + 0x20,0,0,0);
          uVar44 = *(uint *)(lVar3 + (uVar20 & 7) * 4);
          *(int *)(lVar3 + (uVar20 & 7) * 4) = (int)uVar49;
          uVar49 = (ulong)(uVar44 >> 2) & 0x3fffffc0;
          pbVar2 = (byte *)(lVar36 + uVar49);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x3f);
          uVar27 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar27 = 0;
          }
          unaff_x24 = (dword *)(uVar27 + unaff_x26);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar44;
          *(int *)(lVar37 + uVar49 * 4 + (long)unaff_x24 * 4) = (int)uVar20;
          uVar20 = uVar20 + 1;
        } while (uVar48 != uVar20);
        lVar22 = *(long *)(param_1 + 0x70);
        lVar21 = *(long *)(param_1 + 0x38);
      }
      uVar27 = uVar26 - 0x20;
      uVar20 = (ulong)uVar27;
      iVar45 = (int)(undefined1 *)((long)param_2 + 1U) - (int)(undefined1 *)(lVar50 + uVar20);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      uVar44 = 8;
      if (iVar45 + 1U < 8) {
        uVar44 = iVar45 + 1;
      }
      uVar53 = 0;
      if ((undefined1 *)(lVar50 + uVar20) <= (undefined1 *)((long)param_2 + 1U)) {
        uVar53 = uVar44;
      }
      unaff_x19 = (dword *)(ulong)uVar53;
      unaff_x20 = (dword *)(ulong)(uVar53 + uVar27);
      if (uVar27 < uVar53 + uVar27) {
        iVar45 = *(int *)(param_1 + 0x34);
        unaff_x20 = *(dword **)(param_1 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar50 + uVar20) * -0x30e4432345000000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar45) & 0x3f));
          uVar48 = (ulong)unaff_x23 >> 2 & 0x3fffffc0;
          unaff_x26 = lVar22 + uVar48 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          lVar24 = lVar21 + uVar48;
/* more drops soon - github.com/pengussy */
          Hint_Prefetch(lVar24,0,0,0);
          Hint_Prefetch(lVar24 + 0x20,0,0,0);
          unaff_x24 = (dword *)(uVar20 & 7);
          *(int *)(lVar3 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar20 = uVar20 + 1;
          uVar44 = (int)unaff_x19 - 1;
          unaff_x19 = (dword *)(ulong)uVar44;
        } while (uVar44 != 0);
        unaff_x19 = (dword *)0x0;
      }
    }
    if (uVar27 < uVar26) {
      lVar24 = *(long *)(param_1 + 8);
      unaff_x19 = (dword *)(ulong)(0x38 - *(int *)(param_1 + 0x34));
      puVar18 = (uint *)(ulong)uVar27;
      unaff_x20 = (dword *)(uVar28 & 0xffffffff);
      do {
        uVar20 = (*(long *)(lVar24 + 8 + (long)puVar18) * -0x30e4432345000000 ^
                 *(ulong *)(param_1 + 0x60)) >> ((ulong)unaff_x19 & 0x3f);
        uVar48 = uVar20 >> 2 & 0x3fffffc0;
        lVar25 = lVar22 + uVar48 * 4;
        Hint_Prefetch(lVar25,0,0,0);
        Hint_Prefetch(lVar25 + 0x40,0,0,0);
        lVar25 = lVar21 + uVar48;
        Hint_Prefetch(lVar25,0,0,0);
        Hint_Prefetch(lVar25 + 0x20,0,0,0);
        uVar44 = *(uint *)(lVar3 + ((ulong)puVar18 & 7) * 4);
        unaff_x26 = (ulong)uVar44;
        *(int *)(lVar3 + ((ulong)puVar18 & 7) * 4) = (int)uVar20;
        uVar20 = (ulong)(uVar44 >> 2) & 0x3fffffc0;
        unaff_x24 = (dword *)(lVar22 + uVar20 * 4);
        unaff_x23 = (dword *)(lVar21 + uVar20);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x3f);
// thanks for reading - discord.gg/sdkhDjTex
        uVar27 = 0x3f;
        if (((byte)*unaff_x23 & 0x3f) != 1) {
          uVar27 = 0;
        }
        unaff_x27 = uVar27 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar44;
        unaff_x24[unaff_x27] = (uint)puVar18;
        puVar18 = (uint *)((long)puVar18 + 1);
      } while (puVar18 < unaff_x20);
    }
    *(uint *)(param_1 + 0x2c) = uVar26;
    uVar20 = (*(long *)(lVar50 + (uVar28 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar39) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar39 = uVar20 >> 2 & 0x3fffffc0;
    lVar21 = lVar37 + uVar39 * 4;
    Hint_Prefetch(lVar21,0,0,0);
    Hint_Prefetch(lVar21 + 0x40,0,0,0);
    lVar21 = lVar36 + uVar39;
    Hint_Prefetch(lVar21,0,0,0);
    Hint_Prefetch(lVar21 + 0x20,0,0,0);
    uVar27 = *(uint *)(lVar3 + (uVar28 & 7) * 4);
    *(int *)(lVar3 + (uVar28 & 7) * 4) = (int)uVar20;
  }
/* wm:do not claim this as your own */
  else {
    uVar27 = (uint)((*(long *)param_2 * -0x30e4432345000000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar26;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar27;
  uVar28 = (ulong)(uVar27 >> 2) & 0x3fffffc0;
  lVar37 = lVar37 + uVar28 * 4;
  pbVar2 = (byte *)(lVar36 + uVar28);
  bVar34 = (byte)uVar27;
  auVar78[0] = -(pbVar2[1] == bVar34);
  auVar78[1] = -(pbVar2[5] == bVar34);
  auVar78[2] = -(pbVar2[9] == bVar34);
  auVar78[3] = -(pbVar2[0xd] == bVar34);
  auVar78[4] = -(pbVar2[0x11] == bVar34);
  auVar78[5] = -(pbVar2[0x15] == bVar34);
  auVar78[6] = -(pbVar2[0x19] == bVar34);
  auVar78[7] = -(pbVar2[0x1d] == bVar34);
  auVar78[8] = -(pbVar2[0x21] == bVar34);
  auVar78[9] = -(pbVar2[0x25] == bVar34);
  auVar78[10] = -(pbVar2[0x29] == bVar34);
  auVar78[0xb] = -(pbVar2[0x2d] == bVar34);
/* donate: donate/README.md */
  auVar78[0xc] = -(pbVar2[0x31] == bVar34);
  auVar78[0xd] = -(pbVar2[0x35] == bVar34);
  auVar78[0xe] = -(pbVar2[0x39] == bVar34);
  auVar78[0xf] = -(pbVar2[0x3d] == bVar34);
  auVar64[0] = -(pbVar2[3] == bVar34);
  auVar64[1] = -(pbVar2[7] == bVar34);
  auVar64[2] = -(pbVar2[0xb] == bVar34);
  auVar64[3] = -(pbVar2[0xf] == bVar34);
  auVar64[4] = -(pbVar2[0x13] == bVar34);
  auVar64[5] = -(pbVar2[0x17] == bVar34);
  auVar64[6] = -(pbVar2[0x1b] == bVar34);
  auVar64[7] = -(pbVar2[0x1f] == bVar34);
  auVar64[8] = -(pbVar2[0x23] == bVar34);
  auVar64[9] = -(pbVar2[0x27] == bVar34);
  auVar64[10] = -(pbVar2[0x2b] == bVar34);
  auVar64[0xb] = -(pbVar2[0x2f] == bVar34);
  auVar64[0xc] = -(pbVar2[0x33] == bVar34);
  auVar64[0xd] = -(pbVar2[0x37] == bVar34);
  auVar64[0xe] = -(pbVar2[0x3b] == bVar34);
  auVar64[0xf] = -(pbVar2[0x3f] == bVar34);
  auVar65[1] = -(pbVar2[4] == bVar34);
  auVar65[0] = -(*pbVar2 == bVar34);
  auVar65[2] = -(pbVar2[8] == bVar34);
  auVar65[3] = -(pbVar2[0xc] == bVar34);
  auVar65[4] = -(pbVar2[0x10] == bVar34);
  auVar65[5] = -(pbVar2[0x14] == bVar34);
  auVar65[6] = -(pbVar2[0x18] == bVar34);
  auVar65[7] = -(pbVar2[0x1c] == bVar34);
  auVar65[8] = -(pbVar2[0x20] == bVar34);
  auVar65[9] = -(pbVar2[0x24] == bVar34);
  auVar65[10] = -(pbVar2[0x28] == bVar34);
  auVar65[0xb] = -(pbVar2[0x2c] == bVar34);
  auVar65[0xc] = -(pbVar2[0x30] == bVar34);
// WM - chat: discord.gg/sdkhDjTex
  auVar65[0xd] = -(pbVar2[0x34] == bVar34);
  auVar65[0xe] = -(pbVar2[0x38] == bVar34);
  auVar65[0xf] = -(pbVar2[0x3c] == bVar34);
  auVar78 = NEON_sri(auVar78,auVar65,1,1);
  auVar80[1] = -(pbVar2[6] == bVar34);
  auVar80[0] = -(pbVar2[2] == bVar34);
  auVar80[2] = -(pbVar2[10] == bVar34);
  auVar80[3] = -(pbVar2[0xe] == bVar34);
  auVar80[4] = -(pbVar2[0x12] == bVar34);
  auVar80[5] = -(pbVar2[0x16] == bVar34);
  auVar80[6] = -(pbVar2[0x1a] == bVar34);
  auVar80[7] = -(pbVar2[0x1e] == bVar34);
  auVar80[8] = -(pbVar2[0x22] == bVar34);
  auVar80[9] = -(pbVar2[0x26] == bVar34);
  auVar80[10] = -(pbVar2[0x2a] == bVar34);
  auVar80[0xb] = -(pbVar2[0x2e] == bVar34);
  auVar80[0xc] = -(pbVar2[0x32] == bVar34);
  auVar80[0xd] = -(pbVar2[0x36] == bVar34);
  auVar80[0xe] = -(pbVar2[0x3a] == bVar34);
  auVar80[0xf] = -(pbVar2[0x3e] == bVar34);
  auVar65 = NEON_sri(auVar64,auVar80,1,1);
  auVar65 = NEON_sri(auVar65,auVar78,2,1);
  auVar65 = NEON_sri(auVar65,auVar65,4,1);
  uVar28 = CONCAT17((char)(auVar65._14_2_ >> 4),
                    CONCAT16((char)(auVar65._12_2_ >> 4),
                             CONCAT15((char)(auVar65._10_2_ >> 4),
                                      CONCAT14((char)(auVar65._8_2_ >> 4),
                                               CONCAT13((char)(auVar65._6_2_ >> 4),
                                                        CONCAT12((char)(auVar65._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar65._2_2_ >> 4)
                                                                          ,(char)(auVar65._0_2_ >> 4
                                                                                 ))))))));
  lVar36 = 0;
  uVar27 = (uint)*pbVar2;
// WM - origin: github.com/pengussy
  if (uVar28 != 0) {
    uVar20 = (ulong)*pbVar2 & 0x3f;
    uVar28 = uVar28 >> uVar20 | uVar28 << 0x40 - uVar20;
    do {
      uVar20 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar44 = (int)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) + uVar27 & 0x3f;
      if (uVar44 != 0) {
        uVar44 = *(uint *)(lVar37 + (ulong)uVar44 * 4);
        if (uVar44 < uVar17) break;
        Hint_Prefetch(lVar50 + (ulong)uVar44,0,0,0);
        adStack_170[lVar36] = uVar44;
        lVar36 = lVar36 + 1;
        iVar29 = iVar29 + -1;
      }
      uVar28 = uVar28 - 1 & uVar28;
      if ((uVar28 == 0) || (iVar29 == 0)) break;
    } while( true );
  }
  uVar17 = 0x3f;
  if ((uVar27 & 0x3f) != 1) {
    uVar17 = 0;
  }
  lVar3 = (ulong)uVar17 + (ulong)(uVar27 - 1 & 0x3f);
  *pbVar2 = (byte)lVar3;
  pbVar2[lVar3] = bVar34;
  iVar5 = *(int *)(param_1 + 0x2c);
// WM - if you paid for this, you were scammed
  *(int *)(param_1 + 0x2c) = iVar5 + 1;
  *(int *)(lVar37 + lVar3 * 4) = iVar5;
  if (lVar36 == 0) {
    uVar28 = 3;
  }
  else {
    lVar37 = 0;
    unaff_x27 = (ulong)(uVar26 + 3);
    unaff_x26 = lVar50 + 8;
    uVar20 = 3;
    do {
      uVar27 = adStack_170[lVar37];
      pdVar42 = (dword *)(lVar50 + (ulong)uVar27);
      uVar17 = *(uint *)((long)pdVar42 + (uVar20 - 3));
      unaff_x19 = (dword *)(ulong)uVar17;
      uVar44 = *(uint *)((long)param_2 + (uVar20 - 3));
      unaff_x20 = (dword *)(ulong)uVar44;
      if (uVar17 == uVar44) {
        if (param_2 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)param_2;
          if (*(uint **)pdVar42 == unaff_x20) {
            unaff_x19 = (dword *)0x0;
            pdVar42 = (dword *)(unaff_x26 + uVar27);
            pdVar40 = param_2 + 2;
            do {
              unaff_x23 = pdVar40;
              if ((uint *)((long)param_3 + -7) <= pdVar40) goto LAB_002da07c;
              unaff_x20 = *(dword **)pdVar42;
              unaff_x23 = pdVar40 + 2;
              unaff_x24 = *(dword **)pdVar40;
              unaff_x19 = unaff_x19 + 2;
// WM - found on a paste site? it was re-uploaded illegally
              pdVar42 = pdVar42 + 2;
              pdVar40 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar28 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20);
            uVar28 = (long)unaff_x19 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar28 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar42;
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            unaff_x19 = (dword *)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20);
            uVar28 = (ulong)unaff_x19 >> 3;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          }
        }
        else {
          unaff_x23 = param_2;
LAB_002da07c:
          if (unaff_x23 < (uint *)((long)param_3 + -3)) {
            unaff_x19 = unaff_x23 + 1;
            unaff_x20 = pdVar42 + 1;
            if (*pdVar42 == *unaff_x23) {
              unaff_x23 = unaff_x19;
              pdVar42 = unaff_x20;
            }
          }
          if (unaff_x23 < (uint *)((long)param_3 + -1)) {
            unaff_x19 = (dword *)((long)unaff_x23 + 2);
            unaff_x20 = (dword *)((long)pdVar42 + 2);
            if ((short)*pdVar42 == (short)*unaff_x23) {
              pdVar42 = unaff_x20;
              unaff_x23 = unaff_x19;
            }
/* reversing this took months of machine time - github.com/pengussy */
          }
          if (unaff_x23 < param_3) {
            unaff_x19 = (dword *)(ulong)(byte)*pdVar42;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar42 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar28 = (long)unaff_x23 - (long)param_2;
        }
        if (uVar20 < uVar28) {
          *(ulong *)param_4 = (ulong)((uVar26 + 3) - uVar27);
          uVar20 = uVar28;
          if ((uint *)((long)param_2 + uVar28) == param_3) break;
        }
      }
      lVar37 = lVar37 + 1;
      uVar28 = uVar20;
    } while (lVar37 != lVar36);
  }
  bVar34 = (byte)uVar35;
  auVar79[0] = -(pbVar1[1] == bVar34);
  auVar79[1] = -(pbVar1[5] == bVar34);
  auVar79[2] = -(pbVar1[9] == bVar34);
  auVar79[3] = -(pbVar1[0xd] == bVar34);
  auVar79[4] = -(pbVar1[0x11] == bVar34);
  auVar79[5] = -(pbVar1[0x15] == bVar34);
// WM - watermarked copy - do not remove
  auVar79[6] = -(pbVar1[0x19] == bVar34);
  auVar79[7] = -(pbVar1[0x1d] == bVar34);
  auVar79[8] = -(pbVar1[0x21] == bVar34);
  auVar79[9] = -(pbVar1[0x25] == bVar34);
  auVar79[10] = -(pbVar1[0x29] == bVar34);
  auVar79[0xb] = -(pbVar1[0x2d] == bVar34);
  auVar79[0xc] = -(pbVar1[0x31] == bVar34);
  auVar79[0xd] = -(pbVar1[0x35] == bVar34);
  auVar79[0xe] = -(pbVar1[0x39] == bVar34);
  auVar79[0xf] = -(pbVar1[0x3d] == bVar34);
  auVar66[0] = -(pbVar1[3] == bVar34);
  auVar66[1] = -(pbVar1[7] == bVar34);
  auVar66[2] = -(pbVar1[0xb] == bVar34);
  auVar66[3] = -(pbVar1[0xf] == bVar34);
  auVar66[4] = -(pbVar1[0x13] == bVar34);
  auVar66[5] = -(pbVar1[0x17] == bVar34);
  auVar66[6] = -(pbVar1[0x1b] == bVar34);
  auVar66[7] = -(pbVar1[0x1f] == bVar34);
  auVar66[8] = -(pbVar1[0x23] == bVar34);
  auVar66[9] = -(pbVar1[0x27] == bVar34);
  auVar66[10] = -(pbVar1[0x2b] == bVar34);
  auVar66[0xb] = -(pbVar1[0x2f] == bVar34);
  auVar66[0xc] = -(pbVar1[0x33] == bVar34);
  auVar66[0xd] = -(pbVar1[0x37] == bVar34);
  auVar66[0xe] = -(pbVar1[0x3b] == bVar34);
  auVar66[0xf] = -(pbVar1[0x3f] == bVar34);
  auVar9[1] = -(pbVar1[4] == bVar34);
  auVar9[0] = -(*pbVar1 == bVar34);
  auVar9[2] = -(pbVar1[8] == bVar34);
  auVar9[3] = -(pbVar1[0xc] == bVar34);
  auVar9[4] = -(pbVar1[0x10] == bVar34);
  auVar9[5] = -(pbVar1[0x14] == bVar34);
  auVar9[6] = -(pbVar1[0x18] == bVar34);
  auVar9[7] = -(pbVar1[0x1c] == bVar34);
  auVar9[8] = -(pbVar1[0x20] == bVar34);
  auVar9[9] = -(pbVar1[0x24] == bVar34);
  auVar9[10] = -(pbVar1[0x28] == bVar34);
  auVar9[0xb] = -(pbVar1[0x2c] == bVar34);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  auVar9[0xc] = -(pbVar1[0x30] == bVar34);
  auVar9[0xd] = -(pbVar1[0x34] == bVar34);
  auVar9[0xe] = -(pbVar1[0x38] == bVar34);
  auVar9[0xf] = -(pbVar1[0x3c] == bVar34);
  auVar80 = NEON_sri(auVar79,auVar9,1,1);
  auVar12[1] = -(pbVar1[6] == bVar34);
  auVar12[0] = -(pbVar1[2] == bVar34);
  auVar12[2] = -(pbVar1[10] == bVar34);
  auVar12[3] = -(pbVar1[0xe] == bVar34);
  auVar12[4] = -(pbVar1[0x12] == bVar34);
  auVar12[5] = -(pbVar1[0x16] == bVar34);
  auVar12[6] = -(pbVar1[0x1a] == bVar34);
  auVar12[7] = -(pbVar1[0x1e] == bVar34);
  auVar12[8] = -(pbVar1[0x22] == bVar34);
  auVar12[9] = -(pbVar1[0x26] == bVar34);
  auVar12[10] = -(pbVar1[0x2a] == bVar34);
  auVar12[0xb] = -(pbVar1[0x2e] == bVar34);
  auVar12[0xc] = -(pbVar1[0x32] == bVar34);
  auVar12[0xd] = -(pbVar1[0x36] == bVar34);
  auVar12[0xe] = -(pbVar1[0x3a] == bVar34);
  auVar12[0xf] = -(pbVar1[0x3e] == bVar34);
  auVar65 = NEON_sri(auVar66,auVar12,1,1);
// WM - thanks for reading - discord.gg/sdkhDjTex
  auVar65 = NEON_sri(auVar65,auVar80,2,1);
  auVar65 = NEON_sri(auVar65,auVar65,4,1);
  uVar20 = CONCAT17((char)(auVar65._14_2_ >> 4),
                    CONCAT16((char)(auVar65._12_2_ >> 4),
                             CONCAT15((char)(auVar65._10_2_ >> 4),
                                      CONCAT14((char)(auVar65._8_2_ >> 4),
                                               CONCAT13((char)(auVar65._6_2_ >> 4),
                                                        CONCAT12((char)(auVar65._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar65._2_2_ >> 4)
                                                                          ,(char)(auVar65._0_2_ >> 4
                                                                                 ))))))));
  if (uVar20 != 0 && iVar29 != 0) {
    unaff_x27 = 0;
    uVar17 = *(uint *)(puVar31 + 3);
    pdStack_180 = (dword *)*puVar31;
    unaff_x28 = puVar31[1];
    bVar34 = *pbVar1;
    uVar35 = (ulong)bVar34 & 0x3f;
    uVar20 = uVar20 >> uVar35 | uVar20 << 0x40 - uVar35;
    do {
      uVar35 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
      uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
      uVar27 = (int)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) + (uint)bVar34 & 0x3f;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar51 + (ulong)uVar27 * 4);
        if (uVar27 < uVar17) goto LAB_002da1d8;
        Hint_Prefetch(unaff_x28 + uVar27,0,0,0);
        adStack_170[unaff_x27] = uVar27;
        unaff_x27 = unaff_x27 + 1;
        iVar29 = iVar29 + -1;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      }
      uVar20 = uVar20 - 1 & uVar20;
      if ((uVar20 == 0) || (iVar29 == 0)) goto LAB_002da1d8;
    } while( true );
  }
  goto LAB_002da268;
code_r0x002da8b0:
  if (unaff_x27 != 0) {
    pdStack_318 = param_4;
    unaff_x24 = pdVar42 + 1;
    uVar17 = *pdVar42;
    unaff_x26 = (ulong)uVar17;
    iStack_31c = (uVar26 + ((int)pdStack_310 - (int)unaff_x28) + 3) - uVar30;
    pdVar41 = adStack_300;
    uVar20 = uVar28;
    do {
      pdVar40 = pdVar41 + 1;
      uVar30 = *pdVar41;
      unaff_x20 = (dword *)(ulong)uVar30;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar17) {
        param_4 = pdStack_310;
        lVar37 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
/*  more drops soon - github.com/pengussy  */
        uVar28 = lVar37 + 4;
        unaff_x23 = param_3;
        if (uVar20 < uVar28) {
          *(ulong *)pdStack_318 = (ulong)(iStack_31c - uVar30);
          uVar20 = uVar28;
          if ((uint *)((long)pdVar42 + uVar28) == param_3) break;
        }
      }
      uVar28 = uVar20;
      unaff_x27 = unaff_x27 - 1;
      pdVar41 = pdVar40;
      uVar20 = uVar28;
    } while (unaff_x27 != 0);
  }
  goto code_r0x002da940;
code_r0x002daf9c:
  if (unaff_x27 != 0) {
    pdStack_4a8 = param_4;
    unaff_x24 = pdVar41 + 1;
    uVar17 = *pdVar41;
    unaff_x26 = (ulong)uVar17;
    iStack_4ac = (uVar26 + ((int)pdStack_4a0 - (int)unaff_x28) + 3) - uVar30;
    pdVar40 = adStack_490;
    uVar20 = uVar28;
    do {
      pdVar42 = pdVar40 + 1;
      uVar30 = *pdVar40;
      unaff_x20 = (dword *)(ulong)uVar30;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar17) {
/* wm:no support for modified copies */
        param_4 = pdStack_4a0;
        lVar37 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1);
        uVar28 = lVar37 + 4;
        unaff_x23 = param_3;
        if (uVar20 < uVar28) {
          *(ulong *)pdStack_4a8 = (ulong)(iStack_4ac - uVar30);
          uVar20 = uVar28;
          if ((uint *)((long)pdVar41 + uVar28) == param_3) break;
        }
      }
      uVar28 = uVar20;
      unaff_x27 = unaff_x27 - 1;
      pdVar40 = pdVar42;
      uVar20 = uVar28;
    } while (unaff_x27 != 0);
  }
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  goto code_r0x002db02c;
code_r0x002db6a8:
  if (lVar37 != 0) {
    uVar20 = *puVar15;
    puVar18 = auStack_620;
    uVar35 = uVar28;
    do {
      uVar17 = *puVar18;
      puVar52 = (uint *)(lVar36 + (ulong)uVar17);
      if (*puVar52 == (uint)uVar20) {
        pdVar42 = pdVar40;
        lVar50 = func_0x002ad924((uint *)((long)puVar15 + 4),puVar52 + 1);
        uVar28 = lVar50 + 4;
        if (uVar35 < uVar28) {
          *(ulong *)param_4 =
               (ulong)(((uVar27 + ((int)pdVar40 - (int)lVar36) + 3) - iVar5) - uVar17);
          uVar35 = uVar28;
          if ((uint *)((long)puVar15 + uVar28) == param_3) break;
        }
      }
      uVar28 = uVar35;
      lVar37 = lVar37 + -1;
      puVar18 = puVar18 + 1;
      uVar35 = uVar28;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    } while (lVar37 != 0);
  }
  goto code_r0x002db738;
LAB_002da1d8:
  if (unaff_x27 != 0) {
    pdStack_188 = param_4;
    unaff_x24 = param_2 + 1;
    uVar17 = *param_2;
    unaff_x26 = (ulong)uVar17;
    iStack_18c = (uVar26 + ((int)pdStack_180 - (int)unaff_x28) + 3) - uVar30;
    pdVar42 = adStack_170;
    uVar20 = uVar28;
    do {
      unaff_x19 = pdVar42 + 1;
      uVar30 = *pdVar42;
      unaff_x20 = (dword *)(ulong)uVar30;
      if (*(uint *)(unaff_x28 + (long)unaff_x20) == uVar17) {
        param_4 = pdStack_180;
        lVar37 = func_0x002ad924(unaff_x24,(uint *)(unaff_x28 + (long)unaff_x20) + 1,param_3,
                                 pdStack_180,lVar50 + uStack_178);
        uVar28 = lVar37 + 4;
        unaff_x23 = param_3;
        if (uVar20 < uVar28) {
          *(ulong *)pdStack_188 = (ulong)(iStack_18c - uVar30);
          uVar20 = uVar28;
          if ((uint *)((long)param_2 + uVar28) == param_3) break;
        }
      }
      uVar28 = uVar20;
/* wm:reversing this took months of machine time */
      unaff_x27 = unaff_x27 - 1;
      pdVar42 = unaff_x19;
      uVar20 = uVar28;
    } while (unaff_x27 != 0);
  }
LAB_002da268:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar28;
  }
  auVar65 = ___stack_chk_fail();
  pdVar42 = auVar65._8_8_;
  lVar36 = auVar65._0_8_;
  uStack_1f0 = unaff_x28;
  uStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  lStack_1d8 = lVar50;
  pdStack_1d0 = unaff_x24;
/*  watermarked copy - do not remove  */
  pdStack_1c8 = unaff_x23;
  uStack_1c0 = uVar28;
  pdStack_1b8 = param_2;
  pdStack_1b0 = unaff_x20;
  pdStack_1a8 = unaff_x19;
  puStack_1a0 = auStack_68 + 0x58;
  puStack_198 = &SUB_002da3e4;
  lStack_200 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar37 = *(long *)(lVar36 + 0x70);
  lVar50 = *(long *)(lVar36 + 0x38);
  iVar5 = *(int *)(lVar36 + 0x34);
  lVar51 = *(long *)(lVar36 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(lVar36 + 0x100) & 0x1f);
  uVar30 = *(uint *)(lVar36 + 0x18);
  uStack_308 = (ulong)uVar30;
  uVar28 = (long)pdVar42 - lVar51;
  uVar26 = (uint)uVar28;
  uVar17 = uVar26 - uVar27;
  if (uVar26 - *(uint *)(lVar36 + 0x1c) <= uVar27 || *(int *)(lVar36 + 0x28) != 0) {
    uVar17 = *(uint *)(lVar36 + 0x1c);
  }
  uVar27 = *(uint *)(lVar36 + 0x10c);
  if (3 < uVar27) {
    uVar27 = 4;
  }
  uVar39 = *(ulong *)(lVar36 + 0x60);
/*  thanks for reading - discord.gg/sdkhDjTex  */
  iVar29 = 1 << (ulong)(uVar27 & 0x1f);
  puVar31 = *(undefined8 **)(lVar36 + 0xf8);
  uVar35 = (ulong)(*(long *)pdVar42 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar31 + 0x34)) & 0x3f);
  uVar20 = uVar35 >> 4 & 0xffffff0;
  pbVar1 = (byte *)(puVar31[7] + uVar20);
  lVar3 = puVar31[0xe] + uVar20 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar36 + 300) == 0) {
    pdStack_318 = param_4;
    pdStack_310 = param_3;
    lVar21 = lVar36 + 0x40;
    uVar27 = *(uint *)(lVar36 + 0x2c);
    uVar20 = (ulong)uVar27;
    lVar22 = lVar50;
// keep the notice, keep the source honest
    lVar24 = lVar37;
    if (0x180 < uVar26 - uVar27) {
      if (uVar27 < 0xffffffa0) {
        uVar48 = uVar20 + 0x60;
        do {
          uVar49 = (*(long *)(lVar51 + 8 + uVar20) * -0x30e4432340650000 ^ *(ulong *)(lVar36 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar43 = uVar49 >> 4 & 0xffffff0;
          Hint_Prefetch(lVar37 + uVar43 * 4,0,0,0);
          Hint_Prefetch(lVar50 + uVar43,0,0,0);
          uVar44 = *(uint *)(lVar21 + (uVar20 & 7) * 4);
          *(int *)(lVar21 + (uVar20 & 7) * 4) = (int)uVar49;
          uVar49 = (ulong)(uVar44 >> 4) & 0xffffff0;
          pbVar2 = (byte *)(lVar50 + uVar49);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0xf);
          uVar27 = 0xf;
          if ((*pbVar2 & 0xf) != 1) {
            uVar27 = 0;
/*  chat: discord.gg/sdkhDjTex  */
          }
          unaff_x24 = (dword *)(uVar27 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar44;
          *(int *)(lVar37 + uVar49 * 4 + (long)unaff_x24 * 4) = (int)uVar20;
          uVar20 = uVar20 + 1;
        } while (uVar48 != uVar20);
        lVar24 = *(long *)(lVar36 + 0x70);
        lVar22 = *(long *)(lVar36 + 0x38);
      }
      uVar27 = uVar26 - 0x20;
      uVar20 = (ulong)uVar27;
      iVar46 = (int)(undefined1 *)((long)pdVar42 + 1U) - (int)(undefined1 *)(lVar51 + uVar20);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar45 = 8;
      if (iVar46 + 1U < 8) {
        iVar45 = iVar46 + 1;
      }
      iVar46 = 0;
      if ((undefined1 *)(lVar51 + uVar20) <= (undefined1 *)((long)pdVar42 + 1U)) {
        iVar46 = iVar45;
      }
      unaff_x20 = (dword *)(ulong)(iVar46 + uVar27);
      if (uVar27 < iVar46 + uVar27) {
        iVar45 = *(int *)(lVar36 + 0x34);
        unaff_x20 = *(dword **)(lVar36 + 0x60);
        do {
/* wm:chat: discord.gg/sdkhDjTex */
          unaff_x23 = (dword *)((*(long *)(lVar51 + uVar20) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar45) & 0x3f));
          uVar48 = (ulong)unaff_x23 >> 4 & 0xffffff0;
          unaff_x26 = uVar48 * 4;
          Hint_Prefetch(lVar24 + unaff_x26,0,0,0);
          Hint_Prefetch(lVar22 + uVar48,0,0,0);
          unaff_x24 = (dword *)(uVar20 & 7);
          *(int *)(lVar21 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar20 = uVar20 + 1;
          iVar46 = iVar46 + -1;
        } while (iVar46 != 0);
      }
    }
    if (uVar27 < uVar26) {
      lVar25 = *(long *)(lVar36 + 8);
      iVar45 = *(int *)(lVar36 + 0x34);
      puVar18 = (uint *)(ulong)uVar27;
      unaff_x20 = (dword *)(uVar28 & 0xffffffff);
      do {
        uVar20 = (*(long *)(lVar25 + 8 + (long)puVar18) * -0x30e4432340650000 ^
                 *(ulong *)(lVar36 + 0x60)) >> ((ulong)(0x38 - iVar45) & 0x3f);
        uVar48 = uVar20 >> 4 & 0xffffff0;
        Hint_Prefetch(lVar24 + uVar48 * 4,0,0,0);
        Hint_Prefetch(lVar22 + uVar48,0,0,0);
        uVar44 = *(uint *)(lVar21 + ((ulong)puVar18 & 7) * 4);
/* WM - origin: github.com/pengussy */
        unaff_x26 = (ulong)uVar44;
        *(int *)(lVar21 + ((ulong)puVar18 & 7) * 4) = (int)uVar20;
        uVar20 = (ulong)(uVar44 >> 4) & 0xffffff0;
        unaff_x24 = (dword *)(lVar24 + uVar20 * 4);
        unaff_x23 = (dword *)(lVar22 + uVar20);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0xf);
        uVar27 = 0xf;
        if (((byte)*unaff_x23 & 0xf) != 1) {
          uVar27 = 0;
        }
        unaff_x27 = uVar27 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar44;
        unaff_x24[unaff_x27] = (uint)puVar18;
        puVar18 = (uint *)((long)puVar18 + 1);
      } while (puVar18 < unaff_x20);
    }
    *(uint *)(lVar36 + 0x2c) = uVar26;
    uVar20 = (*(long *)(lVar51 + (uVar28 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar39) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    uVar39 = uVar20 >> 4 & 0xffffff0;
    Hint_Prefetch(lVar37 + uVar39 * 4,0,0,0);
    Hint_Prefetch(lVar50 + uVar39,0,0,0);
    uVar27 = *(uint *)(lVar21 + (uVar28 & 7) * 4);
    *(int *)(lVar21 + (uVar28 & 7) * 4) = (int)uVar20;
  }
  else {
    uVar27 = (uint)((*(long *)pdVar42 * -0x30e4432340650000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar36 + 0x2c) = uVar26;
  }
  *(uint *)(lVar36 + 0x68) = *(int *)(lVar36 + 0x68) + uVar27;
  uVar28 = (ulong)(uVar27 >> 4) & 0xffffff0;
  lVar37 = lVar37 + uVar28 * 4;
  pbVar2 = (byte *)(lVar50 + uVar28);
  bVar34 = *pbVar2;
  bVar32 = *pbVar2;
  bVar38 = (byte)uVar27;
  uVar54 = CONCAT11(-(pbVar2[9] == bVar38),-(pbVar2[8] == bVar38));
  uVar55 = CONCAT13(-(pbVar2[0xb] == bVar38),CONCAT12(-(pbVar2[10] == bVar38),uVar54));
  uVar56 = CONCAT15(-(pbVar2[0xd] == bVar38),CONCAT14(-(pbVar2[0xc] == bVar38),uVar55));
  uVar28 = CONCAT17((char)(CONCAT17(-(pbVar2[0xf] == bVar38),
                                    CONCAT16(-(pbVar2[0xe] == bVar38),uVar56)) >> 0x34),
                    CONCAT16((char)((uint6)uVar56 >> 0x24),
                             CONCAT15((char)((uint)uVar55 >> 0x14),
                                      CONCAT14((char)(uVar54 >> 4),
                                               CONCAT13((char)(CONCAT11(-(pbVar2[7] == bVar38),
                                                                        -(pbVar2[6] == bVar38)) >> 4
                                                              ),CONCAT12((char)(CONCAT11(-(pbVar2[5]
                                                                                          == bVar38)
                                                                                         ,-(pbVar2[4
                                                  ] == bVar38)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(pbVar2[3] == bVar38),
                                                                           -(pbVar2[2] == bVar38))
                                                                 >> 4),
/* no support for modified copies - github.com/pengussy */
                                                           (char)(CONCAT11(-(pbVar2[1] == bVar38),
                                                                           -(bVar32 == bVar38)) >> 4
                                                                 ))))))));
  uVar20 = (ulong)bVar34 & 0xf;
  pdVar40 = (dword *)(ulong)bVar32;
  uVar28 = (uVar28 >> uVar20 * 4 | uVar28 << uVar20 * -4 + 0x40) & 0x8888888888888888;
  if (uVar28 != 0) {
    lVar50 = 0;
    do {
      uVar20 = (uVar28 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar27 = (int)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) + (bVar34 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar37 + (ulong)uVar27 * 4);
        if (uVar27 < uVar17) goto code_r0x002da674;
        Hint_Prefetch(lVar51 + (ulong)uVar27,0,0,0);
        adStack_300[lVar50] = uVar27;
        lVar50 = lVar50 + 1;
        iVar29 = iVar29 + -1;
      }
      uVar28 = uVar28 - 1 & uVar28;
      if ((uVar28 == 0) || (iVar29 == 0)) goto code_r0x002da674;
    } while( true );
  }
  lVar50 = 0;
code_r0x002da674:
  uVar17 = 0xf;
  if ((bVar32 & 0xf) != 1) {
    uVar17 = 0;
  }
  lVar21 = (ulong)uVar17 + (ulong)(bVar32 - 1 & 0xf);
  *pbVar2 = (byte)lVar21;
/* donate: donate/README.md - github.com/pengussy */
  pbVar2[lVar21] = bVar38;
  iVar5 = *(int *)(lVar36 + 0x2c);
  *(int *)(lVar36 + 0x2c) = iVar5 + 1;
  *(int *)(lVar37 + lVar21 * 4) = iVar5;
  if (lVar50 == 0) {
    uVar28 = 3;
  }
  else {
    lVar37 = 0;
    unaff_x27 = (ulong)(uVar26 + 3);
    unaff_x26 = lVar51 + 8;
    uVar20 = 3;
    do {
      uVar27 = adStack_300[lVar37];
      pdVar41 = (dword *)(lVar51 + (ulong)uVar27);
      uVar17 = *(uint *)((long)pdVar41 + (uVar20 - 3));
      pdVar40 = (dword *)(ulong)uVar17;
      uVar44 = *(uint *)((long)pdVar42 + (uVar20 - 3));
      unaff_x20 = (dword *)(ulong)uVar44;
      if (uVar17 == uVar44) {
        if (pdVar42 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar42;
          if (*(uint **)pdVar41 == unaff_x20) {
            pdVar40 = (dword *)0x0;
            pdVar41 = (dword *)(unaff_x26 + uVar27);
            pdVar47 = pdVar42 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar47) goto code_r0x002da764;
              unaff_x20 = *(dword **)pdVar41;
              unaff_x23 = pdVar47 + 2;
              unaff_x24 = *(dword **)pdVar47;
              pdVar40 = pdVar40 + 2;
              pdVar41 = pdVar41 + 2;
              pdVar47 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar28 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
// do not claim this as your own
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20);
            uVar28 = (long)pdVar40 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar28 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar41;
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            pdVar40 = (dword *)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20);
            uVar28 = (ulong)pdVar40 >> 3;
          }
        }
        else {
          pdVar47 = pdVar42;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
code_r0x002da764:
          if (pdVar47 < (uint *)((long)param_3 + -3)) {
            pdVar40 = pdVar47 + 1;
            unaff_x20 = pdVar41 + 1;
            if (*pdVar41 == *pdVar47) {
              pdVar47 = pdVar40;
              pdVar41 = unaff_x20;
            }
          }
          unaff_x23 = pdVar47;
          if (pdVar47 < (uint *)((long)param_3 + -1)) {
            pdVar40 = (dword *)((long)pdVar47 + 2);
            unaff_x20 = (dword *)((long)pdVar41 + 2);
            if ((short)*pdVar41 == (short)*pdVar47) {
              pdVar41 = unaff_x20;
              unaff_x23 = pdVar40;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar40 = (dword *)(ulong)(byte)*pdVar41;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar41 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
          }
          uVar28 = (long)unaff_x23 - (long)pdVar42;
        }
        if (uVar20 < uVar28) {
          *(ulong *)param_4 = (ulong)((uVar26 + 3) - uVar27);
          uVar20 = uVar28;
          if ((uint *)((long)pdVar42 + uVar28) == param_3) break;
        }
      }
      lVar37 = lVar37 + 1;
      uVar28 = uVar20;
    } while (lVar37 != lVar50);
/* origin: github.com/pengussy - github.com/pengussy */
  }
  bVar34 = *pbVar1;
  bVar32 = (byte)uVar35;
  uVar54 = CONCAT11(-(pbVar1[1] == bVar32),-(*pbVar1 == bVar32));
  uVar55 = CONCAT13(-(pbVar1[3] == bVar32),CONCAT12(-(pbVar1[2] == bVar32),uVar54));
  uVar56 = CONCAT15(-(pbVar1[5] == bVar32),CONCAT14(-(pbVar1[4] == bVar32),uVar55));
  uVar57 = CONCAT17(-(pbVar1[7] == bVar32),CONCAT16(-(pbVar1[6] == bVar32),uVar56));
  auVar58._0_10_ = CONCAT19(-(pbVar1[9] == bVar32),CONCAT18(-(pbVar1[8] == bVar32),uVar57));
  auVar58[10] = -(pbVar1[10] == bVar32);
  auVar58[0xb] = -(pbVar1[0xb] == bVar32);
  auVar61[0xc] = -(pbVar1[0xc] == bVar32);
  auVar61._0_12_ = auVar58;
  auVar61[0xd] = -(pbVar1[0xd] == bVar32);
  auVar67[0xe] = -(pbVar1[0xe] == bVar32);
  auVar67._0_14_ = auVar61;
  auVar67[0xf] = -(pbVar1[0xf] == bVar32);
  uVar35 = CONCAT17((char)(auVar67._14_2_ >> 4),
                    CONCAT16((char)(auVar61._12_2_ >> 4),
                             CONCAT15((char)(auVar58._10_2_ >> 4),
                                      CONCAT14((char)((unkuint10)auVar58._0_10_ >> 0x44),
                                               CONCAT13((char)((ulong)uVar57 >> 0x34),
                                                        CONCAT12((char)((uint6)uVar56 >> 0x24),
                                                                 CONCAT11((char)((uint)uVar55 >>
                                                                                0x14),
                                                                          (char)(uVar54 >> 4))))))))
  ;
  uVar20 = (ulong)bVar34 & 0xf;
  uVar20 = (uVar35 >> uVar20 * 4 | uVar35 << uVar20 * -4 + 0x40) & 0x8888888888888888;
  if (uVar20 != 0 && iVar29 != 0) {
    unaff_x27 = 0;
    uVar17 = *(uint *)(puVar31 + 3);
    pdStack_310 = (dword *)*puVar31;
    unaff_x28 = puVar31[1];
    do {
      uVar35 = (uVar20 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
/* WM - more drops soon - github.com/pengussy */
      uVar27 = (int)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) + (bVar34 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar3 + (ulong)uVar27 * 4);
        if (uVar27 < uVar17) goto code_r0x002da8b0;
        Hint_Prefetch(unaff_x28 + uVar27,0,0,0);
        adStack_300[unaff_x27] = uVar27;
        unaff_x27 = unaff_x27 + 1;
        iVar29 = iVar29 + -1;
      }
      uVar20 = uVar20 - 1 & uVar20;
      if ((uVar20 == 0) || (iVar29 == 0)) goto code_r0x002da8b0;
    } while( true );
  }
code_r0x002da940:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_200) {
    return uVar28;
  }
  auVar65 = ___stack_chk_fail();
  pdVar41 = auVar65._8_8_;
  lVar36 = auVar65._0_8_;
  uStack_380 = unaff_x28;
  uStack_378 = unaff_x27;
  uStack_370 = unaff_x26;
  lStack_368 = lVar51;
  pdStack_360 = unaff_x24;
  pdStack_358 = unaff_x23;
  uStack_350 = uVar28;
  pdStack_348 = pdVar42;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  pdStack_340 = unaff_x20;
  pdStack_338 = pdVar40;
  ppuStack_330 = &puStack_1a0;
  puStack_328 = &SUB_002daaa8;
  lStack_390 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar37 = *(long *)(lVar36 + 0x70);
  lVar50 = *(long *)(lVar36 + 0x38);
  iVar5 = *(int *)(lVar36 + 0x34);
  lVar51 = *(long *)(lVar36 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(lVar36 + 0x100) & 0x1f);
  uVar30 = *(uint *)(lVar36 + 0x18);
  uStack_498 = (ulong)uVar30;
  uVar28 = (long)pdVar41 - lVar51;
  uVar26 = (uint)uVar28;
  uVar17 = uVar26 - uVar27;
  if (uVar26 - *(uint *)(lVar36 + 0x1c) <= uVar27 || *(int *)(lVar36 + 0x28) != 0) {
    uVar17 = *(uint *)(lVar36 + 0x1c);
  }
  uVar27 = *(uint *)(lVar36 + 0x10c);
  if (4 < uVar27) {
    uVar27 = 5;
  }
  uVar39 = *(ulong *)(lVar36 + 0x60);
  iVar29 = 1 << (ulong)(uVar27 & 0x1f);
  puVar31 = *(undefined8 **)(lVar36 + 0xf8);
  uVar35 = (ulong)(*(long *)pdVar41 * -0x30e4432340650000) >>
           ((ulong)(0x38 - *(int *)((long)puVar31 + 0x34)) & 0x3f);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  uVar20 = uVar35 >> 3 & 0x1fffffe0;
  pbVar1 = (byte *)(puVar31[7] + uVar20);
  lVar3 = puVar31[0xe] + uVar20 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  if (*(int *)(lVar36 + 300) == 0) {
    pdStack_4a0 = (dword *)CONCAT44(pdStack_4a0._4_4_,iVar5);
    pdStack_4a8 = param_3;
    lVar21 = lVar36 + 0x40;
    uVar27 = *(uint *)(lVar36 + 0x2c);
    uVar20 = (ulong)uVar27;
    lVar22 = lVar50;
    lVar24 = lVar37;
    if (0x180 < uVar26 - uVar27) {
      if (uVar27 < 0xffffffa0) {
        uVar48 = uVar20 + 0x60;
        do {
          uVar49 = (*(long *)(lVar51 + 8 + uVar20) * -0x30e4432340650000 ^ *(ulong *)(lVar36 + 0x60)
                   ) >> ((ulong)(0x38 - iVar5) & 0x3f);
          uVar43 = uVar49 >> 3 & 0x1fffffe0;
          lVar22 = lVar37 + uVar43 * 4;
          Hint_Prefetch(lVar22,0,0,0);
// WM - proprietary - see LICENSE - do not sell
          Hint_Prefetch(lVar22 + 0x40,0,0,0);
          Hint_Prefetch(lVar50 + uVar43,0,0,0);
          uVar44 = *(uint *)(lVar21 + (uVar20 & 7) * 4);
          *(int *)(lVar21 + (uVar20 & 7) * 4) = (int)uVar49;
          uVar49 = (ulong)(uVar44 >> 3) & 0x1fffffe0;
          pbVar2 = (byte *)(lVar50 + uVar49);
          unaff_x26 = (ulong)(*pbVar2 - 1 & 0x1f);
          uVar27 = 0x1f;
          if ((*pbVar2 & 0x1f) != 1) {
            uVar27 = 0;
          }
          unaff_x24 = (dword *)(uVar27 + unaff_x26);
          *pbVar2 = (byte)unaff_x24;
          pbVar2[(long)unaff_x24] = (byte)uVar44;
          *(int *)(lVar37 + uVar49 * 4 + (long)unaff_x24 * 4) = (int)uVar20;
          uVar20 = uVar20 + 1;
        } while (uVar48 != uVar20);
        lVar24 = *(long *)(lVar36 + 0x70);
        lVar22 = *(long *)(lVar36 + 0x38);
      }
      uVar27 = uVar26 - 0x20;
      uVar20 = (ulong)uVar27;
      iVar46 = (int)(undefined1 *)((long)pdVar41 + 1U) - (int)(undefined1 *)(lVar51 + uVar20);
      unaff_x23 = &MACH_HEADER.cpusubtype;
      iVar45 = 8;
      if (iVar46 + 1U < 8) {
        iVar45 = iVar46 + 1;
/* wm:proprietary - see LICENSE - do not sell */
      }
      iVar46 = 0;
      if ((undefined1 *)(lVar51 + uVar20) <= (undefined1 *)((long)pdVar41 + 1U)) {
        iVar46 = iVar45;
      }
      unaff_x20 = (dword *)(ulong)(iVar46 + uVar27);
      if (uVar27 < iVar46 + uVar27) {
        iVar45 = *(int *)(lVar36 + 0x34);
        unaff_x20 = *(dword **)(lVar36 + 0x60);
        do {
          unaff_x23 = (dword *)((*(long *)(lVar51 + uVar20) * -0x30e4432340650000 ^ (ulong)unaff_x20
                                ) >> ((ulong)(0x38 - iVar45) & 0x3f));
          uVar48 = (ulong)unaff_x23 >> 3 & 0x1fffffe0;
          unaff_x26 = lVar24 + uVar48 * 4;
          Hint_Prefetch(unaff_x26,0,0,0);
          Hint_Prefetch(unaff_x26 + 0x40,0,0,0);
          Hint_Prefetch(lVar22 + uVar48,0,0,0);
// WM - do not claim this as your own
          unaff_x24 = (dword *)(uVar20 & 7);
          *(int *)(lVar21 + (long)unaff_x24 * 4) = (int)unaff_x23;
          uVar20 = uVar20 + 1;
          iVar46 = iVar46 + -1;
        } while (iVar46 != 0);
      }
    }
    if (uVar27 < uVar26) {
      lVar25 = *(long *)(lVar36 + 8);
      iVar45 = *(int *)(lVar36 + 0x34);
      puVar18 = (uint *)(ulong)uVar27;
      unaff_x20 = (dword *)(uVar28 & 0xffffffff);
      do {
        uVar20 = (*(long *)(lVar25 + 8 + (long)puVar18) * -0x30e4432340650000 ^
                 *(ulong *)(lVar36 + 0x60)) >> ((ulong)(0x38 - iVar45) & 0x3f);
        uVar48 = uVar20 >> 3 & 0x1fffffe0;
        lVar4 = lVar24 + uVar48 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        Hint_Prefetch(lVar22 + uVar48,0,0,0);
        uVar44 = *(uint *)(lVar21 + ((ulong)puVar18 & 7) * 4);
        unaff_x26 = (ulong)uVar44;
        *(int *)(lVar21 + ((ulong)puVar18 & 7) * 4) = (int)uVar20;
        uVar20 = (ulong)(uVar44 >> 3) & 0x1fffffe0;
        unaff_x24 = (dword *)(lVar24 + uVar20 * 4);
        unaff_x23 = (dword *)(lVar22 + uVar20);
        unaff_x28 = (ulong)((byte)*unaff_x23 - 1 & 0x1f);
        uVar27 = 0x1f;
/*  keep the notice, keep the source honest  */
        if (((byte)*unaff_x23 & 0x1f) != 1) {
          uVar27 = 0;
        }
        unaff_x27 = uVar27 + unaff_x28;
        *(char *)unaff_x23 = (char)unaff_x27;
        *(char *)((long)unaff_x23 + unaff_x27) = (char)uVar44;
        unaff_x24[unaff_x27] = (uint)puVar18;
        puVar18 = (uint *)((long)puVar18 + 1);
      } while (puVar18 < unaff_x20);
    }
    *(uint *)(lVar36 + 0x2c) = uVar26;
    uVar20 = (*(long *)(lVar51 + (uVar28 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar39) >>
             ((ulong)(0x38 - iVar5) & 0x3f);
    uVar39 = uVar20 >> 3 & 0x1fffffe0;
    lVar22 = lVar37 + uVar39 * 4;
    Hint_Prefetch(lVar22,0,0,0);
    Hint_Prefetch(lVar22 + 0x40,0,0,0);
    Hint_Prefetch(lVar50 + uVar39,0,0,0);
// proprietary - see LICENSE - do not sell
    uVar27 = *(uint *)(lVar21 + (uVar28 & 7) * 4);
    *(int *)(lVar21 + (uVar28 & 7) * 4) = (int)uVar20;
  }
  else {
    uVar27 = (uint)((*(long *)pdVar41 * -0x30e4432340650000 ^ uVar39) >>
                   ((ulong)(0x38 - iVar5) & 0x3f));
    *(uint *)(lVar36 + 0x2c) = uVar26;
  }
  *(uint *)(lVar36 + 0x68) = *(int *)(lVar36 + 0x68) + uVar27;
  uVar28 = (ulong)(uVar27 >> 3) & 0x1fffffe0;
  lVar37 = lVar37 + uVar28 * 4;
  pbVar2 = (byte *)(lVar50 + uVar28);
  bVar34 = *pbVar2;
  pdVar42 = (dword *)(ulong)bVar34;
  bVar32 = (byte)uVar27;
  uVar72 = CONCAT11(-(bVar32 == (byte)((ushort)*(undefined2 *)pbVar2 >> 8)),
                    -(bVar32 == (byte)*(undefined2 *)pbVar2));
  uVar73 = CONCAT13(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 4) >> 8)),
                    CONCAT12(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 4)),uVar72));
  uVar74 = CONCAT15(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 8) >> 8)),
                    CONCAT14(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 8)),uVar73));
// origin: github.com/pengussy
  uVar75 = CONCAT11(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x10) >> 8)),
                    -(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0x10)));
  uVar76 = CONCAT13(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x14) >> 8)),
                    CONCAT12(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0x14)),uVar75));
  uVar77 = CONCAT15(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x18) >> 8)),
                    CONCAT14(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0x18)),uVar76));
  uVar54 = CONCAT11(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 2) >> 8)),
                    -(bVar32 == (byte)*(undefined2 *)(pbVar2 + 2)));
  uVar55 = CONCAT13(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 6) >> 8)),
                    CONCAT12(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 6)),uVar54));
  uVar56 = CONCAT15(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 10) >> 8)),
                    CONCAT14(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 10)),uVar55));
  uVar57 = CONCAT17(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0xe) >> 8)),
                    CONCAT16(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0xe)),uVar56));
  auVar59._0_10_ =
       CONCAT19(-(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x12) >> 8)),
                CONCAT18(-(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0x12)),uVar57));
  auVar59[10] = -(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0x16));
  auVar59[0xb] = -(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x16) >> 8));
  auVar62[0xc] = -(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0x1a));
  auVar62._0_12_ = auVar59;
  auVar62[0xd] = -(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1a) >> 8));
  auVar68[0xe] = -(bVar32 == (byte)*(undefined2 *)(pbVar2 + 0x1e));
  auVar68._0_14_ = auVar62;
  auVar68[0xf] = -(bVar32 == (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1e) >> 8));
  uVar28 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar32 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar2 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar32 ==
                                                       (byte)*(undefined2 *)(pbVar2 + 0x1c)),uVar77)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar77 >> 0x26),
                                      CONCAT15((char)((uint)uVar76 >> 0x16),
                                               CONCAT14((char)(uVar75 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar32 ==
                                                                                  (byte)((ushort)*(
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                                                  undefined2 *)(pbVar2 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar32 ==
                                                            (byte)*(undefined2 *)(pbVar2 + 0xc)),
                                                           uVar74)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar74 >> 0x26),
                                                           CONCAT11((char)((uint)uVar73 >> 0x16),
                                                                    (char)(uVar72 >> 6)))))))),
                    CONCAT17((char)(auVar68._14_2_ >> 6),
                             CONCAT16((char)(auVar62._12_2_ >> 6),
                                      CONCAT15((char)(auVar59._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar59._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar57 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar56 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar55 >> 0x16),(char)(uVar54 >> 6)))))))),4,1);
  uVar28 = (uVar28 >> ((ulong)bVar34 & 0x1f) * 2 | uVar28 << ((ulong)bVar34 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar28 != 0) {
    lVar50 = 0;
    do {
      uVar20 = (uVar28 << 1 & 0xcccccccccccccccc) >> 2 | (uVar28 << 1 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar27 = (int)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) + (bVar34 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar37 + (ulong)uVar27 * 4);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (uVar27 < uVar17) goto code_r0x002dad54;
        Hint_Prefetch(lVar51 + (ulong)uVar27,0,0,0);
        adStack_490[lVar50] = uVar27;
        lVar50 = lVar50 + 1;
        iVar29 = iVar29 + -1;
      }
      uVar28 = uVar28 - 1 & uVar28;
      if ((uVar28 == 0) || (iVar29 == 0)) goto code_r0x002dad54;
    } while( true );
  }
  lVar50 = 0;
code_r0x002dad54:
  uVar17 = 0x1f;
  if ((bVar34 & 0x1f) != 1) {
    uVar17 = 0;
  }
  lVar21 = (ulong)uVar17 + (ulong)(bVar34 - 1 & 0x1f);
  *pbVar2 = (byte)lVar21;
  pbVar2[lVar21] = bVar32;
  iVar5 = *(int *)(lVar36 + 0x2c);
  *(int *)(lVar36 + 0x2c) = iVar5 + 1;
  *(int *)(lVar37 + lVar21 * 4) = iVar5;
  if (lVar50 == 0) {
    uVar28 = 3;
  }
  else {
    lVar37 = 0;
    unaff_x27 = (ulong)(uVar26 + 3);
    unaff_x26 = lVar51 + 8;
    uVar20 = 3;
    do {
      uVar27 = adStack_490[lVar37];
      pdVar40 = (dword *)(lVar51 + (ulong)uVar27);
      uVar17 = *(uint *)((long)pdVar40 + (uVar20 - 3));
      pdVar42 = (dword *)(ulong)uVar17;
      uVar44 = *(uint *)((long)pdVar41 + (uVar20 - 3));
      unaff_x20 = (dword *)(ulong)uVar44;
      if (uVar17 == uVar44) {
/* wm:keep the notice, keep the source honest */
        if (pdVar41 < (uint *)((long)param_3 + -7)) {
          unaff_x20 = *(dword **)pdVar41;
          if (*(uint **)pdVar40 == unaff_x20) {
            pdVar42 = (dword *)0x0;
            pdVar40 = (dword *)(unaff_x26 + uVar27);
            pdVar47 = pdVar41 + 2;
            do {
              if ((uint *)((long)param_3 + -7) <= pdVar47) goto code_r0x002dae44;
              unaff_x20 = *(dword **)pdVar40;
              unaff_x23 = pdVar47 + 2;
              unaff_x24 = *(dword **)pdVar47;
              pdVar42 = pdVar42 + 2;
              pdVar40 = pdVar40 + 2;
              pdVar47 = unaff_x23;
            } while (unaff_x20 == unaff_x24);
            uVar28 = (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (((ulong)unaff_x24 ^ (ulong)unaff_x20) & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            unaff_x20 = (dword *)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20);
            uVar28 = (long)pdVar42 + ((ulong)unaff_x20 >> 3);
          }
          else {
            uVar28 = (ulong)unaff_x20 ^ (ulong)*(uint **)pdVar40;
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            pdVar42 = (dword *)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20);
/* proprietary - see LICENSE - do not sell */
            uVar28 = (ulong)pdVar42 >> 3;
          }
        }
        else {
          pdVar47 = pdVar41;
code_r0x002dae44:
          if (pdVar47 < (uint *)((long)param_3 + -3)) {
            pdVar42 = pdVar47 + 1;
            unaff_x20 = pdVar40 + 1;
            if (*pdVar40 == *pdVar47) {
              pdVar47 = pdVar42;
              pdVar40 = unaff_x20;
            }
          }
          unaff_x23 = pdVar47;
          if (pdVar47 < (uint *)((long)param_3 + -1)) {
            pdVar42 = (dword *)((long)pdVar47 + 2);
            unaff_x20 = (dword *)((long)pdVar40 + 2);
            if ((short)*pdVar40 == (short)*pdVar47) {
              pdVar40 = unaff_x20;
              unaff_x23 = pdVar42;
            }
          }
          if (unaff_x23 < param_3) {
            pdVar42 = (dword *)(ulong)(byte)*pdVar40;
            unaff_x20 = (dword *)((long)unaff_x23 + 1);
            if ((byte)*pdVar40 == (byte)*unaff_x23) {
              unaff_x23 = unaff_x20;
            }
/* WM - stripping the watermark breaks the license */
          }
          uVar28 = (long)unaff_x23 - (long)pdVar41;
        }
        if (uVar20 < uVar28) {
          *(ulong *)param_4 = (ulong)((uVar26 + 3) - uVar27);
          uVar20 = uVar28;
          if ((uint *)((long)pdVar41 + uVar28) == param_3) break;
        }
      }
      lVar37 = lVar37 + 1;
      uVar28 = uVar20;
    } while (lVar37 != lVar50);
  }
  bVar34 = *pbVar1;
  cVar33 = (char)uVar35;
  uVar72 = CONCAT11(-(cVar33 == (char)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(cVar33 == (char)*(undefined2 *)pbVar1));
  uVar73 = CONCAT13(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 4)),uVar72));
  uVar74 = CONCAT15(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 8)),uVar73));
  uVar75 = CONCAT11(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(cVar33 == (char)*(undefined2 *)(pbVar1 + 0x10)));
  uVar76 = CONCAT13(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
/* wm:more drops soon - github.com/pengussy */
                    CONCAT12(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 0x14)),uVar75));
  uVar77 = CONCAT15(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 0x18)),uVar76));
  uVar54 = CONCAT11(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(cVar33 == (char)*(undefined2 *)(pbVar1 + 2)));
  uVar55 = CONCAT13(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 6)),uVar54));
  uVar56 = CONCAT15(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 10)),uVar55));
  uVar57 = CONCAT17(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 0xe)),uVar56));
  auVar60._0_10_ =
       CONCAT19(-(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(cVar33 == (char)*(undefined2 *)(pbVar1 + 0x12)),uVar57));
  auVar60[10] = -(cVar33 == (char)*(undefined2 *)(pbVar1 + 0x16));
  auVar60[0xb] = -(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar63[0xc] = -(cVar33 == (char)*(undefined2 *)(pbVar1 + 0x1a));
  auVar63._0_12_ = auVar60;
  auVar63[0xd] = -(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar69[0xe] = -(cVar33 == (char)*(undefined2 *)(pbVar1 + 0x1e));
  auVar69._0_14_ = auVar63;
  auVar69[0xf] = -(cVar33 == (char)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar35 = NEON_sli(CONCAT17((char)(CONCAT17(-(cVar33 ==
                                              (char)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(cVar33 ==
                                                       (char)*(undefined2 *)(pbVar1 + 0x1c)),uVar77)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar77 >> 0x26),
                                      CONCAT15((char)((uint)uVar76 >> 0x16),
                                               CONCAT14((char)(uVar75 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(cVar33 ==
                                                                                  (char)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
// no support for modified copies
                                                  CONCAT16(-(cVar33 ==
                                                            (char)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar74)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar74 >> 0x26),
                                                           CONCAT11((char)((uint)uVar73 >> 0x16),
                                                                    (char)(uVar72 >> 6)))))))),
                    CONCAT17((char)(auVar69._14_2_ >> 6),
                             CONCAT16((char)(auVar63._12_2_ >> 6),
                                      CONCAT15((char)(auVar60._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar60._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar57 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar56 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar55 >> 0x16),(char)(uVar54 >> 6)))))))),4,1);
  uVar20 = (ulong)bVar34 & 0x1f;
  uVar20 = (uVar35 >> uVar20 * 2 | uVar35 << uVar20 * -2 + 0x40) & 0x5555555555555555;
  if (uVar20 != 0 && iVar29 != 0) {
    unaff_x27 = 0;
    uVar17 = *(uint *)(puVar31 + 3);
    pdStack_4a0 = (dword *)*puVar31;
    unaff_x28 = puVar31[1];
    do {
      uVar35 = (uVar20 << 1 & 0xcccccccccccccccc) >> 2 | (uVar20 << 1 & 0x3333333333333333) << 2;
      uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
      uVar27 = (int)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) + (bVar34 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar27 != 0) {
        uVar27 = *(uint *)(lVar3 + (ulong)uVar27 * 4);
        if (uVar27 < uVar17) goto code_r0x002daf9c;
        Hint_Prefetch(unaff_x28 + uVar27,0,0,0);
        adStack_490[unaff_x27] = uVar27;
        unaff_x27 = unaff_x27 + 1;
        iVar29 = iVar29 + -1;
      }
      uVar20 = uVar20 - 1 & uVar20;
// WM - more drops soon - github.com/pengussy
      if ((uVar20 == 0) || (iVar29 == 0)) goto code_r0x002daf9c;
    } while( true );
  }
code_r0x002db02c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_390) {
    return uVar28;
  }
  auVar65 = ___stack_chk_fail();
  puVar15 = auVar65._8_8_;
  lVar36 = auVar65._0_8_;
  uStack_510 = unaff_x28;
  uStack_508 = unaff_x27;
  uStack_500 = unaff_x26;
  lStack_4f8 = lVar51;
  pdStack_4f0 = unaff_x24;
  pdStack_4e8 = unaff_x23;
  uStack_4e0 = uVar28;
  pdStack_4d8 = pdVar41;
  pdStack_4d0 = unaff_x20;
  pdStack_4c8 = pdVar42;
  pppuStack_4c0 = &ppuStack_330;
  puStack_4b8 = &SUB_002db1a0;
  lStack_520 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar37 = *(long *)(lVar36 + 0x70);
  lVar50 = *(long *)(lVar36 + 0x38);
  iVar29 = *(int *)(lVar36 + 0x34);
  lVar51 = *(long *)(lVar36 + 8);
  uVar30 = 1 << (ulong)(*(uint *)(lVar36 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar36 + 0x18);
  uVar28 = (long)puVar15 - lVar51;
  uVar27 = (uint)uVar28;
  uVar17 = uVar27 - uVar30;
  if (uVar27 - *(uint *)(lVar36 + 0x1c) <= uVar30 || *(int *)(lVar36 + 0x28) != 0) {
    uVar17 = *(uint *)(lVar36 + 0x1c);
  }
  uVar30 = *(uint *)(lVar36 + 0x10c);
  if (5 < uVar30) {
/*  found on a paste site? it was re-uploaded illegally  */
    uVar30 = 6;
  }
  uVar39 = *(ulong *)(lVar36 + 0x60);
  iVar45 = 1 << (ulong)(uVar30 & 0x1f);
  puVar31 = *(undefined8 **)(lVar36 + 0xf8);
  uVar35 = *puVar15 * -0x30e4432340650000 >> ((ulong)(0x38 - *(int *)((long)puVar31 + 0x34)) & 0x3f)
  ;
  uVar20 = uVar35 >> 2 & 0x3fffffc0;
  pbVar1 = (byte *)(puVar31[7] + uVar20);
  lVar3 = puVar31[0xe] + uVar20 * 4;
  Hint_Prefetch(lVar3,0,0,0);
  Hint_Prefetch(lVar3 + 0x40,0,0,0);
  Hint_Prefetch(pbVar1,0,0,0);
  Hint_Prefetch(pbVar1 + 0x20,0,0,0);
  if (*(int *)(lVar36 + 300) == 0) {
    lVar21 = lVar36 + 0x40;
    uVar30 = *(uint *)(lVar36 + 0x2c);
    uVar20 = (ulong)uVar30;
    lVar22 = lVar50;
    lVar24 = lVar37;
    if (0x180 < uVar27 - uVar30) {
      if (uVar30 < 0xffffffa0) {
        uVar48 = uVar20 + 0x60;
        do {
          uVar49 = (*(long *)(lVar51 + 8 + uVar20) * -0x30e4432340650000 ^ *(ulong *)(lVar36 + 0x60)
                   ) >> ((ulong)(0x38 - iVar29) & 0x3f);
          uVar43 = uVar49 >> 2 & 0x3fffffc0;
          lVar22 = lVar37 + uVar43 * 4;
          Hint_Prefetch(lVar22,0,0,0);
          Hint_Prefetch(lVar22 + 0x40,0,0,0);
          lVar22 = lVar50 + uVar43;
          Hint_Prefetch(lVar22,0,0,0);
          Hint_Prefetch(lVar22 + 0x20,0,0,0);
          uVar26 = *(uint *)(lVar21 + (uVar20 & 7) * 4);
          *(int *)(lVar21 + (uVar20 & 7) * 4) = (int)uVar49;
          uVar49 = (ulong)(uVar26 >> 2) & 0x3fffffc0;
// found on a paste site? it was re-uploaded illegally
          pbVar2 = (byte *)(lVar50 + uVar49);
          uVar30 = 0x3f;
          if ((*pbVar2 & 0x3f) != 1) {
            uVar30 = 0;
          }
          lVar22 = (ulong)uVar30 + (ulong)(*pbVar2 - 1 & 0x3f);
          *pbVar2 = (byte)lVar22;
          pbVar2[lVar22] = (byte)uVar26;
          *(int *)(lVar37 + uVar49 * 4 + lVar22 * 4) = (int)uVar20;
          uVar20 = uVar20 + 1;
        } while (uVar48 != uVar20);
        lVar24 = *(long *)(lVar36 + 0x70);
        lVar22 = *(long *)(lVar36 + 0x38);
      }
      uVar30 = uVar27 - 0x20;
      uVar20 = (ulong)uVar30;
      iVar7 = (int)((long)puVar15 + 1U) - (int)(lVar51 + uVar20);
      iVar46 = 8;
      if (iVar7 + 1U < 8) {
        iVar46 = iVar7 + 1;
      }
      iVar7 = 0;
      if (lVar51 + uVar20 <= (long)puVar15 + 1U) {
        iVar7 = iVar46;
      }
      if (uVar30 < iVar7 + uVar30) {
        iVar46 = *(int *)(lVar36 + 0x34);
        uVar48 = *(ulong *)(lVar36 + 0x60);
        do {
          uVar49 = (*(long *)(lVar51 + uVar20) * -0x30e4432340650000 ^ uVar48) >>
                   ((ulong)(0x38 - iVar46) & 0x3f);
          uVar43 = uVar49 >> 2 & 0x3fffffc0;
          lVar25 = lVar24 + uVar43 * 4;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x40,0,0,0);
          lVar25 = lVar22 + uVar43;
          Hint_Prefetch(lVar25,0,0,0);
          Hint_Prefetch(lVar25 + 0x20,0,0,0);
          *(int *)(lVar21 + (uVar20 & 7) * 4) = (int)uVar49;
          uVar20 = uVar20 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if (uVar30 < uVar27) {
      lVar25 = *(long *)(lVar36 + 8);
      iVar46 = *(int *)(lVar36 + 0x34);
      uVar20 = (ulong)uVar30;
      do {
        uVar48 = (*(long *)(lVar25 + 8 + uVar20) * -0x30e4432340650000 ^ *(ulong *)(lVar36 + 0x60))
                 >> ((ulong)(0x38 - iVar46) & 0x3f);
        uVar49 = uVar48 >> 2 & 0x3fffffc0;
        lVar4 = lVar24 + uVar49 * 4;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x40,0,0,0);
        lVar4 = lVar22 + uVar49;
        Hint_Prefetch(lVar4,0,0,0);
        Hint_Prefetch(lVar4 + 0x20,0,0,0);
        uVar26 = *(uint *)(lVar21 + (uVar20 & 7) * 4);
        *(int *)(lVar21 + (uVar20 & 7) * 4) = (int)uVar48;
        uVar48 = (ulong)(uVar26 >> 2) & 0x3fffffc0;
        pbVar2 = (byte *)(lVar22 + uVar48);
        uVar30 = 0x3f;
        if ((*pbVar2 & 0x3f) != 1) {
          uVar30 = 0;
        }
        lVar4 = (ulong)uVar30 + (ulong)(*pbVar2 - 1 & 0x3f);
        *pbVar2 = (byte)lVar4;
        pbVar2[lVar4] = (byte)uVar26;
// WM - donate: donate/README.md
        *(int *)(lVar24 + uVar48 * 4 + lVar4 * 4) = (int)uVar20;
        uVar20 = uVar20 + 1;
      } while (uVar20 < (uVar28 & 0xffffffff));
    }
    *(uint *)(lVar36 + 0x2c) = uVar27;
    uVar20 = (*(long *)(lVar51 + (uVar28 & 0xffffffff) + 8) * -0x30e4432340650000 ^ uVar39) >>
             ((ulong)(0x38 - iVar29) & 0x3f);
    uVar39 = uVar20 >> 2 & 0x3fffffc0;
    lVar22 = lVar37 + uVar39 * 4;
    Hint_Prefetch(lVar22,0,0,0);
    Hint_Prefetch(lVar22 + 0x40,0,0,0);
    lVar22 = lVar50 + uVar39;
    Hint_Prefetch(lVar22,0,0,0);
    Hint_Prefetch(lVar22 + 0x20,0,0,0);
    uVar30 = *(uint *)(lVar21 + (uVar28 & 7) * 4);
    *(int *)(lVar21 + (uVar28 & 7) * 4) = (int)uVar20;
  }
  else {
    uVar30 = (uint)((*puVar15 * -0x30e4432340650000 ^ uVar39) >> ((ulong)(0x38 - iVar29) & 0x3f));
    *(uint *)(lVar36 + 0x2c) = uVar27;
  }
  *(uint *)(lVar36 + 0x68) = *(int *)(lVar36 + 0x68) + uVar30;
  uVar28 = (ulong)(uVar30 >> 2) & 0x3fffffc0;
  lVar37 = lVar37 + uVar28 * 4;
  pbVar2 = (byte *)(lVar50 + uVar28);
  bVar34 = (byte)uVar30;
  auVar81[0] = -(pbVar2[1] == bVar34);
  auVar81[1] = -(pbVar2[5] == bVar34);
  auVar81[2] = -(pbVar2[9] == bVar34);
  auVar81[3] = -(pbVar2[0xd] == bVar34);
  auVar81[4] = -(pbVar2[0x11] == bVar34);
  auVar81[5] = -(pbVar2[0x15] == bVar34);
  auVar81[6] = -(pbVar2[0x19] == bVar34);
  auVar81[7] = -(pbVar2[0x1d] == bVar34);
/* WM - no support for modified copies */
  auVar81[8] = -(pbVar2[0x21] == bVar34);
  auVar81[9] = -(pbVar2[0x25] == bVar34);
  auVar81[10] = -(pbVar2[0x29] == bVar34);
  auVar81[0xb] = -(pbVar2[0x2d] == bVar34);
  auVar81[0xc] = -(pbVar2[0x31] == bVar34);
  auVar81[0xd] = -(pbVar2[0x35] == bVar34);
  auVar81[0xe] = -(pbVar2[0x39] == bVar34);
  auVar81[0xf] = -(pbVar2[0x3d] == bVar34);
  auVar70[0] = -(pbVar2[3] == bVar34);
  auVar70[1] = -(pbVar2[7] == bVar34);
  auVar70[2] = -(pbVar2[0xb] == bVar34);
  auVar70[3] = -(pbVar2[0xf] == bVar34);
  auVar70[4] = -(pbVar2[0x13] == bVar34);
  auVar70[5] = -(pbVar2[0x17] == bVar34);
  auVar70[6] = -(pbVar2[0x1b] == bVar34);
  auVar70[7] = -(pbVar2[0x1f] == bVar34);
  auVar70[8] = -(pbVar2[0x23] == bVar34);
  auVar70[9] = -(pbVar2[0x27] == bVar34);
  auVar70[10] = -(pbVar2[0x2b] == bVar34);
  auVar70[0xb] = -(pbVar2[0x2f] == bVar34);
  auVar70[0xc] = -(pbVar2[0x33] == bVar34);
  auVar70[0xd] = -(pbVar2[0x37] == bVar34);
  auVar70[0xe] = -(pbVar2[0x3b] == bVar34);
  auVar70[0xf] = -(pbVar2[0x3f] == bVar34);
  auVar10[1] = -(pbVar2[4] == bVar34);
  auVar10[0] = -(*pbVar2 == bVar34);
  auVar10[2] = -(pbVar2[8] == bVar34);
  auVar10[3] = -(pbVar2[0xc] == bVar34);
/*  if you paid for this, you were scammed  */
  auVar10[4] = -(pbVar2[0x10] == bVar34);
  auVar10[5] = -(pbVar2[0x14] == bVar34);
  auVar10[6] = -(pbVar2[0x18] == bVar34);
  auVar10[7] = -(pbVar2[0x1c] == bVar34);
  auVar10[8] = -(pbVar2[0x20] == bVar34);
  auVar10[9] = -(pbVar2[0x24] == bVar34);
  auVar10[10] = -(pbVar2[0x28] == bVar34);
  auVar10[0xb] = -(pbVar2[0x2c] == bVar34);
  auVar10[0xc] = -(pbVar2[0x30] == bVar34);
  auVar10[0xd] = -(pbVar2[0x34] == bVar34);
  auVar10[0xe] = -(pbVar2[0x38] == bVar34);
  auVar10[0xf] = -(pbVar2[0x3c] == bVar34);
  auVar80 = NEON_sri(auVar81,auVar10,1,1);
  auVar13[1] = -(pbVar2[6] == bVar34);
  auVar13[0] = -(pbVar2[2] == bVar34);
  auVar13[2] = -(pbVar2[10] == bVar34);
  auVar13[3] = -(pbVar2[0xe] == bVar34);
  auVar13[4] = -(pbVar2[0x12] == bVar34);
  auVar13[5] = -(pbVar2[0x16] == bVar34);
  auVar13[6] = -(pbVar2[0x1a] == bVar34);
  auVar13[7] = -(pbVar2[0x1e] == bVar34);
  auVar13[8] = -(pbVar2[0x22] == bVar34);
  auVar13[9] = -(pbVar2[0x26] == bVar34);
  auVar13[10] = -(pbVar2[0x2a] == bVar34);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  auVar13[0xb] = -(pbVar2[0x2e] == bVar34);
  auVar13[0xc] = -(pbVar2[0x32] == bVar34);
  auVar13[0xd] = -(pbVar2[0x36] == bVar34);
  auVar13[0xe] = -(pbVar2[0x3a] == bVar34);
  auVar13[0xf] = -(pbVar2[0x3e] == bVar34);
  auVar65 = NEON_sri(auVar70,auVar13,1,1);
  auVar65 = NEON_sri(auVar65,auVar80,2,1);
  auVar65 = NEON_sri(auVar65,auVar65,4,1);
  uVar28 = CONCAT17((char)(auVar65._14_2_ >> 4),
                    CONCAT16((char)(auVar65._12_2_ >> 4),
                             CONCAT15((char)(auVar65._10_2_ >> 4),
                                      CONCAT14((char)(auVar65._8_2_ >> 4),
                                               CONCAT13((char)(auVar65._6_2_ >> 4),
                                                        CONCAT12((char)(auVar65._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar65._2_2_ >> 4)
                                                                          ,(char)(auVar65._0_2_ >> 4
                                                                                 ))))))));
  lVar50 = 0;
  uVar30 = (uint)*pbVar2;
/* WM - reversing this took months of machine time */
  if (uVar28 != 0) {
    uVar20 = (ulong)*pbVar2 & 0x3f;
    uVar28 = uVar28 >> uVar20 | uVar28 << 0x40 - uVar20;
    do {
      uVar20 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar26 = (int)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) + uVar30 & 0x3f;
      if (uVar26 != 0) {
        uVar26 = *(uint *)(lVar37 + (ulong)uVar26 * 4);
        if (uVar26 < uVar17) break;
        Hint_Prefetch(lVar51 + (ulong)uVar26,0,0,0);
        auStack_620[lVar50] = uVar26;
        lVar50 = lVar50 + 1;
        iVar45 = iVar45 + -1;
      }
      uVar28 = uVar28 - 1 & uVar28;
      if ((uVar28 == 0) || (iVar45 == 0)) break;
    } while( true );
  }
  uVar17 = 0x3f;
  if ((uVar30 & 0x3f) != 1) {
    uVar17 = 0;
  }
  lVar21 = (ulong)uVar17 + (ulong)(uVar30 - 1 & 0x3f);
  *pbVar2 = (byte)lVar21;
  pbVar2[lVar21] = bVar34;
  iVar29 = *(int *)(lVar36 + 0x2c);
  *(int *)(lVar36 + 0x2c) = iVar29 + 1;
  *(int *)(lVar37 + lVar21 * 4) = iVar29;
  if (lVar50 == 0) {
    uVar28 = 3;
  }
  else {
/* wm:watermarked copy - do not remove */
    lVar37 = 0;
    uVar20 = 3;
    do {
      uVar17 = auStack_620[lVar37];
      puVar19 = (ulong *)(lVar51 + (ulong)uVar17);
      if (*(int *)((long)puVar19 + (uVar20 - 3)) == *(int *)((long)puVar15 + (uVar20 - 3))) {
        puVar23 = puVar15;
        if (puVar15 < (ulong *)((long)param_3 + -7)) {
          if (*puVar19 == *puVar15) {
            lVar36 = 0;
            puVar19 = (ulong *)(lVar51 + 8 + (ulong)uVar17);
            do {
              puVar23 = puVar23 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar23) goto code_r0x002db54c;
              uVar28 = *puVar19;
              lVar36 = lVar36 + 8;
              puVar19 = puVar19 + 1;
            } while (uVar28 == *puVar23);
            uVar28 = *puVar23 ^ uVar28;
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
/* WM - do not claim this as your own */
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            uVar28 = lVar36 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
          }
          else {
            uVar28 = *puVar15 ^ *puVar19;
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            uVar28 = (ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3;
          }
        }
        else {
code_r0x002db54c:
/* unlicensed copy if this notice is missing */
          if (puVar23 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar19 == (uint)*puVar23) {
              puVar23 = (ulong *)((long)puVar23 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
          }
          if (puVar23 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar19 == (short)*puVar23) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar23 = (ulong *)((long)puVar23 + 2);
            }
          }
          if (puVar23 < param_3) {
            if ((char)*puVar19 == (char)*puVar23) {
              puVar23 = (ulong *)((long)puVar23 + 1);
            }
          }
          uVar28 = (long)puVar23 - (long)puVar15;
        }
        if (uVar20 < uVar28) {
          *(ulong *)param_4 = (ulong)((uVar27 + 3) - uVar17);
          uVar20 = uVar28;
          if ((uint *)((long)puVar15 + uVar28) == param_3) break;
        }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      }
      lVar37 = lVar37 + 1;
      uVar28 = uVar20;
    } while (lVar37 != lVar50);
  }
  bVar34 = (byte)uVar35;
  auVar82[0] = -(pbVar1[1] == bVar34);
  auVar82[1] = -(pbVar1[5] == bVar34);
  auVar82[2] = -(pbVar1[9] == bVar34);
  auVar82[3] = -(pbVar1[0xd] == bVar34);
  auVar82[4] = -(pbVar1[0x11] == bVar34);
  auVar82[5] = -(pbVar1[0x15] == bVar34);
  auVar82[6] = -(pbVar1[0x19] == bVar34);
  auVar82[7] = -(pbVar1[0x1d] == bVar34);
  auVar82[8] = -(pbVar1[0x21] == bVar34);
  auVar82[9] = -(pbVar1[0x25] == bVar34);
  auVar82[10] = -(pbVar1[0x29] == bVar34);
  auVar82[0xb] = -(pbVar1[0x2d] == bVar34);
  auVar82[0xc] = -(pbVar1[0x31] == bVar34);
  auVar82[0xd] = -(pbVar1[0x35] == bVar34);
  auVar82[0xe] = -(pbVar1[0x39] == bVar34);
  auVar82[0xf] = -(pbVar1[0x3d] == bVar34);
  auVar71[0] = -(pbVar1[3] == bVar34);
  auVar71[1] = -(pbVar1[7] == bVar34);
  auVar71[2] = -(pbVar1[0xb] == bVar34);
  auVar71[3] = -(pbVar1[0xf] == bVar34);
  auVar71[4] = -(pbVar1[0x13] == bVar34);
  auVar71[5] = -(pbVar1[0x17] == bVar34);
  auVar71[6] = -(pbVar1[0x1b] == bVar34);
  auVar71[7] = -(pbVar1[0x1f] == bVar34);
  auVar71[8] = -(pbVar1[0x23] == bVar34);
  auVar71[9] = -(pbVar1[0x27] == bVar34);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar71[10] = -(pbVar1[0x2b] == bVar34);
  auVar71[0xb] = -(pbVar1[0x2f] == bVar34);
  auVar71[0xc] = -(pbVar1[0x33] == bVar34);
  auVar71[0xd] = -(pbVar1[0x37] == bVar34);
  auVar71[0xe] = -(pbVar1[0x3b] == bVar34);
  auVar71[0xf] = -(pbVar1[0x3f] == bVar34);
  auVar11[1] = -(pbVar1[4] == bVar34);
  auVar11[0] = -(*pbVar1 == bVar34);
  auVar11[2] = -(pbVar1[8] == bVar34);
  auVar11[3] = -(pbVar1[0xc] == bVar34);
  auVar11[4] = -(pbVar1[0x10] == bVar34);
  auVar11[5] = -(pbVar1[0x14] == bVar34);
  auVar11[6] = -(pbVar1[0x18] == bVar34);
  auVar11[7] = -(pbVar1[0x1c] == bVar34);
  auVar11[8] = -(pbVar1[0x20] == bVar34);
  auVar11[9] = -(pbVar1[0x24] == bVar34);
  auVar11[10] = -(pbVar1[0x28] == bVar34);
  auVar11[0xb] = -(pbVar1[0x2c] == bVar34);
// WM - unlicensed copy if this notice is missing
  auVar11[0xc] = -(pbVar1[0x30] == bVar34);
  auVar11[0xd] = -(pbVar1[0x34] == bVar34);
  auVar11[0xe] = -(pbVar1[0x38] == bVar34);
  auVar11[0xf] = -(pbVar1[0x3c] == bVar34);
  auVar80 = NEON_sri(auVar82,auVar11,1,1);
  auVar14[1] = -(pbVar1[6] == bVar34);
  auVar14[0] = -(pbVar1[2] == bVar34);
  auVar14[2] = -(pbVar1[10] == bVar34);
  auVar14[3] = -(pbVar1[0xe] == bVar34);
  auVar14[4] = -(pbVar1[0x12] == bVar34);
  auVar14[5] = -(pbVar1[0x16] == bVar34);
  auVar14[6] = -(pbVar1[0x1a] == bVar34);
  auVar14[7] = -(pbVar1[0x1e] == bVar34);
  auVar14[8] = -(pbVar1[0x22] == bVar34);
  auVar14[9] = -(pbVar1[0x26] == bVar34);
  auVar14[10] = -(pbVar1[0x2a] == bVar34);
  auVar14[0xb] = -(pbVar1[0x2e] == bVar34);
  auVar14[0xc] = -(pbVar1[0x32] == bVar34);
  auVar14[0xd] = -(pbVar1[0x36] == bVar34);
  auVar14[0xe] = -(pbVar1[0x3a] == bVar34);
  auVar14[0xf] = -(pbVar1[0x3e] == bVar34);
  auVar65 = NEON_sri(auVar71,auVar14,1,1);
  auVar65 = NEON_sri(auVar65,auVar80,2,1);
  auVar65 = NEON_sri(auVar65,auVar65,4,1);
  uVar20 = CONCAT17((char)(auVar65._14_2_ >> 4),
                    CONCAT16((char)(auVar65._12_2_ >> 4),
                             CONCAT15((char)(auVar65._10_2_ >> 4),
                                      CONCAT14((char)(auVar65._8_2_ >> 4),
/* more drops soon - github.com/pengussy - github.com/pengussy */
                                               CONCAT13((char)(auVar65._6_2_ >> 4),
                                                        CONCAT12((char)(auVar65._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar65._2_2_ >> 4)
                                                                          ,(char)(auVar65._0_2_ >> 4
                                                                                 ))))))));
  pdVar42 = param_4;
  if (uVar20 != 0 && iVar45 != 0) {
    lVar37 = 0;
    uVar17 = *(uint *)(puVar31 + 3);
    pdVar40 = (dword *)*puVar31;
    lVar36 = puVar31[1];
    bVar34 = *pbVar1;
    uVar35 = (ulong)bVar34 & 0x3f;
    uVar20 = uVar20 >> uVar35 | uVar20 << 0x40 - uVar35;
    do {
      uVar35 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
      uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) + (uint)bVar34 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)(lVar3 + (ulong)uVar30 * 4);
        if (uVar30 < uVar17) goto code_r0x002db6a8;
        Hint_Prefetch(lVar36 + (ulong)uVar30,0,0,0);
        auStack_620[lVar37] = uVar30;
        lVar37 = lVar37 + 1;
        iVar45 = iVar45 + -1;
      }
      uVar20 = uVar20 - 1 & uVar20;
      if ((uVar20 == 0) || (iVar45 == 0)) goto code_r0x002db6a8;
    } while( true );
  }
code_r0x002db738:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_520) {
    return uVar28;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  auVar65 = ___stack_chk_fail();
  puVar15 = auVar65._8_8_;
  lVar37 = auVar65._0_8_;
  lVar36 = *(long *)(lVar37 + 0x80);
  uVar30 = 1 << (ulong)(*(uint *)(lVar37 + 0x104) & 0x1f);
  lVar50 = *(long *)(lVar37 + 8);
  uVar27 = 1 << (ulong)(*(uint *)(lVar37 + 0x100) & 0x1f);
  iVar5 = *(int *)(lVar37 + 0x18);
  uVar26 = (uint)((long)puVar15 - lVar50);
  uVar17 = uVar26 - uVar27;
  if (uVar26 - *(uint *)(lVar37 + 0x1c) <= uVar27 || *(int *)(lVar37 + 0x28) != 0) {
    uVar17 = *(uint *)(lVar37 + 0x1c);
  }
  uVar27 = 0;
  if (uVar30 <= uVar26) {
    uVar27 = uVar26 - uVar30;
  }
  uVar53 = 1 << (ulong)(*(uint *)(lVar37 + 0x10c) & 0x1f);
  puVar31 = *(undefined8 **)(lVar37 + 0xf8);
  puVar18 = (uint *)(puVar31[0xe] +
                    (ulong)((uint)*puVar15 * -0x61c8864f >>
                           (ulong)(0x22U - *(int *)(puVar31 + 0x21) & 0x1f)) * 0x10);
  Hint_Prefetch(puVar18,0,0,0);
  lVar51 = *(long *)(lVar37 + 0x70);
  uVar16 = ~(-1 << (ulong)(*(uint *)(lVar37 + 0x104) & 0x1f));
  uVar44 = *(uint *)(lVar37 + 0x2c);
  uVar28 = (ulong)uVar44;
  uVar8 = 0x20 - *(int *)(lVar37 + 0x108);
  if (*(int *)(lVar37 + 300) == 0) {
    if (uVar44 < uVar26) {
      do {
        uVar44 = (uint)(*(int *)(lVar50 + uVar28) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
        *(undefined4 *)(lVar36 + (ulong)((uint)uVar28 & uVar16) * 4) =
             *(undefined4 *)(lVar51 + (ulong)uVar44 * 4);
        *(uint *)(lVar51 + (ulong)uVar44 * 4) = (uint)uVar28;
        uVar28 = uVar28 + 1;
/* wm:origin: github.com/pengussy */
      } while (uVar28 < ((long)puVar15 - lVar50 & 0xffffffffU));
    }
  }
  else if (uVar44 < uVar26) {
    uVar6 = (uint)(*(int *)(lVar50 + uVar28) * -0x61c8864f) >> (ulong)(uVar8 & 0x1f);
    *(undefined4 *)(lVar36 + (ulong)(uVar44 & uVar16) * 4) =
         *(undefined4 *)(lVar51 + (ulong)uVar6 * 4);
    *(uint *)(lVar51 + (ulong)uVar6 * 4) = uVar44;
  }
  *(uint *)(lVar37 + 0x2c) = uVar26;
  uVar44 = (uint)*puVar15;
  uVar16 = *(uint *)(lVar51 + (ulong)(uVar44 * -0x61c8864f >> (ulong)(uVar8 & 0x1f)) * 4);
  if (uVar17 <= uVar16) {
    uVar28 = 3;
    do {
      puVar19 = (ulong *)(lVar50 + (ulong)uVar16);
      if (*(int *)((long)puVar19 + (uVar28 - 3)) == *(int *)((long)puVar15 + (uVar28 - 3))) {
        puVar23 = puVar15;
        if (puVar15 < (ulong *)((long)param_3 + -7)) {
          if (*puVar19 == *puVar15) {
            lVar37 = 0;
            puVar19 = (ulong *)(lVar50 + 8 + (ulong)uVar16);
            do {
              puVar23 = puVar23 + 1;
              if ((ulong *)((long)param_3 + -7) <= puVar23) goto code_r0x002dbc9c;
              uVar20 = *puVar19;
              lVar37 = lVar37 + 8;
              puVar19 = puVar19 + 1;
            } while (uVar20 == *puVar23);
            uVar20 = *puVar23 ^ uVar20;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = lVar37 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
          }
          else {
            uVar20 = *puVar15 ^ *puVar19;
            uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
          }
        }
        else {
code_r0x002dbc9c:
          if (puVar23 < (ulong *)((long)param_3 + -3)) {
            if ((uint)*puVar19 == (uint)*puVar23) {
              puVar23 = (ulong *)((long)puVar23 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
          }
          if (puVar23 < (ulong *)((long)param_3 + -1)) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            if ((short)*puVar19 == (short)*puVar23) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar23 = (ulong *)((long)puVar23 + 2);
            }
          }
          if (puVar23 < param_3) {
            if ((char)*puVar19 == (char)*puVar23) {
              puVar23 = (ulong *)((long)puVar23 + 1);
            }
          }
          uVar20 = (long)puVar23 - (long)puVar15;
        }
        if (uVar28 < uVar20) {
          *(ulong *)pdVar42 = (ulong)((uVar26 + 3) - uVar16);
          uVar28 = uVar20;
          if ((uint *)((long)puVar15 + uVar20) == param_3) goto code_r0x002dba0c;
        }
      }
      uVar20 = uVar28;
      if ((uVar16 <= uVar27) || (uVar53 = uVar53 - 1, uVar53 == 0)) goto code_r0x002dba0c;
      uVar16 = *(uint *)(lVar36 + (ulong)(uVar16 & uVar30 - 1) * 4);
      uVar28 = uVar20;
      if (uVar16 < uVar17) goto code_r0x002dba0c;
    } while( true );
  }
  uVar20 = 3;
code_r0x002dba0c:
  lVar37 = puVar31[1];
  Hint_Prefetch(lVar37 + (ulong)*puVar18,0,0,0);
  Hint_Prefetch(lVar37 + (ulong)puVar18[1],0,0,0);
  Hint_Prefetch(lVar37 + (ulong)puVar18[2],0,0,0);
  iVar5 = ((int)*puVar31 - (int)lVar37) - iVar5;
  uVar17 = uVar53;
  if (2 < uVar53) {
    uVar17 = 3;
  }
  uVar30 = puVar18[3];
/*  do not claim this as your own  */
  puVar52 = (uint *)(puVar31[0x10] + (ulong)(uVar30 >> 8) * 4);
  Hint_Prefetch(puVar52,0,0,0);
  if (uVar53 == 0) {
    uVar17 = 0;
  }
  else {
    uVar27 = *puVar18;
    if (uVar27 == 0) {
      return uVar20;
    }
    iVar29 = uVar26 + iVar5 + 3;
    if (*(uint *)(lVar37 + (ulong)uVar27) == uVar44) {
      lVar36 = func_0x002ad924((uint *)((long)puVar15 + 4),(uint *)(lVar37 + (ulong)uVar27) + 1);
      uVar28 = lVar36 + 4;
      if (uVar20 < uVar28) {
        *(ulong *)pdVar42 = (ulong)(iVar29 - uVar27);
        uVar20 = uVar28;
        if ((uint *)((long)puVar15 + uVar28) == param_3) {
          return uVar28;
        }
      }
    }
    if (uVar53 != 1) {
      uVar27 = puVar18[1];
      if (uVar27 == 0) {
        return uVar20;
      }
      uVar28 = uVar20;
/* WM - chat: discord.gg/sdkhDjTex */
      if (*(uint *)(lVar37 + (ulong)uVar27) == uVar44) {
        lVar36 = func_0x002ad924((uint *)((long)puVar15 + 4),(uint *)(lVar37 + (ulong)uVar27) + 1);
        uVar35 = lVar36 + 4;
        if (uVar20 < uVar35) {
          *(ulong *)pdVar42 = (ulong)(iVar29 - uVar27);
          uVar28 = uVar35;
          if ((uint *)((long)puVar15 + uVar35) == param_3) {
            return uVar35;
          }
        }
      }
      uVar20 = uVar28;
      if (uVar53 != 2) {
        uVar27 = puVar18[2];
        if (uVar27 == 0) {
          return uVar28;
        }
        if (*(uint *)(lVar37 + (ulong)uVar27) == uVar44) {
          lVar36 = func_0x002ad924((uint *)((long)puVar15 + 4),(uint *)(lVar37 + (ulong)uVar27) + 1)
          ;
          uVar20 = lVar36 + 4;
          if (uVar20 <= uVar28) {
            uVar27 = uVar53 - uVar17;
            if ((uVar30 & 0xff) <= uVar53 - uVar17) {
              uVar27 = uVar30 & 0xff;
            }
            goto joined_r0x002dbd90;
          }
          *(ulong *)pdVar42 = (ulong)(iVar29 - uVar27);
          if ((uint *)((long)puVar15 + uVar20) == param_3) {
            return uVar20;
          }
        }
      }
    }
  }
  uVar27 = uVar53 - uVar17;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  uVar28 = uVar20;
  if ((uVar30 & 0xff) <= uVar53 - uVar17) {
    uVar27 = uVar30 & 0xff;
  }
joined_r0x002dbd90:
  if (uVar27 != 0) {
    uVar35 = (ulong)uVar27;
    uVar20 = uVar35;
    puVar18 = puVar52;
    do {
      Hint_Prefetch(lVar37 + (ulong)*puVar18,0,0,0);
      uVar20 = uVar20 - 1;
      puVar18 = puVar18 + 1;
    } while (uVar20 != 0);
    do {
      uVar17 = *puVar52;
      puVar18 = (uint *)(lVar37 + (ulong)uVar17);
      if (*puVar18 == uVar44) {
        lVar36 = func_0x002ad924((uint *)((long)puVar15 + 4),puVar18 + 1);
        uVar20 = lVar36 + 4;
        if (uVar28 < uVar20) {
          *(ulong *)pdVar42 = (ulong)((uVar26 + iVar5 + 3) - uVar17);
          uVar28 = uVar20;
          if ((uint *)((long)puVar15 + uVar20) == param_3) {
            return uVar20;
          }
        }
      }
      uVar17 = (int)uVar35 - 1;
      uVar35 = (ulong)uVar17;
      puVar52 = puVar52 + 1;
    } while (uVar17 != 0);
  }
  return uVar28;
}

