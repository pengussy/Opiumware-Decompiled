/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xdcf48:a522d91f0c
   =========================================================================== */

undefined8 FUN_000dcf48(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 ******ppppppuVar9;
  char cVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  long lVar16;
  char *pcVar17;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  undefined8 ******ppppppuStack_68;
  long lStack_60;
  char cStack_51;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  iVar4 = func_0x00791efc(param_1,1);
  if (iVar4 == 0) {
    pbVar6 = (byte *)(*pcRam000000000206a440)();
    if ((*pbVar6 & 1) == 0) goto LAB_000ddb38;
    do {
      pcStack_88 = (char *)(*pcRam000000000206a428)();
      if (*pcStack_88 == '\x01') {
        uVar1 = (byte)pcStack_88[1] ^ 0x357212ef;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xb662ec6b;
        pcStack_88[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x99 ^ 0x2c;
        uVar13 = (((ulong)(byte)pcStack_88[1] ^ 0x5d4c0df1d2532f87) << 0x11 | 0xba98) +
                 0x9e3779b97f4a7c15;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar15 >> 0x17);
        pcStack_88[0xb] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
/* more drops soon - github.com/pengussy */
        uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar15 >> 0x17);
        pcStack_88[0xc] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar15 >> 0x17);
        pcStack_88[0xd] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar15 >> 0x17);
        pcStack_88[0xe] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar15 ^ 0xffffffc3;
/* wm:do not claim this as your own */
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar15 >> 0x17);
        pcStack_88[0xf] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar15 >> 0x17);
        pcStack_88[0x10] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar15 >> 0x17);
        pcStack_88[0x11] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
        pcStack_88[0x12] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 10;
// no support for modified copies
      uVar8 = func_0x0011ab24(&pcStack_88);
      func_0x007a1ba8(param_1,1,uVar8);
LAB_000ddb38:
      func_0x019c4e2c();
    } while( true );
  }
  plVar5 = (long *)func_0x007926a8(param_1,1);
  lVar16 = *plVar5;
  pcVar17 = *(char **)(lRam0000000001f26710 + *(long *)(lRam0000000001f26720 + lVar16));
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (pcVar17 != (char *)0x0) {
    pbVar6 = (byte *)(*pcRam000000000206a470)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019c4d78();
    }
    pcStack_70 = (char *)(*pcRam000000000206a458)();
    if (*pcStack_70 == '\x01') {
      lVar11 = 0;
      uVar13 = 0x5880a350456d5a55;
/*  do not claim this as your own  */
      do {
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[lVar11 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        pcStack_70[lVar11 + 0xd] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = lVar11 + -0x61c8864680b583eb +
                 (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_70[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0xc);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0xd;
    pcVar7 = (char *)func_0x0011ab24(&pcStack_70);
    cVar10 = *pcVar17;
    if (cVar10 != '\0') {
/* WM - found on a paste site? it was re-uploaded illegally */
      pcVar12 = pcVar17;
      do {
        pcVar12 = pcVar12 + 1;
        if (cVar10 != *pcVar7) break;
        pcVar7 = pcVar7 + 1;
        cVar10 = *pcVar12;
      } while (cVar10 != '\0');
    }
    if (cVar10 == *pcVar7) {
LAB_000dd474:
      lVar16 = *(long *)(lRam0000000001f26600 + lVar16);
    }
    else {
      pbVar6 = (byte *)(*pcRam000000000206a4a0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c4db4();
      }
      pcStack_78 = (char *)(*pcRam000000000206a488)();
      if (*pcStack_78 == '\x01') {
        uVar1 = (byte)pcStack_78[1] ^ 0xee91b874;
/* do not claim this as your own - github.com/pengussy */
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x183923de;
        pcStack_78[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0xf ^ 0xb7;
        uVar13 = (((ulong)(byte)pcStack_78[1] ^ 0x455603823a73e1d) << 0x11 | 0x8aa) +
                 0x9e3779b97f4a7c15;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar15 >> 0x17);
        pcStack_78[9] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar15 >> 0x17);
        pcStack_78[10] =
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar15 >> 0x17);
        pcStack_78[0xb] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar15 >> 0x17);
        pcStack_78[0xc] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
/* unlicensed copy if this notice is missing */
        uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar15 >> 0x17);
        pcStack_78[0xd] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17);
        pcStack_78[0xe] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        *pcStack_78 = '\0';
      }
