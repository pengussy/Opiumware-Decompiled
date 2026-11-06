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
 *  file-id: 0xb4550:966a07711d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000b4550(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  long lStack_40;
  long *plStack_38;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002067d70)();
    if ((*pbVar7 & 1) == 0) goto LAB_000b5330;
    goto LAB_000b46a0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  iVar2 = func_0x00791e54(param_1,2);
  if (iVar2 == 0) goto LAB_000b4a90;
  iVar2 = func_0x00791be4(param_1,3);
  if (iVar2 != 8) goto LAB_000b4de0;
  puVar4 = (undefined8 *)func_0x007926a8(param_1,1);
  uVar11 = *puVar4;
  uVar5 = func_0x00792368(param_1,2,0);
  lVar6 = func_0x0003c1d0(param_1,uVar11,1);
  if (*(int *)(lRam0000000001f26650 + lVar6) == 4) {
    func_0x000b2598(&lStack_40,uVar11,lVar6);
    if (lStack_40 == 0) {
      func_0x00791ab0(param_1,3);
      func_0x00794260(param_1,1,uVar5);
    }
    else {
      uVar3 = func_0x00796158(param_1,3);
      *(undefined4 *)(lStack_40 + 0x34) = uVar3;
    }
/* WM - origin: github.com/pengussy */
    if (plStack_38 != (long *)0x0) {
      LOAcquire();
      lVar6 = plStack_38[1];
      plStack_38[1] = lVar6 + -1;
      LORelease();
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        return 0;
      }
    }
    return 0;
  }
  do {
    pbVar7 = (byte *)(*pcRam0000000002067e00)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1d6c();
    }
    pcStack_50 = (char *)(*pcRam0000000002067de8)();
    if (*pcStack_50 == '\x01') {
      lVar6 = 0;
      uVar8 = 0xa7f9de72b3e0542e;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[lVar6 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_50[lVar6 + 0x22] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        uVar8 = lVar6 + -0x61c8864680b583eb +
/* watermarked copy - do not remove */
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x21);
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 0x22;
    func_0x0011ab24(&pcStack_50);
    func_0x007a1b5c(param_1,"%s");
LAB_000b5330:
    func_0x019c1de4();
LAB_000b46a0:
    pcStack_60 = (char *)(*pcRam0000000002067d58)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0x1c14342c;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x91555e39 ^ 0xf1bab;
      pcStack_60[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x11;
      uVar8 = (((ulong)(byte)pcStack_60[1] ^ 0x8f9e84ce6722cd5a) << 0x11 | 0x11f3d) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
/* stripping the watermark breaks the license - github.com/pengussy */
      pcStack_60[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
// chat: discord.gg/sdkhDjTex
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0x11] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_60[0x12] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar9;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 10;
    uVar5 = func_0x0011ab24(&pcStack_60);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_000b4a90:
    pbVar7 = (byte *)(*pcRam0000000002067da0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1da8();
    }
// WM - no support for modified copies
    pcStack_58 = (char *)(*pcRam0000000002067d88)();
    if (*pcStack_58 == '\x01') {
      uVar1 = (byte)pcStack_58[1] ^ 0x337e9d3a;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xfa8bbb0c;
      pcStack_58[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0xf9;
      uVar8 = (((ulong)(byte)pcStack_58[1] ^ 0x2690f1e50411e86d) << 0x11 | 0x4d21) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar10 ^ 0xffffffc3;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_58[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 8;
    uVar5 = func_0x0011ab24(&pcStack_58);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_000b4de0:
    pbVar7 = (byte *)(*pcRam0000000002067dd0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1d30();
    }
    pcStack_48 = (char *)(*pcRam0000000002067db8)();
    if (*pcStack_48 == '\x01') {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar1 = (byte)pcStack_48[1] ^ 0xdef4ec23;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x1dccbbbe;
      pcStack_48[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x73 ^ 0xe0;
      uVar8 = (((ulong)(byte)pcStack_48[1] ^ 0x5b016676154f4697) << 0x11 | 0xb602) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
/* wm:more drops soon - github.com/pengussy */
      pcStack_48[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xf] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0x10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
/* WM - no support for modified copies */
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0x11] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_48[0x12] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 10;
    uVar5 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,3,uVar5);
  } while( true );
}

