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
 *  file-id: 0x2ca448:5a8e30d47c
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002ca448(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  ulong *puVar24;
  uint uVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  uint uVar33;
  int iVar34;
  int iVar35;
  ulong *puVar36;
  ulong uVar37;
  int iVar38;
  ulong *puVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong auStack_70 [2];
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar36 = puVar1 + -1;
  lVar8 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar5;
  uVar7 = *(uint *)(param_1 + 0x1c);
  uVar25 = *(uint *)(param_1 + 0x110);
  if (uVar25 < 5) {
    uVar25 = 4;
  }
  if (5 < uVar25) {
    uVar25 = 6;
  }
  uVar33 = *param_3;
  uVar30 = param_3[1];
  *(undefined4 *)(param_1 + 300) = 0;
  puVar2 = (ulong *)(lVar8 + uVar6);
// WM - no support for modified copies
  puVar21 = param_4;
  if (param_4 == puVar2) {
    puVar21 = (ulong *)((long)param_4 + 1);
  }
  if (puVar21 < puVar36) {
    puVar3 = (ulong *)(lVar9 + uVar6);
    uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
    puVar19 = puVar1 + -4;
    iVar38 = (int)lVar8;
    do {
      iVar34 = (int)puVar21;
      iVar35 = (iVar34 - iVar38) + 1;
      iVar12 = iVar35 - uVar10;
      if ((uint)(iVar35 - *(int *)(param_1 + 0x1c)) <= uVar10 || *(int *)(param_1 + 0x28) != 0) {
        iVar12 = *(int *)(param_1 + 0x1c);
      }
      uVar32 = iVar35 - uVar33;
      lVar15 = lVar9;
      if (uVar5 <= uVar32) {
        lVar15 = lVar8;
      }
      if (((uint)(iVar35 - iVar12) < uVar33 || 0xfffffffc < uVar32 - uVar5) ||
         (*(int *)((long)puVar21 + 1) != *(int *)(lVar15 + (ulong)uVar32))) {
        uVar18 = 0;
      }
      else {
        puVar39 = puVar3;
        if (uVar5 <= uVar32) {
          puVar39 = puVar1;
        }
        lVar15 = func_0x002ad924((long)puVar21 + 5,(int *)(lVar15 + (ulong)uVar32) + 1,puVar1,
                                 puVar39,puVar2);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        uVar18 = lVar15 + 4;
      }
      auStack_70[0] = 999999999;
      if (uVar25 == 6) {
        uVar16 = func_0x002d2e74(param_1,puVar21,puVar1,auStack_70);
        uVar17 = uVar16;
        if (uVar16 <= uVar18) {
          uVar17 = uVar18;
        }
joined_r0x002ca650:
        if (3 < uVar17) goto LAB_002ca66c;
LAB_002ca540:
        *(uint *)(param_1 + 300) = (uint)(0x8ff < (ulong)((long)puVar21 - (long)param_4));
        puVar21 = (ulong *)((long)puVar21 + ((ulong)((long)puVar21 - (long)param_4) >> 8) + 1);
      }
      else {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        if (uVar25 != 5) {
          uVar16 = func_0x002d27b4();
          uVar17 = uVar16;
          if (uVar16 <= uVar18) {
            uVar17 = uVar18;
          }
          goto joined_r0x002ca650;
        }
        uVar16 = func_0x002d2b14();
        uVar17 = uVar16;
        if (uVar16 <= uVar18) {
          uVar17 = uVar18;
        }
        if (uVar17 < 4) goto LAB_002ca540;
LAB_002ca66c:
        uVar37 = auStack_70[0];
        puVar39 = puVar21;
        if (uVar16 <= uVar18) {
          uVar37 = 1;
/*  do not claim this as your own  */
          puVar39 = (ulong *)((long)puVar21 + 1);
        }
        uVar18 = uVar17;
        if (puVar21 < puVar36) {
          lVar15 = 0;
          iVar35 = (1 - iVar38) + iVar34;
          puVar20 = puVar39;
          do {
            puVar24 = (ulong *)((long)puVar21 + lVar15 + 1);
            uVar18 = uVar17;
            puVar39 = puVar20;
            if (uVar37 != 0) {
              iVar14 = (int)lVar15;
              iVar13 = iVar35 + iVar14;
              iVar12 = ((1 - iVar38) - uVar10) + iVar34 + iVar14;
              if ((uint)(iVar13 - *(int *)(param_1 + 0x1c)) <= uVar10 ||
                  *(int *)(param_1 + 0x28) != 0) {
                iVar12 = *(int *)(param_1 + 0x1c);
              }
              uVar32 = (iVar35 - uVar33) + iVar14;
              lVar31 = lVar9;
              if (uVar5 <= uVar32) {
                lVar31 = lVar8;
              }
              if ((uVar33 <= (uint)(iVar13 - iVar12) &&
                   (((1 - (uVar5 + iVar38)) + iVar34) - uVar33) + iVar14 < 0xfffffffd) &&
                 ((int)*puVar24 == *(int *)(lVar31 + (ulong)uVar32))) {
// proprietary - see LICENSE - do not sell
                puVar20 = puVar3;
                if (uVar5 <= uVar32) {
                  puVar20 = puVar1;
                }
                uVar16 = func_0x002ad924((long)puVar21 + lVar15 + 5,
                                         (int *)(lVar31 + (ulong)uVar32) + 1,puVar1,puVar20,puVar2);
                if ((uVar16 < 0xfffffffffffffffc) &&
                   ((int)LZCOUNT((int)uVar37) + (int)uVar17 * 3 + -0x1e < (int)(uVar16 + 4) * 3)) {
                  uVar37 = 1;
                  uVar18 = uVar16 + 4;
                  puVar39 = puVar24;
                }
              }
            }
            auStack_70[0] = 999999999;
            if (uVar25 == 6) {
              uVar17 = func_0x002d2e74(param_1,puVar24,puVar1,auStack_70);
            }
            else if (uVar25 == 5) {
              uVar17 = func_0x002d2b14();
            }
            else {
              uVar17 = func_0x002d27b4();
            }
            if (uVar17 < 4) goto LAB_002ca844;
            if ((int)LZCOUNT((int)auStack_70[0]) + (int)uVar17 * 4 + -0x1f <=
                (int)LZCOUNT((int)uVar37) + (int)uVar18 * 4 + -0x1b) goto LAB_002ca844;
            lVar15 = lVar15 + 1;
            puVar39 = (ulong *)((long)puVar21 + lVar15);
            uVar37 = auStack_70[0];
            puVar20 = puVar24;
// WM - found on a paste site? it was re-uploaded illegally
          } while (puVar39 < puVar36);
          uVar18 = uVar17;
        }
LAB_002ca844:
        iVar35 = (int)uVar37;
        uVar32 = uVar33;
        if (3 < uVar37) {
          uVar17 = (long)puVar39 + (3 - (uVar37 + lVar8));
          puVar21 = (ulong *)(lVar9 + (ulong)uVar7);
          lVar15 = lVar9;
          if (uVar5 <= (uint)uVar17) {
            puVar21 = puVar2;
            lVar15 = lVar8;
          }
          if (param_4 < puVar39) {
            uVar17 = uVar17 & 0xffffffff;
            if (puVar21 < (ulong *)(lVar15 + uVar17)) {
              puVar20 = (ulong *)(lVar15 + uVar17);
              while( true ) {
                puVar24 = (ulong *)((long)puVar39 + -1);
// found on a paste site? it was re-uploaded illegally
                puVar20 = (ulong *)((long)puVar20 + -1);
                if (*(char *)puVar24 != *(char *)puVar20) break;
                uVar18 = uVar18 + 1;
                puVar39 = puVar24;
                if ((puVar24 <= param_4) || (puVar20 <= puVar21)) break;
              }
            }
          }
          uVar32 = iVar35 - 3;
          uVar30 = uVar33;
        }
        uVar17 = (long)puVar39 - (long)param_4;
        puVar21 = (ulong *)param_2[3];
        uVar11 = (undefined2)uVar17;
        if (puVar19 < puVar39) {
          puVar20 = puVar21;
          if (param_4 <= puVar19) {
            puVar20 = (ulong *)((long)puVar21 + ((long)puVar19 - (long)param_4));
            uVar16 = *param_4;
            puVar24 = puVar21 + 2;
            puVar21[1] = param_4[1];
            *puVar21 = uVar16;
            if (0x10 < (ulong)((long)puVar19 - (long)param_4)) {
              do {
                uVar16 = param_4[2];
                puVar24[1] = param_4[3];
                *puVar24 = uVar16;
                uVar16 = param_4[4];
                puVar24[3] = param_4[5];
                puVar24[2] = uVar16;
                puVar24 = puVar24 + 4;
                param_4 = param_4 + 4;
              } while (puVar24 < puVar20);
            }
            param_4 = puVar19;
          }
          if (param_4 < puVar39) {
/* wm:found on a paste site? it was re-uploaded illegally */
            uVar16 = (long)puVar39 - (long)param_4;
            if ((7 < uVar16) && (0x3f < (ulong)((long)puVar20 - (long)param_4))) {
              if (uVar16 < 0x40) {
                uVar26 = 0;
              }
              else {
                uVar26 = uVar16 & 0xffffffffffffffc0;
                puVar21 = puVar20 + 4;
                puVar24 = param_4 + 4;
                uVar37 = uVar26;
                do {
                  uVar40 = puVar24[-4];
                  uVar42 = puVar24[-1];
                  uVar41 = puVar24[-2];
                  uVar44 = puVar24[1];
                  uVar43 = *puVar24;
                  uVar46 = puVar24[3];
                  uVar45 = puVar24[2];
                  puVar21[-3] = puVar24[-3];
                  puVar21[-4] = uVar40;
                  puVar21[-1] = uVar42;
                  puVar21[-2] = uVar41;
                  puVar21[1] = uVar44;
                  *puVar21 = uVar43;
                  puVar21[3] = uVar46;
                  puVar21[2] = uVar45;
                  uVar37 = uVar37 - 0x40;
/* watermarked copy - do not remove */
                  puVar21 = puVar21 + 8;
                  puVar24 = puVar24 + 8;
                } while (uVar37 != 0);
                if (uVar16 == uVar26) goto LAB_002caaac;
                if ((uVar16 & 0x38) == 0) {
                  puVar20 = (ulong *)((long)puVar20 + uVar26);
                  param_4 = (ulong *)((long)param_4 + uVar26);
                  goto LAB_002caa9c;
                }
              }
              uVar37 = uVar16 & 0xfffffffffffffff8;
              lVar15 = uVar26 - uVar37;
              puVar22 = (undefined8 *)((long)puVar20 + uVar26);
              puVar29 = (undefined8 *)((long)param_4 + uVar26);
              do {
                *puVar22 = *puVar29;
                lVar15 = lVar15 + 8;
                puVar22 = puVar22 + 1;
                puVar29 = puVar29 + 1;
              } while (lVar15 != 0);
              puVar20 = (ulong *)((long)puVar20 + uVar37);
              param_4 = (ulong *)((long)param_4 + uVar37);
              if (uVar16 == uVar37) goto LAB_002caaac;
            }
LAB_002caa9c:
            do {
              puVar21 = (ulong *)((long)param_4 + 1);
              *(char *)puVar20 = (char)*param_4;
              puVar20 = (ulong *)((long)puVar20 + 1);
              param_4 = puVar21;
            } while (puVar21 != puVar39);
          }
LAB_002caaac:
          param_2[3] = param_2[3] + uVar17;
          piVar23 = (int *)param_2[1];
          if (0xffff < uVar17) {
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar23 - *param_2) >> 3);
            *(undefined2 *)(piVar23 + 1) = uVar11;
            *piVar23 = iVar35;
            goto joined_r0x002ca9bc;
          }
          *(undefined2 *)(piVar23 + 1) = uVar11;
          *piVar23 = iVar35;
          if (uVar18 - 3 < 0x10000) goto LAB_002caad8;
LAB_002ca9c0:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar23 - *param_2) >> 3);
          *(short *)((long)piVar23 + 6) = (short)uVar18 + -3;
          piVar23 = piVar23 + 2;
          param_2[1] = (long)piVar23;
          iVar35 = *(int *)(param_1 + 300);
        }
        else {
          uVar16 = *param_4;
          puVar21[1] = param_4[1];
          *puVar21 = uVar16;
          if (0x10 < uVar17) {
            lVar15 = param_2[3];
            uVar16 = param_4[2];
            *(ulong *)(lVar15 + 0x18) = param_4[3];
            *(ulong *)(lVar15 + 0x10) = uVar16;
            if (0x10 < uVar17 - 0x10) {
              puVar21 = (ulong *)(lVar15 + 0x20);
              puVar20 = param_4 + 6;
              do {
                uVar16 = puVar20[-2];
                puVar21[1] = puVar20[-1];
                *puVar21 = uVar16;
                uVar16 = *puVar20;
/* stripping the watermark breaks the license - github.com/pengussy */
                puVar21[3] = puVar20[1];
                puVar21[2] = uVar16;
                puVar21 = puVar21 + 4;
                puVar20 = puVar20 + 4;
              } while (puVar21 < (ulong *)(lVar15 + uVar17));
              goto LAB_002caaac;
            }
          }
          param_2[3] = param_2[3] + uVar17;
          piVar23 = (int *)param_2[1];
          *(undefined2 *)(piVar23 + 1) = uVar11;
          *piVar23 = iVar35;
joined_r0x002ca9bc:
          if (0xffff < uVar18 - 3) goto LAB_002ca9c0;
LAB_002caad8:
          *(short *)((long)piVar23 + 6) = (short)uVar18 + -3;
          piVar23 = piVar23 + 2;
          param_2[1] = (long)piVar23;
          iVar35 = *(int *)(param_1 + 300);
        }
        if (iVar35 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar39 + uVar18);
        if (puVar36 < param_4) {
          puVar21 = param_4;
          uVar33 = uVar32;
        }
        else {
          do {
/*  origin: github.com/pengussy  */
            uVar33 = uVar30;
            iVar12 = (int)param_4 - iVar38;
            iVar35 = iVar12 - uVar10;
            if ((uint)(iVar12 - *(int *)(param_1 + 0x1c)) <= uVar10 || *(int *)(param_1 + 0x28) != 0
               ) {
              iVar35 = *(int *)(param_1 + 0x1c);
            }
            uVar30 = iVar12 - uVar33;
            lVar15 = lVar9;
            if (uVar5 <= uVar30) {
              lVar15 = lVar8;
            }
            if (((uint)(iVar12 - iVar35) < uVar33 || 0xfffffffc < uVar30 - uVar5) ||
               (piVar4 = (int *)(lVar15 + (ulong)uVar30), (int)*param_4 != *piVar4)) {
              puVar21 = param_4;
              uVar30 = uVar33;
              uVar33 = uVar32;
              break;
            }
            puVar21 = puVar3;
            if (uVar5 <= uVar30) {
              puVar21 = puVar1;
            }
            puVar39 = (ulong *)((long)param_4 + 4);
            puVar20 = (ulong *)(piVar4 + 1);
            puVar24 = (ulong *)((long)puVar39 + ((long)puVar21 - (long)puVar20));
            if (puVar1 <= puVar24) {
              puVar24 = puVar1;
            }
            if (puVar39 < (ulong *)((long)puVar24 - 7U)) {
              if (*puVar20 == *puVar39) {
                lVar31 = 0;
                puVar27 = (ulong *)((long)param_4 + 0xc);
                puVar28 = (ulong *)(lVar15 + (ulong)uVar30 + 0xc);
                do {
// reversing this took months of machine time
                  if ((ulong *)((long)puVar24 - 7U) <= puVar27) goto LAB_002cac14;
                  uVar18 = *puVar28;
                  uVar17 = *puVar27;
                  lVar31 = lVar31 + 8;
                  puVar27 = puVar27 + 1;
                  puVar28 = puVar28 + 1;
                } while (uVar18 == uVar17);
                uVar17 = uVar17 ^ uVar18;
                uVar18 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = lVar31 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
              }
              else {
                uVar18 = *puVar39 ^ *puVar20;
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar20 + uVar18) == puVar21) goto LAB_002cad0c;
joined_r0x002cac78:
              if (puVar19 < param_4) goto LAB_002cac7c;
LAB_002cade0:
              puVar21 = (ulong *)param_2[3];
              uVar17 = *param_4;
              puVar21[1] = param_4[1];
              *puVar21 = uVar17;
              piVar23 = (int *)param_2[1];
              *(undefined2 *)(piVar23 + 1) = 0;
              *piVar23 = 1;
            }
            else {
              puVar27 = puVar39;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              puVar28 = puVar20;
LAB_002cac14:
              if (puVar27 < (ulong *)((long)puVar24 - 3U)) {
                if ((int)*puVar28 == (int)*puVar27) {
                  puVar27 = (ulong *)((long)puVar27 + 4);
                  puVar28 = (ulong *)((long)puVar28 + 4);
                }
                if (puVar27 < (ulong *)((long)puVar24 - 1U)) goto LAB_002cacc8;
              }
              else if (puVar27 < (ulong *)((long)puVar24 - 1U)) {
LAB_002cacc8:
                if ((short)*puVar28 == (short)*puVar27) {
                  puVar27 = (ulong *)((long)puVar27 + 2);
                  puVar28 = (ulong *)((long)puVar28 + 2);
                }
              }
              if (puVar27 < puVar24) {
                if ((char)*puVar28 == (char)*puVar27) {
                  puVar27 = (ulong *)((long)puVar27 + 1);
                }
              }
              uVar18 = (long)puVar27 - (long)puVar39;
              if ((ulong *)((long)puVar20 + uVar18) != puVar21) goto joined_r0x002cac78;
/*  unlicensed copy if this notice is missing  */
LAB_002cad0c:
              puVar39 = (ulong *)((long)puVar39 + uVar18);
              if (puVar39 < (ulong *)((long)puVar1 - 7U)) {
                if (*puVar2 == *puVar39) {
                  lVar15 = 0;
                  puVar21 = (ulong *)((long)param_4 + uVar18 + 0xc);
                  puVar20 = (ulong *)(uVar6 + lVar8);
                  do {
                    puVar20 = puVar20 + 1;
                    if ((ulong *)((long)puVar1 - 7U) <= puVar21) goto LAB_002cad80;
                    uVar17 = *puVar21;
                    lVar15 = lVar15 + 8;
                    puVar21 = puVar21 + 1;
                  } while (*puVar20 == uVar17);
                  uVar17 = uVar17 ^ *puVar20;
                  uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = lVar15 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) + uVar18;
                }
/* wm:more drops soon - github.com/pengussy */
                else {
                  uVar17 = *puVar39 ^ *puVar2;
                  uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) + uVar18;
                }
                goto joined_r0x002cac78;
              }
              puVar21 = puVar39;
              puVar20 = puVar2;
