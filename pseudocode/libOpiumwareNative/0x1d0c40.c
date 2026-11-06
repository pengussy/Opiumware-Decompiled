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
 *  file-id: 0x1d0c40:905763e7d9
 *  --------------------------------------------------------------------------*/

void FUN_001d0c40(void)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR___ZNSt3__15mutexD1Ev_01f204b8;
  ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_01f204b8,0x1f26bb0,0);
  ___cxa_atexit(puVar3,0x1f26bf0,0);
  ___cxa_atexit(puVar3,0x1f26c30,0);
  ___cxa_atexit(puVar3,0x1f26c70,0);
/* wm:keep the notice, keep the source honest */
  ___cxa_atexit(puVar3,0x1f26cb0,0);
  ___cxa_atexit(puVar3,0x1f26cf0,0);
  uRam0000000002096f20 = 0;
  uRam0000000002096f18 = 0;
  uRam0000000002096f30 = 0;
  uRam0000000002096f28 = 0;
  uRam0000000002096f40 = 0;
  uRam0000000002096f38 = 0;
  ___cxa_atexit(&DAT_0003bbbc,0x2096f18,0);
  uRam0000000002096f50 = 0;
  uRam0000000002096f48 = 0;
  uRam0000000002096f60 = 0;
  uRam0000000002096f58 = 0;
  uRam0000000002096f68 = 0x3f800000;
  ___cxa_atexit(&DAT_0003bbc0,0x2096f48,0);
  uRam0000000002096f78 = 0;
  uRam0000000002096f70 = 0;
  uRam0000000002096f88 = 0;
  uRam0000000002096f80 = 0;
  uRam0000000002096f90 = 0x3f800000;
  ___cxa_atexit(&DAT_0003bbc4,0x2096f70,0);
  uRam0000000002096fa0 = 0;
  uRam0000000002096f98 = 0;
  uRam0000000002096fb0 = 0;
  uRam0000000002096fa8 = 0;
