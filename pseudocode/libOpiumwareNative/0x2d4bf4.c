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
 *  file-id: 0x2d4bf4:2b08af65dd
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

void FUN_002d4bf4(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  int *piVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  int iVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long lVar27;
  byte bVar28;
  byte bVar29;
  ulong uVar30;
  uint uVar31;
/*  watermarked copy - do not remove  */
  uint uVar32;
  long lVar33;
  ulong uVar34;
  dword *unaff_x19;
  int *unaff_x20;
  int *piVar35;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  int *unaff_x23;
  int iVar39;
  uint uVar40;
  ulong unaff_x26;
  ulong *unaff_x27;
  ulong *unaff_x28;
  long lVar41;
  byte bVar42;
  ushort uVar43;
  undefined4 uVar44;
/* no support for modified copies */
  undefined6 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [12];
  undefined1 auVar49 [14];
  undefined1 auVar51 [16];
  undefined1 auVar48 [12];
  undefined1 auVar50 [14];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  ushort uVar54;
  undefined4 uVar55;
  undefined6 uVar56;
  ushort uVar57;
  undefined4 uVar58;
  undefined6 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint auStack_830 [64];
  long lStack_730;
  ulong *puStack_720;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  ulong *puStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  int *piStack_6f8;
  ulong *puStack_6f0;
  ulong *puStack_6e8;
  int *piStack_6e0;
  dword *pdStack_6d8;
  undefined1 ****ppppuStack_6d0;
  code *pcStack_6c8;
  ulong *puStack_6b8;
  ulong *puStack_6b0;
  ulong *puStack_6a8;
  ulong *puStack_6a0;
  int iStack_694;
  ulong *puStack_690;
  ulong *puStack_688;
  uint auStack_680 [64];
  long lStack_580;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
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
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong *puStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  int *piStack_398;
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
  code *pcStack_1b8;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
/* WM - origin: github.com/pengussy */
  int iStack_184;
  ulong *puStack_180;
  ulong *puStack_178;
  uint auStack_170 [64];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  puStack_180 = param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar26 = *(ulong **)(param_1 + 0x70);
  puVar24 = *(ulong **)(param_1 + 0x38);
  iVar21 = *(int *)(param_1 + 0x34);
  puVar38 = *(ulong **)(param_1 + 8);
  puVar25 = *(ulong **)(param_1 + 0x10);
  uVar31 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar32 = *(uint *)(param_1 + 0x18);
  uVar19 = (ulong)uVar32;
  uVar18 = (long)param_2 - (long)puVar38;
  uVar17 = (uint)uVar18;
  uVar23 = uVar17 - uVar31;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar31 || *(int *)(param_1 + 0x28) != 0) {
    uVar23 = *(uint *)(param_1 + 0x1c);
  }
  uVar31 = *(uint *)(param_1 + 0x10c);
  if (4 < uVar31) {
    uVar31 = 5;
  }
  uVar34 = *(ulong *)(param_1 + 0x60);
  puStack_178 = puVar38;
  if (*(int *)(param_1 + 300) == 0) {
    lVar9 = param_1 + 0x40;
    uVar15 = *(uint *)(param_1 + 0x2c);
    uVar30 = (ulong)uVar15;
    param_4 = puVar26;
    unaff_x27 = puVar24;
    if (0x180 < uVar17 - uVar15) {
      if (uVar15 < 0xffffffa0) {
        uVar36 = uVar30 + 0x60;
        do {
          uVar16 = (*(long *)((long)puVar38 + uVar30 + 8) * -0x30e4432345000000 ^
                   *(ulong *)(param_1 + 0x60)) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar37 = uVar16 >> 3 & 0x1fffffe0;
          piVar10 = (int *)((long)puVar26 + uVar37 * 4);
          Hint_Prefetch(piVar10,0,0,0);
          Hint_Prefetch(piVar10 + 0x10,0,0,0);
          Hint_Prefetch((long)puVar24 + uVar37,0,0,0);
          uVar40 = *(uint *)(lVar9 + (uVar30 & 7) * 4);
          *(int *)(lVar9 + (uVar30 & 7) * 4) = (int)uVar16;
          uVar16 = (ulong)(uVar40 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)((long)puVar24 + uVar16);
          unaff_x23 = (int *)(ulong)(*pbVar1 - 1 & 0x1f);
/*  do not claim this as your own  */
          uVar15 = 0x1f;
          if ((*pbVar1 & 0x1f) != 1) {
            uVar15 = 0;
          }
          unaff_x20 = (int *)((ulong)uVar15 + (long)unaff_x23);
          *pbVar1 = (byte)unaff_x20;
          pbVar1[(long)unaff_x20] = (byte)uVar40;
          *(int *)((long)puVar26 + (long)unaff_x20 * 4 + uVar16 * 4) = (int)uVar30;
          uVar30 = uVar30 + 1;
        } while (uVar36 != uVar30);
        param_4 = *(ulong **)(param_1 + 0x70);
        unaff_x27 = *(ulong **)(param_1 + 0x38);
      }
      uVar15 = uVar17 - 0x20;
      uVar30 = (ulong)uVar15;
      iVar14 = (int)((long)param_2 + 1U) - (int)((long)puVar38 + uVar30);
      unaff_x19 = &MACH_HEADER.cpusubtype;
      iVar39 = 8;
      if (iVar14 + 1U < 8) {
        iVar39 = iVar14 + 1;
      }
      iVar14 = 0;
      if ((long)puVar38 + uVar30 <= (long)param_2 + 1U) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        iVar14 = iVar39;
      }
      if (uVar15 < iVar14 + uVar15) {
        iVar39 = *(int *)(param_1 + 0x34);
        uVar16 = *(ulong *)(param_1 + 0x60);
        uVar36 = uVar30;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puVar38 + uVar36) * -0x30e4432345000000 ^ uVar16)
                               >> ((ulong)(0x38 - iVar39) & 0x3f));
          uVar37 = (ulong)unaff_x19 >> 3 & 0x1fffffe0;
          unaff_x23 = (int *)((long)param_4 + uVar37 * 4);
          Hint_Prefetch(unaff_x23,0,0,0);
          Hint_Prefetch(unaff_x23 + 0x10,0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar37,0,0,0);
          unaff_x20 = (int *)(uVar36 & 7);
          *(int *)(lVar9 + (long)unaff_x20 * 4) = (int)unaff_x19;
          uVar36 = uVar36 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    if (uVar15 < uVar17) {
      lVar27 = *(long *)(param_1 + 8);
      iVar39 = *(int *)(param_1 + 0x34);
      do {
        uVar36 = (*(long *)(lVar27 + 8 + uVar30) * -0x30e4432345000000 ^ *(ulong *)(param_1 + 0x60))
                 >> ((ulong)(0x38 - iVar39) & 0x3f);
        uVar16 = uVar36 >> 3 & 0x1fffffe0;
        piVar10 = (int *)((long)param_4 + uVar16 * 4);
/* WM - if you paid for this, you were scammed */
        Hint_Prefetch(piVar10,0,0,0);
        Hint_Prefetch(piVar10 + 0x10,0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar16,0,0,0);
        uVar40 = *(uint *)(lVar9 + (uVar30 & 7) * 4);
        unaff_x23 = (int *)(ulong)uVar40;
        *(int *)(lVar9 + (uVar30 & 7) * 4) = (int)uVar36;
        uVar36 = (ulong)(uVar40 >> 3) & 0x1fffffe0;
        unaff_x20 = (int *)((long)param_4 + uVar36 * 4);
        unaff_x19 = (dword *)((long)unaff_x27 + uVar36);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0x1f);
        uVar15 = 0x1f;
        if (((byte)*unaff_x19 & 0x1f) != 1) {
          uVar15 = 0;
        }
        lVar41 = uVar15 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar41;
        *(byte *)((long)unaff_x19 + lVar41) = (byte)uVar40;
        unaff_x20[lVar41] = (int)uVar30;
        uVar30 = uVar30 + 1;
      } while (uVar30 < (uVar18 & 0xffffffff));
    }
    *(uint *)(param_1 + 0x2c) = uVar17;
    uVar30 = (*(long *)((long)puVar38 + (uVar18 & 0xffffffff) + 8) * -0x30e4432345000000 ^ uVar34)
             >> ((ulong)(0x38 - iVar21) & 0x3f);
    uVar34 = uVar30 >> 3 & 0x1fffffe0;
    piVar10 = (int *)((long)puVar26 + uVar34 * 4);
    Hint_Prefetch(piVar10,0,0,0);
    Hint_Prefetch(piVar10 + 0x10,0,0,0);
    Hint_Prefetch((long)puVar24 + uVar34,0,0,0);
    uVar15 = *(uint *)(lVar9 + (uVar18 & 7) * 4);
    *(int *)(lVar9 + (uVar18 & 7) * 4) = (int)uVar30;
  }
  else {
    uVar15 = (uint)((*param_2 * -0x30e4432345000000 ^ uVar34) >> ((ulong)(0x38 - iVar21) & 0x3f));
/* more drops soon - github.com/pengussy */
    *(uint *)(param_1 + 0x2c) = uVar17;
  }
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar15;
  uVar30 = (ulong)(uVar15 >> 3) & 0x1fffffe0;
  pbVar1 = (byte *)((long)puVar24 + uVar30);
  bVar29 = *pbVar1;
  bVar28 = (byte)uVar15;
  uVar54 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)pbVar1));
  uVar55 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar54));
  uVar56 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar55));
  uVar57 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar58 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar57));
  uVar59 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar58));
  uVar43 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 2)));
