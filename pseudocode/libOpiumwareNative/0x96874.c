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
 *  file-id: 0x96874:21a2e3e9ac
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x000977c0) */
/* WARNING: Removing unreachable block (ram,0x00097810) */
/* WARNING: Removing unreachable block (ram,0x00097b58) */
/* WARNING: Removing unreachable block (ram,0x00097b68) */
/* WARNING: Removing unreachable block (ram,0x00097b78) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00096874(long param_1)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
/* WM - unlicensed copy if this notice is missing */
  ulong uVar19;
  ulong uVar20;
  long unaff_x19;
  byte *pbVar21;
  ulong unaff_x20;
  byte *pbVar22;
  long unaff_x23;
  ulong uVar23;
  byte *pbVar24;
  byte *pbVar25;
  long unaff_x27;
  long lStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
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
/* wm:origin: github.com/pengussy */
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  undefined8 *******pppppppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 *******pppppppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  iVar4 = func_0x00791be4(param_1,1);
  if (((iVar4 != 8) && (iVar4 = func_0x00791be4(param_1,1), iVar4 != 3)) &&
     (iVar4 = func_0x00791be4(param_1,1), iVar4 != 4)) {
    pbVar24 = (byte *)(*pcRam0000000002065f70)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bf7b0();
    }
    pcStack_d0 = (char *)(*pcRam0000000002065f58)();
    if (*pcStack_d0 == '\x01') {
      lVar18 = 0;
      uVar17 = 0xcb3d11a6deb4ee68;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_d0[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) - (int)(uVar20 >> 0x17) ^
                 ((uint)(uVar16 >> 0x29) | 1);
/* reversing this took months of machine time - github.com/pengussy */
        pcStack_d0[lVar18 + 0x14] =
             ((byte)(uVar15 >> 3) & 0x1f | (byte)(uVar15 << 5)) - (char)uVar20;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d0[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x13);
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 0x14;
    uVar11 = func_0x0011ab24(&pcStack_d0);
    func_0x007a1ba8(param_1,1,uVar11);
LAB_000990b8:
    pbVar24 = (byte *)(*pcRam0000000002066300)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bfbe8();
    }
    pcStack_160 = (char *)(*pcRam00000000020662e8)();
    if (*pcStack_160 == '\x01') {
      lVar18 = 0;
      uVar17 = 0x81c106eed9f27ad7;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        uVar15 = (uint)(byte)pcStack_160[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) -
                 (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
        pcStack_160[lVar18 + 0x17] =
             ((byte)(uVar15 >> 1) & 0x7f | (char)uVar15 * -0x80) ^ (byte)uVar20;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_160[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x16);
      *pcStack_160 = '\0';
    }
    pcStack_160 = pcStack_160 + 0x17;
    uVar11 = func_0x0011ab24(&pcStack_160);
    func_0x007a1abc(lStack_198,1,uVar11);
    goto LAB_000991fc;
  }
  iVar4 = func_0x00791be4(param_1,2);
  if (iVar4 != 7) {
    pbVar24 = (byte *)(*pcRam0000000002065fa0)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bf7ec();
    }
    pcStack_d8 = (char *)(*pcRam0000000002065f88)();
    if (*pcStack_d8 == '\x01') {
      uVar15 = (byte)pcStack_d8[1] ^ 0x414266a4;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) + 0xa6b0083 ^ 0x2abd65;
      pcStack_d8[7] = ((byte)(uVar15 >> 5) & 7 | (byte)(uVar15 << 3)) + 0x99;
      uVar17 = (((ulong)(byte)pcStack_d8[1] ^ 0x4ac93921c147fc43) << 0x11 | 0x9592) +
               0x9e3779b97f4a7c15;
/* stripping the watermark breaks the license */
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar20 = uVar16 ^ uVar16 >> 0x21;
      uVar15 = (uint)(byte)pcStack_d8[2] ^ (uint)uVar20 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d8[8] = ((byte)(uVar15 >> 5) & 7 | (byte)(uVar15 << 3)) - (char)uVar20;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar20 = uVar16 ^ uVar16 >> 0x21;
      uVar15 = (uint)(byte)pcStack_d8[3] ^ (uint)uVar20 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d8[9] = ((byte)(uVar15 >> 5) & 7 | (byte)(uVar15 << 3)) - (char)uVar20;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar20 = uVar16 ^ uVar16 >> 0x21;
      uVar15 = (uint)(byte)pcStack_d8[4] ^ (uint)uVar20 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d8[10] = ((byte)(uVar15 >> 5) & 7 | (byte)(uVar15 << 3)) - (char)uVar20;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar20 = uVar16 ^ uVar16 >> 0x21;
      uVar15 = (uint)(byte)pcStack_d8[5] ^ (uint)uVar20 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d8[0xb] = ((byte)(uVar15 >> 5) & 7 | (byte)(uVar15 << 3)) - (char)uVar20;
      uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_d8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar17 ^ uVar17 >> 0x21;
      uVar15 = (uint)(byte)pcStack_d8[6] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17) ^
