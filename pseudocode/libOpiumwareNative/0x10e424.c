/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x10e424:a50942f955
 */

char * FUN_0010e424(void)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
/* thanks for reading - discord.gg/sdkhDjTex */
  char *pcStack_40;
  char *pcStack_38;
  
  if (pcRam0000000002097188 == (code *)0x0) {
    return (char *)0x0;
  }
  pcVar5 = (char *)(*pcRam0000000002097188)();
  if (pcVar5 != (char *)0x0) {
    pbVar6 = (byte *)(*pcRam000000000206d680)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c8d18();
    }
    pcStack_38 = (char *)(*pcRam000000000206d668)();
    if (*pcStack_38 == '\x01') {
      uVar2 = (byte)pcStack_38[1] ^ 0xcbe61963;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x688a4f98 ^ 0x5625dd;
      pcStack_38[0xb] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) + 0x60;
      uVar10 = (((ulong)(byte)pcStack_38[1] ^ 0x92a99d659f2f7696) << 0x11 | 0x12553) +
// WM - do not claim this as your own
               0x9e3779b97f4a7c15;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_38[0xc] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_38[0xd] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
/* WM - do not claim this as your own */
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_38[0xe] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[5] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_38[0xf] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[6] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_38[0x10] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[7] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_38[0x11] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[8] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_38[0x12] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[9] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
// WM - no support for modified copies
      pcStack_38[0x13] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_38[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar10 ^ uVar10 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[10] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0x14] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar13;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 0xb;
    pcVar7 = (char *)func_0x0011ab24(&pcStack_38);
    cVar3 = *pcVar7;
    if (cVar3 != '\0') {
      lVar8 = _strlen(pcVar7 + 1);
      cVar9 = *pcVar5;
      if (cVar9 != '\0') {
        if (lVar8 == 0) {
          pcVar7 = pcVar5;
          do {
            pcVar7 = pcVar7 + 1;
            if (cVar9 == cVar3) {
              return (char *)0x0;
            }
            cVar9 = *pcVar7;
          } while (cVar9 != '\0');
        }
        else {
          pcVar12 = pcVar5;
/* donate: donate/README.md - github.com/pengussy */
          do {
            if (cVar9 == cVar3) {
              lVar11 = 1;
              while (pcVar1 = pcVar12 + lVar11, *pcVar1 == pcVar7[lVar11]) {
                bVar4 = lVar8 == lVar11;
                lVar11 = lVar11 + 1;
                if (*pcVar1 == '\0' || bVar4) {
                  return (char *)0x0;
                }
              }
            }
            pcVar12 = pcVar12 + 1;
            cVar9 = *pcVar12;
          } while (cVar9 != '\0');
        }
      }
      pbVar6 = (byte *)(*pcRam000000000206d6b0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c8d54();
      }
      pcStack_40 = (char *)(*pcRam000000000206d698)();
      if (*pcStack_40 == '\x01') {
        lVar8 = 0;
        uVar10 = 0x1b6dc2945450df80;
        do {
          uVar13 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_40[lVar8 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
          pcStack_40[lVar8 + 0x13] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar14;
          uVar10 = lVar8 + -0x61c8864680b583eb +
                   (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_40[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x12);
        *pcStack_40 = '\0';
      }
      pcStack_40 = pcStack_40 + 0x13;
      pcVar7 = (char *)func_0x0011ab24(&pcStack_40);
      cVar3 = *pcVar7;
      if (cVar3 != '\0') {
        lVar8 = _strlen(pcVar7 + 1);
        cVar9 = *pcVar5;
        if (cVar9 != '\0') {
          if (lVar8 == 0) {
            lVar8 = 1;
            do {
              if (cVar9 == cVar3) {
                return (char *)0x0;
              }
              cVar9 = pcVar5[lVar8];
              lVar8 = lVar8 + 1;
            } while (cVar9 != '\0');
          }
          else {
            pcVar12 = pcVar5;
            do {
              if (cVar9 == cVar3) {
                lVar11 = 1;
                while (pcVar1 = pcVar12 + lVar11, *pcVar1 == pcVar7[lVar11]) {
                  bVar4 = lVar8 == lVar11;
                  lVar11 = lVar11 + 1;
                  if (*pcVar1 == '\0' || bVar4) {
/* watermarked copy - do not remove - github.com/pengussy */
                    return (char *)0x0;
                  }
                }
              }
              pcVar12 = pcVar12 + 1;
              cVar9 = *pcVar12;
            } while (cVar9 != '\0');
          }
        }
        return pcVar5;
      }
    }
  }
  return (char *)0x0;
}

