/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2d5208:98ef9af789
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_002d5208(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  int *piVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  int iVar20;
/* do not claim this as your own - github.com/pengussy */
  undefined8 *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  long lVar26;
  ulong *puVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  dword *unaff_x19;
  int *unaff_x20;
  int *piVar34;
  ulong uVar35;
  ulong uVar36;
  ulong *puVar37;
  int *unaff_x23;
  int iVar38;
  uint uVar39;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  long lVar40;
  byte bVar41;
  ushort uVar42;
  undefined4 uVar43;
  undefined6 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [12];
  undefined1 auVar47 [14];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ushort uVar52;
// unlicensed copy if this notice is missing
  undefined4 uVar53;
  undefined6 uVar54;
  ushort uVar55;
  undefined4 uVar56;
  undefined6 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint auStack_680 [64];
  long lStack_580;
  ulong *puStack_570;
  ulong *puStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  int *piStack_548;
  ulong *puStack_540;
  ulong *puStack_538;
  int *piStack_530;
  dword *pdStack_528;
  undefined1 ***pppuStack_520;
  undefined *puStack_518;
  ulong *puStack_508;
  ulong *puStack_500;
  ulong *puStack_4f8;
  ulong *puStack_4f0;
  int iStack_4e4;
  ulong *puStack_4e0;
  ulong *puStack_4d8;
  uint auStack_4d0 [64];
  long lStack_3d0;
  ulong *puStack_3c0;
  ulong *puStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  int *piStack_398;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong *puStack_390;
  ulong *puStack_388;
  int *piStack_380;
  dword *pdStack_378;
  undefined1 **ppuStack_370;
  undefined *puStack_368;
  ulong *puStack_358;
  ulong *puStack_350;
  ulong *puStack_348;
  ulong *puStack_340;
  int iStack_334;
  ulong *puStack_330;
  ulong *puStack_328;
  uint auStack_320 [64];
  long lStack_220;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  int *piStack_1e8;
  ulong *puStack_1e0;
  ulong *puStack_1d8;
  int *piStack_1d0;
  dword *pdStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
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
  
/* wm:found on a paste site? it was re-uploaded illegally */
  puStack_180 = param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar27 = *(ulong **)(param_1 + 0x70);
  puVar25 = *(ulong **)(param_1 + 0x38);
  iVar20 = *(int *)(param_1 + 0x34);
  puVar37 = *(ulong **)(param_1 + 8);
  puVar24 = *(ulong **)(param_1 + 0x10);
  uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar31 = *(uint *)(param_1 + 0x18);
  uVar18 = (ulong)uVar31;
  uVar17 = (long)param_2 - (long)puVar37;
  uVar16 = (uint)uVar17;
  uVar22 = uVar16 - uVar30;
  if (uVar16 - *(uint *)(param_1 + 0x1c) <= uVar30 || *(int *)(param_1 + 0x28) != 0) {
    uVar22 = *(uint *)(param_1 + 0x1c);
  }
  uVar30 = *(uint *)(param_1 + 0x10c);
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar33 = *(ulong *)(param_1 + 0x60);
  puStack_178 = puVar37;
  if (*(int *)(param_1 + 300) == 0) {
    lVar8 = param_1 + 0x40;
    uVar14 = *(uint *)(param_1 + 0x2c);
// WM - keep the notice, keep the source honest
    uVar23 = (ulong)uVar14;
    param_4 = puVar27;
    unaff_x27 = puVar25;
    if (0x180 < uVar16 - uVar14) {
      if (uVar14 < 0xffffffa0) {
        uVar35 = uVar23 + 0x60;
        do {
          uVar15 = (*(long *)((long)puVar37 + uVar23 + 8) * -0x30e4432345000000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar36 = uVar15 >> 2 & 0x3fffffc0;
          piVar9 = (int *)((long)puVar27 + uVar36 * 4);
          Hint_Prefetch(piVar9,0,0,0);
          Hint_Prefetch(piVar9 + 0x10,0,0,0);
          lVar26 = (long)puVar25 + uVar36;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x20,0,0,0);
          uVar39 = *(uint *)(lVar8 + (uVar23 & 7) * 4);
          *(int *)(lVar8 + (uVar23 & 7) * 4) = (int)uVar15;
          uVar15 = (ulong)(uVar39 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)((long)puVar25 + uVar15);
          unaff_x23 = (int *)(ulong)(*pbVar1 - 1 & 0x3f);
          uVar14 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar14 = 0;
          }
          unaff_x20 = (int *)((ulong)uVar14 + (long)unaff_x23);
          *pbVar1 = (byte)unaff_x20;
          pbVar1[(long)unaff_x20] = (byte)uVar39;
          *(int *)((long)puVar27 + (long)unaff_x20 * 4 + uVar15 * 4) = (int)uVar23;
          uVar23 = uVar23 + 1;
        } while (uVar35 != uVar23);
        param_4 = *(ulong **)(param_1 + 0x70);
        unaff_x27 = *(ulong **)(param_1 + 0x38);
      }
      uVar14 = uVar16 - 0x20;
      uVar23 = (ulong)uVar14;
      iVar13 = (int)((long)param_2 + 1U) - (int)((long)puVar37 + uVar23);
      unaff_x19 = &MACH_HEADER.cpusubtype;
/*  chat: discord.gg/sdkhDjTex  */
      iVar38 = 8;
      if (iVar13 + 1U < 8) {
        iVar38 = iVar13 + 1;
      }
      iVar13 = 0;
      if ((long)puVar37 + uVar23 <= (long)param_2 + 1U) {
        iVar13 = iVar38;
      }
      if (uVar14 < iVar13 + uVar14) {
        iVar38 = *(int *)(param_1 + 0x34);
        uVar15 = *(ulong *)(param_1 + 0x60);
        uVar35 = uVar23;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puVar37 + uVar35) * -0x30e4432345000000 ^ uVar15)
                               >> ((ulong)(0x38 - iVar38) & 0x3f));
          uVar36 = (ulong)unaff_x19 >> 2 & 0x3fffffc0;
          unaff_x23 = (int *)((long)param_4 + uVar36 * 4);
          Hint_Prefetch(unaff_x23,0,0,0);
          Hint_Prefetch(unaff_x23 + 0x10,0,0,0);
