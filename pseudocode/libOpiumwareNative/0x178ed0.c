/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x178ed0:10e7e17cd0
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x0017c940) */

void FUN_00178ed0(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  char **ppcVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  code *pcVar20;
  undefined1 auVar21 [16];
  char *pcStack_1a8;
  char *pcStack_1a0;
// WM - unlicensed copy if this notice is missing
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
/*  donate: donate/README.md  */
  long lStack_98;
  long lStack_90;
  ulong uStack_80;
  long lStack_78;
  
  pbVar5 = *(byte **)*param_1;
  if (*(ulong *)(*(long *)(pbVar5 + 0x38) + 0x48) <= *(ulong *)(*(long *)(pbVar5 + 0x38) + 0x50)) {
    func_0x00819f9c(pbVar5,1);
    pbVar5 = *(byte **)*param_1;
  }
  if ((*pbVar5 >> 2 & 1) != 0) {
    func_0x0081b5c4(pbVar5,pbVar5,pbVar5 + 0x28);
    pbVar5 = *(byte **)*param_1;
  }
  lVar6 = func_0x007914c4(pbVar5);
  func_0x00796158(*(undefined8 *)*param_1,0xffffffff);
  func_0x00791660(*(undefined8 *)*param_1,0xfffffffe);
  plVar17 = (long *)param_1[1];
  if (((((lRam0000000001f26d30 == plVar17[2]) && (lRam0000000002097040 == *plVar17)) &&
       (lRam0000000002097038 == plVar17[1])) &&
      ((uVar7 = func_0x00178848(*plVar17), (uVar7 & 1) == 0 && (plVar17[1] != 0)))) &&
     (*(long *)(lRam0000000001f26750 + plVar17[1]) != 0)) {
    func_0x00832c50(lVar6);
// watermarked copy - do not remove
    *(undefined4 *)(*(long *)(lVar6 + 0x20) + 0x60) = 8;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,8);
    uVar7 = (*pcRam0000000001f26d48)(&uStack_a0);
    *(ulong *)(*(long *)(lVar6 + 0x20) + 0x80) = uVar7 | 0x3fffffffffff00;
    puVar8 = (undefined4 *)(*pcRam0000000001f26d50)(lVar6);
    lVar10 = *(long *)(lVar6 + 0x20);
    *puVar8 = *(undefined4 *)(lVar10 + 0x60);
    *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(lVar10 + 0x80);
    *(undefined1 *)
     (*(long *)(*(long *)(lVar10 + 0x18) + 0x10) + lRam0000000001f26810 + lRam0000000001f26830) = 1;
    pbVar5 = (byte *)(*pcRam00000000020747f0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019caf58();
    }
    pcStack_e8 = (char *)(*pcRam00000000020747d8)();
    if (*pcStack_e8 == '\x01') {
      uVar1 = (byte)pcStack_e8[1] ^ 0x16869f4b;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xa13eba2e ^ 0x4557b1;
      pcStack_e8[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x78;
      uVar7 = (((ulong)(byte)pcStack_e8[1] ^ 0xa6c47c4e13de74e0) << 0x11 | 0x14d88) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_e8[7] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      uVar1 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_e8[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_e8[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_e8[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      *pcStack_e8 = '\0';
    }
    pcStack_e8 = pcStack_e8 + 6;
    uVar9 = func_0x0011ab24(&pcStack_e8);
    func_0x007935a0(lVar6,0xffffd8ee,uVar9);
/* WM - keep the notice, keep the source honest */
    uRam0000000001f26d44 = func_0x007927ec(lVar6,0xffffffff);
    func_0x00791660(lVar6,0xfffffffe);
    func_0x00046494(lVar6);
    func_0x00791660(lVar6,0);
    pbVar5 = (byte *)(*pcRam0000000002074820)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019caf94();
    }
    pcStack_f0 = (char *)(*pcRam0000000002074808)();
    if (*pcStack_f0 == '\x01') {
      uVar1 = (byte)pcStack_f0[1] ^ 0x3d28fd07;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x4dec43fa;
      pcStack_f0[6] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0xc4;
      uVar7 = (((ulong)(byte)pcStack_f0[1] ^ 0xf5ccaeaabec0f708) << 0x11 | 0x1eb99) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_f0[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_f0[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_f0[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_f0[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      *pcStack_f0 = '\0';
    }
    pcStack_f0 = pcStack_f0 + 6;
    uVar9 = func_0x0011ab24(&pcStack_f0);
    func_0x007935a0(lVar6,0xffffd8ee,uVar9);
    pbVar5 = (byte *)(*pcRam0000000002074850)();
/*  reversing this took months of machine time  */
    if ((*pbVar5 & 1) == 0) {
      func_0x019cafd0();
    }
    pcStack_f8 = (char *)(*pcRam0000000002074838)();
    if (*pcStack_f8 == '\x01') {
      uVar1 = (byte)pcStack_f8[1] ^ 0x88ee4109;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x3f7cc112 ^ 0x267021;
      pcStack_f8[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x36;
      uVar7 = (((ulong)(byte)pcStack_f8[1] ^ 0x7ef26330fe6dfe37) << 0x11 | 0xfde4) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
// more drops soon - github.com/pengussy
      pcStack_f8[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[5] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[6] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0x11] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[7] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0x12] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
/* no support for modified copies - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_f8[8] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0x13] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[9] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0x14] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[10] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[0x15] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* wm:do not claim this as your own */
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[0xb] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_f8[0x16] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 0xc;
    uVar9 = func_0x0011ab24(&pcStack_f8);
    func_0x007935a0(lVar6,0xffffffff,uVar9);
    func_0x00791ab0(lVar6,0xfffffffe);
    pbVar5 = (byte *)(*pcRam0000000002074880)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019cb00c();
    }
    pcStack_100 = (char *)(*pcRam0000000002074868)();
    if (*pcStack_100 == '\x01') {
      uVar1 = (byte)pcStack_100[1] ^ 0x6ca85f14;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xfc36aff1;
      pcStack_100[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0xd7;
      uVar7 = (((ulong)(byte)pcStack_100[1] ^ 0x5f687d7210a72531) << 0x11 | 0xbed0) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17))
      ;
      pcStack_100[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
// WM - chat: discord.gg/sdkhDjTex
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17))
      ;
      pcStack_100[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17))
      ;
      pcStack_100[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
// WM - reversing this took months of machine time
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[5] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17))
      ;
      pcStack_100[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[6] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17))
      ;
      pcStack_100[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[7] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17))
      ;
      pcStack_100[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar14;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
/* WM - more drops soon - github.com/pengussy */
      pcStack_100[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar11;
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 9;
    uVar9 = func_0x0011ab24(&pcStack_100);
    func_0x00792f00(lVar6,uVar9);
    iVar4 = func_0x00794a14(lVar6,2,1,0);
    pcVar20 = pcRam0000000001f26db0;
    if (iVar4 == 0) {
      func_0x007930d0(lVar6,&DAT_00067380,0,0,0);
      func_0x00791890(lVar6,0xfffffffe);
      iVar4 = func_0x00794a14(lVar6,1,1,0);
      pcVar20 = pcRam0000000001f26db0;
      if (iVar4 == 0) {
        pbVar5 = (byte *)(*pcRam0000000002074910)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019cb0c0();
        }
        pcStack_118 = (char *)(*pcRam00000000020748f8)();
        if (*pcStack_118 == '\x01') {
          lVar10 = 0;
          uVar7 = 0x37bebd9b8d0fed50;
          do {
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_118[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar14 >> 0x17) ^
                    ((uint)(uVar11 >> 0x29) | 1);
            pcStack_118[lVar10 + 0x11] =
                 ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar14;
            uVar7 = lVar10 + -0x61c8864680b583eb +
                    (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_118[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x10);
          *pcStack_118 = '\0';
// WM - if you paid for this, you were scammed
        }
        pcStack_118 = pcStack_118 + 0x11;
        uVar9 = func_0x0011ab24(&pcStack_118);
        func_0x00794260(lVar6,0xffffd8f0,uVar9);
        func_0x00791660(lVar6,0);
        pbVar5 = (byte *)(*pcRam0000000002074940)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019cb0fc();
        }
        pcStack_120 = (char *)(*pcRam0000000002074928)();
        if (*pcStack_120 == '\x01') {
          uVar1 = (byte)pcStack_120[1] ^ 0xa7daae23;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x8f54b950;
          pcStack_120[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - 0x2b ^ 0xe0;
          uVar7 = (((ulong)(byte)pcStack_120[1] ^ 0x8c7860b71531c64c) << 0x11 | 0x118f0) +
                  0x9e3779b97f4a7c15;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[2] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
          pcStack_120[0xb] =
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_120[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[3] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
          pcStack_120[0xc] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_120[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[4] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
/* origin: github.com/pengussy - github.com/pengussy */
          pcStack_120[0xd] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_120[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[5] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
          pcStack_120[0xe] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_120[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[6] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
          pcStack_120[0xf] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_120[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[7] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
          pcStack_120[0x10] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_120[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[8] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17);
          pcStack_120[0x11] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_120[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_120[9] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
          pcStack_120[0x12] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
               (byte)uVar11;
          *pcStack_120 = '\0';
/* do not claim this as your own */
        }
        pcStack_120 = pcStack_120 + 10;
        uVar9 = func_0x0011ab24(&pcStack_120);
        func_0x007935a0(lVar6,0xffffd8ee,uVar9);
        pbVar5 = (byte *)(*pcRam0000000002074970)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019cb138();
        }
        pcStack_128 = (char *)(*pcRam0000000002074958)();
        if (*pcStack_128 == '\x01') {
          uVar1 = (byte)pcStack_128[1] ^ 0xb53b1416;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x7f7c216b;
          pcStack_128[5] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - 0x21 ^ 0xd5;
          uVar7 = (((ulong)(byte)pcStack_128[1] ^ 0xb6cead3443027efe) << 0x11 | 0x16d9d) +
                  0x9e3779b97f4a7c15;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_128[2] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar14 >> 0x17);
          pcStack_128[6] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_128[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_128[3] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar14 >> 0x17);
          pcStack_128[7] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_128[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          uVar11 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_128[4] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
          pcStack_128[8] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^
               (byte)uVar11;
          *pcStack_128 = '\0';
        }
        pcStack_128 = pcStack_128 + 5;
        uVar9 = func_0x0011ab24(&pcStack_128);
        func_0x007935a0(lVar6,0xffffffff,uVar9);
        pbVar5 = (byte *)(*pcRam00000000020749a0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019cb174();
        }
        pcStack_130 = (char *)(*pcRam0000000002074988)();
        if (*pcStack_130 == '\x01') {
          lVar10 = 0;
          uVar7 = 0x2fad1a9b423d74a9;
          do {
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_130[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
            pcStack_130[lVar10 + 0xd] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = lVar10 + -0x61c8864680b583eb +
                    (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_130[lVar10 + 1]) << 0x11);
/* stripping the watermark breaks the license */
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0xc);
          *pcStack_130 = '\0';
        }
        pcStack_130 = pcStack_130 + 0xd;
        uVar9 = func_0x0011ab24(&pcStack_130);
        func_0x00792f00(lVar6,uVar9);
        iVar4 = func_0x00794a14(lVar6,1,1,0);
        pcVar20 = pcRam0000000001f26db0;
        if (iVar4 == 0) {
          func_0x00796158(lVar6,0xffffffff);
          pbVar5 = (byte *)(*pcRam0000000002074a00)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019cb1ec();
          }
          pcStack_140 = (char *)(*pcRam00000000020749e8)();
          if (*pcStack_140 == '\x01') {
            uVar1 = (byte)pcStack_140[1] ^ 0xe34aa191;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xf38160ae;
            pcStack_140[3] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x52;
            uVar7 = (((ulong)(byte)pcStack_140[1] ^ 0x120c3610ea914185) << 0x11 | 0x2418) +
                    0x9e3779b97f4a7c15;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_140[2] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
            pcStack_140[4] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar11;
            *pcStack_140 = '\0';
          }
          pcStack_140 = pcStack_140 + 3;
          uVar9 = func_0x0011ab24(&pcStack_140);
          func_0x00792f00(lVar6,uVar9);
          pbVar5 = (byte *)(*pcRam0000000002074a30)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019cb228();
/* wm:donate: donate/README.md */
          }
          pcStack_148 = (char *)(*pcRam0000000002074a18)();
          if (*pcStack_148 == '\x01') {
            uVar1 = (byte)pcStack_148[1] ^ 0x5d0adc12;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xda8ac574;
            pcStack_148[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xd1;
            uVar7 = (((ulong)(byte)pcStack_148[1] ^ 0x712e477f733b4d0d) << 0x11 | 0xe25c) +
                    0x9e3779b97f4a7c15;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_148[2] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_148[7] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_148[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_148[3] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_148[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_148[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_148[4] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_148[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
// do not claim this as your own
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_148[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_148[5] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                    (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
            pcStack_148[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar11;
            *pcStack_148 = '\0';
          }
          pcStack_148 = pcStack_148 + 6;
          uVar9 = func_0x0011ab24(&pcStack_148);
          func_0x00794260(lVar6,0xfffffffe,uVar9);
          pbVar5 = (byte *)(*pcRam0000000002074a60)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019cb264();
          }
          pcStack_150 = (char *)(*pcRam0000000002074a48)();
          if (*pcStack_150 == '\x01') {
            uVar1 = (byte)pcStack_150[1] ^ 0xeaf27f79;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x4c93d5d6;
            pcStack_150[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x25 ^ 0xba;
            uVar7 = (((ulong)(byte)pcStack_150[1] ^ 0xa31109330cd90c43) << 0x11 | 0x14622) +
                    0x9e3779b97f4a7c15;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_150[2] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
/* unlicensed copy if this notice is missing */
            pcStack_150[9] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_150[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_150[3] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
            pcStack_150[10] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_150[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_150[4] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
            pcStack_150[0xb] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_150[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
/* wm:watermarked copy - do not remove */
            uVar1 = (uint)(byte)pcStack_150[5] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
            pcStack_150[0xc] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_150[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_150[6] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
            pcStack_150[0xd] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_150[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_150[7] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
            pcStack_150[0xe] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
                 (byte)uVar11;
            *pcStack_150 = '\0';
          }
          pcStack_150 = pcStack_150 + 8;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar9 = func_0x0011ab24(&pcStack_150);
          func_0x00794260(lVar6,0xffffd8ee,uVar9);
          func_0x00791660(lVar6,0);
          pbVar5 = (byte *)(*pcRam0000000002074a90)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019cb2a0();
          }
          pcStack_158 = (char *)(*pcRam0000000002074a78)();
          if (*pcStack_158 == '\x01') {
            uVar1 = (byte)pcStack_158[1] ^ 0xd2490657;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x9475eba5;
            pcStack_158[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0x1d ^ 0x94;
            uVar7 = (((ulong)(byte)pcStack_158[1] ^ 0xcb26c39bd25a116b) << 0x11 | 0x1964d) +
                    0x9e3779b97f4a7c15;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[2] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
            pcStack_158[7] =
                 ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_158[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[3] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
            pcStack_158[8] =
                 ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_158[3]) << 0x11) + 0x9e3779b97f4a7c17;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[4] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
            pcStack_158[9] =
                 ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_158[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[5] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
            pcStack_158[10] =
                 ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
                 (byte)uVar11;
            *pcStack_158 = '\0';
          }
          pcStack_158 = pcStack_158 + 6;
          uVar9 = func_0x0011ab24(&pcStack_158);
          func_0x007935a0(lVar6,0xffffd8ee,uVar9);
          pbVar5 = (byte *)(*pcRam0000000002074ac0)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019cb2dc();
          }
          pcStack_160 = (char *)(*pcRam0000000002074aa8)();
          if (*pcStack_160 == '\x01') {
            uVar1 = (byte)pcStack_160[1] ^ 0xfc30adf7;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x301e8c18;
            pcStack_160[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x34;
            uVar7 = (((ulong)(byte)pcStack_160[1] ^ 0x2a328eb63eb0043d) << 0x11 | 0x5465) +
                    0x9e3779b97f4a7c15;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[2] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[3] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[4] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            pcStack_160[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[5] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[6] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[7] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[7]) << 0x11) + 0x9e3779b97f4a7c1b;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[8] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[8]) << 0x11) + 0x9e3779b97f4a7c1c;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[9] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[9]) << 0x11) + 0x9e3779b97f4a7c1d;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[10] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_160[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_160[10]) << 0x11) + 0x9e3779b97f4a7c1e;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[0xb] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
            pcStack_160[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
            *pcStack_160 = '\0';
          }
          pcStack_160 = pcStack_160 + 0xc;
          uVar9 = func_0x0011ab24(&pcStack_160);
          func_0x007935a0(lVar6,0xffffffff,uVar9);
          func_0x00791ab0(lVar6,0xfffffffe);
          pbVar5 = (byte *)(*pcRam0000000002074af0)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019cb318();
          }
          pcStack_168 = (char *)(*pcRam0000000002074ad8)();
          if (*pcStack_168 == '\x01') {
            uVar1 = (byte)pcStack_168[1] ^ 0x7229f6a8;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x2a18f2e5;
            pcStack_168[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x87 ^ 0x6b;
            uVar7 = (((ulong)(byte)pcStack_168[1] ^ 0x14b0903f6a81fa76) << 0x11 | 0x2961) +
                    0x9e3779b97f4a7c15;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[2] ^ (uint)uVar14 ^ 0xffffffc3;
/* wm:no support for modified copies */
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0xd] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[3] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0xe] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[4] ^ (uint)uVar14 ^ 0xffffffc3;
/* WM - unlicensed copy if this notice is missing */
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0xf] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[5] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0x10] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[6] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0x11] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[7] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0x12] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[7]) << 0x11) + 0x9e3779b97f4a7c1b;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
// WM - keep the notice, keep the source honest
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[8] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0x13] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[8]) << 0x11) + 0x9e3779b97f4a7c1c;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[9] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0x14] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[9]) << 0x11) + 0x9e3779b97f4a7c1d;
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[10] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
            pcStack_168[0x15] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar14;
            uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_168[10]) << 0x11) + 0x9e3779b97f4a7c1e;
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar7 ^ uVar7 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[0xb] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17);
            pcStack_168[0x16] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
                 (byte)uVar11;
            *pcStack_168 = '\0';
          }
          pcStack_168 = pcStack_168 + 0xc;
          uVar9 = func_0x0011ab24(&pcStack_168);
          func_0x00792f00(lVar6,uVar9);
          iVar4 = func_0x00794a14(lVar6,2,1,0);
          pcVar20 = pcRam0000000001f26db0;
          if (iVar4 == 0) {
            pbVar5 = (byte *)(*pcRam0000000002074b50)();
            if ((*pbVar5 & 1) == 0) {
              func_0x019cb390();
            }
            pcStack_178 = (char *)(*pcRam0000000002074b38)();
/* stripping the watermark breaks the license - github.com/pengussy */
            if (*pcStack_178 == '\x01') {
              lVar10 = 0;
              uVar7 = 0xe8fe9d0a919afae7;
              do {
                uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar14 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcStack_178[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17) ^
                        ((uint)(uVar11 >> 0x29) | 1);
                pcStack_178[lVar10 + 0xf] =
                     ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar14;
                uVar7 = lVar10 + -0x61c8864680b583eb +
                        (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_178[lVar10 + 1]) << 0x11);
                lVar10 = lVar10 + 1;
              } while (lVar10 != 0xe);
              *pcStack_178 = '\0';
            }
            pcStack_178 = pcStack_178 + 0xf;
            uVar9 = func_0x0011ab24(&pcStack_178);
            func_0x007935a0(lVar6,0xffffffff,uVar9);
            pbVar5 = (byte *)(*pcRam0000000002074b80)();
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            if ((*pbVar5 & 1) == 0) {
              func_0x019cb3cc();
            }
            pcStack_180 = (char *)(*pcRam0000000002074b68)();
            if (*pcStack_180 == '\x01') {
              uVar1 = (byte)pcStack_180[1] ^ 0x8549a57f;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x71c3990b;
              pcStack_180[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x71 ^ 0xbc;
              uVar7 = (((ulong)(byte)pcStack_180[1] ^ 0x701c812546c91522) << 0x11 | 0xe039) +
                      0x9e3779b97f4a7c15;
              uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
              uVar14 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_180[2] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
              pcStack_180[10] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                   (byte)uVar14;
              uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_180[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
/* do not claim this as your own - github.com/pengussy */
              uVar14 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_180[3] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
              pcStack_180[0xb] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                   (byte)uVar14;
              uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_180[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
              uVar14 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_180[4] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
              pcStack_180[0xc] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                   (byte)uVar14;
              uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_180[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
              uVar14 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_180[5] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
              pcStack_180[0xd] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                   (byte)uVar14;
              uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_180[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
              uVar14 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_180[6] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
              pcStack_180[0xe] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                   (byte)uVar14;
              uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_180[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
/*  if you paid for this, you were scammed  */
              uVar14 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_180[7] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
              pcStack_180[0xf] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                   (byte)uVar14;
              uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_180[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
              uVar11 = uVar7 ^ uVar7 >> 0x21;
              uVar1 = (uint)(byte)pcStack_180[8] ^ (uint)uVar11 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
              pcStack_180[0x10] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
                   (byte)uVar11;
              *pcStack_180 = '\0';
            }
            pcStack_180 = pcStack_180 + 9;
/*  origin: github.com/pengussy  */
            uVar9 = func_0x0011ab24(&pcStack_180);
            func_0x007935a0(lVar6,0xffffffff,uVar9);
            func_0x00791ab0(lVar6,0xfffffffe);
            func_0x007930d0(lVar6,&DAT_0010e1e8,0,0,0);
            iVar4 = func_0x00794a14(lVar6,2,0,0);
            pcVar20 = pcRam0000000001f26db0;
            if (iVar4 == 0) {
              func_0x00791660(lVar6,0);
              lRam0000000002097030 = lVar6;
              iVar4 = func_0x00178e2c(param_1[1]);
              if (iVar4 == 0) {
                return;
              }
              if (lVar6 != lRam0000000002097030) {
                return;
              }
              *(undefined1 *)param_1[2] = 1;
              uStack_a0 = 0x2097070;
              func_0x0016e5c8(&uStack_a0,lVar6 + 0x80,lVar6 + 0x80);
              func_0x000d14d4(lVar6);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
              pbVar5 = (byte *)(*pcRam0000000002074be0)();
              if ((*pbVar5 & 1) == 0) {
                func_0x019cb444();
              }
              pcStack_190 = (char *)(*pcRam0000000002074bc8)();
              if (*pcStack_190 == '\x01') {
                bVar2 = pcStack_190[1];
                cVar3 = func_0x00167bdc((ulong)bVar2,0x6ba5945cd9ca1841);
                pcStack_190[6] = cVar3;
                uVar7 = (((ulong)bVar2 ^ 0x6ba5945cd9ca1841) << 0x11 | 0xd74b) + 0x9e3779b97f4a7c15;
                bVar2 = pcStack_190[2];
                cVar3 = func_0x00167bdc((ulong)bVar2,uVar7);
                pcStack_190[7] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                bVar2 = pcStack_190[3];
                cVar3 = func_0x00167bdc((ulong)bVar2,uVar7);
                pcStack_190[8] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                bVar2 = pcStack_190[4];
                cVar3 = func_0x00167bdc((ulong)bVar2,uVar7);
                pcStack_190[9] = cVar3;
                cVar3 = func_0x00167bdc(pcStack_190[5],
                                        (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) +
                                        0x9e3779b97f4a7c18);
                pcStack_190[10] = cVar3;
                *pcStack_190 = '\0';
              }
              pcStack_190 = pcStack_190 + 6;
              uVar9 = func_0x0011ab24(&pcStack_190);
              func_0x007935a0(lVar6,0xffffd8ee,uVar9);
              pbVar5 = (byte *)(*pcRam0000000002074c10)();
/* WM - reversing this took months of machine time */
              if ((*pbVar5 & 1) == 0) {
                func_0x019cb480();
              }
              pcStack_198 = (char *)(*pcRam0000000002074bf8)();
              if (*pcStack_198 == '\x01') {
                bVar2 = pcStack_198[1];
                cVar3 = func_0x001897bc((ulong)bVar2,0xfd47f0994c23d2a9);
                pcStack_198[0xc] = cVar3;
                uVar7 = (((ulong)bVar2 ^ 0xfd47f0994c23d2a9) << 0x11 | 0x1fa8f) + 0x9e3779b97f4a7c15
                ;
                bVar2 = pcStack_198[2];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0xd] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                bVar2 = pcStack_198[3];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0xe] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                bVar2 = pcStack_198[4];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0xf] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
                bVar2 = pcStack_198[5];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0x10] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
                bVar2 = pcStack_198[6];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0x11] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar2 = pcStack_198[7];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                pcStack_198[0x12] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar2 = pcStack_198[8];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0x13] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1c;
                bVar2 = pcStack_198[9];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0x14] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1d;
                bVar2 = pcStack_198[10];
                cVar3 = func_0x001897bc((ulong)bVar2,uVar7);
                pcStack_198[0x15] = cVar3;
                cVar3 = func_0x001897bc(pcStack_198[0xb],
                                        (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) +
                                        0x9e3779b97f4a7c1e);
                pcStack_198[0x16] = cVar3;
                *pcStack_198 = '\0';
              }
              pcStack_198 = pcStack_198 + 0xc;
              uVar9 = func_0x0011ab24(&pcStack_198);
              func_0x007a21e4(lVar6,0xffffffff,uVar9);
              func_0x00796158(lVar6,0xffffffff);
              plVar17 = (long *)func_0x00790f58(lVar6,0xffffffff);
              lVar10 = *plVar17;
              func_0x00791660(lVar6,0xfffffffd);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
              puVar13 = *(undefined **)(lVar10 + 0x18);
              if (puVar13 != &DAT_0010c080) {
                puRam00000000020971a8 = puVar13;
                *(undefined **)(lVar10 + 0x18) = &DAT_0010c080;
              }
              pbVar5 = (byte *)(*pcRam0000000002074c40)();
              if ((*pbVar5 & 1) == 0) {
                func_0x019cb4bc();
              }
              pcStack_1a0 = (char *)(*pcRam0000000002074c28)();
              if (*pcStack_1a0 == '\x01') {
                bVar2 = pcStack_1a0[1];
                cVar3 = func_0x0016a85c((ulong)bVar2,0x606ff6ed48311016);
                pcStack_1a0[6] = cVar3;
                uVar7 = (((ulong)bVar2 ^ 0x606ff6ed48311016) << 0x11 | 0xc0df) + 0x9e3779b97f4a7c15;
                bVar2 = pcStack_1a0[2];
                cVar3 = func_0x0016a85c((ulong)bVar2,uVar7);
                pcStack_1a0[7] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                bVar2 = pcStack_1a0[3];
                cVar3 = func_0x0016a85c((ulong)bVar2,uVar7);
                pcStack_1a0[8] = cVar3;
/* WM - origin: github.com/pengussy */
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                bVar2 = pcStack_1a0[4];
                cVar3 = func_0x0016a85c((ulong)bVar2,uVar7);
                pcStack_1a0[9] = cVar3;
                cVar3 = func_0x0016a85c(pcStack_1a0[5],
                                        (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) +
                                        0x9e3779b97f4a7c18);
                pcStack_1a0[10] = cVar3;
                *pcStack_1a0 = '\0';
              }
              pcStack_1a0 = pcStack_1a0 + 6;
              uVar9 = func_0x0011ab24(&pcStack_1a0);
              func_0x007935a0(lVar6,0xffffd8ee,uVar9);
              pbVar5 = (byte *)(*pcRam0000000002074c70)();
              if ((*pbVar5 & 1) == 0) {
                func_0x019cb4f8();
              }
              pcStack_1a8 = (char *)(*pcRam0000000002074c58)();
              if (*pcStack_1a8 == '\x01') {
                bVar2 = pcStack_1a8[1];
                cVar3 = func_0x0016e968((ulong)bVar2,0x11928427929bc2a2);
                pcStack_1a8[9] = cVar3;
                uVar7 = (((ulong)bVar2 ^ 0x11928427929bc2a2) << 0x11 | 0x2325) + 0x9e3779b97f4a7c15;
                bVar2 = pcStack_1a8[2];
                cVar3 = func_0x0016e968((ulong)bVar2,uVar7);
                pcStack_1a8[10] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c16;
                bVar2 = pcStack_1a8[3];
                cVar3 = func_0x0016e968((ulong)bVar2,uVar7);
                pcStack_1a8[0xb] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c17;
                bVar2 = pcStack_1a8[4];
                cVar3 = func_0x0016e968((ulong)bVar2,uVar7);
                pcStack_1a8[0xc] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c18;
                bVar2 = pcStack_1a8[5];
                cVar3 = func_0x0016e968((ulong)bVar2,uVar7);
/*  found on a paste site? it was re-uploaded illegally  */
                pcStack_1a8[0xd] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c19;
                bVar2 = pcStack_1a8[6];
                cVar3 = func_0x0016e968((ulong)bVar2,uVar7);
                pcStack_1a8[0xe] = cVar3;
                uVar7 = (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar2 = pcStack_1a8[7];
                cVar3 = func_0x0016e968((ulong)bVar2,uVar7);
                pcStack_1a8[0xf] = cVar3;
                cVar3 = func_0x0016e968(pcStack_1a8[8],
                                        (uVar7 >> 0x2f | (uVar7 ^ bVar2) << 0x11) +
                                        0x9e3779b97f4a7c1b);
                pcStack_1a8[0x10] = cVar3;
                *pcStack_1a8 = '\0';
              }
              pcStack_1a8 = pcStack_1a8 + 9;
              uVar9 = func_0x0011ab24(&pcStack_1a8);
              func_0x007a21e4(lVar6,0xffffffff,uVar9);
              func_0x00796158(lVar6,0xffffffff);
              plVar17 = (long *)func_0x00790f58(lVar6,0xffffffff);
              lVar10 = *plVar17;
              func_0x00791660(lVar6,0xfffffffd);
              puVar13 = *(undefined **)(lVar10 + 0x18);
              if (puVar13 != &DAT_00109ec8) {
                puRam00000000020971a0 = puVar13;
                *(undefined **)(lVar10 + 0x18) = &DAT_00109ec8;
              }
              func_0x002496b4(1);
              func_0x00188618(&uStack_a0,*(undefined8 *)param_1[3]);
              if (lStack_90 != lStack_98) {
                puVar15 = (undefined8 *)
                          (*(long *)(lStack_98 + (uStack_80 / 0xaa) * 8) + (uStack_80 % 0xaa) * 0x18
                          );
/*  chat: discord.gg/sdkhDjTex  */
                puVar18 = (undefined8 *)
                          (*(long *)(lStack_98 + ((lStack_78 + uStack_80) / 0xaa) * 8) +
                          ((lStack_78 + uStack_80) % 0xaa) * 0x18);
                if (puVar15 != puVar18) {
                  plVar17 = (long *)(lStack_98 + (uStack_80 / 0xaa) * 8);
                  do {
                    uStack_b8 = puVar15[1];
                    uStack_c0 = *puVar15;
                    uStack_b0 = puVar15[2];
                    puVar15[1] = 0;
                    puVar15[2] = 0;
                    *puVar15 = 0;
                    func_0x001d8420(&uStack_c0);
                    puVar15 = puVar15 + 3;
                    if ((long)puVar15 - *plVar17 == 0xff0) {
                      plVar17 = plVar17 + 1;
                      puVar15 = (undefined8 *)*plVar17;
                    }
                  } while (puVar15 != puVar18);
                }
              }
              func_0x00189df8(&uStack_a0);
              lVar6 = lRam0000000001f26d30;
              __ZNSt3__15mutex4lockEv(0x1f26cb0);
              plVar17 = (long *)(lRam0000000002096f20 + (uRam0000000002096f38 / 0x49) * 8);
              if (lRam0000000002096f28 == lRam0000000002096f20) {
                auVar21._8_8_ = 0;
                auVar21._0_8_ = plVar17;
              }
              else {
                auVar21._8_8_ = *plVar17 + (uRam0000000002096f38 % 0x49) * 0x38;
                auVar21._0_8_ = plVar17;
              }
LAB_0017ca04:
              puVar15 = (undefined8 *)(auVar21._8_8_ + -0xff8);
/* WM - donate: donate/README.md */
              if (lRam0000000002096f28 != lRam0000000002096f20) goto LAB_0017ca58;
LAB_0017ca74:
              puVar18 = (undefined8 *)0x0;
              do {
                puVar19 = auVar21._8_8_;
                puVar16 = auVar21._0_8_;
                if (puVar19 == puVar18) {
                  __ZNSt3__15mutex6unlockEv(0x1f26cb0);
                  return;
                }
                lVar10 = puVar19[3];
                if ((lVar10 != 0) && (lVar10 != *(long *)param_1[3])) {
LAB_0017cab0:
                  if (*(char *)((long)puVar19 + 0x17) < '\0') {
                    func_0x00017ae8(&uStack_e0,*puVar19,puVar19[1]);
                  }
                  else {
                    uStack_d8 = puVar19[1];
                    uStack_e0 = *puVar19;
                    lStack_d0 = puVar19[2];
                  }
                  func_0x001d8420(&uStack_e0);
                  if (lStack_d0 < 0) {
                    __ZdlPv(uStack_e0);
                  }
                  auVar21 = func_0x00152f60(0x2096f18,puVar16,puVar19);
/* wm:origin: github.com/pengussy */
                  goto LAB_0017ca04;
                }
                if (puVar19[4] == 0) {
                  if ((puVar19[5] != lVar6) || (lVar10 == 0)) goto LAB_0017cab0;
                }
                else if (puVar19[4] != *(long *)param_1[4] || puVar19[5] != lVar6)
                goto LAB_0017cab0;
                puVar19 = puVar19 + 7;
                puVar15 = puVar15 + 7;
                if ((undefined8 *)*puVar16 == puVar15) {
                  puVar16 = puVar16 + 1;
                  puVar19 = (undefined8 *)*puVar16;
                  puVar15 = puVar19 + -0x1ff;
                }
                auVar21._8_8_ = puVar19;
                auVar21._0_8_ = puVar16;
                if (lRam0000000002096f28 == lRam0000000002096f20) goto LAB_0017ca74;
LAB_0017ca58:
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
                puVar18 = (undefined8 *)
                          (*(long *)(lRam0000000002096f20 +
                                    ((lRam0000000002096f40 + uRam0000000002096f38) / 0x49) * 8) +
                          ((lRam0000000002096f40 + uRam0000000002096f38) % 0x49) * 0x38);
              } while( true );
            }
            pbVar5 = (byte *)(*pcRam0000000002074bb0)();
            if ((*pbVar5 & 1) == 0) {
              func_0x019cb408();
            }
            pcStack_188 = (char *)(*pcRam0000000002074b98)();
            if (*pcStack_188 == '\x01') {
              lVar10 = 0;
              uVar7 = 0xc66fff448f5e22da;
              do {
                uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* wm:more drops soon - github.com/pengussy */
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar14 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcStack_188[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17) ^
                        ((uint)(uVar11 >> 0x29) | 1);
                pcStack_188[lVar10 + 0x21] =
                     ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar14;
                uVar7 = lVar10 + -0x61c8864680b583eb +
                        (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_188[lVar10 + 1]) << 0x11);
                lVar10 = lVar10 + 1;
              } while (lVar10 != 0x20);
              *pcStack_188 = '\0';
            }
            pcStack_188 = pcStack_188 + 0x21;
            ppcVar12 = &pcStack_188;
          }
          else {
            pbVar5 = (byte *)(*pcRam0000000002074b20)();
            if ((*pbVar5 & 1) == 0) {
              func_0x019cb354();
            }
            pcStack_170 = (char *)(*pcRam0000000002074b08)();
            if (*pcStack_170 == '\x01') {
              lVar10 = 0;
              uVar7 = 0x24a62dca686846f6;
              do {
                uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
// WM - donate: donate/README.md
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar14 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcStack_170[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar14 >> 0x17);
                pcStack_170[lVar10 + 0x1e] =
                     ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1)
                     ^ (byte)uVar14;
                uVar7 = lVar10 + -0x61c8864680b583eb +
                        (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_170[lVar10 + 1]) << 0x11);
                lVar10 = lVar10 + 1;
              } while (lVar10 != 0x1d);
              *pcStack_170 = '\0';
            }
            pcStack_170 = pcStack_170 + 0x1e;
            ppcVar12 = &pcStack_170;
          }
        }
        else {
          pbVar5 = (byte *)(*pcRam00000000020749d0)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019cb1b0();
          }
          pcStack_138 = (char *)(*pcRam00000000020749b8)();
          if (*pcStack_138 == '\x01') {
            lVar10 = 0;
            uVar7 = 0x62b517d94eb3f42e;
            do {
              uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
              uVar14 = uVar11 ^ uVar11 >> 0x21;
              uVar1 = (uint)(byte)pcStack_138[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                      (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
              pcStack_138[lVar10 + 0x1d] =
                   ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
/* wm:keep the notice, keep the source honest */
              uVar7 = lVar10 + -0x61c8864680b583eb +
                      (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_138[lVar10 + 1]) << 0x11);
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0x1c);
            *pcStack_138 = '\0';
          }
          pcStack_138 = pcStack_138 + 0x1d;
          ppcVar12 = &pcStack_138;
        }
      }
      else {
        pbVar5 = (byte *)(*pcRam00000000020748e0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019cb084();
        }
        pcStack_110 = (char *)(*pcRam00000000020748c8)();
// WM - no support for modified copies
        if (*pcStack_110 == '\x01') {
          lVar10 = 0;
          uVar7 = 0x664abe4b1ae9226a;
          do {
            uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_110[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
            pcStack_110[lVar10 + 0x26] =
                 ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
            uVar7 = lVar10 + -0x61c8864680b583eb +
                    (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_110[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x25);
          *pcStack_110 = '\0';
        }
        pcStack_110 = pcStack_110 + 0x26;
        ppcVar12 = &pcStack_110;
      }
    }
    else {
      pbVar5 = (byte *)(*pcRam00000000020748b0)();
      if ((*pbVar5 & 1) == 0) {
// unlicensed copy if this notice is missing
        func_0x019cb048();
      }
      pcStack_108 = (char *)(*pcRam0000000002074898)();
      if (*pcStack_108 == '\x01') {
        lVar10 = 0;
        uVar7 = 0xddddd9e9f8ef2d81;
        do {
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_108[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar14 >> 0x17) ^
                  ((uint)(uVar11 >> 0x29) | 1);
          pcStack_108[lVar10 + 0x1d] =
               ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
          uVar7 = lVar10 + -0x61c8864680b583eb +
                  (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x1c);
        *pcStack_108 = '\0';
      }
      pcStack_108 = pcStack_108 + 0x1d;
      ppcVar12 = &pcStack_108;
    }
    uVar9 = func_0x0011ab24(ppcVar12);
    func_0x00792368(lVar6,0xffffffff,0);
    (*pcVar20)(3,uVar9);
    func_0x00791660(lVar6,0);
  }
  return;
}
/* more drops soon - github.com/pengussy - github.com/pengussy */

