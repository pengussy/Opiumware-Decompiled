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
 *  file-id: 0x235bc0:bc2d04df21
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x002366fc) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00235bc0(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
/* WM - unlicensed copy if this notice is missing */
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 *******pppppppuStack_148;
  ulong uStack_140;
/* no support for modified copies - github.com/pengussy */
  undefined8 uStack_138;
  undefined8 *******pppppppuStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 *******pppppppuStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined7 uStack_e0;
  char cStack_d9;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  ulong uStack_c0;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 *******pppppppuStack_a0;
  long lStack_98;
  
// chat: discord.gg/sdkhDjTex
  lStack_98 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar6 = func_0x00791e54(param_1,1);
  if (iVar6 == 0) {
    pbVar8 = (byte *)(*pcRam0000000002078270)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019dbc98();
    }
    pcStack_198 = (char *)(*pcRam0000000002078258)();
    if (*pcStack_198 == '\x01') {
      uVar15 = (byte)pcStack_198[1] ^ 0x8733b1b0;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) + 0xe8a870f;
      pcStack_198[8] = ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') + 0xa3 ^ 0x73;
      uVar12 = (((ulong)(byte)pcStack_198[1] ^ 0x74ba8494cae04dc0) << 0x11 | 0xe975) +
               0x9e3779b97f4a7c15;
      uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar18 ^ uVar18 >> 0x21;
      uVar15 = (uint)(byte)pcStack_198[2] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar19 >> 0x17);
      pcStack_198[9] =
           ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_198[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar18 ^ uVar18 >> 0x21;
      uVar15 = (uint)(byte)pcStack_198[3] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar19 >> 0x17);
      pcStack_198[10] =
           ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_198[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
/* WM - reversing this took months of machine time */
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar18 ^ uVar18 >> 0x21;
      uVar15 = (uint)(byte)pcStack_198[4] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar19 >> 0x17);
      pcStack_198[0xb] =
           ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_198[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar18 ^ uVar18 >> 0x21;
      uVar15 = (uint)(byte)pcStack_198[5] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar19 >> 0x17);
      pcStack_198[0xc] =
           ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_198[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar18 ^ uVar18 >> 0x21;
      uVar15 = (uint)(byte)pcStack_198[6] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar19 >> 0x17);
      pcStack_198[0xd] =
           ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar19;
      uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_198[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar12 ^ uVar12 >> 0x21;
      uVar15 = (uint)(byte)pcStack_198[7] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) - (int)(uVar18 >> 0x17);
      pcStack_198[0xe] =
           ((byte)(uVar15 >> 2) & 0x3f | (char)uVar15 * '@') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar18;
      *pcStack_198 = '\0';
    }
    pcStack_198 = pcStack_198 + 8;
    uVar7 = func_0x0011ab24(&pcStack_198);
    func_0x007a1ba8(param_1,1,uVar7);
  }
  else {
    iVar6 = func_0x00791efc(param_1,2);
    if (iVar6 != 0) {
/* WM - found on a paste site? it was re-uploaded illegally */
      uVar7 = func_0x00792368(param_1,1,&uStack_c0);
      pbVar8 = (byte *)(*pcRam00000000020782d0)();
      if ((*pbVar8 & 1) == 0) goto LAB_00236834;
      while( true ) {
        pcStack_168 = (char *)(*pcRam00000000020782b8)();
        if (*pcStack_168 == '\x01') {
          uVar15 = (byte)pcStack_168[1] ^ 0x68500ac8;
          uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) + 0xa66c9a8a;
          pcStack_168[3] = ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') ^ 0xb;
          uVar12 = (((ulong)(byte)pcStack_168[1] ^ 0xb254e2a442ceb8dc) << 0x11 | 0x164a9) +
                   0x9e3779b97f4a7c15;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar12 ^ uVar12 >> 0x21;
          uVar15 = (uint)(byte)pcStack_168[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 1 & 0x7f | uVar15 << 7) -
                   (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_168[4] = ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') ^ (byte)uVar18;
          *pcStack_168 = '\0';
        }
        pcStack_168 = pcStack_168 + 3;
        uVar9 = func_0x0011ab24(&pcStack_168);
        func_0x007935a0(param_1,2,uVar9);
        dVar20 = (double)func_0x007920a4(param_1,0xffffffff,0);
        func_0x00791660(param_1,0xfffffffe);
        pbVar8 = (byte *)(*pcRam0000000002078300)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019dbb6c();
        }
        pcStack_170 = (char *)(*pcRam00000000020782e8)();
        if (*pcStack_170 == '\x01') {
          uVar15 = (byte)pcStack_170[1] ^ 0x1bfa5d97;
          uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) + 0x1406df3f;
          pcStack_170[3] = ((byte)(uVar15 >> 6) & 3 | (char)uVar15 * '\x04') ^ 0x54;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          uVar12 = (((ulong)(byte)pcStack_170[1] ^ 0xd6cad338ae0aed4e) << 0x11 | 0x1ad95) +
                   0x9e3779b97f4a7c15;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar12 ^ uVar12 >> 0x21;
          uVar15 = (uint)(byte)pcStack_170[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 5 & 7 | uVar15 << 3) -
                   (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_170[4] = ((byte)(uVar15 >> 6) & 3 | (char)uVar15 * '\x04') ^ (byte)uVar18;
          *pcStack_170 = '\0';
        }
        pcStack_170 = pcStack_170 + 3;
        uVar9 = func_0x0011ab24(&pcStack_170);
        func_0x007935a0(param_1,2,uVar9);
        dVar21 = (double)func_0x007920a4(param_1,0xffffffff,0);
        func_0x00791660(param_1,0xfffffffe);
        pbVar8 = (byte *)(*pcRam0000000002078330)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019dbba8();
        }
        pcStack_178 = (char *)(*pcRam0000000002078318)();
        if (*pcStack_178 == '\x01') {
          uVar15 = (byte)pcStack_178[1] ^ 0xbc791f7c;
          uVar15 = (uVar15 >> 7 & 1 | uVar15 << 1) + 0xb7bb277c;
          pcStack_178[3] = ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') ^ 0xbf;
          uVar12 = (((ulong)(byte)pcStack_178[1] ^ 0xf730dd8665977ffe) << 0x11 | 0x1ee61) +
                   0x9e3779b97f4a7c15;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar12 ^ uVar12 >> 0x21;
/*  thanks for reading - discord.gg/sdkhDjTex  */
          uVar15 = (uint)(byte)pcStack_178[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 7 & 1 | uVar15 << 1) -
                   (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_178[4] = ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') ^ (byte)uVar18;
          *pcStack_178 = '\0';
        }
        pcStack_178 = pcStack_178 + 3;
        uVar9 = func_0x0011ab24(&pcStack_178);
        func_0x007935a0(param_1,2,uVar9);
        dVar22 = (double)func_0x007920a4(param_1,0xffffffff,0);
        func_0x00791660(param_1,0xfffffffe);
        uVar15 = (int)(dVar20 * 255.0) & ((int)(dVar20 * 255.0) >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar15) {
          uVar15 = 0xff;
        }
        uVar16 = (int)(dVar21 * 255.0) & ((int)(dVar21 * 255.0) >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar16) {
          uVar16 = 0xff;
        }
        uVar17 = (int)(dVar22 * 255.0) & ((int)(dVar22 * 255.0) >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar17) {
          uVar17 = 0xff;
        }
        func_0x0022b904(&pppppppuStack_d8,uVar15,uVar16,uVar17);
        pbVar8 = (byte *)(*pcRam0000000002078360)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019dbbe4();
        }
        pcStack_180 = (char *)(*pcRam0000000002078348)();
        if (*pcStack_180 == '\x01') {
          lVar13 = 0;
          uVar12 = 0x3bbe6b0be5909a;
          do {
            uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
/* WM - keep the notice, keep the source honest */
            uVar15 = (uint)(byte)pcStack_180[lVar13 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar15 = (uVar15 >> 3 & 0x1f | uVar15 << 5) - (int)(uVar19 >> 0x17) ^
                     ((uint)(uVar18 >> 0x29) | 1);
            pcStack_180[lVar13 + 0xf] =
                 ((byte)(uVar15 >> 4) & 0xf | (byte)(uVar15 << 4)) - (char)uVar19;
            uVar12 = lVar13 + -0x61c8864680b583eb +
                     (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_180[lVar13 + 1]) << 0x11);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0xe);
          *pcStack_180 = '\0';
        }
        pcStack_180 = pcStack_180 + 0xf;
        uVar9 = func_0x0011ab24(&pcStack_180);
        uVar12 = _strlen();
        if (0x7ffffffffffffff6 < uVar12) goto LAB_00236fb4;
        if (uVar12 < 0x17) {
          uStack_a8 = CONCAT17((char)uVar12,(undefined7)uStack_a8);
          pppppppuVar11 = &pppppppuStack_b8;
        }
        else {
          uVar18 = (uVar12 & 0x7ffffffffffffff8) + 8;
          uVar19 = 0x19;
          if (uVar18 != 0x18) {
            uVar19 = uVar18;
          }
          pppppppuVar11 = (undefined8 *******)__Znwm(uVar19);
          uStack_a8 = uVar19 | 0x8000000000000000;
          pppppppuStack_b8 = pppppppuVar11;
          uStack_b0 = uVar12;
        }
        _memmove(pppppppuVar11,uVar9,uVar12);
        uVar18 = uStack_c0;
        *(undefined1 *)((long)pppppppuVar11 + uVar12) = 0;
        if (0x7ffffffffffffff6 < uStack_c0) break;
/* WM - donate: donate/README.md */
        if (uStack_c0 < 0x17) {
          uStack_138 = CONCAT17((char)uStack_c0,(undefined7)uStack_138);
          pppppppuVar11 = &pppppppuStack_148;
        }
        else {
          uVar12 = (uStack_c0 & 0x7ffffffffffffff8) + 8;
          uVar19 = 0x19;
          if (uVar12 != 0x18) {
            uVar19 = uVar12;
          }
          pppppppuVar11 = (undefined8 *******)__Znwm(uVar19);
          uStack_138 = uVar19 | 0x8000000000000000;
          uStack_140 = uVar18;
          pppppppuStack_148 = pppppppuVar11;
        }
        _memmove(pppppppuVar11,uVar7,uVar18);
        *(undefined1 *)((long)pppppppuVar11 + uVar18) = 0;
        pbVar8 = (byte *)(*pcRam0000000002078390)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019dbc20();
        }
        pcStack_188 = (char *)(*pcRam0000000002078378)();
        if (*pcStack_188 == '\x01') {
          uVar15 = (byte)pcStack_188[1] ^ 0x61746ceb;
          uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) + 0xa85348da;
          pcStack_188[3] = ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') ^ 0x28;
          uVar12 = (((ulong)(byte)pcStack_188[1] ^ 0xedd698c584755450) << 0x11 | 0x1dbad) +
                   0x9e3779b97f4a7c15;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar12 ^ uVar12 >> 0x21;
          uVar15 = (uint)(byte)pcStack_188[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar15 = (uVar15 >> 2 & 0x3f | uVar15 << 6) -
                   (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_188[4] = ((byte)(uVar15 >> 5) & 7 | (char)uVar15 * '\b') ^ (byte)uVar18;
/* WM - proprietary - see LICENSE - do not sell */
          *pcStack_188 = '\0';
        }
        pcStack_188 = pcStack_188 + 3;
        uVar9 = func_0x0011ab24(&pcStack_188);
        uVar10 = _strlen();
        uVar19 = uStack_138;
        uVar14 = (uStack_138 & 0x7fffffffffffffff) - 1;
        uVar12 = uStack_140;
        uVar18 = uVar14;
        if (-1 < (long)uStack_138) {
          uVar18 = 0x16;
          uVar12 = uStack_138 >> 0x38;
        }
        if (uVar18 - uVar12 < uVar10) {
          uVar18 = uVar12 + uVar10;
          if (0x7ffffffffffffff6 < uVar18) {
            FUN_0000aa50();
            goto LAB_00236fd0;
          }
          if ((long)uStack_138 < 0) {
            if (uVar14 < 0x3ffffffffffffff4) goto LAB_00236490;
            uVar14 = 0x7ffffffffffffff8;
            pppppppuVar11 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
            pppppppuVar2 = pppppppuStack_148;
          }
          else {
            uVar14 = 0x16;
LAB_00236490:
            uVar1 = uVar18;
            if (uVar18 <= uVar14 * 2) {
// WM - origin: github.com/pengussy
              uVar1 = uVar14 * 2;
            }
            uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
            uVar14 = 0x19;
            if (uVar1 != 0x18) {
              uVar14 = uVar1;
            }
            pppppppuVar11 = (undefined8 *******)__Znwm(uVar14);
            pppppppuVar2 = pppppppuStack_148;
            if (-1 < (long)uVar19) {
              pppppppuVar2 = &pppppppuStack_148;
            }
          }
          if (uVar12 != 0) {
            _memmove(pppppppuVar11,pppppppuVar2,uVar12);
          }
          _memmove((long)pppppppuVar11 + uVar12,uVar9,uVar10);
          *(undefined1 *)((long)pppppppuVar11 + uVar18) = 0;
          if ((long)uVar19 < 0) {
/* stripping the watermark breaks the license - github.com/pengussy */
            __ZdlPv(pppppppuStack_148);
          }
          uStack_138 = uVar14 | 0x8000000000000000;
          pppppppuStack_148 = pppppppuVar11;
          uStack_140 = uVar18;
        }
        else if (uVar10 != 0) {
          pppppppuVar11 = pppppppuStack_148;
          if (-1 < (long)uStack_138) {
            pppppppuVar11 = &pppppppuStack_148;
          }
          _memmove((long)pppppppuVar11 + uVar12,uVar9,uVar10);
          uVar12 = uVar12 + uVar10;
          if ((long)uStack_138 < 0) {
            uStack_140 = uVar12;
          }
          else {
            uStack_138 = CONCAT17((char)uVar12,(undefined7)uStack_138) & 0x7fffffffffffffff;
          }
          *(undefined1 *)((long)pppppppuVar11 + uVar12) = 0;
        }
        uVar19 = uStack_138;
        uVar12 = uStack_140;
        pppppppuVar11 = pppppppuStack_148;
        uStack_120 = uStack_138;
        uStack_128 = uStack_140;
        pppppppuStack_130 = pppppppuStack_148;
        uStack_140 = 0;
        uStack_138 = 0;
        pppppppuStack_148 = (undefined8 *******)0x0;
        uVar18 = uStack_d0;
        pppppppuVar2 = pppppppuStack_d8;
        if (-1 < (char)bStack_c1) {
          uVar18 = (ulong)bStack_c1;
          pppppppuVar2 = &pppppppuStack_d8;
        }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        uVar14 = (uVar19 & 0x7fffffffffffffff) - 1;
        uVar10 = uVar14;
        if (-1 < (long)uVar19) {
          uVar10 = 0x16;
          uVar12 = uVar19 >> 0x38;
        }
        if (uVar10 - uVar12 < uVar18) {
          uVar10 = uVar12 + uVar18;
          if (0x7ffffffffffffff6 < uVar10) {
            FUN_0000aa50();
            goto LAB_00236fd0;
          }
          if ((long)uVar19 < 0) {
            if (uVar14 < 0x3ffffffffffffff4) goto LAB_002365fc;
            uVar14 = 0x7ffffffffffffff8;
            pppppppuVar11 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
            pppppppuVar3 = pppppppuStack_130;
          }
          else {
            uVar14 = 0x16;
LAB_002365fc:
            uVar1 = uVar10;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            if (uVar10 <= uVar14 * 2) {
              uVar1 = uVar14 * 2;
            }
            uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
            uVar14 = 0x19;
            if (uVar1 != 0x18) {
              uVar14 = uVar1;
            }
            pppppppuVar11 = (undefined8 *******)__Znwm(uVar14);
            pppppppuVar3 = pppppppuStack_130;
            if (-1 < (long)uVar19) {
              pppppppuVar3 = &pppppppuStack_130;
            }
          }
          if (uVar12 != 0) {
            _memmove(pppppppuVar11,pppppppuVar3,uVar12);
          }
          _memmove((long)pppppppuVar11 + uVar12,pppppppuVar2,uVar18);
          *(undefined1 *)((long)pppppppuVar11 + uVar10) = 0;
          if ((long)uVar19 < 0) {
            __ZdlPv(pppppppuStack_130);
          }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          uStack_120 = uVar14 | 0x8000000000000000;
          pppppppuStack_130 = pppppppuVar11;
          uStack_128 = uVar10;
        }
        else if (uVar18 != 0) {
          if (-1 < (long)uVar19) {
            pppppppuVar11 = &pppppppuStack_130;
          }
          _memmove((long)pppppppuVar11 + uVar12,pppppppuVar2,uVar18);
          uVar12 = uVar12 + uVar18;
          if ((long)uStack_120 < 0) {
            uStack_128 = uVar12;
          }
          else {
            uStack_120 = CONCAT17((char)uVar12,(undefined7)uStack_120) & 0x7fffffffffffffff;
          }
          *(undefined1 *)((long)pppppppuVar11 + uVar12) = 0;
        }
        uStack_108 = uStack_128;
        pppppppuStack_110 = pppppppuStack_130;
        uStack_100 = uStack_120;
        func_0x00229fb4(&ppppppuStack_f0,&pppppppuStack_b8,&pppppppuStack_110);
        if ((long)uStack_100 < 0) {
          __ZdlPv(pppppppuStack_110);
        }
        if ((long)uStack_138 < 0) {
          __ZdlPv(pppppppuStack_148);
        }
        cVar4 = cStack_d9;
        if (cStack_d9 < '\0') {
          func_0x00017ae8(&ppppppuStack_160,ppppppuStack_f0,ppppppuStack_e8);
        }
/* WM - no support for modified copies */
        else {
          ppppppuStack_158 = ppppppuStack_e8;
          ppppppuStack_160 = ppppppuStack_f0;
          ppppppuStack_150 = (undefined8 ******)CONCAT17(cStack_d9,uStack_e0);
        }
        pppppppuStack_a0 = (undefined8 *******)0x0;
        pppppppuVar11 = (undefined8 *******)__Znwm(0x20);
        *pppppppuVar11 = (undefined8 ******)&UNK_01dc1088;
        if ((long)ppppppuStack_150 < 0) {
          func_0x00017ae8(pppppppuVar11 + 1,ppppppuStack_160,ppppppuStack_158);
        }
        else {
          pppppppuVar11[2] = ppppppuStack_158;
          pppppppuVar11[1] = ppppppuStack_160;
          pppppppuVar11[3] = ppppppuStack_150;
        }
        pppppppuStack_a0 = pppppppuVar11;
        param_1 = func_0x001e7c24(param_1,&pppppppuStack_b8);
        if ((undefined8 ********)pppppppuStack_a0 == &pppppppuStack_b8) {
          lVar13 = 0x20;
LAB_00236790:
          (**(code **)((long)*pppppppuStack_a0 + lVar13))();
        }
        else if (pppppppuStack_a0 != (undefined8 *******)0x0) {
          lVar13 = 0x28;
          goto LAB_00236790;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        if ((long)ppppppuStack_150 < 0) {
          __ZdlPv(ppppppuStack_160);
          if (-1 < cVar4) goto LAB_002367a8;
LAB_00236800:
          __ZdlPv(ppppppuStack_f0);
          if (-1 < (char)bStack_c1) goto LAB_002367b0;
LAB_00236810:
          __ZdlPv(pppppppuStack_d8);
          if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_98) {
            return param_1;
          }
        }
        else {
          if (cVar4 < '\0') goto LAB_00236800;
LAB_002367a8:
          if ((char)bStack_c1 < '\0') goto LAB_00236810;
LAB_002367b0:
          if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_98) {
            return param_1;
          }
        }
        ___stack_chk_fail();
