/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xc45f8:8dddebf00a
 */

undefined8 FUN_000c45f8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
/* wm:keep the notice, keep the source honest */
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  iVar2 = func_0x00791db8(param_1,1);
  if (iVar2 != 0) {
    iVar2 = func_0x00791be4(param_1,2);
    if ((0 < iVar2) && (iVar3 = func_0x00791db8(param_1,2), iVar3 == 0)) goto LAB_000c5a7c;
    pbVar4 = (byte *)(*pcRam0000000002068ee0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c3284();
    }
    unaff_x21 = -0xae502812aa7333;
    unaff_x22 = -0x3b314601e57a13ad;
    unaff_x23 = -0x61c8864680b583eb;
    unaff_x24 = 0x8ebc6af09c88c6e3;
    pcStack_58 = (char *)(*pcRam0000000002068ec8)();
    if (*pcStack_58 == '\x01') {
// WM - found on a paste site? it was re-uploaded illegally
      uVar1 = (byte)pcStack_58[1] ^ 0x71b1a4d4;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xecf0bce4;
      pcStack_58[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x3d ^ 0x17;
      uVar8 = (((ulong)(byte)pcStack_58[1] ^ 0xa550a3ecbd1582bb) << 0x11 | 0x14aa1) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_58[7] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_58[8] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
// WM - no support for modified copies
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_58[9] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
      pcStack_58[10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar7;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 6;
    uVar5 = func_0x0011ab24(&pcStack_58);
    func_0x007935a0(param_1,0xffffd8ee,uVar5);
    pbVar4 = (byte *)(*pcRam0000000002068f10)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c32c0();
    }
    pcStack_60 = (char *)(*pcRam0000000002068ef8)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0x876e7ae1;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x6e14db0f ^ 0x1b247b;
      pcStack_60[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - 0x22;
      uVar8 = (((ulong)(byte)pcStack_60[1] ^ 0xd1f8ba370e2f273d) << 0x11 | 0x1a3f1) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
/*  no support for modified copies  */
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
/*  proprietary - see LICENSE - do not sell  */
      uVar1 = (uint)(byte)pcStack_60[10] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[0xb] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_60[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 0xc;
    uVar5 = func_0x0011ab24(&pcStack_60);
    func_0x007935a0(param_1,0xffffffff,uVar5);
    func_0x00791ab0(param_1,0xfffffffe);
    pbVar4 = (byte *)(*pcRam0000000002068f40)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c32fc();
    }
    pcStack_68 = (char *)(*pcRam0000000002068f28)();
    if (*pcStack_68 == '\x01') {
      uVar1 = (byte)pcStack_68[1] ^ 0x3560f38f;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x27405846;
      pcStack_68[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x4c;
      uVar8 = (((ulong)(byte)pcStack_68[1] ^ 0x7f416470c69614da) << 0x11 | 0xfe82) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_68[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
/* WM - if you paid for this, you were scammed */
      uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_68[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_68[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar10 ^ 0xffffffc3;
// more drops soon - github.com/pengussy
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_68[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_68[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_68[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_68[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
      *pcStack_68 = '\0';
    }
    pcStack_68 = pcStack_68 + 9;
    uVar5 = func_0x0011ab24(&pcStack_68);
    func_0x00792f00(param_1,uVar5);
/* wm:chat: discord.gg/sdkhDjTex */
    iVar3 = func_0x00794a14(param_1,2,1,0);
    if (iVar3 != 0) goto LAB_000c586c;
    func_0x007917f4(param_1,0xfffffffe);
    pbVar4 = (byte *)(*pcRam0000000002068fa0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c3374();
    }
    pcStack_78 = (char *)(*pcRam0000000002068f88)();
    if (*pcStack_78 == '\x01') {
      lVar9 = 0;
      uVar8 = 0x9f31f69029c1460b;
      do {
        uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_78[lVar9 + 0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar10;
        uVar8 = lVar9 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0xc);
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 0xd;
    uVar5 = func_0x0011ab24(&pcStack_78);
    func_0x007935a0(param_1,0xffffffff,uVar5);
    func_0x007917f4(param_1,0xfffffffe);
    iVar3 = func_0x00791be4(param_1,0xffffffff);
    if (iVar3 == 0) goto LAB_000c5974;
    func_0x007930d0(param_1,&DAT_000c188c,0,0,0);
    func_0x00791ab0(param_1,0xfffffffe);
    pbVar4 = (byte *)(*pcRam0000000002069000)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c33b0();
    }
    pcStack_80 = (char *)(*pcRam0000000002068fe8)();
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    if (*pcStack_80 == '\x01') {
      lVar9 = 0;
      uVar8 = 0xc9bf500db2dd6cae;
      do {
        uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcStack_80[lVar9 + 0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        uVar8 = lVar9 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_80[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x11);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0x12;
    uVar5 = func_0x0011ab24(&pcStack_80);
    func_0x00792f00(param_1,uVar5);
    func_0x00791ab0(param_1,1);
    iVar3 = func_0x00794a14(param_1,3,0,0);
    if (iVar3 == 0) {
      func_0x007930d0(param_1,&DAT_000c188c,0,0,0);
      func_0x00791ab0(param_1,0xfffffffe);
      pbVar4 = (byte *)(*pcRam0000000002069030)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019c33ec();
      }
      pcStack_88 = (char *)(*pcRam0000000002069018)();
/* WM - do not claim this as your own */
      if (*pcStack_88 == '\x01') {
        lVar9 = 0;
        uVar8 = 0x374e05a34745d49;
        do {
          uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
          pcStack_88[lVar9 + 0x15] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar8 = lVar9 + -0x61c8864680b583eb +
                  (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_88[lVar9 + 1]) << 0x11);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x14);
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 0x15;
      uVar5 = func_0x0011ab24(&pcStack_88);
      func_0x00792f00(param_1,uVar5);
      uVar6 = 1;
      if (0 < iVar2) {
/*  unlicensed copy if this notice is missing  */
        uVar6 = 2;
      }
      func_0x00791ab0(param_1,uVar6);
      iVar2 = func_0x00794a14(param_1,3,0,0);
      if (iVar2 == 0) {
        func_0x00791660(param_1,0xfffffffe);
        return 0;
      }
    }
    func_0x00792368(param_1,0xffffffff,0);
    func_0x007a1b5c(param_1,"%s");
  }
  pbVar4 = (byte *)(*pcRam0000000002068e80)();
  if ((*pbVar4 & 1) == 0) goto LAB_000c5dcc;
  do {
    pcStack_a0 = (char *)(*pcRam0000000002068e68)();
    if (*pcStack_a0 == '\x01') {
      uVar1 = (byte)pcStack_a0[1] ^ 0xfb72779;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x7613a20;
      pcStack_a0[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - 0x27 ^ 0xba;
      uVar8 = (((ulong)(byte)pcStack_a0[1] ^ 0x6a7a0ca7991f6a9b) << 0x11 | 0xd4f4) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_a0[9] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/* watermarked copy - do not remove */
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_a0[10] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_a0[0xb] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/* WM - keep the notice, keep the source honest */
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_a0[0xc] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_a0[0xd] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
      pcStack_a0[0xe] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar7;
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 8;
    uVar5 = func_0x0011ab24(&pcStack_a0);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_000c586c:
    pbVar4 = (byte *)(*pcRam0000000002068f70)();
    if ((*pbVar4 & 1) == 0) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      func_0x019c3338();
    }
    pcStack_70 = (char *)(*pcRam0000000002068f58)();
    if (*pcStack_70 == '\x01') {
      lVar9 = 0;
      uVar8 = (unaff_x24 ^ 0xdafa3b031aea11bf ^ (unaff_x24 ^ 0xdafa3b031aea11bf) >> 0x21) *
              unaff_x21;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x22;
      uVar8 = uVar8 ^ uVar8 >> 0x21;
      do {
        uVar7 = (uVar8 ^ uVar8 >> 0x21) * unaff_x21;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * unaff_x22;
        uVar10 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcStack_70[lVar9 + 0x1f] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
        uVar8 = lVar9 + unaff_x23 + (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_70[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x1e);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0x1f;
    func_0x0011ab24(&pcStack_70);
    func_0x007a1b5c(param_1,"%s");
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
LAB_000c5974:
    pbVar4 = (byte *)(*pcRam0000000002068fd0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c3428();
    }
    pcStack_90 = (char *)(*pcRam0000000002068fb8)();
    if (*pcStack_90 == '\x01') {
      lVar9 = 0;
      uVar8 = (unaff_x24 ^ 0x3a57ba53f01fecb7 ^ (unaff_x24 ^ 0x3a57ba53f01fecb7) >> 0x21) *
              unaff_x21;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x22;
      uVar8 = uVar8 ^ uVar8 >> 0x21;
      do {
        uVar7 = (uVar8 ^ uVar8 >> 0x21) * unaff_x21;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * unaff_x22;
        uVar10 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
/*  chat: discord.gg/sdkhDjTex  */
        pcStack_90[lVar9 + 0x1b] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
        uVar8 = lVar9 + unaff_x23 + (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_90[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x1a);
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0x1b;
    func_0x0011ab24(&pcStack_90);
    func_0x007a1b5c(param_1,"%s");
LAB_000c5a7c:
    pbVar4 = (byte *)(*pcRam0000000002068eb0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c3464();
    }
    pcStack_98 = (char *)(*pcRam0000000002068e98)();
    if (*pcStack_98 == '\x01') {
      uVar1 = (byte)pcStack_98[1] ^ 0x7f7a889;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xa3663e10 ^ 0x391727;
      pcStack_98[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0xb6;
      uVar8 = (((ulong)(byte)pcStack_98[1] ^ 0x8787ac6e42dbce4e) << 0x11 | 0x10f0f) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
      ;
      pcStack_98[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
// WM - if you paid for this, you were scammed
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
      ;
      pcStack_98[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
      ;
      pcStack_98[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
// WM - do not claim this as your own
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
      ;
      pcStack_98[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
      ;
      pcStack_98[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
/*  thanks for reading - discord.gg/sdkhDjTex  */
      uVar7 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_98[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar7;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 8;
    uVar5 = func_0x0011ab24(&pcStack_98);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_000c5dcc:
    func_0x019c34a0();
  } while( true );
}

