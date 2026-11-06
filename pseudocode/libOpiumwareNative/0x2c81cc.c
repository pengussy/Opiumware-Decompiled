/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2c81cc:05f955ad1e
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002c81cc(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int *piVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong *puVar16;
  uint uVar17;
  ulong *puVar18;
  ulong *puVar19;
/* wm:proprietary - see LICENSE - do not sell */
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong uVar30;
  ulong *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  ulong uVar45;
  ulong uVar46;
  ulong uStack_68;
  
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar18 = puVar4 + -1;
  lVar39 = *(long *)(param_1 + 8);
  uVar11 = *(uint *)(param_1 + 0x18);
  uVar17 = *(uint *)(param_1 + 0x110);
  if (uVar17 < 5) {
    uVar17 = 4;
  }
  if (5 < uVar17) {
    uVar17 = 6;
  }
  iVar37 = *param_3;
  iVar35 = param_3[1];
  puVar16 = *(ulong **)(param_1 + 0xf8);
  puVar9 = (ulong *)*puVar16;
  uVar10 = puVar16[1];
  puVar5 = (ulong *)(lVar39 + (ulong)uVar11);
  puVar6 = (ulong *)(uVar10 + (uint)puVar16[3]);
  puVar16 = param_4;
  if ((((int)param_4 - (int)puVar5) - (int)puVar6) + (int)puVar9 == 0) {
    puVar16 = (ulong *)((long)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  if (puVar16 < puVar18) {
    uVar3 = uVar11 + ((int)uVar10 - (int)puVar9);
    puVar19 = (ulong *)((long)puVar4 - 7);
    puVar20 = puVar4 + -4;
    puVar2 = (ulong *)((ulong)uVar11 + lVar39 + 8);
    do {
      iVar38 = (int)lVar39;
// keep the notice, keep the source honest
      uVar1 = (((int)puVar16 - iVar38) - iVar37) + 1;
      piVar24 = (int *)(uVar10 + (uVar1 - uVar3));
      if (uVar11 <= uVar1) {
        piVar24 = (int *)(lVar39 + (ulong)uVar1);
      }
      if ((uVar1 - uVar11 < 0xfffffffd) && (*piVar24 == *(int *)((long)puVar16 + 1U))) {
        puVar21 = puVar9;
        if (uVar11 <= uVar1) {
          puVar21 = puVar4;
        }
        lVar12 = func_0x002ad924((long)puVar16 + 5,piVar24 + 1,puVar4,puVar21,puVar5);
        uVar14 = lVar12 + 4;
      }
      else {
        uVar14 = 0;
      }
      uStack_68 = 999999999;
      if (uVar17 == 6) {
        uVar13 = func_0x002d79ac(param_1,puVar16,puVar4,&uStack_68);
        uVar25 = uVar13;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        if (uVar13 <= uVar14) {
          uVar25 = uVar14;
        }
joined_r0x002c83a4:
        if (uVar25 < 4) goto LAB_002c82b0;
LAB_002c83c0:
        uVar32 = uStack_68;
        puVar21 = puVar16;
        if (uVar13 <= uVar14) {
          uVar32 = 1;
          puVar21 = (ulong *)((long)puVar16 + 1U);
        }
joined_r0x002c83e0:
        do {
          puVar22 = puVar16;
          uVar13 = uVar32;
          puVar26 = puVar21;
          uVar14 = uVar25;
          if (puVar18 <= puVar22) break;
          puVar16 = (ulong *)((long)puVar22 + 1);
          uVar1 = ((int)puVar16 - iVar38) - iVar37;
          piVar24 = (int *)(uVar10 + (uVar1 - uVar3));
          if (uVar11 <= uVar1) {
            piVar24 = (int *)(lVar39 + (ulong)uVar1);
          }
          if ((uVar1 - uVar11 < 0xfffffffd) && (*piVar24 == *(int *)puVar16)) {
            puVar26 = puVar9;
            if (uVar11 <= uVar1) {
/*  watermarked copy - do not remove  */
              puVar26 = puVar4;
            }
            puVar31 = (ulong *)((long)puVar22 + 5);
            puVar27 = (ulong *)(piVar24 + 1);
            puVar7 = (ulong *)((long)puVar31 + ((long)puVar26 - (long)puVar27));
            if (puVar4 <= puVar7) {
              puVar7 = puVar4;
            }
            if (puVar31 < (ulong *)((long)puVar7 - 7U)) {
              if (*puVar27 == *puVar31) {
                lVar12 = 0;
                puVar28 = (ulong *)((long)puVar22 + 0xd);
                puVar29 = (ulong *)(piVar24 + 3);
                do {
                  if ((ulong *)((long)puVar7 - 7U) <= puVar28) goto LAB_002c85c8;
                  uVar13 = *puVar29;
                  uVar14 = *puVar28;
                  lVar12 = lVar12 + 8;
                  puVar28 = puVar28 + 1;
                  puVar29 = puVar29 + 1;
                } while (uVar13 == uVar14);
                uVar14 = uVar14 ^ uVar13;
                uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
// origin: github.com/pengussy
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = lVar12 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
              }
              else {
                uVar14 = *puVar31 ^ *puVar27;
                uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
              }
            }
            else {
              puVar28 = puVar31;
              puVar29 = puVar27;
LAB_002c85c8:
              if (puVar28 < (ulong *)((long)puVar7 - 3U)) {
                if ((int)*puVar29 == (int)*puVar28) {
                  puVar28 = (ulong *)((long)puVar28 + 4);
                  puVar29 = (ulong *)((long)puVar29 + 4);
                }
                if (puVar28 < (ulong *)((long)puVar7 - 1U)) goto LAB_002c86c4;
/* watermarked copy - do not remove */
              }
              else if (puVar28 < (ulong *)((long)puVar7 - 1U)) {
LAB_002c86c4:
                if ((short)*puVar29 == (short)*puVar28) {
                  puVar28 = (ulong *)((long)puVar28 + 2);
                  puVar29 = (ulong *)((long)puVar29 + 2);
                }
              }
              if (puVar28 < puVar7) {
                if ((char)*puVar29 == (char)*puVar28) {
                  puVar28 = (ulong *)((long)puVar28 + 1);
                }
              }
              uVar14 = (long)puVar28 - (long)puVar31;
            }
            if ((ulong *)((long)puVar27 + uVar14) == puVar26) {
              puVar31 = (ulong *)((long)puVar31 + uVar14);
              if (puVar31 < puVar19) {
                if (*puVar5 == *puVar31) {
                  lVar12 = 0;
                  puVar26 = (ulong *)((long)puVar22 + uVar14 + 0xd);
/* wm:do not claim this as your own */
                  puVar27 = puVar2;
                  do {
                    if (puVar19 <= puVar26) goto LAB_002c8784;
                    uVar30 = *puVar27;
                    uVar13 = *puVar26;
                    lVar12 = lVar12 + 8;
                    puVar26 = puVar26 + 1;
                    puVar27 = puVar27 + 1;
                  } while (uVar30 == uVar13);
                  uVar13 = uVar13 ^ uVar30;
                  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = lVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) + uVar14;
                }
                else {
                  uVar13 = *puVar31 ^ *puVar5;
                  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) + uVar14;
                }
              }
              else {
                puVar26 = puVar31;
                puVar27 = puVar5;
LAB_002c8784:
                if (puVar26 < (ulong *)((long)puVar4 - 3U)) {
                  if ((int)*puVar27 == (int)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 4);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    puVar27 = (ulong *)((long)puVar27 + 4);
                  }
                }
                if (puVar26 < (ulong *)((long)puVar4 - 1U)) {
                  if (*(short *)puVar27 == *(short *)puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 2);
                    puVar27 = (ulong *)((long)puVar27 + 2);
                  }
                }
                if (puVar26 < puVar4) {
                  if ((char)*puVar27 == (char)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 1);
                  }
                }
                uVar14 = (long)puVar26 + (uVar14 - (long)puVar31);
              }
            }
            if (0xfffffffffffffffb < uVar14) goto LAB_002c87e4;
            if ((int)LZCOUNT((int)uVar32) + (int)uVar25 * 3 + -0x1e < (int)(uVar14 + 4) * 3) {
              uVar32 = 1;
              puVar21 = puVar16;
              uVar25 = uVar14 + 4;
            }
            if (uVar17 != 6) goto LAB_002c8678;
LAB_002c8800:
            uStack_68 = 999999999;
            uVar30 = func_0x002d79ac(param_1,puVar16,puVar4,&uStack_68);
            uVar13 = uVar32;
            puVar26 = puVar21;
            uVar14 = uVar25;
          }
          else {
LAB_002c87e4:
            if (uVar17 == 6) goto LAB_002c8800;
LAB_002c8678:
            uStack_68 = 999999999;
/* stripping the watermark breaks the license */
            uVar13 = uVar32;
            puVar26 = puVar21;
            uVar14 = uVar25;
            if (uVar17 == 5) {
              uVar30 = func_0x002d7908(param_1,puVar16,puVar4);
            }
            else {
              uVar30 = func_0x002d7868(param_1,puVar16,puVar4);
            }
          }
          uVar25 = uVar30;
          if (3 < uVar25) {
            uVar32 = uStack_68;
            puVar21 = puVar16;
            if ((int)LZCOUNT((int)uVar13) + (int)uVar14 * 4 + -0x1b <
                (int)LZCOUNT((int)uStack_68) + (int)uVar25 * 4 + -0x1f) goto joined_r0x002c83e0;
          }
          if (puVar18 <= puVar16) break;
          puVar16 = (ulong *)((long)puVar22 + 2);
          uVar1 = ((int)puVar16 - iVar38) - iVar37;
          piVar24 = (int *)(uVar10 + (uVar1 - uVar3));
          if (uVar11 <= uVar1) {
            piVar24 = (int *)(lVar39 + (ulong)uVar1);
          }
          if (uVar1 - uVar11 < 0xfffffffd) {
            if (*piVar24 == *(int *)puVar16) {
              puVar21 = puVar9;
              if (uVar11 <= uVar1) {
                puVar21 = puVar4;
              }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
              uVar25 = func_0x002ad924((long)puVar22 + 6,piVar24 + 1,puVar4,puVar21,puVar5);
              if (0xfffffffffffffffb < uVar25) goto LAB_002c8878;
              if ((int)LZCOUNT((int)uVar13) + (int)uVar14 * 4 + -0x1e < (int)(uVar25 + 4) * 4) {
                uVar13 = 1;
                puVar26 = puVar16;
                uVar14 = uVar25 + 4;
              }
            }
            if (uVar17 != 6) goto LAB_002c892c;
LAB_002c84a0:
            uStack_68 = 999999999;
            uVar25 = func_0x002d79ac(param_1,puVar16,puVar4);
          }
          else {
LAB_002c8878:
            if (uVar17 == 6) goto LAB_002c84a0;
LAB_002c892c:
            uStack_68 = 999999999;
            if (uVar17 == 5) {
              uVar25 = func_0x002d7908(param_1,puVar16,puVar4);
            }
            else {
              uVar25 = func_0x002d7868(param_1,puVar16,puVar4,&uStack_68);
            }
          }
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          if (uVar25 < 4) break;
          uVar32 = uStack_68;
          puVar21 = puVar16;
        } while ((int)LZCOUNT((int)uVar13) + (int)uVar14 * 4 + -0x18 <
                 (int)LZCOUNT((int)uStack_68) + (int)uVar25 * 4 + -0x1f);
        iVar15 = (int)uVar13;
        if (uVar13 < 4) {
          puVar16 = (ulong *)param_2[3];
          iVar36 = iVar37;
          iVar37 = iVar35;
joined_r0x002c89fc:
          uVar25 = (long)puVar26 - (long)param_4;
          if (puVar26 <= puVar20) goto LAB_002c8a00;
LAB_002c8ac0:
          puVar21 = puVar16;
          if (param_4 <= puVar20) {
            puVar21 = (ulong *)((long)puVar16 + ((long)puVar20 - (long)param_4));
            uVar13 = *param_4;
            puVar22 = puVar16 + 2;
            puVar16[1] = param_4[1];
            *puVar16 = uVar13;
            if (0x10 < (ulong)((long)puVar20 - (long)param_4)) {
              do {
                uVar13 = param_4[2];
                puVar22[1] = param_4[3];
                *puVar22 = uVar13;
                uVar13 = param_4[4];
                puVar22[3] = param_4[5];
                puVar22[2] = uVar13;
                puVar22 = puVar22 + 4;
                param_4 = param_4 + 4;
              } while (puVar22 < puVar21);
            }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
            param_4 = puVar20;
          }
          if (param_4 < puVar26) {
            uVar13 = (long)puVar26 - (long)param_4;
            if ((7 < uVar13) && (0x3f < (ulong)((long)puVar21 - (long)param_4))) {
              if (uVar13 < 0x40) {
                uVar30 = 0;
              }
              else {
                uVar30 = uVar13 & 0xffffffffffffffc0;
                puVar16 = puVar21 + 4;
                puVar22 = param_4 + 4;
                uVar32 = uVar30;
                do {
                  uVar40 = puVar22[-4];
                  uVar42 = puVar22[-1];
                  uVar41 = puVar22[-2];
                  uVar44 = puVar22[1];
                  uVar43 = *puVar22;
                  uVar46 = puVar22[3];
                  uVar45 = puVar22[2];
                  puVar16[-3] = puVar22[-3];
                  puVar16[-4] = uVar40;
                  puVar16[-1] = uVar42;
                  puVar16[-2] = uVar41;
                  puVar16[1] = uVar44;
                  *puVar16 = uVar43;
                  puVar16[3] = uVar46;
                  puVar16[2] = uVar45;
                  uVar32 = uVar32 - 0x40;
/* if you paid for this, you were scammed - github.com/pengussy */
                  puVar16 = puVar16 + 8;
                  puVar22 = puVar22 + 8;
                } while (uVar32 != 0);
                if (uVar13 == uVar30) goto LAB_002c8bf4;
                if ((uVar13 & 0x38) == 0) {
                  puVar21 = (ulong *)((long)puVar21 + uVar30);
                  param_4 = (ulong *)((long)param_4 + uVar30);
                  goto LAB_002c8be4;
                }
              }
              uVar32 = uVar13 & 0xfffffffffffffff8;
              lVar12 = uVar30 - uVar32;
              puVar23 = (undefined8 *)((long)puVar21 + uVar30);
              puVar33 = (undefined8 *)((long)param_4 + uVar30);
              do {
                *puVar23 = *puVar33;
                lVar12 = lVar12 + 8;
                puVar23 = puVar23 + 1;
                puVar33 = puVar33 + 1;
              } while (lVar12 != 0);
              puVar21 = (ulong *)((long)puVar21 + uVar32);
              param_4 = (ulong *)((long)param_4 + uVar32);
              if (uVar13 == uVar32) goto LAB_002c8bf4;
            }
LAB_002c8be4:
            do {
              puVar16 = (ulong *)((long)param_4 + 1);
              *(char *)puVar21 = (char)*param_4;
              puVar21 = (ulong *)((long)puVar21 + 1);
              param_4 = puVar16;
            } while (puVar16 != puVar26);
          }
LAB_002c8bf4:
          param_2[3] = param_2[3] + uVar25;
          piVar24 = (int *)param_2[1];
          if (0xffff < uVar25) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
            *(short *)(piVar24 + 1) = (short)uVar25;
            *piVar24 = iVar15;
            goto joined_r0x002c8a48;
          }
          *(short *)(piVar24 + 1) = (short)uVar25;
          *piVar24 = iVar15;
          uVar25 = uVar14 - 3;
          if (0xffff < uVar25) goto LAB_002c8a4c;
LAB_002c8c20:
          *(short *)((long)piVar24 + 6) = (short)uVar25;
          piVar24 = piVar24 + 2;
          param_2[1] = (long)piVar24;
          iVar35 = *(int *)(param_1 + 300);
        }
        else {
          uVar25 = (long)puVar26 + (-0xfffffffd - (uVar13 + lVar39));
          lVar12 = uVar10 - uVar3;
          puVar16 = puVar6;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
          if (uVar11 <= (uint)uVar25) {
            lVar12 = lVar39;
            puVar16 = puVar5;
          }
          if ((puVar26 <= param_4) ||
             (uVar25 = uVar25 & 0xffffffff, (ulong *)(lVar12 + uVar25) <= puVar16)) {
            iVar36 = iVar15 + -3;
            puVar16 = (ulong *)param_2[3];
            goto joined_r0x002c89fc;
          }
          puVar21 = (ulong *)(lVar12 + uVar25);
          puVar22 = puVar26;
          do {
            puVar26 = (ulong *)((long)puVar22 + -1);
            puVar21 = (ulong *)((long)puVar21 + -1);
            if (*(char *)puVar26 != *(char *)puVar21) {
              uVar25 = (long)puVar22 - (long)param_4;
              puVar16 = (ulong *)param_2[3];
              puVar26 = puVar22;
              goto joined_r0x002c8abc;
            }
            uVar14 = uVar14 + 1;
          } while ((param_4 < puVar26) && (puVar22 = puVar26, puVar16 < puVar21));
          uVar25 = (long)puVar26 - (long)param_4;
          puVar16 = (ulong *)param_2[3];
// watermarked copy - do not remove
joined_r0x002c8abc:
          iVar36 = iVar15 + -3;
          if (puVar20 < puVar26) goto LAB_002c8ac0;
LAB_002c8a00:
          uVar13 = *param_4;
          puVar16[1] = param_4[1];
          *puVar16 = uVar13;
          if (0x10 < uVar25) {
            lVar12 = param_2[3];
            uVar13 = param_4[2];
            *(ulong *)(lVar12 + 0x18) = param_4[3];
            *(ulong *)(lVar12 + 0x10) = uVar13;
            if (0x10 < uVar25 - 0x10) {
              puVar16 = (ulong *)(lVar12 + 0x20);
              puVar21 = param_4 + 6;
              do {
/* origin: github.com/pengussy - github.com/pengussy */
                uVar13 = puVar21[-2];
                puVar16[1] = puVar21[-1];
                *puVar16 = uVar13;
                uVar13 = *puVar21;
                puVar16[3] = puVar21[1];
                puVar16[2] = uVar13;
                puVar16 = puVar16 + 4;
                puVar21 = puVar21 + 4;
              } while (puVar16 < (ulong *)(lVar12 + uVar25));
              goto LAB_002c8bf4;
            }
          }
          param_2[3] = param_2[3] + uVar25;
          piVar24 = (int *)param_2[1];
          *(short *)(piVar24 + 1) = (short)uVar25;
          *piVar24 = iVar15;
joined_r0x002c8a48:
          uVar25 = uVar14 - 3;
          if (uVar25 < 0x10000) goto LAB_002c8c20;
LAB_002c8a4c:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
          *(short *)((long)piVar24 + 6) = (short)uVar25;
          piVar24 = piVar24 + 2;
          param_2[1] = (long)piVar24;
          iVar35 = *(int *)(param_1 + 300);
        }
        if (iVar35 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar26 + uVar14);
        if (puVar18 < param_4) {
          puVar16 = param_4;
          iVar35 = iVar37;
          iVar37 = iVar36;
        }
        else {
/* do not claim this as your own */
          iVar15 = iVar37;
          do {
            iVar37 = iVar15;
            iVar15 = iVar36;
            uVar1 = ((int)param_4 - iVar38) - iVar37;
            lVar12 = uVar10 - uVar3;
            if (uVar11 <= uVar1) {
              lVar12 = lVar39;
            }
            if ((0xfffffffc < uVar1 - uVar11) ||
               (piVar8 = (int *)(lVar12 + (ulong)uVar1), *piVar8 != (int)*param_4)) {
              puVar16 = param_4;
              iVar35 = iVar37;
              iVar37 = iVar15;
              break;
            }
            puVar16 = puVar9;
            if (uVar11 <= uVar1) {
              puVar16 = puVar4;
/* wm:keep the notice, keep the source honest */
            }
            puVar21 = (ulong *)((long)param_4 + 4);
            puVar22 = (ulong *)(piVar8 + 1);
            puVar26 = (ulong *)((long)puVar21 + ((long)puVar16 - (long)puVar22));
            if (puVar4 <= puVar26) {
              puVar26 = puVar4;
            }
            if (puVar21 < (ulong *)((long)puVar26 - 7U)) {
              if (*puVar22 == *puVar21) {
                lVar34 = 0;
                puVar31 = (ulong *)((long)param_4 + 0xc);
                puVar27 = (ulong *)(lVar12 + (ulong)uVar1 + 0xc);
                do {
                  if ((ulong *)((long)puVar26 - 7U) <= puVar31) goto LAB_002c8d24;
                  uVar14 = *puVar27;
                  uVar25 = *puVar31;
                  lVar34 = lVar34 + 8;
                  puVar31 = puVar31 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar14 == uVar25);
                uVar25 = uVar25 ^ uVar14;
                uVar14 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
// proprietary - see LICENSE - do not sell
                uVar14 = lVar34 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
              }
              else {
                uVar14 = *puVar21 ^ *puVar22;
                uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar22 + uVar14) == puVar16) goto LAB_002c8e20;
joined_r0x002c8d88:
              if (param_4 <= puVar20) goto LAB_002c8ef4;
LAB_002c8d8c:
              *(undefined2 *)(piVar24 + 1) = 0;
              *piVar24 = 1;
            }
            else {
              puVar31 = puVar21;
              puVar27 = puVar22;
LAB_002c8d24:
              if (puVar31 < (ulong *)((long)puVar26 - 3U)) {
                if ((int)*puVar27 == (int)*puVar31) {
                  puVar31 = (ulong *)((long)puVar31 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
                if (puVar31 < (ulong *)((long)puVar26 - 1U)) goto LAB_002c8ddc;
              }
              else if (puVar31 < (ulong *)((long)puVar26 - 1U)) {
// donate: donate/README.md
LAB_002c8ddc:
                if ((short)*puVar27 == (short)*puVar31) {
                  puVar31 = (ulong *)((long)puVar31 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if (puVar31 < puVar26) {
                if ((char)*puVar27 == (char)*puVar31) {
                  puVar31 = (ulong *)((long)puVar31 + 1);
                }
              }
              uVar14 = (long)puVar31 - (long)puVar21;
              if ((ulong *)((long)puVar22 + uVar14) != puVar16) goto joined_r0x002c8d88;
LAB_002c8e20:
              puVar21 = (ulong *)((long)puVar21 + uVar14);
              if (puVar21 < puVar19) {
                if (*puVar5 == *puVar21) {
                  lVar12 = 0;
                  puVar16 = (ulong *)((long)param_4 + uVar14 + 0xc);
                  puVar22 = puVar2;
                  do {
                    if (puVar19 <= puVar16) goto LAB_002c8e94;
                    uVar13 = *puVar22;
                    uVar25 = *puVar16;
                    lVar12 = lVar12 + 8;
                    puVar16 = puVar16 + 1;
                    puVar22 = puVar22 + 1;
                  } while (uVar13 == uVar25);
// WM - thanks for reading - discord.gg/sdkhDjTex
                  uVar25 = uVar25 ^ uVar13;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = lVar12 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) + uVar14;
                }
                else {
                  uVar25 = *puVar21 ^ *puVar5;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) + uVar14;
                }
                goto joined_r0x002c8d88;
// WM - if you paid for this, you were scammed
              }
              puVar16 = puVar21;
              puVar22 = puVar5;
LAB_002c8e94:
              if (puVar16 < (ulong *)((long)puVar4 - 3U)) {
                if ((int)*puVar22 == (int)*puVar16) {
                  puVar16 = (ulong *)((long)puVar16 + 4);
                  puVar22 = (ulong *)((long)puVar22 + 4);
                }
              }
              if (puVar16 < (ulong *)((long)puVar4 - 1U)) {
                if (*(short *)puVar22 == *(short *)puVar16) {
                  puVar16 = (ulong *)((long)puVar16 + 2);
                  puVar22 = (ulong *)((long)puVar22 + 2);
                }
              }
              if (puVar16 < puVar4) {
                if ((char)*puVar22 == (char)*puVar16) {
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
              }
              uVar14 = (long)puVar16 + (uVar14 - (long)puVar21);
              if (puVar20 < param_4) goto LAB_002c8d8c;
LAB_002c8ef4:
              puVar16 = (ulong *)param_2[3];
              uVar25 = *param_4;
              puVar16[1] = param_4[1];
// unlicensed copy if this notice is missing
              *puVar16 = uVar25;
              piVar24 = (int *)param_2[1];
              *(undefined2 *)(piVar24 + 1) = 0;
              *piVar24 = 1;
            }
            if (0xffff < uVar14 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
            }
            *(short *)((long)piVar24 + 6) = (short)(uVar14 + 1);
            piVar24 = piVar24 + 2;
            param_4 = (ulong *)((long)param_4 + uVar14 + 4);
            param_2[1] = (long)piVar24;
            puVar16 = param_4;
            iVar35 = iVar15;
            iVar36 = iVar37;
          } while (param_4 <= puVar18);
        }
      }
      else {
/* reversing this took months of machine time */
        if (uVar17 != 5) {
          uVar13 = func_0x002d7868();
          uVar25 = uVar13;
          if (uVar13 <= uVar14) {
            uVar25 = uVar14;
          }
          goto joined_r0x002c83a4;
        }
        uVar13 = func_0x002d7908();
        uVar25 = uVar13;
        if (uVar13 <= uVar14) {
          uVar25 = uVar14;
        }
        if (3 < uVar25) goto LAB_002c83c0;
LAB_002c82b0:
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar16 - (long)param_4));
        puVar16 = (ulong *)((long)puVar16 + ((ulong)((long)puVar16 - (long)param_4) >> 8) + 1);
      }
    } while (puVar16 < puVar18);
  }
  *param_3 = iVar37;
  param_3[1] = iVar35;
  return (long)puVar4 - (long)param_4;
}