/* WM - watermarked copy - do not remove */
      pcStack_78 = pcStack_78 + 8;
      pcVar7 = (char *)func_0x0011ab24(&pcStack_78);
      cVar10 = *pcVar17;
      if (cVar10 != '\0') {
        pcVar12 = pcVar17;
        do {
          pcVar12 = pcVar12 + 1;
          if (cVar10 != *pcVar7) break;
          pcVar7 = pcVar7 + 1;
          cVar10 = *pcVar12;
        } while (cVar10 != '\0');
      }
      if (cVar10 == *pcVar7) goto LAB_000dd474;
      pbVar6 = (byte *)(*pcRam000000000206a4d0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c4df0();
      }
      pcStack_80 = (char *)(*pcRam000000000206a4b8)();
      if (*pcStack_80 == '\x01') {
        lVar11 = 0;
        uVar13 = 0xd29db33b21a03edd;
        do {
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_80[lVar11 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_80[lVar11 + 0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar15;
// WM - if you paid for this, you were scammed
          uVar13 = lVar11 + -0x61c8864680b583eb +
                   (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_80[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0xd);
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 0xe;
      pcVar7 = (char *)func_0x0011ab24(&pcStack_80);
      cVar10 = *pcVar17;
      if (cVar10 != '\0') {
        do {
          pcVar17 = pcVar17 + 1;
          if (cVar10 != *pcVar7) break;
          pcVar7 = pcVar7 + 1;
          cVar10 = *pcVar17;
        } while (cVar10 != '\0');
      }
      if (cVar10 != *pcVar7) goto LAB_000dd69c;
      lVar16 = *(long *)(lRam0000000001f26610 + lVar16);
    }
    if (lVar16 != 0) {
      plVar5 = (long *)(lVar16 + 0x10);
      if (&uStack_50 != plVar5) {
        bVar2 = *(byte *)(lVar16 + 0x27);
        if ((long)uStack_40 < 0) {
          uVar13 = *(ulong *)(lVar16 + 0x18);
          plVar3 = (long *)*plVar5;
          if (-1 < (char)bVar2) {
            uVar13 = (ulong)bVar2;
            plVar3 = plVar5;
          }
          func_0x001286c0(&uStack_50,plVar3,uVar13);
        }
        else if ((char)bVar2 < '\0') {
          func_0x001287e0(&uStack_50,*plVar5,*(undefined8 *)(lVar16 + 0x18));
        }
        else {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          uStack_48 = *(ulong *)(lVar16 + 0x18);
          uStack_50 = *plVar5;
          uStack_40 = *(ulong *)(lVar16 + 0x20);
        }
      }
      uVar13 = uStack_48;
      if (-1 < (long)uStack_40) {
        uVar13 = uStack_40 >> 0x38;
      }
      if (uVar13 != 0) {
        func_0x001d7090(&ppppppuStack_68,&uStack_50);
        if (cStack_51 < '\0') {
          if (lStack_60 == 0) goto LAB_000dd6fc;
          ppppppuVar9 = ppppppuStack_68;
LAB_000dd6f0:
          func_0x00792db8(param_1,ppppppuVar9);
        }
        else {
          if (cStack_51 != '\0') {
            ppppppuVar9 = &ppppppuStack_68;
            goto LAB_000dd6f0;
          }
LAB_000dd6fc:
          func_0x00792a48(param_1);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(ppppppuStack_68);
        }
        goto LAB_000dd6a4;
      }
    }
/* WM - stripping the watermark breaks the license */
  }
LAB_000dd69c:
  func_0x00792a48(param_1);
LAB_000dd6a4:
  if ((long)uStack_40 < 0) {
    __ZdlPv(uStack_50);
    return 1;
  }
  return 1;
}

