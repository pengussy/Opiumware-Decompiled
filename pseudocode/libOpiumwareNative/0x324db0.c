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
 *  file-id: 0x324db0:b933ad38d7
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0032517c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00324c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00325180) */
/* WARNING: Removing unreachable block (ram,0x003251c4) */
/* WARNING: Removing unreachable block (ram,0x00325224) */
/* WARNING: Removing unreachable block (ram,0x00325258) */
/* WARNING: Removing unreachable block (ram,0x00325264) */
/* WARNING: Removing unreachable block (ram,0x00325280) */
/* WARNING: Removing unreachable block (ram,0x00325284) */
/* WARNING: Removing unreachable block (ram,0x0032528c) */
/* WARNING: Removing unreachable block (ram,0x00325290) */
/* WARNING: Removing unreachable block (ram,0x00325294) */
/* WARNING: Removing unreachable block (ram,0x00325298) */
/* WARNING: Removing unreachable block (ram,0x003252a4) */
/* WARNING: Removing unreachable block (ram,0x003252f8) */
/* WARNING: Removing unreachable block (ram,0x00325394) */
/* WARNING: Removing unreachable block (ram,0x00325398) */
/* WARNING: Removing unreachable block (ram,0x003253d0) */
/* WARNING: Removing unreachable block (ram,0x003253f4) */
/* WARNING: Removing unreachable block (ram,0x003253e0) */
// donate: donate/README.md
/* WARNING: Removing unreachable block (ram,0x003253f8) */
/* WARNING: Removing unreachable block (ram,0x00324c90) */
/* WARNING: Removing unreachable block (ram,0x00324d80) */
/* WARNING: Removing unreachable block (ram,0x00324d6c) */
/* WARNING: Removing unreachable block (ram,0x00324d84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00324db0(float param_1,int *param_2,ulong param_3,ulong param_4,ulong *param_5,
                 ulong *param_6,ulong *param_7,ulong *param_8,ulong *param_9,uint param_10)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong *puVar21;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  long lVar22;
  float *pfVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulong uStack_90;
  ulong *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  uVar18 = (uint)param_9;
  puVar17 = &uStack_90;
  if (uVar18 >> 0x18 == 0) {
    return;
  }
  uVar4 = param_10 | 0xf0;
  if ((param_10 & 0x1f0) != 0) {
    uVar4 = param_10;
  }
  if ((param_1 < 0.5) || ((uVar4 & 0x1f0) == 0x100)) {
    puVar17 = (ulong *)auStack_80;
    if (uVar18 >> 0x18 == 0) {
      return;
    }
    if (param_4 == *(ulong *)(param_2 + 0x1e) && *(ulong *)(param_2 + 0x1c) == param_3) {
      func_0x00320fe8(param_2,6,4);
      uVar32 = *param_5;
      iVar43 = *(int *)((long)param_5 + 4);
      uVar36 = *param_6;
      uVar7 = *(undefined4 *)((long)param_6 + 4);
      uVar40 = *param_7;
      iVar10 = *(int *)((long)param_7 + 4);
      sVar11 = (short)param_2[0xd];
      puVar21 = *(ulong **)(param_2 + 0x10);
      psVar9 = *(short **)(param_2 + 0x12);
      psVar9[1] = sVar11 + 1;
      psVar9[2] = sVar11 + 2;
// WM - more drops soon - github.com/pengussy
      psVar9[4] = sVar11 + 2;
      uVar24 = *param_8;
      uVar8 = *(undefined4 *)((long)param_8 + 4);
      *psVar9 = sVar11;
      psVar9[3] = sVar11;
      psVar9[5] = sVar11 + 3;
      *puVar21 = *param_5;
      *(ulong *)(*(long *)(param_2 + 0x10) + 8) = *param_7;
      lVar27 = *(long *)(param_2 + 0x10);
      *(uint *)(lVar27 + 0x10) = uVar18;
      *(int *)(lVar27 + 0x14) = (int)uVar36;
      *(int *)(lVar27 + 0x18) = iVar43;
      lVar27 = *(long *)(param_2 + 0x10);
      *(int *)(lVar27 + 0x1c) = (int)uVar24;
      *(int *)(lVar27 + 0x20) = iVar10;
      lVar27 = *(long *)(param_2 + 0x10);
      *(uint *)(lVar27 + 0x24) = uVar18;
      *(ulong *)(lVar27 + 0x28) = *param_6;
      *(ulong *)(*(long *)(param_2 + 0x10) + 0x30) = *param_8;
      lVar27 = *(long *)(param_2 + 0x10);
      *(uint *)(lVar27 + 0x38) = uVar18;
      *(int *)(lVar27 + 0x3c) = (int)uVar32;
      *(undefined4 *)(lVar27 + 0x40) = uVar7;
      lVar27 = *(long *)(param_2 + 0x10);
      *(int *)(lVar27 + 0x44) = (int)uVar40;
      *(undefined4 *)(lVar27 + 0x48) = uVar8;
      param_2[0xd] = param_2[0xd] + 4;
      lVar27 = *(long *)(param_2 + 0x10) + _UNK_01adfa80;
      lVar20 = *(long *)(param_2 + 0x12) + _UNK_01adfa88;
      *(uint *)(*(long *)(param_2 + 0x10) + 0x4c) = uVar18;
      *(long *)(param_2 + 0x12) = lVar20;
      *(long *)(param_2 + 0x10) = lVar27;
      return;
    }
    iVar43 = param_2[0x2c];
    if (iVar43 == param_2[0x2d]) {
/*  unlicensed copy if this notice is missing  */
      if (iVar43 == 0) {
        uVar18 = 8;
      }
      else {
        uVar18 = iVar43 + iVar43 / 2;
      }
      if ((int)uVar18 <= (int)(iVar43 + 1U)) {
        uVar18 = iVar43 + 1U;
      }
      uStack_78 = param_3;
      lVar27 = func_0x002fd6d8(-(ulong)(uVar18 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar18 << 4);
      if (*(long *)(param_2 + 0x2e) != 0) {
        _memcpy(lVar27,*(long *)(param_2 + 0x2e),(long)param_2[0x2c] << 4);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x2e));
      }
      *(long *)(param_2 + 0x2e) = lVar27;
      param_2[0x2d] = uVar18;
      iVar43 = param_2[0x2c];
      param_3 = uStack_78;
    }
    else {
// WM - origin: github.com/pengussy
      lVar27 = *(long *)(param_2 + 0x2e);
    }
    puVar21 = (ulong *)(lVar27 + (long)iVar43 * 0x10);
    *puVar21 = param_3;
    puVar21[1] = param_4;
    param_2[0x2c] = param_2[0x2c] + 1;
    *(ulong *)(param_2 + 0x1c) = param_3;
    *(ulong *)(param_2 + 0x1e) = param_4;
    puVar28 = &UNK_00324c90;
    puVar21 = param_9;
  }
  else {
    if (param_4 == *(ulong *)(param_2 + 0x1e) && *(ulong *)(param_2 + 0x1c) == param_3) {
      iVar43 = param_2[8];
      lVar27 = (long)iVar43;
      func_0x00322b38(param_2,param_5,param_6,(ulong *)(ulong)uVar4);
      func_0x003219c4(param_2,*(undefined8 *)(param_2 + 0x16),param_2[0x14],param_9);
      param_2[0x14] = 0;
      iVar10 = param_2[8];
      if (iVar10 <= iVar43) {
        return;
      }
      lVar20 = *(long *)(param_2 + 10);
      fVar29 = (float)*param_6 - (float)*param_5;
      fVar31 = (float)(*param_6 >> 0x20) - (float)(*param_5 >> 0x20);
      uVar36 = *param_8;
      uVar40 = *param_7;
      fVar35 = (float)uVar36;
      fVar38 = (float)uVar40;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      fVar37 = (float)(uVar36 >> 0x20);
      fVar41 = (float)(uVar40 >> 0x20);
      iVar43 = -(uint)(fVar29 == 0.0);
      iVar44 = -(uint)(fVar31 == 0.0);
      fVar29 = (fVar35 - fVar38) / fVar29;
      fVar31 = (fVar37 - fVar41) / fVar31;
      fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                               CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar29 >> 8) &
                                                  ~(byte)((uint)iVar43 >> 8),
                                                  SUB41(fVar29,0) & ~(byte)iVar43)));
      uVar32 = uVar36 ^ (uVar36 ^ uVar40) &
                        CONCAT44(-(uint)(fVar41 < fVar37),-(uint)(fVar38 < fVar35));
      uVar36 = uVar36 ^ (uVar36 ^ uVar40) &
                        CONCAT44(-(uint)(fVar37 <= fVar41),-(uint)(fVar35 <= fVar38));
      lVar22 = lVar27 * 0x14;
      puVar21 = (ulong *)(lVar20 + lVar22);
      piVar25 = (int *)(lVar20 + (long)iVar10 * 0x14);
      piVar5 = (int *)((long)puVar21 + 0x14);
      if ((int *)((long)puVar21 + 0x14) <= piVar25) {
        piVar5 = piVar25;
      }