LAB_002cad80:
              if (puVar21 < (ulong *)((long)puVar1 - 3U)) {
                if ((int)*puVar20 == (int)*puVar21) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar20 = (ulong *)((long)puVar20 + 4);
                }
              }
              if (puVar21 < (ulong *)((long)puVar1 - 1U)) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                if ((short)*puVar20 == (short)*puVar21) {
                  puVar21 = (ulong *)((long)puVar21 + 2);
                  puVar20 = (ulong *)((long)puVar20 + 2);
                }
              }
              if (puVar21 < puVar1) {
                if ((char)*puVar20 == (char)*puVar21) {
                  puVar21 = (ulong *)((long)puVar21 + 1);
                }
              }
              uVar18 = (long)puVar21 + (uVar18 - (long)puVar39);
              if (param_4 <= puVar19) goto LAB_002cade0;
LAB_002cac7c:
              *(undefined2 *)(piVar23 + 1) = 0;
              *piVar23 = 1;
            }
            if (0xffff < uVar18 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar23 - *param_2) >> 3);
            }
            *(short *)((long)piVar23 + 6) = (short)(uVar18 + 1);
            piVar23 = piVar23 + 2;
            param_4 = (ulong *)((long)param_4 + uVar18 + 4);
            param_2[1] = (long)piVar23;
            puVar21 = param_4;
            uVar30 = uVar32;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
            uVar32 = uVar33;
          } while (param_4 <= puVar36);
        }
      }
    } while (puVar21 < puVar36);
  }
  *param_3 = uVar33;
  param_3[1] = uVar30;
  return (long)puVar1 - (long)param_4;
}

