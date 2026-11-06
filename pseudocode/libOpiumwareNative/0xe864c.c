/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xe864c:0b05afd846
   =========================================================================== */

undefined8 FUN_000e864c(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long unaff_x27;
  undefined1 auVar27 [16];
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
/* wm:stripping the watermark breaks the license */
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *apcStack_70 [2];
  
  iVar6 = func_0x00791be4(param_1,1);
  if (iVar6 != 7) {
    pbVar12 = (byte *)(*pcRam000000000206b610)();
    if ((*pbVar12 & 1) == 0) goto LAB_000eaa10;
    goto LAB_000ea0e0;
  }
  iVar6 = func_0x00791650(param_1);
// WM - stripping the watermark breaks the license
  pbVar12 = (byte *)(*pcRam000000000206b640)();
  if ((*pbVar12 & 1) == 0) {
    func_0x019c5de0();
  }
  unaff_x27 = -0x3b314601e57a13ad;
  lVar20 = -0x61c8864680b583eb;
  auVar27 = (*pcRam000000000206b628)(0x206b628,0xff51afd7ed558ccd);
  pcStack_78 = auVar27._0_8_;
  if (*pcStack_78 == '\x01') {
    lVar21 = 0;
    uVar22 = auVar27._8_8_ * 0x56c498f21b687439;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar22 ^ uVar22 >> 0x21;
    do {
      uVar24 = (uVar22 ^ uVar22 >> 0x21) * auVar27._8_8_;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar25 >> 0x17);
      pcStack_78[lVar21 + 0x1b] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar22 = lVar21 + lVar20 + (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_78[lVar21 + 1]) << 0x11);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0x1a);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0x1b;
  uVar13 = func_0x0011ab24(&pcStack_78);
  func_0x007a1ee4(param_1,iVar6 + 0xf,uVar13);
  func_0x00793bd0(param_1,0,0);
  uVar22 = func_0x00791624(param_1,0xffffffff);
  pbVar12 = (byte *)(*pcRam000000000206b670)();
  if ((*pbVar12 & 1) == 0) {
    func_0x019c5e1c();
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  }
  pcStack_80 = (char *)(*pcRam000000000206b658)();
  if (*pcStack_80 == '\x01') {
    lVar20 = 0;
    uVar24 = 0x6c87a25235c74519;
    do {
      uVar25 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
      uVar26 = uVar25 ^ uVar25 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[lVar20 + 1] ^ (uint)uVar26 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar26 >> 0x17));
      pcStack_80[lVar20 + 0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar26;
      uVar24 = lVar20 + -0x61c8864680b583eb +
               (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_80[lVar20 + 1]) << 0x11);
      lVar20 = lVar20 + 1;
/* wm:unlicensed copy if this notice is missing */
    } while (lVar20 != 0xd);
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0xe;
  uVar13 = func_0x0011ab24(&pcStack_80);
  func_0x007935a0(param_1,1,uVar13);
  iVar7 = func_0x00791be4(param_1,0xffffffff);
  if (iVar7 != 7) goto LAB_000ea418;
  uVar13 = func_0x00791624(param_1,0xffffffff);
  uVar14 = func_0x007952a0(param_1,uVar13,0);
  if ((int)uVar14 < 0) {
    func_0x00791660(param_1,0xfffffffe);
  }
  else {
    iVar7 = 0;
    do {
      iVar8 = func_0x00791be4(param_1,0xfffffffe);
      if ((iVar8 == 7) && (iVar8 = func_0x000efad4(param_1,0xfffffffe), iVar8 != 0)) {
        func_0x00791ab0(param_1,0xfffffffe);
        iVar7 = iVar7 + 1;
        func_0x00794504(param_1,uVar22);
      }
      func_0x00791660(param_1,0xfffffffd);
      uVar14 = func_0x007952a0(param_1,uVar13,uVar14);
    } while (-1 < (int)uVar14);
    func_0x00791660(param_1,0xfffffffe);
    if (0 < iVar7) {
      pcVar15 = (char *)(*pcRam000000000206b718)();
      pcVar16 = (char *)(*pcRam000000000206b748)();
      pcVar17 = (char *)(*pcRam000000000206b898)();
      pcVar18 = (char *)(*pcRam000000000206b8f8)();
      pcVar4 = pcRam000000000206b730;
      iVar8 = 1;
      uVar24 = uVar22;
      do {
        func_0x00793928(param_1,uVar24,iVar8);
        uVar13 = func_0x00791624(param_1,0xffffffff);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        iVar9 = func_0x000efad4(param_1,uVar13);
        if (iVar9 != 0) {
          pbVar12 = (byte *)(*pcVar4)(0x206b730);
          if ((*pbVar12 & 1) == 0) {
            func_0x019c5ed0();
            cVar2 = *pcVar15;
          }
          else {
            cVar2 = *pcVar15;
          }
          if (cVar2 == '\x01') {
            uVar1 = (byte)pcVar15[1] ^ 0x22ed855e;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x3c0bf246 ^ 0x2030fd;
            pcVar15[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 99;
            uVar25 = (((ulong)(byte)pcVar15[1] ^ 0x9f358435cbb50c1c) << 0x11 | 0x13e6b) +
                     0x9e3779b97f4a7c15;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[2] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
/* WM - origin: github.com/pengussy */
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[3] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[4] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[5] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[6] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
/*  found on a paste site? it was re-uploaded illegally  */
            uVar1 = (uint)(byte)pcVar15[7] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0x11] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[7]) << 0x11) + 0x9e3779b97f4a7c1b;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[8] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0x12] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[8]) << 0x11) + 0x9e3779b97f4a7c1c;
            uVar26 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar26 = (uVar26 ^ uVar26 >> 0x21) * -0x3b314601e57a13ad;
            uVar23 = uVar26 ^ uVar26 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[9] ^ (uint)uVar23 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar23 >> 0x17) ^
