/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x349638:d9a4c79788
 */

undefined8 FUN_00349638(undefined8 param_1,undefined8 param_2,qword *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  qword *pqVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  uint uStack_219c;
  ulong uStack_2198;
  undefined1 auStack_2190 [64];
  undefined8 uStack_2150;
  undefined8 uStack_2148;
  undefined8 uStack_2140;
  undefined8 uStack_2138;
  undefined8 uStack_2130;
  undefined8 uStack_2128;
  undefined8 uStack_2120;
  undefined8 uStack_2118;
/*  do not claim this as your own  */
  undefined1 auStack_2110 [64];
  long lStack_20d0;
  char *pcStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  undefined1 auStack_2039 [8193];
  long lStack_38;
  
  lVar8 = (*(code *)PTR____chkstk_darwin_01f201f8)();
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  pcStack_2058 = (char *)0x0;
  uVar15 = 0;
  if (lVar8 != 0) {
    uStack_2048 = 0;
    func_0x003e95bc(*(undefined8 *)(lVar8 + 0x1a8),3,0,&uStack_2048);
    if (*(long *)(lVar8 + 0x1b0) != 0) {
      func_0x0035e10c(lVar8,auStack_2039,0x40,&uStack_2050);
    }
    if (*(long *)(lVar8 + 0x338) != 0) {
      lVar14 = 0;
      do {
        func_0x0045eb4c(*(undefined8 *)(lVar8 + 0x310 + lVar14 * 8));
        *(undefined8 *)(lVar8 + 0x310 + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 != *(long *)(lVar8 + 0x338));
    }
    if (*(long *)(lVar8 + 0xce8) == 0) {
      *(undefined8 *)(lVar8 + 0x338) = 0;
      *(undefined8 *)(lVar8 + 0xce8) = 0;
      if (*(int *)(lVar8 + 0x8d0) == 0) goto LAB_00349868;
LAB_00349768:
      uStack_2048 = 0;
      param_4 = &uStack_2048;
      param_3 = (qword *)0x0;
      func_0x003e95bc(*(undefined8 *)(lVar8 + 0x1a8),3);
      if (*(long *)(lVar8 + 0x1b0) != 0) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
        param_4 = &uStack_2050;
        param_3 = &segment_command_00000020.vmsize;
        func_0x0035e10c(lVar8,auStack_2039);
      }
      uVar15 = 1;
      *(undefined4 *)(lVar8 + 0xc30) = 1;
      *(undefined8 *)(lVar8 + 0xc18) = 0x100000001;
      *(undefined4 *)(lVar8 + 0xc3c) = 0;
      if (((*(long *)(lVar8 + 0xb60) == 0) || (*(int *)(lVar8 + 0x8d0) == 1)) ||
         (*(long *)(lVar8 + 0xb88) == 0)) goto LAB_0034995c;
      _bzero(auStack_2039,&UNK_00002001);
      func_0x003ec13c();
      lVar14 = func_0x003e945c();
      if (lVar14 == 0) {
        uVar15 = 0x38b;
      }
      else {
        FUN_00349324(lVar14,lVar8,0xfffffffe);
        param_3 = (qword *)&UNK_00002000;
        func_0x003e9754(lVar14,auStack_2039);
        iVar6 = (**(code **)(lVar8 + 0xb88))(lVar8,auStack_2039);
        func_0x003e9468(lVar14);
        if (iVar6 == 1) {
          uVar15 = 1;
          goto LAB_0034995c;
        }
        uVar15 = 0x393;
      }
      func_0x004464bc();
LAB_00349848:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,uVar15,"ossl_ech_swaperoo");
      param_3 = (qword *)&UNK_000c0103;
      param_4 = (undefined8 *)0x0;
      func_0x003a9570(lVar8,0x50);
    }
    else {
      lVar14 = 0;
/* wm:more drops soon - github.com/pengussy */
      do {
        lVar16 = lVar8 + lVar14 * 8;
        *(undefined8 *)(lVar16 + 0x310) = *(undefined8 *)(lVar16 + 0xcc0);
        iVar6 = func_0x00359798();
        if (iVar6 != 1) {
          func_0x004464bc();
          uVar15 = 0x34a;
          goto LAB_00349848;
        }
        lVar16 = lVar8 + lVar14 * 2;
        *(undefined2 *)(lVar16 + 0x330) = *(undefined2 *)(lVar16 + 0xce0);
        lVar14 = lVar14 + 1;
      } while (lVar14 != *(long *)(lVar8 + 0xce8));
      *(long *)(lVar8 + 0x338) = lVar14;
      if (lVar14 != 0) {
        lVar14 = 0;
        do {
          func_0x0045eb4c(*(undefined8 *)(lVar8 + 0xcc0 + lVar14 * 8));
          *(undefined8 *)(lVar8 + 0xcc0 + lVar14 * 8) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar14 != *(long *)(lVar8 + 0xce8));
      }
      *(undefined8 *)(lVar8 + 0xce8) = 0;
      if (*(int *)(lVar8 + 0x8d0) != 0) goto LAB_00349768;
LAB_00349868:
      uVar15 = *(undefined8 *)(lVar8 + 0x1a8);
      *(undefined8 *)(lVar8 + 0x1a8) = 0;
      iVar6 = func_0x0034d4d0(lVar8);
      if (iVar6 == 0) {
        func_0x004464bc();
        uVar10 = 0x35d;
/* wm:reversing this took months of machine time */
      }
      else {
        iVar6 = func_0x0034d5ac(lVar8,*(undefined8 *)(lVar8 + 0xba8),*(undefined8 *)(lVar8 + 0xbb0))
        ;
        if (iVar6 == 0) {
          func_0x004464bc();
          uVar10 = 0x362;
        }
        else {
          lVar14 = func_0x003e95bc(uVar15,3,0,&pcStack_2058);
          if ((lVar14 < 1) ||
             (uVar12 = lVar14 - 4,
             *pcStack_2058 != '\x01' || 0xfffffffffffffffb < uVar12 && lVar14 != 0))
          goto LAB_00349768;
          uVar13 = (ulong)(byte)pcStack_2058[1] << 0x10 | (ulong)(byte)pcStack_2058[2] << 8 |
                   (ulong)(byte)pcStack_2058[3];
          if (uVar12 < uVar13) {
/* WM - if you paid for this, you were scammed */
            func_0x004464bc();
            uVar10 = 0x36c;
          }
          else {
            if ((uVar12 - uVar13 == 0) ||
               (iVar6 = func_0x0034d5ac(lVar8,pcStack_2058 + uVar13 + 4,uVar12 - uVar13), iVar6 != 0
               )) {
              func_0x003e9468(uVar15);
              goto LAB_00349768;
            }
            func_0x004464bc();
            uVar10 = 0x372;
          }
        }
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,uVar10,"ossl_ech_swaperoo");
      param_3 = (qword *)&UNK_000c0103;
      param_4 = (undefined8 *)0x0;
      func_0x003a9570(lVar8,0x50);
      func_0x003e9468(uVar15);
    }
    uVar15 = 0;
  }
