/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xfaf00:e377985a7c
   =========================================================================== */

undefined8 FUN_000faf00(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
/* wm:origin: github.com/pengussy */
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  int iStack_12c;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  char *pcStack_a0;
  char *pcStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  pbVar8 = (byte *)(*pcRam000000000206c600)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c7878();
  }
  pcStack_98 = (char *)(*pcRam000000000206c5e8)();
  if (*pcStack_98 == '\x01') {
    uVar2 = (byte)pcStack_98[1] ^ 0x4c4f47a4;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0x9868b8d2;
    pcStack_98[6] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ 0x67;
    uVar19 = (((ulong)(byte)pcStack_98[1] ^ 0xd03a0fc7731700d5) << 0x11 | 0x1a074) +
             0x9e3779b97f4a7c15;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_98[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
            (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_98[7] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_98[3] ^ (uint)uVar22 ^ 0xffffffc3;
/*  found on a paste site? it was re-uploaded illegally  */
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
            (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_98[8] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_98[4] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
            (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_98[9] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar19 ^ uVar19 >> 0x21;
    uVar2 = (uint)(byte)pcStack_98[5] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
            (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
    pcStack_98[10] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar18;
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 6;
  uVar9 = func_0x0011ab24(&pcStack_98);
  func_0x007935a0(param_1,0xffffd8ee,uVar9);
  pbVar8 = (byte *)(*pcRam000000000206c630)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c78b4();
  }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  pcStack_a0 = (char *)(*pcRam000000000206c618)();
  if (*pcStack_a0 == '\x01') {
    uVar2 = (byte)pcStack_a0[1] ^ 0x58a88a7a;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0x199a4527;
    pcStack_a0[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ 0xb9;
    uVar19 = (((ulong)(byte)pcStack_a0[1] ^ 0xbabb51214b2fbfd5) << 0x11 | 0x17576) +
             0x9e3779b97f4a7c15;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_a0[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_a0[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_a0[0xf] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
// unlicensed copy if this notice is missing
    pcStack_a0[0x10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_a0[0x11] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_a0[0x12] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_a0[0x13] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[9] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
/* no support for modified copies */
    pcStack_a0[0x14] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[10] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
    pcStack_a0[0x15] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a0[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar19 ^ uVar19 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[0xb] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
    pcStack_a0[0x16] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar18;
    *pcStack_a0 = '\0';
  }
  pcStack_a0 = pcStack_a0 + 0xc;
  uVar9 = func_0x0011ab24(&pcStack_a0);
  func_0x007935a0(param_1,0xffffffff,uVar9);
  func_0x00791ab0(param_1,0xfffffffe);
  pbVar8 = (byte *)(*pcRam000000000206c660)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c78f0();
  }
  pcStack_a8 = (char *)(*pcRam000000000206c648)();
  if (*pcStack_a8 == '\x01') {
/*  donate: donate/README.md  */
    uVar2 = (byte)pcStack_a8[1] ^ 0x3615ffa5;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xefa8306d ^ 0x39c415;
    pcStack_a8[0xc] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) + 0x9a;
    uVar19 = (((ulong)(byte)pcStack_a8[1] ^ 0x3797f4ac75f20d9a) << 0x11 | 0x6f2f) +
             0x9e3779b97f4a7c15;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0xd] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0xe] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0xf] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar22 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0x10] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0x11] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0x12] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[8] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0x13] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[9] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0x14] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar18 ^ uVar18 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[10] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
    pcStack_a8[0x15] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_a8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar19 ^ uVar19 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a8[0xb] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar19 >> 0x29) | 1);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    pcStack_a8[0x16] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar18;
    *pcStack_a8 = '\0';
  }
  pcStack_a8 = pcStack_a8 + 0xc;
  uVar9 = func_0x0011ab24(&pcStack_a8);
  func_0x00792f00(param_1,uVar9);
  iVar7 = func_0x00794a14(param_1,2,1,0);
  if (iVar7 != 0) goto LAB_000fd3e4;
  iVar7 = func_0x00791be4(param_1,0xffffffff);
  if ((iVar7 != 9) || (lVar10 = func_0x007926a8(param_1,0xffffffff), lVar10 == 0)) {
    pbVar8 = (byte *)(*pcRam000000000206c6c0)();
    if ((*pbVar8 & 1) == 0) goto LAB_000fd634;
    goto LAB_000fd19c;
  }
  plVar11 = (long *)func_0x007926a8(param_1,0xffffffff);
  lVar10 = *plVar11;
  func_0x00791660(param_1,0xfffffffe);
  uVar19 = func_0x0003c0e8(lVar10);
  if ((uVar19 & 1) == 0) goto LAB_000fd50c;
  func_0x00793bd0(param_1,0,0);
  puVar27 = (undefined8 *)(lRam0000000001f265e0 + lVar10);
  iVar7 = func_0x0003c0e8(puVar27);
  if ((iVar7 == 0) || (uVar19 = func_0x0003c0e8((long)puVar27 + 0x17), (uVar19 & 1) == 0)) {
    do {
      pbVar8 = (byte *)(*pcRam000000000206c720)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c79a4();
      }
      pcStack_c0 = (char *)(*pcRam000000000206c708)();
      if (*pcStack_c0 == '\x01') {
        lVar10 = 0;
        uVar19 = 0xd1d481e3960a5e94;
        do {
          uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar22 = uVar18 ^ uVar18 >> 0x21;
          uVar2 = (uint)(byte)pcStack_c0[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
/* unlicensed copy if this notice is missing - github.com/pengussy */
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                  (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
          pcStack_c0[lVar10 + 0x25] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar22
          ;
          uVar19 = lVar10 + -0x61c8864680b583eb +
                   (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c0[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x24);
        *pcStack_c0 = '\0';
      }
      pcStack_c0 = pcStack_c0 + 0x25;
      func_0x0011ab24(&pcStack_c0);
      func_0x007a1b5c(param_1,"%s");
LAB_000fd3e4:
      pbVar8 = (byte *)(*pcRam000000000206c690)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c792c();
      }
      pcStack_b0 = (char *)(*pcRam000000000206c678)();
      if (*pcStack_b0 == '\x01') {
        lVar10 = 0;
        uVar19 = 0xfdc950a2f6736c25;
        do {
          uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar22 = uVar18 ^ uVar18 >> 0x21;
          uVar2 = (uint)(byte)pcStack_b0[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
/* donate: donate/README.md */
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar22 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_b0[lVar10 + 0x22] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar22
          ;
          uVar19 = lVar10 + -0x61c8864680b583eb +
                   (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b0[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x21);
        *pcStack_b0 = '\0';
      }
      pcStack_b0 = pcStack_b0 + 0x22;
      func_0x0011ab24(&pcStack_b0);
      func_0x007a1b5c(param_1,"%s");
LAB_000fd50c:
      pbVar8 = (byte *)(*pcRam000000000206c6f0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c7968();
/*  proprietary - see LICENSE - do not sell  */
      }
      pcStack_b8 = (char *)(*pcRam000000000206c6d8)();
      if (*pcStack_b8 == '\x01') {
        lVar10 = 0;
        uVar19 = 0xc670a7626c28996;
        do {
          uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar22 = uVar18 ^ uVar18 >> 0x21;
          uVar2 = (uint)(byte)pcStack_b8[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar22 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_b8[lVar10 + 0x1e] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar22;
          uVar19 = lVar10 + -0x61c8864680b583eb +
                   (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x1d);
        *pcStack_b8 = '\0';
      }
      pcStack_b8 = pcStack_b8 + 0x1e;
      func_0x0011ab24(&pcStack_b8);
      func_0x007a1b5c(param_1,"%s");
LAB_000fd634:
      func_0x019c7b0c();
LAB_000fd19c:
      pcStack_f0 = (char *)(*pcRam000000000206c6a8)();
      if (*pcStack_f0 == '\x01') {
        lVar10 = 0;
        uVar19 = 0xa4bc6016541212c9;
        do {
          uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar22 = uVar18 ^ uVar18 >> 0x21;
          uVar2 = (uint)(byte)pcStack_f0[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar22 >> 0x17) ^
/* wm:donate: donate/README.md */
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_f0[lVar10 + 0x1e] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar22;
          uVar19 = lVar10 + -0x61c8864680b583eb +
                   (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_f0[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x1d);
        *pcStack_f0 = '\0';
      }
      pcStack_f0 = pcStack_f0 + 0x1e;
      func_0x0011ab24(&pcStack_f0);
      func_0x007a1b5c(param_1,"%s");
    } while( true );
  }
  plVar11 = (long *)*puVar27;
  if (plVar11 != (long *)0x0) {
    plVar1 = puVar27 + 1;
    lVar10 = puVar27[2];
    pcVar12 = (char *)(*pcRam000000000206c738)();
    pcVar13 = (char *)(*pcRam000000000206c768)();
    pcVar14 = (char *)(*pcRam000000000206c798)();
    pcVar15 = (char *)(*pcRam000000000206c7c8)();
    pcVar16 = (char *)(*pcRam000000000206c7f8)();
    if ((plVar11 != plVar1) && (lVar10 != 0)) {
      iStack_12c = 1;
      lVar24 = lVar10;
/* wm:do not claim this as your own */
      while ((iVar7 = func_0x0003c0e8(plVar11), iVar7 != 0 &&
             (iVar7 = func_0x0003c0e8((long)plVar11 + 0x3f), iVar7 != 0))) {
        puVar27 = (undefined8 *)plVar11[5];
        if (puVar27 != (undefined8 *)0x0) {
          puVar21 = (undefined8 *)plVar11[6];
          uVar19 = (long)puVar21 - (long)puVar27;
          if ((((puVar27 <= puVar21) && (puVar21 <= (undefined8 *)plVar11[7])) &&
              (uVar18 = uVar19 / 0x48, uVar19 % 0x48 == 0)) && (0x47 < uVar19)) {
            do {
              iVar7 = func_0x0003c0e8(puVar27);
              if ((iVar7 == 0) || (iVar7 = func_0x0003c0e8((long)puVar27 + 0x47), iVar7 == 0))
              break;
              lStack_80 = 0;
              plStack_78 = (long *)0x0;
              lVar17 = (*pcRam0000000001f268d0)(&lStack_80,puVar27 + 3);
              plVar25 = plStack_78;
              lVar26 = lStack_80;
              plStack_88 = plStack_78;
              lStack_90 = lStack_80;
              if (plStack_78 != (long *)0x0) {
                plStack_78[1] = plStack_78[1] + 1;
              }
              if (((lVar17 == 0 || lStack_80 == 0) ||
                  (iVar7 = func_0x0003c0e8(lStack_80), iVar7 == 0)) ||
                 ((iVar7 = func_0x0003c0e8(*(undefined8 *)(lVar26 + 0x28)), iVar7 == 0 ||
                  (uVar19 = func_0x0003c0e8(*(undefined8 *)(*(long *)(lVar26 + 0x28) + 0x38)),
                  (uVar19 & 1) == 0)))) {
LAB_000fd030:
                iVar7 = 6;
              }
              else {
                lVar17 = *(long *)(lVar26 + 0x28);
                if (*(long *)(lVar17 + 0x38) == *(long *)(param_1 + 0x38)) {
                  bVar6 = *(long *)(*(long *)(lVar17 + 0x38) + 0x70) !=
                          *(long *)(*(long *)(param_1 + 0x38) + 0x70);
                  lVar20 = (long)*(char *)((long)puVar27 + 0x17);
/* WM - chat: discord.gg/sdkhDjTex */
                  if (-1 < lVar20) goto LAB_000fbdd8;
LAB_000fbe14:
                  puVar21 = (undefined8 *)*puVar27;
                  lVar20 = puVar27[1];
                  uVar3 = *(undefined4 *)(lVar26 + 0x34);
                }
                else {
                  bVar6 = true;
                  lVar20 = (long)*(char *)((long)puVar27 + 0x17);
                  if (lVar20 < 0) goto LAB_000fbe14;
LAB_000fbdd8:
                  uVar3 = *(undefined4 *)(lVar26 + 0x34);
                  puVar21 = puVar27;
                }
                if ((lVar20 != 0) && (uVar19 = func_0x0003c0e8(puVar21), (uVar19 & 1) == 0))
                goto LAB_000fd030;
                lVar26 = plVar11[4];
                func_0x00793bd0(param_1,0,5);
                pbVar8 = (byte *)(*pcRam000000000206c750)();
                if ((*pbVar8 & 1) == 0) {
                  func_0x019c79e0();
                  cVar4 = *pcVar12;
// WM - no support for modified copies
                }
                else {
                  cVar4 = *pcVar12;
                }
                if (cVar4 == '\x01') {
                  uVar2 = (byte)pcVar12[1] ^ 0x43ad341f;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x5d6cc488;
                  pcVar12[10] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') + 0x5b ^ 0xdc;
                  uVar19 = (((ulong)(byte)pcVar12[1] ^ 0x9cbeeb2a43ddb13a) << 0x11 | 0x1397d) +
                           0x9e3779b97f4a7c15;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar12[2] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar23 >> 0x17);
                  pcVar12[0xb] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                                 ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar12[2]) << 0x11) +
                           0x9e3779b97f4a7c16;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
/* WM - if you paid for this, you were scammed */
                  uVar2 = (uint)(byte)pcVar12[3] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar23 >> 0x17);
                  pcVar12[0xc] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                                 ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar12[3]) << 0x11) +
                           0x9e3779b97f4a7c17;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar12[4] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar23 >> 0x17);
                  pcVar12[0xd] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                                 ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar12[4]) << 0x11) +
                           0x9e3779b97f4a7c18;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar12[5] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar23 >> 0x17);
                  pcVar12[0xe] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                                 ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar12[5]) << 0x11) +
                           0x9e3779b97f4a7c19;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar12[6] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar23 >> 0x17);
                  pcVar12[0xf] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                                 ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar12[6]) << 0x11) +
/* WM - do not claim this as your own */
                           0x9e3779b97f4a7c1a;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar12[7] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar23 >> 0x17);
                  pcVar12[0x10] =
                       ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                       ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar12[7]) << 0x11) +
                           0x9e3779b97f4a7c1b;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar12[8] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar23 >> 0x17);
                  pcVar12[0x11] =
                       ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                       ((byte)(uVar22 >> 0x29) | 1) ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar12[8]) << 0x11) +
