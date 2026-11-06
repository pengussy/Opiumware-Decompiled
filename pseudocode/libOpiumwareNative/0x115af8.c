/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x115af8:4a8cb5525b
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115af8(void)

{
  ulong uVar1;
  char *pcVar2;
  char *******pppppppcVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *******pppppppuVar17;
  undefined4 *puVar18;
/* more drops soon - github.com/pengussy */
  int *piVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong extraout_x10;
  long extraout_x11;
  ulong uVar24;
  byte *pbVar26;
  byte *pbVar25;
  long extraout_x15;
  ulong uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  char *pcStack_41b0;
  char *pcStack_41a8;
  char *pcStack_41a0;
  long lStack_4198;
  char *pcStack_4190;
  char *pcStack_4188;
  char *pcStack_4180;
  char *pcStack_4178;
  char *pcStack_4170;
  char *pcStack_4168;
  char *pcStack_4160;
  char *pcStack_4158;
/* do not claim this as your own - github.com/pengussy */
  char *pcStack_4150;
  char *pcStack_4148;
  char *pcStack_4140;
  long lStack_4138;
  undefined8 *******pppppppuStack_4130;
  ulong uStack_4128;
  ulong uStack_4120;
  char *******pppppppcStack_4118;
  char *******apppppppcStack_4110 [2];
  byte bStack_40f9;
  undefined8 *******pppppppuStack_40f8;
  ulong uStack_40f0;
  undefined8 uStack_40e8;
  undefined8 *******pppppppuStack_40e0;
  ulong uStack_40d8;
  undefined8 uStack_40d0;
  byte *pbStack_40c8;
  ulong uStack_40c0;
  byte *pbStack_40b8;
  byte *pbStack_40b0;
  long lStack_40a0;
  long lStack_4098;
  long lStack_4090;
  int iStack_4084;
  undefined8 uStack_4080;
  undefined8 uStack_4078;
  long lStack_80;
  
  uVar13 = (*(code *)PTR____chkstk_darwin_01f201f8)();
  lStack_80 = *(long *)PTR____stack_chk_guard_01f20200;
  iStack_4084 = (int)uVar13;
  uStack_4078 = _UNK_01ad8288;
  uStack_4080 = _UNK_01ad8280;
  iVar11 = _setsockopt(uVar13,0xffff,"k/Versions/A/QuartzCore",&uStack_4080,0x10);
  if (iVar11 == 0) {
    lStack_40a0 = __Znwm(0x2000);
    lStack_4090 = lStack_40a0 + 0x2000;
/* wm:chat: discord.gg/sdkhDjTex */
    lStack_4098 = lStack_40a0;
    _bzero(&uStack_4080,0x4000);
    while (lVar14 = _read(uVar13,&uStack_4080,0x4000), 0 < lVar14) {
      if (0x400000 < (ulong)((lVar14 + lStack_4098) - lStack_40a0)) goto LAB_00117ee0;
      func_0x0012fc58(&lStack_40a0,lStack_4098,&uStack_4080,(long)&uStack_4080 + lVar14);
    }
    if (lStack_40a0 != lStack_4098) {
      func_0x001158f8(&pbStack_40b8,&lStack_40a0);
      pbVar16 = pbStack_40b0;
      pbVar20 = pbStack_40b8;
      lVar14 = (long)pbStack_40b8 - (long)pbStack_40b0;
      if (lVar14 != 0) {
        if (((bRam000000000208ed08 & 1) == 0) &&
           (uVar21 = func_0x019c98d0(&pppppppuStack_40e0), (uVar21 & 1) == 0)) {
          lStack_4138 = (long)pppppppuStack_40e0 + 0x12;
          uVar13 = func_0x0011ab24(&lStack_4138);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          func_0x0000e100(0x208fcc0,uVar13);
          ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                        ,0x208fcc0,0);
          ___cxa_guard_release(0x208ed08);
        }
        uVar27 = (long)pbVar16 - (long)pbVar20;
        uVar21 = uRam000000000208fcc8;
        pcVar2 = pcRam000000000208fcc0;
        if (-1 < (char)bRam000000000208fcd7) {
          pcVar2 = (char *)0x208fcc0;
          uVar21 = (ulong)bRam000000000208fcd7;
        }
        if (uVar21 == 0) {
          lVar23 = 0;
LAB_00115c84:
          puVar6 = PTR___DefaultRuneLocale_01f201e8;
          uVar21 = uVar21 + lVar23;
          if (uVar27 < uVar21) {
            func_0x0001c444("string_view::substr");
            goto LAB_0011812c;
          }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          for (; uVar27 != uVar21; uVar21 = uVar21 + 1) {
            bVar4 = pbVar20[uVar21];
            if ((long)(char)bVar4 < 0) {
              uVar12 = ___maskrune(bVar4,0x4000);
            }
            else {
              uVar12 = *(uint *)(puVar6 + (long)(char)bVar4 * 4 + 0x3c) & 0x4000;
            }
            if (uVar12 == 0) {
              lVar14 = lVar14 + uVar21;
              uVar27 = uVar27 - uVar21;
              goto LAB_0011609c;
            }
          }
          uVar27 = 0;
          goto LAB_00115cd8;
        }
        if ((long)uVar21 <= (long)uVar27) {
          cVar10 = *pcVar2;
          pbVar15 = pbVar20;
          uVar22 = uVar27;
          while (pbVar15 = (byte *)_memchr(pbVar15,(long)cVar10,(uVar22 - uVar21) + 1),
                pbVar15 != (byte *)0x0) {
            iVar11 = _memcmp(pbVar15,pcVar2,uVar21);
            if (iVar11 == 0) {
              if ((pbVar15 != pbVar16) && (lVar23 = (long)pbVar15 - (long)pbVar20, lVar23 != -1))
              goto LAB_00115c84;
              break;
            }
            pbVar15 = pbVar15 + 1;
            uVar22 = (long)pbVar16 - (long)pbVar15;
            if ((long)uVar22 < (long)uVar21) break;
          }
        }
        goto LAB_00117cc0;
      }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      goto joined_r0x00117c74;
    }
    goto LAB_00117ee0;
  }
  goto LAB_00117eec;
