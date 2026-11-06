/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xf6bf4:07ef611416
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000f6bf4(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 ****ppppuVar15;
  char cVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  long lVar25;
  undefined8 *******pppppppuVar26;
  int iVar27;
  int iVar28;
  undefined8 *****pppppuVar29;
  undefined8 ******ppppppuVar30;
  undefined8 *******pppppppuVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *apcStack_160 [2];
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char *apcStack_130 [2];
/* wm:donate: donate/README.md */
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******apppppppuStack_90 [2];
  
  iVar6 = func_0x00791efc(param_1,1);
  if (iVar6 == 0) {
    pbVar8 = (byte *)(*pcRam000000000206c060)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c75a8();
    }
    pcStack_178 = (char *)(*pcRam000000000206c048)();
    if (*pcStack_178 == '\x01') {
      uVar1 = (byte)pcStack_178[1] ^ 0x4c263558;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x4a7c9699;
      pcStack_178[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x9f ^ 0x9b;
      uVar22 = (((ulong)(byte)pcStack_178[1] ^ 0x849d76836e89706f) << 0x11 | 0x1093a) +
               0x9e3779b97f4a7c15;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[2] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_178[0xb] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_178[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[3] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_178[0xc] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_178[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[4] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_178[0xd] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_178[4]) << 0x11) + 0x9e3779b97f4a7c18;
// WM - no support for modified copies
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[5] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_178[0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_178[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[6] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_178[0xf] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_178[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[7] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_178[0x10] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_178[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[8] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_178[0x11] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
/* wm:do not claim this as your own */
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_178[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar22 ^ uVar22 >> 0x21;
      uVar1 = (uint)(byte)pcStack_178[9] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17);
      pcStack_178[0x12] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar22 >> 0x29) | 1) ^
           (byte)uVar23;
      *pcStack_178 = '\0';
    }
    pcStack_178 = pcStack_178 + 10;
    uVar11 = func_0x0011ab24(&pcStack_178);
    func_0x007a1ba8(param_1,1,uVar11);
LAB_000f8fec:
    pbVar8 = (byte *)(*pcRam000000000206c0c0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c7064();
    }
    pcStack_f0 = (char *)(*pcRam000000000206c0a8)();
    if (*pcStack_f0 == '\x01') {
      lVar17 = 0;
      uVar22 = 0x6b2da51254d8cc2f;
      do {
        uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
/* origin: github.com/pengussy - github.com/pengussy */
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar23 ^ uVar23 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17) ^
                ((uint)(uVar23 >> 0x29) | 1);
        pcStack_f0[lVar17 + 0x30] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar24;
        uVar22 = lVar17 + -0x61c8864680b583eb +
                 (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_f0[lVar17 + 1]) << 0x11);
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x2f);
      *pcStack_f0 = '\0';
    }
    pcStack_f0 = pcStack_f0 + 0x30;
    func_0x0011ab24(&pcStack_f0);
    func_0x007a1b5c(param_1,"%s");
  }
  else {
    pcVar7 = (char *)func_0x007a25b0(param_1,1);
    pbVar8 = (byte *)(*pcRam000000000206c090)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c7028();
    }
    pcStack_e8 = (char *)(*pcRam000000000206c078)();
    if (*pcStack_e8 == '\x01') {
      lVar17 = 0;
      uVar22 = 0x63b91b0ecad62adf;
      do {
        uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar23 ^ uVar23 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar24 >> 0x17) ^
                ((uint)(uVar23 >> 0x29) | 1);
        pcStack_e8[lVar17 + 0x11] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar24;
        uVar22 = lVar17 + -0x61c8864680b583eb +
                 (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_e8[lVar17 + 1]) << 0x11);
/* WM - unlicensed copy if this notice is missing */
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x10);
      *pcStack_e8 = '\0';
    }
    pcStack_e8 = pcStack_e8 + 0x11;
    pcVar9 = (char *)func_0x0011ab24(&pcStack_e8);
    cVar16 = *pcVar7;
    if (cVar16 != '\0') {
      do {
        pcVar7 = pcVar7 + 1;
        if (cVar16 != *pcVar9) break;
        pcVar9 = pcVar9 + 1;
        cVar16 = *pcVar7;
      } while (cVar16 != '\0');
    }
    if (cVar16 != *pcVar9) goto LAB_000f8fec;
    plVar10 = (long *)func_0x007926a8(param_1,1);
    plVar10 = (long *)*plVar10;
    lVar17 = *plVar10;
    plStack_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    if (plVar10[4] == 0) {
LAB_000f87e0:
      pbVar8 = (byte *)(*pcRam000000000206c0f0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c756c();
// WM - donate: donate/README.md
      }
      pcStack_170 = (char *)(*pcRam000000000206c0d8)();
      if (*pcStack_170 == '\x01') {
        lVar17 = 0;
        uVar22 = 0xd8261bbaab1b6546;
        do {
          uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
          uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
          uVar24 = uVar23 ^ uVar23 >> 0x21;
          uVar1 = (uint)(byte)pcStack_170[lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar24 >> 0x17);
          pcStack_170[lVar17 + 0x16] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar23 >> 0x29) | 1) ^
               (byte)uVar24;
          uVar22 = lVar17 + -0x61c8864680b583eb +
                   (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_170[lVar17 + 1]) << 0x11);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x15);
        *pcStack_170 = '\0';
      }
      pcStack_170 = pcStack_170 + 0x16;
      func_0x0011ab24(&pcStack_170);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_000f9620;
    }
    plStack_c0 = (long *)__ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_c0 == (long *)0x0) goto LAB_000f87e0;
