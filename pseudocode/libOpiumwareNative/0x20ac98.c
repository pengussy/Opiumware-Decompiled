/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x20ac98:e5991c213c
 */

undefined8 FUN_0020ac98(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcStack_28;
  
  iVar2 = func_0x00791db8(param_1,1);
  if (iVar2 != 0) {
    uVar3 = func_0x00792168(param_1,1,0);
    if ((uint)uVar3 < 0xd) {
      func_0x0003bf9c(param_1,uVar3);
    }
    return 0;
  }
  pbVar4 = (byte *)(*pcRam0000000002076a40)();
  if ((*pbVar4 & 1) == 0) goto LAB_0020b040;
  do {
    pcStack_28 = (char *)(*pcRam0000000002076a28)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xfd8187b7;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x344505fc ^ 0x32f2ef;
      pcStack_28[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x8c;
      uVar5 = (((ulong)(byte)pcStack_28[1] ^ 0xbd2a0e529664309e) << 0x11 | 0x17a54) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
/* WM - stripping the watermark breaks the license */
      pcStack_28[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_28[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_28[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_28[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_28[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
// WM - thanks for reading - discord.gg/sdkhDjTex
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_28[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar6;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 8;
    uVar3 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar3);
LAB_0020b040:
    func_0x019d87b4();
  } while( true );
}

