/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xb1718:0a313c011e
   =========================================================================== */

undefined8 FUN_000b1718(undefined8 param_1)

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
    func_0x000ae688();
    return 0;
  }
  pbVar3 = (byte *)(*pcRam0000000002067aa0)();
  if ((*pbVar3 & 1) == 0) goto LAB_000b1ab0;
// unlicensed copy if this notice is missing
  do {
    pcStack_28 = (char *)(*pcRam0000000002067a88)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0x324d0761;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x245d30c;
      pcStack_28[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xa2;
      uVar5 = (((ulong)(byte)pcStack_28[1] ^ 0xe379b572559b84ab) << 0x11 | 0x1c6f3) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_28[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_28[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_28[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
/* WM - if you paid for this, you were scammed */
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_28[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_28[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
      pcStack_28[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar6;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 8;
    uVar4 = func_0x0011ab24(&pcStack_28);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_000b1ab0:
    func_0x019c19ac();
  } while( true );
/*  thanks for reading - discord.gg/sdkhDjTex  */
}

