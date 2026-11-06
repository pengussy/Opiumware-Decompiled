/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1158f8:db762ff095
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001158f8(void)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  char *******pppppppcVar4;
  byte bVar5;
  undefined8 *******pppppppuVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 *******pppppppuVar18;
  undefined4 *puVar19;
  int *piVar20;
  byte *pbVar21;
  long *extraout_x8;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong extraout_x10;
  long extraout_x11;
  ulong uVar25;
  byte *pbVar27;
  byte *pbVar26;
  long extraout_x15;
/*  stripping the watermark breaks the license  */
  ulong uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  char *pcStack_14280;
  char *pcStack_14278;
  char *pcStack_14270;
  long lStack_14268;
  char *pcStack_14260;
  char *pcStack_14258;
  char *pcStack_14250;
  char *pcStack_14248;
  char *pcStack_14240;
  char *pcStack_14238;
  char *pcStack_14230;
  char *pcStack_14228;
  char *pcStack_14220;
  char *pcStack_14218;
  char *pcStack_14210;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  long lStack_14208;
  undefined8 *******pppppppuStack_14200;
  ulong uStack_141f8;
  ulong uStack_141f0;
  char *******pppppppcStack_141e8;
  char *******apppppppcStack_141e0 [2];
  byte bStack_141c9;
  undefined8 *******pppppppuStack_141c8;
  ulong uStack_141c0;
  undefined8 uStack_141b8;
  undefined8 *******pppppppuStack_141b0;
  ulong uStack_141a8;
  undefined8 uStack_141a0;
  byte *pbStack_14198;
  ulong uStack_14190;
  byte *pbStack_14188;
  byte *pbStack_14180;
  long lStack_14170;
  long lStack_14168;
  long lStack_14160;
  int iStack_14154;
  undefined8 uStack_14150;
  undefined8 uStack_14148;
  long lStack_10150;
  long lStack_100d0;
  long lStack_100c8;
  undefined *puStack_100c0;
  long lStack_100b8;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  ulong uStack_100b0;
  undefined8 uStack_100a8;
  undefined1 *puStack_100a0;
  ulong uStack_10098;
  undefined8 uStack_10090;
  undefined8 uStack_10088;
  undefined8 uStack_10080;
  undefined8 uStack_10078;
  undefined8 uStack_10070;
  undefined8 uStack_10068;
  undefined8 uStack_10060;
  undefined8 uStack_10058;
  undefined8 uStack_10050;
  undefined1 auStack_10048 [65536];
  long lStack_48;
  
  plVar13 = (long *)(*(code *)PTR____chkstk_darwin_01f201f8)();
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar15 = *plVar13;
  if ((lVar15 == plVar13[1]) || (uVar24 = plVar13[1] - lVar15, 0x400000 < uVar24)) {
LAB_0011598c:
/*  reversing this took months of machine time  */
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
  }
  else {
    uStack_100a8 = 0;
    uStack_10098 = 0;
    puStack_100a0 = (undefined1 *)0x0;
    uStack_10050 = 0;
    uStack_10068 = 0;
    uStack_10070 = 0;
    uStack_10058 = 0;
    uStack_10060 = 0;
    uStack_10088 = 0;
    uStack_10090 = 0;
    uStack_10078 = 0;
    uStack_10080 = 0;
    uStack_100b0 = uVar24 & 0xffffffff;
    lStack_100b8 = lVar15;
    iVar11 = _inflateInit_(&lStack_100b8,"1.2.12",0x70);
    if (iVar11 != 0) goto LAB_0011598c;
    puVar2 = (undefined *)((plVar13[1] - *plVar13) * 3);
    if (puVar2 < &UNK_00002001) {
      puVar2 = (undefined *)0x2000;
    }
    if ((undefined *)0xffffff < puVar2) {
      puVar2 = (undefined *)0x1000000;
    }
    lStack_100d0 = __Znwm(puVar2);
    puStack_100c0 = puVar2 + lStack_100d0;
    lStack_100c8 = lStack_100d0;
    _bzero(auStack_10048,0x10000);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    do {
      uStack_10098 = CONCAT44(uStack_10098._4_4_,0x10000);
      puStack_100a0 = auStack_10048;
      uVar12 = _inflate(&lStack_100b8,0);
      if (1 < uVar12) {
        _inflateEnd(&lStack_100b8);
LAB_00115aa4:
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
        if (lStack_100d0 != 0) {
          lStack_100c8 = lStack_100d0;
          __ZdlPv();
        }
        goto LAB_00115994;
      }
      lVar15 = 0x10000 - (uStack_10098 & 0xffffffff);
      if (0x1000000 < (ulong)((lVar15 + lStack_100c8) - lStack_100d0)) {
        _inflateEnd(&lStack_100b8);
        goto LAB_00115aa4;
      }
      func_0x0012fc58(&lStack_100d0,lStack_100c8,auStack_10048,auStack_10048 + lVar15);
    } while (uVar12 != 1);
    _inflateEnd(&lStack_100b8);
    extraout_x8[1] = lStack_100c8;
    *extraout_x8 = lStack_100d0;
    extraout_x8[2] = (long)puStack_100c0;
  }
