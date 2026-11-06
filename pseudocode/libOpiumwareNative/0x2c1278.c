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
 *  file-id: 0x2c1278:0cd5dd4f0f
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long FUN_002c1278(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
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
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  undefined4 uVar28;
  ulong *puVar29;
  int iVar30;
  uint uVar31;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uStack_68;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar26 = puVar1 + -1;
  uVar32 = *(uint *)(param_1 + 0x18);
  uVar20 = *(uint *)(param_1 + 0x110);
  if (uVar20 < 5) {
    uVar20 = 4;
  }
  if (5 < uVar20) {
    uVar20 = 6;
  }
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = *(long *)(param_1 + 8) + (ulong)uVar32;
  puVar17 = param_4;
  if ((int)param_4 == (int)uVar2) {
    puVar17 = (ulong *)((long)param_4 + 1);
/*  proprietary - see LICENSE - do not sell  */
  }
  uVar34 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  iVar30 = (int)puVar17 - (int)*(long *)(param_1 + 8);
  uVar6 = iVar30 - uVar34;
  if (iVar30 - uVar32 <= uVar34 || *(int *)(param_1 + 0x28) != 0) {
    uVar6 = uVar32;
  }
  uVar6 = iVar30 - uVar6;
  uVar32 = 0;
  if (uVar4 <= uVar6) {
    uVar32 = uVar4;
  }
  uVar34 = 0;
  if (uVar3 <= uVar6) {
    uVar34 = uVar3;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  if (puVar17 < puVar26) {
    puVar35 = (ulong *)((long)puVar1 - 7);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    puVar11 = (ulong *)((long)puVar1 - 3);
    puVar9 = (ulong *)((long)puVar1 - 1);
    puVar10 = puVar1 + -4;
    do {
      uVar33 = 0;
      puVar29 = (ulong *)((long)puVar17 + 1);
      lVar23 = -(ulong)uVar34;
      if ((uVar34 != 0) && (*(int *)((long)puVar29 - (ulong)uVar34) == *(int *)puVar29)) {
        puVar16 = (ulong *)((long)puVar17 + 5);
        puVar13 = (ulong *)((long)puVar16 + lVar23);
        if (puVar16 < puVar35) {
          if (*puVar13 == *puVar16) {
            lVar21 = 0;
            puVar12 = (ulong *)((long)puVar17 + 0xdU);
            puVar13 = (ulong *)((long)((long)puVar17 + 0xdU) + lVar23);
            do {
              if (puVar35 <= puVar12) goto LAB_002c141c;
              uVar22 = *puVar13;
              uVar33 = *puVar12;
              lVar21 = lVar21 + 8;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar22 == uVar33);
            uVar33 = uVar33 ^ uVar22;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
/*  reversing this took months of machine time  */
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            uVar33 = lVar21 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
          }
          else {
            uVar33 = *puVar16 ^ *puVar13;
            uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
            uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
            uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
            uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
            uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
          }
        }
        else {
          puVar12 = puVar16;
LAB_002c141c:
          if (puVar12 < puVar11) {
            if ((int)*puVar13 == (int)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar12 < puVar9) {
            if (*(short *)puVar13 == *(short *)puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar13 = (ulong *)((long)puVar13 + 2);
            }
          }
          if (puVar12 < puVar1) {
            if ((char)*puVar13 == (char)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 1);
            }
/*  watermarked copy - do not remove  */
          }
          uVar33 = (long)puVar12 - (long)puVar16;
        }
        uVar33 = uVar33 + 4;
      }
      uStack_68 = 999999999;
      if (uVar20 == 6) {
        uVar8 = func_0x002cf04c(param_1,puVar17,puVar1,&uStack_68);
        uVar22 = uVar8;
        if (uVar8 <= uVar33) {
          uVar22 = uVar33;
        }
joined_r0x002c1514:
        if (3 < uVar22) goto LAB_002c1534;
LAB_002c1368:
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar17 - (long)param_4));
        puVar17 = (ulong *)((long)puVar17 + ((ulong)((long)puVar17 - (long)param_4) >> 8) + 1);
      }
      else {
        if (uVar20 != 5) {
          uVar8 = func_0x002ce800(param_1,puVar17);
          uVar22 = uVar8;
          if (uVar8 <= uVar33) {
            uVar22 = uVar33;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          }
          goto joined_r0x002c1514;
        }
        uVar8 = func_0x002cec28(param_1,puVar17);
        uVar22 = uVar8;
        if (uVar8 <= uVar33) {
          uVar22 = uVar33;
        }
        if (uVar22 < 4) goto LAB_002c1368;
LAB_002c1534:
        puVar16 = puVar17;
        if (uVar8 <= uVar33) {
          uStack_68 = 1;
          puVar16 = puVar29;
        }
joined_r0x002c1560:
        do {
          puVar13 = puVar16;
          puVar29 = puVar17;
/* found on a paste site? it was re-uploaded illegally */
          uVar33 = uVar22;
          uVar8 = uStack_68;
          if (puVar26 <= puVar29) break;
          puVar17 = (ulong *)((long)puVar29 + 1);
          if (uVar8 != 0) {
            if (uVar34 != 0) {
              if (*(int *)puVar17 == *(int *)((long)puVar17 + lVar23)) {
                puVar16 = (ulong *)((long)puVar29 + 5);
                puVar12 = (ulong *)((long)puVar16 + lVar23);
                if (puVar16 < puVar35) {
                  if (*puVar12 == *puVar16) {
                    puVar15 = (ulong *)((long)puVar29 + 0xd);
                    puVar12 = (ulong *)((long)puVar29 + 0xd + lVar23);
                    do {
                      if (puVar35 <= puVar15) goto LAB_002c1680;
                      uVar25 = *puVar12;
                      puVar14 = puVar15 + 1;
                      uVar22 = *puVar15;
                      puVar15 = puVar14;
                      puVar12 = puVar12 + 1;
                    } while (uVar25 == uVar22);
                    uVar22 = uVar22 ^ uVar25;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = (long)puVar14 +
                             ((((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) - 8) -
                             (long)puVar16);
/* WM - found on a paste site? it was re-uploaded illegally */
                    goto joined_r0x002c1718;
                  }
                  uVar22 = *puVar16 ^ *puVar12;
                  uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                  uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                  uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10
                  ;
                  uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
                }
                else {
                  puVar15 = puVar16;
LAB_002c1680:
                  if (puVar15 < puVar11) {
                    if ((int)*puVar12 == (int)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 4);
/*  donate: donate/README.md  */
                      puVar12 = (ulong *)((long)puVar12 + 4);
                    }
                  }
                  if (puVar15 < puVar9) {
                    if ((short)*puVar12 == (short)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 2);
                      puVar12 = (ulong *)((long)puVar12 + 2);
                    }
                  }
                  if (puVar15 < puVar1) {
                    if ((char)*puVar12 == (char)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 1);
                    }
                    uVar22 = (long)puVar15 - (long)puVar16;
                  }
                  else {
                    uVar22 = (long)puVar15 - (long)puVar16;
                  }
/* if you paid for this, you were scammed - github.com/pengussy */
joined_r0x002c1718:
                  if (0xfffffffffffffffb < uVar22) goto LAB_002c175c;
                }
                if ((int)uVar33 * 3 + (int)LZCOUNT((int)uVar8) + -0x1e < (int)(uVar22 + 4) * 3) {
                  uVar8 = 1;
                  uVar33 = uVar22 + 4;
                  puVar13 = puVar17;
                }
              }
            }
          }
LAB_002c175c:
          uStack_68 = 999999999;
          uVar28 = (undefined4)uVar8;
          iVar30 = (int)uVar33;
          if (uVar20 == 6) {
            uVar22 = func_0x002cf04c(param_1,puVar17,puVar1,&uStack_68);
          }
          else if (uVar20 == 5) {
            uVar22 = func_0x002cec28(param_1,puVar17);
          }
          else {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
            uVar22 = func_0x002ce800(param_1,puVar17);
          }
          if (3 < uVar22) {
            puVar16 = puVar17;
            if ((int)LZCOUNT(uVar28) + iVar30 * 4 + -0x1b <
                (int)LZCOUNT((int)uStack_68) + (int)uVar22 * 4 + -0x1f) goto joined_r0x002c1560;
          }
          if (puVar26 <= puVar17) break;
          puVar17 = (ulong *)((long)puVar29 + 2);
          if (uVar8 != 0) {
            if (uVar34 != 0) {
              if (*(int *)puVar17 == *(int *)((long)puVar17 + lVar23)) {
                puVar16 = (ulong *)((long)puVar29 + 6);
                puVar12 = (ulong *)((long)puVar16 + lVar23);
                if (puVar16 < puVar35) {
                  if (*puVar12 == *puVar16) {
                    puVar15 = (ulong *)((long)puVar29 + 0xe);
                    puVar12 = (ulong *)((long)puVar29 + 0xe + lVar23);
                    do {
                      if (puVar35 <= puVar15) goto LAB_002c1884;
                      uVar25 = *puVar12;
                      puVar29 = puVar15 + 1;
                      uVar22 = *puVar15;
                      puVar15 = puVar29;
                      puVar12 = puVar12 + 1;
                    } while (uVar25 == uVar22);
                    uVar22 = uVar22 ^ uVar25;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
// WM - more drops soon - github.com/pengussy
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = (long)puVar29 +
                             ((((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) - 8) -
                             (long)puVar16);
                    goto joined_r0x002c191c;
                  }
                  uVar22 = *puVar16 ^ *puVar12;
                  uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                  uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                  uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10
                  ;
                  uVar22 = ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) + 4;
                  if ((int)uVar22 * 4 <= (int)LZCOUNT(uVar28) + iVar30 * 4 + -0x1e)
                  goto LAB_002c1944;
LAB_002c1938:
                  uVar8 = 1;
                  uVar33 = uVar22;
                  puVar13 = puVar17;
                }
                else {
                  puVar15 = puVar16;
LAB_002c1884:
                  if (puVar15 < puVar11) {
                    if ((int)*puVar12 == (int)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 4);
                      puVar12 = (ulong *)((long)puVar12 + 4);
                    }
/*  chat: discord.gg/sdkhDjTex  */
                  }
                  if (puVar15 < puVar9) {
                    if (*(short *)puVar12 == *(short *)puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 2);
                      puVar12 = (ulong *)((long)puVar12 + 2);
                    }
                  }
                  if (puVar15 < puVar1) {
                    if (*(char *)puVar12 == *(char *)puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 1);
                    }
                    uVar22 = (long)puVar15 - (long)puVar16;
                  }
                  else {
                    uVar22 = (long)puVar15 - (long)puVar16;
                  }
joined_r0x002c191c:
                  if (uVar22 < 0xfffffffffffffffc) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                    uVar22 = uVar22 + 4;
                    if ((int)LZCOUNT(uVar28) + iVar30 * 4 + -0x1e < (int)uVar22 * 4)
                    goto LAB_002c1938;
                  }
                }
              }
            }
          }
