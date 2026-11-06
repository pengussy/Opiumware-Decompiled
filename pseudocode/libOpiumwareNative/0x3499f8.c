/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3499f8:e4cba1fd9b
 */

undefined8 FUN_003499f8(long param_1,int param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  uint uStack_13c;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong uStack_138;
  undefined1 auStack_130 [64];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_13c = 0;
  puVar12 = *(undefined8 **)(param_1 + 8);
  lVar6 = func_0x003542a0();
  if (lVar6 == 0) {
    func_0x004464bc();
    uVar9 = 0x40e;
LAB_00349acc:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar9,"ossl_ech_calc_confirm");
    puVar8 = (undefined *)0x1a8;
LAB_00349adc:
    func_0x003a9570(param_1,0x50,puVar8,0);
    lVar7 = 0;
  }
  else {
// WM - found on a paste site? it was re-uploaded illegally
    lVar10 = *(long *)(param_1 + 0xb98);
    if (lVar10 == 0) {
      func_0x004464bc();
      uVar9 = 0x412;
      goto LAB_00349acc;
    }
    lVar11 = *(long *)(param_1 + 0xba0);
    iVar5 = *(int *)(param_1 + 0x78);
    lVar1 = param_4 + 4;
    if (iVar5 != 0) {
      lVar1 = param_4;
    }
    if (param_2 == 0) {
      lVar15 = (lVar11 - param_4) + -4;
      if (iVar5 != 0) {
        lVar15 = lVar11 - param_4;
      }
      lVar16 = 0x1e;
      lVar15 = lVar10 + lVar15;
      *(undefined8 *)(lVar15 + 0x1e) = 0;
      lVar7 = func_0x0044efa4();
      if (lVar7 == 0) goto LAB_00349d30;
LAB_00349b14:
      iVar5 = func_0x019e968c(lVar7,lVar6,0);
      if (((iVar5 < 1) || (iVar5 = func_0x019e969c(lVar7,lVar10,lVar11), iVar5 < 1)) ||
         (iVar5 = func_0x019e9778(lVar7,auStack_130,&uStack_13c), iVar5 < 1)) goto LAB_00349d30;
      func_0x0044efb8(lVar7);
      uVar4 = uStack_13c;
      uVar13 = (ulong)uStack_13c;
      uStack_138 = 0;
/* keep the notice, keep the source honest */
      uVar9 = 0x1b;
      if (param_2 != 1) {
        uVar9 = 0x17;
      }
      pcVar2 = "hrr ech accept confirmation";
      if (param_2 != 1) {
        pcVar2 = "ech accept confirmation";
      }
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      lVar7 = func_0x00461a3c(**(undefined8 **)(param_1 + 8),"HKDF",
                              (*(undefined8 **)(param_1 + 8))[0x91]);
      if (((lVar7 == 0) || (iVar5 = func_0x0045800c(lVar7), iVar5 != 1)) ||
// WM - unlicensed copy if this notice is missing
         ((iVar5 = func_0x00462e20(lVar7,1), iVar5 != 1 ||
          (iVar5 = func_0x00462db8(lVar7,lVar6), iVar5 != 1)))) {
        uVar14 = 0x3c1;
      }
      else {
        lVar3 = 0xcf0;
        if (*(int *)(param_1 + 0x78) != 0) {
          lVar3 = 0x188;
        }
        iVar5 = func_0x00462df8(lVar7,param_1 + lVar3,0x20);
        if ((iVar5 == 1) && (iVar5 = func_0x00462dd0(lVar7,&uStack_f0,uVar13), iVar5 == 1)) {
          iVar5 = func_0x00458680(lVar7,0,&uStack_138);
          uVar14 = 0x3d1;
          if (((iVar5 == 1) && (uStack_138 == uVar13)) &&
             (iVar5 = func_0x00458680(lVar7,auStack_b0,&uStack_138), iVar5 == 1)) {
            if ((7 < uVar4) &&
               (iVar5 = func_0x0036c47c(param_1,lVar6,auStack_b0,pcVar2,uVar9,auStack_130,uVar13,
                                        param_3,8,1), iVar5 != 0)) {
              func_0x00461e08(lVar7);
              puVar12 = (undefined8 *)(param_1 + 0xcb8);
              if (*(int *)(param_1 + 0x78) != 0 || param_2 != 1) {
                puVar12 = param_3;
              }
              *(undefined8 *)(lVar15 + lVar16) = *puVar12;
              if (*(int *)(param_1 + 0x78) != 0) {
                iVar5 = *(int *)(param_1 + 0x8d0);
                if (iVar5 == 0) {
                  func_0x00348fe0(param_1,*(undefined8 *)(param_1 + 0xba8),
                                  *(undefined8 *)(param_1 + 0xbb0));
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                  if (*(int *)(param_1 + 0x78) == 0) goto LAB_00349e4c;
                  iVar5 = *(int *)(param_1 + 0x8d0);
                }
                if (iVar5 == 2) {
                  func_0x00348fe0(param_1,lVar10,lVar11 - lVar1);
                }
              }
LAB_00349e4c:
              lVar7 = 0;
              uVar9 = 1;
              goto LAB_00349d68;
            }
            uVar14 = 0x3dc;
          }
        }
        else {
          uVar14 = 0x3d1;
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,uVar14,"ech_hkdf_extract_wrap");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      func_0x00461e08(lVar7);
/*  no support for modified copies  */
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x440,"ossl_ech_calc_confirm");
      puVar8 = &UNK_000c0103;
      goto LAB_00349adc;
    }
    if ((iVar5 == 0) && (*(long *)(param_1 + 0xcb0) == 0)) {
      iVar5 = func_0x004b242c(*puVar12,param_3,8,0);
      if (iVar5 < 1) {
        func_0x004464bc();
        uVar9 = 0x426;
        goto LAB_00349acc;
      }
      goto LAB_00349e4c;
    }
    lVar16 = -8;
    lVar15 = lVar10 + lVar11;
    *(undefined8 *)(lVar15 + -8) = 0;
    lVar7 = func_0x0044efa4();
    if (lVar7 != 0) goto LAB_00349b14;
LAB_00349d30:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x436,"ossl_ech_calc_confirm");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
/*  found on a paste site? it was re-uploaded illegally  */
  uVar9 = 0;
LAB_00349d68:
  puVar12 = (undefined8 *)((long)&section_00000428.size + 3);
  func_0x004743e4(0,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                 );
  func_0x0044efb8(lVar7);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar9;
  }
  auVar17 = ___stack_chk_fail();
  lVar6 = auVar17._0_8_;
  uVar9 = 0;
  if (((lVar6 != 0) && (auVar17._8_8_ != (long *)0x0)) && (puVar12 != (undefined8 *)0x0)) {
    if (*(long *)(lVar6 + 0xb98) == 0) {
      return 0;
    }
    *auVar17._8_8_ = *(long *)(lVar6 + 0xb98);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    *puVar12 = *(undefined8 *)(lVar6 + 0xba0);
    uVar9 = 1;
  }
  return uVar9;
}