/* if you paid for this, you were scammed */
                    ((uint)(uVar26 >> 0x29) | 1);
            pcVar15[0x13] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar23;
            uVar25 = (uVar25 >> 0x2f | (uVar25 ^ (byte)pcVar15[9]) << 0x11) + 0x9e3779b97f4a7c1d;
            uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0xae502812aa7333;
            uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
            uVar26 = uVar25 ^ uVar25 >> 0x21;
            uVar1 = (uint)(byte)pcVar15[10] ^ (uint)uVar26 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar26 >> 0x17) ^
                    ((uint)(uVar25 >> 0x29) | 1);
            pcVar15[0x14] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar26;
            *pcVar15 = '\0';
          }
          pcStack_98 = pcVar15 + 0xb;
          uVar14 = func_0x0011ab24(&pcStack_98);
          func_0x007935a0(param_1,uVar13,uVar14);
          uVar10 = func_0x00791624(param_1,0xffffffff);
          iVar9 = func_0x00791be4(param_1);
          if (iVar9 == 8) {
            pbVar12 = (byte *)(*pcRam000000000206b760)();
            if ((*pbVar12 & 1) == 0) {
              func_0x019c5f0c();
              cVar2 = *pcVar16;
            }
            else {
              cVar2 = *pcVar16;
            }
            if (cVar2 == '\x01') {
              lVar20 = 0;
              uVar24 = 0x15d37d47ed92810b;
              do {
                uVar25 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
                uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                uVar26 = uVar25 ^ uVar25 >> 0x21;
                uVar1 = (uint)(byte)pcVar16[lVar20 + 1] ^ (uint)uVar26 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                        (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar26 >> 0x17));
                pcVar16[lVar20 + 0xe] =
                     ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar26;
                uVar24 = lVar20 + -0x61c8864680b583eb +
                         (uVar24 >> 0x2f | (uVar24 ^ (byte)pcVar16[lVar20 + 1]) << 0x11);
                lVar20 = lVar20 + 1;
              } while (lVar20 != 0xd);
              *pcVar16 = '\0';
            }
            pcStack_a0 = pcVar16 + 0xe;
            uVar14 = func_0x0011ab24(&pcStack_a0);
            func_0x007935a0(param_1,1,uVar14);
            uVar14 = func_0x00791624(param_1,0xffffffff);
            uVar19 = func_0x007952a0(param_1,uVar14,0);
            if ((int)uVar19 < 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = 0;
              do {
                while ((iVar11 = func_0x00791be4(param_1,0xfffffffe), iVar11 == 7 &&
                       (uVar24 = func_0x000efad4(param_1,0xfffffffe), (uVar24 & 1) != 0))) {
                  iVar11 = func_0x00791f88(param_1,0xfffffffe,uVar13);
                  func_0x00791660(param_1,0xfffffffd);
                  if (iVar11 != 0) goto LAB_000e9130;
                  iVar9 = iVar9 + 1;
                  uVar19 = func_0x007952a0(param_1,uVar14,uVar19);
                  if ((int)uVar19 < 0) goto LAB_000e9130;
                }
                func_0x00791660(param_1,0xfffffffd);
                uVar19 = func_0x007952a0(param_1,uVar14,uVar19);
              } while (-1 < (int)uVar19);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            }
