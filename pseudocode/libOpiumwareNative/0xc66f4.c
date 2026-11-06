/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xc66f4:360bde70c1
 */

undefined8 FUN_000c66f4(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar9;
  long lVar10;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) goto LAB_000c7788;
  iVar2 = func_0x00791efc(param_1,2);
  if (iVar2 == 0) goto LAB_000c7b90;
  iVar2 = func_0x00791be4(param_1,3);
  if ((iVar2 != 1) && (iVar2 = func_0x00791db8(param_1,3), iVar2 == 0)) goto LAB_000c7f98;
  pbVar3 = (byte *)(*pcRam00000000020691b0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c3608();
  }
  unaff_x20 = -0xae502812aa7333;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  unaff_x21 = -0x3b314601e57a13ad;
  unaff_x22 = -0x61c8864680b583eb;
  unaff_x23 = 0x8ebc6af09c88c6e3;
  pcStack_60 = (char *)(*pcRam0000000002069198)();
  if (*pcStack_60 == '\x01') {
    uVar1 = (byte)pcStack_60[1] ^ 0x80a80255;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xafacc902 ^ 0x4e9415;
    pcStack_60[5] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x6a;
    uVar7 = (((ulong)(byte)pcStack_60[1] ^ 0x5a4eecb5f324dcdd) << 0x11 | 0xb49d) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_60[6] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_60[7] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    pcStack_60[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar6;
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 5;
  uVar4 = func_0x0011ab24(&pcStack_60);
  func_0x007935a0(param_1,1,uVar4);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam00000000020691e0)();
  if ((*pbVar3 & 1) == 0) {
/* do not claim this as your own - github.com/pengussy */
    func_0x019c3644();
  }
  pcStack_68 = (char *)(*pcRam00000000020691c8)();
  if (*pcStack_68 == '\x01') {
    uVar1 = (byte)pcStack_68[1] ^ 0xb3bebbc4;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xa345db68 ^ 0x2f972f;
    pcStack_68[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - 7;
    uVar7 = (((ulong)(byte)pcStack_68[1] ^ 0x12cbccc2c4fafc52) << 0x11 | 0x2597) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* WM - watermarked copy - do not remove */
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[9] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    pcStack_68[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar6;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 10;
  uVar4 = func_0x0011ab24(&pcStack_68);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if ((iVar2 != 0) || (iVar2 = func_0x00792220(param_1,0xffffffff), iVar2 == 0)) {
/* no support for modified copies - github.com/pengussy */
    pbVar3 = (byte *)(*pcRam0000000002069210)();
    if ((*pbVar3 & 1) == 0) goto LAB_000c80dc;
    goto LAB_000c7490;
  }
  func_0x00791660(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam0000000002069240)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c3680();
  }
  pcStack_70 = (char *)(*pcRam0000000002069228)();
  if (*pcStack_70 == '\x01') {
    uVar1 = (byte)pcStack_70[1] ^ 0x24ac7209;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xcec1844a;
    pcStack_70[5] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0xb1 ^ 0xca;
    uVar7 = (((ulong)(byte)pcStack_70[1] ^ 0x3d4a88eb410ee55) << 0x11 | 0x7a9) + 0x9e3779b97f4a7c15;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_70[6] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_70[7] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar6 >> 0x17);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    pcStack_70[8] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar6
    ;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 5;
  uVar4 = func_0x0011ab24(&pcStack_70);
  func_0x007935a0(param_1,2,uVar4);
  func_0x00791ab0(param_1,2);
  pbVar3 = (byte *)(*pcRam0000000002069270)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c36bc();
  }
  pcStack_78 = (char *)(*pcRam0000000002069258)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0x550739be;
/* WM - unlicensed copy if this notice is missing */
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x99037af6;
    pcStack_78[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x7d;
    uVar7 = (((ulong)(byte)pcStack_78[1] ^ 0xe6cbf104cf6f8996) << 0x11 | 0x1cd97) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
/* WM - origin: github.com/pengussy */
    uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
// WM - more drops soon - github.com/pengussy
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[9] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_78[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar6;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 10;
  uVar4 = func_0x0011ab24(&pcStack_78);
  func_0x00792f00(param_1,uVar4);
  iVar2 = func_0x00794a14(param_1,2,1,0);
  if (iVar2 != 0) goto LAB_000c757c;
  iVar2 = func_0x00792220(param_1,0xffffffff);
  if (iVar2 == 0) goto LAB_000c757c;
  func_0x00791660(param_1,0xfffffffe);
  plVar5 = (long *)func_0x007926a8(param_1,1);
/* keep the notice, keep the source honest - github.com/pengussy */
  lVar9 = *plVar5;
  plVar5 = (long *)func_0x007926a8(param_1,2);
  lVar10 = *plVar5;
  iVar2 = func_0x00791be4(param_1,3);
  if (iVar2 == 1) {
    func_0x00792220(param_1,3);
    lVar9 = *(long *)(lRam0000000001f26660 + lVar9);
  }
  else {
    iVar2 = func_0x00791db8(param_1,3);
    if (iVar2 == 0) {
      lVar9 = *(long *)(lRam0000000001f26660 + lVar9);
    }
    else {
      func_0x00792168(param_1,3,0);
      lVar9 = *(long *)(lRam0000000001f26660 + lVar9);
    }
  }
  if (((lVar9 != 0) && (*(long *)(lRam0000000001f26660 + lVar10) != 0)) &&
     (*(long *)(lRam0000000001f26670 + lVar9) ==
      *(long *)(lRam0000000001f26670 + *(long *)(lRam0000000001f26660 + lVar10)))) {
    (*pcRam0000000001f26e20)();
    return 0;
  }
  do {
    pbVar3 = (byte *)(*pcRam00000000020692d0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c36f8();
// watermarked copy - do not remove
    }
    pcStack_80 = (char *)(*pcRam00000000020692b8)();
    if (*pcStack_80 == '\x01') {
      lVar9 = 0;
      uVar7 = (unaff_x23 ^ 0x392b137535ab4d15 ^ (unaff_x23 ^ 0x392b137535ab4d15) >> 0x21) *
              unaff_x20;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * unaff_x21;
      uVar7 = uVar7 ^ uVar7 >> 0x21;
      do {
        uVar6 = (uVar7 ^ uVar7 >> 0x21) * unaff_x20;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
        uVar8 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
        pcStack_80[lVar9 + 0x20] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar7 = lVar9 + unaff_x22 + (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_80[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x1f);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0x20;
    func_0x0011ab24(&pcStack_80);
    func_0x007a1b5c(param_1,"%s");
LAB_000c7788:
    pbVar3 = (byte *)(*pcRam0000000002069120)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c37e8();
    }
    pcStack_a0 = (char *)(*pcRam0000000002069108)();
    if (*pcStack_a0 == '\x01') {
// reversing this took months of machine time
      uVar1 = (byte)pcStack_a0[1] ^ 0x870efc6e;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xa639910f ^ 0x18d671;
      pcStack_a0[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x53;
      uVar7 = (((ulong)(byte)pcStack_a0[1] ^ 0xe9a5dbc1166e7b95) << 0x11 | 0x1d34b) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a0[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a0[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a0[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar8 ^ 0xffffffc3;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a0[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a0[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a0[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a0[0x11] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_a0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[9] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_a0[0x12] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar6;
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 10;
    uVar4 = func_0x0011ab24(&pcStack_a0);
/* WM - reversing this took months of machine time */
    func_0x007a1ba8(param_1,1,uVar4);
LAB_000c7b90:
    pbVar3 = (byte *)(*pcRam0000000002069150)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c37ac();
    }
    pcStack_98 = (char *)(*pcRam0000000002069138)();
    if (*pcStack_98 == '\x01') {
      uVar1 = (byte)pcStack_98[1] ^ 0xf671a72c;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xd5be03ed ^ 0xca91;
      pcStack_98[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x11;
      uVar7 = (((ulong)(byte)pcStack_98[1] ^ 0x9a6c912ef47fc903) << 0x11 | 0x134d9) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
// WM - reversing this took months of machine time
      uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[0x11] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar6 ^ 0xffffffc3;
/*  unlicensed copy if this notice is missing  */
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_98[0x12] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar6;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 10;
    uVar4 = func_0x0011ab24(&pcStack_98);
    func_0x007a1ba8(param_1,2,uVar4);
LAB_000c7f98:
    pbVar3 = (byte *)(*pcRam0000000002069180)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c35cc();
    }
    pcStack_58 = (char *)(*pcRam0000000002069168)();
    if (*pcStack_58 == '\x01') {
      lVar9 = 0;
      uVar7 = 0xcc9b869eda8ccd1e;
      do {
        uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
        pcStack_58[lVar9 + 0x13] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar8;
/*  no support for modified copies  */
        uVar7 = lVar9 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_58[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x12);
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 0x13;
    uVar4 = func_0x0011ab24(&pcStack_58);
    func_0x007a1ba8(param_1,3,uVar4);
LAB_000c80dc:
    func_0x019c3770();
LAB_000c7490:
    pcStack_90 = (char *)(*pcRam00000000020691f8)();
    if (*pcStack_90 == '\x01') {
      lVar9 = 0;
      uVar7 = (unaff_x23 ^ 0x2167ece911a78a09 ^ (unaff_x23 ^ 0x2167ece911a78a09) >> 0x21) *
              unaff_x20;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * unaff_x21;
      uVar7 = uVar7 ^ uVar7 >> 0x21;
      do {
        uVar6 = (uVar7 ^ uVar7 >> 0x21) * unaff_x20;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
        uVar8 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar6 >> 0x29) | 1);
        pcStack_90[lVar9 + 0x13] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
        uVar7 = lVar9 + unaff_x22 + (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_90[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x12);
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0x13;
    uVar4 = func_0x0011ab24(&pcStack_90);
    func_0x007a1abc(param_1,1,uVar4);
LAB_000c757c:
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    pbVar3 = (byte *)(*pcRam00000000020692a0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c3734();
    }
    pcStack_88 = (char *)(*pcRam0000000002069288)();
    if (*pcStack_88 == '\x01') {
      lVar9 = 0;
      uVar7 = (unaff_x23 ^ 0x9bcc781782927a19 ^ (unaff_x23 ^ 0x9bcc781782927a19) >> 0x21) *
              unaff_x20;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * unaff_x21;
      uVar7 = uVar7 ^ uVar7 >> 0x21;
      do {
        uVar6 = (uVar7 ^ uVar7 >> 0x21) * unaff_x20;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
        uVar8 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
        pcStack_88[lVar9 + 0x13] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
        uVar7 = lVar9 + unaff_x22 + (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x12);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x13;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uVar4 = func_0x0011ab24(&pcStack_88);
    func_0x007a1abc(param_1,2,uVar4);
  } while( true );
}