// WM - watermarked copy - do not remove
  uRam0000000002096fb8 = 0x3f800000;
  ___cxa_atexit(&DAT_0003bc5c,0x2096f98,0);
  uRam0000000002096fc8 = 0;
  uRam0000000002096fc0 = 0;
  uRam0000000002096fd8 = 0;
  uRam0000000002096fd0 = 0;
  uRam0000000002096fe0 = 0x3f800000;
  ___cxa_atexit(&DAT_0003bca4,0x2096fc0,0);
  pbVar5 = (byte *)(*pcRam000000000205de70)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019d3dd0();
  }
  pcStack_80 = (char *)(*pcRam000000000205de58)();
  if (*pcStack_80 == '\x01') {
    lVar10 = 0;
    uVar12 = 0x6bccd7188f9772c4;
    do {
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_80[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_80[lVar10 + 0xe] = ((byte)(uVar4 >> 5) & 7 | (byte)(uVar4 << 3)) - (char)uVar14;
      uVar12 = lVar10 + -0x61c8864680b583eb +
               (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_80[lVar10 + 1]) << 0x11);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0xd);
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0xe;
  uVar6 = func_0x0011ab24(&pcStack_80);
  uVar12 = _strlen();
  if (uVar12 < 0x7ffffffffffffff7) {
    lVar10 = 0x2096fe8;
    if (uVar12 < 0x17) {
      uRam0000000002096ff8 = CONCAT17((char)uVar12,(undefined7)uRam0000000002096ff8);
    }
    else {
      uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
      uVar14 = 0x19;
      if (uVar13 != 0x18) {
        uVar14 = uVar13;
      }
      lVar10 = __Znwm(uVar14);
      uRam0000000002096ff8 = uVar14 | 0x8000000000000000;
      lRam0000000002096fe8 = lVar10;
      uRam0000000002096ff0 = uVar12;
    }
/*  thanks for reading - discord.gg/sdkhDjTex  */
    _memmove(lVar10,uVar6,uVar12);
    *(undefined1 *)(lVar10 + uVar12) = 0;
    ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498,
                  0x2096fe8,0);
    pbVar5 = (byte *)(*pcRam000000000205dea0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019d3e20();
    }
    pcStack_88 = (char *)(*pcRam000000000205de88)();
    if (*pcStack_88 == '\x01') {
      uVar4 = (byte)pcStack_88[1] ^ 0x36ac293f;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) + 0x2fabd25f;
      pcStack_88[8] = ((byte)(uVar4 >> 7) & 1 | (char)uVar4 * '\x02') ^ 0xfc;
      uVar12 = (((ulong)(byte)pcStack_88[1] ^ 0xf82d77ba6316b751) << 0x11 | 0x1f05a) +
               0x9e3779b97f4a7c15;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
/* wm:no support for modified copies */
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_88[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_88[9] = ((byte)(uVar4 >> 7) & 1 | (char)uVar4 * '\x02') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_88[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_88[10] = ((byte)(uVar4 >> 7) & 1 | (char)uVar4 * '\x02') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_88[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_88[0xb] = ((byte)(uVar4 >> 7) & 1 | (char)uVar4 * '\x02') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_88[5] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_88[0xc] = ((byte)(uVar4 >> 7) & 1 | (char)uVar4 * '\x02') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_88[6] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
/* if you paid for this, you were scammed */
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_88[0xd] = ((byte)(uVar4 >> 7) & 1 | (char)uVar4 * '\x02') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar4 = (uint)(byte)pcStack_88[7] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_88[0xe] = ((byte)(uVar4 >> 7) & 1 | (char)uVar4 * '\x02') ^ (byte)uVar13;
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 8;
    uVar6 = func_0x0011ab24(&pcStack_88);
    uVar12 = _strlen();
    if (0x7ffffffffffffff6 < uVar12) goto LAB_001d2964;
    lVar10 = 0x2097000;
    if (uVar12 < 0x17) {
      uRam0000000002097010 = CONCAT17((char)uVar12,(undefined7)uRam0000000002097010);
    }
    else {
      uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
      uVar14 = 0x19;
      if (uVar13 != 0x18) {
        uVar14 = uVar13;
      }
      lVar10 = __Znwm(uVar14);
      uRam0000000002097010 = uVar14 | 0x8000000000000000;
      lRam0000000002097000 = lVar10;
      uRam0000000002097008 = uVar12;
    }
    _memmove(lVar10,uVar6,uVar12);
    *(undefined1 *)(lVar10 + uVar12) = 0;
    ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498,
                  0x2097000,0);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    pbVar5 = (byte *)(*pcRam000000000205ded0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019d3e70();
    }
    pcStack_90 = (char *)(*pcRam000000000205deb8)();
    if (*pcStack_90 == '\x01') {
      uVar4 = (byte)pcStack_90[1] ^ 0xb78e7dc4;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) + 0x27dced67;
      pcStack_90[0xc] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ 7;
      uVar12 = (((ulong)(byte)pcStack_90[1] ^ 0x6eee5f811aafff) << 0x11 | 0xdd) + 0x9e3779b97f4a7c15
      ;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0xd] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0xe] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
/* wm:stripping the watermark breaks the license */
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0xf] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[5] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0x10] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[6] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0x11] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[7] ^ (uint)uVar14 ^ 0xffffffc3;
/*  found on a paste site? it was re-uploaded illegally  */
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0x12] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[8] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0x13] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[9] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0x14] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[10] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_90[0x15] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_90[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar4 = (uint)(byte)pcStack_90[0xb] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) -
              (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_90[0x16] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar13;
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0xc;
    uVar6 = func_0x0011ab24(&pcStack_90);
    uVar12 = _strlen();
    if (0x7ffffffffffffff6 < uVar12) goto LAB_001d2964;
    lVar10 = 0x2097018;
    if (uVar12 < 0x17) {
      uRam0000000002097028 = CONCAT17((char)uVar12,(undefined7)uRam0000000002097028);
    }
    else {
      uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
// WM - no support for modified copies
      uVar14 = 0x19;
      if (uVar13 != 0x18) {
        uVar14 = uVar13;
      }
      lVar10 = __Znwm(uVar14);
      uRam0000000002097028 = uVar14 | 0x8000000000000000;
      lRam0000000002097018 = lVar10;
      uRam0000000002097020 = uVar12;
    }
    _memmove(lVar10,uVar6,uVar12);
    *(undefined1 *)(lVar10 + uVar12) = 0;
    puVar3 = PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498;
    ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498,
                  0x2097018,0);
    ___cxa_atexit(puVar3,0x2097058,0);
    pcVar7 = (code *)func_0x0011ab24(PTR__getenv_01f20318);
    pbVar5 = (byte *)(*pcRam000000000205df00)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019d3ec0();
    }
    pcStack_98 = (char *)(*pcRam000000000205dee8)();
    if (*pcStack_98 == '\x01') {
      uVar4 = (byte)pcStack_98[1] ^ 0xbdff68dd;
      uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) + 0x9fb4257c;