// WM - donate: donate/README.md
               ((uint)(uVar17 >> 0x29) | 1);
      pcStack_d8[0xc] = ((byte)(uVar15 >> 5) & 7 | (byte)(uVar15 << 3)) - (char)uVar16;
      *pcStack_d8 = '\0';
    }
    pcStack_d8 = pcStack_d8 + 7;
    uVar11 = func_0x0011ab24(&pcStack_d8);
    func_0x007a1ba8(param_1,2,uVar11);
LAB_000980f0:
    pbVar24 = (byte *)(*pcRam0000000002066000)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bf864();
    }
    pcStack_e8 = (char *)(*pcRam0000000002065fe8)();
    if (*pcStack_e8 == '\x01') {
      lVar18 = 0;
      uVar17 = 0xdbcd504c5759f0b1;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e8[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) -
                 (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
        pcStack_e8[lVar18 + 0x21] = ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') ^ (byte)uVar20
        ;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e8[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x20);
      *pcStack_e8 = '\0';
    }
    pcStack_e8 = pcStack_e8 + 0x21;
    uVar11 = func_0x0011ab24(&pcStack_e8);
    func_0x007a1abc(param_1,1,uVar11);
LAB_00098234:
    pbVar24 = (byte *)(*pcRam0000000002066030)();
    if ((*pbVar24 & 1) == 0) {
// WM - if you paid for this, you were scammed
      func_0x019bfc60();
    }
    pcStack_170 = (char *)(*pcRam0000000002066018)();
    if (*pcStack_170 == '\x01') {
      lVar18 = 0;
      uVar17 = 0xa5e5ce3a1d3b859;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_170[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
                 ((uint)(uVar16 >> 0x29) | 1);
        pcStack_170[lVar18 + 0x17] =
             ((byte)(uVar15 >> 1) & 0x7f | (byte)(uVar15 << 7)) - (char)uVar20;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_170[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x16);
      *pcStack_170 = '\0';
    }
    pcStack_170 = pcStack_170 + 0x17;
    uVar11 = func_0x0011ab24(&pcStack_170);
    func_0x007a1abc(param_1,1,uVar11);
LAB_00098378:
    pbVar24 = (byte *)(*pcRam0000000002066090)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bf8dc();
    }
    pcStack_f8 = (char *)(*pcRam0000000002066078)();
    if (*pcStack_f8 == '\x01') {
/*  found on a paste site? it was re-uploaded illegally  */
      lVar18 = 0;
      uVar17 = (unaff_x20 ^ 0x7e281c9cef9087bf ^ (unaff_x20 ^ 0x7e281c9cef9087bf) >> 0x21) *
               unaff_x23;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * unaff_x27;
      uVar17 = uVar17 ^ uVar17 >> 0x21;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * unaff_x23;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * unaff_x27;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_f8[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar20 >> 0x17) ^
                 ((uint)(uVar16 >> 0x29) | 1);
        pcStack_f8[lVar18 + 0x1c] = ((byte)(uVar15 >> 7) & 1 | (byte)(uVar15 << 1)) - (char)uVar20;
        uVar17 = lVar18 + unaff_x19 +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f8[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x1b);
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 0x1c;
    uVar11 = func_0x0011ab24(&pcStack_f8);
    func_0x007a1abc(param_1,2,uVar11);
    goto LAB_000991fc;
  }
  iVar4 = func_0x00791be4(param_1,1);
  if (iVar4 != 8) {
    uVar11 = func_0x007f4d48(param_1,1);
    lVar18 = func_0x007f4f30(param_1,uVar11);
    if (lVar18 != 0) {
      plVar9 = *(long **)(lVar18 + 8);
// stripping the watermark breaks the license
      goto LAB_00096928;
    }
    pbVar24 = (byte *)(*pcRam0000000002065fd0)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bf828();
    }
    pcStack_e0 = (char *)(*pcRam0000000002065fb8)();
    if (*pcStack_e0 == '\x01') {
      lVar18 = 0;
      uVar17 = 0x1ebf9cdaabe91474;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_e0[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) - (int)(uVar20 >> 0x17) ^
                 ((uint)(uVar16 >> 0x29) | 1);
        pcStack_e0[lVar18 + 0x14] = ((byte)(uVar15 >> 6) & 3 | (byte)(uVar15 << 2)) - (char)uVar20;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_e0[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x13);
      *pcStack_e0 = '\0';
    }
    pcStack_e0 = pcStack_e0 + 0x14;
    uVar11 = func_0x0011ab24(&pcStack_e0);
    func_0x007a1abc(param_1,1,uVar11);
LAB_000987ec:
    pbVar24 = (byte *)(*pcRam00000000020662d0)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bfb70();
    }
    pcStack_150 = (char *)(*pcRam00000000020662b8)();
    if (*pcStack_150 == '\x01') {
      lVar18 = 0;
      uVar17 = 0x5176037cd924dfac;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_150[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar20 >> 0x17);
        pcStack_150[lVar18 + 0x20] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar20;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_150[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x1f);
      *pcStack_150 = '\0';
    }
    pcStack_150 = pcStack_150 + 0x20;
    uVar11 = func_0x0011ab24(&pcStack_150);
    func_0x007a1abc(param_1,1,uVar11);
    goto LAB_000991fc;
  }
  plVar9 = (long *)func_0x00790f58(param_1,1);
