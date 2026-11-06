/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x21d740:ea8b84a2ae
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0021d740(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  ulong uVar16;
  long *plVar17;
  char *pcStack_1b0;
  char *pcStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  undefined8 *******pppppppuStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 *******pppppppuStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
/*  more drops soon - github.com/pengussy  */
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  pbVar9 = (byte *)(*pcRam00000000020772e0)();
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  if ((*pbVar9 & 1) == 0) {
    func_0x019d92b8();
  }
  pcStack_1a8 = (char *)(*pcRam00000000020772c8)();
  if (*pcStack_1a8 == '\x01') {
    lVar13 = 0;
    uVar14 = 0xa7815691cd389207;
    do {
      uVar15 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1a8[lVar13 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17);
      pcStack_1a8[lVar13 + 0x17] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar16;
      uVar14 = lVar13 + -0x61c8864680b583eb +
               (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_1a8[lVar13 + 1]) << 0x11);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x16);
    *pcStack_1a8 = '\0';
  }
  pcStack_1a8 = pcStack_1a8 + 0x17;
  uVar10 = func_0x0011ab24(&pcStack_1a8);
  uVar14 = _strlen();
  if (uVar14 < 0x7ffffffffffffff7) {
    if (uVar14 < 0x17) {
      uStack_100 = CONCAT17((char)uVar14,(undefined7)uStack_100);
      pppppppuVar11 = &pppppppuStack_110;
    }
    else {
      uVar15 = (uVar14 & 0x7ffffffffffffff8) + 8;
      uVar16 = 0x19;
      if (uVar15 != 0x18) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        uVar16 = uVar15;
      }
      pppppppuVar11 = (undefined8 *******)__Znwm(uVar16);
      uStack_100 = uVar16 | 0x8000000000000000;
      pppppppuStack_110 = pppppppuVar11;
      uStack_108 = uVar14;
    }
    _memmove(pppppppuVar11,uVar10,uVar14);
    *(undefined1 *)((long)pppppppuVar11 + uVar14) = 0;
    pbVar9 = (byte *)(*pcRam0000000002077310)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019d92f4();
    }
    pcStack_1b0 = (char *)(*pcRam00000000020772f8)();
    if (*pcStack_1b0 == '\x01') {
      uVar1 = (byte)pcStack_1b0[1] ^ 0x90cb2a8f;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x3a56a9cd;
      pcStack_1b0[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x4c;
      uVar14 = (((ulong)(byte)pcStack_1b0[1] ^ 0xb5e5c3b637560d1a) << 0x11 | 0x16bcb) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1b0[2] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17))
