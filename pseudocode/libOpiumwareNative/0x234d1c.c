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
 *  file-id: 0x234d1c:b5f9444360
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x0023556c) */
/* WARNING: Removing unreachable block (ram,0x002352e4) */
/* WARNING: Removing unreachable block (ram,0x00235354) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00234d1c(undefined8 param_1)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  uint uVar3;
  char cVar4;
  undefined8 ******ppppppuVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  undefined8 ******ppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined7 uStack_b8;
  char cStack_b1;
  undefined8 *******pppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 ******ppppppuStack_88;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 uStack_80;
  undefined8 *******pppppppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar7 = func_0x00791e54(param_1,1);
  if (iVar7 == 0) {
    pbVar10 = (byte *)(*pcRam00000000020781b0)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019dbaf4();
    }
    pcStack_130 = (char *)(*pcRam0000000002078198)();
    if (*pcStack_130 == '\x01') {
      uVar3 = (byte)pcStack_130[1] ^ 0xc5c12e23;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) + 0xb8d8fb8c;
      pcStack_130[8] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') + 0x37 ^ 0xe0;
      uVar16 = (((ulong)(byte)pcStack_130[1] ^ 0xb6d5c920bde05340) << 0x11 | 0x16dab) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar3 = (uint)(byte)pcStack_130[2] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar17 >> 0x17);
      pcStack_130[9] =
           ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar3 = (uint)(byte)pcStack_130[3] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar17 >> 0x17);
      pcStack_130[10] =
           ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
/* watermarked copy - do not remove */
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar3 = (uint)(byte)pcStack_130[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar17 >> 0x17);
      pcStack_130[0xb] =
           ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar3 = (uint)(byte)pcStack_130[5] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar17 >> 0x17);
      pcStack_130[0xc] =
           ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar3 = (uint)(byte)pcStack_130[6] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar17 >> 0x17);
      pcStack_130[0xd] =
           ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_130[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar16 ^ uVar16 >> 0x21;
      uVar3 = (uint)(byte)pcStack_130[7] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar15 >> 0x17);
      pcStack_130[0xe] =
           ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar15;
      *pcStack_130 = '\0';
    }
    pcStack_130 = pcStack_130 + 8;
    uVar8 = func_0x0011ab24(&pcStack_130);
    func_0x007a1ba8(param_1,1,uVar8);
// WM - origin: github.com/pengussy
LAB_00235a78:
    FUN_0000aa50();
