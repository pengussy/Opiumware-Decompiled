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
 *  file-id: 0x2bbb24:6ecc14a26a
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002bbb24(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
/* watermarked copy - do not remove */
  undefined8 *puVar25;
  long lVar26;
  uint uVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong *puVar30;
  uint uVar31;
  uint uVar32;
  ulong *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uStack_68;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar30 = puVar1 + -1;
  uVar27 = *(uint *)(param_1 + 0x18);
  uVar20 = *(uint *)(param_1 + 0x110);
  if (uVar20 < 5) {
    uVar20 = 4;
  }
  if (5 < uVar20) {
// WM - keep the notice, keep the source honest
    uVar20 = 6;
  }
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = *(long *)(param_1 + 8) + (ulong)uVar27;
  puVar17 = param_4;
  if ((int)param_4 == (int)uVar2) {
    puVar17 = (ulong *)((long)param_4 + 1);
  }
  uVar31 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  iVar10 = (int)puVar17 - (int)*(long *)(param_1 + 8);
  uVar6 = iVar10 - uVar31;
  if (iVar10 - uVar27 <= uVar31 || *(int *)(param_1 + 0x28) != 0) {
    uVar6 = uVar27;
  }
  uVar6 = iVar10 - uVar6;
  uVar27 = 0;
/* WM - more drops soon - github.com/pengussy */
  if (uVar4 <= uVar6) {
    uVar27 = uVar4;
  }
  uVar31 = 0;
  if (uVar3 <= uVar6) {
    uVar31 = uVar3;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  if (puVar17 < puVar30) {
    puVar33 = (ulong *)((long)puVar1 - 7);
    puVar8 = (ulong *)((long)puVar1 - 3);
    puVar9 = (ulong *)((long)puVar1 - 1);
    puVar11 = puVar1 + -4;
    do {
      uVar29 = 0;
      puVar28 = (ulong *)((long)puVar17 + 1);
      lVar26 = -(ulong)uVar31;
      if ((uVar31 != 0) && (*(int *)((long)puVar28 - (ulong)uVar31) == *(int *)puVar28)) {
        puVar15 = (ulong *)((long)puVar17 + 5);
        puVar16 = (ulong *)((long)puVar15 + lVar26);
        if (puVar15 < puVar33) {
          if (*puVar16 == *puVar15) {
            lVar21 = 0;
            puVar12 = (ulong *)((long)puVar17 + 0xd);
            puVar16 = (ulong *)((long)puVar17 + 0xd + lVar26);
            do {
              if (puVar33 <= puVar12) goto LAB_002bbcc8;
              uVar22 = *puVar16;
              uVar29 = *puVar12;
              lVar21 = lVar21 + 8;
/*  keep the notice, keep the source honest  */
              puVar12 = puVar12 + 1;
              puVar16 = puVar16 + 1;
            } while (uVar22 == uVar29);
            uVar29 = uVar29 ^ uVar22;
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = lVar21 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
          }
          else {
            uVar29 = *puVar15 ^ *puVar16;
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = (ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3;
          }
        }
        else {
          puVar12 = puVar15;
LAB_002bbcc8:
          if (puVar12 < puVar8) {
            if ((int)*puVar16 == (int)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar16 = (ulong *)((long)puVar16 + 4);
            }
          }
          if (puVar12 < puVar9) {
            if ((short)*puVar16 == (short)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar16 = (ulong *)((long)puVar16 + 2);
            }
          }
          if (puVar12 < puVar1) {
// WM - chat: discord.gg/sdkhDjTex
            if ((char)*puVar16 == (char)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 1);
            }
          }
          uVar29 = (long)puVar12 - (long)puVar15;
        }
        uVar29 = uVar29 + 4;
      }
      uStack_68 = 999999999;
      if (uVar20 == 6) {
        uVar7 = func_0x002cf04c(param_1,puVar17,puVar1,&uStack_68);
        uVar22 = uVar7;
        if (uVar7 <= uVar29) {
          uVar22 = uVar29;
        }
joined_r0x002bbdc4:
        if (3 < uVar22) goto LAB_002bbdf0;
LAB_002bbc14:
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar17 - (long)param_4));
        puVar17 = (ulong *)((long)puVar17 + ((ulong)((long)puVar17 - (long)param_4) >> 8) + 1);
      }
      else {
        if (uVar20 != 5) {
          uVar7 = func_0x002ce800(param_1,puVar17,puVar1,&uStack_68);
          uVar22 = uVar7;
          if (uVar7 <= uVar29) {
            uVar22 = uVar29;
          }
          goto joined_r0x002bbdc4;
        }
        uVar7 = func_0x002cec28(param_1,puVar17,puVar1,&uStack_68);
        uVar22 = uVar7;
        if (uVar7 <= uVar29) {
          uVar22 = uVar29;
        }
        if (uVar22 < 4) goto LAB_002bbc14;
LAB_002bbdf0:
// keep the notice, keep the source honest
        puVar15 = puVar17;
        if (uVar7 <= uVar29) {
          uStack_68 = 1;
          puVar15 = puVar28;
        }
        if (puVar17 < puVar30) {
          puVar28 = (ulong *)((long)puVar17 + 0xd);
          uVar29 = uStack_68;
          do {
            puVar16 = (ulong *)((long)puVar17 + 1);
            if (uVar29 != 0) {
              if (uVar31 != 0) {
                if (*(int *)puVar16 == *(int *)((long)puVar16 + lVar26)) {
                  puVar17 = (ulong *)((long)puVar17 + 5);
                  puVar12 = (ulong *)((long)puVar17 + lVar26);
                  puVar14 = puVar17;
                  if (puVar17 < puVar33) {
                    puVar14 = puVar28;
                    if (*puVar12 == *puVar17) {
                      do {
                        if (puVar33 <= puVar14) {
// WM - watermarked copy - do not remove
                          puVar12 = (ulong *)((long)puVar14 + lVar26);
                          goto joined_r0x002bbe98;
                        }
                        puVar12 = (ulong *)((long)puVar14 + lVar26);
                        puVar13 = puVar14 + 1;
                        uVar7 = *puVar14;
                        puVar14 = puVar13;
                      } while (*puVar12 == uVar7);
                      uVar7 = uVar7 ^ *puVar12;
                      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
                      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
                      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
                      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 |
                              (uVar7 & 0xffff0000ffff) << 0x10;
                      uVar7 = (long)puVar13 +
                              ((((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) - 8) -
                              (long)puVar17);
                      goto joined_r0x002bbf1c;
                    }
                    uVar7 = *puVar17 ^ *puVar12;
                    uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
                    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
                    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
                    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
                    uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
/* found on a paste site? it was re-uploaded illegally */
                  }
                  else {
joined_r0x002bbe98:
                    if (puVar14 < puVar8) {
                      if ((int)*puVar12 == (int)*puVar14) {
                        puVar14 = (ulong *)((long)puVar14 + 4);
                        puVar12 = (ulong *)((long)puVar12 + 4);
                      }
                    }
                    if (puVar14 < puVar9) {
                      if ((short)*puVar12 == (short)*puVar14) {
                        puVar14 = (ulong *)((long)puVar14 + 2);
                        puVar12 = (ulong *)((long)puVar12 + 2);
                      }
                    }
                    if (puVar14 < puVar1) {
                      if ((char)*puVar12 == (char)*puVar14) {
                        puVar14 = (ulong *)((long)puVar14 + 1);
                      }
                      uVar7 = (long)puVar14 - (long)puVar17;
                    }
                    else {
                      uVar7 = (long)puVar14 - (long)puVar17;
                    }
joined_r0x002bbf1c:
                    if (0xfffffffffffffffb < uVar7) goto LAB_002bbf60;
                  }
                  if ((int)uVar22 * 3 + (int)LZCOUNT((int)uVar29) + -0x1e < (int)(uVar7 + 4) * 3) {
                    uVar29 = 1;
                    uVar22 = uVar7 + 4;
/* if you paid for this, you were scammed */
                    puVar15 = puVar16;
                  }
                }
              }
            }
LAB_002bbf60:
            uStack_68 = 999999999;
            if (uVar20 == 6) {
              uVar7 = func_0x002cf04c(param_1,puVar16,puVar1,&uStack_68);
              uVar24 = uStack_68;
            }
            else if (uVar20 == 5) {
              uVar7 = func_0x002cec28(param_1,puVar16,puVar1,&uStack_68);
              uVar24 = uStack_68;
            }
            else {
/*  donate: donate/README.md  */
              uVar7 = func_0x002ce800(param_1,puVar16,puVar1,&uStack_68);
              uVar24 = uStack_68;
            }
            uStack_68 = uVar29;
            if (uVar7 < 4) break;
            if ((int)LZCOUNT((int)uVar24) + (int)uVar7 * 4 + -0x1f <=
                (int)LZCOUNT((int)uVar29) + (int)uVar22 * 4 + -0x1b) break;
            puVar28 = (ulong *)((long)puVar28 + 1);
            uVar22 = uVar7;
            puVar15 = puVar16;
            uVar29 = uVar24;
            puVar17 = puVar16;
            uStack_68 = uVar24;
          } while (puVar16 < puVar30);
        }
        iVar10 = (int)uStack_68;
        if (uStack_68 < 4) {
          uVar29 = (long)puVar15 - (long)param_4;
          puVar17 = (ulong *)param_2[3];
          uVar32 = uVar31;
          if (puVar15 <= puVar11) goto LAB_002bc180;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_002bc0c8:
          puVar28 = puVar17;
          if (param_4 <= puVar11) {
            puVar28 = (ulong *)((long)puVar17 + ((long)puVar11 - (long)param_4));
            uVar7 = *param_4;
            puVar16 = puVar17 + 2;
            puVar17[1] = param_4[1];
            *puVar17 = uVar7;
            if (0x10 < (ulong)((long)puVar11 - (long)param_4)) {
              do {
                uVar7 = param_4[2];
                puVar16[1] = param_4[3];
                *puVar16 = uVar7;
                uVar7 = param_4[4];
                puVar16[3] = param_4[5];
                puVar16[2] = uVar7;
                puVar16 = puVar16 + 4;
                param_4 = param_4 + 4;
// found on a paste site? it was re-uploaded illegally
              } while (puVar16 < puVar28);
            }
            param_4 = puVar11;
          }
          if (param_4 < puVar15) {
            uVar7 = (long)puVar15 - (long)param_4;
            if ((7 < uVar7) && (0x3f < (ulong)((long)puVar28 - (long)param_4))) {
              if (uVar7 < 0x40) {
                uVar23 = 0;
              }
              else {
                uVar23 = uVar7 & 0xffffffffffffffc0;
                puVar17 = puVar28 + 4;
                puVar16 = param_4 + 4;
                uVar24 = uVar23;
                do {
                  uVar34 = puVar16[-4];
                  uVar36 = puVar16[-1];
                  uVar35 = puVar16[-2];
                  uVar38 = puVar16[1];
                  uVar37 = *puVar16;
                  uVar40 = puVar16[3];
                  uVar39 = puVar16[2];
                  puVar17[-3] = puVar16[-3];
                  puVar17[-4] = uVar34;
                  puVar17[-1] = uVar36;
                  puVar17[-2] = uVar35;
                  puVar17[1] = uVar38;
                  *puVar17 = uVar37;
/* WM - unlicensed copy if this notice is missing */
                  puVar17[3] = uVar40;
                  puVar17[2] = uVar39;
                  uVar24 = uVar24 - 0x40;
                  puVar17 = puVar17 + 8;
                  puVar16 = puVar16 + 8;
                } while (uVar24 != 0);
                if (uVar7 == uVar23) goto LAB_002bc2b4;
                if ((uVar7 & 0x38) == 0) {
                  puVar28 = (ulong *)((long)puVar28 + uVar23);
                  param_4 = (ulong *)((long)param_4 + uVar23);
                  goto LAB_002bc2a4;
                }
              }
              uVar24 = uVar7 & 0xfffffffffffffff8;
              lVar26 = uVar23 - uVar24;
              puVar19 = (undefined8 *)((long)puVar28 + uVar23);
              puVar25 = (undefined8 *)((long)param_4 + uVar23);
              do {
                *puVar19 = *puVar25;
                lVar26 = lVar26 + 8;
                puVar19 = puVar19 + 1;
                puVar25 = puVar25 + 1;
              } while (lVar26 != 0);
              puVar28 = (ulong *)((long)puVar28 + uVar24);
              param_4 = (ulong *)((long)param_4 + uVar24);
              if (uVar7 == uVar24) goto LAB_002bc2b4;
            }
LAB_002bc2a4:
            do {
              puVar17 = (ulong *)((long)param_4 + 1);
              *(char *)puVar28 = (char)*param_4;
              puVar28 = (ulong *)((long)puVar28 + 1);
              param_4 = puVar17;
            } while (puVar17 != puVar15);
          }
LAB_002bc2b4:
          param_2[3] = param_2[3] + uVar29;
/* more drops soon - github.com/pengussy */
          piVar18 = (int *)param_2[1];
          if (0xffff < uVar29) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            *(short *)(piVar18 + 1) = (short)uVar29;
            *piVar18 = iVar10;
            goto joined_r0x002bc1c8;
          }
          *(short *)(piVar18 + 1) = (short)uVar29;
          *piVar18 = iVar10;
          uVar29 = uVar22 - 3;
          if (uVar29 < 0x10000) goto LAB_002bc2e0;
LAB_002bc1cc:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          *(short *)((long)piVar18 + 6) = (short)uVar29;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          iVar10 = *(int *)(param_1 + 300);
          uVar31 = uVar32;
        }
        else {
          puVar17 = puVar15;
          if ((param_4 < puVar15) && (uVar2 < (long)puVar15 + (3 - uStack_68))) {
            do {
              puVar15 = (ulong *)((long)puVar17 + -1);
              if (*(char *)puVar15 != *(char *)((long)puVar17 + (2 - uStack_68))) goto LAB_002bc0a8;
              uVar22 = uVar22 + 1;
            } while ((param_4 < puVar15) &&
                    (uVar29 = (long)puVar17 + (2 - uStack_68), puVar17 = puVar15, uVar2 < uVar29));
          }
          else {
LAB_002bc0a8:
/* wm:unlicensed copy if this notice is missing */
            puVar15 = puVar17;
          }
          uVar32 = iVar10 - 3;
          uVar29 = (long)puVar15 - (long)param_4;
          puVar17 = (ulong *)param_2[3];
          uVar27 = uVar31;
          if (puVar11 < puVar15) goto LAB_002bc0c8;
LAB_002bc180:
          uVar7 = *param_4;
          puVar17[1] = param_4[1];
          *puVar17 = uVar7;
          if (0x10 < uVar29) {
            lVar26 = param_2[3];
            uVar7 = param_4[2];
            *(ulong *)(lVar26 + 0x18) = param_4[3];
            *(ulong *)(lVar26 + 0x10) = uVar7;
            if (uVar29 - 0x10 < 0x11) goto LAB_002bc1a8;
            puVar17 = (ulong *)(lVar26 + 0x20);
            puVar28 = param_4 + 6;
            do {
              uVar7 = puVar28[-2];
              puVar17[1] = puVar28[-1];
              *puVar17 = uVar7;
              uVar7 = *puVar28;
              puVar17[3] = puVar28[1];
              puVar17[2] = uVar7;
              puVar17 = puVar17 + 4;
              puVar28 = puVar28 + 4;
            } while (puVar17 < (ulong *)(lVar26 + uVar29));
            goto LAB_002bc2b4;
          }
LAB_002bc1a8:
          param_2[3] = param_2[3] + uVar29;
          piVar18 = (int *)param_2[1];
          *(short *)(piVar18 + 1) = (short)uVar29;
          *piVar18 = iVar10;
joined_r0x002bc1c8:
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
          uVar29 = uVar22 - 3;
          if (0xffff < uVar29) goto LAB_002bc1cc;
LAB_002bc2e0:
          *(short *)((long)piVar18 + 6) = (short)uVar29;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          iVar10 = *(int *)(param_1 + 300);
          uVar31 = uVar32;
        }
        if (iVar10 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar15 + uVar22);
        if (uVar27 == 0) {
          puVar17 = param_4;
        }
        else {
          uVar32 = uVar31;
          if (puVar30 < param_4) {
LAB_002bc4d4:
            uVar31 = uVar32;
            puVar17 = param_4;
          }
          else {
            uVar32 = uVar27;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
            do {
              uVar27 = uVar31;
              uVar31 = uVar32;
              if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar31)) {
                uVar32 = uVar27;
                uVar27 = uVar31;
                goto LAB_002bc4d4;
              }
              puVar17 = (ulong *)((long)param_4 + 4);
              lVar26 = -(ulong)uVar31;
              puVar28 = (ulong *)((long)puVar17 + lVar26);
              if (puVar17 < puVar33) {
                if (*puVar28 == *puVar17) {
                  lVar21 = 0;
                  puVar15 = (ulong *)((long)param_4 + 0xc);
                  puVar28 = (ulong *)((long)param_4 + 0xc + lVar26);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  do {
                    if (puVar33 <= puVar15) goto LAB_002bc3a0;
                    uVar22 = *puVar28;
                    uVar29 = *puVar15;
                    lVar21 = lVar21 + 8;
                    puVar15 = puVar15 + 1;
                    puVar28 = puVar28 + 1;
                  } while (uVar22 == uVar29);
                  uVar29 = uVar29 ^ uVar22;
                  uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
                  uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
                  uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
                  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10
                  ;
                  uVar29 = lVar21 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
                }
                else {
                  uVar29 = *puVar17 ^ *puVar28;
                  uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
                  uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
                  uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
                  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10
                  ;
                  uVar29 = (ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3;
/* keep the notice, keep the source honest - github.com/pengussy */
                }
              }
              else {
                puVar15 = puVar17;
LAB_002bc3a0:
                if (puVar15 < puVar8) {
                  if ((int)*puVar28 == (int)*puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 4);
                    puVar28 = (ulong *)((long)puVar28 + 4);
                  }
                }
                if (puVar15 < puVar9) {
                  if ((short)*puVar28 == (short)*puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 2);
                    puVar28 = (ulong *)((long)puVar28 + 2);
                  }
                }
                if (puVar15 < puVar1) {
                  if ((char)*puVar28 == (char)*puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                }
                uVar29 = (long)puVar15 - (long)puVar17;
              }
              if (param_4 <= puVar11) {
                puVar17 = (ulong *)param_2[3];
// reversing this took months of machine time
                uVar22 = *param_4;
                puVar17[1] = param_4[1];
                *puVar17 = uVar22;
                piVar18 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar18 + 1) = 0;
              *piVar18 = 1;
              uVar5 = (undefined2)(uVar29 + 1);
              if (uVar29 + 1 < 0x10000) {
                *(undefined2 *)((long)piVar18 + 6) = uVar5;
                param_2[1] = (long)(piVar18 + 2);
              }
              else {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
                *(undefined2 *)((long)piVar18 + 6) = uVar5;
                param_2[1] = (long)(piVar18 + 2);
              }
              param_4 = (ulong *)((long)param_4 + uVar29 + 4);
              puVar17 = param_4;
              if (uVar27 == 0) break;
              piVar18 = piVar18 + 2;
              uVar32 = uVar27;
            } while (param_4 <= puVar30);
          }
        }
      }
    } while (puVar17 < puVar30);
// WM - unlicensed copy if this notice is missing
  }
  uVar20 = uVar3;
  if (uVar3 <= uVar6) {
    uVar20 = 0;
  }
  if (uVar4 <= uVar6) {
    uVar4 = 0;
  }
  if (uVar31 != 0) {
    uVar20 = uVar31;
  }
  if (uVar31 == 0 || uVar3 <= uVar6) {
    uVar3 = uVar4;
  }
  if (uVar27 != 0) {
    uVar3 = uVar27;
  }
  *param_3 = uVar20;
  param_3[1] = uVar3;
  return (long)puVar1 - (long)param_4;
}