// WM - proprietary - see LICENSE - do not sell
          lVar26 = (long)unaff_x27 + uVar36;
          Hint_Prefetch(lVar26,0,0,0);
          Hint_Prefetch(lVar26 + 0x20,0,0,0);
          unaff_x20 = (int *)(uVar35 & 7);
          *(int *)(lVar8 + (long)unaff_x20 * 4) = (int)unaff_x19;
          uVar35 = uVar35 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    if (uVar14 < uVar16) {
      lVar26 = *(long *)(param_1 + 8);
      iVar38 = *(int *)(param_1 + 0x34);
      do {
        uVar35 = (*(long *)(lVar26 + 8 + uVar23) * -0x30e4432345000000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar15 = uVar35 >> 2 & 0x3fffffc0;
        piVar9 = (int *)((long)param_4 + uVar15 * 4);
        Hint_Prefetch(piVar9,0,0,0);
        Hint_Prefetch(piVar9 + 0x10,0,0,0);
        lVar40 = (long)unaff_x27 + uVar15;
        Hint_Prefetch(lVar40,0,0,0);
        Hint_Prefetch(lVar40 + 0x20,0,0,0);
        uVar39 = *(uint *)(lVar8 + (uVar23 & 7) * 4);
        unaff_x23 = (int *)(ulong)uVar39;
        *(int *)(lVar8 + (uVar23 & 7) * 4) = (int)uVar35;
        uVar35 = (ulong)(uVar39 >> 2) & 0x3fffffc0;
        unaff_x20 = (int *)((long)param_4 + uVar35 * 4);
        unaff_x19 = (dword *)((long)unaff_x27 + uVar35);
/* thanks for reading - discord.gg/sdkhDjTex */
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0x3f);
        uVar14 = 0x3f;
        if (((byte)*unaff_x19 & 0x3f) != 1) {
          uVar14 = 0;
        }
        lVar40 = uVar14 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar40;
        *(byte *)((long)unaff_x19 + lVar40) = (byte)uVar39;
        unaff_x20[lVar40] = (int)uVar23;
        uVar23 = uVar23 + 1;
      } while (uVar23 < (uVar17 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar16;
    puVar11 = *(ulong **)((long)puVar37 + (uVar17 & 0xffffffff) + 8);
    uVar23 = ((long)puVar11 * -0x30e4432345000000 ^ uVar33) >> ((ulong)(0x38 - iVar20) & 0x3f);
    uVar33 = uVar23 >> 2 & 0x3fffffc0;
/* WM - watermarked copy - do not remove */
    piVar9 = (int *)((long)puVar27 + uVar33 * 4);
    Hint_Prefetch(piVar9,0,0,0);
    Hint_Prefetch(piVar9 + 0x10,0,0,0);
    lVar26 = (long)puVar25 + uVar33;
    Hint_Prefetch(lVar26,0,0,0);
    Hint_Prefetch(lVar26 + 0x20,0,0,0);
    uVar14 = *(uint *)(lVar8 + (uVar17 & 7) * 4);
    *(int *)(lVar8 + (uVar17 & 7) * 4) = (int)uVar23;
  }
  else {
    uVar14 = (uint)((*param_2 * -0x30e4432345000000 ^ uVar33) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(param_1 + 0x2c) = uVar16;
    puVar11 = param_2;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar14;
  uVar33 = (ulong)(uVar14 >> 2) & 0x3fffffc0;
  pbVar1 = (byte *)((long)puVar25 + uVar33);
/* WM - reversing this took months of machine time */
  bVar28 = (byte)uVar14;
  auVar58[0] = -(pbVar1[1] == bVar28);
  auVar58[1] = -(pbVar1[5] == bVar28);
  auVar58[2] = -(pbVar1[9] == bVar28);
  auVar58[3] = -(pbVar1[0xd] == bVar28);
  auVar58[4] = -(pbVar1[0x11] == bVar28);
  auVar58[5] = -(pbVar1[0x15] == bVar28);
  auVar58[6] = -(pbVar1[0x19] == bVar28);
  auVar58[7] = -(pbVar1[0x1d] == bVar28);
  auVar58[8] = -(pbVar1[0x21] == bVar28);
  auVar58[9] = -(pbVar1[0x25] == bVar28);
  auVar58[10] = -(pbVar1[0x29] == bVar28);
  auVar58[0xb] = -(pbVar1[0x2d] == bVar28);
  auVar58[0xc] = -(pbVar1[0x31] == bVar28);
  auVar58[0xd] = -(pbVar1[0x35] == bVar28);
  auVar58[0xe] = -(pbVar1[0x39] == bVar28);
  auVar58[0xf] = -(pbVar1[0x3d] == bVar28);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  auVar48[0] = -(pbVar1[3] == bVar28);
  auVar48[1] = -(pbVar1[7] == bVar28);
  auVar48[2] = -(pbVar1[0xb] == bVar28);
  auVar48[3] = -(pbVar1[0xf] == bVar28);
  auVar48[4] = -(pbVar1[0x13] == bVar28);
  auVar48[5] = -(pbVar1[0x17] == bVar28);
  auVar48[6] = -(pbVar1[0x1b] == bVar28);
  auVar48[7] = -(pbVar1[0x1f] == bVar28);
  auVar48[8] = -(pbVar1[0x23] == bVar28);
  auVar48[9] = -(pbVar1[0x27] == bVar28);
  auVar48[10] = -(pbVar1[0x2b] == bVar28);
  auVar48[0xb] = -(pbVar1[0x2f] == bVar28);
  auVar48[0xc] = -(pbVar1[0x33] == bVar28);
  auVar48[0xd] = -(pbVar1[0x37] == bVar28);
  auVar48[0xe] = -(pbVar1[0x3b] == bVar28);
  auVar48[0xf] = -(pbVar1[0x3f] == bVar28);
  auVar49[1] = -(pbVar1[4] == bVar28);
  auVar49[0] = -(*pbVar1 == bVar28);
  auVar49[2] = -(pbVar1[8] == bVar28);
  auVar49[3] = -(pbVar1[0xc] == bVar28);
  auVar49[4] = -(pbVar1[0x10] == bVar28);
  auVar49[5] = -(pbVar1[0x14] == bVar28);
  auVar49[6] = -(pbVar1[0x18] == bVar28);
  auVar49[7] = -(pbVar1[0x1c] == bVar28);
  auVar49[8] = -(pbVar1[0x20] == bVar28);
  auVar49[9] = -(pbVar1[0x24] == bVar28);
  auVar49[10] = -(pbVar1[0x28] == bVar28);
  auVar49[0xb] = -(pbVar1[0x2c] == bVar28);
  auVar49[0xc] = -(pbVar1[0x30] == bVar28);
  auVar49[0xd] = -(pbVar1[0x34] == bVar28);
  auVar49[0xe] = -(pbVar1[0x38] == bVar28);
  auVar49[0xf] = -(pbVar1[0x3c] == bVar28);
  auVar58 = NEON_sri(auVar58,auVar49,1,1);
  auVar60[1] = -(pbVar1[6] == bVar28);
  auVar60[0] = -(pbVar1[2] == bVar28);
/* do not claim this as your own */
  auVar60[2] = -(pbVar1[10] == bVar28);
  auVar60[3] = -(pbVar1[0xe] == bVar28);
  auVar60[4] = -(pbVar1[0x12] == bVar28);
  auVar60[5] = -(pbVar1[0x16] == bVar28);
  auVar60[6] = -(pbVar1[0x1a] == bVar28);
  auVar60[7] = -(pbVar1[0x1e] == bVar28);
  auVar60[8] = -(pbVar1[0x22] == bVar28);
  auVar60[9] = -(pbVar1[0x26] == bVar28);
  auVar60[10] = -(pbVar1[0x2a] == bVar28);
  auVar60[0xb] = -(pbVar1[0x2e] == bVar28);
  auVar60[0xc] = -(pbVar1[0x32] == bVar28);
  auVar60[0xd] = -(pbVar1[0x36] == bVar28);
  auVar60[0xe] = -(pbVar1[0x3a] == bVar28);
  auVar60[0xf] = -(pbVar1[0x3e] == bVar28);
  auVar49 = NEON_sri(auVar48,auVar60,1,1);
  auVar49 = NEON_sri(auVar49,auVar58,2,1);
  auVar49 = NEON_sri(auVar49,auVar49,4,1);
  uVar23 = CONCAT17((char)(auVar49._14_2_ >> 4),
                    CONCAT16((char)(auVar49._12_2_ >> 4),
                             CONCAT15((char)(auVar49._10_2_ >> 4),
                                      CONCAT14((char)(auVar49._8_2_ >> 4),
                                               CONCAT13((char)(auVar49._6_2_ >> 4),
                                                        CONCAT12((char)(auVar49._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar49._2_2_ >> 4)
                                                                          ,(char)(auVar49._0_2_ >> 4
                                                                                 ))))))));
  uVar17 = 0;
  uVar14 = (uint)*pbVar1;
  if (uVar23 != 0) {
    iVar20 = 1 << (ulong)(uVar30 & 0x1f);
    uVar35 = (ulong)*pbVar1 & 0x3f;
    uVar23 = uVar23 >> uVar35 | uVar23 << 0x40 - uVar35;
    do {
      uVar35 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
      uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
/* donate: donate/README.md */
      uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
      uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) + uVar14 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)((long)puVar27 + (ulong)uVar30 * 4 + uVar33 * 4);
        if (uVar30 < uVar22) break;
        puVar11 = puVar24;
        if (uVar31 <= uVar30) {
          puVar11 = puVar37;
        }
        Hint_Prefetch((long)puVar11 + (ulong)uVar30,0,0,0);
        auStack_170[uVar17] = uVar30;
        uVar17 = uVar17 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar23 = uVar23 - 1 & uVar23;
      if ((uVar23 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
/* reversing this took months of machine time */
  uVar22 = 0x3f;
  if ((uVar14 & 0x3f) != 1) {
    uVar22 = 0;
  }
  lVar8 = (ulong)uVar22 + (ulong)(uVar14 - 1 & 0x3f);
  *pbVar1 = (byte)lVar8;
  pbVar1[lVar8] = bVar28;
  iVar20 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar20 + 1;
  *(int *)((long)puVar27 + lVar8 * 4 + uVar33 * 4) = iVar20;
  if (uVar17 == 0) {
    piVar9 = (int *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)param_2 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_198 = (ulong *)((long)param_3 + -1);
/* WM - more drops soon - github.com/pengussy */
    puStack_190 = (ulong *)((long)param_3 + -3);
    iStack_184 = uVar16 + 3;
    puStack_1a8 = param_2 + 1;
    puStack_1a0 = puVar37 + 1;
    piVar34 = (int *)((long)&MACH_HEADER.magic + 3);
    do {
      uVar22 = auStack_170[unaff_x26];
      unaff_x23 = (int *)(ulong)uVar22;
      if (uVar22 < uVar31) {
        if (*(int *)((long)puVar24 + (long)unaff_x23) == (int)*param_2) {
          param_4 = (ulong *)((long)puVar24 + uVar18);
          auVar49 = func_0x002ad924((int *)((long)param_2 + 4),
                                    (int *)((long)puVar24 + (long)unaff_x23) + 1,param_3,param_4,
                                    (long)puVar37 + uVar18);
          puVar11 = auVar49._8_8_;
          piVar9 = (int *)(auVar49._0_8_ + 4);
          puVar37 = puStack_178;
          unaff_x27 = puVar24;
          goto joined_r0x002d5684;
        }
      }
      else {
        puVar25 = (ulong *)((long)puVar37 + (long)unaff_x23);
        if (*(int *)((long)puVar25 + (long)piVar34 + -3) ==
            *(int *)((long)unaff_x19 + (long)piVar34)) {
// donate: donate/README.md
          if (param_2 < unaff_x28) {
            if (*puVar25 == *param_2) {
              lVar8 = 0;
              puVar25 = (ulong *)((long)puStack_1a0 + (long)unaff_x23);
              puVar27 = puStack_1a8;
              do {
                if (unaff_x28 <= puVar27) goto LAB_002d55dc;
                uVar23 = *puVar25;
                uVar33 = *puVar27;
                lVar8 = lVar8 + 8;
                puVar25 = puVar25 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar23 == uVar33);
              uVar33 = uVar33 ^ uVar23;
              uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
              uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
              uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
              uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
              piVar9 = (int *)(lVar8 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3));
            }
            else {
              uVar33 = *param_2 ^ *puVar25;
              uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
              uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
              uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
// more drops soon - github.com/pengussy
              uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
              piVar9 = (int *)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
            }
          }
          else {
            puVar27 = param_2;
LAB_002d55dc:
            if (puVar27 < puStack_190) {
              if ((int)*puVar25 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar25 = (ulong *)((long)puVar25 + 4);
              }
            }
            if (puVar27 < puStack_198) {
              if ((short)*puVar25 == (short)*puVar27) {
                puVar25 = (ulong *)((long)puVar25 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if (puVar27 < param_3) {
              if ((char)*puVar25 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
            }
            piVar9 = (int *)((long)puVar27 - (long)param_2);
          }
joined_r0x002d5684:
          if (piVar34 < piVar9) {
            *puStack_180 = (ulong)(iStack_184 - uVar22);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
            piVar34 = piVar9;
            unaff_x20 = piVar9;
            if ((ulong *)((long)param_2 + (long)piVar9) == param_3) break;
          }
        }
      }
      piVar9 = piVar34;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = piVar9;
      piVar34 = piVar9;
    } while (unaff_x26 != uVar17);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  auVar49 = ___stack_chk_fail(piVar9,puVar11);
  puVar24 = auVar49._8_8_;
  lVar8 = auVar49._0_8_;
  puStack_210 = unaff_x28;
  puStack_208 = unaff_x27;
  uStack_200 = unaff_x26;
  uStack_1f8 = uVar17;
  uStack_1f0 = uVar18;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  piStack_1e8 = unaff_x23;
  puStack_1e0 = puVar37;
  puStack_1d8 = param_2;
  piStack_1d0 = unaff_x20;
  pdStack_1c8 = unaff_x19;
  puStack_1c0 = auStack_68 + 0x58;
  puStack_1b8 = &SUB_002d5840;
  puStack_330 = param_4;
  lStack_220 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar27 = *(ulong **)(lVar8 + 0x70);
  puVar25 = *(ulong **)(lVar8 + 0x38);
  iVar20 = *(int *)(lVar8 + 0x34);
  puStack_390 = *(ulong **)(lVar8 + 8);
  puVar37 = *(ulong **)(lVar8 + 0x10);
  uVar30 = 1 << (ulong)(*(uint *)(lVar8 + 0x100) & 0x1f);
  uVar31 = *(uint *)(lVar8 + 0x18);
  uVar18 = (long)puVar24 - (long)puStack_390;
  uVar16 = (uint)uVar18;
  uVar22 = uVar16 - uVar30;
  if (uVar16 - *(uint *)(lVar8 + 0x1c) <= uVar30 || *(int *)(lVar8 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar8 + 0x1c);
  }
  uVar30 = *(uint *)(lVar8 + 0x10c);
  if (3 < uVar30) {
    uVar30 = 4;
  }
  uVar17 = *(ulong *)(lVar8 + 0x60);
  puStack_328 = puStack_390;
  if (*(int *)(lVar8 + 300) == 0) {
    lVar26 = lVar8 + 0x40;
/* WM - unlicensed copy if this notice is missing */
    uVar14 = *(uint *)(lVar8 + 0x2c);
    uVar33 = (ulong)uVar14;
    param_4 = puVar27;
    unaff_x27 = puVar25;
    if (0x180 < uVar16 - uVar14) {
      if (uVar14 < 0xffffffa0) {
        uVar23 = uVar33 + 0x60;
        do {
          uVar35 = (*(long *)((long)puStack_390 + uVar33 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar8 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar15 = uVar35 >> 4 & 0xffffff0;
          Hint_Prefetch((int *)((long)puVar27 + uVar15 * 4),0,0,0);
          Hint_Prefetch((long)puVar25 + uVar15,0,0,0);
          uVar39 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
          *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar35;
          uVar35 = (ulong)(uVar39 >> 4) & 0xffffff0;
          pbVar1 = (byte *)((long)puVar25 + uVar35);
          unaff_x23 = (int *)(ulong)(*pbVar1 - 1 & 0xf);
          uVar14 = 0xf;
          if ((*pbVar1 & 0xf) != 1) {
            uVar14 = 0;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          }
          unaff_x20 = (int *)((ulong)uVar14 + (long)unaff_x23);
          *pbVar1 = (byte)unaff_x20;
          pbVar1[(long)unaff_x20] = (byte)uVar39;
          *(int *)((long)puVar27 + (long)unaff_x20 * 4 + uVar35 * 4) = (int)uVar33;
          uVar33 = uVar33 + 1;
        } while (uVar23 != uVar33);
        param_4 = *(ulong **)(lVar8 + 0x70);
        unaff_x27 = *(ulong **)(lVar8 + 0x38);
      }
      uVar14 = uVar16 - 0x20;
      uVar33 = (ulong)uVar14;
      iVar13 = (int)((long)puVar24 + 1U) - (int)((long)puStack_390 + uVar33);
      unaff_x19 = &MACH_HEADER.cpusubtype;
      iVar38 = 8;
      if (iVar13 + 1U < 8) {
        iVar38 = iVar13 + 1;
      }
      iVar13 = 0;
      if ((long)puStack_390 + uVar33 <= (long)puVar24 + 1U) {
        iVar13 = iVar38;
      }
      if (uVar14 < iVar13 + uVar14) {
        iVar38 = *(int *)(lVar8 + 0x34);
        uVar35 = *(ulong *)(lVar8 + 0x60);
        uVar23 = uVar33;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puStack_390 + uVar23) * -0x30e4432340650000 ^
                                uVar35) >> ((ulong)(0x38 - iVar38) & 0x3f));
          uVar15 = (ulong)unaff_x19 >> 4 & 0xffffff0;
          unaff_x23 = (int *)(uVar15 * 4);
          Hint_Prefetch((int *)((long)param_4 + (long)unaff_x23),0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar15,0,0,0);
          unaff_x20 = (int *)(uVar23 & 7);
          *(int *)(lVar26 + (long)unaff_x20 * 4) = (int)unaff_x19;
          uVar23 = uVar23 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
/* wm:no support for modified copies */
      }
    }
    if (uVar14 < uVar16) {
      lVar40 = *(long *)(lVar8 + 8);
      iVar38 = *(int *)(lVar8 + 0x34);
      do {
        uVar23 = (*(long *)(lVar40 + 8 + uVar33) * -0x30e4432340650000 ^ *(ulong *)(lVar8 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar35 = uVar23 >> 4 & 0xffffff0;
        Hint_Prefetch((int *)((long)param_4 + uVar35 * 4),0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar35,0,0,0);
        uVar39 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
        unaff_x23 = (int *)(ulong)uVar39;
        *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar39 >> 4) & 0xffffff0;
        unaff_x20 = (int *)((long)param_4 + uVar23 * 4);
        unaff_x19 = (dword *)((long)unaff_x27 + uVar23);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0xf);
        uVar14 = 0xf;
        if (((byte)*unaff_x19 & 0xf) != 1) {
          uVar14 = 0;
        }
        lVar32 = uVar14 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar32;
        *(byte *)((long)unaff_x19 + lVar32) = (byte)uVar39;
        unaff_x20[lVar32] = (int)uVar33;
        uVar33 = uVar33 + 1;
      } while (uVar33 < (uVar18 & 0xffffffff));
    }
    *(uint *)(lVar8 + 0x2c) = uVar16;
    uVar33 = (*(long *)((long)puStack_390 + (uVar18 & 0xffffffff) + 8) * -0x30e4432340650000 ^
             uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f);
    uVar17 = uVar33 >> 4 & 0xffffff0;
    Hint_Prefetch((int *)((long)puVar27 + uVar17 * 4),0,0,0);
    Hint_Prefetch((long)puVar25 + uVar17,0,0,0);
    uVar14 = *(uint *)(lVar26 + (uVar18 & 7) * 4);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    *(int *)(lVar26 + (uVar18 & 7) * 4) = (int)uVar33;
  }
  else {
    uVar14 = (uint)((*puVar24 * -0x30e4432340650000 ^ uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(lVar8 + 0x2c) = uVar16;
  }
  *(uint *)(lVar8 + 0x68) = *(int *)(lVar8 + 0x68) + uVar14;
  uVar23 = (ulong)(uVar14 >> 4) & 0xffffff0;
  pauVar2 = (undefined1 (*) [16])((long)puVar25 + uVar23);
  bVar28 = (*pauVar2)[0];
  auVar49 = *pauVar2;
  bVar29 = (byte)uVar14;
  bVar41 = auVar49[0];
  uVar42 = CONCAT11(-(auVar49[9] == bVar29),-(auVar49[8] == bVar29));
  uVar43 = CONCAT13(-(auVar49[0xb] == bVar29),CONCAT12(-(auVar49[10] == bVar29),uVar42));
  uVar44 = CONCAT15(-(auVar49[0xd] == bVar29),CONCAT14(-(auVar49[0xc] == bVar29),uVar43));
  uVar17 = CONCAT17((char)(CONCAT17(-(auVar49[0xf] == bVar29),
                                    CONCAT16(-(auVar49[0xe] == bVar29),uVar44)) >> 0x34),
                    CONCAT16((char)((uint6)uVar44 >> 0x24),
                             CONCAT15((char)((uint)uVar43 >> 0x14),
                                      CONCAT14((char)(uVar42 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar49[7] == bVar29),
                                                                        -(auVar49[6] == bVar29)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar49[
                                                  5] == bVar29),-(auVar49[4] == bVar29)) >> 4),
                                                  CONCAT11((char)(CONCAT11(-(auVar49[3] == bVar29),
                                                                           -(auVar49[2] == bVar29))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar49[1] == bVar29),
                                                                           -(bVar41 == bVar29)) >> 4
                                                                 ))))))));
/* more drops soon - github.com/pengussy - github.com/pengussy */
  uVar33 = (ulong)bVar28 & 0xf;
  uVar18 = 0;
  uVar17 = (uVar17 >> uVar33 * 4 | uVar17 << uVar33 * -4 + 0x40) & 0x8888888888888888;
  if (uVar17 != 0) {
    iVar20 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar33 = (uVar17 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + (bVar28 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar30 != 0) {
        uVar30 = *(uint *)((long)puVar27 + (ulong)uVar30 * 4 + uVar23 * 4);
        if (uVar30 < uVar22) break;
        param_4 = puVar37;
        if (uVar31 <= uVar30) {
          param_4 = puStack_390;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar30,0,0,0);
        auStack_320[uVar18] = uVar30;
        uVar18 = uVar18 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar17 = uVar17 - 1 & uVar17;
      if ((uVar17 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
  uVar22 = 0xf;
  if ((bVar41 & 0xf) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(bVar41 - 1 & 0xf);
  (*pauVar2)[0] = (char)lVar26;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  (*pauVar2)[lVar26] = bVar29;
  iVar20 = *(int *)(lVar8 + 0x2c);
  *(int *)(lVar8 + 0x2c) = iVar20 + 1;
  *(int *)((long)puVar27 + lVar26 * 4 + uVar23 * 4) = iVar20;
  if (uVar18 == 0) {
    piVar9 = (int *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)puVar24 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_348 = (ulong *)((long)param_3 + -1);
    puStack_340 = (ulong *)((long)param_3 + -3);
    iStack_334 = uVar16 + 3;
    puStack_358 = puVar24 + 1;
    puStack_350 = puStack_390 + 1;
    piVar34 = (int *)((long)&MACH_HEADER.magic + 3);
    do {
      uVar22 = auStack_320[unaff_x26];
      unaff_x23 = (int *)(ulong)uVar22;
      if (uVar22 < uVar31) {
        if (*(int *)((long)puVar37 + (long)unaff_x23) == (int)*puVar24) {
          param_4 = (ulong *)((long)puVar37 + (ulong)uVar31);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          lVar8 = func_0x002ad924((int *)((long)puVar24 + 4),
                                  (int *)((long)puVar37 + (long)unaff_x23) + 1);
          piVar9 = (int *)(lVar8 + 4);
          puStack_390 = puStack_328;
          unaff_x27 = puVar37;
          goto joined_r0x002d5c98;
        }
      }
      else {
        puVar25 = (ulong *)((long)puStack_390 + (long)unaff_x23);
        if (*(int *)((long)puVar25 + (long)piVar34 + -3) ==
            *(int *)((long)unaff_x19 + (long)piVar34)) {
          if (puVar24 < unaff_x28) {
            if (*puVar25 == *puVar24) {
              lVar8 = 0;
              puVar25 = (ulong *)((long)puStack_350 + (long)unaff_x23);
              puVar27 = puStack_358;
              do {
                if (unaff_x28 <= puVar27) goto code_r0x002d5bf0;
                uVar33 = *puVar25;
                uVar17 = *puVar27;
                lVar8 = lVar8 + 8;
                puVar25 = puVar25 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar33 == uVar17);
              uVar17 = uVar17 ^ uVar33;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              piVar9 = (int *)(lVar8 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3));
            }
            else {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uVar17 = *puVar24 ^ *puVar25;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              piVar9 = (int *)((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
            }
          }
          else {
            puVar27 = puVar24;
code_r0x002d5bf0:
            if (puVar27 < puStack_340) {
              if ((int)*puVar25 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar25 = (ulong *)((long)puVar25 + 4);
              }
            }
            if (puVar27 < puStack_348) {
              if ((short)*puVar25 == (short)*puVar27) {
                puVar25 = (ulong *)((long)puVar25 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if (puVar27 < param_3) {
              if ((char)*puVar25 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
            }
            piVar9 = (int *)((long)puVar27 - (long)puVar24);
          }
joined_r0x002d5c98:
          if (piVar34 < piVar9) {
            *puStack_330 = (ulong)(iStack_334 - uVar22);
            piVar34 = piVar9;
            unaff_x20 = piVar9;
            if ((ulong *)((long)puVar24 + (long)piVar9) == param_3) break;
/* unlicensed copy if this notice is missing */
          }
        }
      }
      piVar9 = piVar34;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = piVar9;
      piVar34 = piVar9;
    } while (unaff_x26 != uVar18);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_220) {
    return;
  }
  auVar49 = ___stack_chk_fail(piVar9);
  puVar25 = auVar49._8_8_;
  lVar8 = auVar49._0_8_;
  puStack_3c0 = unaff_x28;
  puStack_3b8 = unaff_x27;
  uStack_3b0 = unaff_x26;
  uStack_3a8 = uVar18;
  uStack_3a0 = (ulong)uVar31;
  piStack_398 = unaff_x23;
  puStack_388 = puVar24;
  piStack_380 = unaff_x20;
/* WM - found on a paste site? it was re-uploaded illegally */
  pdStack_378 = unaff_x19;
  ppuStack_370 = &puStack_1c0;
  puStack_368 = &SUB_002d5e3c;
  puStack_4e0 = param_4;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar27 = *(ulong **)(lVar8 + 0x70);
  puVar24 = *(ulong **)(lVar8 + 0x38);
  iVar20 = *(int *)(lVar8 + 0x34);
  puStack_540 = *(ulong **)(lVar8 + 8);
  puVar37 = *(ulong **)(lVar8 + 0x10);
  uVar30 = 1 << (ulong)(*(uint *)(lVar8 + 0x100) & 0x1f);
  uVar31 = *(uint *)(lVar8 + 0x18);
  uVar18 = (long)puVar25 - (long)puStack_540;
  uVar16 = (uint)uVar18;
  uVar22 = uVar16 - uVar30;
  if (uVar16 - *(uint *)(lVar8 + 0x1c) <= uVar30 || *(int *)(lVar8 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar8 + 0x1c);
  }
  uVar30 = *(uint *)(lVar8 + 0x10c);
  if (4 < uVar30) {
    uVar30 = 5;
  }
  uVar17 = *(ulong *)(lVar8 + 0x60);
  puStack_4d8 = puStack_540;
  if (*(int *)(lVar8 + 300) == 0) {
    lVar26 = lVar8 + 0x40;
    uVar14 = *(uint *)(lVar8 + 0x2c);
    uVar33 = (ulong)uVar14;
/*  keep the notice, keep the source honest  */
    param_4 = puVar27;
    unaff_x27 = puVar24;
    if (0x180 < uVar16 - uVar14) {
      if (uVar14 < 0xffffffa0) {
        uVar23 = uVar33 + 0x60;
        do {
          uVar35 = (*(long *)((long)puStack_540 + uVar33 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar8 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar15 = uVar35 >> 3 & 0x1fffffe0;
          piVar9 = (int *)((long)puVar27 + uVar15 * 4);
          Hint_Prefetch(piVar9,0,0,0);
          Hint_Prefetch(piVar9 + 0x10,0,0,0);
          Hint_Prefetch((long)puVar24 + uVar15,0,0,0);
          uVar39 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
          *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar35;
          uVar35 = (ulong)(uVar39 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)((long)puVar24 + uVar35);
          unaff_x23 = (int *)(ulong)(*pbVar1 - 1 & 0x1f);
          uVar14 = 0x1f;
          if ((*pbVar1 & 0x1f) != 1) {
            uVar14 = 0;
          }
          unaff_x20 = (int *)((ulong)uVar14 + (long)unaff_x23);
          *pbVar1 = (byte)unaff_x20;
          pbVar1[(long)unaff_x20] = (byte)uVar39;
          *(int *)((long)puVar27 + (long)unaff_x20 * 4 + uVar35 * 4) = (int)uVar33;
          uVar33 = uVar33 + 1;
        } while (uVar23 != uVar33);
        param_4 = *(ulong **)(lVar8 + 0x70);
        unaff_x27 = *(ulong **)(lVar8 + 0x38);
      }
      uVar14 = uVar16 - 0x20;
      uVar33 = (ulong)uVar14;
      iVar13 = (int)((long)puVar25 + 1U) - (int)((long)puStack_540 + uVar33);
      unaff_x19 = &MACH_HEADER.cpusubtype;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      iVar38 = 8;
      if (iVar13 + 1U < 8) {
        iVar38 = iVar13 + 1;
      }
      iVar13 = 0;
      if ((long)puStack_540 + uVar33 <= (long)puVar25 + 1U) {
        iVar13 = iVar38;
      }
      if (uVar14 < iVar13 + uVar14) {
        iVar38 = *(int *)(lVar8 + 0x34);
        uVar35 = *(ulong *)(lVar8 + 0x60);
        uVar23 = uVar33;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puStack_540 + uVar23) * -0x30e4432340650000 ^
                                uVar35) >> ((ulong)(0x38 - iVar38) & 0x3f));
          uVar15 = (ulong)unaff_x19 >> 3 & 0x1fffffe0;
          unaff_x23 = (int *)((long)param_4 + uVar15 * 4);
          Hint_Prefetch(unaff_x23,0,0,0);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          Hint_Prefetch(unaff_x23 + 0x10,0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar15,0,0,0);
          unaff_x20 = (int *)(uVar23 & 7);
          *(int *)(lVar26 + (long)unaff_x20 * 4) = (int)unaff_x19;
          uVar23 = uVar23 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    if (uVar14 < uVar16) {
      lVar40 = *(long *)(lVar8 + 8);
      iVar38 = *(int *)(lVar8 + 0x34);
      do {
        uVar23 = (*(long *)(lVar40 + 8 + uVar33) * -0x30e4432340650000 ^ *(ulong *)(lVar8 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar35 = uVar23 >> 3 & 0x1fffffe0;
        piVar9 = (int *)((long)param_4 + uVar35 * 4);
        Hint_Prefetch(piVar9,0,0,0);
        Hint_Prefetch(piVar9 + 0x10,0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar35,0,0,0);
        uVar39 = *(uint *)(lVar26 + (uVar33 & 7) * 4);
/*  found on a paste site? it was re-uploaded illegally  */
        unaff_x23 = (int *)(ulong)uVar39;
        *(int *)(lVar26 + (uVar33 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar39 >> 3) & 0x1fffffe0;
        unaff_x20 = (int *)((long)param_4 + uVar23 * 4);
        unaff_x19 = (dword *)((long)unaff_x27 + uVar23);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0x1f);
        uVar14 = 0x1f;
        if (((byte)*unaff_x19 & 0x1f) != 1) {
          uVar14 = 0;
        }
        lVar32 = uVar14 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar32;
        *(byte *)((long)unaff_x19 + lVar32) = (byte)uVar39;
        unaff_x20[lVar32] = (int)uVar33;
        uVar33 = uVar33 + 1;
      } while (uVar33 < (uVar18 & 0xffffffff));
    }
    *(uint *)(lVar8 + 0x2c) = uVar16;
    uVar33 = (*(long *)((long)puStack_540 + (uVar18 & 0xffffffff) + 8) * -0x30e4432340650000 ^
             uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f);
    uVar17 = uVar33 >> 3 & 0x1fffffe0;
    piVar9 = (int *)((long)puVar27 + uVar17 * 4);
    Hint_Prefetch(piVar9,0,0,0);
    Hint_Prefetch(piVar9 + 0x10,0,0,0);
    Hint_Prefetch((long)puVar24 + uVar17,0,0,0);
    uVar14 = *(uint *)(lVar26 + (uVar18 & 7) * 4);
    *(int *)(lVar26 + (uVar18 & 7) * 4) = (int)uVar33;
  }
  else {
    uVar14 = (uint)((*puVar25 * -0x30e4432340650000 ^ uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(lVar8 + 0x2c) = uVar16;
  }
  *(uint *)(lVar8 + 0x68) = *(int *)(lVar8 + 0x68) + uVar14;
  uVar33 = (ulong)(uVar14 >> 3) & 0x1fffffe0;
  pbVar1 = (byte *)((long)puVar24 + uVar33);
  bVar28 = *pbVar1;
  bVar29 = (byte)uVar14;
/* wm:if you paid for this, you were scammed */
  uVar52 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)pbVar1));
  uVar53 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar52));
  uVar54 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar53));
  uVar55 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar56 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar55));
  uVar57 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar56));
  uVar42 = CONCAT11(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 2)));
  uVar43 = CONCAT13(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar42));
  uVar44 = CONCAT15(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar43));
  uVar45 = CONCAT17(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar44));
  auVar46._0_10_ =
       CONCAT19(-(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar45));
/* wm:more drops soon - github.com/pengussy */
  auVar46[10] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x16));
  auVar46[0xb] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar47[0xc] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar47._0_12_ = auVar46;
  auVar47[0xd] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar50[0xe] = -(bVar29 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
  auVar50._0_14_ = auVar47;
  auVar50[0xf] = -(bVar29 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar17 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar29 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar29 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar57)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar57 >> 0x26),
                                      CONCAT15((char)((uint)uVar56 >> 0x16),
                                               CONCAT14((char)(uVar55 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar29 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar29 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar54)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar54 >> 0x26),
                                                           CONCAT11((char)((uint)uVar53 >> 0x16),
                                                                    (char)(uVar52 >> 6)))))))),
                    CONCAT17((char)(auVar50._14_2_ >> 6),
                             CONCAT16((char)(auVar47._12_2_ >> 6),
                                      CONCAT15((char)(auVar46._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar46._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar45 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar44 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar43 >> 0x16),(char)(uVar42 >> 6)))))))),4,1);
