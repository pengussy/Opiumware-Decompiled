/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x249e24:7fe1b3c4bf
 */

undefined1  [16] FUN_00249e24(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  
  iVar2 = func_0x00791be4();
  if ((iVar2 != 7) && (iVar2 = func_0x00791efc(param_1,param_2), iVar2 == 0)) {
    pbVar3 = (byte *)(*pcRam00000000020787b0)();
    if ((*pbVar3 & 1) == 0) goto LAB_0024a5b8;
    do {
      pcStack_68 = (char *)(*pcRam0000000002078798)();
      if (*pcStack_68 == '\x01') {
        uVar1 = (byte)pcStack_68[1] ^ 0xe253cbfc;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x6bac0fc5;
        pcStack_68[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - 0x15 ^ 0x3f;
        uVar7 = (((ulong)(byte)pcStack_68[1] ^ 0xd594dea1cd7a125d) << 0x11 | 0x1ab29) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
/* wm:origin: github.com/pengussy */
        pcStack_68[10] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
        pcStack_68[0xb] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
        pcStack_68[0xc] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
        pcStack_68[0xd] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
        pcStack_68[0xe] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
/* stripping the watermark breaks the license - github.com/pengussy */
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
        pcStack_68[0xf] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
        pcStack_68[0x10] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        *pcStack_68 = '\0';
// WM - thanks for reading - discord.gg/sdkhDjTex
      }
      pcStack_68 = pcStack_68 + 9;
      uVar4 = func_0x0011ab24(&pcStack_68);
      func_0x007a1ba8(param_1,param_2,uVar4);
LAB_0024a5b8:
      func_0x019dd318();
    } while( true );
  }
  pbVar3 = (byte *)(*pcRam00000000020787e0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019dd354();
  }
  pcStack_70 = (char *)(*pcRam00000000020787c8)();
  if (*pcStack_70 == '\x01') {
    uVar1 = (byte)pcStack_70[1] ^ 0x8d2a3c5c;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xe2e369e0;
    pcStack_70[3] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x9f;
/* donate: donate/README.md */
    uVar7 = (((ulong)(byte)pcStack_70[1] ^ 0x314b1dd3817ef9b1) << 0x11 | 0x6296) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_70[4] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 3;
  uVar4 = func_0x0011ab24(&pcStack_70);
  uVar5 = func_0x00791624(param_1,param_2);
  func_0x007935a0(param_1,uVar5,uVar4);
  iVar2 = func_0x00791db8(param_1,0xffffffff);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = func_0x007920a4(param_1,0xffffffff,0);
  }
  func_0x00791660(param_1,0xfffffffe);
  auVar10 = func_0x00249790(uVar4,param_1,param_2);
  uVar4 = auVar10._8_8_;
  pbVar3 = (byte *)(*pcRam0000000002078810)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019dd390();
  }
  pcStack_78 = (char *)(*pcRam00000000020787f8)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0x84f66987;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x8a6437b7;
    pcStack_78[3] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x44;
    uVar7 = (((ulong)(byte)pcStack_78[1] ^ 0xd95fe2c369d20697) << 0x11 | 0x1b2bf) +
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[4] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 3;
  uVar5 = func_0x0011ab24(&pcStack_78);
  uVar6 = func_0x00791624(param_1,param_2);
  func_0x007935a0(param_1,uVar6,uVar5);
  iVar2 = func_0x00791db8(param_1,0xffffffff);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = func_0x007920a4(param_1,0xffffffff,0);
  }
  func_0x00791660(param_1,0xfffffffe);
  func_0x00249790(uVar5,param_1,param_2);
  auVar10._8_8_ = uVar4;
  return auVar10;
}

