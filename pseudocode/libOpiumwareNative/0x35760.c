/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35760:91de9de169
 */

/* WARNING: Removing unreachable block (ram,0x00036b04) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00035760(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
            undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *******pppppppcVar7;
  undefined8 *******pppppppuVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  int iVar17;
  uint uVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *******ppppppplVar22;
  char *******pppppppcVar23;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  undefined8 uVar24;
  int *piVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined1 **ppuVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  undefined4 uVar34;
  long *plVar35;
  undefined8 uVar36;
  ulong uVar37;
  long lVar38;
  undefined1 auVar39 [16];
  long *plStack_11f0;
  long *plStack_11e8;
  long *plStack_11e0;
  long *plStack_11d8;
  char *******pppppppcStack_11d0;
  ulong uStack_11c8;
  ulong uStack_11c0;
  long *plStack_1170;
  long *plStack_1168;
  long *plStack_1150;
  long *plStack_1148;
  char *******pppppppcStack_1140;
// WM - watermarked copy - do not remove
  ulong uStack_1138;
  undefined8 uStack_1130;
  ulong uStack_1128;
  undefined8 uStack_1120;
  long *plStack_1118;
  int *piStack_1110;
  int *piStack_1108;
  long lStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  long lStack_10e8;
  long *******ppppppplStack_10e0;
  ulong uStack_10d8;
  ulong uStack_10d0;
  undefined8 uStack_10c8;
  undefined1 auStack_10c0 [16];
  undefined *puStack_10b0;
  undefined **ppuStack_10a8;
  undefined *puStack_10a0;
  long lStack_1098;
  undefined8 uStack_1090;
  long lStack_1088;
  undefined8 uStack_1080;
  long *plStack_1078;
  undefined1 *puStack_1070;
  long lStack_1068;
/* do not claim this as your own */
  undefined8 uStack_1060;
  byte bStack_1051;
  int *piStack_1050;
  long *plStack_1048;
  long *plStack_1040;
  long *plStack_1038;
  long lStack_1030;
  long lStack_1028;
  undefined1 auStack_1020 [16];
  long alStack_1010 [3];
  long *******ppppppplStack_ff8;
  ulong uStack_ff0;
  undefined8 uStack_fe8;
  byte bStack_f60;
  undefined8 *******pppppppuStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined4 uStack_ae0;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined4 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 *puStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 *puStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  char cStack_a58;
  undefined1 auStack_a48 [688];
  long lStack_798;
  undefined8 uStack_790;
