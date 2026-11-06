/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xd455c:b6c8dce134
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x000d76bc) */
/* WARNING: Removing unreachable block (ram,0x000d52dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000d455c(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  char *******pppppppcVar3;
  undefined1 uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *******pppppppcVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
/* stripping the watermark breaks the license - github.com/pengussy */
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
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
/* no support for modified copies - github.com/pengussy */
  char *pcStack_f8;
  char *pcStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
// WM - reversing this took months of machine time
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  long lStack_98;
  undefined4 uStack_90;
  char *******pppppppcStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  iVar7 = func_0x00791e54(param_1,1);
  if (iVar7 == 0) {
    pbVar13 = (byte *)(*pcRam0000000002069b10)();
    if ((*pbVar13 & 1) == 0) {
      func_0x019c4850();
    }
    pcStack_1c0 = (char *)(*pcRam0000000002069af8)();
    if (*pcStack_1c0 == '\x01') {
      uVar1 = (byte)pcStack_1c0[1] ^ 0x991d55d5;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x96748533;
      pcStack_1c0[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x9d ^ 0x16;
      uVar11 = (((ulong)(byte)pcStack_1c0[1] ^ 0x4a8244bc79944f0b) << 0x11 | 0x9504) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
/* do not claim this as your own - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_1c0[2] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
      pcStack_1c0[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[3] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
      pcStack_1c0[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[4] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
      pcStack_1c0[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1c0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[5] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
      pcStack_1c0[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar16 >> 0x29) | 1) ^
// WM - do not claim this as your own
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1c0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[6] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
      pcStack_1c0[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1c0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1c0[7] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17);
      pcStack_1c0[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar16;
      *pcStack_1c0 = '\0';
    }
    pcStack_1c0 = pcStack_1c0 + 8;
    uVar10 = func_0x0011ab24(&pcStack_1c0);
    func_0x007a1ba8(param_1,1,uVar10);
LAB_000d7a40:
    pbVar13 = (byte *)(*pcRam0000000002069b40)();
    if ((*pbVar13 & 1) == 0) {
      func_0x019c4238();
    }
    pcStack_f0 = (char *)(*pcRam0000000002069b28)();
    if (*pcStack_f0 == '\x01') {
      uVar1 = (byte)pcStack_f0[1] ^ 0x56541c69;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x9f24aad;
      pcStack_f0[7] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x7d ^ 0xaa;
      uVar11 = (((ulong)(byte)pcStack_f0[1] ^ 0xc0f8b803ca21563a) << 0x11 | 0x181f1) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/*  no support for modified copies  */
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17);
      pcStack_f0[8] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17);
      pcStack_f0[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17);
      pcStack_f0[10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17);
      pcStack_f0[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar11 ^ uVar11 >> 0x21;
/* reversing this took months of machine time - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_f0[6] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17);
      pcStack_f0[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar16;
      *pcStack_f0 = '\0';
    }
    pcStack_f0 = pcStack_f0 + 7;
    uVar10 = func_0x0011ab24(&pcStack_f0);
    func_0x007a1ba8(param_1,2,uVar10);
LAB_000d7d34:
    FUN_0000aa50();
  }
  else {
    iVar7 = func_0x00791be4(param_1,2);
    if (iVar7 != 7) goto LAB_000d7a40;
    uVar10 = func_0x00792368(param_1,1,auStack_70);
    uVar11 = _strlen();
    if (0x7ffffffffffffff6 < uVar11) goto LAB_000d7d34;
    if (uVar11 < 0x17) {
      uStack_78 = CONCAT17((char)uVar11,(undefined7)uStack_78);
      pppppppcVar12 = (char *******)&pppppppcStack_88;
    }
    else {
      uVar16 = (uVar11 & 0x7ffffffffffffff8) + 8;
      uVar19 = 0x19;
      if (uVar16 != 0x18) {
// WM - keep the notice, keep the source honest
        uVar19 = uVar16;
      }
      pppppppcVar12 = (char *******)__Znwm(uVar19);
      uStack_78 = uVar19 | 0x8000000000000000;
      pppppppcStack_88 = pppppppcVar12;
      uStack_80 = uVar11;
    }
    _memmove(pppppppcVar12,uVar10,uVar11);
    *(char *)((long)pppppppcVar12 + uVar11) = '\0';
    pppppppcVar3 = pppppppcStack_88;
    pppppppcVar12 = (char *******)((long)pppppppcStack_88 + uStack_80);
    if (-1 < (long)uStack_78) {
      pppppppcVar3 = (char *******)&pppppppcStack_88;
      pppppppcVar12 = (char *******)((long)&pppppppcStack_88 + (uStack_78 >> 0x38));
    }
    for (; pppppppcVar3 != pppppppcVar12; pppppppcVar3 = (char *******)((long)pppppppcVar3 + 1)) {
      cVar6 = ___tolower((long)*(char *)pppppppcVar3);
      *(char *)pppppppcVar3 = cVar6;
    }
    iVar7 = func_0x007a20b4(param_1,3,0);
    func_0x00791660(param_1,3);
    func_0x00793bd0(param_1,0,0);
    func_0x00793bd0(param_1,0,0);
    pbVar13 = (byte *)(*pcRam0000000002069b70)();
    if ((*pbVar13 & 1) == 0) {
/*  proprietary - see LICENSE - do not sell  */
      func_0x019c4274();
    }
    pcStack_f8 = (char *)(*pcRam0000000002069b58)();
    if (*pcStack_f8 == '\x01') {
      uVar1 = (byte)pcStack_f8[1] ^ 0xb904a763;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x85066373 ^ 0x49debf;
      pcStack_f8[5] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x60;
      uVar11 = (((ulong)(byte)pcStack_f8[1] ^ 0x924e170a03be6d82) << 0x11 | 0x1249c) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[2] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_f8[6] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[3] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_f8[7] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[4] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_f8[8] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar16;
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 5;
/* proprietary - see LICENSE - do not sell */
    uVar10 = func_0x0011ab24(&pcStack_f8);
    func_0x00792f00(param_1,uVar10);
    pbVar13 = (byte *)(*pcRam0000000002069ba0)();
    if ((*pbVar13 & 1) == 0) {
      func_0x019c42b0();
    }
    pcStack_100 = (char *)(*pcRam0000000002069b88)();
    if (*pcStack_100 == '\x01') {
      uVar1 = (byte)pcStack_100[1] ^ 0x5bab4f8e;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xe6da3879;
      pcStack_100[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0x4d;
      uVar11 = (((ulong)(byte)pcStack_100[1] ^ 0x542b3695c9430903) << 0x11 | 0xa856) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17))
      ;
      pcStack_100[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/*  stripping the watermark breaks the license  */
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17))
      ;
      pcStack_100[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[4] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17))
      ;
      pcStack_100[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[5] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17))
      ;
      pcStack_100[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[6] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17))
      ;
      pcStack_100[0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[7] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar16 >> 0x17))
      ;
      pcStack_100[0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar16;
/* wm:if you paid for this, you were scammed */
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 8;
    uVar10 = func_0x0011ab24(&pcStack_100);
    func_0x00794260(param_1,0xfffffffe,uVar10);
    func_0x007946cc(param_1,0xfffffffe);
    pbVar13 = (byte *)(*pcRam0000000002069bd0)();
    if ((*pbVar13 & 1) == 0) {
      func_0x019c42ec();
    }
    pcStack_108 = (char *)(*pcRam0000000002069bb8)();
    if (*pcStack_108 == '\x01') {
      uVar1 = (byte)pcStack_108[1] ^ 0x7e9449a6;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x128c2efe ^ 0x673b5d;
      pcStack_108[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x9b;
      uVar11 = (((ulong)(byte)pcStack_108[1] ^ 0x70ac8a0a7d413ff8) << 0x11 | 0xe159) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[2] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      pcStack_108[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[3] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_108[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[4] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_108[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[5] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_108[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[6] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_108[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[7] ^ (uint)uVar19 ^ 0xffffffc3;
// origin: github.com/pengussy
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_108[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_108[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[8] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1);
      pcStack_108[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_108[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[9] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
      pcStack_108[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar16;
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 10;
    uVar10 = func_0x0011ab24(&pcStack_108);
    uVar16 = _strlen();
    uVar11 = (ulong)uStack_78._7_1_;
    pbStack_e8 = param_1;
    if (-1 < (long)uVar11) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (uVar16 == uVar11) {
        iVar8 = _memcmp(&pppppppcStack_88,uVar10);
joined_r0x000d4fbc:
        if (iVar8 == 0) {
          pbVar13 = (byte *)(*pcRam0000000002069c00)();
          if ((*pbVar13 & 1) == 0) {
            func_0x019c4544();
          }
          pcStack_158 = (char *)(*pcRam0000000002069be8)();
          if (*pcStack_158 == '\x01') {
            uVar1 = (byte)pcStack_158[1] ^ 0xd1fc7186;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xee9e2955;
            pcStack_158[6] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0x45;
            uVar11 = (((ulong)(byte)pcStack_158[1] ^ 0xe348f915f093270) << 0x11 | 0x1c69) +
                     0x9e3779b97f4a7c15;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[2] ^ (uint)uVar19 ^ 0xffffffc3;
/* thanks for reading - discord.gg/sdkhDjTex */
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_158[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_158[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[3] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_158[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_158[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/*  origin: github.com/pengussy  */
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[4] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_158[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_158[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar16 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_158[5] ^ (uint)uVar16 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
            pcStack_158[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar16;
            *pcStack_158 = '\0';
          }
          pcStack_158 = pcStack_158 + 6;
          uVar10 = func_0x0011ab24(&pcStack_158);
          func_0x007935a0(param_1,2,uVar10);
          iVar8 = func_0x00791be4(param_1,5);
          if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,5), iVar8 == 1)) {
            uVar21 = 0;
            pbVar13 = (byte *)(*pcRam0000000002069c60)();
            bVar2 = *pbVar13;
/* wm:watermarked copy - do not remove */
          }
          else {
            iVar8 = func_0x00791e54(param_1,5);
            if (iVar8 == 0) {
              pbVar13 = (byte *)(*pcRam0000000002069c30)();
              if ((*pbVar13 & 1) == 0) {
                func_0x019c4580();
              }
              pcStack_160 = (char *)(*pcRam0000000002069c18)();
              if (*pcStack_160 == '\x01') {
                lVar17 = 0;
                uVar11 = 0x7ae29376d246a5e9;
                do {
                  uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                  uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
                  uVar19 = uVar16 ^ uVar16 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_160[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^
                          ((uint)(uVar16 >> 0x29) | 1);
                  pcStack_160[lVar17 + 0x17] =
                       ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
                  uVar11 = lVar17 + -0x61c8864680b583eb +
                           (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_160[lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x16);
                *pcStack_160 = '\0';
              }
              pcStack_160 = pcStack_160 + 0x17;
              uVar10 = func_0x0011ab24(&pcStack_160);
              func_0x007a1abc(param_1,2,uVar10);
              goto LAB_000d87b4;
            }
            uVar21 = 1;
            pbVar13 = (byte *)(*pcRam0000000002069c60)();
            bVar2 = *pbVar13;
/* found on a paste site? it was re-uploaded illegally */
          }
          if ((bVar2 & 1) == 0) {
            func_0x019c45bc();
          }
          pcStack_168 = (char *)(*pcRam0000000002069c48)();
          if (*pcStack_168 == '\x01') {
            uVar1 = (byte)pcStack_168[1] ^ 0xe8b3f250;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xfcb54fd2 ^ 0x5cc0d3;
            pcStack_168[6] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x6d;
            uVar11 = (((ulong)(byte)pcStack_168[1] ^ 0x989971fa34b2a2b) << 0x11 | 0x1313) +
                     0x9e3779b97f4a7c15;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[2] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_168[7] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_168[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
// WM - chat: discord.gg/sdkhDjTex
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[3] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_168[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_168[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[4] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_168[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_168[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar16 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[5] ^ (uint)uVar16 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17) ^
                    ((uint)(uVar11 >> 0x29) | 1);
            pcStack_168[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar16;
/*  do not claim this as your own  */
            *pcStack_168 = '\0';
          }
          pcStack_168 = pcStack_168 + 6;
          uVar10 = func_0x0011ab24(&pcStack_168);
          func_0x007935a0(param_1,2,uVar10);
          iVar8 = func_0x00791be4(param_1,6);
          if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,6), iVar8 == 1)) {
            uVar20 = 0;
            pbVar13 = (byte *)(*pcRam0000000002069cc0)();
            bVar2 = *pbVar13;
          }
          else {
            iVar8 = func_0x00791e54(param_1,6);
            if (iVar8 == 0) {
              pbVar13 = (byte *)(*pcRam0000000002069c90)();
              if ((*pbVar13 & 1) == 0) {
                func_0x019c45f8();
              }
              pcStack_170 = (char *)(*pcRam0000000002069c78)();
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              if (*pcStack_170 == '\x01') {
                lVar17 = 0;
                uVar11 = 0xc02a63998c9931ad;
                do {
                  uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                  uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
                  uVar19 = uVar16 ^ uVar16 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_170[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                          ((uint)(uVar16 >> 0x29) | 1);
                  pcStack_170[lVar17 + 0x17] =
                       ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar19;
                  uVar11 = lVar17 + -0x61c8864680b583eb +
                           (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_170[lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x16);
                *pcStack_170 = '\0';
              }
              pcStack_170 = pcStack_170 + 0x17;
/* stripping the watermark breaks the license */
              uVar10 = func_0x0011ab24(&pcStack_170);
              func_0x007a1abc(param_1,2,uVar10);
              goto LAB_000d87b4;
            }
            uVar20 = 1;
            pbVar13 = (byte *)(*pcRam0000000002069cc0)();
            bVar2 = *pbVar13;
          }
          if ((bVar2 & 1) == 0) {
            func_0x019c4634();
          }
          pcStack_178 = (char *)(*pcRam0000000002069ca8)();
          if (*pcStack_178 == '\x01') {
            lVar17 = 0;
            uVar11 = 0x59d202667871961d;
            do {
              uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar16 ^ uVar16 >> 0x21;
              uVar1 = (uint)(byte)pcStack_178[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
              pcStack_178[lVar17 + 0xd] =
                   ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar16 >> 0x29) | 1)
                   ^ (byte)uVar19;
              uVar11 = lVar17 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_178[lVar17 + 1]) << 0x11);
/* wm:more drops soon - github.com/pengussy */
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0xc);
            *pcStack_178 = '\0';
          }
          pcStack_178 = pcStack_178 + 0xd;
          uVar10 = func_0x0011ab24(&pcStack_178);
          func_0x007935a0(param_1,2,uVar10);
          iVar8 = func_0x00791be4(param_1,7);
          if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,7), iVar8 == 1)) {
            uVar24 = 0;
            uStack_1d0 = 0;
            pbVar13 = (byte *)(*pcRam0000000002069d20)();
            bVar2 = *pbVar13;
          }
          else {
            iVar8 = func_0x00791be4(param_1,7);
            if (iVar8 != 7) {
              pbVar13 = (byte *)(*pcRam0000000002069cf0)();
              if ((*pbVar13 & 1) == 0) {
                func_0x019c4670();
              }
              pcStack_180 = (char *)(*pcRam0000000002069cd8)();
/* origin: github.com/pengussy */
              if (*pcStack_180 == '\x01') {
                lVar17 = 0;
                uVar11 = 0xfff84619ed7c07c8;
                do {
                  uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                  uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
                  uVar19 = uVar16 ^ uVar16 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_180[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                          (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
                  pcStack_180[lVar17 + 0x1d] =
                       ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19;
                  uVar11 = lVar17 + -0x61c8864680b583eb +
                           (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_180[lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x1c);
                *pcStack_180 = '\0';
              }
              pcStack_180 = pcStack_180 + 0x1d;
              uVar10 = func_0x0011ab24(&pcStack_180);
              func_0x007a1abc(param_1,2,uVar10);
              goto LAB_000d87b4;
            }
            puVar15 = (undefined8 *)func_0x00790f58(param_1,7);
            uStack_1d0 = *puVar15;
            uVar24 = 1;
            pbVar13 = (byte *)(*pcRam0000000002069d20)();
            bVar2 = *pbVar13;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          }
          if ((bVar2 & 1) == 0) {
            func_0x019c46ac();
          }
          pcStack_188 = (char *)(*pcRam0000000002069d08)();
          if (*pcStack_188 == '\x01') {
            uVar1 = (byte)pcStack_188[1] ^ 0x880788d3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x4d9d8b11 ^ 0x26ec99;
            pcStack_188[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0x10;
            uVar11 = (((ulong)(byte)pcStack_188[1] ^ 0x952a14de5cf2019e) << 0x11 | 0x12a54) +
                     0x9e3779b97f4a7c15;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[2] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[3] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[3]) << 0x11) + 0x9e3779b97f4a7c17
/* WM - keep the notice, keep the source honest */
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[4] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[5] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[5]) << 0x11) + 0x9e3779b97f4a7c19
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[6] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
/*  unlicensed copy if this notice is missing  */
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[6]) << 0x11) + 0x9e3779b97f4a7c1a
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[7] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[7]) << 0x11) + 0x9e3779b97f4a7c1b
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[8] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[8]) << 0x11) + 0x9e3779b97f4a7c1c
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[9] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar16 >> 0x29) | 1);
            pcStack_188[0x13] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_188[9]) << 0x11) + 0x9e3779b97f4a7c1d
// proprietary - see LICENSE - do not sell
            ;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar16 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_188[10] ^ (uint)uVar16 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17) ^
                    ((uint)(uVar11 >> 0x29) | 1);
            pcStack_188[0x14] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar16;
            *pcStack_188 = '\0';
          }
          pcStack_188 = pcStack_188 + 0xb;
          uVar10 = func_0x0011ab24(&pcStack_188);
          func_0x007935a0(param_1,2,uVar10);
          iVar8 = func_0x00791be4(param_1,8);
          if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,8), iVar8 == 1)) {
            uStack_1dc = 0;
            uVar4 = 0;
            pbVar13 = (byte *)(*pcRam0000000002069d80)();
            bVar2 = *pbVar13;
          }
          else {
            iVar8 = func_0x00791db8(param_1,8);
/* wm:proprietary - see LICENSE - do not sell */
            if (iVar8 == 0) {
              pbVar13 = (byte *)(*pcRam0000000002069d50)();
              if ((*pbVar13 & 1) == 0) {
                func_0x019c46e8();
              }
              pcStack_190 = (char *)(*pcRam0000000002069d38)();
              if (*pcStack_190 == '\x01') {
                lVar17 = 0;
                uVar11 = 0xc2e7684965467b69;
                do {
                  uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                  uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
                  uVar19 = uVar16 ^ uVar16 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_190[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                          (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
                  pcStack_190[lVar17 + 0x1c] =
                       ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
                  uVar11 = lVar17 + -0x61c8864680b583eb +
/* donate: donate/README.md */
                           (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_190[lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x1b);
                *pcStack_190 = '\0';
              }
              pcStack_190 = pcStack_190 + 0x1c;
              uVar10 = func_0x0011ab24(&pcStack_190);
              func_0x007a1abc(param_1,2,uVar10);
              goto LAB_000d87b4;
            }
            uStack_1dc = func_0x00792168(param_1,8,0);
            uVar4 = 1;
            pbVar13 = (byte *)(*pcRam0000000002069d80)();
            bVar2 = *pbVar13;
          }
          if ((bVar2 & 1) == 0) {
            func_0x019c4724();
          }
          pcStack_198 = (char *)(*pcRam0000000002069d68)();
          if (*pcStack_198 == '\x01') {
            uVar1 = (byte)pcStack_198[1] ^ 0xe7f7f903;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xb5a9fd0;
            pcStack_198[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - 0x29 ^ 0xc0;
            uVar11 = (((ulong)(byte)pcStack_198[1] ^ 0xefa7f2ee431bd5ed) << 0x11 | 0x1df4f) +
                     0x9e3779b97f4a7c15;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[2] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0xc] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
// WM - unlicensed copy if this notice is missing
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[3] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0xd] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[4] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0xe] =
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[5] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0xf] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[5]) << 0x11) + 0x9e3779b97f4a7c19
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[6] ^ (uint)uVar19 ^ 0xffffffc3;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0x10] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[6]) << 0x11) + 0x9e3779b97f4a7c1a
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[7] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0x11] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[7]) << 0x11) + 0x9e3779b97f4a7c1b
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[8] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0x12] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[8]) << 0x11) + 0x9e3779b97f4a7c1c
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[9] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17);
            pcStack_198[0x13] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_198[9]) << 0x11) + 0x9e3779b97f4a7c1d
            ;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
