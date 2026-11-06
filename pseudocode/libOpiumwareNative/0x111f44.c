/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x111f44:41a2793f09
   =========================================================================== */

int FUN_00111f44(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  char *pcVar16;
  undefined8 uVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  byte *pbVar33;
  undefined4 uVar34;
  long unaff_x28;
// WM - reversing this took months of machine time
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
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
  char *pcStack_1f0;
/*  more drops soon - github.com/pengussy  */
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
/* wm:watermarked copy - do not remove */
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
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  func_0x007a1f28(param_1,1,8);
  func_0x007a1f28(param_1,2,7);
  func_0x007a1f28(param_1,3,7);
  iVar11 = func_0x00791650(param_1);
  uVar15 = func_0x00792558(param_1,2);
  if (0x270 < ((uint)(uVar15 >> 5) & 0x7ffffff)) {
    pbVar18 = (byte *)(*pcRam000000000206db00)();
    if ((*pbVar18 & 1) == 0) goto LAB_00115580;
    goto LAB_00114ac4;
  }
  iVar12 = (int)uVar15;
  unaff_x28 = -0x3b314601e57a13ad;
  func_0x00792a48(param_1);
  iVar13 = func_0x00795158(param_1,2);
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    pcVar16 = (char *)(*pcRam000000000206db48)();
    pcVar5 = pcRam000000000206db60;
    iVar13 = 0;
    do {
      pbVar18 = (byte *)(*pcVar5)(0x206db60);
      if ((*pbVar18 & 1) == 0) {
        func_0x019c92f4();
        cVar3 = *pcVar16;
      }
      else {
        cVar3 = *pcVar16;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      if (cVar3 == '\x01') {
        lVar29 = 0;
        uVar15 = 0x9594d122e262e6db;
        do {
          uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
          uVar32 = uVar31 ^ uVar31 >> 0x21;
          uVar2 = (uint)(byte)pcVar16[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^
                  ((uint)(uVar31 >> 0x29) | 1);
          pcVar16[lVar29 + 0x38] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar32;
          uVar15 = lVar29 + -0x61c8864680b583eb +
                   (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar16[lVar29 + 1]) << 0x11);
          lVar29 = lVar29 + 1;
        } while (lVar29 != 0x37);
        *pcVar16 = '\0';
      }
      pcStack_1d0 = pcVar16 + 0x38;
      uVar17 = func_0x0011ab24(pcVar16 + 0x38);
      func_0x001155c0(param_1,0xfffffffe,1,iVar12,uVar17);
      func_0x007a1f28(param_1,0xffffffff,7);
      iVar13 = iVar13 + 1;
      func_0x00791660(param_1,0xfffffffe);
      iVar14 = func_0x00795158(param_1,2);
    } while (iVar14 != 0);
  }
  if (iVar13 != iVar12) goto LAB_00114bf0;
  pbVar18 = (byte *)(*pcRam000000000206dbc0)();
  if ((*pbVar18 & 1) == 0) {
    func_0x019c936c();
/* proprietary - see LICENSE - do not sell */
  }
  pcStack_1e0 = (char *)(*pcRam000000000206dba8)();
  if (*pcStack_1e0 == '\x01') {
    uVar2 = (byte)pcStack_1e0[1] ^ 0x3b8aa10;
    uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x6b4d008 ^ 0x1be53;
    pcStack_1e0[8] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) + 0x2d;
    uVar15 = (((ulong)(byte)pcStack_1e0[1] ^ 0x68b24be1389799da) << 0x11 | 0xd164) +
             0x9e3779b97f4a7c15;
    uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
    uVar32 = uVar31 ^ uVar31 >> 0x21;
    uVar2 = (uint)(byte)pcStack_1e0[2] ^ (uint)uVar32 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^ ((uint)(uVar31 >> 0x29) | 1);
    pcStack_1e0[9] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
    uVar32 = uVar31 ^ uVar31 >> 0x21;
    uVar2 = (uint)(byte)pcStack_1e0[3] ^ (uint)uVar32 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^ ((uint)(uVar31 >> 0x29) | 1);
    pcStack_1e0[10] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
    uVar32 = uVar31 ^ uVar31 >> 0x21;
    uVar2 = (uint)(byte)pcStack_1e0[4] ^ (uint)uVar32 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^ ((uint)(uVar31 >> 0x29) | 1);
    pcStack_1e0[0xb] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
    uVar32 = uVar31 ^ uVar31 >> 0x21;
    uVar2 = (uint)(byte)pcStack_1e0[5] ^ (uint)uVar32 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^ ((uint)(uVar31 >> 0x29) | 1);
    pcStack_1e0[0xc] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1e0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
    uVar32 = uVar31 ^ uVar31 >> 0x21;
    uVar2 = (uint)(byte)pcStack_1e0[6] ^ (uint)uVar32 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^ ((uint)(uVar31 >> 0x29) | 1);
    pcStack_1e0[0xd] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1e0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar31 = uVar15 ^ uVar15 >> 0x21;
    uVar2 = (uint)(byte)pcStack_1e0[7] ^ (uint)uVar31 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar31 >> 0x17) ^ ((uint)(uVar15 >> 0x29) | 1);
    pcStack_1e0[0xe] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar31;
    *pcStack_1e0 = '\0';
  }
  pcStack_1e0 = pcStack_1e0 + 8;
  uVar17 = func_0x0011ab24(&pcStack_1e0);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  func_0x00793714(param_1,3,uVar17);
  iVar13 = func_0x00791be4(param_1,0xffffffff);
  if ((iVar13 != 0) && (iVar13 = func_0x00791be4(param_1,0xffffffff), iVar13 != 10))
  goto LAB_00114e5c;
  iVar13 = func_0x00791be4(param_1,0xffffffff);
  uVar17 = func_0x00791624(param_1,0xffffffff);
  lVar29 = param_1;
  if (iVar13 == 10) {
    lVar29 = func_0x00792874(param_1,0xffffffff);
  }
  if (*(long *)(lVar29 + 0x38) != *(long *)(param_1 + 0x38)) goto LAB_00114d24;
  lVar19 = func_0x007914c4(param_1);
  uVar20 = func_0x00791624(param_1,0xffffffff);
  lVar30 = *(long *)(lVar19 + 0x20);
  if ((lVar30 != 0) && (lVar29 = *(long *)(lVar29 + 0x20), lVar29 != 0)) {
    *(undefined4 *)(lVar30 + 0x60) = *(undefined4 *)(lVar29 + 0x60);
    *(undefined8 *)(lVar30 + 0x80) = *(undefined8 *)(lVar29 + 0x80);
    uVar27 = *(undefined8 *)(lVar29 + 0x90);
    uVar26 = *(undefined8 *)(lVar29 + 0x88);
    if (*(long *)(lVar29 + 0x90) != 0) {
      plVar1 = (long *)(*(long *)(lVar29 + 0x90) + 0x10);
      *plVar1 = *plVar1 + 1;
    }
    lVar29 = *(long *)(lVar30 + 0x90);
    *(undefined8 *)(lVar30 + 0x90) = uVar27;
    *(undefined8 *)(lVar30 + 0x88) = uVar26;
    if (lVar29 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
/* more drops soon - github.com/pengussy */
    }
  }
  uVar34 = (undefined4)uVar20;
  if (iVar13 == 10) {
    func_0x00794054(param_1,uVar17);
    func_0x007947ec(param_1,uVar20);
    bVar9 = true;
  }
  else {
    func_0x00791ab0(param_1,0xffffd8ee);
    func_0x007947ec(param_1,uVar20);
    pbVar18 = (byte *)(*pcRam000000000206dc50)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c9420();
    }
    pcStack_1f8 = (char *)(*pcRam000000000206dc38)();
    if (*pcStack_1f8 == '\x01') {
      uVar2 = (byte)pcStack_1f8[1] ^ 0xce60f9fc;
/*  watermarked copy - do not remove  */
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x185f779d;
      pcStack_1f8[5] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') + 0x17 ^ 0x3f;
      uVar15 = (((ulong)(byte)pcStack_1f8[1] ^ 0x4bffd0b6fd1d430d) << 0x11 | 0x97ff) +
               0x9e3779b97f4a7c15;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_1f8[2] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar32 >> 0x17);
      pcStack_1f8[6] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar31 >> 0x29) | 1) ^
           (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_1f8[3] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar32 >> 0x17);
      pcStack_1f8[7] =