/* wm:do not claim this as your own */
  uVar44 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar43));
  uVar45 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar44));
  uVar46 = CONCAT17(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar45));
  auVar47._0_10_ =
       CONCAT19(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar46));
  auVar47[10] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x16));
  auVar47[0xb] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar49[0xc] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar49._0_12_ = auVar47;
  auVar49[0xd] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar63[0xe] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
  auVar63._0_14_ = auVar49;
  auVar63[0xf] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar34 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar28 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar28 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar59)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar59 >> 0x26),
                                      CONCAT15((char)((uint)uVar58 >> 0x16),
                                               CONCAT14((char)(uVar57 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar28 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
/*  found on a paste site? it was re-uploaded illegally  */
                                                  CONCAT16(-(bVar28 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar56)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar56 >> 0x26),
                                                           CONCAT11((char)((uint)uVar55 >> 0x16),
                                                                    (char)(uVar54 >> 6)))))))),
                    CONCAT17((char)(auVar63._14_2_ >> 6),
                             CONCAT16((char)(auVar49._12_2_ >> 6),
                                      CONCAT15((char)(auVar47._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar47._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar46 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar45 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar44 >> 0x16),(char)(uVar43 >> 6)))))))),4,1);
  uVar18 = 0;
  uVar34 = (uVar34 >> ((ulong)bVar29 & 0x1f) * 2 | uVar34 << ((ulong)bVar29 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
  if (uVar34 != 0) {
    iVar21 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar36 = (uVar34 << 1 & 0xcccccccccccccccc) >> 2 | (uVar34 << 1 & 0x3333333333333333) << 2;
      uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) + (bVar29 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)((long)puVar26 + (ulong)uVar31 * 4 + uVar30 * 4);
        if (uVar31 < uVar23) break;
        param_4 = puVar25;
        if (uVar32 <= uVar31) {
          param_4 = puVar38;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar31,0,0,0);
        auStack_170[uVar18] = uVar31;
        uVar18 = uVar18 + 1;
        iVar21 = iVar21 + -1;
// WM - watermarked copy - do not remove
      }
      uVar34 = uVar34 - 1 & uVar34;
      if ((uVar34 == 0) || (iVar21 == 0)) break;
    } while( true );
  }
  uVar23 = 0x1f;
  if ((bVar29 & 0x1f) != 1) {
    uVar23 = 0;
  }
  lVar9 = (ulong)uVar23 + (ulong)(bVar29 - 1 & 0x1f);
  *pbVar1 = (byte)lVar9;
  pbVar1[lVar9] = bVar28;
  iVar21 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar21 + 1;
  *(int *)((long)puVar26 + lVar9 * 4 + uVar30 * 4) = iVar21;
  if (uVar18 == 0) {
    piVar10 = (int *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)param_2 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_198 = (ulong *)((long)param_3 + -1);
    puStack_190 = (ulong *)((long)param_3 + -3);
    iStack_184 = uVar17 + 3;
// WM - chat: discord.gg/sdkhDjTex
    puStack_1a8 = param_2 + 1;
    puStack_1a0 = puVar38 + 1;
    piVar35 = (int *)((long)&MACH_HEADER.magic + 3);
    do {
      uVar23 = auStack_170[unaff_x26];
      unaff_x23 = (int *)(ulong)uVar23;
      if (uVar23 < uVar32) {
        if (*(int *)((long)puVar25 + (long)unaff_x23) == (int)*param_2) {
          param_4 = (ulong *)((long)puVar25 + uVar19);
          lVar9 = func_0x002ad924((int *)((long)param_2 + 4),
                                  (int *)((long)puVar25 + (long)unaff_x23) + 1,param_3,param_4,
                                  (long)puVar38 + uVar19);
          piVar10 = (int *)(lVar9 + 4);
          puVar38 = puStack_178;
          unaff_x27 = puVar25;
          goto joined_r0x002d505c;
        }
      }
      else {
        puVar24 = (ulong *)((long)puVar38 + (long)unaff_x23);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        if (*(int *)((long)puVar24 + (long)piVar35 + -3) ==
            *(int *)((long)unaff_x19 + (long)piVar35)) {
          if (param_2 < unaff_x28) {
            if (*puVar24 == *param_2) {
              lVar9 = 0;
              puVar24 = (ulong *)((long)puStack_1a0 + (long)unaff_x23);
              puVar26 = puStack_1a8;
              do {
                if (unaff_x28 <= puVar26) goto LAB_002d4fb4;
                uVar30 = *puVar24;
                uVar34 = *puVar26;
                lVar9 = lVar9 + 8;
                puVar24 = puVar24 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar30 == uVar34);
              uVar34 = uVar34 ^ uVar30;
              uVar34 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
              uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
              uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
/* do not claim this as your own - github.com/pengussy */
              uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
              uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)(lVar9 + ((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3));
            }
            else {
              uVar34 = *param_2 ^ *puVar24;
              uVar34 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
              uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
              uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
              uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3);
            }
          }
          else {
            puVar26 = param_2;
LAB_002d4fb4:
            if (puVar26 < puStack_190) {
              if ((int)*puVar24 == (int)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 4);
                puVar24 = (ulong *)((long)puVar24 + 4);
              }
            }
// do not claim this as your own
            if (puVar26 < puStack_198) {
              if ((short)*puVar24 == (short)*puVar26) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
            }
            if (puVar26 < param_3) {
              if ((char)*puVar24 == (char)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 1);
              }
            }
            piVar10 = (int *)((long)puVar26 - (long)param_2);
          }
joined_r0x002d505c:
          if (piVar35 < piVar10) {
            *puStack_180 = (ulong)(iStack_184 - uVar23);
            piVar35 = piVar10;
            unaff_x20 = piVar10;
            if ((ulong *)((long)param_2 + (long)piVar10) == param_3) break;
          }
        }
      }
      piVar10 = piVar35;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = piVar10;
      piVar35 = piVar10;
    } while (unaff_x26 != uVar18);
/* WM - no support for modified copies */
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  auVar63 = ___stack_chk_fail(piVar10);
  puVar25 = auVar63._8_8_;
  lVar9 = auVar63._0_8_;
  puStack_210 = unaff_x28;
  puStack_208 = unaff_x27;
  uStack_200 = unaff_x26;
  uStack_1f8 = uVar18;
  uStack_1f0 = uVar19;
  piStack_1e8 = unaff_x23;
  puStack_1e0 = puVar38;
  puStack_1d8 = param_2;
  piStack_1d0 = unaff_x20;
  pdStack_1c8 = unaff_x19;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  puStack_1c0 = auStack_68 + 0x58;
  pcStack_1b8 = FUN_002d5208;
  puStack_330 = param_4;
  lStack_220 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar26 = *(ulong **)(lVar9 + 0x70);
  puVar24 = *(ulong **)(lVar9 + 0x38);
  iVar21 = *(int *)(lVar9 + 0x34);
  puStack_390 = *(ulong **)(lVar9 + 8);
  puVar38 = *(ulong **)(lVar9 + 0x10);
  uVar31 = 1 << (ulong)(*(uint *)(lVar9 + 0x100) & 0x1f);
  uVar32 = *(uint *)(lVar9 + 0x18);
  uVar19 = (long)puVar25 - (long)puStack_390;
  uVar17 = (uint)uVar19;
  uVar23 = uVar17 - uVar31;
  if (uVar17 - *(uint *)(lVar9 + 0x1c) <= uVar31 || *(int *)(lVar9 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar9 + 0x1c);
  }
  uVar31 = *(uint *)(lVar9 + 0x10c);
  if (5 < uVar31) {
    uVar31 = 6;
  }
  uVar18 = *(ulong *)(lVar9 + 0x60);
  puStack_328 = puStack_390;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  if (*(int *)(lVar9 + 300) == 0) {
    lVar27 = lVar9 + 0x40;
    uVar15 = *(uint *)(lVar9 + 0x2c);
    uVar34 = (ulong)uVar15;
    param_4 = puVar26;
    unaff_x27 = puVar24;
    if (0x180 < uVar17 - uVar15) {
      if (uVar15 < 0xffffffa0) {
        uVar30 = uVar34 + 0x60;
        do {
          uVar36 = (*(long *)((long)puStack_390 + uVar34 + 8) * -0x30e4432345000000 ^
                   *(ulong *)(lVar9 + 0x60)) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar16 = uVar36 >> 2 & 0x3fffffc0;
          piVar10 = (int *)((long)puVar26 + uVar16 * 4);
          Hint_Prefetch(piVar10,0,0,0);
          Hint_Prefetch(piVar10 + 0x10,0,0,0);
          lVar41 = (long)puVar24 + uVar16;
          Hint_Prefetch(lVar41,0,0,0);
          Hint_Prefetch(lVar41 + 0x20,0,0,0);
          uVar40 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
          *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar36;
          uVar36 = (ulong)(uVar40 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)((long)puVar24 + uVar36);
          unaff_x23 = (int *)(ulong)(*pbVar1 - 1 & 0x3f);
          uVar15 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar15 = 0;
          }
          unaff_x20 = (int *)((ulong)uVar15 + (long)unaff_x23);
// WM - thanks for reading - discord.gg/sdkhDjTex
          *pbVar1 = (byte)unaff_x20;
          pbVar1[(long)unaff_x20] = (byte)uVar40;
          *(int *)((long)puVar26 + (long)unaff_x20 * 4 + uVar36 * 4) = (int)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar30 != uVar34);
        param_4 = *(ulong **)(lVar9 + 0x70);
        unaff_x27 = *(ulong **)(lVar9 + 0x38);
      }
      uVar15 = uVar17 - 0x20;
      uVar34 = (ulong)uVar15;
      iVar14 = (int)((long)puVar25 + 1U) - (int)((long)puStack_390 + uVar34);
      unaff_x19 = &MACH_HEADER.cpusubtype;
      iVar39 = 8;
      if (iVar14 + 1U < 8) {
        iVar39 = iVar14 + 1;
      }
      iVar14 = 0;
      if ((long)puStack_390 + uVar34 <= (long)puVar25 + 1U) {
        iVar14 = iVar39;
      }
      if (uVar15 < iVar14 + uVar15) {
        iVar39 = *(int *)(lVar9 + 0x34);
        uVar36 = *(ulong *)(lVar9 + 0x60);
        uVar30 = uVar34;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puStack_390 + uVar30) * -0x30e4432345000000 ^
                                uVar36) >> ((ulong)(0x38 - iVar39) & 0x3f));
          uVar16 = (ulong)unaff_x19 >> 2 & 0x3fffffc0;
          unaff_x23 = (int *)((long)param_4 + uVar16 * 4);
          Hint_Prefetch(unaff_x23,0,0,0);
          Hint_Prefetch(unaff_x23 + 0x10,0,0,0);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          lVar41 = (long)unaff_x27 + uVar16;
          Hint_Prefetch(lVar41,0,0,0);
          Hint_Prefetch(lVar41 + 0x20,0,0,0);
          unaff_x20 = (int *)(uVar30 & 7);
          *(int *)(lVar27 + (long)unaff_x20 * 4) = (int)unaff_x19;
          uVar30 = uVar30 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    if (uVar15 < uVar17) {
      lVar41 = *(long *)(lVar9 + 8);
      iVar39 = *(int *)(lVar9 + 0x34);
      do {
        uVar30 = (*(long *)(lVar41 + 8 + uVar34) * -0x30e4432345000000 ^ *(ulong *)(lVar9 + 0x60))
                 >> ((ulong)(0x38 - iVar39) & 0x3f);
        uVar36 = uVar30 >> 2 & 0x3fffffc0;
        piVar10 = (int *)((long)param_4 + uVar36 * 4);
        Hint_Prefetch(piVar10,0,0,0);
/* donate: donate/README.md */
        Hint_Prefetch(piVar10 + 0x10,0,0,0);
        lVar33 = (long)unaff_x27 + uVar36;
        Hint_Prefetch(lVar33,0,0,0);
        Hint_Prefetch(lVar33 + 0x20,0,0,0);
        uVar40 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
        unaff_x23 = (int *)(ulong)uVar40;
        *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar30;
        uVar30 = (ulong)(uVar40 >> 2) & 0x3fffffc0;
        unaff_x20 = (int *)((long)param_4 + uVar30 * 4);
        unaff_x19 = (dword *)((long)unaff_x27 + uVar30);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0x3f);
        uVar15 = 0x3f;
        if (((byte)*unaff_x19 & 0x3f) != 1) {
          uVar15 = 0;
        }
        lVar33 = uVar15 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar33;
        *(byte *)((long)unaff_x19 + lVar33) = (byte)uVar40;
        unaff_x20[lVar33] = (int)uVar34;
        uVar34 = uVar34 + 1;
      } while (uVar34 < (uVar19 & 0xffffffff));
    }
    *(uint *)(lVar9 + 0x2c) = uVar17;
    puVar12 = *(ulong **)((long)puStack_390 + (uVar19 & 0xffffffff) + 8);
    uVar34 = ((long)puVar12 * -0x30e4432345000000 ^ uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f);
    uVar18 = uVar34 >> 2 & 0x3fffffc0;
    piVar10 = (int *)((long)puVar26 + uVar18 * 4);
    Hint_Prefetch(piVar10,0,0,0);
    Hint_Prefetch(piVar10 + 0x10,0,0,0);
    lVar41 = (long)puVar24 + uVar18;
    Hint_Prefetch(lVar41,0,0,0);
    Hint_Prefetch(lVar41 + 0x20,0,0,0);
    uVar15 = *(uint *)(lVar27 + (uVar19 & 7) * 4);