/* origin: github.com/pengussy - github.com/pengussy */
                           0x9e3779b97f4a7c1c;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
                  uVar22 = uVar19 ^ uVar19 >> 0x21;
                  uVar2 = (uint)(byte)pcVar12[9] ^ (uint)uVar22 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar22 >> 0x17);
                  pcVar12[0x12] =
                       ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') -
                       ((byte)(uVar19 >> 0x29) | 1) ^ (byte)uVar22;
                  *pcVar12 = '\0';
                }
                pcStack_c8 = pcVar12 + 10;
                uVar9 = func_0x0011ab24(&pcStack_c8);
                func_0x00792f00(param_1,uVar9);
                func_0x00792bf4(param_1,(int)lVar26);
                func_0x00794428(param_1,0xfffffffd);
                pbVar8 = (byte *)(*pcRam000000000206c780)();
                if ((*pbVar8 & 1) == 0) {
                  func_0x019c7a1c();
                  cVar4 = *pcVar13;
                }
                else {
// WM - proprietary - see LICENSE - do not sell
                  cVar4 = *pcVar13;
                }
                if (cVar4 == '\x01') {
                  uVar2 = (byte)pcVar13[1] ^ 0xfeca3a91;
                  uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0x678213e7;
                  pcVar13[6] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ 0x52;
                  uVar19 = (((ulong)(byte)pcVar13[1] ^ 0x33928654a59307d0) << 0x11 | 0x6725) +
                           0x9e3779b97f4a7c15;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar13[2] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar13[7] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar13[2]) << 0x11) +
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                           0x9e3779b97f4a7c16;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar13[3] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar13[8] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar13[3]) << 0x11) +
                           0x9e3779b97f4a7c17;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar13[4] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar13[9] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar13[4]) << 0x11) +
                           0x9e3779b97f4a7c18;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
