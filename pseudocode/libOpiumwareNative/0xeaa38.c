/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xeaa38:1efd69ec47
 */

undefined8 FUN_000eaa38(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
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
  
/*  reversing this took months of machine time  */
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 7) {
    pbVar3 = (byte *)(*pcRam000000000206aef0)();
    if ((*pbVar3 & 1) == 0) goto LAB_000eda30;
    goto LAB_000ed068;
  }
  iVar2 = func_0x00791be4(param_1,2);
  if (iVar2 != 8) goto LAB_000ed3a0;
  func_0x00793bd0(param_1,0,0);
  func_0x007932d0(param_1,1);
  pbVar3 = (byte *)(*pcRam000000000206af50)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c61a0();
  }
  unaff_x21 = -0xae502812aa7333;
  unaff_x25 = -0x1288180e36f55d89;
  unaff_x22 = -0x3b314601e57a13ad;
  unaff_x23 = -0x61c8864680b583eb;
  unaff_x24 = 0x8ebc6af09c88c6e3;
  pcStack_68 = (char *)(*pcRam000000000206af38)();
  if (*pcStack_68 == '\x01') {
    uVar1 = (byte)pcStack_68[1] ^ 0x3e5881e7;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x24c09c7d;
    pcStack_68[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x31 ^ 0x24;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    uVar6 = (((ulong)(byte)pcStack_68[1] ^ 0xb8dfbca03e9c4958) << 0x11 | 0x171bf) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0xc] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0xd] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* keep the notice, keep the source honest - github.com/pengussy */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0xe] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0xf] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