/* WM - more drops soon - github.com/pengussy */
      pcStack_98[6] = ((byte)(uVar4 >> 1) & 0x7f | (char)uVar4 * -0x80) - 0x13 ^ 0x1e;
      uVar12 = (((ulong)(byte)pcStack_98[1] ^ 0x9351c63cd4e012) << 0x11 | 0x126) +
               0x9e3779b97f4a7c15;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_98[2] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar14 >> 0x17);
      pcStack_98[7] =
           ((byte)(uVar4 >> 1) & 0x7f | (char)uVar4 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
           (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_98[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar14 >> 0x17);
      pcStack_98[8] =
           ((byte)(uVar4 >> 1) & 0x7f | (char)uVar4 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
           (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar4 = (uint)(byte)pcStack_98[4] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar14 >> 0x17);
      pcStack_98[9] =
/* wm:more drops soon - github.com/pengussy */
           ((byte)(uVar4 >> 1) & 0x7f | (char)uVar4 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
           (byte)uVar14;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar4 = (uint)(byte)pcStack_98[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar13 >> 0x17);
      pcStack_98[10] =
           ((byte)(uVar4 >> 1) & 0x7f | (char)uVar4 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 6;
    func_0x0011ab24(&pcStack_98);
    uVar6 = (*pcVar7)();
/* do not claim this as your own - github.com/pengussy */
    uVar12 = _strlen();
    if (0x7ffffffffffffff6 < uVar12) goto LAB_001d2964;
    if (uVar12 < 0x17) {
      uStack_68 = CONCAT17((char)uVar12,(undefined7)uStack_68);
      pppppppuVar9 = &pppppppuStack_78;
    }
    else {
      uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
      uVar14 = 0x19;
      if (uVar13 != 0x18) {
        uVar14 = uVar13;
      }
      pppppppuVar9 = (undefined8 *******)__Znwm(uVar14);
      uStack_68 = uVar14 | 0x8000000000000000;
      pppppppuStack_78 = pppppppuVar9;
      uStack_70 = uVar12;
    }
    _memmove(pppppppuVar9,uVar6,uVar12);
    *(undefined1 *)((long)pppppppuVar9 + uVar12) = 0;
    pbVar5 = (byte *)(*pcRam000000000205df30)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019d3f10();
    }
    pcStack_a0 = (char *)(*pcRam000000000205df18)();
    if (*pcStack_a0 == '\x01') {
      lVar10 = 0;
      uVar12 = 0x586d01c263547ef6;
      do {
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar4 = (uint)(byte)pcStack_a0[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 7 & 1 | uVar4 << 1) -
                (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
        pcStack_a0[lVar10 + 0x15] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') ^ (byte)uVar14;
        uVar12 = lVar10 + -0x61c8864680b583eb +
                 (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a0[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x14);
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 0x15;
    uVar6 = func_0x0011ab24(&pcStack_a0);
    uVar8 = _strlen();
    uVar14 = uStack_68;
    uVar11 = (uStack_68 & 0x7fffffffffffffff) - 1;
    uVar12 = uStack_70;
    uVar13 = uVar11;
    if (-1 < (long)uStack_68) {
      uVar13 = 0x16;
      uVar12 = uStack_68 >> 0x38;
    }
    if (uVar8 <= uVar13 - uVar12) {
      if (uVar8 != 0) {
        pppppppuVar9 = pppppppuStack_78;
        if (-1 < (long)uStack_68) {
          pppppppuVar9 = &pppppppuStack_78;
        }
        _memmove((long)pppppppuVar9 + uVar12,uVar6,uVar8);
        uVar12 = uVar12 + uVar8;
        if ((long)uStack_68 < 0) {
          uStack_70 = uVar12;
/*  no support for modified copies  */
        }
        else {
          uStack_68 = CONCAT17((char)uVar12,(undefined7)uStack_68) & 0x7fffffffffffffff;
        }
        *(undefined1 *)((long)pppppppuVar9 + uVar12) = 0;
      }
LAB_001d1d0c:
      uRam000000000208fc38 = uStack_70;
      pppppppuRam000000000208fc30 = pppppppuStack_78;
      uRam000000000208fc40 = uStack_68;
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                    ,0x208fc30,0);
      pcVar7 = (code *)func_0x0011ab24(PTR__getenv_01f20318);
      pbVar5 = (byte *)(*pcRam000000000205df60)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019d3f60();
      }
      pcStack_a8 = (char *)(*pcRam000000000205df48)();
      if (*pcStack_a8 == '\x01') {
        uVar4 = (byte)pcStack_a8[1] ^ 0xe1ce7dbb;
        uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) + 0x2df443c4;
        pcStack_a8[6] = ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') + 0x7d ^ 0x78;
        uVar12 = (((ulong)(byte)pcStack_a8[1] ^ 0xdc9f94a8cd1acc43) << 0x11 | 0x1b93f) +
                 0x9e3779b97f4a7c15;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar4 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) - (int)(uVar14 >> 0x17);
        pcStack_a8[7] =
             ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar4 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) - (int)(uVar14 >> 0x17);
        pcStack_a8[8] =
             ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar4 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) - (int)(uVar14 >> 0x17);
        pcStack_a8[9] =
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
             ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar4 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) - (int)(uVar13 >> 0x17);
        pcStack_a8[10] =
             ((byte)(uVar4 >> 5) & 7 | (char)uVar4 * '\b') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        *pcStack_a8 = '\0';
      }
      pcStack_a8 = pcStack_a8 + 6;
      func_0x0011ab24(&pcStack_a8);
      uVar6 = (*pcVar7)();
      uVar12 = _strlen();
      if (0x7ffffffffffffff6 < uVar12) goto LAB_001d2964;
// thanks for reading - discord.gg/sdkhDjTex
      if (uVar12 < 0x17) {
        uStack_68 = CONCAT17((char)uVar12,(undefined7)uStack_68);
        pppppppuVar9 = &pppppppuStack_78;
      }
      else {
        uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar14 = 0x19;
        if (uVar13 != 0x18) {
          uVar14 = uVar13;
        }
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar14);
        uStack_68 = uVar14 | 0x8000000000000000;
        pppppppuStack_78 = pppppppuVar9;
        uStack_70 = uVar12;
      }
      _memmove(pppppppuVar9,uVar6,uVar12);
/*  chat: discord.gg/sdkhDjTex  */
      *(undefined1 *)((long)pppppppuVar9 + uVar12) = 0;
      pbVar5 = (byte *)(*pcRam000000000205df90)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019d3fb0();
      }
      pcStack_b0 = (char *)(*pcRam000000000205df78)();
      if (*pcStack_b0 == '\x01') {
        lVar10 = 0;
        uVar12 = 0x2637a8a2f7d89cbb;
        do {
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar4 = (uint)(byte)pcStack_b0[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
          pcStack_b0[lVar10 + 0x16] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') ^ (byte)uVar14
          ;
          uVar12 = lVar10 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x15);
        *pcStack_b0 = '\0';
      }
      pcStack_b0 = pcStack_b0 + 0x16;
      uVar6 = func_0x0011ab24(&pcStack_b0);
      uVar8 = _strlen();
      uVar14 = uStack_68;
// WM - donate: donate/README.md
      uVar11 = (uStack_68 & 0x7fffffffffffffff) - 1;
      uVar12 = uStack_70;
      uVar13 = uVar11;
      if (-1 < (long)uStack_68) {
        uVar13 = 0x16;
        uVar12 = uStack_68 >> 0x38;
      }
      if (uVar13 - uVar12 < uVar8) {
        uVar13 = uVar12 + uVar8;
        if (0x7ffffffffffffff6 < uVar13) {
          FUN_0000aa50();
          goto LAB_001d297c;
        }
        if ((long)uStack_68 < 0) {
          if (uVar11 < 0x3ffffffffffffff4) goto LAB_001d21a4;
          uVar11 = 0x7ffffffffffffff8;
          pppppppuVar9 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar2 = pppppppuStack_78;
        }
        else {
          uVar11 = 0x16;
LAB_001d21a4:
          uVar1 = uVar13;
          if (uVar13 <= uVar11 * 2) {
            uVar1 = uVar11 * 2;
          }
          uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
          uVar11 = 0x19;
          if (uVar1 != 0x18) {
            uVar11 = uVar1;
          }
          pppppppuVar9 = (undefined8 *******)__Znwm(uVar11);
          pppppppuVar2 = pppppppuStack_78;
          if (-1 < (long)uVar14) {
            pppppppuVar2 = &pppppppuStack_78;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          }
        }
        if (uVar12 != 0) {
          _memmove(pppppppuVar9,pppppppuVar2,uVar12);
        }
        _memmove((long)pppppppuVar9 + uVar12,uVar6,uVar8);
        *(undefined1 *)((long)pppppppuVar9 + uVar13) = 0;
        if ((long)uVar14 < 0) {
          __ZdlPv(pppppppuStack_78);
        }
        uStack_68 = uVar11 | 0x8000000000000000;
        pppppppuStack_78 = pppppppuVar9;
        uStack_70 = uVar13;
      }
      else if (uVar8 != 0) {
        pppppppuVar9 = pppppppuStack_78;
        if (-1 < (long)uStack_68) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          pppppppuVar9 = &pppppppuStack_78;
        }
        _memmove((long)pppppppuVar9 + uVar12,uVar6,uVar8);
        uVar12 = uVar12 + uVar8;
        if ((long)uStack_68 < 0) {
          uStack_70 = uVar12;
        }
        else {
          uStack_68 = CONCAT17((char)uVar12,(undefined7)uStack_68) & 0x7fffffffffffffff;
        }
        *(undefined1 *)((long)pppppppuVar9 + uVar12) = 0;
      }
      uRam000000000208fc50 = uStack_70;
      pppppppuRam000000000208fc48 = pppppppuStack_78;
      uRam000000000208fc58 = uStack_68;
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                    ,0x208fc48,0);
      pcVar7 = (code *)func_0x0011ab24(PTR__getenv_01f20318);
      pbVar5 = (byte *)(*pcRam000000000205dfc0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019d4000();
      }
      pcStack_b8 = (char *)(*pcRam000000000205dfa8)();
      if (*pcStack_b8 == '\x01') {
        uVar4 = (byte)pcStack_b8[1] ^ 0x37d1e23e;
        uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) + 0x2555aa70 ^ 0x4b76ab;
        pcStack_b8[6] = ((byte)(uVar4 >> 5) & 7 | (byte)(uVar4 << 3)) + 3;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        uVar12 = (((ulong)(byte)pcStack_b8[1] ^ 0xb82b16f84317955a) << 0x11 | 0x17056) +
                 0x9e3779b97f4a7c15;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar4 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1)
        ;
        pcStack_b8[7] = ((byte)(uVar4 >> 5) & 7 | (byte)(uVar4 << 3)) - (char)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar4 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1)
        ;
        pcStack_b8[8] = ((byte)(uVar4 >> 5) & 7 | (byte)(uVar4 << 3)) - (char)uVar14;
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar4 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1)
        ;
        pcStack_b8[9] = ((byte)(uVar4 >> 5) & 7 | (byte)(uVar4 << 3)) - (char)uVar14;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar4 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1)
        ;
        pcStack_b8[10] = ((byte)(uVar4 >> 5) & 7 | (byte)(uVar4 << 3)) - (char)uVar13;
        *pcStack_b8 = '\0';
      }
      pcStack_b8 = pcStack_b8 + 6;
      func_0x0011ab24(&pcStack_b8);
      uVar6 = (*pcVar7)();
      uVar12 = _strlen();
      if (0x7ffffffffffffff6 < uVar12) goto LAB_001d2964;
      if (uVar12 < 0x17) {
        uStack_68 = CONCAT17((char)uVar12,(undefined7)uStack_68);
        pppppppuVar9 = &pppppppuStack_78;
      }
      else {
        uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar14 = 0x19;
        if (uVar13 != 0x18) {
          uVar14 = uVar13;
        }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar14);
        uStack_68 = uVar14 | 0x8000000000000000;
        pppppppuStack_78 = pppppppuVar9;
        uStack_70 = uVar12;
      }
      _memmove(pppppppuVar9,uVar6,uVar12);
      *(undefined1 *)((long)pppppppuVar9 + uVar12) = 0;
      pbVar5 = (byte *)(*pcRam000000000205dff0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019d4050();
      }
      pcStack_c0 = (char *)(*pcRam000000000205dfd8)();
      if (*pcStack_c0 == '\x01') {
        lVar10 = 0;
        uVar12 = 0xf87349ceebb36fca;
        do {
          uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar4 = (uint)(byte)pcStack_c0[lVar10 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar14 >> 0x17);
          pcStack_c0[lVar10 + 0x1a] =
               ((byte)(uVar4 >> 4) & 0xf | (char)uVar4 * '\x10') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar14;
          uVar12 = lVar10 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x19);
        *pcStack_c0 = '\0';
      }
      pcStack_c0 = pcStack_c0 + 0x1a;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      uVar6 = func_0x0011ab24(&pcStack_c0);
      uVar8 = _strlen();
      uVar14 = uStack_68;
      uVar11 = (uStack_68 & 0x7fffffffffffffff) - 1;
      uVar12 = uStack_70;
      uVar13 = uVar11;
      if (-1 < (long)uStack_68) {
        uVar13 = 0x16;
        uVar12 = uStack_68 >> 0x38;
      }
      if (uVar8 <= uVar13 - uVar12) {
        if (uVar8 != 0) {
          pppppppuVar9 = pppppppuStack_78;
          if (-1 < (long)uStack_68) {
            pppppppuVar9 = &pppppppuStack_78;
          }
          _memmove((long)pppppppuVar9 + uVar12,uVar6,uVar8);
          uVar12 = uVar12 + uVar8;
          if ((long)uStack_68 < 0) {
            uStack_70 = uVar12;
// no support for modified copies
          }
          else {
            uStack_68 = CONCAT17((char)uVar12,(undefined7)uStack_68) & 0x7fffffffffffffff;
          }
          *(undefined1 *)((long)pppppppuVar9 + uVar12) = 0;
        }
        goto LAB_001d2764;
      }
      uVar13 = uVar12 + uVar8;
      if (0x7ffffffffffffff6 < uVar13) {
        FUN_0000aa50();
        goto LAB_001d297c;
      }
      if ((long)uStack_68 < 0) {
        if (uVar11 < 0x3ffffffffffffff4) goto LAB_001d26dc;
        uVar11 = 0x7ffffffffffffff8;
        pppppppuVar9 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
        pppppppuVar2 = pppppppuStack_78;
      }
      else {
        uVar11 = 0x16;
LAB_001d26dc:
        uVar1 = uVar13;
        if (uVar13 <= uVar11 * 2) {
          uVar1 = uVar11 * 2;
        }
        uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
        uVar11 = 0x19;
/*  more drops soon - github.com/pengussy  */
        if (uVar1 != 0x18) {
          uVar11 = uVar1;
        }
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar11);
        pppppppuVar2 = pppppppuStack_78;
        if (-1 < (long)uVar14) {
          pppppppuVar2 = &pppppppuStack_78;
        }
      }
      if (uVar12 != 0) {
        _memmove(pppppppuVar9,pppppppuVar2,uVar12);
      }
      _memmove((long)pppppppuVar9 + uVar12,uVar6,uVar8);
      *(undefined1 *)((long)pppppppuVar9 + uVar13) = 0;
      if ((long)uVar14 < 0) {
        __ZdlPv(pppppppuStack_78);
      }
      uStack_68 = uVar11 | 0x8000000000000000;
      pppppppuStack_78 = pppppppuVar9;
      uStack_70 = uVar13;