LAB_00116004:
  if ((pbVar15 == pbVar20 + uVar27) ||
     (uVar21 = (long)pbVar15 - (long)pbVar20, uVar21 == 0xffffffffffffffff)) goto LAB_00116084;
  if (uVar27 <= uVar21) {
    func_0x0001c444("string_view::substr");
    goto LAB_0011812c;
  }
  pbStack_40c8 = pbVar20 + uVar21 + 1;
  for (uStack_40c0 = uVar27 - (uVar21 + 1); uStack_40c0 != 0; uStack_40c0 = uStack_40c0 - 1) {
    bVar4 = *pbStack_40c8;
    if ((long)(char)bVar4 < 0) {
      uVar12 = ___maskrune(bVar4,0x4000);
    }
    else {
      uVar12 = *(uint *)(puVar6 + (long)(char)bVar4 * 4 + 0x3c) & 0x4000;
    }
    if (uVar12 == 0) goto joined_r0x001160f0;
    pbStack_40c8 = pbStack_40c8 + 1;
  }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  goto LAB_00116138;
joined_r0x001160f0:
  if (uStack_40c0 == 0) goto LAB_00116138;
  bVar4 = pbStack_40c8[uStack_40c0 - 1];
  if ((long)(char)bVar4 < 0) {
    uVar12 = ___maskrune(bVar4,0x4000);
  }
  else {
    uVar12 = *(uint *)(puVar6 + (long)(char)bVar4 * 4 + 0x3c) & 0x4000;
  }
  if (uVar12 == 0) goto LAB_00116138;
  uStack_40c0 = uStack_40c0 - 1;
  goto joined_r0x001160f0;
  while( true ) {
    uVar27 = uVar27 - 1;
    bVar8 = lVar14 == -1;
    lVar14 = lVar14 + 1;
    if (bVar8) break;
LAB_0011609c:
    pbVar16 = pbVar16 + -1;
    bVar4 = *pbVar16;
    if ((long)(char)bVar4 < 0) {
      uVar12 = ___maskrune(bVar4,0x4000);
    }
    else {
      uVar12 = *(uint *)(puVar6 + (long)(char)bVar4 * 4 + 0x3c) & 0x4000;
    }
    if (uVar12 == 0) goto LAB_00115cd8;
  }
  uVar27 = 0;
LAB_00115cd8:
  pbVar20 = pbVar20 + uVar21;
  pbVar16 = (byte *)(*pcRam000000000206e010)();
/* WM - keep the notice, keep the source honest */
  if ((*pbVar16 & 1) == 0) {
    func_0x019c9a40();
  }
  lVar23 = -0x3b314601e57a13ad;
  auVar29 = (*pcRam000000000206dff8)(0x206dff8,0xff51afd7ed558ccd);
  lVar14 = auVar29._8_8_;
  pcStack_4140 = auVar29._0_8_;
  if (*pcStack_4140 == '\x01') {
    uVar21 = (extraout_x10 ^ 0x34f3e188c3cddd7 ^ (extraout_x10 ^ 0x34f3e188c3cddd7) >> 0x21) *
             lVar14;
    uVar21 = uVar21 ^ uVar21 >> 0x21;
    uVar22 = uVar21 * lVar23;
    uVar21 = uVar21 * extraout_x11;
    uVar21 = (uVar21 ^ uVar21 >> 0x21) * lVar23;
    uVar24 = uVar21 ^ uVar21 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4140[1] ^ (uint)uVar24 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar24 >> 0x17);
    pcStack_4140[6] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar21 >> 0x29) | 1) ^
         (byte)uVar24;
    uVar21 = (uVar22 >> 0x2f | ((ulong)(byte)pcStack_4140[1] ^ uVar22 >> 0x21 ^ uVar22) << 0x11) +
             extraout_x15;
    uVar22 = (uVar21 ^ uVar21 >> 0x21) * lVar14;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * lVar23;
    uVar24 = uVar22 ^ uVar22 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4140[2] ^ (uint)uVar24 ^ 0xffffffc3;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar24 >> 0x17);
    pcStack_4140[7] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar22 >> 0x29) | 1) ^
         (byte)uVar24;
    uVar21 = extraout_x15 + (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4140[2]) << 0x11) + 1;
    uVar22 = (uVar21 ^ uVar21 >> 0x21) * lVar14;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * lVar23;
    uVar24 = uVar22 ^ uVar22 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4140[3] ^ (uint)uVar24 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar24 >> 0x17);
    pcStack_4140[8] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar22 >> 0x29) | 1) ^
         (byte)uVar24;
    uVar21 = extraout_x15 + (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4140[3]) << 0x11) + 2;
    uVar22 = (uVar21 ^ uVar21 >> 0x21) * lVar14;
    uVar22 = (uVar22 ^ uVar22 >> 0x21) * lVar23;
    uVar24 = uVar22 ^ uVar22 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4140[4] ^ (uint)uVar24 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar24 >> 0x17);
    pcStack_4140[9] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar22 >> 0x29) | 1) ^
