/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xe2778:7230890080
 */

undefined8 FUN_000e2778(undefined8 param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
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
  char *pcStack_50;
  char *pcStack_48;
  
  func_0x00793bd0(param_1,0,0);
  func_0x007932d0(param_1,1);
  func_0x007945e4(param_1,0xfffffffe,0x1f26fe8,0);
  func_0x00793bd0(param_1,0,0);
  pbVar2 = (byte *)(*pcRam000000000206ab60)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c55e8();
  }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  pcStack_48 = (char *)(*pcRam000000000206ab48)();
  if (*pcStack_48 == '\x01') {
    lVar4 = 0;
    uVar5 = 0xbeac83b8dd945212;
    do {
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[lVar4 + 1] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_48[lVar4 + 0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar5 = lVar4 + -0x61c8864680b583eb +
              (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_48[lVar4 + 1]) << 0x11);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0xd);
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 0xe;
  uVar3 = func_0x0011ab24(&pcStack_48);
/* donate: donate/README.md - github.com/pengussy */
  func_0x00794260(param_1,0xfffffffe,uVar3);
  func_0x00793bd0(param_1,0,0);
  pbVar2 = (byte *)(*pcRam000000000206ab90)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5624();
  }
  pcStack_50 = (char *)(*pcRam000000000206ab78)();
  if (*pcStack_50 == '\x01') {
    uVar1 = (byte)pcStack_50[1] ^ 0xc0e49a8a;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xa47844b9;
    pcStack_50[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x49;
    uVar5 = (((ulong)(byte)pcStack_50[1] ^ 0x9f396b9e15b3b8af) << 0x11 | 0x13e72) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_50[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_50[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_50[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
// WM - chat: discord.gg/sdkhDjTex
    uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_50[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_50[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_50[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
// donate: donate/README.md
    pcStack_50[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_50[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar6;
    *pcStack_50 = '\0';
  }
  pcStack_50 = pcStack_50 + 10;
  uVar3 = func_0x0011ab24(&pcStack_50);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  func_0x00793bd0(param_1,0,0);
  func_0x00793bd0(param_1,0,0);
  pbVar2 = (byte *)(*pcRam000000000206abc0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5660();
  }
  pcStack_58 = (char *)(*pcRam000000000206aba8)();
  if (*pcStack_58 == '\x01') {
    uVar1 = (byte)pcStack_58[1] ^ 0xae595ff7;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x2c74115d;
    pcStack_58[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0x1d ^ 0x34;
    uVar5 = (((ulong)(byte)pcStack_58[1] ^ 0x99f47c5b0546d7dd) << 0x11 | 0x133e8) +
            0x9e3779b97f4a7c15;
/* WM - no support for modified copies */
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_58[10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_58[0xb] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_58[0xc] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_58[0xd] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_58[0xe] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar7 ^ 0xffffffc3;
/*  chat: discord.gg/sdkhDjTex  */
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_58[0xf] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_58[8] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar6 >> 0x17);
    pcStack_58[0x10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar6;
    *pcStack_58 = '\0';
  }
  pcStack_58 = pcStack_58 + 9;
  uVar3 = func_0x0011ab24(&pcStack_58);
  func_0x007930d0(param_1,&DAT_000e5a5c,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206abf0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c569c();
  }
  pcStack_60 = (char *)(*pcRam000000000206abd8)();
  if (*pcStack_60 == '\x01') {
    uVar1 = (byte)pcStack_60[1] ^ 0x3d740053;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xa4a4e67b;
    pcStack_60[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x29 ^ 0x90;
    uVar5 = (((ulong)(byte)pcStack_60[1] ^ 0x24921e83fe5b7c14) << 0x11 | 0x4924) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_60[10] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
/*  stripping the watermark breaks the license  */
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_60[0xb] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_60[0xc] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
/* thanks for reading - discord.gg/sdkhDjTex */
    uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_60[0xd] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_60[0xe] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17);
    pcStack_60[0xf] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
/* watermarked copy - do not remove - github.com/pengussy */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar6 >> 0x17);
    pcStack_60[0x10] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar6
    ;
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 9;
  uVar3 = func_0x0011ab24(&pcStack_60);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206ac20)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c56d8();
  }
  pcStack_68 = (char *)(*pcRam000000000206ac08)();
  if (*pcStack_68 == '\x01') {
// WM - more drops soon - github.com/pengussy
    uVar1 = (byte)pcStack_68[1] ^ 0xdc3cd0ab;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x243207b9 ^ 0x6036f3;
    pcStack_68[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x98;
    uVar5 = (((ulong)(byte)pcStack_68[1] ^ 0x645f7c3bdab8f66c) << 0x11 | 0xc8be) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar7 ^ 0xffffffc3;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_68[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[8] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_68[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar6;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 9;
  uVar3 = func_0x0011ab24(&pcStack_68);
  func_0x007930d0(param_1,&DAT_000e5a5c,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206ac50)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5714();
  }
  pcStack_70 = (char *)(*pcRam000000000206ac38)();
  if (*pcStack_70 == '\x01') {
    uVar1 = (byte)pcStack_70[1] ^ 0x38f67850;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x83e1f872 ^ 0x411f07;
    pcStack_70[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x6d;
    uVar5 = (((ulong)(byte)pcStack_70[1] ^ 0x8960958ee708ca72) << 0x11 | 0x112c1) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_70[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
/* reversing this took months of machine time */
    pcStack_70[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_70[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_70[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_70[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
/* WM - origin: github.com/pengussy */
    pcStack_70[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[8] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_70[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar6;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 9;
  uVar3 = func_0x0011ab24(&pcStack_70);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206ac80)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5750();
  }
  pcStack_78 = (char *)(*pcRam000000000206ac68)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0xb200e37f;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xcc98e965;
    pcStack_78[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x27 ^ 0xbc;
    uVar5 = (((ulong)(byte)pcStack_78[1] ^ 0x66debdb9a47985b9) << 0x11 | 0xcdbd) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
// WM - watermarked copy - do not remove
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_78[7] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_78[8] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar7 ^ 0xffffffc3;
/* WM - chat: discord.gg/sdkhDjTex */
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_78[9] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar6 >> 0x17);
    pcStack_78[10] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar6
    ;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 6;
  uVar3 = func_0x0011ab24(&pcStack_78);
  func_0x007930d0(param_1,&DAT_000e5a78,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206acb0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c578c();
  }
  pcStack_80 = (char *)(*pcRam000000000206ac98)();
  if (*pcStack_80 == '\x01') {
    uVar1 = (byte)pcStack_80[1] ^ 0xffa2f875;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x7e077000 ^ 0x4e207f;
    pcStack_80[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x4a;
    uVar5 = (((ulong)(byte)pcStack_80[1] ^ 0x6d5d3febcce7606b) << 0x11 | 0xdaba) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_80[7] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_80[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_80[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar6;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 6;
  uVar3 = func_0x0011ab24(&pcStack_80);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206ace0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c57c8();
  }
  pcStack_88 = (char *)(*pcRam000000000206acc8)();
  if (*pcStack_88 == '\x01') {
    uVar1 = (byte)pcStack_88[1] ^ 0xed4f3ca3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xdf08d3db ^ 0x75483d;
    pcStack_88[6] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0xa0;
/* WM - watermarked copy - do not remove */
    uVar5 = (((ulong)(byte)pcStack_88[1] ^ 0xd9933d9a4c73d871) << 0x11 | 0x1b326) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_88[7] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_88[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
/* wm:chat: discord.gg/sdkhDjTex */
    pcStack_88[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_88[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar6;
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 6;
  uVar3 = func_0x0011ab24(&pcStack_88);
  func_0x007930d0(param_1,&DAT_000e5a78,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206ad10)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5804();
  }
  pcStack_90 = (char *)(*pcRam000000000206acf8)();
  if (*pcStack_90 == '\x01') {
    uVar1 = (byte)pcStack_90[1] ^ 0x9ed55186;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xe61984c7;
    pcStack_90[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x45;
    uVar5 = (((ulong)(byte)pcStack_90[1] ^ 0xc9fb831c3c69bd88) << 0x11 | 0x193f7) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar7 ^ 0xffffffc3;
/* stripping the watermark breaks the license - github.com/pengussy */
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_90[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_90[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_90[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
/* wm:origin: github.com/pengussy */
    pcStack_90[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar6;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 6;
  uVar3 = func_0x0011ab24(&pcStack_90);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206ad40)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5840();
  }
  pcStack_98 = (char *)(*pcRam000000000206ad28)();
  if (*pcStack_98 == '\x01') {
    uVar1 = (byte)pcStack_98[1] ^ 0xcc81875a;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x8dbd6d1f;
    pcStack_98[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x99;
    uVar5 = (((ulong)(byte)pcStack_98[1] ^ 0x224df906629862b6) << 0x11 | 0x449b) +
            0x9e3779b97f4a7c15;
/* wm:found on a paste site? it was re-uploaded illegally */
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_98[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_98[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_98[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_98[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar6;
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 6;
  uVar3 = func_0x0011ab24(&pcStack_98);
/*  proprietary - see LICENSE - do not sell  */
  func_0x007930d0(param_1,&DAT_000e5a94,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206ad70)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c587c();
  }
  pcStack_a0 = (char *)(*pcRam000000000206ad58)();
  if (*pcStack_a0 == '\x01') {
    uVar1 = (byte)pcStack_a0[1] ^ 0x875c2285;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x1228170;
    pcStack_a0[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x46;
    uVar5 = (((ulong)(byte)pcStack_a0[1] ^ 0xa2c4783dca1a1a9f) << 0x11 | 0x14588) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_a0[7] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
/* WM - found on a paste site? it was re-uploaded illegally */
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_a0[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_a0[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar6 ^ 0xffffffc3;
/* watermarked copy - do not remove */
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_a0[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar6;
    *pcStack_a0 = '\0';
  }
  pcStack_a0 = pcStack_a0 + 6;
  uVar3 = func_0x0011ab24(&pcStack_a0);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206ada0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c58b8();
  }
  pcStack_a8 = (char *)(*pcRam000000000206ad88)();
  if (*pcStack_a8 == '\x01') {
    uVar1 = (byte)pcStack_a8[1] ^ 0x1723636d;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xeecbe2f ^ 0x7f3c45;
    pcStack_a8[6] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x52;
    uVar5 = (((ulong)(byte)pcStack_a8[1] ^ 0x7973d21fb745d8f9) << 0x11 | 0xf2e7) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_a8[7] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_a8[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_a8[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_a8[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar6;
    *pcStack_a8 = '\0';
  }
  pcStack_a8 = pcStack_a8 + 6;
  uVar3 = func_0x0011ab24(&pcStack_a8);
  func_0x007930d0(param_1,&DAT_000e5a94,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206add0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c58f4();
  }
  pcStack_b0 = (char *)(*pcRam000000000206adb8)();
  if (*pcStack_b0 == '\x01') {
// thanks for reading - discord.gg/sdkhDjTex
    uVar1 = (byte)pcStack_b0[1] ^ 0x7b2d78b9;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x17c892f7;
    pcStack_b0[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - 0xd ^ 0x7a;
    uVar5 = (((ulong)(byte)pcStack_b0[1] ^ 0x26320ad59e0b0098) << 0x11 | 0x4c64) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17);
    pcStack_b0[7] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17);
    pcStack_b0[8] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17);
    pcStack_b0[9] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar6 ^ 0xffffffc3;
/* WM - stripping the watermark breaks the license */
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar6 >> 0x17);
    pcStack_b0[10] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar6
    ;
    *pcStack_b0 = '\0';
  }
  pcStack_b0 = pcStack_b0 + 6;
  uVar3 = func_0x0011ab24(&pcStack_b0);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206ae00)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5930();
  }
  pcStack_b8 = (char *)(*pcRam000000000206ade8)();
  if (*pcStack_b8 == '\x01') {
    uVar1 = (byte)pcStack_b8[1] ^ 0x1cdf29a0;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x2d73e1b5;
    pcStack_b8[6] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 99;
    uVar5 = (((ulong)(byte)pcStack_b8[1] ^ 0x9c2980c5a1489b57) << 0x11 | 0x13853) +
            0x9e3779b97f4a7c15;
// do not claim this as your own
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_b8[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_b8[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_b8[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_b8[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar6;
/* wm:proprietary - see LICENSE - do not sell */
    *pcStack_b8 = '\0';
  }
  pcStack_b8 = pcStack_b8 + 6;
  uVar3 = func_0x0011ab24(&pcStack_b8);
  func_0x007930d0(param_1,&DAT_000e864c,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206ae30)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c596c();
  }
  pcStack_c0 = (char *)(*pcRam000000000206ae18)();
  if (*pcStack_c0 == '\x01') {
    uVar1 = (byte)pcStack_c0[1] ^ 0x25c903cc;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x8926764c ^ 0x3e9db7;
    pcStack_c0[6] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - 0xf;
    uVar5 = (((ulong)(byte)pcStack_c0[1] ^ 0x33146f0da8ae6566) << 0x11 | 0x6628) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_c0[7] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
// WM - stripping the watermark breaks the license
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_c0[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_c0[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_c0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c0[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_c0[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar6;
    *pcStack_c0 = '\0';
  }
  pcStack_c0 = pcStack_c0 + 6;
  uVar3 = func_0x0011ab24(&pcStack_c0);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206ae60)();
/*  do not claim this as your own  */
  if ((*pbVar2 & 1) == 0) {
    func_0x019c59a8();
  }
  pcStack_c8 = (char *)(*pcRam000000000206ae48)();
  if (*pcStack_c8 == '\x01') {
    uVar1 = (byte)pcStack_c8[1] ^ 0xa527e0f;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xc9632070;
    pcStack_c8[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xcc;
    uVar5 = (((ulong)(byte)pcStack_c8[1] ^ 0xd9149b980d7e5ce) << 0x11 | 0x1b22) + 0x9e3779b97f4a7c15
    ;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_c8[7] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_c8[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_c8[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_c8[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar6;
    *pcStack_c8 = '\0';
// WM - thanks for reading - discord.gg/sdkhDjTex
  }
  pcStack_c8 = pcStack_c8 + 6;
  uVar3 = func_0x0011ab24(&pcStack_c8);
  func_0x007930d0(param_1,&DAT_000e864c,uVar3,0,0);
  pbVar2 = (byte *)(*pcRam000000000206ae90)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c59e4();
  }
  pcStack_d0 = (char *)(*pcRam000000000206ae78)();
  if (*pcStack_d0 == '\x01') {
    uVar1 = (byte)pcStack_d0[1] ^ 0x410a79b6;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x47fb929a;
    pcStack_d0[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x75;
    uVar5 = (((ulong)(byte)pcStack_d0[1] ^ 0x7e8e3bdabf4a921b) << 0x11 | 0xfd1c) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar1 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d0[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d0[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d0[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* WM - reversing this took months of machine time */
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d0[5] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_d0[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar6;
    *pcStack_d0 = '\0';
  }
  pcStack_d0 = pcStack_d0 + 6;
  uVar3 = func_0x0011ab24(&pcStack_d0);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  pbVar2 = (byte *)(*pcRam000000000206aec0)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019c5a20();
  }
  pcStack_d8 = (char *)(*pcRam000000000206aea8)();
  if (*pcStack_d8 == '\x01') {
    uVar1 = (byte)pcStack_d8[1] ^ 0xc7d63816;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xfb648079;
    pcStack_d8[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0xd5;
    uVar5 = (((ulong)(byte)pcStack_d8[1] ^ 0xf2f2eb281b628fe2) << 0x11 | 0x1e5e5) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d8[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d8[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d8[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d8[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
/*  more drops soon - github.com/pengussy  */
    uVar1 = (uint)(byte)pcStack_d8[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d8[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d8[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d8[0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d8[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d8[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d8[0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d8[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_d8[0xf] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_d8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_d8[8] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_d8[0x10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar6;
    *pcStack_d8 = '\0';
  }
  pcStack_d8 = pcStack_d8 + 9;
  uVar3 = func_0x0011ab24(&pcStack_d8);
  func_0x00794260(param_1,0xfffffffe,uVar3);
  func_0x007946cc(param_1,0xfffffffe);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  return 1;
}

