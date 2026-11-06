/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1ffe8c:0c0158e6e8
 */

undefined8 FUN_001ffe8c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_50;
  char *pcStack_48;
  
  func_0x00791660(param_1,0);
  pbVar3 = (byte *)(*pcRam0000000002075fc0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d7a94();
  }
  pcStack_48 = (char *)(*pcRam0000000002075fa8)();
  if (*pcStack_48 == '\x01') {
    lVar5 = 0;
    uVar6 = 0x5667b8dfb3ba45a1;
    do {
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_48[lVar5 + 0x35] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      uVar6 = lVar5 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[lVar5 + 1]) << 0x11);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x34);
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 0x35;
  uVar4 = func_0x0011ab24(&pcStack_48);
  func_0x00792f00(param_1,uVar4);
  pbVar3 = (byte *)(*pcRam0000000002075ff0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d7ad0();
  }
  pcStack_50 = (char *)(*pcRam0000000002075fd8)();
  if (*pcStack_50 == '\x01') {
    uVar1 = (byte)pcStack_50[1] ^ 0xbc804552;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xf4076b7a;
    pcStack_50[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 1 ^ 0x91;
    uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0xf620fe3af8ab6c40) << 0x11 | 0x1ec41) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// chat: discord.gg/sdkhDjTex
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0xc] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0xd] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0xe] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0xf] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0x10] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0x11] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0x12] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_50[0x13] =
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[10] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
    pcStack_50[0x14] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 0xb;
  uVar4 = func_0x0011ab24(&pcStack_50);
  func_0x00792f00(param_1,uVar4);
  func_0x00792bf4(param_1,4);
  FUN_001ff48c(param_1);
  iVar2 = func_0x00792168(param_1,0xffffffff,0);
  uRam0000000002097055 = iVar2 == 6;
  return 0;
}