/* no support for modified copies */
         (byte)uVar24;
    uVar21 = extraout_x15 + (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4140[4]) << 0x11) + 3;
    uVar21 = (uVar21 ^ uVar21 >> 0x21) * lVar14;
    uVar21 = (uVar21 ^ uVar21 >> 0x21) * lVar23;
    uVar22 = uVar21 ^ uVar21 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4140[5] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
    pcStack_4140[10] =
         ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar21 >> 0x29) | 1) ^
         (byte)uVar22;
    *pcStack_4140 = '\0';
  }
  pcStack_4140 = pcStack_4140 + 6;
  pbVar16 = (byte *)func_0x0011ab24(&pcStack_4140);
  uVar21 = _strlen();
  puVar6 = PTR___DefaultRuneLocale_01f201e8;
  if ((uVar27 != 0) && (uVar21 != 0)) {
    pbVar15 = pbVar20;
    do {
      bVar4 = *pbVar15;
      pbVar25 = pbVar16;
      if ((uVar21 & 3) != 0) {
        pbVar26 = pbVar16;
        uVar22 = uVar21 & 3;
        do {
          pbVar25 = pbVar26 + 1;
          if (bVar4 == *pbVar26) goto LAB_00116004;
          uVar22 = uVar22 - 1;
          pbVar26 = pbVar25;
        } while (uVar22 != 0);
      }
      if (2 < uVar21 - 1) {
        do {
          if ((((bVar4 == *pbVar25) || (bVar4 == pbVar25[1])) || (bVar4 == pbVar25[2])) ||
/* wm:do not claim this as your own */
             (bVar4 == pbVar25[3])) goto LAB_00116004;
          pbVar25 = pbVar25 + 4;
        } while (pbVar25 != pbVar16 + uVar21);
      }
      pbVar15 = pbVar15 + 1;
    } while (pbVar15 != pbVar20 + uVar27);
  }
LAB_00116084:
  pbStack_40c8 = (byte *)0x0;
  uStack_40c0 = 0;
  uVar21 = uVar27;
LAB_00116138:
  pppppppuStack_40e0 = (undefined8 *******)0x0;
  uStack_40d8 = 0;
  uStack_40d0 = 0;
  if (0x7ffffffffffffff6 < uVar21) {
    func_0x0000aa50();
    goto LAB_0011812c;
  }
  uVar27 = uStack_40c0;
  if (uVar21 < 0x17) goto joined_r0x00116194;
  uVar27 = (uVar21 & 0x7ffffffffffffff8) + 8;
  uVar22 = 0x19;
  if (uVar27 != 0x18) {
/* wm:donate: donate/README.md */
    uVar22 = uVar27;
  }
  pppppppuVar17 = (undefined8 *******)__Znwm(uVar22);
  uStack_40d0 = uVar22 | 0x8000000000000000;
  *(undefined1 *)pppppppuVar17 = pppppppuStack_40e0._0_1_;
  uStack_40d8 = 0;
  pppppppuStack_40e0 = pppppppuVar17;
  do {
    uVar9 = ___tolower(*pbVar20);
    uVar27 = uStack_40d0;
    if ((long)uStack_40d0 < 0) {
      uVar22 = uStack_40d0 & 0x7fffffffffffffff;
      uVar24 = uVar22 - 1;
      if (uStack_40d8 == uVar24) {
        if (uVar22 < 0x7ffffffffffffff7) {
          if (uVar24 < 0x3ffffffffffffff4) goto LAB_00116278;
          uVar22 = 0x7ffffffffffffff8;
          pppppppuVar17 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar5 = pppppppuStack_40e0;
          goto joined_r0x001162dc;
// thanks for reading - discord.gg/sdkhDjTex
        }
        goto LAB_00118028;
      }
LAB_001162ec:
      uVar27 = uStack_40d8;
      pppppppuVar17 = pppppppuStack_40e0;
      uStack_40d8 = uStack_40d8 + 1;
    }
    else {
      if (uStack_40d0._7_1_ == 0x16) {
        uVar22 = 0x17;
        uVar24 = 0x16;
LAB_00116278:
        if (uVar22 <= uVar24 * 2) {
          uVar22 = uVar24 * 2;
        }
        uVar1 = (uVar22 & 0x7ffffffffffffff8) + 8;
        uVar22 = 0x19;
        if (uVar1 != 0x18) {
          uVar22 = uVar1;
        }
        pppppppuVar17 = (undefined8 *******)__Znwm(uVar22);
        pppppppuVar5 = pppppppuStack_40e0;
        if (-1 < (long)uVar27) {
          pppppppuVar5 = &pppppppuStack_40e0;
        }
joined_r0x001162dc:
        if (uVar24 != 0) {
          _memmove(pppppppuVar17,pppppppuVar5,uVar24);
        }
        if ((long)uVar27 < 0) {
          __ZdlPv(pppppppuStack_40e0);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        }
        uStack_40d0 = uVar22 | 0x8000000000000000;
        uStack_40d8 = uVar24;
        pppppppuStack_40e0 = pppppppuVar17;
        goto LAB_001162ec;
      }
      uVar27 = (ulong)uStack_40d0._7_1_;
      uStack_40d0 = CONCAT17(uStack_40d0._7_1_ + 1,(undefined7)uStack_40d0) & 0x7fffffffffffffff;
      pppppppuVar17 = &pppppppuStack_40e0;
    }
    *(undefined1 *)((long)pppppppuVar17 + uVar27) = uVar9;
    ((undefined1 *)((long)pppppppuVar17 + uVar27))[1] = 0;
    pbVar20 = pbVar20 + 1;
    uVar21 = uVar21 - 1;
    uVar27 = uStack_40c0;
joined_r0x00116194:
    uStack_40c0 = uVar27;
  } while (uVar21 != 0);
  pppppppuStack_40f8 = (undefined8 *******)0x0;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  uStack_40f0 = 0;
  uStack_40e8 = 0;
  if (0x7ffffffffffffff6 < uVar27) {
    func_0x0000aa50();
    goto LAB_0011812c;
  }
  if (uVar27 < 0x17) {
    if (uVar27 != 0) goto LAB_001162fc;
  }
  else {
    uVar21 = (uVar27 & 0x7ffffffffffffff8) + 8;
    uVar22 = 0x19;
    if (uVar21 != 0x18) {
      uVar22 = uVar21;
    }
    pppppppuVar17 = (undefined8 *******)__Znwm(uVar22);
    uStack_40e8 = uVar22 | 0x8000000000000000;
    *(undefined1 *)pppppppuVar17 = pppppppuStack_40f8._0_1_;
    pppppppuStack_40f8 = pppppppuVar17;
// WM - if you paid for this, you were scammed
LAB_001162fc:
    uStack_40f0 = 0;
    pbVar20 = pbStack_40c8;
    do {
      uVar9 = ___tolower(*pbVar20);
      uVar21 = uStack_40e8;
      if ((long)uStack_40e8 < 0) {
        uVar22 = uStack_40e8 & 0x7fffffffffffffff;
        uVar24 = uVar22 - 1;
        if (uStack_40f0 == uVar24) {
          if (uVar22 < 0x7ffffffffffffff7) {
            if (uVar24 < 0x3ffffffffffffff4) goto LAB_00116398;
            uVar22 = 0x7ffffffffffffff8;
            pppppppuVar17 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
            pppppppuVar5 = pppppppuStack_40f8;
            goto joined_r0x001163f8;
          }
          func_0x0000aa50();
          goto LAB_0011812c;
        }
LAB_00116408:
        uVar21 = uStack_40f0;
        pppppppuVar17 = pppppppuStack_40f8;
        uStack_40f0 = uStack_40f0 + 1;
      }
      else {
        if (uStack_40e8._7_1_ == 0x16) {
          uVar24 = 0x16;
          uVar22 = 0x17;
// if you paid for this, you were scammed
LAB_00116398:
          if (uVar22 <= uVar24 * 2) {
            uVar22 = uVar24 * 2;
          }
          uVar1 = (uVar22 & 0x7ffffffffffffff8) + 8;
          uVar22 = 0x19;
          if (uVar1 != 0x18) {
            uVar22 = uVar1;
          }
          pppppppuVar17 = (undefined8 *******)__Znwm(uVar22);
          pppppppuVar5 = pppppppuStack_40f8;
          if (-1 < (long)uVar21) {
            pppppppuVar5 = &pppppppuStack_40f8;
          }
joined_r0x001163f8:
          if (uVar24 != 0) {
            _memmove(pppppppuVar17,pppppppuVar5,uVar24);
          }
          if ((long)uVar21 < 0) {
            __ZdlPv(pppppppuStack_40f8);
          }
          uStack_40e8 = uVar22 | 0x8000000000000000;
          uStack_40f0 = uVar24;
          pppppppuStack_40f8 = pppppppuVar17;
          goto LAB_00116408;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        }
        uVar21 = (ulong)uStack_40e8._7_1_;
        uStack_40e8 = CONCAT17(uStack_40e8._7_1_ + 1,(undefined7)uStack_40e8) & 0x7fffffffffffffff;
        pppppppuVar17 = &pppppppuStack_40f8;
      }
      *(undefined1 *)((long)pppppppuVar17 + uVar21) = uVar9;
      ((undefined1 *)((long)pppppppuVar17 + uVar21))[1] = 0;
      pbVar20 = pbVar20 + 1;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  pbVar20 = (byte *)(*pcRam000000000206e040)();
  if ((*pbVar20 & 1) == 0) {
    func_0x019c9a7c();
  }
  pcStack_4148 = (char *)(*pcRam000000000206e028)();
  if (*pcStack_4148 == '\x01') {
    uVar12 = (byte)pcStack_4148[1] ^ 0x8d0cd753;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) + 0xe541571b;
    pcStack_4148[6] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) + 0x51 ^ 0x90;
    uVar21 = (((ulong)(byte)pcStack_4148[1] ^ 0xef91cd0026199326) << 0x11 | 0x1df23) +
// WM - origin: github.com/pengussy
             0x9e3779b97f4a7c15;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4148[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
    pcStack_4148[7] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar27 >> 0x29) | 1) ^
         (byte)uVar22;
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4148[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4148[3] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
    pcStack_4148[8] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar27 >> 0x29) | 1) ^
