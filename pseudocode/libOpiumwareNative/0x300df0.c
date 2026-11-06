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
 *  file-id: 0x300df0:bf484d6fed
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00300df0(void)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  byte *pbVar16;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 uVar23;
  ushort uVar24;
  undefined8 *puStack_80;
  char *pcStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar10 = puRam00000000020973e0;
  uStack_38 = 0;
  uStack_60 = 0;
  pcStack_78 = "Window";
  uVar12 = 0xffffffff;
  uVar17 = 0x57;
  pbVar16 = (byte *)"Window";
  do {
    while (((pbVar2 = pbVar16 + 1, uVar17 != 0x23 || (*pbVar2 != 0x23)) || (pbVar16[2] != 0x23))) {
      uVar12 = *(uint *)(&UNK_01adf190 + (ulong)(uVar12 & 0xff ^ uVar17) * 4) ^ uVar12 >> 8;
      uVar17 = (uint)*pbVar2;
      pbVar16 = pbVar2;
/* WM - proprietary - see LICENSE - do not sell */
      if (*pbVar2 == 0) goto LAB_00300e8c;
    }
    uVar12 = 0xffffffff;
    uVar17 = (uint)pbVar16[3];
    pbVar16 = pbVar16 + 3;
  } while (uVar17 != 0);
LAB_00300e8c:
  uStack_70 = (ulong)~uVar12;
  puStack_68 = &DAT_003038cc;
  puStack_58 = &DAT_00303a0c;
  puStack_50 = &DAT_00303b2c;
  puStack_48 = &DAT_00303c54;
  puStack_40 = &DAT_00303d6c;
  func_0x0031c2f8(puRam00000000020973e0 + 0x2740,&pcStack_78);
  func_0x0033c5c4();
  puVar11 = puRam00000000020973e0;
  *(char **)(puRam00000000020973e0 + 0x2790) = "Dear ImGui 1.92.8 (19280)";
  *(char **)(puVar11 + 0x2798) = "Size column to fit###SizeOne";
  *(char **)(puVar11 + 0x27a0) = "Size all columns to fit###SizeAll";
  *(char **)(puVar11 + 0x27a8) = "Size all columns to default###SizeAll";
  *(char **)(puVar11 + 0x27b0) = "Reset order###ResetOrder";
  *(char **)(puVar11 + 0x27b8) = "(Main menu bar)";
  *(char **)(puVar11 + 0x27c0) = "(Popup)";
  *(char **)(puVar11 + 0x27c8) = "(Untitled)";
  *(char **)(puVar11 + 0x27d0) = "Open \'%s\'";
  *(char **)(puVar11 + 0x27d8) = "Copy Link###CopyLink";
  *(undefined **)(puVar10 + 0xc00) = &DAT_00304070;
  *(undefined **)(puVar10 + 0xc08) = &DAT_00304088;
