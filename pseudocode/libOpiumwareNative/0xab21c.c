/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xab21c:1d4377ba0a
 */

/* WARNING: Removing unreachable block (ram,0x000acc64) */
/* WARNING: Removing unreachable block (ram,0x000ac238) */
/* WARNING: Removing unreachable block (ram,0x000acd38) */
/* WARNING: Removing unreachable block (ram,0x000acc9c) */

undefined8 FUN_000ab21c(byte *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
/* WM - if you paid for this, you were scammed */
  undefined8 *******pppppppuVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined4 uVar22;
  int iVar23;
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
  long lStack_120;
  long lStack_118;
  long lStack_110;
  int aiStack_100 [6];
  long *plStack_e8;
  long *plStack_e0;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 *******pppppppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar6 = func_0x00791650();
  if (iVar6 == 1) {
    iVar6 = func_0x00791efc(param_1,1);
    if ((iVar6 == 0) && (iVar6 = func_0x00791be4(param_1,1), iVar6 != 7)) goto LAB_000ad19c;
    iVar6 = func_0x00791efc(param_1,1);
    if (iVar6 != 0) goto LAB_000ab53c;
  }
  else if (iVar6 == 0) {
    pbVar8 = (byte *)(*pcRam0000000002067680)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c14c0();
    }
    pcStack_130 = (char *)(*pcRam0000000002067668)();
    if (*pcStack_130 == '\x01') {
      uVar2 = (byte)pcStack_130[1] ^ 0xc637e2bd;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0x26d74362;
      pcStack_130[6] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ 0x7e;
      uVar16 = (((ulong)(byte)pcStack_130[1] ^ 0x4be7e489e4ac01d5) << 0x11 | 0x97cf) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
/* if you paid for this, you were scammed */
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_130[2] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_130[7] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_130[3] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_130[8] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
/* wm:reversing this took months of machine time */
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_130[4] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_130[9] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_130[5] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
      pcStack_130[10] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
      *pcStack_130 = '\0';
    }
    pcStack_130 = pcStack_130 + 6;
    uVar9 = func_0x0011ab24(&pcStack_130);
    func_0x007935a0(param_1,0xffffd8ee,uVar9);
    func_0x00791890(param_1,1);
LAB_000ab53c:
    func_0x00793bd0(param_1,0,0);
  }
  else {
    iVar7 = func_0x00791efc(param_1,1);
    if ((iVar7 == 0) && (iVar7 = func_0x00791be4(param_1,1), iVar7 != 7)) goto LAB_000ad2a4;
    iVar7 = func_0x00791be4(param_1,2);
    if ((iVar7 != 7) && (iVar7 = func_0x00791e54(param_1,2), iVar7 == 0)) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      pbVar8 = (byte *)(*pcRam0000000002067710)();
      if ((*pbVar8 & 1) == 0) goto LAB_000ad3ac;
      goto LAB_000acdf8;
    }
    iVar7 = func_0x00791e54(param_1,2);
    if (((2 < iVar6) && (iVar7 != 0)) && (iVar6 = func_0x00791be4(param_1,3), iVar6 != 7)) {
      do {
        pbVar8 = (byte *)(*pcRam0000000002067740)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c1574();
        }
        pcStack_148 = (char *)(*pcRam0000000002067728)();
        if (*pcStack_148 == '\x01') {
          uVar2 = (byte)pcStack_148[1] ^ 0xe4fd1728;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0xa43b99ca;
          pcStack_148[7] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') + 0xf ^ 0xeb;
          uVar16 = (((ulong)(byte)pcStack_148[1] ^ 0xd1b4c72c30447910) << 0x11 | 0x1a369) +
                   0x9e3779b97f4a7c15;
          uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
/* wm:keep the notice, keep the source honest */
          uVar21 = uVar15 ^ uVar15 >> 0x21;
          uVar2 = (uint)(byte)pcStack_148[2] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar21 >> 0x17);
          pcStack_148[8] =
               ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_148[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar15 ^ uVar15 >> 0x21;
          uVar2 = (uint)(byte)pcStack_148[3] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar21 >> 0x17);
          pcStack_148[9] =
               ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_148[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar15 ^ uVar15 >> 0x21;
          uVar2 = (uint)(byte)pcStack_148[4] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar21 >> 0x17);
          pcStack_148[10] =
               ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_148[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar15 ^ uVar15 >> 0x21;
          uVar2 = (uint)(byte)pcStack_148[5] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar21 >> 0x17);
          pcStack_148[0xb] =
               ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_148[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar16 ^ uVar16 >> 0x21;
          uVar2 = (uint)(byte)pcStack_148[6] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar15 >> 0x17);
          pcStack_148[0xc] =
               ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar15;
          *pcStack_148 = '\0';
// WM - thanks for reading - discord.gg/sdkhDjTex
        }
        pcStack_148 = pcStack_148 + 7;
        uVar9 = func_0x0011ab24(&pcStack_148);
        func_0x007a1ba8(param_1,3,uVar9);