// proprietary - see LICENSE - do not sell
         (byte)uVar22;
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4148[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4148[4] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
    pcStack_4148[9] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar27 >> 0x29) | 1) ^
         (byte)uVar22;
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4148[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
    uVar27 = uVar21 ^ uVar21 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4148[5] ^ (uint)uVar27 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar27 >> 0x17);
    pcStack_4148[10] =
         ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar21 >> 0x29) | 1) ^
         (byte)uVar27;
    *pcStack_4148 = '\0';
  }
  pcStack_4148 = pcStack_4148 + 6;
  uVar13 = func_0x0011ab24(&pcStack_4148);
  uVar21 = _strlen();
  if ((long)(char)uStack_40e8._7_1_ < 0) {
    if (uVar21 == uStack_40f0) {
      if (uVar21 == 0xffffffffffffffff) {
        func_0x0001c430();
        goto LAB_0011812c;
      }
      pppppppuVar17 = pppppppuStack_40f8;
// WM - chat: discord.gg/sdkhDjTex
      goto LAB_001166d8;
    }
LAB_001166e4:
    uVar21 = uStack_40c0;
    pbVar20 = pbStack_40c8;
    pbVar16 = (byte *)(*pcRam000000000206e070)();
    if ((*pbVar16 & 1) == 0) {
      func_0x019c9ab8();
    }
    pcStack_4150 = (char *)(*pcRam000000000206e058)();
    if (*pcStack_4150 == '\x01') {
      uVar12 = (byte)pcStack_4150[1] ^ 0xf95922fa;
      uVar12 = (uVar12 >> 5 & 7 | uVar12 << 3) + 0xe3ffeaf6;
      pcStack_4150[3] = ((byte)(uVar12 >> 4) & 0xf | (char)uVar12 * '\x10') ^ 0x39;
      uVar27 = (((ulong)(byte)pcStack_4150[1] ^ 0x444b1757c906e8f2) << 0x11 | 0x8896) +
               0x9e3779b97f4a7c15;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4150[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 5 & 7 | uVar12 << 3) -
               (((uint)(uVar27 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
      pcStack_4150[4] = ((byte)(uVar12 >> 4) & 0xf | (char)uVar12 * '\x10') ^ (byte)uVar22;
      *pcStack_4150 = '\0';
    }
    pcStack_4150 = pcStack_4150 + 3;
    uVar13 = func_0x0011ab24(&pcStack_4150);
    uVar27 = _strlen();
    if ((uVar21 == uVar27) && (iVar11 = _memcmp(pbVar20,uVar13,uVar21), iVar11 == 0))
    goto LAB_00116ae0;
    pbVar20 = (byte *)(*pcRam000000000206e0a0)();
// WM - found on a paste site? it was re-uploaded illegally
    if ((*pbVar20 & 1) == 0) {
      func_0x019c9af4();
    }
    pcStack_4158 = (char *)(*pcRam000000000206e088)();
    if (*pcStack_4158 == '\x01') {
      uVar12 = (byte)pcStack_4158[1] ^ 0x42fc84b7;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) + 0x80428686;
      pcStack_4158[7] = ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') + 0x11 ^ 0x74;
      uVar21 = (((ulong)(byte)pcStack_4158[1] ^ 0x2307585f04f76a09) << 0x11 | 0x460e) +
               0x9e3779b97f4a7c15;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4158[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_4158[8] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4158[2]) << 0x11) + 0x9e3779b97f4a7c16;
// more drops soon - github.com/pengussy
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4158[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_4158[9] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4158[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4158[4] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_4158[10] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4158[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4158[5] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar22 >> 0x17);
      pcStack_4158[0xb] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4158[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar27 = uVar21 ^ uVar21 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4158[6] ^ (uint)uVar27 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 4 & 0xf | uVar12 << 4) - (int)(uVar27 >> 0x17);
      pcStack_4158[0xc] =
           ((byte)(uVar12 >> 6) & 3 | (char)uVar12 * '\x04') - ((byte)(uVar21 >> 0x29) | 1) ^
/* origin: github.com/pengussy */
           (byte)uVar27;
      *pcStack_4158 = '\0';
    }
    pcStack_4158 = pcStack_4158 + 7;
    uVar13 = func_0x0011ab24(&pcStack_4158);
    uVar27 = func_0x00016fc0(&pppppppuStack_40f8,uVar13);
    uVar21 = uStack_40c0;
    pbVar20 = pbStack_40c8;
    if ((uVar27 & 1) == 0) {
      pbVar16 = (byte *)(*pcRam000000000206e0d0)();
      if ((*pbVar16 & 1) == 0) {
        func_0x019c9b30();
      }
      pcStack_4160 = (char *)(*pcRam000000000206e0b8)();
      if (*pcStack_4160 == '\x01') {
        uVar12 = (byte)pcStack_4160[1] ^ 0xda143d10;
        uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) + 0x311da5b5 ^ 0x4eb3b9;
        pcStack_4160[3] = ((byte)(uVar12 >> 2) & 0x3f | (byte)(uVar12 << 6)) + 0x2d;
        uVar27 = (((ulong)(byte)pcStack_4160[1] ^ 0x128728dabd73d8b2) << 0x11 | 0x250e) +
                 0x9e3779b97f4a7c15;
/* WM - if you paid for this, you were scammed */
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_4160[2] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^
                 ((uint)(uVar27 >> 0x29) | 1);
        pcStack_4160[4] = ((byte)(uVar12 >> 2) & 0x3f | (byte)(uVar12 << 6)) - (char)uVar22;
        *pcStack_4160 = '\0';
      }
      pcStack_4160 = pcStack_4160 + 3;
      uVar13 = func_0x0011ab24(&pcStack_4160);
      uVar27 = _strlen();
      if ((uVar21 == uVar27) && (iVar11 = _memcmp(pbVar20,uVar13,uVar21), iVar11 == 0))
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
    if (uVar21 != (long)(char)uStack_40e8._7_1_) goto LAB_001166e4;
    pppppppuVar17 = &pppppppuStack_40f8;
LAB_001166d8:
    iVar11 = _memcmp(pppppppuVar17,uVar13);
    if (iVar11 != 0) goto LAB_001166e4;
LAB_00116ae0:
    bVar8 = true;
    uVar9 = 1;
/*  donate: donate/README.md  */
  }
  pbVar20 = (byte *)(*pcRam000000000206e100)();
  if ((*pbVar20 & 1) == 0) {
    func_0x019c9b6c();
  }
  pcStack_4168 = (char *)(*pcRam000000000206e0e8)();
  if (*pcStack_4168 == '\x01') {
    uVar12 = (byte)pcStack_4168[1] ^ 0x79d90e48;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) + 0x77e462f4 ^ 0x726207;
    pcStack_4168[8] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) + 0x75;
    uVar21 = (((ulong)(byte)pcStack_4168[1] ^ 0xba926eebc613ce3b) << 0x11 | 0x17524) +
             0x9e3779b97f4a7c15;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4168[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar27 >> 0x29) | 1);
    pcStack_4168[9] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4168[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4168[3] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar27 >> 0x29) | 1);
    pcStack_4168[10] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4168[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
/*  keep the notice, keep the source honest  */
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4168[4] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar27 >> 0x29) | 1);
    pcStack_4168[0xb] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4168[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4168[5] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar27 >> 0x29) | 1);
    pcStack_4168[0xc] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4168[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar27 ^ uVar27 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4168[6] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar27 >> 0x29) | 1);
    pcStack_4168[0xd] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar22;