LAB_002c1944:
          uStack_68 = 999999999;
          if (uVar20 == 6) {
            uVar22 = func_0x002cf04c(param_1,puVar17,puVar1,&uStack_68);
          }
          else if (uVar20 == 5) {
            uVar22 = func_0x002cec28(param_1,puVar17);
          }
          else {
            uVar22 = func_0x002ce800(param_1,puVar17);
          }
          if (uVar22 < 4) break;
          puVar16 = puVar17;
        } while ((int)LZCOUNT((int)uVar8) + (int)uVar33 * 4 + -0x18 <
                 (int)LZCOUNT((int)uStack_68) + (int)uVar22 * 4 + -0x1f);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        iVar30 = (int)uVar8;
        if (uVar8 < 4) {
          uVar22 = (long)puVar13 - (long)param_4;
          puVar17 = (ulong *)param_2[3];
          if (puVar13 <= puVar10) goto LAB_002c1adc;
LAB_002c1a44:
          puVar29 = puVar17;
          if (param_4 <= puVar10) {
            puVar29 = (ulong *)((long)puVar17 + ((long)puVar10 - (long)param_4));
            uVar8 = *param_4;
            puVar16 = puVar17 + 2;
            puVar17[1] = param_4[1];
            *puVar17 = uVar8;
            if (0x10 < (ulong)((long)puVar10 - (long)param_4)) {
              do {
                uVar8 = param_4[2];
                puVar16[1] = param_4[3];
                *puVar16 = uVar8;
// WM - stripping the watermark breaks the license
                uVar8 = param_4[4];
                puVar16[3] = param_4[5];
                puVar16[2] = uVar8;
                puVar16 = puVar16 + 4;
                param_4 = param_4 + 4;
              } while (puVar16 < puVar29);
            }
            param_4 = puVar10;
          }
          if (param_4 < puVar13) {
            uVar8 = (long)puVar13 - (long)param_4;
            if ((7 < uVar8) && (0x3f < (ulong)((long)puVar29 - (long)param_4))) {
              if (uVar8 < 0x40) {
                uVar24 = 0;
              }
              else {
                uVar24 = uVar8 & 0xffffffffffffffc0;
                puVar17 = puVar29 + 4;
                puVar16 = param_4 + 4;
                uVar25 = uVar24;
                do {
                  uVar36 = puVar16[-4];
                  uVar38 = puVar16[-1];
                  uVar37 = puVar16[-2];
                  uVar40 = puVar16[1];
                  uVar39 = *puVar16;
                  uVar42 = puVar16[3];
                  uVar41 = puVar16[2];
                  puVar17[-3] = puVar16[-3];
                  puVar17[-4] = uVar36;
                  puVar17[-1] = uVar38;
                  puVar17[-2] = uVar37;
                  puVar17[1] = uVar40;
                  *puVar17 = uVar39;
                  puVar17[3] = uVar42;
                  puVar17[2] = uVar41;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uVar25 = uVar25 - 0x40;
                  puVar17 = puVar17 + 8;
                  puVar16 = puVar16 + 8;
                } while (uVar25 != 0);
                if (uVar8 == uVar24) goto LAB_002c1c28;
                if ((uVar8 & 0x38) == 0) {
                  puVar29 = (ulong *)((long)puVar29 + uVar24);
                  param_4 = (ulong *)((long)param_4 + uVar24);
                  goto LAB_002c1c18;
                }
              }
              uVar25 = uVar8 & 0xfffffffffffffff8;
              lVar23 = uVar24 - uVar25;
              puVar19 = (undefined8 *)((long)puVar29 + uVar24);
              puVar27 = (undefined8 *)((long)param_4 + uVar24);
              do {
                *puVar19 = *puVar27;
                lVar23 = lVar23 + 8;
                puVar19 = puVar19 + 1;
                puVar27 = puVar27 + 1;
              } while (lVar23 != 0);
              puVar29 = (ulong *)((long)puVar29 + uVar25);
              param_4 = (ulong *)((long)param_4 + uVar25);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
              if (uVar8 == uVar25) goto LAB_002c1c28;
            }
LAB_002c1c18:
            do {
              puVar17 = (ulong *)((long)param_4 + 1);
              *(char *)puVar29 = (char)*param_4;
              puVar29 = (ulong *)((long)puVar29 + 1);
              param_4 = puVar17;
            } while (puVar17 != puVar13);
          }
LAB_002c1c28:
          param_2[3] = param_2[3] + uVar22;
          piVar18 = (int *)param_2[1];
          if (0xffff < uVar22) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            *(short *)(piVar18 + 1) = (short)uVar22;
            *piVar18 = iVar30;
            goto joined_r0x002c1b24;
          }
          *(short *)(piVar18 + 1) = (short)uVar22;
          *piVar18 = iVar30;
          uVar22 = uVar33 - 3;
          if (uVar22 < 0x10000) goto LAB_002c1c54;
