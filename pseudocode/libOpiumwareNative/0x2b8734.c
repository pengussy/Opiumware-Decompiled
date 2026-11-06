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
 *  file-id: 0x2b8734:70d958db9c
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002b8734(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined2 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  long lVar14;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulong *puVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uStack_68;
  
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar17 = puVar3 + -1;
  lVar35 = *(long *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar15 = *(uint *)(param_1 + 0x110);
  if (uVar15 < 5) {
    uVar15 = 4;
  }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (5 < uVar15) {
    uVar15 = 6;
  }
  iVar32 = *param_3;
  iVar33 = param_3[1];
  puVar13 = *(ulong **)(param_1 + 0xf8);
  puVar6 = (ulong *)*puVar13;
  uVar7 = puVar13[1];
  puVar4 = (ulong *)(lVar35 + (ulong)uVar8);
  puVar13 = (ulong *)(uVar7 + (uint)puVar13[3]);
  puVar18 = param_4;
  if ((((int)param_4 - (int)puVar4) - (int)puVar13) + (int)puVar6 == 0) {
    puVar18 = (ulong *)((long)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  if (puVar18 < puVar17) {
    uVar2 = uVar8 + ((int)uVar7 - (int)puVar6);
    puVar22 = puVar3 + -4;
    lVar14 = uVar7 - uVar2;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    do {
      puVar34 = (ulong *)((long)puVar18 + 1);
      uVar1 = (((int)puVar18 - (int)lVar35) - iVar32) + 1;
      piVar21 = (int *)(uVar7 + (uVar1 - uVar2));
      if (uVar8 <= uVar1) {
        piVar21 = (int *)(lVar35 + (ulong)uVar1);
      }
      iVar31 = iVar32;
      if ((uVar1 - uVar8 < 0xfffffffd) && (*piVar21 == *(int *)puVar34)) {
        puVar19 = puVar6;
        if (uVar8 <= uVar1) {
          puVar19 = puVar3;
        }
        lVar10 = func_0x002ad924((long)puVar18 + 5,piVar21 + 1,puVar3,puVar19,puVar4);
        uVar11 = lVar10 + 4;
        iVar12 = 1;
LAB_002b89ac:
        uVar16 = (long)puVar34 - (long)param_4;
        puVar18 = (ulong *)param_2[3];
        uVar9 = (undefined2)uVar16;
        if (puVar22 < puVar34) {
/*  no support for modified copies  */
          puVar19 = puVar18;
          if (param_4 <= puVar22) {
            puVar19 = (ulong *)((long)puVar18 + ((long)puVar22 - (long)param_4));
            uVar24 = *param_4;
            puVar23 = puVar18 + 2;
            puVar18[1] = param_4[1];
            *puVar18 = uVar24;
            if (0x10 < (ulong)((long)puVar22 - (long)param_4)) {
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
            param_4 = puVar22;
          }
          if (param_4 < puVar34) {
            uVar24 = (long)puVar34 - (long)param_4;
            if ((7 < uVar24) && (0x3f < (ulong)((long)puVar19 - (long)param_4))) {
              if (uVar24 < 0x40) {
                uVar25 = 0;
              }
              else {
                uVar25 = uVar24 & 0xffffffffffffffc0;
                puVar18 = puVar19 + 4;
                puVar23 = param_4 + 4;
                uVar27 = uVar25;
                do {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
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
                  uVar27 = uVar27 - 0x40;
                  puVar18 = puVar18 + 8;
                  puVar23 = puVar23 + 8;
                } while (uVar27 != 0);
                if (uVar24 == uVar25) goto LAB_002b8b50;
                if ((uVar24 & 0x38) == 0) {
                  puVar19 = (ulong *)((long)puVar19 + uVar25);
                  param_4 = (ulong *)((long)param_4 + uVar25);
                  goto LAB_002b8b40;
                }
              }
              uVar27 = uVar24 & 0xfffffffffffffff8;
              lVar10 = uVar25 - uVar27;
              puVar20 = (undefined8 *)((long)puVar19 + uVar25);
              puVar29 = (undefined8 *)((long)param_4 + uVar25);
              do {
                *puVar20 = *puVar29;
                lVar10 = lVar10 + 8;
                puVar20 = puVar20 + 1;
                puVar29 = puVar29 + 1;
/* stripping the watermark breaks the license */
              } while (lVar10 != 0);
              puVar19 = (ulong *)((long)puVar19 + uVar27);
              param_4 = (ulong *)((long)param_4 + uVar27);
              if (uVar24 == uVar27) goto LAB_002b8b50;
            }
LAB_002b8b40:
            do {
              puVar18 = (ulong *)((long)param_4 + 1);
              *(char *)puVar19 = (char)*param_4;
              puVar19 = (ulong *)((long)puVar19 + 1);
              param_4 = puVar18;
            } while (puVar18 != puVar34);
          }
LAB_002b8b50:
          param_2[3] = param_2[3] + uVar16;
          piVar21 = (int *)param_2[1];
          if (0xffff < uVar16) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
            *(undefined2 *)(piVar21 + 1) = uVar9;
            *piVar21 = iVar12;
            goto joined_r0x002b8a8c;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          }
          *(undefined2 *)(piVar21 + 1) = uVar9;
          *piVar21 = iVar12;
          if (uVar11 - 3 < 0x10000) goto LAB_002b8b7c;
LAB_002b8f04:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
          *(short *)((long)piVar21 + 6) = (short)uVar11 + -3;
          piVar21 = piVar21 + 2;
          param_2[1] = (long)piVar21;
          iVar32 = *(int *)(param_1 + 300);
        }
        else {
          uVar24 = *param_4;
          puVar18[1] = param_4[1];
          *puVar18 = uVar24;
          if (0x10 < uVar16) {
            lVar10 = param_2[3];
            uVar24 = param_4[2];
/* thanks for reading - discord.gg/sdkhDjTex */
            *(ulong *)(lVar10 + 0x18) = param_4[3];
            *(ulong *)(lVar10 + 0x10) = uVar24;
            if (0x10 < uVar16 - 0x10) {
              puVar18 = (ulong *)(lVar10 + 0x20);
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
              } while (puVar18 < (ulong *)(lVar10 + uVar16));
              goto LAB_002b8b50;
            }
          }
          param_2[3] = param_2[3] + uVar16;
          piVar21 = (int *)param_2[1];
          *(undefined2 *)(piVar21 + 1) = uVar9;
          *piVar21 = iVar12;
joined_r0x002b8a8c:
          if (0xffff < uVar11 - 3) goto LAB_002b8f04;
LAB_002b8b7c:
          *(short *)((long)piVar21 + 6) = (short)uVar11 + -3;
          piVar21 = piVar21 + 2;
          param_2[1] = (long)piVar21;
          iVar32 = *(int *)(param_1 + 300);
/*  chat: discord.gg/sdkhDjTex  */
        }
        if (iVar32 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar34 + uVar11);
        if (puVar17 < param_4) {
          puVar18 = param_4;
          iVar32 = iVar31;
        }
        else {
          do {
            iVar32 = iVar33;
            uVar1 = ((int)param_4 - (int)lVar35) - iVar32;
            lVar10 = lVar14;
            if (uVar8 <= uVar1) {
              lVar10 = lVar35;
            }
            if ((0xfffffffc < uVar1 - uVar8) ||
               (piVar5 = (int *)(lVar10 + (ulong)uVar1), *piVar5 != (int)*param_4)) {
              puVar18 = param_4;
              iVar33 = iVar32;
              iVar32 = iVar31;
              break;
            }
            puVar18 = puVar6;
            if (uVar8 <= uVar1) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
              puVar18 = puVar3;
            }
            puVar34 = (ulong *)((long)param_4 + 4);
            puVar19 = (ulong *)(piVar5 + 1);
            puVar23 = (ulong *)((long)puVar34 + ((long)puVar18 - (long)puVar19));
            if (puVar3 <= puVar23) {
              puVar23 = puVar3;
            }
            if (puVar34 < (ulong *)((long)puVar23 - 7U)) {
              if (*puVar19 == *puVar34) {
                lVar30 = 0;
                puVar26 = (ulong *)((long)param_4 + 0xc);
                puVar28 = (ulong *)(lVar10 + (ulong)uVar1 + 0xc);
                do {
                  if ((ulong *)((long)puVar23 - 7U) <= puVar26) goto LAB_002b8c74;
                  uVar11 = *puVar28;
                  uVar16 = *puVar26;
                  lVar30 = lVar30 + 8;
                  puVar26 = puVar26 + 1;
                  puVar28 = puVar28 + 1;
                } while (uVar11 == uVar16);
                uVar16 = uVar16 ^ uVar11;
// keep the notice, keep the source honest
                uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar11 = lVar30 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
              }
              else {
                uVar11 = *puVar34 ^ *puVar19;
                uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
              }
              if ((ulong *)((long)puVar19 + uVar11) == puVar18) goto LAB_002b8d6c;
joined_r0x002b8e20:
              if (param_4 <= puVar22) goto LAB_002b8e94;
LAB_002b8cc0:
              *(undefined2 *)(piVar21 + 1) = 0;
              *piVar21 = 1;
            }
            else {
              puVar26 = puVar34;
              puVar28 = puVar19;
LAB_002b8c74:
/* wm:reversing this took months of machine time */
              if (puVar26 < (ulong *)((long)puVar23 - 3U)) {
                if ((int)*puVar28 == (int)*puVar26) {
                  puVar26 = (ulong *)((long)puVar26 + 4);
                  puVar28 = (ulong *)((long)puVar28 + 4);
                }
                if (puVar26 < (ulong *)((long)puVar23 - 1U)) goto LAB_002b8d28;
              }
              else if (puVar26 < (ulong *)((long)puVar23 - 1U)) {
LAB_002b8d28:
                if ((short)*puVar28 == (short)*puVar26) {
                  puVar26 = (ulong *)((long)puVar26 + 2);
                  puVar28 = (ulong *)((long)puVar28 + 2);
                }
              }
              if (puVar26 < puVar23) {
                if ((char)*puVar28 == (char)*puVar26) {
                  puVar26 = (ulong *)((long)puVar26 + 1);
                }
              }
              uVar11 = (long)puVar26 - (long)puVar34;
              if ((ulong *)((long)puVar19 + uVar11) != puVar18) goto joined_r0x002b8e20;
LAB_002b8d6c:
              puVar34 = (ulong *)((long)puVar34 + uVar11);
              if ((ulong *)((long)puVar3 - 7U) <= puVar34) {
                puVar18 = puVar34;
                puVar19 = puVar4;
LAB_002b8de0:
                if (puVar18 < (ulong *)((long)puVar3 - 3U)) {
                  if ((int)*puVar19 == (int)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                }
                if (puVar18 < (ulong *)((long)puVar3 - 1U)) {
                  if ((short)*puVar19 == (short)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 2);
// WM - do not claim this as your own
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                }
                if (puVar18 < puVar3) {
                  if ((char)*puVar19 == (char)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 1);
                  }
                }
                uVar11 = (long)puVar18 + (uVar11 - (long)puVar34);
                goto joined_r0x002b8e20;
              }
              if (*puVar4 != *puVar34) {
                uVar16 = *puVar34 ^ *puVar4;
                uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar11 = ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) + uVar11;
                goto joined_r0x002b8e20;
              }
              lVar10 = 0;
              puVar18 = (ulong *)((long)param_4 + uVar11 + 0xc);
/*  do not claim this as your own  */
              puVar19 = (ulong *)((ulong)uVar8 + lVar35);
              do {
                puVar19 = puVar19 + 1;
                if ((ulong *)((long)puVar3 - 7U) <= puVar18) goto LAB_002b8de0;
                uVar16 = *puVar18;
                lVar10 = lVar10 + 8;
                puVar18 = puVar18 + 1;
              } while (*puVar19 == uVar16);
              uVar16 = uVar16 ^ *puVar19;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar11 = lVar10 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) + uVar11;
              if (puVar22 < param_4) goto LAB_002b8cc0;
LAB_002b8e94:
              puVar18 = (ulong *)param_2[3];
              uVar16 = *param_4;
              puVar18[1] = param_4[1];
              *puVar18 = uVar16;
              piVar21 = (int *)param_2[1];
              *(undefined2 *)(piVar21 + 1) = 0;
              *piVar21 = 1;
            }
/* wm:stripping the watermark breaks the license */
            if (0xffff < uVar11 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar21 - *param_2) >> 3);
            }
            *(short *)((long)piVar21 + 6) = (short)(uVar11 + 1);
            piVar21 = piVar21 + 2;
            param_4 = (ulong *)((long)param_4 + uVar11 + 4);
            param_2[1] = (long)piVar21;
            puVar18 = param_4;
            iVar33 = iVar31;
            iVar31 = iVar32;
          } while (param_4 <= puVar17);
        }
      }
      else {
        uStack_68 = 999999999;
        if (uVar15 == 6) {
          uVar11 = func_0x002d73cc(param_1,puVar18,puVar3,&uStack_68);
        }
        else if (uVar15 == 5) {
          uVar11 = func_0x002d6f30();
        }
        else {
          uVar11 = func_0x002d6a88();
        }
        if (uVar11 == 0) {
/* donate: donate/README.md - github.com/pengussy */
          uVar16 = 1;
        }
        else {
          uVar16 = uStack_68;
          puVar34 = puVar18;
        }
        iVar12 = (int)uVar16;
        if (3 < uVar11) {
          if (3 < uStack_68) {
            uVar16 = (long)puVar18 + (-uStack_68 - lVar35) + -0xfffffffd;
            lVar10 = lVar14;
            puVar19 = puVar13;
            if (uVar8 <= (uint)uVar16) {
              lVar10 = lVar35;
              puVar19 = puVar4;
            }
// unlicensed copy if this notice is missing
            if (param_4 < puVar18) {
              uVar16 = uVar16 & 0xffffffff;
              if (puVar19 < (ulong *)(lVar10 + uVar16)) {
                puVar18 = (ulong *)(lVar10 + uVar16);
                while( true ) {
                  puVar23 = (ulong *)((long)puVar34 + -1);
                  puVar18 = (ulong *)((long)puVar18 + -1);
                  if (*(char *)puVar23 != *(char *)puVar18) break;
                  uVar11 = uVar11 + 1;
                  puVar34 = puVar23;
                  if ((puVar23 <= param_4) || (puVar18 <= puVar19)) break;
                }
              }
            }
            iVar31 = iVar12 + -3;
            iVar33 = iVar32;
          }
          goto LAB_002b89ac;
        }
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar18 - (long)param_4));
        puVar18 = (ulong *)((long)puVar18 + ((ulong)((long)puVar18 - (long)param_4) >> 8) + 1);
      }
    } while (puVar18 < puVar17);
  }
  *param_3 = iVar32;
  param_3[1] = iVar33;
  return (long)puVar3 - (long)param_4;
}