/* wm:chat: discord.gg/sdkhDjTex */
  uVar18 = 0;
  uVar17 = (uVar17 >> ((ulong)bVar28 & 0x1f) * 2 | uVar17 << ((ulong)bVar28 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar17 != 0) {
    iVar20 = 1 << (ulong)(uVar30 & 0x1f);
    do {
      uVar23 = (uVar17 << 1 & 0xcccccccccccccccc) >> 2 | (uVar17 << 1 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) + (bVar28 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)((long)puVar27 + (ulong)uVar30 * 4 + uVar33 * 4);
        if (uVar30 < uVar22) break;
        param_4 = puVar37;
        if (uVar31 <= uVar30) {
          param_4 = puStack_540;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar30,0,0,0);
        auStack_4d0[uVar18] = uVar30;
        uVar18 = uVar18 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar17 = uVar17 - 1 & uVar17;
      if ((uVar17 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
// WM - thanks for reading - discord.gg/sdkhDjTex
  uVar22 = 0x1f;
  if ((bVar28 & 0x1f) != 1) {
    uVar22 = 0;
  }
  lVar26 = (ulong)uVar22 + (ulong)(bVar28 - 1 & 0x1f);
  *pbVar1 = (byte)lVar26;
  pbVar1[lVar26] = bVar29;
  iVar20 = *(int *)(lVar8 + 0x2c);
  *(int *)(lVar8 + 0x2c) = iVar20 + 1;
  *(int *)((long)puVar27 + lVar26 * 4 + uVar33 * 4) = iVar20;
  if (uVar18 == 0) {
    piVar9 = (int *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)puVar25 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_4f8 = (ulong *)((long)param_3 + -1);
    puStack_4f0 = (ulong *)((long)param_3 + -3);
    iStack_4e4 = uVar16 + 3;
    puStack_508 = puVar25 + 1;
    puStack_500 = puStack_540 + 1;
    piVar34 = (int *)((long)&MACH_HEADER.magic + 3);
    do {
      uVar22 = auStack_4d0[unaff_x26];
      unaff_x23 = (int *)(ulong)uVar22;
      if (uVar22 < uVar31) {
        if (*(int *)((long)puVar37 + (long)unaff_x23) == (int)*puVar25) {
          param_4 = (ulong *)((long)puVar37 + (ulong)uVar31);
          lVar8 = func_0x002ad924((int *)((long)puVar25 + 4),
                                  (int *)((long)puVar37 + (long)unaff_x23) + 1);
          piVar9 = (int *)(lVar8 + 4);
          puStack_540 = puStack_4d8;
          unaff_x27 = puVar37;
          goto joined_r0x002d62a4;
        }
      }
      else {
/* wm:origin: github.com/pengussy */
        puVar24 = (ulong *)((long)puStack_540 + (long)unaff_x23);
        if (*(int *)((long)puVar24 + (long)piVar34 + -3) ==
            *(int *)((long)unaff_x19 + (long)piVar34)) {
          if (puVar25 < unaff_x28) {
            if (*puVar24 == *puVar25) {
              lVar8 = 0;
              puVar24 = (ulong *)((long)puStack_500 + (long)unaff_x23);
              puVar27 = puStack_508;
              do {
                if (unaff_x28 <= puVar27) goto code_r0x002d61fc;
                uVar33 = *puVar24;
                uVar17 = *puVar27;
                lVar8 = lVar8 + 8;
                puVar24 = puVar24 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar33 == uVar17);
              uVar17 = uVar17 ^ uVar33;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              piVar9 = (int *)(lVar8 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3));
            }
            else {
              uVar17 = *puVar25 ^ *puVar24;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              piVar9 = (int *)((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
            }
          }
/* wm:donate: donate/README.md */
          else {
            puVar27 = puVar25;
code_r0x002d61fc:
            if (puVar27 < puStack_4f0) {
              if ((int)*puVar24 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar24 = (ulong *)((long)puVar24 + 4);
              }
            }
            if (puVar27 < puStack_4f8) {
              if ((short)*puVar24 == (short)*puVar27) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if (puVar27 < param_3) {
/* keep the notice, keep the source honest - github.com/pengussy */
              if ((char)*puVar24 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
            }
            piVar9 = (int *)((long)puVar27 - (long)puVar25);
          }
joined_r0x002d62a4:
          if (piVar34 < piVar9) {
            *puStack_4e0 = (ulong)(iStack_4e4 - uVar22);
            piVar34 = piVar9;
            unaff_x20 = piVar9;
            if ((ulong *)((long)puVar25 + (long)piVar9) == param_3) break;
          }
        }
      }
      piVar9 = piVar34;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = piVar9;
/* watermarked copy - do not remove - github.com/pengussy */
      piVar34 = piVar9;
    } while (unaff_x26 != uVar18);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_3d0) {
    return;
  }
  auVar49 = ___stack_chk_fail(piVar9);
  puVar27 = auVar49._8_8_;
  lVar8 = auVar49._0_8_;
  puStack_570 = unaff_x28;
  puStack_568 = unaff_x27;
  uStack_560 = unaff_x26;
  uStack_558 = uVar18;
  uStack_550 = (ulong)uVar31;
  piStack_548 = unaff_x23;
  puStack_538 = puVar25;
  piStack_530 = unaff_x20;
  pdStack_528 = unaff_x19;
  pppuStack_520 = &ppuStack_370;
  puStack_518 = &SUB_002d6450;
  lStack_580 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar25 = *(ulong **)(lVar8 + 0x70);
  lVar26 = *(long *)(lVar8 + 0x38);
  iVar20 = *(int *)(lVar8 + 0x34);
  puVar37 = *(ulong **)(lVar8 + 8);
  puVar24 = *(ulong **)(lVar8 + 0x10);
  uVar30 = 1 << (ulong)(*(uint *)(lVar8 + 0x100) & 0x1f);
  uVar31 = *(uint *)(lVar8 + 0x18);
  uVar18 = (long)puVar27 - (long)puVar37;
  uVar16 = (uint)uVar18;
  uVar22 = uVar16 - uVar30;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  if (uVar16 - *(uint *)(lVar8 + 0x1c) <= uVar30 || *(int *)(lVar8 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar8 + 0x1c);
  }
  uVar30 = *(uint *)(lVar8 + 0x10c);
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar17 = *(ulong *)(lVar8 + 0x60);
  if (*(int *)(lVar8 + 300) == 0) {
    lVar40 = lVar8 + 0x40;
    uVar14 = *(uint *)(lVar8 + 0x2c);
    uVar33 = (ulong)uVar14;
    puVar11 = puVar25;
    lVar32 = lVar26;
    if (0x180 < uVar16 - uVar14) {
      if (uVar14 < 0xffffffa0) {
        uVar23 = uVar33 + 0x60;
        do {
          uVar35 = (*(long *)((long)puVar37 + uVar33 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar8 + 0x60)) >> ((ulong)(0x38 - iVar20) & 0x3f);
          uVar15 = uVar35 >> 2 & 0x3fffffc0;
          piVar9 = (int *)((long)puVar25 + uVar15 * 4);
          Hint_Prefetch(piVar9,0,0,0);
          Hint_Prefetch(piVar9 + 0x10,0,0,0);
          lVar32 = lVar26 + uVar15;
          Hint_Prefetch(lVar32,0,0,0);
          Hint_Prefetch(lVar32 + 0x20,0,0,0);
          uVar39 = *(uint *)(lVar40 + (uVar33 & 7) * 4);
          *(int *)(lVar40 + (uVar33 & 7) * 4) = (int)uVar35;
          uVar35 = (ulong)(uVar39 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar26 + uVar35);
          uVar14 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar14 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          }
          lVar32 = (ulong)uVar14 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar32;
          pbVar1[lVar32] = (byte)uVar39;
          *(int *)((long)puVar25 + lVar32 * 4 + uVar35 * 4) = (int)uVar33;
          uVar33 = uVar33 + 1;
        } while (uVar23 != uVar33);
        puVar11 = *(ulong **)(lVar8 + 0x70);
        lVar32 = *(long *)(lVar8 + 0x38);
      }
      uVar14 = uVar16 - 0x20;
      uVar33 = (ulong)uVar14;
      iVar13 = (int)((long)puVar27 + 1U) - (int)((long)puVar37 + uVar33);
      iVar38 = 8;
      if (iVar13 + 1U < 8) {
        iVar38 = iVar13 + 1;
      }
/* stripping the watermark breaks the license - github.com/pengussy */
      iVar13 = 0;
      if ((long)puVar37 + uVar33 <= (long)puVar27 + 1U) {
        iVar13 = iVar38;
      }
      if (uVar14 < iVar13 + uVar14) {
        iVar38 = *(int *)(lVar8 + 0x34);
        uVar35 = *(ulong *)(lVar8 + 0x60);
        uVar23 = uVar33;
        do {
          uVar15 = (*(long *)((long)puVar37 + uVar23) * -0x30e4432340650000 ^ uVar35) >>
                   ((ulong)(0x38 - iVar38) & 0x3f);
          uVar36 = uVar15 >> 2 & 0x3fffffc0;
          piVar9 = (int *)((long)puVar11 + uVar36 * 4);
          Hint_Prefetch(piVar9,0,0,0);
          Hint_Prefetch(piVar9 + 0x10,0,0,0);
          lVar12 = lVar32 + uVar36;
          Hint_Prefetch(lVar12,0,0,0);
          Hint_Prefetch(lVar12 + 0x20,0,0,0);
          *(int *)(lVar40 + (uVar23 & 7) * 4) = (int)uVar15;
          uVar23 = uVar23 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    if (uVar14 < uVar16) {
/* proprietary - see LICENSE - do not sell */
      lVar12 = *(long *)(lVar8 + 8);
      iVar38 = *(int *)(lVar8 + 0x34);
      do {
        uVar23 = (*(long *)(lVar12 + 8 + uVar33) * -0x30e4432340650000 ^ *(ulong *)(lVar8 + 0x60))
                 >> ((ulong)(0x38 - iVar38) & 0x3f);
        uVar35 = uVar23 >> 2 & 0x3fffffc0;
        piVar9 = (int *)((long)puVar11 + uVar35 * 4);
        Hint_Prefetch(piVar9,0,0,0);
        Hint_Prefetch(piVar9 + 0x10,0,0,0);
        lVar3 = lVar32 + uVar35;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar39 = *(uint *)(lVar40 + (uVar33 & 7) * 4);
        *(int *)(lVar40 + (uVar33 & 7) * 4) = (int)uVar23;
        uVar23 = (ulong)(uVar39 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar32 + uVar23);
        uVar14 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar14 = 0;
        }
        lVar3 = (ulong)uVar14 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar39;
        *(int *)((long)puVar11 + lVar3 * 4 + uVar23 * 4) = (int)uVar33;
        uVar33 = uVar33 + 1;
      } while (uVar33 < (uVar18 & 0xffffffff));
    }
    *(uint *)(lVar8 + 0x2c) = uVar16;
    puVar10 = *(ulong **)((long)puVar37 + (uVar18 & 0xffffffff) + 8);
    uVar33 = ((long)puVar10 * -0x30e4432340650000 ^ uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f);
    uVar17 = uVar33 >> 2 & 0x3fffffc0;
    piVar9 = (int *)((long)puVar25 + uVar17 * 4);
    Hint_Prefetch(piVar9,0,0,0);
    Hint_Prefetch(piVar9 + 0x10,0,0,0);
    lVar32 = lVar26 + uVar17;
    Hint_Prefetch(lVar32,0,0,0);
    Hint_Prefetch(lVar32 + 0x20,0,0,0);
/* unlicensed copy if this notice is missing - github.com/pengussy */
    uVar14 = *(uint *)(lVar40 + (uVar18 & 7) * 4);
    *(int *)(lVar40 + (uVar18 & 7) * 4) = (int)uVar33;
  }
  else {
    uVar14 = (uint)((*puVar27 * -0x30e4432340650000 ^ uVar17) >> ((ulong)(0x38 - iVar20) & 0x3f));
    *(uint *)(lVar8 + 0x2c) = uVar16;
    puVar10 = puVar27;
    puVar11 = param_4;
  }
  *(uint *)(lVar8 + 0x68) = *(int *)(lVar8 + 0x68) + uVar14;
  uVar18 = (ulong)(uVar14 >> 2) & 0x3fffffc0;
  pbVar1 = (byte *)(lVar26 + uVar18);
  bVar28 = (byte)uVar14;
  auVar59[0] = -(pbVar1[1] == bVar28);
  auVar59[1] = -(pbVar1[5] == bVar28);
  auVar59[2] = -(pbVar1[9] == bVar28);
/*  more drops soon - github.com/pengussy  */
  auVar59[3] = -(pbVar1[0xd] == bVar28);
  auVar59[4] = -(pbVar1[0x11] == bVar28);
  auVar59[5] = -(pbVar1[0x15] == bVar28);
  auVar59[6] = -(pbVar1[0x19] == bVar28);
  auVar59[7] = -(pbVar1[0x1d] == bVar28);
  auVar59[8] = -(pbVar1[0x21] == bVar28);
  auVar59[9] = -(pbVar1[0x25] == bVar28);
  auVar59[10] = -(pbVar1[0x29] == bVar28);
  auVar59[0xb] = -(pbVar1[0x2d] == bVar28);
  auVar59[0xc] = -(pbVar1[0x31] == bVar28);
  auVar59[0xd] = -(pbVar1[0x35] == bVar28);
  auVar59[0xe] = -(pbVar1[0x39] == bVar28);
  auVar59[0xf] = -(pbVar1[0x3d] == bVar28);
  auVar51[0] = -(pbVar1[3] == bVar28);
  auVar51[1] = -(pbVar1[7] == bVar28);
  auVar51[2] = -(pbVar1[0xb] == bVar28);
  auVar51[3] = -(pbVar1[0xf] == bVar28);
  auVar51[4] = -(pbVar1[0x13] == bVar28);
  auVar51[5] = -(pbVar1[0x17] == bVar28);
  auVar51[6] = -(pbVar1[0x1b] == bVar28);
  auVar51[7] = -(pbVar1[0x1f] == bVar28);
  auVar51[8] = -(pbVar1[0x23] == bVar28);
  auVar51[9] = -(pbVar1[0x27] == bVar28);
  auVar51[10] = -(pbVar1[0x2b] == bVar28);
/*  unlicensed copy if this notice is missing  */
  auVar51[0xb] = -(pbVar1[0x2f] == bVar28);
  auVar51[0xc] = -(pbVar1[0x33] == bVar28);
  auVar51[0xd] = -(pbVar1[0x37] == bVar28);
  auVar51[0xe] = -(pbVar1[0x3b] == bVar28);
  auVar51[0xf] = -(pbVar1[0x3f] == bVar28);
  auVar6[1] = -(pbVar1[4] == bVar28);
  auVar6[0] = -(*pbVar1 == bVar28);
  auVar6[2] = -(pbVar1[8] == bVar28);
  auVar6[3] = -(pbVar1[0xc] == bVar28);
  auVar6[4] = -(pbVar1[0x10] == bVar28);
  auVar6[5] = -(pbVar1[0x14] == bVar28);
  auVar6[6] = -(pbVar1[0x18] == bVar28);
  auVar6[7] = -(pbVar1[0x1c] == bVar28);
  auVar6[8] = -(pbVar1[0x20] == bVar28);
  auVar6[9] = -(pbVar1[0x24] == bVar28);
  auVar6[10] = -(pbVar1[0x28] == bVar28);
  auVar6[0xb] = -(pbVar1[0x2c] == bVar28);
  auVar6[0xc] = -(pbVar1[0x30] == bVar28);
  auVar6[0xd] = -(pbVar1[0x34] == bVar28);
  auVar6[0xe] = -(pbVar1[0x38] == bVar28);
  auVar6[0xf] = -(pbVar1[0x3c] == bVar28);
  auVar60 = NEON_sri(auVar59,auVar6,1,1);
  auVar7[1] = -(pbVar1[6] == bVar28);
  auVar7[0] = -(pbVar1[2] == bVar28);
/* WM - keep the notice, keep the source honest */
  auVar7[2] = -(pbVar1[10] == bVar28);
  auVar7[3] = -(pbVar1[0xe] == bVar28);
  auVar7[4] = -(pbVar1[0x12] == bVar28);
  auVar7[5] = -(pbVar1[0x16] == bVar28);
  auVar7[6] = -(pbVar1[0x1a] == bVar28);
  auVar7[7] = -(pbVar1[0x1e] == bVar28);
  auVar7[8] = -(pbVar1[0x22] == bVar28);
  auVar7[9] = -(pbVar1[0x26] == bVar28);
  auVar7[10] = -(pbVar1[0x2a] == bVar28);
  auVar7[0xb] = -(pbVar1[0x2e] == bVar28);
  auVar7[0xc] = -(pbVar1[0x32] == bVar28);
  auVar7[0xd] = -(pbVar1[0x36] == bVar28);
  auVar7[0xe] = -(pbVar1[0x3a] == bVar28);
  auVar7[0xf] = -(pbVar1[0x3e] == bVar28);
  auVar49 = NEON_sri(auVar51,auVar7,1,1);
  auVar49 = NEON_sri(auVar49,auVar60,2,1);
  auVar49 = NEON_sri(auVar49,auVar49,4,1);
  uVar17 = CONCAT17((char)(auVar49._14_2_ >> 4),
                    CONCAT16((char)(auVar49._12_2_ >> 4),
                             CONCAT15((char)(auVar49._10_2_ >> 4),
                                      CONCAT14((char)(auVar49._8_2_ >> 4),
                                               CONCAT13((char)(auVar49._6_2_ >> 4),
                                                        CONCAT12((char)(auVar49._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar49._2_2_ >> 4)
                                                                          ,(char)(auVar49._0_2_ >> 4
                                                                                 ))))))));
  lVar26 = 0;
  uVar14 = (uint)*pbVar1;
  if (uVar17 != 0) {
    iVar20 = 1 << (ulong)(uVar30 & 0x1f);
    uVar33 = (ulong)*pbVar1 & 0x3f;
    uVar17 = uVar17 >> uVar33 | uVar17 << 0x40 - uVar33;
    do {
      uVar33 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar30 = (int)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + uVar14 & 0x3f;
      if (uVar30 != 0) {
        uVar30 = *(uint *)((long)puVar25 + (ulong)uVar30 * 4 + uVar18 * 4);
        if (uVar30 < uVar22) break;
        puVar10 = puVar24;
        if (uVar31 <= uVar30) {
          puVar10 = puVar37;
        }
        Hint_Prefetch((long)puVar10 + (ulong)uVar30,0,0,0);
        auStack_680[lVar26] = uVar30;
        lVar26 = lVar26 + 1;
        iVar20 = iVar20 + -1;
      }
      uVar17 = uVar17 - 1 & uVar17;
      if ((uVar17 == 0) || (iVar20 == 0)) break;
    } while( true );
  }
  uVar22 = 0x3f;
  if ((uVar14 & 0x3f) != 1) {
    uVar22 = 0;
  }
  lVar40 = (ulong)uVar22 + (ulong)(uVar14 - 1 & 0x3f);
  *pbVar1 = (byte)lVar40;
  pbVar1[lVar40] = bVar28;
  iVar20 = *(int *)(lVar8 + 0x2c);
  *(int *)(lVar8 + 0x2c) = iVar20 + 1;
  *(int *)((long)puVar25 + lVar40 * 4 + uVar18 * 4) = iVar20;
  if (lVar26 == 0) {
    uVar18 = 3;
  }
  else {
    lVar8 = 0;
/* wm:stripping the watermark breaks the license */
    uVar17 = 3;
    do {
      uVar22 = auStack_680[lVar8];
      uVar18 = (ulong)uVar22;
      if (uVar22 < uVar31) {
        if (*(int *)((long)puVar24 + uVar18) == (int)*puVar27) {
          puVar11 = (ulong *)((long)puVar24 + (ulong)uVar31);
          auVar49 = func_0x002ad924((int *)((long)puVar27 + 4),(int *)((long)puVar24 + uVar18) + 1);
          puVar10 = auVar49._8_8_;
          uVar18 = auVar49._0_8_ + 4;
          goto joined_r0x002d68cc;
        }
      }
      else {
        puVar25 = (ulong *)((long)puVar37 + uVar18);
        if (*(int *)((long)puVar25 + (uVar17 - 3)) == *(int *)((long)puVar27 + (uVar17 - 3))) {
          puVar19 = puVar27;
          if (puVar27 < (ulong *)((long)param_3 + -7)) {
            if (*puVar25 == *puVar27) {
              lVar40 = 0;
              puVar25 = (ulong *)((long)puVar37 + uVar18 + 8);
              do {
                puVar19 = puVar19 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar19) goto code_r0x002d6824;
                uVar18 = *puVar25;
                lVar40 = lVar40 + 8;
                puVar25 = puVar25 + 1;
              } while (uVar18 == *puVar19);
              uVar18 = *puVar19 ^ uVar18;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
/* no support for modified copies - github.com/pengussy */
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = lVar40 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            }
            else {
              uVar18 = *puVar27 ^ *puVar25;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
            }
          }
          else {
code_r0x002d6824:
            if (puVar19 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar25 == (int)*puVar19) {
                puVar19 = (ulong *)((long)puVar19 + 4);
                puVar25 = (ulong *)((long)puVar25 + 4);
              }
            }
            if (puVar19 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar25 == (short)*puVar19) {
/* WM - proprietary - see LICENSE - do not sell */
                puVar25 = (ulong *)((long)puVar25 + 2);
                puVar19 = (ulong *)((long)puVar19 + 2);
              }
            }
            if (puVar19 < param_3) {
              if ((char)*puVar25 == (char)*puVar19) {
                puVar19 = (ulong *)((long)puVar19 + 1);
              }
            }
            uVar18 = (long)puVar19 - (long)puVar27;
          }
joined_r0x002d68cc:
          if (uVar17 < uVar18) {
            *param_4 = (ulong)((uVar16 + 3) - uVar22);
            uVar17 = uVar18;
            if ((ulong *)((long)puVar27 + uVar18) == param_3) break;
          }
        }
      }
      uVar18 = uVar17;
/* reversing this took months of machine time - github.com/pengussy */
      lVar8 = lVar8 + 1;
      uVar17 = uVar18;
    } while (lVar8 != lVar26);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_580) {
    return;
  }
  auVar49 = ___stack_chk_fail(uVar18,puVar10);
  puVar37 = auVar49._8_8_;
  lVar8 = auVar49._0_8_;
  lVar26 = *(long *)(lVar8 + 0x80);
  uVar30 = 1 << (ulong)(*(uint *)(lVar8 + 0x104) & 0x1f);
  lVar40 = *(long *)(lVar8 + 8);
  uVar16 = 1 << (ulong)(*(uint *)(lVar8 + 0x100) & 0x1f);
  iVar20 = *(int *)(lVar8 + 0x18);
  uVar14 = (uint)((long)puVar37 - lVar40);
  uVar31 = *(uint *)(lVar8 + 0x2c);
  uVar18 = (ulong)uVar31;
  uVar22 = uVar14 - uVar16;
  if (uVar14 - *(uint *)(lVar8 + 0x1c) <= uVar16 || *(int *)(lVar8 + 0x28) != 0) {
    uVar22 = *(uint *)(lVar8 + 0x1c);
  }
  uVar16 = 0;
  if (uVar30 <= uVar14) {
    uVar16 = uVar14 - uVar30;
  }
  iVar38 = 1 << (ulong)(*(uint *)(lVar8 + 0x10c) & 0x1f);
  puVar21 = *(undefined8 **)(lVar8 + 0xf8);
  lVar32 = *(long *)(lVar8 + 0x70);
  uVar39 = ~(-1 << (ulong)(*(uint *)(lVar8 + 0x104) & 0x1f));
  uVar5 = 0x20 - *(int *)(lVar8 + 0x108);
  if (*(int *)(lVar8 + 300) == 0) {
    if (uVar31 < uVar14) {
// WM - found on a paste site? it was re-uploaded illegally
      do {
        uVar31 = (uint)(*(int *)(lVar40 + uVar18) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
        *(undefined4 *)(lVar26 + (ulong)((uint)uVar18 & uVar39) * 4) =
             *(undefined4 *)(lVar32 + (ulong)uVar31 * 4);
        *(uint *)(lVar32 + (ulong)uVar31 * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while (uVar18 < ((long)puVar37 - lVar40 & 0xffffffffU));
    }
  }
  else if (uVar31 < uVar14) {
    uVar4 = (uint)(*(int *)(lVar40 + uVar18) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
    *(undefined4 *)(lVar26 + (ulong)(uVar31 & uVar39) * 4) =
         *(undefined4 *)(lVar32 + (ulong)uVar4 * 4);
    *(uint *)(lVar32 + (ulong)uVar4 * 4) = uVar31;
  }
  *(uint *)(lVar8 + 0x2c) = uVar14;
  iVar13 = (int)*puVar37;
  uVar31 = *(uint *)(lVar32 + (ulong)((uint)(iVar13 * -0x61c8864f) >> (ulong)(uVar5 & 0x1f)) * 4);
  if (uVar31 < uVar22) {
    uVar17 = 3;
code_r0x002d6ba8:
    uVar31 = 1 << (ulong)(*(uint *)((long)puVar21 + 0x104) & 0x1f);
    lVar8 = puVar21[1];
    uVar30 = (int)*puVar21 - (int)lVar8;
    uVar22 = 0;
    if (uVar31 <= uVar30) {
      uVar22 = uVar30 - uVar31;
    }
    if (iVar38 != 0) {
      uVar16 = *(uint *)(puVar21 + 3);
      uVar39 = *(uint *)(puVar21[0xe] +
                        (ulong)((uint)(iVar13 * -0x61c8864f) >>
                               (ulong)(-*(int *)(puVar21 + 0x21) & 0x1f)) * 4);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      if (uVar16 <= uVar39) {
        lVar26 = puVar21[0x10];
        do {
          iVar38 = iVar38 + -1;
          piVar9 = (int *)(lVar8 + (ulong)uVar39);
          if (*piVar9 == iVar13) {
            lVar40 = func_0x002ad924((int *)((long)puVar37 + 4),piVar9 + 1);
            uVar18 = lVar40 + 4;
            if (uVar17 < uVar18) {
              *puVar11 = (ulong)((uVar14 + uVar30 + 3) - (iVar20 + uVar39));
              uVar17 = uVar18;
              if ((ulong *)((long)puVar37 + uVar18) == param_3) {
                return;
              }
            }
          }
          if (uVar39 <= uVar22) {
            return;
          }
          if (iVar38 == 0) {
            return;
          }
          uVar39 = *(uint *)(lVar26 + (ulong)(uVar39 & uVar31 - 1) * 4);
        } while (uVar16 <= uVar39);
        return;
      }
// WM - watermarked copy - do not remove
    }
    return;
  }
  uVar18 = 3;
  if ((ulong *)((long)param_3 + -7) <= puVar37) {
    do {
      piVar9 = (int *)(lVar40 + (ulong)uVar31);
      if (*(int *)((long)piVar9 + (uVar18 - 3)) == *(int *)((long)puVar37 + (uVar18 - 3))) {
        puVar24 = puVar37;
        if (puVar37 < (ulong *)((long)param_3 + -3)) {
          lVar8 = 4;
          if (*piVar9 != iVar13) {
            lVar8 = 0;
          }
          piVar9 = (int *)((long)piVar9 + lVar8);
          puVar24 = (ulong *)((long)puVar37 + lVar8);
        }
        if (puVar24 < (ulong *)((long)param_3 + -1)) {
          if ((short)*piVar9 == (short)*puVar24) {
            puVar24 = (ulong *)((long)puVar24 + 2);
            piVar9 = (int *)((long)piVar9 + 2);
// if you paid for this, you were scammed
          }
        }
        if (puVar24 < param_3) {
          if ((char)*piVar9 == (char)*puVar24) {
            puVar24 = (ulong *)((long)puVar24 + 1);
          }
          uVar17 = (long)puVar24 - (long)puVar37;
        }
        else {
          uVar17 = (long)puVar24 - (long)puVar37;
        }
        if (uVar18 < uVar17) {
          *puVar11 = (ulong)((uVar14 + 3) - uVar31);
          uVar18 = uVar17;
          if (puVar24 == param_3) goto code_r0x002d6ba8;
        }
      }
      uVar17 = uVar18;
      if ((uVar31 <= uVar16) || (iVar38 = iVar38 + -1, iVar38 == 0)) goto code_r0x002d6ba8;
      uVar31 = *(uint *)(lVar26 + (ulong)(uVar31 & uVar30 - 1) * 4);
      uVar18 = uVar17;
      if (uVar31 < uVar22) goto code_r0x002d6ba8;
    } while( true );
  }
  do {
    puVar24 = (ulong *)(lVar40 + (ulong)uVar31);
    if (*(int *)((long)puVar24 + (uVar18 - 3)) == *(int *)((long)puVar37 + (uVar18 - 3))) {
      if (*puVar24 == *puVar37) {
        lVar8 = 0;
/* stripping the watermark breaks the license */
        do {
          puVar25 = (ulong *)((long)puVar37 + lVar8 + 8);
          if ((ulong *)((long)param_3 + -7) <= puVar25) {
            piVar9 = (int *)((long)puVar24 + lVar8 + 8);
            if (puVar25 < (ulong *)((long)param_3 + -3)) {
              if (*piVar9 == (int)*puVar25) {
                puVar25 = (ulong *)((long)puVar37 + lVar8 + 0xc);
                piVar9 = (int *)((long)puVar24 + lVar8 + 0xc);
              }
            }
            if (puVar25 < (ulong *)((long)param_3 + -1)) {
              if ((short)*piVar9 == (short)*puVar25) {
                puVar25 = (ulong *)((long)puVar25 + 2);
                piVar9 = (int *)((long)piVar9 + 2);
              }
            }
            if (puVar25 < param_3) {
              if ((char)*piVar9 == (char)*puVar25) {
                puVar25 = (ulong *)((long)puVar25 + 1);
              }
            }
            uVar17 = (long)puVar25 - (long)puVar37;
            goto joined_r0x002d6db0;
          }
/* wm:unlicensed copy if this notice is missing */
          uVar17 = *(ulong *)((long)puVar24 + lVar8 + 8);
          lVar8 = lVar8 + 8;
        } while (uVar17 == *puVar25);
        uVar17 = *puVar25 ^ uVar17;
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = lVar8 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
      }
      else {
        uVar17 = *puVar37 ^ *puVar24;
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
      }
joined_r0x002d6db0:
      if (uVar18 < uVar17) {
        *puVar11 = (ulong)((uVar14 + 3) - uVar31);
        uVar18 = uVar17;
        if ((ulong *)((long)puVar37 + uVar17) == param_3) goto code_r0x002d6ba8;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      }
    }
    uVar17 = uVar18;
    if ((uVar31 <= uVar16) || (iVar38 = iVar38 + -1, iVar38 == 0)) goto code_r0x002d6ba8;
    uVar31 = *(uint *)(lVar26 + (ulong)(uVar31 & uVar30 - 1) * 4);
    uVar18 = uVar17;
    if (uVar31 < uVar22) goto code_r0x002d6ba8;
  } while( true );
}

