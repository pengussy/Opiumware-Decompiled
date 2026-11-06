/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x10c080:b90c668d8b
 */

undefined8 FUN_0010c080(long param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x27;
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
  
  if (pcRam00000000020971a8 == (code *)0x0 || pcRam00000000020971a8 == FUN_0010c080) {
    return 0;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
// unlicensed copy if this notice is missing
LAB_0010d8cc:
    uVar9 = (*pcRam00000000020971a8)(param_1);
  }
  else {
    if ((lRam0000000002097088 == 0) ||
       (lVar5 = func_0x0013b76c(0x2097070,param_1 + 0x80), lVar5 == 0)) {
LAB_0010ca04:
                    /* WARNING: Could not recover jumptable at 0x0010ca20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*pcRam00000000020971a8)(param_1);
      return uVar9;
    }
    lVar5 = *(long *)(param_1 + 0x68);
    pcVar14 = (char *)(lVar5 + 0x18);
    if (*pcVar14 == '\0') goto LAB_0010ca04;
    pcStack_70 = pcVar14;
    uStack_68 = _strlen(pcVar14);
    if (((bRam0000000002097055 & 1) == 0) &&
       (lVar6 = func_0x0016dd78(0x20929d0,&pcStack_70), lVar6 != 0)) {
      pbVar7 = (byte *)(*pcRam000000000206d440)();
      if ((*pbVar7 & 1) == 0) goto LAB_0010dda8;
      goto LAB_0010d950;
    }
    pbVar7 = (byte *)(*pcRam000000000206d470)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c8a84();
    }
    unaff_x24 = -0xae502812aa7333;
    unaff_x23 = -0x3b314601e57a13ad;
// WM - donate: donate/README.md
    unaff_x25 = -0x61c8864680b583eb;
    unaff_x27 = 0x8ebc6af09c88c6e3;
    pcStack_80 = (char *)(*pcRam000000000206d458)();
    if (*pcStack_80 == '\x01') {
      uVar1 = (byte)pcStack_80[1] ^ 0x8f9407b2;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x9ea230d9;
      pcStack_80[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x71;
      uVar11 = (((ulong)(byte)pcStack_80[1] ^ 0x717cac93d0f5b1da) << 0x11 | 0xe2f9) +
               0x9e3779b97f4a7c15;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_80[7] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_80[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_80[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_80[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar10;
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 6;
    pcVar8 = (char *)func_0x0011ab24(&pcStack_80);
// chat: discord.gg/sdkhDjTex
    cVar3 = *pcVar14;
    if (cVar3 != '\0') {
      pcVar12 = (char *)(lVar5 + 0x19);
      do {
        if (cVar3 != *pcVar8) break;
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
    }
    if (cVar3 == *pcVar8) {
      pbVar7 = (byte *)(*pcRam000000000206d4a0)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019c8ac0();
      }
      pcStack_88 = (char *)(*pcRam000000000206d488)();
      if (*pcStack_88 == '\x01') {
        uVar1 = (byte)pcStack_88[1] ^ 0x2432f64;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x93ebb605 ^ 0x185b05;
        pcStack_88[6] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x59;
        uVar11 = (((ulong)(byte)pcStack_88[1] ^ 0x356f761de7e6a728) << 0x11 | 0x6ade) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_88[7] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_88[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_88[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar11 >> 0x29) | 1);
        pcStack_88[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
        *pcStack_88 = '\0';
      }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      pcStack_88 = pcStack_88 + 6;
      uVar9 = func_0x0011ab24(&pcStack_88);
      func_0x007935a0(param_1,0xffffd8ee,uVar9);
      iVar4 = func_0x00791f88(param_1,0xffffffff,1);
      if (iVar4 != 0) {
        do {
          pbVar7 = (byte *)(*pcRam000000000206d4d0)();
          if ((*pbVar7 & 1) == 0) {
            func_0x019c8afc();
          }
          pcVar14 = (char *)(*pcRam000000000206d4b8)();
          if (*pcVar14 == '\x01') {
            uVar11 = (unaff_x27 ^ 0xae1fc7753f9a892b ^ (unaff_x27 ^ 0xae1fc7753f9a892b) >> 0x21) *
                     unaff_x24;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * unaff_x23;
            uVar10 = uVar11 ^ uVar11 >> 0x21;
            bVar2 = pcVar14[1];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar10);
// WM - found on a paste site? it was re-uploaded illegally
            pcVar14[0x14] = cVar3;
            uVar11 = (uVar11 >> 0x2f | (uVar10 ^ bVar2) << 0x11) + unaff_x25;
            bVar2 = pcVar14[2];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x15] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 1;
            bVar2 = pcVar14[3];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x16] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 2;
            bVar2 = pcVar14[4];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x17] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 3;
            bVar2 = pcVar14[5];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x18] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 4;
            bVar2 = pcVar14[6];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x19] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 5;
            bVar2 = pcVar14[7];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x1a] = cVar3;
// WM - thanks for reading - discord.gg/sdkhDjTex
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 6;
            bVar2 = pcVar14[8];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x1b] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 7;
            bVar2 = pcVar14[9];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x1c] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 8;
            bVar2 = pcVar14[10];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x1d] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 9;
            bVar2 = pcVar14[0xb];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x1e] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 10;
            bVar2 = pcVar14[0xc];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
/* wm:reversing this took months of machine time */
            pcVar14[0x1f] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0xb;
            bVar2 = pcVar14[0xd];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x20] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0xc;
            bVar2 = pcVar14[0xe];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x21] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0xd;
            bVar2 = pcVar14[0xf];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x22] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0xe;
            bVar2 = pcVar14[0x10];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x23] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0xf;
            bVar2 = pcVar14[0x11];
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x24] = cVar3;
            uVar11 = unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x10;
            bVar2 = pcVar14[0x12];
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
            cVar3 = func_0x00167e3c((ulong)bVar2,uVar11);
            pcVar14[0x25] = cVar3;
            cVar3 = func_0x00167e3c(pcVar14[0x13],
                                    unaff_x25 + (uVar11 >> 0x2f | (uVar11 ^ bVar2) << 0x11) + 0x11);
            pcVar14[0x26] = cVar3;
            *pcVar14 = '\0';
          }
          pcStack_90 = pcVar14 + 0x14;
          func_0x0011ab24(&pcStack_90);
          func_0x007a1b5c(param_1,"%s");
