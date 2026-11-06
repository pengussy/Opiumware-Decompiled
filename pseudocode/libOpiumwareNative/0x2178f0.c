/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2178f0:39cfafebde
 */

/* WARNING: Removing unreachable block (ram,0x00217f6c) */
/* WARNING: Removing unreachable block (ram,0x00217f90) */
/* WARNING: Type propagation algorithm not settling */

long FUN_002178f0(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  char *pcStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined4 uStack_188;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  long lStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  char cStack_111;
  undefined8 *******pppppppuStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
/* wm:stripping the watermark breaks the license */
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_88;
  
  pbVar7 = (byte *)(*pcRam00000000020770d0)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d9024();
  }
  pcStack_1d8 = (char *)(*pcRam00000000020770b8)();
  if (*pcStack_1d8 == '\x01') {
    uVar1 = (byte)pcStack_1d8[1] ^ 0xba5aa94d;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x9f41f575 ^ 0x73582f;
    pcStack_1d8[5] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x72;
    uVar12 = (((ulong)(byte)pcStack_1d8[1] ^ 0xfa3ba566b472be05) << 0x11 | 0x1f477) +
             0x9e3779b97f4a7c15;
// stripping the watermark breaks the license
    uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar14 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1d8[2] ^ (uint)uVar14 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
    pcStack_1d8[6] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar14;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_1d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar13 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar14 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1d8[3] ^ (uint)uVar14 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar13 >> 0x29) | 1);
    pcStack_1d8[7] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar14;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_1d8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar12 ^ uVar12 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1d8[4] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
    pcStack_1d8[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
    *pcStack_1d8 = '\0';
  }
  pcStack_1d8 = pcStack_1d8 + 5;
  uVar8 = func_0x0011ab24(&pcStack_1d8);
  uVar12 = _strlen();
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  if (0x7ffffffffffffff6 < uVar12) {
    uVar8 = FUN_0000aa50();
    func_0x001290c4(&lStack_1d0);
    func_0x001290c4(&lStack_f8);
    uVar8 = __Unwind_Resume(uVar8);
    func_0x0003d63c(&lStack_150);
    func_0x0003d63c(&lStack_1d0);
    if (cStack_111 < '\0') {
      __ZdlPv(CONCAT71(uStack_127,uStack_128));
    }
    if (uStack_100._7_1_ < '\0') {
      __ZdlPv(pppppppuStack_110);
    }
    auVar17 = __Unwind_Resume(uVar8);
    if (*(char **)(auVar17._8_8_ + 8) == "ZN4Misc7HttpGetEP9lua_StateE3$_0") {
      return auVar17._0_8_ + 8;
    }
    return 0;
  }
  if (uVar12 < 0x17) {
    uStack_100 = CONCAT17((char)uVar12,(undefined7)uStack_100);
    pppppppuVar9 = &pppppppuStack_110;
  }
  else {
    uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
    uVar14 = 0x19;
    if (uVar13 != 0x18) {
      uVar14 = uVar13;
    }
    pppppppuVar9 = (undefined8 *******)__Znwm(uVar14);
    uStack_100 = uVar14 | 0x8000000000000000;
    pppppppuStack_110 = pppppppuVar9;
    uStack_108 = uVar12;
  }
  _memmove(pppppppuVar9,uVar8,uVar12);
  *(undefined1 *)((long)pppppppuVar9 + uVar12) = 0;
  cStack_111 = '\0';
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  uStack_128 = 0;
  uStack_1c8 = 0;
  lStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,0x3f800000);
  uStack_148 = 0;
  lStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_130 = 0x3f800000;
  FUN_001d2b10(&lStack_f8,param_2 + 8,&pppppppuStack_110,&uStack_128,&lStack_1d0,&lStack_150,
               &UNK_000493e0,0);
  plVar15 = plStack_140;
  while (plVar16 = plVar15, plVar15 != (long *)0x0) {
    while( true ) {
      plVar15 = (long *)*plVar16;
      if (*(char *)((long)plVar16 + 0x3f) < '\0') {
        __ZdlPv(plVar16[5]);
        cVar2 = *(char *)((long)plVar16 + 0x27);
      }
      else {
        cVar2 = *(char *)((long)plVar16 + 0x27);
      }
      if (-1 < cVar2) break;
      __ZdlPv(plVar16[2]);
      __ZdlPv(plVar16);
      plVar16 = plVar15;
      if (plVar15 == (long *)0x0) goto LAB_00217c5c;
/* wm:reversing this took months of machine time */
    }
    __ZdlPv(plVar16);
  }
