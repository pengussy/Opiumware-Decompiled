/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xf4050:c766bfed32
 */

undefined8 FUN_000f4050(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  long lStack_60;
  long *plStack_58;
  
// WM - chat: discord.gg/sdkhDjTex
  iVar3 = func_0x00791efc(param_1,1);
  if (iVar3 == 0) {
    pbVar5 = (byte *)(*pcRam000000000206bd60)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c6dd0();
    }
    pcStack_98 = (char *)(*pcRam000000000206bd48)();
    if (*pcStack_98 == '\x01') {
      uVar1 = (byte)pcStack_98[1] ^ 0x2d0526de;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xdeb66e5b ^ 0x530853;
      pcStack_98[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - 0x1d;
      uVar13 = (((ulong)(byte)pcStack_98[1] ^ 0x85af78cdb52bb42a) << 0x11 | 0x10b5e) +
               0x9e3779b97f4a7c15;
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_98[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_98[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_98[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
// found on a paste site? it was re-uploaded illegally
      uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_98[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_98[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_98[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_98[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar15;
/*  if you paid for this, you were scammed  */
      uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
      pcStack_98[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar14;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 10;
    uVar16 = func_0x0011ab24(&pcStack_98);
    func_0x007a1ba8(param_1,1,uVar16);
LAB_000f5070:
    pbVar5 = (byte *)(*pcRam000000000206be50)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c6d58();
    }
    pcStack_88 = (char *)(*pcRam000000000206be38)();
    if (*pcStack_88 == '\x01') {
      lVar11 = 0;
      uVar13 = (unaff_x25 ^ 0x83bfc035a994d007 ^ (unaff_x25 ^ 0x83bfc035a994d007) >> 0x21) *
               unaff_x22;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * unaff_x23;
      uVar13 = uVar13 ^ uVar13 >> 0x21;
      do {
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * unaff_x22;
/* wm:no support for modified copies */
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * unaff_x23;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[lVar11 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
        pcStack_88[lVar11 + 0x18] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = lVar11 + unaff_x24 +
                 (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x17);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x18;
    func_0x0011ab24(&pcStack_88);
    func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xf517c);
    (*pcVar2)();
  }
  pcVar4 = (char *)func_0x007a25b0(param_1,1);
  pbVar5 = (byte *)(*pcRam000000000206bd90)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019c6c68();
  }
  pcStack_68 = (char *)(*pcRam000000000206bd78)();
  if (*pcStack_68 == '\x01') {
    lVar11 = 0;
/* WM - more drops soon - github.com/pengussy */
    uVar13 = 0xf4718fb86daba417;
    do {
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[lVar11 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
      pcStack_68[lVar11 + 0x11] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar14 >> 0x29) | 1) ^
           (byte)uVar15;
      uVar13 = lVar11 + -0x61c8864680b583eb +
               (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_68[lVar11 + 1]) << 0x11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x10);
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 0x11;
  pcVar6 = (char *)func_0x0011ab24(&pcStack_68);
  cVar10 = *pcVar4;
  if (cVar10 != '\0') {
    do {
      pcVar4 = pcVar4 + 1;
      if (cVar10 != *pcVar6) break;
      pcVar6 = pcVar6 + 1;
      cVar10 = *pcVar4;
    } while (cVar10 != '\0');
  }
  if (cVar10 != *pcVar6) {
    func_0x007932d0(param_1,0);
    return 1;
/* wm:keep the notice, keep the source honest */
  }
  puVar7 = (undefined8 *)func_0x007926a8(param_1,1);
  puVar7 = (undefined8 *)*puVar7;
  uVar16 = *puVar7;
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (puVar7[4] != 0) {
    plStack_58 = (long *)__ZNSt3__119__shared_weak_count4lockEv();
    if (plStack_58 != (long *)0x0) {
      lVar11 = puVar7[3];
      lStack_60 = lVar11;
      if (lVar11 != 0) {
        pbVar5 = (byte *)(*pcRam000000000206bdc0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019c6ca4();
        }
        unaff_x22 = -0xae502812aa7333;
        unaff_x23 = -0x3b314601e57a13ad;
        unaff_x24 = -0x61c8864680b583eb;
        unaff_x25 = 0x8ebc6af09c88c6e3;
        pcStack_70 = (char *)(*pcRam000000000206bda8)();
        if (*pcStack_70 == '\x01') {
          uVar1 = (byte)pcStack_70[1] ^ 0x682d9d3a;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x4b19f6d1;
          pcStack_70[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - 0x39 ^ 0xf9;
          uVar13 = (((ulong)(byte)pcStack_70[1] ^ 0xe16ce276cd478e22) << 0x11 | 0x1c2d9) +
                   0x9e3779b97f4a7c15;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
          pcStack_70[7] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* wm:more drops soon - github.com/pengussy */
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
          pcStack_70[8] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
          pcStack_70[9] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17);
          pcStack_70[10] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar14;
          *pcStack_70 = '\0';
        }
        pcStack_70 = pcStack_70 + 6;
        uVar8 = func_0x0011ab24(&pcStack_70);
        func_0x007935a0(param_1,0xffffd8ee,uVar8);
        pbVar5 = (byte *)(*pcRam000000000206bdf0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019c6ce0();
        }
        pcStack_78 = (char *)(*pcRam000000000206bdd8)();
        if (*pcStack_78 == '\x01') {
          uVar1 = (byte)pcStack_78[1] ^ 0xba9ecf68;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x708717a7;
          pcStack_78[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xab;
          uVar13 = (((ulong)(byte)pcStack_78[1] ^ 0x1e8bdda6dc9c4681) << 0x11 | 0x3d17) +
                   0x9e3779b97f4a7c15;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
// WM - keep the notice, keep the source honest
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
// WM - donate: donate/README.md
          uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
// WM - stripping the watermark breaks the license
          uVar1 = (uint)(byte)pcStack_78[8] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0x13] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[9] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0x14] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[10] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_78[0x15] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
          uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar1 = (uint)(byte)pcStack_78[0xb] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
          pcStack_78[0x16] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar14;
          *pcStack_78 = '\0';
        }
        pcStack_78 = pcStack_78 + 0xc;
        uVar8 = func_0x0011ab24(&pcStack_78);
        func_0x007935a0(param_1,0xffffffff,uVar8);
        func_0x00791ab0(param_1,0xfffffffe);
/* WM - keep the notice, keep the source honest */
        pbVar5 = (byte *)(*pcRam000000000206be20)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019c6d1c();
        }
        pcStack_80 = (char *)(*pcRam000000000206be08)();
        if (*pcStack_80 == '\x01') {
          lVar12 = 0;
          uVar13 = 0x8f22e150551d8906;
          do {
            uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
            uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
            uVar15 = uVar14 ^ uVar14 >> 0x21;
            uVar1 = (uint)(byte)pcStack_80[lVar12 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
            pcStack_80[lVar12 + 0xf] =
                 ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar14 >> 0x29) | 1) ^
                 (byte)uVar15;
            uVar13 = lVar12 + -0x61c8864680b583eb +
                     (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_80[lVar12 + 1]) << 0x11);
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0xe);
          *pcStack_80 = '\0';
        }
        pcStack_80 = pcStack_80 + 0xf;
        uVar8 = func_0x0011ab24(&pcStack_80);
        func_0x00792f00(param_1,uVar8);
        iVar3 = func_0x00794a14(param_1,2,1,0);
        if (iVar3 != 0) goto LAB_000f5070;
        iVar3 = func_0x00791efc(param_1,0xffffffff);
        if (iVar3 == 0) {
LAB_000f4c0c:
          uVar16 = 0;
        }
        else {
/* keep the notice, keep the source honest */
          pbVar5 = (byte *)(*pcRam000000000206be80)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019c6d94();
          }
          pcStack_90 = (char *)(*pcRam000000000206be68)();
          if (*pcStack_90 == '\x01') {
            lVar12 = 0;
            uVar13 = 0xa79c376f41888809;
            do {
              uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
              uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
              uVar15 = uVar14 ^ uVar14 >> 0x21;
              uVar1 = (uint)(byte)pcStack_90[lVar12 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
              pcStack_90[lVar12 + 0x12] =
                   ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar15;
              uVar13 = lVar12 + -0x61c8864680b583eb +
                       (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_90[lVar12 + 1]) << 0x11);
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0x11);
            *pcStack_90 = '\0';
          }
          pcStack_90 = pcStack_90 + 0x12;
          uVar8 = func_0x0011ab24(&pcStack_90);
          func_0x007935a0(param_1,0xffffffff,uVar8);
          iVar3 = func_0x00791efc(param_1,0xffffffff);
          if (iVar3 == 0) goto LAB_000f4c0c;
          plVar9 = (long *)func_0x007926a8(param_1,0xffffffff);
          if (*plVar9 == 0) goto LAB_000f4c0c;
          uVar16 = (*pcRam0000000001f26ff0)(*plVar9,lVar11,uVar16);
        }
        func_0x007932d0(param_1,uVar16);
        plVar9 = plStack_58;
        goto joined_r0x000f4bdc;
      }
/* wm:do not claim this as your own */
    }
  }
  plVar9 = plStack_58;
  func_0x007932d0(param_1,0);
joined_r0x000f4bdc:
  if (plVar9 != (long *)0x0) {
    LOAcquire();
    lVar11 = plVar9[1];
    plVar9[1] = lVar11 + -1;
    LORelease();
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return 1;
}

