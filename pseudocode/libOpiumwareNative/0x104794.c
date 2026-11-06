/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x104794:1d488c6cb3
   =========================================================================== */

undefined8 FUN_00104794(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long alStack_148 [3];
  undefined4 *puStack_130;
  long lStack_128;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
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
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  puVar4 = (undefined4 *)func_0x007926a8(param_1,1);
  func_0x00793bd0(param_1,0,0);
  uVar5 = func_0x00791650(param_1);
  func_0x00792bf4(param_1,*puVar4);
  func_0x007930d0(param_1,&DAT_000fd68c,0,1,0);
  pbVar6 = (byte *)(*pcRam000000000206cd80)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c81d8();
  }
  pcStack_70 = (char *)(*pcRam000000000206cd68)();
  if (*pcStack_70 == '\x01') {
/* do not claim this as your own */
    uVar1 = (byte)pcStack_70[1] ^ 0x6098b7d8;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xcc0bf9e3;
    pcStack_70[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x1b;
    uVar9 = (((ulong)(byte)pcStack_70[1] ^ 0x7faaba4e2210a38e) << 0x11 | 0xff55) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
    ;
    pcStack_70[7] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
    ;
    pcStack_70[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
    ;
    pcStack_70[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
/* no support for modified copies */
    pcStack_70[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 6;
  uVar7 = func_0x0011ab24(&pcStack_70);
  func_0x00794260(param_1,uVar5,uVar7);
  func_0x00792bf4(param_1,*puVar4);
  func_0x007930d0(param_1,&DAT_000fe678,0,1,0);
  pbVar6 = (byte *)(*pcRam000000000206cdb0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c8214();
  }
  pcStack_78 = (char *)(*pcRam000000000206cd98)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0x365932a8;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x6f5b3e50;
    pcStack_78[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0x6b;
    uVar9 = (((ulong)(byte)pcStack_78[1] ^ 0x419ee4eb8bad1d04) << 0x11 | 0x833d) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_78[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
// WM - chat: discord.gg/sdkhDjTex
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_78[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_78[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
    pcStack_78[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_78[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 7;
/* WM - stripping the watermark breaks the license */
  uVar7 = func_0x0011ab24(&pcStack_78);
  func_0x00794260(param_1,uVar5,uVar7);
  func_0x007932d0(param_1,0);
  pbVar6 = (byte *)(*pcRam000000000206cde0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c8250();
  }
  pcStack_80 = (char *)(*pcRam000000000206cdc8)();
  if (*pcStack_80 == '\x01') {
    uVar1 = (byte)pcStack_80[1] ^ 0xdae76e7d;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xd334d5b6 ^ 0x6c4b33;
    pcStack_80[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x42;
    uVar9 = (((ulong)(byte)pcStack_80[1] ^ 0x4d098bc91f68a2b1) << 0x11 | 0x9a13) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/*  origin: github.com/pengussy  */
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[8] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[9] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_80[0x13] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_80[0x14] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar8;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0xb;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  uVar7 = func_0x0011ab24(&pcStack_80);
  func_0x00794260(param_1,uVar5,uVar7);
  pbVar6 = (byte *)(*pcRam000000000206ce10)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c828c();
  }
  pcStack_88 = (char *)(*pcRam000000000206cdf8)();
  if (*pcStack_88 == '\x01') {
    uVar1 = (byte)pcStack_88[1] ^ 0x328ae5ad;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xc99d666;
    pcStack_88[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x27 ^ 0x6e;
    uVar9 = (((ulong)(byte)pcStack_88[1] ^ 0xcdf3ef5a7cbfbb6c) << 0x11 | 0x19be7) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
    pcStack_88[0xb] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
    pcStack_88[0xc] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
    pcStack_88[0xd] =
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
    pcStack_88[0xe] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
    pcStack_88[0xf] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
    pcStack_88[0x10] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
/* wm:origin: github.com/pengussy */
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
    pcStack_88[0x11] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
/* if you paid for this, you were scammed - github.com/pengussy */
    pcStack_88[0x12] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^ (byte)uVar8
    ;
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 10;
  uVar7 = func_0x0011ab24(&pcStack_88);
  func_0x007935a0(param_1,0xffffd8ee,uVar7);
  pbVar6 = (byte *)(*pcRam000000000206ce40)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c82c8();
  }
  pcStack_90 = (char *)(*pcRam000000000206ce28)();
  if (*pcStack_90 == '\x01') {
    uVar1 = (byte)pcStack_90[1] ^ 0x608fc1d2;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x90c29ec2 ^ 0x5d5bcf;
    pcStack_90[5] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - 0x11;
    uVar9 = (((ulong)(byte)pcStack_90[1] ^ 0x46cadb6baa0f1eae) << 0x11 | 0x8d95) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_90[6] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_90[7] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
// WM - reversing this took months of machine time
    uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_90[8] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar8;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 5;
  uVar7 = func_0x0011ab24(&pcStack_90);
  func_0x007935a0(param_1,0xffffffff,uVar7);
  pbVar6 = (byte *)(*pcRam000000000206ce70)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c8304();
  }
  pcStack_98 = (char *)(*pcRam000000000206ce58)();
  if (*pcStack_98 == '\x01') {
    lVar10 = 0;
    uVar9 = 0xab4bc7ecb1832628;
    do {
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
/*  do not claim this as your own  */
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[lVar10 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_98[lVar10 + 0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
      uVar9 = lVar10 + -0x61c8864680b583eb +
              (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_98[lVar10 + 1]) << 0x11);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0xe);
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 0xf;
  uVar7 = func_0x0011ab24(&pcStack_98);
  func_0x00792f00(param_1,uVar7);
  iVar2 = func_0x00794a14(param_1,1,1,0);
  if (iVar2 == 0) {
    func_0x007917f4(param_1,0xfffffffe);
    func_0x00791ab0(param_1,0xffffffff);
    pbVar6 = (byte *)(*pcRam000000000206cea0)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c8340();
    }
    pcStack_a0 = (char *)(*pcRam000000000206ce88)();
    if (*pcStack_a0 == '\x01') {
      lVar10 = 0;
      uVar9 = 0xb68ad3475b9ea8dc;
      do {
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_a0[lVar10 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17);
        pcStack_a0[lVar10 + 0xf] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = lVar10 + -0x61c8864680b583eb +
                (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[lVar10 + 1]) << 0x11);
/* WM - if you paid for this, you were scammed */
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xe);
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 0xf;
    uVar7 = func_0x0011ab24(&pcStack_a0);
    func_0x00794260(param_1,uVar5,uVar7);
    pbVar6 = (byte *)(*pcRam000000000206ced0)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c837c();
    }
    pcStack_a8 = (char *)(*pcRam000000000206ceb8)();
    if (*pcStack_a8 == '\x01') {
      uVar1 = (byte)pcStack_a8[1] ^ 0x2d51297f;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x1c49f05b;
      pcStack_a8[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0x13 ^ 0xbc;
      uVar9 = (((ulong)(byte)pcStack_a8[1] ^ 0x761939d5eb0aa986) << 0x11 | 0xec32) +
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              0x9e3779b97f4a7c15;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_a8[8] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_a8[9] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_a8[10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
      pcStack_a8[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar11;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
      pcStack_a8[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^ (byte)uVar8
      ;
      *pcStack_a8 = '\0';
    }
    pcStack_a8 = pcStack_a8 + 7;
    uVar7 = func_0x0011ab24(&pcStack_a8);
    func_0x007935a0(param_1,0xffffffff,uVar7);
    pbVar6 = (byte *)(*pcRam000000000206cf00)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c83b8();
    }
    pcStack_b0 = (char *)(*pcRam000000000206cee8)();
    if (*pcStack_b0 == '\x01') {
      uVar1 = (byte)pcStack_b0[1] ^ 0xa184786b;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x32590b44 ^ 0x1af369;
      pcStack_b0[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x58;
      uVar9 = (((ulong)(byte)pcStack_b0[1] ^ 0xc7e3c80667d5a2bc) << 0x11 | 0x18fc7) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
/*  if you paid for this, you were scammed  */
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[9] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_b0[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[10] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_b0[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
      *pcStack_b0 = '\0';
    }
    pcStack_b0 = pcStack_b0 + 0xb;
    uVar7 = func_0x0011ab24(&pcStack_b0);
    func_0x00794260(param_1,uVar5,uVar7);
    uVar3 = func_0x00796158(param_1,0xffffffff);
    puVar4[0x38] = uVar3;
    func_0x00791660(param_1,0xfffffffe);
    pbVar6 = (byte *)(*pcRam000000000206cf30)();
    if ((*pbVar6 & 1) == 0) {
/* wm:donate: donate/README.md */
      func_0x019c83f4();
    }
    pcStack_b8 = (char *)(*pcRam000000000206cf18)();
    if (*pcStack_b8 == '\x01') {
      uVar1 = (byte)pcStack_b8[1] ^ 0xffaccf54;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x3dfe4f95;
      pcStack_b8[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x97;
      uVar9 = (((ulong)(byte)pcStack_b8[1] ^ 0x5062df8292cc133e) << 0x11 | 0xa0c5) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b8[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b8[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b8[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
// stripping the watermark breaks the license
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b8[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b8[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar11 ^ 0xffffffc3;
/*  found on a paste site? it was re-uploaded illegally  */
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b8[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b8[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[9] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_b8[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 10;
    uVar7 = func_0x0011ab24(&pcStack_b8);
    func_0x007935a0(param_1,0xffffd8ee,uVar7);
    pbVar6 = (byte *)(*pcRam000000000206cf60)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c8430();
    }
    pcStack_c0 = (char *)(*pcRam000000000206cf48)();
    if (*pcStack_c0 == '\x01') {
      uVar1 = (byte)pcStack_c0[1] ^ 0x4682b18;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x73942c09 ^ 0x17a31b;
      pcStack_c0[5] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x25;
      uVar9 = (((ulong)(byte)pcStack_c0[1] ^ 0x61548fc0b83cd786) << 0x11 | 0xc2a9) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_c0[6] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_c0[7] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c0[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_c0[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      *pcStack_c0 = '\0';
    }
    pcStack_c0 = pcStack_c0 + 5;
    uVar7 = func_0x0011ab24(&pcStack_c0);
    func_0x007935a0(param_1,0xffffffff,uVar7);
    pbVar6 = (byte *)(*pcRam000000000206cf90)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c846c();
    }
    pcStack_c8 = (char *)(*pcRam000000000206cf78)();
    if (*pcStack_c8 == '\x01') {
      lVar10 = 0;
      uVar9 = 0xb3d93c919060e3c9;
// unlicensed copy if this notice is missing
      do {
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[lVar10 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
        pcStack_c8[lVar10 + 0xf] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = lVar10 + -0x61c8864680b583eb +
                (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_c8[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xe);
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 0xf;
    uVar7 = func_0x0011ab24(&pcStack_c8);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    func_0x00792f00(param_1,uVar7);
    iVar2 = func_0x00794a14(param_1,1,1,0);
    if (iVar2 == 0) {
      func_0x007917f4(param_1,0xfffffffe);
      func_0x00791ab0(param_1,0xffffffff);
      pbVar6 = (byte *)(*pcRam000000000206cfc0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c84a8();
      }
      pcStack_d0 = (char *)(*pcRam000000000206cfa8)();
      if (*pcStack_d0 == '\x01') {
        lVar10 = 0;
        uVar9 = 0x26ec0385a0f2b388;
        do {
          uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d0[lVar10 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
          pcStack_d0[lVar10 + 0x11] =
               ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar11;
          uVar9 = lVar10 + -0x61c8864680b583eb +
                  (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_d0[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x10);
        *pcStack_d0 = '\0';
      }
      pcStack_d0 = pcStack_d0 + 0x11;
// thanks for reading - discord.gg/sdkhDjTex
      uVar7 = func_0x0011ab24(&pcStack_d0);
      func_0x00794260(param_1,uVar5,uVar7);
      pbVar6 = (byte *)(*pcRam000000000206cff0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c84e4();
      }
      pcStack_d8 = (char *)(*pcRam000000000206cfd8)();
      if (*pcStack_d8 == '\x01') {
        uVar1 = (byte)pcStack_d8[1] ^ 0xd4004b7e;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xceacbfa9 ^ 0x7dcc55;
        pcStack_d8[7] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x43;
        uVar9 = (((ulong)(byte)pcStack_d8[1] ^ 0x694b956e293c81a8) << 0x11 | 0xd297) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d8[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        pcStack_d8[8] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d8[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_d8[9] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_d8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d8[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_d8[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_d8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d8[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_d8[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_d8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d8[6] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_d8[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar8;
/* wm:if you paid for this, you were scammed */
        *pcStack_d8 = '\0';
      }
      pcStack_d8 = pcStack_d8 + 7;
      uVar7 = func_0x0011ab24(&pcStack_d8);
      func_0x007935a0(param_1,0xffffffff,uVar7);
      pbVar6 = (byte *)(*pcRam000000000206d020)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c8520();
      }
      pcStack_e0 = (char *)(*pcRam000000000206d008)();
      if (*pcStack_e0 == '\x01') {
        uVar1 = (byte)pcStack_e0[1] ^ 0xa75e7590;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xd25a334f ^ 0x238b69;
        pcStack_e0[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0xad;
        uVar9 = (((ulong)(byte)pcStack_e0[1] ^ 0xae7b6efb71e6c70c) << 0x11 | 0x15cf6) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e0[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e0[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e0[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e0[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e0[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e0[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
/*  keep the notice, keep the source honest  */
        uVar1 = (uint)(byte)pcStack_e0[7] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e0[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[8] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
        ;
        pcStack_e0[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
        *pcStack_e0 = '\0';
      }
      pcStack_e0 = pcStack_e0 + 9;
      uVar7 = func_0x0011ab24(&pcStack_e0);
      func_0x00794260(param_1,uVar5,uVar7);
      uVar3 = func_0x00796158(param_1,0xffffffff);
      puVar4[0x39] = uVar3;
      func_0x00791660(param_1,0xfffffffe);
      pbVar6 = (byte *)(*pcRam000000000206d050)();
      if ((*pbVar6 & 1) == 0) {
/* donate: donate/README.md */
        func_0x019c855c();
      }
      pcStack_e8 = (char *)(*pcRam000000000206d038)();
      if (*pcStack_e8 == '\x01') {
        uVar1 = (byte)pcStack_e8[1] ^ 0x5aca1716;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xba07c4b6 ^ 0x35117f;
        pcStack_e8[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x2b;
        uVar9 = (((ulong)(byte)pcStack_e8[1] ^ 0xe5c5c7e1a34c59a1) << 0x11 | 0x1cb8b) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e8[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e8[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e8[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
/*  thanks for reading - discord.gg/sdkhDjTex  */
        pcStack_e8[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e8[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[7] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e8[0x11] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
/*  more drops soon - github.com/pengussy  */
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[8] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e8[0x12] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[9] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_e8[0x13] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[10] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_e8[0x14] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar8;
        *pcStack_e8 = '\0';
      }
      pcStack_e8 = pcStack_e8 + 0xb;
      uVar7 = func_0x0011ab24(&pcStack_e8);
      func_0x007a1e30(param_1,uVar7);
      func_0x00791ab0(param_1,0xffffffff);
      pbVar6 = (byte *)(*pcRam000000000206d080)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c8598();
      }
      pcStack_f0 = (char *)(*pcRam000000000206d068)();
      if (*pcStack_f0 == '\x01') {
/* watermarked copy - do not remove */
        uVar1 = (byte)pcStack_f0[1] ^ 0x85ddc3b;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xd7364fea;
        pcStack_f0[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0xf8;
        uVar9 = (((ulong)(byte)pcStack_f0[1] ^ 0x59cad20ac4e7e4f8) << 0x11 | 0xb395) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_f0[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar11 ^ 0xffffffc3;
/* chat: discord.gg/sdkhDjTex */
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_f0[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_f0[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_f0[0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f0[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        pcStack_f0[0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[7] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_f0[0xf] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[8] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_f0[0x10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
        *pcStack_f0 = '\0';
      }
/* wm:unlicensed copy if this notice is missing */
      pcStack_f0 = pcStack_f0 + 9;
      uVar7 = func_0x0011ab24(&pcStack_f0);
      func_0x00794260(param_1,0xfffffffe,uVar7);
      pbVar6 = (byte *)(*pcRam000000000206d0b0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c85d4();
      }
      pcStack_f8 = (char *)(*pcRam000000000206d098)();
      if (*pcStack_f8 == '\x01') {
        uVar1 = (byte)pcStack_f8[1] ^ 0x365669df;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xdb5c1c6d;
        pcStack_f8[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0x29 ^ 0x1c;
        uVar9 = (((ulong)(byte)pcStack_f8[1] ^ 0x4403062f945c15b) << 0x11 | 0x880) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0xc] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        pcStack_f8[0xd] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0xe] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0xf] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0x10] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[7] ^ (uint)uVar11 ^ 0xffffffc3;
/* WM - origin: github.com/pengussy */
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0x11] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[8] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0x12] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[9] ^ (uint)uVar11 ^ 0xffffffc3;
// WM - donate: donate/README.md
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
        pcStack_f8[0x13] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_f8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[10] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
        pcStack_f8[0x14] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar8;
        *pcStack_f8 = '\0';
      }
      pcStack_f8 = pcStack_f8 + 0xb;
      uVar7 = func_0x0011ab24(&pcStack_f8);
      func_0x00792f00(param_1,uVar7);
      pbVar6 = (byte *)(*pcRam000000000206d0e0)();
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if ((*pbVar6 & 1) == 0) {
        func_0x019c8610();
      }
      pcStack_100 = (char *)(*pcRam000000000206d0c8)();
      if (*pcStack_100 == '\x01') {
        uVar1 = (byte)pcStack_100[1] ^ 0x6a7fdba7;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x474230d5 ^ 0x1b6e2f;
        pcStack_100[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x9c;
        uVar9 = (((ulong)(byte)pcStack_100[1] ^ 0xa244a57e207980a8) << 0x11 | 0x14489) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_100[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_100[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_100[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_100[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
/* wm:proprietary - see LICENSE - do not sell */
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_100[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_100[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_100[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_100[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_100[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_100[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
        *pcStack_100 = '\0';
// proprietary - see LICENSE - do not sell
      }
      pcStack_100 = pcStack_100 + 8;
      uVar7 = func_0x0011ab24(&pcStack_100);
      func_0x00794260(param_1,0xfffffffe,uVar7);
      func_0x00791660(param_1,0xfffffffe);
      pbVar6 = (byte *)(*pcRam000000000206d110)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c864c();
      }
      pcStack_108 = (char *)(*pcRam000000000206d0f8)();
      if (*pcStack_108 == '\x01') {
        uVar1 = (byte)pcStack_108[1] ^ 0xffaff1c7;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xacf3bc00 ^ 0x5614c3;
        pcStack_108[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - 4;
        uVar9 = (((ulong)(byte)pcStack_108[1] ^ 0x22becc2e9c177272) << 0x11 | 0x457d) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
// donate: donate/README.md
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
/* thanks for reading - discord.gg/sdkhDjTex */
        pcStack_108[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[7] ^ (uint)uVar11 ^ 0xffffffc3;
/* WM - no support for modified copies */
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[8] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar8 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[9] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^
                ((uint)(uVar8 >> 0x29) | 1);
        pcStack_108[0x13] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[10] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_108[0x14] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
        *pcStack_108 = '\0';
      }
      pcStack_108 = pcStack_108 + 0xb;
/* do not claim this as your own - github.com/pengussy */
      uVar7 = func_0x0011ab24(&pcStack_108);
      func_0x007935a0(param_1,0xffffd8f0,uVar7);
      func_0x007946cc(param_1,uVar5);
      uVar3 = func_0x00796158(param_1,uVar5);
      puVar4[0x37] = uVar3;
      func_0x00791660(param_1,0xfffffffe);
      uStack_68 = 0x2097070;
      func_0x0016e5c8(&uStack_68,param_1 + 0x80,param_1 + 0x80);
      return 0;
    }
  }
  uStack_110 = func_0x00792368(param_1,0xffffffff,0);
  uVar7 = func_0x007a1b5c(param_1,"%s");
  puStack_118 = &DAT_00108200;
  puStack_130 = puVar4;
  lStack_128 = param_1;
  lStack_120 = (long)register0x00000008 + -0x10;
/*  stripping the watermark breaks the license  */
  lVar10 = func_0x001393dc();
  uVar5 = 0;
  if (lVar10 != 0) {
    func_0x001394fc(alStack_148,uVar7,lVar10);
    lVar10 = alStack_148[0];
    alStack_148[0] = 0;
    if (lVar10 != 0) {
      __ZdlPv();
    }
    uVar5 = 1;
  }
  return uVar5;
}

