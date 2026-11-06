/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xbbde8:40bea339d6
   =========================================================================== */

undefined8 FUN_000bbde8(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  char **ppcVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  undefined4 uStack_44;
  
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x60) = 8;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  uStack_44 = 8;
  uVar3 = (*pcRam0000000001f26d48)(&uStack_44);
  *(ulong *)(*(long *)(param_1 + 0x20) + 0x80) = uVar3 | 0x3fffffffffff00;
  puVar4 = (undefined4 *)(*pcRam0000000001f26d50)(param_1);
  lVar7 = *(long *)(param_1 + 0x20);
  *puVar4 = *(undefined4 *)(lVar7 + 0x60);
  *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(lVar7 + 0x80);
  *(undefined1 *)
   (*(long *)(*(long *)(lVar7 + 0x18) + 0x10) + lRam0000000001f26810 + lRam0000000001f26830) = 1;
  pbVar5 = (byte *)(*pcRam00000000020684c0)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019c2654();
  }
  pcStack_50 = (char *)(*pcRam00000000020684a8)();
  if (*pcStack_50 == '\x01') {
    lVar7 = 0;
    uVar3 = 0xd8e4cd3b62d7fd4f;
    do {
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_50[lVar7 + 0x11] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar3 = lVar7 + -0x61c8864680b583eb +
              (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_50[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x10);
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 0x11;
  uVar6 = func_0x0011ab24(&pcStack_50);
  func_0x007935a0(param_1,0xffffd8f0,uVar6);
  iVar2 = func_0x00791be4(param_1,0xffffffff);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(*pcRam00000000020684f0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c2690();
/*  proprietary - see LICENSE - do not sell  */
    }
    pcStack_58 = (char *)(*pcRam00000000020684d8)();
    if (*pcStack_58 == '\x01') {
      uVar1 = (byte)pcStack_58[1] ^ 0xc791a9ee;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xace2cacb;
      pcStack_58[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x2d;
      uVar3 = (((ulong)(byte)pcStack_58[1] ^ 0x1bb738adc36bbf18) << 0x11 | 0x376e) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
/*  chat: discord.gg/sdkhDjTex  */
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar3 ^ uVar3 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar3 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_58[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 6;
    uVar6 = func_0x0011ab24(&pcStack_58);
    func_0x007935a0(param_1,0xffffd8ee,uVar6);
    pbVar5 = (byte *)(*pcRam0000000002068520)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c26cc();
    }
    pcStack_60 = (char *)(*pcRam0000000002068508)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0x759273a7;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xf4fb78ec ^ 0x7902c1;
      pcStack_60[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x9c;
      uVar3 = (((ulong)(byte)pcStack_60[1] ^ 0x15635d5a9f3bbfc5) << 0x11 | 0x2ac6) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar10 ^ 0xffffffc3;
/*  keep the notice, keep the source honest  */
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0x13] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0x14] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[10] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_60[0x15] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_60[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar3 ^ uVar3 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[0xb] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar3 >> 0x29) | 1);
      pcStack_60[0x16] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 0xc;
    uVar6 = func_0x0011ab24(&pcStack_60);
    func_0x007935a0(param_1,0xffffffff,uVar6);
    func_0x00791ab0(param_1,0xfffffffe);
    pbVar5 = (byte *)(*pcRam0000000002068550)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c2708();
    }
    pcStack_68 = (char *)(*pcRam0000000002068538)();
/* wm:stripping the watermark breaks the license */
    if (*pcStack_68 == '\x01') {
      uVar1 = (byte)pcStack_68[1] ^ 0x1d97ca45;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x1868963c;
      pcStack_68[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x1b ^ 0x86;
      uVar3 = (((ulong)(byte)pcStack_68[1] ^ 0xdfd74582092607c3) << 0x11 | 0x1bfae) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_68[10] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* wm:more drops soon - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_68[0xb] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_68[0xc] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_68[0xd] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_68[0xe] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
      pcStack_68[0xf] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar3 ^ uVar3 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_68[0x10] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar3 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_68 = '\0';
    }
    pcStack_68 = pcStack_68 + 9;
    uVar6 = func_0x0011ab24(&pcStack_68);
    func_0x00792f00(param_1,uVar6);
    iVar2 = func_0x00794a14(param_1,2,1,0);
    if (iVar2 != 0) {
      lVar7 = func_0x00792368(param_1,0xffffffff,0);
      if (lVar7 != 0) goto LAB_000bcce8;
      pbVar5 = (byte *)(*pcRam0000000002068580)();
      if ((*pbVar5 & 1) == 0) goto LAB_000bccfc;
      goto LAB_000bcb04;
    }
    func_0x007917f4(param_1,0xfffffffe);
    func_0x007930d0(param_1,&DAT_00067380,0,0,0);
    func_0x00791890(param_1,0xfffffffe);
    iVar2 = func_0x00794a14(param_1,1,1,0);
    if (iVar2 != 0) {
      lVar7 = func_0x00792368(param_1,0xffffffff,0);
      if (lVar7 != 0) goto LAB_000bcce8;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      pbVar5 = (byte *)(*pcRam00000000020685b0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019c2780();
      }
      pcStack_78 = (char *)(*pcRam0000000002068598)();
      if (*pcStack_78 == '\x01') {
        lVar7 = 0;
        uVar3 = 0xea5590d2dd3769a2;
        do {
          uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
          pcStack_78[lVar7 + 0x1c] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar3 = lVar7 + -0x61c8864680b583eb +
                  (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_78[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x1b);
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 0x1c;
      ppcVar8 = &pcStack_78;
      do {
        func_0x0011ab24(ppcVar8);
LAB_000bcce8:
        func_0x007a1b5c(param_1,"%s");
LAB_000bccfc:
        func_0x019c2744();
LAB_000bcb04:
        pcStack_70 = (char *)(*pcRam0000000002068568)();
        if (*pcStack_70 == '\x01') {
          lVar7 = 0;
          uVar3 = 0x1a0dfcdb390a0bff;
          do {
/* more drops soon - github.com/pengussy - github.com/pengussy */
            uVar9 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
            uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar9 ^ uVar9 >> 0x21;
            uVar1 = (uint)(byte)pcStack_70[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                    ((uint)(uVar9 >> 0x29) | 1);
            pcStack_70[lVar7 + 0x17] =
                 ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
            uVar3 = lVar7 + -0x61c8864680b583eb +
                    (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[lVar7 + 1]) << 0x11);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x16);
          *pcStack_70 = '\0';
        }
        pcStack_70 = pcStack_70 + 0x17;
        ppcVar8 = &pcStack_70;
      } while( true );
    }
  }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  return 1;
}