// WM - found on a paste site? it was re-uploaded illegally
            uVar16 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_198[10] ^ (uint)uVar16 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17);
            pcStack_198[0x14] =
                 ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar11 >> 0x29) | 1) ^
                 (byte)uVar16;
            *pcStack_198 = '\0';
          }
          pcStack_198 = pcStack_198 + 0xb;
          uVar10 = func_0x0011ab24(&pcStack_198);
          func_0x007935a0(param_1,2,uVar10);
          iVar8 = func_0x00791be4(param_1,9);
          if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,9), iVar8 == 1)) {
            uVar23 = 0;
            pbVar13 = (byte *)(*pcRam0000000002069de0)();
            bVar2 = *pbVar13;
          }
          else {
            iVar8 = func_0x00791be4(param_1,9);
            if (iVar8 != 7) {
              pbVar13 = (byte *)(*pcRam0000000002069db0)();
              if ((*pbVar13 & 1) == 0) {
                func_0x019c4760();
              }
              pcStack_1a0 = (char *)(*pcRam0000000002069d98)();
              if (*pcStack_1a0 == '\x01') {
                lVar17 = 0;
                uVar11 = 0x61d1f2ed2fbaa68f;
                do {
                  uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                  uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
// reversing this took months of machine time
                  uVar19 = uVar16 ^ uVar16 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_1a0[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                          ((uint)(uVar16 >> 0x29) | 1);
                  pcStack_1a0[lVar17 + 0x1b] =
                       ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar19;
                  uVar11 = lVar17 + -0x61c8864680b583eb +
                           (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a0[lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x1a);
                *pcStack_1a0 = '\0';
              }
              pcStack_1a0 = pcStack_1a0 + 0x1b;
              uVar10 = func_0x0011ab24(&pcStack_1a0);
              func_0x007a1abc(param_1,2,uVar10);
              goto LAB_000d87b4;
            }
            uVar23 = 1;
            pbVar13 = (byte *)(*pcRam0000000002069de0)();
            bVar2 = *pbVar13;
          }
          if ((bVar2 & 1) == 0) {
            func_0x019c479c();
          }
          pcStack_1a8 = (char *)(*pcRam0000000002069dc8)();
          if (*pcStack_1a8 == '\x01') {
            uVar1 = (byte)pcStack_1a8[1] ^ 0x88e723c4;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xc4153635;
            pcStack_1a8[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 7;
            uVar11 = (((ulong)(byte)pcStack_1a8[1] ^ 0x3445551c3f503cb8) << 0x11 | 0x688a) +
                     0x9e3779b97f4a7c15;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_1a8[2] ^ (uint)uVar19 ^ 0xffffffc3;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_1a8[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a8[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_1a8[3] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_1a8[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a8[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_1a8[4] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_1a8[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a8[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_1a8[5] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_1a8[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a8[5]) << 0x11) + 0x9e3779b97f4a7c19
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
/* if you paid for this, you were scammed */
            uVar1 = (uint)(byte)pcStack_1a8[6] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_1a8[0xf] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a8[6]) << 0x11) + 0x9e3779b97f4a7c1a
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_1a8[7] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_1a8[0x10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a8[7]) << 0x11) + 0x9e3779b97f4a7c1b
            ;
            uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar16 ^ uVar16 >> 0x21;
            uVar1 = (uint)(byte)pcStack_1a8[8] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_1a8[0x11] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
            uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1a8[8]) << 0x11) + 0x9e3779b97f4a7c1c
            ;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar16 = uVar11 ^ uVar11 >> 0x21;
            uVar1 = (uint)(byte)pcStack_1a8[9] ^ (uint)uVar16 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
            pcStack_1a8[0x12] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar16;
            *pcStack_1a8 = '\0';
          }
          pcStack_1a8 = pcStack_1a8 + 10;
          uVar10 = func_0x0011ab24(&pcStack_1a8);
          func_0x007935a0(param_1,2,uVar10);
/* donate: donate/README.md - github.com/pengussy */
          iVar8 = func_0x00791be4(param_1,10);
          if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,10), iVar8 == 1)) {
            uVar22 = 0;
            pbVar13 = (byte *)(*pcRam0000000002069e40)();
            bVar2 = *pbVar13;
          }
          else {
            iVar8 = func_0x00791be4(param_1,10);
            if (iVar8 != 7) {
              pbVar13 = (byte *)(*pcRam0000000002069e10)();
              if ((*pbVar13 & 1) == 0) {
                func_0x019c47d8();
              }
              pcStack_1b0 = (char *)(*pcRam0000000002069df8)();
              if (*pcStack_1b0 == '\x01') {
                lVar17 = 0;
                uVar11 = 0xa2db1a3e6bcb1a71;
                do {
                  uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                  uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
                  uVar19 = uVar16 ^ uVar16 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_1b0[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
                  pcStack_1b0[lVar17 + 0x1a] =
                       ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') -
                       ((byte)(uVar16 >> 0x29) | 1) ^ (byte)uVar19;
                  uVar11 = lVar17 + -0x61c8864680b583eb +
                           (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1b0[lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x19);
                *pcStack_1b0 = '\0';
              }
              pcStack_1b0 = pcStack_1b0 + 0x1a;
              uVar10 = func_0x0011ab24(&pcStack_1b0);
              func_0x007a1abc(param_1,2,uVar10);
              goto LAB_000d87b4;
            }
            uVar22 = 1;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            pbVar13 = (byte *)(*pcRam0000000002069e40)();
            bVar2 = *pbVar13;
          }
          if ((bVar2 & 1) == 0) {
            func_0x019c4814();
          }
          pcStack_1b8 = (char *)(*pcRam0000000002069e28)();
          if (*pcStack_1b8 == '\x01') {
            lVar17 = 0;
            uVar11 = 0x3fbb06b69544cd6;
            do {
              uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar16 ^ uVar16 >> 0x21;
              uVar1 = (uint)(byte)pcStack_1b8[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar19 >> 0x17);
              pcStack_1b8[lVar17 + 0x10] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
                   (byte)uVar19;
              uVar11 = lVar17 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1b8[lVar17 + 1]) << 0x11);
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0xf);
            *pcStack_1b8 = '\0';
          }
          pcStack_1b8 = pcStack_1b8 + 0x10;
          uVar10 = func_0x0011ab24(&pcStack_1b8);
          func_0x007935a0(param_1,2,uVar10);
          iVar8 = func_0x00791be4(param_1,0xffffffff);
          iVar9 = 1;
/* WM - do not claim this as your own */
          if (iVar8 == 1) {
            iVar9 = func_0x00792220(param_1,0xffffffff);
          }
          uStack_e0 = _UNK_01ad9d00;
          uStack_d8 = CONCAT44(uStack_d8._4_4_,6);
          uStack_c4 = (undefined4)_UNK_01ad9d08;
          uStack_c0 = (undefined4)((ulong)_UNK_01ad9d08 >> 0x20);
          uStack_b8._0_4_ = CONCAT13(iVar7 != 0,CONCAT12(iVar9 != 0,CONCAT11(uVar22,uVar23)));
          lStack_b0 = 0;
          uStack_a8 = CONCAT44(uStack_a8._4_4_,1);
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48) = 0xffffffffffffffff;
          uStack_d0 = uStack_1d0;
          uStack_c8 = uStack_1dc;
          uStack_bc = uVar21;
          uStack_bb = uVar20;
          uStack_ba = uVar24;
          uStack_b9 = uVar4;
          func_0x0084aad0(param_1,&pbStack_e8,&DAT_0014a128);
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48) = uVar10;
          if (lStack_b0 != 0) {
            func_0x007911b0(param_1,1);
            if ((*param_1 >> 2 & 1) != 0) {
              func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
            }
            plVar18 = *(long **)(param_1 + 0x48);
            *plVar18 = lStack_b0;
            *(undefined4 *)((long)plVar18 + 0xc) = 8;
            *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
            func_0x00794504(param_1,4,1);
          }
          goto LAB_000d7660;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        }
      }
