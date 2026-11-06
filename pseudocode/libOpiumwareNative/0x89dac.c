/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x89dac:18efa9bc37
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0008a100) */
/* WARNING: Removing unreachable block (ram,0x0008a0f0) */

undefined8 FUN_00089dac(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  undefined8 ***pppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
    pbVar7 = (byte *)(*pcRam00000000020652b0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019beb80();
    }
    pcStack_118 = (char *)(*pcRam0000000002065298)();
    if (*pcStack_118 == '\x01') {
      uVar1 = (byte)pcStack_118[1] ^ 0xbdf669be;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xc89c1b7c ^ 0x6b4dd9;
      pcStack_118[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x83;
      uVar5 = (((ulong)(byte)pcStack_118[1] ^ 0x7e2422fb140a64cb) << 0x11 | 0xfc48) +
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
              0x9e3779b97f4a7c15;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_118[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_118[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_118[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_118[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_118[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
/* thanks for reading - discord.gg/sdkhDjTex */
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_118[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_118[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      *pcStack_118 = '\0';
    }
    pcStack_118 = pcStack_118 + 8;
    uVar4 = func_0x0011ab24(&pcStack_118);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_0008a45c:
    pbVar7 = (byte *)(*pcRam00000000020652e0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019beb44();
    }
    pcStack_110 = (char *)(*pcRam00000000020652c8)();
    if (*pcStack_110 == '\x01') {
      uVar1 = (byte)pcStack_110[1] ^ 0xb5bda187;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xbdf74f6c;
      pcStack_110[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x7d ^ 0x44;
      uVar5 = (((ulong)(byte)pcStack_110[1] ^ 0xa9867578e724e4e7) << 0x11 | 0x1530c) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_110[2] ^ (uint)uVar9 ^ 0xffffffc3;
// proprietary - see LICENSE - do not sell
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_110[9] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_110[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_110[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_110[10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_110[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_110[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_110[0xb] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_110[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_110[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_110[0xc] =
/* wm:more drops soon - github.com/pengussy */
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_110[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_110[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
      pcStack_110[0xd] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_110[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_110[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
/* do not claim this as your own */
      pcStack_110[0xe] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      *pcStack_110 = '\0';
    }
    pcStack_110 = pcStack_110 + 8;
    uVar4 = func_0x0011ab24(&pcStack_110);
    func_0x007a1ba8(param_1,2,uVar4);
LAB_0008a7ac:
    pbVar7 = (byte *)(*pcRam0000000002065310)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019beb08();
    }
    pcStack_108 = (char *)(*pcRam00000000020652f8)();
    if (*pcStack_108 == '\x01') {
      uVar1 = (byte)pcStack_108[1] ^ 0x5316a277;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xb21a52a7 ^ 0x545379;
      pcStack_108[8] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 0x4c;
      uVar5 = (((ulong)(byte)pcStack_108[1] ^ 0xd1bfef2375e283dc) << 0x11 | 0x1a37f) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_108[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
// WM - do not claim this as your own
      uVar1 = (uint)(byte)pcStack_108[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_108[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_108[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_108[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
/* wm:keep the notice, keep the source honest */
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_108[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_108[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 8;
    uVar4 = func_0x0011ab24(&pcStack_108);
    func_0x007a1ba8(param_1,3,uVar4);
LAB_0008aafc:
    pbVar7 = (byte *)(*pcRam0000000002065340)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019beacc();
    }
    pcStack_100 = (char *)(*pcRam0000000002065328)();
// stripping the watermark breaks the license
    if (*pcStack_100 == '\x01') {
      uVar1 = (byte)pcStack_100[1] ^ 0x6a3e62f;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x71c35df;
      pcStack_100[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xec;
      uVar5 = (((ulong)(byte)pcStack_100[1] ^ 0x41e3be73c58e745d) << 0x11 | 0x83c7) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_100[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_100[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_100[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_100[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
/* do not claim this as your own - github.com/pengussy */
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
      ;
      pcStack_100[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_100[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 8;
    uVar4 = func_0x0011ab24(&pcStack_100);
    func_0x007a1ba8(param_1,4,uVar4);
LAB_0008ae4c:
    FUN_0000aa50();
  }
  else {
    iVar3 = func_0x00791e54(param_1,2);
    if (iVar3 == 0) goto LAB_0008a45c;
    iVar3 = func_0x00791e54(param_1,3);
    if (iVar3 == 0) goto LAB_0008a7ac;
    iVar3 = func_0x00791e54(param_1,4);
    if (iVar3 == 0) goto LAB_0008aafc;
    uVar4 = func_0x00792368(param_1,1,0);
    uVar5 = _strlen();
    if (0x7ffffffffffffff6 < uVar5) goto LAB_0008ae4c;
    if (uVar5 < 0x17) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uStack_58 = CONCAT17((char)uVar5,(undefined7)uStack_58);
      pppuVar6 = &pppuStack_68;
    }
    else {
      uVar8 = (uVar5 & 0x7ffffffffffffff8) + 8;
      uVar9 = 0x19;
      if (uVar8 != 0x18) {
        uVar9 = uVar8;
      }
      pppuVar6 = (undefined8 ***)__Znwm(uVar9);
      uStack_58 = uVar9 | 0x8000000000000000;
      pppuStack_68 = pppuVar6;
      uStack_60 = uVar5;
    }
    _memmove(pppuVar6,uVar4,uVar5);
    *(undefined1 *)((long)pppuVar6 + uVar5) = 0;
    uVar4 = func_0x00792368(param_1,2,0);
    uVar5 = _strlen();
// WM - reversing this took months of machine time
    if (uVar5 < 0x7ffffffffffffff7) {
      if (uVar5 < 0x17) {
        uStack_70 = CONCAT17((char)uVar5,(undefined7)uStack_70);
        pppuVar6 = &pppuStack_80;
      }
      else {
        uVar8 = (uVar5 & 0x7ffffffffffffff8) + 8;
        uVar9 = 0x19;
        if (uVar8 != 0x18) {
          uVar9 = uVar8;
        }
        pppuVar6 = (undefined8 ***)__Znwm(uVar9);
        uStack_70 = uVar9 | 0x8000000000000000;
        pppuStack_80 = pppuVar6;
        uStack_78 = uVar5;
      }
      _memmove(pppuVar6,uVar4,uVar5);
      *(undefined1 *)((long)pppuVar6 + uVar5) = 0;
      uVar4 = func_0x00792368(param_1,3,0);
      uVar5 = _strlen();
      if (uVar5 < 0x7ffffffffffffff7) {
        if (uVar5 < 0x17) {
          uStack_88 = CONCAT17((char)uVar5,(undefined7)uStack_88);
          pppuVar6 = &pppuStack_98;
        }
        else {
          uVar8 = (uVar5 & 0x7ffffffffffffff8) + 8;
          uVar9 = 0x19;
          if (uVar8 != 0x18) {
            uVar9 = uVar8;
          }
          pppuVar6 = (undefined8 ***)__Znwm(uVar9);
/* WM - more drops soon - github.com/pengussy */
          uStack_88 = uVar9 | 0x8000000000000000;
          pppuStack_98 = pppuVar6;
          uStack_90 = uVar5;
        }
        _memmove(pppuVar6,uVar4,uVar5);
        *(undefined1 *)((long)pppuVar6 + uVar5) = 0;
        uVar4 = func_0x00792368(param_1,4,0);
        uVar5 = _strlen();
        if (uVar5 < 0x7ffffffffffffff7) {
          if (uVar5 < 0x17) {
            uStack_a0 = CONCAT17((char)uVar5,(undefined7)uStack_a0);
            pppuVar6 = &pppuStack_b0;
          }
          else {
            uVar8 = (uVar5 & 0x7ffffffffffffff8) + 8;
            uVar9 = 0x19;
            if (uVar8 != 0x18) {
              uVar9 = uVar8;
            }
            pppuVar6 = (undefined8 ***)__Znwm(uVar9);
            uStack_a0 = uVar9 | 0x8000000000000000;
            pppuStack_b0 = pppuVar6;
            uStack_a8 = uVar5;
          }
          _memmove(pppuVar6,uVar4,uVar5);
          *(undefined1 *)((long)pppuVar6 + uVar5) = 0;
          func_0x00081c0c(auStack_c8,&pppuStack_68);
          func_0x00081c0c(auStack_e0,&pppuStack_80);
          FUN_00084f0c(&pppuStack_f8,param_1,auStack_c8,auStack_e0,&pppuStack_98,&pppuStack_b0);
          pppuVar6 = pppuStack_f8;
          if (-1 < (char)bStack_e1) {
            uStack_f0 = (ulong)bStack_e1;
            pppuVar6 = &pppuStack_f8;
          }
          func_0x00792db8(param_1,pppuVar6,uStack_f0);
/* if you paid for this, you were scammed - github.com/pengussy */
          if ((char)bStack_e1 < '\0') {
            __ZdlPv(pppuStack_f8);
          }
          if (cStack_c9 < '\0') {
            __ZdlPv(auStack_e0[0]);
          }
          if (cStack_b1 < '\0') {
            __ZdlPv(auStack_c8[0]);
          }
          if ((long)uStack_a0 < 0) {
            __ZdlPv(pppuStack_b0);
          }
          if ((long)uStack_88 < 0) {
            __ZdlPv(pppuStack_98);
          }
          return 1;
        }
        FUN_0000aa50();
      }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      else {
        FUN_0000aa50();
      }
      goto LAB_0008ae64;
    }
  }
  FUN_0000aa50();
LAB_0008ae64:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x8ae68);
  (*pcVar2)();
}