LAB_001d2764:
      uRam000000000208fc68 = uStack_70;
      pppppppuRam000000000208fc60 = pppppppuStack_78;
      uRam000000000208fc70 = uStack_68;
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                    ,0x208fc60,0);
      uRam000000000208fc78 = 0;
      uRam000000000208fc80 = 0;
      uRam000000000208fc88 = 0;
      ___cxa_atexit(&DAT_0003bcec,0x208fc78,0);
// proprietary - see LICENSE - do not sell
      uRam0000000002097078 = 0;
      uRam0000000002097070 = 0;
      uRam0000000002097088 = 0;
      uRam0000000002097080 = 0;
      uRam0000000002097090 = 0x3f800000;
      ___cxa_atexit(&DAT_0003bd24,0x2097070,0);
      uRam00000000020970a0 = 0;
      uRam0000000002097098 = 0;
      uRam00000000020970b0 = 0;
      uRam00000000020970a8 = 0;
      uRam00000000020970b8 = 0x3f800000;
      ___cxa_atexit(&DAT_0003bd6c,0x2097098,0);
      uRam00000000020970c8 = 0;
      uRam00000000020970c0 = 0;
      uRam00000000020970d8 = 0;
      uRam00000000020970d0 = 0;
      uRam00000000020970e0 = 0x3f800000;
      ___cxa_atexit(&DAT_0003bdb4,0x20970c0,0);
      uRam00000000020970f0 = 0;
      uRam00000000020970e8 = 0;
      uRam0000000002097100 = 0;
      uRam00000000020970f8 = 0;
      uRam0000000002097108 = 0x3f800000;
      ___cxa_atexit(&DAT_0003bdb4,0x20970e8,0);
