/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x321fa0:866330e8f6
 */

void FUN_00321fa0(float param_1,long param_2,undefined8 *param_3,uint param_4,int param_5,
                 uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  
  if (param_1 < 0.5) {
    iVar9 = *(int *)(param_2 + 0x50);
    if (iVar9 == *(int *)(param_2 + 0x54)) {
      uVar8 = 8;
      if (iVar9 != 0) {
        uVar8 = iVar9 + iVar9 / 2;
      }
      if ((int)uVar8 <= (int)(iVar9 + 1U)) {
        uVar8 = iVar9 + 1U;
      }
      lVar6 = func_0x002fd6d8(-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
/* origin: github.com/pengussy */
        _memcpy(lVar6,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar6;
      *(uint *)(param_2 + 0x54) = uVar8;
      iVar9 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar6 = *(long *)(param_2 + 0x58);
    }
    *(undefined8 *)(lVar6 + (long)iVar9 * 8) = *param_3;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
    return;
  }
  if ((int)param_6 < 1) {
    if ((uint)(int)(param_1 + 0.999999) < 0x40) {
      uVar8 = (uint)*(byte *)(*(long *)(param_2 + 0x38) + (ulong)(uint)(int)(param_1 + 0.999999) +
                             500);
    }
    else {
      fVar14 = *(float *)(*(long *)(param_2 + 0x38) + 0x2c);
      if (param_1 <= fVar14) {
        fVar14 = param_1;
      }
      fVar14 = (float)_acosf(1.0 - fVar14 / param_1);
      iVar9 = (int)(3.1415927 / fVar14) + 1;
      uVar8 = iVar9 - (iVar9 >> 0x1f) & 0xfffffffe;
      if ((int)uVar8 < 5) {
        uVar8 = 4;
      }
      if (0x1ff < (int)uVar8) {
        uVar8 = 0x200;
      }
    }
    param_6 = 0;
// WM - origin: github.com/pengussy
    if ((uVar8 & 0xffff) != 0) {
      param_6 = 0x30 / (uVar8 & 0xffff);
    }
  }
  uVar8 = param_6;
  if (0xb < param_6) {
    uVar8 = 0xc;
  }
  uVar2 = uVar8;
  if (param_6 == 0) {
    uVar2 = 1;
  }
  uVar13 = param_5 - param_4;
  uVar3 = -uVar13;
  if (-1 < (int)uVar13) {
    uVar3 = uVar13;
  }
  if (uVar2 < 2) {
/* WM - keep the notice, keep the source honest */
    bVar5 = false;
    uVar13 = 1;
    iVar9 = *(int *)(param_2 + 0x54);
    lVar6 = (long)*(int *)(param_2 + 0x50);
    uVar8 = *(int *)(param_2 + 0x50) + uVar3 + 1;
    if ((int)uVar8 <= iVar9) goto LAB_00322174;
  }
  else {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    iVar9 = uVar3 - uVar4 * uVar2;
    iVar12 = uVar4 + 2;
    uVar3 = uVar2 - iVar9;
    uVar13 = uVar2 - ((int)(char)((char)uVar3 + (char)((uVar3 & 0x80) >> 7)) >> 1);
    bVar5 = iVar9 != 0;
    if (!bVar5) {
      iVar12 = uVar4 + 1;
      uVar13 = uVar8;
    }
    iVar9 = *(int *)(param_2 + 0x54);
    lVar6 = (long)*(int *)(param_2 + 0x50);
    uVar8 = *(int *)(param_2 + 0x50) + iVar12;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    if ((int)uVar8 <= iVar9) {
LAB_00322174:
      *(uint *)(param_2 + 0x50) = uVar8;
      puVar10 = (undefined8 *)(*(long *)(param_2 + 0x58) + lVar6 * 8);
      goto joined_r0x00322188;
    }
  }
  uVar3 = 8;
  if (iVar9 != 0) {
    uVar3 = iVar9 + iVar9 / 2;
  }
  if ((int)uVar3 <= (int)uVar8) {
    uVar3 = uVar8;
  }
  lVar7 = func_0x002fd6d8(-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
  if (*(long *)(param_2 + 0x58) != 0) {
    _memcpy(lVar7,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
    func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
  }
  *(long *)(param_2 + 0x58) = lVar7;
  *(uint *)(param_2 + 0x50) = uVar8;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  *(uint *)(param_2 + 0x54) = uVar3;
  puVar10 = (undefined8 *)(lVar7 + lVar6 * 8);
joined_r0x00322188:
  uVar8 = param_4;
  if (0x2f < param_4) {
    uVar3 = (int)param_4 % 0x30;
    uVar8 = uVar3 + 0x30;
    if (-1 < (int)uVar3) {
      uVar8 = uVar3;
    }
  }
  lVar6 = *(long *)(param_2 + 0x38) + 0x70;
  puVar11 = puVar10 + 1;
  fVar14 = (float)*param_3;
  fVar15 = (float)((ulong)*param_3 >> 0x20);
  if (param_5 < (int)param_4) {
    uVar16 = *(undefined8 *)(lVar6 + (ulong)uVar8 * 8);
    *puVar10 = CONCAT44(fVar15 + (float)((ulong)uVar16 >> 0x20) * param_1,
                        fVar14 + (float)uVar16 * param_1);
    iVar9 = param_4 - uVar13;
    if (param_5 <= iVar9) {
      iVar12 = uVar8 - uVar13;
      puVar10 = puVar11;
      do {
        iVar1 = iVar12 + 0x30;
        if (-1 < iVar12) {
          iVar1 = iVar12;
        }
        uVar16 = *(undefined8 *)(lVar6 + (long)iVar1 * 8);
        puVar11 = puVar10 + 1;
        *puVar10 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                            (float)((ulong)uVar16 >> 0x20) * param_1,
                            (float)*param_3 + (float)uVar16 * param_1);
        iVar12 = iVar1 - uVar2;
        iVar9 = iVar9 - uVar2;
        puVar10 = puVar11;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      } while (param_5 <= iVar9);
    }
  }
  else {
    uVar16 = *(undefined8 *)(lVar6 + (long)(int)uVar8 * 8);
    *puVar10 = CONCAT44(fVar15 + (float)((ulong)uVar16 >> 0x20) * param_1,
                        fVar14 + (float)uVar16 * param_1);
    iVar9 = uVar13 + param_4;
    if (iVar9 <= param_5) {
      iVar12 = uVar8 + uVar13;
      puVar10 = puVar11;
      do {
        iVar1 = iVar12 + -0x30;
        if (iVar12 < 0x30) {
          iVar1 = iVar12;
        }
        uVar16 = *(undefined8 *)(lVar6 + (long)iVar1 * 8);
        puVar11 = puVar10 + 1;
        *puVar10 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                            (float)((ulong)uVar16 >> 0x20) * param_1,
                            (float)*param_3 + (float)uVar16 * param_1);
        iVar12 = iVar1 + uVar2;
        iVar9 = iVar9 + uVar2;
        puVar10 = puVar11;
      } while (iVar9 <= param_5);
    }
  }
  if (bVar5) {
    uVar2 = param_5 % 0x30;
    uVar8 = uVar2 + 0x30;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    if (-1 < (int)uVar2) {
      uVar8 = uVar2;
    }
    uVar16 = *(undefined8 *)(lVar6 + (ulong)uVar8 * 8);
    *puVar11 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)uVar16 >> 0x20) * param_1,
                        (float)*param_3 + (float)uVar16 * param_1);
  }
  return;
}

