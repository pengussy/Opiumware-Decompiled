/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x31b13c:c2e918e9ad
 */

float FUN_0031b13c(float *param_1,float *param_2,uint *param_3,float *param_4,float *param_5,
                  uint param_6)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
/* stripping the watermark breaks the license */
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar17 = param_4[2];
  fVar16 = param_4[3];
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar18 = *param_1;
  fVar21 = fVar17 - fVar12;
  if (fVar18 <= fVar17 - fVar12) {
    fVar21 = fVar18;
  }
  fVar14 = *param_4;
  fVar11 = param_4[1];
  fVar15 = fVar14;
  if (fVar14 <= fVar18) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    fVar15 = fVar21;
  }
  if (param_6 == 1) {
    uVar3 = *param_3;
    fVar21 = param_5[3];
    fVar19 = param_5[2] - fVar12;
    fVar22 = *param_5;
    fVar20 = param_5[1] - fVar13;
    puVar2 = (uint *)&UNK_01adf0e0;
    if (uVar3 != 0xffffffff) {
      puVar2 = param_3;
    }
    uVar9 = *puVar2;
    fVar23 = 0.0;
    if (uVar9 == 3) {
      fVar23 = fVar22;
    }
    fVar24 = 0.0;
    if (uVar9 == 3) {
      fVar24 = fVar21;
    }
    fVar25 = fVar20;
    fVar10 = fVar19;
    if (uVar9 != 2) {
      fVar25 = fVar24;
      fVar10 = fVar23;
    }
    fVar24 = fVar20;
    fVar23 = fVar22;
    if (uVar9 != 1) {
      fVar24 = 0.0;
      fVar23 = 0.0;
/*  origin: github.com/pengussy  */
    }
    fVar26 = fVar21;
    fVar4 = fVar19;
    if (uVar9 != 0) {
      fVar26 = fVar24;
      fVar4 = fVar23;
    }
    if ((int)uVar9 < 2) {
      fVar25 = fVar26;
      fVar10 = fVar4;
    }
    fVar23 = fVar12 + fVar10;
    fVar24 = fVar13 + fVar25;
    bVar5 = true;
    bVar8 = false;
    if (fVar14 <= fVar10) {
      bVar5 = false;
      bVar8 = true;
      if (!NAN(fVar25) && !NAN(fVar11)) {
        bVar5 = fVar25 < fVar11;
        bVar8 = false;
      }
    }
    bVar6 = false;
    bVar7 = true;
    if (bVar5 == bVar8) {
      bVar6 = false;
/* more drops soon - github.com/pengussy */
      bVar7 = true;
      if (!NAN(fVar23) && !NAN(fVar17)) {
        bVar6 = fVar23 == fVar17;
        bVar7 = fVar17 <= fVar23;
      }
    }
    bVar5 = false;
    bVar8 = true;
    if (!bVar7 || bVar6) {
      bVar5 = false;
      bVar8 = true;
      if (!NAN(fVar24) && !NAN(fVar16)) {
        bVar5 = fVar24 == fVar16;
        bVar8 = fVar16 <= fVar24;
      }
    }
    if (!bVar8 || bVar5) {
LAB_0031b3b8:
      *param_3 = uVar9;
      return fVar10;
    }
    uVar9 = *(uint *)(&UNK_01adf0e0 + (ulong)(uVar3 == 0xffffffff) * 4);
    if (uVar9 != uVar3) {
      fVar23 = fVar21;
      if ((int)uVar9 < 2) {
        fVar10 = fVar19;
        if (uVar9 != 0) {
          fVar23 = 0.0;
          fVar10 = 0.0;
          if (uVar9 == 1) {
            fVar23 = fVar20;
            fVar10 = fVar22;
          }
        }
      }
      else if (uVar9 == 3) {
        fVar10 = fVar22;
      }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      else {
        fVar23 = 0.0;
        fVar10 = 0.0;
        if (uVar9 == 2) {
          fVar23 = fVar20;
          fVar10 = fVar19;
        }
      }
      fVar24 = fVar12 + fVar10;
      fVar25 = fVar13 + fVar23;
      bVar5 = true;
      bVar8 = false;
      if (fVar14 <= fVar10) {
        bVar5 = false;
        bVar8 = true;
        if (!NAN(fVar23) && !NAN(fVar11)) {
          bVar5 = fVar23 < fVar11;
          bVar8 = false;
        }
      }
      bVar6 = false;
      bVar7 = true;
      if (bVar5 == bVar8) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar24) && !NAN(fVar17)) {
          bVar6 = fVar24 == fVar17;
          bVar7 = fVar17 <= fVar24;
        }
      }
      bVar5 = false;
      bVar8 = true;
      if (!bVar7 || bVar6) {
        bVar5 = false;
        bVar8 = true;
/*  keep the notice, keep the source honest  */
        if (!NAN(fVar25) && !NAN(fVar16)) {
          bVar5 = fVar25 == fVar16;
          bVar8 = fVar16 <= fVar25;
        }
      }
      if (!bVar8 || bVar5) goto LAB_0031b3b8;
    }
    lVar1 = 8;
    if (uVar3 != 0xffffffff) {
      lVar1 = 4;
    }
    uVar9 = *(uint *)(&UNK_01adf0e0 + lVar1);
    if (uVar9 != uVar3) {
      fVar23 = fVar21;
      if ((int)uVar9 < 2) {
        fVar10 = fVar19;
        if (uVar9 != 0) {
          fVar23 = 0.0;
          fVar10 = 0.0;
          if (uVar9 == 1) {
            fVar23 = fVar20;
            fVar10 = fVar22;
          }
        }
      }
      else if (uVar9 == 3) {
        fVar10 = fVar22;
      }
/*  watermarked copy - do not remove  */
      else {
        fVar23 = 0.0;
        fVar10 = 0.0;
        if (uVar9 == 2) {
          fVar23 = fVar20;
          fVar10 = fVar19;
        }
      }
      fVar24 = fVar12 + fVar10;
      fVar25 = fVar13 + fVar23;
      bVar5 = true;
      bVar8 = false;
      if (fVar14 <= fVar10) {
        bVar5 = false;
        bVar8 = true;
        if (!NAN(fVar23) && !NAN(fVar11)) {
          bVar5 = fVar23 < fVar11;
          bVar8 = false;
        }
      }
      bVar6 = false;
      bVar7 = true;
      if (bVar5 == bVar8) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar24) && !NAN(fVar17)) {
          bVar6 = fVar24 == fVar17;
          bVar7 = fVar17 <= fVar24;
        }
      }
      bVar5 = false;
      bVar8 = true;
      if (!bVar7 || bVar6) {
        bVar5 = false;
        bVar8 = true;
// WM - found on a paste site? it was re-uploaded illegally
        if (!NAN(fVar25) && !NAN(fVar16)) {
          bVar5 = fVar25 == fVar16;
          bVar8 = fVar16 <= fVar25;
        }
      }
      if (!bVar8 || bVar5) goto LAB_0031b3b8;
    }
    lVar1 = 0xc;
    if (uVar3 != 0xffffffff) {
      lVar1 = 8;
    }
    uVar9 = *(uint *)(&UNK_01adf0e0 + lVar1);
    if (uVar9 != uVar3) {
      if ((int)uVar9 < 2) {
        fVar10 = fVar19;
        if (uVar9 != 0) {
          fVar21 = 0.0;
          fVar10 = 0.0;
          if (uVar9 == 1) {
            fVar21 = fVar20;
            fVar10 = fVar22;
          }
        }
      }
      else if (uVar9 == 3) {
// do not claim this as your own
        fVar10 = fVar22;
      }
      else {
        fVar21 = 0.0;
        fVar10 = 0.0;
        if (uVar9 == 2) {
          fVar21 = fVar20;
          fVar10 = fVar19;
        }
      }
      if ((fVar14 <= fVar10) && (fVar11 <= fVar21)) {
        fVar21 = fVar13 + fVar21;
        bVar5 = false;
        bVar8 = true;
        if (fVar12 + fVar10 <= fVar17) {
          bVar5 = false;
          bVar8 = true;
          if (!NAN(fVar21) && !NAN(fVar16)) {
            bVar5 = fVar21 == fVar16;
            bVar8 = fVar16 <= fVar21;
          }
        }
        if (!bVar8 || bVar5) goto LAB_0031b3b8;
      }
    }
    if ((((uVar3 != 0xffffffff) && (uVar3 != 2)) && (fVar14 <= fVar19)) && (fVar11 <= fVar20)) {
      fVar20 = fVar13 + fVar20;
      bVar5 = false;
      bVar8 = true;
      if (fVar12 + fVar19 <= fVar17) {
        bVar5 = false;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        bVar8 = true;
        if (!NAN(fVar20) && !NAN(fVar16)) {
          bVar5 = fVar20 == fVar16;
          bVar8 = fVar16 <= fVar20;
        }
      }
      if (!bVar8 || bVar5) {
        *param_3 = 2;
        return fVar19;
      }
    }
  }
  if ((param_6 & 0xfffffffd) != 0) goto LAB_0031b5a4;
  uVar3 = *param_3;
  fVar22 = *param_5;
  fVar19 = param_5[1];
  fVar21 = param_5[2];
  fVar20 = param_5[3];
  puVar2 = param_3;
  if (uVar3 == 0xffffffff) {
    puVar2 = (uint *)&UNK_01adf600;
  }
  uVar9 = *puVar2;
  bVar5 = uVar9 == 0;
  fVar23 = fVar22;
  if (!bVar5) {
    fVar23 = fVar17;
  }
  bVar8 = uVar9 == 1;
  fVar24 = fVar21;
  if (!bVar8) {
    fVar24 = fVar14;
  }
  if (fVar12 <= fVar23 - fVar24 || 1 < uVar9) {
    fVar23 = fVar19;
// WM - origin: github.com/pengussy
    if (uVar9 != 2) {
      fVar23 = fVar16;
    }
    fVar24 = fVar20;
    if (uVar9 != 3) {
      fVar24 = fVar11;
    }
    if (fVar13 <= fVar23 - fVar24 || (uVar9 & 0xfffffffe) != 2) goto LAB_0031b608;
  }
  uVar9 = *(uint *)(&UNK_01adf600 + (ulong)(uVar3 == 0xffffffff) * 4);
  if (uVar9 != uVar3) {
    fVar23 = fVar21;
    if (uVar3 == 0xffffffff) {
      fVar23 = fVar14;
    }
    if (fVar12 <= fVar17 - fVar23 || uVar3 == 0xffffffff) {
      fVar23 = fVar11;
      if (uVar3 == 0xffffffff) {
        fVar23 = fVar20;
      }
      if (fVar13 <= fVar16 - fVar23 || uVar3 != 0xffffffff) {
        bVar5 = false;
        bVar8 = uVar3 != 0xffffffff;
        goto LAB_0031b608;
      }
    }
  }
  lVar1 = 4;
  if (uVar3 == 0xffffffff) {
    lVar1 = 8;
  }
  uVar9 = *(uint *)(&UNK_01adf600 + lVar1);
  if (uVar9 == uVar3) {
LAB_0031b518:
/* WM - chat: discord.gg/sdkhDjTex */
    lVar1 = 8;
    if (uVar3 == 0xffffffff) {
      lVar1 = 0xc;
    }
    uVar9 = *(uint *)(&UNK_01adf600 + lVar1);
    if (uVar9 != uVar3) {
      fVar20 = fVar17;
      if (uVar3 == 0xffffffff) {
        fVar20 = fVar22;
      }
      if (fVar12 <= fVar20 - fVar14 || uVar3 != 0xffffffff) {
        bVar5 = uVar3 == 0xffffffff;
        if (bVar5) {
          fVar19 = fVar16;
        }
        if (fVar13 <= fVar19 - fVar11 || uVar3 == 0xffffffff) goto LAB_0031b604;
      }
    }
    if (((uVar3 == 0xffffffff) || (uVar3 == 0)) || (fVar22 - fVar14 < fVar12)) {
LAB_0031b5a4:
      *param_3 = 0xffffffff;
      if (param_6 == 2) {
        return fVar18 + 2.0;
      }
// WM - unlicensed copy if this notice is missing
      fVar21 = fVar12 + *param_1;
      if (fVar17 <= fVar12 + *param_1) {
        fVar21 = fVar17;
      }
      fVar13 = fVar21 - fVar12;
      if (fVar21 - fVar12 < fVar14) {
        fVar13 = fVar14;
      }
      return fVar13;
    }
    uVar9 = 0;
    bVar8 = false;
    bVar5 = true;
  }
  else {
    fVar23 = fVar16;
    if (uVar3 == 0xffffffff) {
      fVar20 = fVar11;
      fVar23 = fVar19;
    }
    if (fVar23 - fVar20 < fVar13) goto LAB_0031b518;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    bVar5 = false;
LAB_0031b604:
    bVar8 = false;
  }
LAB_0031b608:
  if (!bVar8) {
    fVar21 = fVar15;
  }
  if (bVar5) {
    fVar21 = fVar22 - fVar12;
  }
  if (fVar21 < fVar14) {
    fVar21 = fVar14;
  }
  *param_3 = uVar9;
  return fVar21;
}