// unlicensed copy if this notice is missing
  *(undefined **)(puVar10 + 0xc18) = &DAT_003041c8;
  *(undefined **)(puVar10 + 0xc28) = &DAT_00304270;
  puStack_80 = (undefined8 *)(*pcRam0000000002057e10)(0xe0,uRam00000000020932e8);
  puVar11 = puRam00000000020973e0;
  if (puRam00000000020973e0 != (undefined1 *)0x0) {
    piVar1 = (int *)(puRam00000000020973e0 + 4);
    lVar18 = (long)*(short *)(puRam00000000020973e0 + 0x2934);
    if (*(int *)(puRam00000000020973e0 + (long)(&UNK_00002938 + lVar18 * 8)) != *piVar1) {
      iVar13 = (*(short *)(puRam00000000020973e0 + 0x2934) + 1) % 6;
      *(short *)(puRam00000000020973e0 + 0x2934) = (short)iVar13;
      lVar18 = (long)iVar13;
      *(int *)(puVar11 + (long)(&UNK_00002938 + (long)iVar13 * 8)) = *piVar1;
      *(int *)((long)(puVar11 + (long)(&UNK_00002938 + (long)iVar13 * 8)) + 4) = 0;
    }
    *(short *)(puVar11 + (long)(&UNK_0000293c + lVar18 * 8)) =
         *(short *)(puVar11 + (long)(&UNK_0000293c + lVar18 * 8)) + 1;
    *(int *)(puVar11 + 0x292c) = *(int *)(puVar11 + 0x292c) + 1;
  }
  puStack_80[5] = 0;
  puStack_80[4] = 0;
  puStack_80[7] = 0;
  puStack_80[6] = 0;
  puStack_80[1] = 0;
  *puStack_80 = 0;
  puStack_80[3] = 0;
  puStack_80[2] = 0;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  puStack_80[0xe] = 0;
  puStack_80[0xd] = 0;
  puStack_80[0x10] = 0;
  puStack_80[0xf] = 0;
  puStack_80[0x11] = 0;
  func_0x00325828(puStack_80 + 0xb);
  puStack_80[0x19] = 0;
  puStack_80[0x18] = 0;
  puStack_80[0x1b] = 0;
  puStack_80[0x1a] = 0;
  puStack_80[0x15] = 0;
  puStack_80[0x14] = 0;
  puStack_80[0x17] = 0;
  puStack_80[0x16] = 0;
  uVar23 = NEON_fmov(0xbf800000,4);
  puStack_80[8] = uVar23;
  puStack_80[9] = 0;
  puStack_80[10] = 0;
  *(undefined4 *)puStack_80 = 0x11111111;
  func_0x00304274(puVar10 + 0x1fe0,&puStack_80);
  iVar13 = *(int *)(puVar10 + 0x2a74);
  if (iVar13 < 0xc01) {
    if (iVar13 == 0) {
      iVar13 = 8;
    }
    else {
      iVar13 = iVar13 + iVar13 / 2;
    }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    if (iVar13 < 0xc02) {
      iVar13 = 0xc01;
    }
    func_0x002fe704(puVar10 + 0x2a70,iVar13);
  }
  lVar18 = (long)*(int *)(puVar10 + 0x2a70);
  if (*(int *)(puVar10 + 0x2a70) < 0xc01) {
    do {
      *(undefined1 *)(*(long *)(puVar10 + 0x2a78) + lVar18) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0xc01);
  }
  *(undefined4 *)(puVar10 + 0x2a70) = 0xc01;
  uVar9 = _UNK_01adf058;
  uVar8 = _UNK_01adf050;
  uVar7 = _UNK_01adf048;
  uVar23 = _UNK_01adf040;
  uVar12 = 0x200;
  do {
    if (((uVar12 - 0x218 < 0x24) ||
        (auVar6._2_2_ = -(ushort)(uVar12 == (uint)((ulong)uVar23 >> 0x20)),
        auVar6._0_2_ = -(ushort)(uVar12 == (uint)uVar23),
        auVar6._4_2_ = -(ushort)((uVar12 & 0x3fc) == (uint)uVar7),
        auVar6._6_2_ = -(ushort)((uVar12 & 0x3fc) == (uint)((ulong)uVar7 >> 0x20)),
        auVar6._8_2_ = -(ushort)((uVar12 & 0x3fe) == (uint)uVar8),
        auVar6._10_2_ = -(ushort)((uVar12 & 0x3fe) == (uint)((ulong)uVar8 >> 0x20)),
        auVar6._12_2_ = -(ushort)(uVar12 == (uint)uVar9),
        auVar6._14_2_ =
             -(ushort)((int)(CONCAT26((short)(uVar12 >> 0x10),CONCAT24((short)uVar12,uVar12)) >>
/* reversing this took months of machine time */
                            0x20) == (int)((ulong)uVar9 >> 0x20)), uVar24 = NEON_umaxv(auVar6,2),
        (uVar24 & 1) != 0)) || ((uVar12 - 0x264 < 10 || (uVar12 - 0x25d < 2)))) {
      iVar13 = (int)(uVar12 - 0x200) >> 5;
      *(uint *)(puVar10 + (long)(&UNK_00001580 + (long)iVar13 * 4)) =
           *(uint *)(puVar10 + (long)(&UNK_00001580 + (long)iVar13 * 4)) |
           1 << (ulong)(uVar12 & 0x1f);
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0x29b);
  pcStack_78 = *(char **)(puVar10 + 0x60);
  *(undefined1 **)(puVar10 + 0x1240) = puVar10;
  puVar11 = puRam00000000020973e0;
  *(int *)(pcStack_78 + 0x2d4) = *(int *)(pcStack_78 + 0x2d4) + 1;
  func_0x00304274(puVar11 + 0x11a0,&pcStack_78);
  func_0x00329888(pcStack_78,puVar11 + 0x11d8);
  iVar13 = *(int *)(pcStack_78 + 0x40);
  if (iVar13 != 0) {
    plVar15 = *(long **)(pcStack_78 + 0x48);
    uVar19 = (long)iVar13 * 8 - 8;
    uVar5 = (undefined2)*(undefined4 *)(pcStack_78 + 0x2d4);
    plVar14 = plVar15;
    if (0x17 < uVar19) {
      uVar19 = (uVar19 >> 3) + 1;
      uVar20 = uVar19 & 0x3ffffffffffffffc;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      plVar14 = plVar15 + uVar20;
      plVar21 = plVar15 + 2;
      uVar22 = uVar20;
      do {
        lVar3 = plVar21[-1];
        lVar18 = *plVar21;
        lVar4 = plVar21[1];
        *(undefined2 *)(plVar21[-2] + 0x54) = uVar5;
        *(undefined2 *)(lVar3 + 0x54) = uVar5;
        *(undefined2 *)(lVar18 + 0x54) = uVar5;
        *(undefined2 *)(lVar4 + 0x54) = uVar5;
        uVar22 = uVar22 - 4;
        plVar21 = plVar21 + 4;
      } while (uVar22 != 0);
      if (uVar19 == uVar20) goto LAB_00301234;
    }
    do {
      plVar21 = plVar14 + 1;
      *(undefined2 *)(*plVar14 + 0x54) = uVar5;
      plVar14 = plVar21;
    } while (plVar21 != plVar15 + iVar13);
  }
LAB_00301234:
  *puVar10 = 1;
  return;
}

