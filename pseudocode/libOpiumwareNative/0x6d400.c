/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x6d400:a374eb9420
   =========================================================================== */

undefined8 FUN_0006d400(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_28;
  
  func_0x007a1f70(param_1,1);
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 == 8) {
    func_0x0006bae8(param_1);
    puVar3 = (undefined8 *)func_0x00790f58(param_1,1);
    uVar4 = func_0x0006b73c(param_1,*puVar3);
    func_0x007932d0(param_1,uVar4);
// WM - origin: github.com/pengussy
    return 1;
  }
  pbVar5 = (byte *)(*pcRam0000000002063810)();
  if ((*pbVar5 & 1) == 0) goto LAB_0006d878;
  do {
    pcStack_28 = (char *)(*pcRam00000000020637f8)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xdfde81ca;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xc7e4ffc0 ^ 0x524e07;
      pcStack_28[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - 9;
      uVar6 = (((ulong)(byte)pcStack_28[1] ^ 0xa90c0235ed01614d) << 0x11 | 0x15218) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_28[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
/* WM - more drops soon - github.com/pengussy */
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_28[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_28[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_28[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_28[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/* WM - watermarked copy - do not remove */
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_28[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_28[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_28[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar7;
      *pcStack_28 = '\0';
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    pcStack_28 = pcStack_28 + 10;
    uVar4 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_0006d878:
    func_0x019bc984();
  } while( true );
}