LAB_0034995c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar15;
  }
  auVar22 = ___stack_chk_fail(uVar15);
  iVar6 = auVar22._8_4_;
  lVar8 = auVar22._0_8_;
  lStack_20d0 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_219c = 0;
  puVar18 = *(undefined8 **)(lVar8 + 8);
  lVar14 = func_0x003542a0();
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  if (lVar14 == 0) {
    func_0x004464bc();
    uVar15 = 0x40e;
LAB_00349acc:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar15,"ossl_ech_calc_confirm");
    puVar11 = (undefined *)0x1a8;
LAB_00349adc:
    func_0x003a9570(lVar8,0x50,puVar11,0);
    lVar9 = 0;
  }
  else {
    lVar16 = *(long *)(lVar8 + 0xb98);
    if (lVar16 == 0) {
      func_0x004464bc();
      uVar15 = 0x412;
      goto LAB_00349acc;
    }
    lVar17 = *(long *)(lVar8 + 0xba0);
    iVar7 = *(int *)(lVar8 + 0x78);
    puVar1 = (undefined8 *)((long)param_4 + 4);
    if (iVar7 != 0) {
      puVar1 = param_4;
/*  found on a paste site? it was re-uploaded illegally  */
    }
    if (iVar6 == 0) {
      lVar19 = (lVar17 - (long)param_4) + -4;
      if (iVar7 != 0) {
        lVar19 = lVar17 - (long)param_4;
      }
      lVar20 = 0x1e;
      lVar19 = lVar16 + lVar19;
      *(undefined8 *)(lVar19 + 0x1e) = 0;
      lVar9 = func_0x0044efa4();
      if (lVar9 == 0) goto LAB_00349d30;
LAB_00349b14:
      iVar7 = func_0x019e968c(lVar9,lVar14,0);
      if (((iVar7 < 1) || (iVar7 = func_0x019e969c(lVar9,lVar16,lVar17), iVar7 < 1)) ||
         (iVar7 = func_0x019e9778(lVar9,auStack_2190,&uStack_219c), iVar7 < 1)) goto LAB_00349d30;
      func_0x0044efb8(lVar9);
      uVar5 = uStack_219c;
      uVar12 = (ulong)uStack_219c;
      uStack_2198 = 0;
      uVar15 = 0x1b;
      if (iVar6 != 1) {
        uVar15 = 0x17;
      }
      pcVar2 = "hrr ech accept confirmation";
      if (iVar6 != 1) {
        pcVar2 = "ech accept confirmation";
      }
      uStack_2148 = 0;
      uStack_2150 = 0;
      uStack_2138 = 0;
      uStack_2140 = 0;
      uStack_2128 = 0;
      uStack_2130 = 0;
      uStack_2118 = 0;
      uStack_2120 = 0;
      lVar9 = func_0x00461a3c(**(undefined8 **)(lVar8 + 8),"HKDF",
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                              (*(undefined8 **)(lVar8 + 8))[0x91]);
      if ((((lVar9 == 0) || (iVar7 = func_0x0045800c(lVar9), iVar7 != 1)) ||
          (iVar7 = func_0x00462e20(lVar9,1), iVar7 != 1)) ||
         (iVar7 = func_0x00462db8(lVar9,lVar14), iVar7 != 1)) {
        uVar10 = 0x3c1;
      }
      else {
        lVar3 = 0xcf0;
        if (*(int *)(lVar8 + 0x78) != 0) {
          lVar3 = 0x188;
        }
        iVar7 = func_0x00462df8(lVar9,lVar8 + lVar3,0x20);
        if ((iVar7 == 1) && (iVar7 = func_0x00462dd0(lVar9,&uStack_2150,uVar12), iVar7 == 1)) {
          iVar7 = func_0x00458680(lVar9,0,&uStack_2198);
          uVar10 = 0x3d1;
          if (((iVar7 == 1) && (uStack_2198 == uVar12)) &&
             (iVar7 = func_0x00458680(lVar9,auStack_2110,&uStack_2198), iVar7 == 1)) {
            if ((7 < uVar5) &&
               (iVar7 = func_0x0036c47c(lVar8,lVar14,auStack_2110,pcVar2,uVar15,auStack_2190,uVar12,
                                        param_3,8,1), iVar7 != 0)) {
              func_0x00461e08(lVar9);
              pqVar4 = (qword *)(lVar8 + 0xcb8);
              if (*(int *)(lVar8 + 0x78) != 0 || iVar6 != 1) {
                pqVar4 = param_3;
              }
              *(qword *)(lVar19 + lVar20) = *pqVar4;
              if (*(int *)(lVar8 + 0x78) != 0) {
                iVar6 = *(int *)(lVar8 + 0x8d0);
                if (iVar6 == 0) {
                  func_0x00348fe0(lVar8,*(undefined8 *)(lVar8 + 0xba8),
                                  *(undefined8 *)(lVar8 + 0xbb0));
                  if (*(int *)(lVar8 + 0x78) == 0) goto LAB_00349e4c;
                  iVar6 = *(int *)(lVar8 + 0x8d0);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                }
                if (iVar6 == 2) {
                  func_0x00348fe0(lVar8,lVar16,lVar17 - (long)puVar1);
                }
              }
LAB_00349e4c:
              lVar9 = 0;
              uVar15 = 1;
              goto LAB_00349d68;
            }
            uVar10 = 0x3dc;
          }
        }
        else {
          uVar10 = 0x3d1;
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,uVar10,"ech_hkdf_extract_wrap");
      func_0x003a9570(lVar8,0x50,&UNK_000c0103,0);
      func_0x00461e08(lVar9);
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x440,"ossl_ech_calc_confirm");
      puVar11 = &UNK_000c0103;
      goto LAB_00349adc;
    }
    if ((iVar7 == 0) && (*(long *)(lVar8 + 0xcb0) == 0)) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      iVar6 = func_0x004b242c(*puVar18,param_3,8,0);
      if (iVar6 < 1) {
        func_0x004464bc();
        uVar15 = 0x426;
        goto LAB_00349acc;
      }
      goto LAB_00349e4c;
    }
    lVar20 = -8;
    lVar19 = lVar16 + lVar17;
    *(undefined8 *)(lVar19 + -8) = 0;
    lVar9 = func_0x0044efa4();
    if (lVar9 != 0) goto LAB_00349b14;
LAB_00349d30:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x436,"ossl_ech_calc_confirm");
    func_0x003a9570(lVar8,0x50,&UNK_000c0103,0);
  }
  uVar15 = 0;
LAB_00349d68:
  puVar18 = (undefined8 *)((long)&section_00000428.size + 3);
  func_0x004743e4(0,
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                 );
  func_0x0044efb8(lVar9);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_20d0) {
    return uVar15;
  }
  auVar21 = ___stack_chk_fail();
  lVar8 = auVar21._0_8_;
  uVar15 = 0;
  if (((lVar8 != 0) && (auVar21._8_8_ != (long *)0x0)) && (puVar18 != (undefined8 *)0x0)) {
    if (*(long *)(lVar8 + 0xb98) == 0) {
      return 0;
    }
    *auVar21._8_8_ = *(long *)(lVar8 + 0xb98);
    *puVar18 = *(undefined8 *)(lVar8 + 0xba0);
    uVar15 = 1;
  }
  return uVar15;
}