LAB_00115994:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
// stripping the watermark breaks the license
    return;
  }
  uVar14 = ___stack_chk_fail();
  lVar15 = lStack_100d0;
  if (lStack_100d0 == 0) {
    lVar15 = __Unwind_Resume(uVar14);
  }
  lStack_100c8 = lVar15;
  __ZdlPv();
  __Unwind_Resume(uVar14);
  uVar14 = (*(code *)PTR____chkstk_darwin_01f201f8)();
  lStack_10150 = *(long *)PTR____stack_chk_guard_01f20200;
  iStack_14154 = (int)uVar14;
  uStack_14148 = _UNK_01ad8288;
  uStack_14150 = _UNK_01ad8280;
  iVar11 = _setsockopt(uVar14,0xffff,"k/Versions/A/QuartzCore",&uStack_14150,0x10);
  if (iVar11 == 0) {
    lStack_14170 = __Znwm(0x2000);
    lStack_14160 = lStack_14170 + 0x2000;
    lStack_14168 = lStack_14170;
    _bzero(&uStack_14150,0x4000);
/* wm:watermarked copy - do not remove */
    while (lVar15 = _read(uVar14,&uStack_14150,0x4000), 0 < lVar15) {
      if (0x400000 < (ulong)((lVar15 + lStack_14168) - lStack_14170)) goto LAB_00117ee0;
      func_0x0012fc58(&lStack_14170,lStack_14168,&uStack_14150,(long)&uStack_14150 + lVar15);
    }
    if (lStack_14170 != lStack_14168) {
      FUN_001158f8(&pbStack_14188,&lStack_14170);
      pbVar17 = pbStack_14180;
      pbVar21 = pbStack_14188;
      lVar15 = (long)pbStack_14188 - (long)pbStack_14180;
      if (lVar15 != 0) {
        if (((bRam000000000208ed08 & 1) == 0) &&
           (uVar24 = func_0x019c98d0(&pppppppuStack_141b0), (uVar24 & 1) == 0)) {
          lStack_14208 = (long)pppppppuStack_141b0 + 0x12;
          uVar14 = func_0x0011ab24(&lStack_14208);
          func_0x0000e100(0x208fcc0,uVar14);
          ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                        ,0x208fcc0,0);
          ___cxa_guard_release(0x208ed08);
        }
        uVar28 = (long)pbVar17 - (long)pbVar21;
        uVar24 = uRam000000000208fcc8;
        pcVar3 = pcRam000000000208fcc0;
        if (-1 < (char)bRam000000000208fcd7) {
          pcVar3 = (char *)0x208fcc0;
          uVar24 = (ulong)bRam000000000208fcd7;
        }
        if (uVar24 == 0) {
          lVar23 = 0;
LAB_00115c84:
          puVar2 = PTR___DefaultRuneLocale_01f201e8;
          uVar24 = uVar24 + lVar23;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          if (uVar28 < uVar24) {
            func_0x0001c444("string_view::substr");
            goto LAB_0011812c;
          }
          for (; uVar28 != uVar24; uVar24 = uVar24 + 1) {
            bVar5 = pbVar21[uVar24];
            if ((long)(char)bVar5 < 0) {
              uVar12 = ___maskrune(bVar5,0x4000);
            }
            else {
              uVar12 = *(uint *)(puVar2 + (long)(char)bVar5 * 4 + 0x3c) & 0x4000;
            }
            if (uVar12 == 0) {
              lVar15 = lVar15 + uVar24;
              uVar28 = uVar28 - uVar24;
              goto LAB_0011609c;
            }
          }
          uVar28 = 0;
          goto LAB_00115cd8;
        }
        if ((long)uVar24 <= (long)uVar28) {
          cVar10 = *pcVar3;
          pbVar16 = pbVar21;
          uVar22 = uVar28;
          while (pbVar16 = (byte *)_memchr(pbVar16,(long)cVar10,(uVar22 - uVar24) + 1),
                pbVar16 != (byte *)0x0) {
            iVar11 = _memcmp(pbVar16,pcVar3,uVar24);
            if (iVar11 == 0) {
/* stripping the watermark breaks the license */
              if ((pbVar16 != pbVar17) && (lVar23 = (long)pbVar16 - (long)pbVar21, lVar23 != -1))
              goto LAB_00115c84;
              break;
            }
            pbVar16 = pbVar16 + 1;
            uVar22 = (long)pbVar17 - (long)pbVar16;
            if ((long)uVar22 < (long)uVar24) break;
          }
        }
        goto LAB_00117cc0;
      }
      goto joined_r0x00117c74;
    }
    goto LAB_00117ee0;
  }
  goto LAB_00117eec;
LAB_00116004:
  if ((pbVar16 == pbVar21 + uVar28) ||
     (uVar24 = (long)pbVar16 - (long)pbVar21, uVar24 == 0xffffffffffffffff)) goto LAB_00116084;
  if (uVar28 <= uVar24) {
    func_0x0001c444("string_view::substr");
    goto LAB_0011812c;
  }
  pbStack_14198 = pbVar21 + uVar24 + 1;
/* reversing this took months of machine time - github.com/pengussy */
  for (uStack_14190 = uVar28 - (uVar24 + 1); uStack_14190 != 0; uStack_14190 = uStack_14190 - 1) {
    bVar5 = *pbStack_14198;
    if ((long)(char)bVar5 < 0) {
      uVar12 = ___maskrune(bVar5,0x4000);
    }
    else {
      uVar12 = *(uint *)(puVar2 + (long)(char)bVar5 * 4 + 0x3c) & 0x4000;
    }
    if (uVar12 == 0) goto joined_r0x001160f0;
    pbStack_14198 = pbStack_14198 + 1;
  }
  goto LAB_00116138;
joined_r0x001160f0:
  if (uStack_14190 == 0) goto LAB_00116138;
  bVar5 = pbStack_14198[uStack_14190 - 1];
  if ((long)(char)bVar5 < 0) {
    uVar12 = ___maskrune(bVar5,0x4000);
  }
  else {
    uVar12 = *(uint *)(puVar2 + (long)(char)bVar5 * 4 + 0x3c) & 0x4000;
  }
  if (uVar12 == 0) goto LAB_00116138;
  uStack_14190 = uStack_14190 - 1;
  goto joined_r0x001160f0;
  while( true ) {
    uVar28 = uVar28 - 1;
    bVar8 = lVar15 == -1;
    lVar15 = lVar15 + 1;
    if (bVar8) break;
LAB_0011609c:
    pbVar17 = pbVar17 + -1;
    bVar5 = *pbVar17;
    if ((long)(char)bVar5 < 0) {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      uVar12 = ___maskrune(bVar5,0x4000);
    }
    else {
      uVar12 = *(uint *)(puVar2 + (long)(char)bVar5 * 4 + 0x3c) & 0x4000;
    }
    if (uVar12 == 0) goto LAB_00115cd8;
  }
  uVar28 = 0;