LAB_00096928:
  if (*(char *)(*plVar9 + 3) != '\0') goto LAB_000980f0;
  pbVar24 = *(byte **)(*plVar9 + 0x18);
  if (pbVar24 == (byte *)0x0) goto LAB_00098234;
  pppppppuStack_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  uStack_70 = 0;
  pppppppuStack_98 = (undefined8 *******)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  pppppppuStack_b0 = (undefined8 *******)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  pbVar10 = (byte *)(*pcRam0000000002066060)();
  if ((*pbVar10 & 1) == 0) {
    func_0x019bf8a0();
  }
  unaff_x23 = -0xae502812aa7333;
  unaff_x27 = -0x3b314601e57a13ad;
  unaff_x19 = -0x61c8864680b583eb;
  unaff_x20 = 0x8ebc6af09c88c6e3;
  pcStack_f0 = (char *)(*pcRam0000000002066048)();
  if (*pcStack_f0 == '\x01') {
    uVar15 = (byte)pcStack_f0[1] ^ 0x6486c04a;
    uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) + 0xbf40fca7;
/* keep the notice, keep the source honest */
    pcStack_f0[6] = ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ 0x89;
    uVar17 = (((ulong)(byte)pcStack_f0[1] ^ 0x9fc86065bc88090c) << 0x11 | 0x13f90) +
             0x9e3779b97f4a7c15;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
    pcStack_f0[7] = ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ (byte)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
    pcStack_f0[8] = ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ (byte)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/* wm:chat: discord.gg/sdkhDjTex */
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
    pcStack_f0[9] = ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ (byte)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar17 ^ uVar17 >> 0x21;
    uVar15 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
             (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_f0[10] = ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ (byte)uVar16;
    *pcStack_f0 = '\0';
  }
  pcStack_f0 = pcStack_f0 + 6;
  uVar11 = func_0x0011ab24(&pcStack_f0);
  func_0x00793714(param_1,2,uVar11);
  iVar4 = func_0x00791be4(param_1,0xffffffff);
  if (iVar4 != 0) {
    iVar5 = func_0x00791be4(param_1,0xffffffff);
// WM - unlicensed copy if this notice is missing
    if (iVar5 != 6) goto LAB_00098378;
    plVar9 = (long *)func_0x00790f58(param_1,0xffffffff);
    func_0x0012851c(&pppppppuStack_80,*plVar9 + 0x18,*(undefined4 *)(*plVar9 + 0x14));
  }
  func_0x00791660(param_1,0xfffffffe);
  pbVar10 = (byte *)(*pcRam00000000020660c0)();
  if ((*pbVar10 & 1) == 0) {
    func_0x019bf918();
  }
  pcStack_100 = (char *)(*pcRam00000000020660a8)();
  if (*pcStack_100 == '\x01') {
    uVar15 = (byte)pcStack_100[1] ^ 0x126cb003;
    uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) + 0xd2ed2eec;
    pcStack_100[8] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ 0xc0;
    uVar17 = (((ulong)(byte)pcStack_100[1] ^ 0xe2745c714d194187) << 0x11 | 0x1c4e8) +
             0x9e3779b97f4a7c15;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_100[2] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
// WM - keep the notice, keep the source honest
    pcStack_100[9] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_100[3] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
    pcStack_100[10] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_100[4] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
    pcStack_100[0xb] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_100[5] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
    pcStack_100[0xc] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_100[6] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
             (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
    pcStack_100[0xd] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar20;
/*  if you paid for this, you were scammed  */
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar17 ^ uVar17 >> 0x21;
    uVar15 = (uint)(byte)pcStack_100[7] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
             (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcStack_100[0xe] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') ^ (byte)uVar16;
    *pcStack_100 = '\0';
  }
  pcStack_100 = pcStack_100 + 8;
  uVar11 = func_0x0011ab24(&pcStack_100);
  func_0x00793714(param_1,2,uVar11);
  iVar5 = func_0x00791be4(param_1,0xffffffff);
  if (iVar5 != 0) {
    iVar6 = func_0x00791be4(param_1,0xffffffff);
    if (iVar6 != 6) {
      pbVar24 = (byte *)(*pcRam00000000020660f0)();
      if ((*pbVar24 & 1) == 0) {
        func_0x019bf954();
      }
      pcStack_108 = (char *)(*pcRam00000000020660d8)();
      if (*pcStack_108 == '\x01') {
        lVar18 = 0;
        uVar17 = 0x612daec2e9dde3f6;
/* do not claim this as your own */
        do {
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar20 = uVar16 ^ uVar16 >> 0x21;
          uVar15 = (uint)(byte)pcStack_108[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
          pcStack_108[lVar18 + 0x1e] =
               ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ (byte)uVar20;
          uVar17 = lVar18 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_108[lVar18 + 1]) << 0x11);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x1d);
        *pcStack_108 = '\0';
      }
      pcStack_108 = pcStack_108 + 0x1e;
      uVar11 = func_0x0011ab24(&pcStack_108);
      func_0x007a1abc(param_1,2,uVar11);
      goto LAB_000991fc;
    }
    plVar9 = (long *)func_0x00790f58(param_1,0xffffffff);
    func_0x0012851c(&pppppppuStack_98,*plVar9 + 0x18,*(undefined4 *)(*plVar9 + 0x14));
  }
  func_0x00791660(param_1,0xfffffffe);
  pbVar10 = (byte *)(*pcRam0000000002066120)();
  if ((*pbVar10 & 1) == 0) {
    func_0x019bf990();
  }
  pcStack_110 = (char *)(*pcRam0000000002066108)();
  if (*pcStack_110 == '\x01') {
    uVar15 = (byte)pcStack_110[1] ^ 0x514f0f4;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) + 0x3264aa0b ^ 0x4cf367;
    pcStack_110[0xb] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - 0x37;
    uVar17 = (((ulong)(byte)pcStack_110[1] ^ 0xf142ae58c1bb8b79) << 0x11 | 0x1e285) +
             0x9e3779b97f4a7c15;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
