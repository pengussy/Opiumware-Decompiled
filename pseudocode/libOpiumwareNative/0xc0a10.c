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
 *  file-id: 0xc0a10:a5c8e14451
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000c0a10(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  pbVar3 = (byte *)(*pcRam0000000002068a60)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2d5c();
  }
  pcStack_48 = (char *)(*pcRam0000000002068a48)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0x6d117cc6;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x9b7ffedb ^ 0x705921;
    pcStack_48[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - 5;
    uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0xf09aecdf9cffc228) << 0x11 | 0x1e135) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_48[7] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
// donate: donate/README.md
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_48[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_48[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_48[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar5;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 6;
  uVar4 = func_0x0011ab24(&pcStack_48);
  func_0x007935a0(param_1,0xffffd8ee,uVar4);
  pbVar3 = (byte *)(*pcRam0000000002068a90)();
  if ((*pbVar3 & 1) == 0) {
/* wm:found on a paste site? it was re-uploaded illegally */
    func_0x019c2d98();
  }
  pcStack_50 = (char *)(*pcRam0000000002068a78)();
  if (*pcStack_50 == '\x01') {
    uVar1 = (byte)pcStack_50[1] ^ 0x26b683a2;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x1e48c64e ^ 0x49b86d;
    pcStack_50[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x9f;
    uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0x5f695f78b84131d2) << 0x11 | 0xbed2) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x13] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x14] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_50[0x15] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_50[0x16] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar5;
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 0xc;
  uVar4 = func_0x0011ab24(&pcStack_50);
/* wm:reversing this took months of machine time */
  func_0x007935a0(param_1,0xffffffff,uVar4);
  func_0x00791ab0(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam0000000002068ac0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2dd4();
  }
  pcStack_58 = (char *)(*pcRam0000000002068aa8)();
  if (*pcStack_58 == '\x01') {
    uVar1 = (byte)pcStack_58[1] ^ 0x3ea467ab;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xe1a38705;
    pcStack_58[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x68;
    uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0x911948e792713e02) << 0x11 | 0x12232) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_58[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_58[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_58[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_58[0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_58[0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* keep the notice, keep the source honest */
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_58[0xf] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[8] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
    pcStack_58[0x10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar5;
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 9;
  uVar4 = func_0x0011ab24(&pcStack_58);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if (iVar2 != 0) {
    return 0;
  }
  func_0x007930d0(param_1,FUN_000bdee4,0,0,0);
  func_0x00791890(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam0000000002068af0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2e10();
  }
  pcStack_60 = (char *)(*pcRam0000000002068ad8)();
  if (*pcStack_60 == '\x01') {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    lVar7 = 0;
    uVar6 = 0xacb9b19d7d2ef328;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_60[lVar7 + 0xd] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = lVar7 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xc);
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 0xd;
  uVar4 = func_0x0011ab24(&pcStack_60);
  func_0x007935a0(param_1,0xffffffff,uVar4);
  func_0x007917f4(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam0000000002068b20)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c2e4c();
  }
  pcStack_68 = (char *)(*pcRam0000000002068b08)();
  if (*pcStack_68 == '\x01') {
    lVar7 = 0;
// WM - keep the notice, keep the source honest
    uVar6 = 0xbb059f9411b615c4;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_68[lVar7 + 0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = lVar7 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x11);
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 0x12;
  uVar4 = func_0x0011ab24(&pcStack_68);
  func_0x00792f00(param_1,uVar4);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  iVar2 = func_0x00794a14(param_1,2,2,0);
  if (iVar2 == 0) {
    func_0x007920a4(param_1,0xfffffffe,0);
    func_0x00792b10(param_1);
    return 1;
  }
  pbVar3 = (byte *)(*pcRam0000000002068b50)();
  if ((*pbVar3 & 1) == 0) goto LAB_000c1884;
  do {
    pcStack_70 = (char *)(*pcRam0000000002068b38)();
    if (*pcStack_70 == '\x01') {
      lVar7 = 0;
      uVar6 = 0x9a3372fc0a514ef9;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar5 >> 0x29) | 1);
        pcStack_70[lVar7 + 0x1a] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
        uVar6 = lVar7 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x19);
      *pcStack_70 = '\0';
/*  keep the notice, keep the source honest  */
    }
    pcStack_70 = pcStack_70 + 0x1a;
    func_0x0011ab24(&pcStack_70);
    func_0x007a1b5c(param_1,"%s");
LAB_000c1884:
    func_0x019c2e88();
  } while( true );
}