LAB_00115cd8:
  pbVar21 = pbVar21 + uVar24;
  pbVar17 = (byte *)(*pcRam000000000206e010)();
  if ((*pbVar17 & 1) == 0) {
    func_0x019c9a40();
  }
  lVar23 = -0x3b314601e57a13ad;
  auVar30 = (*pcRam000000000206dff8)(0x206dff8,0xff51afd7ed558ccd);
  lVar15 = auVar30._8_8_;
  pcStack_14210 = auVar30._0_8_;
  if (*pcStack_14210 == '\x01') {
    uVar24 = (extraout_x10 ^ 0x34f3e188c3cddd7 ^ (extraout_x10 ^ 0x34f3e188c3cddd7) >> 0x21) *
             lVar15;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar24 = uVar24 ^ uVar24 >> 0x21;
    uVar22 = uVar24 * lVar23;
    uVar24 = uVar24 * extraout_x11;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar23;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14210[1] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar25 >> 0x17);
    pcStack_14210[6] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar24 >> 0x29) | 1) ^
         (byte)uVar25;
    uVar24 = (uVar22 >> 0x2f | ((ulong)(byte)pcStack_14210[1] ^ uVar22 >> 0x21 ^ uVar22) << 0x11) +
             extraout_x15;
    uVar22 = (uVar24 ^ uVar24 >> 0x21) * lVar15;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * lVar23;
    uVar25 = uVar22 ^ uVar22 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14210[2] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar25 >> 0x17);
    pcStack_14210[7] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar22 >> 0x29) | 1) ^
         (byte)uVar25;
    uVar24 = extraout_x15 + (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14210[2]) << 0x11) + 1;
    uVar22 = (uVar24 ^ uVar24 >> 0x21) * lVar15;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * lVar23;
    uVar25 = uVar22 ^ uVar22 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14210[3] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar25 >> 0x17);
    pcStack_14210[8] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar22 >> 0x29) | 1) ^
         (byte)uVar25;
    uVar24 = extraout_x15 + (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14210[3]) << 0x11) + 2;
    uVar22 = (uVar24 ^ uVar24 >> 0x21) * lVar15;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * lVar23;
    uVar25 = uVar22 ^ uVar22 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14210[4] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar25 >> 0x17);
    pcStack_14210[9] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar22 >> 0x29) | 1) ^
// proprietary - see LICENSE - do not sell
         (byte)uVar25;
    uVar24 = extraout_x15 + (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14210[4]) << 0x11) + 3;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar15;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar23;
    uVar22 = uVar24 ^ uVar24 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14210[5] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
    pcStack_14210[10] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar24 >> 0x29) | 1) ^
         (byte)uVar22;
    *pcStack_14210 = '\0';
  }
  pcStack_14210 = pcStack_14210 + 6;
  pbVar17 = (byte *)func_0x0011ab24(&pcStack_14210);
  uVar24 = _strlen();
  puVar2 = PTR___DefaultRuneLocale_01f201e8;
  if ((uVar28 != 0) && (uVar24 != 0)) {
    pbVar16 = pbVar21;
    do {
      bVar5 = *pbVar16;
      pbVar26 = pbVar17;
      if ((uVar24 & 3) != 0) {
        pbVar27 = pbVar17;
        uVar22 = uVar24 & 3;
        do {
          pbVar26 = pbVar27 + 1;
          if (bVar5 == *pbVar27) goto LAB_00116004;
          uVar22 = uVar22 - 1;
          pbVar27 = pbVar26;
        } while (uVar22 != 0);
      }
      if (2 < uVar24 - 1) {
        do {
          if ((((bVar5 == *pbVar26) || (bVar5 == pbVar26[1])) || (bVar5 == pbVar26[2])) ||
             (bVar5 == pbVar26[3])) goto LAB_00116004;
          pbVar26 = pbVar26 + 4;
        } while (pbVar26 != pbVar17 + uVar24);
// WM - reversing this took months of machine time
      }
      pbVar16 = pbVar16 + 1;
    } while (pbVar16 != pbVar21 + uVar28);
  }
LAB_00116084:
  pbStack_14198 = (byte *)0x0;
  uStack_14190 = 0;
  uVar24 = uVar28;
LAB_00116138:
  pppppppuStack_141b0 = (undefined8 *******)0x0;
  uStack_141a8 = 0;
  uStack_141a0 = 0;
  if (0x7ffffffffffffff6 < uVar24) {
    func_0x0000aa50();
    goto LAB_0011812c;
  }
  uVar28 = uStack_14190;
  if (uVar24 < 0x17) goto joined_r0x00116194;
  uVar28 = (uVar24 & 0x7ffffffffffffff8) + 8;
  uVar22 = 0x19;
  if (uVar28 != 0x18) {
    uVar22 = uVar28;
  }
  pppppppuVar18 = (undefined8 *******)__Znwm(uVar22);
  uStack_141a0 = uVar22 | 0x8000000000000000;
  *(undefined1 *)pppppppuVar18 = pppppppuStack_141b0._0_1_;