// watermarked copy - do not remove
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar31 >> 0x29) | 1) ^
           (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar31 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_1f8[4] ^ (uint)uVar31 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar31 >> 0x17);
      pcStack_1f8[8] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar31;
      *pcStack_1f8 = '\0';
    }
    pcStack_1f8 = pcStack_1f8 + 5;
    uVar26 = func_0x0011ab24(&pcStack_1f8);
    func_0x00793714(param_1,3,uVar26);
    iVar14 = func_0x00791be4(param_1,0xffffffff);
/*  stripping the watermark breaks the license  */
    bVar9 = iVar14 != 0;
    if (iVar14 == 0) {
      func_0x00791660(param_1,0xfffffffe);
      pbVar18 = (byte *)(*pcRam000000000206dc80)();
      bVar4 = *pbVar18;
    }
    else {
      func_0x007a1f28(param_1,0xffffffff,7);
      func_0x007947ec(param_1,uVar20);
      pbVar18 = (byte *)(*pcRam000000000206dc80)();
      bVar4 = *pbVar18;
    }
    if ((bVar4 & 1) == 0) {
      func_0x019c945c();
    }
    pcStack_200 = (char *)(*pcRam000000000206dc68)();
    if (*pcStack_200 == '\x01') {
      uVar2 = (byte)pcStack_200[1] ^ 0x1b6b96a2;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0xa3d8cb4c;
      pcStack_200[10] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ 0x61;
      uVar15 = (((ulong)(byte)pcStack_200[1] ^ 0xc1a63542483b14be) << 0x11 | 0x1834c) +
               0x9e3779b97f4a7c15;
// WM - chat: discord.gg/sdkhDjTex
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[2] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
      pcStack_200[0xb] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_200[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[3] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
      pcStack_200[0xc] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_200[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
/* found on a paste site? it was re-uploaded illegally */
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[4] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
      pcStack_200[0xd] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_200[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[5] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
      pcStack_200[0xe] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_200[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[6] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
      pcStack_200[0xf] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_200[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[7] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
      pcStack_200[0x10] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_200[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[8] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
      pcStack_200[0x11] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_200[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar31 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_200[9] ^ (uint)uVar31 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar31 >> 0x17));
      pcStack_200[0x12] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar31;
      *pcStack_200 = '\0';
    }
    pcStack_200 = pcStack_200 + 10;
    uVar20 = func_0x0011ab24(&pcStack_200);
    func_0x00793714(param_1,3,uVar20);
    iVar14 = func_0x00791be4(param_1,0xffffffff);
    if (iVar14 != 0) {
      pbVar18 = (byte *)(*pcRam000000000206dcb0)();
      if ((*pbVar18 & 1) == 0) {
        func_0x019c9498();
      }
      pcStack_208 = (char *)(*pcRam000000000206dc98)();
      if (*pcStack_208 == '\x01') {
        lVar29 = 0;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        uVar15 = 0xabdead1480ad3f56;
        do {
          uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
          uVar32 = uVar31 ^ uVar31 >> 0x21;
          uVar2 = (uint)(byte)pcStack_208[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17);
          pcStack_208[lVar29 + 0x2a] =
               ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar31 >> 0x29) | 1) ^
               (byte)uVar32;
          uVar15 = lVar29 + -0x61c8864680b583eb +
                   (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_208[lVar29 + 1]) << 0x11);
          lVar29 = lVar29 + 1;
        } while (lVar29 != 0x29);
        *pcStack_208 = '\0';
      }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      pcStack_208 = pcStack_208 + 0x2a;
      uVar20 = func_0x0011ab24(&pcStack_208);
      uVar20 = func_0x001155c0(param_1,0xffffffff,0,0xc,uVar20);
      if (*(long *)(lVar19 + 0x20) == 0) goto LAB_00114f90;
      *(int *)(*(long *)(lVar19 + 0x20) + 0x60) = (int)uVar20;
      if (pcRam0000000001f271c8 != (code *)0x0) {
        (*pcRam0000000001f271c8)(lVar19,uVar20);
      }
    }
    func_0x00791660(param_1,0xfffffffe);
    pbVar18 = (byte *)(*pcRam000000000206dd40)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c954c();
    }
    pcStack_220 = (char *)(*pcRam000000000206dd28)();
    if (*pcStack_220 == '\x01') {
/* no support for modified copies - github.com/pengussy */
      uVar2 = (byte)pcStack_220[1] ^ 0x575869b1;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0xe2b0f372;
      pcStack_220[8] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ 0x72;
      uVar15 = (((ulong)(byte)pcStack_220[1] ^ 0xdd61e5d78c745735) << 0x11 | 0x1bac3) +
               0x9e3779b97f4a7c15;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[2] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
      ;
      pcStack_220[9] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_220[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[3] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
      ;
      pcStack_220[10] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_220[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[4] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
/* unlicensed copy if this notice is missing */
      ;
      pcStack_220[0xb] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_220[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[5] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
      ;
      pcStack_220[0xc] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_220[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[6] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
      ;
      pcStack_220[0xd] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_220[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar31 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_220[7] ^ (uint)uVar31 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar31 >> 0x17))
      ;
      pcStack_220[0xe] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar31;
// reversing this took months of machine time
      *pcStack_220 = '\0';
    }
    pcStack_220 = pcStack_220 + 8;
    uVar20 = func_0x0011ab24(&pcStack_220);
    func_0x00793714(param_1,3,uVar20);
    iVar14 = func_0x00791be4(param_1,0xffffffff);
    pcVar5 = pcRam0000000001f271d0;
    if (iVar14 != 0) {
      if (pcRam0000000001f271d0 == (code *)0x0) goto LAB_00115288;
      uVar20 = func_0x00791624(param_1,0xffffffff);
      (*pcVar5)(param_1,lVar19,uVar20);
    }
    func_0x00791660(param_1,0xfffffffe);
  }
  func_0x00791ab0(param_1,1);
  func_0x007930d0(param_1,&DAT_00115848,0,1,0);
  puVar21 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
  func_0x0080dc58(param_1,*puVar21,1);
  uVar20 = func_0x00791624(param_1,0xffffffff);
  if (iVar12 != 0) {
    pcVar16 = (char *)(*pcRam000000000206ddb8)();
    pcVar22 = (char *)(*pcRam000000000206dde8)();
    pcVar23 = (char *)(*pcRam000000000206de18)();
    pcVar24 = (char *)(*pcRam000000000206de48)();
    pcVar25 = (char *)(*pcRam000000000206de78)();
    pcVar8 = pcRam000000000206de60;
/* keep the notice, keep the source honest */
    pcVar7 = pcRam000000000206de30;
    pcVar6 = pcRam000000000206de00;
    pcVar5 = pcRam000000000206ddd0;
    if (iVar12 < 2) {
      iVar12 = 1;
    }
    iVar14 = 1;
    do {
      func_0x00793928(param_1,2,iVar14);
      func_0x007a1f28(param_1,0xffffffff,7);
      uVar26 = func_0x00791624(param_1,0xffffffff);
      pbVar18 = (byte *)(*pcVar5)(0x206ddd0);
      if ((*pbVar18 & 1) == 0) {
        func_0x019c9600();
        cVar3 = *pcVar16;
      }
      else {
        cVar3 = *pcVar16;
      }
      if (cVar3 == '\x01') {
        uVar2 = (byte)pcVar16[1] ^ 0x7c8548f1;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xd1aea4fa ^ 0x6d8b95;
        pcVar16[6] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - 0x32;
        uVar15 = (((ulong)(byte)pcVar16[1] ^ 0xcccab393bc5fcd07) << 0x11 | 0x19995) +
                 0x9e3779b97f4a7c15;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar16[2] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
// WM - thanks for reading - discord.gg/sdkhDjTex
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar16[7] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar16[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar16[3] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar16[8] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar16[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar16[4] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar16[9] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar16[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar31 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcVar16[5] ^ (uint)uVar31 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar31 >> 0x17) ^
                ((uint)(uVar15 >> 0x29) | 1);
        pcVar16[10] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar31;
        *pcVar16 = '\0';
      }
// keep the notice, keep the source honest
      pcStack_238 = pcVar16 + 6;
      uVar27 = func_0x0011ab24(&pcStack_238);
      func_0x00793714(param_1,uVar26,uVar27);
      uVar27 = func_0x00791624(param_1,0xffffffff);
      func_0x007a1f28(param_1,uVar27,8);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
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
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1b8 = 0;
      lStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      func_0x00791ab0(param_1,uVar27);
      pbVar18 = (byte *)(*pcVar6)(0x206de00);
      if ((*pbVar18 & 1) == 0) {
        func_0x019c963c();
        cVar3 = *pcVar22;
      }
      else {
        cVar3 = *pcVar22;
      }
      if (cVar3 == '\x01') {
        uVar2 = (byte)pcVar22[1] ^ 0x6deecb79;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xdc8c10dc ^ 0x6cc8dd;
        pcVar22[8] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) + 0x46;
        uVar15 = (((ulong)(byte)pcVar22[1] ^ 0xe07531e6adecb7a) << 0x11 | 0x1c0e) +
                 0x9e3779b97f4a7c15;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar22[2] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar22[9] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar22[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar22[3] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar22[10] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar22[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar22[4] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar22[0xb] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar22[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar22[5] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar22[0xc] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar22[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcVar22[6] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcVar22[0xd] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar22[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar31 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcVar22[7] ^ (uint)uVar31 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar31 >> 0x17) ^
                ((uint)(uVar15 >> 0x29) | 1);
        pcVar22[0xe] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar31;
        *pcVar22 = '\0';
      }
      pcStack_240 = pcVar22 + 8;
      uVar28 = func_0x0011ab24(&pcStack_240);
      func_0x007f5068(param_1,0xffffffff,uVar28,&lStack_1c0);
      func_0x00791660(param_1,0xfffffffe);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      pbVar18 = (byte *)(*pcVar7)(0x206de30);
      if ((*pbVar18 & 1) == 0) {
        func_0x019c9678();
        cVar3 = *pcVar23;
      }
      else {
        cVar3 = *pcVar23;
      }
      if (cVar3 == '\x01') {
        lVar29 = 0;
        uVar15 = 0x72d6ad62f87fcd51;
        do {
          uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
          uVar32 = uVar31 ^ uVar31 >> 0x21;
          uVar2 = (uint)(byte)pcVar23[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar32 >> 0x17);
          pcVar23[lVar29 + 0xd] =
               ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar31 >> 0x29) | 1) ^
               (byte)uVar32;
          uVar15 = lVar29 + -0x61c8864680b583eb +
                   (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar23[lVar29 + 1]) << 0x11);
          lVar29 = lVar29 + 1;
        } while (lVar29 != 0xc);
        *pcVar23 = '\0';
      }
      pcStack_248 = pcVar23 + 0xd;
      uVar28 = func_0x0011ab24(&pcStack_248);
      func_0x00793714(param_1,uVar26,uVar28);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      pbVar18 = (byte *)(*pcVar8)(0x206de60);
      if ((*pbVar18 & 1) == 0) {
        func_0x019c96b4();
        cVar3 = *pcVar24;
      }
      else {
        cVar3 = *pcVar24;
      }
      if (cVar3 == '\x01') {
        lVar29 = 0;
        uVar15 = 0x2521cd1c941a3f7c;
        do {
          uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
          uVar32 = uVar31 ^ uVar31 >> 0x21;
          uVar2 = (uint)(byte)pcVar24[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                  (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
          pcVar24[lVar29 + 0x3b] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar32;
          uVar15 = lVar29 + -0x61c8864680b583eb +
                   (uVar15 >> 0x2f | (uVar15 ^ (byte)pcVar24[lVar29 + 1]) << 0x11);
          lVar29 = lVar29 + 1;
        } while (lVar29 != 0x3a);
        *pcVar24 = '\0';
      }
      pcStack_250 = pcVar24 + 0x3b;
      uVar26 = func_0x0011ab24(&pcStack_250);
      uVar26 = func_0x001155c0(param_1,0xffffffff,0xffffffff,0x7fffffff,uVar26);
      func_0x00791660(param_1,0xfffffffe);
      func_0x00793bd0(param_1,0,0);
      uVar28 = func_0x00791624(param_1,0xffffffff);
      func_0x00791ab0(param_1,uVar27);
      func_0x00794504(param_1,uVar28,1);
      func_0x00794054(param_1,uVar27);
      func_0x00794504(param_1,uVar28,2);
      func_0x00792f00(param_1,uStack_1b0);
/*  found on a paste site? it was re-uploaded illegally  */
      func_0x00794504(param_1,uVar28,3);
      lVar29 = lStack_1c0;
      if (lStack_1c0 == 0) {
        pbVar18 = (byte *)(*pcRam000000000206de90)();
        if ((*pbVar18 & 1) == 0) {
          func_0x019c96f0();
          cVar3 = *pcVar25;
        }
        else {
          cVar3 = *pcVar25;
        }
        if (cVar3 == '\x01') {
          uVar2 = (((byte)pcVar25[1] ^ 0xa75334f8) >> 5 & 7 | ((byte)pcVar25[1] ^ 0xa75334f8) << 3)
                  + 0x45d2134f ^ 0x142e8b;
          pcVar25[2] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - 0x3b;
          *pcVar25 = '\0';
        }
        pcStack_258 = pcVar25 + 2;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        lVar29 = func_0x0011ab24(&pcStack_258);
      }
      func_0x00792f00(param_1,lVar29);
      func_0x00794504(param_1,uVar28,4);
      func_0x00792bf4(param_1,uVar26);
      func_0x00794504(param_1,uVar28,5);
      func_0x00792bf4(param_1,uStack_1a0._1_1_);
      func_0x00794504(param_1,uVar28,6);
      func_0x007932d0(param_1,uStack_1a0._2_1_);
      func_0x00794504(param_1,uVar28,7);
      func_0x00792bf4(param_1,uStack_190 & 0xffffffff);
      func_0x00794504(param_1,uVar28,8);
      func_0x00792bf4(param_1,uStack_1a0 & 0xff);
      func_0x00794504(param_1,uVar28,10);
      func_0x00792bf4(param_1,uStack_1a0._4_4_);
      func_0x00794504(param_1,uVar28,0xb);
      func_0x00792bf4(param_1,uStack_198._4_4_);
      func_0x00794504(param_1,uVar28,0xc);
      func_0x00792f00(param_1,uStack_1b8);
      func_0x00794504(param_1,uVar28,9);
      func_0x007917f4(param_1,uVar27);
      func_0x00791ab0(param_1,uVar20);
      func_0x007930d0(param_1,&DAT_00115898,0,2,&DAT_001158e0);
      puVar21 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
      pbVar33 = (byte *)*puVar21;
      puVar21 = (undefined8 *)func_0x008848ec(*(undefined8 *)(pbVar33 + 0x30),2);
      pbVar18 = (byte *)*puVar21;
      *(byte **)(pbVar33 + 0x10) = pbVar18;
/* wm:stripping the watermark breaks the license */
      if (((*pbVar33 >> 2 & 1) != 0) && ((*pbVar18 & 3) != 0)) {
        func_0x0081b3dc(param_1,pbVar33);
      }
      func_0x00791938(param_1,uVar20);
      func_0x00791660(param_1,0xfffffffe);
      bVar10 = iVar14 != iVar12;
      iVar14 = iVar14 + 1;
    } while (bVar10);
  }
  func_0x00791ab0(param_1,uVar20);
  func_0x00791230(param_1,lVar19,1);
  pbVar18 = (byte *)(*pcRam000000000206dec0)();
  if ((*pbVar18 & 1) == 0) {
    func_0x019c972c();
  }
  iVar12 = iVar11 + -3;
  pcStack_260 = (char *)(*pcRam000000000206dea8)();
  if (*pcStack_260 == '\x01') {
    lVar29 = 0;
    uVar15 = 0x65bd68325871e2fe;
    do {
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_260[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
      ;
/* WM - stripping the watermark breaks the license */
      pcStack_260[lVar29 + 0x1f] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar32;
      uVar15 = lVar29 + -0x61c8864680b583eb +
               (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_260[lVar29 + 1]) << 0x11);
      lVar29 = lVar29 + 1;
    } while (lVar29 != 0x1e);
    *pcStack_260 = '\0';
  }
  pcStack_260 = pcStack_260 + 0x1f;
  uVar20 = func_0x0011ab24(&pcStack_260);
  func_0x007a1ee4(param_1,iVar11 + 0x11,uVar20);
  func_0x007911b0(lVar19,iVar12);
  if (iVar11 < 4) {
    if (iVar12 == 0) goto LAB_00113fec;
  }
  else {
    iVar11 = 4;
    iVar14 = iVar12;
    do {
      func_0x00791ab0(param_1,iVar11);
/* WM - donate: donate/README.md */
      iVar11 = iVar11 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  func_0x00791230(param_1,lVar19,iVar12);
LAB_00113fec:
  if (iVar13 == 10) {
    func_0x00793a78(param_1,0xffffd8f0,0x208ecd0,0);
    iVar11 = func_0x00791be4(param_1,0xffffffff);
    if (iVar11 != 7) {
      func_0x00791660(param_1,0xfffffffe);
      func_0x00793bd0(param_1,0,0);
      func_0x00793bd0(param_1,0,0);
      pbVar18 = (byte *)(*pcRam000000000206def0)();
      if ((*pbVar18 & 1) == 0) {
        func_0x019c9768();
      }
      pcStack_268 = (char *)(*pcRam000000000206ded8)();
      if (*pcStack_268 == '\x01') {
        uVar2 = (byte)pcStack_268[1] ^ 0xb78245d8;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0xb811fd70 ^ 0x12d1fb;
        pcStack_268[3] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - 0x1b;
        uVar15 = (((ulong)(byte)pcStack_268[1] ^ 0x2ba281ddcbf2a89e) << 0x11 | 0x5745) +
                 0x9e3779b97f4a7c15;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar31 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcStack_268[2] ^ (uint)uVar31 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar31 >> 0x17) ^ ((uint)(uVar15 >> 0x29) | 1)
        ;
        pcStack_268[4] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar31;
// donate: donate/README.md
        *pcStack_268 = '\0';
      }
      pcStack_268 = pcStack_268 + 3;
      uVar20 = func_0x0011ab24(&pcStack_268);
      func_0x00792f00(param_1,uVar20);
      pbVar18 = (byte *)(*pcRam000000000206df20)();
      if ((*pbVar18 & 1) == 0) {
        func_0x019c97a4();
      }
      pcStack_270 = (char *)(*pcRam000000000206df08)();
      if (*pcStack_270 == '\x01') {
        uVar2 = (byte)pcStack_270[1] ^ 0x14680704;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x6b881b0e;
        pcStack_270[8] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ 199;
        uVar15 = (((ulong)(byte)pcStack_270[1] ^ 0x2c9e01680a467501) << 0x11 | 0x593c) +
                 0x9e3779b97f4a7c15;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_270[2] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
        pcStack_270[9] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_270[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_270[3] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
/* stripping the watermark breaks the license - github.com/pengussy */
        pcStack_270[10] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_270[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_270[4] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
        pcStack_270[0xb] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_270[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_270[5] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
        pcStack_270[0xc] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_270[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_270[6] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
// WM - origin: github.com/pengussy
        pcStack_270[0xd] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar32;
        uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_270[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar31 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcStack_270[7] ^ (uint)uVar31 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar31 >> 0x17));
        pcStack_270[0xe] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar31;
        *pcStack_270 = '\0';
      }
      pcStack_270 = pcStack_270 + 8;
      uVar20 = func_0x0011ab24(&pcStack_270);
      func_0x00794260(param_1,0xfffffffe,uVar20);
      func_0x007946cc(param_1,0xfffffffe);
      func_0x00791ab0(param_1,0xffffffff);
      func_0x007945e4(param_1,0xffffd8f0,0x208ecd0,0);
    }
    uVar20 = func_0x00791624(param_1,0xffffffff);
    func_0x00791ab0(param_1,uVar34);
    func_0x00791ab0(param_1,(int)uVar17);
    func_0x00794428(param_1,uVar20);
  }
  else {
    uVar20 = 0;
  }
  if (bVar9) {
    func_0x00794054(param_1,1);
    uVar17 = func_0x00791624(param_1,0xffffffff);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    func_0x00794054(param_1,uVar34);
    func_0x00793e24(param_1,0xffffffff,0);
    func_0x007947ec(param_1,1);
    iVar11 = func_0x008019bc(lVar19,param_1,iVar12);
    if ((int)uVar17 != 0) {
      func_0x00791ab0(param_1,uVar17);
      func_0x007947ec(param_1,1);
    }
  }
  else {
    iVar11 = func_0x008019bc(lVar19,param_1,iVar12);
  }
  if ((int)uVar20 != 0) {
    func_0x00791ab0(param_1,uVar34);
    func_0x00792a48(param_1);
    func_0x00794428(param_1,uVar20);
  }
  if (iVar11 == 0) {
    uVar17 = func_0x00791650(lVar19);
    iVar11 = (int)uVar17 + 1;
    pbVar18 = (byte *)(*pcRam000000000206df50)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c9858();
    }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    pcStack_288 = (char *)(*pcRam000000000206df38)();
    if (*pcStack_288 == '\x01') {
      lVar29 = 0;
      uVar15 = 0xe547758fda9724e5;
      do {
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_288[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
        pcStack_288[lVar29 + 0x1d] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar32;
        uVar15 = lVar29 + -0x61c8864680b583eb +
                 (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_288[lVar29 + 1]) << 0x11);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x1c);
      *pcStack_288 = '\0';
    }
    pcStack_288 = pcStack_288 + 0x1d;
    uVar20 = func_0x0011ab24(&pcStack_288);
    func_0x007a1ee4(param_1,iVar11,uVar20);
    func_0x007932d0(param_1,1);
    if ((int)uVar17 == 0) {
      iVar11 = 1;
    }
    else {
      func_0x00791230(lVar19,param_1,uVar17);
    }
  }
  else {
    func_0x007932d0(param_1,0);
    if ((iVar11 == 6) || (iVar11 == 1)) {
      pbVar18 = (byte *)(*pcRam000000000206df80)();
/* WM - origin: github.com/pengussy */
      if ((*pbVar18 & 1) == 0) {
        func_0x019c97e0();
      }
      pcStack_278 = (char *)(*pcRam000000000206df68)();
      if (*pcStack_278 == '\x01') {
        lVar29 = 0;
        uVar15 = 0x1027d1ebe9a52871;
        do {
          uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
          uVar32 = uVar31 ^ uVar31 >> 0x21;
          uVar2 = (uint)(byte)pcStack_278[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar32 >> 0x17);
          pcStack_278[lVar29 + 0x22] =
               ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar31 >> 0x29) | 1) ^
               (byte)uVar32;
          uVar15 = lVar29 + -0x61c8864680b583eb +
                   (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_278[lVar29 + 1]) << 0x11);
          lVar29 = lVar29 + 1;
        } while (lVar29 != 0x21);
        *pcStack_278 = '\0';
      }
      pcStack_278 = pcStack_278 + 0x22;
/*  donate: donate/README.md  */
      uVar17 = func_0x0011ab24(&pcStack_278);
      func_0x00792f00(param_1,uVar17);
      func_0x00862174(lVar19);
    }
    else {
      iVar11 = func_0x00791650(lVar19);
      if (iVar11 == 0) {
        pbVar18 = (byte *)(*pcRam000000000206dfb0)();
        if ((*pbVar18 & 1) == 0) {
          func_0x019c981c();
        }
        pcStack_280 = (char *)(*pcRam000000000206df98)();
        if (*pcStack_280 == '\x01') {
          lVar29 = 0;
          uVar15 = 0xc0949518035b6411;
          do {
            uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
            uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
            uVar32 = uVar31 ^ uVar31 >> 0x21;
            uVar2 = (uint)(byte)pcStack_280[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17);
            pcStack_280[lVar29 + 0x28] =
// WM - more drops soon - github.com/pengussy
                 ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar31 >> 0x29) | 1) ^
                 (byte)uVar32;
            uVar15 = lVar29 + -0x61c8864680b583eb +
                     (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_280[lVar29 + 1]) << 0x11);
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0x27);
          *pcStack_280 = '\0';
        }
        pcStack_280 = pcStack_280 + 0x28;
        uVar17 = func_0x0011ab24(&pcStack_280);
        func_0x00792f00(param_1,uVar17);
      }
      else {
        func_0x00791230(lVar19,param_1,1);
      }
    }
    iVar11 = 2;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
    return iVar11;
  }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  do {
    ___stack_chk_fail();
LAB_00114e5c:
    pbVar18 = (byte *)(*pcRam000000000206dbf0)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c93a8();
    }
    pcStack_1e8 = (char *)(*pcRam000000000206dbd8)();
    if (*pcStack_1e8 == '\x01') {
      lVar29 = 0;
      uVar15 = unaff_x28 * 0x17062733897e37fa ^ (ulong)(unaff_x28 * 0x17062733897e37fa) >> 0x21;
      do {
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * unaff_x28;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_1e8[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar32 >> 0x17);
        pcStack_1e8[lVar29 + 0x20] =
             ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar31 >> 0x29) | 1) ^
             (byte)uVar32;
        uVar15 = lVar29 + -0x61c8864680b583eb +
                 (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1e8[lVar29 + 1]) << 0x11);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x1f);
      *pcStack_1e8 = '\0';
    }
    pcStack_1e8 = pcStack_1e8 + 0x20;
    uVar17 = func_0x0011ab24(&pcStack_1e8);
    func_0x007a1abc(param_1,3,uVar17);
LAB_00114f90:
    pbVar18 = (byte *)(*pcRam000000000206dce0)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c94d4();
    }
    pcStack_210 = (char *)(*pcRam000000000206dcc8)();
    if (*pcStack_210 == '\x01') {
      uVar31 = unaff_x28 * -0x128336d2b1ca83d9;
      uVar15 = unaff_x28 * 0x7eff4dd5948cc2cb;
/* wm:origin: github.com/pengussy */
      uVar32 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_210[1] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
      ;
      pcStack_210[4] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar32;
      uVar15 = (uVar31 >> 0x2f | ((ulong)(byte)pcStack_210[1] ^ uVar31 >> 0x21 ^ uVar31) << 0x11) +
               0x9e3779b97f4a7c15;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * unaff_x28;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_210[2] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17))
      ;
      pcStack_210[5] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_210[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * unaff_x28;
      uVar31 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_210[3] ^ (uint)uVar31 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar31 >> 0x17))
      ;
      pcStack_210[6] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar31;
      *pcStack_210 = '\0';
    }
    pcStack_210 = pcStack_210 + 4;
    uVar17 = func_0x0011ab24(&pcStack_210);
    pbVar18 = (byte *)(*pcRam000000000206dd10)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c9510();
