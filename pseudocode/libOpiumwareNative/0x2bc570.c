/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2bc570:db27ee2132
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

long FUN_002bc570(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int *piVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  ulong *puVar20;
  ulong *puVar21;
  int *piVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong *puVar30;
  long lVar31;
  ulong *puVar32;
/*  reversing this took months of machine time  */
  ulong uVar33;
  undefined8 *puVar34;
  int iVar35;
  long lVar36;
  int iVar37;
  int iVar38;
  ulong uVar39;
  ulong *puVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong auStack_70 [2];
  
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar40 = puVar4 + -1;
  lVar36 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x18);
  uVar19 = *(uint *)(param_1 + 0x110);
// reversing this took months of machine time
  if (uVar19 < 5) {
    uVar19 = 4;
  }
  if (5 < uVar19) {
    uVar19 = 6;
  }
  iVar38 = *param_3;
  iVar13 = param_3[1];
  puVar16 = *(ulong **)(param_1 + 0xf8);
  puVar8 = (ulong *)*puVar16;
  uVar9 = puVar16[1];
  puVar5 = (ulong *)(lVar36 + (ulong)uVar10);
  puVar16 = (ulong *)(uVar9 + (uint)puVar16[3]);
  puVar21 = param_4;
  if ((((int)param_4 - (int)puVar5) - (int)puVar16) + (int)puVar8 == 0) {
    puVar21 = (ulong *)((long)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
/* WM - proprietary - see LICENSE - do not sell */
  puVar26 = param_4;
  if (puVar21 < puVar40) {
    uVar3 = uVar10 + ((int)uVar9 - (int)puVar8);
    puVar17 = (ulong *)((long)puVar4 - 7);
    puVar18 = puVar4 + -4;
    puVar2 = (ulong *)((ulong)uVar10 + lVar36 + 8);
    do {
      iVar35 = (int)lVar36;
      uVar1 = (((int)puVar21 - iVar35) - iVar38) + 1;
      piVar22 = (int *)(uVar9 + (uVar1 - uVar3));
      if (uVar10 <= uVar1) {
        piVar22 = (int *)(lVar36 + (ulong)uVar1);
      }
      if ((uVar1 - uVar10 < 0xfffffffd) && (*piVar22 == *(int *)((long)puVar21 + 1))) {
        puVar20 = puVar8;
        if (uVar10 <= uVar1) {
          puVar20 = puVar4;
        }
        lVar11 = func_0x002ad924((long)puVar21 + 5,piVar22 + 1,puVar4,puVar20,puVar5);
        uVar33 = lVar11 + 4;
      }
      else {
        uVar33 = 0;
      }
      auStack_70[0] = 999999999;
      if (uVar19 == 6) {
        uVar12 = func_0x002d73cc(param_1,puVar21,puVar4,auStack_70);
        uVar14 = uVar12;
        if (uVar12 <= uVar33) {
          uVar14 = uVar33;
/* wm:do not claim this as your own */
        }
joined_r0x002bc760:
        if (uVar14 < 4) goto LAB_002bc664;
LAB_002bc780:
        uVar39 = auStack_70[0];
        puVar20 = puVar21;
        if (uVar12 <= uVar33) {
          uVar39 = 1;
          puVar20 = (ulong *)((long)puVar21 + 1);
        }
        uVar33 = uVar39;
        uVar12 = uVar14;
        if (puVar21 < puVar40) {
          lVar11 = (long)puVar21 + 0xd;
          do {
            puVar29 = (ulong *)((long)puVar21 + 1);
/* thanks for reading - discord.gg/sdkhDjTex */
            uVar1 = ((int)puVar29 - iVar35) - iVar38;
            piVar22 = (int *)(uVar9 + (uVar1 - uVar3));
            if (uVar10 <= uVar1) {
              piVar22 = (int *)(lVar36 + (ulong)uVar1);
            }
            if ((uVar1 - uVar10 < 0xfffffffd) && (*piVar22 == *(int *)puVar29)) {
              puVar24 = puVar8;
              if (uVar10 <= uVar1) {
                puVar24 = puVar4;
              }
              puVar30 = (ulong *)((long)puVar21 + 5);
              puVar32 = (ulong *)(piVar22 + 1);
              puVar6 = (ulong *)((long)puVar30 + ((long)puVar24 - (long)puVar32));
              if (puVar4 <= puVar6) {
                puVar6 = puVar4;
              }
              if (puVar30 < (ulong *)((long)puVar6 - 7U)) {
                if (*puVar32 == *puVar30) {
                  lVar31 = 0xd;
/* wm:proprietary - see LICENSE - do not sell */
                  puVar25 = (ulong *)(piVar22 + 3);
                  do {
                    puVar27 = (ulong *)((long)puVar21 + lVar31);
                    if ((ulong *)((long)puVar6 - 7U) <= puVar27) goto LAB_002bc884;
                    uVar33 = *puVar25;
                    lVar31 = lVar31 + 8;
                    puVar25 = puVar25 + 1;
                  } while (uVar33 == *puVar27);
                  uVar33 = *puVar27 ^ uVar33;
                  uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                  uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                  uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                  uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10
                  ;
                  uVar33 = (lVar31 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3)) - 0xd;
                }
                else {
                  uVar33 = *puVar30 ^ *puVar32;
                  uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                  uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                  uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                  uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10
                  ;
                  uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
                }
              }
              else {
                puVar25 = puVar32;
                puVar27 = puVar30;
LAB_002bc884:
                if (puVar27 < (ulong *)((long)puVar6 - 3U)) {
                  if ((int)*puVar25 == (int)*puVar27) {
                    puVar27 = (ulong *)((long)puVar27 + 4);
                    puVar25 = (ulong *)((long)puVar25 + 4);
// WM - more drops soon - github.com/pengussy
                  }
                  if (puVar27 < (ulong *)((long)puVar6 - 1U)) goto LAB_002bc988;
                }
                else if (puVar27 < (ulong *)((long)puVar6 - 1U)) {
LAB_002bc988:
                  if ((short)*puVar25 == (short)*puVar27) {
                    puVar27 = (ulong *)((long)puVar27 + 2);
                    puVar25 = (ulong *)((long)puVar25 + 2);
                  }
                }
                if (puVar27 < puVar6) {
                  if ((char)*puVar25 == (char)*puVar27) {
                    puVar27 = (ulong *)((long)puVar27 + 1);
                  }
                }
                uVar33 = (long)puVar27 - (long)puVar30;
              }
              if ((ulong *)((long)puVar32 + uVar33) == puVar24) {
                puVar30 = (ulong *)((long)puVar30 + uVar33);
                if (puVar30 < puVar17) {
/* watermarked copy - do not remove - github.com/pengussy */
                  if (*puVar5 == *puVar30) {
                    lVar31 = 0;
                    puVar21 = (ulong *)(lVar11 + uVar33);
                    puVar24 = puVar2;
                    do {
                      if (puVar17 <= puVar21) goto LAB_002bca44;
                      uVar28 = *puVar24;
                      uVar12 = *puVar21;
                      lVar31 = lVar31 + 8;
                      puVar21 = puVar21 + 1;
                      puVar24 = puVar24 + 1;
                    } while (uVar28 == uVar12);
                    uVar12 = uVar12 ^ uVar28;
                    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1
                    ;
                    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2
                    ;
                    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 |
/* wm:keep the notice, keep the source honest */
                             (uVar12 & 0xffff0000ffff) << 0x10;
                    uVar33 = lVar31 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) +
                             uVar33;
                  }
                  else {
                    uVar12 = *puVar30 ^ *puVar5;
                    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1
                    ;
                    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2
                    ;
                    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar12 & 0xffff0000ffff) << 0x10;
                    uVar33 = ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) + uVar33;
                  }
/* wm:reversing this took months of machine time */
                }
                else {
                  puVar21 = puVar30;
                  puVar24 = puVar5;
LAB_002bca44:
                  if (puVar21 < (ulong *)((long)puVar4 - 3U)) {
                    if ((int)*puVar24 == (int)*puVar21) {
                      puVar21 = (ulong *)((long)puVar21 + 4);
                      puVar24 = (ulong *)((long)puVar24 + 4);
                    }
                  }
                  if (puVar21 < (ulong *)((long)puVar4 - 1U)) {
                    if ((short)*puVar24 == (short)*puVar21) {
                      puVar21 = (ulong *)((long)puVar21 + 2);
                      puVar24 = (ulong *)((long)puVar24 + 2);
                    }
                  }
                  if (puVar21 < puVar4) {
                    if ((char)*puVar24 == (char)*puVar21) {
                      puVar21 = (ulong *)((long)puVar21 + 1);
                    }
                  }
                  uVar33 = (long)puVar21 + (uVar33 - (long)puVar30);
                }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
              }
              if (0xfffffffffffffffb < uVar33) goto LAB_002bcaa4;
              if ((int)LZCOUNT((int)uVar39) + (int)uVar14 * 3 + -0x1e < (int)(uVar33 + 4) * 3) {
                uVar39 = 1;
                puVar20 = puVar29;
                uVar14 = uVar33 + 4;
              }
              if (uVar19 != 6) goto LAB_002bc934;
LAB_002bcac0:
              auStack_70[0] = 999999999;
              uVar28 = func_0x002d73cc(param_1,puVar29,puVar4,auStack_70);
              uVar33 = uVar39;
              uVar12 = uVar14;
              uVar39 = auStack_70[0];
            }
            else {
LAB_002bcaa4:
              if (uVar19 == 6) goto LAB_002bcac0;
LAB_002bc934:
              auStack_70[0] = 999999999;
              uVar33 = uVar39;
              uVar12 = uVar14;
              if (uVar19 == 5) {
                uVar28 = func_0x002d6f30(param_1,puVar29,puVar4);
                uVar39 = auStack_70[0];
              }
              else {
                uVar28 = func_0x002d6a88(param_1,puVar29,puVar4);
                uVar39 = auStack_70[0];
              }
            }
            uVar14 = uVar28;
            auStack_70[0] = uVar39;
            if (uVar14 < 4) goto LAB_002bcc30;
            if ((int)LZCOUNT((int)uVar39) + (int)uVar14 * 4 + -0x1f <=
// WM - chat: discord.gg/sdkhDjTex
                (int)LZCOUNT((int)uVar33) + (int)uVar12 * 4 + -0x1b) goto LAB_002bcc30;
            lVar11 = lVar11 + 1;
            puVar20 = puVar29;
            puVar21 = puVar29;
          } while (puVar29 != (ulong *)((long)param_4 + param_5 + -8));
          if (uVar39 < 4) goto LAB_002bcc44;
LAB_002bcb80:
          iVar15 = (int)uVar39;
          uVar33 = (long)puVar29 + (-0xfffffffd - (uVar39 + lVar36));
          lVar11 = uVar9 - uVar3;
          puVar21 = puVar16;
          if (uVar10 <= (uint)uVar33) {
            lVar11 = lVar36;
            puVar21 = puVar5;
          }
          if ((puVar26 < puVar29) &&
             (uVar33 = uVar33 & 0xffffffff, puVar21 < (ulong *)(lVar11 + uVar33))) {
            puVar20 = (ulong *)(lVar11 + uVar33);
            do {
              puVar24 = (ulong *)((long)puVar29 + -1);
              puVar20 = (ulong *)((long)puVar20 + -1);
              if (*(char *)puVar24 != *(char *)puVar20) {
                uVar33 = (long)puVar29 - (long)puVar26;
                puVar21 = (ulong *)param_2[3];
                goto joined_r0x002bcd24;
              }
              uVar14 = uVar14 + 1;
              puVar29 = puVar24;
            } while ((puVar26 < puVar24) && (puVar21 < puVar20));
            uVar33 = (long)puVar24 - (long)puVar26;
            puVar21 = (ulong *)param_2[3];
            iVar37 = iVar15 + -3;
            goto joined_r0x002bcc28;
          }
          uVar33 = (long)puVar29 - (long)puVar26;
          puVar21 = (ulong *)param_2[3];
joined_r0x002bcd24:
          iVar37 = iVar15 + -3;
// WM - thanks for reading - discord.gg/sdkhDjTex
          if (puVar18 < puVar29) goto LAB_002bcd28;
LAB_002bcc74:
          uVar12 = *puVar26;
          puVar21[1] = puVar26[1];
          *puVar21 = uVar12;
          if (0x10 < uVar33) {
            lVar11 = param_2[3];
            uVar12 = puVar26[2];
            *(ulong *)(lVar11 + 0x18) = puVar26[3];
            *(ulong *)(lVar11 + 0x10) = uVar12;
            if (0x10 < uVar33 - 0x10) {
              puVar21 = (ulong *)(lVar11 + 0x20);
              puVar26 = puVar26 + 6;
              do {
                uVar12 = puVar26[-2];
                puVar21[1] = puVar26[-1];
                *puVar21 = uVar12;
                uVar12 = *puVar26;
                puVar21[3] = puVar26[1];
                puVar21[2] = uVar12;
                puVar21 = puVar21 + 4;
                puVar26 = puVar26 + 4;
              } while (puVar21 < (ulong *)(lVar11 + uVar33));
              goto LAB_002bce5c;
            }
          }
/*  proprietary - see LICENSE - do not sell  */
          param_2[3] = param_2[3] + uVar33;
          piVar22 = (int *)param_2[1];
          *(short *)(piVar22 + 1) = (short)uVar33;
          *piVar22 = iVar15;
joined_r0x002bccbc:
          uVar33 = uVar14 - 3;
          if (uVar33 < 0x10000) goto LAB_002bce88;
LAB_002bccc0:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar22 - *param_2) >> 3);
          *(short *)((long)piVar22 + 6) = (short)uVar33;
          piVar22 = piVar22 + 2;
          param_2[1] = (long)piVar22;
          iVar13 = *(int *)(param_1 + 300);
        }
        else {
LAB_002bcc30:
          uVar14 = uVar12;
          uVar39 = uVar33;
          puVar29 = puVar20;
          if (3 < uVar39) goto LAB_002bcb80;
LAB_002bcc44:
          iVar15 = (int)uVar39;
          uVar33 = (long)puVar29 - (long)puVar26;
          puVar21 = (ulong *)param_2[3];
          iVar37 = iVar38;
          iVar38 = iVar13;
joined_r0x002bcc28:
          if (puVar29 <= puVar18) goto LAB_002bcc74;
LAB_002bcd28:
          puVar20 = puVar21;
          if (puVar26 <= puVar18) {
            puVar20 = (ulong *)((long)puVar21 + ((long)puVar18 - (long)puVar26));
            uVar12 = *puVar26;
            puVar24 = puVar21 + 2;
            puVar21[1] = puVar26[1];
            *puVar21 = uVar12;
/* no support for modified copies */
            if (0x10 < (ulong)((long)puVar18 - (long)puVar26)) {
              do {
                uVar12 = puVar26[2];
                puVar24[1] = puVar26[3];
                *puVar24 = uVar12;
                uVar12 = puVar26[4];
                puVar24[3] = puVar26[5];
                puVar24[2] = uVar12;
                puVar24 = puVar24 + 4;
                puVar26 = puVar26 + 4;
              } while (puVar24 < puVar20);
            }
            puVar26 = puVar18;
          }
          if (puVar26 < puVar29) {
            uVar12 = (long)puVar29 - (long)puVar26;
            if ((7 < uVar12) && (0x3f < (ulong)((long)puVar20 - (long)puVar26))) {
              if (uVar12 < 0x40) {
                uVar28 = 0;
              }
              else {
                uVar28 = uVar12 & 0xffffffffffffffc0;
                puVar21 = puVar20 + 4;
                puVar24 = puVar26 + 4;
                uVar39 = uVar28;
                do {
                  uVar41 = puVar24[-4];
/*  watermarked copy - do not remove  */
                  uVar43 = puVar24[-1];
                  uVar42 = puVar24[-2];
                  uVar45 = puVar24[1];
                  uVar44 = *puVar24;
                  uVar47 = puVar24[3];
                  uVar46 = puVar24[2];
                  puVar21[-3] = puVar24[-3];
                  puVar21[-4] = uVar41;
                  puVar21[-1] = uVar43;
                  puVar21[-2] = uVar42;
                  puVar21[1] = uVar45;
                  *puVar21 = uVar44;
                  puVar21[3] = uVar47;
                  puVar21[2] = uVar46;
                  uVar39 = uVar39 - 0x40;
                  puVar21 = puVar21 + 8;
                  puVar24 = puVar24 + 8;
                } while (uVar39 != 0);
                if (uVar12 == uVar28) goto LAB_002bce5c;
                if ((uVar12 & 0x38) == 0) {
                  puVar20 = (ulong *)((long)puVar20 + uVar28);
                  puVar26 = (ulong *)((long)puVar26 + uVar28);
                  goto LAB_002bce4c;
                }
              }
              uVar39 = uVar12 & 0xfffffffffffffff8;
              lVar11 = uVar28 - uVar39;
              puVar23 = (undefined8 *)((long)puVar20 + uVar28);
              puVar34 = (undefined8 *)((long)puVar26 + uVar28);
              do {
                *puVar23 = *puVar34;
                lVar11 = lVar11 + 8;
                puVar23 = puVar23 + 1;
                puVar34 = puVar34 + 1;
              } while (lVar11 != 0);
              puVar20 = (ulong *)((long)puVar20 + uVar39);
/* no support for modified copies - github.com/pengussy */
              puVar26 = (ulong *)((long)puVar26 + uVar39);
              if (uVar12 == uVar39) goto LAB_002bce5c;
            }
LAB_002bce4c:
            do {
              puVar21 = (ulong *)((long)puVar26 + 1);
              *(char *)puVar20 = (char)*puVar26;
              puVar20 = (ulong *)((long)puVar20 + 1);
              puVar26 = puVar21;
            } while (puVar21 != puVar29);
          }
LAB_002bce5c:
          param_2[3] = param_2[3] + uVar33;
          piVar22 = (int *)param_2[1];
          if (0xffff < uVar33) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar22 - *param_2) >> 3);
            *(short *)(piVar22 + 1) = (short)uVar33;
            *piVar22 = iVar15;
            goto joined_r0x002bccbc;
          }
          *(short *)(piVar22 + 1) = (short)uVar33;
          *piVar22 = iVar15;
          uVar33 = uVar14 - 3;