// WM - origin: github.com/pengussy
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[2] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0xc] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[3] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0xd] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[4] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0xe] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
/* WM - no support for modified copies */
    uVar15 = (uint)(byte)pcStack_110[5] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0xf] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[6] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0x10] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[7] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0x11] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[8] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0x12] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
    uVar20 = uVar16 ^ uVar16 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[9] ^ (uint)uVar20 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
             ((uint)(uVar16 >> 0x29) | 1);
    pcStack_110[0x13] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_110[9]) << 0x11) + 0x9e3779b97f4a7c1d;
/* wm:no support for modified copies */
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar17 ^ uVar17 >> 0x21;
    uVar15 = (uint)(byte)pcStack_110[10] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar16 >> 0x17) ^
             ((uint)(uVar17 >> 0x29) | 1);
    pcStack_110[0x14] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar16;
    *pcStack_110 = '\0';
  }
  pcStack_110 = pcStack_110 + 0xb;
  uVar11 = func_0x0011ab24(&pcStack_110);
  func_0x00793714(param_1,2,uVar11);
  iVar6 = func_0x00791be4(param_1,0xffffffff);
  if (iVar6 != 0) {
    iVar7 = func_0x00791be4(param_1,0xffffffff);
    if (iVar7 != 6) {
      pbVar24 = (byte *)(*pcRam0000000002066150)();
      if ((*pbVar24 & 1) == 0) {
        func_0x019bf9cc();
      }
      pcStack_118 = (char *)(*pcRam0000000002066138)();
      if (*pcStack_118 == '\x01') {
        lVar18 = 0;
        uVar17 = 0xe90c5141da076dc;
        do {
/*  more drops soon - github.com/pengussy  */
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar20 = uVar16 ^ uVar16 >> 0x21;
          uVar15 = (uint)(byte)pcStack_118[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) - (int)(uVar20 >> 0x17) ^
                   ((uint)(uVar16 >> 0x29) | 1);
          pcStack_118[lVar18 + 0x21] =
               ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar20;
          uVar17 = lVar18 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_118[lVar18 + 1]) << 0x11);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x20);
        *pcStack_118 = '\0';
      }
      pcStack_118 = pcStack_118 + 0x21;
      uVar11 = func_0x0011ab24(&pcStack_118);
      func_0x007a1abc(param_1,2,uVar11);
      goto LAB_000991fc;
    }
    plVar9 = (long *)func_0x00790f58(param_1,0xffffffff);
    func_0x0012851c(&pppppppuStack_b0,*plVar9 + 0x18,*(undefined4 *)(*plVar9 + 0x14));
  }
  func_0x00791660(param_1,0xfffffffe);
  pbVar10 = (byte *)(*pcRam0000000002066180)();
  if ((*pbVar10 & 1) == 0) {
    func_0x019bfa08();
  }
  pcStack_120 = (char *)(*pcRam0000000002066168)();
  if (*pcStack_120 == '\x01') {
    lVar18 = 0;
    uVar17 = 0x54f09138d323b9d9;
    do {
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar20 = uVar16 ^ uVar16 >> 0x21;
      uVar15 = (uint)(byte)pcStack_120[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      uVar15 = (uVar15 >> 6 & 3 | uVar15 << 2) - (int)(uVar20 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_120[lVar18 + 0xd] = ((byte)(uVar15 >> 7) & 1 | (byte)(uVar15 << 1)) - (char)uVar20;
      uVar17 = lVar18 + -0x61c8864680b583eb +
               (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_120[lVar18 + 1]) << 0x11);
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0xc);
    *pcStack_120 = '\0';
  }
  pcStack_120 = pcStack_120 + 0xd;
  uVar11 = func_0x0011ab24(&pcStack_120);
  func_0x00793714(param_1,2,uVar11);
  iVar7 = func_0x00791be4(param_1,0xffffffff);
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = func_0x007a212c(param_1,0xffffffff);
  }
  func_0x00791660(param_1,0xfffffffe);
  if (iVar4 == 0) {
    pbStack_188 = (byte *)0x0;
    if (iVar5 == 0) goto LAB_000975d4;
LAB_00097584:
    uVar17 = uStack_90;
    pppppppuVar13 = pppppppuStack_98;
    if (-1 < (long)uStack_88) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uVar17 = uStack_88 >> 0x38;
      pppppppuVar13 = &pppppppuStack_98;
    }
    func_0x00792db8(param_1,pppppppuVar13,uVar17);
    puVar12 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
    pbStack_190 = (byte *)*puVar12;
  }
  else {
    uVar17 = uStack_78;
    pppppppuVar13 = pppppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar17 = uStack_70 >> 0x38;
      pppppppuVar13 = &pppppppuStack_80;
    }
    func_0x00792db8(param_1,pppppppuVar13,uVar17);
    puVar12 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
    pbStack_188 = (byte *)*puVar12;
    if (iVar5 != 0) goto LAB_00097584;
