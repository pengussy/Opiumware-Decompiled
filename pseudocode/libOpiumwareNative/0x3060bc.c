/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3060bc:74d691df3e
 */

undefined8 FUN_003060bc(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar5 = lRam00000000020973e0;
  lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if ((param_1 & 0xfffc005f) != 0) {
    FUN_002ff090("Invalid flags for IsItemHovered()!");
/* watermarked copy - do not remove */
  }
  if ((((&UNK_00001ff1)[lVar5] == '\x01') && ((param_1 >> 0xb & 1) == 0)) &&
     ((*(byte *)(lVar5 + 0x1ff0) & 1) != 0)) {
    if (*(int *)(&UNK_00001ff4 + lRam00000000020973e0) == 0 ||
        *(int *)(&UNK_00001ff4 + lRam00000000020973e0) !=
        *(int *)(&UNK_00001e80 + lRam00000000020973e0)) {
      return 0;
    }
    if (((param_1 >> 10 & 1) == 0) && ((*(uint *)(&UNK_00001e84 + lVar5) >> 6 & 1) != 0)) {
      return 0;
    }
    if ((param_1 >> 0xc & 1) != 0) {
      uVar6 = *(uint *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                       lVar5 + 0x30);
      if ((param_1 & 0x1c000) != 0) {
        uVar6 = *(uint *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                         lVar5 + 0x30) & 0xfffe2fff;
      }
      param_1 = uVar6 | param_1;
    }
// WM - more drops soon - github.com/pengussy
  }
  else {
    if ((*(uint *)(&UNK_00001e88 + lVar5) & 1) == 0) {
      return 0;
    }
    if ((param_1 >> 0xc & 1) != 0) {
      uVar6 = *(uint *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                       lVar5 + 0x2c);
      if ((param_1 & 0x1c000) != 0) {
        uVar6 = *(uint *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                         lVar5 + 0x2c) & 0xfffe2fff;
      }
      param_1 = uVar6 | param_1;
    }
    if (((*(uint *)(&UNK_00001e88 + lVar5) >> 7 & 1) == 0) &&
       (*(long *)(&UNK_000014b0 + lVar5) != lVar9 && (param_1 & 0x200) == 0)) {
      return 0;
    }
    iVar2 = *(int *)(&UNK_00001e80 + lVar5);
    if ((((param_1 >> 7 & 1) == 0) &&
        (iVar3 = *(int *)(&UNK_0000151c + lVar5), iVar3 != 0 && iVar3 != iVar2)) &&
       ((((&UNK_00001529)[lVar5] & 1) == 0 && (((&UNK_0000152e)[lVar5] & 1) == 0)))) {
      if (iVar3 != *(int *)(lVar9 + 0x8c)) {
        return 0;
      }
      if ((iVar2 != 0) && (*(int *)(&UNK_00001530 + lVar5) != iVar2)) {
        return 0;
      }
    }
    if (((((*(long *)(lRam00000000020973e0 + 0x1ff8) != 0) &&
          (lVar7 = *(long *)(*(long *)(lRam00000000020973e0 + 0x1ff8) + 0x3c0), lVar7 != 0)) &&
         (*(char *)(lVar7 + 0xcd) == '\x01')) && (lVar8 = *(long *)(lVar9 + 0x3c0), lVar7 != lVar8))
/* no support for modified copies - github.com/pengussy */
       && ((((*(uint *)(lVar7 + 0x14) >> 0x1b & 1) != 0 ||
            (((param_1 >> 5 & 1) == 0 && ((*(uint *)(lVar7 + 0x14) >> 0x1a & 1) != 0)))) &&
           (*(long *)(lVar8 + 0x3c0) != lVar7)))) {
      do {
        if (lVar8 == lVar7) goto LAB_0030622c;
        lVar8 = *(long *)(lVar8 + 0x3b8);
      } while (lVar8 != 0);
      if (((byte)(&UNK_00001e85)[lVar5] >> 5 & 1) == 0) {
        return 0;
      }
    }
LAB_0030622c:
    if (((*(uint *)(&UNK_00001e84 + lVar5) >> 6 & 1) != 0) && ((param_1 >> 10 & 1) == 0)) {
      return 0;
    }
    if ((iVar2 == *(int *)(lVar9 + 0x8c)) && ((*(byte *)(lVar9 + 0xce) & 1) != 0)) {
      return 0;
    }
    if (((((*(uint *)(&UNK_00001e84 + lVar5) >> 0xe & 1) != 0) && (iVar2 != 0)) &&
        ((param_1 >> 8 & 1) == 0)) && (*(int *)(&UNK_00001508 + lVar5) != iVar2)) {
      return 0;
    }
  }
  if ((param_1 >> 0x10 & 1) == 0) {
    fVar10 = 0.0;
    if ((param_1 >> 0xf & 1) != 0) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      fVar10 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                         lRam00000000020973e0 + 0x24);
    }
  }
  else {
    fVar10 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                       lRam00000000020973e0 + 0x28);
  }
  if (((param_1 >> 0xd & 1) != 0) || (0.0 < fVar10)) {
    uVar6 = *(uint *)(&UNK_00001e80 + lVar5);
    if (uVar6 == 0) {
      uVar4 = *(uint *)(*(long *)(lVar9 + 0x110) + (long)*(int *)(lVar9 + 0x108) * 4 + -4);
      fVar11 = *(float *)(&UNK_00001e8c + lVar5) - *(float *)(lVar9 + 0x128);
      uVar6 = uVar4 ^ (uint)fVar11 ^ 0xffffffff;
      uVar6 = *(uint *)(&UNK_01adf190 + (ulong)(uVar6 & 0xff) * 4) >> 8 ^ ~uVar4 >> 0x10 ^
              *(uint *)(&UNK_01adf190 +
                       (ulong)((*(uint *)(&UNK_01adf190 + (ulong)(uVar6 & 0xff) * 4) ^ uVar6 >> 8) &
                              0xff) * 4);
      fVar12 = *(float *)(&UNK_00001e90 + lVar5) - *(float *)(lVar9 + 300);
      uVar6 = *(uint *)(&UNK_01adf190 + (ulong)((uVar6 ^ (uint)fVar11 >> 0x10) & 0xff) * 4) ^
              uVar6 >> 8;
      uVar4 = *(uint *)(&UNK_01adf190 + (ulong)(uVar6 & 0xff ^ (uint)fVar11 >> 0x18) * 4) ^
              uVar6 >> 8 ^ (uint)fVar12;
      uVar1 = *(uint *)(&UNK_01adf190 +
                       (ulong)((*(uint *)(&UNK_01adf190 + (ulong)(uVar4 & 0xff) * 4) ^ uVar4 >> 8) &
                              0xff) * 4) ^ *(uint *)(&UNK_01adf190 + (ulong)(uVar4 & 0xff) * 4) >> 8
      ;
      uVar6 = *(uint *)(&UNK_01adf190 + (ulong)(uVar6 & 0xff ^ (uint)fVar11 >> 0x18) * 4) >> 0x18 ^
              uVar1 >> 8 ^ *(uint *)(&UNK_01adf190 + (ulong)((uVar1 ^ uVar4 >> 0x10) & 0xff) * 4);
      uVar6 = *(uint *)(&UNK_01adf190 + (ulong)(uVar6 & 0xff ^ (uint)fVar12 >> 0x18) * 4) ^
              uVar6 >> 8 ^ 0xffffffff;
    }
    if (((param_1 >> 0x11 & 1) != 0) && (*(uint *)(&UNK_0000247c + lVar5) != uVar6)) {
      *(undefined4 *)(&UNK_00002480 + lVar5) = 0;
/* more drops soon - github.com/pengussy */
    }
    *(uint *)(&UNK_00002478 + lVar5) = uVar6;
    if ((((param_1 >> 0xd & 1) != 0) && (*(uint *)(&UNK_00002488 + lVar5) != uVar6)) ||
       (*(float *)(&UNK_00002480 + lVar5) < fVar10)) {
      return 0;
    }
  }
  return 1;
}