/* chat: discord.gg/sdkhDjTex */
          if (0xffff < uVar33) goto LAB_002bccc0;
LAB_002bce88:
          *(short *)((long)piVar22 + 6) = (short)uVar33;
          piVar22 = piVar22 + 2;
          param_2[1] = (long)piVar22;
          iVar13 = *(int *)(param_1 + 300);
        }
        if (iVar13 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        puVar26 = (ulong *)((long)puVar29 + uVar14);
        if (puVar40 < puVar26) {
          puVar21 = puVar26;
          iVar13 = iVar38;
          iVar38 = iVar37;
        }
        else {
          iVar15 = iVar38;
          do {
            iVar38 = iVar15;
            iVar15 = iVar37;
            uVar1 = ((int)puVar26 - iVar35) - iVar38;
            lVar11 = uVar9 - uVar3;
            if (uVar10 <= uVar1) {
              lVar11 = lVar36;
            }
/* wm:if you paid for this, you were scammed */
            if ((0xfffffffc < uVar1 - uVar10) ||
               (piVar7 = (int *)(lVar11 + (ulong)uVar1), *piVar7 != (int)*puVar26)) {
              puVar21 = puVar26;
              iVar13 = iVar38;
              iVar38 = iVar15;
              break;
            }
            puVar21 = puVar8;
            if (uVar10 <= uVar1) {
              puVar21 = puVar4;
            }
            puVar20 = (ulong *)((long)puVar26 + 4);
            puVar29 = (ulong *)(piVar7 + 1);
            puVar24 = (ulong *)((long)puVar20 + ((long)puVar21 - (long)puVar29));
            if (puVar4 <= puVar24) {
              puVar24 = puVar4;
            }
            if (puVar20 < (ulong *)((long)puVar24 - 7U)) {
              if (*puVar29 == *puVar20) {
                lVar31 = 0;
                puVar30 = (ulong *)((long)puVar26 + 0xc);
                puVar32 = (ulong *)(lVar11 + (ulong)uVar1 + 0xc);
                do {
                  if ((ulong *)((long)puVar24 - 7U) <= puVar30) goto LAB_002bcf84;
                  uVar33 = *puVar32;
                  uVar14 = *puVar30;
                  lVar31 = lVar31 + 8;
                  puVar30 = puVar30 + 1;
                  puVar32 = puVar32 + 1;
                } while (uVar33 == uVar14);
                uVar14 = uVar14 ^ uVar33;
                uVar33 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar31 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar20 ^ *puVar29;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar29 + uVar33) == puVar21) goto LAB_002bd07c;
joined_r0x002bcfe8:
              if (puVar26 <= puVar18) goto LAB_002bd150;
LAB_002bcfec:
              *(undefined2 *)(piVar22 + 1) = 0;
              *piVar22 = 1;
            }
            else {
              puVar30 = puVar20;
              puVar32 = puVar29;
LAB_002bcf84:
              if (puVar30 < (ulong *)((long)puVar24 - 3U)) {
                if ((int)*puVar32 == (int)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 4);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                }
                if (puVar30 < (ulong *)((long)puVar24 - 1U)) goto LAB_002bd038;
              }
/*  more drops soon - github.com/pengussy  */
              else if (puVar30 < (ulong *)((long)puVar24 - 1U)) {
LAB_002bd038:
                if ((short)*puVar32 == (short)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
              }
              if (puVar30 < puVar24) {
                if ((char)*puVar32 == (char)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 1);
                }
              }
              uVar33 = (long)puVar30 - (long)puVar20;
              if ((ulong *)((long)puVar29 + uVar33) != puVar21) goto joined_r0x002bcfe8;
LAB_002bd07c:
              puVar20 = (ulong *)((long)puVar20 + uVar33);
              if (puVar20 < puVar17) {
                if (*puVar5 == *puVar20) {
                  lVar11 = 0;
                  puVar21 = (ulong *)((long)puVar26 + uVar33 + 0xc);
                  puVar29 = puVar2;
                  do {
                    if (puVar17 <= puVar21) goto LAB_002bd0f0;
                    uVar12 = *puVar29;
                    uVar14 = *puVar21;
                    lVar11 = lVar11 + 8;
                    puVar21 = puVar21 + 1;
                    puVar29 = puVar29 + 1;
                  } while (uVar12 == uVar14);
                  uVar14 = uVar14 ^ uVar12;
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar33 = lVar11 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + uVar33;
                }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                else {
                  uVar14 = *puVar20 ^ *puVar5;
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar33 = ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + uVar33;
                }
                goto joined_r0x002bcfe8;
              }
              puVar21 = puVar20;
              puVar29 = puVar5;
LAB_002bd0f0:
              if (puVar21 < (ulong *)((long)puVar4 - 3U)) {
                if ((int)*puVar29 == (int)*puVar21) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar29 = (ulong *)((long)puVar29 + 4);
                }
              }
              if (puVar21 < (ulong *)((long)puVar4 - 1U)) {
                if ((short)*puVar29 == (short)*puVar21) {
                  puVar21 = (ulong *)((long)puVar21 + 2);
                  puVar29 = (ulong *)((long)puVar29 + 2);
                }
              }
              if (puVar21 < puVar4) {
                if ((char)*puVar29 == (char)*puVar21) {
                  puVar21 = (ulong *)((long)puVar21 + 1);
                }
/* if you paid for this, you were scammed */
              }
              uVar33 = (long)puVar21 + (uVar33 - (long)puVar20);
              if (puVar18 < puVar26) goto LAB_002bcfec;
LAB_002bd150:
              puVar21 = (ulong *)param_2[3];
              uVar14 = *puVar26;
              puVar21[1] = puVar26[1];
              *puVar21 = uVar14;
              piVar22 = (int *)param_2[1];
              *(undefined2 *)(piVar22 + 1) = 0;
              *piVar22 = 1;
            }
            if (0xffff < uVar33 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar22 - *param_2) >> 3);
            }
            *(short *)((long)piVar22 + 6) = (short)(uVar33 + 1);
            piVar22 = piVar22 + 2;
            puVar26 = (ulong *)((long)puVar26 + uVar33 + 4);
            param_2[1] = (long)piVar22;
/*  thanks for reading - discord.gg/sdkhDjTex  */
            puVar21 = puVar26;
            iVar37 = iVar38;
            iVar13 = iVar15;
          } while (puVar26 <= puVar40);
        }
      }
      else {
        if (uVar19 != 5) {
          uVar12 = func_0x002d6a88();
          uVar14 = uVar12;
          if (uVar12 <= uVar33) {
            uVar14 = uVar33;
          }
          goto joined_r0x002bc760;
        }
        uVar12 = func_0x002d6f30();
        uVar14 = uVar12;
        if (uVar12 <= uVar33) {
          uVar14 = uVar33;
        }
        if (3 < uVar14) goto LAB_002bc780;
LAB_002bc664:
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar21 - (long)puVar26));
        puVar21 = (ulong *)((long)puVar21 + ((ulong)((long)puVar21 - (long)puVar26) >> 8) + 1);
      }
    } while (puVar21 < puVar40);
  }
  *param_3 = iVar38;
  param_3[1] = iVar13;
  return (long)puVar4 - (long)puVar26;
}