/* wm:do not claim this as your own */
    }
    pcStack_218 = (char *)(*pcRam000000000206dcf8)();
    if (*pcStack_218 == '\x01') {
      lVar29 = 0;
      uVar15 = unaff_x28 * 0xbae9b242c55fa9e ^ (ulong)(unaff_x28 * 0xbae9b242c55fa9e) >> 0x21;
      do {
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * unaff_x28;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_218[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcStack_218[lVar29 + 0x1f] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar32;
        uVar15 = lVar29 + -0x61c8864680b583eb +
                 (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_218[lVar29 + 1]) << 0x11);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x1e);
      *pcStack_218 = '\0';
    }
    pcStack_218 = pcStack_218 + 0x1f;
    func_0x0011ab24(&pcStack_218);
    func_0x007a1b5c(param_1,uVar17);
LAB_00115288:
    pbVar18 = (byte *)(*pcRam000000000206dd70)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c9588();
    }
    pcStack_228 = (char *)(*pcRam000000000206dd58)();
    if (*pcStack_228 == '\x01') {
      uVar31 = unaff_x28 * -0x296b637252f04b6e;
      uVar15 = unaff_x28 * 0x562740353956f3c4;
      uVar32 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_228[1] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
/* wm:found on a paste site? it was re-uploaded illegally */
      pcStack_228[4] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar32;
      uVar15 = (uVar31 >> 0x2f | ((ulong)(byte)pcStack_228[1] ^ uVar31 >> 0x21 ^ uVar31) << 0x11) +
               0x9e3779b97f4a7c15;
      uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar31 = (uVar31 ^ uVar31 >> 0x21) * unaff_x28;
      uVar32 = uVar31 ^ uVar31 >> 0x21;
      uVar2 = (uint)(byte)pcStack_228[2] ^ (uint)uVar32 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar32 >> 0x17) ^
              ((uint)(uVar31 >> 0x29) | 1);
      pcStack_228[5] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar32;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_228[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * unaff_x28;
      uVar31 = uVar15 ^ uVar15 >> 0x21;
      uVar2 = (uint)(byte)pcStack_228[3] ^ (uint)uVar31 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar31 >> 0x17) ^
              ((uint)(uVar15 >> 0x29) | 1);
      pcStack_228[6] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar31;
      *pcStack_228 = '\0';
    }