/* found on a paste site? it was re-uploaded illegally */
    plVar10 = (long *)plVar10[3];
    plStack_c8 = plVar10;
    if (plVar10 == (long *)0x0) goto LAB_000f87e0;
    uVar11 = func_0x00791650(param_1);
    pbVar8 = (byte *)(*pcRam000000000206c120)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c70a0();
    }
    pcStack_f8 = (char *)(*pcRam000000000206c108)();
    if (*pcStack_f8 == '\x01') {
      uVar1 = (byte)pcStack_f8[1] ^ 0xf15d443c;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x6dfb9be3;
      pcStack_f8[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x7f ^ 0xff;
      uVar22 = (((ulong)(byte)pcStack_f8[1] ^ 0x92212acf5ff4ef8e) << 0x11 | 0x12442) +
               0x9e3779b97f4a7c15;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[2] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_f8[7] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
// WM - found on a paste site? it was re-uploaded illegally
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[3] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_f8[8] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[4] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
      pcStack_f8[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_f8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar22 ^ uVar22 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[5] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17);
      pcStack_f8[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar22 >> 0x29) | 1) ^
           (byte)uVar23;
// WM - watermarked copy - do not remove
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 6;
    uVar12 = func_0x0011ab24(&pcStack_f8);
    func_0x007935a0(param_1,0xffffd8ee,uVar12);
    pbVar8 = (byte *)(*pcRam000000000206c150)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c70dc();
    }
    pcStack_100 = (char *)(*pcRam000000000206c138)();
    if (*pcStack_100 == '\x01') {
      uVar1 = (byte)pcStack_100[1] ^ 0x5ef22dd7;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x6a511abe;
      pcStack_100[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0x95 ^ 0x14;
      uVar22 = (((ulong)(byte)pcStack_100[1] ^ 0x38822a1f78e4b77f) << 0x11 | 0x7104) +
               0x9e3779b97f4a7c15;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
/* wm:proprietary - see LICENSE - do not sell */
      uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0xd] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[4] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0xf] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[5] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0x10] =
