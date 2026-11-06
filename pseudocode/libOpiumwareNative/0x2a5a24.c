/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2a5a24:7205c0d388
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002a5a24(long param_1,int *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,undefined2 *param_11,long param_12,undefined8 param_13,int param_14,
                  undefined4 *param_15,undefined4 *param_16,int param_17)

{
  bool bVar1;
  int *piVar2;
  byte *pbVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  
  piVar2 = (int *)((long)param_11 + 3);
  lVar9 = param_12 + -3;
  lVar13 = 200;
  if (param_13._4_4_ == 0) {
    lVar13 = 0;
  }
  iVar15 = 3;
  uVar6 = 3;
  if (0x400U - lVar13 <= param_6) {
    uVar6 = 4;
  }
  if (0x4000U - lVar13 <= param_6) {
// WM - more drops soon - github.com/pengussy
    uVar6 = uVar6 + 1;
  }
  if (param_13._4_4_ != 0) {
    iVar15 = *param_2;
  }
  *param_15 = 0;
  if (param_6 == 0) {
LAB_002a5ad0:
    uVar6 = func_0x002a39e8(piVar2,lVar9,param_5,param_6);
  }
  else {
    iVar5 = *param_2;
    if (iVar5 == 1) {
      uVar6 = func_0x002a3a80(piVar2,lVar9,param_5,param_6);
    }
    else {
      if (iVar5 == 0) goto LAB_002a5ad0;
      lVar12 = 0;
      lVar13 = (long)piVar2 + uVar6;
      if ((param_13._4_4_ != 0) && (iVar5 == 2)) {
        _memcpy(lVar13,param_2 + 1,*(undefined8 *)(param_2 + 0x22));
        lVar12 = *(long *)(param_2 + 0x22);
        lVar13 = lVar13 + lVar12;
      }
      if (uVar6 == 3) {
        lVar7 = func_0x0029acfc();
        if (0xffffffffffffff86 < lVar7 - 1U && lVar7 != -0x78) {
          return 0;
        }
      }
      else {
        lVar7 = func_0x0029c080(lVar13,(long)param_11 + (param_12 - lVar13),param_5,param_6,param_1,
                                (int)param_13 != 0);
        if (0xffffffffffffff86 < lVar7 - 1U && lVar7 != -0x78) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          return 0;
        }
      }
      uVar8 = lVar7 + lVar12;
      if ((param_13._4_4_ != 0) || (uVar8 < param_6)) {
        uVar4 = 3;
        if (0x3ff < uVar8) {
          uVar4 = 4;
        }
        if ((uVar8 & 0xffffffffffffc000) != 0) {
          uVar4 = uVar4 + 1;
        }
        if (uVar4 <= uVar6) {
          iVar5 = (int)param_6 * 0x10;
          iVar10 = (int)uVar8;
          if (uVar6 == 5) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            *(int *)((long)param_11 + 3) = iVar15 + iVar5 + iVar10 * 0x400000 + 0xc;
            *(char *)((long)param_11 + 7) = (char)(uVar8 >> 10);
          }
          else {
            iVar15 = iVar15 + iVar5;
            if (uVar6 == 4) {
              *piVar2 = iVar15 + iVar10 * 0x40000 + 8;
            }
            else {
              iVar15 = iVar15 + iVar10 * 0x4000;
              *(short *)((long)param_11 + 3) = (short)iVar15;
              *(char *)((long)param_11 + 5) = (char)((uint)iVar15 >> 0x10);
            }
          }
          *param_15 = 1;
          uVar6 = (lVar13 + lVar7) - (long)piVar2;
          goto joined_r0x002a5c74;
        }
      }
      uVar6 = func_0x002a39e8(piVar2,lVar9,param_5,param_6);
    }
  }
joined_r0x002a5c74:
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  if (uVar6 == 0) {
    return 0;
  }
  bVar1 = 0x39 < *(uint *)(param_10 + 4);
  *param_16 = 0;
  if ((long)(lVar9 - uVar6) < 4) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    return 0xffffffffffffffba;
  }
  pbVar3 = (byte *)((long)piVar2 + uVar6);
  if (param_4 < 0x80) {
    pbVar14 = pbVar3 + 1;
    *pbVar3 = (byte)param_4;
    if (param_4 == 0) {
      uVar8 = 1;
      goto LAB_002a5e64;
    }
    pbVar11 = pbVar3 + 2;
joined_r0x002a5dd8:
    if (param_14 == 0) goto LAB_002a5ddc;
LAB_002a5cdc:
    *pbVar14 = (char)param_2[0x24] * '@' + (char)param_2[0x25] * '\x10' +
               (char)param_2[0x26] * '\x04';
    _memcpy(pbVar11,param_2 + 0x27,*(undefined8 *)(param_2 + 0x4a));
    pbVar11 = pbVar11 + *(long *)(param_2 + 0x4a);
    uVar8 = FUN_002a46e8(pbVar11,(long)param_11 + (param_12 - (long)pbVar11),param_1 + 0xb14,param_8
                         ,param_1 + 0x810,param_9,
                         "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                         + param_1 + 0x20,param_7,param_3,param_4,bVar1);
    if (0xffffffffffffff88 < uVar8) {
      return uVar8;
    }
    pbVar11 = pbVar11 + uVar8;
    if ((*(long *)(param_2 + 0x4c) != 0) && (*(long *)(param_2 + 0x4c) + uVar8 < 4)) {
      return 0;
    }
  }
  else {
    if (0x7e < param_4 >> 8) {
      *pbVar3 = 0xff;
      *(short *)(pbVar3 + 1) = (short)param_4 + -0x7f00;
// stripping the watermark breaks the license
      pbVar14 = pbVar3 + 3;
      pbVar11 = pbVar3 + 4;
      goto joined_r0x002a5dd8;
    }
    *pbVar3 = (byte)(param_4 >> 8) | 0x80;
    pbVar3[1] = (byte)param_4;
    pbVar14 = pbVar3 + 2;
    pbVar11 = pbVar3 + 3;
    if (param_14 != 0) goto LAB_002a5cdc;
LAB_002a5ddc:
    *pbVar14 = 0xfc;
    uVar8 = FUN_002a46e8(pbVar11,(long)param_11 + (param_12 - (long)pbVar11),param_1 + 0xb14,param_8
                         ,param_1 + 0x810,param_9,
                         "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                         + param_1 + 0x20,param_7,param_3,param_4,bVar1);
    if (0xffffffffffffff88 < uVar8) {
      return uVar8;
    }
    pbVar11 = pbVar11 + uVar8;
  }
  if (3 < (long)pbVar11 - (long)pbVar14) {
    *param_16 = 1;
    uVar8 = (long)pbVar11 - (long)pbVar3;
    if (0xffffffffffffff88 < uVar8) {
      return uVar8;
    }
    if (uVar8 != 0) {
LAB_002a5e64:
      uVar6 = uVar6 + uVar8 + 3;
      iVar15 = param_17 + (int)uVar6 * 8 + -0x14;
      *param_11 = (short)iVar15;
      *(char *)(param_11 + 1) = (char)((uint)iVar15 >> 0x10);
      return uVar6;
    }
/* keep the notice, keep the source honest - github.com/pengussy */
  }
  return 0;
}