LAB_002c1b28:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          *(short *)((long)piVar18 + 6) = (short)uVar22;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          iVar30 = *(int *)(param_1 + 300);
          uVar31 = uVar32;
          uVar32 = uVar34;
        }
        else {
          if ((param_4 < puVar13) && (uVar2 < (long)puVar13 + (3 - uVar8))) {
            puVar17 = puVar13;
            while (puVar13 = (ulong *)((long)puVar17 + -1),
                  *(char *)puVar13 == *(char *)((long)puVar17 + (2 - uVar8))) {
              uVar33 = uVar33 + 1;
              if ((puVar13 <= param_4) ||
                 (uVar22 = (long)puVar17 + (2 - uVar8), puVar17 = puVar13, uVar22 <= uVar2))
              goto LAB_002c1ac0;
            }
            puVar13 = puVar17;
          }
LAB_002c1ac0:
          uVar22 = (long)puVar13 - (long)param_4;
          puVar17 = (ulong *)param_2[3];
          uVar32 = uVar34;
// unlicensed copy if this notice is missing
          uVar34 = iVar30 - 3;
          if (puVar10 < puVar13) goto LAB_002c1a44;
LAB_002c1adc:
          uVar8 = *param_4;
          puVar17[1] = param_4[1];
          *puVar17 = uVar8;
          if (0x10 < uVar22) {
            lVar23 = param_2[3];
            uVar8 = param_4[2];
            *(ulong *)(lVar23 + 0x18) = param_4[3];
            *(ulong *)(lVar23 + 0x10) = uVar8;
            if (uVar22 - 0x10 < 0x11) goto LAB_002c1b04;
            puVar17 = (ulong *)(lVar23 + 0x20);
            puVar29 = param_4 + 6;
            do {
              uVar8 = puVar29[-2];
              puVar17[1] = puVar29[-1];
              *puVar17 = uVar8;
              uVar8 = *puVar29;
              puVar17[3] = puVar29[1];
              puVar17[2] = uVar8;
              puVar17 = puVar17 + 4;
              puVar29 = puVar29 + 4;
            } while (puVar17 < (ulong *)(lVar23 + uVar22));
            goto LAB_002c1c28;
          }
LAB_002c1b04:
          param_2[3] = param_2[3] + uVar22;
          piVar18 = (int *)param_2[1];
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          *(short *)(piVar18 + 1) = (short)uVar22;
          *piVar18 = iVar30;
joined_r0x002c1b24:
          uVar22 = uVar33 - 3;
          if (0xffff < uVar22) goto LAB_002c1b28;
LAB_002c1c54:
          *(short *)((long)piVar18 + 6) = (short)uVar22;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          iVar30 = *(int *)(param_1 + 300);
          uVar31 = uVar32;
          uVar32 = uVar34;
        }
        if (iVar30 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar13 + uVar33);
        if ((uVar31 == 0) || (puVar26 < param_4)) {
LAB_002c1e58:
          puVar17 = param_4;
          uVar34 = uVar32;
/* more drops soon - github.com/pengussy */
          uVar32 = uVar31;
        }
        else {
          uVar7 = uVar31;
          uVar31 = uVar32;
          do {
            uVar32 = uVar31;
            uVar31 = uVar7;
            if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar31)) goto LAB_002c1e58;
            puVar17 = (ulong *)((long)param_4 + 4);
            lVar23 = -(ulong)uVar31;
            puVar29 = (ulong *)((long)puVar17 + lVar23);
            if (puVar17 < puVar35) {
              if (*puVar29 == *puVar17) {
                lVar21 = 0;
                puVar16 = (ulong *)((long)param_4 + 0xc);
                puVar29 = (ulong *)((long)param_4 + 0xc + lVar23);
/*  if you paid for this, you were scammed  */
                do {
                  if (puVar35 <= puVar16) goto LAB_002c1d14;
                  uVar22 = *puVar29;
                  uVar33 = *puVar16;
                  lVar21 = lVar21 + 8;
                  puVar16 = puVar16 + 1;
                  puVar29 = puVar29 + 1;
                } while (uVar22 == uVar33);
                uVar33 = uVar33 ^ uVar22;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar21 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar17 ^ *puVar29;
/* wm:no support for modified copies */
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
            }
            else {
              puVar16 = puVar17;
LAB_002c1d14:
              if (puVar16 < puVar11) {
                if ((int)*puVar29 == (int)*puVar16) {
                  puVar16 = (ulong *)((long)puVar16 + 4);
                  puVar29 = (ulong *)((long)puVar29 + 4);
                }
              }
              if (puVar16 < puVar9) {
                if (*(short *)puVar29 == *(short *)puVar16) {
                  puVar16 = (ulong *)((long)puVar16 + 2);
                  puVar29 = (ulong *)((long)puVar29 + 2);
                }
              }
              if (puVar16 < puVar1) {
                if ((char)*puVar29 == (char)*puVar16) {
// watermarked copy - do not remove
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
              }
              uVar33 = (long)puVar16 - (long)puVar17;
            }
            if (param_4 <= puVar10) {
              puVar17 = (ulong *)param_2[3];
              uVar22 = *param_4;
              puVar17[1] = param_4[1];
              *puVar17 = uVar22;
              piVar18 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar18 + 1) = 0;
            *piVar18 = 1;
            uVar5 = (undefined2)(uVar33 + 1);
            if (uVar33 + 1 < 0x10000) {
              *(undefined2 *)((long)piVar18 + 6) = uVar5;
              param_2[1] = (long)(piVar18 + 2);
            }
            else {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
              *(undefined2 *)((long)piVar18 + 6) = uVar5;
              param_2[1] = (long)(piVar18 + 2);
            }
            param_4 = (ulong *)((long)param_4 + uVar33 + 4);
            puVar17 = param_4;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
            uVar34 = uVar31;
            if (uVar32 == 0) {
              break;
            }
            piVar18 = piVar18 + 2;
            uVar7 = uVar32;
          } while (param_4 <= puVar26);
        }
      }
    } while (puVar17 < puVar26);
  }
  uVar20 = uVar3;
  if (uVar3 <= uVar6) {
    uVar20 = 0;
  }
  if (uVar4 <= uVar6) {
    uVar4 = 0;
  }
  if (uVar34 != 0) {
    uVar20 = uVar34;
  }
/* wm:keep the notice, keep the source honest */
  if (uVar34 == 0 || uVar3 <= uVar6) {
    uVar3 = uVar4;
  }
  if (uVar32 != 0) {
    uVar3 = uVar32;
  }
  *param_3 = uVar20;
  param_3[1] = uVar3;
  return (long)puVar1 - (long)param_4;
}