// more drops soon - github.com/pengussy
    *(int *)(lVar27 + (uVar19 & 7) * 4) = (int)uVar34;
  }
  else {
    uVar15 = (uint)((*puVar25 * -0x30e4432345000000 ^ uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(lVar9 + 0x2c) = uVar17;
    puVar12 = puVar25;
  }
  *(uint *)(lVar9 + 0x68) = *(int *)(lVar9 + 0x68) + uVar15;
  uVar18 = (ulong)(uVar15 >> 2) & 0x3fffffc0;
  pbVar1 = (byte *)((long)puVar24 + uVar18);
  bVar29 = (byte)uVar15;
  auVar60[0] = -(pbVar1[1] == bVar29);
  auVar60[1] = -(pbVar1[5] == bVar29);
  auVar60[2] = -(pbVar1[9] == bVar29);
  auVar60[3] = -(pbVar1[0xd] == bVar29);
  auVar60[4] = -(pbVar1[0x11] == bVar29);
  auVar60[5] = -(pbVar1[0x15] == bVar29);
  auVar60[6] = -(pbVar1[0x19] == bVar29);
  auVar60[7] = -(pbVar1[0x1d] == bVar29);
  auVar60[8] = -(pbVar1[0x21] == bVar29);
  auVar60[9] = -(pbVar1[0x25] == bVar29);
  auVar60[10] = -(pbVar1[0x29] == bVar29);
  auVar60[0xb] = -(pbVar1[0x2d] == bVar29);
  auVar60[0xc] = -(pbVar1[0x31] == bVar29);
  auVar60[0xd] = -(pbVar1[0x35] == bVar29);
  auVar60[0xe] = -(pbVar1[0x39] == bVar29);
  auVar60[0xf] = -(pbVar1[0x3d] == bVar29);
  auVar51[0] = -(pbVar1[3] == bVar29);
  auVar51[1] = -(pbVar1[7] == bVar29);
  auVar51[2] = -(pbVar1[0xb] == bVar29);
  auVar51[3] = -(pbVar1[0xf] == bVar29);
  auVar51[4] = -(pbVar1[0x13] == bVar29);
  auVar51[5] = -(pbVar1[0x17] == bVar29);
/* wm:donate: donate/README.md */
  auVar51[6] = -(pbVar1[0x1b] == bVar29);
  auVar51[7] = -(pbVar1[0x1f] == bVar29);
  auVar51[8] = -(pbVar1[0x23] == bVar29);
  auVar51[9] = -(pbVar1[0x27] == bVar29);
  auVar51[10] = -(pbVar1[0x2b] == bVar29);
  auVar51[0xb] = -(pbVar1[0x2f] == bVar29);
  auVar51[0xc] = -(pbVar1[0x33] == bVar29);
  auVar51[0xd] = -(pbVar1[0x37] == bVar29);
  auVar51[0xe] = -(pbVar1[0x3b] == bVar29);
  auVar51[0xf] = -(pbVar1[0x3f] == bVar29);
  auVar61[1] = -(pbVar1[4] == bVar29);
  auVar61[0] = -(*pbVar1 == bVar29);
  auVar61[2] = -(pbVar1[8] == bVar29);
  auVar61[3] = -(pbVar1[0xc] == bVar29);
  auVar61[4] = -(pbVar1[0x10] == bVar29);
  auVar61[5] = -(pbVar1[0x14] == bVar29);
  auVar61[6] = -(pbVar1[0x18] == bVar29);
  auVar61[7] = -(pbVar1[0x1c] == bVar29);
  auVar61[8] = -(pbVar1[0x20] == bVar29);
  auVar61[9] = -(pbVar1[0x24] == bVar29);
  auVar61[10] = -(pbVar1[0x28] == bVar29);
  auVar61[0xb] = -(pbVar1[0x2c] == bVar29);
  auVar61[0xc] = -(pbVar1[0x30] == bVar29);
  auVar61[0xd] = -(pbVar1[0x34] == bVar29);
  auVar61[0xe] = -(pbVar1[0x38] == bVar29);
  auVar61[0xf] = -(pbVar1[0x3c] == bVar29);
  auVar61 = NEON_sri(auVar60,auVar61,1,1);
  auVar7[1] = -(pbVar1[6] == bVar29);
  auVar7[0] = -(pbVar1[2] == bVar29);
  auVar7[2] = -(pbVar1[10] == bVar29);
  auVar7[3] = -(pbVar1[0xe] == bVar29);
  auVar7[4] = -(pbVar1[0x12] == bVar29);
// WM - unlicensed copy if this notice is missing
  auVar7[5] = -(pbVar1[0x16] == bVar29);
  auVar7[6] = -(pbVar1[0x1a] == bVar29);
  auVar7[7] = -(pbVar1[0x1e] == bVar29);
  auVar7[8] = -(pbVar1[0x22] == bVar29);
  auVar7[9] = -(pbVar1[0x26] == bVar29);
  auVar7[10] = -(pbVar1[0x2a] == bVar29);
  auVar7[0xb] = -(pbVar1[0x2e] == bVar29);
  auVar7[0xc] = -(pbVar1[0x32] == bVar29);
  auVar7[0xd] = -(pbVar1[0x36] == bVar29);
  auVar7[0xe] = -(pbVar1[0x3a] == bVar29);
  auVar7[0xf] = -(pbVar1[0x3e] == bVar29);
  auVar63 = NEON_sri(auVar51,auVar7,1,1);
  auVar63 = NEON_sri(auVar63,auVar61,2,1);
  auVar63 = NEON_sri(auVar63,auVar63,4,1);
  uVar34 = CONCAT17((char)(auVar63._14_2_ >> 4),
                    CONCAT16((char)(auVar63._12_2_ >> 4),
                             CONCAT15((char)(auVar63._10_2_ >> 4),
                                      CONCAT14((char)(auVar63._8_2_ >> 4),
                                               CONCAT13((char)(auVar63._6_2_ >> 4),
                                                        CONCAT12((char)(auVar63._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar63._2_2_ >> 4)
                                                                          ,(char)(auVar63._0_2_ >> 4
                                                                                 ))))))));
  uVar19 = 0;
  uVar15 = (uint)*pbVar1;
  if (uVar34 != 0) {
    iVar21 = 1 << (ulong)(uVar31 & 0x1f);
    uVar30 = (ulong)*pbVar1 & 0x3f;
    uVar34 = uVar34 >> uVar30 | uVar34 << 0x40 - uVar30;
    do {
// WM - more drops soon - github.com/pengussy
      uVar30 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) + uVar15 & 0x3f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)((long)puVar26 + (ulong)uVar31 * 4 + uVar18 * 4);
        if (uVar31 < uVar23) break;
        puVar12 = puVar38;
        if (uVar32 <= uVar31) {
          puVar12 = puStack_390;
        }
        Hint_Prefetch((long)puVar12 + (ulong)uVar31,0,0,0);
        auStack_320[uVar19] = uVar31;
        uVar19 = uVar19 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar34 = uVar34 - 1 & uVar34;
// if you paid for this, you were scammed
      if ((uVar34 == 0) || (iVar21 == 0)) break;
    } while( true );
  }
  uVar23 = 0x3f;
  if ((uVar15 & 0x3f) != 1) {
    uVar23 = 0;
  }
  lVar27 = (ulong)uVar23 + (ulong)(uVar15 - 1 & 0x3f);
  *pbVar1 = (byte)lVar27;
  pbVar1[lVar27] = bVar29;
  iVar21 = *(int *)(lVar9 + 0x2c);
  *(int *)(lVar9 + 0x2c) = iVar21 + 1;
  *(int *)((long)puVar26 + lVar27 * 4 + uVar18 * 4) = iVar21;
  if (uVar19 == 0) {
    piVar10 = (int *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)puVar25 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_348 = (ulong *)((long)param_3 + -1);
    puStack_340 = (ulong *)((long)param_3 + -3);
    iStack_334 = uVar17 + 3;
    puStack_358 = puVar25 + 1;
// origin: github.com/pengussy
    puStack_350 = puStack_390 + 1;
    piVar35 = (int *)((long)&MACH_HEADER.magic + 3);
    do {
      uVar23 = auStack_320[unaff_x26];
      unaff_x23 = (int *)(ulong)uVar23;
      if (uVar23 < uVar32) {
        if (*(int *)((long)puVar38 + (long)unaff_x23) == (int)*puVar25) {
          param_4 = (ulong *)((long)puVar38 + (ulong)uVar32);
          auVar63 = func_0x002ad924((int *)((long)puVar25 + 4),
                                    (int *)((long)puVar38 + (long)unaff_x23) + 1);
          puVar12 = auVar63._8_8_;
          piVar10 = (int *)(auVar63._0_8_ + 4);
          puStack_390 = puStack_328;
          unaff_x27 = puVar38;
          goto joined_r0x002d5684;
        }
      }
      else {
        puVar24 = (ulong *)((long)puStack_390 + (long)unaff_x23);
        if (*(int *)((long)puVar24 + (long)piVar35 + -3) ==
/* watermarked copy - do not remove */
            *(int *)((long)unaff_x19 + (long)piVar35)) {
          if (puVar25 < unaff_x28) {
            if (*puVar24 == *puVar25) {
              lVar9 = 0;
              puVar24 = (ulong *)((long)puStack_350 + (long)unaff_x23);
              puVar26 = puStack_358;
              do {
                if (unaff_x28 <= puVar26) goto LAB_002d55dc;
                uVar34 = *puVar24;
                uVar18 = *puVar26;
                lVar9 = lVar9 + 8;
                puVar24 = puVar24 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar34 == uVar18);
              uVar18 = uVar18 ^ uVar34;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)(lVar9 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3));
            }
            else {
              uVar18 = *puVar25 ^ *puVar24;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            }
          }
          else {
            puVar26 = puVar25;
LAB_002d55dc:
/* WM - stripping the watermark breaks the license */
            if (puVar26 < puStack_340) {
              if ((int)*puVar24 == (int)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 4);
                puVar24 = (ulong *)((long)puVar24 + 4);
              }
            }
            if (puVar26 < puStack_348) {
              if ((short)*puVar24 == (short)*puVar26) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
            }
            if (puVar26 < param_3) {
              if ((char)*puVar24 == (char)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 1);
              }
            }
            piVar10 = (int *)((long)puVar26 - (long)puVar25);
          }