/* WM - found on a paste site? it was re-uploaded illegally */
  uStack_141a8 = 0;
  pppppppuStack_141b0 = pppppppuVar18;
  do {
    uVar9 = ___tolower(*pbVar21);
    uVar28 = uStack_141a0;
    if ((long)uStack_141a0 < 0) {
      uVar22 = uStack_141a0 & 0x7fffffffffffffff;
      uVar25 = uVar22 - 1;
      if (uStack_141a8 == uVar25) {
        if (uVar22 < 0x7ffffffffffffff7) {
          if (uVar25 < 0x3ffffffffffffff4) goto LAB_00116278;
          uVar22 = 0x7ffffffffffffff8;
          pppppppuVar18 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar6 = pppppppuStack_141b0;
          goto joined_r0x001162dc;
        }
        goto LAB_00118028;
      }
LAB_001162ec:
      uVar28 = uStack_141a8;
      pppppppuVar18 = pppppppuStack_141b0;
      uStack_141a8 = uStack_141a8 + 1;
    }
    else {
      if (uStack_141a0._7_1_ == 0x16) {
        uVar22 = 0x17;
// thanks for reading - discord.gg/sdkhDjTex
        uVar25 = 0x16;
LAB_00116278:
        if (uVar22 <= uVar25 * 2) {
          uVar22 = uVar25 * 2;
        }
        uVar1 = (uVar22 & 0x7ffffffffffffff8) + 8;
        uVar22 = 0x19;
        if (uVar1 != 0x18) {
          uVar22 = uVar1;
        }
        pppppppuVar18 = (undefined8 *******)__Znwm(uVar22);
        pppppppuVar6 = pppppppuStack_141b0;
        if (-1 < (long)uVar28) {
          pppppppuVar6 = &pppppppuStack_141b0;
        }
joined_r0x001162dc:
        if (uVar25 != 0) {
          _memmove(pppppppuVar18,pppppppuVar6,uVar25);
        }
        if ((long)uVar28 < 0) {
          __ZdlPv(pppppppuStack_141b0);
        }
        uStack_141a0 = uVar22 | 0x8000000000000000;
        uStack_141a8 = uVar25;
        pppppppuStack_141b0 = pppppppuVar18;
        goto LAB_001162ec;
/*  found on a paste site? it was re-uploaded illegally  */
      }
      uVar28 = (ulong)uStack_141a0._7_1_;
      uStack_141a0 = CONCAT17(uStack_141a0._7_1_ + 1,(undefined7)uStack_141a0) & 0x7fffffffffffffff;
      pppppppuVar18 = &pppppppuStack_141b0;
    }
    *(undefined1 *)((long)pppppppuVar18 + uVar28) = uVar9;
    ((undefined1 *)((long)pppppppuVar18 + uVar28))[1] = 0;
    pbVar21 = pbVar21 + 1;
    uVar24 = uVar24 - 1;
    uVar28 = uStack_14190;
joined_r0x00116194:
    uStack_14190 = uVar28;
  } while (uVar24 != 0);
  pppppppuStack_141c8 = (undefined8 *******)0x0;
  uStack_141c0 = 0;
  uStack_141b8 = 0;
  if (0x7ffffffffffffff6 < uVar28) {
    func_0x0000aa50();
    goto LAB_0011812c;
  }
  if (uVar28 < 0x17) {
    if (uVar28 != 0) goto LAB_001162fc;
  }
  else {
    uVar24 = (uVar28 & 0x7ffffffffffffff8) + 8;
    uVar22 = 0x19;
    if (uVar24 != 0x18) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
      uVar22 = uVar24;
    }
    pppppppuVar18 = (undefined8 *******)__Znwm(uVar22);
    uStack_141b8 = uVar22 | 0x8000000000000000;
    *(undefined1 *)pppppppuVar18 = pppppppuStack_141c8._0_1_;
    pppppppuStack_141c8 = pppppppuVar18;