LAB_000e9130:
            func_0x00791660(param_1,0xfffffffe);
            auVar27 = func_0x000eff8c(param_1,1,uVar13,uVar10,iVar9,2,iVar6 + -1);
            uVar24 = uVar22 & 0xffffffff;
            if (((auVar27._0_8_ & 1) != 0) && (iVar9 = func_0x000efad4(param_1,uVar13), iVar9 != 0))
            {
              pbVar12 = (byte *)(*pcRam000000000206b8b0)();
              if ((*pbVar12 & 1) == 0) {
                func_0x019c5f48();
                cVar2 = *pcVar17;
              }
              else {
                cVar2 = *pcVar17;
              }
              if (cVar2 == '\x01') {
                uVar1 = (byte)pcVar17[1] ^ 0x684e6cdc;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x9cb09ed1;
                pcVar17[7] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x2d ^ 0x1f;
                uVar24 = (((ulong)(byte)pcVar17[1] ^ 0xd649145c2fab1057) << 0x11 | 0x1ac92) +
                         0x9e3779b97f4a7c15;
                uVar25 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
                uVar26 = uVar25 ^ uVar25 >> 0x21;
                uVar1 = (uint)(byte)pcVar17[2] ^ (uint)uVar26 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar26 >> 0x17);
                pcVar17[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') -
                             ((byte)(uVar25 >> 0x29) | 1) ^ (byte)uVar26;
                uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcVar17[2]) << 0x11) + 0x9e3779b97f4a7c16
                ;
                uVar25 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
                uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
                uVar26 = uVar25 ^ uVar25 >> 0x21;
                uVar1 = (uint)(byte)pcVar17[3] ^ (uint)uVar26 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar26 >> 0x17);
                pcVar17[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') -
                             ((byte)(uVar25 >> 0x29) | 1) ^ (byte)uVar26;
                uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcVar17[3]) << 0x11) + 0x9e3779b97f4a7c17
                ;
                uVar25 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
                uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
                uVar26 = uVar25 ^ uVar25 >> 0x21;
                uVar1 = (uint)(byte)pcVar17[4] ^ (uint)uVar26 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar26 >> 0x17);
                pcVar17[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') -
                              ((byte)(uVar25 >> 0x29) | 1) ^ (byte)uVar26;
                uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcVar17[4]) << 0x11) + 0x9e3779b97f4a7c18
