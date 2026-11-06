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
 *  file-id: 0x9d438:279fa77762
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0009d438(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined8 uStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 uStack_71;
  undefined1 **ppuStack_70;
  undefined1 *puStack_68;
  
  iVar7 = func_0x00791be4(param_1,1);
/*  do not claim this as your own  */
  if (iVar7 == 8) {
    plVar8 = (long *)func_0x00790f58(param_1,1);
    if (*(char *)(*plVar8 + 3) != '\0') goto LAB_0009df9c;
    lVar15 = *(long *)(*plVar8 + 0x18);
    if (((lVar15 == 0) || (*(int *)(lVar15 + 0xb8) < 0)) ||
       ((*(int *)(lVar15 + 0xb8) != 0 && (*(long *)(lVar15 + 0x88) == 0)))) {
      pbVar9 = (byte *)(*pcRam0000000002066870)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019c03a4();
      }
      pcStack_c0 = (char *)(*pcRam0000000002066858)();
      if (*pcStack_c0 == '\x01') {
        lVar15 = 0;
        uVar12 = 0xb52f5e1104fc590d;
        do {
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar16 = (uint)(byte)pcStack_c0[lVar15 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) - (int)(uVar14 >> 0x17) ^
                   ((uint)(uVar13 >> 0x29) | 1);
          pcStack_c0[lVar15 + 0x17] =
               ((byte)(uVar16 >> 2) & 0x3f | (byte)(uVar16 << 6)) - (char)uVar14;
          uVar12 = lVar15 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[lVar15 + 1]) << 0x11);
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0x16);
        *pcStack_c0 = '\0';
      }
      pcStack_c0 = pcStack_c0 + 0x17;
      uVar10 = func_0x0011ab24(&pcStack_c0);
      func_0x007a1abc(param_1,1,uVar10);
LAB_0009da50:
      pbVar9 = (byte *)(*pcRam00000000020668a0)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019c02f0();
      }
/*  more drops soon - github.com/pengussy  */
      pcStack_a8 = (char *)(*pcRam0000000002066888)();
      if (*pcStack_a8 == '\x01') {
        lVar15 = 0;
        uVar12 = 0x2704c1da6f89b13f;
        do {
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar16 = (uint)(byte)pcStack_a8[lVar15 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) -
                   (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
          pcStack_a8[lVar15 + 0x17] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14
          ;
          uVar12 = lVar15 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[lVar15 + 1]) << 0x11);
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0x16);
        *pcStack_a8 = '\0';
      }
      pcStack_a8 = pcStack_a8 + 0x17;
      uVar10 = func_0x0011ab24(&pcStack_a8);
      func_0x007a1abc(param_1,1,uVar10);
      goto LAB_0009db94;
    }
    if ((*(int *)(lVar15 + 0xb0) < 0) ||
       ((*(int *)(lVar15 + 0xb0) != 0 && (*(long *)(lVar15 + 0x80) == 0)))) goto LAB_0009da50;
    func_0x00793bd0(param_1,0,0);
    ppppuStack_90 = (undefined8 ****)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar16 = 0;
    while( true ) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      if (*(int *)(lVar15 + 0xb8) <= (int)uVar16) {
        uVar12 = uStack_88;
        ppppuVar5 = ppppuStack_90;
        if (-1 < (long)uStack_80) {
          uVar12 = uStack_80 >> 0x38;
          ppppuVar5 = &ppppuStack_90;
        }
        func_0x00792db8(param_1,ppppuVar5,uVar12);
        func_0x00794504(param_1,0xfffffffe,1);
        if ((long)uStack_80 < 0) {
          __ZdlPv(ppppuStack_90);
        }
        return 1;
      }
      puVar1 = (uint *)(*(long *)(lVar15 + 0x88) + (ulong)uVar16 * 4);
      uVar3 = *puVar1;
      if (lRam000000000208f808 != -1) {
        puStack_68 = &uStack_71;
        ppuStack_70 = &puStack_68;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x208f808,&ppuStack_70,&DAT_0013c364);
      }
      uVar2 = (uint)*(byte *)((ulong)(byte)uVar3 * 2 + 0x2092a88) * -0x35 & 0xff;
      if (0x5e < uVar2) {
        pbVar9 = (byte *)(*pcRam00000000020668d0)();
        if ((*pbVar9 & 1) == 0) {
          func_0x019c0368();
// WM - donate: donate/README.md
        }
        pcStack_b8 = (char *)(*pcRam00000000020668b8)();
        if (*pcStack_b8 == '\x01') {
          lVar15 = 0;
          uVar12 = 0xb6125f931bbd75ec;
          do {
            uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar13 ^ uVar13 >> 0x21;
            uVar16 = (uint)(byte)pcStack_b8[lVar15 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar14 >> 0x17) ^
                     ((uint)(uVar13 >> 0x29) | 1);
            pcStack_b8[lVar15 + 0x22] =
                 ((byte)(uVar16 >> 5) & 7 | (byte)(uVar16 << 3)) - (char)uVar14;
            uVar12 = lVar15 + -0x61c8864680b583eb +
                     (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[lVar15 + 1]) << 0x11);
            lVar15 = lVar15 + 1;
          } while (lVar15 != 0x21);
          *pcStack_b8 = '\0';
        }
        pcStack_b8 = pcStack_b8 + 0x22;
        func_0x0011ab24(&pcStack_b8);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_0009d908;
      }
      iVar7 = func_0x0009e140(uVar2);
      if ((iVar7 < 1) || (*(int *)(lVar15 + 0xb8) < (int)(iVar7 + uVar16))) break;
      uVar4 = uVar2 - 0x38;
      if (uVar4 < 0x21) {
        if ((1L << ((ulong)uVar4 & 0x3f) & 0x101f0002fU) != 0) goto LAB_0009d4fc;
        if ((1L << ((ulong)uVar4 & 0x3f) & 0xe1010U) == 0) goto LAB_0009d4f0;
        iVar11 = uVar16 + (uVar3 >> 0x18) + 2;
      }
      else {
LAB_0009d4f0:
        if (uVar2 - 0x17 < 10) {
LAB_0009d4fc:
/* wm:donate: donate/README.md */
          iVar11 = uVar16 + ((int)uVar3 >> 0x10) + 1;
        }
        else {
          iVar11 = -1;
          if (uVar2 == 0x43) {
            iVar11 = uVar16 + ((int)uVar3 >> 8) + 1;
          }
          if (uVar3 >> 0x18 != 0 && uVar2 == 3) {
            iVar11 = uVar16 + (uVar3 >> 0x18) + 1;
          }
        }
      }
      FUN_0008dcd0(puVar1,&ppppuStack_90,iVar11,lVar15,uVar2);
      uVar16 = iVar7 + uVar16;
    }
    pbVar9 = (byte *)(*pcRam0000000002066900)();
    uStack_c8 = param_1;
    if ((*pbVar9 & 1) != 0) goto LAB_0009d68c;
  }
  else {
LAB_0009db94:
    pbVar9 = (byte *)(*pcRam0000000002066810)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c0278();
    }
    pcStack_98 = (char *)(*pcRam00000000020667f8)();
    if (*pcStack_98 == '\x01') {
      uVar16 = (byte)pcStack_98[1] ^ 0x5f1d9742;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) + 0xae6cc06e;
      pcStack_98[10] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ 0x81;
      uVar12 = (((ulong)(byte)pcStack_98[1] ^ 0x2d97f54685317e18) << 0x11 | 0x5b2f) +