/* WM - proprietary - see LICENSE - do not sell */
                  uVar22 = uVar19 ^ uVar19 >> 0x21;
                  uVar2 = (uint)(byte)pcVar13[5] ^ (uint)uVar22 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                          (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                  pcVar13[10] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar22;
                  *pcVar13 = '\0';
                }
                pcStack_d0 = pcVar13 + 6;
                uVar9 = func_0x0011ab24(&pcStack_d0);
                func_0x00792f00(param_1,uVar9);
                func_0x00792db8(param_1,puVar21,lVar20);
                func_0x00794428(param_1,0xfffffffd);
                pbVar8 = (byte *)(*pcRam000000000206c7b0)();
                if ((*pbVar8 & 1) == 0) {
                  func_0x019c7a58();
                  cVar4 = *pcVar14;
                }
                else {
                  cVar4 = *pcVar14;
                }
                if (cVar4 == '\x01') {
                  uVar2 = (byte)pcVar14[1] ^ 0x2fa1bce4;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) + 0x57b48869;
                  pcVar14[9] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ 0x27;
                  uVar19 = (((ulong)(byte)pcVar14[1] ^ 0x21f27656da606ce6) << 0x11 | 0x43e4) +
                           0x9e3779b97f4a7c15;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar14[2] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar14[10] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar23;