/*  if you paid for this, you were scammed  */
    pcStack_228 = pcStack_228 + 4;
    uVar17 = func_0x0011ab24(&pcStack_228);
    pbVar18 = (byte *)(*pcRam000000000206dda0)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c95c4();
    }
    pcStack_230 = (char *)(*pcRam000000000206dd88)();
    if (*pcStack_230 == '\x01') {
      lVar29 = 0;
      uVar15 = unaff_x28 * -0x9b81138d6d0cfcf ^ (ulong)(unaff_x28 * -0x9b81138d6d0cfcf) >> 0x21;
      do {
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * unaff_x28;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_230[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
        pcStack_230[lVar29 + 0x16] =
             ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar32;
        uVar15 = lVar29 + -0x61c8864680b583eb +
                 (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_230[lVar29 + 1]) << 0x11);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x15);
      *pcStack_230 = '\0';
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    }
    pcStack_230 = pcStack_230 + 0x16;
    func_0x0011ab24(&pcStack_230);
    func_0x007a1b5c(param_1,uVar17);
LAB_00115580:
    func_0x019c92b8();
LAB_00114ac4:
    pcStack_1c8 = (char *)(*pcRam000000000206dae8)();
    if (*pcStack_1c8 == '\x01') {
      lVar29 = 0;
      uVar15 = 0xb206fe39b233193c;
      do {
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * -0x3b314601e57a13ad;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_1c8[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar32 >> 0x17) ^ ((uint)(uVar31 >> 0x29) | 1)
        ;
        pcStack_1c8[lVar29 + 0x4c] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar32;
        uVar15 = lVar29 + -0x61c8864680b583eb +
                 (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1c8[lVar29 + 1]) << 0x11);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x4b);
      *pcStack_1c8 = '\0';
    }
    pcStack_1c8 = pcStack_1c8 + 0x4c;
    uVar17 = func_0x0011ab24(&pcStack_1c8);
    func_0x007a1abc(param_1,2,uVar17);
