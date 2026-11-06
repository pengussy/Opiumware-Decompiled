/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x38baf4:10652435cd
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_0038baf4(undefined8 *param_1,uint *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
/* wm:found on a paste site? it was re-uploaded illegally */
  uint uVar24;
  uint *puVar25;
  ulong uVar26;
  uint uVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong uVar30;
  byte bVar31;
  ulong uVar32;
  ulong uVar33;
  bool bVar34;
  long *plVar35;
  undefined8 uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  uint *puVar40;
  uint uVar41;
  ulong uVar42;
  undefined1 *puVar43;
/* wm:if you paid for this, you were scammed */
  ulong *puVar44;
  ulong *puVar45;
  ulong uVar46;
  ulong *puVar47;
  ulong uVar48;
  undefined1 auVar49 [16];
  ulong uStack_708;
  ulong uStack_6f0;
  long lStack_6e8;
  ulong uStack_670;
  int iStack_634;
  undefined8 uStack_630;
  ulong uStack_628;
  long lStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong auStack_600 [2];
  undefined1 auStack_5f0 [8];
  ulong uStack_5e8;
  ulong auStack_5e0 [6];
  int iStack_5b0;
  byte abStack_5ac [4];
  undefined8 uStack_5a8;
  undefined1 auStack_5a0 [56];
  byte abStack_568 [8];
  int aiStack_560 [2];
/*  no support for modified copies  */
  long alStack_558 [2];
  uint auStack_548 [2];
  undefined8 uStack_540;
  undefined8 auStack_533 [2];
  undefined8 uStack_51e;
  uint *apuStack_510 [4];
  ulong auStack_4f0 [3];
  undefined1 *puStack_4d8;
  uint auStack_4d0 [4];
  undefined8 uStack_4c0;
  long lStack_4b0;
  int iStack_490;
  byte bStack_48c;
  undefined8 uStack_488;
  undefined1 auStack_480 [56];
  byte bStack_448;
  int iStack_440;
  long lStack_438;
  undefined1 auStack_428 [8];
  undefined1 uStack_420;
  uint *puStack_3e0;
  undefined1 *puStack_3b8;
  byte bStack_3ab;
  undefined8 uStack_3a0;
  ulong auStack_390 [4];
  int iStack_370;
  byte bStack_36c;
  undefined8 uStack_368;
  undefined1 auStack_360 [56];
  byte bStack_328;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  int aiStack_320 [2];
  long lStack_318;
  undefined1 auStack_308 [8];
  undefined1 uStack_300;
  uint *puStack_2c0;
  undefined1 *puStack_298;
  byte bStack_28b;
  undefined8 uStack_280;
  long lStack_270;
  int iStack_250;
  byte bStack_24c;
  undefined8 uStack_248;
  undefined1 auStack_240 [56];
  byte bStack_208;
  int iStack_200;
  long lStack_1f8;
  undefined1 auStack_1e8 [8];
  undefined1 uStack_1e0;
  uint *puStack_1a0;
  undefined1 *puStack_178;
  byte bStack_16b;
  uint *puStack_160;
  ulong auStack_158 [3];
  ulong uStack_140;
  ulong uStack_138;
  ulong auStack_130 [5];
  uint *apuStack_108 [2];
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  byte bStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar10 = (**(code **)(param_1[0x1d] + 0x30))(param_1[0x1e]);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  aiStack_560[0] = 0;
  iStack_440 = 0;
  aiStack_320[0] = 0;
  iStack_200 = 0;
  func_0x003851e8(param_1[0x14]);
  piVar11 = (int *)func_0x00373a10(param_1[0x17]);
  uVar22 = 1;
  if (((((*piVar11 == 0) && (piVar11[1] == 0)) && (piVar11[2] == 0)) &&
      ((piVar11[3] == 0 && (piVar11[4] == 0)))) && (uVar22 = 2, lVar10 != 0)) {
// WM - if you paid for this, you were scammed
    uVar22 = 0;
  }
  uVar42 = 0;
  bVar34 = false;
  uStack_670 = 4;
  do {
    if (uVar42 == 0) {
      uVar38 = 0;
    }
    else {
      uVar38 = auStack_600[uVar42 * 0x24];
    }
    lVar20 = uVar42 * 0x120;
    puVar45 = auStack_5e0 + uVar42 * 0x24;
    auStack_4f0[uVar42 * 0x24 + 2] = uVar38;
    uVar24 = 1;
    if (uVar42 != 2) {
      uVar24 = 2;
    }
    uVar23 = 0;
    if (uVar42 != 0) {
      uVar23 = uVar24;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    }
    uVar46 = (ulong)uVar23;
    iVar9 = func_0x00385110(param_1[0x14],uVar42);
    if ((iVar9 != 0) &&
       ((uVar24 = *(uint *)(&UNK_01ae6dc0 + (ulong)uVar22 * 4 + uVar42 * 0xc), lVar10 != 0 ||
        ((uVar24 >> 0x10 & 1) != 0)))) {
      uVar27 = (uint)uStack_670;
      uVar41 = (uint)uVar42;
      uVar23 = uVar27;
      if (uVar41 <= uVar27) {
        uVar23 = uVar41;
      }
      if (uVar27 != 3) {
        uVar27 = uVar23;
      }
      uStack_670 = (ulong)uVar27;
      if ((uVar24 >> 0xd & 1) == 0) {
LAB_0038bd4c:
        if ((uVar24 >> 2 & 1) == 0) {
LAB_0038bd78:
          if ((((((uVar24 & 1) == 0) ||
                ((iVar9 = func_0x00373a18(param_1[0x17],uVar46), iVar9 == 0 &&
                 ((((ulong)(*(ushort *)(param_1 + 0x3d) >> 4) & 7) >> uVar46 & 1) == 0)))) &&
               (((uVar24 >> 0xd & 1) == 0 ||
                ((((ulong)(*(ushort *)(param_1 + 0x3d) >> 7) & 7) >> uVar46 & 1) == 0)))) &&
              (((uVar24 >> 9 & 1) == 0 ||
               (((((*(ushort *)(param_1 + 0x3d) >> 1 & 1) == 0 &&
                  (iVar9 = func_0x0037aaec(param_1[0x1a],0), iVar9 == 0)) &&
                 ((*(ushort *)(param_1 + 0x3d) >> 2 & 1) == 0)) &&
                (((iVar9 = func_0x0037aaec(param_1[0x1b],0), iVar9 == 0 &&
                  ((*(ushort *)(param_1 + 0x3d) >> 3 & 1) == 0)) &&
                 (iVar9 = func_0x0037aaec(param_1[0x1c],0), iVar9 == 0)))))))) &&
             ((((uVar24 >> 3 & 1) == 0 || ((*(ushort *)(param_1 + 0x3d) & 1) == 0)) &&
              (((uVar24 >> 10 & 1) == 0 ||
               (((*(ushort *)(param_1 + 0x3d) >> 10 & 1) == 0 || (uVar42 != uStack_670)))))))) {
            if ((uVar42 != 1) && (lVar12 = func_0x00374920(param_1[0x16],uVar46), lVar12 != 0)) {
// WM - no support for modified copies
              if ((uVar24 >> 5 & 1) == 0) {
                do {
                  lVar16 = func_0x00374134(lVar12);
                  if (lVar16 < 0x19) {
                    if (lVar16 == 7) {
                      uVar23 = uVar24 >> 0xc;
                    }
                    else {
                      if (lVar16 != 0x18) goto LAB_0038c194;
                      uVar23 = uVar24 >> 6;
                    }
joined_r0x0038c19c:
                    if ((uVar23 & 1) != 0) goto LAB_0038be48;
                  }
                  else {
                    if (lVar16 == 0x19) {
                      uVar23 = uVar24 >> 7;
                      goto joined_r0x0038c19c;
                    }
                    if (lVar16 != 0x1b) {
LAB_0038c194:
                      uVar23 = uVar24 >> 0xb;
                      goto joined_r0x0038c19c;
                    }
                  }
                  lVar12 = func_0x00374940(lVar12,uVar46);
                } while (lVar12 != 0);
              }
              else if ((uVar24 >> 0xc & 1) == 0) {
                if ((uVar24 >> 7 & 1) == 0) {
                  do {
                    lVar16 = func_0x00374134(lVar12);
                    if (lVar16 < 0x19) {
// more drops soon - github.com/pengussy
                      if (lVar16 != 7) {
                        if (lVar16 != 0x18) goto LAB_0038c244;
                        uVar23 = uVar24 >> 6;
                        goto joined_r0x0038c244;
                      }
                    }
                    else if (lVar16 != 0x19) {
                      if (lVar16 == 0x1b) goto LAB_0038be48;
LAB_0038c244:
                      uVar23 = uVar24 >> 0xb;
joined_r0x0038c244:
                      if ((uVar23 & 1) != 0) goto LAB_0038be48;
                    }
                    lVar12 = func_0x00374940(lVar12,uVar46);
                  } while (lVar12 != 0);
                }
                else {
                  do {
                    lVar16 = func_0x00374134(lVar12);
                    if (lVar16 < 0x18) {
/* thanks for reading - discord.gg/sdkhDjTex */
                      if (lVar16 != 7) goto LAB_0038c1f0;
                    }
                    else {
                      if (lVar16 == 0x18) {
                        uVar23 = uVar24 >> 6;
                      }
                      else {
                        if ((lVar16 == 0x19) || (lVar16 == 0x1b)) goto LAB_0038be48;
LAB_0038c1f0:
                        uVar23 = uVar24 >> 0xb;
                      }
                      if ((uVar23 & 1) != 0) goto LAB_0038be48;
                    }
                    lVar12 = func_0x00374940(lVar12,uVar46);
                  } while (lVar12 != 0);
                }
              }
              else if ((uVar24 >> 7 & 1) == 0) {
                if ((uVar24 >> 6 & 1) == 0) {
/* stripping the watermark breaks the license - github.com/pengussy */
                  if ((uVar24 >> 0xb & 1) == 0) {
                    do {
                      lVar16 = func_0x00374134(lVar12);
                      if ((lVar16 == 7) || (lVar16 == 0x1b)) goto LAB_0038be48;
                      lVar12 = func_0x00374940(lVar12,uVar46);
                    } while (lVar12 != 0);
                  }
                  else {
                    do {
                      uVar13 = func_0x00374134(lVar12);
                      if ((uVar13 & 0xfffffffffffffffe) != 0x18) goto LAB_0038be48;
                      lVar12 = func_0x00374940(lVar12,uVar46);
                    } while (lVar12 != 0);
                  }
                }
                else if ((uVar24 >> 0xb & 1) == 0) {
                  do {
/*  if you paid for this, you were scammed  */
                    uVar13 = func_0x00374134(lVar12);
                    if (uVar13 < 0x1c && (1L << (uVar13 & 0x3f) & 0x9000080U) != 0)
                    goto LAB_0038be48;
                    lVar12 = func_0x00374940(lVar12,uVar46);
                  } while (lVar12 != 0);
                }
                else {
                  do {
                    lVar16 = func_0x00374134(lVar12);
                    if (lVar16 != 0x19) goto LAB_0038be48;
                    lVar12 = func_0x00374940(lVar12,uVar46);
                  } while (lVar12 != 0);
                }
              }
              else if ((uVar24 >> 6 & 1) == 0) {
                if ((uVar24 >> 0xb & 1) == 0) {
                  do {
                    uVar13 = func_0x00374134(lVar12);
                    if (uVar13 < 0x1c && (1L << (uVar13 & 0x3f) & 0xa000080U) != 0)
                    goto LAB_0038be48;
                    lVar12 = func_0x00374940(lVar12,uVar46);
                  } while (lVar12 != 0);
                }
                else {
                  do {
                    lVar16 = func_0x00374134(lVar12);
                    if (lVar16 != 0x18) goto LAB_0038be48;
                    lVar12 = func_0x00374940(lVar12,uVar46);
                  } while (lVar12 != 0);
                }
              }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
              else {
                if ((uVar24 >> 0xb & 1) != 0) {
                  func_0x00374134(lVar12);
                  goto LAB_0038be48;
                }
                do {
                  uVar13 = func_0x00374134(lVar12);
                  if (uVar13 < 0x1c && (1L << (uVar13 & 0x3f) & 0xb000080U) != 0) goto LAB_0038be48;
                  lVar12 = func_0x00374940(lVar12,uVar46);
                } while (lVar12 != 0);
              }
            }
            if ((((uVar24 >> 8 & 1) == 0) || ((*(ushort *)(param_1 + 0x3d) >> 0xb & 1) == 0)) ||
               (func_0x00389ddc(&puStack_160,param_1[0x18],0), auStack_158[1] == 0))
            goto LAB_0038bcc8;
          }
        }
        else {
          uStack_630 = 2;
          iVar9 = func_0x00388a10(param_1[uVar46 + 0x24],0,&puStack_160,&uStack_a0,&uStack_630);
          if (iVar9 == 0) goto LAB_0038bd78;
        }
LAB_0038be48:
        auStack_4d0[uVar42 * 0x48 + 1] = uVar24;
        if ((int)uVar41 < 2) {
          if (uVar41 == 0) {
            uVar24 = 0x9001;
          }
          else {
            uVar24 = 0x9002;
/* WM - no support for modified copies */
          }
        }
        else {
          if (uVar41 != 3) goto LAB_0038be70;
          uVar24 = 0x9005;
        }
      }
      else {
        piVar11 = (int *)func_0x00373a10(param_1[0x17]);
        if (uVar41 == 2) {
          if (piVar11[1] == 0) goto LAB_0038be3c;
          auStack_4d0[uVar42 * 0x48 + 1] = uVar24;
LAB_0038be70:
          uVar24 = 0x9003;
        }
        else {
          if ((uVar41 != 0) || (*piVar11 == 0)) {
LAB_0038be3c:
            if (piVar11[uVar46 + 2] == 0) goto LAB_0038bd4c;
            goto LAB_0038be48;
          }
          auStack_4d0[uVar42 * 0x48 + 1] = uVar24;
          uVar24 = 0x9001;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
      }
      uVar23 = *(uint *)(param_1 + 0x23);
      auStack_548[uVar42 * 0x48] = auStack_548[uVar42 * 0x48] & 0xffcf0200 | uVar24;
      auStack_548[uVar42 * 0x48 + 1] = uVar23;
      uVar36 = *(undefined8 *)((long)param_1 + 0x15);
      *(undefined8 *)((long)auStack_533 + lVar20 + -5) = *(undefined8 *)((long)param_1 + 0x1d);
      *(undefined8 *)(auStack_548 + uVar42 * 0x48 + 2) = uVar36;
      auStack_533[uVar42 * 0x24] = *(undefined8 *)((long)param_1 + 0x22);
      uVar36 = *param_1;
      auStack_533[uVar42 * 0x24 + 2] = param_1[1];
      auStack_533[uVar42 * 0x24 + 1] = uVar36;
      *(undefined8 *)((long)auStack_533 + lVar20 + 0x15) = *(undefined8 *)((long)param_1 + 0xd);
      apuStack_510[uVar42 * 0x24 + 2] = (uint *)&UNK_00003ffb;
      if (uVar42 == 0) {
        apuStack_510[0] = (uint *)param_1[0x27];
        apuStack_510[1] = (uint *)param_1[0x28];
        uVar13 = func_0x003923f4((undefined1)uStack_540);
      }
      else {
        apuStack_510[uVar42 * 0x24] = (uint *)0x0;
        apuStack_510[uVar42 * 0x24 + 1] = (uint *)0x0;
        uVar13 = func_0x003923f4((char)auStack_548[uVar42 * 0x48 + 2]);
      }
      if (uVar13 == 0) break;
      uVar14 = func_0x0038550c(param_1[0x14]);
      uVar26 = 0;
      if (uVar38 <= uVar14) {
        uVar26 = uVar14 - uVar38;
// keep the notice, keep the source honest
      }
      if (uVar26 < uVar13) break;
      puStack_160 = (uint *)(uVar26 - uVar13);
      iVar9 = func_0x0038518c(param_1[0x14],uVar42,(uint *)(uVar26 - uVar13),&puStack_160);
      puVar40 = puStack_160;
      if (iVar9 == 0) break;
      auStack_4f0[uVar42 * 0x24] = uVar26;
      auStack_4f0[uVar42 * 0x24 + 1] = (ulong)puStack_160;
      auStack_4f0[uVar42 * 0x24 + 3] = uVar26 - (long)puStack_160;
      auStack_4d0[uVar42 * 0x48] = uVar22;
      uVar24 = auStack_4d0[uVar42 * 0x48 + 1];
      if ((uVar24 >> 1 & 1) == 0) {
        puVar25 = (uint *)0x0;
      }
      else {
        if ((uVar24 >> 0xf & 1) == 0) {
          puVar25 = (uint *)(ulong)((*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> uVar46 & 1);
        }
        else {
          puVar25 = (uint *)((long)&MACH_HEADER.magic + 1);
        }
        if (puVar40 < puVar25) break;
      }
      *(uint *)(auStack_5e0 + uVar42 * 0x24 + 6) = uVar41;
      *puVar45 = (ulong)param_1;
      auStack_5e0[uVar42 * 0x24 + 1] = (ulong)puVar40;
      auStack_5e0[uVar42 * 0x24 + 4] = (ulong)puVar25;
      auStack_5e0[uVar42 * 0x24 + 5] = 0;
      puVar28 = auStack_5e0 + uVar42 * 0x24 + 2;
      *puVar28 = 0;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      auStack_5e0[uVar42 * 0x24 + 3] = 0;
      abStack_5ac[lVar20] = abStack_5ac[lVar20] & 0xfc;
      pbVar1 = abStack_5ac + lVar20 + 4;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      abStack_568[lVar20] = abStack_568[lVar20] & 0xfe;
      uVar46 = uVar42;
      if ((uint *)(param_1 + uVar42 * 4 + 0x45)[1] < puVar40) {
        lVar12 = func_0x019eb634(param_1[uVar42 * 4 + 0x45],puVar40,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                                 ,0xd2);
        if (lVar12 == 0) break;
        lVar16 = *puVar45 + uVar42 * 0x20;
        *(long *)(lVar16 + 0x228) = lVar12;
        *(uint **)(lVar16 + 0x230) = puVar40;
        uVar46 = (ulong)(uint)auStack_5e0[uVar42 * 0x24 + 6];
        uVar24 = auStack_4d0[uVar42 * 0x48 + 1];
      }
      plVar35 = alStack_558 + uVar42 * 0x24;
      *plVar35 = 0;
      aiStack_560[uVar42 * 0x48] = 1;
      auStack_4d0[uVar42 * 0x48 + 2] = 0;
      alStack_558[uVar42 * 0x24 + 1] = 0;
      uVar23 = 1;
      if ((int)uVar46 != 2) {
/* WM - stripping the watermark breaks the license */
        uVar23 = 2;
      }
      uVar27 = 0;
      if ((int)uVar46 != 0) {
        uVar27 = uVar23;
      }
      uVar46 = (ulong)uVar27;
      iStack_634 = 1;
      if ((ulong)param_1[uVar46 + 0x38] >> 0x3e != 0) goto LAB_0038d6f8;
      puVar15 = (undefined8 *)func_0x0038e7d4(param_1[0x15]);
      *plVar35 = (long)puVar15;
      if (puVar15 == (undefined8 *)0x0) goto LAB_0038d6f8;
      if (((uVar24 >> 3 & 1) == 0) || ((*(ushort *)(param_1 + 0x3d) & 1) == 0)) {
LAB_0038c0a0:
        bVar7 = false;
        if ((uVar24 >> 9 & 1) == 0) goto LAB_0038c0a8;
LAB_0038c36c:
        if (((*(ushort *)(param_1 + 0x3d) >> 1 & 1) != 0) ||
           (iVar9 = func_0x0037aaec(param_1[0x1a],0), iVar9 != 0)) {
          if ((abStack_5ac[lVar20] & 1) == 0) {
            uVar13 = auStack_5e0[uVar42 * 0x24 + 4];
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
          }
          else {
            uVar13 = 0;
          }
          if ((auStack_5e0[uVar42 * 0x24 + 1] - uVar13) - *puVar28 < 2) goto LAB_0038c3b4;
          lVar12 = func_0x019e5b24(puVar45);
          uVar36 = func_0x0034d3f0(param_1[0x1a]);
          if (lVar12 != 0) {
            iVar9 = func_0x0038f080(lVar12,uVar36);
            if (iVar9 == 0) {
              if ((abStack_568[lVar20] & 1) != 0) {
                func_0x0047680c(auStack_5a0 + lVar20);
                abStack_568[lVar20] = abStack_568[lVar20] & 0xfe;
                pbVar1 = abStack_5ac + lVar20 + 4;
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
/*  keep the notice, keep the source honest  */
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
              }
            }
            else {
              *(byte *)((long)puVar15 + 0x79) = *(byte *)((long)puVar15 + 0x79) | 2;
              iVar9 = func_0x0038e098(puVar45);
              if (iVar9 == 0) goto LAB_0038d6e0;
              abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
              bVar7 = true;
            }
            goto LAB_0038c3b4;
          }
          goto LAB_0038d6e0;
        }
LAB_0038c3b4:
        if (((*(ushort *)(param_1 + 0x3d) >> 2 & 1) == 0) &&
           (iVar9 = func_0x0037aaec(param_1[0x1b],0), iVar9 == 0)) goto LAB_0038c52c;
        if ((abStack_5ac[lVar20] & 1) == 0) {
          uVar13 = auStack_5e0[uVar42 * 0x24 + 4];
        }
/* WM - chat: discord.gg/sdkhDjTex */
        else {
          uVar13 = 0;
        }
        if (1 < (auStack_5e0[uVar42 * 0x24 + 1] - uVar13) - *puVar28) {
          lVar12 = func_0x019e5b24(puVar45);
          uVar36 = func_0x0034d3f0(param_1[0x1b]);
          if (lVar12 != 0) {
            iVar9 = func_0x0038f11c(lVar12,0,uVar36);
            if (iVar9 == 0) {
              if ((abStack_568[lVar20] & 1) != 0) {
                func_0x0047680c(auStack_5a0 + lVar20);
                abStack_568[lVar20] = abStack_568[lVar20] & 0xfe;
                pbVar1 = abStack_5ac + lVar20 + 4;
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
              }
            }
            else {
/* wm:keep the notice, keep the source honest */
              *(byte *)((long)puVar15 + 0x79) = *(byte *)((long)puVar15 + 0x79) | 4;
              iVar9 = func_0x0038e098(puVar45);
              if (iVar9 == 0) goto LAB_0038d6e0;
              abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
              bVar7 = true;
            }
LAB_0038c52c:
            uVar5 = *(ushort *)(param_1 + 0x3d);
            goto joined_r0x0038c538;
          }
          goto LAB_0038d6e0;
        }
        uVar5 = *(ushort *)(param_1 + 0x3d);
joined_r0x0038c538:
        if (((uVar5 >> 3 & 1) == 0) && (iVar9 = func_0x0037aaec(param_1[0x1c],0), iVar9 == 0)) {
          lVar12 = func_0x00374920(param_1[0x16],uVar46);
          goto joined_r0x0038c42c;
        }
        if ((abStack_5ac[lVar20] & 1) == 0) {
          uVar13 = auStack_5e0[uVar42 * 0x24 + 4];
        }
        else {
          uVar13 = 0;
        }
        if ((auStack_5e0[uVar42 * 0x24 + 1] - uVar13) - *puVar28 < 2) {
          lVar12 = func_0x00374920(param_1[0x16],uVar46);
          goto joined_r0x0038c42c;
        }
        lVar12 = func_0x019e5b24(puVar45);
        uVar36 = func_0x0034d3f0(param_1[0x1c]);
        if (lVar12 != 0) {
          iVar9 = func_0x0038f11c(lVar12,1,uVar36);
          if (iVar9 == 0) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            if ((abStack_568[lVar20] & 1) != 0) {
              func_0x0047680c(auStack_5a0 + lVar20);
              abStack_568[lVar20] = abStack_568[lVar20] & 0xfe;
              pbVar1 = abStack_5ac + lVar20 + 4;
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
            }
          }
          else {
            *(byte *)((long)puVar15 + 0x79) = *(byte *)((long)puVar15 + 0x79) | 8;
            iVar9 = func_0x0038e098(puVar45);
            if (iVar9 == 0) goto LAB_0038d6e0;
            abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
            bVar7 = true;
          }
          lVar12 = func_0x00374920(param_1[0x16],uVar46);
          goto joined_r0x0038c42c;
        }
LAB_0038d6e0:
        func_0x0038e8d4(param_1[0x15],puVar15);
        *plVar35 = 0;
        goto LAB_0038d6f8;
      }
      if ((abStack_5ac[lVar20] & 1) == 0) {
        uVar13 = auStack_5e0[uVar42 * 0x24 + 4];
      }
      else {
        uVar13 = 0;
      }
      if (auStack_5e0[uVar42 * 0x24 + 1] == *puVar28 + uVar13) goto LAB_0038c0a0;
      lVar12 = func_0x019e5b24(puVar45);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      if (lVar12 == 0) goto LAB_0038d6e0;
      iVar9 = func_0x0038f26c();
      if (iVar9 == 0) {
        if ((abStack_568[lVar20] & 1) == 0) {
          bVar7 = false;
        }
        else {
          func_0x0047680c(auStack_5a0 + lVar20);
          bVar7 = false;
          abStack_568[lVar20] = abStack_568[lVar20] & 0xfe;
          pbVar1 = abStack_5ac + lVar20 + 4;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
/*  watermarked copy - do not remove  */
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
      }
      else {
        *(byte *)((long)puVar15 + 0x79) = *(byte *)((long)puVar15 + 0x79) | 1;
        iVar9 = func_0x0038e098(puVar45);
        if (iVar9 == 0) goto LAB_0038d6e0;
        abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
        bVar7 = true;
      }
      if ((uVar24 >> 9 & 1) != 0) goto LAB_0038c36c;
LAB_0038c0a8:
      lVar12 = func_0x00374920(param_1[0x16],uVar46);
joined_r0x0038c42c:
      if (lVar12 == 0) {
LAB_0038c83c:
        func_0x0038e27c(param_1,puVar45,uVar42 == uStack_670,&iStack_634);
      }
      else {
        iVar9 = 0;
        do {
/* wm:do not claim this as your own */
          uVar13 = func_0x00374134(lVar12);
          uVar36 = func_0x0037413c(lVar12);
          uVar26 = func_0x00374144(lVar12);
          if ((long)uVar13 < 0x19) {
            if (uVar13 == 7) {
              if ((uVar24 >> 0xc & 1) != 0) {
                if (iVar9 == 0) {
                  iVar9 = func_0x0038e27c(param_1,puVar45,uVar42 == uStack_670,&iStack_634);
                  uVar14 = auStack_5e0[uVar42 * 0x24 + 1];
                  bVar21 = abStack_5ac[lVar20];
                }
                else {
                  iVar9 = 1;
                  uVar14 = auStack_5e0[uVar42 * 0x24 + 1];
                  bVar21 = abStack_5ac[lVar20];
                }
                goto joined_r0x0038c660;
              }
            }
            else {
              if (uVar13 != 0x18) goto LAB_0038c644;
              if ((uVar24 >> 6 & 1) != 0) goto LAB_0038c66c;
            }
          }
          else {
            if (uVar13 == 0x19) {
              uVar23 = uVar24 >> 7;
            }
            else {
              if (uVar13 == 0x1b) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
                if ((uVar24 >> 5 & 1) != 0) {
                  auStack_4d0[uVar42 * 0x48 + 2] = 1;
                  uVar14 = auStack_5e0[uVar42 * 0x24 + 1];
                  bVar21 = abStack_5ac[lVar20];
                  goto joined_r0x0038c660;
                }
                goto LAB_0038c5a4;
              }
LAB_0038c644:
              uVar23 = uVar24 >> 0xb;
            }
            if ((uVar23 & 1) != 0) {
LAB_0038c66c:
              uVar14 = auStack_5e0[uVar42 * 0x24 + 1];
              bVar21 = abStack_5ac[lVar20];
joined_r0x0038c660:
              if ((bVar21 & 1) == 0) {
                uVar29 = *puVar28;
                uVar17 = auStack_5e0[uVar42 * 0x24 + 4] + uVar29;
              }
              else {
                uVar29 = *puVar28;
                uVar17 = uVar29;
              }
              if (uVar14 - uVar17 < uVar26) break;
              if (uVar26 != 0) {
                if ((bVar21 >> 1 & 1) != 0) goto LAB_0038d6e0;
                lVar16 = *puVar45 + (ulong)(uint)auStack_5e0[uVar42 * 0x24 + 6] * 0x20;
                uVar17 = auStack_5e0[uVar42 * 0x24 + 5];
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                uVar14 = uVar17 + 1;
                uVar32 = *(ulong *)(lVar16 + 0x240);
                if (uVar32 < uVar14) {
                  lVar18 = 8;
                  if (uVar32 != 0) {
                    lVar18 = uVar32 << 1;
                  }
                  lVar37 = func_0x0046f2fc(*(undefined8 *)(lVar16 + 0x238),lVar18,0x10,
                                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                                           ,0xc4d);
                  if (lVar37 == 0) goto LAB_0038d6e0;
                  *(long *)(lVar16 + 0x238) = lVar37;
                  *(long *)(lVar16 + 0x240) = lVar18;
                  uVar17 = auStack_5e0[uVar42 * 0x24 + 5];
                  uVar14 = uVar17 + 1;
                  uVar29 = auStack_5e0[uVar42 * 0x24 + 2];
                }
                else {
                  lVar37 = *(long *)(lVar16 + 0x238);
                }
                puVar2 = (undefined8 *)(lVar37 + uVar17 * 0x10);
                *puVar2 = uVar36;
                puVar2[1] = uVar26;
                auStack_5e0[uVar42 * 0x24 + 5] = uVar14;
                auStack_5e0[uVar42 * 0x24 + 2] = uVar29 + uVar26;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              }
              func_0x0038e900(puVar15,lVar12);
              if ((0x1d < uVar13) || ((1L << (uVar13 & 0x3f) & 0x3000000dU) == 0)) {
                abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
                bVar7 = true;
              }
            }
          }
LAB_0038c5a4:
          lVar12 = func_0x00374940(lVar12,uVar46);
        } while (lVar12 != 0);
        if (iVar9 == 0) goto LAB_0038c83c;
      }
      if ((uVar24 >> 2 & 1) != 0) {
        uVar13 = 0;
        uVar26 = (ulong)(uint)auStack_5e0[uVar42 * 0x24 + 6];
        lVar12 = 1;
        if (uVar26 != 2) {
          lVar12 = 2;
        }
        lVar37 = alStack_558[uVar42 * 0x24];
/* WM - watermarked copy - do not remove */
        lVar16 = 0;
        if (uVar26 != 0) {
          lVar16 = lVar12;
        }
        uStack_140 = 0;
        auStack_158[2] = 0;
        auStack_158[1] = 0;
        auStack_158[0] = 0;
        puStack_160 = (uint *)0x0;
        uStack_610 = 0;
        uStack_608 = 0;
        auStack_600[0] = 0;
        uStack_628 = 0;
        uStack_630 = 0;
        uStack_618 = 0;
        lStack_620 = 0;
        while( true ) {
          if ((abStack_5ac[lVar20] & 1) == 0) {
            uVar14 = auStack_5e0[uVar42 * 0x24 + 4];
          }
          else {
            uVar14 = 0;
          }
/*  stripping the watermark breaks the license  */
          uVar14 = auStack_5e0[uVar42 * 0x24 + 1] - (uVar14 + *puVar28);
          if (uVar14 < 4) goto joined_r0x0038cbc8;
          uStack_5e8 = 2;
          iVar9 = func_0x00388a10(param_1[lVar16 + 0x24],uVar13,&puStack_160,&uStack_a0,&uStack_5e8)
          ;
          uVar13 = auStack_158[1];
          if (iVar9 == 0) goto joined_r0x0038cbc8;
          uStack_610 = auStack_158[0];
          if (auStack_158[1] == 0) goto joined_r0x0038cbc8;
          uStack_608 = 0;
          uVar17 = func_0x0038edd4(&uStack_610);
          if (uVar17 == 0) goto joined_r0x0038cbc8;
          uVar29 = uVar13;
          if (0x3e < uVar13) {
            uVar29 = 0x3f;
          }
          uVar32 = 0;
          if (uVar17 <= uVar14) {
            uVar32 = uVar14 - uVar17;
          }
          if (uVar17 + uVar29 <= uVar14) {
            uVar32 = uVar29;
          }
          uVar29 = uVar17 + 1;
          uVar39 = uVar13;
          if (0x3ffe < uVar13) {
            uVar39 = 0x3fff;
          }
          uVar30 = 0;
          if (uVar29 <= uVar14) {
            uVar30 = uVar14 - uVar29;
          }
          if (uVar29 + uVar39 <= uVar14) {
            uVar30 = uVar39;
          }
// WM - watermarked copy - do not remove
          uVar29 = uVar17 + 3;
          uVar39 = uVar13;
          if (0x3ffffffe < uVar13) {
            uVar39 = 0x3fffffff;
          }
          uVar33 = 0;
          if (uVar29 <= uVar14) {
            uVar33 = uVar14 - uVar29;
          }
          if (uVar29 + uVar39 <= uVar14) {
            uVar33 = uVar39;
          }
          uVar17 = uVar17 + 7;
          if (0x3ffffffffffffffe < uVar13) {
            uVar13 = 0x3fffffffffffffff;
          }
          uVar29 = 0;
          if (uVar17 <= uVar14) {
            uVar29 = uVar14 - uVar17;
          }
          if (uVar17 + uVar13 <= uVar14) {
            uVar29 = uVar13;
          }
          uVar13 = uVar29;
          if (uVar33 != 0 && uVar29 <= uVar33) {
            uVar13 = uVar33;
          }
          uVar14 = uVar13;
          if (uVar30 != 0 && uVar30 >= uVar13) {
            uVar14 = uVar30;
/*  chat: discord.gg/sdkhDjTex  */
          }
          uStack_608 = uVar14;
          if (uVar32 != 0 && uVar14 <= uVar32) {
            uStack_608 = uVar32;
          }
          if (((uVar29 == 0) &&
              ((uVar32 == 0 || uVar14 > uVar32) && (uVar33 == 0 || uVar29 > uVar33))) &&
             (uVar30 == 0 || uVar30 < uVar13)) goto joined_r0x0038cbc8;
          func_0x00388fd4(uStack_608,&uStack_a0,uStack_5e8);
          uVar13 = param_1[uVar26 * 4 + 0x48];
          if (uVar13 < auStack_5e0[uVar42 * 0x24 + 5] + 3) {
            lVar12 = 8;
            if (uVar13 != 0) {
              lVar12 = uVar13 << 1;
            }
            lVar18 = func_0x0046f2fc(param_1[uVar26 * 4 + 0x47],lVar12,0x10,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                                     ,0xc4d);
            if (lVar18 == 0) goto LAB_0038d6e0;
            param_1[uVar26 * 4 + 0x47] = lVar18;
            param_1[uVar26 * 4 + 0x48] = lVar12;
          }
          lVar12 = func_0x019e5b24(puVar45);
          if (lVar12 == 0) goto LAB_0038d6e0;
          iVar9 = func_0x0038ed84(lVar12,&uStack_610);
          if (iVar9 == 0) break;
          iVar9 = func_0x0038e098(puVar45);
          if (iVar9 == 0) goto LAB_0038d6e0;
          if (uStack_5e8 == 0) {
            uVar13 = 1;
          }
          else {
            puVar47 = &uStack_98;
            uVar14 = 1;
// donate: donate/README.md
            do {
              uVar13 = *puVar47;
              if ((uVar13 != 0) && ((abStack_5ac[lVar20] >> 1 & 1) == 0)) {
                uVar39 = puVar47[-1];
                lVar12 = *puVar45 + (ulong)(uint)auStack_5e0[uVar42 * 0x24 + 6] * 0x20;
                uVar29 = auStack_5e0[uVar42 * 0x24 + 5];
                uVar17 = uVar29 + 1;
                uVar32 = *(ulong *)(lVar12 + 0x240);
                if (uVar32 < uVar17) {
                  lVar19 = 8;
                  if (uVar32 != 0) {
                    lVar19 = uVar32 << 1;
                  }
                  lVar18 = func_0x0046f2fc(*(undefined8 *)(lVar12 + 0x238),lVar19,0x10,
                                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                                           ,0xc4d);
                  if (lVar18 == 0) goto LAB_0038cab4;
                  *(long *)(lVar12 + 0x238) = lVar18;
                  *(long *)(lVar12 + 0x240) = lVar19;
                  uVar29 = auStack_5e0[uVar42 * 0x24 + 5];
                  uVar17 = uVar29 + 1;
                }
                else {
                  lVar18 = *(long *)(lVar12 + 0x238);
                }
                puVar44 = (ulong *)(lVar18 + uVar29 * 0x10);
                *puVar44 = uVar39;
/* WM - donate: donate/README.md */
                puVar44[1] = uVar13;
                auStack_5e0[uVar42 * 0x24 + 5] = uVar17;
                auStack_5e0[uVar42 * 0x24 + 2] = auStack_5e0[uVar42 * 0x24 + 2] + uVar13;
              }
LAB_0038cab4:
              puVar47 = puVar47 + 2;
              uVar13 = uVar14 + 1;
              bVar7 = uVar14 < uStack_5e8;
              uVar14 = uVar13;
            } while (bVar7);
          }
          abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
          uStack_630 = 0xffffffffffffffff;
          uStack_628 = uStack_610;
          lStack_620 = uStack_610 + uStack_608 + -1;
          uStack_618 = uStack_618 & 0xfffffffffffffffe;
          iVar9 = func_0x0038e910(lVar37,&uStack_630);
          bVar7 = true;
          if (iVar9 == 0) goto LAB_0038d6e0;
        }
        if ((abStack_568[lVar20] & 1) != 0) {
          func_0x0047680c(auStack_5a0 + lVar20);
          abStack_568[lVar20] = abStack_568[lVar20] & 0xfe;
          pbVar1 = abStack_5ac + lVar20 + 4;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
        }
// do not claim this as your own
      }
joined_r0x0038cbc8:
      if ((((uVar24 >> 8 & 1) != 0) && ((*(ushort *)(param_1 + 0x3d) >> 0xb & 1) != 0)) &&
         (func_0x00389ddc(&uStack_630,param_1[0x18],1), lStack_620 != 0)) {
        lStack_6e8 = 0;
        do {
          lVar12 = lStack_620;
          func_0x00389e2c(&uStack_630);
          lVar16 = lStack_620;
          uVar26 = *(ulong *)(lVar12 + 0x100);
          uVar13 = uVar26 & 0xfffffffe8fffffff;
          *(ulong *)(lVar12 + 0x100) = uVar13;
          *(undefined8 *)(lVar12 + 0x60) = 0;
          if ((uVar26 >> 0x22 & 1) != 0) {
            lVar37 = func_0x019e5b24(puVar45);
            if (lVar37 == 0) goto LAB_0038d6e0;
            auStack_158[0] = *(ulong *)(lVar12 + 0x40);
            puStack_160 = *(uint **)(lVar12 + 0x38);
            iVar9 = func_0x0038ed34(lVar37,&puStack_160);
            if (iVar9 != 0) {
              iVar9 = func_0x0038e098(puVar45);
              if (iVar9 != 0) {
                abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
                uVar26 = *(ulong *)(lVar12 + 0x100);
                uVar13 = uVar26 | 0x20000000;
/* if you paid for this, you were scammed */
                *(ulong *)(lVar12 + 0x100) = uVar13;
                bVar7 = true;
                goto joined_r0x0038cea0;
              }
              goto LAB_0038d6e0;
            }
LAB_0038d438:
            if ((abStack_568[lVar20] & 1) != 0) {
              func_0x0047680c(auStack_5a0 + lVar20);
              abStack_568[lVar20] = abStack_568[lVar20] & 0xfe;
              pbVar1 = abStack_5ac + lVar20 + 4;
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
            }
LAB_0038bc14:
            *(long *)(lVar12 + 0x30) = alStack_558[uVar42 * 0x24 + 1];
            alStack_558[uVar42 * 0x24 + 1] = lVar12;
            break;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          }
joined_r0x0038cea0:
          if ((uVar26 >> 0x23 & 1) != 0) {
            if (((uVar13 & 0xff00) != 0x500) || (lVar37 = func_0x019e5b24(puVar45), lVar37 == 0))
            goto LAB_0038d6e0;
            puStack_160 = *(uint **)(lVar12 + 0x38);
            auStack_158[0] = *(ulong *)(lVar12 + 0x48);
            if (*(byte *)(lVar12 + 0x101) - 3 < 4) {
              auStack_158[1] = *(ulong *)(lVar12 + 0x68);
            }
            else if ((*(byte *)(lVar12 + 0x101) != 2) ||
                    (iVar9 = func_0x00388dc4(*(undefined8 *)(lVar12 + 0x70),auStack_158 + 1),
                    iVar9 == 0)) goto LAB_0038d6e0;
            iVar9 = func_0x0038ecd4(lVar37,&puStack_160);
            if (iVar9 == 0) goto LAB_0038d438;
            iVar9 = func_0x0038e098(puVar45);
            uVar13 = auStack_158[1];
            if (iVar9 == 0) goto LAB_0038d6e0;
/* reversing this took months of machine time */
            abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
            *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 0x40000000;
            uVar14 = func_0x002f78b4(lVar12 + 0x80);
            uVar26 = auStack_158[1];
            if (uVar14 < uVar13) goto LAB_0038d6e0;
            lVar37 = func_0x002f78b4(lVar12 + 0x80);
            *(ulong *)(lVar12 + 0x60) = uVar26 - lVar37;
            uVar13 = *(ulong *)(lVar12 + 0x100);
            bVar7 = true;
          }
          if ((uVar13 & 0xff0000) == 0x10000) {
            if (((uVar13 >> 0x21 & 1) == 0) &&
               (iVar9 = func_0x0037aaec(lVar12 + 0xa0,0), iVar9 == 0)) {
              uVar13 = *(ulong *)(lVar12 + 0x100);
              goto LAB_0038cd14;
            }
            lVar37 = func_0x019e5b24(puVar45);
            if (lVar37 == 0) goto LAB_0038d6e0;
            uVar36 = func_0x0034d3f0(lVar12 + 0xa0);
            iVar9 = func_0x0038f0c0(lVar37,*(undefined8 *)(lVar12 + 0x38),uVar36);
            if (iVar9 == 0) goto LAB_0038d438;
            iVar9 = func_0x0038e098(puVar45);
            if (iVar9 == 0) goto LAB_0038d6e0;
            abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
            uVar13 = *(ulong *)(lVar12 + 0x100) | 0x10000000;
            *(ulong *)(lVar12 + 0x100) = uVar13;
            bVar7 = true;
            uVar23 = (uint)uVar13;
          }
          else {
LAB_0038cd14:
            uVar23 = (uint)uVar13;
          }
          if ((0xfffffffc < (uVar23 >> 8 & 0xff) - 4) &&
             (((uint)uVar13 >> 8 & 0xff) - 7 < 0xfffffffe)) {
            if ((uVar13 >> 0x23 & 1) != 0) goto LAB_0038d6e0;
/*  thanks for reading - discord.gg/sdkhDjTex  */
            puVar40 = *(uint **)(lVar12 + 0x38);
            uVar36 = *(undefined8 *)(lVar12 + 0x70);
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            lStack_d8 = 0;
            uStack_e0 = 0;
            uStack_e8 = 0;
            lStack_f0 = 0;
            uStack_f8 = 0;
            apuStack_108[1] = (uint *)0x0;
            apuStack_108[0] = (uint *)0x0;
            auStack_130[4] = 0;
            auStack_130[3] = 0;
/* unlicensed copy if this notice is missing - github.com/pengussy */
            auStack_130[2] = 0;
            auStack_130[1] = 0;
            auStack_130[0] = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            auStack_158[2] = 0;
            auStack_158[1] = 0;
            auStack_158[0] = 0;
            puStack_160 = (uint *)0x0;
            uVar26 = (ulong)(uint)auStack_5e0[uVar42 * 0x24 + 6];
            lVar37 = alStack_558[uVar42 * 0x24];
            uVar13 = func_0x002f78b4(lVar12 + 0x80);
            auStack_130[4] = 2;
            iVar9 = func_0x00388a10(uVar36,0,&puStack_160,auStack_130,auStack_130 + 4);
            apuStack_108[0] = (uint *)CONCAT44(apuStack_108[0]._4_4_,iVar9);
            if (iVar9 != 0) {
              uStack_708 = uVar13;
              if ((auStack_158[1] == 0) && (((byte)uStack_140 >> 1 & 1) == 0)) {
LAB_0038d6c8:
                *(ulong *)(lVar12 + 0x60) = uStack_708 - uVar13;
                *(long *)(lVar12 + 0x30) = alStack_558[uVar42 * 0x24 + 1];
                alStack_558[uVar42 * 0x24 + 1] = lVar12;
                goto LAB_0038d6e0;
              }
              uStack_138 = auStack_158[1];
              lVar18 = func_0x0037a6bc(lVar12 + 0x80,lStack_6e8);
              lVar19 = func_0x002f78b4(lVar12 + 0x80);
              if (auStack_158[1] == 0) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                if (((byte)uStack_140 >> 1 & 1) == 0) goto LAB_0038cbf4;
              }
              else {
                uVar14 = lVar19 + lVar18;
                if (uVar14 < auStack_158[0] + auStack_158[1]) {
                  uStack_140 = uStack_140 & 0xfffffffffffffffd;
                  auStack_158[1] = 0;
                  if (uVar14 >= auStack_158[0]) {
                    auStack_158[1] = uVar14 - auStack_158[0];
                  }
                  if (uVar14 < auStack_158[0] || uVar14 - auStack_158[0] == 0) goto LAB_0038cbf4;
                }
              }
              if ((int)apuStack_108[0] != 0) {
                uStack_b0 = 2;
                puStack_160 = puVar40;
                iVar9 = func_0x00388a10(uVar36,1,apuStack_108 + 1,&uStack_d0,&uStack_b0);
                uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar9);
                if (iVar9 != 0) {
                  if ((lStack_f0 == 0) && (((byte)uStack_e0 >> 1 & 1) == 0)) goto LAB_0038d6c8;
                  lStack_d8 = lStack_f0;
                  lVar18 = func_0x0037a6bc(lVar12 + 0x80,lStack_6e8);
                  lVar19 = func_0x002f78b4(lVar12 + 0x80);
                  if (lStack_f0 == 0) {
                    if (((byte)uStack_e0 >> 1 & 1) == 0) {
LAB_0038cfc0:
                      uStack_a8 = uStack_a8 & 0xffffffff00000000;
                    }
                  }
                  else {
                    uVar14 = lVar19 + lVar18;
                    if (uVar14 < uStack_f8 + lStack_f0) {
                      uStack_e0 = uStack_e0 & 0xfffffffffffffffd;
                      lStack_f0 = 0;
                      if (uVar14 >= uStack_f8) {
                        lStack_f0 = uVar14 - uStack_f8;
                      }
                      if (uVar14 < uStack_f8 || uVar14 - uStack_f8 == 0) goto LAB_0038cfc0;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                    }
                  }
                }
                bVar6 = false;
                uStack_6f0 = 0;
                apuStack_108[1] = puVar40;
                do {
                  if ((abStack_5ac[lVar20] & 1) == 0) {
                    uVar14 = auStack_5e0[uVar42 * 0x24 + 4];
                  }
                  else {
                    uVar14 = 0;
                  }
                  uVar17 = uStack_6f0 & 1;
                  puVar47 = auStack_158 + uVar17 * 0xc + -1;
                  if (*(int *)(apuStack_108 + uVar17 * 0xc) == 0) break;
                  uVar14 = auStack_5e0[uVar42 * 0x24 + 1] - (uVar14 + *puVar28);
                  if (uVar14 < 3) {
LAB_0038bc00:
                    *(ulong *)(lVar12 + 0x60) = uStack_708 - uVar13;
                    goto LAB_0038bc14;
                  }
                  if ((abStack_5ac[lVar20] >> 1 & 1) != 0) goto LAB_0038d6c8;
                  uVar29 = auStack_130[uVar17 * 0xc + -1];
                  if (uStack_6f0 != 0) {
                    uVar32 = uStack_6f0 + 1 & 1;
                    auStack_130[uVar32 * 0xc + 4] = 2;
                    iVar9 = func_0x00388a10(uVar36,uStack_6f0 + 1,auStack_158 + uVar32 * 0xc + -1,
                                            auStack_130 + uVar32 * 0xc);
                    *(int *)(apuStack_108 + uVar32 * 0xc) = iVar9;
                    if (iVar9 != 0) {
/* do not claim this as your own */
                      if ((auStack_158[uVar32 * 0xc + 1] == 0) &&
                         (((byte)auStack_158[uVar32 * 0xc + 3] >> 1 & 1) == 0)) goto LAB_0038d6c8;
                      auStack_130[uVar32 * 0xc + -1] = auStack_158[uVar32 * 0xc + 1];
                      lVar18 = func_0x0037a6bc(lVar12 + 0x80,lStack_6e8);
                      lVar19 = func_0x002f78b4(lVar12 + 0x80);
                      if (auStack_158[uVar32 * 0xc + 1] == 0) {
                        if (((byte)auStack_158[uVar32 * 0xc + 3] >> 1 & 1) == 0) {
LAB_0038d104:
                          *(undefined4 *)(apuStack_108 + uVar32 * 0xc) = 0;
                        }
                      }
                      else {
                        uVar39 = lVar19 + lVar18;
                        uVar30 = auStack_158[uVar32 * 0xc];
                        if (uVar39 < uVar30 + auStack_158[uVar32 * 0xc + 1]) {
                          *(byte *)(auStack_158 + uVar32 * 0xc + 3) =
                               (byte)auStack_158[uVar32 * 0xc + 3] & 0xfd;
                          uVar33 = 0;
                          if (uVar39 >= uVar30) {
                            uVar33 = uVar39 - uVar30;
                          }
                          auStack_158[uVar32 * 0xc + 1] = uVar33;
                          if (uVar39 < uVar30 || uVar39 - uVar30 == 0) goto LAB_0038d104;
                        }
                      }
                    }
                  }
                  *(byte *)(auStack_158 + uVar17 * 0xc + 3) =
                       (byte)auStack_158[uVar17 * 0xc + 3] & 0xfe;
/* more drops soon - github.com/pengussy */
                  uStack_5e8 = 0;
                  uStack_610 = 0;
                  iVar9 = func_0x0038e57c(puVar47,uVar14,&uStack_610,&uStack_5e8);
                  if (iVar9 == 0) goto LAB_0038bc00;
                  if (lVar16 == 0) {
                    bVar8 = *(int *)(apuStack_108 + (uVar17 ^ 1) * 0xc) != 0;
                    if (uStack_5e8 + uStack_610 < uVar14) goto LAB_0038d18c;
LAB_0038d190:
                    if (auStack_4d0[uVar42 * 0x48 + 2] != 0) goto LAB_0038d198;
                    uVar32 = auStack_158[uVar17 * 0xc + 3];
                    bVar21 = (byte)uVar32 & 0xfe;
                    *(byte *)(auStack_158 + uVar17 * 0xc + 3) = bVar21;
                    auStack_158[uVar17 * 0xc + 1] = uStack_5e8;
                    bVar6 = true;
                    uVar14 = uStack_5e8;
                    bVar31 = (byte)uVar32;
                  }
                  else {
                    bVar8 = true;
                    if (uVar14 <= uStack_5e8 + uStack_610) goto LAB_0038d190;
LAB_0038d18c:
                    if (!bVar8) goto LAB_0038d190;
LAB_0038d198:
// if you paid for this, you were scammed
                    *(byte *)(auStack_158 + uVar17 * 0xc + 3) =
                         (byte)auStack_158[uVar17 * 0xc + 3] | 1;
                    auStack_600[1] = 0;
                    iVar9 = func_0x0038e57c(puVar47,uVar14,auStack_5f0,auStack_600 + 1);
                    if (iVar9 == 0) goto LAB_0038bc00;
                    auStack_158[uVar17 * 0xc + 1] = auStack_600[1];
                    bVar21 = (byte)auStack_158[uVar17 * 0xc + 3];
                    uVar14 = auStack_600[1];
                    bVar31 = bVar21;
                  }
                  if ((bVar31 >> 1 & 1) != 0) {
                    *(undefined4 *)(apuStack_108 + (uVar17 ^ 1) * 0xc) = 0;
                  }
                  if (uVar14 < uVar29) {
                    *(byte *)(auStack_158 + uVar17 * 0xc + 3) = bVar21 & 0xfd;
                  }
                  func_0x00388fd4(uVar14,auStack_130 + uVar17 * 0xc,auStack_130[uVar17 * 0xc + 4]);
                  uVar14 = param_1[uVar26 * 4 + 0x48];
                  if (uVar14 < auStack_5e0[uVar42 * 0x24 + 5] + 3) {
                    lVar18 = 8;
                    if (uVar14 != 0) {
                      lVar18 = uVar14 << 1;
                    }
                    lVar19 = func_0x0046f2fc(param_1[uVar26 * 4 + 0x47],lVar18,0x10,
                                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                                             ,0xc4d);
                    if (lVar19 == 0) goto LAB_0038d6c8;
                    param_1[uVar26 * 4 + 0x47] = lVar19;
                    param_1[uVar26 * 4 + 0x48] = lVar18;
                  }
                  lVar18 = func_0x019e5b24(puVar45);
                  if (lVar18 == 0) goto LAB_0038d6c8;
                  iVar9 = func_0x0038eebc(lVar18,puVar47);
                  if (iVar9 == 0) {
                    func_0x019e5bec(abStack_568 + lVar20,puVar45,abStack_5ac + lVar20 + 4);
                    goto LAB_0038bc00;
                  }
                  iVar9 = func_0x0038e098(puVar45);
/* wm:proprietary - see LICENSE - do not sell */
                  if (iVar9 == 0) goto LAB_0038d6c8;
                  if (auStack_130[uVar17 * 0xc + 4] != 0) {
                    uVar14 = 0;
                    puVar44 = auStack_130 + uVar17 * 0xc + 1;
                    do {
                      uVar32 = *puVar44;
                      if ((uVar32 != 0) && ((abStack_5ac[lVar20] >> 1 & 1) == 0)) {
                        uVar48 = puVar44[-1];
                        lVar18 = *puVar45 + (ulong)(uint)auStack_5e0[uVar42 * 0x24 + 6] * 0x20;
                        uVar30 = auStack_5e0[uVar42 * 0x24 + 5];
                        uVar39 = uVar30 + 1;
                        uVar33 = *(ulong *)(lVar18 + 0x240);
                        if (uVar33 < uVar39) {
                          lVar4 = 8;
                          if (uVar33 != 0) {
                            lVar4 = uVar33 << 1;
                          }
                          lVar19 = func_0x0046f2fc(*(undefined8 *)(lVar18 + 0x238),lVar4,0x10,
                                                                                                      
                                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                                                  ,0xc4d);
                          if (lVar19 == 0) goto LAB_0038d2b0;
                          *(long *)(lVar18 + 0x238) = lVar19;
                          *(long *)(lVar18 + 0x240) = lVar4;
                          uVar30 = auStack_5e0[uVar42 * 0x24 + 5];
                          uVar39 = uVar30 + 1;
                        }
                        else {
                          lVar19 = *(long *)(lVar18 + 0x238);
                        }
                        puVar3 = (ulong *)(lVar19 + uVar30 * 0x10);
                        *puVar3 = uVar48;
                        puVar3[1] = uVar32;
                        auStack_5e0[uVar42 * 0x24 + 5] = uVar39;
                        auStack_5e0[uVar42 * 0x24 + 2] = auStack_5e0[uVar42 * 0x24 + 2] + uVar32;
                      }
LAB_0038d2b0:
                      puVar44 = puVar44 + 2;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < auStack_130[uVar17 * 0xc + 4]);
                  }
                  bVar21 = abStack_5ac[lVar20];
                  abStack_5ac[lVar20] = bVar21 | 1;
                  uVar14 = auStack_158[uVar17 * 0xc + 3];
                  if (((byte)uVar14 & 1) == 0) {
                    abStack_5ac[lVar20] = bVar21 | 3;
                  }
                  uStack_98 = auStack_158[uVar17 * 0xc];
                  uStack_a0 = *puVar47;
                  uVar32 = auStack_158[uVar17 * 0xc] + auStack_158[uVar17 * 0xc + 1];
                  uVar39 = uVar32;
                  if (uVar32 <= uStack_708) {
                    uVar39 = uStack_708;
                  }
                  if (auStack_158[uVar17 * 0xc + 1] != 0) {
                    uStack_708 = uVar39;
                  }
                  lStack_90 = uVar32 - 1;
                  bStack_88 = bStack_88 & 0xf8 | (byte)uVar14 >> 1 & 1;
                  iVar9 = func_0x0038e910(lVar37,&uStack_a0);
                  if (iVar9 == 0) goto LAB_0038d6c8;
                  uStack_6f0 = uStack_6f0 + 1;
                  bVar7 = true;
                } while (uVar29 <= auStack_158[uVar17 * 0xc + 1]);
                *(ulong *)(lVar12 + 0x60) = uStack_708 - uVar13;
                if (bVar6) goto LAB_0038bc14;
                lStack_6e8 = *(long *)(lVar12 + 0x60) + lStack_6e8;
                goto LAB_0038cc0c;
// WM - found on a paste site? it was re-uploaded illegally
              }
            }
LAB_0038cbf4:
            *(undefined8 *)(lVar12 + 0x60) = 0;
          }
LAB_0038cc0c:
          *(long *)(lVar12 + 0x30) = alStack_558[uVar42 * 0x24 + 1];
          alStack_558[uVar42 * 0x24 + 1] = lVar12;
        } while (lStack_620 != 0);
      }
      abStack_5ac[lVar20] = abStack_5ac[lVar20] | 1;
      if (bVar7) {
LAB_0038bc38:
        iStack_634 = 0;
        bVar21 = bVar7 << 3;
      }
      else if ((uVar24 >> 1 & 1) == 0) {
        bVar21 = 0;
      }
      else {
        if (((uVar24 >> 0xf & 1) != 0) ||
           (((*(ushort *)(param_1 + 0x3d) >> 7 & 7) >> (ulong)uVar27 & 1) != 0)) {
          lVar20 = func_0x019e5b24(puVar45);
/* stripping the watermark breaks the license */
          if ((lVar20 == 0) ||
             ((iVar9 = func_0x0038eb60(), iVar9 == 0 ||
              (iVar9 = func_0x0038e098(puVar45), iVar9 == 0)))) goto LAB_0038d6e0;
          bVar7 = true;
          goto LAB_0038bc38;
        }
        bVar21 = 0;
      }
      puVar15[1] = auStack_4f0[uVar42 * 0x24 + 3] + auStack_5e0[uVar42 * 0x24 + 2];
      *puVar15 = param_1[uVar46 + 0x38];
      bVar31 = 4;
      if (iStack_634 != 0) {
        bVar31 = 0;
      }
      *(byte *)(puVar15 + 4) = bVar21 | (byte)uVar27 | *(byte *)(puVar15 + 4) & 0xc0 | bVar31;
      uVar36 = (*(code *)param_1[0x1f])(param_1[0x20]);
      puVar15[2] = uVar36;
      *(char *)(puVar15 + 0xf) = (char)auStack_548[uVar42 * 0x48];
      if (auStack_4d0[uVar42 * 0x48 + 2] != 0) {
        bVar34 = true;
      }
      auStack_4f0[uVar42 * 0x24 + 2] =
           auStack_5e0[uVar42 * 0x24 + 2] + uVar38 + auStack_4f0[uVar42 * 0x24 + 3];
    }
LAB_0038bcc8:
/* origin: github.com/pengussy */
    uVar42 = uVar42 + 1;
  } while (uVar42 != 4);
  if (aiStack_560[0] != 0 && auStack_5e0[2] != 0 || bVar34) {
    uVar24 = 4;
    if (aiStack_560[0] != 0 && auStack_5e0[2] != 0) {
      uVar24 = 4;
      if ((auStack_4d0[1] & 0x4000) != 0) {
        uVar24 = (abStack_5ac[0] & 2) << 1;
      }
      if (iStack_5b0 != 0) {
        iVar9 = func_0x00385134(param_1[0x14],iStack_5b0,auStack_5e0[2],&puStack_160);
        if (iVar9 == 0) {
          puVar43 = puStack_4d8 + auStack_5e0[2];
          goto joined_r0x0038d654;
        }
        apuStack_510[2] = puStack_160;
        lVar10 = func_0x003923f4((undefined1)uStack_540,auStack_548);
        puStack_4d8 = (undefined1 *)((long)puStack_160 + (lVar10 - auStack_5e0[2]));
      }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      puVar43 = puStack_4d8 + auStack_5e0[2];
    }
    else {
      puVar43 = (undefined1 *)0x0;
    }
joined_r0x0038d654:
    if ((iStack_440 != 0) && (lStack_4b0 != 0)) {
      if ((uVar24 == 4) && (((bStack_3ab >> 6 & 1) != 0 && ((bStack_48c & 2) == 0)))) {
        uVar24 = 1;
      }
      if ((iStack_490 != 0) &&
         (iVar9 = func_0x00385134(param_1[0x14],iStack_490,lStack_4b0,&puStack_160), iVar9 != 0)) {
        puStack_3e0 = puStack_160;
        lVar10 = func_0x003923f4(uStack_420,auStack_428);
        puStack_3b8 = (undefined1 *)((long)puStack_160 + (lVar10 - lStack_4b0));
      }
      puVar43 = puStack_3b8 + (long)puVar43 + lStack_4b0;
    }
    if ((aiStack_320[0] != 0) && (auStack_390[0] != 0)) {
      if ((uVar24 == 4) && ((bStack_28b >> 6 & 1) != 0)) {
        uVar23 = 2;
        if ((bStack_36c & 2) != 0) {
          uVar23 = uVar24;
        }
        uVar24 = uVar23;
      }
      if ((iStack_370 != 0) &&
         (iVar9 = func_0x00385134(param_1[0x14],iStack_370,auStack_390[0],&puStack_160), iVar9 != 0)
         ) {
        puStack_2c0 = puStack_160;
        lVar10 = func_0x003923f4(uStack_300,auStack_308);
        puStack_298 = (undefined1 *)((long)puStack_160 + (lVar10 - auStack_390[0]));
      }
      puVar43 = puStack_298 + (long)puVar43 + auStack_390[0];
    }
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if ((iStack_200 != 0) && (lStack_270 != 0)) {
      if (uVar24 == 4) {
        if ((bStack_16b >> 6 & 1) == 0) {
          uVar24 = 4;
        }
        else {
          uVar24 = 3;
          if ((bStack_24c & 2) != 0) {
            uVar24 = 4;
          }
        }
      }
      if ((iStack_250 != 0) &&
         (iVar9 = func_0x00385134(param_1[0x14],iStack_250,lStack_270,&puStack_160), iVar9 != 0)) {
        puStack_1a0 = puStack_160;
        lVar10 = func_0x003923f4(uStack_1e0,auStack_1e8);
        puStack_178 = (undefined1 *)((long)puStack_160 + (lVar10 - lStack_270));
      }
      puVar43 = puStack_178 + (long)puVar43 + lStack_270;
    }
    if ((uVar24 != 4) && (puVar43 < (undefined1 *)0x4b0)) {
      uVar42 = (ulong)uVar24;
      lVar10 = uVar42 * 0x120;
      if ((aiStack_560[uVar42 * 0x48] != 0) &&
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
         ((alStack_558[uVar42 * 0x24] != 0 &&
          (lVar20 = func_0x019e5b24(auStack_5e0 + uVar42 * 0x24), lVar20 != 0)))) {
        iVar9 = func_0x0038eb54(lVar20,0x4b0 - (long)puVar43);
        if (iVar9 == 0) {
          if ((abStack_568[lVar10] & 1) != 0) {
            func_0x0047680c(auStack_5a0 + lVar10);
            lVar20 = 0;
            lVar12 = 0;
            abStack_568[lVar10] = abStack_568[lVar10] & 0xfe;
            pbVar1 = abStack_5ac + lVar10 + 4;
            pbVar1[0] = 0;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pbVar1[4] = 0;
            pbVar1[5] = 0;
            pbVar1[6] = 0;
            pbVar1[7] = 0;
            goto LAB_0038d700;
          }
        }
        else {
          iVar9 = func_0x0038e098(auStack_5e0 + uVar42 * 0x24);
          if (iVar9 != 0) {
            lVar10 = alStack_558[uVar42 * 0x24];
            *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + (0x4b0 - (long)puVar43);
            *(byte *)(lVar10 + 0x20) = *(byte *)(lVar10 + 0x20) | 4;
/* wm:more drops soon - github.com/pengussy */
            *(byte *)(alStack_558[uVar42 * 0x24] + 0x20) =
                 *(byte *)(alStack_558[uVar42 * 0x24] + 0x20) | 4;
            goto LAB_0038da44;
          }
        }
      }
LAB_0038d6f8:
      lVar20 = 0;
LAB_0038d6fc:
      lVar12 = 0;
      goto LAB_0038d700;
    }
    if (puVar43 < (undefined1 *)0x4b0) {
      lVar20 = 0;
      lVar12 = 1;
      goto LAB_0038d700;
    }
  }