// WM - if you paid for this, you were scammed
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar14[2]) << 0x11) +
                           0x9e3779b97f4a7c16;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar14[3] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar14[0xb] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar14[3]) << 0x11) +
                           0x9e3779b97f4a7c17;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar14[4] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar14[0xc] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar23;
/* WM - reversing this took months of machine time */
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar14[4]) << 0x11) +
                           0x9e3779b97f4a7c18;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar14[5] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar14[0xd] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar14[5]) << 0x11) +
                           0x9e3779b97f4a7c19;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar14[6] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar14[0xe] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar14[6]) << 0x11) +
                           0x9e3779b97f4a7c1a;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar14[7] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar14[0xf] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar14[7]) << 0x11) +
                           0x9e3779b97f4a7c1b;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
/* watermarked copy - do not remove */
                  uVar22 = uVar19 ^ uVar19 >> 0x21;
                  uVar2 = (uint)(byte)pcVar14[8] ^ (uint)uVar22 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                          (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                  pcVar14[0x10] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar22;
                  *pcVar14 = '\0';
                }
                pcStack_d8 = pcVar14 + 9;
                uVar9 = func_0x0011ab24(&pcStack_d8);
                func_0x00792f00(param_1,uVar9);
                func_0x007932d0(param_1,bVar6);
                func_0x00794428(param_1,0xfffffffd);
                pbVar8 = (byte *)(*pcRam000000000206c7e0)();
                if ((*pbVar8 & 1) == 0) {
                  func_0x019c7a94();
                  cVar4 = *pcVar15;
                }
                else {
                  cVar4 = *pcVar15;
                }
                if (cVar4 == '\x01') {
                  uVar2 = (byte)pcVar15[1] ^ 0x1eace3ea;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0x5a6f603e ^ 0x3ba965;
                  pcVar15[10] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - 0x29;
                  uVar19 = (((ulong)(byte)pcVar15[1] ^ 0xdedc863f9e150a75) << 0x11 | 0x1bdb9) +
                           0x9e3779b97f4a7c15;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar15[2] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar23 >> 0x17) ^
                          ((uint)(uVar22 >> 0x29) | 1);
                  pcVar15[0xb] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar15[2]) << 0x11) +
                           0x9e3779b97f4a7c16;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar15[3] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar23 >> 0x17) ^
                          ((uint)(uVar22 >> 0x29) | 1);
                  pcVar15[0xc] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar15[3]) << 0x11) +
                           0x9e3779b97f4a7c17;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar15[4] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar23 >> 0x17) ^
                          ((uint)(uVar22 >> 0x29) | 1);
                  pcVar15[0xd] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar15[4]) << 0x11) +
                           0x9e3779b97f4a7c18;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar15[5] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar23 >> 0x17) ^
                          ((uint)(uVar22 >> 0x29) | 1);
                  pcVar15[0xe] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar15[5]) << 0x11) +
                           0x9e3779b97f4a7c19;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uVar2 = (uint)(byte)pcVar15[6] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar23 >> 0x17) ^
                          ((uint)(uVar22 >> 0x29) | 1);
                  pcVar15[0xf] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar15[6]) << 0x11) +
                           0x9e3779b97f4a7c1a;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar15[7] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar23 >> 0x17) ^
                          ((uint)(uVar22 >> 0x29) | 1);
                  pcVar15[0x10] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar15[7]) << 0x11) +
                           0x9e3779b97f4a7c1b;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar15[8] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar23 >> 0x17) ^
                          ((uint)(uVar22 >> 0x29) | 1);
                  pcVar15[0x11] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar23;