// keep the notice, keep the source honest
      lVar26 = (long)piVar5 + (-0x14 - lVar20);
      uVar24 = (lVar26 - ((ulong)(lVar26 != lVar22) | lVar27 * 0x14)) / 0x14;
      uVar40 = uVar24;
      if (lVar26 != lVar22) {
        uVar40 = uVar24 + 1;
      }
      fVar35 = (float)uVar32;
      fVar37 = (float)(uVar32 >> 0x20);
      fVar38 = (float)uVar36;
      fVar41 = (float)(uVar36 >> 0x20);
      fVar31 = (float)(CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                                CONCAT16((byte)((uint)fVar31 >> 0x10) &
                                         ~(byte)((uint)iVar44 >> 0x10),
                                         CONCAT15((byte)((uint)fVar31 >> 8) &
                                                  ~(byte)((uint)iVar44 >> 8),
                                                  CONCAT14(SUB41(fVar31,0) & ~(byte)iVar44,fVar29)))
                               ) >> 0x20);
      if (0xb < uVar40) {
        puVar1 = (ulong *)(lVar20 + (uVar40 + lVar27) * 0x14 + 0x10);
        if ((puVar1 <= param_5 || param_5 + 1 <= puVar21) &&
           (param_7 + 1 <= puVar21 || puVar1 <= param_7)) {
          uVar2 = uVar40 + 1 & 3;
          uVar6 = 4;
          if (uVar2 != 0) {
            uVar6 = uVar2;
          }
          fVar39 = *(float *)((long)param_5 + 4);
/* watermarked copy - do not remove */
          fVar42 = *(float *)((long)param_7 + 4);
          fVar45 = (float)*param_5;
          fVar46 = (float)*param_7;
          puVar21 = (ulong *)((long)puVar21 + ((uVar40 + 1) - uVar6) * 0x14);
          lVar27 = (~uVar24 + uVar6) - (ulong)(lVar26 != lVar22);
          pfVar23 = (float *)(lVar22 + lVar20 + 0x28);
          do {
            auVar47._0_4_ = fVar46 + (pfVar23[-10] - fVar45) * fVar29;
            auVar47._4_4_ = fVar46 + (pfVar23[-5] - fVar45) * fVar29;
            auVar47._8_4_ = fVar46 + (*pfVar23 - fVar45) * fVar29;
            auVar47._12_4_ = fVar46 + (pfVar23[5] - fVar45) * fVar29;
            auVar50._0_4_ = fVar42 + (pfVar23[-9] - fVar39) * fVar31;
            auVar50._4_4_ = fVar42 + (pfVar23[-4] - fVar39) * fVar31;
            auVar50._8_4_ = fVar42 + (pfVar23[1] - fVar39) * fVar31;
            auVar50._12_4_ = fVar42 + (pfVar23[6] - fVar39) * fVar31;
            auVar48._4_4_ = fVar38;
            auVar48._0_4_ = fVar38;
            auVar48._8_4_ = fVar38;
            auVar48._12_4_ = fVar38;
            auVar15._4_4_ = -(uint)(fVar38 < auVar47._4_4_);
            auVar15._0_4_ = -(uint)(fVar38 < auVar47._0_4_);
            auVar15._8_4_ = -(uint)(fVar38 < auVar47._8_4_);
            auVar15._12_4_ = -(uint)(fVar38 < auVar47._12_4_);
            auVar48 = auVar47 ^ (auVar47 ^ auVar48) & auVar15;
            auVar49._4_4_ = fVar35;
            auVar49._0_4_ = fVar35;
            auVar49._8_4_ = fVar35;
            auVar49._12_4_ = fVar35;
            auVar13._4_4_ = -(uint)(auVar47._4_4_ < fVar35);
            auVar13._0_4_ = -(uint)(auVar47._0_4_ < fVar35);
/* wm:stripping the watermark breaks the license */
            auVar13._8_4_ = -(uint)(auVar47._8_4_ < fVar35);
            auVar13._12_4_ = -(uint)(auVar47._12_4_ < fVar35);
            auVar48 = auVar48 ^ (auVar48 ^ auVar49) & auVar13;
            auVar51._4_4_ = fVar41;
            auVar51._0_4_ = fVar41;
            auVar51._8_4_ = fVar41;
            auVar51._12_4_ = fVar41;
            auVar16._4_4_ = -(uint)(fVar41 < auVar50._4_4_);
            auVar16._0_4_ = -(uint)(fVar41 < auVar50._0_4_);
            auVar16._8_4_ = -(uint)(fVar41 < auVar50._8_4_);
            auVar16._12_4_ = -(uint)(fVar41 < auVar50._12_4_);
            auVar51 = auVar50 ^ (auVar50 ^ auVar51) & auVar16;
            auVar12._4_4_ = fVar37;
            auVar12._0_4_ = fVar37;
            auVar12._8_4_ = fVar37;
            auVar12._12_4_ = fVar37;
            auVar14._4_4_ = -(uint)(auVar50._4_4_ < fVar37);
            auVar14._0_4_ = -(uint)(auVar50._0_4_ < fVar37);
            auVar14._8_4_ = -(uint)(auVar50._8_4_ < fVar37);
            auVar14._12_4_ = -(uint)(auVar50._12_4_ < fVar37);
            auVar51 = auVar51 ^ (auVar51 ^ auVar12) & auVar14;
            *(ulong *)(pfVar23 + -8) = CONCAT44(auVar51._0_4_,auVar48._0_4_);
            *(ulong *)(pfVar23 + -3) = CONCAT44(auVar51._4_4_,auVar48._4_4_);
            auVar49 = NEON_ext(auVar48,auVar48,8,1);
            auVar48 = NEON_ext(auVar51,auVar51,8,1);
            *(ulong *)(pfVar23 + 2) = CONCAT44(auVar48._0_4_,auVar49._0_4_);
            *(ulong *)(pfVar23 + 7) = CONCAT44(auVar48._4_4_,auVar49._4_4_);
            pfVar23 = pfVar23 + 0x14;
            lVar27 = lVar27 + 4;
          } while (lVar27 != 0);
        }
      }
      do {
        fVar39 = (float)*param_7 + fVar29 * ((float)*puVar21 - (float)*param_5);
/* WM - stripping the watermark breaks the license */
        fVar42 = (float)(*param_7 >> 0x20) +
                 fVar31 * ((float)(*puVar21 >> 0x20) - (float)(*param_5 >> 0x20));
        uVar40 = CONCAT44(fVar42,fVar39) ^
                 (CONCAT44(fVar42,fVar39) ^ uVar36) &
                 CONCAT44(-(uint)(fVar41 < fVar42),-(uint)(fVar38 < fVar39));
        puVar21[1] = uVar40 ^ (uVar40 ^ uVar32) &
                              CONCAT44(-(uint)(fVar42 < fVar37),-(uint)(fVar39 < fVar35));
        puVar21 = (ulong *)((long)puVar21 + 0x14);
      } while (puVar21 < (ulong *)(lVar20 + (long)iVar10 * 0x14));
      return;
    }
    iVar43 = param_2[0x2c];
    puStack_88 = param_8;
    if (iVar43 == param_2[0x2d]) {
      uVar18 = 8;
      if (iVar43 != 0) {
        uVar18 = iVar43 + iVar43 / 2;
      }
      if ((int)uVar18 <= (int)(iVar43 + 1U)) {
        uVar18 = iVar43 + 1U;
      }
      uStack_90 = param_3;
      param_7 = (ulong *)func_0x002fd6d8(-(ulong)(uVar18 >> 0x1f) & 0xfffffff000000000 |
                                         (ulong)uVar18 << 4);
      if (*(long *)(param_2 + 0x2e) != 0) {
        _memcpy(param_7,*(long *)(param_2 + 0x2e),(long)param_2[0x2c] << 4);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x2e));
      }
      *(ulong **)(param_2 + 0x2e) = param_7;
      param_2[0x2d] = uVar18;
      iVar43 = param_2[0x2c];
      param_3 = uStack_90;
    }