/* keep the notice, keep the source honest - github.com/pengussy */
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[6] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0x11] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[7] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0x12] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[8] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0x13] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
/* watermarked copy - do not remove */
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[9] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0x14] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[10] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar24 >> 0x17);
      pcStack_100[0x15] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_100[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar22 ^ uVar22 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[0xb] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar23 >> 0x17);
      pcStack_100[0x16] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar22 >> 0x29) | 1) ^
           (byte)uVar23;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 0xc;
    uVar12 = func_0x0011ab24(&pcStack_100);
    func_0x007935a0(param_1,0xffffffff,uVar12);
    func_0x00791ab0(param_1,0xfffffffe);
    pbVar8 = (byte *)(*pcRam000000000206c180)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c7118();
    }
    pcStack_108 = (char *)(*pcRam000000000206c168)();
    if (*pcStack_108 == '\x01') {
      lVar18 = 0;
      uVar22 = 0x90db346131e2bfe6;
      do {
        uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar23 ^ uVar23 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[lVar18 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar24 >> 0x17) ^
                ((uint)(uVar23 >> 0x29) | 1);
        pcStack_108[lVar18 + 0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar24;
        uVar22 = lVar18 + -0x61c8864680b583eb +
                 (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_108[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0xe);
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 0xf;
    uVar12 = func_0x0011ab24(&pcStack_108);
    func_0x00792f00(param_1,uVar12);
    iVar6 = func_0x00794a14(param_1,2,1,0);
    if ((iVar6 == 0) && (iVar6 = func_0x00791efc(param_1,0xffffffff), iVar6 != 0)) {
      pbVar8 = (byte *)(*pcRam000000000206c1b0)();
/*  proprietary - see LICENSE - do not sell  */
      if ((*pbVar8 & 1) == 0) {
        func_0x019c7154();
      }
      pcStack_110 = (char *)(*pcRam000000000206c198)();
      if (*pcStack_110 == '\x01') {
        lVar18 = 0;
        uVar22 = 0x8c802460ccf56372;
        do {
          uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
          uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
          uVar24 = uVar23 ^ uVar23 >> 0x21;
          uVar1 = (uint)(byte)pcStack_110[lVar18 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                  (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
          pcStack_110[lVar18 + 0x12] =
               ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar24;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          uVar22 = lVar18 + -0x61c8864680b583eb +
                   (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_110[lVar18 + 1]) << 0x11);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0x11);
        *pcStack_110 = '\0';
      }
      pcStack_110 = pcStack_110 + 0x12;
      uVar12 = func_0x0011ab24(&pcStack_110);
      func_0x007935a0(param_1,0xffffffff,uVar12);
      iVar6 = func_0x00791efc(param_1,0xffffffff);
      if (iVar6 == 0) goto LAB_000f7614;
      plVar13 = (long *)func_0x007926a8(param_1,0xffffffff);
      lVar18 = *plVar13;
    }
    else {
LAB_000f7614:
      lVar18 = 0;
    }
    func_0x00791660(param_1,uVar11);
    if (((lVar18 == 0) || (pcRam0000000001f26ff0 == (code *)0x0)) ||
       (uVar22 = (*pcRam0000000001f26ff0)(lVar18,plVar10,lVar17), (uVar22 & 1) == 0)) {
/* watermarked copy - do not remove - github.com/pengussy */
      pbVar8 = (byte *)(*pcRam000000000206c1e0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c7190();
      }
      pcStack_118 = (char *)(*pcRam000000000206c1c8)();
      if (*pcStack_118 == '\x01') {
        lVar17 = 0;
        uVar22 = 0x676a0482972e5fe2;
        do {
          uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
          uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
          uVar24 = uVar23 ^ uVar23 >> 0x21;
          uVar1 = (uint)(byte)pcStack_118[lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar24 >> 0x17);
          pcStack_118[lVar17 + 0x1b] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar23 >> 0x29) | 1) ^
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
               (byte)uVar24;
          uVar22 = lVar17 + -0x61c8864680b583eb +
                   (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_118[lVar17 + 1]) << 0x11);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x1a);
        *pcStack_118 = '\0';
      }
      pcStack_118 = pcStack_118 + 0x1b;
      func_0x0011ab24(&pcStack_118);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_000f9620;
    }
    pppppppuStack_e0 = (undefined8 *******)0x0;
    pppppppuStack_d8 = (undefined8 *******)0x0;
    pppppppuStack_d0 = (undefined8 *******)0x0;
    lVar18 = *(long *)(lVar17 + 0x60);
    lVar25 = *(long *)(lVar17 + 0x68);
    lVar19 = lVar25 - lVar18 >> 4;
    if ((ulong)(lVar19 * 0x6db6db6db6db6db7) < 0x41) {
      if (lVar25 == lVar18) {
        if (lVar18 != lVar25) goto LAB_000f7800;
      }
      else {
        pppppppuStack_e0 = (undefined8 *******)__Znwm(lVar19 * 0x6db6db6db6db6db8);
        pppppppuStack_d0 = pppppppuStack_e0 + lVar19 * 0xdb6db6db6db6db7;
        lVar18 = *(long *)(lVar17 + 0x60);
        lVar25 = *(long *)(lVar17 + 0x68);
        pppppppuStack_d8 = pppppppuStack_e0;
        if (lVar18 != lVar25) {
LAB_000f7800:
          pppppppuStack_e0 = pppppppuStack_d8;
          do {
            while( true ) {
              apppppppuStack_90[0] = *(undefined8 ********)(lVar18 + 8);
              uVar22 = func_0x0003c0e8();
              if ((uVar22 & 1) == 0) goto LAB_000f7870;
// WM - do not claim this as your own
              pppppppuStack_a0 = pppppppuStack_d8;
              pppppppuStack_b8 = &pppppppuStack_a0;
              pppppppuStack_b0 = apppppppuStack_90;
              pppppppuStack_a8 = &pppppppuStack_e0;
              if (pppppppuStack_d0 <= pppppppuStack_d8) break;
              pppppppuVar31 = pppppppuStack_d8 + 1;
              *pppppppuStack_d8 = apppppppuStack_90[0];
              lVar18 = lVar18 + 0x70;
              pppppppuStack_d8 = pppppppuVar31;
              if (lVar18 == lVar25) goto LAB_000f7870;
            }
            func_0x0000aad8(&pppppppuStack_b8);
            pppppppuStack_d8 = pppppppuStack_a0;
            lVar18 = lVar18 + 0x70;
          } while (lVar18 != lVar25);
        }
      }
LAB_000f7870:
      iVar28 = (int)uVar11;
      iVar6 = iVar28 + -1;
      if (iVar6 == (int)((ulong)((long)pppppppuStack_d8 - (long)pppppppuStack_e0) >> 3)) {
        pppppppuStack_b8 = (undefined8 *******)0x0;
        pppppppuStack_b0 = (undefined8 *******)0x0;
/* WM - reversing this took months of machine time */
        pppppppuStack_a8 = (undefined8 *******)0x0;
        if (iVar6 != 0) {
          if (iVar28 < 1) {
            FUN_0000abb4();
            goto LAB_000f9620;
          }
          pppppppuStack_b8 = (undefined8 *******)__Znwm((long)iVar6 * 0x50);
          pppppppuStack_a8 = pppppppuStack_b8 + (long)iVar6 * 10;
          pppppppuStack_b0 = pppppppuStack_b8;
          pcVar7 = (char *)(*pcRam000000000206c2b8)();
          pcVar9 = (char *)(*pcRam000000000206c2e8)();
          pcVar14 = (char *)(*pcRam000000000206c318)();
          lVar18 = 0;
          do {
            pppppppuStack_a0 = apppppppuStack_90;
            pppppppuStack_98 = &pppppppuStack_b8;
            apppppppuStack_90[0] = pppppppuStack_b0;
            if (pppppppuStack_b0 < pppppppuStack_a8) {
              pppppppuStack_b0[7] = (undefined8 ******)0x0;
              pppppppuStack_b0[6] = (undefined8 ******)0x0;
              pppppppuStack_b0[9] = (undefined8 ******)0x0;
              pppppppuStack_b0[8] = (undefined8 ******)0x0;
              pppppppuStack_b0[3] = (undefined8 ******)0x0;
              pppppppuStack_b0[2] = (undefined8 ******)0x0;
              pppppppuStack_b0[5] = (undefined8 ******)0x0;
              pppppppuStack_b0[4] = (undefined8 ******)0x0;
              pppppppuStack_b0[1] = (undefined8 ******)0x0;
              *pppppppuStack_b0 = (undefined8 ******)0x0;
// WM - reversing this took months of machine time
              pppppppuVar31 = pppppppuStack_b0 + 10;
            }
            else {
              func_0x00150cb4(&pppppppuStack_a0);
              pppppppuVar31 = apppppppuStack_90[0];
            }
            pppppppuVar26 = pppppppuVar31 + -10;
            pppppppuVar31[-9] = (undefined8 ******)0x0;
            *pppppppuVar26 = (undefined8 ******)0x0;
            pppppppuVar31[-3] = (undefined8 ******)0x0;
            pppppppuVar31[-4] = (undefined8 ******)0x0;
            pppppppuVar31[-1] = (undefined8 ******)0x0;
            pppppppuVar31[-2] = (undefined8 ******)0x0;
            pppppppuVar31[-7] = (undefined8 ******)0x0;
            pppppppuVar31[-8] = (undefined8 ******)0x0;
            pppppppuVar31[-5] = (undefined8 ******)0x0;
            pppppppuVar31[-6] = (undefined8 ******)0x0;
            lVar25 = lVar18 + 2;
            pppppppuStack_b0 = pppppppuVar31;
            uVar22 = (*pcRam0000000001f26ff8)(param_1,lVar25,pppppppuVar26,1);
            if ((uVar22 & 1) == 0) {
              func_0x000f9638(&pppppppuStack_b8);
              pbVar8 = (byte *)(*pcRam000000000206c2a0)();
              if ((*pbVar8 & 1) == 0) {
                func_0x019c72e8();
              }
              apcStack_130[0] = (char *)(*pcRam000000000206c288)();
              if (*apcStack_130[0] == '\x01') {
                lVar17 = 0;
                uVar22 = 0x279f80ac6077e302;
                do {
                  uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                  uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
/* wm:chat: discord.gg/sdkhDjTex */
                  uVar24 = uVar23 ^ uVar23 >> 0x21;
                  uVar1 = (uint)(byte)apcStack_130[0][lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                          (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
                  apcStack_130[0][lVar17 + 0x16] =
                       ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar24;
                  uVar22 = lVar17 + -0x61c8864680b583eb +
                           (uVar22 >> 0x2f | (uVar22 ^ (byte)apcStack_130[0][lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x15);
                *apcStack_130[0] = '\0';
              }
              apcStack_130[0] = apcStack_130[0] + 0x16;
              uVar11 = func_0x0011ab24(apcStack_130);
              func_0x007a1b5c(param_1,uVar11);
              goto LAB_000f9620;
            }
            ppppppuVar30 = pppppppuStack_e0[lVar18];
/* WM - watermarked copy - do not remove */
            if ((*pppppppuVar26 == ppppppuVar30) ||
               (((iVar6 = func_0x00791be4(param_1,lVar25), iVar6 != 4 &&
                 (iVar6 = func_0x00791db8(param_1,lVar25), iVar6 == 0)) &&
                (iVar6 = func_0x00791be4(param_1,lVar25), iVar6 != 1)))) goto LAB_000f82f4;
            pppppuVar29 = ppppppuVar30[1];
            pbVar8 = (byte *)(*pcRam000000000206c2d0)();
            if ((*pbVar8 & 1) == 0) {
              func_0x019c7324();
              cVar16 = *pcVar7;
            }
            else {
              cVar16 = *pcVar7;
            }
            if (cVar16 == '\x01') {
              uVar1 = (byte)pcVar7[1] ^ 0xfc97fad7;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xf9c3f673;
              pcVar7[7] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x14;
              uVar22 = (((ulong)(byte)pcVar7[1] ^ 0x488de165b127e91f) << 0x11 | 0x911b) +
                       0x9e3779b97f4a7c15;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar1 = (uint)(byte)pcVar7[2] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
              pcVar7[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar7[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar1 = (uint)(byte)pcVar7[3] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
              pcVar7[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar7[3]) << 0x11) + 0x9e3779b97f4a7c17;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar1 = (uint)(byte)pcVar7[4] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
              pcVar7[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar7[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
              uVar24 = uVar23 ^ uVar23 >> 0x21;
              uVar1 = (uint)(byte)pcVar7[5] ^ (uint)uVar24 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
              pcVar7[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar24;
              uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar7[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
              uVar23 = uVar22 ^ uVar22 >> 0x21;
              uVar1 = (uint)(byte)pcVar7[6] ^ (uint)uVar23 ^ 0xffffffc3;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
              pcVar7[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar23;
              *pcVar7 = '\0';
            }
            pcStack_138 = pcVar7 + 7;
            uVar11 = func_0x0011ab24(&pcStack_138);
            ppppuVar15 = (undefined8 ****)_strlen();
            if ((long)*(char *)((long)pppppuVar29 + 0x17) < 0) {
              if (ppppuVar15 == pppppuVar29[1]) {
                if (ppppuVar15 == (undefined8 ****)0xffffffffffffffff) {
                  FUN_0001c430();
                  goto LAB_000f9620;
                }
                iVar6 = _memcmp(*pppppuVar29,uVar11);
                if (iVar6 == 0) goto LAB_000f82dc;
              }
LAB_000f7d24:
              pppppuVar29 = ppppppuVar30[1];
/* if you paid for this, you were scammed */
              pbVar8 = (byte *)(*pcRam000000000206c300)();
              if ((*pbVar8 & 1) == 0) {
                func_0x019c7360();
                cVar16 = *pcVar9;
              }
              else {
                cVar16 = *pcVar9;
              }
              if (cVar16 == '\x01') {
                uVar1 = (byte)pcVar9[1] ^ 0xb862a80f;
                uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x6b242371 ^ 0x5ca537;
                pcVar9[5] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x34;
                uVar22 = (((ulong)(byte)pcVar9[1] ^ 0xcaa3c5178b3de64a) << 0x11 | 0x19547) +
                         0x9e3779b97f4a7c15;
                uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                uVar24 = uVar23 ^ uVar23 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[2] ^ (uint)uVar24 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar24 >> 0x17) ^
                        ((uint)(uVar23 >> 0x29) | 1);
                pcVar9[6] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar24;
                uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar9[2]) << 0x11) + 0x9e3779b97f4a7c16;
                uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                uVar24 = uVar23 ^ uVar23 >> 0x21;
// WM - proprietary - see LICENSE - do not sell
                uVar1 = (uint)(byte)pcVar9[3] ^ (uint)uVar24 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar24 >> 0x17) ^
                        ((uint)(uVar23 >> 0x29) | 1);
                pcVar9[7] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar24;
                uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar9[3]) << 0x11) + 0x9e3779b97f4a7c17;
                uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                uVar23 = uVar22 ^ uVar22 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[4] ^ (uint)uVar23 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar23 >> 0x17) ^
                        ((uint)(uVar22 >> 0x29) | 1);
                pcVar9[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar23;
                *pcVar9 = '\0';
              }
              pcStack_140 = pcVar9 + 5;
              uVar11 = func_0x0011ab24(&pcStack_140);
              ppppuVar15 = (undefined8 ****)_strlen();
              if ((long)*(char *)((long)pppppuVar29 + 0x17) < 0) {
                if (ppppuVar15 == pppppuVar29[1]) {
                  if (ppppuVar15 != (undefined8 ****)0xffffffffffffffff) {
                    iVar6 = _memcmp(*pppppuVar29,uVar11);
                    goto joined_r0x000f7f98;
                  }
                  FUN_0001c430();
                  goto LAB_000f9620;
                }
              }
              else if (ppppuVar15 == (undefined8 ****)(long)*(char *)((long)pppppuVar29 + 0x17)) {
                iVar6 = _memcmp(pppppuVar29,uVar11);
// chat: discord.gg/sdkhDjTex
joined_r0x000f7f98:
                if (iVar6 == 0) {
                  iVar6 = func_0x00791be4(param_1,lVar25);
                  if (iVar6 == 3) {
                    dVar32 = (double)func_0x007920a4(param_1,lVar25,0);
                    dVar33 = -0.5;
                    if (0.0 <= dVar32) {
                      dVar33 = 0.5;
                    }
                    dVar34 = (double)(long)(dVar32 + dVar33);
                    bVar2 = true;
                    if (((ulong)ABS(dVar34) < 0x7ff0000000000000) && (bVar2 = false, !NAN(dVar34)))
                    {
                      bVar2 = dVar34 < -2147483648.0;
                    }
                    bVar3 = false;
                    bVar4 = false;
                    bVar5 = false;
                    if (!bVar2) {
                      bVar3 = false;
                      bVar4 = false;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                      bVar5 = true;
                      if (!NAN(dVar34)) {
                        bVar3 = dVar34 < 2147483647.0;
                        bVar4 = dVar34 == 2147483647.0;
                        bVar5 = false;
                      }
                    }
                    iVar27 = -0x80000000;
                    if (bVar4 || bVar3 != bVar5) {
                      iVar27 = (int)(dVar32 + dVar33);
                    }
                  }
                  else {
                    iVar27 = 0;
                  }
                  (*pcRam0000000001f27008)(pppppppuVar26);
                  if ((iVar6 == 3) && (*pppppppuVar26 == ppppppuVar30)) {
                    *(int *)(pppppppuVar31 + -8) = iVar27;
                  }
                  goto LAB_000f82f4;
                }
              }
              pppppuVar29 = ppppppuVar30[1];
              pbVar8 = (byte *)(*pcRam000000000206c330)();
              if ((*pbVar8 & 1) == 0) {
                func_0x019c739c();
                cVar16 = *pcVar14;
              }
              else {
                cVar16 = *pcVar14;
              }
              if (cVar16 == '\x01') {
                uVar1 = (byte)pcVar14[1] ^ 0x4d8096d3;
/* WM - proprietary - see LICENSE - do not sell */
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x90fb3ef3;
                pcVar14[7] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0x10;
                uVar22 = (((ulong)(byte)pcVar14[1] ^ 0xb3f92c4e24a9d6b0) << 0x11 | 0x167f2) +
                         0x9e3779b97f4a7c15;
                uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                uVar24 = uVar23 ^ uVar23 >> 0x21;
                uVar1 = (uint)(byte)pcVar14[2] ^ (uint)uVar24 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                        (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
                pcVar14[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar24;
                uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar14[2]) << 0x11) + 0x9e3779b97f4a7c16
                ;
                uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                uVar24 = uVar23 ^ uVar23 >> 0x21;
                uVar1 = (uint)(byte)pcVar14[3] ^ (uint)uVar24 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                        (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
                pcVar14[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar24;
                uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar14[3]) << 0x11) + 0x9e3779b97f4a7c17
                ;
                uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                uVar24 = uVar23 ^ uVar23 >> 0x21;
                uVar1 = (uint)(byte)pcVar14[4] ^ (uint)uVar24 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                        (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
                pcVar14[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar24;
                uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar14[4]) << 0x11) + 0x9e3779b97f4a7c18
                ;
/* reversing this took months of machine time - github.com/pengussy */
                uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                uVar24 = uVar23 ^ uVar23 >> 0x21;
                uVar1 = (uint)(byte)pcVar14[5] ^ (uint)uVar24 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                        (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
                pcVar14[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar24;
                uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar14[5]) << 0x11) + 0x9e3779b97f4a7c19
                ;
                uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
                uVar23 = uVar22 ^ uVar22 >> 0x21;
                uVar1 = (uint)(byte)pcVar14[6] ^ (uint)uVar23 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                        (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
                pcVar14[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar23;
                *pcVar14 = '\0';
              }
              pcStack_148 = pcVar14 + 7;
              uVar11 = func_0x0011ab24(&pcStack_148);
              ppppuVar15 = (undefined8 ****)_strlen();
              if ((long)*(char *)((long)pppppuVar29 + 0x17) < 0) {
                if (ppppuVar15 == pppppuVar29[1]) {
                  if (ppppuVar15 != (undefined8 ****)0xffffffffffffffff) {
                    iVar6 = _memcmp(*pppppuVar29,uVar11);
                    goto joined_r0x000f82cc;
                  }
                  FUN_0001c430();
                  goto LAB_000f9620;
                }
              }
              else if (ppppuVar15 == (undefined8 ****)(long)*(char *)((long)pppppuVar29 + 0x17)) {
                iVar6 = _memcmp(pppppuVar29,uVar11);
// stripping the watermark breaks the license
joined_r0x000f82cc:
                if (iVar6 == 0) {
                  puVar20 = (undefined8 *)0x1f27010;
                  goto LAB_000f82e8;
                }
              }
            }
            else {
              if ((ppppuVar15 != (undefined8 ****)(long)*(char *)((long)pppppuVar29 + 0x17)) ||
                 (iVar6 = _memcmp(pppppuVar29,uVar11), iVar6 != 0)) goto LAB_000f7d24;
LAB_000f82dc:
              puVar20 = (undefined8 *)0x1f27000;
LAB_000f82e8:
              (*(code *)*puVar20)(pppppppuVar26);
            }
LAB_000f82f4:
/* more drops soon - github.com/pengussy - github.com/pengussy */
            if (*pppppppuVar26 != ppppppuVar30) {
              func_0x000f9638(&pppppppuStack_b8);
              pbVar8 = (byte *)(*pcRam000000000206c360)();
              if ((*pbVar8 & 1) == 0) {
                func_0x019c73d8();
              }
              pcStack_150 = (char *)(*pcRam000000000206c348)();
              if (*pcStack_150 == '\x01') {
                lVar17 = 0;
                uVar22 = 0xe9d9961ff2064ca4;
                do {
                  uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                  uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                  uVar24 = uVar23 ^ uVar23 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_150[lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar24 >> 0x17) ^
                          ((uint)(uVar23 >> 0x29) | 1);
                  pcStack_150[lVar17 + 0x23] =
                       ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar24;
                  uVar22 = lVar17 + -0x61c8864680b583eb +
                           (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_150[lVar17 + 1]) << 0x11);
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 0x22);
                *pcStack_150 = '\0';
              }
              pcStack_150 = pcStack_150 + 0x23;
              uVar11 = func_0x0011ab24(&pcStack_150);
              func_0x007a1b5c(param_1,uVar11);
              goto LAB_000f9620;
            }
/* reversing this took months of machine time */
            lVar18 = lVar18 + 1;
          } while ((ulong)(iVar28 + 1) - 2 != lVar18);
        }
        pppppppuStack_a0 = (undefined8 *******)0x0;
        pppppppuStack_98 = (undefined8 *******)0x0;
        lVar18 = *plVar10;
        iVar6 = func_0x0003c0e8(lVar18);
        if ((iVar6 != 0) && (pcVar21 = *(code **)(lVar18 + 0x20), pcVar21 != (code *)0x0)) {
          (*pcVar21)(plVar10,lVar17,&pppppppuStack_b8,&pppppppuStack_a0);
          pppppppuVar26 = pppppppuStack_b0;
          for (pppppppuVar31 = pppppppuStack_b8; pppppppuVar31 != pppppppuVar26;
              pppppppuVar31 = pppppppuVar31 + 10) {
            if ((pppppppuVar31[1] != (undefined8 ******)0x0) &&
               (pppppuVar29 = pppppppuVar31[1][2], pppppuVar29 != (undefined8 *****)0x0)) {
              (*(code *)pppppuVar29)(pppppppuVar31 + 2);
            }
            *pppppppuVar31 = (undefined8 ******)0x0;
            pppppppuVar31[1] = (undefined8 ******)0x0;
          }
          if (pppppppuStack_b8 != (undefined8 *******)0x0) {
            pppppppuStack_b0 = pppppppuStack_b8;
            __ZdlPv(pppppppuStack_b8);
          }
          if (pppppppuStack_e0 != (undefined8 *******)0x0) {
            pppppppuStack_d8 = pppppppuStack_e0;
            __ZdlPv();
          }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          plVar10 = plStack_c0;
          if (plStack_c0 != (long *)0x0) {
            LOAcquire();
            lVar17 = plStack_c0[1];
            plStack_c0[1] = lVar17 + -1;
            LORelease();
            if (lVar17 == 0) {
              (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          return 0;
        }
        func_0x000f9638(&pppppppuStack_b8,lVar17);
        pbVar8 = (byte *)(*pcRam000000000206c390)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c74f4();
        }
        apcStack_160[0] = (char *)(*pcRam000000000206c378)();
        if (*apcStack_160[0] == '\x01') {
          lVar17 = 0;
          uVar22 = 0x7cca09bd2c7c88fe;
          do {
            uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar1 = (uint)(byte)apcStack_160[0][lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
            apcStack_160[0][lVar17 + 0x16] =
                 ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar23 >> 0x29) | 1) ^
                 (byte)uVar24;
            uVar22 = lVar17 + -0x61c8864680b583eb +
                     (uVar22 >> 0x2f | (uVar22 ^ (byte)apcStack_160[0][lVar17 + 1]) << 0x11);
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x15);
          *apcStack_160[0] = '\0';
        }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        apcStack_160[0] = apcStack_160[0] + 0x16;
        func_0x0011ab24(apcStack_160);
        func_0x007a1b5c(param_1,"%s");
      }
      else {
        pbVar8 = (byte *)(*pcRam000000000206c240)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019c71cc();
        }
        pcStack_120 = (char *)(*pcRam000000000206c228)();
        if (*pcStack_120 == '\x01') {
          lVar17 = 0;
          uVar22 = 0xfefa103eae62ca0a;
          do {
            uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar1 = (uint)(byte)pcStack_120[lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar24 >> 0x17);
            pcStack_120[lVar17 + 0x1f] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar23 >> 0x29) | 1) ^
                 (byte)uVar24;
            uVar22 = lVar17 + -0x61c8864680b583eb +
                     (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_120[lVar17 + 1]) << 0x11);
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x1e);
          *pcStack_120 = '\0';
        }
        pcStack_120 = pcStack_120 + 0x1f;
        uVar11 = func_0x0011ab24(&pcStack_120);
// found on a paste site? it was re-uploaded illegally
        func_0x007a1b5c(param_1,uVar11);
      }
      goto LAB_000f9620;
    }
  }
  pbVar8 = (byte *)(*pcRam000000000206c210)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c7530();
  }
  pcStack_168 = (char *)(*pcRam000000000206c1f8)();
  if (*pcStack_168 == '\x01') {
    lVar17 = 0;
    uVar22 = 0x1046a5b83e095796;
    do {
      uVar23 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar1 = (uint)(byte)pcStack_168[lVar17 + 1] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
      pcStack_168[lVar17 + 0x1a] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar24;
      uVar22 = lVar17 + -0x61c8864680b583eb +
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
               (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_168[lVar17 + 1]) << 0x11);
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0x19);
    *pcStack_168 = '\0';
  }
  pcStack_168 = pcStack_168 + 0x1a;
  func_0x0011ab24(&pcStack_168);
  func_0x007a1b5c(param_1,"%s");
LAB_000f9620:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0xf9624);
  (*pcVar21)();
}