LAB_00236834:
        func_0x019dbb30();
      }
      FUN_0000aa50();
      goto LAB_00236fd0;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    }
  }
  pbVar8 = (byte *)(*pcRam00000000020782a0)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019dbc5c();
  }
  pcStack_190 = (char *)(*pcRam0000000002078288)();
  if (*pcStack_190 == '\x01') {
    uVar15 = (byte)pcStack_190[1] ^ 0x3f9fac4d;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) + 0xca346680 ^ 0x170d73;
    pcStack_190[10] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) + 0x72;
    uVar12 = (((ulong)(byte)pcStack_190[1] ^ 0xd2a3451f3421bc43) << 0x11 | 0x1a546) +
             0x9e3779b97f4a7c15;
    uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar18 ^ uVar18 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[2] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar19 >> 0x17) ^
             ((uint)(uVar18 >> 0x29) | 1);
    pcStack_190[0xb] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar19;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_190[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar18 ^ uVar18 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[3] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar19 >> 0x17) ^
             ((uint)(uVar18 >> 0x29) | 1);
    pcStack_190[0xc] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar19;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_190[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar18 ^ uVar18 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[4] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar19 >> 0x17) ^
             ((uint)(uVar18 >> 0x29) | 1);
    pcStack_190[0xd] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar19;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_190[4]) << 0x11) + 0x9e3779b97f4a7c18;