/* reversing this took months of machine time */
    uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0x10] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0x11] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0x12] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar1 = (uint)(byte)pcStack_68[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
    pcStack_68[0x13] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar8
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[10] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar5 >> 0x17);
    pcStack_68[0x14] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar5
    ;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 0xb;
  uVar4 = func_0x0011ab24(&pcStack_68);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  func_0x007932d0(param_1,param_2);
  pbVar3 = (byte *)(*pcRam000000000206af80)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c61dc();
  }
  pcStack_70 = (char *)(*pcRam000000000206af68)();
  if (*pcStack_70 == '\x01') {
    uVar1 = (byte)pcStack_70[1] ^ 0x6fa5af01;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x2cbb7ee0 ^ 0x3ef4d1;
    pcStack_70[7] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x3e;
    uVar6 = (((ulong)(byte)pcStack_70[1] ^ 0x246a61098971f767) << 0x11 | 0x48d4) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_70[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
/* WM - watermarked copy - do not remove */
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_70[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_70[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_70[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
/* found on a paste site? it was re-uploaded illegally */
    pcStack_70[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar5;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 7;
  uVar4 = func_0x0011ab24(&pcStack_70);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  func_0x00791ab0(param_1,1);
  pbVar3 = (byte *)(*pcRam000000000206afb0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c6218();
  }
  pcStack_78 = (char *)(*pcRam000000000206af98)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0xa62b59c0;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x5dad1b4d;
    pcStack_78[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x6b ^ 3;
    uVar6 = (((ulong)(byte)pcStack_78[1] ^ 0x59cfd9732b0162c3) << 0x11 | 0xb39f) +
            0x9e3779b97f4a7c15;
/* stripping the watermark breaks the license - github.com/pengussy */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
    pcStack_78[10] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
    pcStack_78[0xb] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
// proprietary - see LICENSE - do not sell
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
    pcStack_78[0xc] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
    pcStack_78[0xd] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
    pcStack_78[0xe] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
    pcStack_78[0xf] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[8] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17);
    pcStack_78[0x10] =
         ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar5;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 9;
  uVar4 = func_0x0011ab24(&pcStack_78);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  func_0x00791ab0(param_1,2);
/* unlicensed copy if this notice is missing - github.com/pengussy */
  pbVar3 = (byte *)(*pcRam000000000206afe0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c6254();
  }
  pcStack_80 = (char *)(*pcRam000000000206afc8)();
  if (*pcStack_80 == '\x01') {
    uVar1 = (byte)pcStack_80[1] ^ 0xcb06fa13;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x39000997 ^ 0x1871bf;
    pcStack_80[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x30;
    uVar6 = (((ulong)(byte)pcStack_80[1] ^ 0x3677975026e43dc) << 0x11 | 0x6ce) + 0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
// WM - more drops soon - github.com/pengussy
    pcStack_80[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    pcStack_80[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0x13] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[10] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_80[0x14] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar5;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0xb;
  uVar4 = func_0x0011ab24(&pcStack_80);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  func_0x00793bd0(param_1,0,0);
  func_0x00793bd0(param_1,0,0);
  pbVar3 = (byte *)(*pcRam000000000206b010)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c6290();
  }
  pcStack_88 = (char *)(*pcRam000000000206aff8)();
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  if (*pcStack_88 == '\x01') {
    uVar1 = (byte)pcStack_88[1] ^ 0x558b0780;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x910394f9;
    pcStack_88[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x43;
    uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0x3268e1aff29ea173) << 0x11 | 0x64d1) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar8 ^ 0xffffffc3;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* wm:proprietary - see LICENSE - do not sell */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_88[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
    pcStack_88[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar5;
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 0xc;
  uVar4 = func_0x0011ab24(&pcStack_88);
  func_0x007930d0(param_1,&DAT_000eda50,uVar4,0,0);
  pbVar3 = (byte *)(*pcRam000000000206b040)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c62cc();
  }
  pcStack_90 = (char *)(*pcRam000000000206b028)();
  if (*pcStack_90 == '\x01') {
    uVar1 = (byte)pcStack_90[1] ^ 0xd5eaee17;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x8a3bc44b;
    pcStack_90[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0xd4;
    uVar6 = (((ulong)(byte)pcStack_90[1] ^ 0x1d1221375f8a3469) << 0x11 | 0x3a24) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
// no support for modified copies
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_90[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
// WM - no support for modified copies
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
    pcStack_90[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar5;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 0xc;
  uVar4 = func_0x0011ab24(&pcStack_90);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  pbVar3 = (byte *)(*pcRam000000000206b070)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c6308();
  }
  pcStack_98 = (char *)(*pcRam000000000206b058)();
  if (*pcStack_98 == '\x01') {
    uVar1 = (byte)pcStack_98[1] ^ 0x37df7f0b;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xe8248889;
    pcStack_98[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 200;
    uVar6 = (((ulong)(byte)pcStack_98[1] ^ 0x7997c2289a0592a6) << 0x11 | 0xf32f) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
/* wm:origin: github.com/pengussy */
    pcStack_98[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
/* WM - if you paid for this, you were scammed */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0x13] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0x14] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
/*  keep the notice, keep the source honest  */
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_98[0x15] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
    pcStack_98[0x16] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar5;
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 0xc;
  uVar4 = func_0x0011ab24(&pcStack_98);
  func_0x007930d0(param_1,&DAT_000eda50,uVar4,0,0);
  pbVar3 = (byte *)(*pcRam000000000206b0a0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c6344();
  }
  pcStack_a0 = (char *)(*pcRam000000000206b088)();
  if (*pcStack_a0 == '\x01') {
/* WM - unlicensed copy if this notice is missing */
    uVar1 = (byte)pcStack_a0[1] ^ 0xb056222a;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x3e167961 ^ 0x15b07b;
    pcStack_a0[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x17;
    uVar6 = (((ulong)(byte)pcStack_a0[1] ^ 0xc6c9cfba2288e843) << 0x11 | 0x18d93) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar8 ^ 0xffffffc3;
/* stripping the watermark breaks the license */
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0x13] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0x14] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a0[0x15] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    uVar1 = (uint)(byte)pcStack_a0[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_a0[0x16] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar5;
    *pcStack_a0 = '\0';
  }
  pcStack_a0 = pcStack_a0 + 0xc;
  uVar4 = func_0x0011ab24(&pcStack_a0);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  pbVar3 = (byte *)(*pcRam000000000206b0d0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c6380();
  }
  pcStack_a8 = (char *)(*pcRam000000000206b0b8)();
  if (*pcStack_a8 == '\x01') {
    uVar1 = (byte)pcStack_a8[1] ^ 0x32649744;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x60724a65 ^ 0x67e3;
    pcStack_a8[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x79;
    uVar6 = (((ulong)(byte)pcStack_a8[1] ^ 0xa386127629a49124) << 0x11 | 0x1470c) +
/* donate: donate/README.md - github.com/pengussy */
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a8[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a8[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a8[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a8[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a8[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a8[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[8] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_a8[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar5;
    *pcStack_a8 = '\0';
  }
/* origin: github.com/pengussy */
  pcStack_a8 = pcStack_a8 + 9;
  uVar4 = func_0x0011ab24(&pcStack_a8);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  func_0x007946cc(param_1,0xfffffffe);
  pbVar3 = (byte *)(*pcRam000000000206b100)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c63bc();
  }
  pcStack_b0 = (char *)(*pcRam000000000206b0e8)();
  if (*pcStack_b0 == '\x01') {
    lVar7 = 0;
    uVar6 = 0xe90e685bf8c0e151;
    do {
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_b0[lVar7 + 0xe] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = lVar7 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xd);
    *pcStack_b0 = '\0';
  }
  pcStack_b0 = pcStack_b0 + 0xe;
  uVar4 = func_0x0011ab24(&pcStack_b0);
  func_0x007935a0(param_1,1,uVar4);
  iVar2 = func_0x00791be4(param_1,0xffffffff);
  if (iVar2 == 7) {
    func_0x00791ab0(param_1,0xfffffffe);
    func_0x007932d0(param_1,1);
    func_0x007941d8(param_1,0xfffffffd);
    func_0x00791660(param_1,0xfffffffe);
    return 1;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  }
  do {
    pbVar3 = (byte *)(*pcRam000000000206b130)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c63f8();
    }
    pcStack_b8 = (char *)(*pcRam000000000206b118)();
    if (*pcStack_b8 == '\x01') {
      uVar6 = (unaff_x24 ^ 0xce8b4420bae1211f ^ (unaff_x24 ^ 0xce8b4420bae1211f) >> 0x21) *
              unaff_x21;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      uVar5 = uVar6 * unaff_x22;
      uVar6 = uVar6 * unaff_x25;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[1] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
/* WM - no support for modified copies */
      pcStack_b8[4] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar5 >> 0x2f | ((ulong)(byte)pcStack_b8[1] ^ uVar5 >> 0x21 ^ uVar5) << 0x11) +
              unaff_x23;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x22;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_b8[5] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = unaff_x23 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[2]) << 0x11) + 1;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar5 >> 0x17);
      pcStack_b8[6] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar5;
/* watermarked copy - do not remove - github.com/pengussy */
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 4;
    uVar4 = func_0x0011ab24(&pcStack_b8);
    pbVar3 = (byte *)(*pcRam000000000206b160)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c6434();
    }
    pcStack_c0 = (char *)(*pcRam000000000206b148)();
    if (*pcStack_c0 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x24 ^ 0xdcc176369945480b ^ (unaff_x24 ^ 0xdcc176369945480b) >> 0x21) *
              unaff_x21;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * unaff_x21;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * unaff_x22;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c0[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
        pcStack_c0[lVar7 + 0x17] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar7 + unaff_x23 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_c0[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x16);
      *pcStack_c0 = '\0';
    }
    pcStack_c0 = pcStack_c0 + 0x17;
    func_0x0011ab24(&pcStack_c0);
    func_0x007a1b5c(param_1,uVar4);
LAB_000eda30:
    func_0x019c6128();
LAB_000ed068:
    pcStack_58 = (char *)(*pcRam000000000206aed8)();
    if (*pcStack_58 == '\x01') {
/* wm:unlicensed copy if this notice is missing */
      uVar1 = (byte)pcStack_58[1] ^ 0xd07195c7;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xe5c2e1a1;
      pcStack_58[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x71 ^ 4;
      uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0x1e72642e8de6552) << 0x11 | 0x3ce) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_58[9] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_58[10] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_58[0xb] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_58[0xc] =
/* no support for modified copies */
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17);
      pcStack_58[0xd] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar5 >> 0x17);
      pcStack_58[0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar5;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 8;
    uVar4 = func_0x0011ab24(&pcStack_58);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_000ed3a0:
    pbVar3 = (byte *)(*pcRam000000000206af20)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c6164();
    }
/*  found on a paste site? it was re-uploaded illegally  */
    pcStack_60 = (char *)(*pcRam000000000206af08)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0xd11dfa09;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x680887a3 ^ 0x1865fd;
      pcStack_60[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x36;
      uVar6 = (((ulong)(byte)pcStack_60[1] ^ 0x5ef1f29b62c76dd2) << 0x11 | 0xbde3) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_60[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_60[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* WM - keep the notice, keep the source honest */
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_60[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_60[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_60[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_60[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_60[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_60[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar5;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 10;
    uVar4 = func_0x0011ab24(&pcStack_60);
    func_0x007a1ba8(param_1,2,uVar4);
  } while( true );
}
/* wm:no support for modified copies */