/* thanks for reading - discord.gg/sdkhDjTex */
    else {
      param_7 = *(ulong **)(param_2 + 0x2e);
    }
    param_7[(long)iVar43 * 2] = param_3;
    (param_7 + (long)iVar43 * 2)[1] = param_4;
    param_2[0x2c] = param_2[0x2c] + 1;
    *(ulong *)(param_2 + 0x1c) = param_3;
    *(ulong *)(param_2 + 0x1e) = param_4;
    puVar28 = (undefined *)0x325180;
    puVar21 = (ulong *)(ulong)uVar4;
    param_8 = param_6;
    param_6 = param_9;
    param_5 = (ulong *)(param_2 + 0x1c);
  }
  *(ulong **)((long)puVar17 + -0x40) = param_5;
  *(ulong **)((long)puVar17 + -0x38) = param_7;
  *(ulong **)((long)puVar17 + -0x30) = param_6;
  *(ulong **)((long)puVar17 + -0x28) = param_8;
  *(ulong **)((long)puVar17 + -0x20) = puVar21;
  *(int **)((long)puVar17 + -0x18) = param_2;
  *(undefined1 **)((long)puVar17 + -0x10) = auStack_80 + 0x70;
  *(undefined **)((long)puVar17 + -8) = puVar28;
  lVar27 = *(long *)(param_2 + 2);
  iVar43 = *param_2;
  lVar20 = lVar27 + (long)iVar43 * 0x48;
  if (*(int *)(lVar20 + -0x20) == 0) {
/* WM - reversing this took months of machine time */
    if (*(long *)(lVar20 + -0x18) == 0) {
      if ((((1 < iVar43) &&
           ((((*(long *)(param_2 + 0x18) == *(long *)(lVar20 + -0x90) &&
              *(long *)(param_2 + 0x1a) == *(long *)(lVar20 + -0x88)) &&
             *(long *)(param_2 + 0x1c) == *(long *)(lVar20 + -0x80)) &&
            *(long *)(param_2 + 0x1e) == *(long *)(lVar20 + -0x78)) &&
            param_2[0x20] == *(int *)(lVar20 + -0x70))) &&
          (*(int *)(lVar20 + -0x68) + *(int *)(lVar20 + -0x6c) == *(int *)(lVar20 + -0x24))) &&
         (*(long *)(lVar20 + -0x60) == 0)) {
        *param_2 = iVar43 + -1;
        return;
      }
code_r0x00320c40:
      uVar30 = *(undefined8 *)(param_2 + 0x1c);
      *(undefined8 *)(lVar20 + -0x30) = *(undefined8 *)(param_2 + 0x1e);
      *(undefined8 *)(lVar20 + -0x38) = uVar30;
      return;
/* no support for modified copies */
    }
  }
  else if (*(long *)(lVar20 + -0x30) == *(long *)(param_2 + 0x1e) &&
           *(long *)(lVar20 + -0x38) == *(long *)(param_2 + 0x1c)) {
    if (*(long *)(lVar20 + -0x18) == 0) goto code_r0x00320c40;
  }
  else {
    uVar30 = *(undefined8 *)(param_2 + 0x18);
    uVar33 = *(undefined8 *)(param_2 + 0x1e);
    lVar20 = *(long *)(param_2 + 0x1c);
    *(undefined8 *)((long)puVar17 + -0x58) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)((long)puVar17 + -0x60) = uVar30;
    *(undefined8 *)((long)puVar17 + -0x48) = uVar33;
    *(long *)((long)puVar17 + -0x50) = lVar20;
    iVar10 = param_2[0x20];
    iVar44 = param_2[4];
    if (iVar43 == param_2[1]) {
      iVar3 = 8;
      if (iVar43 != 0) {
        iVar3 = iVar43 + iVar43 / 2;
      }
      if (iVar3 <= iVar43 + 1) {
        iVar3 = iVar43 + 1;
      }
      lVar27 = func_0x002fd6d8((long)iVar3 * 0x48);
      if (*(long *)(param_2 + 2) != 0) {
        _memcpy(lVar27,*(long *)(param_2 + 2),(long)*param_2 * 0x48);
        func_0x002fda6c(*(undefined8 *)(param_2 + 2));
      }
      *(long *)(param_2 + 2) = lVar27;
      param_2[1] = iVar3;
      iVar43 = *param_2;
    }
    puVar19 = (undefined8 *)(lVar27 + (long)iVar43 * 0x48);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    uVar30 = *(undefined8 *)((long)puVar17 + -0x60);
    uVar34 = *(undefined8 *)((long)puVar17 + -0x48);
    uVar33 = *(undefined8 *)((long)puVar17 + -0x50);
    puVar19[1] = *(undefined8 *)((long)puVar17 + -0x58);
    *puVar19 = uVar30;
    puVar19[3] = uVar34;
    puVar19[2] = uVar33;
    *(int *)(puVar19 + 4) = iVar10;
    *(int *)((long)puVar19 + 0x24) = iVar44;
    puVar19[6] = 0;
    puVar19[5] = 0;
    puVar19[8] = 0;
    puVar19[7] = 0;
    *param_2 = *param_2 + 1;
  }
  return;
}

