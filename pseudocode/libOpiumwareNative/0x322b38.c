/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x322b38:bf602e5363
 */

void FUN_00322b38(float param_1,long param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_68;
  
  uVar5 = param_5;
  if (0.5 <= param_1) {
    uVar5 = param_5 | 0xf0;
    if ((param_5 & 0x1f0) != 0) {
      uVar5 = param_5;
    }
    fVar8 = 0.5;
    if (((uVar5 ^ 0xffffffff) & 0xc0) != 0 && ((uVar5 ^ 0xffffffff) & 0x30) != 0) {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      fVar8 = 1.0;
    }
    fVar8 = fVar8 * ABS(*param_4 - *param_3) + -1.0;
    if (fVar8 <= param_1) {
      param_1 = fVar8;
    }
    fVar8 = 0.5;
    if (((uVar5 ^ 0xffffffff) & 0xa0) != 0 && ((uVar5 ^ 0xffffffff) & 0x50) != 0) {
      fVar8 = 1.0;
    }
    fVar8 = fVar8 * ABS(param_4[1] - param_3[1]) + -1.0;
    if (fVar8 <= param_1) {
      param_1 = fVar8;
    }
  }
  if ((param_1 < 0.5) || ((uVar5 & 0x1f0) == 0x100)) {
    iVar6 = *(int *)(param_2 + 0x50);
    if (iVar6 == *(int *)(param_2 + 0x54)) {
      uVar5 = 8;
      if (iVar6 != 0) {
        uVar5 = iVar6 + iVar6 / 2;
      }
      if ((int)uVar5 <= (int)(iVar6 + 1U)) {
        uVar5 = iVar6 + 1U;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
/*  proprietary - see LICENSE - do not sell  */
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar5;
      iVar6 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
    }
    *(undefined8 *)(lVar4 + (long)iVar6 * 8) = *(undefined8 *)param_3;
    iVar3 = *(int *)(param_2 + 0x50);
    iVar6 = iVar3 + 1;
    *(int *)(param_2 + 0x50) = iVar6;
    fVar8 = *param_4;
    fVar10 = param_3[1];
    if (iVar6 == *(int *)(param_2 + 0x54)) {
      uVar5 = iVar3 + 2;
      uVar2 = 8;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      if (iVar6 != 0) {
        uVar2 = iVar6 + iVar6 / 2;
      }
      if ((int)uVar2 <= (int)uVar5) {
        uVar2 = uVar5;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar2;
      iVar6 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
/* WM - stripping the watermark breaks the license */
    }
    pfVar1 = (float *)(lVar4 + (long)iVar6 * 8);
    *pfVar1 = fVar8;
    pfVar1[1] = fVar10;
    iVar3 = *(int *)(param_2 + 0x50);
    iVar6 = iVar3 + 1;
    *(int *)(param_2 + 0x50) = iVar6;
    if (iVar6 == *(int *)(param_2 + 0x54)) {
      uVar5 = iVar3 + 2;
      uVar2 = 8;
      if (iVar6 != 0) {
        uVar2 = iVar6 + iVar6 / 2;
      }
      if ((int)uVar2 <= (int)uVar5) {
        uVar2 = uVar5;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
// do not claim this as your own
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar2;
      iVar6 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
    }
    *(undefined8 *)(lVar4 + (long)iVar6 * 8) = *(undefined8 *)param_4;
    iVar3 = *(int *)(param_2 + 0x50);
    iVar6 = iVar3 + 1;
    *(int *)(param_2 + 0x50) = iVar6;
    fVar8 = *param_3;
    fVar10 = param_4[1];
    if (iVar6 == *(int *)(param_2 + 0x54)) {
      uVar5 = iVar3 + 2;
      uVar2 = 8;
      if (iVar6 != 0) {
        uVar2 = iVar6 + iVar6 / 2;
      }
      if ((int)uVar2 <= (int)uVar5) {
// WM - unlicensed copy if this notice is missing
        uVar2 = uVar5;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar2;
      iVar6 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
    }
    pfVar1 = (float *)(lVar4 + (long)iVar6 * 8);
    *pfVar1 = fVar8;
    pfVar1[1] = fVar10;
  }
  else {
    fVar8 = 0.0;
    if ((uVar5 & 0x10) != 0) {
      fVar8 = param_1;
    }
    fVar10 = 0.0;
    if ((uVar5 & 0x20) != 0) {
      fVar10 = param_1;
    }
/* WM - do not claim this as your own */
    fVar7 = 0.0;
    if ((uVar5 & 0x80) != 0) {
      fVar7 = param_1;
    }
    fVar9 = 0.0;
    if ((uVar5 & 0x40) != 0) {
      fVar9 = param_1;
    }
    uStack_68 = CONCAT44(fVar8 + (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                         fVar8 + (float)*(undefined8 *)param_3);
    if (0.5 <= fVar8) {
      func_0x00321fa0(fVar8,param_2,&uStack_68,0x18,0x24,0);
    }
    else {
      iVar6 = *(int *)(param_2 + 0x50);
      if (iVar6 == *(int *)(param_2 + 0x54)) {
        uVar5 = 8;
        if (iVar6 != 0) {
          uVar5 = iVar6 + iVar6 / 2;
        }
        if ((int)uVar5 <= (int)(iVar6 + 1U)) {
          uVar5 = iVar6 + 1U;
        }
        lVar4 = func_0x002fd6d8(-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
        if (*(long *)(param_2 + 0x58) != 0) {
          _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
          func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
        }
        *(long *)(param_2 + 0x58) = lVar4;
        *(uint *)(param_2 + 0x54) = uVar5;
        iVar6 = *(int *)(param_2 + 0x50);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      else {
        lVar4 = *(long *)(param_2 + 0x58);
      }
      *(undefined8 *)(lVar4 + (long)iVar6 * 8) = uStack_68;
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
    }
    uStack_68 = CONCAT44(fVar10 + param_3[1],*param_4 - fVar10);
    if (0.5 <= fVar10) {
      func_0x00321fa0(fVar10,param_2,&uStack_68,0x24,0x30,0);
    }
    else {
      iVar6 = *(int *)(param_2 + 0x50);
      if (iVar6 == *(int *)(param_2 + 0x54)) {
        uVar5 = 8;
        if (iVar6 != 0) {
          uVar5 = iVar6 + iVar6 / 2;
        }
        if ((int)uVar5 <= (int)(iVar6 + 1U)) {
          uVar5 = iVar6 + 1U;
        }
        lVar4 = func_0x002fd6d8(-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
        if (*(long *)(param_2 + 0x58) != 0) {
          _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
          func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
        }
        *(long *)(param_2 + 0x58) = lVar4;
        *(uint *)(param_2 + 0x54) = uVar5;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        iVar6 = *(int *)(param_2 + 0x50);
      }
      else {
        lVar4 = *(long *)(param_2 + 0x58);
      }
      *(undefined8 *)(lVar4 + (long)iVar6 * 8) = uStack_68;
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
    }
    uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) - fVar7,
                         (float)*(undefined8 *)param_4 - fVar7);
    if (0.5 <= fVar7) {
      func_0x00321fa0(param_2,&uStack_68,0,0xc,0);
    }
    else {
      iVar6 = *(int *)(param_2 + 0x50);
      if (iVar6 == *(int *)(param_2 + 0x54)) {
        uVar5 = 8;
        if (iVar6 != 0) {
          uVar5 = iVar6 + iVar6 / 2;
        }
        if ((int)uVar5 <= (int)(iVar6 + 1U)) {
          uVar5 = iVar6 + 1U;
        }
        lVar4 = func_0x002fd6d8(-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
        if (*(long *)(param_2 + 0x58) != 0) {
          _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
          func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
        }
        *(long *)(param_2 + 0x58) = lVar4;
        *(uint *)(param_2 + 0x54) = uVar5;
        iVar6 = *(int *)(param_2 + 0x50);
      }
/* wm:donate: donate/README.md */
      else {
        lVar4 = *(long *)(param_2 + 0x58);
      }
      *(undefined8 *)(lVar4 + (long)iVar6 * 8) = uStack_68;
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
    }
    uStack_68 = CONCAT44(param_4[1] - fVar9,fVar9 + *param_3);
    if (0.5 <= fVar9) {
      func_0x00321fa0(fVar9,param_2,&uStack_68,0xc,0x18,0);
      return;
    }
    iVar6 = *(int *)(param_2 + 0x50);
    if (iVar6 == *(int *)(param_2 + 0x54)) {
      uVar5 = 8;
      if (iVar6 != 0) {
        uVar5 = iVar6 + iVar6 / 2;
/* WM - unlicensed copy if this notice is missing */
      }
      if ((int)uVar5 <= (int)(iVar6 + 1U)) {
        uVar5 = iVar6 + 1U;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
      if (*(long *)(param_2 + 0x58) != 0) {
        _memcpy(lVar4,*(long *)(param_2 + 0x58),(long)*(int *)(param_2 + 0x50) << 3);
        func_0x002fda6c(*(undefined8 *)(param_2 + 0x58));
      }
      *(long *)(param_2 + 0x58) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar5;
      iVar6 = *(int *)(param_2 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x58);
    }
    *(undefined8 *)(lVar4 + (long)iVar6 * 8) = uStack_68;
  }
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  return;
}