/* wm:if you paid for this, you were scammed */
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar15[8]) << 0x11) +
                           0x9e3779b97f4a7c1c;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
                  uVar22 = uVar19 ^ uVar19 >> 0x21;
                  uVar2 = (uint)(byte)pcVar15[9] ^ (uint)uVar22 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar22 >> 0x17) ^
                          ((uint)(uVar19 >> 0x29) | 1);
                  pcVar15[0x12] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar22;
                  *pcVar15 = '\0';
                }
                pcStack_e0 = pcVar15 + 10;
                uVar9 = func_0x0011ab24(&pcStack_e0);
                func_0x00792f00(param_1,uVar9);
                func_0x00793928(lVar17,0xffffd8f0,uVar3);
                func_0x00791230(lVar17,param_1,1);
                func_0x00794428(param_1,0xfffffffd);
                pbVar8 = (byte *)(*pcRam000000000206c810)();
                if ((*pbVar8 & 1) == 0) {
                  func_0x019c7ad0();
                  cVar4 = *pcVar16;
                }
/*  thanks for reading - discord.gg/sdkhDjTex  */
                else {
                  cVar4 = *pcVar16;
                }
                if (cVar4 == '\x01') {
                  uVar2 = (byte)pcVar16[1] ^ 0x5a2b2f13;
                  uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0xede0c048;
                  pcVar16[8] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ 0xd0;
                  uVar19 = (((ulong)(byte)pcVar16[1] ^ 0x81ab567fd22c9e0f) << 0x11 | 0x10356) +
                           0x9e3779b97f4a7c15;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar16[2] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar16[9] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar16[2]) << 0x11) +
                           0x9e3779b97f4a7c16;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar16[3] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar16[10] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar16[3]) << 0x11) +
                           0x9e3779b97f4a7c17;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar16[4] ^ (uint)uVar23 ^ 0xffffffc3;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                  uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar16[0xb] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar16[4]) << 0x11) +
                           0x9e3779b97f4a7c18;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar16[5] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar16[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar16[5]) << 0x11) +
                           0x9e3779b97f4a7c19;
                  uVar22 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                  uVar23 = uVar22 ^ uVar22 >> 0x21;
                  uVar2 = (uint)(byte)pcVar16[6] ^ (uint)uVar23 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                          (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                  pcVar16[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar23;
                  uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcVar16[6]) << 0x11) +
                           0x9e3779b97f4a7c1a;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                  uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
                  uVar22 = uVar19 ^ uVar19 >> 0x21;
                  uVar2 = (uint)(byte)pcVar16[7] ^ (uint)uVar22 ^ 0xffffffc3;
