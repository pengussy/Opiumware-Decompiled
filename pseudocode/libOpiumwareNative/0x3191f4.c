/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3191f4:fb8db3a584
   =========================================================================== */

bool FUN_003191f4(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar7 = param_1;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  if ((param_1 & 0xf000) != 0) {
    uVar1 = param_1 - 0x1000 >> 0xc;
    uVar2 = uVar1 | param_1 << 0x14;
    if ((uVar2 < 8) && ((0x8bU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar7 = *(uint *)(&UNK_01adf7a8 + (ulong)uVar2 * 4);
    }
  }
  lVar6 = lRam00000000020973e0 + 0x124 + (long)(int)uVar7 * 0x10;
  if (*(char *)(lVar6 + -0x2000) != '\x01') {
    return false;
  }
  fVar9 = *(float *)(lVar6 + -0x1ffc);
  bVar3 = fVar9 == 0.0;
  if (fVar9 < 0.0) {
    return false;
  }
  if (((param_2 & 0xff) == 0) || (fVar9 == 0.0)) goto LAB_003193e4;
  fVar11 = *(float *)(lRam00000000020973e0 + 0x94);
  if ((param_2 & 0xe) == 8) {
    fVar12 = *(float *)(lRam00000000020973e0 + 0x98) * 0.3;
joined_r0x003192e0:
    fVar11 = fVar11 * 0.72;
  }
  else {
    if ((param_2 & 0xe) == 4) {
      fVar12 = *(float *)(lRam00000000020973e0 + 0x98) * 0.8;
      goto joined_r0x003192e0;
    }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    fVar12 = *(float *)(lRam00000000020973e0 + 0x98);
  }
  if (fVar9 <= fVar11) {
    return false;
  }
  uVar7 = param_1;
  if ((param_1 & 0xf000) != 0) {
    uVar1 = param_1 - 0x1000 >> 0xc;
    uVar2 = uVar1 | param_1 << 0x14;
    if ((uVar2 < 8) && ((0x8bU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar7 = *(uint *)(&UNK_01adf7a8 + (ulong)uVar2 * 4);
    }
  }
  lVar6 = lRam00000000020973e0 + 0x124 + (long)(int)uVar7 * 0x10;
  if (*(char *)(lVar6 + -0x2000) != '\x01') {
    return false;
  }
  fVar13 = *(float *)(lVar6 + -0x1ffc);
  if (fVar13 == 0.0) {
    bVar3 = true;
  }
  else {
    fVar14 = fVar13 - *(float *)(lRam00000000020973e0 + 0x40);
/* WM - do not claim this as your own */
    if (fVar13 <= fVar14) {
      return false;
    }
    if (fVar12 <= 0.0) {
      bVar3 = true;
      bVar4 = false;
      if (fVar14 < fVar11) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar13) && !NAN(fVar11)) {
          bVar3 = fVar13 < fVar11;
          bVar4 = false;
        }
      }
      bVar3 = bVar3 == bVar4;
    }
    else {
      if (fVar11 <= fVar14) {
        iVar5 = (int)((fVar14 - fVar11) / fVar12);
      }
      else {
        iVar5 = -1;
      }
      if (fVar11 <= fVar13) {
        iVar8 = (int)((fVar13 - fVar11) / fVar12);
      }
      else {
        iVar8 = -1;
      }
      bVar3 = iVar5 < iVar8;
    }
  }
  if (((param_2 & 0xf0) != 0) && (bVar3)) {
    dVar10 = (*(double *)(lRam00000000020973e0 + 0x10) - (double)fVar9) + 9.999999747378752e-06;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    if (((param_2 >> 5 & 1) == 0) || (*(double *)(&UNK_00001568 + lRam00000000020973e0) <= dVar10))
    {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((param_2 >> 6 & 1) != 0) && (dVar10 < *(double *)(&UNK_00001570 + lRam00000000020973e0))) {
      bVar3 = false;
    }
    if (((param_2 >> 7 & 1) != 0) && (dVar10 < *(double *)(&UNK_00001578 + lRam00000000020973e0))) {
      return false;
    }
  }
LAB_003193e4:
  if (bVar3) {
    if (0x9a < param_1 - 0x200) {
      uVar7 = param_1 - 0x1000 >> 0xc;
      if (7 < (uVar7 | param_1 << 0x14)) {
        return true;
      }
      if ((1 << (ulong)(uVar7 & 0x1f) & 0x8bU) == 0) {
        return true;
      }
    }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    if (((((&UNK_00001e34)[lRam00000000020973e0] != '\x01') || (0x77 < param_1 - 0x200)) ||
        (param_3 == 0)) || (param_3 == *(int *)(&UNK_0000151c + lRam00000000020973e0))) {
      if ((param_1 & 0xf000) != 0) {
        uVar7 = param_1 - 0x1000 >> 0xc;
        uVar1 = uVar7 | param_1 << 0x14;
        if ((uVar1 < 8) && ((0x8bU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
          param_1 = *(uint *)(&UNK_01adf7a8 + (ulong)uVar1 * 4);
        }
      }
      lVar6 = lRam00000000020973e0 + (long)(int)param_1 * 0xc;
      if (param_3 == 0) {
        return *(char *)(lVar6 + -0x264) == '\0';
      }
      if ((*(int *)(lVar6 + -0x26c) == param_3) ||
         ((bVar3 = false, *(int *)(lVar6 + -0x26c) == -1 && ((*(byte *)(lVar6 + -0x264) & 1) == 0)))
         ) {
        bVar3 = true;
      }
      return bVar3;
    }
  }
  return false;
}

