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
 *  file-id: 0x108634:c1c5120844
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00791680) */
/* WARNING: Removing unreachable block (ram,0x007916a8) */
/* WARNING: Removing unreachable block (ram,0x007916b8) */
/* WARNING: Removing unreachable block (ram,0x007916bc) */
/* WARNING: Removing unreachable block (ram,0x007916c0) */
/* WARNING: Removing unreachable block (ram,0x007916c8) */
/* WARNING: Removing unreachable block (ram,0x007916dc) */
/* WARNING: Removing unreachable block (ram,0x007917dc) */
/* WARNING: Removing unreachable block (ram,0x0079182c) */
/* WARNING: Removing unreachable block (ram,0x00791848) */
/* WARNING: Removing unreachable block (ram,0x00791838) */
/* WARNING: Removing unreachable block (ram,0x00791808) */
/* WARNING: Removing unreachable block (ram,0x00791820) */
/* WARNING: Removing unreachable block (ram,0x00791874) */
/* WARNING: Removing unreachable block (ram,0x00791864) */
/* WARNING: Removing unreachable block (ram,0x0079187c) */
/* WARNING: Removing unreachable block (ram,0x00791700) */
/* WARNING: Removing unreachable block (ram,0x0079170c) */
/* WARNING: Removing unreachable block (ram,0x00791718) */
/* WARNING: Removing unreachable block (ram,0x0079171c) */
/* WARNING: Removing unreachable block (ram,0x0079172c) */
/* WARNING: Removing unreachable block (ram,0x0079173c) */
/* WARNING: Removing unreachable block (ram,0x00791778) */
/* WARNING: Removing unreachable block (ram,0x00791790) */
/* WARNING: Removing unreachable block (ram,0x007917ac) */
/* wm:found on a paste site? it was re-uploaded illegally */
/* WARNING: Removing unreachable block (ram,0x00791750) */
/* WARNING: Removing unreachable block (ram,0x007917b4) */
/* WARNING: Removing unreachable block (ram,0x007917c4) */

void FUN_00108634(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_b0 [128];
  
  pbVar2 = (byte *)(*pcRam000000000206d140)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c8688();
  }
  pcVar3 = (char *)(*pcRam000000000206d128)();
  if (*pcVar3 == '\x01') {
    uVar1 = (byte)pcVar3[1] ^ 0x120abe13;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x59cf625 ^ 0x71be99;
    pcVar3[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 0x30;
    uVar5 = (((ulong)(byte)pcVar3[1] ^ 0x8b4cd4c0de9b2d39) << 0x11 | 0x11699) + 0x9e3779b97f4a7c15;
// stripping the watermark breaks the license
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcVar3[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcVar3[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcVar3[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    uVar1 = (uint)(byte)pcVar3[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcVar3[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcVar3[0xf] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
/* stripping the watermark breaks the license - github.com/pengussy */
    pcVar3[0x10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[8] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcVar3[0x11] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[9] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcVar3[0x12] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar6;
    *pcVar3 = '\0';
  }
  uVar4 = func_0x0011ab24(auStack_b0 + 0x88);
  func_0x007a2350(param_1,uVar4,uRam0000000001f269a0);
  func_0x00793d18(param_1,0xffffffff,1);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

