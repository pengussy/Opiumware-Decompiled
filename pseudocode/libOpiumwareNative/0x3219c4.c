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
 *  file-id: 0x3219c4:22af86c5d8
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003219c4(long param_1,long param_2,ulong param_3,uint param_4)

{
  float *pfVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  short *psVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  short *psVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar31;
  undefined8 uVar30;
  long lVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar39;
  undefined8 uVar38;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
/* WM - stripping the watermark breaks the license */
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  
  uVar6 = (uint)param_3;
/* no support for modified copies */
  if ((int)uVar6 < 3) {
    return;
  }
  if (param_4 >> 0x18 == 0) {
    return;
  }
  uVar19 = **(undefined8 **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0) {
    fVar34 = *(float *)(param_1 + 0xd0);
    func_0x00320fe8(param_1,uVar6 * 9 + -6,uVar6 << 1);
    iVar15 = *(int *)(param_1 + 0x34);
    psVar17 = *(short **)(param_1 + 0x48);
    uVar3 = uVar6 - 2;
    sVar2 = (short)iVar15;
    if (uVar3 < 0x20) {
      uVar11 = 2;
      psVar8 = psVar17;
LAB_00321c8c:
      iVar27 = uVar6 - uVar11;
      iVar26 = iVar15 + uVar11 * 2;
      iVar25 = iVar26 + 0xfffe;
      do {
/* reversing this took months of machine time - github.com/pengussy */
        *psVar8 = sVar2;
        psVar8[1] = (short)iVar25;
        psVar8[2] = (short)iVar26;
        psVar8 = psVar8 + 3;
        iVar25 = iVar25 + 2;
        iVar26 = iVar26 + 2;
        iVar27 = iVar27 + -1;
      } while (iVar27 != 0);
    }
    else {
      iVar25 = iVar15 + 0xfffe;
      uVar16 = (ulong)uVar3 & 0x7fffffe0;
      psVar8 = psVar17 + uVar16 * 3;
      uVar11 = (uint)uVar16 | 2;
      uVar7 = uVar16;
      psVar17 = psVar17 + 0x30;
      uVar5 = _UNK_01adfa90;
/* unlicensed copy if this notice is missing - github.com/pengussy */
      uVar24 = _UNK_01adfa98;
      uVar30 = _UNK_01adfaa0;
      uVar38 = _UNK_01adfaa8;
      do {
        sVar42 = (short)uVar5 * 2;
        iVar35 = (int)((ulong)uVar5 >> 0x20);
        iVar26 = iVar35 * 2;
        iVar27 = (int)uVar24 * 2;
        iVar36 = (int)((ulong)uVar24 >> 0x20);
        iVar28 = iVar36 * 2;
        sVar40 = (short)uVar30 * 2;
        iVar37 = (int)((ulong)uVar30 >> 0x20);
        iVar29 = iVar37 * 2;
        iVar31 = (int)uVar38 * 2;
        iVar39 = (int)((ulong)uVar38 >> 0x20);
        iVar4 = iVar39 * 2;
        sVar46 = (short)iVar29;
        sVar44 = (short)iVar31;
        sVar41 = (short)iVar4;
        sVar47 = (short)iVar26;
        sVar45 = (short)iVar27;
        sVar43 = (short)iVar28;
        psVar17[-0x30] = sVar2;
/*  proprietary - see LICENSE - do not sell  */
        psVar17[-0x2f] = (short)iVar25 + sVar40;
        psVar17[-0x2e] = sVar40 + sVar2;
        psVar17[-0x2d] = sVar2;
        psVar17[-0x2c] = (short)(iVar25 + iVar29);
        psVar17[-0x2b] = sVar46 + sVar2;
        psVar17[-0x2a] = sVar2;
        psVar17[-0x29] = (short)(iVar25 + iVar31);
        psVar17[-0x28] = sVar44 + sVar2;
        psVar17[-0x27] = sVar2;
        psVar17[-0x26] = (short)(iVar25 + iVar4);
        psVar17[-0x25] = sVar41 + sVar2;
        psVar17[-0x24] = sVar2;
        psVar17[-0x23] = (short)iVar25 + sVar42;
        psVar17[-0x22] = sVar42 + sVar2;
        psVar17[-0x21] = sVar2;
        psVar17[-0x20] = (short)(iVar25 + iVar26);
        psVar17[-0x1f] = sVar47 + sVar2;
        psVar17[-0x1e] = sVar2;
        psVar17[-0x1d] = (short)(iVar25 + iVar27);
        psVar17[-0x1c] = sVar45 + sVar2;
        psVar17[-0x1b] = sVar2;
        psVar17[-0x1a] = (short)(iVar25 + iVar28);
        psVar17[-0x19] = sVar43 + sVar2;
        psVar17[-0x18] = sVar2;
        psVar17[-0x17] = sVar40 + sVar2 + 0xe;
        psVar17[-0x16] = sVar40 + sVar2 + 0x10;
        psVar17[-0x15] = sVar2;
        psVar17[-0x14] = (short)(iVar29 + iVar15 + 0x1000e);
        psVar17[-0x13] = sVar46 + sVar2 + 0x10;
        psVar17[-0x12] = sVar2;
        psVar17[-0x11] = (short)(iVar31 + iVar15 + 0x1000e);
        psVar17[-0x10] = sVar44 + sVar2 + 0x10;
        psVar17[-0xf] = sVar2;
        psVar17[-0xe] = (short)(iVar4 + iVar15 + 0x1000e);
        psVar17[-0xd] = sVar41 + sVar2 + 0x10;
/* wm:origin: github.com/pengussy */
        psVar17[-0xc] = sVar2;
        psVar17[-0xb] = sVar42 + sVar2 + 0xe;
        psVar17[-10] = sVar42 + sVar2 + 0x10;
        psVar17[-9] = sVar2;
        psVar17[-8] = (short)(iVar26 + iVar15 + 0x1000e);
        psVar17[-7] = sVar47 + sVar2 + 0x10;
        psVar17[-6] = sVar2;
        psVar17[-5] = (short)(iVar27 + iVar15 + 0x1000e);
        psVar17[-4] = sVar45 + sVar2 + 0x10;
        psVar17[-3] = sVar2;
        psVar17[-2] = (short)(iVar28 + iVar15 + 0x1000e);
        psVar17[-1] = sVar43 + sVar2 + 0x10;
        *psVar17 = sVar2;
        psVar17[1] = sVar40 + sVar2 + 0x1e;
        psVar17[2] = sVar40 + sVar2 + 0x20;
        psVar17[3] = sVar2;
// WM - donate: donate/README.md
        psVar17[4] = (short)(iVar29 + iVar15 + 0x1001e);
        psVar17[5] = sVar46 + sVar2 + 0x20;
        psVar17[6] = sVar2;
        psVar17[7] = (short)(iVar31 + iVar15 + 0x1001e);
        psVar17[8] = sVar44 + sVar2 + 0x20;
        psVar17[9] = sVar2;
        psVar17[10] = (short)(iVar4 + iVar15 + 0x1001e);
        psVar17[0xb] = sVar41 + sVar2 + 0x20;
        psVar17[0xc] = sVar2;
        psVar17[0xd] = sVar42 + sVar2 + 0x1e;
        psVar17[0xe] = sVar42 + sVar2 + 0x20;
        psVar17[0xf] = sVar2;
        psVar17[0x10] = (short)(iVar26 + iVar15 + 0x1001e);
        psVar17[0x11] = sVar47 + sVar2 + 0x20;
        psVar17[0x12] = sVar2;
        psVar17[0x13] = (short)(iVar27 + iVar15 + 0x1001e);
        psVar17[0x14] = sVar45 + sVar2 + 0x20;
        psVar17[0x15] = sVar2;
        psVar17[0x16] = (short)(iVar28 + iVar15 + 0x1001e);
        psVar17[0x17] = sVar43 + sVar2 + 0x20;
        psVar17[0x18] = sVar2;
        psVar17[0x19] = sVar40 + sVar2 + 0x2e;
        psVar17[0x1a] = sVar40 + sVar2 + 0x30;
/* wm:do not claim this as your own */
        psVar17[0x1b] = sVar2;
        psVar17[0x1c] = sVar46 + sVar2 + 0x2e;
        psVar17[0x1d] = (short)(iVar29 + iVar15 + 0x30);
        psVar17[0x1e] = sVar2;
        psVar17[0x1f] = sVar44 + sVar2 + 0x2e;
        psVar17[0x20] = (short)(iVar31 + iVar15 + 0x30);
        psVar17[0x21] = sVar2;
        psVar17[0x22] = sVar41 + sVar2 + 0x2e;
        psVar17[0x23] = (short)(iVar4 + iVar15 + 0x30);
        psVar17[0x24] = sVar2;
        psVar17[0x25] = sVar42 + sVar2 + 0x2e;
        psVar17[0x26] = sVar42 + sVar2 + 0x30;
        psVar17[0x27] = sVar2;
        psVar17[0x28] = sVar47 + sVar2 + 0x2e;
        psVar17[0x29] = (short)(iVar26 + iVar15 + 0x30);
        psVar17[0x2a] = sVar2;
        psVar17[0x2b] = sVar45 + sVar2 + 0x2e;
        psVar17[0x2c] = (short)(iVar27 + iVar15 + 0x30);
        psVar17[0x2d] = sVar2;
        psVar17[0x2e] = sVar43 + sVar2 + 0x2e;
        psVar17[0x2f] = (short)(iVar28 + iVar15 + 0x30);
        uVar30 = CONCAT44(iVar37 + 0x20,(int)uVar30 + 0x20);
        uVar38 = CONCAT44(iVar39 + 0x20,(int)uVar38 + 0x20);
        uVar5 = CONCAT44(iVar35 + 0x20,(int)uVar5 + 0x20);
        uVar24 = CONCAT44(iVar36 + 0x20,(int)uVar24 + 0x20);
        uVar7 = uVar7 - 0x20;
        psVar17 = psVar17 + 0x60;
      } while (uVar7 != 0);
      if (uVar16 != uVar3) goto LAB_00321c8c;
    }
    *(short **)(param_1 + 0x48) = psVar8;
    lVar20 = *(long *)(param_1 + 0x38);
/* wm:unlicensed copy if this notice is missing */
    if (*(int *)(lVar20 + 0x4c) < (int)uVar6) {
      if (*(long *)(lVar20 + 0x50) != 0) {
        func_0x002fda6c();
      }
      uVar5 = func_0x002fd6d8((param_3 & 0xffffffff) << 3);
      *(undefined8 *)(lVar20 + 0x50) = uVar5;
      *(uint *)(lVar20 + 0x4c) = uVar6;
      lVar20 = *(long *)(param_1 + 0x38);
    }
    lVar20 = *(long *)(lVar20 + 0x50);
    uVar7 = 0;
    uVar16 = (ulong)(uVar6 - 1);
    do {
      uVar14 = uVar7;
      uVar5 = *(undefined8 *)(param_2 + uVar14 * 8);
      uVar24 = *(undefined8 *)(param_2 + (long)(int)uVar16 * 8);
      fVar21 = (float)uVar5 - (float)uVar24;
      fVar22 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar24 >> 0x20);
      fVar23 = fVar22 * fVar22 + fVar21 * fVar21;
      if (0.0 < fVar23) {
        fVar23 = 1.0 / SQRT(fVar23);
        fVar21 = fVar21 * fVar23;
        fVar22 = fVar22 * fVar23;
      }
      pfVar1 = (float *)(lVar20 + (long)(int)uVar16 * 8);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      *pfVar1 = fVar22;
      pfVar1[1] = -fVar21;
      lVar13 = _UNK_01adfab8;
      lVar9 = _UNK_01adfab0;
      uVar7 = uVar14 + 1;
      uVar16 = uVar14;
    } while ((param_3 & 0xffffffff) != uVar14 + 1);
    fVar34 = fVar34 * 0.5;
    uVar7 = (ulong)(uVar6 - 1);
    uVar16 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar20 + (long)(int)uVar7 * 8);
      uVar24 = *(undefined8 *)(lVar20 + uVar16 * 8);
      fVar21 = ((float)uVar5 + (float)uVar24) * 0.5;
      fVar22 = ((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar24 >> 0x20)) * 0.5;
      fVar23 = fVar22 * fVar22 + fVar21 * fVar21;
      if (1e-06 < fVar23) {
        fVar23 = 1.0 / fVar23;
        fVar33 = 100.0;
        if (fVar23 <= 100.0) {
          fVar33 = fVar23;
        }
        fVar21 = fVar21 * fVar33;
        fVar22 = fVar22 * fVar33;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      }
      fVar21 = fVar21 * fVar34;
      fVar22 = fVar22 * fVar34;
      puVar12 = *(undefined8 **)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(param_2 + uVar16 * 8);
      *puVar12 = CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar22,(float)uVar5 - fVar21);
      puVar12[1] = uVar19;
      lVar18 = *(long *)(param_1 + 0x40);
      *(uint *)(lVar18 + 0x10) = param_4;
      uVar5 = *(undefined8 *)(param_2 + uVar16 * 8);
      *(ulong *)(lVar18 + 0x14) =
           CONCAT44(fVar22 + (float)((ulong)uVar5 >> 0x20),fVar21 + (float)uVar5);
      *(undefined8 *)(lVar18 + 0x1c) = uVar19;
      sVar40 = (short)uVar7 * 2;
      sVar42 = sVar40 + sVar2 + 1;
      sVar41 = (short)iVar15;
      psVar17 = *(short **)(param_1 + 0x48);
      lVar32 = *(long *)(param_1 + 0x48);
      lVar18 = *(long *)(param_1 + 0x40);
      *(uint *)(lVar18 + 0x24) = param_4 & 0xffffff;
      *psVar17 = sVar41;
      psVar17[1] = sVar40 + sVar2;
      psVar17[2] = sVar42;
      psVar17[3] = sVar42;
      psVar17[4] = sVar41 + 1;
      psVar17[5] = sVar41;
      *(long *)(param_1 + 0x48) = lVar32 + lVar13;
      *(long *)(param_1 + 0x40) = lVar18 + lVar9;
      uVar14 = uVar16 + 1;
      iVar15 = iVar15 + 2;
      uVar7 = uVar16;
      uVar16 = uVar14;
    } while ((param_3 & 0xffffffff) != uVar14);
    iVar15 = *(int *)(param_1 + 0x34) + (uVar6 << 1 & 0xfffe);
    goto LAB_00321f70;