/* more drops soon - github.com/pengussy */
               0x9e3779b97f4a7c15;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_98[0xb] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_98[0xc] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14;
// no support for modified copies
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_98[0xd] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[5] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_98[0xe] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[6] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_98[0xf] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[7] ^ (uint)uVar14 ^ 0xffffffc3;
/* found on a paste site? it was re-uploaded illegally */
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_98[0x10] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[8] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_98[0x11] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar16 = (uint)(byte)pcStack_98[9] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) -
               (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_98[0x12] = ((byte)(uVar16 >> 5) & 7 | (char)uVar16 * '\b') ^ (byte)uVar13;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 10;
    uVar10 = func_0x0011ab24(&pcStack_98);
    func_0x007a1ba8(param_1,1,uVar10);
LAB_0009df9c:
    pbVar9 = (byte *)(*pcRam0000000002066840)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c02b4();
    }
    pcStack_a0 = (char *)(*pcRam0000000002066828)();
    if (*pcStack_a0 == '\x01') {
/*  stripping the watermark breaks the license  */
      lVar15 = 0;
      uVar12 = 0x11e632723e5d66dc;
      do {
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar16 = (uint)(byte)pcStack_a0[lVar15 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar16 = (uVar16 >> 7 & 1 | uVar16 << 1) - (int)(uVar14 >> 0x17);
        pcStack_a0[lVar15 + 0x21] =
             ((byte)(uVar16 >> 1) & 0x7f | (char)uVar16 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = lVar15 + -0x61c8864680b583eb +
                 (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a0[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x20);
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 0x21;
    uVar10 = func_0x0011ab24(&pcStack_a0);
    func_0x007a1abc(param_1,1,uVar10);
  }
  func_0x019c032c();
LAB_0009d68c:
  pcStack_b0 = (char *)(*pcRam00000000020668e8)();
  if (*pcStack_b0 == '\x01') {
    lVar15 = 0;
    uVar12 = 0xe60e8af82b29ec4;
    do {
/* watermarked copy - do not remove */
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar16 = (uint)(byte)pcStack_b0[lVar15 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar16 = (uVar16 >> 5 & 7 | uVar16 << 3) - (int)(uVar14 >> 0x17) ^
               ((uint)(uVar13 >> 0x29) | 1);
      pcStack_b0[lVar15 + 0x28] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) - (char)uVar14;
      uVar12 = lVar15 + -0x61c8864680b583eb +
               (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[lVar15 + 1]) << 0x11);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x27);
    *pcStack_b0 = '\0';
  }
  pcStack_b0 = pcStack_b0 + 0x28;
  func_0x0011ab24(&pcStack_b0);
  func_0x007a1b5c(uStack_c8,"%s");
LAB_0009d908:
                    /* WARNING: Does not return */
/* wm:proprietary - see LICENSE - do not sell */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x9d90c);
  (*pcVar6)();
}

