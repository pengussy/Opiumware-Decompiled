/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1e9458:8a47bdc2c9
   =========================================================================== */

void FUN_001e9458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_40;
  char *pcStack_38;
  
  func_0x00791230(param_3,param_1,1);
  uVar2 = func_0x00801e44(param_1,param_2);
  if ((uVar2 < 7) && ((1 << (ulong)(uVar2 & 0x1f) & 0x43U) != 0)) {
    return;
  }
  lVar3 = func_0x00792368(param_1,0xffffffff,0);
  pcVar1 = pcRam0000000001f26db0;
  pbVar4 = (byte *)(*pcRam00000000020755d0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d5bd8();
  }
  pcStack_38 = (char *)(*pcRam00000000020755b8)();
  if (*pcStack_38 == '\x01') {
/* wm:proprietary - see LICENSE - do not sell */
    lVar6 = 0;
    uVar7 = 0xc6bde43ed4ed1819;
    do {
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[lVar6 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar9 >> 0x17);
      pcStack_38[lVar6 + 0x1e] =
           ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = lVar6 + -0x61c8864680b583eb +
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[lVar6 + 1]) << 0x11);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x1d);
    *pcStack_38 = '\0';
  }
  pcStack_38 = pcStack_38 + 0x1e;
  uVar5 = func_0x0011ab24(&pcStack_38);
  if (lVar3 == 0) {
    pbVar4 = (byte *)(*pcRam0000000002075600)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019d5c14();
    }
    pcStack_40 = (char *)(*pcRam00000000020755e8)();
    if (*pcStack_40 == '\x01') {
      uVar2 = (byte)pcStack_40[1] ^ 0xf3d420a3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x69257e4f;
      pcStack_40[9] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ 0x60;
      uVar7 = (((ulong)(byte)pcStack_40[1] ^ 0x3991d58440c7b43e) << 0x11 | 0x7323) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
/* wm:stripping the watermark breaks the license */
      uVar2 = (uint)(byte)pcStack_40[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_40[10] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_40[0xb] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_40[0xc] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_40[0xd] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_40[0xe] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_40[0xf] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_40[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0x10] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar8;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 9;
    func_0x0011ab24(&pcStack_40);
  }
  (*pcVar1)(2,uVar5);
  return;
}