/* WM - found on a paste site? it was re-uploaded illegally */
      ;
      pcStack_1b0[7] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar16;
      uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_1b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar15 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1b0[3] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17))
      ;
      pcStack_1b0[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar16;
      uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_1b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1b0[4] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17))
      ;
      pcStack_1b0[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar16;
      uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_1b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1b0[5] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17))
      ;
      pcStack_1b0[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar15;
/* reversing this took months of machine time - github.com/pengussy */
      *pcStack_1b0 = '\0';
    }
    pcStack_1b0 = pcStack_1b0 + 6;
    uVar10 = func_0x0011ab24(&pcStack_1b0);
    uVar14 = _strlen();
    if (uVar14 < 0x7ffffffffffffff7) {
      if (uVar14 < 0x17) {
        uStack_118 = CONCAT17((char)uVar14,(undefined7)uStack_118);
        pppppppuVar11 = &pppppppuStack_128;
      }
      else {
        uVar15 = (uVar14 & 0x7ffffffffffffff8) + 8;
        uVar16 = 0x19;
        if (uVar15 != 0x18) {
          uVar16 = uVar15;
        }
        pppppppuVar11 = (undefined8 *******)__Znwm(uVar16);
        uStack_118 = uVar16 | 0x8000000000000000;
        pppppppuStack_128 = pppppppuVar11;
/* donate: donate/README.md */
        uStack_120 = uVar14;
      }
      _memmove(pppppppuVar11,uVar10,uVar14);
      *(undefined1 *)((long)pppppppuVar11 + uVar14) = 0;
      uStack_198 = 0;
      lStack_1a0 = 0;
      uStack_188 = 0;
      plStack_190 = (long *)0x0;
      uStack_180 = CONCAT44(uStack_180._4_4_,0x3f800000);
      FUN_001d2b10(&lStack_f8,&pppppppuStack_110,&pppppppuStack_128,param_2 + 8,param_2 + 0x20,
                   &lStack_1a0,&UNK_000493e0,0);
      lVar13 = lStack_1a0;
      plVar4 = plStack_190;
      while (plVar4 != (long *)0x0) {
        plVar17 = (long *)*plVar4;
        lStack_1a0 = lVar13;
        if (*(char *)((long)plVar4 + 0x3f) < '\0') {
          __ZdlPv(plVar4[5]);
          cVar2 = *(char *)((long)plVar4 + 0x27);
/* origin: github.com/pengussy */
        }
        else {
          cVar2 = *(char *)((long)plVar4 + 0x27);
        }
        if (cVar2 < '\0') {
          __ZdlPv(plVar4[2]);
          __ZdlPv(plVar4);
          lVar13 = lStack_1a0;
          plVar4 = plVar17;
        }
        else {
          __ZdlPv(plVar4);
          lVar13 = lStack_1a0;
          plVar4 = plVar17;
        }
      }
      lStack_1a0 = 0;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      if ((long)uStack_118 < 0) {
        __ZdlPv(pppppppuStack_128);
      }
      if ((long)uStack_100 < 0) {
        __ZdlPv(pppppppuStack_110);
      }
      lVar7 = lStack_90;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar15 = uStack_a0;
      lVar6 = lStack_a8;
      lVar5 = lStack_b8;
      uVar14 = uStack_c8;
      lVar13 = lStack_d0;
      uStack_180 = uStack_d8;
      uStack_198 = uStack_f0;
      lStack_1a0 = lStack_f8;
      uStack_188 = uStack_e0;
      plStack_190 = (long *)uStack_e8;
      uStack_e8 = 0;
      uStack_e0 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      uStack_d8 = 0;
      lStack_178 = lVar13;
      uStack_170 = uVar14;
      lStack_168 = lStack_c0;
      lStack_160 = lStack_b8;
      uStack_158 = uStack_b0;
      if (lStack_b8 != 0) {
        uVar16 = *(ulong *)(lStack_c0 + 8);
        if ((uVar14 & uVar14 - 1) == 0) {
          uVar16 = uVar16 & uVar14 - 1;
        }
        else if (uVar14 <= uVar16) {
          uVar3 = 0;
          if (uVar14 != 0) {
            uVar3 = uVar16 / uVar14;
          }
          uVar16 = uVar16 - uVar3 * uVar14;
        }
        *(long **)(lVar13 + uVar16 * 8) = &lStack_168;
        lStack_c0 = 0;
        lStack_b8 = 0;
      }
      lStack_a8 = 0;
      uStack_a0 = 0;
/* WM - unlicensed copy if this notice is missing */
      lStack_150 = lVar6;
      uStack_148 = uVar15;
      lStack_140 = lStack_98;
      lStack_138 = lStack_90;
      uStack_130 = uStack_88;
      if (lStack_90 != 0) {
        uVar16 = *(ulong *)(lStack_98 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar16 = uVar16 & uVar15 - 1;
        }
        else if (uVar15 <= uVar16) {
          uVar3 = 0;
          if (uVar15 != 0) {
            uVar3 = uVar16 / uVar15;
          }
          uVar16 = uVar16 - uVar3 * uVar15;
/*  reversing this took months of machine time  */
        }
        *(long **)(lVar6 + uVar16 * 8) = &lStack_140;
        lStack_98 = 0;
        lStack_90 = 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      puVar12 = (undefined8 *)__Znwm(0x80);
      uVar10 = uStack_180;
      *puVar12 = &UNK_01dc0b58;
      puVar12[2] = uStack_198;
      puVar12[1] = lStack_1a0;
      puVar12[4] = uStack_188;
      puVar12[3] = plStack_190;
      uStack_188 = 0;
      plStack_190 = (long *)0x0;
      lStack_178 = 0;
      uStack_180 = 0;
      puVar12[5] = uVar10;
      puVar12[6] = lVar13;
      puVar12[7] = uVar14;
      uStack_170 = 0;
      puVar12[8] = lStack_168;
      puVar12[9] = lVar5;
      *(undefined4 *)(puVar12 + 10) = uStack_b0;
// WM - stripping the watermark breaks the license
      if (lVar5 != 0) {
        uVar16 = *(ulong *)(lStack_168 + 8);
        if ((uVar14 & uVar14 - 1) == 0) {
          uVar16 = uVar16 & uVar14 - 1;
        }
        else if (uVar14 <= uVar16) {
          uVar3 = 0;
          if (uVar14 != 0) {
            uVar3 = uVar16 / uVar14;
          }
          uVar16 = uVar16 - uVar3 * uVar14;
        }
        *(undefined8 **)(lVar13 + uVar16 * 8) = puVar12 + 8;
        lStack_168 = 0;
        lStack_160 = 0;
      }
      lStack_150 = 0;
      uStack_148 = 0;
      puVar12[0xd] = lStack_140;
      puVar12[0xb] = lVar6;
      puVar12[0xc] = uVar15;
      puVar12[0xe] = lVar7;
      *(undefined4 *)(puVar12 + 0xf) = uStack_88;
      if (lVar7 != 0) {
        uVar14 = *(ulong *)(lStack_140 + 8);
        if ((uVar15 & uVar15 - 1) == 0) {
          uVar14 = uVar14 & uVar15 - 1;
        }
        else if (uVar15 <= uVar14) {
          uVar16 = 0;
          if (uVar15 != 0) {
            uVar16 = uVar14 / uVar15;
          }
          uVar14 = uVar14 - uVar16 * uVar15;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        *(undefined8 **)(lVar6 + uVar14 * 8) = puVar12 + 0xd;
        lStack_140 = 0;
        lStack_138 = 0;
      }
      *(undefined8 **)(param_1 + 0x18) = puVar12;
      func_0x001290c4(&lStack_1a0);
      func_0x001290c4(&lStack_f8);
      return;
    }
  }
  else {
    FUN_0000aa50();
  }
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x21dec8);
  (*pcVar8)();
}

