/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3834b0:3ef87256e9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_003834b0(long param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
/* no support for modified copies - github.com/pengussy */
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  long lStack_128;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  long *plStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  long lStack_70;
  
  uVar5 = _UNK_01ae6c98;
  uVar4 = _UNK_01ae6c90;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar12 = *(long *)(param_1 + 0x88);
  if (lVar12 == 0) {
    plVar20 = *(long **)(param_1 + 0x30);
    if (plVar20 != (long *)0x0) {
      lVar12 = param_1 + 0x90;
      do {
        uVar23 = plVar20[2];
        uStack_88 = (undefined5)uVar5;
        uStack_90 = uVar4;
        uStack_83 = 0;
        uStack_80 = 0;
        *(ulong *)(param_1 + 1000) = *(long *)(param_1 + 1000) + uVar23;
        if ((long)uVar23 < 0) {
LAB_00383dc4:
          bVar3 = true;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
LAB_00383dc8:
          *(long *)(param_1 + 0x30) = *plVar20;
          plVar16 = (long *)plVar20[1];
          if (*(long **)(param_1 + 0x38) != plVar20) goto LAB_00383e0c;
LAB_00383e90:
          *(long **)(param_1 + 0x38) = plVar16;
          lVar17 = *plVar20;
        }
        else {
          plStack_f0 = plVar20 + 0x24;
          plStack_e8 = plStack_f0;
          uStack_e0 = uVar23;
          if (uVar23 == 0) goto LAB_00383dc4;
          uVar22 = 0;
          bVar3 = false;
          do {
            while( true ) {
              uVar18 = uStack_e0;
              plVar16 = plStack_f0;
              if ((uStack_e0 < 7) || (0x3f < uVar22)) goto LAB_00383de4;
              uStack_98 = 0;
              plStack_a8 = plStack_e8;
              plStack_b0 = plStack_f0;
              uStack_a0 = uStack_e0;
              uStack_d8 = 0xffffffffffffffff;
              lVar17 = *(long *)(param_1 + 0x60);
              if (lVar17 != 0) break;
              if ((uStack_e0 < 0xfffffffffffffe37) &&
                 (lVar17 = func_0x019eb530(uStack_e0 + 0x1c8,
                                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_rx.c"
                                           ,0x234), lVar17 != 0)) {
                *(undefined8 *)(lVar17 + 0x48) = 0;
                *(undefined8 *)(lVar17 + 0x50) = 0;
                *(undefined8 *)(lVar17 + 0x58) = 0;
                *(ulong *)(lVar17 + 0x60) = uVar18;
                *(undefined8 *)(lVar17 + 0x68) = 0;
                lVar19 = *(long *)(param_1 + 0x68);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
                if (lVar19 != 0) {
                  *(long *)(lVar19 + 0x48) = lVar17;
                }
                *(undefined8 *)(lVar17 + 0x48) = 0;
                *(long *)(lVar17 + 0x50) = lVar19;
                *(long *)(param_1 + 0x68) = lVar17;
                if (*(long *)(param_1 + 0x60) == 0) {
                  *(long *)(param_1 + 0x60) = lVar17;
                }
                *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
                break;
              }
joined_r0x00383858:
              uVar22 = uVar22 + 1;
              if (uStack_e0 == 0) goto LAB_00383de4;
            }
            uVar21 = 1L << (uVar22 & 0x3f);
            uVar18 = plVar20[4];
            uVar13 = (ulong)plVar20[5] >> (uVar22 & 0x3f);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
            iVar9 = func_0x00391e70(&plStack_f0,*(undefined8 *)(param_1 + 0x18),(uint)uVar13 & 1 ^ 1
                                    ,0,lVar17 + 0x70,auStack_d0,0);
            plVar6 = plStack_f0;
            if (iVar9 == 0) {
LAB_0038395c:
              plVar20[4] = plVar20[4] | uVar21;
              plStack_f0 = (long *)((long)plStack_f0 + uStack_e0);
              uStack_e0 = 0;
              goto joined_r0x00383858;
            }
            if (uVar22 == 0) {
              uStack_90 = *(undefined8 *)(lVar17 + 0x78);
              uStack_88 = (undefined5)*(undefined8 *)(lVar17 + 0x80);
              uStack_83 = (undefined3)*(undefined8 *)(lVar17 + 0x85);
              uStack_80 = (undefined5)((ulong)*(undefined8 *)(lVar17 + 0x85) >> 0x18);
              if ((uVar18 & 1) == 0) goto LAB_00383728;
LAB_00383918:
              if (plVar6 != (long *)0x0) {
                plVar20[4] = plVar20[4] | uVar21;
                uVar18 = (long)plVar6 - (long)plStack_f0;
                if (uVar18 <= uStack_e0) {
                  plStack_f0 = (long *)((long)plStack_f0 + uVar18);
                  uStack_e0 = uStack_e0 - uVar18;
                }
                goto joined_r0x00383858;
              }
              goto LAB_0038395c;
            }
            if ((uVar18 & uVar21) != 0) goto LAB_00383918;
LAB_00383728:
            if ((1 < *(uint *)(lVar17 + 0x74)) || (bVar2 = *(byte *)(lVar17 + 0x70), bVar2 == 2))
            goto LAB_00383918;
            bVar7 = (bVar2 & 0xfd) != 4;
            if (uVar22 != 0) {
              if ((((bVar7) && ((byte)uStack_90 < 0x14)) &&
                  ((byte)uStack_90 == *(byte *)(lVar17 + 0x78))) &&
                 (iVar9 = _memcmp((long)&uStack_90 + 1,lVar17 + 0x79), iVar9 == 0))
/* WM - donate: donate/README.md */
              goto LAB_00383784;
              goto LAB_00383918;
            }
            if (bVar7) {
LAB_00383784:
              if (bVar2 == 5) {
                uVar8 = 3;
                bVar7 = true;
                iVar9 = func_0x003842fc(param_1 + 0xa8,3);
              }
              else if (bVar2 == 3) {
                bVar7 = false;
                uVar8 = 2;
                iVar9 = func_0x003842fc(param_1 + 0xa8,2);
              }
              else {
                bVar7 = false;
                uVar8 = bVar2 == 2;
                iVar9 = func_0x003842fc(param_1 + 0xa8,uVar8);
              }
              if (iVar9 == 0) {
/*  do not claim this as your own  */
LAB_00383828:
                uVar18 = (long)plVar6 - (long)plStack_f0;
                if (uVar18 <= uStack_e0) {
                  plStack_f0 = (long *)((long)plStack_f0 + uVar18);
                  uStack_e0 = uStack_e0 - uVar18;
                }
                bVar3 = true;
                goto joined_r0x00383858;
              }
              if (iVar9 != 1) goto LAB_00383918;
              if ((bVar7) && (*(char *)(param_1 + 0x421) == '\0')) goto LAB_00383828;
              if (*(char *)(lVar17 + 0x70) == '\x01') {
                lVar15 = *(long *)(lVar17 + 0xa8);
                lStack_128 = *(long *)(lVar17 + 0xb0);
                lVar19 = lVar15;
                if (lStack_128 != 0) {
                  lVar17 = func_0x019e43b0(param_1 + 0x60,lVar17);
                  if (lVar17 == 0) goto LAB_00383918;
                  lVar19 = lVar17 + 0x1c8;
/*  more drops soon - github.com/pengussy  */
                  _memcpy(lVar19,lVar15,lStack_128);
                }
                *(long *)(lVar17 + 0xa8) = lVar19;
              }
              else {
                lStack_128 = 0;
              }
              plStack_e8 = plStack_a8;
              plStack_f0 = plStack_b0;
              uStack_e0 = uStack_a0;
              lVar19 = func_0x019e47e4(param_1 + 0xa8,uVar8,1);
              if ((uVar13 & 1) == 0) {
                iVar9 = func_0x00391af8(lVar19,auStack_d0);
                if (iVar9 != 0) {
                  plVar20[5] = plVar20[5] | uVar21;
                  iVar9 = func_0x00391e70(&plStack_f0,*(undefined8 *)(param_1 + 0x18),0,0,
                                          lVar17 + 0x70,0,0);
                  if (iVar9 == 1) goto LAB_003838d0;
                }
                goto LAB_00383918;
              }
LAB_003838d0:
              uVar14 = *(uint *)(lVar17 + 0x70) - 2;
              if ((uVar14 & 0xff) < 4) {
                lVar15 = *(long *)(&UNK_01ae6ca8 + ((ulong)uVar14 & 0xff) * 8);
              }
              else {
                lVar15 = 0;
              }
              iVar9 = func_0x003925d4(lVar17 + 0xa2,*(uint *)(lVar17 + 0x70) >> 10 & 0xf,
                                      *(undefined8 *)(lVar12 + lVar15 * 8),lVar17 + 200);
              if (iVar9 == 0) goto LAB_00383918;
              if (*(code **)(param_1 + 0x428) != (code *)0x0) {
/* wm:found on a paste site? it was re-uploaded illegally */
                (**(code **)(param_1 + 0x428))
                          (0,1,0x201,plVar16,
                           (long)plVar6 + (-*(long *)(lVar17 + 0xb8) - (long)plVar16),
                           *(undefined8 *)(param_1 + 0x438),*(undefined8 *)(param_1 + 0x430));
              }
              lVar15 = *(long *)(lVar17 + 0xc0);
              lVar17 = func_0x019e43b0(param_1 + 0x60,lVar17,*(long *)(lVar17 + 0xb8) + lStack_128);
              if (lVar17 == 0) goto LAB_0038395c;
              lVar26 = lVar17 + lStack_128 + 0x1c8;
              iVar9 = func_0x019e4528(param_1,lVar26,*(undefined8 *)(lVar17 + 0xc0),
                                      *(undefined8 *)(lVar17 + 0xb8),&uStack_98,plVar16,
                                      lVar15 - (long)plVar16,*(undefined8 *)(lVar17 + 200),uVar8,
                                      &uStack_d8);
              if (iVar9 == 0) goto LAB_00383918;
              uVar14 = *(uint *)(lVar17 + 0x70);
              if ((uVar14 - 2 & 0xff) < 4) {
                uVar11 = *(undefined4 *)(&UNK_01ae6c80 + ((ulong)(uVar14 - 2) & 0xff) * 4);
              }
              else {
                uVar11 = 0;
              }
              if (*(code **)(param_1 + 0x400) != (code *)0x0) {
                iVar9 = (**(code **)(param_1 + 0x400))
                                  (*(undefined8 *)(lVar17 + 200),uVar11,
                                   *(undefined8 *)(param_1 + 0x408));
                if (iVar9 == 0) goto LAB_00383918;
                uVar14 = *(uint *)(lVar17 + 0x70);
              }
              if (((uVar14 & 0xff) == 5) &&
/* wm:unlicensed copy if this notice is missing */
                 ((*(ulong *)(lVar19 + 0x50) & 1) != (ulong)(uVar14 >> 9 & 1))) {
                func_0x003842ac(param_1,*(undefined8 *)(lVar17 + 200));
              }
              plVar20[4] = plVar20[4] | uVar21;
              *(undefined8 *)(lVar17 + 0xb8) = uStack_98;
              *(long *)(lVar17 + 0xc0) = lVar26;
              *(undefined8 *)(lVar17 + 0x58) = uStack_98;
              *(ulong *)(lVar17 + 0x1b0) = uVar23;
              *(undefined8 *)(lVar17 + 0x1b8) = uStack_d8;
              if ((byte)(*(char *)(lVar17 + 0x70) - 2U) < 4) {
                lVar19 = *(long *)(&UNK_01ae6ca8 + (ulong)(byte)(*(char *)(lVar17 + 0x70) - 2) * 8);
              }
              else {
                lVar19 = 0;
              }
              if (*(ulong *)(lVar12 + lVar19 * 8) < *(ulong *)(lVar17 + 200)) {
                *(ulong *)(lVar12 + lVar19 * 8) = *(ulong *)(lVar17 + 200);
              }
              lVar15 = plVar20[8];
              lVar19 = plVar20[7];
              lVar26 = plVar20[9];
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              lVar30 = plVar20[0xc];
              lVar28 = plVar20[0xb];
              *(long *)(lVar17 + 0xe8) = plVar20[10];
              *(long *)(lVar17 + 0xe0) = lVar26;
              *(long *)(lVar17 + 0xf8) = lVar30;
              *(long *)(lVar17 + 0xf0) = lVar28;
              *(long *)(lVar17 + 0xd8) = lVar15;
              *(long *)(lVar17 + 0xd0) = lVar19;
              lVar15 = plVar20[0xe];
              lVar19 = plVar20[0xd];
              lVar28 = plVar20[0x10];
              lVar26 = plVar20[0xf];
              lVar32 = plVar20[0x12];
              lVar30 = plVar20[0x11];
              uVar24 = *(undefined8 *)((long)plVar20 + 0x94);
              *(undefined8 *)(lVar17 + 0x134) = *(undefined8 *)((long)plVar20 + 0x9c);
              *(undefined8 *)(lVar17 + 300) = uVar24;
              *(long *)(lVar17 + 0x118) = lVar28;
              *(long *)(lVar17 + 0x110) = lVar26;
              *(long *)(lVar17 + 0x128) = lVar32;
              *(long *)(lVar17 + 0x120) = lVar30;
              *(long *)(lVar17 + 0x108) = lVar15;
              *(long *)(lVar17 + 0x100) = lVar19;
              uVar25 = *(undefined8 *)((long)plVar20 + 0xec);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
              uVar24 = *(undefined8 *)((long)plVar20 + 0xe4);
              uVar29 = *(undefined8 *)((long)plVar20 + 0xfc);
              uVar27 = *(undefined8 *)((long)plVar20 + 0xf4);
              lVar19 = plVar20[0x20];
              uVar33 = *(undefined8 *)((long)plVar20 + 0xdc);
              uVar31 = *(undefined8 *)((long)plVar20 + 0xd4);
              *(long *)(lVar17 + 0x1a0) = plVar20[0x21];
              *(long *)(lVar17 + 0x198) = lVar19;
              *(undefined8 *)(lVar17 + 0x184) = uVar25;
              *(undefined8 *)(lVar17 + 0x17c) = uVar24;
              *(undefined8 *)(lVar17 + 0x194) = uVar29;
              *(undefined8 *)(lVar17 + 0x18c) = uVar27;
              *(undefined8 *)(lVar17 + 0x174) = uVar33;
              *(undefined8 *)(lVar17 + 0x16c) = uVar31;
              uVar25 = *(undefined8 *)((long)plVar20 + 0xac);
              uVar24 = *(undefined8 *)((long)plVar20 + 0xa4);
/*  thanks for reading - discord.gg/sdkhDjTex  */
              uVar27 = *(undefined8 *)((long)plVar20 + 0xb4);
              uVar31 = *(undefined8 *)((long)plVar20 + 0xcc);
              uVar29 = *(undefined8 *)((long)plVar20 + 0xc4);
              *(undefined8 *)(lVar17 + 0x154) = *(undefined8 *)((long)plVar20 + 0xbc);
              *(undefined8 *)(lVar17 + 0x14c) = uVar27;
              *(undefined8 *)(lVar17 + 0x164) = uVar31;
              *(undefined8 *)(lVar17 + 0x15c) = uVar29;
              *(undefined8 *)(lVar17 + 0x144) = uVar25;
              *(undefined8 *)(lVar17 + 0x13c) = uVar24;
              *(long *)(lVar17 + 0x1a8) = plVar20[0x22];
              *(long *)(lVar17 + 0x1c0) = plVar20[6];
              if (*(long *)(param_1 + 0x60) == lVar17) {
                *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar17 + 0x48);
                lVar19 = *(long *)(lVar17 + 0x50);
                if (*(long *)(param_1 + 0x68) == lVar17) goto LAB_00383db0;
LAB_00383d4c:
                lVar15 = *(long *)(lVar17 + 0x48);
// WM - origin: github.com/pengussy
              }
              else {
                lVar19 = *(long *)(lVar17 + 0x50);
                if (*(long *)(param_1 + 0x68) != lVar17) goto LAB_00383d4c;
LAB_00383db0:
                *(long *)(param_1 + 0x68) = lVar19;
                lVar15 = *(long *)(lVar17 + 0x48);
              }
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x48) = lVar15;
              }
              if (lVar15 != 0) {
                *(long *)(lVar15 + 0x50) = lVar19;
              }
              *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
              *(undefined8 *)(lVar17 + 0x48) = 0;
              *(undefined8 *)(lVar17 + 0x50) = 0;
              lVar19 = *(long *)(param_1 + 0x80);
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x48) = lVar17;
              }
              *(undefined8 *)(lVar17 + 0x48) = 0;
              *(long *)(lVar17 + 0x50) = lVar19;
              *(long *)(param_1 + 0x80) = lVar17;
              if (*(long *)(param_1 + 0x78) == 0) {
                *(long *)(param_1 + 0x78) = lVar17;
              }
            }
            else {
              lVar17 = func_0x019e43b0(param_1 + 0x60,lVar17,*(undefined8 *)(lVar17 + 0xb8));
              if (lVar17 == 0) goto LAB_00383918;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
              uVar24 = *(undefined8 *)(lVar17 + 0xb8);
              _memcpy(lVar17 + 0x1c8,*(undefined8 *)(lVar17 + 0xc0),uVar24);
              plVar20[4] = plVar20[4] | 1;
              *(long *)(lVar17 + 0xc0) = lVar17 + 0x1c8;
              *(undefined8 *)(lVar17 + 200) = 0xffffffffffffffff;
              *(undefined8 *)(lVar17 + 0x58) = uVar24;
              *(ulong *)(lVar17 + 0x1b0) = uVar23;
              *(undefined8 *)(lVar17 + 0x1b8) = 0;
              lVar15 = plVar20[0xe];
              lVar19 = plVar20[0xd];
              lVar28 = plVar20[0x10];
              lVar26 = plVar20[0xf];
              lVar32 = plVar20[0x12];
              lVar30 = plVar20[0x11];
              uVar24 = *(undefined8 *)((long)plVar20 + 0x94);
              *(undefined8 *)(lVar17 + 0x134) = *(undefined8 *)((long)plVar20 + 0x9c);
              *(undefined8 *)(lVar17 + 300) = uVar24;
              *(long *)(lVar17 + 0x118) = lVar28;
              *(long *)(lVar17 + 0x110) = lVar26;
              *(long *)(lVar17 + 0x128) = lVar32;
              *(long *)(lVar17 + 0x120) = lVar30;
              *(long *)(lVar17 + 0x108) = lVar15;
              *(long *)(lVar17 + 0x100) = lVar19;
              lVar19 = plVar20[9];
              lVar26 = plVar20[8];
              lVar15 = plVar20[7];
              lVar30 = plVar20[0xc];
              lVar28 = plVar20[0xb];
              *(long *)(lVar17 + 0xe8) = plVar20[10];
              *(long *)(lVar17 + 0xe0) = lVar19;
              *(long *)(lVar17 + 0xf8) = lVar30;
              *(long *)(lVar17 + 0xf0) = lVar28;
              *(long *)(lVar17 + 0xd8) = lVar26;
              *(long *)(lVar17 + 0xd0) = lVar15;
              uVar25 = *(undefined8 *)((long)plVar20 + 0xec);
              uVar24 = *(undefined8 *)((long)plVar20 + 0xe4);
/* WM - found on a paste site? it was re-uploaded illegally */
              uVar29 = *(undefined8 *)((long)plVar20 + 0xfc);
              uVar27 = *(undefined8 *)((long)plVar20 + 0xf4);
              uVar33 = *(undefined8 *)((long)plVar20 + 0xdc);
              uVar31 = *(undefined8 *)((long)plVar20 + 0xd4);
              lVar19 = plVar20[0x20];
              *(long *)(lVar17 + 0x1a0) = plVar20[0x21];
              *(long *)(lVar17 + 0x198) = lVar19;
              *(undefined8 *)(lVar17 + 0x184) = uVar25;
              *(undefined8 *)(lVar17 + 0x17c) = uVar24;
              *(undefined8 *)(lVar17 + 0x194) = uVar29;
              *(undefined8 *)(lVar17 + 0x18c) = uVar27;
              *(undefined8 *)(lVar17 + 0x174) = uVar33;
              *(undefined8 *)(lVar17 + 0x16c) = uVar31;
              uVar25 = *(undefined8 *)((long)plVar20 + 0xac);
              uVar24 = *(undefined8 *)((long)plVar20 + 0xa4);
              uVar27 = *(undefined8 *)((long)plVar20 + 0xb4);
              uVar31 = *(undefined8 *)((long)plVar20 + 0xcc);
              uVar29 = *(undefined8 *)((long)plVar20 + 0xc4);
              *(undefined8 *)(lVar17 + 0x154) = *(undefined8 *)((long)plVar20 + 0xbc);
              *(undefined8 *)(lVar17 + 0x14c) = uVar27;
              *(undefined8 *)(lVar17 + 0x164) = uVar31;
              *(undefined8 *)(lVar17 + 0x15c) = uVar29;
              *(undefined8 *)(lVar17 + 0x144) = uVar25;
              *(undefined8 *)(lVar17 + 0x13c) = uVar24;
              *(long *)(lVar17 + 0x1a8) = plVar20[0x22];
              *(long *)(lVar17 + 0x1c0) = plVar20[6];
              if (*(long *)(param_1 + 0x60) == lVar17) {
                *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar17 + 0x48);
                lVar19 = *(long *)(lVar17 + 0x50);
                if (*(long *)(param_1 + 0x68) == lVar17) goto LAB_00383ae0;
LAB_00383a64:
                lVar15 = *(long *)(lVar17 + 0x48);
              }
              else {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                lVar19 = *(long *)(lVar17 + 0x50);
                if (*(long *)(param_1 + 0x68) != lVar17) goto LAB_00383a64;
LAB_00383ae0:
                *(long *)(param_1 + 0x68) = lVar19;
                lVar15 = *(long *)(lVar17 + 0x48);
              }
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x48) = lVar15;
              }
              if (lVar15 != 0) {
                *(long *)(lVar15 + 0x50) = lVar19;
              }
              *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
              *(undefined8 *)(lVar17 + 0x48) = 0;
              *(undefined8 *)(lVar17 + 0x50) = 0;
              lVar19 = *(long *)(param_1 + 0x80);
              if (lVar19 != 0) {
                *(long *)(lVar19 + 0x48) = lVar17;
              }
              *(undefined8 *)(lVar17 + 0x48) = 0;
              *(long *)(lVar17 + 0x50) = lVar19;
              *(long *)(param_1 + 0x80) = lVar17;