LAB_0038da44:
  lVar12 = _UNK_01adfc08;
  uVar42 = _UNK_01adfc00;
  lVar10 = 0;
  lVar20 = 0;
  do {
    if ((aiStack_560[lVar10 * 0x48] != 0) && (uVar38 = auStack_5e0[lVar10 * 0x24 + 2], uVar38 != 0))
    {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      uVar46 = param_1[0x3c];
      if (uVar38 < uVar46) {
        if (uVar46 != 0xffffffffffffffff) {
          lVar16 = 0;
          if (uVar38 <= uVar46) {
            lVar16 = uVar46 - uVar38;
          }
          param_1[0x3c] = lVar16;
        }
        uVar23 = (uint)auStack_5e0[lVar10 * 0x24 + 6];
        uVar24 = 1;
        if (uVar23 != 2) {
          uVar24 = 2;
        }
        uVar27 = 0;
        if (uVar23 != 0) {
          uVar27 = uVar24;
        }
        if (3 < uVar23) goto LAB_0038d6fc;
/*  reversing this took months of machine time  */
        lVar16 = alStack_558[lVar10 * 0x24];
        uVar24 = *(uint *)(&UNK_01ae6dc0 + (ulong)uVar22 * 4 + (ulong)uVar23 * 0xc);
        puStack_160 = auStack_548 + lVar10 * 0x48;
        auStack_158[0] = param_1[(ulong)uVar23 * 4 + 0x47];
        auStack_158[1] = auStack_5e0[lVar10 * 0x24 + 5];
        uStack_140 = 0;
        iVar9 = func_0x00290f74((long)param_1 + 0x2cU);
        auStack_158[2] = 0;
        if (iVar9 != 0) {
          auStack_158[2] = (long)param_1 + 0x2cU;
        }
        uStack_138 = param_1[(ulong)uVar27 + 0x38];
        auStack_130[0] = CONCAT44(auStack_130[0]._4_4_,1);
        for (lVar37 = alStack_558[lVar10 * 0x24 + 1]; lVar37 != 0; lVar37 = *(long *)(lVar37 + 0x30)
            ) {
          if ((*(ulong *)(lVar37 + 0x100) & 0x60000000) != 0) {
            uStack_a0 = *(ulong *)(lVar37 + 0x38);
            lStack_90 = lVar12;
            uStack_98 = uVar42;
            bStack_88 = bStack_88 & 0xf8 | (byte)(*(ulong *)(lVar37 + 0x100) >> 0x1c) & 6;
            iVar9 = func_0x0038e910(lVar16,&uStack_a0);
            if (iVar9 == 0) goto LAB_0038d6fc;
          }
        }
        iVar9 = func_0x0037ab84(param_1 + 0x2b,lVar16);
        if (iVar9 == 0) goto LAB_0038d6fc;
        param_1[(ulong)uVar27 + 0x38] = param_1[(ulong)uVar27 + 0x38] + 1;
        iVar9 = func_0x019e4984(param_1[0x14],&puStack_160);
        if (iVar9 != 0) {
          lVar37 = alStack_558[lVar10 * 0x24 + 1];
/* wm:stripping the watermark breaks the license */
          bVar34 = false;
          if (lVar37 != 0) {
            bVar34 = true;
            do {
              uVar38 = *(ulong *)(lVar37 + 0x100);
              if (((uint)uVar38 >> 0x1c & 1) != 0) {
                *(ulong *)(lVar37 + 0x100) = uVar38 & 0xfffffffdffffffff;
                func_0x0037aaec(lVar37 + 0xa0,1);
                uVar38 = *(ulong *)(lVar37 + 0x100);
              }
              uVar46 = uVar38;
              if ((uVar38 & 0x20000000) != 0) {
                uVar46 = uVar38 & 0xfffffffbffffffff;
              }
              if ((uVar46 & 0x40000000) != 0 || (uVar38 & 0x20000000) != 0) {
                if ((uVar46 & 0x40000000) != 0) {
                  uVar46 = uVar46 & 0xfffffff7ffffffff;
                }
                *(ulong *)(lVar37 + 0x100) = uVar46;
              }
              if (*(long *)(lVar37 + 0x60) != 0) {
                iVar9 = func_0x0037a6e4(lVar37 + 0x80);
                if (iVar9 == 0) {
                  bVar34 = false;
                }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                *(undefined8 *)(lVar37 + 0x60) = 0;
              }
              func_0x003894ac(param_1[0x18],lVar37);
              if (((0xfffffffc < *(byte *)(lVar37 + 0x101) - 4) &&
                  (iVar9 = func_0x00388b5c(*(undefined8 *)(lVar37 + 0x70)), iVar9 == 0)) &&
                 (iVar9 = func_0x00388dc4(*(undefined8 *)(lVar37 + 0x70),0), iVar9 != 0)) {
                func_0x00389800(param_1[0x18],lVar37);
              }
              lVar37 = *(long *)(lVar37 + 0x30);
            } while (lVar37 != 0);
            bVar34 = !bVar34;
          }
          if ((*(byte *)(lVar16 + 0x20) >> 3 & 1) == 0) {
            bVar21 = *(byte *)(lVar16 + 0x79);
            if ((bVar21 & 1) != 0) goto LAB_0038dd00;
LAB_0038dcbc:
            if ((bVar21 >> 1 & 1) != 0) goto LAB_0038dd14;
LAB_0038dcc0:
            if ((bVar21 >> 2 & 1) != 0) goto LAB_0038dd34;
LAB_0038dcc4:
            if ((bVar21 >> 3 & 1) != 0) goto LAB_0038dd54;
LAB_0038dcc8:
            if ((bVar21 >> 4 & 1) != 0) goto LAB_0038dd74;
LAB_0038dccc:
            if ((bVar21 >> 5 & 1) != 0) goto LAB_0038dd94;
LAB_0038dcd0:
/*  donate: donate/README.md  */
            bVar21 = *(byte *)(lVar16 + 0x20);
          }
          else {
            *(ushort *)(param_1 + 0x3d) =
                 *(ushort *)(param_1 + 0x3d) & ((ushort)(~(1 << (ulong)uVar27) << 7) | 0xfc7f);
            bVar21 = *(byte *)(lVar16 + 0x79);
            if ((bVar21 & 1) == 0) goto LAB_0038dcbc;
LAB_0038dd00:
            *(ushort *)(param_1 + 0x3d) = *(ushort *)(param_1 + 0x3d) & 0xfffe;
            bVar21 = *(byte *)(lVar16 + 0x79);
            if ((bVar21 >> 1 & 1) == 0) goto LAB_0038dcc0;
LAB_0038dd14:
            *(ushort *)(param_1 + 0x3d) = *(ushort *)(param_1 + 0x3d) & 0xfffd;
            func_0x0037aaec(param_1[0x1a],1);
            bVar21 = *(byte *)(lVar16 + 0x79);
            if ((bVar21 >> 2 & 1) == 0) goto LAB_0038dcc4;
LAB_0038dd34:
            *(ushort *)(param_1 + 0x3d) = *(ushort *)(param_1 + 0x3d) & 0xfffb;
            func_0x0037aaec(param_1[0x1b],1);
            bVar21 = *(byte *)(lVar16 + 0x79);
            if ((bVar21 >> 3 & 1) == 0) goto LAB_0038dcc8;
LAB_0038dd54:
            *(ushort *)(param_1 + 0x3d) = *(ushort *)(param_1 + 0x3d) & 0xfff7;
            func_0x0037aaec(param_1[0x1c],1);
            bVar21 = *(byte *)(lVar16 + 0x79);
            if ((bVar21 >> 4 & 1) == 0) goto LAB_0038dccc;
LAB_0038dd74:
            *(ushort *)(param_1 + 0x3d) =
                 *(ushort *)(param_1 + 0x3d) & ((ushort)(~(1 << (ulong)uVar27) << 4) | 0xff8f);
            if ((*(byte *)(lVar16 + 0x79) >> 5 & 1) == 0) goto LAB_0038dcd0;
LAB_0038dd94:
            *(ushort *)(param_1 + 0x3d) = *(ushort *)(param_1 + 0x3d) & 0xfbff;
            bVar21 = *(byte *)(lVar16 + 0x20);
          }
// WM - keep the notice, keep the source honest
          if ((bVar21 >> 3 & 1) != 0) {
            piVar11 = (int *)func_0x00373a10(param_1[0x17]);
            if (uVar23 == 2) {
              if (piVar11[1] != 0) {
                piVar11[1] = piVar11[1] + -1;
              }
            }
            else if ((uVar23 == 0) && (*piVar11 != 0)) {
              *piVar11 = *piVar11 + -1;
            }
            if (((uVar24 >> 0xd & 1) != 0) && (piVar11[(ulong)uVar27 + 2] != 0)) {
              piVar11[(ulong)uVar27 + 2] = piVar11[(ulong)uVar27 + 2] + -1;
            }
          }
          if (!bVar34) {
            if (*param_2 == 0) {
              *param_2 = *(byte *)(alStack_558[lVar10 * 0x24] + 0x20) >> 3 & 1;
            }
            else {
              *param_2 = 1;
            }
            if (lVar10 == 2) {
              uVar24 = 0;
              if (aiStack_560[0x90] != 0) {
                uVar24 = (uint)(auStack_5e0[0x4a] != 0);
              }
              param_2[1] = uVar24;
            }
            alStack_558[lVar10 * 0x24] = 0;
            lVar20 = lVar20 + 1;
            goto LAB_0038da84;
          }
        }
        lVar12 = 0;
        alStack_558[lVar10 * 0x24] = 0;
      }
      else {
/* unlicensed copy if this notice is missing */
        lVar12 = 2;
      }
      goto LAB_0038d700;
    }
LAB_0038da84:
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  lVar12 = 1;
LAB_0038d700:
  func_0x003851e8(param_1[0x14]);
  if (aiStack_560[0] != 0) {
    if ((abStack_568[0] & 1) != 0) {
      func_0x0047680c(auStack_5a0);
      abStack_568[0] = abStack_568[0] & 0xfe;
      uStack_5a8 = 0;
    }
    auStack_5e0[0] = 0;
    aiStack_560[0] = 0;
    if (alStack_558[0] != 0) {
      func_0x0038e8d4(param_1[0x15]);
      alStack_558[0] = 0;
// origin: github.com/pengussy
    }
  }
  if (iStack_440 != 0) {
    if ((bStack_448 & 1) != 0) {
      func_0x0047680c(auStack_480);
      bStack_448 = bStack_448 & 0xfe;
      uStack_488 = 0;
    }
    uStack_4c0 = 0;
    iStack_440 = 0;
    if (lStack_438 != 0) {
      func_0x0038e8d4(param_1[0x15]);
      lStack_438 = 0;
    }
  }
  if (aiStack_320[0] != 0) {
    if ((bStack_328 & 1) != 0) {
      func_0x0047680c(auStack_360);
      bStack_328 = bStack_328 & 0xfe;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uStack_368 = 0;
    }
    uStack_3a0 = 0;
    aiStack_320[0] = 0;
    if (lStack_318 != 0) {
      func_0x0038e8d4(param_1[0x15]);
      lStack_318 = 0;
    }
  }
  if (iStack_200 != 0) {
    if ((bStack_208 & 1) != 0) {
      func_0x0047680c(auStack_240);
      bStack_208 = bStack_208 & 0xfe;
      uStack_248 = 0;
    }
    uStack_280 = 0;
    iStack_200 = 0;
    if (lStack_1f8 != 0) {
      func_0x0038e8d4(param_1[0x15]);
    }
  }
  *(long *)(param_2 + 2) = lVar20;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
    return lVar12;
  }
  auVar49 = ___stack_chk_fail();
  lVar10 = auVar49._0_8_;
  *(long *)(lVar10 + 0x218) = *(long *)(lVar10 + 0x218) + auVar49._8_8_;
  return lVar10;
}