joined_r0x002d5684:
          if (piVar35 < piVar10) {
/* thanks for reading - discord.gg/sdkhDjTex */
            *puStack_330 = (ulong)(iStack_334 - uVar23);
            piVar35 = piVar10;
            unaff_x20 = piVar10;
            if ((ulong *)((long)puVar25 + (long)piVar10) == param_3) break;
          }
        }
      }
      piVar10 = piVar35;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = piVar10;
      piVar35 = piVar10;
    } while (unaff_x26 != uVar19);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_220) {
    return;
  }
  auVar63 = ___stack_chk_fail(piVar10,puVar12);
  puVar24 = auVar63._8_8_;
  lVar9 = auVar63._0_8_;
  puStack_3c0 = unaff_x28;
  puStack_3b8 = unaff_x27;
  uStack_3b0 = unaff_x26;
  uStack_3a8 = uVar19;
  uStack_3a0 = (ulong)uVar32;
  piStack_398 = unaff_x23;
  puStack_388 = puVar25;
  piStack_380 = unaff_x20;
  pdStack_378 = unaff_x19;
  ppuStack_370 = &puStack_1c0;
  puStack_368 = &SUB_002d5840;
  puStack_4e0 = param_4;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar26 = *(ulong **)(lVar9 + 0x70);
  puVar25 = *(ulong **)(lVar9 + 0x38);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  iVar21 = *(int *)(lVar9 + 0x34);
  puStack_540 = *(ulong **)(lVar9 + 8);
  puVar38 = *(ulong **)(lVar9 + 0x10);
  uVar31 = 1 << (ulong)(*(uint *)(lVar9 + 0x100) & 0x1f);
  uVar32 = *(uint *)(lVar9 + 0x18);
  uVar19 = (long)puVar24 - (long)puStack_540;
  uVar17 = (uint)uVar19;
  uVar23 = uVar17 - uVar31;
  if (uVar17 - *(uint *)(lVar9 + 0x1c) <= uVar31 || *(int *)(lVar9 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar9 + 0x1c);
  }
  uVar31 = *(uint *)(lVar9 + 0x10c);
  if (3 < uVar31) {
    uVar31 = 4;
  }
  uVar18 = *(ulong *)(lVar9 + 0x60);
  puStack_4d8 = puStack_540;
  if (*(int *)(lVar9 + 300) == 0) {
    lVar27 = lVar9 + 0x40;
    uVar15 = *(uint *)(lVar9 + 0x2c);
    uVar34 = (ulong)uVar15;
    param_4 = puVar26;
/* wm:watermarked copy - do not remove */
    unaff_x27 = puVar25;
    if (0x180 < uVar17 - uVar15) {
      if (uVar15 < 0xffffffa0) {
        uVar30 = uVar34 + 0x60;
        do {
          uVar36 = (*(long *)((long)puStack_540 + uVar34 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar9 + 0x60)) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar16 = uVar36 >> 4 & 0xffffff0;
          Hint_Prefetch((int *)((long)puVar26 + uVar16 * 4),0,0,0);
          Hint_Prefetch((long)puVar25 + uVar16,0,0,0);
          uVar40 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
          *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar36;
          uVar36 = (ulong)(uVar40 >> 4) & 0xffffff0;
          pbVar1 = (byte *)((long)puVar25 + uVar36);
          unaff_x23 = (int *)(ulong)(*pbVar1 - 1 & 0xf);
          uVar15 = 0xf;
          if ((*pbVar1 & 0xf) != 1) {
            uVar15 = 0;
          }
          unaff_x20 = (int *)((ulong)uVar15 + (long)unaff_x23);
          *pbVar1 = (byte)unaff_x20;
          pbVar1[(long)unaff_x20] = (byte)uVar40;
          *(int *)((long)puVar26 + (long)unaff_x20 * 4 + uVar36 * 4) = (int)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar30 != uVar34);
        param_4 = *(ulong **)(lVar9 + 0x70);
        unaff_x27 = *(ulong **)(lVar9 + 0x38);
      }
      uVar15 = uVar17 - 0x20;
      uVar34 = (ulong)uVar15;
      iVar14 = (int)((long)puVar24 + 1U) - (int)((long)puStack_540 + uVar34);
      unaff_x19 = &MACH_HEADER.cpusubtype;
      iVar39 = 8;
      if (iVar14 + 1U < 8) {
        iVar39 = iVar14 + 1;
      }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      iVar14 = 0;
      if ((long)puStack_540 + uVar34 <= (long)puVar24 + 1U) {
        iVar14 = iVar39;
      }
      if (uVar15 < iVar14 + uVar15) {
        iVar39 = *(int *)(lVar9 + 0x34);
        uVar36 = *(ulong *)(lVar9 + 0x60);
        uVar30 = uVar34;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puStack_540 + uVar30) * -0x30e4432340650000 ^
                                uVar36) >> ((ulong)(0x38 - iVar39) & 0x3f));
          uVar16 = (ulong)unaff_x19 >> 4 & 0xffffff0;
          unaff_x23 = (int *)(uVar16 * 4);
          Hint_Prefetch((int *)((long)param_4 + (long)unaff_x23),0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar16,0,0,0);
          unaff_x20 = (int *)(uVar30 & 7);
          *(int *)(lVar27 + (long)unaff_x20 * 4) = (int)unaff_x19;
          uVar30 = uVar30 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    if (uVar15 < uVar17) {
      lVar41 = *(long *)(lVar9 + 8);
      iVar39 = *(int *)(lVar9 + 0x34);
      do {
        uVar30 = (*(long *)(lVar41 + 8 + uVar34) * -0x30e4432340650000 ^ *(ulong *)(lVar9 + 0x60))
                 >> ((ulong)(0x38 - iVar39) & 0x3f);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        uVar36 = uVar30 >> 4 & 0xffffff0;
        Hint_Prefetch((int *)((long)param_4 + uVar36 * 4),0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar36,0,0,0);
        uVar40 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
        unaff_x23 = (int *)(ulong)uVar40;
        *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar30;
        uVar30 = (ulong)(uVar40 >> 4) & 0xffffff0;
        unaff_x20 = (int *)((long)param_4 + uVar30 * 4);
        unaff_x19 = (dword *)((long)unaff_x27 + uVar30);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0xf);
        uVar15 = 0xf;
        if (((byte)*unaff_x19 & 0xf) != 1) {
          uVar15 = 0;
        }
        lVar33 = uVar15 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar33;
        *(byte *)((long)unaff_x19 + lVar33) = (byte)uVar40;
        unaff_x20[lVar33] = (int)uVar34;
        uVar34 = uVar34 + 1;
      } while (uVar34 < (uVar19 & 0xffffffff));
    }
    *(uint *)(lVar9 + 0x2c) = uVar17;
    uVar34 = (*(long *)((long)puStack_540 + (uVar19 & 0xffffffff) + 8) * -0x30e4432340650000 ^
             uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f);
    uVar18 = uVar34 >> 4 & 0xffffff0;
    Hint_Prefetch((int *)((long)puVar26 + uVar18 * 4),0,0,0);
    Hint_Prefetch((long)puVar25 + uVar18,0,0,0);
    uVar15 = *(uint *)(lVar27 + (uVar19 & 7) * 4);
    *(int *)(lVar27 + (uVar19 & 7) * 4) = (int)uVar34;
  }
  else {
    uVar15 = (uint)((*puVar24 * -0x30e4432340650000 ^ uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(lVar9 + 0x2c) = uVar17;
  }
  *(uint *)(lVar9 + 0x68) = *(int *)(lVar9 + 0x68) + uVar15;
/* keep the notice, keep the source honest - github.com/pengussy */
  uVar30 = (ulong)(uVar15 >> 4) & 0xffffff0;
  pauVar2 = (undefined1 (*) [16])((long)puVar25 + uVar30);
  bVar29 = (*pauVar2)[0];
  auVar63 = *pauVar2;
  bVar28 = (byte)uVar15;
  bVar42 = auVar63[0];
  uVar43 = CONCAT11(-(auVar63[9] == bVar28),-(auVar63[8] == bVar28));
  uVar44 = CONCAT13(-(auVar63[0xb] == bVar28),CONCAT12(-(auVar63[10] == bVar28),uVar43));
  uVar45 = CONCAT15(-(auVar63[0xd] == bVar28),CONCAT14(-(auVar63[0xc] == bVar28),uVar44));
  uVar18 = CONCAT17((char)(CONCAT17(-(auVar63[0xf] == bVar28),
                                    CONCAT16(-(auVar63[0xe] == bVar28),uVar45)) >> 0x34),
                    CONCAT16((char)((uint6)uVar45 >> 0x24),
                             CONCAT15((char)((uint)uVar44 >> 0x14),
                                      CONCAT14((char)(uVar43 >> 4),
                                               CONCAT13((char)(CONCAT11(-(auVar63[7] == bVar28),
                                                                        -(auVar63[6] == bVar28)) >>
                                                              4),CONCAT12((char)(CONCAT11(-(auVar63[
                                                  5] == bVar28),-(auVar63[4] == bVar28)) >> 4),
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                  CONCAT11((char)(CONCAT11(-(auVar63[3] == bVar28),
                                                                           -(auVar63[2] == bVar28))
                                                                 >> 4),
                                                           (char)(CONCAT11(-(auVar63[1] == bVar28),
                                                                           -(bVar42 == bVar28)) >> 4
                                                                 ))))))));
  uVar34 = (ulong)bVar29 & 0xf;
  uVar19 = 0;
  uVar18 = (uVar18 >> uVar34 * 4 | uVar18 << uVar34 * -4 + 0x40) & 0x8888888888888888;
  if (uVar18 != 0) {
    iVar21 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar34 = (uVar18 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) + (bVar29 & 0x3f) * 4 >> 2 & 0xf;
      if (uVar31 != 0) {
        uVar31 = *(uint *)((long)puVar26 + (ulong)uVar31 * 4 + uVar30 * 4);
        if (uVar31 < uVar23) break;
        param_4 = puVar38;
        if (uVar32 <= uVar31) {
          param_4 = puStack_540;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar31,0,0,0);
        auStack_4d0[uVar19] = uVar31;
        uVar19 = uVar19 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar18 = uVar18 - 1 & uVar18;
      if ((uVar18 == 0) || (iVar21 == 0)) break;
    } while( true );
  }
  uVar23 = 0xf;
// proprietary - see LICENSE - do not sell
  if ((bVar42 & 0xf) != 1) {
    uVar23 = 0;
  }
  lVar27 = (ulong)uVar23 + (ulong)(bVar42 - 1 & 0xf);
  (*pauVar2)[0] = (char)lVar27;
  (*pauVar2)[lVar27] = bVar28;
  iVar21 = *(int *)(lVar9 + 0x2c);
  *(int *)(lVar9 + 0x2c) = iVar21 + 1;
  *(int *)((long)puVar26 + lVar27 * 4 + uVar30 * 4) = iVar21;
  if (uVar19 == 0) {
    piVar10 = (int *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)puVar24 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_4f8 = (ulong *)((long)param_3 + -1);
    puStack_4f0 = (ulong *)((long)param_3 + -3);
    iStack_4e4 = uVar17 + 3;
    puStack_508 = puVar24 + 1;
    puStack_500 = puStack_540 + 1;
/*  no support for modified copies  */
    piVar35 = (int *)((long)&MACH_HEADER.magic + 3);
    do {
      uVar23 = auStack_4d0[unaff_x26];
      unaff_x23 = (int *)(ulong)uVar23;
      if (uVar23 < uVar32) {
        if (*(int *)((long)puVar38 + (long)unaff_x23) == (int)*puVar24) {
          param_4 = (ulong *)((long)puVar38 + (ulong)uVar32);
          lVar9 = func_0x002ad924((int *)((long)puVar24 + 4),
                                  (int *)((long)puVar38 + (long)unaff_x23) + 1);
          piVar10 = (int *)(lVar9 + 4);
          puStack_540 = puStack_4d8;
          unaff_x27 = puVar38;
          goto joined_r0x002d5c98;
        }
      }
      else {
        puVar25 = (ulong *)((long)puStack_540 + (long)unaff_x23);
        if (*(int *)((long)puVar25 + (long)piVar35 + -3) ==
            *(int *)((long)unaff_x19 + (long)piVar35)) {
/* unlicensed copy if this notice is missing */
          if (puVar24 < unaff_x28) {
            if (*puVar25 == *puVar24) {
              lVar9 = 0;
              puVar25 = (ulong *)((long)puStack_500 + (long)unaff_x23);
              puVar26 = puStack_508;
              do {
                if (unaff_x28 <= puVar26) goto code_r0x002d5bf0;
                uVar34 = *puVar25;
                uVar18 = *puVar26;
                lVar9 = lVar9 + 8;
                puVar25 = puVar25 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar34 == uVar18);
              uVar18 = uVar18 ^ uVar34;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)(lVar9 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3));
            }
            else {
              uVar18 = *puVar24 ^ *puVar25;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            }
          }
          else {
            puVar26 = puVar24;
code_r0x002d5bf0:
            if (puVar26 < puStack_4f0) {
              if ((int)*puVar25 == (int)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 4);
                puVar25 = (ulong *)((long)puVar25 + 4);
// reversing this took months of machine time
              }
            }
            if (puVar26 < puStack_4f8) {
              if ((short)*puVar25 == (short)*puVar26) {
                puVar25 = (ulong *)((long)puVar25 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
            }
            if (puVar26 < param_3) {
              if ((char)*puVar25 == (char)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 1);
              }
            }
            piVar10 = (int *)((long)puVar26 - (long)puVar24);
          }
joined_r0x002d5c98:
/* do not claim this as your own */
          if (piVar35 < piVar10) {
            *puStack_4e0 = (ulong)(iStack_4e4 - uVar23);
            piVar35 = piVar10;
            unaff_x20 = piVar10;
            if ((ulong *)((long)puVar24 + (long)piVar10) == param_3) break;
          }
        }
      }
      piVar10 = piVar35;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = piVar10;
      piVar35 = piVar10;
    } while (unaff_x26 != uVar19);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_3d0) {
    return;
  }
  auVar63 = ___stack_chk_fail(piVar10);
  puVar25 = auVar63._8_8_;
  lVar9 = auVar63._0_8_;
  puStack_570 = unaff_x28;
  puStack_568 = unaff_x27;
  uStack_560 = unaff_x26;