LAB_00235a94:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x235a98);
    (*pcVar6)();
  }
  uVar8 = func_0x00792368(param_1,1,&uStack_98);
  pppppppuVar9 = (undefined8 *******)func_0x0011ab24(PTR__getenv_01f20318);
  pbVar10 = (byte *)(*pcRam00000000020781e0)();
  if ((*pbVar10 & 1) == 0) goto LAB_00235710;
  do {
    pcStack_118 = (char *)(*pcRam00000000020781c8)();
    if (*pcStack_118 == '\x01') {
      uVar3 = (byte)pcStack_118[1] ^ 0x849578ee;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0xdd35e70a;
      pcStack_118[6] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') + 0x4d ^ 0x2d;
      uVar16 = (((ulong)(byte)pcStack_118[1] ^ 0x1c7632c9a6450b6e) << 0x11 | 0x38ec) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
// unlicensed copy if this notice is missing
      uVar3 = (uint)(byte)pcStack_118[2] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar17 >> 0x17);
      pcStack_118[7] =
           ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar3 = (uint)(byte)pcStack_118[3] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar17 >> 0x17);
      pcStack_118[8] =
           ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar3 = (uint)(byte)pcStack_118[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar17 >> 0x17);
      pcStack_118[9] =
           ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_118[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar16 ^ uVar16 >> 0x21;
      uVar3 = (uint)(byte)pcStack_118[5] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar15 >> 0x17);
      pcStack_118[10] =
           ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar15;
      *pcStack_118 = '\0';
    }
    pcStack_118 = pcStack_118 + 6;
    func_0x0011ab24(&pcStack_118);
    lVar11 = (*(code *)pppppppuVar9)();
    if (lVar11 == 0) {
      uVar8 = 0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return 0;
      }
      pppppppuVar9 = (undefined8 *******)0x0;
    }
    else {
      ppppppuVar12 = (undefined8 ******)_strlen(lVar11);
      if ((undefined8 ******)0x7ffffffffffffff6 < ppppppuVar12) goto LAB_00235a78;
      if (ppppppuVar12 < (undefined8 ******)0x17) {
        uStack_80 = (undefined8 ******)CONCAT17((char)ppppppuVar12,(undefined7)uStack_80);
        pppppppuVar9 = &pppppppuStack_90;
      }
      else {
// donate: donate/README.md
        uVar16 = ((ulong)ppppppuVar12 & 0x7ffffffffffffff8) + 8;
        uVar15 = 0x19;
        if (uVar16 != 0x18) {
          uVar15 = uVar16;
        }
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar15);
        uStack_80 = (undefined8 ******)(uVar15 | 0x8000000000000000);
        pppppppuStack_90 = pppppppuVar9;
        ppppppuStack_88 = ppppppuVar12;
      }
      _memmove(pppppppuVar9,lVar11,ppppppuVar12);
      *(undefined1 *)((long)pppppppuVar9 + (long)ppppppuVar12) = 0;
      pbVar10 = (byte *)(*pcRam0000000002078210)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019dba7c();
      }
      pcStack_120 = (char *)(*pcRam00000000020781f8)();
      if (*pcStack_120 == '\x01') {
        lVar11 = 0;
        uVar16 = 0x49b848e5c3723;
        do {
          uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar15 ^ uVar15 >> 0x21;
          uVar3 = (uint)(byte)pcStack_120[lVar11 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar17 >> 0x17) ^
                  ((uint)(uVar15 >> 0x29) | 1);
          pcStack_120[lVar11 + 0x26] =
               ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar17;
          uVar16 = lVar11 + -0x61c8864680b583eb +
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_120[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x25);
        *pcStack_120 = '\0';
      }
      pcStack_120 = pcStack_120 + 0x26;
      uVar13 = func_0x0011ab24(&pcStack_120);
      uVar15 = _strlen();
// WM - more drops soon - github.com/pengussy
      ppppppuVar5 = uStack_80;
      uVar17 = ((ulong)uStack_80 & 0x7fffffffffffffff) - 1;
      ppppppuVar12 = ppppppuStack_88;
      uVar16 = uVar17;
      if (-1 < (long)uStack_80) {
        uVar16 = 0x16;
        ppppppuVar12 = (undefined8 ******)((ulong)uStack_80 >> 0x38);
      }
      if (uVar16 - (long)ppppppuVar12 < uVar15) {
        ppppppuVar1 = (undefined8 ******)((long)ppppppuVar12 + uVar15);
        if ((undefined8 ******)0x7ffffffffffffff6 < ppppppuVar1) {
          FUN_0000aa50();
          goto LAB_00235a94;
        }
        if ((long)uStack_80 < 0) {
          if (uVar17 < 0x3ffffffffffffff4) goto LAB_00235260;
          uVar16 = 0x7ffffffffffffff8;
          pppppppuVar9 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar14 = pppppppuStack_90;
        }
        else {
          uVar17 = 0x16;
LAB_00235260:
          ppppppuVar2 = ppppppuVar1;
          if (ppppppuVar1 <= (undefined8 ******)(uVar17 * 2)) {
            ppppppuVar2 = (undefined8 ******)(uVar17 * 2);
          }
          uVar17 = ((ulong)ppppppuVar2 & 0x7ffffffffffffff8) + 8;
          uVar16 = 0x19;
          if (uVar17 != 0x18) {
/* keep the notice, keep the source honest */
            uVar16 = uVar17;
          }
          pppppppuVar9 = (undefined8 *******)__Znwm(uVar16);
          pppppppuVar14 = pppppppuStack_90;
          if (-1 < (long)ppppppuVar5) {
            pppppppuVar14 = &pppppppuStack_90;
          }
        }
        if (ppppppuVar12 != (undefined8 ******)0x0) {
          _memmove(pppppppuVar9,pppppppuVar14,ppppppuVar12);
        }
        _memmove((long)pppppppuVar9 + (long)ppppppuVar12,uVar13,uVar15);
        *(undefined1 *)((long)pppppppuVar9 + (long)ppppppuVar1) = 0;
        if ((long)ppppppuVar5 < 0) {
          __ZdlPv(pppppppuStack_90);
        }
        uStack_80 = (undefined8 ******)(uVar16 | 0x8000000000000000);
        pppppppuStack_90 = pppppppuVar9;
        ppppppuStack_88 = ppppppuVar1;
      }
      else if (uVar15 != 0) {
        pppppppuVar9 = pppppppuStack_90;
        if (-1 < (long)uStack_80) {
          pppppppuVar9 = &pppppppuStack_90;
        }
        _memmove((long)pppppppuVar9 + (long)ppppppuVar12,uVar13,uVar15);
        uStack_80 = (undefined8 ******)
                    (CONCAT17((char)((long)ppppppuVar12 + uVar15),(undefined7)uStack_80) &
                    0x7fffffffffffffff);
        *(undefined1 *)((long)pppppppuVar9 + (long)ppppppuVar12 + uVar15) = 0;
      }
      ppppppuVar5 = uStack_80;
      ppppppuVar12 = ppppppuStack_88;
      pppppppuVar9 = pppppppuStack_90;
      ppppppuStack_a8 = ppppppuStack_88;
      pppppppuStack_b0 = pppppppuStack_90;
      uStack_a0 = uStack_80;
/* unlicensed copy if this notice is missing - github.com/pengussy */
      uStack_a0._7_1_ = (char)((ulong)uStack_80 >> 0x38);
      pppppppuStack_90 = (undefined8 *******)0x0;
      ppppppuStack_88 = (undefined8 ******)0x0;
      uStack_80 = (undefined8 ******)0x0;
      if (-1 < (long)uStack_a0._7_1_) {
        pppppppuVar9 = &pppppppuStack_b0;
      }
      if (-1 < (long)ppppppuVar5) {
        ppppppuVar12 = (undefined8 ******)(long)uStack_a0._7_1_;
      }
      uStack_a0 = ppppppuVar5;
      func_0x0013be80(&pppppppuStack_90,pppppppuVar9,(long)pppppppuVar9 + (long)ppppppuVar12);
      __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(&pppppppuStack_90,0);
      pbVar10 = (byte *)(*pcRam0000000002078240)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019dbab8();
      }
      pcStack_128 = (char *)(*pcRam0000000002078228)();
      if (*pcStack_128 == '\x01') {
        lVar11 = 0;
        uVar16 = 0x8d45b5a8dba87ab;
        do {
          uVar15 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar15 ^ uVar15 >> 0x21;
          uVar3 = (uint)(byte)pcStack_128[lVar11 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar17 >> 0x17) ^
                  ((uint)(uVar15 >> 0x29) | 1);
          pcStack_128[lVar11 + 0xf] =
               ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar17;
          uVar16 = lVar11 + -0x61c8864680b583eb +
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_128[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0xe);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        *pcStack_128 = '\0';
      }
      pcStack_128 = pcStack_128 + 0xf;
      uVar13 = func_0x0011ab24(&pcStack_128);
      ppppppuVar12 = (undefined8 ******)_strlen();
      if ((undefined8 ******)0x7ffffffffffffff6 < ppppppuVar12) {
        FUN_0000aa50();
        goto LAB_00235a94;
      }
      if (ppppppuVar12 < (undefined8 ******)0x17) {
        uStack_80 = (undefined8 ******)CONCAT17((char)ppppppuVar12,(undefined7)uStack_80);
        pppppppuVar9 = &pppppppuStack_90;
      }
      else {
        uVar16 = ((ulong)ppppppuVar12 & 0x7ffffffffffffff8) + 8;
        uVar15 = 0x19;
        if (uVar16 != 0x18) {
          uVar15 = uVar16;
        }
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar15);
        uStack_80 = (undefined8 ******)(uVar15 | 0x8000000000000000);
        pppppppuStack_90 = pppppppuVar9;
        ppppppuStack_88 = ppppppuVar12;
      }
      _memmove(pppppppuVar9,uVar13,ppppppuVar12);
      uVar16 = uStack_98;
      *(undefined1 *)((long)pppppppuVar9 + (long)ppppppuVar12) = 0;
      if (0x7ffffffffffffff6 < uStack_98) {
        FUN_0000aa50();
        goto LAB_00235a94;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      }
      if (uStack_98 < 0x17) {
        uStack_d0 = CONCAT17((char)uStack_98,(undefined7)uStack_d0);
        pppppppuVar9 = &pppppppuStack_e0;
      }
      else {
        uVar15 = (uStack_98 & 0x7ffffffffffffff8) + 8;
        uVar17 = 0x19;
        if (uVar15 != 0x18) {
          uVar17 = uVar15;
        }
        pppppppuVar9 = (undefined8 *******)__Znwm(uVar17);
        uStack_d0 = uVar17 | 0x8000000000000000;
        uStack_d8 = uVar16;
        pppppppuStack_e0 = pppppppuVar9;
      }
      _memmove(pppppppuVar9,uVar8,uVar16);
      *(undefined1 *)((long)pppppppuVar9 + uVar16) = 0;
      func_0x00229fb4(&ppppppuStack_c8,&pppppppuStack_90,&pppppppuStack_e0);
      if ((long)uStack_d0 < 0) {
        __ZdlPv(pppppppuStack_e0);
      }
      cVar4 = cStack_b1;
      if (cStack_b1 < '\0') {
        func_0x00017ae8(&ppppppuStack_110,ppppppuStack_c8,ppppppuStack_c0);
      }
      else {
        ppppppuStack_108 = ppppppuStack_c0;
        ppppppuStack_110 = ppppppuStack_c8;
        ppppppuStack_100 = (undefined8 ******)CONCAT17(cStack_b1,uStack_b8);
      }
      if ((long)uStack_a0 < 0) {
        func_0x00017ae8(&pppppppuStack_f8,pppppppuStack_b0,ppppppuStack_a8);
      }
      else {
        ppppppuStack_f0 = ppppppuStack_a8;
// found on a paste site? it was re-uploaded illegally
        pppppppuStack_f8 = pppppppuStack_b0;
        ppppppuStack_e8 = uStack_a0;
      }
      pppppppuStack_78 = (undefined8 *******)0x0;
      pppppppuVar14 = (undefined8 *******)__Znwm(0x38);
      pppppppuVar9 = pppppppuVar14 + 1;
      *pppppppuVar14 = (undefined8 ******)&UNK_01dc0e08;
      if ((long)ppppppuStack_100 < 0) {
        func_0x00017ae8(pppppppuVar9,ppppppuStack_110,ppppppuStack_108);
      }
      else {
        pppppppuVar14[2] = ppppppuStack_108;
        *pppppppuVar9 = ppppppuStack_110;
        pppppppuVar14[3] = ppppppuStack_100;
      }
      if ((long)ppppppuStack_e8 < 0) {
        func_0x00017ae8(pppppppuVar14 + 4,pppppppuStack_f8,ppppppuStack_f0);
      }
      else {
        pppppppuVar14[5] = ppppppuStack_f0;
        pppppppuVar14[4] = pppppppuStack_f8;
        pppppppuVar14[6] = ppppppuStack_e8;
      }
      pppppppuStack_78 = pppppppuVar14;
      uVar8 = func_0x001e7c24(param_1,&pppppppuStack_90);
      if ((undefined8 ********)pppppppuStack_78 == &pppppppuStack_90) {
        lVar11 = 0x20;
LAB_0023565c:
        (**(code **)((long)*pppppppuStack_78 + lVar11))();
      }
      else if (pppppppuStack_78 != (undefined8 *******)0x0) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        lVar11 = 0x28;
        goto LAB_0023565c;
      }
      if ((long)ppppppuStack_e8 < 0) {
        __ZdlPv(pppppppuStack_f8);
      }
      if ((long)ppppppuStack_100 < 0) {
        __ZdlPv(ppppppuStack_110);
      }
      if (cVar4 < '\0') {
        __ZdlPv(ppppppuStack_c8);
      }
      if ((long)uStack_a0 < 0) {
        __ZdlPv(pppppppuStack_b0);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
          return uVar8;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return uVar8;
      }
    }
    ___stack_chk_fail();
LAB_00235710:
    func_0x019dba40();
  } while( true );
/* WM - keep the notice, keep the source honest */
}