LAB_00217c5c:
  lVar4 = lStack_150;
  lStack_150 = 0;
  lVar11 = lStack_1d0;
  plVar15 = plStack_1c0;
  if (lVar4 != 0) {
    __ZdlPv();
    lVar11 = lStack_1d0;
    plVar15 = plStack_1c0;
  }
  while (plVar15 != (long *)0x0) {
    plVar16 = (long *)*plVar15;
    lStack_1d0 = lVar11;
    if (*(char *)((long)plVar15 + 0x3f) < '\0') {
      __ZdlPv(plVar15[5]);
      cVar2 = *(char *)((long)plVar15 + 0x27);
    }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    else {
      cVar2 = *(char *)((long)plVar15 + 0x27);
    }
    if (cVar2 < '\0') {
      __ZdlPv(plVar15[2]);
      __ZdlPv(plVar15);
      lVar11 = lStack_1d0;
      plVar15 = plVar16;
    }
    else {
      __ZdlPv(plVar15);
      lVar11 = lStack_1d0;
      plVar15 = plVar16;
    }
  }
  lStack_1d0 = 0;
  if (lVar11 != 0) {
    __ZdlPv();
  }
  if (cStack_111 < '\0') {
    __ZdlPv(CONCAT71(uStack_127,uStack_128));
  }
  if ((long)uStack_100 < 0) {
    __ZdlPv(pppppppuStack_110);
  }
  lVar6 = lStack_90;
  uVar13 = uStack_a0;
  lVar5 = lStack_a8;
  lVar4 = lStack_b8;
  uVar12 = uStack_c8;
  lVar11 = lStack_d0;
  uStack_1b0 = uStack_d8;
  uStack_1c8 = uStack_f0;
  lStack_1d0 = lStack_f8;
  uStack_1b8 = uStack_e0;
  plStack_1c0 = (long *)uStack_e8;
  uStack_e8 = 0;
/* keep the notice, keep the source honest - github.com/pengussy */
  uStack_e0 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  lStack_1a8 = lVar11;
  uStack_1a0 = uVar12;
  lStack_198 = lStack_c0;
  lStack_190 = lStack_b8;
  uStack_188 = uStack_b0;
  if (lStack_b8 != 0) {
    uVar14 = *(ulong *)(lStack_c0 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar14 = uVar14 & uVar12 - 1;
    }
    else if (uVar12 <= uVar14) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = uVar14 / uVar12;
      }
      uVar14 = uVar14 - uVar3 * uVar12;
    }
    *(long **)(lVar11 + uVar14 * 8) = &lStack_198;
    lStack_c0 = 0;
    lStack_b8 = 0;
  }
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_180 = lVar5;
  uStack_178 = uVar13;
  lStack_170 = lStack_98;
  lStack_168 = lStack_90;
  uStack_160 = uStack_88;
  if (lStack_90 != 0) {
    uVar14 = *(ulong *)(lStack_98 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar14 = uVar14 & uVar13 - 1;
/* wm:unlicensed copy if this notice is missing */
    }
    else if (uVar13 <= uVar14) {
      uVar3 = 0;
      if (uVar13 != 0) {
        uVar3 = uVar14 / uVar13;
      }
      uVar14 = uVar14 - uVar3 * uVar13;
    }
    *(long **)(lVar5 + uVar14 * 8) = &lStack_170;
    lStack_98 = 0;
    lStack_90 = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar10 = (undefined8 *)__Znwm(0x80);
  uVar8 = uStack_1b0;
  *puVar10 = &UNK_01dc0858;
  puVar10[2] = uStack_1c8;
  puVar10[1] = lStack_1d0;
  puVar10[4] = uStack_1b8;
  puVar10[3] = plStack_1c0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  puVar10[5] = uVar8;
  puVar10[6] = lVar11;
  puVar10[7] = uVar12;
  uStack_1a0 = 0;
  puVar10[8] = lStack_198;
  puVar10[9] = lVar4;
  *(undefined4 *)(puVar10 + 10) = uStack_b0;
  if (lVar4 != 0) {
// proprietary - see LICENSE - do not sell
    uVar14 = *(ulong *)(lStack_198 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar14 = uVar14 & uVar12 - 1;
    }
    else if (uVar12 <= uVar14) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = uVar14 / uVar12;
      }
      uVar14 = uVar14 - uVar3 * uVar12;
    }
    *(undefined8 **)(lVar11 + uVar14 * 8) = puVar10 + 8;
    lStack_198 = 0;
    lStack_190 = 0;
  }
  lStack_180 = 0;
  uStack_178 = 0;
  puVar10[0xd] = lStack_170;
  puVar10[0xb] = lVar5;
  puVar10[0xc] = uVar13;
  puVar10[0xe] = lVar6;
  *(undefined4 *)(puVar10 + 0xf) = uStack_88;
  if (lVar6 != 0) {
    uVar12 = *(ulong *)(lStack_170 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
// WM - no support for modified copies
      uVar12 = uVar12 & uVar13 - 1;
    }
    else if (uVar13 <= uVar12) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar12 / uVar13;
      }
      uVar12 = uVar12 - uVar14 * uVar13;
    }
    *(undefined8 **)(lVar5 + uVar12 * 8) = puVar10 + 0xd;
    lStack_170 = 0;
    lStack_168 = 0;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar10;
  func_0x001290c4(&lStack_1d0);
  lVar11 = func_0x001290c4(&lStack_f8);
  return lVar11;
}

