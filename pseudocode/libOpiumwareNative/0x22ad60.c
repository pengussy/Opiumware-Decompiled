/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x22ad60:34c4cf0f40
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0022b570) */
/* WARNING: Removing unreachable block (ram,0x0022b580) */
/* WARNING: Removing unreachable block (ram,0x0022b5bc) */

ulong FUN_0022ad60(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  code *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  long lVar10;
  ulong uVar11;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long *plStack_180;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 *****pppppuStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 *****pppppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  byte bStack_12f;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [48];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  FUN_00229fb4(auStack_b8);
  pbVar7 = (byte *)(*pcRam0000000002077430)();
  if ((*pbVar7 & 1) == 0) goto LAB_0022b5e0;
  do {
    pcStack_1d8 = (char *)(*pcRam0000000002077418)();
    if (*pcStack_1d8 == '\x01') {
      lVar10 = 0;
      uVar11 = 0xf78a53107800ce81;
      do {
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_1d8[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^
                ((uint)(uVar12 >> 0x29) | 1);
        pcStack_1d8[lVar10 + 0x17] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar13
        ;
        uVar11 = lVar10 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1d8[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x16);
      *pcStack_1d8 = '\0';
    }
    pcStack_1d8 = pcStack_1d8 + 0x17;
    uVar8 = func_0x0011ab24(&pcStack_1d8);
    uVar11 = _strlen();
    if (0x7ffffffffffffff6 < uVar11) {
      FUN_0000aa50();
LAB_0022b60c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x22b610);
      (*pcVar6)();
    }
    if (uVar11 < 0x17) {
      uStack_138 = CONCAT17((char)uVar11,(undefined7)uStack_138);
      pppppuVar9 = &pppppuStack_148;
    }
    else {
      uVar12 = (uVar11 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar12 != 0x18) {
        uVar13 = uVar12;
      }
      pppppuVar9 = (undefined8 *****)__Znwm(uVar13);
/* stripping the watermark breaks the license - github.com/pengussy */
      uStack_138 = uVar13 | 0x8000000000000000;
      pppppuStack_148 = pppppuVar9;
      uStack_140 = uVar11;
    }
    _memmove(pppppuVar9,uVar8,uVar11);
    *(undefined1 *)((long)pppppuVar9 + uVar11) = 0;
    pbVar7 = (byte *)(*pcRam0000000002077460)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019da5c8();
    }
    pcStack_1e0 = (char *)(*pcRam0000000002077448)();
    if (*pcStack_1e0 == '\x01') {
      uVar1 = (byte)pcStack_1e0[1] ^ 0xb7330c24;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x62ca776f ^ 0x674d;
      pcStack_1e0[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x19;
      uVar11 = (((ulong)(byte)pcStack_1e0[1] ^ 0x739e47e920b8883a) << 0x11 | 0xe73c) +
               0x9e3779b97f4a7c15;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1e0[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_1e0[7] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1e0[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_1e0[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1e0[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_1e0[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar13;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1e0[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar11 >> 0x29) | 1);
      pcStack_1e0[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar12;
      *pcStack_1e0 = '\0';
    }
    pcStack_1e0 = pcStack_1e0 + 6;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar8 = func_0x0011ab24(&pcStack_1e0);
    uVar11 = _strlen();
    if (0x7ffffffffffffff6 < uVar11) {
      FUN_0000aa50();
      goto LAB_0022b60c;
    }
    if (uVar11 < 0x17) {
      uStack_150 = CONCAT17((char)uVar11,(undefined7)uStack_150);
      pppppuVar9 = &pppppuStack_160;
    }
    else {
      uVar12 = (uVar11 & 0x7ffffffffffffff8) + 8;
      uVar13 = 0x19;
      if (uVar12 != 0x18) {
        uVar13 = uVar12;
      }
      pppppuVar9 = (undefined8 *****)__Znwm(uVar13);
/* proprietary - see LICENSE - do not sell */
      uStack_150 = uVar13 | 0x8000000000000000;
      pppppuStack_160 = pppppuVar9;
      uStack_158 = uVar11;
    }
    _memmove(pppppuVar9,uVar8,uVar11);
    *(undefined1 *)((long)pppppuVar9 + uVar11) = 0;
    pbVar7 = (byte *)(*pcRam0000000002077490)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019da604();
    }
    pcStack_1e8 = (char *)(*pcRam0000000002077478)();
    if (*pcStack_1e8 == '\x01') {
      lVar10 = 0;
      uVar11 = 0xb069571846745ba0;
      do {
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_1e8[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
        pcStack_1e8[lVar10 + 0xe] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = lVar10 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1e8[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xd);
      *pcStack_1e8 = '\0';
    }
    pcStack_1e8 = pcStack_1e8 + 0xe;
    uStack_198 = func_0x0011ab24(&pcStack_1e8);
    pbVar7 = (byte *)(*pcRam00000000020774c0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019da640();
    }
/* do not claim this as your own */
    pcStack_1f0 = (char *)(*pcRam00000000020774a8)();
    if (*pcStack_1f0 == '\x01') {
      lVar10 = 0;
      uVar11 = 0x61807be70eb841f2;
      do {
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_1f0[lVar10 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
        pcStack_1f0[lVar10 + 0x12] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = lVar10 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1f0[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x11);
      *pcStack_1f0 = '\0';
    }
    pcStack_1f0 = pcStack_1f0 + 0x12;
    uStack_1a0 = func_0x0011ab24(&pcStack_1f0);
    func_0x00171f84(auStack_a0,&uStack_198,&uStack_1a0);
    uStack_188 = 0;
    lStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_170 = 0x3f800000;
    plStack_1d0 = &lStack_190;
    func_0x00190320(&plStack_1d0,auStack_a0,auStack_a0);
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1b0 = 0x3f800000;
    FUN_001d2b10(&uStack_130,&pppppuStack_148,&pppppuStack_160,auStack_b8,&lStack_190,&plStack_1d0,
                 param_3,0);
    plVar3 = plStack_1d0;
    plVar4 = (long *)lStack_1c0;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    while (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      plStack_1d0 = plVar3;
      if (*(char *)((long)plVar4 + 0x3f) < '\0') {
        __ZdlPv(plVar4[5]);
        cVar2 = *(char *)((long)plVar4 + 0x27);
      }
      else {
        cVar2 = *(char *)((long)plVar4 + 0x27);
      }
      if (cVar2 < '\0') {
        __ZdlPv(plVar4[2]);
      }
      __ZdlPv(plVar4);
      plVar3 = plStack_1d0;
      plVar4 = (long *)lVar10;
    }
    plStack_1d0 = (long *)0x0;
    lVar10 = lStack_190;
    plVar4 = plStack_180;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
      lVar10 = lStack_190;
      plVar4 = plStack_180;
    }
    while (plVar4 != (long *)0x0) {
      lVar14 = *plVar4;
      lStack_190 = lVar10;
      if (*(char *)((long)plVar4 + 0x3f) < '\0') {
        __ZdlPv(plVar4[5]);
        cVar2 = *(char *)((long)plVar4 + 0x27);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      }
      else {
        cVar2 = *(char *)((long)plVar4 + 0x27);
      }
      if (cVar2 < '\0') {
        __ZdlPv(plVar4[2]);
      }
      __ZdlPv(plVar4);
      lVar10 = lStack_190;
      plVar4 = (long *)lVar14;
    }
    lStack_190 = 0;
    if (lVar10 != 0) {
      __ZdlPv();
    }
    if ((long)uStack_150 < 0) {
      __ZdlPv(pppppuStack_160);
      if (-1 < (long)uStack_138) goto LAB_0022b498;
LAB_0022b5a0:
      __ZdlPv(pppppuStack_148);
      bVar5 = bStack_12f;
      func_0x001290c4(&uStack_130);
    }
    else {
// WM - origin: github.com/pengussy
      if ((long)uStack_138 < 0) goto LAB_0022b5a0;
LAB_0022b498:
      bVar5 = bStack_12f;
      func_0x001290c4(&uStack_130);
    }
    param_3 = (ulong)bVar5;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return param_3;
    }
    ___stack_chk_fail();
LAB_0022b5e0:
    func_0x019da58c();
  } while( true );
}