LAB_001162fc:
    uStack_141c0 = 0;
    pbVar21 = pbStack_14198;
    do {
      uVar9 = ___tolower(*pbVar21);
      uVar24 = uStack_141b8;
      if ((long)uStack_141b8 < 0) {
        uVar22 = uStack_141b8 & 0x7fffffffffffffff;
        uVar25 = uVar22 - 1;
        if (uStack_141c0 == uVar25) {
          if (uVar22 < 0x7ffffffffffffff7) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            if (uVar25 < 0x3ffffffffffffff4) goto LAB_00116398;
            uVar22 = 0x7ffffffffffffff8;
            pppppppuVar18 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
            pppppppuVar6 = pppppppuStack_141c8;
            goto joined_r0x001163f8;
          }
          func_0x0000aa50();
          goto LAB_0011812c;
        }
LAB_00116408:
        uVar24 = uStack_141c0;
        pppppppuVar18 = pppppppuStack_141c8;
        uStack_141c0 = uStack_141c0 + 1;
      }
      else {
        if (uStack_141b8._7_1_ == 0x16) {
          uVar25 = 0x16;
          uVar22 = 0x17;
LAB_00116398:
          if (uVar22 <= uVar25 * 2) {
            uVar22 = uVar25 * 2;
          }
          uVar1 = (uVar22 & 0x7ffffffffffffff8) + 8;
          uVar22 = 0x19;
          if (uVar1 != 0x18) {
            uVar22 = uVar1;
          }
/* proprietary - see LICENSE - do not sell */
          pppppppuVar18 = (undefined8 *******)__Znwm(uVar22);
          pppppppuVar6 = pppppppuStack_141c8;
          if (-1 < (long)uVar24) {
            pppppppuVar6 = &pppppppuStack_141c8;
          }
joined_r0x001163f8:
          if (uVar25 != 0) {
            _memmove(pppppppuVar18,pppppppuVar6,uVar25);
          }
          if ((long)uVar24 < 0) {
            __ZdlPv(pppppppuStack_141c8);
          }
          uStack_141b8 = uVar22 | 0x8000000000000000;
          uStack_141c0 = uVar25;
          pppppppuStack_141c8 = pppppppuVar18;
          goto LAB_00116408;
        }
        uVar24 = (ulong)uStack_141b8._7_1_;
        uStack_141b8 = CONCAT17(uStack_141b8._7_1_ + 1,(undefined7)uStack_141b8) &
                       0x7fffffffffffffff;
        pppppppuVar18 = &pppppppuStack_141c8;
/* wm:unlicensed copy if this notice is missing */
      }
      *(undefined1 *)((long)pppppppuVar18 + uVar24) = uVar9;
      ((undefined1 *)((long)pppppppuVar18 + uVar24))[1] = 0;
      pbVar21 = pbVar21 + 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  pbVar21 = (byte *)(*pcRam000000000206e040)();
  if ((*pbVar21 & 1) == 0) {
    func_0x019c9a7c();
  }
  pcStack_14218 = (char *)(*pcRam000000000206e028)();
  if (*pcStack_14218 == '\x01') {
    uVar12 = (byte)pcStack_14218[1] ^ 0x8d0cd753;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) + 0xe541571b;
    pcStack_14218[6] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) + 0x51 ^ 0x90;
    uVar24 = (((ulong)(byte)pcStack_14218[1] ^ 0xef91cd0026199326) << 0x11 | 0x1df23) +
             0x9e3779b97f4a7c15;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14218[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
    pcStack_14218[7] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar28 >> 0x29) | 1) ^
         (byte)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14218[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14218[3] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
    pcStack_14218[8] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar28 >> 0x29) | 1) ^
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
         (byte)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14218[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14218[4] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
    pcStack_14218[9] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar28 >> 0x29) | 1) ^
         (byte)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14218[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar24 ^ uVar24 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14218[5] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar28 >> 0x17);
    pcStack_14218[10] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar24 >> 0x29) | 1) ^
         (byte)uVar28;
    *pcStack_14218 = '\0';
  }
  pcStack_14218 = pcStack_14218 + 6;
  uVar14 = func_0x0011ab24(&pcStack_14218);
  uVar24 = _strlen();
  if ((long)(char)uStack_141b8._7_1_ < 0) {
    if (uVar24 == uStack_141c0) {
      if (uVar24 == 0xffffffffffffffff) {
        func_0x0001c430();
        goto LAB_0011812c;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      }
      pppppppuVar18 = pppppppuStack_141c8;
      goto LAB_001166d8;
    }
LAB_001166e4:
    uVar24 = uStack_14190;
    pbVar21 = pbStack_14198;
    pbVar17 = (byte *)(*pcRam000000000206e070)();
    if ((*pbVar17 & 1) == 0) {
      func_0x019c9ab8();
    }
    pcStack_14220 = (char *)(*pcRam000000000206e058)();
    if (*pcStack_14220 == '\x01') {
      uVar12 = (byte)pcStack_14220[1] ^ 0xf95922fa;
      uVar12 = (uVar12 >> 5 & 7 | uVar12 << 3) + 0xe3ffeaf6;
      pcStack_14220[3] = ((byte)(uVar12 >> 4) & 0xf | (char)uVar12 * '\x10') ^ 0x39;
      uVar28 = (((ulong)(byte)pcStack_14220[1] ^ 0x444b1757c906e8f2) << 0x11 | 0x8896) +
               0x9e3779b97f4a7c15;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar12 = (uint)(byte)pcStack_14220[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 5 & 7 | uVar12 << 3) -
               (((uint)(uVar28 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_14220[4] = ((byte)(uVar12 >> 4) & 0xf | (char)uVar12 * '\x10') ^ (byte)uVar22;
      *pcStack_14220 = '\0';
    }
    pcStack_14220 = pcStack_14220 + 3;
    uVar14 = func_0x0011ab24(&pcStack_14220);
    uVar28 = _strlen();
    if ((uVar24 == uVar28) && (iVar11 = _memcmp(pbVar21,uVar14,uVar24), iVar11 == 0))
    goto LAB_00116ae0;
    pbVar21 = (byte *)(*pcRam000000000206e0a0)();
    if ((*pbVar21 & 1) == 0) {
      func_0x019c9af4();
    }
    pcStack_14228 = (char *)(*pcRam000000000206e088)();
    if (*pcStack_14228 == '\x01') {
      uVar12 = (byte)pcStack_14228[1] ^ 0x42fc84b7;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) + 0x80428686;
      pcStack_14228[7] = ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') + 0x11 ^ 0x74;
/* unlicensed copy if this notice is missing - github.com/pengussy */
      uVar24 = (((ulong)(byte)pcStack_14228[1] ^ 0x2307585f04f76a09) << 0x11 | 0x460e) +
               0x9e3779b97f4a7c15;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14228[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_14228[8] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14228[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14228[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_14228[9] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14228[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14228[4] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_14228[10] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14228[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14228[5] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_14228[0xb] =
/* wm:no support for modified copies */
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14228[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar28 = uVar24 ^ uVar24 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14228[6] ^ (uint)uVar28 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar28 >> 0x17);
      pcStack_14228[0xc] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar28;
      *pcStack_14228 = '\0';
    }
    pcStack_14228 = pcStack_14228 + 7;
    uVar14 = func_0x0011ab24(&pcStack_14228);
    uVar28 = func_0x00016fc0(&pppppppuStack_141c8,uVar14);
    uVar24 = uStack_14190;
    pbVar21 = pbStack_14198;
    if ((uVar28 & 1) == 0) {
      pbVar17 = (byte *)(*pcRam000000000206e0d0)();
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      if ((*pbVar17 & 1) == 0) {
        func_0x019c9b30();
      }
      pcStack_14230 = (char *)(*pcRam000000000206e0b8)();
      if (*pcStack_14230 == '\x01') {
        uVar12 = (byte)pcStack_14230[1] ^ 0xda143d10;
        uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) + 0x311da5b5 ^ 0x4eb3b9;
        pcStack_14230[3] = ((byte)(uVar12 >> 2) & 0x3f | (byte)(uVar12 << 6)) + 0x2d;
        uVar28 = (((ulong)(byte)pcStack_14230[1] ^ 0x128728dabd73d8b2) << 0x11 | 0x250e) +
                 0x9e3779b97f4a7c15;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14230[2] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_14230[4] = ((byte)(uVar12 >> 2) & 0x3f | (byte)(uVar12 << 6)) - (char)uVar22;
        *pcStack_14230 = '\0';
      }
      pcStack_14230 = pcStack_14230 + 3;
      uVar14 = func_0x0011ab24(&pcStack_14230);
      uVar28 = _strlen();
      if ((uVar24 == uVar28) && (iVar11 = _memcmp(pbVar21,uVar14,uVar24), iVar11 == 0))
/* WM - keep the notice, keep the source honest */
      goto LAB_00116ad4;
      bVar8 = false;
      uVar9 = 0;
    }
    else {
LAB_00116ad4:
      uVar9 = 0;
      bVar8 = true;
    }
  }
  else {
    if (uVar24 != (long)(char)uStack_141b8._7_1_) goto LAB_001166e4;
    pppppppuVar18 = &pppppppuStack_141c8;
LAB_001166d8:
    iVar11 = _memcmp(pppppppuVar18,uVar14);
    if (iVar11 != 0) goto LAB_001166e4;
LAB_00116ae0:
/* more drops soon - github.com/pengussy */
    bVar8 = true;
    uVar9 = 1;
  }
  pbVar21 = (byte *)(*pcRam000000000206e100)();
  if ((*pbVar21 & 1) == 0) {
    func_0x019c9b6c();
  }
  pcStack_14238 = (char *)(*pcRam000000000206e0e8)();
  if (*pcStack_14238 == '\x01') {
    uVar12 = (byte)pcStack_14238[1] ^ 0x79d90e48;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) + 0x77e462f4 ^ 0x726207;
    pcStack_14238[8] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) + 0x75;
    uVar24 = (((ulong)(byte)pcStack_14238[1] ^ 0xba926eebc613ce3b) << 0x11 | 0x17524) +
             0x9e3779b97f4a7c15;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14238[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar28 >> 0x29) | 1);
    pcStack_14238[9] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14238[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14238[3] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar28 >> 0x29) | 1);
    pcStack_14238[10] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14238[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14238[4] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar28 >> 0x29) | 1);
    pcStack_14238[0xb] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14238[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
// origin: github.com/pengussy
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14238[5] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar28 >> 0x29) | 1);
    pcStack_14238[0xc] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14238[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar28 ^ uVar28 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14238[6] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar28 >> 0x29) | 1);
    pcStack_14238[0xd] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14238[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar28 = uVar24 ^ uVar24 >> 0x21;
    uVar12 = (uint)(byte)pcStack_14238[7] ^ (uint)uVar28 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar28 >> 0x17) ^ ((uint)(uVar24 >> 0x29) | 1);
    pcStack_14238[0xe] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar28;
    *pcStack_14238 = '\0';
  }
  pcStack_14238 = pcStack_14238 + 8;
