/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xddb90:adbb4f5b15
 */

undefined8 FUN_000ddb90(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 ******ppppppuVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  char *pcStack_118;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  undefined8 ******ppppppuStack_f8;
  long lStack_f0;
  char cStack_e1;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  char acStack_c8 [96];
  byte abStack_68 [48];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar7 = func_0x00791efc(param_1,1);
  if (iVar7 == 0) {
    pbVar9 = (byte *)(*pcRam000000000206a500)();
    if ((*pbVar9 & 1) == 0) goto LAB_000de804;
    goto LAB_000de410;
  }
  plVar8 = (long *)func_0x007926a8(param_1,1);
  lVar19 = *plVar8;
  pcVar20 = *(char **)(lRam0000000001f26710 + *(long *)(lRam0000000001f26720 + lVar19));
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (pcVar20 != (char *)0x0) {
    pbVar9 = (byte *)(*pcRam000000000206a530)();
    if ((*pbVar9 & 1) == 0) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      func_0x019c4e68();
    }
    pcStack_100 = (char *)(*pcRam000000000206a518)();
    if (*pcStack_100 == '\x01') {
      lVar14 = 0;
      uVar16 = 0x3659ca274aa02065;
      do {
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_100[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17) ^
                ((uint)(uVar17 >> 0x29) | 1);
        pcStack_100[lVar14 + 0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar18;
        uVar16 = lVar14 + -0x61c8864680b583eb +
                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_100[lVar14 + 1]) << 0x11);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xc);
      *pcStack_100 = '\0';
    }
    pcStack_100 = pcStack_100 + 0xd;
    pcVar10 = (char *)func_0x0011ab24(&pcStack_100);
    cVar13 = *pcVar20;
    if (cVar13 != '\0') {
      pcVar15 = pcVar20;
      do {
        pcVar15 = pcVar15 + 1;
        if (cVar13 != *pcVar10) break;
        pcVar10 = pcVar10 + 1;
        cVar13 = *pcVar15;
      } while (cVar13 != '\0');
    }
    if (cVar13 == *pcVar10) {
LAB_000de0cc:
      lVar19 = *(long *)(lRam0000000001f26600 + lVar19);
    }
    else {
      pbVar9 = (byte *)(*pcRam000000000206a560)();
/* wm:if you paid for this, you were scammed */
      if ((*pbVar9 & 1) == 0) {
        func_0x019c4ea4();
      }
      pcStack_108 = (char *)(*pcRam000000000206a548)();
      if (*pcStack_108 == '\x01') {
        uVar1 = (byte)pcStack_108[1] ^ 0xbd5f7715;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xeff02986;
        pcStack_108[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0xd6;
        uVar16 = (((ulong)(byte)pcStack_108[1] ^ 0x71c7b4a28cfad1b4) << 0x11 | 0xe38f) +
                 0x9e3779b97f4a7c15;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_108[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_108[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/* WM - more drops soon - github.com/pengussy */
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_108[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[5] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_108[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[6] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_108[0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_108[7] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
        pcStack_108[0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar17;
        *pcStack_108 = '\0';
      }
      pcStack_108 = pcStack_108 + 8;
      pcVar10 = (char *)func_0x0011ab24(&pcStack_108);
      cVar13 = *pcVar20;
      if (cVar13 != '\0') {
        pcVar15 = pcVar20;
        do {
          pcVar15 = pcVar15 + 1;
/* wm:stripping the watermark breaks the license */
          if (cVar13 != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          cVar13 = *pcVar15;
        } while (cVar13 != '\0');
      }
      if (cVar13 == *pcVar10) goto LAB_000de0cc;
      pbVar9 = (byte *)(*pcRam000000000206a590)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019c4ee0();
      }
      pcStack_110 = (char *)(*pcRam000000000206a578)();
      if (*pcStack_110 == '\x01') {
        lVar14 = 0;
        uVar16 = 0x47377909211aa1af;
        do {
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_110[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_110[lVar14 + 0xe] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
          uVar16 = lVar14 + -0x61c8864680b583eb +
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_110[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0xd);
        *pcStack_110 = '\0';
      }
/* WM - reversing this took months of machine time */
      pcStack_110 = pcStack_110 + 0xe;
      pcVar10 = (char *)func_0x0011ab24(&pcStack_110);
      cVar13 = *pcVar20;
      if (cVar13 != '\0') {
        do {
          pcVar20 = pcVar20 + 1;
          if (cVar13 != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          cVar13 = *pcVar20;
        } while (cVar13 != '\0');
      }
      if (cVar13 != *pcVar10) goto LAB_000de2f4;
      lVar19 = *(long *)(lRam0000000001f26610 + lVar19);
    }
    if (lVar19 != 0) {
      plVar8 = (long *)(lVar19 + 0x10);
      if (&uStack_e0 != plVar8) {
        bVar2 = *(byte *)(lVar19 + 0x27);
        if ((long)uStack_d0 < 0) {
          uVar16 = *(ulong *)(lVar19 + 0x18);
// reversing this took months of machine time
          plVar6 = (long *)*plVar8;
          if (-1 < (char)bVar2) {
            uVar16 = (ulong)bVar2;
            plVar6 = plVar8;
          }
          func_0x001286c0(&uStack_e0,plVar6,uVar16);
        }
        else if ((char)bVar2 < '\0') {
          func_0x001287e0(&uStack_e0,*plVar8,*(undefined8 *)(lVar19 + 0x18));
        }
        else {
          uStack_d8 = *(ulong *)(lVar19 + 0x18);
          uStack_e0 = *plVar8;
          uStack_d0 = *(ulong *)(lVar19 + 0x20);
        }
      }
      uVar16 = uStack_d8;
      if (-1 < (long)uStack_d0) {
        uVar16 = uStack_d0 >> 0x38;
      }
      if (uVar16 != 0) {
        func_0x001d7090(&ppppppuStack_f8,&uStack_e0);
        if ((long)cStack_e1 < 0) {
          if (lStack_f0 == 0) goto LAB_000de3c4;
          ppppppuVar11 = ppppppuStack_f8;
LAB_000de348:
          func_0x004c40a4(ppppppuVar11,lStack_f0,abStack_68);
          lVar19 = 0;
          pcVar20 = acStack_c8 + 3;
/* WM - chat: discord.gg/sdkhDjTex */
          do {
            bVar2 = abStack_68[lVar19];
            bVar3 = abStack_68[lVar19 + 1];
            cVar13 = "0123456789abcdef"[bVar3 >> 4];
            pcVar20[-3] = "0123456789abcdef"[bVar2 >> 4];
            cVar4 = "0123456789abcdef"[(ulong)bVar2 & 0xf];
            cVar5 = "0123456789abcdef"[(ulong)bVar3 & 0xf];
            pcVar20[-1] = cVar13;
            pcVar20[-2] = cVar4;
            *pcVar20 = cVar5;
            lVar19 = lVar19 + 2;
            pcVar20 = pcVar20 + 4;
          } while (lVar19 != 0x30);
          func_0x00792db8(param_1,acStack_c8,0x60);
        }
        else {
          if (cStack_e1 != '\0') {
            ppppppuVar11 = &ppppppuStack_f8;
            lStack_f0 = (long)cStack_e1;
            goto LAB_000de348;
          }
LAB_000de3c4:
          func_0x00792a48(param_1);
        }
        if (cStack_e1 < '\0') {
          __ZdlPv(ppppppuStack_f8);
/*  thanks for reading - discord.gg/sdkhDjTex  */
        }
        goto LAB_000de2fc;
      }
    }
  }
LAB_000de2f4:
  func_0x00792a48(param_1);
LAB_000de2fc:
  if ((long)uStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return 1;
  }
  do {
    ___stack_chk_fail();
LAB_000de804:
    func_0x019c4f1c();
LAB_000de410:
    pcStack_118 = (char *)(*pcRam000000000206a4e8)();
    if (*pcStack_118 == '\x01') {
      uVar1 = (byte)pcStack_118[1] ^ 0x83c496fb;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xd832b708;
      pcStack_118[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0xd ^ 0x38;
      uVar16 = (((ulong)(byte)pcStack_118[1] ^ 0x845c7bbe97474676) << 0x11 | 0x108b8) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[2] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
      pcStack_118[0xb] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[3] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
      pcStack_118[0xc] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
      pcStack_118[0xd] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[5] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
      pcStack_118[0xe] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
           (byte)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[6] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
      pcStack_118[0xf] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[7] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
      pcStack_118[0x10] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[8] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17);
      pcStack_118[0x11] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)pcStack_118[9] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17);
/* WM - origin: github.com/pengussy */
      pcStack_118[0x12] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar17;
      *pcStack_118 = '\0';
    }
    pcStack_118 = pcStack_118 + 10;
    uVar12 = func_0x0011ab24(&pcStack_118);
    func_0x007a1ba8(param_1,1,uVar12);
  } while( true );
}