// do not claim this as your own
  }
  func_0x00320fe8(param_1,uVar6 * 3 + -6,param_3);
  puVar12 = *(undefined8 **)(param_1 + 0x40);
  uVar16 = (param_3 & 0xffffffff) - 1;
  uVar7 = uVar16 % 3;
  lVar20 = 0;
  if (uVar7 != 2) {
    lVar20 = uVar7 + 1;
  }
  if (uVar16 < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar10 = (undefined8 *)(param_2 + 0x10);
    do {
// no support for modified copies
      *puVar12 = puVar10[-2];
      *(undefined8 *)(*(long *)(param_1 + 0x40) + 8) = uVar19;
      lVar13 = *(long *)(param_1 + 0x40);
      *(uint *)(lVar13 + 0x10) = param_4;
      *(long *)(param_1 + 0x40) = lVar13 + 0x14;
      *(undefined8 *)(lVar13 + 0x14) = puVar10[-1];
      *(undefined8 *)(*(long *)(param_1 + 0x40) + 8) = uVar19;
      lVar13 = *(long *)(param_1 + 0x40);
      *(uint *)(lVar13 + 0x10) = param_4;
      *(long *)(param_1 + 0x40) = lVar13 + 0x14;
      *(undefined8 *)(lVar13 + 0x14) = *puVar10;
      *(undefined8 *)(*(long *)(param_1 + 0x40) + 8) = uVar19;
      lVar13 = *(long *)(param_1 + 0x40);
      *(uint *)(lVar13 + 0x10) = param_4;
      puVar12 = (undefined8 *)(lVar13 + 0x14);
      *(undefined8 **)(param_1 + 0x40) = puVar12;
      lVar9 = lVar9 + 3;
      puVar10 = puVar10 + 3;
    } while ((param_3 & 0xffffffff) - lVar20 != lVar9);
  }
  if (uVar7 != 2) {
    puVar10 = (undefined8 *)(param_2 + lVar9 * 8);
    do {
      *puVar12 = *puVar10;
      *(undefined8 *)(*(long *)(param_1 + 0x40) + 8) = uVar19;
      lVar9 = *(long *)(param_1 + 0x40);
      *(uint *)(lVar9 + 0x10) = param_4;
      puVar12 = (undefined8 *)(lVar9 + 0x14);
      *(undefined8 **)(param_1 + 0x40) = puVar12;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      lVar20 = lVar20 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar20 != 0);
  }
  iVar15 = *(int *)(param_1 + 0x34);
  psVar17 = *(short **)(param_1 + 0x48);
  uVar3 = uVar6 - 2;
  sVar2 = (short)iVar15;
  if (uVar3 < 0x20) {
    uVar11 = 2;
    psVar8 = psVar17;
LAB_00321f40:
    iVar26 = uVar6 - uVar11;
    iVar25 = uVar11 + iVar15;
    do {
      *psVar8 = sVar2;
      psVar8[1] = (short)iVar25 + -1;
      psVar8[2] = (short)iVar25;
      psVar8 = psVar8 + 3;
/* wm:found on a paste site? it was re-uploaded illegally */
      iVar25 = iVar25 + 1;
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
  }
  else {
    uVar16 = (ulong)uVar3 & 0x7fffffe0;
    psVar8 = psVar17 + uVar16 * 3;
    uVar11 = (uint)uVar16 | 2;
    psVar17 = psVar17 + 0x30;
    uVar7 = uVar16;
    uVar19 = _UNK_01adfa90;
    uVar5 = _UNK_01adfa98;
    uVar24 = _UNK_01adfaa0;
    uVar30 = _UNK_01adfaa8;
    do {
      sVar42 = (short)uVar24;
      iVar28 = (int)((ulong)uVar24 >> 0x20);
      sVar41 = (short)(iVar15 + iVar28);
      iVar29 = (int)uVar30;
      sVar43 = (short)(iVar15 + iVar29);
      iVar31 = (int)((ulong)uVar30 >> 0x20);
      sVar44 = (short)(iVar15 + iVar31);
      sVar40 = (short)uVar19;
// thanks for reading - discord.gg/sdkhDjTex
      iVar25 = (int)((ulong)uVar19 >> 0x20);
      sVar45 = (short)(iVar15 + iVar25);
      iVar26 = (int)uVar5;
      sVar46 = (short)(iVar15 + iVar26);
      iVar27 = (int)((ulong)uVar5 >> 0x20);
      sVar47 = (short)(iVar15 + iVar27);
      sVar48 = sVar42 + sVar2 + 8;
      sVar49 = (short)(iVar28 + iVar15 + 8);
      sVar50 = (short)(iVar29 + iVar15 + 8);
      sVar51 = (short)(iVar31 + iVar15 + 8);
      sVar52 = sVar40 + sVar2 + 8;
      sVar53 = (short)(iVar25 + iVar15 + 8);
      sVar54 = (short)(iVar26 + iVar15 + 8);
      sVar55 = (short)(iVar27 + iVar15 + 8);
      sVar56 = sVar42 + sVar2 + 0x10;
      sVar57 = (short)(iVar28 + iVar15 + 0x10);
      sVar58 = (short)(iVar29 + iVar15 + 0x10);
      sVar59 = (short)(iVar31 + iVar15 + 0x10);
      sVar60 = sVar40 + sVar2 + 0x10;
      sVar61 = (short)(iVar25 + iVar15 + 0x10);
      sVar62 = (short)(iVar26 + iVar15 + 0x10);
      sVar63 = (short)(iVar27 + iVar15 + 0x10);
      sVar64 = sVar42 + sVar2 + 0x18;
      sVar65 = (short)(iVar28 + iVar15 + 0x18);
      sVar66 = (short)(iVar29 + iVar15 + 0x18);
      sVar67 = (short)(iVar31 + iVar15 + 0x18);
      psVar17[-0x30] = sVar2;
      psVar17[-0x2f] = sVar2 + sVar42 + -1;
      psVar17[-0x2e] = sVar2 + sVar42;
/* if you paid for this, you were scammed */
      psVar17[-0x2d] = sVar2;
      psVar17[-0x2c] = sVar41 + -1;
      psVar17[-0x2b] = sVar41;
      psVar17[-0x2a] = sVar2;
      psVar17[-0x29] = sVar43 + -1;
      psVar17[-0x28] = sVar43;
      psVar17[-0x27] = sVar2;
      psVar17[-0x26] = sVar44 + -1;
      psVar17[-0x25] = sVar44;
      psVar17[-0x24] = sVar2;
      psVar17[-0x23] = sVar2 + sVar40 + -1;
      psVar17[-0x22] = sVar2 + sVar40;
      psVar17[-0x21] = sVar2;
      psVar17[-0x20] = sVar45 + -1;
      psVar17[-0x1f] = sVar45;
      psVar17[-0x1e] = sVar2;
      psVar17[-0x1d] = sVar46 + -1;
      psVar17[-0x1c] = sVar46;
      psVar17[-0x1b] = sVar2;
      psVar17[-0x1a] = sVar47 + -1;
      psVar17[-0x19] = sVar47;
      sVar40 = sVar40 + sVar2 + 0x18;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      sVar42 = (short)(iVar25 + iVar15 + 0x18);
      sVar41 = (short)(iVar26 + iVar15 + 0x18);
      sVar43 = (short)(iVar27 + iVar15 + 0x18);
      psVar17[-0x18] = sVar2;
      psVar17[-0x17] = sVar48 + -1;
      psVar17[-0x16] = sVar48;
      psVar17[-0x15] = sVar2;
      psVar17[-0x14] = sVar49 + -1;
      psVar17[-0x13] = sVar49;
      psVar17[-0x12] = sVar2;
      psVar17[-0x11] = sVar50 + -1;
      psVar17[-0x10] = sVar50;
      psVar17[-0xf] = sVar2;
      psVar17[-0xe] = sVar51 + -1;
      psVar17[-0xd] = sVar51;
      psVar17[-0xc] = sVar2;
      psVar17[-0xb] = sVar52 + -1;
      psVar17[-10] = sVar52;
      psVar17[-9] = sVar2;
      psVar17[-8] = sVar53 + -1;
      psVar17[-7] = sVar53;
      psVar17[-6] = sVar2;
      psVar17[-5] = sVar54 + -1;
      psVar17[-4] = sVar54;
      psVar17[-3] = sVar2;
      psVar17[-2] = sVar55 + -1;
      psVar17[-1] = sVar55;
      *psVar17 = sVar2;
      psVar17[1] = sVar56 + -1;
      psVar17[2] = sVar56;
      psVar17[3] = sVar2;
      psVar17[4] = sVar57 + -1;
      psVar17[5] = sVar57;
      psVar17[6] = sVar2;
      psVar17[7] = sVar58 + -1;
// WM - proprietary - see LICENSE - do not sell
      psVar17[8] = sVar58;
      psVar17[9] = sVar2;
      psVar17[10] = sVar59 + -1;
      psVar17[0xb] = sVar59;
      psVar17[0xc] = sVar2;
      psVar17[0xd] = sVar60 + -1;
      psVar17[0xe] = sVar60;
      psVar17[0xf] = sVar2;
      psVar17[0x10] = sVar61 + -1;
      psVar17[0x11] = sVar61;
      psVar17[0x12] = sVar2;
      psVar17[0x13] = sVar62 + -1;
      psVar17[0x14] = sVar62;
      psVar17[0x15] = sVar2;
      psVar17[0x16] = sVar63 + -1;
      psVar17[0x17] = sVar63;
      psVar17[0x18] = sVar2;
      psVar17[0x19] = sVar64 + -1;
      psVar17[0x1a] = sVar64;
      psVar17[0x1b] = sVar2;
      psVar17[0x1c] = sVar65 + -1;
      psVar17[0x1d] = sVar65;
      psVar17[0x1e] = sVar2;
      psVar17[0x1f] = sVar66 + -1;
      psVar17[0x20] = sVar66;
      psVar17[0x21] = sVar2;
      psVar17[0x22] = sVar67 + -1;
      psVar17[0x23] = sVar67;
      psVar17[0x24] = sVar2;
      psVar17[0x25] = sVar40 + -1;
/* origin: github.com/pengussy */
      psVar17[0x26] = sVar40;
      psVar17[0x27] = sVar2;
      psVar17[0x28] = sVar42 + -1;
      psVar17[0x29] = sVar42;
      psVar17[0x2a] = sVar2;
      psVar17[0x2b] = sVar41 + -1;
      psVar17[0x2c] = sVar41;
      psVar17[0x2d] = sVar2;
      psVar17[0x2e] = sVar43 + -1;
      psVar17[0x2f] = sVar43;
      uVar24 = CONCAT44(iVar28 + 0x20,(int)uVar24 + 0x20);
      uVar30 = CONCAT44(iVar31 + 0x20,iVar29 + 0x20);
      uVar19 = CONCAT44(iVar25 + 0x20,(int)uVar19 + 0x20);
      uVar5 = CONCAT44(iVar27 + 0x20,iVar26 + 0x20);
      uVar7 = uVar7 - 0x20;
      psVar17 = psVar17 + 0x60;
    } while (uVar7 != 0);
    if (uVar16 != uVar3) goto LAB_00321f40;
  }
  *(short **)(param_1 + 0x48) = psVar8;
  iVar15 = iVar15 + (uVar6 & 0xffff);
LAB_00321f70:
  *(int *)(param_1 + 0x34) = iVar15;
  return;
}