/* reversing this took months of machine time */
    uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4168[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
    uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
    uVar27 = uVar21 ^ uVar21 >> 0x21;
    uVar12 = (uint)(byte)pcStack_4168[7] ^ (uint)uVar27 ^ 0xffffffc3;
    uVar12 = (uVar12 >> 6 & 3 | uVar12 << 2) - (int)(uVar27 >> 0x17) ^ ((uint)(uVar21 >> 0x29) | 1);
    pcStack_4168[0xe] = ((byte)(uVar12 >> 3) & 0x1f | (byte)(uVar12 << 5)) - (char)uVar27;
    *pcStack_4168 = '\0';
  }
  pcStack_4168 = pcStack_4168 + 8;
  uVar13 = func_0x0011ab24(&pcStack_4168);
  uVar21 = _strlen();
  if ((long)(char)uStack_40d0._7_1_ < 0) {
    if (uVar21 == uStack_40d8) {
      if (uVar21 == 0xffffffffffffffff) {
        func_0x0001c430();
        goto LAB_0011812c;
/* WM - watermarked copy - do not remove */
      }
      pppppppuVar17 = pppppppuStack_40e0;
      goto LAB_00116f6c;
    }
LAB_00116f78:
    pbVar20 = (byte *)(*pcRam000000000206e130)();
    if ((*pbVar20 & 1) == 0) {
      func_0x019c9ba8();
    }
    pcStack_4170 = (char *)(*pcRam000000000206e118)();
    if (*pcStack_4170 == '\x01') {
      lVar14 = 0;
      uVar21 = 0xae3ebfac5c7de361;
      do {
        uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_4170[lVar14 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) -
                 (((uint)(uVar27 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_4170[lVar14 + 0xd] =
             ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') ^ (byte)uVar22;
        uVar21 = lVar14 + -0x61c8864680b583eb +
                 (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4170[lVar14 + 1]) << 0x11);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xc);
      *pcStack_4170 = '\0';
    }
    pcStack_4170 = pcStack_4170 + 0xd;
    uVar13 = func_0x0011ab24(&pcStack_4170);
    iVar11 = func_0x00016fc0(&pppppppuStack_40e0,uVar13);
    if (iVar11 != 0) {
      if (bVar8) {
        uRam0000000002097052 = uVar9;
      }
      goto LAB_00117c60;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    }
    pbVar20 = (byte *)(*pcRam000000000206e160)();
    if ((*pbVar20 & 1) == 0) {
      func_0x019c9be4();
    }
    pcStack_4178 = (char *)(*pcRam000000000206e148)();
    if (*pcStack_4178 == '\x01') {
      lVar14 = 0;
      uVar21 = 0x7a59236f8a1d6e51;
      do {
        uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_4178[lVar14 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17);
        pcStack_4178[lVar14 + 0x10] =
             ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) - ((byte)(uVar27 >> 0x29) | 1) ^
             (byte)uVar22;
        uVar21 = lVar14 + -0x61c8864680b583eb +
                 (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4178[lVar14 + 1]) << 0x11);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0xf);
      *pcStack_4178 = '\0';
    }
    pcStack_4178 = pcStack_4178 + 0x10;
    uVar13 = func_0x0011ab24(&pcStack_4178);
    uVar21 = func_0x00016fc0(&pppppppuStack_40e0,uVar13);
    if ((uVar21 & 1) != 0) {
LAB_00117298:
      if (bVar8) {
        uRam0000000002097051 = uVar9;
      }
      goto LAB_00117c60;
    }
    pbVar20 = (byte *)(*pcRam000000000206e190)();
/* WM - stripping the watermark breaks the license */
    if ((*pbVar20 & 1) == 0) {
      func_0x019c9c20();
    }
    pcStack_4180 = (char *)(*pcRam000000000206e178)();
    if (*pcStack_4180 == '\x01') {
      lVar14 = 0;
      uVar21 = 0x4bb60e0c1629719c;
      do {
        uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_4180[lVar14 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar22 >> 0x17) ^
                 ((uint)(uVar27 >> 0x29) | 1);
        pcStack_4180[lVar14 + 0x11] = ((byte)(uVar12 >> 7) & 1 | (byte)(uVar12 << 1)) - (char)uVar22
        ;
        uVar21 = lVar14 + -0x61c8864680b583eb +
                 (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4180[lVar14 + 1]) << 0x11);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x10);
      *pcStack_4180 = '\0';
    }
    pcStack_4180 = pcStack_4180 + 0x11;
    uVar13 = func_0x0011ab24(&pcStack_4180);
    iVar11 = func_0x00016fc0(&pppppppuStack_40e0,uVar13);
    if (iVar11 != 0) goto LAB_00117298;
    pbVar20 = (byte *)(*pcRam000000000206e1c0)();
    if ((*pbVar20 & 1) == 0) {
      func_0x019c9c5c();
    }
    pcStack_4188 = (char *)(*pcRam000000000206e1a8)();
    if (*pcStack_4188 == '\x01') {
      uVar12 = (byte)pcStack_4188[1] ^ 0xae6e8c4c;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) + 0x451c875d;
      pcStack_4188[10] = ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') + 0x47 ^ 0x8f;
      uVar21 = (((ulong)(byte)pcStack_4188[1] ^ 0x16247cf6082b18e0) << 0x11 | 0x2c48) +
               0x9e3779b97f4a7c15;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
