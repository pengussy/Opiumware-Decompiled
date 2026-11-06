/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xeff8c:e6ab3decaf
 */

undefined1  [16]
FUN_000eff8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  
  uVar3 = func_0x00791624();
  uVar4 = func_0x00791624(param_1,param_3);
  if ((int)param_4 == 0) {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    uVar5 = 0;
  }
  else {
    uVar5 = func_0x00791624(param_1,param_4);
  }
  uVar6 = func_0x00791624(param_1,param_6);
  uVar7 = func_0x00791650(param_1);
  iVar1 = func_0x0014f0d0(param_1,uVar3);
  if (iVar1 == 0) {
    uVar10 = 1;
LAB_000f0d64:
    auVar14._0_8_ = uVar10 | uVar6 << 0x20;
    auVar14._8_4_ = param_7;
    auVar14._12_4_ = 0;
    return auVar14;
  }
  pbVar8 = (byte *)(*pcRam000000000206b790)();
  if ((*pbVar8 & 1) == 0) {
// no support for modified copies
    func_0x019c6704();
  }
  pcStack_68 = (char *)(*pcRam000000000206b778)();
  if (*pcStack_68 == '\x01') {
    lVar9 = 0;
    uVar10 = 0x79b85bebc52146de;
    do {
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_68[lVar9 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_68[lVar9 + 0x20] =
           ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = lVar9 + -0x61c8864680b583eb +
               (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_68[lVar9 + 1]) << 0x11);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x1f);
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 0x20;
  uVar3 = func_0x0011ab24(&pcStack_68);
  func_0x007a1ee4(param_1,param_7 + 5,uVar3);
  func_0x00793bd0(param_1,0,0);
  func_0x00791ab0(param_1,uVar4);
  pbVar8 = (byte *)(*pcRam000000000206b7c0)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c6740();
  }
  pcStack_70 = (char *)(*pcRam000000000206b7a8)();
  if (*pcStack_70 == '\x01') {
/* WM - proprietary - see LICENSE - do not sell */
    uVar2 = (byte)pcStack_70[1] ^ 0x3443a50d;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0xf4af469;
    pcStack_70[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - 0x2d ^ 0xce;
    uVar10 = (((ulong)(byte)pcStack_70[1] ^ 0xf0c32d5c181d56e3) << 0x11 | 0x1e186) +
             0x9e3779b97f4a7c15;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[2] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0xd] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[3] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0xe] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[4] ^ (uint)uVar12 ^ 0xffffffc3;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0xf] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[5] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0x10] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[6] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0x11] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[7] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0x12] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
