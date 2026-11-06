/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x218780:ceb00c3365
 */

/* WARNING: Removing unreachable block (ram,0x00218dbc) */
/* WARNING: Removing unreachable block (ram,0x00218dac) */
/* WARNING: Removing unreachable block (ram,0x00219014) */
/* WARNING: Removing unreachable block (ram,0x00219038) */
/* WARNING: Type propagation algorithm not settling */

long FUN_00218780(long param_1,long param_2)

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
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  char *pcStack_200;
  char *pcStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
// WM - chat: discord.gg/sdkhDjTex
  undefined8 *******pppppppuStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
/* proprietary - see LICENSE - do not sell */
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_01f20200;
  pbVar7 = (byte *)(*pcRam0000000002077130)();
  if ((*pbVar7 & 1) == 0) {
/* WM - reversing this took months of machine time */
    func_0x019d909c();
  }
  pcStack_1f8 = (char *)(*pcRam0000000002077118)();
  if (*pcStack_1f8 == '\x01') {
    uVar1 = (byte)pcStack_1f8[1] ^ 0xaf5aa801;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xd79dbd5f;
    pcStack_1f8[6] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - 0x19 ^ 0xc2;
    uVar11 = (((ulong)(byte)pcStack_1f8[1] ^ 0x8ff664d8eccbf5ad) << 0x11 | 0x11fec) +
             0x9e3779b97f4a7c15;
    uVar13 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar14 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1f8[2] ^ (uint)uVar14 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
    pcStack_1f8[7] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar14;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar13 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar14 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1f8[3] ^ (uint)uVar14 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
// WM - do not claim this as your own
    pcStack_1f8[8] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar14;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar13 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar14 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1f8[4] ^ (uint)uVar14 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17);
    pcStack_1f8[9] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar14;
    uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_1f8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1f8[5] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
    pcStack_1f8[10] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar13;
    *pcStack_1f8 = '\0';
  }
  pcStack_1f8 = pcStack_1f8 + 6;
  uVar8 = func_0x0011ab24(&pcStack_1f8);
  uVar11 = _strlen();
  if (uVar11 < 0x7ffffffffffffff7) {
    if (uVar11 < 0x17) {
      uStack_180 = CONCAT17((char)uVar11,(undefined7)uStack_180);
      pppppppuVar9 = &pppppppuStack_190;
    }
    else {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      uVar13 = (uVar11 & 0x7ffffffffffffff8) + 8;
      uVar14 = 0x19;
      if (uVar13 != 0x18) {
        uVar14 = uVar13;
      }
      pppppppuVar9 = (undefined8 *******)__Znwm(uVar14);
      uStack_180 = uVar14 | 0x8000000000000000;
      pppppppuStack_190 = pppppppuVar9;
      uStack_188 = uVar11;
    }
    _memmove(pppppppuVar9,uVar8,uVar11);
    *(undefined1 *)((long)pppppppuVar9 + uVar11) = 0;
    pbVar7 = (byte *)(*pcRam0000000002077160)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019d90d8();
    }
    pcStack_200 = (char *)(*pcRam0000000002077148)();
    if (*pcStack_200 == '\x01') {
      lVar12 = 0;
      uVar11 = 0x86598a753564d92a;
      do {
        uVar13 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        uVar1 = (uint)(byte)pcStack_200[lVar12 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
        pcStack_200[lVar12 + 0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar14;
        uVar11 = lVar12 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_200[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0xd);
      *pcStack_200 = '\0';
    }
    pcStack_200 = pcStack_200 + 0xe;
    uStack_1c8 = func_0x0011ab24(&pcStack_200);
    func_0x00190144(&uStack_100,&uStack_1c8,param_2 + 0x38);
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_1a0 = 0x3f800000;
    plStack_1f0 = &lStack_1c0;
    func_0x00190320(&plStack_1f0,&uStack_100,&uStack_100);
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1d0 = 0x3f800000;
/* wm:donate: donate/README.md */
    FUN_001d2b10(&uStack_178,param_2 + 8,&pppppppuStack_190,param_2 + 0x20,&lStack_1c0,&plStack_1f0,
                 &UNK_000493e0,0);
    plVar15 = plStack_1e0;
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
        if (cVar2 < '\0') break;
        __ZdlPv(plVar16);
        plVar16 = plVar15;
        if (plVar15 == (long *)0x0) goto LAB_00218cb0;
      }
      __ZdlPv(plVar16[2]);
      __ZdlPv(plVar16);
    }
LAB_00218cb0:
    plVar16 = plStack_1f0;
    plStack_1f0 = (long *)0x0;
    plVar15 = plStack_1b0;
    if (plVar16 != (long *)0x0) {
      __ZdlPv();
      plVar15 = plStack_1b0;
    }
    while (plVar15 != (long *)0x0) {
/* wm:watermarked copy - do not remove */
      while( true ) {
        plVar16 = (long *)*plVar15;
        if (*(char *)((long)plVar15 + 0x3f) < '\0') {
          __ZdlPv(plVar15[5]);
          cVar2 = *(char *)((long)plVar15 + 0x27);
        }
        else {
          cVar2 = *(char *)((long)plVar15 + 0x27);
        }
        if (cVar2 < '\0') break;
        __ZdlPv(plVar15);
        plVar15 = plVar16;
        if (plVar16 == (long *)0x0) goto LAB_00218d18;
      }
      __ZdlPv(plVar15[2]);
      __ZdlPv(plVar15);
      plVar15 = plVar16;
    }
/* WM - origin: github.com/pengussy */
LAB_00218d18:
    lVar12 = lStack_1c0;
    lStack_1c0 = 0;
    if (lVar12 != 0) {
      __ZdlPv();
    }
    if ((long)uStack_180 < 0) {
      __ZdlPv(pppppppuStack_190);
    }
    lVar6 = lStack_110;
    uVar13 = uStack_120;
    lVar5 = lStack_128;
    lVar4 = lStack_138;
    uVar11 = uStack_148;
    lVar12 = lStack_150;
    uStack_e0 = uStack_158;
    uStack_f8 = uStack_170;
    uStack_100 = uStack_178;
    uStack_e8 = uStack_160;
    uStack_f0 = uStack_168;
    uStack_168 = 0;
    uStack_160 = 0;
    lStack_150 = 0;
    uStack_148 = 0;
    uStack_158 = 0;
    lStack_d8 = lVar12;
    uStack_d0 = uVar11;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    lStack_c8 = lStack_140;
    lStack_c0 = lStack_138;
    uStack_b8 = uStack_130;
    if (lStack_138 != 0) {
      uVar14 = *(ulong *)(lStack_140 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar14 = uVar14 & uVar11 - 1;
      }
      else if (uVar11 <= uVar14) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar14 / uVar11;
        }
        uVar14 = uVar14 - uVar3 * uVar11;
      }
      *(long **)(lVar12 + uVar14 * 8) = &lStack_c8;
      lStack_140 = 0;
      lStack_138 = 0;
    }
    lStack_128 = 0;
    uStack_120 = 0;
    lStack_b0 = lVar5;
    uStack_a8 = uVar13;
    lStack_a0 = lStack_118;
    lStack_98 = lStack_110;
    uStack_90 = uStack_108;