// WM - if you paid for this, you were scammed
  undefined8 uStack_728;
  long lStack_720;
  undefined8 uStack_718;
  long lStack_710;
  undefined8 uStack_708;
  long lStack_700;
  undefined8 uStack_6f8;
  long lStack_6f0;
  undefined8 uStack_6e8;
  long lStack_6e0;
  int *piStack_6b0;
  long lStack_6a8;
  undefined1 auStack_640 [112];
  int iStack_5d0;
  byte bStack_5b9;
  char cStack_591;
  char cStack_578;
  ulong uStack_570;
  uint uStack_568;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 auStack_1a0 [192];
  undefined1 *puStack_e0;
  undefined1 auStack_c8 [64];
  long lStack_88;
  
  auVar39 = (*(code *)PTR____chkstk_darwin_01f201f8)();
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  lVar26 = auVar39._0_8_;
  lStack_88 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar36 = 0x80070057;
  if ((((param_3 == 0) || (param_4 == 0)) || ((int)param_5 == 0)) || (param_8 == 0)) {
LAB_00036aac:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_88) {
      return uVar36;
    }
    iVar17 = ___stack_chk_fail();
  }
  else {
    func_0x01726f20(auStack_1020,*(undefined8 *)(lVar26 + 0x18));
    func_0x00017a2c(&lStack_1028,param_3);
    func_0x00017a2c(&lStack_1030,auVar39._8_8_);
    plStack_1038 = (long *)0x0;
    (**(code **)(**(long **)(lVar26 + 0x28) + 0x30))();
    plStack_1040 = (long *)0x0;
    plStack_1048 = (long *)0x0;
    uVar36 = func_0x01726e64();
    iVar17 = func_0x0172972c(uVar36,&plStack_1038);
    if (-1 < iVar17) {
      if ((int)param_7 < 0) {
        puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar27 = &UNK_01dbcdf0;
        *(int *)(puVar27 + 1) = (int)param_7;
        puVar27[3] = 0;
        puVar27[4] = 0;
        puVar27[2] = 0;
        ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_00036de8;
      }
      func_0x0172b368(&puStack_1b8,param_7,param_6,0);
      func_0x0000ded4(auStack_a48);
      func_0x00017a2c(&piStack_1050,param_3);
      piStack_6b0 = piStack_1050;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (piStack_1050 == (int *)0x0) {
        lStack_6a8 = 0;
      }
      else {
        lStack_6a8 = _strlen(piStack_1050);
      }
      func_0x00021b04(&puStack_1b8,auStack_a48,plStack_1038,param_8,&bStack_1051);
      lVar33 = lStack_1030;
      if (auVar39._8_8_ != 0) {
        if (lStack_1030 == 0) {
          uStack_790 = 0;
        }
        else {
          uStack_790 = _strlen(lStack_1030);
        }
        lStack_798 = lVar33;
/*  origin: github.com/pengussy  */
      }
      if ((bStack_1051 & 1) == 0) {
        plVar35 = *(long **)(lVar26 + 0x18);
        plVar19 = (long *)(**(code **)(*plVar35 + 0x18))(plVar35,0x160);
        if (plVar19 != (long *)0x0) {
          *plVar19 = (long)&UNK_01dbceb0;
          *(undefined4 *)(plVar19 + 1) = 0;
          plVar19[2] = (long)plVar35;
          (**(code **)(*plVar35 + 8))(plVar35);
          *(undefined4 *)(plVar19 + 3) = 0;
          plVar19[4] = 0;
          plVar19[5] = 0;
          *(undefined4 *)(plVar19 + 6) = 0;
          plVar19[7] = 0;
          plVar19[8] = 0;
          *(undefined4 *)(plVar19 + 9) = 0;
          plVar19[10] = 0;
          plVar19[0xb] = 0;
          *(undefined4 *)(plVar19 + 0xc) = 0;
          plVar19[0xd] = 0;
          plVar19[0xe] = 0;
          *(undefined4 *)(plVar19 + 0xf) = 0;
          plVar19[0x10] = 0;
          plVar19[0x11] = 0;
          *(undefined4 *)(plVar19 + 0x12) = 0;
// WM - reversing this took months of machine time
          *(undefined4 *)(plVar19 + 0x15) = 0;
          plVar19[0x13] = 0;
          plVar19[0x14] = 0;
          plVar19[0x16] = 0;
          plVar19[0x17] = 0;
          *(undefined4 *)(plVar19 + 0x18) = 0;
          plVar19[0x19] = 0;
          plVar19[0x1a] = 0;
          *(undefined4 *)(plVar19 + 0x1b) = 0;
          plVar19[0x1c] = 0;
          plVar19[0x1d] = 0;
          *(undefined4 *)(plVar19 + 0x1e) = 0;
          plVar19[0x1f] = 0;
          plVar19[0x20] = 0;
          *(undefined4 *)(plVar19 + 0x21) = 0;
          plVar19[0x22] = 0;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          plVar19[0x23] = 0;
          *(undefined4 *)(plVar19 + 0x24) = 0;
          *(undefined4 *)(plVar19 + 0x27) = 0;
          plVar19[0x25] = 0;
          plVar19[0x26] = 0;
          plVar19[0x28] = 0;
          plVar19[0x29] = 0;
          *(undefined4 *)(plVar19 + 0x2a) = 0;
          plVar19[0x2b] = _UNK_01ad70d8;
          (**(code **)(*plVar19 + 8))(plVar19);
        }
        if (((iStack_5d0 != 0) && (iStack_5d0 != 12000)) && (iStack_5d0 != 0xfde9)) {
          puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar27 = &UNK_01dbcdf0;
          *(undefined4 *)(puVar27 + 1) = 0x80070057;
          puVar27[3] = 0;
          puVar27[4] = 0;
          puVar27[2] = 0;
          ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_00036de8;
        }
        *(int *)((long)plVar19 + 0x15c) = iStack_5d0;
        if (lStack_700 != 0) {
          ppppppplStack_ff8 = (long *******)0x0;
/* wm:reversing this took months of machine time */
          iVar17 = func_0x00038920(uStack_708,lStack_700,&UNK_00002ee0,&ppppppplStack_ff8);
          ppppppplVar22 = ppppppplStack_ff8;
          if (iVar17 < 0) {
            if (ppppppplStack_ff8 == (long *******)0x0) goto LAB_00035a20;
          }
          else {
            (*(code *)**ppppppplStack_ff8)(ppppppplStack_ff8,&UNK_01ad71b0,plVar19 + 0x1a);
          }
          (*(code *)(*ppppppplVar22)[2])(ppppppplVar22);
        }
LAB_00035a20:
        if (lStack_6e0 != 0) {
          ppppppplStack_ff8 = (long *******)0x0;
          iVar17 = func_0x00038920(uStack_6e8,lStack_6e0,&UNK_00002ee0,&ppppppplStack_ff8);
          ppppppplVar22 = ppppppplStack_ff8;
          if (iVar17 < 0) {
            if (ppppppplStack_ff8 == (long *******)0x0) goto LAB_00035a78;
          }
          else {
/* stripping the watermark breaks the license */
            (*(code *)**ppppppplStack_ff8)(ppppppplStack_ff8,&UNK_01ad71b0,plVar19 + 0xe);
          }
          (*(code *)(*ppppppplVar22)[2])(ppppppplVar22);
        }
LAB_00035a78:
        if (lStack_710 != 0) {
          ppppppplStack_ff8 = (long *******)0x0;
          iVar17 = func_0x00038920(uStack_718,lStack_710,&UNK_00002ee0,&ppppppplStack_ff8);
          ppppppplVar22 = ppppppplStack_ff8;
          if (iVar17 < 0) {
            if (ppppppplStack_ff8 == (long *******)0x0) goto LAB_00035ad0;
          }
          else {
            (*(code *)**ppppppplStack_ff8)(ppppppplStack_ff8,&UNK_01ad71b0,plVar19 + 8);
          }
          (*(code *)(*ppppppplVar22)[2])(ppppppplVar22);
        }
LAB_00035ad0:
        if (lStack_6f0 != 0) {
          ppppppplStack_ff8 = (long *******)0x0;
          iVar17 = func_0x00038920(uStack_6f8,lStack_6f0,&UNK_00002ee0,&ppppppplStack_ff8);
          ppppppplVar22 = ppppppplStack_ff8;
/*  do not claim this as your own  */
          if (iVar17 < 0) {
            if (ppppppplStack_ff8 == (long *******)0x0) goto LAB_00035b28;
          }
          else {
            (*(code *)**ppppppplStack_ff8)(ppppppplStack_ff8,&UNK_01ad71b0,plVar19 + 0x1d);
          }
          (*(code *)(*ppppppplVar22)[2])(ppppppplVar22);
        }
LAB_00035b28:
        if (lStack_720 != 0) {
          ppppppplStack_ff8 = (long *******)0x0;
          iVar17 = func_0x00038920(uStack_728,lStack_720,&UNK_00002ee0,&ppppppplStack_ff8);
          ppppppplVar22 = ppppppplStack_ff8;
          if (iVar17 < 0) {
            if (ppppppplStack_ff8 == (long *******)0x0) goto LAB_00035b80;
          }
          else {
            (*(code *)**ppppppplStack_ff8)(ppppppplStack_ff8,&UNK_01ad71b0,plVar19 + 5);
          }
          (*(code *)(*ppppppplVar22)[2])(ppppppplVar22);
        }
LAB_00035b80:
        lStack_1068 = 0;
        puStack_1070 = (undefined1 *)0x0;
        uStack_1060 = 0;
        uVar36 = func_0x01726e64();
        iVar17 = func_0x0172972c(uVar36,&plStack_1048);
        uVar36 = _UNK_01ad70d0;
        if (iVar17 < 0) {
          puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          *puVar27 = &UNK_01dbcdf0;
          *(int *)(puVar27 + 1) = iVar17;
          puVar27[3] = 0;
          puVar27[4] = 0;
          puVar27[2] = 0;
          ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_00036de8;
        }
        lStack_1088 = 0;
        uStack_1090 = 0;
        uStack_1080 = _UNK_01ad70d0;
        lStack_1098 = 0;
        puStack_10a0 = &UNK_01dbce18;
        plStack_1078 = plStack_1048;
        if (plStack_1048 != (long *)0x0) {
          (**(code **)(*plStack_1048 + 8))();
        }
        ppuStack_10a8 = &puStack_10a0;
        puStack_10b0 = &UNK_01eb0ad8;
        func_0x00a33920(auStack_10c0,&puStack_10b0);
        func_0x016e57b4(lVar26 + 0x20,&DAT_00a3393c,auStack_10c0,1);
        uStack_10c8 = 0;
        if (uStack_570 == 0xffffffff) {
          func_0x000210fc((long)&uStack_10c8 + 4,&uStack_10c8,0);
          uVar30 = uStack_10c8 >> 0x20;
          uVar32 = (uint)uStack_10c8;
        }
        else {
          uStack_10c8 = CONCAT44((int)uStack_570,uStack_568);
          uVar30 = uStack_570;
          uVar32 = uStack_568;
        }
        lVar33 = *(long *)(lVar26 + 0x28);
        *(int *)(lVar33 + 0x10) = (int)uVar30;
        *(uint *)(lVar33 + 0x14) = uVar32;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        uVar13 = _UNK_01ad81c8;
        uVar12 = _UNK_01ad81c0;
        uVar11 = _UNK_01ad81b8;
        uVar10 = _UNK_01ad81b0;
        if ((uStack_570 == 0) ||
           ((bVar9 = bStack_5b9 ^ 1, lStack_6a8 == 7 &&
            ((*piStack_6b0 == 0x5f62696c && *(int *)((long)piStack_6b0 + 3) == 0x315f365f ||
             (*piStack_6b0 == 0x5f62696c && *(int *)((long)piStack_6b0 + 3) == 0x325f365f)))))) {
          bVar9 = 0;
        }
        uVar37 = 0;
        lVar38 = 0;
        lVar33 = 0;
        ppppppplStack_10e0 = (long *******)0x0;
        uStack_10d8 = 0;
        uStack_10d0 = 0;
        uVar29 = 1;
        uStack_10f8 = 0;
        uStack_10f0 = 0;
        lStack_10e8 = 0;
        do {
          func_0x00017a2c(alStack_1010,*(undefined8 *)(param_4 + uVar37 * 8));
          lVar15 = alStack_1010[0];
          plVar35 = *(long **)(lVar26 + 0x28);
          if (alStack_1010[0] == 0) {
            uVar20 = 0;
          }
          else {
/* WM - more drops soon - github.com/pengussy */
            uVar20 = _strlen(alStack_1010[0]);
          }
          uVar18 = (**(code **)(*plVar35 + 0x20))(plVar35,lVar15,uVar20);
          lVar15 = alStack_1010[0];
          uVar21 = _strlen(alStack_1010[0]);
          if (0x7ffffffffffffff6 < uVar21) {
            func_0x0000aa50();
            goto LAB_00036de8;
          }
          if (uVar21 < 0x17) {
            uStack_fe8 = CONCAT17((char)uVar21,(undefined7)uStack_fe8);
            ppppppplVar22 = (long *******)&ppppppplStack_ff8;
          }
          else {
            uVar31 = (uVar21 & 0x7ffffffffffffff8) + 8;
            uVar4 = 0x19;
            if (uVar31 != 0x18) {
              uVar4 = uVar31;
            }
            ppppppplVar22 = (long *******)__Znwm(uVar4);
            uStack_fe8 = uVar4 | 0x8000000000000000;
            ppppppplStack_ff8 = ppppppplVar22;
            uStack_ff0 = uVar21;
          }
          _memmove(ppppppplVar22,lVar15,uVar21);
          *(char *)((long)ppppppplVar22 + uVar21) = '\0';
          if ((long)uStack_10d0 < 0) {
            __ZdlPv(ppppppplStack_10e0);
          }
          uStack_10d8 = uStack_ff0;
          ppppppplStack_10e0 = ppppppplStack_ff8;
          uStack_10d0 = uStack_fe8;
          plVar35 = *(long **)(lVar26 + 0x58);
          if (plVar35 != (long *)0x0) {
// found on a paste site? it was re-uploaded illegally
            uVar21 = uStack_ff0;
            ppppppplVar22 = ppppppplStack_ff8;
            if (-1 < (long)uStack_fe8) {
              uVar21 = uStack_fe8 >> 0x38;
              ppppppplVar22 = (long *******)&ppppppplStack_10e0;
            }
            do {
              while( true ) {
                plVar3 = (long *)plVar35[4];
                uVar31 = plVar35[5];
                if (-1 < (char)*(byte *)((long)plVar35 + 0x37)) {
                  plVar3 = plVar35 + 4;
                  uVar31 = (ulong)*(byte *)((long)plVar35 + 0x37);
                }
                uVar4 = uVar31;
                if (uVar21 <= uVar31) {
                  uVar4 = uVar21;
                }
                iVar17 = _memcmp(ppppppplVar22,plVar3,uVar4);
                if (iVar17 != 0) break;
                if (uVar21 == uVar31) {
                  if (plVar35 != (long *)(lVar26 + 0x58)) {
                    lVar38 = plVar35[7];
                  }
                  goto LAB_00035ec0;
                }
                if (uVar31 <= uVar21) goto LAB_00035e54;
LAB_00035ea4:
                plVar35 = (long *)*plVar35;
                if (plVar35 == (long *)0x0) goto LAB_00035ec0;
              }
              if (iVar17 < 0) goto LAB_00035ea4;
/* wm:proprietary - see LICENSE - do not sell */
LAB_00035e54:
              plVar35 = (long *)plVar35[1];
            } while (plVar35 != (long *)0x0);
          }
LAB_00035ec0:
          if (uVar37 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_10f8,&ppppppplStack_10e0);
            lVar33 = lVar38;
          }
          if (lVar38 == lVar33) {
            uVar29 = uVar29 & uVar18;
          }
          else {
            ppppppplStack_ff8 = (long *******)__Znwm(0x48);
            uStack_fe8 = uVar11;
            uStack_ff0 = uVar10;
            *(undefined2 *)(ppppppplStack_ff8 + 8) = 10;
            uVar14 = s_error__Cannot_link_libraries_wit_01c2394a._24_8_;
/* wm:found on a paste site? it was re-uploaded illegally */
            uVar24 = s_error__Cannot_link_libraries_wit_01c2394a._16_8_;
            uVar20 = s_error__Cannot_link_libraries_wit_01c2394a._0_8_;
            ppppppplStack_ff8[1] = (long ******)s_error__Cannot_link_libraries_wit_01c2394a._8_8_;
            *ppppppplStack_ff8 = (long ******)uVar20;
            ppppppplStack_ff8[3] = (long ******)uVar14;
            ppppppplStack_ff8[2] = (long ******)uVar24;
            uVar14 = s_error__Cannot_link_libraries_wit_01c2394a._56_8_;
            uVar24 = s_error__Cannot_link_libraries_wit_01c2394a._48_8_;
            uVar20 = s_error__Cannot_link_libraries_wit_01c2394a._32_8_;
            ppppppplStack_ff8[5] = (long ******)s_error__Cannot_link_libraries_wit_01c2394a._40_8_;
            ppppppplStack_ff8[4] = (long ******)uVar20;
            ppppppplStack_ff8[7] = (long ******)uVar14;
            ppppppplStack_ff8[6] = (long ******)uVar24;
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&pppppppcStack_11d0,"note: library \"",&uStack_10f8);
            plVar35 = (long *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                        (&pppppppcStack_11d0,"\" version: ");
            uStack_b18 = plVar35[1];
            pppppppuStack_b20 = (undefined8 *******)*plVar35;
            uStack_b10 = plVar35[2];
            plVar35[1] = 0;
            plVar35[2] = 0;
            *plVar35 = 0;
            if ((long)uStack_11c0 < 0) {
              __ZdlPv(pppppppcStack_11d0);
              if (lVar33 == 0) goto LAB_00035fa4;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
LAB_00035f6c:
              func_0x0003758c(&pppppppcStack_11d0,lVar33);
              uVar31 = uStack_11c0 >> 0x38;
              uVar21 = uStack_11c8;
            }
            else {
              if (lVar33 != 0) goto LAB_00035f6c;
LAB_00035fa4:
              pppppppcStack_11d0 = (char *******)__Znwm(0x20);
              uVar20 = s_No_version_info_available_01c239a8._0_8_;
              uStack_11c0 = uVar13;
              uStack_11c8 = uVar12;
              pppppppcStack_11d0[1] =
                   (char ******)
                   CONCAT71(s_No_version_info_available_01c239a8._9_7_,
                            s_No_version_info_available_01c239a8[8]);
              *pppppppcStack_11d0 = (char ******)uVar20;
              uVar20 = CONCAT17(s_No_version_info_available_01c239a8[0x10],
                                s_No_version_info_available_01c239a8._9_7_);
              *(undefined8 *)((long)pppppppcStack_11d0 + 0x11) =
                   s_No_version_info_available_01c239a8._17_8_;
              *(undefined8 *)((long)pppppppcStack_11d0 + 9) = uVar20;
              *(char *)((long)pppppppcStack_11d0 + 0x19) = '\0';
              uVar21 = 0x19;
              uVar31 = 0x80;
            }
            pppppppcVar7 = pppppppcStack_11d0;
            if (-1 < (char)uVar31) {
              uVar21 = uVar31;
              pppppppcVar7 = (char *******)&pppppppcStack_11d0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppppppuStack_b20,pppppppcVar7,uVar21);
            if ((long)uStack_11c0 < 0) {
/* WM - found on a paste site? it was re-uploaded illegally */
              __ZdlPv(pppppppcStack_11d0);
            }
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&pppppppcStack_1140,"note: library \"",&ppppppplStack_10e0);
            plVar35 = (long *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                        (&pppppppcStack_1140,"\" version: ");
            uStack_11c8 = plVar35[1];
            pppppppcStack_11d0 = (char *******)*plVar35;
            uStack_11c0 = plVar35[2];
            plVar35[1] = 0;
            plVar35[2] = 0;
            *plVar35 = 0;
            if ((long)uStack_1130 < 0) {
              __ZdlPv(pppppppcStack_1140);
              if (lVar38 == 0) goto LAB_0003606c;
LAB_00036048:
              func_0x0003758c(&pppppppcStack_1140,lVar38);
              uVar31 = uStack_1130 >> 0x38;
              uVar21 = uStack_1138;
            }
            else {
              if (lVar38 != 0) goto LAB_00036048;
LAB_0003606c:
              pppppppcStack_1140 = (char *******)__Znwm(0x20);
              uVar20 = s_No_version_info_available_01c239a8._0_8_;
              uStack_1130 = uVar13;
              uStack_1138 = uVar12;
              pppppppcStack_1140[1] =
                   (char ******)
                   CONCAT71(s_No_version_info_available_01c239a8._9_7_,
                            s_No_version_info_available_01c239a8[8]);
              *pppppppcStack_1140 = (char ******)uVar20;
/* keep the notice, keep the source honest - github.com/pengussy */
              uVar20 = CONCAT17(s_No_version_info_available_01c239a8[0x10],
                                s_No_version_info_available_01c239a8._9_7_);
              *(undefined8 *)((long)pppppppcStack_1140 + 0x11) =
                   s_No_version_info_available_01c239a8._17_8_;
              *(undefined8 *)((long)pppppppcStack_1140 + 9) = uVar20;
              *(char *)((long)pppppppcStack_1140 + 0x19) = '\0';
              uVar21 = 0x19;
              uVar31 = 0x80;
            }
            pppppppcVar7 = pppppppcStack_1140;
            if (-1 < (char)uVar31) {
              uVar21 = uVar31;
              pppppppcVar7 = (char *******)&pppppppcStack_1140;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppppppcStack_11d0,pppppppcVar7,uVar21);
            if ((long)uStack_1130 < 0) {
              __ZdlPv(pppppppcStack_1140);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            }
            uVar4 = uStack_b10;
            pppppppuVar8 = pppppppuStack_b20;
            uVar31 = uStack_11c0;
            pppppppcVar7 = pppppppcStack_11d0;
            uVar21 = uStack_b18;
            if (-1 < (long)uStack_b10) {
              uVar21 = uStack_b10 >> 0x38;
            }
            uVar5 = uStack_11c8;
            if (-1 < (long)uStack_11c0) {
              uVar5 = uStack_11c0 >> 0x38;
            }
            uVar2 = uVar5 + uVar21;
            if (0x7ffffffffffffff6 < uVar2) {
              func_0x0000aa50();
              goto LAB_00036de8;
            }
            if (uVar2 < 0x17) {
              uStack_1130 = CONCAT17((char)uVar2,(undefined7)uStack_1130);
              pppppppcVar23 = (char *******)&pppppppcStack_1140;
            }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
            else {
              uVar1 = (uVar2 & 0x7ffffffffffffff8) + 8;
              uVar6 = 0x19;
              if (uVar1 != 0x18) {
                uVar6 = uVar1;
              }
              pppppppcVar23 = (char *******)__Znwm(uVar6);
              uStack_1130 = uVar6 | 0x8000000000000000;
              pppppppcStack_1140 = pppppppcVar23;
              uStack_1138 = uVar2;
            }
            if (-1 < (long)uVar31) {
              pppppppcVar7 = (char *******)&pppppppcStack_11d0;
            }
            if (-1 < (long)uVar4) {
              pppppppuVar8 = &pppppppuStack_b20;
            }
            _memmove(pppppppcVar23,pppppppuVar8,uVar21);
            _memmove((char *)((long)pppppppcVar23 + uVar21),pppppppcVar7,uVar5);
            ((char *)((long)pppppppcVar23 + uVar21))[uVar5] = '\0';
            uVar21 = uStack_1138;
            pppppppcVar7 = pppppppcStack_1140;
            if (-1 < (long)uStack_1130) {
              uVar21 = uStack_1130 >> 0x38;
              pppppppcVar7 = (char *******)&pppppppcStack_1140;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&ppppppplStack_ff8,pppppppcVar7,uVar21);
            if ((long)uStack_1130 < 0) {
              __ZdlPv(pppppppcStack_1140);
            }
            uVar21 = uStack_ff0;
            ppppppplVar22 = ppppppplStack_ff8;
            if (-1 < (long)uStack_fe8) {
              uVar21 = uStack_fe8 >> 0x38;
/* watermarked copy - do not remove - github.com/pengussy */
              ppppppplVar22 = (long *******)&ppppppplStack_ff8;
            }
            func_0x01770110(&puStack_10a0,ppppppplVar22,uVar21);
            if ((long)uStack_11c0 < 0) {
              __ZdlPv(pppppppcStack_11d0);
            }
            if ((long)uStack_b10 < 0) {
              __ZdlPv(pppppppuStack_b20);
            }
            if ((long)uStack_fe8 < 0) {
              __ZdlPv(ppppppplStack_ff8);
              uVar29 = 0;
            }
            else {
              uVar29 = 0;
            }
          }
          if (alStack_1010[0] != 0) {
            __ZdaPv();
          }
          uVar37 = uVar37 + 1;
        } while (uVar37 != (param_5 & 0xffffffff));
        uStack_b18 = 0;
        pppppppuStack_b20 = (undefined8 *******)0x0;
        uStack_b10 = 0x2800000000;
        uStack_af8 = 0;
        uStack_b00 = 0;
        uStack_ae8 = 0;
/* donate: donate/README.md */
        uStack_af0 = 0;
        uStack_ae0 = 0x3f800000;
        uStack_ab8 = 0;
        uStack_ab0 = 0;
        uStack_ac8 = 0;
        uStack_ad8 = 0;
        uStack_ad0 = 0;
        uStack_ac0 = 0;
        puStack_aa0 = &uStack_a98;
        uStack_a90 = 0;
        uStack_a98 = 0;
        uStack_aa8 = 0;
        puStack_a88 = &uStack_a80;
        uStack_a80 = 0;
        puStack_a70 = &uStack_a68;
        uStack_a60 = 0;
        uStack_a68 = 0;
        uStack_a78 = 0;
        cStack_a58 = '\0';
        uVar18 = func_0x013e1790(&pppppppuStack_b20,auStack_640,&puStack_10a0);
        uVar20 = uStack_790;
        lVar33 = lStack_798;
        piVar25 = piStack_1050;
        if (cStack_578 == '\x01') {
          cStack_a58 = cStack_578;
        }
        if ((uVar29 & uVar18) == 0) {
          uVar34 = 0x80004005;
          goto LAB_00036864;
        }
        plVar35 = *(long **)(lVar26 + 0x28);
        if (piStack_1050 == (int *)0x0) {
          uVar24 = 0;
        }
        else {
          uVar24 = _strlen(piStack_1050);
        }
/* wm:keep the notice, keep the source honest */
        (**(code **)(*plVar35 + 0x38))
                  (&lStack_1100,plVar35,lVar33,uVar20,piVar25,uVar24,&pppppppuStack_b20);
        if (lStack_1100 == 0) {
LAB_0003685c:
          uVar34 = 0x80004005;
        }
        else {
          piVar25 = (int *)__Znwm(0x10);
          func_0x0164d068();
          *piVar25 = *piVar25 + 1;
          piStack_1108 = piVar25;
          piVar25 = (int *)__Znwm(0x88);
          piVar25[0x20] = 0;
          piVar25[0x21] = 0;
          piVar25[0x1e] = 0;
          piVar25[0x1f] = 0;
          piVar25[0x1c] = 0;
          piVar25[0x1d] = 0;
          piVar25[0x1a] = 0;
          piVar25[0x1b] = 0;
          piVar25[0x18] = 0;
          piVar25[0x19] = 0;
          piVar25[0x16] = 0;
          piVar25[0x17] = 0;
          piVar25[0x14] = 0;
          piVar25[0x15] = 0;
          piVar25[0x12] = 0;
          piVar25[0x13] = 0;
          piVar25[0x10] = 0;
          piVar25[0x11] = 0;
          piVar25[0xe] = 0;
          piVar25[0xf] = 0;
/* WM - origin: github.com/pengussy */
          piVar25[0xc] = 0;
          piVar25[0xd] = 0;
          piVar25[10] = 0;
          piVar25[0xb] = 0;
          *(undefined1 *)(piVar25 + 9) = 0;
          uVar20 = _UNK_01ad81d0;
          *(undefined8 *)(piVar25 + 3) = _UNK_01ad81d8;
          *(undefined8 *)(piVar25 + 1) = uVar20;
          uVar20 = _UNK_01ad81e0;
          *(undefined8 *)(piVar25 + 7) = _UNK_01ad81e8;
          *(undefined8 *)(piVar25 + 5) = uVar20;
          *piVar25 = 1;
          piStack_1110 = piVar25;
          uVar20 = __Znwm(0x48);
          func_0x00c8907c(uVar20,&puStack_10a0,piVar25,0);
          func_0x016481b8(&ppppppplStack_ff8,&piStack_1108,piStack_1110,uVar20,1);
          uStack_1128 = 0;
          uStack_1130 = 0;
          uStack_1120 = uVar36;
          pppppppcStack_1140 = (char *******)&UNK_01dbce18;
          uStack_1138 = 0;
          plStack_1118 = plStack_1038;
          if (plStack_1038 != (long *)0x0) {
            (**(code **)(*plStack_1038 + 8))();
          }
          func_0x0144f468(lStack_1100,&pppppppcStack_1140,0);
          if (uStack_1128 != uStack_1138) {
            func_0x01771080(&pppppppcStack_1140);
          }
          plStack_1148 = (long *)0x0;
          uVar36 = func_0x01726e64();
          iVar17 = func_0x0172972c(uVar36,&plStack_1148);
          if (iVar17 < 0) {
            puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
            *puVar27 = &UNK_01dbcdf0;
            *(int *)(puVar27 + 1) = iVar17;
            puVar27[3] = 0;
/*  stripping the watermark breaks the license  */
            puVar27[4] = 0;
            puVar27[2] = 0;
            ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
            goto LAB_00036de8;
          }
          plStack_1150 = (long *)0x0;
          uVar36 = func_0x01726e64();
          iVar17 = func_0x0172972c(uVar36,&plStack_1150);
          if (iVar17 < 0) {
            puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
            *puVar27 = &UNK_01dbcdf0;
            *(int *)(puVar27 + 1) = iVar17;
            puVar27[3] = 0;
            puVar27[4] = 0;
            puVar27[2] = 0;
            ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
            goto LAB_00036de8;
          }
          uVar18 = func_0x01730394(auStack_a48);
          uVar29 = 2;
          if (cStack_591 == '\0') {
            uVar29 = 3;
          }
          uVar36 = func_0x01726e64();
          plStack_11e0 = (long *)0x0;
          plStack_11d8 = (long *)0x0;
          func_0x00021064(&pppppppcStack_11d0,&lStack_1100,&plStack_1040,uVar36,uVar29 | uVar18,
                          &plStack_1038,0);
          if (plStack_11e0 != (long *)0x0) {
            (**(code **)(*plStack_11e0 + 0x10))();
            plStack_11e0 = (long *)0x0;
          }
          if (plStack_11d8 != (long *)0x0) {
            (**(code **)(*plStack_11d8 + 0x10))();
            plStack_11d8 = (long *)0x0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
          }
          if ((bVar9 & 1) == 0) {
            func_0x000212cc(&pppppppcStack_11d0);
LAB_00036564:
            plStack_11e8 = (long *)0x0;
            plVar35 = *(long **)(lVar26 + 0x30);
            if (((plVar35 != (long *)0x0) &&
                (iVar17 = (**(code **)(*plVar35 + 0x18))(plVar35,plStack_1040,&plStack_11e8),
                -1 < iVar17)) && (plStack_11e8 != (long *)0x0)) {
              func_0x000177d8(&plStack_1040,&plStack_11e8);
            }
            if ((plStack_1148 != (long *)0x0) &&
               (lVar26 = (**(code **)(*plStack_1148 + 0x78))(), lVar26 != 0)) {
              plStack_11f0 = (long *)0x0;
              iVar17 = (**(code **)*plStack_1148)(plStack_1148,&UNK_01ad7180,&plStack_11f0);
              if (iVar17 < 0) {
                puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
                *puVar27 = &UNK_01dbcdf0;
                *(int *)(puVar27 + 1) = iVar17;
                puVar27[3] = 0;
                puVar27[4] = 0;
                puVar27[2] = 0;
                ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
                goto LAB_00036de8;
              }
              if (plStack_11f0 == (long *)0x0) {
                *(undefined4 *)(plVar19 + 0x1b) = 0;
              }
/* WM - if you paid for this, you were scammed */
              else {
                *(undefined4 *)(plVar19 + 0x1b) = 8;
                func_0x0000890c(plVar19 + 0x19,plStack_11f0,*(undefined4 *)((long)plVar19 + 0x15c));
                if (plStack_11f0 != (long *)0x0) {
                  (**(code **)(*plStack_11f0 + 0x10))();
                }
              }
            }
            if ((plStack_1150 != (long *)0x0) &&
               (lVar26 = (**(code **)(*plStack_1150 + 0x78))(), lVar26 != 0)) {
              plStack_11f0 = (long *)0x0;
              iVar17 = (**(code **)*plStack_1150)(plStack_1150,&UNK_01ad7180,&plStack_11f0);
              if (iVar17 < 0) {
                puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
                *puVar27 = &UNK_01dbcdf0;
                *(int *)(puVar27 + 1) = iVar17;
                puVar27[3] = 0;
                puVar27[4] = 0;
                puVar27[2] = 0;
                ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
                goto LAB_00036de8;
              }
              if ((((int)uVar30 != 1 || 4 < uVar32) & bVar9) == 1) {
                func_0x00022908(plStack_11f0,&ppppppplStack_ff8,0);
              }
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
              if (plStack_11f0 == (long *)0x0) {
                *(undefined4 *)(plVar19 + 0x1e) = 0;
              }
              else {
                *(undefined4 *)(plVar19 + 0x1e) = 9;
                func_0x0000890c(plVar19 + 0x1c,plStack_11f0,*(undefined4 *)((long)plVar19 + 0x15c));
                if (plStack_11f0 != (long *)0x0) {
                  (**(code **)(*plStack_11f0 + 0x10))();
                }
              }
            }
            plStack_11f0 = (long *)0x0;
            iVar17 = func_0x01728430(alStack_1010,0x14,&plStack_11f0);
            if (iVar17 < 0) {
              puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
              *puVar27 = &UNK_01dbcdf0;
              *(int *)(puVar27 + 1) = iVar17;
              puVar27[3] = 0;
              puVar27[4] = 0;
              puVar27[2] = 0;
              ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
              goto LAB_00036de8;
            }
            if (plStack_11f0 == (long *)0x0) {
              *(undefined4 *)(plVar19 + 0xf) = 0;
              if (plStack_1040 == (long *)0x0) goto LAB_00036710;
LAB_000366e4:
/* wm:more drops soon - github.com/pengussy */
              *(undefined4 *)(plVar19 + 6) = 1;
              func_0x0000890c(plVar19 + 4,plStack_1040,*(undefined4 *)((long)plVar19 + 0x15c));
            }
            else {
              *(undefined4 *)(plVar19 + 0xf) = 4;
              func_0x0000890c(plVar19 + 0xd,plStack_11f0,*(undefined4 *)((long)plVar19 + 0x15c));
              if (plStack_1040 != (long *)0x0) goto LAB_000366e4;
LAB_00036710:
              *(undefined4 *)(plVar19 + 6) = 0;
            }
            if (plStack_11f0 != (long *)0x0) {
              (**(code **)(*plStack_11f0 + 0x10))();
            }
            if (plStack_11e8 != (long *)0x0) {
              (**(code **)(*plStack_11e8 + 0x10))();
            }
          }
          else {
            iVar17 = func_0x00021e24(&pppppppcStack_11d0);
/*  no support for modified copies  */
            if (-1 < iVar17) goto LAB_00036564;
          }
          if (plStack_1168 != (long *)0x0) {
            (**(code **)(*plStack_1168 + 0x10))();
            plStack_1168 = (long *)0x0;
          }
          if (plStack_1170 != (long *)0x0) {
            (**(code **)(*plStack_1170 + 0x10))();
            plStack_1170 = (long *)0x0;
          }
          pppppppcVar7 = pppppppcStack_11d0;
          pppppppcStack_11d0 = (char *******)0x0;
          if (pppppppcVar7 != (char *******)0x0) {
            func_0x01704330();
            __ZdlPv();
          }
          if (plStack_1150 != (long *)0x0) {
            (**(code **)(*plStack_1150 + 0x10))();
          }
          if (plStack_1148 != (long *)0x0) {
            (**(code **)(*plStack_1148 + 0x10))();
          }
          pppppppcStack_1140 = (char *******)&UNK_01dbce18;
          if (uStack_1128 != uStack_1138) {
            func_0x01771080(&pppppppcStack_1140);
          }
          if (plStack_1118 != (long *)0x0) {
            (**(code **)(*plStack_1118 + 0x10))();
            plStack_1118 = (long *)0x0;
          }
/* donate: donate/README.md - github.com/pengussy */
          func_0x0176fb84(&pppppppcStack_1140);
          func_0x016484cc(&ppppppplStack_ff8);
          if ((piStack_1110 != (int *)0x0) &&
             (iVar17 = *piStack_1110, *piStack_1110 = iVar17 + -1, iVar17 + -1 == 0)) {
            func_0x00038f98();
            __ZdlPv();
          }
          if ((piStack_1108 != (int *)0x0) &&
             (iVar17 = *piStack_1108, *piStack_1108 = iVar17 + -1, iVar17 + -1 == 0)) {
            func_0x0164d114();
            __ZdlPv();
          }
          lVar26 = lStack_1100;
          lStack_1100 = 0;
          if (lVar26 == 0) {
            uVar34 = 0;
            if (bStack_f60 != 0) goto LAB_0003685c;
          }
          else {
            func_0x01704330();
            __ZdlPv();
            if ((bStack_f60 & 1) != 0) goto LAB_0003685c;
            uVar34 = 0;
          }
        }
LAB_00036864:
        if (lStack_1088 != lStack_1098) {
          func_0x01771080(&puStack_10a0);
        }
        plVar35 = plStack_1048;
        if (plStack_1048 != (long *)0x0) {
          (**(code **)(*plStack_1048 + 8))(plStack_1048);
        }
        ppppppplStack_ff8 = (long *******)0x0;
/* keep the notice, keep the source honest */
        iVar17 = (**(code **)*plVar35)(plVar35,&UNK_01ad7180,&ppppppplStack_ff8);
        if (iVar17 < 0) {
          puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar27 = &UNK_01dbcdf0;
          *(int *)(puVar27 + 1) = iVar17;
          puVar27[3] = 0;
          puVar27[4] = 0;
          puVar27[2] = 0;
          ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_00036de8;
        }
        iVar17 = func_0x017296f4(ppppppplStack_ff8);
        if (iVar17 == 0) {
          if (ppppppplStack_ff8 == (long *******)0x0) {
LAB_00036918:
            *(undefined4 *)(plVar19 + 9) = 0;
          }
          else {
            *(undefined4 *)(plVar19 + 9) = 2;
            func_0x0000890c(plVar19 + 7,ppppppplStack_ff8,*(undefined4 *)((long)plVar19 + 0x15c));
          }
        }
        else {
          if ((long)uStack_1060._7_1_ < 0) {
            if (puStack_1070 == (undefined1 *)0x0) goto LAB_00036918;
            ppuVar28 = (undefined1 **)puStack_1070;
            lVar26 = lStack_1068;
          }
          else {
            ppuVar28 = &puStack_1070;
            lVar26 = (long)uStack_1060._7_1_;
// WM - unlicensed copy if this notice is missing
          }
          *(undefined4 *)(plVar19 + 9) = 2;
          func_0x00009368(plVar19 + 7,*(undefined4 *)((long)plVar19 + 0x15c),ppuVar28,lVar26);
        }
        *(undefined4 *)(plVar19 + 3) = uVar34;
        *(undefined4 *)(plVar19 + 0x2b) = 1;
        iVar17 = (**(code **)*plVar19)(plVar19,&UNK_01ad7170,param_8);
        if (iVar17 < 0) {
          puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar27 = &UNK_01dbcdf0;
          *(int *)(puVar27 + 1) = iVar17;
          puVar27[3] = 0;
          puVar27[4] = 0;
          puVar27[2] = 0;
          ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_00036de8;
        }
        if (ppppppplStack_ff8 != (long *******)0x0) {
          (*(code *)(*ppppppplStack_ff8)[2])();
        }
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x00038a5c(&pppppppuStack_b20);
        if (lStack_10e8 < 0) {
          __ZdlPv(uStack_10f8);
        }
        if ((long)uStack_10d0 < 0) {
          __ZdlPv(ppppppplStack_10e0);
        }
        puStack_10a0 = &UNK_01dbce18;
        if (lStack_1088 != lStack_1098) {
          func_0x01771080(&puStack_10a0);
        }
        if (plStack_1078 != (long *)0x0) {
          (**(code **)(*plStack_1078 + 0x10))();
          plStack_1078 = (long *)0x0;
        }
        func_0x0176fb84(&puStack_10a0);
/* wm:chat: discord.gg/sdkhDjTex */
        if (uStack_1060 < 0) {
          __ZdlPv(puStack_1070);
        }
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      if (piStack_1050 != (int *)0x0) {
        __ZdaPv();
      }
      func_0x0000e5d0(auStack_a48);
      if ((puStack_e0 != auStack_c8) && (puStack_e0 != (undefined1 *)0x0)) {
        __ZdaPv();
      }
      if (puStack_1b8 == puStack_1b0) {
        if (puStack_1b8 != auStack_1a0 && puStack_1b8 != (undefined1 *)0x0) {
LAB_00036a44:
          __ZdaPv(puStack_1b8);
        }
      }
      else {
        do {
          puStack_1b0 = puStack_1b0 + -0x18;
        } while (puStack_1b0 != puStack_1b8);
        if (puStack_1b8 != auStack_1a0 && puStack_1b8 != (undefined1 *)0x0) goto LAB_00036a44;
// WM - chat: discord.gg/sdkhDjTex
      }
      if (plStack_1048 != (long *)0x0) {
        (**(code **)(*plStack_1048 + 0x10))();
      }
      if (plStack_1040 != (long *)0x0) {
        (**(code **)(*plStack_1040 + 0x10))();
      }
      uVar36 = 0;
      if (plStack_1038 != (long *)0x0) {
        (**(code **)(*plStack_1038 + 0x10))();
      }
      if (lStack_1030 != 0) {
        __ZdaPv();
      }
      if (lStack_1028 != 0) {
        __ZdaPv();
      }
      func_0x01726f84(auStack_1020);
      goto LAB_00036aac;
    }
  }
  puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
  *puVar27 = &UNK_01dbcdf0;
/* WM - donate: donate/README.md */
  *(int *)(puVar27 + 1) = iVar17;
  puVar27[3] = 0;
  puVar27[4] = 0;
  puVar27[2] = 0;
  ___cxa_throw(puVar27,&DAT_01dbcd58,&DAT_0000755c);
LAB_00036de8:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x36dec);
  (*pcVar16)();
}

