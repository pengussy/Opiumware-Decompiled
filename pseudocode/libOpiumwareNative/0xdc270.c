/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xdc270:16b4f24bcb
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000dc270(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *******pppppppuVar4;
  int iVar5;
  long *plVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  iVar5 = func_0x00791efc(param_1,1);
/* donate: donate/README.md */
  if (iVar5 == 0) {
    pbVar7 = (byte *)(*pcRam000000000206a380)();
    if ((*pbVar7 & 1) == 0) goto LAB_000dceec;
    do {
      pcStack_88 = (char *)(*pcRam000000000206a368)();
      if (*pcStack_88 == '\x01') {
        uVar1 = (byte)pcStack_88[1] ^ 0x8a73cf68;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xd7320915 ^ 0x398a33;
        pcStack_88[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x55;
        uVar13 = (((ulong)(byte)pcStack_88[1] ^ 0xe652f339bb001e2a) << 0x11 | 0x1cca5) +
                 0x9e3779b97f4a7c15;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
        ;
        pcStack_88[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
/* wm:origin: github.com/pengussy */
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
        ;
        pcStack_88[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
        ;
        pcStack_88[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
        ;
        pcStack_88[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
        ;
        pcStack_88[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
        ;
        pcStack_88[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
/*  keep the notice, keep the source honest  */
        ;
        pcStack_88[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1)
        ;
        pcStack_88[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 10;
      uVar9 = func_0x0011ab24(&pcStack_88);
      func_0x007a1ba8(param_1,1,uVar9);
LAB_000dceec:
      func_0x019c4d3c();
    } while( true );
  }
  func_0x00791660(param_1,1);
  plVar6 = (long *)func_0x007926a8(param_1,1);
  lVar16 = *plVar6;
  pcVar17 = *(char **)(lRam0000000001f26710 + *(long *)(lRam0000000001f26720 + lVar16));
  uStack_50 = 0;
// origin: github.com/pengussy
  uStack_48 = 0;
  uStack_40 = 0;
  if (pcVar17 != (char *)0x0) {
    pbVar7 = (byte *)(*pcRam000000000206a3b0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c4c88();
    }
    pcStack_70 = (char *)(*pcRam000000000206a398)();
    if (*pcStack_70 == '\x01') {
      lVar11 = 0;
      uVar13 = 0x81174655337b04a0;
      do {
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[lVar11 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar15 >> 0x17);
        pcStack_70[lVar11 + 0xd] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = lVar11 + -0x61c8864680b583eb +
                 (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_70[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0xc);
/* watermarked copy - do not remove */
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0xd;
    pcVar8 = (char *)func_0x0011ab24(&pcStack_70);
    cVar10 = *pcVar17;
    if (cVar10 != '\0') {
      pcVar12 = pcVar17;
      do {
        pcVar12 = pcVar12 + 1;
        if (cVar10 != *pcVar8) break;
        pcVar8 = pcVar8 + 1;
        cVar10 = *pcVar12;
      } while (cVar10 != '\0');
    }
    if (cVar10 == *pcVar8) {
LAB_000dc7a8:
      lVar16 = *(long *)(lRam0000000001f26600 + lVar16);
    }
    else {
      pbVar7 = (byte *)(*pcRam000000000206a3e0)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019c4cc4();
      }
      pcStack_78 = (char *)(*pcRam000000000206a3c8)();
      if (*pcStack_78 == '\x01') {
        uVar1 = (byte)pcStack_78[1] ^ 0xf9ae791d;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x6e009d85;
        pcStack_78[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0xde;
        uVar13 = (((ulong)(byte)pcStack_78[1] ^ 0x6868046bcf161444) << 0x11 | 0xd0d0) +
/* stripping the watermark breaks the license */
                 0x9e3779b97f4a7c15;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
        pcStack_78[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
        pcStack_78[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
        pcStack_78[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
        pcStack_78[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
        pcStack_78[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
        pcStack_78[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar14;
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 8;
      pcVar8 = (char *)func_0x0011ab24(&pcStack_78);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      cVar10 = *pcVar17;
      if (cVar10 != '\0') {
        pcVar12 = pcVar17;
        do {
          pcVar12 = pcVar12 + 1;
          if (cVar10 != *pcVar8) break;
          pcVar8 = pcVar8 + 1;
          cVar10 = *pcVar12;
        } while (cVar10 != '\0');
      }
      if (cVar10 == *pcVar8) goto LAB_000dc7a8;
      pbVar7 = (byte *)(*pcRam000000000206a410)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019c4d00();
      }
      pcStack_80 = (char *)(*pcRam000000000206a3f8)();
      if (*pcStack_80 == '\x01') {
        lVar11 = 0;
        uVar13 = 0xd5112a747b5c90d5;
        do {
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_80[lVar11 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
          pcStack_80[lVar11 + 0xe] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar15;
          uVar13 = lVar11 + -0x61c8864680b583eb +
                   (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_80[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0xd);
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 0xe;
      pcVar8 = (char *)func_0x0011ab24(&pcStack_80);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      cVar10 = *pcVar17;
      if (cVar10 != '\0') {
        do {
          pcVar17 = pcVar17 + 1;
          if (cVar10 != *pcVar8) break;
          pcVar8 = pcVar8 + 1;
          cVar10 = *pcVar17;
        } while (cVar10 != '\0');
      }
      if (cVar10 != *pcVar8) goto LAB_000dca44;
      lVar16 = *(long *)(lRam0000000001f26610 + lVar16);
    }
    if (lVar16 != 0) {
      plVar6 = (long *)(lVar16 + 0x10);
      if (&uStack_50 != plVar6) {
        bVar2 = *(byte *)(lVar16 + 0x27);
        if ((long)uStack_40 < 0) {
          uVar13 = *(ulong *)(lVar16 + 0x18);
// WM - stripping the watermark breaks the license
          plVar3 = (long *)*plVar6;
          if (-1 < (char)bVar2) {
            uVar13 = (ulong)bVar2;
            plVar3 = plVar6;
          }
          func_0x001286c0(&uStack_50,plVar3,uVar13);
        }
        else if ((char)bVar2 < '\0') {
          func_0x001287e0(&uStack_50,*plVar6,*(undefined8 *)(lVar16 + 0x18));
        }
        else {
          uStack_48 = *(ulong *)(lVar16 + 0x18);
          uStack_50 = *plVar6;
          uStack_40 = *(ulong *)(lVar16 + 0x20);
        }
      }
      uVar13 = uStack_48;
      if (-1 < (long)uStack_40) {
        uVar13 = uStack_40 >> 0x38;
      }
      if (uVar13 != 0) {
// WM - do not claim this as your own
        func_0x001d7090(&pppppppuStack_68,&uStack_50);
        uVar13 = uStack_60;
        if (-1 < (char)bStack_51) {
          uVar13 = (ulong)bStack_51;
        }
        if (uVar13 == 0) {
          func_0x00792a48(param_1);
        }
        else {
          func_0x00793e24(param_1,0xffffd8ee,0);
          func_0x00793e24(param_1,0xffffd8ef,0);
          uVar9 = uRam0000000002097018;
          if (-1 < cRam000000000209702f) {
            uVar9 = 0x2097018;
          }
          pppppppuVar4 = pppppppuStack_68;
          if (-1 < (char)bStack_51) {
            uStack_60 = (ulong)bStack_51;
            pppppppuVar4 = &pppppppuStack_68;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          }
          iVar5 = func_0x0090436c(param_1,uVar9,pppppppuVar4,uStack_60,0);
          if (iVar5 == 0) {
            plVar6 = (long *)func_0x00790f58(param_1,0xffffffff);
            func_0x0003c048(*(undefined8 *)(*plVar6 + 0x18));
          }
          else {
            func_0x00792a48(param_1);
          }
        }
        if ((char)bStack_51 < '\0') {
          __ZdlPv(pppppppuStack_68);
        }
        goto LAB_000dca4c;
      }
    }
  }
LAB_000dca44:
  func_0x00792a48(param_1);
LAB_000dca4c:
/* found on a paste site? it was re-uploaded illegally */
  if ((long)uStack_40 < 0) {
    __ZdlPv(uStack_50);
    return 1;
  }
  return 1;
}