/*  keep the notice, keep the source honest  */
LAB_00114bf0:
    pbVar18 = (byte *)(*pcRam000000000206db90)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c9330();
    }
    pcStack_1d8 = (char *)(*pcRam000000000206db78)();
    if (*pcStack_1d8 == '\x01') {
      lVar29 = 0;
      uVar15 = unaff_x28 * -0x4bb683b51188ffdd ^ (ulong)(unaff_x28 * -0x4bb683b51188ffdd) >> 0x21;
      do {
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * unaff_x28;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_1d8[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar31 >> 0x29) | 1) + (int)(uVar32 >> 0x17));
        pcStack_1d8[lVar29 + 0x38] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar32;
        uVar15 = lVar29 + -0x61c8864680b583eb +
                 (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1d8[lVar29 + 1]) << 0x11);
// WM - unlicensed copy if this notice is missing
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x37);
      *pcStack_1d8 = '\0';
    }
    pcStack_1d8 = pcStack_1d8 + 0x38;
    uVar17 = func_0x0011ab24(&pcStack_1d8);
    func_0x007a1abc(param_1,2,uVar17);
LAB_00114d24:
    pbVar18 = (byte *)(*pcRam000000000206dc20)();
    if ((*pbVar18 & 1) == 0) {
      func_0x019c93e4();
    }
    pcStack_1f0 = (char *)(*pcRam000000000206dc08)();
    if (*pcStack_1f0 == '\x01') {
      lVar29 = 0;
      uVar15 = unaff_x28 * -0x2935834c067005ff ^ (ulong)(unaff_x28 * -0x2935834c067005ff) >> 0x21;
      do {
        uVar31 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
        uVar31 = (uVar31 ^ uVar31 >> 0x21) * unaff_x28;
        uVar32 = uVar31 ^ uVar31 >> 0x21;
        uVar2 = (uint)(byte)pcStack_1f0[lVar29 + 1] ^ (uint)uVar32 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar32 >> 0x17) ^
                ((uint)(uVar31 >> 0x29) | 1);
        pcStack_1f0[lVar29 + 0x22] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar32;
        uVar15 = lVar29 + -0x61c8864680b583eb +
                 (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_1f0[lVar29 + 1]) << 0x11);
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x21);
// no support for modified copies
      *pcStack_1f0 = '\0';
    }
    pcStack_1f0 = pcStack_1f0 + 0x22;
    uVar17 = func_0x0011ab24(&pcStack_1f0);
    func_0x007a1abc(param_1,3,uVar17);
  } while( true );
}