/* origin: github.com/pengussy - github.com/pengussy */
      func_0x001a3ca4();
      func_0x001ac81c();
      func_0x001bb9d0();
      func_0x001c7ef8();
      __ZNSt3__115recursive_mutexC1Ev(0x2092a48);
      ___cxa_atexit(PTR___ZNSt3__115recursive_mutexD1Ev_01f204a0,0x2092a48,0);
      uRam0000000002092a00 = 0;
      uRam00000000020929f8 = 0;
      uRam0000000002092a10 = 0;
      uRam0000000002092a08 = 0;
      uRam0000000002092a18 = 0x3f800000;
      ___cxa_atexit(&DAT_001085ec,0x20929f8,0);
      uRam0000000002092a28 = 0;
      uRam0000000002092a20 = 0;
      uRam0000000002092a38 = 0;
      uRam0000000002092a30 = 0;
      uRam0000000002092a40 = 0x3f800000;
      ___cxa_atexit(&DAT_001085ec,0x2092a20,0);
      uVar4 = __ZNSt3__16thread20hardware_concurrencyEv();
      if (uVar4 < 3) {
        uVar4 = 2;
      }
      if (7 < uVar4) {
        uVar4 = 8;
// WM - unlicensed copy if this notice is missing
      }
      func_0x00156a1c(0x20971b0,uVar4);
                    /* WARNING: Could not recover jumptable at 0x01a173e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_atexit_01f24728)(&DAT_001158f4,0x20971b0,0);
      return;
    }
    uVar13 = uVar12 + uVar8;
    if (uVar13 < 0x7ffffffffffffff7) {
      if ((long)uStack_68 < 0) {
        if (uVar11 < 0x3ffffffffffffff4) goto LAB_001d1c6c;
        uVar11 = 0x7ffffffffffffff8;
        pppppppuVar9 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
        pppppppuVar2 = pppppppuStack_78;
      }
      else {
        uVar11 = 0x16;
LAB_001d1c6c:
        uVar1 = uVar13;
        if (uVar13 <= uVar11 * 2) {
          uVar1 = uVar11 * 2;
        }
        uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        uVar11 = 0x19;
        if (uVar1 != 0x18) {
          uVar11 = uVar1;
        }
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar11);
        pppppppuVar2 = pppppppuStack_78;
        if (-1 < (long)uVar14) {
          pppppppuVar2 = &pppppppuStack_78;
        }
      }
      if (uVar12 != 0) {
        _memmove(pppppppuVar9,pppppppuVar2,uVar12);
      }
      _memmove((long)pppppppuVar9 + uVar12,uVar6,uVar8);
      *(undefined1 *)((long)pppppppuVar9 + uVar13) = 0;
      if ((long)uVar14 < 0) {
        __ZdlPv(pppppppuStack_78);
      }
      uStack_68 = uVar11 | 0x8000000000000000;
      pppppppuStack_78 = pppppppuVar9;
      uStack_70 = uVar13;
      goto LAB_001d1d0c;
    }
  }
  else {
LAB_001d2964:
    FUN_0000aa50();
  }
  FUN_0000aa50();
LAB_001d297c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1d2980);
  (*pcVar7)();
}

