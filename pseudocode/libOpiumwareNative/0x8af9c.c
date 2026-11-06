/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x8af9c:d2143bfb32
 */

undefined8 FUN_0008af9c(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 ****ppppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  iVar2 = func_0x00791db8(param_1,1);
  if (iVar2 == 0) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    pbVar7 = (byte *)(*pcRam0000000002065370)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019bece8();
    }
    pcStack_b0 = (char *)(*pcRam0000000002065358)();
    if (*pcStack_b0 == '\x01') {
      uVar8 = (byte)pcStack_b0[1] ^ 0x89469e7e;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) + 0xb595c682;
      pcStack_b0[8] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ 0xbd;
      uVar6 = (((ulong)(byte)pcStack_b0[1] ^ 0x8f5bc3c5dfedad45) << 0x11 | 0x11eb7) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar8 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_b0[9] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar8 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_b0[10] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar8 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_b0[0xb] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
/*  more drops soon - github.com/pengussy  */
      uVar8 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_b0[0xc] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar8 = (uint)(byte)pcStack_b0[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_b0[0xd] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_b0[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_b0[0xe] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ (byte)uVar11;
      *pcStack_b0 = '\0';
    }
    pcStack_b0 = pcStack_b0 + 8;
    uVar3 = func_0x0011ab24(&pcStack_b0);
    func_0x007a1ba8(param_1,1,uVar3);
LAB_0008b4ec:
    pbVar7 = (byte *)(*pcRam00000000020653a0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019bebbc();
    }
    pcStack_88 = (char *)(*pcRam0000000002065388)();
// WM - proprietary - see LICENSE - do not sell
    if (*pcStack_88 == '\x01') {
      lVar9 = 0;
      uVar6 = 0xad01393718361a43;
      do {
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
        uVar8 = (uint)(byte)pcStack_88[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar8 = (uVar8 >> 5 & 7 | uVar8 << 3) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[lVar9 + 0x28] = ((byte)(uVar8 >> 2) & 0x3f | (char)uVar8 * '@') ^ (byte)uVar10;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x27);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x28;
    func_0x0011ab24(&pcStack_88);
    func_0x007a1b5c(param_1,"%s");
LAB_0008b634:
    pbVar7 = (byte *)(*pcRam00000000020653d0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019becac();
    }
    pcStack_a8 = (char *)(*pcRam00000000020653b8)();
    if (*pcStack_a8 == '\x01') {
/* wm:keep the notice, keep the source honest */
      lVar9 = 0;
      uVar6 = 0x33df7a6990319539;
      do {
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
        uVar8 = (uint)(byte)pcStack_a8[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar8 = (uVar8 >> 5 & 7 | uVar8 << 3) - (int)(uVar10 >> 0x17);
        pcStack_a8[lVar9 + 0x2f] =
             ((byte)(uVar8 >> 4) & 0xf | (char)uVar8 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar10;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x2e);
      *pcStack_a8 = '\0';
    }
    pcStack_a8 = pcStack_a8 + 0x2f;
    func_0x0011ab24(&pcStack_a8);
    func_0x007a1b5c(param_1,"%s");
LAB_0008b77c:
    pbVar7 = (byte *)(*pcRam0000000002065400)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019bec70();
    }
    pcStack_a0 = (char *)(*pcRam00000000020653e8)();
    if (*pcStack_a0 == '\x01') {
      lVar9 = 0;
/* WM - no support for modified copies */
      uVar6 = 0xead1f3d0d88ad860;
      do {
        uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar11 ^ uVar11 >> 0x21;
        uVar8 = (uint)(byte)pcStack_a0[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) - (int)(uVar10 >> 0x17);
        pcStack_a0[lVar9 + 0x2f] =
             ((byte)(uVar8 >> 4) & 0xf | (char)uVar8 * '\x10') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar10;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x2e);
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 0x2f;
    func_0x0011ab24(&pcStack_a0);
    func_0x007a1b5c(param_1,"%s");
  }
  else {
    dVar12 = (double)func_0x007920a4(param_1,1,0);
    if ((dVar12 < 1.0) || (0x7fefffffffffffff < (ulong)ABS(dVar12))) goto LAB_0008b4ec;
    if (2147483647.0 < dVar12) goto LAB_0008b634;
    uVar8 = (uint)dVar12;
    uVar11 = (ulong)(int)uVar8;
/*  stripping the watermark breaks the license  */
    uVar6 = uVar11 + (long)(int)uVar8 * 2;
    if (0x1fffffff3 < uVar6) goto LAB_0008b77c;
    uVar10 = (uVar6 >> 2) + 3;
    uVar3 = __Znwm(uVar10);
    _bzero(uVar3,uVar10);
    pcVar4 = (code *)func_0x0011ab24(&DAT_004b2650);
    iVar2 = (*pcVar4)(uVar3,uVar10);
    if (iVar2 == 1) {
      ppppuStack_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      pcVar4 = (code *)func_0x0011ab24(&DAT_0003dce4);
      if (uVar6 < 0x50) {
        uStack_70 = CONCAT17((char)uVar10,(undefined7)uStack_70);
        ppppuVar5 = &ppppuStack_80;
      }
      else {
        uVar6 = (uVar10 & 0xfffffff8) + 8;
        uVar1 = 0x19;
        if (uVar6 != 0x18) {
          uVar1 = uVar6;
        }
        ppppuVar5 = (undefined8 ****)__Znwm(uVar1);
        uStack_70 = uVar1 | 0x8000000000000000;
        ppppuStack_80 = ppppuVar5;
        uStack_78 = uVar10;
      }
      _memcpy(ppppuVar5,uVar3,uVar10);
      *(undefined1 *)((long)ppppuVar5 + uVar10) = 0;
      uVar6 = (*pcVar4)(&ppppuStack_80,&ppppuStack_68);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppppuStack_80);
      }
      if ((uVar6 & 1) == 0) {
        pbVar7 = (byte *)(*pcRam0000000002065460)();
        if ((*pbVar7 & 1) == 0) {
          func_0x019bec34();
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        }
        pcStack_98 = (char *)(*pcRam0000000002065448)();
        if (*pcStack_98 == '\x01') {
          lVar9 = 0;
          uVar6 = 0xf48e0a2d2a231c43;
          do {
            uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar11 ^ uVar11 >> 0x21;
            uVar8 = (uint)(byte)pcStack_98[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) - (int)(uVar10 >> 0x17) ^
                    ((uint)(uVar11 >> 0x29) | 1);
            pcStack_98[lVar9 + 0x18] =
                 ((byte)(uVar8 >> 1) & 0x7f | (byte)(uVar8 << 7)) - (char)uVar10;
            uVar6 = lVar9 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[lVar9 + 1]) << 0x11);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x17);
          *pcStack_98 = '\0';
        }
        pcStack_98 = pcStack_98 + 0x18;
        func_0x0011ab24(&pcStack_98);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_0008bb58;
      }
      iVar2 = (int)uStack_58._7_1_;
      if (uStack_58._7_1_ < 0) {
        if (uVar11 < uStack_60) {
          *(undefined1 *)((long)ppppuStack_68 + uVar11) = 0;
          iVar2 = (int)uStack_58._7_1_;
          uStack_60 = uVar11;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          if (-1 < uStack_58) goto LAB_0008b14c;
        }
LAB_0008b158:
        ppppuVar5 = ppppuStack_68;
        uVar6 = uStack_60;
      }
      else {
        if (uVar8 <= (uint)(int)uStack_58._7_1_ && (int)uStack_58._7_1_ != uVar8) {
          uStack_58 = CONCAT17((char)uVar8,(undefined7)uStack_58);
          *(undefined1 *)((long)&ppppuStack_68 + uVar11) = 0;
          iVar2 = (int)uStack_58._7_1_;
          if (uStack_58 < 0) goto LAB_0008b158;
        }
LAB_0008b14c:
        uVar6 = (ulong)iVar2;
        ppppuVar5 = &ppppuStack_68;
      }
      func_0x00792db8(param_1,ppppuVar5,uVar6);
      if (uStack_58 < 0) {
        __ZdlPv(ppppuStack_68);
      }
      __ZdlPv(uVar3);
      return 1;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
  }
  pbVar7 = (byte *)(*pcRam0000000002065430)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019bebf8();
  }
  pcStack_90 = (char *)(*pcRam0000000002065418)();
  if (*pcStack_90 == '\x01') {
    lVar9 = 0;
    uVar6 = 0x4a9ad0fd7eec4b30;
    do {
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar11 ^ uVar11 >> 0x21;
      uVar8 = (uint)(byte)pcStack_90[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 2 & 0x3f | uVar8 << 6) - (int)(uVar10 >> 0x17);
      pcStack_90[lVar9 + 0x2e] =
           ((byte)(uVar8 >> 1) & 0x7f | (char)uVar8 * -0x80) - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar6 = lVar9 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[lVar9 + 1]) << 0x11);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x2d);
// WM - origin: github.com/pengussy
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 0x2e;
  func_0x0011ab24(&pcStack_90);
  func_0x007a1b5c(param_1,"%s");
LAB_0008bb58:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x8bb5c);
  (*pcVar4)();
}

