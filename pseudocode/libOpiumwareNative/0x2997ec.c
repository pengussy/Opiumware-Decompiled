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
 *  file-id: 0x2997ec:f08a8e51e2
 *  --------------------------------------------------------------------------*/

ulong FUN_002997ec(undefined1 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  char cVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  ushort *puVar16;
  long lVar17;
  ushort *puVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  byte bVar23;
  char cVar24;
  char cVar25;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  char cVar26;
  undefined8 uVar19;
  char cVar27;
  byte bVar28;
  char cVar30;
  byte bVar31;
  char cVar32;
  char cVar33;
  byte bVar34;
  char cVar35;
  char cVar36;
  byte bVar37;
  char cVar38;
  undefined8 uVar29;
  char cVar39;
  byte bVar40;
  byte bVar42;
  undefined4 uVar41;
  byte bVar43;
  undefined1 auVar44 [12];
  undefined8 uStack_1b0;
  ushort auStack_1a8 [16];
  ushort auStack_188 [14];
/* wm:reversing this took months of machine time */
  int iStack_16c;
  int aiStack_168 [12];
  byte abStack_138 [8];
  undefined8 auStack_130 [31];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_1b0 = 0;
  uVar4 = func_0x00296360(abStack_138,0x100,&iStack_16c,&uStack_1b0,(long)&uStack_1b0 + 4,param_3,
                          param_4);
  if (0xffffffffffffff88 < uVar4) goto LAB_00299d3c;
  *param_5 = (uint)(iStack_16c != 0);
  uVar6 = (ulong)uStack_1b0._4_4_;
  if (0xc < uStack_1b0._4_4_) {
    uVar4 = 0xffffffffffffffd4;
    goto LAB_00299d3c;
  }
  uVar5 = uStack_1b0 & 0xffffffff;
  if (*param_2 + 1U < (uint)uStack_1b0) {
    uVar4 = 0xffffffffffffffd0;
    goto LAB_00299d3c;
  }
  *param_2 = (uint)uStack_1b0 - 1;
  *param_1 = (char)(uStack_1b0 >> 0x20);
  param_1[1] = (char)((uint)uStack_1b0 - 1);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  if (uStack_1b0._4_4_ != 0) {
    uVar7 = 0;
    iVar12 = 0;
    do {
      iVar1 = aiStack_168[uVar7];
      aiStack_168[uVar7] = iVar12;
      iVar12 = (iVar1 << (ulong)((uint)uVar7 & 0x1f)) + iVar12;
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
/* wm:keep the notice, keep the source honest */
  }
  if ((uint)uStack_1b0 == 0) {
    auStack_188[0] = 0;
    auStack_188[1] = 0;
    auStack_188[2] = 0;
    auStack_188[3] = 0;
    auStack_188[4] = 0;
    auStack_188[5] = 0;
    auStack_188[6] = 0;
    auStack_188[7] = 0;
    auStack_188[0xc] = 0;
    auStack_188[0xd] = 0;
    auStack_188[8] = 0;
    auStack_188[9] = 0;
    auStack_188[10] = 0;
    auStack_188[0xb] = 0;
    auStack_1a8[0] = 0;
    auStack_1a8[1] = 0;
    auStack_1a8[2] = 0;
    auStack_1a8[3] = 0;
    auStack_1a8[4] = 0;
    auStack_1a8[5] = 0;
    auStack_1a8[6] = 0;
    auStack_1a8[7] = 0;
// donate: donate/README.md
    auStack_1a8[0xc] = 0;
    auStack_1a8[0xd] = 0;
    auStack_1a8[8] = 0;
    auStack_1a8[9] = 0;
    auStack_1a8[10] = 0;
    auStack_1a8[0xb] = 0;
  }
  else {
    iVar12 = uStack_1b0._4_4_ + 1;
    if ((uint)uStack_1b0 < 4) {
      uVar13 = 0;
LAB_002999fc:
      puVar8 = (ulong *)(param_1 + uVar13 * 8);
      lVar14 = uVar5 - uVar13;
      pbVar15 = abStack_138 + uVar13;
      do {
        puVar8 = puVar8 + 1;
        uVar11 = 0;
        if (*pbVar15 != 0) {
          uVar11 = iVar12 - (uint)*pbVar15;
        }
        *puVar8 = (ulong)uVar11 & 0xff;
        lVar14 = lVar14 + -1;
        pbVar15 = pbVar15 + 1;
      } while (lVar14 != 0);
    }
    else if ((uint)uStack_1b0 < 0x10) {
      uVar7 = 0;
LAB_0029999c:
      uVar13 = uStack_1b0 & 0xfffffffc;
      sVar10 = (short)iVar12;
/* WM - keep the notice, keep the source honest */
      lVar14 = uVar7 - uVar13;
      puVar8 = (ulong *)(param_1 + uVar7 * 8 + 8);
      pbVar15 = abStack_138 + uVar7;
      do {
        uVar41 = *(undefined4 *)pbVar15;
        bVar42 = (byte)((uint)uVar41 >> 8);
        bVar23 = (byte)((uint)uVar41 >> 0x10);
        bVar43 = (byte)((uint)uVar41 >> 0x18);
        bVar42 = (byte)(sVar10 - (ushort)bVar42) & ~-(bVar42 == 0);
        bVar43 = (byte)(sVar10 - (ushort)bVar43) & ~-(bVar43 == 0);
        puVar8[1] = (ulong)bVar42;
        *puVar8 = (ulong)((uint6)CONCAT14(bVar42,(uint)CONCAT12(bVar42,(ushort)(byte)((byte)(sVar10 
                                                  - (ushort)(byte)uVar41) & ~-((byte)uVar41 == 0))))
                         & 0xffff0000ffff) & 0xff;
        puVar8[3] = (ulong)bVar43;
        puVar8[2] = (ulong)CONCAT14(bVar43,(uint)(byte)((byte)(sVar10 - (ushort)bVar23) &
                                                       ~-(bVar23 == 0))) & 0xff;
        lVar14 = lVar14 + 4;
        puVar8 = puVar8 + 4;
        pbVar15 = pbVar15 + 4;
      } while (lVar14 != 0);
      if (uVar13 != uVar5) goto LAB_002999fc;
    }
    else {
      uVar13 = uStack_1b0 & 0xfffffff0;
      cVar9 = (char)iVar12;
      pbVar15 = abStack_138;
      puVar8 = (ulong *)(param_1 + 8);
      uVar7 = uVar13;
/*  stripping the watermark breaks the license  */
      do {
        uVar29 = *(undefined8 *)(pbVar15 + 8);
        uVar19 = *(undefined8 *)pbVar15;
        cVar20 = (char)((ulong)uVar19 >> 8);
        cVar21 = (char)((ulong)uVar19 >> 0x10);
        cVar22 = (char)((ulong)uVar19 >> 0x18);
        cVar24 = (char)((ulong)uVar19 >> 0x20);
        cVar25 = (char)((ulong)uVar19 >> 0x28);
        cVar26 = (char)((ulong)uVar19 >> 0x30);
        cVar27 = (char)((ulong)uVar19 >> 0x38);
        cVar30 = (char)((ulong)uVar29 >> 8);
        cVar32 = (char)((ulong)uVar29 >> 0x10);
        cVar33 = (char)((ulong)uVar29 >> 0x18);
        cVar35 = (char)((ulong)uVar29 >> 0x20);
        cVar36 = (char)((ulong)uVar29 >> 0x28);
        cVar38 = (char)((ulong)uVar29 >> 0x30);
        cVar39 = (char)((ulong)uVar29 >> 0x38);
        bVar42 = cVar9 - cVar20 & ~-(cVar20 == '\0');
        bVar23 = cVar9 - cVar22 & ~-(cVar22 == '\0');
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        bVar43 = cVar9 - cVar25 & ~-(cVar25 == '\0');
        bVar28 = cVar9 - cVar27 & ~-(cVar27 == '\0');
        bVar31 = cVar9 - cVar30 & ~-(cVar30 == '\0');
        bVar34 = cVar9 - cVar33 & ~-(cVar33 == '\0');
        bVar37 = cVar9 - cVar36 & ~-(cVar36 == '\0');
        bVar40 = cVar9 - cVar39 & ~-(cVar39 == '\0');
        puVar8[0xd] = (ulong)bVar37;
        puVar8[0xc] = (ulong)((uint6)CONCAT14(bVar37,(uint)CONCAT12(bVar37,(ushort)(byte)(cVar9 - 
                                                  cVar35 & ~-(cVar35 == '\0')))) & 0xffff0000ffff) &
                      0xffffffff;
        puVar8[0xf] = (ulong)bVar40;
        puVar8[0xe] = (ulong)CONCAT14(bVar40,(uint)(byte)(cVar9 - cVar38 & ~-(cVar38 == '\0'))) &
                      0xffffffff;
        puVar8[9] = (ulong)bVar31;
        puVar8[8] = (ulong)((uint6)CONCAT14(bVar31,(uint)CONCAT12(bVar31,(ushort)(byte)(cVar9 - (
                                                  char)uVar29 & ~-((char)uVar29 == '\0')))) &
                           0xffff0000ffff) & 0xffffffff;
        puVar8[0xb] = (ulong)bVar34;
        puVar8[10] = (ulong)CONCAT14(bVar34,(uint)(byte)(cVar9 - cVar32 & ~-(cVar32 == '\0'))) &
                     0xffffffff;
        puVar8[5] = (ulong)bVar43;
        puVar8[4] = (ulong)((uint6)CONCAT14(bVar43,(uint)CONCAT12(bVar43,(ushort)(byte)(cVar9 - 
                                                  cVar24 & ~-(cVar24 == '\0')))) & 0xffff0000ffff) &
                    0xffffffff;
        puVar8[7] = (ulong)bVar28;
        puVar8[6] = (ulong)CONCAT14(bVar28,(uint)(byte)(cVar9 - cVar26 & ~-(cVar26 == '\0'))) &
                    0xffffffff;
        puVar8[1] = (ulong)bVar42;
        *puVar8 = (ulong)((uint6)CONCAT14(bVar42,(uint)CONCAT12(bVar42,(ushort)(byte)(cVar9 - (char)
                                                  uVar19 & ~-((char)uVar19 == '\0')))) &
                         0xffff0000ffff) & 0xffffffff;
        puVar8[3] = (ulong)bVar23;
        puVar8[2] = (ulong)CONCAT14(bVar23,(uint)(byte)(cVar9 - cVar21 & ~-(cVar21 == '\0'))) &
                    0xffffffff;
        uVar7 = uVar7 - 0x10;
        pbVar15 = pbVar15 + 0x10;
/* wm:more drops soon - github.com/pengussy */
        puVar8 = puVar8 + 0x10;
      } while (uVar7 != 0);
      if (uVar13 != uVar5) {
        uVar7 = uVar13;
        if ((uStack_1b0 & 0xc) == 0) goto LAB_002999fc;
        goto LAB_0029999c;
      }
    }
    lVar17 = 0;
    uVar7 = (uVar5 - 1) % 6;
    auStack_188[0] = 0;
    auStack_188[1] = 0;
    auStack_188[2] = 0;
    auStack_188[3] = 0;
    auStack_188[4] = 0;
    auStack_188[5] = 0;
    auStack_188[6] = 0;
    auStack_188[7] = 0;
    auStack_188[0xc] = 0;
    auStack_188[0xd] = 0;
/* stripping the watermark breaks the license */
    auStack_188[8] = 0;
    auStack_188[9] = 0;
    auStack_188[10] = 0;
    auStack_188[0xb] = 0;
    auStack_1a8[0] = 0;
    auStack_1a8[1] = 0;
    auStack_1a8[2] = 0;
    auStack_1a8[3] = 0;
    auStack_1a8[4] = 0;
    auStack_1a8[5] = 0;
    auStack_1a8[6] = 0;
    auStack_1a8[7] = 0;
    auStack_1a8[0xc] = 0;
    auStack_1a8[0xd] = 0;
    auStack_1a8[8] = 0;
    auStack_1a8[9] = 0;
    auStack_1a8[10] = 0;
    auStack_1a8[0xb] = 0;
    lVar14 = 0;
    if (uVar7 != 5) {
      lVar14 = uVar7 + 1;
    }
    if (5 < (uint)uStack_1b0) {
      lVar17 = 0;
      pbVar15 = param_1 + 0x18;
      do {
        auStack_188[pbVar15[-0x10]] = auStack_188[pbVar15[-0x10]] + 1;
        auStack_188[pbVar15[-8]] = auStack_188[pbVar15[-8]] + 1;
        auStack_188[*pbVar15] = auStack_188[*pbVar15] + 1;
        auStack_188[pbVar15[8]] = auStack_188[pbVar15[8]] + 1;
        auStack_188[pbVar15[0x10]] = auStack_188[pbVar15[0x10]] + 1;
        auStack_188[pbVar15[0x18]] = auStack_188[pbVar15[0x18]] + 1;
/* thanks for reading - discord.gg/sdkhDjTex */
        lVar17 = lVar17 + -6;
        pbVar15 = pbVar15 + 0x30;
      } while (lVar14 - uVar5 != lVar17);
      lVar17 = -lVar17;
    }
    if (uVar7 != 5) {
      pbVar15 = param_1 + lVar17 * 8;
      do {
        pbVar15 = pbVar15 + 8;
        auStack_188[*pbVar15] = auStack_188[*pbVar15] + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  auStack_1a8[0xc] = 0;
  auStack_1a8[0xd] = 0;
  auStack_1a8[8] = 0;
  auStack_1a8[9] = 0;
  auStack_1a8[10] = 0;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  auStack_1a8[0xb] = 0;
  auStack_1a8[4] = 0;
  auStack_1a8[5] = 0;
  auStack_1a8[6] = 0;
  auStack_1a8[7] = 0;
  auStack_1a8[0] = 0;
  auStack_1a8[1] = 0;
  auStack_1a8[2] = 0;
  auStack_1a8[3] = 0;
  auStack_1a8[uVar6 + 1] = 0;
  if (uStack_1b0._4_4_ != 0) {
    uVar11 = 0;
    puVar16 = auStack_1a8 + uVar6;
    puVar18 = auStack_188 + uVar6;
    do {
      *puVar16 = (ushort)uVar11;
      uVar11 = *puVar18 + uVar11 >> 1 & 0x7fff;
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
/* unlicensed copy if this notice is missing */
      puVar16 = puVar16 + -1;
      puVar18 = puVar18 + -1;
    } while (uVar3 != 0);
  }
  if ((uint)uStack_1b0 != 0) {
    uVar6 = uStack_1b0 & 7;
    if ((uint)uStack_1b0 < 8) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uVar7 = puVar8[-3];
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
          puVar8[-3] = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        uVar7 = puVar8[-2];
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
          puVar8[-2] = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        uVar7 = puVar8[-1];
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          puVar8[-1] = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        uVar7 = *puVar8;
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
          *puVar8 = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        uVar7 = puVar8[1];
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
          puVar8[1] = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        uVar7 = puVar8[2];
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
          puVar8[2] = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
/* more drops soon - github.com/pengussy - github.com/pengussy */
        uVar7 = puVar8[3];
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
          puVar8[3] = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        uVar7 = puVar8[4];
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
        if (uVar5 != 0) {
          puVar8[4] = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        lVar14 = lVar14 + -8;
        puVar8 = puVar8 + 8;
      } while (-lVar14 != (uStack_1b0 & 0xfffffff8));
      lVar14 = -lVar14;
    }
    if ((uStack_1b0 & 7) != 0) {
      puVar8 = (ulong *)(param_1 + lVar14 * 8);
      do {
        puVar8 = puVar8 + 1;
        uVar7 = *puVar8;
        uVar5 = uVar7 & 0xff;
        uVar2 = auStack_1a8[uVar5];
        auStack_1a8[uVar5] = uVar2 + 1;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        if (uVar5 != 0) {
          *puVar8 = (ulong)uVar2 << (-uVar5 & 0x3f) | uVar7;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
LAB_00299d3c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar4;
  }
  auVar44 = ___stack_chk_fail(uVar4);
  if ((uint)*(byte *)(auVar44._0_8_ + 1) < auVar44._8_4_) {
    return 0;
  }
  return (ulong)*(byte *)(auVar44._0_8_ + (ulong)auVar44._8_4_ * 8 + 8);
}