// WM - proprietary - see LICENSE - do not sell
  uVar14 = func_0x0011ab24(&pcStack_14238);
  uVar24 = _strlen();
  if ((long)(char)uStack_141a0._7_1_ < 0) {
    if (uVar24 == uStack_141a8) {
      if (uVar24 == 0xffffffffffffffff) {
        func_0x0001c430();
        goto LAB_0011812c;
      }
      pppppppuVar18 = pppppppuStack_141b0;
      goto LAB_00116f6c;
    }
LAB_00116f78:
    pbVar21 = (byte *)(*pcRam000000000206e130)();
    if ((*pbVar21 & 1) == 0) {
      func_0x019c9ba8();
    }
    pcStack_14240 = (char *)(*pcRam000000000206e118)();
    if (*pcStack_14240 == '\x01') {
      lVar15 = 0;
      uVar24 = 0xae3ebfac5c7de361;
      do {
        uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
// do not claim this as your own
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14240[lVar15 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) -
                 (((uint)(uVar28 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_14240[lVar15 + 0xd] =
             ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') ^ (byte)uVar22;
        uVar24 = lVar15 + -0x61c8864680b583eb +
                 (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14240[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0xc);
      *pcStack_14240 = '\0';
    }
    pcStack_14240 = pcStack_14240 + 0xd;
    uVar14 = func_0x0011ab24(&pcStack_14240);
    iVar11 = func_0x00016fc0(&pppppppuStack_141b0,uVar14);
    if (iVar11 != 0) {
      if (bVar8) {
        uRam0000000002097052 = uVar9;
      }
      goto LAB_00117c60;
    }
    pbVar21 = (byte *)(*pcRam000000000206e160)();
    if ((*pbVar21 & 1) == 0) {
      func_0x019c9be4();
    }
    pcStack_14248 = (char *)(*pcRam000000000206e148)();
    if (*pcStack_14248 == '\x01') {
      lVar15 = 0;
      uVar24 = 0x7a59236f8a1d6e51;
      do {
        uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14248[lVar15 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
        pcStack_14248[lVar15 + 0x10] =
             ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar28 >> 0x29) | 1) ^
             (byte)uVar22;
/*  unlicensed copy if this notice is missing  */
        uVar24 = lVar15 + -0x61c8864680b583eb +
                 (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14248[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0xf);
      *pcStack_14248 = '\0';
    }
    pcStack_14248 = pcStack_14248 + 0x10;
    uVar14 = func_0x0011ab24(&pcStack_14248);
    uVar24 = func_0x00016fc0(&pppppppuStack_141b0,uVar14);
    if ((uVar24 & 1) != 0) {
LAB_00117298:
      if (bVar8) {
        uRam0000000002097051 = uVar9;
      }
      goto LAB_00117c60;
    }
    pbVar21 = (byte *)(*pcRam000000000206e190)();
    if ((*pbVar21 & 1) == 0) {
      func_0x019c9c20();
    }
    pcStack_14250 = (char *)(*pcRam000000000206e178)();
    if (*pcStack_14250 == '\x01') {
      lVar15 = 0;
      uVar24 = 0x4bb60e0c1629719c;
      do {
        uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14250[lVar15 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17) ^
                 ((uint)(uVar28 >> 0x29) | 1);
        pcStack_14250[lVar15 + 0x11] =
             ((byte)(uVar12 >> 7) & 1 | (byte)(uVar12 << 1)) - (char)uVar22;
        uVar24 = lVar15 + -0x61c8864680b583eb +
                 (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14250[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x10);
      *pcStack_14250 = '\0';
    }
    pcStack_14250 = pcStack_14250 + 0x11;
    uVar14 = func_0x0011ab24(&pcStack_14250);
    iVar11 = func_0x00016fc0(&pppppppuStack_141b0,uVar14);
    if (iVar11 != 0) goto LAB_00117298;
    pbVar21 = (byte *)(*pcRam000000000206e1c0)();
    if ((*pbVar21 & 1) == 0) {
      func_0x019c9c5c();
    }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    pcStack_14258 = (char *)(*pcRam000000000206e1a8)();
    if (*pcStack_14258 == '\x01') {
      uVar12 = (byte)pcStack_14258[1] ^ 0xae6e8c4c;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) + 0x451c875d;
      pcStack_14258[10] = ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') + 0x47 ^ 0x8f;
      uVar24 = (((ulong)(byte)pcStack_14258[1] ^ 0x16247cf6082b18e0) << 0x11 | 0x2c48) +
               0x9e3779b97f4a7c15;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_14258[0xb] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14258[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_14258[0xc] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14258[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[4] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_14258[0xd] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14258[4]) << 0x11) + 0x9e3779b97f4a7c18;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[5] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_14258[0xe] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14258[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[6] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_14258[0xf] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14258[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[7] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_14258[0x10] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14258[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar28 ^ uVar28 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[8] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_14258[0x11] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar28 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14258[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar28 = uVar24 ^ uVar24 >> 0x21;
      uVar12 = (uint)(byte)pcStack_14258[9] ^ (uint)uVar28 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar28 >> 0x17);
      pcStack_14258[0x12] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar28;
      *pcStack_14258 = '\0';
    }
    pcStack_14258 = pcStack_14258 + 10;
    uVar14 = func_0x0011ab24(&pcStack_14258);
    uVar24 = func_0x00016fc0(&pppppppuStack_141b0,uVar14);
    if ((uVar24 & 1) != 0) {
LAB_00117858:
      pbVar21 = (byte *)(*pcRam000000000206e220)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019c9e74();
      }
      pcStack_14278 = (char *)(*pcRam000000000206e208)();
      if (*pcStack_14278 == '\x01') {
        uVar12 = (byte)pcStack_14278[1] ^ 0x924ab770;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) + 0xe8715f56;
        pcStack_14278[7] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ 0xb3;
        uVar24 = (((ulong)(byte)pcStack_14278[1] ^ 0xfb4732eb687cff17) << 0x11 | 0x1f68e) +
                 0x9e3779b97f4a7c15;
        uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14278[2] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar28 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_14278[8] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14278[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14278[3] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar28 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_14278[9] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14278[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14278[4] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar28 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        pcStack_14278[10] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14278[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar28 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
        uVar28 = (uVar28 ^ uVar28 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar28 ^ uVar28 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14278[5] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar28 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_14278[0xb] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar24 = (uVar24 >> 0x2f | (uVar24 ^ (byte)pcStack_14278[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar28 = uVar24 ^ uVar24 >> 0x21;
        uVar12 = (uint)(byte)pcStack_14278[6] ^ (uint)uVar28 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar28 >> 0x17));
        pcStack_14278[0xc] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar28;
        *pcStack_14278 = '\0';
      }
      pcStack_14278 = pcStack_14278 + 7;
      uVar14 = func_0x0011ab24(&pcStack_14278);
      uVar28 = func_0x00016fc0(&pppppppuStack_141c8,uVar14);
      uVar24 = uStack_14190;
      pbVar21 = pbStack_14198;
      if ((uVar28 & 1) == 0) {
        pbVar17 = (byte *)(*pcRam000000000206e250)();
        if ((*pbVar17 & 1) == 0) {
          func_0x019c9eb0();
        }
        pcStack_14280 = (char *)(*pcRam000000000206e238)();
        if (*pcStack_14280 == '\x01') {
          bVar5 = pcStack_14280[1];
          cVar10 = func_0x0016c010((ulong)bVar5,0x8c733686d3daccda);
          pcStack_14280[3] = cVar10;
          cVar10 = func_0x0016c010(pcStack_14280[2],
                                   (((ulong)bVar5 ^ 0x8c733686d3daccda) << 0x11 | 0x118e6) +
                                   0x9e3779b97f4a7c15);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          pcStack_14280[4] = cVar10;
          *pcStack_14280 = '\0';
        }
        pcStack_14280 = pcStack_14280 + 3;
        uVar14 = func_0x0011ab24(&pcStack_14280);
        uVar28 = _strlen();
        if ((uVar24 != uVar28) || (iVar11 = _memcmp(pbVar21,uVar14,uVar24), iVar11 != 0)) {
          func_0x001182b0(apppppppcStack_141e0,&pbStack_14198);
          pppppppcStack_141e8 = (char *******)0x0;
          puVar19 = (undefined4 *)___error();
          *puVar19 = 0;
          pppppppcVar4 = apppppppcStack_141e0[0];
          if (-1 < (char)bStack_141c9) {
            pppppppcVar4 = (char *******)apppppppcStack_141e0;
          }
          dVar29 = (double)_strtod(pppppppcVar4,&pppppppcStack_141e8);
          uVar12 = (uint)(char)bStack_141c9;
/*  no support for modified copies  */
          pppppppcVar4 = apppppppcStack_141e0[0];
          if (-1 < (char)bStack_141c9) {
            pppppppcVar4 = (char *******)apppppppcStack_141e0;
          }
          if (pppppppcStack_141e8 != pppppppcVar4) {
            if (*(char *)pppppppcStack_141e8 == '\0') {
              piVar20 = (int *)___error();
              if ((((*piVar20 != 0x22) && ((ulong)ABS(dVar29) < 0x7ff0000000000000)) &&
                  (0.0 < dVar29)) && (dVar29 <= 10000.0)) {
                uRam0000000002097054 = 1;
                dRam0000000001f26d38 = dVar29;
                if ((plRam0000000001f268e0 != (long *)0x0) && (*plRam0000000001f268e0 != 0)) {
                  *(double *)(lRam0000000001f265d0 + *plRam0000000001f268e0) = 1.0 / dVar29;
                }
              }
            }
            uVar12 = (uint)bStack_141c9;
          }
          if ((uVar12 >> 7 & 1) != 0) {
            __ZdlPv(apppppppcStack_141e0[0]);
          }
          goto LAB_00117c60;
        }
      }
      uRam0000000002097054 = 0;
      goto LAB_00117c60;
/*  more drops soon - github.com/pengussy  */
    }
    pbVar21 = (byte *)(*pcRam000000000206e1f0)();
    if ((*pbVar21 & 1) == 0) {
      func_0x019c9c98();
    }
    pcStack_14260 = (char *)(*pcRam000000000206e1d8)();
    if (*pcStack_14260 == '\x01') {
      bVar5 = pcStack_14260[1];
      cVar10 = func_0x00189f94((ulong)bVar5,0x851c4abbddaa677a);
      pcStack_14260[0xb] = cVar10;
      uVar24 = (((ulong)bVar5 ^ 0x851c4abbddaa677a) << 0x11 | 0x10a38) + 0x9e3779b97f4a7c15;
      bVar5 = pcStack_14260[2];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0xc] = cVar10;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c16;
      bVar5 = pcStack_14260[3];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0xd] = cVar10;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c17;
/* wm:chat: discord.gg/sdkhDjTex */
      bVar5 = pcStack_14260[4];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0xe] = cVar10;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c18;
      bVar5 = pcStack_14260[5];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0xf] = cVar10;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c19;
      bVar5 = pcStack_14260[6];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0x10] = cVar10;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c1a;
      bVar5 = pcStack_14260[7];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0x11] = cVar10;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c1b;
      bVar5 = pcStack_14260[8];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0x12] = cVar10;
      uVar24 = (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c1c;
      bVar5 = pcStack_14260[9];
      cVar10 = func_0x00189f94((ulong)bVar5,uVar24);
      pcStack_14260[0x13] = cVar10;
// WM - chat: discord.gg/sdkhDjTex
      cVar10 = func_0x00189f94(pcStack_14260[10],
                               (uVar24 >> 0x2f | (uVar24 ^ bVar5) << 0x11) + 0x9e3779b97f4a7c1d);
      pcStack_14260[0x14] = cVar10;
      *pcStack_14260 = '\0';
    }
    pcStack_14260 = pcStack_14260 + 0xb;
    uVar14 = func_0x0011ab24(&pcStack_14260);
    iVar11 = func_0x00016fc0(&pppppppuStack_141b0,uVar14);
    if (iVar11 != 0) goto LAB_00117858;
    if ((long)uStack_141b8 < 0) {
      __ZdlPv(pppppppuStack_141c8);
    }
    if ((long)uStack_141a0 < 0) {
      __ZdlPv(pppppppuStack_141b0);
    }
LAB_00117cc0:
    if (((bRam000000000208ed10 & 1) == 0) &&
       (uVar24 = func_0x019c9cd4(&pppppppuStack_141b0), (uVar24 & 1) == 0)) {
      lStack_14268 = (long)pppppppuStack_141b0 + 0x11;
      uVar14 = func_0x0011ab24(&lStack_14268);
      func_0x0000e100(0x208fcd8,uVar14);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                    ,0x208fcd8,0);
      ___cxa_guard_release(0x208ed10);
/* donate: donate/README.md */
    }
    uVar24 = uRam000000000208fce0;
    pcVar3 = pcRam000000000208fcd8;
    if (-1 < (char)bRam000000000208fcef) {
      pcVar3 = (char *)0x208fcd8;
      uVar24 = (ulong)bRam000000000208fcef;
    }
    pbVar21 = pbStack_14188;
    if (uVar24 == 0) {
LAB_00117d64:
      if (pbVar21 != pbStack_14180) {
        pbVar21 = pbVar21 + uVar24;
        lVar15 = (long)pbStack_14180 - (long)pbVar21;
        if (lVar15 == 0) {
          pbVar21 = (byte *)(*pcRam000000000206e2b0)();
          if ((*pbVar21 & 1) == 0) {
            func_0x019c9e38();
          }
          pcStack_14270 = (char *)(*pcRam000000000206e298)();
          if (*pcStack_14270 == '\x01') {
            uVar12 = (((byte)pcStack_14270[1] ^ 0xf3b7fa4f) >> 2 & 0x3f |
                     ((byte)pcStack_14270[1] ^ 0xf3b7fa4f) << 6) + 0x6dfbd56b;
            pcStack_14270[2] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ 0x8c;
            *pcStack_14270 = '\0';
          }
          pcStack_14270 = pcStack_14270 + 2;
          pbVar21 = (byte *)func_0x0011ab24(&pcStack_14270);
        }
        func_0x0003c73c(&pppppppuStack_141b0,pbVar21,lVar15);
        uStack_141f8 = uStack_141a8;
        pppppppuStack_14200 = pppppppuStack_141b0;
        uStack_141f0 = uStack_141a0;
        uStack_141a8 = 0;
        uStack_141a0 = 0;
        pppppppuStack_141b0 = (undefined8 *******)0x0;
        func_0x001d8420(&pppppppuStack_14200);
// WM - origin: github.com/pengussy
        if ((long)uStack_141f0 < 0) {
          __ZdlPv(pppppppuStack_14200);
        }
        if ((long)uStack_141a0 < 0) {
          __ZdlPv(pppppppuStack_141b0);
        }
      }
    }
    else if (((long)uVar24 <= (long)pbStack_14180 - (long)pbStack_14188) &&
            (pbStack_14188 != pbStack_14180 + (1 - uVar24))) {
      do {
        if ((uint)*pbVar21 == (int)*pcVar3) {
          if (uVar24 == 1) goto LAB_00117d64;
          uVar28 = 1;
          while ((uint)pbVar21[uVar28] == (int)pcVar3[uVar28]) {
            uVar28 = uVar28 + 1;
            if (uVar24 == uVar28) goto LAB_00117d64;
          }
        }
        pbVar21 = pbVar21 + 1;
      } while (pbVar21 != pbStack_14180 + (1 - uVar24));
    }
  }
  else {
    if (uVar24 != (long)(char)uStack_141a0._7_1_) goto LAB_00116f78;
    pppppppuVar18 = &pppppppuStack_141b0;
LAB_00116f6c:
    iVar11 = _memcmp(pppppppuVar18,uVar14);
    if (iVar11 != 0) goto LAB_00116f78;
    if (bVar8) {
      func_0x000d0238(uVar9);
    }
LAB_00117c60:
    if ((long)uStack_141b8 < 0) {
/* no support for modified copies - github.com/pengussy */
      __ZdlPv(pppppppuStack_141c8);
    }
    if ((long)uStack_141a0 < 0) {
      __ZdlPv(pppppppuStack_141b0);
    }
  }
joined_r0x00117c74:
  if (pbStack_14188 != (byte *)0x0) {
    __ZdlPv(pbStack_14188);
  }
LAB_00117ee0:
  if (lStack_14170 != 0) {
    lStack_14168 = lStack_14170;
    __ZdlPv();
  }
LAB_00117eec:
  if (-1 < iStack_14154) {
    _close();
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_10150) {
    return;
  }
  ___stack_chk_fail();
LAB_00118028:
  func_0x0000aa50();
LAB_0011812c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x118130);
  (*pcVar7)();
}