/*  chat: discord.gg/sdkhDjTex  */
              if (*(long *)(param_1 + 0x78) == 0) {
                *(long *)(param_1 + 0x78) = lVar17;
              }
            }
            *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
            uVar22 = uVar22 + 1;
          } while (uStack_e0 != 0);
LAB_00383de4:
          bVar3 = !bVar3;
          if (*(long **)(param_1 + 0x30) == plVar20) goto LAB_00383dc8;
          plVar16 = (long *)plVar20[1];
          if (*(long **)(param_1 + 0x38) == plVar20) goto LAB_00383e90;
LAB_00383e0c:
          lVar17 = *plVar20;
        }
        if (plVar16 != (long *)0x0) {
          *plVar16 = lVar17;
        }
        if (lVar17 != 0) {
          *(long **)(lVar17 + 8) = plVar16;
        }
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
/*  no support for modified copies  */
        *plVar20 = 0;
        plVar20[1] = 0;
        cVar1 = (char)plVar20[0x23];
        if (bVar3) {
          if (cVar1 != '\0') {
            *(undefined1 *)(plVar20 + 0x23) = 0;
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
          }
LAB_003835dc:
          func_0x0037a358(*(undefined8 *)(param_1 + 0x10),plVar20);
        }
        else {
          if ((cVar1 == '\0') && (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_1 + 0x28)))
          goto LAB_003835dc;
          puVar10 = *(undefined8 **)(param_1 + 0x50);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = plVar20;
          }
          *plVar20 = 0;
          plVar20[1] = (long)puVar10;
          *(long **)(param_1 + 0x50) = plVar20;
          if (*(long *)(param_1 + 0x48) == 0) {
            *(long **)(param_1 + 0x48) = plVar20;
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
/* WM - do not claim this as your own */
          }
          else {
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
          }
          if (cVar1 == '\0') {
            *(undefined1 *)(plVar20 + 0x23) = 1;
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          }
        }
        plVar20 = *(long **)(param_1 + 0x30);
      } while (plVar20 != (long *)0x0);
      lVar12 = *(long *)(param_1 + 0x88);
      if (lVar12 == 0) {
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
          return (undefined8 *)0x0;
        }
        goto LAB_00383f30;
      }
      goto LAB_003834f0;
    }
  }
  else {
LAB_003834f0:
    plVar20 = *(long **)(param_1 + 0x78);
/* watermarked copy - do not remove */
    if (plVar20 != (long *)0x0) {
      lVar17 = plVar20[9];
      *(long *)(param_1 + 0x78) = lVar17;
      lVar19 = plVar20[10];
      if (*(long **)(param_1 + 0x80) == plVar20) {
        *(long *)(param_1 + 0x80) = lVar19;
      }
      if (lVar19 != 0) {
        *(long *)(lVar19 + 0x48) = lVar17;
      }
      if (lVar17 != 0) {
        *(long *)(lVar17 + 0x50) = lVar19;
      }
      *(long *)(param_1 + 0x88) = lVar12 + -1;
      plVar20[9] = 0;
      plVar20[10] = 0;
      *plVar20 = (long)(plVar20 + 0xe);
      plVar20[4] = plVar20[0x19];
      plVar20[5] = plVar20[0x35];
      plVar20[3] = plVar20[0x36];
      plVar20[0xd] = 1;
      iVar9 = func_0x00290f74(plVar20 + 0x1a);
      plVar16 = (long *)0x0;
/* do not claim this as your own */
      if (iVar9 != 0) {
        plVar16 = plVar20 + 0x1a;
      }
      plVar20[1] = (long)plVar16;
      iVar9 = func_0x00290f74((long)plVar20 + 0x13c);
      lVar12 = 0;
      if (iVar9 != 0) {
        lVar12 = (long)plVar20 + 0x13c;
      }
      plVar20[2] = lVar12;
      plVar20[8] = plVar20[0x38];
      plVar20[7] = plVar20[0x37];
      plVar20[6] = param_1;
      *param_2 = plVar20;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      goto LAB_00383f30;
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return (undefined8 *)0x0;
  }
LAB_00383f30:
  puVar10 = (undefined8 *)___stack_chk_fail();
  if ((puVar10 == (undefined8 *)0x0) ||
     (lVar12 = puVar10[0xd], puVar10[0xd] = lVar12 + -1, lVar12 + -1 != 0)) {
    return puVar10;
  }
  lVar12 = puVar10[6];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  lVar17 = *(long *)(lVar12 + 0x68);
  if (lVar17 != 0) {
    *(undefined8 **)(lVar17 + 0x48) = puVar10;
  }
  puVar10[9] = 0;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  puVar10[10] = lVar17;
  *(undefined8 **)(lVar12 + 0x68) = puVar10;
  if (*(long *)(lVar12 + 0x60) == 0) {
    *(undefined8 **)(lVar12 + 0x60) = puVar10;
    *(long *)(lVar12 + 0x70) = *(long *)(lVar12 + 0x70) + 1;
    return puVar10;
  }
  *(long *)(lVar12 + 0x70) = *(long *)(lVar12 + 0x70) + 1;
  return puVar10;
}