LAB_000975d4:
    if (iVar6 == 0) {
      pbStack_190 = (byte *)0x0;
    }
    else {
      pppppppuStack_c8 = (undefined8 *******)0x0;
      uStack_c0 = 0;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      uStack_b8 = 0;
      uVar17 = uStack_a8;
      if (-1 < (long)uStack_a0) {
        uVar17 = uStack_a0 >> 0x38;
      }
      uVar17 = uVar17 + 1;
      if (0x7ffffffffffffff6 < uVar17) {
LAB_00098f6c:
        FUN_0000aa50();
        goto LAB_000991fc;
      }
      if (uVar17 < 0x17) {
        uStack_b8 = 0x100000000000000;
        pppppppuVar13 = &pppppppuStack_c8;
      }
      else {
        uVar17 = (uVar17 & 0x7ffffffffffffff8) + 8;
/* if you paid for this, you were scammed - github.com/pengussy */
        uVar16 = 0x19;
        if (uVar17 != 0x18) {
          uVar16 = uVar17;
        }
        pppppppuVar13 = (undefined8 *******)__Znwm(uVar16);
        uStack_b8 = uVar16 | 0x8000000000000000;
        *(undefined1 *)pppppppuVar13 = pppppppuStack_c8._0_1_;
        uStack_c0 = 1;
        pppppppuStack_c8 = pppppppuVar13;
      }
      *(undefined2 *)pppppppuVar13 = 0x3d;
      uVar16 = uStack_b8;
      uVar17 = uStack_a8;
      pppppppuVar13 = pppppppuStack_b0;
      if (-1 < (long)uStack_a0) {
        uVar17 = uStack_a0 >> 0x38;
        pppppppuVar13 = &pppppppuStack_b0;
      }
      uVar19 = (uStack_b8 & 0x7fffffffffffffff) - 1;
      uVar23 = uStack_c0;
      uVar20 = uVar19;
      if (-1 < (long)uStack_b8) {
        uVar20 = 0x16;
        uVar23 = (ulong)uStack_b8._7_1_;
/*  keep the notice, keep the source honest  */
      }
      if (uVar20 - uVar23 < uVar17) {
        uVar20 = uVar23 + uVar17;
        if (0x7ffffffffffffff6 < uVar20) goto LAB_00098f6c;
        if ((long)uStack_b8 < 0) {
          if (uVar19 < 0x3ffffffffffffff4) goto LAB_0009773c;
          uVar19 = 0x7ffffffffffffff8;
          pppppppuVar14 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar2 = pppppppuStack_c8;
        }
        else {
          uVar19 = 0x16;
LAB_0009773c:
          uVar1 = uVar20;
          if (uVar20 <= uVar19 * 2) {
            uVar1 = uVar19 * 2;
          }
          uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
          uVar19 = 0x19;
          if (uVar1 != 0x18) {
            uVar19 = uVar1;
          }
          pppppppuVar14 = (undefined8 *******)__Znwm();
          pppppppuVar2 = pppppppuStack_c8;
          if (-1 < (long)uVar16) {
            pppppppuVar2 = &pppppppuStack_c8;
          }
        }
        if (uVar23 != 0) {
          _memmove(pppppppuVar14,pppppppuVar2,uVar23);
        }
        _memmove((long)pppppppuVar14 + uVar23,pppppppuVar13,uVar17);
        *(undefined1 *)((long)pppppppuVar14 + uVar20) = 0;
        if ((long)uVar16 < 0) {
          __ZdlPv(pppppppuStack_c8);
        }
        uStack_b8 = uVar19 | 0x8000000000000000;
        uVar15 = (uint)(byte)(uStack_b8 >> 0x38);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        pppppppuStack_c8 = pppppppuVar14;
        uStack_c0 = uVar20;
      }
      else if (uVar17 == 0) {
        uVar15 = (uint)uStack_b8._7_1_;
      }
      else {
        pppppppuVar14 = pppppppuStack_c8;
        if (-1 < (long)uStack_b8) {
          pppppppuVar14 = &pppppppuStack_c8;
        }
        _memmove((long)pppppppuVar14 + uVar23,pppppppuVar13,uVar17);
        uStack_b8 = CONCAT17((char)(uVar23 + uVar17),(undefined7)uStack_b8) & 0x7fffffffffffffff;
        *(undefined1 *)((long)pppppppuVar14 + uVar23 + uVar17) = 0;
        uVar15 = (uint)uStack_b8._7_1_;
      }
      uVar17 = uStack_c0;
      pppppppuVar13 = pppppppuStack_c8;
      if (-1 < (char)uVar15) {
        uVar17 = (ulong)uVar15;
        pppppppuVar13 = &pppppppuStack_c8;
      }
      func_0x00792db8(param_1,pppppppuVar13,uVar17);
      puVar12 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
      pbStack_190 = (byte *)*puVar12;
    }
  }
  if (iVar7 == 0) goto LAB_00097aa0;
  iVar7 = *(int *)(pbVar24 + 0xb8);
  if ((iVar7 < 1) || (*(long *)(pbVar24 + 0x88) == 0)) {
/* no support for modified copies */
    pbVar24 = (byte *)(*pcRam00000000020661b0)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bfc24();
    }
    pcStack_168 = (char *)(*pcRam0000000002066198)();
    if (*pcStack_168 == '\x01') {
      lVar18 = 0;
      uVar17 = 0x23b97d07f90fcc1a;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_168[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
                 (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
        pcStack_168[lVar18 + 0x1a] =
             ((byte)(uVar15 >> 6) & 3 | (char)uVar15 * '\x04') ^ (byte)uVar20;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_168[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x19);
// WM - watermarked copy - do not remove
      *pcStack_168 = '\0';
    }
    pcStack_168 = pcStack_168 + 0x1a;
    uVar11 = func_0x0011ab24(&pcStack_168);
    func_0x007a1abc(param_1,1,uVar11);
    goto LAB_000991fc;
  }
  if ((*(long *)(pbVar24 + 0x48) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 0x6f0) == 0)) {
    pbVar24 = (byte *)(*pcRam00000000020661e0)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bfa44();
    }
    pcStack_128 = (char *)(*pcRam00000000020661c8)();
    if (*pcStack_128 == '\x01') {
      lVar18 = 0;
      uVar17 = 0xf825d8e1129f69de;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_128[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar20 >> 0x17) ^
                 ((uint)(uVar16 >> 0x29) | 1);
        pcStack_128[lVar18 + 0x2b] =
             ((byte)(uVar15 >> 4) & 0xf | (byte)(uVar15 << 4)) - (char)uVar20;
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_128[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x2a);
      *pcStack_128 = '\0';
    }
    pcStack_128 = pcStack_128 + 0x2b;
    uVar11 = func_0x0011ab24(&pcStack_128);
    func_0x007a1abc(param_1,1,uVar11);
    goto LAB_000991fc;
  }
  pbVar22 = pbVar24 + 8;
  pbVar21 = *(byte **)pbVar22;
  uVar17 = (ulong)pbVar21 ^ (ulong)pbVar22;
  pbVar25 = pbVar24 + 0x78;
  pbVar10 = pbVar25 + *(long *)pbVar25;
  if (pbVar21 != pbVar22) {
    if (pbVar10 == (byte *)0x0) {
      pbVar24 = (byte *)(*pcRam0000000002066210)();
      if ((*pbVar24 & 1) == 0) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        func_0x019bfb34();
      }
      pcStack_148 = (char *)(*pcRam00000000020661f8)();
      if (*pcStack_148 == '\x01') {
        lVar18 = 0;
        uVar17 = 0x3319e7bcecd9fd60;
        do {
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar20 = uVar16 ^ uVar16 >> 0x21;
          uVar15 = (uint)(byte)pcStack_148[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
          pcStack_148[lVar18 + 0x20] =
               ((byte)(uVar15 >> 3) & 0x1f | (char)uVar15 * ' ') ^ (byte)uVar20;
          uVar17 = lVar18 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_148[lVar18 + 1]) << 0x11);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x1f);
        *pcStack_148 = '\0';
      }
      pcStack_148 = pcStack_148 + 0x20;
      uVar11 = func_0x0011ab24(&pcStack_148);
      func_0x007a1abc(param_1,1,uVar11);