LAB_000d4fe8:
      pbVar13 = (byte *)(*pcRam0000000002069e70)();
      if ((*pbVar13 & 1) == 0) {
        func_0x019c4328();
      }
      pcStack_110 = (char *)(*pcRam0000000002069e58)();
      if (*pcStack_110 == '\x01') {
        uVar1 = (byte)pcStack_110[1] ^ 0x30af4928;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x7d6b9462 ^ 0x73a0a5;
        pcStack_110[7] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x15;
        uVar11 = (((ulong)(byte)pcStack_110[1] ^ 0x224d2626646f2c55) << 0x11 | 0x449a) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_110[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_110[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_110[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_110[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_110[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_110[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_110[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17) ^
// WM - no support for modified copies
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_110[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_110[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_110[5] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_110[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_110[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_110[6] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17) ^
                ((uint)(uVar11 >> 0x29) | 1);
        pcStack_110[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar16;
        *pcStack_110 = '\0';
        uVar11 = uStack_78 >> 0x38;
      }
      pcStack_110 = pcStack_110 + 7;
      uVar10 = func_0x0011ab24(&pcStack_110);
      uVar16 = _strlen();
      if (((uint)uVar11 >> 7 & 1) == 0) {
/* WM - watermarked copy - do not remove */
        if (uVar16 != (uVar11 & 0xff)) {
          return 0;
        }
        iVar8 = _memcmp(&pppppppcStack_88,uVar10);
      }
      else {
        if (uVar16 != uStack_80) {
          return 0;
        }
        if (uVar16 == 0xffffffffffffffff) {
          FUN_0001c430();
          goto LAB_000d87b4;
        }
        iVar8 = _memcmp(pppppppcStack_88,uVar10);
      }
      if (iVar8 != 0) {
        return 0;
      }
      pbVar13 = (byte *)(*pcRam0000000002069ea0)();
      if ((*pbVar13 & 1) == 0) {
        func_0x019c4364();
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      }
      pcStack_118 = (char *)(*pcRam0000000002069e88)();
      if (*pcStack_118 == '\x01') {
        uVar1 = (byte)pcStack_118[1] ^ 0xb9384e48;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x73e07c72;
        pcStack_118[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x8b;
        uVar11 = (((ulong)(byte)pcStack_118[1] ^ 0xf7e5450228e022f3) << 0x11 | 0x1efca) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_118[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_118[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_118[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_118[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_118[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_118[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_118[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_118[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar19;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_118[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_118[5] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_118[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar16;
        *pcStack_118 = '\0';
      }
      pcStack_118 = pcStack_118 + 6;
      uVar10 = func_0x0011ab24(&pcStack_118);
      func_0x007935a0(param_1,2,uVar10);
      iVar8 = func_0x00791be4(param_1,5);
      if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,5), iVar8 == 1)) {
        uVar21 = 0;
        uStack_1c8 = 0;
        pbVar13 = (byte *)(*pcRam0000000002069f00)();
        bVar2 = *pbVar13;
      }
      else {
        iVar8 = func_0x00791be4(param_1,5);
        if (iVar8 != 7) {
/* wm:origin: github.com/pengussy */
          pbVar13 = (byte *)(*pcRam0000000002069ed0)();
          if ((*pbVar13 & 1) == 0) {
            func_0x019c43a0();
          }
          pcStack_120 = (char *)(*pcRam0000000002069eb8)();
          if (*pcStack_120 == '\x01') {
            lVar17 = 0;
            uVar11 = 0x5ed5638b3ac377ef;
            do {
              uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar16 ^ uVar16 >> 0x21;
              uVar1 = (uint)(byte)pcStack_120[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                      (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
              pcStack_120[lVar17 + 0x16] =
                   ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar19;
              uVar11 = lVar17 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_120[lVar17 + 1]) << 0x11);
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x15);
            *pcStack_120 = '\0';
          }
          pcStack_120 = pcStack_120 + 0x16;
          uVar10 = func_0x0011ab24(&pcStack_120);
          func_0x007a1abc(param_1,2,uVar10);
          goto LAB_000d87b4;
        }
        puVar15 = (undefined8 *)func_0x00790f58(param_1,5);
        uStack_1c8 = *puVar15;
        uVar21 = 1;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        pbVar13 = (byte *)(*pcRam0000000002069f00)();
        bVar2 = *pbVar13;
      }
      if ((bVar2 & 1) == 0) {
        func_0x019c43dc();
      }
      pcStack_128 = (char *)(*pcRam0000000002069ee8)();
      if (*pcStack_128 == '\x01') {
        uVar1 = (byte)pcStack_128[1] ^ 0xd177e2f1;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xbba851a3;
        pcStack_128[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0x15 ^ 0x32;
        uVar11 = (((ulong)(byte)pcStack_128[1] ^ 0xd33c488e32510df6) << 0x11 | 0x1a678) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_128[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_128[9] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_128[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_128[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_128[10] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
/* WM - found on a paste site? it was re-uploaded illegally */
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_128[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_128[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_128[0xb] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_128[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_128[5] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_128[0xc] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_128[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        uVar1 = (uint)(byte)pcStack_128[6] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_128[0xd] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_128[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_128[7] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17);
        pcStack_128[0xe] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar16;
        *pcStack_128 = '\0';
      }
      pcStack_128 = pcStack_128 + 8;
      uVar10 = func_0x0011ab24(&pcStack_128);
      func_0x007935a0(param_1,2,uVar10);
      iVar8 = func_0x00791be4(param_1,6);
      if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,6), iVar8 == 1)) {
        uVar20 = 0;
        uStack_1d8 = 0;
        pbVar13 = (byte *)(*pcRam0000000002069f60)();
        bVar2 = *pbVar13;
      }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      else {
        iVar8 = func_0x00791be4(param_1,6);
        if (iVar8 != 7) {
          pbVar13 = (byte *)(*pcRam0000000002069f30)();
          if ((*pbVar13 & 1) == 0) {
            func_0x019c4418();
          }
          pcStack_130 = (char *)(*pcRam0000000002069f18)();
          if (*pcStack_130 == '\x01') {
            lVar17 = 0;
            uVar11 = 0xb86595c051fb578;
            do {
              uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar16 ^ uVar16 >> 0x21;
              uVar1 = (uint)(byte)pcStack_130[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                      (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
              pcStack_130[lVar17 + 0x18] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar19;
              uVar11 = lVar17 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_130[lVar17 + 1]) << 0x11);
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x17);
            *pcStack_130 = '\0';
          }
          pcStack_130 = pcStack_130 + 0x18;
          uVar10 = func_0x0011ab24(&pcStack_130);
          func_0x007a1abc(param_1,2,uVar10);
          goto LAB_000d87b4;
        }
        puVar15 = (undefined8 *)func_0x00790f58(param_1,6);
        uStack_1d8 = *puVar15;
        uVar20 = 1;
        pbVar13 = (byte *)(*pcRam0000000002069f60)();
        bVar2 = *pbVar13;
/*  more drops soon - github.com/pengussy  */
      }
      if ((bVar2 & 1) == 0) {
        func_0x019c4454();
      }
      pcStack_138 = (char *)(*pcRam0000000002069f48)();
      if (*pcStack_138 == '\x01') {
        lVar17 = 0;
        uVar11 = 0x491b25059204fa8;
        do {
          uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcStack_138[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_138[lVar17 + 0xf] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar19
/* wm:keep the notice, keep the source honest */
          ;
          uVar11 = lVar17 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_138[lVar17 + 1]) << 0x11);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0xe);
        *pcStack_138 = '\0';
      }
      pcStack_138 = pcStack_138 + 0xf;
      uVar10 = func_0x0011ab24(&pcStack_138);
      func_0x007935a0(param_1,2,uVar10);
      iVar8 = func_0x00791be4(param_1,7);
      if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,7), iVar8 == 1)) {
        uVar24 = 0;
        uVar10 = 0;
        pbVar13 = (byte *)(*pcRam0000000002069fc0)();
        bVar2 = *pbVar13;
      }
      else {
        iVar8 = func_0x00791be4(param_1,7);
        if (iVar8 != 7) {
          pbVar13 = (byte *)(*pcRam0000000002069f90)();
          if ((*pbVar13 & 1) == 0) {
            func_0x019c4490();
          }
          pcStack_140 = (char *)(*pcRam0000000002069f78)();
          if (*pcStack_140 == '\x01') {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
            lVar17 = 0;
            uVar11 = 0x6d6ff9d4f91d8e26;
            do {
              uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar16 ^ uVar16 >> 0x21;
              uVar1 = (uint)(byte)pcStack_140[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17);
              pcStack_140[lVar17 + 0x1f] =
                   ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar16 >> 0x29) | 1)
                   ^ (byte)uVar19;
              uVar11 = lVar17 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_140[lVar17 + 1]) << 0x11);
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x1e);
            *pcStack_140 = '\0';
          }
          pcStack_140 = pcStack_140 + 0x1f;
          uVar10 = func_0x0011ab24(&pcStack_140);
          func_0x007a1abc(param_1,2,uVar10);
          goto LAB_000d87b4;
        }
        puVar15 = (undefined8 *)func_0x00790f58(param_1,7);
        uVar10 = *puVar15;
        uVar24 = 1;
        pbVar13 = (byte *)(*pcRam0000000002069fc0)();
        bVar2 = *pbVar13;
      }
      if ((bVar2 & 1) == 0) {
        func_0x019c44cc();
      }
      pcStack_148 = (char *)(*pcRam0000000002069fa8)();
      if (*pcStack_148 == '\x01') {
        uVar1 = (byte)pcStack_148[1] ^ 0xd4133586;
/* wm:stripping the watermark breaks the license */
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x227fa5a9;
        pcStack_148[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0x9f ^ 0x45;
        uVar11 = (((ulong)(byte)pcStack_148[1] ^ 0xcc436c085979b1d7) << 0x11 | 0x19886) +
                 0x9e3779b97f4a7c15;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0xc] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0xd] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0xe] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[5] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0xf] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[6] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0x10] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[7] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0x11] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[8] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0x12] =
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[9] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
        pcStack_148[0x13] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_148[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[10] ^ (uint)uVar16 ^ 0xffffffc3;
// WM - proprietary - see LICENSE - do not sell
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17);
        pcStack_148[0x14] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar16;
        *pcStack_148 = '\0';
      }
      pcStack_148 = pcStack_148 + 0xb;
      uVar14 = func_0x0011ab24(&pcStack_148);
      func_0x007935a0(param_1,2,uVar14);
      iVar8 = func_0x00791be4(param_1,8);
      if ((iVar8 < 1) || (iVar8 = func_0x00791be4(param_1,8), iVar8 == 1)) {
        uStack_9d = 0;
        lStack_b0 = 0;
      }
      else {
        iVar8 = func_0x00791be4(param_1,8);
        if (iVar8 != 7) {
          pbVar13 = (byte *)(*pcRam0000000002069ff0)();
          if ((*pbVar13 & 1) == 0) {
            func_0x019c4508();
          }
          pcStack_150 = (char *)(*pcRam0000000002069fd8)();
          if (*pcStack_150 == '\x01') {
            lVar17 = 0;
            uVar11 = 0x4cc66ba3ac817ee4;
            do {
              uVar16 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar16 ^ uVar16 >> 0x21;
              uVar1 = (uint)(byte)pcStack_150[lVar17 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                      (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
              pcStack_150[lVar17 + 0x1b] =
                   ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar19;
/*  if you paid for this, you were scammed  */
              uVar11 = lVar17 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_150[lVar17 + 1]) << 0x11);
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x1a);
            *pcStack_150 = '\0';
          }
          pcStack_150 = pcStack_150 + 0x1b;
          uVar10 = func_0x0011ab24(&pcStack_150);
          func_0x007a1abc(param_1,2,uVar10);
          goto LAB_000d87b4;
        }
        plVar18 = (long *)func_0x00790f58(param_1,8);
        lStack_b0 = *plVar18;
        uStack_9d = 1;
      }
      puVar15 = (undefined8 *)func_0x00790f58(param_1,4);
      uStack_a8 = *puVar15;
      uStack_d8 = _UNK_01ad8278;
      uStack_e0 = _UNK_01ad8270;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,8);
      uStack_c8 = (undefined4)uStack_1c8;
      uStack_c4 = (undefined4)((ulong)uStack_1c8 >> 0x20);
      uStack_c0 = (undefined4)uStack_1d8;
      uStack_bc = (undefined1)((ulong)uStack_1d8 >> 0x20);
      uStack_bb = (undefined1)((ulong)uStack_1d8 >> 0x28);
      uStack_ba = (undefined1)((ulong)uStack_1d8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)uStack_1d8 >> 0x38);
      lStack_98 = 0;
      uStack_90 = 1;
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48) = 0xffffffffffffffff;
      uStack_b8 = uVar10;
      uStack_a0 = uVar21;
      uStack_9f = uVar20;
      uStack_9e = uVar24;
      uStack_9c = iVar7 != 0;
      func_0x0084aad0(param_1,&pbStack_e8,&DAT_0014a710);
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48) = uVar14;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      if (lStack_98 != 0) {
        func_0x007911b0(param_1,1);
        if ((*param_1 >> 2 & 1) != 0) {
          func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
        }
        plVar18 = *(long **)(param_1 + 0x48);
        *plVar18 = lStack_98;
        *(undefined4 *)((long)plVar18 + 0xc) = 7;
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
        func_0x00794504(param_1,4,1);
      }
LAB_000d7660:
      if (iVar7 == 0) {
        func_0x00791660(param_1,4);
      }
      else {
        func_0x00793928(param_1,4,1);
      }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      return 1;
    }
    if (uVar16 != uStack_80) goto LAB_000d4fe8;
    if (uVar16 != 0xffffffffffffffff) {
      iVar8 = _memcmp(pppppppcStack_88,uVar10);
      goto joined_r0x000d4fbc;
    }
  }
  FUN_0001c430();
LAB_000d87b4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0xd87b8);
  (*pcVar5)();
}