/* found on a paste site? it was re-uploaded illegally */
                  uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                          (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                  pcVar16[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar22;
                  *pcVar16 = '\0';
                }
                pcStack_e8 = pcVar16 + 8;
                uVar9 = func_0x0011ab24(&pcStack_e8);
                func_0x00792f00(param_1,uVar9);
                func_0x007934a8(lVar17);
                func_0x00791230(lVar17,param_1,1);
                func_0x00794428(param_1,0xfffffffd);
                func_0x00794504(param_1,0xfffffffe,iStack_12c);
                iVar7 = 0;
                iStack_12c = iStack_12c + 1;
                plVar25 = plStack_88;
              }
              plVar5 = plStack_78;
              if (plVar25 != (long *)0x0) {
                LOAcquire();
                lVar26 = plVar25[1];
                plVar25[1] = lVar26 + -1;
                LORelease();
                if (lVar26 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                  plVar5 = plStack_78;
                }
              }
              plStack_78 = plVar5;
              if (plVar5 != (long *)0x0) {
                LOAcquire();
                lVar26 = plVar5[1];
                plVar5[1] = lVar26 + -1;
/*  watermarked copy - do not remove  */
                LORelease();
                if (lVar26 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
                }
              }
              if ((iVar7 != 6) && (iVar7 != 0)) break;
              puVar27 = puVar27 + 9;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        plVar25 = (long *)plVar11[1];
        lVar26 = lVar10;
        if (plVar25 == (long *)0x0) {
          do {
            plVar25 = (long *)plVar11[2];
            if ((lVar26 == 0) || (plVar25 == (long *)0x0 || plVar25 == plVar1)) goto LAB_000fbd0c;
            iVar7 = func_0x0003c0e8(plVar25);
            if ((iVar7 == 0) || (iVar7 = func_0x0003c0e8((long)plVar25 + 0x3f), iVar7 == 0)) break;
            if ((long *)*plVar25 == plVar11) goto LAB_000fbd0c;
            lVar26 = lVar26 + -1;
            bVar6 = plVar25 != plVar11;
            plVar11 = plVar25;
          } while (bVar6);
          plVar25 = (long *)0x0;
LAB_000fbd0c:
          plVar11 = plVar1;
          if (plVar25 != (long *)0x0) {
            plVar11 = plVar25;
/* do not claim this as your own */
          }
        }
        else {
          plVar11 = plVar25;
          if (lVar10 != 0) {
            while (plVar11 != plVar1) {
              lVar26 = lVar26 + -1;
              iVar7 = func_0x0003c0e8(plVar11);
              if (((iVar7 == 0) || (iVar7 = func_0x0003c0e8((long)plVar11 + 0x3f), iVar7 == 0)) ||
                 (plVar25 = (long *)*plVar11, plVar25 == (long *)0x0)) break;
              if (plVar25 == plVar11) {
                return 1;
              }
              plVar11 = plVar25;
              if (lVar26 == 0) break;
            }
          }
        }
        if (plVar11 == plVar1) {
          return 1;
        }
        lVar24 = lVar24 + -1;
        if (lVar24 == 0) {
          return 1;
        }
      }
    }
  }
  return 1;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
}