/* WM - more drops soon - github.com/pengussy */
  uStack_558 = uVar19;
  uStack_550 = (ulong)uVar32;
  piStack_548 = unaff_x23;
  puStack_538 = puVar24;
  piStack_530 = unaff_x20;
  pdStack_528 = unaff_x19;
  pppuStack_520 = &ppuStack_370;
  puStack_518 = &SUB_002d5e3c;
  puStack_690 = param_4;
  lStack_580 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar26 = *(ulong **)(lVar9 + 0x70);
  puVar24 = *(ulong **)(lVar9 + 0x38);
  iVar21 = *(int *)(lVar9 + 0x34);
  puStack_6f0 = *(ulong **)(lVar9 + 8);
  puVar38 = *(ulong **)(lVar9 + 0x10);
  uVar31 = 1 << (ulong)(*(uint *)(lVar9 + 0x100) & 0x1f);
  uVar32 = *(uint *)(lVar9 + 0x18);
/* wm:if you paid for this, you were scammed */
  uVar19 = (long)puVar25 - (long)puStack_6f0;
  uVar17 = (uint)uVar19;
  uVar23 = uVar17 - uVar31;
  if (uVar17 - *(uint *)(lVar9 + 0x1c) <= uVar31 || *(int *)(lVar9 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar9 + 0x1c);
  }
  uVar31 = *(uint *)(lVar9 + 0x10c);
  if (4 < uVar31) {
    uVar31 = 5;
  }
  uVar18 = *(ulong *)(lVar9 + 0x60);
  puStack_688 = puStack_6f0;
  if (*(int *)(lVar9 + 300) == 0) {
    lVar27 = lVar9 + 0x40;
    uVar15 = *(uint *)(lVar9 + 0x2c);
    uVar34 = (ulong)uVar15;
    param_4 = puVar26;
    unaff_x27 = puVar24;
    if (0x180 < uVar17 - uVar15) {
      if (uVar15 < 0xffffffa0) {
        uVar30 = uVar34 + 0x60;
        do {
          uVar36 = (*(long *)((long)puStack_6f0 + uVar34 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar9 + 0x60)) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar16 = uVar36 >> 3 & 0x1fffffe0;
          piVar10 = (int *)((long)puVar26 + uVar16 * 4);
          Hint_Prefetch(piVar10,0,0,0);
          Hint_Prefetch(piVar10 + 0x10,0,0,0);
          Hint_Prefetch((long)puVar24 + uVar16,0,0,0);
          uVar40 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
          *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar36;
          uVar36 = (ulong)(uVar40 >> 3) & 0x1fffffe0;
          pbVar1 = (byte *)((long)puVar24 + uVar36);
          unaff_x23 = (int *)(ulong)(*pbVar1 - 1 & 0x1f);
          uVar15 = 0x1f;
// WM - proprietary - see LICENSE - do not sell
          if ((*pbVar1 & 0x1f) != 1) {
            uVar15 = 0;
          }
          unaff_x20 = (int *)((ulong)uVar15 + (long)unaff_x23);
          *pbVar1 = (byte)unaff_x20;
          pbVar1[(long)unaff_x20] = (byte)uVar40;
          *(int *)((long)puVar26 + (long)unaff_x20 * 4 + uVar36 * 4) = (int)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar30 != uVar34);
        param_4 = *(ulong **)(lVar9 + 0x70);
        unaff_x27 = *(ulong **)(lVar9 + 0x38);
      }
      uVar15 = uVar17 - 0x20;
      uVar34 = (ulong)uVar15;
      iVar14 = (int)((long)puVar25 + 1U) - (int)((long)puStack_6f0 + uVar34);
      unaff_x19 = &MACH_HEADER.cpusubtype;
      iVar39 = 8;
      if (iVar14 + 1U < 8) {
        iVar39 = iVar14 + 1;
      }
      iVar14 = 0;
      if ((long)puStack_6f0 + uVar34 <= (long)puVar25 + 1U) {
        iVar14 = iVar39;
      }
      if (uVar15 < iVar14 + uVar15) {
        iVar39 = *(int *)(lVar9 + 0x34);
        uVar36 = *(ulong *)(lVar9 + 0x60);
        uVar30 = uVar34;
        do {
          unaff_x19 = (dword *)((*(long *)((long)puStack_6f0 + uVar30) * -0x30e4432340650000 ^
// found on a paste site? it was re-uploaded illegally
                                uVar36) >> ((ulong)(0x38 - iVar39) & 0x3f));
          uVar16 = (ulong)unaff_x19 >> 3 & 0x1fffffe0;
          unaff_x23 = (int *)((long)param_4 + uVar16 * 4);
          Hint_Prefetch(unaff_x23,0,0,0);
          Hint_Prefetch(unaff_x23 + 0x10,0,0,0);
          Hint_Prefetch((long)unaff_x27 + uVar16,0,0,0);
          unaff_x20 = (int *)(uVar30 & 7);
          *(int *)(lVar27 + (long)unaff_x20 * 4) = (int)unaff_x19;
          uVar30 = uVar30 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    if (uVar15 < uVar17) {
      lVar41 = *(long *)(lVar9 + 8);
      iVar39 = *(int *)(lVar9 + 0x34);
      do {
        uVar30 = (*(long *)(lVar41 + 8 + uVar34) * -0x30e4432340650000 ^ *(ulong *)(lVar9 + 0x60))
                 >> ((ulong)(0x38 - iVar39) & 0x3f);
        uVar36 = uVar30 >> 3 & 0x1fffffe0;
        piVar10 = (int *)((long)param_4 + uVar36 * 4);
        Hint_Prefetch(piVar10,0,0,0);
        Hint_Prefetch(piVar10 + 0x10,0,0,0);
        Hint_Prefetch((long)unaff_x27 + uVar36,0,0,0);
        uVar40 = *(uint *)(lVar27 + (uVar34 & 7) * 4);
        unaff_x23 = (int *)(ulong)uVar40;
        *(int *)(lVar27 + (uVar34 & 7) * 4) = (int)uVar30;
        uVar30 = (ulong)(uVar40 >> 3) & 0x1fffffe0;
        unaff_x20 = (int *)((long)param_4 + uVar30 * 4);
        unaff_x19 = (dword *)((long)unaff_x27 + uVar30);
        unaff_x26 = (ulong)((byte)*unaff_x19 - 1 & 0x1f);
        uVar15 = 0x1f;
        if (((byte)*unaff_x19 & 0x1f) != 1) {
          uVar15 = 0;
        }
        lVar33 = uVar15 + unaff_x26;
        *(byte *)unaff_x19 = (byte)lVar33;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        *(byte *)((long)unaff_x19 + lVar33) = (byte)uVar40;
        unaff_x20[lVar33] = (int)uVar34;
        uVar34 = uVar34 + 1;
      } while (uVar34 < (uVar19 & 0xffffffff));
    }
    *(uint *)(lVar9 + 0x2c) = uVar17;
    uVar34 = (*(long *)((long)puStack_6f0 + (uVar19 & 0xffffffff) + 8) * -0x30e4432340650000 ^
             uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f);
    uVar18 = uVar34 >> 3 & 0x1fffffe0;
    piVar10 = (int *)((long)puVar26 + uVar18 * 4);
    Hint_Prefetch(piVar10,0,0,0);
    Hint_Prefetch(piVar10 + 0x10,0,0,0);
    Hint_Prefetch((long)puVar24 + uVar18,0,0,0);
    uVar15 = *(uint *)(lVar27 + (uVar19 & 7) * 4);
    *(int *)(lVar27 + (uVar19 & 7) * 4) = (int)uVar34;
  }
  else {
    uVar15 = (uint)((*puVar25 * -0x30e4432340650000 ^ uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(lVar9 + 0x2c) = uVar17;
/*  unlicensed copy if this notice is missing  */
  }
  *(uint *)(lVar9 + 0x68) = *(int *)(lVar9 + 0x68) + uVar15;
  uVar34 = (ulong)(uVar15 >> 3) & 0x1fffffe0;
  pbVar1 = (byte *)((long)puVar24 + uVar34);
  bVar29 = *pbVar1;
  bVar28 = (byte)uVar15;
  uVar54 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)pbVar1 >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)pbVar1));
  uVar55 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 4) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 4)),uVar54));
  uVar56 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 8) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 8)),uVar55));
  uVar57 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x10) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x10)));
  uVar58 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x14) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x14)),uVar57));
  uVar59 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x18) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x18)),uVar58));
  uVar43 = CONCAT11(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 2) >> 8)),
                    -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 2)));
  uVar44 = CONCAT13(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 6) >> 8)),
                    CONCAT12(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 6)),uVar43));
  uVar45 = CONCAT15(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 10) >> 8)),
                    CONCAT14(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 10)),uVar44));
  uVar46 = CONCAT17(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0xe) >> 8)),
                    CONCAT16(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0xe)),uVar45));
  auVar48._0_10_ =
       CONCAT19(-(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x12) >> 8)),
                CONCAT18(-(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x12)),uVar46));
  auVar48[10] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x16));
  auVar48[0xb] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x16) >> 8));
  auVar50[0xc] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x1a));
  auVar50._0_12_ = auVar48;
  auVar50[0xd] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1a) >> 8));
  auVar52[0xe] = -(bVar28 == (byte)*(undefined2 *)(pbVar1 + 0x1e));
  auVar52._0_14_ = auVar50;
