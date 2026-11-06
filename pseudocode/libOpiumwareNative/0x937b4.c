/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x937b4:a8535e5a76
   =========================================================================== */

undefined8 FUN_000937b4(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  long unaff_x24;
  long unaff_x25;
  ulong uVar14;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
/* WM - proprietary - see LICENSE - do not sell */
  char *pcStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
/* WM - reversing this took months of machine time */
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar14 = 1;
  iVar4 = func_0x00791be4(param_1,1);
  if ((iVar4 != 3) && (iVar4 = func_0x00791be4(param_1,1), iVar4 != 4)) {
    iVar4 = func_0x00791be4(param_1,1);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    if (iVar4 != 8) {
      pbVar5 = (byte *)(*pcRam0000000002065c40)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf3b4();
      }
      pcStack_1f8 = (char *)(*pcRam0000000002065c28)();
      if (*pcStack_1f8 == '\x01') {
        lVar8 = 0;
        uVar14 = 0x93ebd67b71e2a433;
        do {
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_1f8[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17) ^
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_1f8[lVar8 + 0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9
          ;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
          uVar14 = lVar8 + -0x61c8864680b583eb +
                   (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_1f8[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x13);
        *pcStack_1f8 = '\0';
      }
      pcStack_1f8 = pcStack_1f8 + 0x14;
      uVar6 = func_0x0011ab24(&pcStack_1f8);
      func_0x007a1ba8(param_1,1,uVar6);
LAB_000967dc:
      func_0x019bf774();
LAB_00096324:
      pcStack_278 = (char *)(*pcRam0000000002065cb8)();
      if (*pcStack_278 == '\x01') {
        lVar8 = 0;
        uVar14 = (unaff_x24 * -0x363d501876efe3a1 ^ (ulong)(unaff_x24 * -0x363d501876efe3a1) >> 0x21
                 ) * unaff_x25;
        uVar14 = uVar14 ^ uVar14 >> 0x21;
        do {
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * unaff_x24;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * unaff_x25;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_278[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
          pcStack_278[lVar8 + 0x11] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = lVar8 + -0x61c8864680b583eb +
                   (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_278[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x10);
        *pcStack_278 = '\0';
/*  found on a paste site? it was re-uploaded illegally  */
      }
      pcStack_278 = pcStack_278 + 0x11;
      uVar6 = func_0x0011ab24(&pcStack_278);
      func_0x007a1abc(param_1,2,uVar6);
      goto LAB_00096694;
    }
    uVar14 = 0;
  }
  pbVar5 = (byte *)(*pcRam0000000002065c70)();
  if ((*pbVar5 & 1) == 0) goto LAB_000962a4;
  while( true ) {
    unaff_x24 = -0xae502812aa7333;
    unaff_x25 = -0x3b314601e57a13ad;
    pcStack_200 = (char *)(*pcRam0000000002065c58)();
    if (*pcStack_200 == '\x01') {
      uVar1 = (byte)pcStack_200[1] ^ 0x38727ee7;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x2eb94471;
      pcStack_200[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) + 0xaf ^ 0x24;
      uVar10 = (((ulong)(byte)pcStack_200[1] ^ 0x9abf8294580ac2de) << 0x11 | 0x1357f) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_200[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
      pcStack_200[9] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_200[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
// WM - origin: github.com/pengussy
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_200[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
      pcStack_200[10] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_200[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_200[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
      pcStack_200[0xb] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_200[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/*  stripping the watermark breaks the license  */
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_200[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
      pcStack_200[0xc] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_200[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_200[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
      pcStack_200[0xd] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_200[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_200[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_200[0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_200 = '\0';
    }
    pcStack_200 = pcStack_200 + 8;
    uVar6 = func_0x0011ab24(&pcStack_200);
    uVar6 = func_0x007a1d50(param_1,2,uVar6,0);
    uVar10 = _strlen();
    if (0x7ffffffffffffff6 < uVar10) break;
    if (uVar10 < 0x17) {
      uStack_1c8 = CONCAT17((char)uVar10,(undefined7)uStack_1c8);
      pppppppuVar7 = &pppppppuStack_1d8;
    }
    else {
      uVar9 = (uVar10 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar9 != 0x18) {
        uVar11 = uVar9;
      }
      pppppppuVar7 = (undefined8 *******)__Znwm(uVar11);
      uStack_1c8 = uVar11 | 0x8000000000000000;
      pppppppuStack_1d8 = pppppppuVar7;
      uStack_1d0 = uVar10;
    }
    _memmove(pppppppuVar7,uVar6,uVar10);
    *(undefined1 *)((long)pppppppuVar7 + uVar10) = 0;
    pbVar5 = (byte *)(*pcRam0000000002065ca0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bf42c();
    }
    pcStack_208 = (char *)(*pcRam0000000002065c88)();
    if (*pcStack_208 == '\x01') {
      uVar1 = (byte)pcStack_208[1] ^ 0xdc9eb82f;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x75235af;
      pcStack_208[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xec;
      uVar10 = (((ulong)(byte)pcStack_208[1] ^ 0x5f8cedde0a82ca28) << 0x11 | 0xbf19) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_208[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_208[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_208[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_208[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_208[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_208[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_208[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_208[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_208[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_208[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_208[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_208[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_208[6] ^ (uint)uVar11 ^ 0xffffffc3;
/* do not claim this as your own - github.com/pengussy */
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_208[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_208[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_208[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_208[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
      *pcStack_208 = '\0';
    }
    pcStack_208 = pcStack_208 + 8;
    uVar6 = func_0x0011ab24(&pcStack_208);
    uVar10 = _strlen();
    if (0x7ffffffffffffff6 < uVar10) goto LAB_00096438;
    if (uVar10 < 0x17) {
      uStack_1e0 = CONCAT17((char)uVar10,(undefined7)uStack_1e0);
      pppppppuVar7 = &pppppppuStack_1f0;
    }
    else {
      uVar9 = (uVar10 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar9 != 0x18) {
        uVar11 = uVar9;
      }
      pppppppuVar7 = (undefined8 *******)__Znwm(uVar11);
      uStack_1e0 = uVar11 | 0x8000000000000000;
      pppppppuStack_1f0 = pppppppuVar7;
      uStack_1e8 = uVar10;
    }
    _memmove(pppppppuVar7,uVar6,uVar10);
    *(undefined1 *)((long)pppppppuVar7 + uVar10) = 0;
    uVar10 = uStack_1c8 >> 0x38;
    pppppppuVar7 = pppppppuStack_1d8;
    pppppppuVar13 = (undefined8 *******)((long)pppppppuStack_1d8 + uStack_1d0);
// WM - do not claim this as your own
    if (-1 < (long)uStack_1c8) {
      pppppppuVar7 = &pppppppuStack_1d8;
      pppppppuVar13 = (undefined8 *******)((long)&pppppppuStack_1d8 + uVar10);
    }
    if (pppppppuVar7 == pppppppuVar13) {
      if (-1 < (long)uStack_1c8) goto LAB_00093fc0;
LAB_00093fd8:
      if (uStack_1d0 != 0) {
        uVar10 = uStack_1d0;
        pppppppuVar7 = pppppppuStack_1d8;
        goto LAB_00093fe4;
      }
LAB_0009630c:
      pbVar5 = (byte *)(*pcRam0000000002065cd0)();
      if ((*pbVar5 & 1) == 0) goto LAB_000967dc;
      goto LAB_00096324;
    }
    do {
      uVar3 = ___tolower(*(undefined1 *)pppppppuVar7);
      pppppppuVar12 = (undefined8 *******)((long)pppppppuVar7 + 1);
      *(undefined1 *)pppppppuVar7 = uVar3;
      pppppppuVar7 = pppppppuVar12;
    } while (pppppppuVar12 != pppppppuVar13);
    uVar10 = uStack_1c8 >> 0x38;
    if ((long)uStack_1c8 < 0) goto LAB_00093fd8;
LAB_00093fc0:
    if ((int)uVar10 == 0) goto LAB_0009630c;
    pppppppuVar7 = &pppppppuStack_1d8;
LAB_00093fe4:
    uVar9 = 0;
    pppppppuVar13 = pppppppuStack_1f0;
    uVar11 = uStack_1e8;
    if (-1 < (long)uStack_1e0) {
      pppppppuVar13 = &pppppppuStack_1f0;
      uVar11 = uStack_1e0 >> 0x38;
    }
    do {
      lVar8 = _memchr(pppppppuVar13,(long)*(char *)((long)pppppppuVar7 + uVar9),uVar11);
/* keep the notice, keep the source honest */
      if (lVar8 == 0) {
        if (uVar9 != 0xffffffffffffffff) goto LAB_0009630c;
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
    if ((int)uVar14 == 0) {
      iVar4 = func_0x00791be4(param_1,1);
      if (iVar4 == 8) {
        iVar4 = func_0x00791650(param_1);
        uVar14 = (ulong)(uint)-iVar4;
      }
      else {
        uVar14 = 0;
      }
    }
    else {
      uVar14 = func_0x007f4d48(param_1,1);
    }
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
/*  no support for modified copies  */
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    func_0x007911b0(param_1,1);
    pbVar5 = (byte *)(*pcRam0000000002065d00)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bf468();
    }
    pcStack_210 = (char *)(*pcRam0000000002065ce8)();
    if (*pcStack_210 == '\x01') {
      uVar1 = (byte)pcStack_210[1] ^ 0x93a685ae;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x55d36ead;
      pcStack_210[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x6d;
      uVar10 = (((ulong)(byte)pcStack_210[1] ^ 0x17d5b48c6b384f0b) << 0x11 | 0x2fab) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_210[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_210[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_210[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_210[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_210[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_210[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
/* no support for modified copies - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_210[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_210[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_210[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_210[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_210[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_210[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_210[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_210[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_210[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar1 = (uint)(byte)pcStack_210[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_210[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      *pcStack_210 = '\0';
    }
    pcStack_210 = pcStack_210 + 8;
    uVar6 = func_0x0011ab24(&pcStack_210);
    iVar4 = func_0x007f5068(param_1,uVar14,uVar6,&lStack_1c0);
    if (iVar4 == 0) {
      pbVar5 = (byte *)(*pcRam0000000002065d30)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf738();
      }
      pcStack_270 = (char *)(*pcRam0000000002065d18)();
      if (*pcStack_270 == '\x01') {
        lVar8 = 0;
        uVar14 = 0xf65e33d4893427df;
        do {
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
// WM - unlicensed copy if this notice is missing
          uVar1 = (uint)(byte)pcStack_270[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
          pcStack_270[lVar8 + 0x18] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = lVar8 + -0x61c8864680b583eb +
                   (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_270[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x17);
        *pcStack_270 = '\0';
      }
      pcStack_270 = pcStack_270 + 0x18;
      func_0x0011ab24(&pcStack_270);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_00096694;
    }
    iVar4 = func_0x00791be4(param_1,0xffffffff);
    if (iVar4 != 8) {
      pbVar5 = (byte *)(*pcRam0000000002065d60)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf4a4();
      }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      pcStack_218 = (char *)(*pcRam0000000002065d48)();
      if (*pcStack_218 == '\x01') {
        lVar8 = 0;
        uVar14 = 0x5b1e06c28d90b0a9;
        do {
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_218[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
          pcStack_218[lVar8 + 0x24] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = lVar8 + -0x61c8864680b583eb +
                   (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_218[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x23);
        *pcStack_218 = '\0';
      }
      pcStack_218 = pcStack_218 + 0x24;
      func_0x0011ab24(&pcStack_218);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_00096694;
    }
    func_0x00793bd0(param_1,0,0);
    uVar10 = uStack_1d0;
    pppppppuVar13 = pppppppuStack_1d8;
    uVar9 = (ulong)uStack_1c8._7_1_;
    uVar1 = (uint)(char)uStack_1c8._7_1_;
    uVar14 = uStack_1d0;
    pppppppuVar7 = pppppppuStack_1d8;
    if (-1 < (int)uVar1) {
      uVar14 = uVar9;
      pppppppuVar7 = &pppppppuStack_1d8;
    }
    lVar8 = _memchr(pppppppuVar7,0x73,uVar14);
    uVar14 = (ulong)uVar1;
// WM - watermarked copy - do not remove
    if ((lVar8 != 0) && (lVar8 - (long)pppppppuVar7 != -1)) {
      func_0x00792f00(param_1,uStack_1b8);
      pbVar5 = (byte *)(*pcRam0000000002065d90)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf4e0();
      }
      pcStack_220 = (char *)(*pcRam0000000002065d78)();
      if (*pcStack_220 == '\x01') {
        uVar1 = (byte)pcStack_220[1] ^ 0x7eff4277;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xddf3b29b;
        pcStack_220[6] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0xb4;
        uVar14 = (((ulong)(byte)pcStack_220[1] ^ 0xc8fecb7c12c21a2e) << 0x11 | 0x191fd) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_220[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_220[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_220[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/*  if you paid for this, you were scammed  */
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_220[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_220[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_220[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_220[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_220[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_220[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_220[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_220[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar10;
        *pcStack_220 = '\0';
      }
      pcStack_220 = pcStack_220 + 6;
      uVar6 = func_0x0011ab24(&pcStack_220);
// WM - no support for modified copies
      func_0x00794260(param_1,0xfffffffe,uVar6);
      if (lStack_1a8 != 0) {
        func_0x00792f00(param_1);
        pbVar5 = (byte *)(*pcRam0000000002065dc0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019bf51c();
        }
        pcStack_228 = (char *)(*pcRam0000000002065da8)();
        if (*pcStack_228 == '\x01') {
          uVar1 = (byte)pcStack_228[1] ^ 0x1502bbc9;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xcb44582b;
          pcStack_228[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - 0x2f ^ 10;
          uVar14 = (((ulong)(byte)pcStack_228[1] ^ 0x4b6e80ef9097e378) << 0x11 | 0x96dd) +
                   0x9e3779b97f4a7c15;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[2] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_228[0xc] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          uVar1 = (uint)(byte)pcStack_228[3] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_228[0xd] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[4] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_228[0xe] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[5] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_228[0xf] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[6] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_228[0x10] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[7] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_228[0x11] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[8] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
/* WM - keep the notice, keep the source honest */
          pcStack_228[0x12] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[9] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
          pcStack_228[0x13] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_228[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_228[10] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17);
          pcStack_228[0x14] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar10;
          *pcStack_228 = '\0';
        }
        pcStack_228 = pcStack_228 + 0xb;
        uVar6 = func_0x0011ab24(&pcStack_228);
        func_0x00794260(param_1,0xfffffffe,uVar6);
      }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (lStack_1b0 != 0) {
        func_0x00792f00(param_1);
        pbVar5 = (byte *)(*pcRam0000000002065df0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019bf558();
        }
        pcStack_230 = (char *)(*pcRam0000000002065dd8)();
        if (*pcStack_230 == '\x01') {
          uVar1 = (byte)pcStack_230[1] ^ 0x5ecc9d18;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd1c35545;
          pcStack_230[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0xdb;
          uVar14 = (((ulong)(byte)pcStack_230[1] ^ 0xe003d48519c6cf1d) << 0x11 | 0x1c007) +
                   0x9e3779b97f4a7c15;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_230[2] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_230[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_230[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
// found on a paste site? it was re-uploaded illegally
          uVar1 = (uint)(byte)pcStack_230[3] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_230[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_230[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_230[4] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_230[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_230[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_230[5] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_230[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_230[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_230[6] ^ (uint)uVar9 ^ 0xffffffc3;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_230[0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_230[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_230[7] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_230[0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar10;
          *pcStack_230 = '\0';
        }
        pcStack_230 = pcStack_230 + 8;
        uVar6 = func_0x0011ab24(&pcStack_230);
        func_0x00794260(param_1,0xfffffffe,uVar6);
      }
      func_0x00792b10((double)(long)(int)uStack_190,param_1);
      pbVar5 = (byte *)(*pcRam0000000002065e20)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf594();
      }
      pcStack_238 = (char *)(*pcRam0000000002065e08)();
      if (*pcStack_238 == '\x01') {
        lVar8 = 0;
        uVar14 = 0xf7213800a2c4e3b4;
/* found on a paste site? it was re-uploaded illegally */
        do {
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_238[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_238[lVar8 + 0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
          uVar14 = lVar8 + -0x61c8864680b583eb +
                   (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_238[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0xc);
        *pcStack_238 = '\0';
      }
      pcStack_238 = pcStack_238 + 0xd;
      uVar6 = func_0x0011ab24(&pcStack_238);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      uVar9 = uStack_1c8 >> 0x38;
      pppppppuVar13 = pppppppuStack_1d8;
      uVar10 = uStack_1d0;
      uVar14 = uVar9;
    }
    uVar11 = uVar10;
    pppppppuVar7 = pppppppuVar13;
    if (-1 < (char)uVar14) {
      uVar11 = uVar9;
      pppppppuVar7 = &pppppppuStack_1d8;
    }
    lVar8 = _memchr(pppppppuVar7,0x6c,uVar11);
    if ((lVar8 != 0) && (lVar8 - (long)pppppppuVar7 != -1)) {
      func_0x00792b10((double)(long)(int)uStack_198,param_1);
      pbVar5 = (byte *)(*pcRam0000000002065e50)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf5d0();
      }
      pcStack_240 = (char *)(*pcRam0000000002065e38)();
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (*pcStack_240 == '\x01') {
        lVar8 = 0;
        uVar14 = 0xbc263790e2d879cb;
        do {
          uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_240[lVar8 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17);
          pcStack_240[lVar8 + 0xd] =
               ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar14 = lVar8 + -0x61c8864680b583eb +
                   (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_240[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0xc);
        *pcStack_240 = '\0';
      }
      pcStack_240 = pcStack_240 + 0xd;
      uVar6 = func_0x0011ab24(&pcStack_240);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      uVar9 = uStack_1c8 >> 0x38;
      pppppppuVar13 = pppppppuStack_1d8;
      uVar10 = uStack_1d0;
      uVar14 = uVar9;
    }
    uVar11 = uVar10;
    pppppppuVar7 = pppppppuVar13;
    if (-1 < (char)uVar14) {
      uVar11 = uVar9;
      pppppppuVar7 = &pppppppuStack_1d8;
    }
    lVar8 = _memchr(pppppppuVar7,0x6e,uVar11);
/* wm:chat: discord.gg/sdkhDjTex */
    if (((lVar8 != 0) && (lVar8 - (long)pppppppuVar7 != -1)) && (lStack_1c0 != 0)) {
      func_0x00792f00(param_1);
      pbVar5 = (byte *)(*pcRam0000000002065e80)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf60c();
      }
      pcStack_248 = (char *)(*pcRam0000000002065e68)();
      if (*pcStack_248 == '\x01') {
        uVar1 = (byte)pcStack_248[1] ^ 0x2333bd1;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x8a2458ac;
        pcStack_248[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x12;
        uVar14 = (((ulong)(byte)pcStack_248[1] ^ 0xbee4eceb585420c) << 0x11 | 0x17dc) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_248[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_248[7] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_248[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_248[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_248[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_248[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_248[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        pcStack_248[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_248[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_248[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_248[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        *pcStack_248 = '\0';
      }
      pcStack_248 = pcStack_248 + 6;
      uVar6 = func_0x0011ab24(&pcStack_248);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      uVar9 = uStack_1c8 >> 0x38;
      pppppppuVar13 = pppppppuStack_1d8;
      uVar10 = uStack_1d0;
      uVar14 = uVar9;
    }
    uVar11 = uVar10;
    pppppppuVar7 = pppppppuVar13;
    if (-1 < (char)uVar14) {
      uVar11 = uVar9;
      pppppppuVar7 = &pppppppuStack_1d8;
    }
    lVar8 = _memchr(pppppppuVar7,0x61,uVar11);
    if ((lVar8 != 0) && (lVar8 - (long)pppppppuVar7 != -1)) {
      uVar6 = NEON_ucvtf(uStack_1a0 >> 8 & 0xff);
      func_0x00792b10(uVar6,param_1);
      pbVar5 = (byte *)(*pcRam0000000002065eb0)();
      if ((*pbVar5 & 1) == 0) {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        func_0x019bf648();
      }
      pcStack_250 = (char *)(*pcRam0000000002065e98)();
      if (*pcStack_250 == '\x01') {
        uVar1 = (byte)pcStack_250[1] ^ 0xc04d6f17;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd9de581 ^ 0x31bc99;
        pcStack_250[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x2c;
        uVar14 = (((ulong)(byte)pcStack_250[1] ^ 0xab2f2638b8901808) << 0x11 | 0x1565e) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[4] ^ (uint)uVar9 ^ 0xffffffc3;
/*  proprietary - see LICENSE - do not sell  */
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[7] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[8] ^ (uint)uVar9 ^ 0xffffffc3;
/* donate: donate/README.md */
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[9] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_250[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_250[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_250[10] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_250[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
        *pcStack_250 = '\0';
      }
      pcStack_250 = pcStack_250 + 0xb;
      uVar6 = func_0x0011ab24(&pcStack_250);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      uVar6 = NEON_ucvtf(uStack_1a0 >> 0x10 & 0xff);
      func_0x00792b10(uVar6,param_1);
      pbVar5 = (byte *)(*pcRam0000000002065ee0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf684();
      }
      pcStack_258 = (char *)(*pcRam0000000002065ec8)();
      if (*pcStack_258 == '\x01') {
        uVar1 = (byte)pcStack_258[1] ^ 0x6f78f3e0;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x44f328df ^ 0x212ec3;
        pcStack_258[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0x23;
        uVar14 = (((ulong)(byte)pcStack_258[1] ^ 0x2367c129afed7680) << 0x11 | 0x46cf) +
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
/* wm:origin: github.com/pengussy */
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[7] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[8] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
// chat: discord.gg/sdkhDjTex
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[9] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_258[0x13] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_258[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_258[10] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_258[0x14] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
        *pcStack_258 = '\0';
      }
      pcStack_258 = pcStack_258 + 0xb;
      uVar6 = func_0x0011ab24(&pcStack_258);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      uVar9 = uStack_1c8 >> 0x38;
/*  chat: discord.gg/sdkhDjTex  */
      pppppppuVar13 = pppppppuStack_1d8;
      uVar10 = uStack_1d0;
      uVar14 = uVar9;
    }
    uVar11 = uVar10;
    pppppppuVar7 = pppppppuVar13;
    if (-1 < (char)uVar14) {
      uVar11 = uVar9;
      pppppppuVar7 = &pppppppuStack_1d8;
    }
    lVar8 = _memchr(pppppppuVar7,0x66,uVar11);
    if ((lVar8 != 0) && (lVar8 - (long)pppppppuVar7 != -1)) {
      func_0x00791ab0(param_1,0xfffffffe);
      pbVar5 = (byte *)(*pcRam0000000002065f10)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf6c0();
      }
      pcStack_260 = (char *)(*pcRam0000000002065ef8)();
      if (*pcStack_260 == '\x01') {
        uVar1 = (byte)pcStack_260[1] ^ 0xc7ce9a66;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x46451590 ^ 0x106e6f;
        pcStack_260[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x5b;
        uVar14 = (((ulong)(byte)pcStack_260[1] ^ 0x60923504b51a8da7) << 0x11 | 0xc124) +
/* origin: github.com/pengussy */
                 0x9e3779b97f4a7c15;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_260[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_260[7] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_260[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_260[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_260[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_260[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_260[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_260[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
        uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_260[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_260[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
/*  more drops soon - github.com/pengussy  */
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_260[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar10;
        *pcStack_260 = '\0';
      }
      pcStack_260 = pcStack_260 + 6;
      uVar6 = func_0x0011ab24(&pcStack_260);
      func_0x00794260(param_1,0xfffffffe,uVar6);
      uVar9 = uStack_1c8 >> 0x38;
      pppppppuVar13 = pppppppuStack_1d8;
      uVar10 = uStack_1d0;
      uVar14 = uVar9;
    }
    if (-1 < (char)uVar14) {
      uVar10 = uVar9;
      pppppppuVar13 = &pppppppuStack_1d8;
    }
    lVar8 = _memchr(pppppppuVar13,0x75,uVar10);
    if ((lVar8 != 0) && (lVar8 - (long)pppppppuVar13 != -1)) {
      uVar6 = NEON_ucvtf(uStack_1a0 & 0xff);
      func_0x00792b10(uVar6,param_1);
      pbVar5 = (byte *)(*pcRam0000000002065f40)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019bf6fc();
      }
/* reversing this took months of machine time - github.com/pengussy */
      pcStack_268 = (char *)(*pcRam0000000002065f28)();
      if (*pcStack_268 == '\x01') {
        uVar1 = (byte)pcStack_268[1] ^ 0x1bc8e88a;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xdda2b5b7;
        pcStack_268[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x49;
        uVar10 = (((ulong)(byte)pcStack_268[1] ^ 0x7612b2593a489fdb) << 0x11 | 0xec25) +
                 0x9e3779b97f4a7c15;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_268[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_268[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_268[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_268[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_268[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_268[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_268[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_268[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_268[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_268[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
// do not claim this as your own
        pcStack_268[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
        *pcStack_268 = '\0';
      }
      pcStack_268 = pcStack_268 + 6;
      uVar6 = func_0x0011ab24(&pcStack_268);
      func_0x00794260(param_1,0xfffffffe,uVar6);
    }
    if ((long)uStack_1e0 < 0) {
      __ZdlPv(pppppppuStack_1f0);
      if (-1 < (long)uStack_1c8) goto LAB_00096234;
LAB_00096280:
      __ZdlPv(pppppppuStack_1d8);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
        return 1;
      }
    }
    else {
      if ((long)uStack_1c8 < 0) goto LAB_00096280;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
LAB_00096234:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
        return 1;
      }
    }
    ___stack_chk_fail();
LAB_000962a4:
    func_0x019bf3f0();
  }
  FUN_0000aa50();
LAB_00096438:
  FUN_0000aa50();
LAB_00096694:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x96698);
  (*pcVar2)();
}

