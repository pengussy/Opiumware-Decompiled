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
 *  file-id: 0x3e4fc:c40048b6be
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0003e4fc(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined *puVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
/* wm:proprietary - see LICENSE - do not sell */
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
  
  if (pcRam0000000002097150 == (code *)0x0) {
    return 0;
  }
  iVar5 = func_0x00791e54(param_1,2);
  if (iVar5 == 0) {
LAB_00040204:
    uVar11 = (*pcRam0000000002097150)(param_1);
    return uVar11;
  }
  if (((lRam0000000002097088 == 0) ||
      (lVar7 = func_0x0013b76c(0x2097070,param_1 + 0x80), lVar7 == 0)) ||
     (pcVar8 = (char *)func_0x00792368(param_1,2,0), pcVar8 == (char *)0x0)) {
LAB_0003ea60:
                    /* WARNING: Could not recover jumptable at 0x0003ea84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
/* found on a paste site? it was re-uploaded illegally */
    uVar11 = (*pcRam0000000002097150)(param_1);
    return uVar11;
  }
  pbVar9 = (byte *)(*pcRam0000000002062430)();
  if ((*pbVar9 & 1) == 0) {
    func_0x01996220();
  }
  pcVar20 = (char *)0xff51afd7ed558ccd;
  uVar19 = 0xc4ceb9fe1a85ec53;
  pcStack_78 = (char *)(*pcRam0000000002062418)();
  if (*pcStack_78 == '\x01') {
    lVar7 = 0;
    uVar15 = 0xf1d31cc3a2053766;
    do {
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar7 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_78[lVar7 + 0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = lVar7 + -0x61c8864680b583eb +
               (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_78[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
// thanks for reading - discord.gg/sdkhDjTex
    } while (lVar7 != 0xd);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0xe;
  pcVar10 = (char *)func_0x0011ab24(&pcStack_78);
  cVar4 = *pcVar8;
  if (cVar4 != '\0') {
    pcVar16 = pcVar8;
    do {
      pcVar16 = pcVar16 + 1;
      if (cVar4 != *pcVar10) break;
      pcVar10 = pcVar10 + 1;
      cVar4 = *pcVar16;
    } while (cVar4 != '\0');
  }
  if (cVar4 == *pcVar10) {
    pbVar9 = (byte *)(*pcRam0000000002062460)();
    if ((*pbVar9 & 1) == 0) {
      func_0x01996478();
    }
    pcStack_c8 = (char *)(*pcRam0000000002062448)();
    if (*pcStack_c8 == '\x01') {
      uVar1 = (byte)pcStack_c8[1] ^ 0x9bd2d0c5;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xb4732869;
      pcStack_c8[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 6;
      uVar19 = (((ulong)(byte)pcStack_c8[1] ^ 0x61d9d23899f70840) << 0x11 | 0xc3b3) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar17 ^ 0xffffffc3;
// origin: github.com/pengussy
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_c8[7] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar17;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_c8[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar17;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_c8[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar17;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar19 ^ uVar19 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
      pcStack_c8[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar15;
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 6;
    uVar11 = func_0x0011ab24(&pcStack_c8);
    func_0x007935a0(param_1,0xffffd8ee,uVar11);
    iVar5 = func_0x00791f88(param_1,0xffffffff,1);
/* wm:stripping the watermark breaks the license */
    func_0x00791660(param_1,0xfffffffe);
    if (iVar5 == 0) goto LAB_0003ea60;
    pbVar9 = (byte *)(*pcRam0000000002062490)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019964b4();
    }
    pcStack_d0 = (char *)(*pcRam0000000002062478)();
    if (*pcStack_d0 == '\x01') {
      lVar7 = 0;
      uVar19 = 0x3be596297122fd40;
      do {
        uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar15 ^ uVar15 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d0[lVar7 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
        pcStack_d0[lVar7 + 0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar17;
        uVar19 = lVar7 + -0x61c8864680b583eb +
                 (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_d0[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0xd);
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 0xe;
    uVar11 = func_0x0011ab24(&pcStack_d0);
    puVar14 = &DAT_00201a9c;
    goto LAB_0003f33c;
  }
  pbVar9 = (byte *)(*pcRam00000000020624c0)();
  if ((*pbVar9 & 1) == 0) {
    func_0x0199625c();
  }
  pcStack_80 = (char *)(*pcRam00000000020624a8)();
  if (*pcStack_80 == '\x01') {
/* WM - stripping the watermark breaks the license */
    uVar1 = (byte)pcStack_80[1] ^ 0xc8330f9d;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x20daab91 ^ 0x1877c9;
    pcStack_80[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0xa2;
    uVar15 = (((ulong)(byte)pcStack_80[1] ^ 0x2772153cb183c609) << 0x11 | 0x4ee4) +
             0x9e3779b97f4a7c15;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
    pcStack_80[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
    pcStack_80[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
// WM - keep the notice, keep the source honest
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
    pcStack_80[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
    pcStack_80[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
    pcStack_80[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
    pcStack_80[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[7]) << 0x11) + 0x9e3779b97f4a7c1b;
/* more drops soon - github.com/pengussy - github.com/pengussy */
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[8] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar17 >> 0x17) ^ ((uint)(uVar15 >> 0x29) | 1);
    pcStack_80[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar17;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 9;
  pcVar10 = (char *)func_0x0011ab24(&pcStack_80);
  cVar4 = *pcVar8;
  if (cVar4 != '\0') {
    pcVar16 = pcVar8;
    do {
      pcVar16 = pcVar16 + 1;
      if (cVar4 != *pcVar10) break;
      pcVar10 = pcVar10 + 1;
      cVar4 = *pcVar16;
    } while (cVar4 != '\0');
  }
  if (cVar4 == *pcVar10) {
    puVar14 = &DAT_0020223c;
  }
  else {
    pbVar9 = (byte *)(*pcRam00000000020624f0)();
    if ((*pbVar9 & 1) == 0) {
/*  origin: github.com/pengussy  */
      func_0x01996298();
    }
    pcStack_88 = (char *)(*pcRam00000000020624d8)();
    if (*pcStack_88 == '\x01') {
      uVar1 = (byte)pcStack_88[1] ^ 0x564d37fc;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xe0540cad ^ 0x3487eb;
      pcStack_88[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - 0x3f;
      uVar15 = (((ulong)(byte)pcStack_88[1] ^ 0x5ae0822a681dbaf6) << 0x11 | 0xb5c1) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_88[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_88[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_88[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_88[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_88[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_88[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar18 ^ 0xffffffc3;
/* stripping the watermark breaks the license - github.com/pengussy */
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_88[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar17 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_88[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar17;
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 10;
    pcVar10 = (char *)func_0x0011ab24(&pcStack_88);
    cVar4 = *pcVar8;
    if (cVar4 != '\0') {
      pcVar16 = pcVar8;
      do {
        pcVar16 = pcVar16 + 1;
        if (cVar4 != *pcVar10) break;
        pcVar10 = pcVar10 + 1;
        cVar4 = *pcVar16;
      } while (cVar4 != '\0');
    }
    if (cVar4 != *pcVar10) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      pbVar9 = (byte *)(*pcRam0000000002062520)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019962d4();
      }
      pcStack_90 = (char *)(*pcRam0000000002062508)();
      if (*pcStack_90 == '\x01') {
        lVar7 = 0;
        uVar15 = 0x7bdb8ebf9258d350;
        do {
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_90[lVar7 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_90[lVar7 + 0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar18;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          uVar15 = lVar7 + -0x61c8864680b583eb +
                   (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_90[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0xe);
        *pcStack_90 = '\0';
      }
      pcStack_90 = pcStack_90 + 0xf;
      pcVar10 = (char *)func_0x0011ab24(&pcStack_90);
      cVar4 = *pcVar8;
      if (cVar4 != '\0') {
        pcVar16 = pcVar8;
        do {
          pcVar16 = pcVar16 + 1;
          if (cVar4 != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          cVar4 = *pcVar16;
        } while (cVar4 != '\0');
      }
      if (cVar4 != *pcVar10) {
        pbVar9 = (byte *)(*pcRam0000000002062550)();
        if ((*pbVar9 & 1) == 0) {
          func_0x01996310();
        }
        pcStack_98 = (char *)(*pcRam0000000002062538)();
        if (*pcStack_98 == '\x01') {
          uVar1 = (byte)pcStack_98[1] ^ 0x46321f9d;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x69d0771a;
          pcStack_98[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x5e;
          uVar15 = (((ulong)(byte)pcStack_98[1] ^ 0xb3d2476a442825b5) << 0x11 | 0x167a4) +
                   0x9e3779b97f4a7c15;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0x13] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
/* WM - chat: discord.gg/sdkhDjTex */
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0x14] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[10] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_98[0x15] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar15 ^ uVar15 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[0xb] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcStack_98[0x16] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar17;
          *pcStack_98 = '\0';
        }
        pcStack_98 = pcStack_98 + 0xc;
        pcVar10 = (char *)func_0x0011ab24(&pcStack_98);
// WM - if you paid for this, you were scammed
        cVar4 = *pcVar8;
        if (cVar4 != '\0') {
          pcVar16 = pcVar8;
          do {
            pcVar16 = pcVar16 + 1;
            if (cVar4 != *pcVar10) break;
            pcVar10 = pcVar10 + 1;
            cVar4 = *pcVar16;
          } while (cVar4 != '\0');
        }
        if (cVar4 != *pcVar10) {
          pcStack_70 = pcVar8;
          uStack_68 = _strlen(pcVar8);
          pbVar9 = (byte *)(*pcRam0000000002062580)();
          if ((*pbVar9 & 1) == 0) {
            func_0x0199634c();
          }
          pcStack_a0 = (char *)(*pcRam0000000002062568)();
          if (*pcStack_a0 == '\x01') {
            uVar1 = (byte)pcStack_a0[1] ^ 0x56d3ba92;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x50771ae1;
            pcStack_a0[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x51;
            uVar15 = (((ulong)(byte)pcStack_a0[1] ^ 0xa954323a2a8a746a) << 0x11 | 0x152a8) +
                     0x9e3779b97f4a7c15;
            uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar17 ^ uVar17 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
            pcStack_a0[7] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
            uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
// WM - more drops soon - github.com/pengussy
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar17 ^ uVar17 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
            pcStack_a0[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
            uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar17 ^ uVar17 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
            pcStack_a0[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
            uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
// proprietary - see LICENSE - do not sell
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar17 = uVar15 ^ uVar15 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar17 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                    (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
            pcStack_a0[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar17;
            *pcStack_a0 = '\0';
          }
          pcStack_a0 = pcStack_a0 + 6;
          pcVar10 = (char *)func_0x0011ab24(&pcStack_a0);
          cVar4 = *pcVar8;
          if (cVar4 != '\0') {
            pcVar16 = pcVar8;
            do {
              pcVar16 = pcVar16 + 1;
              if (cVar4 != *pcVar10) break;
              pcVar10 = pcVar10 + 1;
              cVar4 = *pcVar16;
            } while (cVar4 != '\0');
          }
          cVar2 = *pcVar10;
          lVar7 = func_0x0016dbf0(0x20929a8,&pcStack_70);
          if (((bRam0000000002097055 & 1) == 0) &&
             (lVar12 = func_0x0016dd78(0x20929d0,&pcStack_70), lVar12 != 0)) goto LAB_000405c4;
          if (cVar4 == cVar2 || lVar7 != 0) {
            uVar6 = func_0x00791650(param_1);
            pbVar9 = (byte *)(*pcRam00000000020625e0)();
/*  stripping the watermark breaks the license  */
            if ((*pbVar9 & 1) == 0) {
              func_0x019963c4();
            }
            pcStack_b0 = (char *)(*pcRam00000000020625c8)();
            if (*pcStack_b0 == '\x01') {
              uVar1 = (byte)pcStack_b0[1] ^ 0x28a1af15;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x15a625d1;
              pcStack_b0[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xd6;
              uVar15 = (((ulong)(byte)pcStack_b0[1] ^ 0xd89d996409a4cf95) << 0x11 | 0x1b13b) +
                       0x9e3779b97f4a7c15;
              uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar18 = uVar17 ^ uVar17 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar18 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
              pcStack_b0[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar18;
              uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_b0[2]) << 0x11) +
                       0x9e3779b97f4a7c16;
              uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar18 = uVar17 ^ uVar17 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar18 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
              pcStack_b0[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar18;
              uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_b0[3]) << 0x11) +
                       0x9e3779b97f4a7c17;
/* reversing this took months of machine time - github.com/pengussy */
              uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar18 = uVar17 ^ uVar17 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar18 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
              pcStack_b0[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar18;
              uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_b0[4]) << 0x11) +
                       0x9e3779b97f4a7c18;
              uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
              uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
              uVar17 = uVar15 ^ uVar15 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar17 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                      (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
              pcStack_b0[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
              *pcStack_b0 = '\0';
            }
            pcStack_b0 = pcStack_b0 + 6;
            uVar11 = func_0x0011ab24(&pcStack_b0);
            func_0x007935a0(param_1,0xffffd8ee,uVar11);
            iVar5 = func_0x00791f88(param_1,0xffffffff,1);
            if ((iVar5 != 0) && (cVar4 == cVar2)) {
              pbVar9 = (byte *)(*pcRam0000000002062610)();
              if ((*pbVar9 & 1) == 0) goto LAB_00040694;
              do {
                pcVar8 = (char *)(*pcRam00000000020625f8)();
                if (*pcVar8 == '\x01') {
                  uVar15 = ((long)pcVar20 * -0x60d911d67f26a128 ^
                           (ulong)((long)pcVar20 * -0x60d911d67f26a128) >> 0x21) * uVar19;
                  uVar17 = uVar15 ^ uVar15 >> 0x21;
                  bVar3 = pcVar8[1];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar17);
                  pcVar8[0x14] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar17 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c15;
                  bVar3 = pcVar8[2];
/* wm:origin: github.com/pengussy */
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x15] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
                  bVar3 = pcVar8[3];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x16] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c17;
                  bVar3 = pcVar8[4];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x17] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c18;
                  bVar3 = pcVar8[5];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x18] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c19;
                  bVar3 = pcVar8[6];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x19] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1a;
/*  chat: discord.gg/sdkhDjTex  */
                  bVar3 = pcVar8[7];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x1a] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1b;
                  bVar3 = pcVar8[8];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x1b] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1c;
                  bVar3 = pcVar8[9];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x1c] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1d;
                  bVar3 = pcVar8[10];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x1d] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1e;
                  bVar3 = pcVar8[0xb];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x1e] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1f;
                  bVar3 = pcVar8[0xc];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x1f] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c20;
                  bVar3 = pcVar8[0xd];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x20] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c21;
                  bVar3 = pcVar8[0xe];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
/* stripping the watermark breaks the license */
                  pcVar8[0x21] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c22;
                  bVar3 = pcVar8[0xf];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x22] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c23;
                  bVar3 = pcVar8[0x10];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x23] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c24;
                  bVar3 = pcVar8[0x11];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x24] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c25;
                  bVar3 = pcVar8[0x12];
                  cVar4 = func_0x0016df68((ulong)bVar3,uVar15);
                  pcVar8[0x25] = cVar4;
                  cVar4 = func_0x0016df68(pcVar8[0x13],
                                          (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) +
                                          0x9e3779b97f4a7c26);
                  pcVar8[0x26] = cVar4;
                  *pcVar8 = '\0';
                }
                pcStack_c0 = pcVar8 + 0x14;
                func_0x0011ab24(&pcStack_c0);
                func_0x007a1b5c(param_1,"%s");
LAB_000405c4:
                pbVar9 = (byte *)(*pcRam00000000020625b0)();
                if ((*pbVar9 & 1) == 0) {
                  func_0x01996388();
                }
                pcVar8 = (char *)(*pcRam0000000002062598)();
                if (*pcVar8 == '\x01') {
                  lVar7 = 0;
                  uVar19 = ((long)pcVar20 * -0x7872ec49acad5a85 ^
                           (ulong)((long)pcVar20 * -0x7872ec49acad5a85) >> 0x21) * uVar19;
                  uVar15 = uVar19 ^ uVar19 >> 0x21;
                  do {
// keep the notice, keep the source honest
                    pcVar20 = pcVar8 + lVar7;
                    uVar19 = (ulong)(byte)pcVar20[1];
                    cVar4 = func_0x00169ce8(uVar19,uVar15);
                    pcVar20[0x20] = cVar4;
                    uVar15 = lVar7 + -0x61c8864680b583eb +
                             (uVar15 >> 0x2f | (uVar15 ^ uVar19) << 0x11);
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0x1f);
                  *pcVar8 = '\0';
                }
                pcStack_a8 = pcVar8 + 0x20;
                uVar11 = func_0x0011ab24(&pcStack_a8);
                func_0x007a1b5c(param_1,uVar11);
LAB_00040694:
                func_0x0199643c();
              } while( true );
            }
            uVar13 = 0xfffffffe;
            if ((iVar5 != 0) && (lVar7 != 0)) {
              pbVar9 = (byte *)(*pcRam0000000002062640)(0x2062640,0xfffffffe);
              if ((*pbVar9 & 1) == 0) {
                func_0x01996400();
              }
              pcStack_b8 = (char *)(*pcRam0000000002062628)();
              if (*pcStack_b8 == '\x01') {
                uVar1 = (byte)pcStack_b8[1] ^ 0xdd871447;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x733387bc ^ 0x57a333;
                pcStack_b8[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x7c;
                uVar19 = (((ulong)(byte)pcStack_b8[1] ^ 0x5890867601acd9b8) << 0x11 | 0xb121) +
/* wm:if you paid for this, you were scammed */
                         0x9e3779b97f4a7c15;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[2]) << 0x11) +
                         0x9e3779b97f4a7c16;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[3]) << 0x11) +
                         0x9e3779b97f4a7c17;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[4]) << 0x11) +
                         0x9e3779b97f4a7c18;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
// WM - found on a paste site? it was re-uploaded illegally
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[5]) << 0x11) +
                         0x9e3779b97f4a7c19;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[6]) << 0x11) +
                         0x9e3779b97f4a7c1a;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[7]) << 0x11) +
                         0x9e3779b97f4a7c1b;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0x13] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[8]) << 0x11) +
                         0x9e3779b97f4a7c1c;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[9] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0x14] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[9]) << 0x11) +
                         0x9e3779b97f4a7c1d;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[10] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar15 >> 0x29) | 1);
                pcStack_b8[0x15] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[10]) << 0x11) +
                         0x9e3779b97f4a7c1e;
                uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
                uVar15 = uVar19 ^ uVar19 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[0xb] ^ (uint)uVar15 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17) ^
                        ((uint)(uVar19 >> 0x29) | 1);
/* WM - unlicensed copy if this notice is missing */
                pcStack_b8[0x16] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar15;
                *pcStack_b8 = '\0';
              }
              pcStack_b8 = pcStack_b8 + 0xc;
              uVar11 = func_0x0011ab24(&pcStack_b8);
              func_0x007935a0(param_1,0xffffffff,uVar11);
              func_0x00791ab0(param_1,0xfffffffe);
              func_0x00792f00(param_1,pcVar8);
              iVar5 = func_0x00794a14(param_1,2,1,0);
              uVar13 = uVar6;
              if ((iVar5 == 0) && (iVar5 = func_0x00791efc(param_1,0xffffffff), iVar5 != 0)) {
                return 1;
              }
            }
            func_0x00791660(param_1,uVar13);
          }
          goto LAB_00040204;
        }
        puVar14 = &DAT_002093b4;
        goto LAB_0003f334;
      }
    }
    puVar14 = &DAT_002027cc;
  }
LAB_0003f334:
  uVar11 = 0;
LAB_0003f33c:
  func_0x007930d0(param_1,puVar14,uVar11,0,0);
  return 1;
/* do not claim this as your own */
}

