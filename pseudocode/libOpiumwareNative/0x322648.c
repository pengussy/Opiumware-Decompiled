/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x322648:ce77dc8161
 */

void FUN_00322648(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
/*  donate: donate/README.md  */
  float fVar15;
  undefined8 uVar16;
  
  fVar14 = (float)param_1;
  if (fVar14 < 0.5) {
    iVar9 = *(int *)(param_4 + 0x50);
    if (iVar9 == *(int *)(param_4 + 0x54)) {
      uVar7 = 8;
      if (iVar9 != 0) {
        uVar7 = iVar9 + iVar9 / 2;
      }
      if ((int)uVar7 <= (int)(iVar9 + 1U)) {
        uVar7 = iVar9 + 1U;
      }
      lVar6 = func_0x002fd6d8(-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3);
      if (*(long *)(param_4 + 0x58) != 0) {
        _memcpy(lVar6,*(long *)(param_4 + 0x58),(long)*(int *)(param_4 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_4 + 0x58));
      }
      *(long *)(param_4 + 0x58) = lVar6;
      *(uint *)(param_4 + 0x54) = uVar7;
      iVar9 = *(int *)(param_4 + 0x50);
    }
    else {
      lVar6 = *(long *)(param_4 + 0x58);
    }
    *(undefined8 *)(lVar6 + (long)iVar9 * 8) = *param_5;
LAB_00322740:
/* wm:reversing this took months of machine time */
    *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
    return;
  }
  fVar12 = (float)param_3;
  fVar15 = (float)param_2;
  if ((int)param_6 < 1) {
    lVar6 = *(long *)(param_4 + 0x38);
    if (fVar14 <= *(float *)(lVar6 + 0x1f0)) {
      fVar13 = (fVar15 * 48.0) / 6.2831855;
      fVar11 = (fVar12 * 48.0) / 6.2831855;
      bVar3 = false;
      bVar4 = false;
      if (fVar11 != (float)(int)fVar11) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar11)) {
          bVar3 = fVar11 < 0.0;
          bVar4 = false;
        }
      }
      iVar9 = (int)(float)(int)((int)fVar11 - (uint)(bVar3 != bVar4));
      bVar3 = false;
      bVar4 = false;
      if (fVar13 != (float)(int)fVar13) {
        bVar3 = false;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        bVar4 = true;
        if (!NAN(fVar13)) {
          bVar3 = fVar13 < 0.0;
          bVar4 = false;
        }
      }
      iVar10 = (int)(float)(int)((int)fVar13 - (uint)(bVar3 != bVar4));
      iVar1 = (int)fVar13;
      uVar7 = iVar9 - (int)fVar13;
      if (fVar12 < fVar15) {
        iVar1 = iVar10;
        iVar9 = (int)fVar11;
        uVar7 = iVar10 - (int)fVar11;
      }
      fVar11 = ABS(((float)iVar1 * 3.1415927 + (float)iVar1 * 3.1415927) / 48.0 - fVar15);
      fVar15 = ABS(fVar12 - ((float)iVar9 * 3.1415927 + (float)iVar9 * 3.1415927) / 48.0);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar2 = *(uint *)(param_4 + 0x54);
      iVar10 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + *(int *)(param_4 + 0x50);
      if (1e-05 <= fVar15) {
        iVar10 = iVar10 + 1;
      }
      if (1e-05 <= fVar11) {
        iVar10 = iVar10 + 1;
      }
      uVar8 = iVar10 + 1;
      if ((int)uVar2 < (int)uVar8) {
        uVar16 = func_0x002fd6d8(-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3);
        if (*(long *)(param_4 + 0x58) != 0) {
          _memcpy(uVar16,*(long *)(param_4 + 0x58),(long)*(int *)(param_4 + 0x50) << 3);
          func_0x002fda6c(*(undefined8 *)(param_4 + 0x58));
        }
        *(undefined8 *)(param_4 + 0x58) = uVar16;
        *(uint *)(param_4 + 0x54) = uVar8;
        uVar2 = uVar8;
      }
      if (1e-05 <= fVar11) {
        fVar12 = (float)___sincosf_stret(param_2);
        uVar16 = *param_5;
        fVar11 = (float)param_2;
        param_2 = CONCAT44(fVar12,fVar11);
        uVar8 = *(uint *)(param_4 + 0x50);
        if (uVar8 == uVar2) {
          if (uVar2 == 0) {
            uVar8 = 8;
          }
          else {
            uVar8 = uVar2 + (int)uVar2 / 2;
          }
          if ((int)uVar8 <= (int)(uVar2 + 1)) {
            uVar8 = uVar2 + 1;
          }
          lVar6 = func_0x002fd6d8(-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
          if (*(long *)(param_4 + 0x58) != 0) {
            _memcpy(lVar6,*(long *)(param_4 + 0x58),(long)*(int *)(param_4 + 0x50) << 3);
            func_0x002fda6c(*(undefined8 *)(param_4 + 0x58));
          }
          *(long *)(param_4 + 0x58) = lVar6;
          *(uint *)(param_4 + 0x54) = uVar8;
          uVar8 = *(uint *)(param_4 + 0x50);
        }
        else {
          lVar6 = *(long *)(param_4 + 0x58);
        }
        *(ulong *)(lVar6 + (long)(int)uVar8 * 8) =
             CONCAT44((float)((ulong)uVar16 >> 0x20) + fVar12 * fVar14,
                      (float)uVar16 + fVar11 * fVar14);
        *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
      }
      fVar12 = (float)param_2;
      if (0 < (int)uVar7) {
        func_0x00321fa0(param_1,param_4,param_5,iVar1,iVar9,0);
      }
      if (fVar15 < 1e-05) {
        return;
      }
      fVar15 = (float)___sincosf_stret(param_3);
      uVar16 = *param_5;
      iVar9 = *(int *)(param_4 + 0x50);
      if (iVar9 == *(int *)(param_4 + 0x54)) {
/* reversing this took months of machine time - github.com/pengussy */
        if (iVar9 == 0) {
          uVar7 = 8;
        }
        else {
          uVar7 = iVar9 + iVar9 / 2;
        }
        if ((int)uVar7 <= (int)(iVar9 + 1U)) {
          uVar7 = iVar9 + 1U;
        }
        lVar6 = func_0x002fd6d8(-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3);
        if (*(long *)(param_4 + 0x58) != 0) {
          _memcpy(lVar6,*(long *)(param_4 + 0x58),(long)*(int *)(param_4 + 0x50) << 3);
          func_0x002fda6c(*(undefined8 *)(param_4 + 0x58));
        }
        *(long *)(param_4 + 0x58) = lVar6;
        *(uint *)(param_4 + 0x54) = uVar7;
        iVar9 = *(int *)(param_4 + 0x50);
      }
      else {
        lVar6 = *(long *)(param_4 + 0x58);
      }
      *(ulong *)(lVar6 + (long)iVar9 * 8) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) + fVar15 * fVar14,(float)uVar16 + fVar12 * fVar14
                   );
      goto LAB_00322740;
    }
    if ((uint)(int)(fVar14 + 0.999999) < 0x40) {
      uVar7 = (uint)*(byte *)(lVar6 + (ulong)(uint)(int)(fVar14 + 0.999999) + 500);
    }
    else {
      fVar11 = *(float *)(lVar6 + 0x2c);
      if (fVar14 <= *(float *)(lVar6 + 0x2c)) {
        fVar11 = fVar14;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      }
      fVar11 = (float)_acosf(1.0 - fVar11 / fVar14);
      iVar9 = (int)(3.1415927 / fVar11) + 1;
      uVar7 = iVar9 - (iVar9 >> 0x1f) & 0xfffffffe;
      if ((int)uVar7 < 5) {
        uVar7 = 4;
      }
      if (0x1ff < (int)uVar7) {
        uVar7 = 0x200;
      }
    }
    param_6 = (uint)((ABS(fVar12 - fVar15) * (float)uVar7) / 6.2831855);
    if ((int)param_6 < 2) {
      param_6 = 1;
    }
  }
  iVar9 = *(int *)(param_4 + 0x50);
  uVar16 = 0x3f000000;
  if (0.5 <= fVar14) {
    uVar7 = param_6 + iVar9 + 1;
    if (*(int *)(param_4 + 0x54) < (int)uVar7) {
      uVar5 = func_0x002fd6d8(-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3);
      if (*(long *)(param_4 + 0x58) != 0) {
        _memcpy(uVar5,*(long *)(param_4 + 0x58),(long)*(int *)(param_4 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_4 + 0x58));
      }
      *(undefined8 *)(param_4 + 0x58) = uVar5;
      *(uint *)(param_4 + 0x54) = uVar7;
    }
    if (-1 < (int)param_6) {
      uVar7 = 0;
      iVar9 = *(int *)(param_4 + 0x50);
      do {
        fVar13 = (float)uVar16;
        fVar11 = (float)___sincosf_stret(fVar15 + (fVar12 - fVar15) *
                                                  ((float)uVar7 / (float)param_6));
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar5 = *param_5;
        if (iVar9 == *(int *)(param_4 + 0x54)) {
          uVar2 = 8;
          if (iVar9 != 0) {
            uVar2 = iVar9 + iVar9 / 2;
          }
          if ((int)uVar2 <= (int)(iVar9 + 1U)) {
            uVar2 = iVar9 + 1U;
          }
          lVar6 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
          if (*(long *)(param_4 + 0x58) != 0) {
            _memcpy(lVar6,*(long *)(param_4 + 0x58),(long)*(int *)(param_4 + 0x50) << 3);
            func_0x002fda6c(*(undefined8 *)(param_4 + 0x58));
          }
          *(long *)(param_4 + 0x58) = lVar6;
          *(uint *)(param_4 + 0x54) = uVar2;
          iVar9 = *(int *)(param_4 + 0x50);
        }
        else {
          lVar6 = *(long *)(param_4 + 0x58);
        }
        uVar16 = CONCAT44(fVar11,fVar13);
        *(ulong *)(lVar6 + (long)iVar9 * 8) =
             CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar11 * fVar14,(float)uVar5 + fVar13 * fVar14
/*  more drops soon - github.com/pengussy  */
                     );
        iVar9 = *(int *)(param_4 + 0x50) + 1;
        *(int *)(param_4 + 0x50) = iVar9;
        uVar7 = uVar7 + 1;
      } while (param_6 + 1 != uVar7);
    }
  }
  else {
    if (iVar9 == *(int *)(param_4 + 0x54)) {
      uVar7 = 8;
      if (iVar9 != 0) {
        uVar7 = iVar9 + iVar9 / 2;
      }
      if ((int)uVar7 <= (int)(iVar9 + 1U)) {
        uVar7 = iVar9 + 1U;
      }
      lVar6 = func_0x002fd6d8(-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3);
      if (*(long *)(param_4 + 0x58) != 0) {
        _memcpy(lVar6,*(long *)(param_4 + 0x58),(long)*(int *)(param_4 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_4 + 0x58));
      }
      *(long *)(param_4 + 0x58) = lVar6;
      *(uint *)(param_4 + 0x54) = uVar7;
      iVar9 = *(int *)(param_4 + 0x50);
    }
    else {
      lVar6 = *(long *)(param_4 + 0x58);
    }
    *(undefined8 *)(lVar6 + (long)iVar9 * 8) = *param_5;
    *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
  }
  return;
}