/* WM - found on a paste site? it was re-uploaded illegally */
  auVar52[0xf] = -(bVar28 == (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1e) >> 8));
  uVar18 = NEON_sli(CONCAT17((char)(CONCAT17(-(bVar28 ==
                                              (byte)((ushort)*(undefined2 *)(pbVar1 + 0x1c) >> 8)),
                                             CONCAT16(-(bVar28 ==
                                                       (byte)*(undefined2 *)(pbVar1 + 0x1c)),uVar59)
                                            ) >> 0x36),
                             CONCAT16((char)((uint6)uVar59 >> 0x26),
                                      CONCAT15((char)((uint)uVar58 >> 0x16),
                                               CONCAT14((char)(uVar57 >> 6),
                                                        CONCAT13((char)(CONCAT17(-(bVar28 ==
                                                                                  (byte)((ushort)*(
                                                  undefined2 *)(pbVar1 + 0xc) >> 8)),
                                                  CONCAT16(-(bVar28 ==
                                                            (byte)*(undefined2 *)(pbVar1 + 0xc)),
                                                           uVar56)) >> 0x36),
                                                  CONCAT12((char)((uint6)uVar56 >> 0x26),
                                                           CONCAT11((char)((uint)uVar55 >> 0x16),
                                                                    (char)(uVar54 >> 6)))))))),
                    CONCAT17((char)(auVar52._14_2_ >> 6),
                             CONCAT16((char)(auVar50._12_2_ >> 6),
                                      CONCAT15((char)(auVar48._10_2_ >> 6),
                                               CONCAT14((char)((unkuint10)auVar48._0_10_ >> 0x46),
                                                        CONCAT13((char)((ulong)uVar46 >> 0x36),
                                                                 CONCAT12((char)((uint6)uVar45 >>
                                                                                0x26),
                                                                          CONCAT11((char)((uint)
                                                  uVar44 >> 0x16),(char)(uVar43 >> 6)))))))),4,1);
  uVar19 = 0;
  uVar18 = (uVar18 >> ((ulong)bVar29 & 0x1f) * 2 | uVar18 << ((ulong)bVar29 & 0x1f) * -2 + 0x40) &
           0x5555555555555555;
/* WM - donate: donate/README.md */
  if (uVar18 != 0) {
    iVar21 = 1 << (ulong)(uVar31 & 0x1f);
    do {
      uVar30 = (uVar18 << 1 & 0xcccccccccccccccc) >> 2 | (uVar18 << 1 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) + (bVar29 & 0x7f) * 2 >> 1 & 0x1f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)((long)puVar26 + (ulong)uVar31 * 4 + uVar34 * 4);
        if (uVar31 < uVar23) break;
        param_4 = puVar38;
        if (uVar32 <= uVar31) {
          param_4 = puStack_6f0;
        }
        Hint_Prefetch((long)param_4 + (ulong)uVar31,0,0,0);
        auStack_680[uVar19] = uVar31;
        uVar19 = uVar19 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar18 = uVar18 - 1 & uVar18;
      if ((uVar18 == 0) || (iVar21 == 0)) break;
    } while( true );
  }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  uVar23 = 0x1f;
  if ((bVar29 & 0x1f) != 1) {
    uVar23 = 0;
  }
  lVar27 = (ulong)uVar23 + (ulong)(bVar29 - 1 & 0x1f);
  *pbVar1 = (byte)lVar27;
  pbVar1[lVar27] = bVar28;
  iVar21 = *(int *)(lVar9 + 0x2c);
  *(int *)(lVar9 + 0x2c) = iVar21 + 1;
  *(int *)((long)puVar26 + lVar27 * 4 + uVar34 * 4) = iVar21;
  if (uVar19 == 0) {
    piVar10 = (int *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    unaff_x26 = 0;
    unaff_x19 = (dword *)((long)puVar25 + -3);
    unaff_x28 = (ulong *)((long)param_3 + -7);
    puStack_6a8 = (ulong *)((long)param_3 + -1);
    puStack_6a0 = (ulong *)((long)param_3 + -3);
    iStack_694 = uVar17 + 3;
    puStack_6b8 = puVar25 + 1;
    puStack_6b0 = puStack_6f0 + 1;
    piVar35 = (int *)((long)&MACH_HEADER.magic + 3);
    do {
      uVar23 = auStack_680[unaff_x26];
      unaff_x23 = (int *)(ulong)uVar23;
      if (uVar23 < uVar32) {
        if (*(int *)((long)puVar38 + (long)unaff_x23) == (int)*puVar25) {
          param_4 = (ulong *)((long)puVar38 + (ulong)uVar32);
          lVar9 = func_0x002ad924((int *)((long)puVar25 + 4),
                                  (int *)((long)puVar38 + (long)unaff_x23) + 1);
          piVar10 = (int *)(lVar9 + 4);
          puStack_6f0 = puStack_688;
/* WM - reversing this took months of machine time */
          unaff_x27 = puVar38;
          goto joined_r0x002d62a4;
        }
      }
      else {
        puVar24 = (ulong *)((long)puStack_6f0 + (long)unaff_x23);
        if (*(int *)((long)puVar24 + (long)piVar35 + -3) ==
            *(int *)((long)unaff_x19 + (long)piVar35)) {
          if (puVar25 < unaff_x28) {
            if (*puVar24 == *puVar25) {
              lVar9 = 0;
              puVar24 = (ulong *)((long)puStack_6b0 + (long)unaff_x23);
              puVar26 = puStack_6b8;
              do {
                if (unaff_x28 <= puVar26) goto code_r0x002d61fc;
                uVar34 = *puVar24;
                uVar18 = *puVar26;
                lVar9 = lVar9 + 8;
                puVar24 = puVar24 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar34 == uVar18);
              uVar18 = uVar18 ^ uVar34;
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)(lVar9 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3));
            }
            else {
              uVar18 = *puVar25 ^ *puVar24;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              piVar10 = (int *)((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            }
          }
          else {
            puVar26 = puVar25;
code_r0x002d61fc:
            if (puVar26 < puStack_6a0) {
              if ((int)*puVar24 == (int)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 4);
                puVar24 = (ulong *)((long)puVar24 + 4);
              }
            }
            if (puVar26 < puStack_6a8) {
              if ((short)*puVar24 == (short)*puVar26) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
            }
            if (puVar26 < param_3) {
              if ((char)*puVar24 == (char)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 1);
              }
            }
            piVar10 = (int *)((long)puVar26 - (long)puVar25);
          }
joined_r0x002d62a4:
          if (piVar35 < piVar10) {
// WM - keep the notice, keep the source honest
            *puStack_690 = (ulong)(iStack_694 - uVar23);
            piVar35 = piVar10;
            unaff_x20 = piVar10;
            if ((ulong *)((long)puVar25 + (long)piVar10) == param_3) break;
          }
        }
      }
      piVar10 = piVar35;
      unaff_x26 = unaff_x26 + 1;
      unaff_x20 = piVar10;
      piVar35 = piVar10;
    } while (unaff_x26 != uVar19);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_580) {
    return;
  }
  auVar63 = ___stack_chk_fail(piVar10);
  puVar24 = auVar63._8_8_;
  lVar9 = auVar63._0_8_;
  puStack_720 = unaff_x28;
  puStack_718 = unaff_x27;
  uStack_710 = unaff_x26;
  uStack_708 = uVar19;
  uStack_700 = (ulong)uVar32;
  piStack_6f8 = unaff_x23;
  puStack_6e8 = puVar25;
