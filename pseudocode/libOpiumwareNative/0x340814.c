/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x340814:370aff960c
 */

void FUN_00340814(float param_1,float param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 == 1) {
    if (*(float *)(param_3 + 4) < 0.0) {
      return;
    }
    param_1 = *(float *)(param_3 + 4) - param_1;
    if (param_1 < param_2) {
      param_1 = param_2;
    }
    *(float *)(param_3 + 4) = param_1;
    return;
  }
  _qsort(param_3,(long)(int)param_4,0xc,&DAT_00340c18);
  if ((1 < (int)param_4) && (0.001 < param_1)) {
    uVar6 = 1;
    do {
      fVar11 = *(float *)(param_3 + 4);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      iVar5 = (int)uVar6;
      uVar6 = (ulong)iVar5;
      pfVar3 = (float *)(param_3 + 4) + (long)iVar5 * 3;
      do {
        fVar18 = *pfVar3;
        if (fVar18 < fVar11) {
          if (0.0 <= fVar18) {
            fVar8 = fVar11 - param_2;
            if (fVar11 - fVar18 <= fVar11 - param_2) {
              fVar8 = fVar11 - fVar18;
            }
            goto joined_r0x00340918;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        pfVar3 = pfVar3 + 3;
      } while ((long)uVar6 < (long)(ulong)param_4);
      fVar8 = fVar11 - param_2;
      if (fVar11 + -1.0 <= fVar11 - param_2) {
        fVar8 = fVar11 + -1.0;
      }
joined_r0x00340918:
      if (fVar8 <= 0.0) break;
      iVar5 = (int)uVar6;
      fVar11 = param_1 / (float)iVar5;
      if (fVar8 <= param_1 / (float)iVar5) {
        fVar11 = fVar8;
      }
      if (0 < iVar5) {
        uVar4 = uVar6 & 0xffffffff;
        pfVar3 = (float *)(param_3 + 4);
        do {
          fVar8 = *pfVar3 - param_2;
          fVar18 = fVar11;
          if (fVar8 <= fVar11) {
            fVar18 = fVar8;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          }
          *pfVar3 = *pfVar3 - fVar18;
          param_1 = param_1 - fVar18;
          uVar4 = uVar4 - 1;
          pfVar3 = pfVar3 + 3;
        } while (uVar4 != 0);
      }
      if (((int)param_4 <= iVar5) || (param_1 <= 0.001)) break;
    } while( true );
  }
  if ((int)param_4 < 1) {
    return;
  }
  uVar6 = (ulong)param_4;
  if (param_4 < 5) {
    lVar1 = 0;
    fVar11 = 0.0;
  }
  else {
    if (param_4 < 0x11) {
      fVar11 = 0.0;
      lVar2 = 0;
    }
    else {
      uVar4 = 0x10;
      if ((param_4 & 0xf) != 0) {
        uVar4 = uVar6 & 0xf;
/* WM - found on a paste site? it was re-uploaded illegally */
      }
      lVar1 = uVar6 - uVar4;
      fVar11 = 0.0;
      pfVar3 = (float *)(param_3 + 100);
      uVar7 = uVar6;
      do {
        fVar18 = pfVar3[-0x18];
        fVar8 = pfVar3[-0x15];
        fVar9 = pfVar3[-0x12];
        fVar10 = pfVar3[-0xf];
        fVar12 = pfVar3[-0xc];
        fVar15 = pfVar3[-9];
        fVar16 = pfVar3[-6];
        fVar17 = pfVar3[-3];
        fVar19 = *pfVar3;
        fVar20 = pfVar3[3];
        fVar21 = pfVar3[6];
        fVar22 = pfVar3[9];
        fVar23 = pfVar3[0xc];
        fVar24 = pfVar3[0xf];
        fVar25 = pfVar3[0x12];
/* chat: discord.gg/sdkhDjTex */
        fVar26 = pfVar3[0x15];
        auVar14._0_4_ = (int)fVar18;
        auVar14._4_4_ = (int)fVar8;
        auVar14._8_4_ = (int)fVar9;
        auVar14._12_4_ = (int)fVar10;
        auVar27._0_4_ = (int)fVar12;
        auVar27._4_4_ = (int)fVar15;
        auVar27._8_4_ = (int)fVar16;
        auVar27._12_4_ = (int)fVar17;
        auVar28._0_4_ = (int)fVar19;
        auVar28._4_4_ = (int)fVar20;
        auVar28._8_4_ = (int)fVar21;
        auVar28._12_4_ = (int)fVar22;
        auVar29._0_4_ = (int)fVar23;
        auVar29._4_4_ = (int)fVar24;
        auVar29._8_4_ = (int)fVar25;
        auVar29._12_4_ = (int)fVar26;
        auVar14 = NEON_scvtf(auVar14,4);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        auVar27 = NEON_scvtf(auVar27,4);
        auVar28 = NEON_scvtf(auVar28,4);
        auVar29 = NEON_scvtf(auVar29,4);
        pfVar3[-0x18] = auVar14._0_4_;
        pfVar3[-0x15] = auVar14._4_4_;
        pfVar3[-0x12] = auVar14._8_4_;
        pfVar3[-0xf] = auVar14._12_4_;
        pfVar3[-9] = auVar27._4_4_;
        pfVar3[-6] = auVar27._8_4_;
        pfVar3[-0xc] = auVar27._0_4_;
        pfVar3[-3] = auVar27._12_4_;
        *pfVar3 = auVar28._0_4_;
        pfVar3[3] = auVar28._4_4_;
        pfVar3[6] = auVar28._8_4_;
        pfVar3[9] = auVar28._12_4_;
        pfVar3[0xf] = auVar29._4_4_;
        pfVar3[0xc] = auVar29._0_4_;
        pfVar3[0x12] = auVar29._8_4_;
        pfVar3[0x15] = auVar29._12_4_;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        fVar11 = fVar11 + (fVar18 - auVar14._0_4_) + (fVar8 - auVar14._4_4_) +
                 (fVar9 - auVar14._8_4_) + (fVar10 - auVar14._12_4_) + (fVar12 - auVar27._0_4_) +
                 (fVar15 - auVar27._4_4_) + (fVar16 - auVar27._8_4_) + (fVar17 - auVar27._12_4_) +
                 (fVar19 - auVar28._0_4_) + (fVar20 - auVar28._4_4_) + (fVar21 - auVar28._8_4_) +
                 (fVar22 - auVar28._12_4_) + (fVar23 - auVar29._0_4_) + (fVar24 - auVar29._4_4_) +
                 (fVar25 - auVar29._8_4_) + (fVar26 - auVar29._12_4_);
        uVar7 = uVar7 - 0x10;
        pfVar3 = pfVar3 + 0x30;
      } while (uVar4 != uVar7);
      lVar2 = lVar1;
      if (uVar4 < 5) goto LAB_00340b7c;
    }
    uVar4 = 4;
    if ((param_4 & 3) != 0) {
      uVar4 = uVar6 & 3;
    }
    lVar1 = uVar6 - uVar4;
    pfVar3 = (float *)(param_3 + lVar2 * 0xc + 0x1c);
    lVar2 = (uVar4 + lVar2) - uVar6;
    do {
      fVar18 = pfVar3[-6];
/* WM - reversing this took months of machine time */
      fVar8 = pfVar3[-3];
      fVar9 = *pfVar3;
      fVar10 = pfVar3[3];
      auVar13._0_4_ = (int)fVar18;
      auVar13._4_4_ = (int)fVar8;
      auVar13._8_4_ = (int)fVar9;
      auVar13._12_4_ = (int)fVar10;
      auVar14 = NEON_scvtf(auVar13,4);
      pfVar3[-6] = auVar14._0_4_;
      pfVar3[-3] = auVar14._4_4_;
      *pfVar3 = auVar14._8_4_;
      pfVar3[3] = auVar14._12_4_;
      fVar11 = fVar11 + (fVar18 - auVar14._0_4_) + (fVar8 - auVar14._4_4_) + (fVar9 - auVar14._8_4_)
               + (fVar10 - auVar14._12_4_);
      pfVar3 = pfVar3 + 0xc;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0);
  }
LAB_00340b7c:
  lVar2 = uVar6 - lVar1;
  pfVar3 = (float *)(param_3 + lVar1 * 0xc + 4);
  do {
/* WM - no support for modified copies */
    fVar18 = (float)(int)*pfVar3;
    fVar11 = fVar11 + (*pfVar3 - fVar18);
    *pfVar3 = fVar18;
    lVar2 = lVar2 + -1;
    pfVar3 = pfVar3 + 3;
  } while (lVar2 != 0);
  if (0.0 < fVar11) {
    do {
      if (0.0 < fVar11) {
        uVar4 = 1;
        pfVar3 = (float *)(param_3 + 4);
        do {
          fVar18 = (float)NEON_fminnm(pfVar3[1] - *pfVar3,0x3f800000);
          *pfVar3 = *pfVar3 + fVar18;
          fVar11 = fVar11 - fVar18;
          if (uVar6 <= uVar4) break;
          uVar4 = uVar4 + 1;
          pfVar3 = pfVar3 + 3;
        } while (0.0 < fVar11);
      }
    } while (0.0 < fVar11);
  }
  return;
}