/* wm:origin: github.com/pengussy */
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4188[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_4188[0xb] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4188[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4188[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_4188[0xc] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4188[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4188[4] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_4188[0xd] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4188[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4188[5] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_4188[0xe] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4188[5]) << 0x11) + 0x9e3779b97f4a7c19;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4188[6] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_4188[0xf] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4188[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4188[7] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_4188[0x10] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4188[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar27 ^ uVar27 >> 0x21;
      uVar12 = (uint)(byte)pcStack_4188[8] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar22 >> 0x17);
      pcStack_4188[0x11] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar27 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_4188[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
      uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
      uVar27 = uVar21 ^ uVar21 >> 0x21;
// reversing this took months of machine time
      uVar12 = (uint)(byte)pcStack_4188[9] ^ (uint)uVar27 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) - (int)(uVar27 >> 0x17);
      pcStack_4188[0x12] =
           ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar21 >> 0x29) | 1) ^
           (byte)uVar27;
      *pcStack_4188 = '\0';
    }
    pcStack_4188 = pcStack_4188 + 10;
    uVar13 = func_0x0011ab24(&pcStack_4188);
    uVar21 = func_0x00016fc0(&pppppppuStack_40e0,uVar13);
    if ((uVar21 & 1) != 0) {
LAB_00117858:
      pbVar20 = (byte *)(*pcRam000000000206e220)();
      if ((*pbVar20 & 1) == 0) {
        func_0x019c9e74();
      }
      pcStack_41a8 = (char *)(*pcRam000000000206e208)();
      if (*pcStack_41a8 == '\x01') {
        uVar12 = (byte)pcStack_41a8[1] ^ 0x924ab770;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) + 0xe8715f56;
        pcStack_41a8[7] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ 0xb3;
        uVar21 = (((ulong)(byte)pcStack_41a8[1] ^ 0xfb4732eb687cff17) << 0x11 | 0x1f68e) +
                 0x9e3779b97f4a7c15;
        uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_41a8[2] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                 (((uint)(uVar27 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_41a8[8] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_41a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_41a8[3] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar27 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_41a8[9] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_41a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_41a8[4] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar27 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_41a8[10] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_41a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar27 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar27 = (uVar27 ^ uVar27 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar27 ^ uVar27 >> 0x21;
        uVar12 = (uint)(byte)pcStack_41a8[5] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
/*  reversing this took months of machine time  */
                 (((uint)(uVar27 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_41a8[0xb] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar22;
        uVar21 = (uVar21 >> 0x2f | (uVar21 ^ (byte)pcStack_41a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0xae502812aa7333;
        uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
        uVar27 = uVar21 ^ uVar21 >> 0x21;
        uVar12 = (uint)(byte)pcStack_41a8[6] ^ (uint)uVar27 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 1 & 0x7f | uVar12 << 7) -
                 (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar27 >> 0x17));
        pcStack_41a8[0xc] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ (byte)uVar27;
        *pcStack_41a8 = '\0';
      }
      pcStack_41a8 = pcStack_41a8 + 7;
      uVar13 = func_0x0011ab24(&pcStack_41a8);
      uVar27 = func_0x00016fc0(&pppppppuStack_40f8,uVar13);
      uVar21 = uStack_40c0;
      pbVar20 = pbStack_40c8;
      if ((uVar27 & 1) == 0) {
        pbVar16 = (byte *)(*pcRam000000000206e250)();
        if ((*pbVar16 & 1) == 0) {
          func_0x019c9eb0();
        }
        pcStack_41b0 = (char *)(*pcRam000000000206e238)();
        if (*pcStack_41b0 == '\x01') {
          bVar4 = pcStack_41b0[1];
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          cVar10 = func_0x0016c010((ulong)bVar4,0x8c733686d3daccda);
          pcStack_41b0[3] = cVar10;
          cVar10 = func_0x0016c010(pcStack_41b0[2],
                                   (((ulong)bVar4 ^ 0x8c733686d3daccda) << 0x11 | 0x118e6) +
                                   0x9e3779b97f4a7c15);
          pcStack_41b0[4] = cVar10;
          *pcStack_41b0 = '\0';
        }
        pcStack_41b0 = pcStack_41b0 + 3;
        uVar13 = func_0x0011ab24(&pcStack_41b0);
        uVar27 = _strlen();
        if ((uVar21 != uVar27) || (iVar11 = _memcmp(pbVar20,uVar13,uVar21), iVar11 != 0)) {
          func_0x001182b0(apppppppcStack_4110,&pbStack_40c8);
          pppppppcStack_4118 = (char *******)0x0;
          puVar18 = (undefined4 *)___error();
          *puVar18 = 0;
          pppppppcVar3 = apppppppcStack_4110[0];
          if (-1 < (char)bStack_40f9) {
            pppppppcVar3 = (char *******)apppppppcStack_4110;
          }
          dVar28 = (double)_strtod(pppppppcVar3,&pppppppcStack_4118);
          uVar12 = (uint)(char)bStack_40f9;
          pppppppcVar3 = apppppppcStack_4110[0];
          if (-1 < (char)bStack_40f9) {
            pppppppcVar3 = (char *******)apppppppcStack_4110;
          }
          if (pppppppcStack_4118 != pppppppcVar3) {
            if (*(char *)pppppppcStack_4118 == '\0') {
              piVar19 = (int *)___error();
              if ((((*piVar19 != 0x22) && ((ulong)ABS(dVar28) < 0x7ff0000000000000)) &&
                  (0.0 < dVar28)) && (dVar28 <= 10000.0)) {
                uRam0000000002097054 = 1;
                dRam0000000001f26d38 = dVar28;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                if ((plRam0000000001f268e0 != (long *)0x0) && (*plRam0000000001f268e0 != 0)) {
                  *(double *)(lRam0000000001f265d0 + *plRam0000000001f268e0) = 1.0 / dVar28;
                }
              }
            }
            uVar12 = (uint)bStack_40f9;
          }
          if ((uVar12 >> 7 & 1) != 0) {
            __ZdlPv(apppppppcStack_4110[0]);
          }
          goto LAB_00117c60;
        }
      }
      uRam0000000002097054 = 0;
      goto LAB_00117c60;
    }
    pbVar20 = (byte *)(*pcRam000000000206e1f0)();
    if ((*pbVar20 & 1) == 0) {
      func_0x019c9c98();
    }
    pcStack_4190 = (char *)(*pcRam000000000206e1d8)();
    if (*pcStack_4190 == '\x01') {
      bVar4 = pcStack_4190[1];
      cVar10 = func_0x00189f94((ulong)bVar4,0x851c4abbddaa677a);
      pcStack_4190[0xb] = cVar10;
      uVar21 = (((ulong)bVar4 ^ 0x851c4abbddaa677a) << 0x11 | 0x10a38) + 0x9e3779b97f4a7c15;
      bVar4 = pcStack_4190[2];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0xc] = cVar10;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c16;
      bVar4 = pcStack_4190[3];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0xd] = cVar10;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c17;
/* chat: discord.gg/sdkhDjTex */
      bVar4 = pcStack_4190[4];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0xe] = cVar10;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c18;
      bVar4 = pcStack_4190[5];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0xf] = cVar10;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c19;
      bVar4 = pcStack_4190[6];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0x10] = cVar10;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1a;
      bVar4 = pcStack_4190[7];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0x11] = cVar10;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1b;
      bVar4 = pcStack_4190[8];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0x12] = cVar10;
      uVar21 = (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1c;
      bVar4 = pcStack_4190[9];
      cVar10 = func_0x00189f94((ulong)bVar4,uVar21);
      pcStack_4190[0x13] = cVar10;
      cVar10 = func_0x00189f94(pcStack_4190[10],
                               (uVar21 >> 0x2f | (uVar21 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1d);
      pcStack_4190[0x14] = cVar10;
      *pcStack_4190 = '\0';
    }
    pcStack_4190 = pcStack_4190 + 0xb;
    uVar13 = func_0x0011ab24(&pcStack_4190);
    iVar11 = func_0x00016fc0(&pppppppuStack_40e0,uVar13);
/* WM - chat: discord.gg/sdkhDjTex */
    if (iVar11 != 0) goto LAB_00117858;
    if ((long)uStack_40e8 < 0) {
      __ZdlPv(pppppppuStack_40f8);
    }
    if ((long)uStack_40d0 < 0) {
      __ZdlPv(pppppppuStack_40e0);
    }
LAB_00117cc0:
    if (((bRam000000000208ed10 & 1) == 0) &&
       (uVar21 = func_0x019c9cd4(&pppppppuStack_40e0), (uVar21 & 1) == 0)) {
      lStack_4198 = (long)pppppppuStack_40e0 + 0x11;
      uVar13 = func_0x0011ab24(&lStack_4198);
      func_0x0000e100(0x208fcd8,uVar13);
      ___cxa_atexit(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_01f20498
                    ,0x208fcd8,0);
      ___cxa_guard_release(0x208ed10);
    }
    uVar21 = uRam000000000208fce0;
    pcVar2 = pcRam000000000208fcd8;
    if (-1 < (char)bRam000000000208fcef) {
      pcVar2 = (char *)0x208fcd8;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar21 = (ulong)bRam000000000208fcef;
    }
    pbVar20 = pbStack_40b8;
    if (uVar21 == 0) {
LAB_00117d64:
      if (pbVar20 != pbStack_40b0) {
        pbVar20 = pbVar20 + uVar21;
        lVar14 = (long)pbStack_40b0 - (long)pbVar20;
        if (lVar14 == 0) {
          pbVar20 = (byte *)(*pcRam000000000206e2b0)();
          if ((*pbVar20 & 1) == 0) {
            func_0x019c9e38();
          }
          pcStack_41a0 = (char *)(*pcRam000000000206e298)();
          if (*pcStack_41a0 == '\x01') {
            uVar12 = (((byte)pcStack_41a0[1] ^ 0xf3b7fa4f) >> 2 & 0x3f |
                     ((byte)pcStack_41a0[1] ^ 0xf3b7fa4f) << 6) + 0x6dfbd56b;
            pcStack_41a0[2] = ((byte)(uVar12 >> 1) & 0x7f | (char)uVar12 * -0x80) ^ 0x8c;
            *pcStack_41a0 = '\0';
          }
          pcStack_41a0 = pcStack_41a0 + 2;
          pbVar20 = (byte *)func_0x0011ab24(&pcStack_41a0);
        }
        func_0x0003c73c(&pppppppuStack_40e0,pbVar20,lVar14);
        uStack_4128 = uStack_40d8;
        pppppppuStack_4130 = pppppppuStack_40e0;
        uStack_4120 = uStack_40d0;
        uStack_40d8 = 0;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        uStack_40d0 = 0;
        pppppppuStack_40e0 = (undefined8 *******)0x0;
        func_0x001d8420(&pppppppuStack_4130);
        if ((long)uStack_4120 < 0) {
          __ZdlPv(pppppppuStack_4130);
        }
        if ((long)uStack_40d0 < 0) {
          __ZdlPv(pppppppuStack_40e0);
        }
      }
    }
    else if (((long)uVar21 <= (long)pbStack_40b0 - (long)pbStack_40b8) &&
            (pbStack_40b8 != pbStack_40b0 + (1 - uVar21))) {
      do {
        if ((uint)*pbVar20 == (int)*pcVar2) {
          if (uVar21 == 1) goto LAB_00117d64;
          uVar27 = 1;
          while ((uint)pbVar20[uVar27] == (int)pcVar2[uVar27]) {
            uVar27 = uVar27 + 1;
            if (uVar21 == uVar27) goto LAB_00117d64;
          }
        }
        pbVar20 = pbVar20 + 1;
/* wm:more drops soon - github.com/pengussy */
      } while (pbVar20 != pbStack_40b0 + (1 - uVar21));
    }
  }
  else {
    if (uVar21 != (long)(char)uStack_40d0._7_1_) goto LAB_00116f78;
    pppppppuVar17 = &pppppppuStack_40e0;
LAB_00116f6c:
    iVar11 = _memcmp(pppppppuVar17,uVar13);
    if (iVar11 != 0) goto LAB_00116f78;
    if (bVar8) {
      func_0x000d0238(uVar9);
    }
LAB_00117c60:
    if ((long)uStack_40e8 < 0) {
      __ZdlPv(pppppppuStack_40f8);
    }
    if ((long)uStack_40d0 < 0) {
/* wm:found on a paste site? it was re-uploaded illegally */
      __ZdlPv(pppppppuStack_40e0);
    }
  }
joined_r0x00117c74:
  if (pbStack_40b8 != (byte *)0x0) {
    __ZdlPv(pbStack_40b8);
  }
LAB_00117ee0:
  if (lStack_40a0 != 0) {
    lStack_4098 = lStack_40a0;
    __ZdlPv();
  }
LAB_00117eec:
  if (-1 < iStack_4084) {
    _close();
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_80) {
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