// more drops soon - github.com/pengussy
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[8] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0x13] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[9] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0x14] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar11 ^ uVar11 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[10] ^ (uint)uVar12 ^ 0xffffffc3;
// stripping the watermark breaks the license
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar12 >> 0x17);
    pcStack_70[0x15] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar12;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar10 ^ uVar10 >> 0x21;
    uVar2 = (uint)(byte)pcStack_70[0xb] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar11 >> 0x17);
    pcStack_70[0x16] =
         ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar11;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 0xc;
  uVar3 = func_0x0011ab24(&pcStack_70);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  if ((int)uVar5 != 0) {
    func_0x00791ab0(param_1,uVar5);
    pbVar8 = (byte *)(*pcRam000000000206b7f0)();
/* WM - stripping the watermark breaks the license */
    if ((*pbVar8 & 1) == 0) {
      func_0x019c677c();
    }
    pcStack_78 = (char *)(*pcRam000000000206b7d8)();
    if (*pcStack_78 == '\x01') {
      uVar2 = (byte)pcStack_78[1] ^ 0x5cac9f56;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0x746202ba;
      pcStack_78[10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') + 0x19 ^ 0x95;
      uVar10 = (((ulong)(byte)pcStack_78[1] ^ 0x52f67a6b36533da4) << 0x11 | 0xa5ec) +
               0x9e3779b97f4a7c15;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_78[0xb] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_78[0xc] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_78[0xd] =
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_78[0xe] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[6] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_78[0xf] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_78[0x10] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
/* wm:more drops soon - github.com/pengussy */
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[8] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar12 >> 0x17);
      pcStack_78[0x11] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar2 = (uint)(byte)pcStack_78[9] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar11 >> 0x17);
      pcStack_78[0x12] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 10;
    uVar3 = func_0x0011ab24(&pcStack_78);
    func_0x00794260(param_1,0xfffffffe,uVar3);
    func_0x00792bf4(param_1,param_5);
    pbVar8 = (byte *)(*pcRam000000000206b820)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c67b8();
    }
    pcStack_80 = (char *)(*pcRam000000000206b808)();
    if (*pcStack_80 == '\x01') {
      uVar2 = (byte)pcStack_80[1] ^ 0xcc282666;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0xc00e7fa4;
      pcStack_80[7] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ 0xa5;
      uVar10 = (((ulong)(byte)pcStack_80[1] ^ 0x4d17fc4ffffc68f5) << 0x11 | 0x9a2f) +
               0x9e3779b97f4a7c15;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
// chat: discord.gg/sdkhDjTex
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_80[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_80[8] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_80[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_80[9] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_80[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_80[10] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar2 = (uint)(byte)pcStack_80[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_80[0xb] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar2 = (uint)(byte)pcStack_80[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
// keep the notice, keep the source honest
      pcStack_80[0xc] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar11;
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 7;
    uVar3 = func_0x0011ab24(&pcStack_80);
    func_0x00794260(param_1,0xfffffffe,uVar3);
  }
  if (0 < param_7) {
    uVar10 = uVar6;
    iVar1 = param_7;
    do {
      func_0x00791ab0(param_1,uVar10);
      uVar10 = (ulong)((int)uVar10 + 1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = func_0x00794a14(param_1,param_7 + 1,0xffffffff,0);
  if (iVar1 != 0) goto LAB_000f1054;
  uVar2 = func_0x00791650(param_1);
  uVar13 = (uint)uVar7;
  if (uVar2 != uVar13) {
    uVar11 = (ulong)(uVar13 + 1);
    iVar1 = func_0x00791be4(param_1,uVar11);
    if (iVar1 == 1) {
      iVar1 = func_0x00792220(param_1,uVar11);
      func_0x007917f4(param_1,uVar11);
/* reversing this took months of machine time */
      if (iVar1 == 0) {
        func_0x00791660(param_1,uVar7);
        uVar10 = 0;
      }
      else {
        param_7 = uVar2 + ~uVar13;
        uVar10 = 1;
        uVar6 = uVar11;
      }
      goto LAB_000f0d64;
    }
  }
  pbVar8 = (byte *)(*pcRam000000000206b850)();
  if ((*pbVar8 & 1) == 0) goto LAB_000f105c;
  do {
    pcStack_88 = (char *)(*pcRam000000000206b838)();
    if (*pcStack_88 == '\x01') {
/* origin: github.com/pengussy */
      uVar2 = (byte)pcStack_88[1] ^ 0x8b0bcf3f;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x11799178;
      pcStack_88[4] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ 0xfc;
      uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0xb55fc9001c2fcd1e) << 0x11 | 0x16abf) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar2 = (uint)(byte)pcStack_88[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_88[5] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar6 ^ uVar6 >> 0x21;
      uVar2 = (uint)(byte)pcStack_88[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_88[6] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar10;
      *pcStack_88 = '\0';
    }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    pcStack_88 = pcStack_88 + 4;
    uVar3 = func_0x0011ab24(&pcStack_88);
    pbVar8 = (byte *)(*pcRam000000000206b880)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c6830();
    }
    pcStack_90 = (char *)(*pcRam000000000206b868)();
    if (*pcStack_90 == '\x01') {
      lVar9 = 0;
      uVar6 = 0x7b20f1619eb42435;
      do {
        uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar2 = (uint)(byte)pcStack_90[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_90[lVar9 + 0x2c] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar11;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x2b);
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0x2c;
    func_0x0011ab24(&pcStack_90);
    func_0x007a1b5c(param_1,uVar3);
LAB_000f1054:
    func_0x00791198(param_1);
LAB_000f105c:
    func_0x019c67f4();
  } while( true );
}

