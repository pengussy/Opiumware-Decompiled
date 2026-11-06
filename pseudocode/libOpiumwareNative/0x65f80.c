/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x65f80:969e69f80f
 */

undefined8 FUN_00065f80(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar1 = func_0x00791be4(param_1,1);
  if ((iVar1 != 9) || (uVar2 = func_0x00792558(param_1,1), uVar2 < 8)) {
    pbVar4 = (byte *)(*pcRam0000000002062f40)();
    if ((*pbVar4 & 1) == 0) goto LAB_00066740;
    goto LAB_00066048;
  }
  puVar3 = (undefined8 *)func_0x007926a8(param_1,1);
  uVar9 = *puVar3;
  func_0x00793a78(param_1,0xffffd8f0,uRam0000000001f26a20,0);
  iVar1 = func_0x00791be4(param_1,0xffffffff);
  if (iVar1 == 7) {
    uVar9 = func_0x00793a78(param_1,0xffffffff,uVar9,0);
    func_0x007932d0(param_1,uVar9);
    return 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  }
  do {
    pbVar4 = (byte *)(*pcRam0000000002062f70)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019bc114();
    }
    pcStack_40 = (char *)(*pcRam0000000002062f58)();
    if (*pcStack_40 == '\x01') {
      uVar2 = (byte)pcStack_40[1] ^ 0x691729cd;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0xdb0418d3 ^ 0x59893f;
      pcStack_40[4] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - 0xe;
      uVar5 = (((ulong)(byte)pcStack_40[1] ^ 0x9b01f240512de55c) << 0x11 | 0x13603) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_40[5] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_40[6] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar7;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 4;
    uVar9 = func_0x0011ab24(&pcStack_40);
    pbVar4 = (byte *)(*pcRam0000000002062fa0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019bc150();
    }
    pcStack_48 = (char *)(*pcRam0000000002062f88)();
/* wm:proprietary - see LICENSE - do not sell */
    if (*pcStack_48 == '\x01') {
      lVar6 = 0;
      uVar5 = 0xd8d0eafbddf3d686;
      do {
        uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_48[lVar6 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
        pcStack_48[lVar6 + 0x1c] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar8;
        uVar5 = lVar6 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_48[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x1b);
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 0x1c;
    func_0x0011ab24(&pcStack_48);
    func_0x007a1b5c(param_1,uVar9);
LAB_00066740:
    func_0x019bc0d8();
LAB_00066048:
    pcStack_38 = (char *)(*pcRam0000000002062f28)();
    if (*pcStack_38 == '\x01') {
      uVar2 = (byte)pcStack_38[1] ^ 0xccd7b620;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0x6581e99a ^ 0x28669f;
      pcStack_38[10] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) + 0x1d;
      uVar5 = (((ulong)(byte)pcStack_38[1] ^ 0x84e7f2bb66b2dcd8) << 0x11 | 0x109cf) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
/* donate: donate/README.md - github.com/pengussy */
      uVar2 = (uint)(byte)pcStack_38[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xb] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
// do not claim this as your own
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xf] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0x10] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
/* wm:found on a paste site? it was re-uploaded illegally */
      pcStack_38[0x11] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_38[0x12] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar7;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 10;
    uVar9 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar9);
  } while( true );
}

