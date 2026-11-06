/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xb1378:f5931ee6e1
   =========================================================================== */

undefined8 FUN_000b1378(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcStack_28;
  
  iVar2 = func_0x00791db8(param_1,1);
  if (iVar2 != 0) {
    func_0x00792168(param_1,1,0);
    func_0x000ae4ec();
    return 0;
  }
  pbVar3 = (byte *)(*pcRam0000000002067a70)();
/*  found on a paste site? it was re-uploaded illegally  */
  if ((*pbVar3 & 1) == 0) goto LAB_000b1710;
  do {
    pcStack_28 = (char *)(*pcRam0000000002067a58)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xf356445e;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xf08f13e7;
      pcStack_28[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x23 ^ 0x9d;
      uVar5 = (((ulong)(byte)pcStack_28[1] ^ 0x69a368b6fbaaeb83) << 0x11 | 0xd346) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
      pcStack_28[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
      pcStack_28[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
/* WM - no support for modified copies */
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
      pcStack_28[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
      pcStack_28[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
      pcStack_28[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
// WM - found on a paste site? it was re-uploaded illegally
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar6 >> 0x17);
      pcStack_28[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar6;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 8;
    uVar4 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_000b1710:
    func_0x019c1970();
  } while( true );
}

