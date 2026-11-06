/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xc2a4:f5d0826fae
 */

/* WARNING: Removing unreachable block (ram,0x0000cd7c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0000c2a4(long param_1,int param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12,long *param_13,
                  undefined8 *param_14)

{
  undefined8 uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *******ppppppplVar14;
// WM - more drops soon - github.com/pengussy
  bool bVar15;
  long *plVar16;
  long *plStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  long *******ppppppplStack_b10;
  long *******ppppppplStack_b08;
  long lStack_b00;
  undefined8 uStack_af8;
  long *plStack_af0;
  undefined *puStack_ae8;
  char *pcStack_ae0;
  long lStack_ad8;
  char *pcStack_ad0;
  undefined8 uStack_ac8;
  long *plStack_ac0;
  long *plStack_ab8;
  char cStack_aa9;
  long *plStack_aa8;
  long *plStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined4 auStack_a88 [2];
  long *plStack_a80;
/* origin: github.com/pengussy */
  long *plStack_a78;
  undefined1 auStack_a70 [20];
  uint uStack_a5c;
  undefined *puStack_a58;
  undefined1 auStack_a50 [1144];
  int iStack_5d8;
  byte bStack_5cd;
  byte bStack_599;
  byte bStack_598;
  char cStack_55c;
  ulong uStack_550;
  byte bStack_541;
  undefined4 uStack_540;
  byte bStack_470;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1a8 [192];
  undefined1 *puStack_e8;
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_a5c = 0;
  func_0x01726f20(auStack_a70,*(undefined8 *)(param_1 + 0x10));
  plStack_a78 = (long *)0x0;
  iVar4 = func_0x00009750(&UNK_01ad7248,&plStack_a78);
  if (iVar4 < 0) {
    puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
/*  stripping the watermark breaks the license  */
    *puVar13 = &UNK_01dbcdf0;
    *(int *)(puVar13 + 1) = iVar4;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[2] = 0;
    ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_0000d05c;
  }
  plStack_a80 = (long *)0x0;
  uVar6 = (**(code **)(*plStack_a78 + 0x70))
                    (plStack_a78,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                     &plStack_a80);
  if ((int)uVar6 < 0) {
    bVar15 = false;
LAB_0000ccf0:
    if (plStack_a80 != (long *)0x0) {
      (**(code **)(*plStack_a80 + 0x10))();
    }
    if (plStack_a78 != (long *)0x0) {
      (**(code **)(*plStack_a78 + 0x10))();
    }
    if (bVar15) {
      uVar6 = (ulong)uStack_a5c;
    }
    func_0x01726f84(auStack_a70);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
      return uVar6;
    }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    iVar4 = ___stack_chk_fail();
  }
  else {
    uStack_88 = _UNK_01dbd1a0;
    uStack_90 = _UNK_01dbd198;
    uStack_80 = _UNK_01dbd1a8;
    if ((param_2 != 0) &&
       (iVar4 = (**(code **)(*plStack_a80 + 0x28))(plStack_a80,&uStack_90,3), iVar4 < 0)) {
      puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar13 = &UNK_01dbcdf0;
      *(int *)(puVar13 + 1) = iVar4;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[2] = 0;
      ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
      goto LAB_0000d05c;
    }
    uStack_a98 = (**(code **)(*param_3 + 0x18))(param_3);
    uStack_a90 = (**(code **)(*param_3 + 0x20))(param_3);
/*  chat: discord.gg/sdkhDjTex  */
    auStack_a88[0] = 0;
    plStack_aa0 = (long *)0x0;
    iVar4 = (**(code **)*param_3)(param_3,&UNK_01ad7190,&plStack_aa0);
    if (-1 < iVar4) {
      auStack_a50[0] = 0;
      iVar4 = (**(code **)(*plStack_aa0 + 0x28))(plStack_aa0,auStack_a50,auStack_a88);
      if (iVar4 < 0) {
        puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar13 = &UNK_01dbcdf0;
        *(int *)(puVar13 + 1) = iVar4;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[2] = 0;
        ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_0000d05c;
      }
    }
    plStack_aa8 = (long *)0x0;
    iVar4 = func_0x0172972c(*(undefined8 *)(param_1 + 0x10),&plStack_aa8);
    if (-1 < iVar4) {
      uVar7 = (**(code **)(*plStack_a80 + 0x20))();
      if ((int)uVar7 < 0) {
        puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar13 = &UNK_01dbcdf0;
        *(int *)(puVar13 + 1) = (int)uVar7;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[2] = 0;
        ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_0000d05c;
      }
      uVar8 = (**(code **)(*plStack_a80 + 0x18))();
      func_0x0172b368(&puStack_1c0,uVar7,uVar8,0);
      func_0x0000ded4(auStack_a50);
      cStack_aa9 = '\0';
      plStack_ab8 = (long *)0x0;
      func_0x00021b04(&puStack_1c0,auStack_a50,plStack_aa8,&plStack_ab8,&cStack_aa9);
      if (-1 < (char)bStack_541) {
/* reversing this took months of machine time - github.com/pengussy */
        uStack_550 = (ulong)bStack_541;
      }
      if (uStack_550 != 0) {
        func_0x0177fa40(uStack_540);
      }
      if (cStack_aa9 == '\x01') {
        iVar4 = (**(code **)*plStack_ab8)(plStack_ab8,&UNK_01ad7170,param_12);
        if (iVar4 < 0) {
          puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar13 = &UNK_01dbcdf0;
          *(int *)(puVar13 + 1) = iVar4;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[2] = 0;
          ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_0000d05c;
        }
        bVar15 = false;
        uVar6 = 0;
      }
      else {
        lVar9 = (**(code **)(*plStack_aa8 + 0x88))();
        plVar10 = plStack_aa8;
        if (lVar9 != 0) {
          if (plStack_aa8 != (long *)0x0) {
            plStack_aa8 = (long *)0x0;
            (**(code **)(*plVar10 + 0x10))();
          }
          iVar4 = func_0x0172972c(*(undefined8 *)(param_1 + 0x10),&plStack_aa8);
          if (iVar4 < 0) {
            puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
            *puVar13 = &UNK_01dbcdf0;
            *(int *)(puVar13 + 1) = iVar4;
            puVar13[3] = 0;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            puVar13[4] = 0;
            puVar13[2] = 0;
            ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
            goto LAB_0000d05c;
          }
        }
        uVar7 = _UNK_01ad70d0;
        pcStack_ad0 = (char *)0x0;
        lStack_ad8 = 0;
        uStack_ac8 = _UNK_01ad70d0;
        puStack_ae8 = &UNK_01dbce18;
        pcStack_ae0 = (char *)0x0;
        plStack_ac0 = plStack_aa8;
        if (plStack_aa8 != (long *)0x0) {
          (**(code **)(*plStack_aa8 + 8))();
        }
        uVar1 = s_warning__no_output_provided_for_d_01c21410._24_8_;
        uVar11 = s_warning__no_output_provided_for_d_01c21410._16_8_;
        uVar8 = s_warning__no_output_provided_for_d_01c21410._0_8_;
        puStack_a58 = &UNK_01ad732c;
        if ((((param_14 == (undefined8 *)0x0) && ((bStack_5cd & 1) != 0)) && ((bStack_598 & 1) == 0)
            ) && ((bStack_599 & 1) == 0)) {
          if ((bStack_470 & 1) == 0) {
            if ((ulong)(lStack_ad8 - (long)pcStack_ad0) < 0x77) {
              func_0x01770110(&puStack_ae8,
                              "warning: no output provided for debug - embedding PDB in shader container.  Use -Qembed_debug to silence this warning.\n"
                              ,0x77);
            }
            else {
              *(undefined8 *)(pcStack_ad0 + 8) = s_warning__no_output_provided_for_d_01c21410._8_8_;
              *(undefined8 *)pcStack_ad0 = uVar8;
              *(undefined8 *)(pcStack_ad0 + 0x18) = uVar1;
              *(undefined8 *)(pcStack_ad0 + 0x10) = uVar11;
              uVar1 = s_warning__no_output_provided_for_d_01c21410._88_8_;
              uVar11 = s_warning__no_output_provided_for_d_01c21410._80_8_;
// stripping the watermark breaks the license
              uVar8 = s_warning__no_output_provided_for_d_01c21410._64_8_;
              *(undefined8 *)(pcStack_ad0 + 0x48) =
                   s_warning__no_output_provided_for_d_01c21410._72_8_;
              *(undefined8 *)(pcStack_ad0 + 0x40) = uVar8;
              *(undefined8 *)(pcStack_ad0 + 0x58) = uVar1;
              *(undefined8 *)(pcStack_ad0 + 0x50) = uVar11;
              uVar8 = s_warning__no_output_provided_for_d_01c21410._96_8_;
              *(ulong *)(pcStack_ad0 + 0x68) =
                   CONCAT17(s_warning__no_output_provided_for_d_01c21410[0x6f],
                            s_warning__no_output_provided_for_d_01c21410._104_7_);
              *(undefined8 *)(pcStack_ad0 + 0x60) = uVar8;
              *(ulong *)(pcStack_ad0 + 0x6f) =
                   CONCAT71(s_warning__no_output_provided_for_d_01c21410._112_7_,
                            s_warning__no_output_provided_for_d_01c21410[0x6f]);
              uVar1 = s_warning__no_output_provided_for_d_01c21410._56_8_;
              uVar11 = s_warning__no_output_provided_for_d_01c21410._48_8_;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
              uVar8 = s_warning__no_output_provided_for_d_01c21410._32_8_;
              *(undefined8 *)(pcStack_ad0 + 0x28) =
                   s_warning__no_output_provided_for_d_01c21410._40_8_;
              *(undefined8 *)(pcStack_ad0 + 0x20) = uVar8;
              *(undefined8 *)(pcStack_ad0 + 0x38) = uVar1;
              *(undefined8 *)(pcStack_ad0 + 0x30) = uVar11;
              pcStack_ad0 = pcStack_ad0 + 0x77;
            }
          }
          iVar4 = (**(code **)(*plStack_a80 + 0x28))(plStack_a80,&puStack_a58,1);
          if (iVar4 < 0) {
            puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
            *puVar13 = &UNK_01dbcdf0;
            *(int *)(puVar13 + 1) = iVar4;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[2] = 0;
            ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
            goto LAB_0000d05c;
          }
        }
/* donate: donate/README.md - github.com/pengussy */
        plVar16 = *(long **)(param_1 + 0x10);
        plVar10 = (long *)(**(code **)(*plVar16 + 0x18))(plVar16,0x160);
        if (plVar10 != (long *)0x0) {
          *plVar10 = (long)&UNK_01dbceb0;
          *(undefined4 *)(plVar10 + 1) = 0;
          plVar10[2] = (long)plVar16;
          (**(code **)(*plVar16 + 8))(plVar16);
          *(undefined4 *)(plVar10 + 3) = 0;
          plVar10[4] = 0;
          plVar10[5] = 0;
          *(undefined4 *)(plVar10 + 6) = 0;
          plVar10[7] = 0;
          plVar10[8] = 0;
          *(undefined4 *)(plVar10 + 9) = 0;
          plVar10[10] = 0;
          plVar10[0xb] = 0;
          *(undefined4 *)(plVar10 + 0xc) = 0;
          plVar10[0xd] = 0;
          plVar10[0xe] = 0;
          *(undefined4 *)(plVar10 + 0xf) = 0;
          plVar10[0x10] = 0;
          plVar10[0x11] = 0;
          *(undefined4 *)(plVar10 + 0x12) = 0;
          *(undefined4 *)(plVar10 + 0x15) = 0;
          plVar10[0x13] = 0;
          plVar10[0x14] = 0;
          plVar10[0x16] = 0;
          plVar10[0x17] = 0;
          *(undefined4 *)(plVar10 + 0x18) = 0;
          plVar10[0x19] = 0;
          plVar10[0x1a] = 0;
          *(undefined4 *)(plVar10 + 0x1b) = 0;
/*  unlicensed copy if this notice is missing  */
          plVar10[0x1c] = 0;
          plVar10[0x1d] = 0;
          *(undefined4 *)(plVar10 + 0x1e) = 0;
          plVar10[0x1f] = 0;
          plVar10[0x20] = 0;
          *(undefined4 *)(plVar10 + 0x21) = 0;
          plVar10[0x22] = 0;
          plVar10[0x23] = 0;
          *(undefined4 *)(plVar10 + 0x24) = 0;
          *(undefined4 *)(plVar10 + 0x27) = 0;
          plVar10[0x25] = 0;
          plVar10[0x26] = 0;
          plVar10[0x28] = 0;
          plVar10[0x29] = 0;
          *(undefined4 *)(plVar10 + 0x2a) = 0;
          plVar10[0x2b] = _UNK_01ad70d8;
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        if (((iStack_5d8 == 0) || (iStack_5d8 == 0xfde9)) || (iStack_5d8 == 12000)) {
          *(int *)((long)plVar10 + 0x15c) = iStack_5d8;
        }
        plStack_af0 = (long *)0x0;
        plVar16 = *(long **)(param_1 + 8);
        uVar8 = (**(code **)(*plStack_a80 + 0x18))();
        uVar11 = (**(code **)(*plStack_a80 + 0x20))();
        uVar12 = (**(code **)(*plVar16 + 0x18))
                           (plVar16,&uStack_a98,uVar8,uVar11,param_11,&UNK_01ad7160,&plStack_af0);
        if ((int)uVar12 < 0) {
LAB_0000c81c:
          bVar15 = false;
joined_r0x0000c828:
          if (plStack_af0 != (long *)0x0) {
/* unlicensed copy if this notice is missing */
            (**(code **)(*plStack_af0 + 0x10))();
          }
        }
        else {
          if (plStack_af0 != (long *)0x0) {
            uVar12 = (**(code **)(*plStack_af0 + 0x18))(plStack_af0,&uStack_a5c);
            if ((int)uVar12 < 0) goto LAB_0000c81c;
            func_0x0000d70c(plVar10,plStack_af0);
            uVar2 = uStack_a5c;
            uVar5 = (**(code **)(*plStack_af0 + 0x50))();
            if (uVar5 < 0xe) {
              *(uint *)(plVar10 + 3) = uVar2;
              *(uint *)(plVar10 + 0x2b) = uVar5;
            }
            if (cStack_55c == '\x01') {
              ppppppplStack_b08 = (long *******)0x0;
              lStack_b00 = 0;
              uStack_af8 = 0;
              uStack_b20 = 0;
              uStack_b28 = 0;
              uStack_b30 = 0;
              uStack_b18 = uVar7;
              plStack_b38 = (long *)&UNK_01eb8ab0;
              ppppppplStack_b10 = (long *******)&ppppppplStack_b08;
              func_0x0176fcc8(&plStack_b38,0,0,0);
              func_0x017622d0(&plStack_b38);
              if ((long)uStack_af8._7_1_ < 0) {
                if (ppppppplStack_b08 != (long *******)0x0) {
                  ppppppplVar14 = ppppppplStack_b08;
                  lVar9 = lStack_b00;
                  goto LAB_0000c84c;
                }
                *(undefined4 *)(plVar10 + 0x27) = 0;
                func_0x01771e18(&plStack_b38);
              }
/* wm:reversing this took months of machine time */
              else {
                ppppppplVar14 = (long *******)&ppppppplStack_b08;
                lVar9 = (long)uStack_af8._7_1_;
LAB_0000c84c:
                *(undefined4 *)(plVar10 + 0x27) = 0xc;
                func_0x00009368(plVar10 + 0x25,*(undefined4 *)((long)plVar10 + 0x15c),ppppppplVar14,
                                lVar9);
                func_0x01771e18(&plStack_b38);
              }
              if (uStack_af8 < 0) {
                __ZdlPv(ppppppplStack_b08);
              }
            }
            if (lRam0000000002097d10 != 0) {
              ppppppplStack_b08 = (long *******)0x0;
              lStack_b00 = 0;
              uStack_af8 = 0;
              uStack_b20 = 0;
              uStack_b28 = 0;
/* reversing this took months of machine time */
              uStack_b30 = 0;
              uStack_b18 = uVar7;
              plStack_b38 = (long *)&UNK_01eb8ab0;
              ppppppplStack_b10 = (long *******)&ppppppplStack_b08;
              func_0x0176fcc8(&plStack_b38,0,0,0);
              func_0x0177fabc(&plStack_b38);
              func_0x0177fa8c();
              if ((long)uStack_af8._7_1_ < 0) {
                if (ppppppplStack_b08 != (long *******)0x0) {
                  ppppppplVar14 = ppppppplStack_b08;
                  lVar9 = lStack_b00;
                  goto LAB_0000c8f0;
                }
                *(undefined4 *)(plVar10 + 0x2a) = 0;
                func_0x01771e18(&plStack_b38);
              }
              else {
                ppppppplVar14 = (long *******)&ppppppplStack_b08;
                lVar9 = (long)uStack_af8._7_1_;
LAB_0000c8f0:
                *(undefined4 *)(plVar10 + 0x2a) = 0xd;
                func_0x00009368(plVar10 + 0x28,*(undefined4 *)((long)plVar10 + 0x15c),ppppppplVar14,
/* if you paid for this, you were scammed */
                                lVar9);
                func_0x01771e18(&plStack_b38);
              }
              if (uStack_af8 < 0) {
                __ZdlPv(ppppppplStack_b08);
              }
            }
            if (pcStack_ad0 != pcStack_ae0) {
              func_0x01771080(&puStack_ae8);
            }
            lVar9 = (**(code **)(*plStack_aa8 + 0x88))();
            if (lVar9 != 0) {
              plStack_b38 = (long *)0x0;
              iVar4 = (**(code **)(*plVar10 + 0x38))(plVar10,2,&UNK_01ad7190,&plStack_b38,0);
              if (((-1 < iVar4) && (plStack_b38 != (long *)0x0)) &&
                 (lVar9 = (**(code **)(*plStack_b38 + 0x20))(), lVar9 != 0)) {
                ppppppplStack_b08 = (long *******)0x0;
                iVar4 = (**(code **)(*plStack_a78 + 0x50))
                                  (plStack_a78,plStack_b38,&ppppppplStack_b08);
                if (iVar4 < 0) {
                  puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
                  *puVar13 = &UNK_01dbcdf0;
                  *(int *)(puVar13 + 1) = iVar4;
                  puVar13[3] = 0;
                  puVar13[4] = 0;
                  puVar13[2] = 0;
/* do not claim this as your own - github.com/pengussy */
                  ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
                  goto LAB_0000d05c;
                }
                uVar7 = (*(code *)(*ppppppplStack_b08)[6])();
                func_0x0000d688(&puStack_ae8,uVar7);
                if (pcStack_ad0 != pcStack_ae0) {
                  func_0x01771080(&puStack_ae8);
                }
                if (ppppppplStack_b08 != (long *******)0x0) {
                  (*(code *)(*ppppppplStack_b08)[2])();
                }
              }
              ppppppplStack_b08 = (long *******)0x0;
              uVar7 = (**(code **)(*plStack_aa8 + 0x70))();
              uVar8 = (**(code **)(*plStack_aa8 + 0x78))();
              iVar4 = func_0x01727244(uVar7,uVar8,0,1,1,0xfde9,0,&ppppppplStack_b08);
              if (iVar4 < 0) {
                puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
                *puVar13 = &UNK_01dbcdf0;
                *(int *)(puVar13 + 1) = iVar4;
                puVar13[3] = 0;
                puVar13[4] = 0;
                puVar13[2] = 0;
                ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
                goto LAB_0000d05c;
              }
              if (ppppppplStack_b08 != (long *******)0x0) {
                lVar9 = (*(code *)(*ppppppplStack_b08)[4])();
                if (lVar9 != 0) {
                  func_0x0000db64(plVar10 + 7);
                  if (ppppppplStack_b08 == (long *******)0x0) {
                    *(undefined4 *)(plVar10 + 9) = 0;
                    goto LAB_0000ca9c;
                  }
                  *(undefined4 *)(plVar10 + 9) = 2;
                  func_0x0000890c(plVar10 + 7,ppppppplStack_b08,
/* stripping the watermark breaks the license */
                                  *(undefined4 *)((long)plVar10 + 0x15c));
                }
                if (ppppppplStack_b08 != (long *******)0x0) {
                  (*(code *)(*ppppppplStack_b08)[2])();
                }
              }
LAB_0000ca9c:
              if (plStack_b38 != (long *)0x0) {
                (**(code **)(*plStack_b38 + 0x10))();
              }
            }
            plStack_b38 = (long *)0x0;
            if ((int)uStack_a5c < 0) {
LAB_0000cb80:
              lVar9 = 0;
LAB_0000cb84:
              plVar16 = plStack_b38;
              if ((param_14 != (undefined8 *)0x0) && (plStack_b38 != (long *)0x0)) {
                plStack_b38 = (long *)0x0;
                *param_14 = plVar16;
              }
              if ((param_13 != (long *)0x0) && (lVar9 != 0)) {
                *param_13 = lVar9;
                lVar9 = 0;
              }
              uVar12 = (**(code **)*plVar10)(plVar10,&UNK_01ad7170,param_12);
              if ((int)uVar12 < 0) {
                bVar15 = false;
              }
              else {
                uStack_a5c = 0;
                bVar15 = true;
                uVar12 = uVar6;
              }
            }
// WM - chat: discord.gg/sdkhDjTex
            else {
              ppppppplStack_b08 = (long *******)0x0;
              uStack_a5c = (**(code **)(*plVar10 + 0x38))
                                     (plVar10,3,&UNK_01ad7180,&plStack_b38,&ppppppplStack_b08);
              lVar9 = 0;
              if ((param_13 == (long *)0x0) || ((int)uStack_a5c < 0)) {
LAB_0000cb54:
                if (ppppppplStack_b08 != (long *******)0x0) {
                  bVar15 = true;
LAB_0000cb60:
                  (*(code *)(*ppppppplStack_b08)[2])();
                  if (!bVar15) {
                    bVar15 = false;
                    uVar12 = uVar6;
                    goto joined_r0x0000cb78;
                  }
                }
                goto LAB_0000cb84;
              }
              if (ppppppplStack_b08 == (long *******)0x0) goto LAB_0000cb80;
              (*(code *)(*ppppppplStack_b08)[4])();
              lVar9 = func_0x01730d88();
              if (lVar9 != 0) {
                uVar7 = (*(code *)(*ppppppplStack_b08)[3])();
                uVar8 = (*(code *)(*ppppppplStack_b08)[4])();
                _memcpy(lVar9,uVar7,uVar8);
                goto LAB_0000cb54;
              }
              if (ppppppplStack_b08 != (long *******)0x0) {
                bVar15 = false;
                lVar9 = 0;
                uVar6 = 0x8007000e;
                goto LAB_0000cb60;
              }
/* more drops soon - github.com/pengussy */
              lVar9 = 0;
              bVar15 = false;
              uVar12 = 0x8007000e;
            }
joined_r0x0000cb78:
            if (plStack_b38 != (long *)0x0) {
              (**(code **)(*plStack_b38 + 0x10))();
            }
            func_0x01730d8c(lVar9);
            goto joined_r0x0000c828;
          }
          bVar15 = false;
          uVar12 = 0x8007000e;
        }
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        puStack_ae8 = &UNK_01dbce18;
        if (pcStack_ad0 != pcStack_ae0) {
          func_0x01771080(&puStack_ae8);
        }
        if (plStack_ac0 != (long *)0x0) {
          (**(code **)(*plStack_ac0 + 0x10))();
          plStack_ac0 = (long *)0x0;
/* wm:donate: donate/README.md */
        }
        func_0x0176fb84(&puStack_ae8);
        uVar6 = uVar12;
      }
      if (plStack_ab8 != (long *)0x0) {
        (**(code **)(*plStack_ab8 + 0x10))();
      }
      func_0x0000e5d0(auStack_a50);
      if ((puStack_e8 != auStack_d0) && (puStack_e8 != (undefined1 *)0x0)) {
        __ZdaPv();
      }
      if (puStack_1c0 == puStack_1b8) {
        if (puStack_1c0 != auStack_1a8 && puStack_1c0 != (undefined1 *)0x0) {
LAB_0000ccc0:
          __ZdaPv(puStack_1c0);
        }
      }
      else {
        do {
          puStack_1b8 = puStack_1b8 + -0x18;
        } while (puStack_1b8 != puStack_1c0);
        if (puStack_1c0 != auStack_1a8 && puStack_1c0 != (undefined1 *)0x0) goto LAB_0000ccc0;
      }
      if (plStack_aa8 != (long *)0x0) {
        (**(code **)(*plStack_aa8 + 0x10))();
/* WM - origin: github.com/pengussy */
      }
      if (plStack_aa0 != (long *)0x0) {
        (**(code **)(*plStack_aa0 + 0x10))();
      }
      goto LAB_0000ccf0;
    }
  }
  puVar13 = (undefined8 *)___cxa_allocate_exception(0x28);
  *puVar13 = &UNK_01dbcdf0;
  *(int *)(puVar13 + 1) = iVar4;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[2] = 0;
  ___cxa_throw(puVar13,&DAT_01dbcd58,&DAT_0000755c);
LAB_0000d05c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xd060);
  (*pcVar3)();
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
}