/* WM - watermarked copy - do not remove */
      goto LAB_000991fc;
    }
    uVar15 = *(uint *)(pbVar24 + 0xa8);
    if (0x1e < uVar15) {
      pbVar24 = (byte *)(*pcRam0000000002066240)();
      if ((*pbVar24 & 1) == 0) {
        func_0x019bfa80();
      }
      pcStack_130 = (char *)(*pcRam0000000002066228)();
      if (*pcStack_130 == '\x01') {
        lVar18 = 0;
        uVar17 = 0x27976ce9583b3f2d;
        do {
          uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar20 = uVar16 ^ uVar16 >> 0x21;
          uVar15 = (uint)(byte)pcStack_130[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
                   (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
          pcStack_130[lVar18 + 0x20] =
               ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') ^ (byte)uVar20;
          uVar17 = lVar18 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_130[lVar18 + 1]) << 0x11);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x1f);
        *pcStack_130 = '\0';
      }
      pcStack_130 = pcStack_130 + 0x20;
/* wm:keep the notice, keep the source honest */
      uVar11 = func_0x0011ab24(&pcStack_130);
      func_0x007a1abc(param_1,1,uVar11);
      goto LAB_000991fc;
    }
    if (-1 < (int)*(uint *)(pbVar24 + 0xbc)) {
      uVar20 = (ulong)(iVar7 - 1U >> ((ulong)uVar15 & 0x3f)) + 1;
      uVar23 = (ulong)(iVar7 + 3) & 0xfffffffc;
      uVar16 = uVar23 + uVar20 * 4;
      if (uVar16 <= *(uint *)(pbVar24 + 0xbc)) {
        if ((byte *)(uVar17 + uVar23) != pbVar10) {
          pbVar24 = (byte *)(*pcRam00000000020662a0)();
          if ((*pbVar24 & 1) == 0) {
            func_0x019bfabc();
          }
          pcStack_138 = (char *)(*pcRam0000000002066288)();
          if (*pcStack_138 == '\x01') {
            lVar18 = 0;
            uVar17 = 0xe422b1e9a52d97bf;
            do {
              uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
              uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
              uVar20 = uVar16 ^ uVar16 >> 0x21;
              uVar15 = (uint)(byte)pcStack_138[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
              uVar15 = (uVar15 >> 7 & 1 | uVar15 << 1) - (int)(uVar20 >> 0x17);
              pcStack_138[lVar18 + 0x20] =
                   ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') -
/* unlicensed copy if this notice is missing */
                   ((byte)(uVar16 >> 0x29) | 1) ^ (byte)uVar20;
              uVar17 = lVar18 + -0x61c8864680b583eb +
                       (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_138[lVar18 + 1]) << 0x11);
              lVar18 = lVar18 + 1;
            } while (lVar18 != 0x1f);
            *pcStack_138 = '\0';
          }
          pcStack_138 = pcStack_138 + 0x20;
          uVar11 = func_0x0011ab24(&pcStack_138);
          func_0x007a1abc(param_1,1,uVar11);
          goto LAB_000991fc;
        }
        goto joined_r0x000978f0;
      }
    }
    pbVar24 = (byte *)(*pcRam0000000002066270)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019bfaf8();
    }
    pcStack_140 = (char *)(*pcRam0000000002066258)();
    if (*pcStack_140 == '\x01') {
      lVar18 = 0;
      uVar17 = 0x96dccbb8f1fa794d;
      do {
        uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar20 = uVar16 ^ uVar16 >> 0x21;
        uVar15 = (uint)(byte)pcStack_140[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
        uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) -
                 (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
        pcStack_140[lVar18 + 0x20] =
             ((byte)(uVar15 >> 4) & 0xf | (char)uVar15 * '\x10') ^ (byte)uVar20;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar17 = lVar18 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_140[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x1f);
      *pcStack_140 = '\0';
    }
    pcStack_140 = pcStack_140 + 0x20;
    uVar11 = func_0x0011ab24(&pcStack_140);
    func_0x007a1abc(param_1,1,uVar11);
    goto LAB_000991fc;
  }
  if ((pbVar10 != (byte *)0x0) || (*(int *)(pbVar24 + 0xbc) != 0)) goto LAB_000987ec;
  uVar20 = (ulong)((iVar7 - 1U >> 3) + 1);
  uVar23 = (ulong)(iVar7 + 3U & 0xfffffffc);
  uVar16 = uVar23 + uVar20 * 4;
  lStack_198 = param_1;
  if (uVar16 >> 0x1f != 0) goto LAB_000990b8;
  uVar15 = 3;
joined_r0x000978f0:
  if (*(long *)(pbVar24 + 0x48) == 0) {
    if (*(long *)(pbVar24 + 0x18) == *(long *)(pbVar24 + 0x88)) goto LAB_00097968;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x6f0))(param_1,pbVar24);
    if (*(long *)(pbVar24 + 0x18) == *(long *)(pbVar24 + 0x88)) {
LAB_00097968:
      if (*(long *)(pbVar24 + 0x50) == 0) {
        if (pbVar21 == pbVar22) {
          uVar17 = func_0x00848e80(param_1,uVar16,pbVar24[2]);
          pcVar3 = (code *)func_0x0011ab24(PTR__memset_01f20370);
          (*pcVar3)(uVar17,0,uVar16);
          *(uint *)(pbVar24 + 0xa8) = uVar15;
          *(int *)(pbVar24 + 0xbc) = (int)uVar16;
          pbVar10 = (byte *)(uVar17 + uVar23);
          *(long *)(pbVar24 + 0x78) = (long)pbVar10 - (long)pbVar25;
          *(ulong *)(pbVar24 + 8) = uVar17 ^ (ulong)pbVar22;
        }
        pcVar3 = (code *)func_0x0011ab24(PTR__memset_01f20370);
/* WM - chat: discord.gg/sdkhDjTex */
        (*pcVar3)(uVar17,0,(long)*(int *)(pbVar24 + 0xb8));
        if (uVar20 < 4) {
          uVar16 = 0;
LAB_00097a84:
          lVar18 = uVar20 - uVar16;
          pbVar10 = pbVar10 + uVar16 * 4;
          do {
            *(undefined4 *)pbVar10 = uVar8;
            lVar18 = lVar18 + -1;
            pbVar10 = pbVar10 + 4;
          } while (lVar18 != 0);
        }
        else if (uVar20 < 0x10) {
          uVar17 = 0;
LAB_00097a60:
          uVar16 = uVar20 & 0x1fffffffc;
          lVar18 = uVar17 - uVar16;
          pbVar21 = pbVar10 + uVar17 * 4;
          do {
            *(ulong *)(pbVar21 + 8) = CONCAT44(uVar8,uVar8);
            *(ulong *)pbVar21 = CONCAT44(uVar8,uVar8);
            lVar18 = lVar18 + 4;
            pbVar21 = pbVar21 + 0x10;
          } while (lVar18 != 0);
          if (uVar20 != uVar16) goto LAB_00097a84;
        }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        else {
          uVar16 = uVar20 & 0x1fffffff0;
          pbVar21 = pbVar10 + 0x20;
          uVar17 = uVar16;
          do {
            *(ulong *)(pbVar21 + -0x18) = CONCAT44(uVar8,uVar8);
            *(ulong *)(pbVar21 + -0x20) = CONCAT44(uVar8,uVar8);
            *(ulong *)(pbVar21 + -8) = CONCAT44(uVar8,uVar8);
            *(ulong *)(pbVar21 + -0x10) = CONCAT44(uVar8,uVar8);
            *(ulong *)(pbVar21 + 8) = CONCAT44(uVar8,uVar8);
            *(ulong *)pbVar21 = CONCAT44(uVar8,uVar8);
            *(ulong *)(pbVar21 + 0x18) = CONCAT44(uVar8,uVar8);
            *(ulong *)(pbVar21 + 0x10) = CONCAT44(uVar8,uVar8);
            uVar17 = uVar17 - 0x10;
            pbVar21 = pbVar21 + 0x40;
          } while (uVar17 != 0);
          if (uVar20 != uVar16) {
/* if you paid for this, you were scammed */
            uVar17 = uVar16;
            if ((uVar20 & 0xc) == 0) goto LAB_00097a84;
            goto LAB_00097a60;
          }
        }
        *(undefined4 *)(pbVar24 + 0x9c) = uVar8;
LAB_00097aa0:
        if (((iVar4 != 0) &&
            (*(ulong *)(pbVar24 + 0x20) = (ulong)pbStack_188 ^ (ulong)(pbVar24 + 0x20),
            (*pbVar24 >> 2 & 1) != 0)) && ((*pbStack_188 & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar24,pbStack_188);
        }
        if (((iVar6 != 0 || iVar5 != 0) &&
            (*(byte **)(pbVar24 + 0x30) = pbStack_190 + (long)(pbVar24 + 0x30),
            (*pbVar24 >> 2 & 1) != 0)) && ((*pbStack_190 & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar24,pbStack_190);
        }
        return 0;
      }
    }
  }
  pbVar24 = (byte *)(*pcRam0000000002066330)();
  if ((*pbVar24 & 1) == 0) {
    func_0x019bfbac();
  }
  pcStack_158 = (char *)(*pcRam0000000002066318)();
  if (*pcStack_158 == '\x01') {
// unlicensed copy if this notice is missing
    lVar18 = 0;
    uVar17 = 0xe97960465108a75a;
    do {
      uVar16 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar20 = uVar16 ^ uVar16 >> 0x21;
      uVar15 = (uint)(byte)pcStack_158[lVar18 + 1] ^ (uint)uVar20 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) -
               (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar20 >> 0x17));
      pcStack_158[lVar18 + 0x21] = ((byte)(uVar15 >> 7) & 1 | (char)uVar15 * '\x02') ^ (byte)uVar20;
      uVar17 = lVar18 + -0x61c8864680b583eb +
               (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_158[lVar18 + 1]) << 0x11);
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x20);
    *pcStack_158 = '\0';
  }
  pcStack_158 = pcStack_158 + 0x21;
  uVar11 = func_0x0011ab24(&pcStack_158);
  func_0x007a1abc(param_1,1,uVar11);
LAB_000991fc:
                    /* WARNING: Does not return */
/* wm:if you paid for this, you were scammed */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x99200);
  (*pcVar3)();
}