/*  if you paid for this, you were scammed  */
    if (lStack_110 != 0) {
      uVar14 = *(ulong *)(lStack_118 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        uVar3 = 0;
        if (uVar13 != 0) {
          uVar3 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar3 * uVar13;
      }
      *(long **)(lVar5 + uVar14 * 8) = &lStack_a0;
      lStack_118 = 0;
      lStack_110 = 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar10 = (undefined8 *)__Znwm(0x80);
/* do not claim this as your own - github.com/pengussy */
    uVar8 = uStack_e0;
    *puVar10 = &UNK_01dc0958;
    puVar10[2] = uStack_f8;
    puVar10[1] = uStack_100;
    puVar10[4] = uStack_e8;
    puVar10[3] = uStack_f0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
    puVar10[5] = uVar8;
    puVar10[6] = lVar12;
    puVar10[7] = uVar11;
    uStack_d0 = 0;
    puVar10[8] = lStack_c8;
    puVar10[9] = lVar4;
    *(undefined4 *)(puVar10 + 10) = uStack_130;
    if (lVar4 != 0) {
      uVar14 = *(ulong *)(lStack_c8 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar14 = uVar14 & uVar11 - 1;
      }
      else if (uVar11 <= uVar14) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar14 / uVar11;
        }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        uVar14 = uVar14 - uVar3 * uVar11;
      }
      *(undefined8 **)(lVar12 + uVar14 * 8) = puVar10 + 8;
      lStack_c8 = 0;
      lStack_c0 = 0;
    }
    lStack_b0 = 0;
    uStack_a8 = 0;
    puVar10[0xd] = lStack_a0;
    puVar10[0xb] = lVar5;
    puVar10[0xc] = uVar13;
    puVar10[0xe] = lVar6;
    *(undefined4 *)(puVar10 + 0xf) = uStack_108;
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lStack_a0 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar11 = uVar11 & uVar13 - 1;
      }
      else if (uVar13 <= uVar11) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar11 / uVar13;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        }
        uVar11 = uVar11 - uVar14 * uVar13;
      }
      *(undefined8 **)(lVar5 + uVar11 * 8) = puVar10 + 0xd;
      lStack_a0 = 0;
      lStack_98 = 0;
    }
    *(undefined8 **)(param_1 + 0x18) = puVar10;
    func_0x001290c4(&uStack_100);
    lVar12 = func_0x001290c4(&uStack_178);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_88) {
      return lVar12;
    }
  }
  else {
    FUN_0000aa50();
  }
  ___stack_chk_fail();
  uVar8 = __Unwind_Resume();
  func_0x001290c4(&uStack_100);
  func_0x001290c4(&uStack_178);
  uVar8 = __Unwind_Resume(uVar8);
  func_0x0003d63c(&plStack_1f0);
  func_0x0003d63c(&lStack_1c0);
/* wm:proprietary - see LICENSE - do not sell */
  func_0x0001bb9c(&uStack_100);
  if ((long)uStack_180 < 0) {
    __ZdlPv(pppppppuStack_190);
  }
  auVar17 = __Unwind_Resume(uVar8);
  if (*(char **)(auVar17._8_8_ + 8) == "ZN4Misc8HttpPostEP9lua_StateE3$_0") {
    return auVar17._0_8_ + 8;
  }
  return 0;
}

