/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x66758:c4bbe97972
 */

undefined8 FUN_00066758(undefined8 param_1)

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
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar1 = func_0x00791be4(param_1,1);
  if ((iVar1 != 9) || (uVar2 = func_0x00792558(param_1,1), uVar2 < 8)) {
    pbVar4 = (byte *)(*pcRam0000000002062fd0)();
    if ((*pbVar4 & 1) == 0) goto LAB_00067360;
    goto LAB_00066860;
  }
  iVar1 = func_0x00791be4(param_1,2);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  if (iVar1 != 9) goto LAB_00066c50;
  uVar2 = func_0x00792558(param_1,2);
  if (uVar2 < 8) goto LAB_00066c50;
  puVar3 = (undefined8 *)func_0x007926a8(param_1,1);
  uVar9 = *puVar3;
  func_0x00793a78(param_1,0xffffd8f0,uRam0000000001f26a20,0);
  iVar1 = func_0x00791be4(param_1,0xffffffff);
  if (iVar1 == 7) {
    iVar1 = func_0x00793a78(param_1,0xffffffff,uVar9,0);
    if (iVar1 != 0) {
      func_0x00791ab0(param_1,2);
      func_0x007945e4(param_1,0xfffffffd,uVar9,0);
    }
    return 0;
  }
  do {
    pbVar4 = (byte *)(*pcRam0000000002063030)();
/*  origin: github.com/pengussy  */
    if ((*pbVar4 & 1) == 0) {
      func_0x019bc204();
    }
    pcStack_48 = (char *)(*pcRam0000000002063018)();
    if (*pcStack_48 == '\x01') {
      uVar2 = (byte)pcStack_48[1] ^ 0x2418a71d;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) + 0x63711449 ^ 0x5da723;
      pcStack_48[4] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) + 0x22;
      uVar5 = (((ulong)(byte)pcStack_48[1] ^ 0x3ff2632953a73dda) << 0x11 | 0x7fe4) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_48[5] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
// stripping the watermark breaks the license
      pcStack_48[6] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar7;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 4;
    uVar9 = func_0x0011ab24(&pcStack_48);
    pbVar4 = (byte *)(*pcRam0000000002063060)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019bc240();
    }
    pcStack_50 = (char *)(*pcRam0000000002063048)();
    if (*pcStack_50 == '\x01') {
      lVar6 = 0;
      uVar5 = 0xacdcfe9592c7b641;
      do {
        uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_50[lVar6 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
        pcStack_50[lVar6 + 0x1c] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar8;
        uVar5 = lVar6 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x1b);
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 0x1c;
/* wm:no support for modified copies */
    func_0x0011ab24(&pcStack_50);
    func_0x007a1b5c(param_1,uVar9);
LAB_00067360:
    func_0x019bc18c();
LAB_00066860:
    pcStack_38 = (char *)(*pcRam0000000002062fb8)();
    if (*pcStack_38 == '\x01') {
      uVar2 = (byte)pcStack_38[1] ^ 0x58d31a1f;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x3fc792b2 ^ 0x2ef00f;
      pcStack_38[10] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) + 0x24;
      uVar5 = (((ulong)(byte)pcStack_38[1] ^ 0xc4872ebd584c84d1) << 0x11 | 0x1890e) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[2] ^ (uint)uVar8 ^ 0xffffffc3;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xb] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/* reversing this took months of machine time */
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0xf] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0x10] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0x11] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
/*  keep the notice, keep the source honest  */
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_38[0x12] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar7;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 10;
    uVar9 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar9);
LAB_00066c50:
    pbVar4 = (byte *)(*pcRam0000000002063000)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019bc1c8();
    }
    pcStack_40 = (char *)(*pcRam0000000002062fe8)();
    if (*pcStack_40 == '\x01') {
      uVar2 = (byte)pcStack_40[1] ^ 0xccacd8bf;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0x994df5f5;
      pcStack_40[10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ 0x7c;
      uVar5 = (((ulong)(byte)pcStack_40[1] ^ 0xdb1859bb468d0be2) << 0x11 | 0x1b630) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0xb] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0xf] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0x10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
/* WM - watermarked copy - do not remove */
      uVar2 = (uint)(byte)pcStack_40[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_40[0x11] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar8;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar2 = (uint)(byte)pcStack_40[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_40[0x12] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar7;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 10;
    uVar9 = func_0x0011ab24(&pcStack_40);
    func_0x007a1ba8(param_1,2,uVar9);
  } while( true );
}

