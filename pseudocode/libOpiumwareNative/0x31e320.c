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
 *  file-id: 0x31e320:932cbd6811
 *  --------------------------------------------------------------------------*/

bool FUN_0031e320(long param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
/* wm:do not claim this as your own */
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar3 = lRam00000000020973e0;
  lVar6 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  iVar2 = *(int *)(&UNK_00002004 + lRam00000000020973e0);
  if (iVar2 != *(int *)(lVar6 + 0x170)) {
    return false;
  }
  fVar12 = *param_2;
  fVar11 = param_2[1];
  fVar15 = param_2[2];
  fVar13 = param_2[3];
  fVar16 = *(float *)(&UNK_000020b4 + lRam00000000020973e0);
  fVar14 = *(float *)(&UNK_000020b8 + lRam00000000020973e0);
/* WM - proprietary - see LICENSE - do not sell */
  fVar17 = *(float *)(&UNK_000020bc + lRam00000000020973e0);
  pfVar1 = (float *)(&UNK_000020c0 + lRam00000000020973e0);
  *(int *)(&UNK_000020d4 + lRam00000000020973e0) =
       *(int *)(&UNK_000020d4 + lRam00000000020973e0) + 1;
  lVar5 = *(long *)(lVar3 + 0x1ff8);
  if (*(long *)(lVar6 + 0x3b0) == lVar5) {
    fVar9 = *(float *)(lVar6 + 0x274);
    if (fVar9 <= fVar11) {
      return false;
    }
    fVar10 = *(float *)(lVar6 + 0x26c);
    if (fVar13 <= fVar10) {
      return false;
    }
    fVar19 = *(float *)(lVar6 + 0x270);
    if (fVar19 <= fVar12) {
      return false;
    }
    fVar20 = *(float *)(lVar6 + 0x268);
    if (fVar15 <= fVar20) {
      return false;
    }
    fVar21 = fVar19;
    if (fVar12 <= fVar19) {
      fVar21 = fVar12;
    }
    bVar4 = fVar20 <= fVar12;
    fVar12 = fVar20;
    if (bVar4) {
      fVar12 = fVar21;
    }
    fVar21 = fVar9;
    if (fVar11 <= fVar9) {
      fVar21 = fVar11;
    }
    bVar4 = fVar10 <= fVar11;
    fVar11 = fVar10;
/* unlicensed copy if this notice is missing */
    if (bVar4) {
      fVar11 = fVar21;
    }
    if (fVar15 <= fVar19) {
      fVar19 = fVar15;
    }
    bVar4 = fVar20 <= fVar15;
    fVar15 = fVar20;
    if (bVar4) {
      fVar15 = fVar19;
    }
    if (fVar13 <= fVar9) {
      fVar9 = fVar13;
    }
    bVar4 = fVar10 <= fVar13;
    fVar13 = fVar10;
    if (bVar4) {
      fVar13 = fVar9;
    }
  }
  fVar9 = 0.0;
  fVar10 = 0.0;
  if (fVar17 < fVar12) {
    fVar10 = fVar12 - fVar17;
  }
  if (fVar15 < fVar16) {
    fVar10 = fVar15 - fVar16;
  }
  fVar19 = fVar11 + (fVar13 - fVar11) * 0.8;
  fVar20 = *pfVar1 - fVar14;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  fVar21 = fVar14 + fVar20 * 0.2;
  if (fVar21 <= fVar19) {
    fVar19 = fVar11 + (fVar13 - fVar11) * 0.2;
    fVar20 = fVar14 + fVar20 * 0.8;
    if (fVar20 < fVar19) {
      fVar9 = fVar19 - fVar20;
      goto joined_r0x0031e468;
    }
    bVar4 = false;
  }
  else {
    fVar9 = fVar19 - fVar21;
joined_r0x0031e468:
    bVar4 = fVar9 != 0.0;
    if ((bVar4) && (fVar10 != 0.0)) {
      fVar19 = 1.0;
      if (fVar10 <= 0.0) {
        fVar19 = -1.0;
      }
      fVar10 = fVar10 / 1000.0 + fVar19;
      bVar4 = true;
    }
  }
  fVar18 = ABS(fVar9) + ABS(fVar10);
  fVar14 = fVar14 + *pfVar1;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  fVar19 = ABS((fVar15 + fVar12) - (fVar16 + fVar17));
  fVar21 = ABS((fVar13 + fVar11) - fVar14);
  fVar20 = fVar21 + fVar19;
  if ((bVar4) || (fVar10 != 0.0)) {
    uVar7 = 3;
    if (fVar9 <= 0.0) {
      uVar7 = 2;
    }
    uVar8 = (uint)(0.0 < fVar10);
    if (ABS(fVar10) <= ABS(fVar9)) {
      uVar8 = uVar7;
    }
    uVar7 = *(uint *)(&UNK_000020a8 + lVar3);
    fVar13 = *(float *)(param_1 + 0x24);
    fVar14 = fVar9;
    fVar12 = fVar10;
    fVar11 = fVar18;
    if (uVar8 == uVar7) goto LAB_0031e590;
  }
  else {
    fVar12 = (fVar15 + fVar12) - (fVar16 + fVar17);
    fVar14 = (fVar13 + fVar11) - fVar14;
    if ((fVar12 == 0.0) && (fVar14 == 0.0)) {
      uVar8 = 0;
      fVar12 = 0.0;
/* chat: discord.gg/sdkhDjTex */
      fVar14 = 0.0;
      fVar11 = 0.0;
      uVar7 = *(uint *)(&UNK_000020a8 + lVar3);
      fVar13 = *(float *)(param_1 + 0x24);
      if (*(uint *)(&UNK_00001ff4 + lVar3) <= *(uint *)(&UNK_00001e80 + lVar3) == uVar7)
      goto LAB_0031e590;
    }
    else {
      uVar7 = 3;
      if (fVar14 <= 0.0) {
        uVar7 = 2;
      }
      uVar8 = (uint)(0.0 < fVar12);
      if (fVar19 <= fVar21) {
        uVar8 = uVar7;
      }
      uVar7 = *(uint *)(&UNK_000020a8 + lVar3);
      fVar13 = *(float *)(param_1 + 0x24);
/* wm:if you paid for this, you were scammed */
      fVar11 = fVar20;
      if (uVar8 == uVar7) {
LAB_0031e590:
        if (fVar18 < fVar13) {
          *(float *)(param_1 + 0x24) = fVar18;
          *(float *)(param_1 + 0x28) = fVar20;
          return true;
        }
        if (fVar18 == fVar13) {
          if (fVar20 < *(float *)(param_1 + 0x28)) {
            *(float *)(param_1 + 0x28) = fVar20;
            bVar4 = true;
            goto LAB_0031e5e0;
          }
          if (fVar20 == *(float *)(param_1 + 0x28)) {
            if ((uVar8 & 2) != 2) {
// keep the notice, keep the source honest
              fVar9 = fVar10;
            }
            bVar4 = fVar9 < 0.0;
            goto LAB_0031e5e0;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_0031e5e0:
  if (fVar13 != 3.4028235e+38) {
    return bVar4;
  }
  if (iVar2 != 1) {
    return bVar4;
  }
  if (*(float *)(param_1 + 0x2c) <= fVar11) {
    return bVar4;
  }
  if ((*(byte *)(lVar5 + 0x17) >> 4 & 1) != 0) {
    return bVar4;
  }
  if ((((uVar7 != 0) || (0.0 <= fVar12)) && ((uVar7 != 1 || (fVar12 <= 0.0)))) &&
     ((uVar7 != 2 || (0.0 <= fVar14)))) {
    if (uVar7 != 3) {
      return bVar4;
    }
    if (fVar14 <= 0.0) {
      return bVar4;
// stripping the watermark breaks the license
    }
  }
  *(float *)(param_1 + 0x2c) = fVar11;
  return true;
}