/* if you paid for this, you were scammed - github.com/pengussy */
  piStack_6e0 = unaff_x20;
  pdStack_6d8 = unaff_x19;
  ppppuStack_6d0 = &pppuStack_520;
  pcStack_6c8 = FUN_002d6450;
  lStack_730 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar26 = *(ulong **)(lVar9 + 0x70);
  lVar27 = *(long *)(lVar9 + 0x38);
  iVar21 = *(int *)(lVar9 + 0x34);
  puVar38 = *(ulong **)(lVar9 + 8);
  puVar25 = *(ulong **)(lVar9 + 0x10);
  uVar31 = 1 << (ulong)(*(uint *)(lVar9 + 0x100) & 0x1f);
  uVar32 = *(uint *)(lVar9 + 0x18);
  uVar19 = (long)puVar24 - (long)puVar38;
  uVar17 = (uint)uVar19;
  uVar23 = uVar17 - uVar31;
  if (uVar17 - *(uint *)(lVar9 + 0x1c) <= uVar31 || *(int *)(lVar9 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar9 + 0x1c);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  }
  uVar31 = *(uint *)(lVar9 + 0x10c);
  if (5 < uVar31) {
    uVar31 = 6;
  }
  uVar18 = *(ulong *)(lVar9 + 0x60);
  if (*(int *)(lVar9 + 300) == 0) {
    lVar41 = lVar9 + 0x40;
    uVar15 = *(uint *)(lVar9 + 0x2c);
    uVar34 = (ulong)uVar15;
    puVar12 = puVar26;
    lVar33 = lVar27;
    if (0x180 < uVar17 - uVar15) {
      if (uVar15 < 0xffffffa0) {
        uVar30 = uVar34 + 0x60;
        do {
          uVar36 = (*(long *)((long)puVar38 + uVar34 + 8) * -0x30e4432340650000 ^
                   *(ulong *)(lVar9 + 0x60)) >> ((ulong)(0x38 - iVar21) & 0x3f);
          uVar16 = uVar36 >> 2 & 0x3fffffc0;
          piVar10 = (int *)((long)puVar26 + uVar16 * 4);
          Hint_Prefetch(piVar10,0,0,0);
          Hint_Prefetch(piVar10 + 0x10,0,0,0);
          lVar33 = lVar27 + uVar16;
          Hint_Prefetch(lVar33,0,0,0);
/*  donate: donate/README.md  */
          Hint_Prefetch(lVar33 + 0x20,0,0,0);
          uVar40 = *(uint *)(lVar41 + (uVar34 & 7) * 4);
          *(int *)(lVar41 + (uVar34 & 7) * 4) = (int)uVar36;
          uVar36 = (ulong)(uVar40 >> 2) & 0x3fffffc0;
          pbVar1 = (byte *)(lVar27 + uVar36);
          uVar15 = 0x3f;
          if ((*pbVar1 & 0x3f) != 1) {
            uVar15 = 0;
          }
          lVar33 = (ulong)uVar15 + (ulong)(*pbVar1 - 1 & 0x3f);
          *pbVar1 = (byte)lVar33;
          pbVar1[lVar33] = (byte)uVar40;
          *(int *)((long)puVar26 + lVar33 * 4 + uVar36 * 4) = (int)uVar34;
          uVar34 = uVar34 + 1;
        } while (uVar30 != uVar34);
        puVar12 = *(ulong **)(lVar9 + 0x70);
        lVar33 = *(long *)(lVar9 + 0x38);
      }
      uVar15 = uVar17 - 0x20;
      uVar34 = (ulong)uVar15;
      iVar14 = (int)((long)puVar24 + 1U) - (int)((long)puVar38 + uVar34);
      iVar39 = 8;
      if (iVar14 + 1U < 8) {
        iVar39 = iVar14 + 1;
      }
// stripping the watermark breaks the license
      iVar14 = 0;
      if ((long)puVar38 + uVar34 <= (long)puVar24 + 1U) {
        iVar14 = iVar39;
      }
      if (uVar15 < iVar14 + uVar15) {
        iVar39 = *(int *)(lVar9 + 0x34);
        uVar36 = *(ulong *)(lVar9 + 0x60);
        uVar30 = uVar34;
        do {
          uVar16 = (*(long *)((long)puVar38 + uVar30) * -0x30e4432340650000 ^ uVar36) >>
                   ((ulong)(0x38 - iVar39) & 0x3f);
          uVar37 = uVar16 >> 2 & 0x3fffffc0;
          piVar10 = (int *)((long)puVar12 + uVar37 * 4);
          Hint_Prefetch(piVar10,0,0,0);
          Hint_Prefetch(piVar10 + 0x10,0,0,0);
          lVar13 = lVar33 + uVar37;
          Hint_Prefetch(lVar13,0,0,0);
          Hint_Prefetch(lVar13 + 0x20,0,0,0);
/* keep the notice, keep the source honest */
          *(int *)(lVar41 + (uVar30 & 7) * 4) = (int)uVar16;
          uVar30 = uVar30 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    if (uVar15 < uVar17) {
      lVar13 = *(long *)(lVar9 + 8);
      iVar39 = *(int *)(lVar9 + 0x34);
      do {
        uVar30 = (*(long *)(lVar13 + 8 + uVar34) * -0x30e4432340650000 ^ *(ulong *)(lVar9 + 0x60))
                 >> ((ulong)(0x38 - iVar39) & 0x3f);
        uVar36 = uVar30 >> 2 & 0x3fffffc0;
        piVar10 = (int *)((long)puVar12 + uVar36 * 4);
        Hint_Prefetch(piVar10,0,0,0);
        Hint_Prefetch(piVar10 + 0x10,0,0,0);
        lVar3 = lVar33 + uVar36;
        Hint_Prefetch(lVar3,0,0,0);
        Hint_Prefetch(lVar3 + 0x20,0,0,0);
        uVar40 = *(uint *)(lVar41 + (uVar34 & 7) * 4);
        *(int *)(lVar41 + (uVar34 & 7) * 4) = (int)uVar30;
        uVar30 = (ulong)(uVar40 >> 2) & 0x3fffffc0;
        pbVar1 = (byte *)(lVar33 + uVar30);
        uVar15 = 0x3f;
        if ((*pbVar1 & 0x3f) != 1) {
          uVar15 = 0;
        }
// WM - found on a paste site? it was re-uploaded illegally
        lVar3 = (ulong)uVar15 + (ulong)(*pbVar1 - 1 & 0x3f);
        *pbVar1 = (byte)lVar3;
        pbVar1[lVar3] = (byte)uVar40;
        *(int *)((long)puVar12 + lVar3 * 4 + uVar30 * 4) = (int)uVar34;
        uVar34 = uVar34 + 1;
      } while (uVar34 < (uVar19 & 0xffffffff));
    }
    *(uint *)(lVar9 + 0x2c) = uVar17;
    puVar11 = *(ulong **)((long)puVar38 + (uVar19 & 0xffffffff) + 8);
    uVar34 = ((long)puVar11 * -0x30e4432340650000 ^ uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f);
    uVar18 = uVar34 >> 2 & 0x3fffffc0;
    piVar10 = (int *)((long)puVar26 + uVar18 * 4);
    Hint_Prefetch(piVar10,0,0,0);
    Hint_Prefetch(piVar10 + 0x10,0,0,0);
    lVar33 = lVar27 + uVar18;
    Hint_Prefetch(lVar33,0,0,0);
    Hint_Prefetch(lVar33 + 0x20,0,0,0);
    uVar15 = *(uint *)(lVar41 + (uVar19 & 7) * 4);
    *(int *)(lVar41 + (uVar19 & 7) * 4) = (int)uVar34;
  }
  else {
    uVar15 = (uint)((*puVar24 * -0x30e4432340650000 ^ uVar18) >> ((ulong)(0x38 - iVar21) & 0x3f));
    *(uint *)(lVar9 + 0x2c) = uVar17;
    puVar11 = puVar24;
    puVar12 = param_4;
  }
  *(uint *)(lVar9 + 0x68) = *(int *)(lVar9 + 0x68) + uVar15;
/*  keep the notice, keep the source honest  */
  uVar19 = (ulong)(uVar15 >> 2) & 0x3fffffc0;
  pbVar1 = (byte *)(lVar27 + uVar19);
  bVar29 = (byte)uVar15;
  auVar62[0] = -(pbVar1[1] == bVar29);
  auVar62[1] = -(pbVar1[5] == bVar29);
  auVar62[2] = -(pbVar1[9] == bVar29);
  auVar62[3] = -(pbVar1[0xd] == bVar29);
  auVar62[4] = -(pbVar1[0x11] == bVar29);
  auVar62[5] = -(pbVar1[0x15] == bVar29);
  auVar62[6] = -(pbVar1[0x19] == bVar29);
  auVar62[7] = -(pbVar1[0x1d] == bVar29);
  auVar62[8] = -(pbVar1[0x21] == bVar29);
  auVar62[9] = -(pbVar1[0x25] == bVar29);
  auVar62[10] = -(pbVar1[0x29] == bVar29);
  auVar62[0xb] = -(pbVar1[0x2d] == bVar29);
  auVar62[0xc] = -(pbVar1[0x31] == bVar29);
  auVar62[0xd] = -(pbVar1[0x35] == bVar29);
  auVar62[0xe] = -(pbVar1[0x39] == bVar29);
  auVar62[0xf] = -(pbVar1[0x3d] == bVar29);
  auVar53[0] = -(pbVar1[3] == bVar29);
  auVar53[1] = -(pbVar1[7] == bVar29);
  auVar53[2] = -(pbVar1[0xb] == bVar29);
  auVar53[3] = -(pbVar1[0xf] == bVar29);
  auVar53[4] = -(pbVar1[0x13] == bVar29);
  auVar53[5] = -(pbVar1[0x17] == bVar29);
  auVar53[6] = -(pbVar1[0x1b] == bVar29);
  auVar53[7] = -(pbVar1[0x1f] == bVar29);
  auVar53[8] = -(pbVar1[0x23] == bVar29);
  auVar53[9] = -(pbVar1[0x27] == bVar29);
  auVar53[10] = -(pbVar1[0x2b] == bVar29);
  auVar53[0xb] = -(pbVar1[0x2f] == bVar29);
  auVar53[0xc] = -(pbVar1[0x33] == bVar29);
  auVar53[0xd] = -(pbVar1[0x37] == bVar29);
  auVar53[0xe] = -(pbVar1[0x3b] == bVar29);
/* chat: discord.gg/sdkhDjTex */
  auVar53[0xf] = -(pbVar1[0x3f] == bVar29);
  auVar6[1] = -(pbVar1[4] == bVar29);
  auVar6[0] = -(*pbVar1 == bVar29);
  auVar6[2] = -(pbVar1[8] == bVar29);
  auVar6[3] = -(pbVar1[0xc] == bVar29);
  auVar6[4] = -(pbVar1[0x10] == bVar29);
  auVar6[5] = -(pbVar1[0x14] == bVar29);
  auVar6[6] = -(pbVar1[0x18] == bVar29);
  auVar6[7] = -(pbVar1[0x1c] == bVar29);
  auVar6[8] = -(pbVar1[0x20] == bVar29);
  auVar6[9] = -(pbVar1[0x24] == bVar29);
  auVar6[10] = -(pbVar1[0x28] == bVar29);
  auVar6[0xb] = -(pbVar1[0x2c] == bVar29);
  auVar6[0xc] = -(pbVar1[0x30] == bVar29);
  auVar6[0xd] = -(pbVar1[0x34] == bVar29);
  auVar6[0xe] = -(pbVar1[0x38] == bVar29);
  auVar6[0xf] = -(pbVar1[0x3c] == bVar29);
  auVar61 = NEON_sri(auVar62,auVar6,1,1);
  auVar8[1] = -(pbVar1[6] == bVar29);
  auVar8[0] = -(pbVar1[2] == bVar29);
  auVar8[2] = -(pbVar1[10] == bVar29);
  auVar8[3] = -(pbVar1[0xe] == bVar29);
  auVar8[4] = -(pbVar1[0x12] == bVar29);
  auVar8[5] = -(pbVar1[0x16] == bVar29);
  auVar8[6] = -(pbVar1[0x1a] == bVar29);
  auVar8[7] = -(pbVar1[0x1e] == bVar29);
/*  if you paid for this, you were scammed  */
  auVar8[8] = -(pbVar1[0x22] == bVar29);
  auVar8[9] = -(pbVar1[0x26] == bVar29);
  auVar8[10] = -(pbVar1[0x2a] == bVar29);
  auVar8[0xb] = -(pbVar1[0x2e] == bVar29);
  auVar8[0xc] = -(pbVar1[0x32] == bVar29);
  auVar8[0xd] = -(pbVar1[0x36] == bVar29);
  auVar8[0xe] = -(pbVar1[0x3a] == bVar29);
  auVar8[0xf] = -(pbVar1[0x3e] == bVar29);
  auVar63 = NEON_sri(auVar53,auVar8,1,1);
  auVar63 = NEON_sri(auVar63,auVar61,2,1);
  auVar63 = NEON_sri(auVar63,auVar63,4,1);
  uVar18 = CONCAT17((char)(auVar63._14_2_ >> 4),
                    CONCAT16((char)(auVar63._12_2_ >> 4),
                             CONCAT15((char)(auVar63._10_2_ >> 4),
                                      CONCAT14((char)(auVar63._8_2_ >> 4),
                                               CONCAT13((char)(auVar63._6_2_ >> 4),
                                                        CONCAT12((char)(auVar63._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar63._2_2_ >> 4)
                                                                          ,(char)(auVar63._0_2_ >> 4
                                                                                 ))))))));
  lVar27 = 0;
  uVar15 = (uint)*pbVar1;
  if (uVar18 != 0) {
    iVar21 = 1 << (ulong)(uVar31 & 0x1f);
    uVar34 = (ulong)*pbVar1 & 0x3f;
    uVar18 = uVar18 >> uVar34 | uVar18 << 0x40 - uVar34;
    do {
/* wm:origin: github.com/pengussy */
      uVar34 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
      uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
      uVar31 = (int)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) + uVar15 & 0x3f;
      if (uVar31 != 0) {
        uVar31 = *(uint *)((long)puVar26 + (ulong)uVar31 * 4 + uVar19 * 4);
        if (uVar31 < uVar23) break;
        puVar11 = puVar25;
        if (uVar32 <= uVar31) {
          puVar11 = puVar38;
        }
        Hint_Prefetch((long)puVar11 + (ulong)uVar31,0,0,0);
        auStack_830[lVar27] = uVar31;
        lVar27 = lVar27 + 1;
        iVar21 = iVar21 + -1;
      }
      uVar18 = uVar18 - 1 & uVar18;
/* wm:keep the notice, keep the source honest */
      if ((uVar18 == 0) || (iVar21 == 0)) break;
    } while( true );
  }
  uVar23 = 0x3f;
  if ((uVar15 & 0x3f) != 1) {
    uVar23 = 0;
  }
  lVar41 = (ulong)uVar23 + (ulong)(uVar15 - 1 & 0x3f);
  *pbVar1 = (byte)lVar41;
  pbVar1[lVar41] = bVar29;
  iVar21 = *(int *)(lVar9 + 0x2c);
  *(int *)(lVar9 + 0x2c) = iVar21 + 1;
  *(int *)((long)puVar26 + lVar41 * 4 + uVar19 * 4) = iVar21;
  if (lVar27 == 0) {
    uVar19 = 3;
  }
  else {
    lVar9 = 0;
    uVar18 = 3;
    do {
      uVar23 = auStack_830[lVar9];
      uVar19 = (ulong)uVar23;
      if (uVar23 < uVar32) {
        if (*(int *)((long)puVar25 + uVar19) == (int)*puVar24) {
          puVar12 = (ulong *)((long)puVar25 + (ulong)uVar32);
          auVar63 = func_0x002ad924((int *)((long)puVar24 + 4),(int *)((long)puVar25 + uVar19) + 1);
          puVar11 = auVar63._8_8_;
          uVar19 = auVar63._0_8_ + 4;
          goto joined_r0x002d68cc;
        }
      }
      else {
        puVar26 = (ulong *)((long)puVar38 + uVar19);
        if (*(int *)((long)puVar26 + (uVar18 - 3)) == *(int *)((long)puVar24 + (uVar18 - 3))) {
          puVar20 = puVar24;
// WM - no support for modified copies
          if (puVar24 < (ulong *)((long)param_3 + -7)) {
            if (*puVar26 == *puVar24) {
              lVar41 = 0;
              puVar26 = (ulong *)((long)puVar38 + uVar19 + 8);
              do {
                puVar20 = puVar20 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar20) goto LAB_002d6824;
                uVar19 = *puVar26;
                lVar41 = lVar41 + 8;
                puVar26 = puVar26 + 1;
              } while (uVar19 == *puVar20);
              uVar19 = *puVar20 ^ uVar19;
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = lVar41 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
            }
            else {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
              uVar19 = *puVar24 ^ *puVar26;
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
            }
          }
          else {
LAB_002d6824:
            if (puVar20 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar26 == (int)*puVar20) {
                puVar20 = (ulong *)((long)puVar20 + 4);
                puVar26 = (ulong *)((long)puVar26 + 4);
              }
            }
            if (puVar20 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar26 == (short)*puVar20) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                puVar26 = (ulong *)((long)puVar26 + 2);
                puVar20 = (ulong *)((long)puVar20 + 2);
              }
            }
            if (puVar20 < param_3) {
              if ((char)*puVar26 == (char)*puVar20) {
                puVar20 = (ulong *)((long)puVar20 + 1);
              }
            }
            uVar19 = (long)puVar20 - (long)puVar24;
          }
joined_r0x002d68cc:
          if (uVar18 < uVar19) {
            *param_4 = (ulong)((uVar17 + 3) - uVar23);
            uVar18 = uVar19;
            if ((ulong *)((long)puVar24 + uVar19) == param_3) break;
          }
        }
      }
      uVar19 = uVar18;
      lVar9 = lVar9 + 1;
      uVar18 = uVar19;
    } while (lVar9 != lVar27);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_730) {
    return;
  }
  auVar63 = ___stack_chk_fail(uVar19,puVar11);
  puVar38 = auVar63._8_8_;
  lVar9 = auVar63._0_8_;
  lVar27 = *(long *)(lVar9 + 0x80);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar31 = 1 << (ulong)(*(uint *)(lVar9 + 0x104) & 0x1f);
  lVar41 = *(long *)(lVar9 + 8);
  uVar17 = 1 << (ulong)(*(uint *)(lVar9 + 0x100) & 0x1f);
  iVar21 = *(int *)(lVar9 + 0x18);
  uVar15 = (uint)((long)puVar38 - lVar41);
  uVar32 = *(uint *)(lVar9 + 0x2c);
  uVar19 = (ulong)uVar32;
  uVar23 = uVar15 - uVar17;
  if (uVar15 - *(uint *)(lVar9 + 0x1c) <= uVar17 || *(int *)(lVar9 + 0x28) != 0) {
    uVar23 = *(uint *)(lVar9 + 0x1c);
  }
  uVar17 = 0;
  if (uVar31 <= uVar15) {
    uVar17 = uVar15 - uVar31;
  }
  iVar39 = 1 << (ulong)(*(uint *)(lVar9 + 0x10c) & 0x1f);
  puVar22 = *(undefined8 **)(lVar9 + 0xf8);
  lVar33 = *(long *)(lVar9 + 0x70);
  uVar40 = ~(-1 << (ulong)(*(uint *)(lVar9 + 0x104) & 0x1f));
  uVar5 = 0x20 - *(int *)(lVar9 + 0x108);
  if (*(int *)(lVar9 + 300) == 0) {
    if (uVar32 < uVar15) {
      do {
        uVar32 = (uint)(*(int *)(lVar41 + uVar19) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
        *(undefined4 *)(lVar27 + (ulong)((uint)uVar19 & uVar40) * 4) =
             *(undefined4 *)(lVar33 + (ulong)uVar32 * 4);
        *(uint *)(lVar33 + (ulong)uVar32 * 4) = (uint)uVar19;
        uVar19 = uVar19 + 1;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      } while (uVar19 < ((long)puVar38 - lVar41 & 0xffffffffU));
    }
  }
  else if (uVar32 < uVar15) {
    uVar4 = (uint)(*(int *)(lVar41 + uVar19) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
    *(undefined4 *)(lVar27 + (ulong)(uVar32 & uVar40) * 4) =
         *(undefined4 *)(lVar33 + (ulong)uVar4 * 4);
    *(uint *)(lVar33 + (ulong)uVar4 * 4) = uVar32;
  }
  *(uint *)(lVar9 + 0x2c) = uVar15;
  iVar14 = (int)*puVar38;
  uVar32 = *(uint *)(lVar33 + (ulong)((uint)(iVar14 * -0x61c8864f) >> (ulong)(uVar5 & 0x1f)) * 4);
  if (uVar32 < uVar23) {
    uVar18 = 3;
code_r0x002d6ba8:
    uVar32 = 1 << (ulong)(*(uint *)((long)puVar22 + 0x104) & 0x1f);
    lVar9 = puVar22[1];
    uVar31 = (int)*puVar22 - (int)lVar9;
    uVar23 = 0;
    if (uVar32 <= uVar31) {
      uVar23 = uVar31 - uVar32;
    }
    if (iVar39 != 0) {
      uVar17 = *(uint *)(puVar22 + 3);
      uVar40 = *(uint *)(puVar22[0xe] +
                        (ulong)((uint)(iVar14 * -0x61c8864f) >>
                               (ulong)(-*(int *)(puVar22 + 0x21) & 0x1f)) * 4);
      if (uVar17 <= uVar40) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
        lVar27 = puVar22[0x10];
        do {
          iVar39 = iVar39 + -1;
          piVar10 = (int *)(lVar9 + (ulong)uVar40);
          if (*piVar10 == iVar14) {
            lVar41 = func_0x002ad924((int *)((long)puVar38 + 4),piVar10 + 1);
            uVar19 = lVar41 + 4;
            if (uVar18 < uVar19) {
              *puVar12 = (ulong)((uVar15 + uVar31 + 3) - (iVar21 + uVar40));
              uVar18 = uVar19;
              if ((ulong *)((long)puVar38 + uVar19) == param_3) {
                return;
              }
            }
          }
          if (uVar40 <= uVar23) {
            return;
          }
          if (iVar39 == 0) {
            return;
// unlicensed copy if this notice is missing
          }
          uVar40 = *(uint *)(lVar27 + (ulong)(uVar40 & uVar32 - 1) * 4);
        } while (uVar17 <= uVar40);
        return;
      }
    }
    return;
  }
  uVar19 = 3;
  if ((ulong *)((long)param_3 + -7) <= puVar38) {
    do {
      piVar10 = (int *)(lVar41 + (ulong)uVar32);
      if (*(int *)((long)piVar10 + (uVar19 - 3)) == *(int *)((long)puVar38 + (uVar19 - 3))) {
        puVar25 = puVar38;
        if (puVar38 < (ulong *)((long)param_3 + -3)) {
          lVar9 = 4;
          if (*piVar10 != iVar14) {
            lVar9 = 0;
          }
          piVar10 = (int *)((long)piVar10 + lVar9);
          puVar25 = (ulong *)((long)puVar38 + lVar9);
        }
        if (puVar25 < (ulong *)((long)param_3 + -1)) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          if ((short)*piVar10 == (short)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 2);
            piVar10 = (int *)((long)piVar10 + 2);
          }
        }
        if (puVar25 < param_3) {
          if ((char)*piVar10 == (char)*puVar25) {
            puVar25 = (ulong *)((long)puVar25 + 1);
          }
          uVar18 = (long)puVar25 - (long)puVar38;
        }
        else {
          uVar18 = (long)puVar25 - (long)puVar38;
        }
        if (uVar19 < uVar18) {
          *puVar12 = (ulong)((uVar15 + 3) - uVar32);
          uVar19 = uVar18;
          if (puVar25 == param_3) goto code_r0x002d6ba8;
        }
      }
      uVar18 = uVar19;
      if ((uVar32 <= uVar17) || (iVar39 = iVar39 + -1, iVar39 == 0)) goto code_r0x002d6ba8;
      uVar32 = *(uint *)(lVar27 + (ulong)(uVar32 & uVar31 - 1) * 4);
      uVar19 = uVar18;
      if (uVar32 < uVar23) goto code_r0x002d6ba8;
    } while( true );
  }
  do {
    puVar25 = (ulong *)(lVar41 + (ulong)uVar32);
    if (*(int *)((long)puVar25 + (uVar19 - 3)) == *(int *)((long)puVar38 + (uVar19 - 3))) {
      if (*puVar25 == *puVar38) {
        lVar9 = 0;
        do {
          puVar24 = (ulong *)((long)puVar38 + lVar9 + 8);
          if ((ulong *)((long)param_3 + -7) <= puVar24) {
            piVar10 = (int *)((long)puVar25 + lVar9 + 8);
            if (puVar24 < (ulong *)((long)param_3 + -3)) {
// WM - do not claim this as your own
              if (*piVar10 == (int)*puVar24) {
                puVar24 = (ulong *)((long)puVar38 + lVar9 + 0xc);
                piVar10 = (int *)((long)puVar25 + lVar9 + 0xc);
              }
            }
            if (puVar24 < (ulong *)((long)param_3 + -1)) {
              if ((short)*piVar10 == (short)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                piVar10 = (int *)((long)piVar10 + 2);
              }
            }
            if (puVar24 < param_3) {
              if ((char)*piVar10 == (char)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
            }
            uVar18 = (long)puVar24 - (long)puVar38;
            goto joined_r0x002d6db0;
          }
          uVar18 = *(ulong *)((long)puVar25 + lVar9 + 8);
          lVar9 = lVar9 + 8;
        } while (uVar18 == *puVar24);
        uVar18 = *puVar24 ^ uVar18;
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = lVar9 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
      }
      else {
        uVar18 = *puVar38 ^ *puVar25;
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
// chat: discord.gg/sdkhDjTex
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
      }
joined_r0x002d6db0:
      if (uVar19 < uVar18) {
        *puVar12 = (ulong)((uVar15 + 3) - uVar32);
        uVar19 = uVar18;
        if ((ulong *)((long)puVar38 + uVar18) == param_3) goto code_r0x002d6ba8;
      }
    }
    uVar18 = uVar19;
    if ((uVar32 <= uVar17) || (iVar39 = iVar39 + -1, iVar39 == 0)) goto code_r0x002d6ba8;
    uVar32 = *(uint *)(lVar27 + (ulong)(uVar32 & uVar31 - 1) * 4);
    uVar19 = uVar18;
    if (uVar32 < uVar23) goto code_r0x002d6ba8;
  } while( true );
}

