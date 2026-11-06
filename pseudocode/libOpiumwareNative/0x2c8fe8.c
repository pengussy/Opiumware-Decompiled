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
 *  file-id: 0x2c8fe8:4d6b3ea9bc
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002c8fe8(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  uint uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong *puVar29;
  undefined8 *puVar30;
  long lVar31;
  ulong *puVar32;
/* donate: donate/README.md - github.com/pengussy */
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uStack_68;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar25 = puVar1 + -1;
  lVar7 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar5 = (ulong)uVar4;
  uVar6 = *(uint *)(param_1 + 0x1c);
  uVar22 = *(uint *)(param_1 + 0x110);
  if (uVar22 < 5) {
    uVar22 = 4;
  }
  if (5 < uVar22) {
    uVar22 = 6;
  }
  uVar34 = *param_3;
  uVar35 = param_3[1];
  *(undefined4 *)(param_1 + 300) = 0;
  puVar2 = (ulong *)(lVar7 + uVar5);
  puVar18 = param_4;
  if (param_4 == puVar2) {
    puVar18 = (ulong *)((long)param_4 + 1);
  }
/* wm:stripping the watermark breaks the license */
  if (puVar18 < puVar25) {
    uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
    puVar17 = puVar1 + -4;
    do {
      puVar32 = (ulong *)((long)puVar18 + 1);
      iVar15 = ((int)puVar18 - (int)lVar7) + 1;
      iVar12 = iVar15 - uVar9;
      if ((uint)(iVar15 - *(int *)(param_1 + 0x1c)) <= uVar9 || *(int *)(param_1 + 0x28) != 0) {
        iVar12 = *(int *)(param_1 + 0x1c);
      }
      uVar11 = iVar15 - uVar34;
      lVar13 = lVar8;
      if (uVar4 <= uVar11) {
        lVar13 = lVar7;
      }
      uVar33 = uVar34;
      if (((uint)(iVar15 - iVar12) < uVar34 || 0xfffffffc < uVar11 - uVar4) ||
         (*(int *)puVar32 != *(int *)(lVar13 + (ulong)uVar11))) {
        uStack_68 = 999999999;
        if (uVar22 == 6) {
          uVar14 = func_0x002d2e74(param_1,puVar18,puVar1,&uStack_68);
        }
        else if (uVar22 == 5) {
          uVar14 = func_0x002d2b14();
        }
        else {
          uVar14 = func_0x002d27b4();
        }
        if (uVar14 == 0) {
          uVar16 = 1;
        }
        else {
          uVar16 = uStack_68;
          puVar32 = puVar18;
        }
        iVar15 = (int)uVar16;
        if (3 < uVar14) {
/* wm:origin: github.com/pengussy */
          if (3 < uStack_68) {
            uVar16 = (long)puVar18 + (-uStack_68 - lVar7) + 3;
            puVar19 = (ulong *)(lVar8 + (ulong)uVar6);
            lVar13 = lVar8;
            if (uVar4 <= (uint)uVar16) {
              puVar19 = puVar2;
              lVar13 = lVar7;
            }
            if (param_4 < puVar18) {
              uVar16 = uVar16 & 0xffffffff;
              if (puVar19 < (ulong *)(lVar13 + uVar16)) {
                puVar18 = (ulong *)(lVar13 + uVar16);
                while( true ) {
                  puVar23 = (ulong *)((long)puVar32 + -1);
                  puVar18 = (ulong *)((long)puVar18 + -1);
                  if (*(char *)puVar23 != *(char *)puVar18) break;
                  uVar14 = uVar14 + 1;
// keep the notice, keep the source honest
                  puVar32 = puVar23;
                  if ((puVar23 <= param_4) || (puVar18 <= puVar19)) break;
                }
              }
            }
            uVar33 = iVar15 - 3;
            uVar35 = uVar34;
          }
          goto LAB_002c9260;
        }
        *(uint *)(param_1 + 300) = (uint)(0x8ff < (ulong)((long)puVar18 - (long)param_4));
        puVar18 = (ulong *)((long)puVar18 + ((ulong)((long)puVar18 - (long)param_4) >> 8) + 1);
      }
      else {
        puVar19 = (ulong *)(lVar8 + uVar5);
        if (uVar4 <= uVar11) {
          puVar19 = puVar1;
        }
        lVar13 = func_0x002ad924((long)puVar18 + 5,(int *)(lVar13 + (ulong)uVar11) + 1,puVar1,
                                 puVar19,puVar2);
        uVar14 = lVar13 + 4;
        iVar15 = 1;
LAB_002c9260:
        uVar16 = (long)puVar32 - (long)param_4;
        puVar18 = (ulong *)param_2[3];
        uVar10 = (undefined2)uVar16;
        if (puVar17 < puVar32) {
          puVar19 = puVar18;
          if (param_4 <= puVar17) {
// WM - if you paid for this, you were scammed
            puVar19 = (ulong *)((long)puVar18 + ((long)puVar17 - (long)param_4));
            uVar24 = *param_4;
            puVar23 = puVar18 + 2;
            puVar18[1] = param_4[1];
            *puVar18 = uVar24;
            if (0x10 < (ulong)((long)puVar17 - (long)param_4)) {
              do {
                uVar24 = param_4[2];
                puVar23[1] = param_4[3];
                *puVar23 = uVar24;
                uVar24 = param_4[4];
                puVar23[3] = param_4[5];
                puVar23[2] = uVar24;
                puVar23 = puVar23 + 4;
                param_4 = param_4 + 4;
              } while (puVar23 < puVar19);
            }
            param_4 = puVar17;
          }
          if (param_4 < puVar32) {
            uVar24 = (long)puVar32 - (long)param_4;
            if ((7 < uVar24) && (0x3f < (ulong)((long)puVar19 - (long)param_4))) {
              if (uVar24 < 0x40) {
                uVar26 = 0;
              }
              else {
                uVar26 = uVar24 & 0xffffffffffffffc0;
                puVar18 = puVar19 + 4;
                puVar23 = param_4 + 4;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                uVar28 = uVar26;
                do {
                  uVar36 = puVar23[-4];
                  uVar38 = puVar23[-1];
                  uVar37 = puVar23[-2];
                  uVar40 = puVar23[1];
                  uVar39 = *puVar23;
                  uVar42 = puVar23[3];
                  uVar41 = puVar23[2];
                  puVar18[-3] = puVar23[-3];
                  puVar18[-4] = uVar36;
                  puVar18[-1] = uVar38;
                  puVar18[-2] = uVar37;
                  puVar18[1] = uVar40;
                  *puVar18 = uVar39;
                  puVar18[3] = uVar42;
                  puVar18[2] = uVar41;
                  uVar28 = uVar28 - 0x40;
                  puVar18 = puVar18 + 8;
                  puVar23 = puVar23 + 8;
                } while (uVar28 != 0);
                if (uVar24 == uVar26) goto LAB_002c93fc;
                if ((uVar24 & 0x38) == 0) {
                  puVar19 = (ulong *)((long)puVar19 + uVar26);
/* reversing this took months of machine time */
                  param_4 = (ulong *)((long)param_4 + uVar26);
                  goto LAB_002c93ec;
                }
              }
              uVar28 = uVar24 & 0xfffffffffffffff8;
              lVar13 = uVar26 - uVar28;
              puVar20 = (undefined8 *)((long)puVar19 + uVar26);
              puVar30 = (undefined8 *)((long)param_4 + uVar26);
              do {
                *puVar20 = *puVar30;
                lVar13 = lVar13 + 8;
                puVar20 = puVar20 + 1;
                puVar30 = puVar30 + 1;
              } while (lVar13 != 0);
              puVar19 = (ulong *)((long)puVar19 + uVar28);
              param_4 = (ulong *)((long)param_4 + uVar28);
              if (uVar24 == uVar28) goto LAB_002c93fc;
            }
LAB_002c93ec:
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            do {
              puVar18 = (ulong *)((long)param_4 + 1);
              *(char *)puVar19 = (char)*param_4;
              puVar19 = (ulong *)((long)puVar19 + 1);
              param_4 = puVar18;
            } while (puVar18 != puVar32);
          }
LAB_002c93fc:
          param_2[3] = param_2[3] + uVar16;
          piVar21 = (int *)param_2[1];
          if (0xffff < uVar16) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
            *(undefined2 *)(piVar21 + 1) = uVar10;
            *piVar21 = iVar15;
            goto joined_r0x002c9338;
          }
          *(undefined2 *)(piVar21 + 1) = uVar10;
          *piVar21 = iVar15;
          if (uVar14 - 3 < 0x10000) goto LAB_002c9428;
LAB_002c97d4:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
          *(short *)((long)piVar21 + 6) = (short)uVar14 + -3;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
          piVar21 = piVar21 + 2;
          param_2[1] = (long)piVar21;
          iVar15 = *(int *)(param_1 + 300);
        }
        else {
          uVar24 = *param_4;
          puVar18[1] = param_4[1];
          *puVar18 = uVar24;
          if (0x10 < uVar16) {
            lVar13 = param_2[3];
            uVar24 = param_4[2];
            *(ulong *)(lVar13 + 0x18) = param_4[3];
            *(ulong *)(lVar13 + 0x10) = uVar24;
            if (0x10 < uVar16 - 0x10) {
              puVar18 = (ulong *)(lVar13 + 0x20);
              puVar19 = param_4 + 6;
              do {
                uVar24 = puVar19[-2];
                puVar18[1] = puVar19[-1];
                *puVar18 = uVar24;
                uVar24 = *puVar19;
                puVar18[3] = puVar19[1];
                puVar18[2] = uVar24;
                puVar18 = puVar18 + 4;
                puVar19 = puVar19 + 4;
              } while (puVar18 < (ulong *)(lVar13 + uVar16));
              goto LAB_002c93fc;
            }
/* WM - stripping the watermark breaks the license */
          }
          param_2[3] = param_2[3] + uVar16;
          piVar21 = (int *)param_2[1];
          *(undefined2 *)(piVar21 + 1) = uVar10;
          *piVar21 = iVar15;
joined_r0x002c9338:
          if (0xffff < uVar14 - 3) goto LAB_002c97d4;
LAB_002c9428:
          *(short *)((long)piVar21 + 6) = (short)uVar14 + -3;
          piVar21 = piVar21 + 2;
          param_2[1] = (long)piVar21;
          iVar15 = *(int *)(param_1 + 300);
        }
        if (iVar15 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar32 + uVar14);
        if (puVar25 < param_4) {
          puVar18 = param_4;
          uVar34 = uVar33;
        }
        else {
          do {
            uVar34 = uVar35;
            iVar12 = (int)param_4 - (int)lVar7;
            iVar15 = iVar12 - uVar9;
            if ((uint)(iVar12 - *(int *)(param_1 + 0x1c)) <= uVar9 || *(int *)(param_1 + 0x28) != 0)
            {
              iVar15 = *(int *)(param_1 + 0x1c);
            }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar35 = iVar12 - uVar34;
            lVar13 = lVar8;
            if (uVar4 <= uVar35) {
              lVar13 = lVar7;
            }
            if (((uint)(iVar12 - iVar15) < uVar34 || 0xfffffffc < uVar35 - uVar4) ||
               (piVar3 = (int *)(lVar13 + (ulong)uVar35), (int)*param_4 != *piVar3)) {
              puVar18 = param_4;
              uVar35 = uVar34;
              uVar34 = uVar33;
              break;
            }
            puVar18 = (ulong *)(lVar8 + uVar5);
            if (uVar4 <= uVar35) {
              puVar18 = puVar1;
            }
            puVar32 = (ulong *)((long)param_4 + 4);
            puVar19 = (ulong *)(piVar3 + 1);
            puVar23 = (ulong *)((long)puVar32 + ((long)puVar18 - (long)puVar19));
            if (puVar1 <= puVar23) {
              puVar23 = puVar1;
            }
            if (puVar32 < (ulong *)((long)puVar23 - 7U)) {
              if (*puVar19 == *puVar32) {
                lVar31 = 0;
                puVar27 = (ulong *)((long)param_4 + 0xc);
                puVar29 = (ulong *)(lVar13 + (ulong)uVar35 + 0xc);
                do {
                  if ((ulong *)((long)puVar23 - 7U) <= puVar27) goto LAB_002c9544;
                  uVar14 = *puVar29;
                  uVar16 = *puVar27;
                  lVar31 = lVar31 + 8;
                  puVar27 = puVar27 + 1;
                  puVar29 = puVar29 + 1;
                } while (uVar14 == uVar16);
                uVar16 = uVar16 ^ uVar14;
                uVar14 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
/* WM - origin: github.com/pengussy */
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = lVar31 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
              }
              else {
                uVar14 = *puVar32 ^ *puVar19;
                uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar19 + uVar14) == puVar18) goto LAB_002c963c;
joined_r0x002c96f0:
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
              if (param_4 <= puVar17) goto LAB_002c9764;
LAB_002c9590:
              *(undefined2 *)(piVar21 + 1) = 0;
              *piVar21 = 1;
            }
            else {
              puVar27 = puVar32;
              puVar29 = puVar19;
LAB_002c9544:
              if (puVar27 < (ulong *)((long)puVar23 - 3U)) {
                if ((int)*puVar29 == (int)*puVar27) {
                  puVar27 = (ulong *)((long)puVar27 + 4);
                  puVar29 = (ulong *)((long)puVar29 + 4);
                }
                if (puVar27 < (ulong *)((long)puVar23 - 1U)) goto LAB_002c95f8;
              }
// origin: github.com/pengussy
              else if (puVar27 < (ulong *)((long)puVar23 - 1U)) {
LAB_002c95f8:
                if ((short)*puVar29 == (short)*puVar27) {
                  puVar27 = (ulong *)((long)puVar27 + 2);
                  puVar29 = (ulong *)((long)puVar29 + 2);
                }
              }
              if (puVar27 < puVar23) {
                if ((char)*puVar29 == (char)*puVar27) {
                  puVar27 = (ulong *)((long)puVar27 + 1);
                }
              }
              uVar14 = (long)puVar27 - (long)puVar32;
              if ((ulong *)((long)puVar19 + uVar14) != puVar18) goto joined_r0x002c96f0;
LAB_002c963c:
              puVar32 = (ulong *)((long)puVar32 + uVar14);
              if ((ulong *)((long)puVar1 - 7U) <= puVar32) {
                puVar18 = puVar32;
                puVar19 = puVar2;
LAB_002c96b0:
                if (puVar18 < (ulong *)((long)puVar1 - 3U)) {
                  if ((int)*puVar19 == (int)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                }
                if (puVar18 < (ulong *)((long)puVar1 - 1U)) {
/* wm:no support for modified copies */
                  if ((short)*puVar19 == (short)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 2);
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                }
                if (puVar18 < puVar1) {
                  if ((char)*puVar19 == (char)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 1);
                  }
                }
                uVar14 = (long)puVar18 + (uVar14 - (long)puVar32);
                goto joined_r0x002c96f0;
              }
              if (*puVar2 != *puVar32) {
                uVar16 = *puVar32 ^ *puVar2;
                uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar14 = ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) + uVar14;
                goto joined_r0x002c96f0;
/* no support for modified copies - github.com/pengussy */
              }
              lVar13 = 0;
              puVar18 = (ulong *)((long)param_4 + uVar14 + 0xc);
              puVar19 = (ulong *)(uVar5 + lVar7);
              do {
                puVar19 = puVar19 + 1;
                if ((ulong *)((long)puVar1 - 7U) <= puVar18) goto LAB_002c96b0;
                uVar16 = *puVar18;
                lVar13 = lVar13 + 8;
                puVar18 = puVar18 + 1;
              } while (*puVar19 == uVar16);
              uVar16 = uVar16 ^ *puVar19;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar14 = lVar13 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) + uVar14;
              if (puVar17 < param_4) goto LAB_002c9590;
LAB_002c9764:
              puVar18 = (ulong *)param_2[3];
              uVar16 = *param_4;
              puVar18[1] = param_4[1];
              *puVar18 = uVar16;
              piVar21 = (int *)param_2[1];
/*  found on a paste site? it was re-uploaded illegally  */
              *(undefined2 *)(piVar21 + 1) = 0;
              *piVar21 = 1;
            }
            if (0xffff < uVar14 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
            }
            *(short *)((long)piVar21 + 6) = (short)(uVar14 + 1);
            piVar21 = piVar21 + 2;
            param_4 = (ulong *)((long)param_4 + uVar14 + 4);
            param_2[1] = (long)piVar21;
            puVar18 = param_4;
            uVar35 = uVar33;
            uVar33 = uVar34;
          } while (param_4 <= puVar25);
        }
      }
    } while (puVar18 < puVar25);
  }
  *param_3 = uVar34;
  param_3[1] = uVar35;
  return (long)puVar1 - (long)param_4;
}