/*  proprietary - see LICENSE - do not sell  */
                ;
                uVar25 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
                uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
                uVar26 = uVar25 ^ uVar25 >> 0x21;
                uVar1 = (uint)(byte)pcVar17[5] ^ (uint)uVar26 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar26 >> 0x17);
                pcVar17[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') -
                               ((byte)(uVar25 >> 0x29) | 1) ^ (byte)uVar26;
                uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcVar17[5]) << 0x11) + 0x9e3779b97f4a7c19
                ;
                uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
                uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                uVar25 = uVar24 ^ uVar24 >> 0x21;
                uVar1 = (uint)(byte)pcVar17[6] ^ (uint)uVar25 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar25 >> 0x17);
                pcVar17[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') -
                               ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                *pcVar17 = '\0';
              }
              pcStack_a8 = pcVar17 + 7;
              uVar14 = func_0x0011ab24(&pcStack_a8);
              func_0x007935a0(param_1,uVar13,uVar14);
              iVar9 = func_0x00792220(param_1,0xffffffff);
              func_0x00791660(param_1,0xfffffffe);
              if (iVar9 != 0) {
                func_0x000f106c(param_1,uVar13);
              }
              pbVar12 = (byte *)(*pcRam000000000206b910)();
              if ((*pbVar12 & 1) == 0) {
                func_0x019c5f84();
                cVar2 = *pcVar18;
              }
              else {
                cVar2 = *pcVar18;
              }
              if (cVar2 == '\x01') {
/* keep the notice, keep the source honest */
                lVar20 = 0;
                uVar24 = 0xdef3081bff030ff8;
                do {
                  uVar25 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
                  uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
                  uVar26 = uVar25 ^ uVar25 >> 0x21;
                  uVar1 = (uint)(byte)pcVar18[lVar20 + 1] ^ (uint)uVar26 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar26 >> 0x17);
                  pcVar18[lVar20 + 0x1b] =
                       ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') -
                       ((byte)(uVar25 >> 0x29) | 1) ^ (byte)uVar26;
                  uVar24 = lVar20 + -0x61c8864680b583eb +
                           (uVar24 >> 0x2f | (uVar24 ^ (byte)pcVar18[lVar20 + 1]) << 0x11);
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x1a);
                *pcVar18 = '\0';
              }
              pcStack_b0 = pcVar18 + 0x1b;
              uVar13 = func_0x0011ab24(&pcStack_b0);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              func_0x007a1ee4(param_1,auVar27._8_4_ + 1,uVar13);
              func_0x00791ab0(param_1,uVar10);
              if (0 < auVar27._8_4_) {
                uVar25 = auVar27._0_8_ >> 0x20;
                uVar24 = auVar27._8_8_;
                do {
                  func_0x00791ab0(param_1,uVar25);
                  uVar25 = (ulong)((int)uVar25 + 1);
                  uVar1 = (int)uVar24 - 1;
                  uVar24 = (ulong)uVar1;
                } while (uVar1 != 0);
              }
              iVar9 = func_0x00794a14(param_1,auVar27._8_8_,0,0);
              uVar24 = uVar22 & 0xffffffff;
              if (iVar9 != 0) goto LAB_000eaa08;
            }
          }
        }
        func_0x00791660(param_1,uVar24);
        bVar5 = iVar8 != iVar7;
        iVar8 = iVar8 + 1;
      } while (bVar5);
    }
  }
  func_0x00793bd0(param_1,0,0);
  uVar13 = func_0x00791624(param_1,0xffffffff);
  pbVar12 = (byte *)(*pcRam000000000206b940)();
  if ((*pbVar12 & 1) == 0) {
    func_0x019c5fc0();
  }
  pcStack_b8 = (char *)(*pcRam000000000206b928)();
  if (*pcStack_b8 == '\x01') {
    uVar1 = (byte)pcStack_b8[1] ^ 0xe79dbd8c;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x2ba9eed3;
    pcStack_b8[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x4f;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar22 = (((ulong)(byte)pcStack_b8[1] ^ 0xb05030d6ed8f8f80) << 0x11 | 0x160a0) +
             0x9e3779b97f4a7c15;
    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
    pcStack_b8[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
    uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
    pcStack_b8[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
    uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
    pcStack_b8[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
/* donate: donate/README.md - github.com/pengussy */
    uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
    pcStack_b8[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
    uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
    pcStack_b8[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
    uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
    pcStack_b8[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
    uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_b8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
    pcStack_b8[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
    uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_b8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
    uVar24 = uVar22 ^ uVar22 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b8[9] ^ (uint)uVar24 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
    pcStack_b8[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar24;
    *pcStack_b8 = '\0';
  }
/* wm:no support for modified copies */
  pcStack_b8 = pcStack_b8 + 10;
  uVar14 = func_0x0011ab24(&pcStack_b8);
  func_0x007935a0(param_1,1,uVar14);
  iVar7 = func_0x00791be4(param_1,0xffffffff);
  if (iVar7 != 7) {
    do {
      pbVar12 = (byte *)(*pcRam000000000206b970)();
      if ((*pbVar12 & 1) == 0) {
        func_0x019c5ffc();
      }
      pcStack_c0 = (char *)(*pcRam000000000206b958)();
      if (*pcStack_c0 == '\x01') {
        uVar24 = unaff_x27 * 0x73e64d2ac4e9e889;
        uVar22 = unaff_x27 * -0x6d1f2fd282b45e47;
        uVar25 = uVar22 ^ uVar22 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c0[1] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar25 >> 0x17) ^ ((uint)(uVar22 >> 0x29) | 1)
        ;
        pcStack_c0[4] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar25;
        uVar22 = (uVar24 >> 0x2f | ((ulong)(byte)pcStack_c0[1] ^ uVar24 >> 0x21 ^ uVar24) << 0x11) +
                 0x9e3779b97f4a7c15;
        uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * unaff_x27;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar25 ^ 0xffffffc3;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar25 >> 0x17) ^ ((uint)(uVar24 >> 0x29) | 1)
        ;
        pcStack_c0[5] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar25;
        uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar22 = (uVar22 ^ uVar22 >> 0x21) * unaff_x27;
        uVar24 = uVar22 ^ uVar22 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17) ^ ((uint)(uVar22 >> 0x29) | 1)
        ;
        pcStack_c0[6] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar24;
        *pcStack_c0 = '\0';
      }
      pcStack_c0 = pcStack_c0 + 4;
      uVar13 = func_0x0011ab24(&pcStack_c0);
      pbVar12 = (byte *)(*pcRam000000000206b9a0)();
      if ((*pbVar12 & 1) == 0) {
        func_0x019c6038();
      }
      pcStack_c8 = (char *)(*pcRam000000000206b988)();
      if (*pcStack_c8 == '\x01') {
        lVar20 = 0;
        uVar22 = unaff_x27 * 0x1bb1081afce91397 ^ (ulong)(unaff_x27 * 0x1bb1081afce91397) >> 0x21;
        do {
          uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
          uVar24 = (uVar24 ^ uVar24 >> 0x21) * unaff_x27;
          uVar25 = uVar24 ^ uVar24 >> 0x21;
          uVar1 = (uint)(byte)pcStack_c8[lVar20 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
          pcStack_c8[lVar20 + 0x17] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar25;
          uVar22 = lVar20 + -0x61c8864680b583eb +
                   (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_c8[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x16);
        *pcStack_c8 = '\0';
      }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      pcStack_c8 = pcStack_c8 + 0x17;
      func_0x0011ab24(&pcStack_c8);
      func_0x007a1b5c(param_1,uVar13);
LAB_000eaa08:
      func_0x00791198(param_1);
LAB_000eaa10:
      func_0x019c5da4();
LAB_000ea0e0:
      apcStack_70[0] = (char *)(*pcRam000000000206b5f8)();
      if (*apcStack_70[0] == '\x01') {
        uVar1 = (byte)apcStack_70[0][1] ^ 0x6eeb75c7;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x50882d11;
        apcStack_70[0][8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 4;
        uVar22 = (((ulong)(byte)apcStack_70[0][1] ^ 0x84634aa5da89ac73) << 0x11 | 0x108c6) +
                 0x9e3779b97f4a7c15;
        uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar1 = (uint)(byte)apcStack_70[0][2] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        apcStack_70[0][9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
        uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)apcStack_70[0][2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar1 = (uint)(byte)apcStack_70[0][3] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
/* wm:more drops soon - github.com/pengussy */
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        apcStack_70[0][10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
        uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)apcStack_70[0][3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar1 = (uint)(byte)apcStack_70[0][4] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        apcStack_70[0][0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
        uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)apcStack_70[0][4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar1 = (uint)(byte)apcStack_70[0][5] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        apcStack_70[0][0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
        uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)apcStack_70[0][5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar1 = (uint)(byte)apcStack_70[0][6] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        apcStack_70[0][0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
        uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)apcStack_70[0][6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar22 ^ uVar22 >> 0x21;
        uVar1 = (uint)(byte)apcStack_70[0][7] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar22 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
        apcStack_70[0][0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar24;
/* more drops soon - github.com/pengussy */
        *apcStack_70[0] = '\0';
      }
      apcStack_70[0] = apcStack_70[0] + 8;
      uVar13 = func_0x0011ab24(apcStack_70);
      func_0x007a1ba8(param_1,1,uVar13);
LAB_000ea418:
      pbVar12 = (byte *)(*pcRam000000000206b6a0)();
      if ((*pbVar12 & 1) == 0) {
        func_0x019c5e58();
      }
      pcStack_88 = (char *)(*pcRam000000000206b688)();
      if (*pcStack_88 == '\x01') {
        uVar24 = unaff_x27 * -0x1d618cfc33f6cd68;
        uVar22 = unaff_x27 * -0x4c3f27f15a252751;
        uVar25 = uVar22 ^ uVar22 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[1] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar25 >> 0x17);
        pcStack_88[4] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar22 >> 0x29) | 1) ^
             (byte)uVar25;
        uVar22 = (uVar24 >> 0x2f | ((ulong)(byte)pcStack_88[1] ^ uVar24 >> 0x21 ^ uVar24) << 0x11) +
                 0x9e3779b97f4a7c15;
        uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * unaff_x27;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar25 >> 0x17);
        pcStack_88[5] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar24 >> 0x29) | 1) ^
             (byte)uVar25;
        uVar22 = (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar22 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
        uVar22 = (uVar22 ^ uVar22 >> 0x21) * unaff_x27;
        uVar24 = uVar22 ^ uVar22 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar24 >> 0x17);
/* reversing this took months of machine time */
        pcStack_88[6] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar22 >> 0x29) | 1) ^
             (byte)uVar24;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 4;
      uVar13 = func_0x0011ab24(&pcStack_88);
      pbVar12 = (byte *)(*pcRam000000000206b6d0)();
      if ((*pbVar12 & 1) == 0) {
        func_0x019c5e94();
      }
      pcStack_90 = (char *)(*pcRam000000000206b6b8)();
      if (*pcStack_90 == '\x01') {
        lVar20 = 0;
        uVar22 = unaff_x27 * 0x2b58506700a37d9 ^ (ulong)(unaff_x27 * 0x2b58506700a37d9) >> 0x21;
        do {
          uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
          uVar24 = (uVar24 ^ uVar24 >> 0x21) * unaff_x27;
          uVar25 = uVar24 ^ uVar24 >> 0x21;
          uVar1 = (uint)(byte)pcStack_90[lVar20 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar25 >> 0x17) ^
                  ((uint)(uVar24 >> 0x29) | 1);
          pcStack_90[lVar20 + 0x17] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar25;
          uVar22 = lVar20 + -0x61c8864680b583eb +
                   (uVar22 >> 0x2f | (uVar22 ^ (byte)pcStack_90[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x16);
        *pcStack_90 = '\0';
      }
      pcStack_90 = pcStack_90 + 0x17;
      func_0x0011ab24(&pcStack_90);
      func_0x007a1b5c(param_1,uVar13);
    } while( true );
  }
  uVar14 = func_0x00791624(param_1,0xffffffff);
  uVar19 = func_0x007952a0(param_1,uVar14,0);
  if ((int)uVar19 < 0) {
    func_0x00791660(param_1,0xfffffffe);
// found on a paste site? it was re-uploaded illegally
  }
  else {
    iVar7 = 0;
    do {
      iVar8 = func_0x00791be4(param_1,0xfffffffe);
      if ((iVar8 == 10) && (iVar8 = func_0x00791be4(param_1,0xffffffff), iVar8 == 7)) {
        func_0x00791ab0(param_1,0xffffffff);
        iVar7 = iVar7 + 1;
        func_0x00794504(param_1,uVar13,iVar7);
      }
      func_0x00791660(param_1,0xfffffffd);
      uVar19 = func_0x007952a0(param_1,uVar14,uVar19);
    } while (-1 < (int)uVar19);
    func_0x00791660(param_1,0xfffffffe);
    if (0 < iVar7) {
      pcVar15 = (char *)(*pcRam000000000206b9b8)();
      pcVar16 = (char *)(*pcRam000000000206b9e8)();
      pcVar17 = (char *)(*pcRam000000000206ba18)();
      pcVar4 = pcRam000000000206b9d0;
      iVar8 = 1;
      do {
        func_0x00793928(param_1,uVar13,iVar8);
        uVar14 = func_0x00791624(param_1,0xffffffff);
        iVar9 = func_0x000efad4(param_1,uVar14);
        if (iVar9 != 0) {
          pbVar12 = (byte *)(*pcVar4)(0x206b9d0);
// keep the notice, keep the source honest
          if ((*pbVar12 & 1) == 0) {
            func_0x019c6074();
            cVar2 = *pcVar15;
          }
          else {
            cVar2 = *pcVar15;
          }
          if (cVar2 == '\x01') {
            lVar20 = 0;
            uVar22 = 0xc9497d6cc678afaa;
            do {
              uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
              uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
              uVar25 = uVar24 ^ uVar24 >> 0x21;
              uVar1 = (uint)(byte)pcVar15[lVar20 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                      (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
              pcVar15[lVar20 + 0x10] =
                   ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar25;
              uVar22 = lVar20 + -0x61c8864680b583eb +
                       (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar15[lVar20 + 1]) << 0x11);
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0xf);
            *pcVar15 = '\0';
          }
          pcStack_d0 = pcVar15 + 0x10;
          uVar19 = func_0x0011ab24(&pcStack_d0);
          func_0x007935a0(param_1,uVar14,uVar19);
          lVar20 = func_0x00792874(param_1,0xffffffff);
          if (lVar20 != 0) {
            auVar27 = func_0x000eff8c(param_1,1,uVar14,0,0,2,iVar6 + -1);
            if (((auVar27._0_8_ & 1) != 0) && (iVar9 = func_0x000efad4(param_1,uVar14), iVar9 != 0))
            {
              func_0x000f106c(param_1,uVar14);
/* do not claim this as your own */
              pbVar12 = (byte *)(*pcRam000000000206ba00)();
              if ((*pbVar12 & 1) == 0) {
                func_0x019c60b0();
                cVar2 = *pcVar16;
              }
              else {
                cVar2 = *pcVar16;
              }
              if (cVar2 == '\x01') {
                lVar21 = 0;
                uVar22 = 0xd3c2a3ccf0e67bfe;
                do {
                  uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                  uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                  uVar25 = uVar24 ^ uVar24 >> 0x21;
                  uVar1 = (uint)(byte)pcVar16[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                          (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
                  pcVar16[lVar21 + 0x1b] =
                       ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar25;
                  uVar22 = lVar21 + -0x61c8864680b583eb +
                           (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar16[lVar21 + 1]) << 0x11);
                  lVar21 = lVar21 + 1;
                } while (lVar21 != 0x1a);
                *pcVar16 = '\0';
              }
/*  watermarked copy - do not remove  */
              pcStack_d8 = pcVar16 + 0x1b;
              uVar14 = func_0x0011ab24(&pcStack_d8);
              func_0x007a1ee4(lVar20,auVar27._8_4_ + 1,uVar14);
              if (0 < auVar27._8_4_) {
                uVar24 = auVar27._0_8_ >> 0x20;
                uVar22 = auVar27._8_8_;
                do {
                  func_0x00062e10(param_1,lVar20,uVar24,0);
                  uVar24 = (ulong)((int)uVar24 + 1);
                  uVar1 = (int)uVar22 - 1;
                  uVar22 = (ulong)uVar1;
                } while (uVar1 != 0);
              }
              iVar9 = func_0x008019bc(lVar20,param_1,auVar27._8_8_);
              pcVar3 = pcRam0000000001f26db0;
              if (iVar9 == 2) {
                pbVar12 = (byte *)(*pcRam000000000206ba30)();
                if ((*pbVar12 & 1) == 0) {
                  func_0x019c60ec();
/* unlicensed copy if this notice is missing - github.com/pengussy */
                  cVar2 = *pcVar17;
                }
                else {
                  cVar2 = *pcVar17;
                }
                if (cVar2 == '\x01') {
                  lVar21 = 0;
                  uVar22 = 0x81834cf6468012ce;
                  do {
                    uVar24 = (uVar22 ^ uVar22 >> 0x21) * -0xae502812aa7333;
                    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                    uVar25 = uVar24 ^ uVar24 >> 0x21;
                    uVar1 = (uint)(byte)pcVar17[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
                    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar25 >> 0x17);
                    pcVar17[lVar21 + 0x29] =
                         ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') -
                         ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                    uVar22 = lVar21 + -0x61c8864680b583eb +
                             (uVar22 >> 0x2f | (uVar22 ^ (byte)pcVar17[lVar21 + 1]) << 0x11);
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != 0x28);
                  *pcVar17 = '\0';
                }
                pcStack_e0 = pcVar17 + 0x29;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                uVar14 = func_0x0011ab24(&pcStack_e0);
                func_0x00792368(lVar20,0xffffffff,0);
                (*pcVar3)(2,uVar14);
                func_0x00791660(lVar20,0xfffffffe);
              }
            }
          }
        }
        func_0x00791660(param_1,uVar13);
        bVar5 = iVar8 != iVar7;
        iVar8 = iVar8 + 1;
      } while (bVar5);
    }
  }
  return 0;
}