LAB_0010dda8:
          func_0x019c8a48();
LAB_0010d950:
          pcStack_78 = (char *)(*pcRam000000000206d428)();
          if (*pcStack_78 == '\x01') {
            lVar5 = 0;
            uVar11 = 0x73727506d019329d;
            do {
              uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
              uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
              uVar13 = uVar10 ^ uVar10 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[lVar5 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                      (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
              pcStack_78[lVar5 + 0x20] =
                   ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
              uVar11 = lVar5 + -0x61c8864680b583eb +
                       (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_78[lVar5 + 1]) << 0x11);
              lVar5 = lVar5 + 1;
            } while (lVar5 != 0x1f);
            *pcStack_78 = '\0';
          }
          pcStack_78 = pcStack_78 + 0x20;
/* donate: donate/README.md */
          uVar9 = func_0x0011ab24(&pcStack_78);
          func_0x007a1b5c(param_1,uVar9);
        } while( true );
      }
      func_0x00791660(param_1,0xfffffffe);
    }
    pbVar7 = (byte *)(*pcRam000000000206d500)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c8b38();
    }
    pcStack_98 = (char *)(*pcRam000000000206d4e8)();
    if (*pcStack_98 == '\x01') {
      lVar6 = 0;
      uVar11 = 0xd208a672a82a5bbd;
      do {
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[lVar6 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_98[lVar6 + 0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar13;
/* if you paid for this, you were scammed */
        uVar11 = lVar6 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0xd);
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 0xe;
    pcVar8 = (char *)func_0x0011ab24(&pcStack_98);
    cVar3 = *pcVar14;
    if (cVar3 != '\0') {
      pcVar12 = (char *)(lVar5 + 0x19);
      do {
        if (cVar3 != *pcVar8) break;
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
    }
    if (cVar3 == *pcVar8) {
      pbVar7 = (byte *)(*pcRam000000000206d530)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019c8ca0();
      }
      pcStack_c8 = (char *)(*pcRam000000000206d518)();
      if (*pcStack_c8 == '\x01') {
        uVar1 = (byte)pcStack_c8[1] ^ 0x2e7f3838;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x4006ae5d ^ 0x7fafff;
        pcStack_c8[6] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 5;
        uVar11 = (((ulong)(byte)pcStack_c8[1] ^ 0x3de0d8eaabe287fa) << 0x11 | 0x7bc1) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/* wm:proprietary - see LICENSE - do not sell */
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_c8[7] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_c8[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_c8[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar11 >> 0x29) | 1);
        pcStack_c8[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
        *pcStack_c8 = '\0';
      }
      pcStack_c8 = pcStack_c8 + 6;
      uVar9 = func_0x0011ab24(&pcStack_c8);
      func_0x007935a0(param_1,0xffffd8ee,uVar9);
      iVar4 = func_0x00791f88(param_1,0xffffffff,1);
      func_0x00791660(param_1,0xfffffffe);
      if (iVar4 == 0) {
/* WM - if you paid for this, you were scammed */
        uVar9 = (*pcRam00000000020971a8)(param_1);
        return uVar9;
      }
      uVar9 = func_0x00201a9c(param_1);
      return uVar9;
    }
    pbVar7 = (byte *)(*pcRam000000000206d560)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c8b74();
    }
    pcStack_a0 = (char *)(*pcRam000000000206d548)();
    if (*pcStack_a0 == '\x01') {
      uVar1 = (byte)pcStack_a0[1] ^ 0x50def6a3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x1e12c8a2 ^ 0xe787b;
      pcStack_a0[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 0xa0;
      uVar11 = (((ulong)(byte)pcStack_a0[1] ^ 0x8346afc7cffa7a64) << 0x11 | 0x1068d) +
               0x9e3779b97f4a7c15;
// WM - if you paid for this, you were scammed
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
/*  keep the notice, keep the source honest  */
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xf] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^
              ((uint)(uVar11 >> 0x29) | 1);
/* thanks for reading - discord.gg/sdkhDjTex */
      pcStack_a0[0x10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 9;
    pcVar8 = (char *)func_0x0011ab24(&pcStack_a0);
    cVar3 = *pcVar14;
    if (cVar3 != '\0') {
      pcVar12 = (char *)(lVar5 + 0x19);
      do {
        if (cVar3 != *pcVar8) break;
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
    }
    if (cVar3 == *pcVar8) {
      uVar9 = func_0x0020223c(param_1);
      return uVar9;
    }
    pbVar7 = (byte *)(*pcRam000000000206d590)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c8bb0();
    }
    pcStack_a8 = (char *)(*pcRam000000000206d578)();
    if (*pcStack_a8 == '\x01') {
      uVar1 = (byte)pcStack_a8[1] ^ 0x5afd380f;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x8a7d16b6;
      pcStack_a8[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x9f ^ 0xcc;
      uVar11 = (((ulong)(byte)pcStack_a8[1] ^ 0x4c7a334b79f2b142) << 0x11 | 0x98f4) +
               0x9e3779b97f4a7c15;
/* wm:more drops soon - github.com/pengussy */
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
      pcStack_a8[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
      pcStack_a8[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
      pcStack_a8[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar13 ^ 0xffffffc3;
/* unlicensed copy if this notice is missing */
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
      pcStack_a8[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
      pcStack_a8[0xf] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
      pcStack_a8[0x10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
// WM - more drops soon - github.com/pengussy
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[8] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
      pcStack_a8[0x11] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17);
      pcStack_a8[0x12] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar10;
      *pcStack_a8 = '\0';
    }
    pcStack_a8 = pcStack_a8 + 10;
    pcVar8 = (char *)func_0x0011ab24(&pcStack_a8);
    cVar3 = *pcVar14;
    if (cVar3 != '\0') {
      pcVar12 = (char *)(lVar5 + 0x19);
      do {
        if (cVar3 != *pcVar8) break;
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    if (cVar3 != *pcVar8) {
      pbVar7 = (byte *)(*pcRam000000000206d5c0)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019c8bec();
      }
      pcStack_b0 = (char *)(*pcRam000000000206d5a8)();
      if (*pcStack_b0 == '\x01') {
        lVar6 = 0;
        uVar11 = 0x155ec28ad08fd19e;
        do {
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[lVar6 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17) ^
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_b0[lVar6 + 0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13;
          uVar11 = lVar6 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b0[lVar6 + 1]) << 0x11);
          lVar6 = lVar6 + 1;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        } while (lVar6 != 0xe);
        *pcStack_b0 = '\0';
      }
      pcStack_b0 = pcStack_b0 + 0xf;
      pcVar8 = (char *)func_0x0011ab24(&pcStack_b0);
      cVar3 = *pcVar14;
      if (cVar3 != '\0') {
        pcVar12 = (char *)(lVar5 + 0x19);
        do {
          if (cVar3 != *pcVar8) break;
          pcVar8 = pcVar8 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar3 != '\0');
      }
      if (cVar3 != *pcVar8) {
        pbVar7 = (byte *)(*pcRam000000000206d5f0)();
        if ((*pbVar7 & 1) == 0) {
          func_0x019c8c28();
        }
        pcStack_b8 = (char *)(*pcRam000000000206d5d8)();
        if (*pcStack_b8 == '\x01') {
          uVar1 = (byte)pcStack_b8[1] ^ 0x91fdc27f;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x3b1f1b24;
          pcStack_b8[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - 0x39 ^ 0xbc;
          uVar11 = (((ulong)(byte)pcStack_b8[1] ^ 0xa8be56cb7111e1d2) << 0x11 | 0x1517c) +
                   0x9e3779b97f4a7c15;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar13 ^ 0xffffffc3;
/* stripping the watermark breaks the license - github.com/pengussy */
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0xd] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0xe] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0xf] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0x10] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar13 ^ 0xffffffc3;
// reversing this took months of machine time
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0x11] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0x12] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0x13] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[9] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
          pcStack_b8[0x14] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[10] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
/* WM - do not claim this as your own */
          pcStack_b8[0x15] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[0xb] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17);
          pcStack_b8[0x16] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
               (byte)uVar10;
          *pcStack_b8 = '\0';
        }
        pcStack_b8 = pcStack_b8 + 0xc;
        pcVar8 = (char *)func_0x0011ab24(&pcStack_b8);
        cVar3 = *pcVar14;
        if (cVar3 != '\0') {
          pcVar12 = (char *)(lVar5 + 0x19);
          do {
            if (cVar3 != *pcVar8) break;
            pcVar8 = pcVar8 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar3 != '\0');
        }
        if (cVar3 == *pcVar8) {
LAB_0010d8c0:
// watermarked copy - do not remove
          uVar9 = func_0x002093b4(param_1);
          return uVar9;
        }
        pbVar7 = (byte *)(*pcRam000000000206d620)();
        if ((*pbVar7 & 1) == 0) {
          func_0x019c8c64();
        }
        pcStack_c0 = (char *)(*pcRam000000000206d608)();
        if (*pcStack_c0 == '\x01') {
          lVar6 = 0;
          uVar11 = 0xd49e83aa712e68fe;
          do {
            uVar10 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_c0[lVar6 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar10 >> 0x29) | 1);
            pcStack_c0[lVar6 + 0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
            uVar11 = lVar6 + -0x61c8864680b583eb +
                     (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_c0[lVar6 + 1]) << 0x11);
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x10);
          *pcStack_c0 = '\0';
        }
        pcStack_c0 = pcStack_c0 + 0x11;
        pcVar8 = (char *)func_0x0011ab24(&pcStack_c0);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        cVar3 = *pcVar14;
        if (cVar3 != '\0') {
          pcVar14 = (char *)(lVar5 + 0x19);
          do {
            if (cVar3 != *pcVar8) break;
            pcVar8 = pcVar8 + 1;
            cVar3 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar3 != '\0');
        }
        if (cVar3 == *pcVar8) goto LAB_0010d8c0;
        goto LAB_0010d8cc;
      }
    }
    uVar9 = func_0x002027cc(param_1);
  }
  return uVar9;
}

