/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xbdee4:ddcdda0d21
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x000be004) */

undefined8 FUN_000bdee4(undefined8 param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 ****ppppuVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 ***pppuVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  char *pcStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ****ppppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar4 = func_0x00791efc(param_1,1);
  if (iVar4 == 0) {
    pbVar9 = (byte *)(*pcRam00000000020687f0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c2a8c();
    }
    pcStack_108 = (char *)(*pcRam00000000020687d8)();
    if (*pcStack_108 == '\x01') {
      uVar1 = (byte)pcStack_108[1] ^ 0x40f74a6e;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xdf482a82;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      pcStack_108[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - 0x2d ^ 0xad;
      uVar7 = (((ulong)(byte)pcStack_108[1] ^ 0xe840d8775b8747b0) << 0x11 | 0x1d081) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
      pcStack_108[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
      pcStack_108[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
/*  origin: github.com/pengussy  */
           (byte)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
      pcStack_108[0xd] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
      pcStack_108[0xe] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[6] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
      pcStack_108[0xf] =
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
      pcStack_108[0x10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[8] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
      pcStack_108[0x11] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_108[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_108[0x12] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar10;
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 10;
    uVar8 = func_0x0011ab24(&pcStack_108);
    func_0x007a1ba8(param_1,1,uVar8);
LAB_000be65c:
/* more drops soon - github.com/pengussy */
    pbVar9 = (byte *)(*pcRam0000000002068820)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c2a50();
    }
    pcStack_100 = (char *)(*pcRam0000000002068808)();
    if (*pcStack_100 == '\x01') {
      uVar1 = (byte)pcStack_100[1] ^ 0xf918873e;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x633399f3 ^ 0x4e2733;
      pcStack_100[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 3;
      uVar7 = (((ulong)(byte)pcStack_100[1] ^ 0x71148ba069d141c1) << 0x11 | 0xe229) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_100[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_100[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
/* unlicensed copy if this notice is missing */
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_100[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_100[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[6] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_100[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_100[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_100[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1)
      ;
      pcStack_100[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 8;
    uVar8 = func_0x0011ab24(&pcStack_100);
    func_0x007a1ba8(param_1,2,uVar8);
// found on a paste site? it was re-uploaded illegally
LAB_000be9ac:
    pbVar9 = (byte *)(*pcRam0000000002068850)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c2a14();
    }
    pcStack_f8 = (char *)(*pcRam0000000002068838)();
    if (*pcStack_f8 == '\x01') {
      lVar16 = 0;
      uVar7 = 0xe0237ac6c3e946c6;
      do {
        uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f8[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_f8[lVar16 + 0x1f] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
        uVar7 = lVar16 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f8[lVar16 + 1]) << 0x11);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x1e);
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 0x1f;
    func_0x0011ab24(&pcStack_f8);
    func_0x007a1b5c(param_1,"%s");
LAB_000beaf4:
    pbVar9 = (byte *)(*pcRam0000000002068880)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c2924();
    }
    pcStack_d8 = (char *)(*pcRam0000000002068868)();
/* wm:reversing this took months of machine time */
    if (*pcStack_d8 == '\x01') {
      lVar16 = 0;
      uVar7 = 0xc4b891399f206b8c;
      do {
        uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d8[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_d8[lVar16 + 0x19] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar12;
        uVar7 = lVar16 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_d8[lVar16 + 1]) << 0x11);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x18);
      *pcStack_d8 = '\0';
    }
/* wm:no support for modified copies */
    pcStack_d8 = pcStack_d8 + 0x19;
    func_0x0011ab24(&pcStack_d8);
    func_0x007a1b5c(param_1,"%s");
LAB_000bec3c:
    pbVar9 = (byte *)(*pcRam00000000020688b0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c2960();
    }
    pcStack_e0 = (char *)(*pcRam0000000002068898)();
    if (*pcStack_e0 == '\x01') {
      lVar16 = 0;
      uVar7 = 0x7ad772f2823f2bfd;
      do {
        uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e0[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_e0[lVar16 + 0x19] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar12
        ;
        uVar7 = lVar16 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e0[lVar16 + 1]) << 0x11);
/*  stripping the watermark breaks the license  */
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x18);
      *pcStack_e0 = '\0';
    }
    pcStack_e0 = pcStack_e0 + 0x19;
    func_0x0011ab24(&pcStack_e0);
    func_0x007a1b5c(param_1,"%s");
LAB_000bed84:
    pbVar9 = (byte *)(*pcRam00000000020688e0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c29d8();
    }
    pcStack_f0 = (char *)(*pcRam00000000020688c8)();
    if (*pcStack_f0 == '\x01') {
      lVar16 = 0;
      uVar7 = 0x2bb6efe61036203d;
      do {
        uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_f0[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_f0[lVar16 + 0x19] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
        uVar7 = lVar16 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_f0[lVar16 + 1]) << 0x11);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x18);
/* wm:if you paid for this, you were scammed */
      *pcStack_f0 = '\0';
    }
    pcStack_f0 = pcStack_f0 + 0x19;
    func_0x0011ab24(&pcStack_f0);
    func_0x007a1b5c(param_1,"%s");
  }
  else {
    iVar4 = func_0x00791e54(param_1,2);
    if (iVar4 == 0) goto LAB_000be65c;
    puVar5 = (ulong *)func_0x007926a8(param_1,1);
    pppuVar13 = (undefined8 ***)*puVar5;
    ppppuVar6 = (undefined8 ****)func_0x0003c1d0(param_1,pppuVar13,0);
    if (*(long *)(lRam0000000001f26680 + (long)ppppuVar6) == 0) goto LAB_000be9ac;
    lVar16 = (long)*(int *)(lRam0000000001f26690 + *(long *)(lRam0000000001f26680 + (long)ppppuVar6)
                           );
    plVar14 = *(long **)(lRam0000000001f266a0 + (long)ppppuVar6);
    uVar7 = func_0x0003c0e8(plVar14);
    if ((uVar7 & 1) == 0) goto LAB_000beaf4;
    lVar15 = *plVar14;
    uVar7 = func_0x0003c0e8(lVar15);
    if ((uVar7 & 1) == 0) goto LAB_000bec3c;
    pcVar11 = *(code **)(lRam0000000001f266b0 + lVar15);
    if (pcVar11 == (code *)0x0) goto LAB_000bed84;
    *puRam0000000001f26960 = 0;
    if (lRam0000000001f26620 == lVar16) {
      (*pcVar11)(&ppppuStack_b0,plVar14,pppuVar13);
      pppuStack_c0 = pppuStack_a0;
      pppuStack_c8 = pppuStack_a8;
      ppppuStack_d0 = ppppuStack_b0;
      pppuStack_a0 = (undefined8 ***)0x0;
      pppuStack_a8 = (undefined8 ***)0x0;
      ppppuStack_b0 = (undefined8 ****)0x0;
      pppuVar13 = pppuStack_c8;
      ppppuVar3 = ppppuStack_d0;
// thanks for reading - discord.gg/sdkhDjTex
      if (-1 < (long)pppuStack_c0) {
        pppuVar13 = (undefined8 ***)((ulong)pppuStack_c0 >> 0x38);
        ppppuVar3 = &ppppuStack_d0;
      }
      func_0x00792db8(param_1,ppppuVar3,pppuVar13);
      func_0x007932d0(param_1,(uRam0000000001f266e0 &
                              *(ushort *)(lRam0000000001f266d0 + (long)ppppuVar6)) != 0);
      if ((long)pppuStack_c0 < 0) {
        __ZdlPv(ppppuStack_d0);
      }
    }
    else if (lRam0000000001f26630 == lVar16) {
      ppppuStack_d0 = (undefined8 ****)0x0;
      pppuStack_c8 = (undefined8 ***)0x0;
      (*pcVar11)(&ppppuStack_d0,plVar14,pppuVar13);
      uVar7 = func_0x0003c0e8(ppppuStack_d0);
      if ((uVar7 & 1) == 0) goto LAB_000beed0;
      if (*(char *)((long)ppppuStack_d0 + 0x2f) < '\0') {
        func_0x00017ae8(&ppppuStack_b0,ppppuStack_d0[3],ppppuStack_d0[4]);
      }
      else {
        pppuStack_a8 = ppppuStack_d0[4];
        ppppuStack_b0 = (undefined8 ****)ppppuStack_d0[3];
        pppuStack_a0 = ppppuStack_d0[5];
      }
      pppuVar13 = pppuStack_a8;
      ppppuVar3 = ppppuStack_b0;
      if (-1 < (long)pppuStack_a0) {
        pppuVar13 = (undefined8 ***)((ulong)pppuStack_a0 >> 0x38);
        ppppuVar3 = &ppppuStack_b0;
      }
      func_0x00792db8(param_1,ppppuVar3,pppuVar13);
      func_0x007932d0(param_1,(uRam0000000001f266e0 &
/* unlicensed copy if this notice is missing - github.com/pengussy */
                              *(ushort *)(lRam0000000001f266d0 + (long)ppppuVar6)) != 0);
      if ((long)pppuStack_a0 < 0) {
        __ZdlPv(ppppuStack_b0);
      }
    }
    else if (lRam0000000001f26640 == lVar16) {
      uVar8 = (*pcVar11)(plVar14,pppuVar13);
      func_0x00792bf4(param_1,uVar8);
      func_0x007932d0(param_1,(uRam0000000001f266e0 &
                              *(ushort *)(lRam0000000001f266d0 + (long)ppppuVar6)) != 0);
    }
    else {
      pppuStack_a0 = (undefined8 ***)(*pcRam0000000001f26e08)();
      uVar7 = uRam0000000001f266e0;
      lVar16 = lRam0000000001f266d0;
      uVar2 = *(ushort *)(lRam0000000001f266d0 + (long)ppppuVar6);
      *(ushort *)(lRam0000000001f266d0 + (long)ppppuVar6) = uVar2 | (ushort)uRam0000000001f266e0;
      ppppuStack_b0 = ppppuVar6;
      pppuStack_a8 = pppuVar13;
      func_0x007933b8(param_1,&ppppuStack_b0,0);
      func_0x007930d0(param_1,&DAT_000b2b80,0,1,0);
      iVar4 = func_0x00794a14(param_1,0,1,0);
      *(ushort *)(lVar16 + (long)ppppuVar6) = uVar2;
      if (iVar4 != 0) {
        func_0x00792a48(param_1);
      }
      func_0x007932d0(param_1,iVar4 == 0 && (uVar7 & uVar2) == 0);
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_98) {
      return 2;
    }
  }
  ___stack_chk_fail();
// unlicensed copy if this notice is missing
LAB_000beed0:
  pbVar9 = (byte *)(*pcRam0000000002068910)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019c299c();
  }
  pcStack_e8 = (char *)(*pcRam00000000020688f8)();
  if (*pcStack_e8 == '\x01') {
    lVar16 = 0;
    uVar7 = 0xffa4b538bcb0050f;
    do {
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar12 >> 0x17);
      pcStack_e8[lVar16 + 0x23] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar7 = lVar16 + -0x61c8864680b583eb +
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_e8[lVar16 + 1]) << 0x11);
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x22);
    *pcStack_e8 = '\0';
  }
  pcStack_e8 = pcStack_e8 + 0x23;
  func_0x0011ab24(&pcStack_e8);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  pcVar11 = (code *)SoftwareBreakpoint(1,0xbf01c);
  (*pcVar11)();
}