LAB_000ad19c:
        pbVar8 = (byte *)(*pcRam00000000020676b0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c1484();
        }
        pcStack_128 = (char *)(*pcRam0000000002067698)();
        if (*pcStack_128 == '\x01') {
          lVar17 = 0;
          uVar16 = 0x5f6d16dbaab0b627;
          do {
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_128[lVar17 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
/* wm:no support for modified copies */
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
                    ((uint)(uVar15 >> 0x29) | 1);
            pcStack_128[lVar17 + 0x13] =
                 ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar21;
            uVar16 = lVar17 + -0x61c8864680b583eb +
                     (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_128[lVar17 + 1]) << 0x11);
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x12);
          *pcStack_128 = '\0';
        }
        pcStack_128 = pcStack_128 + 0x13;
        uVar9 = func_0x0011ab24(&pcStack_128);
        func_0x007a1ba8(param_1,1,uVar9);
LAB_000ad2a4:
        pbVar8 = (byte *)(*pcRam00000000020676e0)();
        if ((*pbVar8 & 1) == 0) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
          func_0x019c14fc();
        }
        pcStack_138 = (char *)(*pcRam00000000020676c8)();
        if (*pcStack_138 == '\x01') {
          lVar17 = 0;
          uVar16 = 0x7a5870d66fd3767b;
          do {
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_138[lVar17 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
                    (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
            pcStack_138[lVar17 + 0x13] =
                 ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar21;
            uVar16 = lVar17 + -0x61c8864680b583eb +
                     (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_138[lVar17 + 1]) << 0x11);
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x12);
          *pcStack_138 = '\0';
        }
        pcStack_138 = pcStack_138 + 0x13;
        uVar9 = func_0x0011ab24(&pcStack_138);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        func_0x007a1ba8(param_1,1,uVar9);
LAB_000ad3ac:
        func_0x019c1538();
LAB_000acdf8:
        pcStack_140 = (char *)(*pcRam00000000020676f8)();
        if (*pcStack_140 == '\x01') {
          lVar17 = 0;
          uVar16 = 0x38f38633a019304a;
          do {
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_140[lVar17 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                    (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
            pcStack_140[lVar17 + 0x11] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar21;
            uVar16 = lVar17 + -0x61c8864680b583eb +
                     (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_140[lVar17 + 1]) << 0x11);
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x10);
          *pcStack_140 = '\0';
        }
        pcStack_140 = pcStack_140 + 0x11;
        uVar9 = func_0x0011ab24(&pcStack_140);
        func_0x007a1ba8(param_1,2,uVar9);
      } while( true );
    }
  }
  iVar6 = func_0x00791650(param_1);
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  if (iVar6 < 2) {
    if ((iVar6 != 1) || (iVar7 = func_0x00791be4(param_1,1), iVar7 != 7)) goto LAB_000abe78;
    uVar22 = 1;
LAB_000ab68c:
/* thanks for reading - discord.gg/sdkhDjTex */
    alStack_90[0] = 0;
    pbVar8 = (byte *)(*pcRam00000000020677d0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c15b0();
    }
    pcStack_150 = (char *)(*pcRam00000000020677b8)();
    if (*pcStack_150 == '\x01') {
      uVar2 = (byte)pcStack_150[1] ^ 0x1ff45203;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xa3a2f040 ^ 0x75d717;
      pcStack_150[10] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) + 0x40;
      uVar16 = (((ulong)(byte)pcStack_150[1] ^ 0x120d546d60a8f83e) << 0x11 | 0x241a) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[2] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      pcStack_150[0xb] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_150[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[3] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_150[0xc] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_150[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[4] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_150[0xd] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_150[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
/*  watermarked copy - do not remove  */
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[5] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_150[0xe] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_150[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[6] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_150[0xf] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_150[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[7] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_150[0x10] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_150[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[8] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
/* WM - keep the notice, keep the source honest */
      pcStack_150[0x11] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_150[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_150[9] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar16 >> 0x29) | 1);
      pcStack_150[0x12] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar15;
      *pcStack_150 = '\0';
    }
    pcStack_150 = pcStack_150 + 10;
    uVar9 = func_0x0011ab24(&pcStack_150);
    func_0x007935a0(param_1,uVar22,uVar9);
    uVar9 = func_0x00792368(param_1,0xffffffff,alStack_90);
    func_0x000ad52c(&lStack_a8,uVar9,alStack_90[0]);
    func_0x00791660(param_1,0xfffffffe);
    pbVar8 = (byte *)(*pcRam0000000002067800)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c15ec();
    }
    pcStack_158 = (char *)(*pcRam00000000020677e8)();
// reversing this took months of machine time
    if (*pcStack_158 == '\x01') {
      uVar2 = (byte)pcStack_158[1] ^ 0xd1ff7120;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x6c02b5a4;
      pcStack_158[10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') + 1 ^ 0xe3;
      uVar16 = (((ulong)(byte)pcStack_158[1] ^ 0xcd9698ec3a64672e) << 0x11 | 0x19b2d) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[2] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
      pcStack_158[0xb] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_158[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[3] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
      pcStack_158[0xc] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_158[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[4] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
      pcStack_158[0xd] =
// WM - no support for modified copies
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_158[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[5] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
      pcStack_158[0xe] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_158[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[6] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
      pcStack_158[0xf] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_158[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[7] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
      pcStack_158[0x10] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
// WM - origin: github.com/pengussy
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_158[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[8] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
      pcStack_158[0x11] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_158[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_158[9] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar15 >> 0x17);
      pcStack_158[0x12] =
           ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar15;
      *pcStack_158 = '\0';
    }
    pcStack_158 = pcStack_158 + 10;
/* keep the notice, keep the source honest */
    uVar9 = func_0x0011ab24(&pcStack_158);
    func_0x007935a0(param_1,uVar22,uVar9);
    uVar9 = func_0x00792368(param_1,0xffffffff,alStack_90);
    func_0x000ad52c(&lStack_a8,uVar9,alStack_90[0]);
    func_0x00791660(param_1,0xfffffffe);
  }
  else {
    iVar7 = func_0x00791be4(param_1,2);
    if (iVar7 == 7) {
      uVar22 = 2;
      goto LAB_000ab68c;
    }
    iVar7 = func_0x00791e54(param_1,2);
    if (iVar7 != 0) {
      if (iVar6 == 2) {
        uVar22 = 0;
        bVar5 = true;
      }
      else {
        iVar7 = func_0x00791be4(param_1,3);
        bVar5 = iVar7 != 7;
        uVar22 = 0;
        if (!bVar5) {
          uVar22 = 3;
        }
      }
      alStack_90[0] = 0;
      uVar9 = func_0x00792368(param_1,2,alStack_90);
      func_0x000ad52c(&lStack_a8,uVar9,alStack_90[0]);
      if (!bVar5) goto LAB_000ab68c;
    }
  }
/* found on a paste site? it was re-uploaded illegally */
LAB_000abe78:
  pbVar8 = (byte *)(*pcRam0000000002067830)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c1628();
  }
  pcStack_160 = (char *)(*pcRam0000000002067818)();
  if (*pcStack_160 == '\x01') {
    lVar17 = 0;
    uVar16 = 0xde3851369c147686;
    do {
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_160[lVar17 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17);
      pcStack_160[lVar17 + 0x78d] =
           ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar21;
      uVar16 = lVar17 + -0x61c8864680b583eb +
               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_160[lVar17 + 1]) << 0x11);
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x78c);
    *pcStack_160 = '\0';
// chat: discord.gg/sdkhDjTex
  }
  pcStack_160 = pcStack_160 + 0x78d;
  uVar9 = func_0x0011ab24(&pcStack_160);
  uVar16 = _strlen();
  if (0x7ffffffffffffff6 < uVar16) {
    FUN_0000aa50();
    goto LAB_000acddc;
  }
  if (uVar16 < 0x17) {
    uStack_b0 = CONCAT17((char)uVar16,(undefined7)uStack_b0);
    pppppppuVar11 = &pppppppuStack_c0;
  }
  else {
    uVar15 = (uVar16 & 0x7ffffffffffffff8) + 8;
    uVar21 = 0x19;
    if (uVar15 != 0x18) {
      uVar21 = uVar15;
    }
    pppppppuVar11 = (undefined8 *******)__Znwm(uVar21);
    uStack_b0 = uVar21 | 0x8000000000000000;
    pppppppuStack_c0 = pppppppuVar11;
    uStack_b8 = uVar16;
  }
  _memmove(pppppppuVar11,uVar9,uVar16);
  *(undefined1 *)((long)pppppppuVar11 + uVar16) = 0;
  pbVar8 = (byte *)(*pcRam0000000002067860)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c1664();
  }
  pcStack_168 = (char *)(*pcRam0000000002067848)();
  if (*pcStack_168 == '\x01') {
    lVar17 = 0;
    uVar16 = 0x1ac435ee02d384f5;
    do {
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar15 ^ uVar15 >> 0x21;
/* watermarked copy - do not remove */
      uVar2 = (uint)(byte)pcStack_168[lVar17 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17) ^ ((uint)(uVar15 >> 0x29) | 1);
      pcStack_168[lVar17 + 0x30] = ((byte)(uVar2 >> 1) & 0x7f | (byte)(uVar2 << 7)) - (char)uVar21;
      uVar16 = lVar17 + -0x61c8864680b583eb +
               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_168[lVar17 + 1]) << 0x11);
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x2f);
    *pcStack_168 = '\0';
  }
  pcStack_168 = pcStack_168 + 0x30;
  uVar9 = func_0x0011ab24(&pcStack_168);
  uVar10 = _strlen();
  uVar21 = uStack_b0;
  uVar18 = (uStack_b0 & 0x7fffffffffffffff) - 1;
  uVar15 = uStack_b8;
  uVar16 = uVar18;
  if (-1 < (long)uStack_b0) {
    uVar16 = 0x16;
    uVar15 = uStack_b0 >> 0x38;
  }
  if (uVar16 - uVar15 < uVar10) {
    uVar16 = uVar15 + uVar10;
    if (uVar16 < 0x7ffffffffffffff7) {
      if ((long)uStack_b0 < 0) {
        if (uVar18 < 0x3ffffffffffffff4) goto LAB_000ac194;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        uVar18 = 0x7ffffffffffffff8;
        pppppppuVar11 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
        pppppppuVar3 = pppppppuStack_c0;
      }
      else {
        uVar18 = 0x16;
LAB_000ac194:
        uVar1 = uVar16;
        if (uVar16 <= uVar18 * 2) {
          uVar1 = uVar18 * 2;
        }
        uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
        uVar18 = 0x19;
        if (uVar1 != 0x18) {
          uVar18 = uVar1;
        }
        pppppppuVar11 = (undefined8 *******)__Znwm(uVar18);
        pppppppuVar3 = pppppppuStack_c0;
        if (-1 < (long)uVar21) {
          pppppppuVar3 = &pppppppuStack_c0;
        }
      }
/*  found on a paste site? it was re-uploaded illegally  */
      if (uVar15 != 0) {
        _memmove(pppppppuVar11,pppppppuVar3,uVar15);
      }
      _memmove((long)pppppppuVar11 + uVar15,uVar9,uVar10);
      *(undefined1 *)((long)pppppppuVar11 + uVar16) = 0;
      if ((long)uVar21 < 0) {
        __ZdlPv(pppppppuStack_c0);
      }
      uStack_b0 = uVar18 | 0x8000000000000000;
      pppppppuStack_c0 = pppppppuVar11;
      uStack_b8 = uVar16;
      goto LAB_000ac240;
    }
  }
  else {
    if (uVar10 != 0) {
// more drops soon - github.com/pengussy
      pppppppuVar11 = pppppppuStack_c0;
      if (-1 < (long)uStack_b0) {
        pppppppuVar11 = &pppppppuStack_c0;
      }
      _memmove((long)pppppppuVar11 + uVar15,uVar9,uVar10);
      uStack_b0 = CONCAT17((char)(uVar15 + uVar10),(undefined7)uStack_b0) & 0x7fffffffffffffff;
      *(undefined1 *)((long)pppppppuVar11 + uVar15 + uVar10) = 0;
    }
LAB_000ac240:
    func_0x001d774c(&pppppppuStack_d8,&pppppppuStack_c0,1);
    if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) <= *(ulong *)(*(long *)(param_1 + 0x38) + 0x50)
       ) {
      func_0x00819f9c(param_1,1);
    }
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    lVar17 = func_0x007914c4(param_1);
    uVar12 = func_0x00796158(param_1,0xffffffff);
    func_0x00791660(param_1,0xfffffffe);
    *(undefined4 *)(*(long *)(lVar17 + 0x20) + 0x60) = 8;
    alStack_90[0] = CONCAT44(alStack_90[0]._4_4_,8);
    uVar16 = (*pcRam0000000001f26d48)(alStack_90);
    *(ulong *)(*(long *)(lVar17 + 0x20) + 0x80) = uVar16 | 0x3fffffffffff00;
    puVar13 = (undefined4 *)(*pcRam0000000001f26d50)(lVar17);
    lVar19 = *(long *)(lVar17 + 0x20);
    *puVar13 = *(undefined4 *)(lVar19 + 0x60);
    *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(lVar19 + 0x80);
    *(undefined1 *)
     (*(long *)(*(long *)(lVar19 + 0x18) + 0x10) + lRam0000000001f26810 + lRam0000000001f26830) = 1;
    uVar9 = uRam0000000002097018;
    if (-1 < cRam000000000209702f) {
      uVar9 = 0x2097018;
    }
    pppppppuVar11 = pppppppuStack_d8;
    if (-1 < (char)bStack_c1) {
      uStack_d0 = (ulong)bStack_c1;
// WM - watermarked copy - do not remove
      pppppppuVar11 = &pppppppuStack_d8;
    }
    iVar7 = func_0x0090436c(lVar17,uVar9,pppppppuVar11,uStack_d0,0);
    if (iVar7 == 0) {
      plVar14 = (long *)func_0x00790f58(lVar17,0xffffffff);
      func_0x0003c048(*(undefined8 *)(*plVar14 + 0x18));
      if (0 < iVar6) {
        iVar7 = 1;
        iVar23 = iVar6;
        do {
          func_0x00791ab0(param_1,iVar7);
          func_0x00791230(param_1,lVar17,1);
          iVar7 = iVar7 + 1;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      plStack_e0 = (long *)__Znwm(0x50);
      plStack_e0[1] = 0;
      plStack_e0[2] = 0;
      *plStack_e0 = (long)&UNK_01dbf3e0;
      plStack_e0[6] = 0;
      plStack_e0[5] = 0;
      plStack_e0[8] = 0;
      plStack_e0[7] = 0;
      plStack_e8 = plStack_e0 + 3;
      plStack_e0[4] = 0;
      *plStack_e8 = 0;
// stripping the watermark breaks the license
      plStack_e0[6] = -1;
      plStack_e0[8] = lVar17;
      plStack_e0[9] = 0;
      *(int *)(plStack_e0 + 9) = (int)uVar12;
      (*pcRam0000000001f26dc8)
                (aiStack_100,
                 lRam0000000001f26820 + *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0x18) + 0x10)
                 ,&plStack_e8,iVar6,0,0);
      if (aiStack_100[0] == 2) {
        lVar19 = func_0x00792368(lVar17,0xffffffff,0);
        pcVar4 = pcRam0000000001f26db0;
        pbVar8 = (byte *)(*pcRam00000000020678f0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c1718();
        }
        pcStack_180 = (char *)(*pcRam00000000020678d8)();
        if (*pcStack_180 == '\x01') {
          lVar20 = 0;
          uVar16 = 0x182e970771de3092;
          do {
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_180[lVar20 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar21 >> 0x17);
            pcStack_180[lVar20 + 0x19] =
                 ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = lVar20 + -0x61c8864680b583eb +
                     (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_180[lVar20 + 1]) << 0x11);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x18);
          *pcStack_180 = '\0';
        }
        pcStack_180 = pcStack_180 + 0x19;
        uVar9 = func_0x0011ab24(&pcStack_180);
// WM - chat: discord.gg/sdkhDjTex
        if (lVar19 == 0) {
          pbVar8 = (byte *)(*pcRam0000000002067920)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019c1754();
          }
          pcStack_188 = (char *)(*pcRam0000000002067908)();
          if (*pcStack_188 == '\x01') {
            uVar2 = (byte)pcStack_188[1] ^ 0xc3260a85;
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0x9f036d87;
            pcStack_188[9] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - 0x3f ^ 0x46;
            uVar16 = (((ulong)(byte)pcStack_188[1] ^ 0xf396ffc2eea2b3f9) << 0x11 | 0x1e72d) +
                     0x9e3779b97f4a7c15;
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_188[2] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17);
            pcStack_188[10] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_188[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_188[3] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17);
            pcStack_188[0xb] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_188[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
/* WM - donate: donate/README.md */
            uVar2 = (uint)(byte)pcStack_188[4] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17);
            pcStack_188[0xc] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_188[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_188[5] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17);
            pcStack_188[0xd] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_188[5]) << 0x11) + 0x9e3779b97f4a7c19
            ;
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_188[6] ^ (uint)uVar21 ^ 0xffffffc3;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17);
            pcStack_188[0xe] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_188[6]) << 0x11) + 0x9e3779b97f4a7c1a
            ;
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_188[7] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar21 >> 0x17);
            pcStack_188[0xf] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_188[7]) << 0x11) + 0x9e3779b97f4a7c1b
            ;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
            uVar15 = uVar16 ^ uVar16 >> 0x21;
            uVar2 = (uint)(byte)pcStack_188[8] ^ (uint)uVar15 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar15 >> 0x17);
            pcStack_188[0x10] =
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar16 >> 0x29) | 1) ^
                 (byte)uVar15;
            *pcStack_188 = '\0';
          }
          pcStack_188 = pcStack_188 + 9;
          func_0x0011ab24(&pcStack_188);
        }
        (*pcVar4)(2,uVar9);
        func_0x00791660(lVar17,0xfffffffe);
      }
      if (lStack_a8 == lStack_a0) {
        uVar9 = 0;
      }
      else {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        lStack_118 = 0;
        lStack_110 = 0;
        lStack_120 = 0;
        func_0x001436c0(&lStack_120,lStack_a8,lStack_a0,
                        (lStack_a0 - lStack_a8 >> 3) * -0x5555555555555555);
        plStack_78 = (long *)0x0;
        plStack_78 = (long *)__Znwm(0x20);
        *plStack_78 = (long)&UNK_01dbf480;
        plStack_78[2] = lStack_118;
        plStack_78[1] = lStack_120;
        plStack_78[3] = lStack_110;
        lStack_120 = 0;
        lStack_118 = 0;
        lStack_110 = 0;
        uVar9 = func_0x001e7c24(param_1,alStack_90);
        if (plStack_78 == alStack_90) {
          lVar17 = 0x20;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
LAB_000accfc:
          (**(code **)(*plStack_78 + lVar17))();
        }
        else if (plStack_78 != (long *)0x0) {
          lVar17 = 0x28;
          goto LAB_000accfc;
        }
        if (lStack_120 != 0) {
          for (; lStack_120 != lStack_118; lStack_118 = lStack_118 + -0x18) {
          }
          lStack_118 = lStack_120;
          __ZdlPv(lStack_120);
        }
      }
      plVar14 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        LOAcquire();
        lVar17 = plStack_e0[1];
        plStack_e0[1] = lVar17 + -1;
        LORelease();
        if (lVar17 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
    }
    else {
      lVar19 = func_0x00792368(lVar17,0xffffffff,0);
      pcVar4 = pcRam0000000001f26db0;
      pbVar8 = (byte *)(*pcRam0000000002067890)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c16a0();
      }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      pcStack_170 = (char *)(*pcRam0000000002067878)();
      if (*pcStack_170 == '\x01') {
        uVar2 = (byte)pcStack_170[1] ^ 0x2846bf5b;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0xf602b1d6;
        pcStack_170[4] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ 0x98;
        uVar16 = (((ulong)(byte)pcStack_170[1] ^ 0x29f478dc437025a0) << 0x11 | 0x53e8) +
                 0x9e3779b97f4a7c15;
        uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcStack_170[2] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
                (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
        pcStack_170[5] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar21;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_170[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar16 ^ uVar16 >> 0x21;
        uVar2 = (uint)(byte)pcStack_170[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
        pcStack_170[6] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar15;
        *pcStack_170 = '\0';
      }
      pcStack_170 = pcStack_170 + 4;
      uVar9 = func_0x0011ab24(&pcStack_170);
      if (lVar19 == 0) {
        pbVar8 = (byte *)(*pcRam00000000020678c0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c16dc();
        }
        pcStack_178 = (char *)(*pcRam00000000020678a8)();
        if (*pcStack_178 == '\x01') {
          lVar19 = 0;
/*  stripping the watermark breaks the license  */
          uVar16 = 0xd66fbffbb418ec23;
          do {
            uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar15 ^ uVar15 >> 0x21;
            uVar2 = (uint)(byte)pcStack_178[lVar19 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar21 >> 0x17);
            pcStack_178[lVar19 + 0x1d] =
                 ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar15 >> 0x29) | 1) ^
                 (byte)uVar21;
            uVar16 = lVar19 + -0x61c8864680b583eb +
                     (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_178[lVar19 + 1]) << 0x11);
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x1c);
          *pcStack_178 = '\0';
        }
        pcStack_178 = pcStack_178 + 0x1d;
        func_0x0011ab24(&pcStack_178);
      }
      (*pcVar4)(2,uVar9);
      func_0x00791660(lVar17,0);
      func_0x0079628c(lVar17,uVar12);
      uVar9 = 0;
    }
    if ((char)bStack_c1 < '\0') {
      __ZdlPv(pppppppuStack_d8);
    }
    if (lStack_a8 != 0) {
      for (; lStack_a8 != lStack_a0; lStack_a0 = lStack_a0 + -0x18) {
      }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      lStack_a0 = lStack_a8;
      __ZdlPv(lStack_a8);
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return uVar9;
    }
    ___stack_chk_fail();
  }
  FUN_0000aa50();
LAB_000acddc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0xacde0);
  (*pcVar4)();
}