// more drops soon - github.com/pengussy
    uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar18 ^ uVar18 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[5] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar19 >> 0x17) ^
             ((uint)(uVar18 >> 0x29) | 1);
    pcStack_190[0xe] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar19;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_190[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar18 ^ uVar18 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[6] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar19 >> 0x17) ^
             ((uint)(uVar18 >> 0x29) | 1);
    pcStack_190[0xf] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar19;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_190[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar18 ^ uVar18 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[7] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar19 >> 0x17) ^
             ((uint)(uVar18 >> 0x29) | 1);
    pcStack_190[0x10] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar19;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_190[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar18 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar18 ^ uVar18 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[8] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar19 >> 0x17) ^
             ((uint)(uVar18 >> 0x29) | 1);
    pcStack_190[0x11] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar19;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_190[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar12 ^ uVar12 >> 0x21;
    uVar15 = (uint)(byte)pcStack_190[9] ^ (uint)uVar18 ^ 0xffffffc3;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    uVar15 = (uVar15 >> 4 & 0xf | uVar15 << 4) - (int)(uVar18 >> 0x17) ^
             ((uint)(uVar12 >> 0x29) | 1);
    pcStack_190[0x12] = ((byte)(uVar15 >> 2) & 0x3f | (byte)(uVar15 << 6)) - (char)uVar18;
    *pcStack_190 = '\0';
  }
  pcStack_190 = pcStack_190 + 10;
  uVar7 = func_0x0011ab24(&pcStack_190);
  func_0x007a1ba8(param_1,2,uVar7);
LAB_00236fb4:
  FUN_0000aa50();
LAB_00236fd0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x236fd4);
  (*pcVar5)();
}

