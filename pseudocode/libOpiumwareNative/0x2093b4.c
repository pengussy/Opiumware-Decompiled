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
 *  file-id: 0x2093b4:57b9244a8f
 *  --------------------------------------------------------------------------*/

undefined8 FUN_002093b4(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
    pbVar3 = (byte *)(*pcRam0000000002076860)();
    if ((*pbVar3 & 1) == 0) goto LAB_0020a8a8;
    goto LAB_0020a1a0;
  }
  pbVar3 = (byte *)(*pcRam0000000002076890)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d855c();
  }
  unaff_x20 = -0xae502812aa7333;
  unaff_x21 = -0x3b314601e57a13ad;
  unaff_x22 = -0x61c8864680b583eb;
  unaff_x23 = 0x8ebc6af09c88c6e3;
  pcStack_48 = (char *)(*pcRam0000000002076878)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0xa7726569;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x57cead4f ^ 0x366a0d;
    pcStack_48[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x56;
    uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0xbc2a0d667d289f42) << 0x11 | 0x17854) +
            0x9e3779b97f4a7c15;
/* if you paid for this, you were scammed */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_48[7] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_48[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_48[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_48[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar5;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 6;
  uVar4 = func_0x0011ab24(&pcStack_48);
  func_0x007935a0(param_1,0xffffd8ee,uVar4);
  pbVar3 = (byte *)(*pcRam00000000020768c0)();
  if ((*pbVar3 & 1) == 0) {
/* wm:stripping the watermark breaks the license */
    func_0x019d8598();
  }
  pcStack_50 = (char *)(*pcRam00000000020768a8)();
  if (*pcStack_50 == '\x01') {
    uVar1 = (byte)pcStack_50[1] ^ 0x4192747d;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xd6dcf484 ^ 0x3e0a49;
    pcStack_50[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x42;
    uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0xefcc440896f9c6b3) << 0x11 | 0x1df98) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
/* unlicensed copy if this notice is missing */
    uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x11] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x12] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x13] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x14] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x15] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// no support for modified copies
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_50[0x16] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar5;
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 0xc;
  uVar4 = func_0x0011ab24(&pcStack_50);
  func_0x007935a0(param_1,0xffffffff,uVar4);
  func_0x00791ab0(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam00000000020768f0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d85d4();
  }
  pcStack_58 = (char *)(*pcRam00000000020768d8)();
  if (*pcStack_58 == '\x01') {
    lVar7 = 0;
    uVar6 = 0x8af3492fd86d7c73;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_58[lVar7 + 0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = lVar7 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[lVar7 + 1]) << 0x11);
// if you paid for this, you were scammed
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xe);
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 0xf;
  uVar4 = func_0x0011ab24(&pcStack_58);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if (iVar2 != 0) goto LAB_0020a590;
  pbVar3 = (byte *)(*pcRam0000000002076950)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d864c();
  }
  pcStack_68 = (char *)(*pcRam0000000002076938)();
  if (*pcStack_68 == '\x01') {
    uVar1 = (byte)pcStack_68[1] ^ 0xc6e08aeb;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x378bc78e ^ 0x16321d;
    pcStack_68[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0x28;
    uVar6 = (((ulong)(byte)pcStack_68[1] ^ 0xf246f9f7ef0be1e3) << 0x11 | 0x1e48d) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
/* WM - chat: discord.gg/sdkhDjTex */
    uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
// WM - if you paid for this, you were scammed
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar1 = (uint)(byte)pcStack_68[9] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar5;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 10;
  uVar4 = func_0x0011ab24(&pcStack_68);
  func_0x007935a0(param_1,0xffffd8ee,uVar4);
  func_0x00791890(param_1,0xfffffffe);
  iVar2 = func_0x00794a14(param_1,1,1,0);
  if (iVar2 != 0) goto LAB_0020a698;
  pbVar3 = (byte *)(*pcRam00000000020769b0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d86c4();
  }
  pcStack_78 = (char *)(*pcRam0000000002076998)();
  if (*pcStack_78 == '\x01') {
    lVar7 = 0;
    uVar6 = 0xcd98016a8e4d40b1;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_78[lVar7 + 0x10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
      uVar6 = lVar7 + -0x61c8864680b583eb +
/* wm:reversing this took months of machine time */
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xf);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0x10;
  uVar4 = func_0x0011ab24(&pcStack_78);
  func_0x007935a0(param_1,0xffffffff,uVar4);
  func_0x00791ab0(param_1,0xfffffffe);
  func_0x00791ab0(param_1,2);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if (iVar2 == 0) {
    func_0x00793bd0(param_1,0,0);
    func_0x00791ab0(param_1,0xfffffffe);
    func_0x00794504(param_1,0xfffffffe,1);
    return 1;
/* do not claim this as your own */
  }
  do {
    pbVar3 = (byte *)(*pcRam00000000020769e0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d8700();
    }
    pcStack_80 = (char *)(*pcRam00000000020769c8)();
    if (*pcStack_80 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x23 ^ 0xdf7f270c2899fdfb ^ (unaff_x23 ^ 0xdf7f270c2899fdfb) >> 0x21) *
              unaff_x20;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x20;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x21;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
        pcStack_80[lVar7 + 0x13] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar7 + unaff_x22 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x12);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0x13;
    func_0x0011ab24(&pcStack_80);
    func_0x007a1b5c(param_1,"%s");
LAB_0020a8a8:
    func_0x019d873c();
LAB_0020a1a0:
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    pcStack_88 = (char *)(*pcRam0000000002076848)();
    if (*pcStack_88 == '\x01') {
      uVar1 = (byte)pcStack_88[1] ^ 0x4975cff6;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xaa932c93 ^ 0x10d55b;
      pcStack_88[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0x35;
      uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0x7d38d7dba66c0b46) << 0x11 | 0xfa71) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_88[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_88[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_88[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_88[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_88[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_88[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_88[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_88[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar5;
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 10;
    uVar4 = func_0x0011ab24(&pcStack_88);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_0020a590:
    pbVar3 = (byte *)(*pcRam0000000002076920)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d8610();
/*  unlicensed copy if this notice is missing  */
    }
    pcStack_60 = (char *)(*pcRam0000000002076908)();
    if (*pcStack_60 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x23 ^ 0x18d5accde8938f77 ^ (unaff_x23 ^ 0x18d5accde8938f77) >> 0x21) *
              unaff_x20;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x20;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x21;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
        pcStack_60[lVar7 + 0x13] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar7 + unaff_x22 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x12);
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 0x13;
    func_0x0011ab24(&pcStack_60);
    func_0x007a1b5c(param_1,"%s");
LAB_0020a698:
    pbVar3 = (byte *)(*pcRam0000000002076980)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d8688();
    }
    pcStack_70 = (char *)(*pcRam0000000002076968)();
    if (*pcStack_70 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x23 ^ 0x9017934e08935af1 ^ (unaff_x23 ^ 0x9017934e08935af1) >> 0x21) *
              unaff_x20;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x20;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x21;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
        pcStack_70[lVar7 + 0x13] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar5 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar7 + unaff_x22 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x12);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0x13;
    func_0x0011ab24(&pcStack_70);
    func_0x007a1b5c(param_1,"%s");
  } while( true );
}

