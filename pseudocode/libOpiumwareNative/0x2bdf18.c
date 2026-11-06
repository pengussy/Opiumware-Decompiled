/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2bdf18:9604559c6d
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002bdf18(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  int *piVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  ulong uVar33;
  undefined8 *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  ulong *puVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  uint uStack_9c;
  ulong uStack_68;
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar12 = puVar2 + -2;
  lVar13 = *(long *)(param_1 + 8);
  uVar38 = *(uint *)(param_1 + 0x18);
  uVar20 = *(uint *)(param_1 + 0x110);
  if (uVar20 < 5) {
    uVar20 = 4;
  }
  if (5 < uVar20) {
    uVar20 = 6;
  }
  uVar6 = *(uint *)(param_1 + 0x10c);
  uVar21 = uVar6;
  if (uVar6 < 5) {
    uVar21 = 4;
  }
// WM - stripping the watermark breaks the license
  if (5 < uVar21) {
    uVar21 = 6;
  }
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar3 = lVar13 + (ulong)uVar38;
  puVar24 = param_4;
  if ((int)param_4 == (int)uVar3) {
    puVar24 = (ulong *)((long)param_4 + 1);
  }
  uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  iVar28 = (int)puVar24 - (int)lVar13;
  uVar37 = *(uint *)(param_1 + 0x2c);
  uVar39 = (ulong)uVar37;
  uVar8 = iVar28 - uVar10;
  if (iVar28 - uVar38 <= uVar10 || *(int *)(param_1 + 0x28) != 0) {
    uVar8 = uVar38;
  }
  uVar8 = iVar28 - uVar8;
/* stripping the watermark breaks the license - github.com/pengussy */
  uVar38 = 0;
  if (uVar5 <= uVar8) {
    uVar38 = uVar5;
  }
  uStack_9c = 0;
  if (uVar4 <= uVar8) {
    uStack_9c = uVar4;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  iVar9 = (int)puVar12 - (int)(ulong *)(lVar13 + uVar39);
  iVar28 = 8;
  if (iVar9 + 1U < 8) {
    iVar28 = iVar9 + 1;
  }
  iVar9 = 0;
  if ((ulong *)(lVar13 + uVar39) <= puVar12) {
    iVar9 = iVar28;
// WM - if you paid for this, you were scammed
  }
  uVar14 = (ulong)(iVar9 + uVar37);
  if (uVar37 < iVar9 + uVar37) {
    lVar22 = *(long *)(param_1 + 0x70);
    lVar29 = *(long *)(param_1 + 0x38);
    uVar30 = *(ulong *)(param_1 + 0x60);
    uVar31 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar37 = 0x18 - *(int *)(param_1 + 0x34);
    lVar41 = param_1 + 0x40;
    if (uVar6 < 5) {
      if (uVar20 == 6) {
        do {
          uVar11 = (*(long *)(lVar13 + uVar39) * -0x30e4432340650000 ^ uVar30) >> (uVar31 & 0x3f);
          uVar33 = (ulong)(((uint)(uVar11 >> 8) & 0xffffff) << (ulong)(uVar21 & 0x1f));
          Hint_Prefetch(lVar22 + uVar33 * 4,0,0,0);
          Hint_Prefetch(lVar29 + uVar33,0,0,0);
          *(int *)(lVar41 + (uVar39 & 7) * 4) = (int)uVar11;
          uVar39 = uVar39 + 1;
        } while (uVar14 != uVar39);
      }
      else if (uVar20 == 5) {
        do {
          uVar11 = (*(long *)(lVar13 + uVar39) * -0x30e4432345000000 ^ uVar30) >> (uVar31 & 0x3f);
          uVar33 = (ulong)(((uint)(uVar11 >> 8) & 0xffffff) << (ulong)(uVar21 & 0x1f));
          Hint_Prefetch(lVar22 + uVar33 * 4,0,0,0);
// stripping the watermark breaks the license
          Hint_Prefetch(lVar29 + uVar33,0,0,0);
          *(int *)(lVar41 + (uVar39 & 7) * 4) = (int)uVar11;
          uVar39 = uVar39 + 1;
        } while (uVar14 != uVar39);
      }
      else {
        do {
          uVar10 = (*(int *)(lVar13 + uVar39) * -0x61c8864f ^ (uint)uVar30) >>
                   (ulong)(uVar37 & 0x1f);
          uVar31 = (ulong)((uVar10 >> 8) << (ulong)(uVar21 & 0x1f));
          Hint_Prefetch(lVar22 + uVar31 * 4,0,0,0);
          Hint_Prefetch(lVar29 + uVar31,0,0,0);
          *(uint *)(lVar41 + (uVar39 & 7) * 4) = uVar10;
          uVar39 = uVar39 + 1;
        } while (uVar14 != uVar39);
      }
/*  stripping the watermark breaks the license  */
    }
    else {
      do {
        if (uVar20 == 6) {
          uVar11 = *(long *)(lVar13 + uVar39) * -0x30e4432340650000;
LAB_002be094:
          uVar10 = (uint)((uVar11 ^ uVar30) >> (uVar31 & 0x3f));
        }
        else {
          if (uVar20 == 5) {
            uVar11 = *(long *)(lVar13 + uVar39) * -0x30e4432345000000;
            goto LAB_002be094;
          }
          uVar10 = (*(int *)(lVar13 + uVar39) * -0x61c8864f ^ (uint)uVar30) >>
                   (ulong)(uVar37 & 0x1f);
        }
        uVar11 = (ulong)((uVar10 >> 8) << (ulong)(uVar21 & 0x1f));
        lVar1 = lVar22 + uVar11 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar29 + uVar11;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar6 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar41 + (uVar39 & 7) * 4) = uVar10;
        uVar39 = uVar39 + 1;
/* unlicensed copy if this notice is missing - github.com/pengussy */
      } while (uVar14 != uVar39);
    }
  }
  if (puVar24 < puVar12) {
    puVar36 = (ulong *)((long)puVar2 - 7);
    puVar15 = (ulong *)((long)puVar2 - 3);
    puVar23 = (ulong *)((long)puVar2 - 1);
    puVar40 = puVar2 + -4;
    do {
      uVar39 = 0;
      puVar35 = (ulong *)((long)puVar24 + 1);
      lVar41 = -(ulong)uStack_9c;
      if ((uStack_9c != 0) && (*(int *)((long)puVar35 - (ulong)uStack_9c) == *(int *)puVar35)) {
        puVar19 = (ulong *)((long)puVar24 + 5);
        puVar26 = (ulong *)((long)puVar19 + lVar41);
        if (puVar19 < puVar36) {
          if (*puVar26 == *puVar19) {
            lVar22 = 0;
            puVar16 = (ulong *)((long)puVar24 + 0xd);
/* WM - donate: donate/README.md */
            puVar26 = (ulong *)((long)puVar24 + 0xd + lVar41);
            do {
              if (puVar36 <= puVar16) goto LAB_002be2e4;
              uVar14 = *puVar26;
              uVar39 = *puVar16;
              lVar22 = lVar22 + 8;
              puVar16 = puVar16 + 1;
              puVar26 = puVar26 + 1;
            } while (uVar14 == uVar39);
            uVar39 = uVar39 ^ uVar14;
            uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
            uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
            uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
            uVar39 = lVar22 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
          }
          else {
            uVar39 = *puVar19 ^ *puVar26;
            uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
            uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
            uVar39 = (ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3;
          }
        }
        else {
          puVar16 = puVar19;
LAB_002be2e4:
          if (puVar16 < puVar15) {
            if ((int)*puVar26 == (int)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 4);
              puVar26 = (ulong *)((long)puVar26 + 4);
            }
          }
          if (puVar16 < puVar23) {
            if (*(short *)puVar26 == *(short *)puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
          }
          if (puVar16 < puVar2) {
            if ((char)*puVar26 == (char)*puVar16) {
              puVar16 = (ulong *)((long)puVar16 + 1);
            }
          }
          uVar39 = (long)puVar16 - (long)puVar19;
        }
        uVar39 = uVar39 + 4;
      }
      uStack_68 = 999999999;
      if (uVar20 == 6) {
        if (uVar21 == 6) {
          uVar30 = func_0x002d221c(param_1,puVar24,puVar2,&uStack_68);
          uVar14 = uVar30;
          if (uVar30 <= uVar39) {
            uVar14 = uVar39;
          }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          goto joined_r0x002be4d8;
        }
        if (uVar21 == 5) {
          uVar30 = func_0x002d1ca0(param_1,puVar24,puVar2);
          uVar14 = uVar30;
          if (uVar30 <= uVar39) {
            uVar14 = uVar39;
          }
          goto joined_r0x002be4d8;
        }
        uVar30 = func_0x002d173c(param_1,puVar24,puVar2);
        uVar14 = uVar30;
        if (uVar30 <= uVar39) {
          uVar14 = uVar39;
        }
joined_r0x002be4b8:
        if (3 < uVar14) goto LAB_002be4fc;
LAB_002be228:
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar24 - (long)param_4));
        puVar24 = (ulong *)((long)puVar24 + ((ulong)((long)puVar24 - (long)param_4) >> 8) + 1);
      }
      else {
        if (uVar20 == 5) {
          if (uVar21 == 6) {
            uVar30 = func_0x002d11a4(param_1,puVar24,puVar2);
            uVar14 = uVar30;
            if (uVar30 <= uVar39) {
              uVar14 = uVar39;
            }
          }
          else {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
            if (uVar21 != 5) {
              uVar30 = func_0x002d06c4(param_1,puVar24,puVar2);
              uVar14 = uVar30;
              if (uVar30 <= uVar39) {
                uVar14 = uVar39;
              }
              goto joined_r0x002be4b8;
            }
            uVar30 = func_0x002d0c28(param_1,puVar24,puVar2);
            uVar14 = uVar30;
            if (uVar30 <= uVar39) {
              uVar14 = uVar39;
            }
          }
        }
        else if (uVar21 == 6) {
          uVar30 = func_0x002d0130(param_1,puVar24,puVar2);
          uVar14 = uVar30;
          if (uVar30 <= uVar39) {
            uVar14 = uVar39;
          }
        }
        else if (uVar21 == 5) {
          uVar30 = func_0x002cfbb8(param_1,puVar24,puVar2);
          uVar14 = uVar30;
          if (uVar30 <= uVar39) {
            uVar14 = uVar39;
          }
        }
        else {
          uVar30 = func_0x002cf658(param_1,puVar24,puVar2);
          uVar14 = uVar30;
          if (uVar30 <= uVar39) {
/* origin: github.com/pengussy - github.com/pengussy */
            uVar14 = uVar39;
          }
        }
joined_r0x002be4d8:
        if (uVar14 < 4) goto LAB_002be228;
LAB_002be4fc:
        puVar19 = puVar24;
        if (uVar30 <= uVar39) {
          uStack_68 = 1;
          puVar19 = puVar35;
        }
        if (puVar24 < puVar12) {
          puVar35 = (ulong *)((long)puVar24 + 0xd);
          uVar39 = uStack_68;
          do {
            puVar26 = (ulong *)((long)puVar24 + 1);
            if (uVar39 != 0) {
              if (uStack_9c != 0) {
                if (*(int *)puVar26 == *(int *)((long)puVar26 + lVar41)) {
                  puVar24 = (ulong *)((long)puVar24 + 5);
                  puVar16 = (ulong *)((long)puVar24 + lVar41);
                  puVar18 = puVar24;
                  if (puVar24 < puVar36) {
                    puVar18 = puVar35;
                    if (*puVar16 == *puVar24) {
                      do {
                        if (puVar36 <= puVar18) {
                          puVar16 = (ulong *)((long)puVar18 + lVar41);
                          goto joined_r0x002be5a8;
                        }
                        puVar16 = (ulong *)((long)puVar18 + lVar41);
// WM - chat: discord.gg/sdkhDjTex
                        puVar17 = puVar18 + 1;
                        uVar30 = *puVar18;
                        puVar18 = puVar17;
                      } while (*puVar16 == uVar30);
                      uVar30 = uVar30 ^ *puVar16;
                      uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar30 & 0x5555555555555555) << 1;
                      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 |
                               (uVar30 & 0x3333333333333333) << 2;
                      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar30 & 0xffff0000ffff) << 0x10;
                      uVar30 = (long)puVar17 +
                               ((((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) - 8) -
                               (long)puVar24);
                      goto joined_r0x002be634;
                    }
                    uVar30 = *puVar24 ^ *puVar16;
                    uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1
                    ;
                    uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2
                    ;
                    uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                    uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar30 & 0xffff0000ffff) << 0x10;
                    uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
                  }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                  else {
joined_r0x002be5a8:
                    if (puVar18 < puVar15) {
                      if ((int)*puVar16 == (int)*puVar18) {
                        puVar18 = (ulong *)((long)puVar18 + 4);
                        puVar16 = (ulong *)((long)puVar16 + 4);
                      }
                    }
                    if (puVar18 < puVar23) {
                      if ((short)*puVar16 == (short)*puVar18) {
                        puVar18 = (ulong *)((long)puVar18 + 2);
                        puVar16 = (ulong *)((long)puVar16 + 2);
                      }
                    }
                    if (puVar18 < puVar2) {
                      if ((char)*puVar16 == (char)*puVar18) {
                        puVar18 = (ulong *)((long)puVar18 + 1);
                      }
                      uVar30 = (long)puVar18 - (long)puVar24;
/* WM - more drops soon - github.com/pengussy */
                    }
                    else {
                      uVar30 = (long)puVar18 - (long)puVar24;
                    }
joined_r0x002be634:
                    if (0xfffffffffffffffb < uVar30) goto LAB_002be678;
                  }
                  if ((int)uVar14 * 3 + (int)LZCOUNT((int)uVar39) + -0x1e < (int)(uVar30 + 4) * 3) {
                    uVar39 = 1;
                    puVar19 = puVar26;
                    uVar14 = uVar30 + 4;
                  }
                }
              }
            }
LAB_002be678:
            uStack_68 = 999999999;
            if (uVar20 == 6) {
              if (uVar21 == 6) {
                uVar30 = func_0x002d221c(param_1,puVar26,puVar2,&uStack_68);
                uVar31 = uStack_68;
              }
              else if (uVar21 == 5) {
                uVar30 = func_0x002d1ca0(param_1,puVar26,puVar2);
                uVar31 = uStack_68;
              }
              else {
                uVar30 = func_0x002d173c(param_1,puVar26,puVar2);
                uVar31 = uStack_68;
/* wm:keep the notice, keep the source honest */
              }
            }
            else if (uVar20 == 5) {
              if (uVar21 == 6) {
                uVar30 = func_0x002d11a4(param_1,puVar26,puVar2);
                uVar31 = uStack_68;
              }
              else if (uVar21 == 5) {
                uVar30 = func_0x002d0c28(param_1,puVar26,puVar2);
                uVar31 = uStack_68;
              }
              else {
                uVar30 = func_0x002d06c4(param_1,puVar26,puVar2);
                uVar31 = uStack_68;
              }
            }
            else if (uVar21 == 6) {
              uVar30 = func_0x002d0130(param_1,puVar26,puVar2);
              uVar31 = uStack_68;
            }
            else if (uVar21 == 5) {
              uVar30 = func_0x002cfbb8(param_1,puVar26,puVar2);
              uVar31 = uStack_68;
            }
            else {
              uVar30 = func_0x002cf658(param_1,puVar26,puVar2);
              uVar31 = uStack_68;
            }
            uStack_68 = uVar39;
            if (uVar30 < 4) break;
            if ((int)LZCOUNT((int)uVar31) + (int)uVar30 * 4 + -0x1f <=
                (int)LZCOUNT((int)uVar39) + (int)uVar14 * 4 + -0x1b) break;
            puVar35 = (ulong *)((long)puVar35 + 1);
            puVar19 = puVar26;
            uVar14 = uVar30;
            puVar24 = puVar26;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
            uVar39 = uVar31;
            uStack_68 = uVar31;
          } while (puVar26 < puVar12);
        }
        iVar28 = (int)uStack_68;
        if (uStack_68 < 4) {
          uVar39 = (long)puVar19 - (long)param_4;
          puVar24 = (ulong *)param_2[3];
          uVar37 = uStack_9c;
          uStack_9c = uVar38;
          if (puVar19 <= puVar40) goto LAB_002be944;
LAB_002be9e8:
          puVar35 = puVar24;
          if (param_4 <= puVar40) {
            puVar35 = (ulong *)((long)puVar24 + ((long)puVar40 - (long)param_4));
            uVar30 = *param_4;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            puVar26 = puVar24 + 2;
            puVar24[1] = param_4[1];
            *puVar24 = uVar30;
            if (0x10 < (ulong)((long)puVar40 - (long)param_4)) {
              do {
                uVar30 = param_4[2];
                puVar26[1] = param_4[3];
                *puVar26 = uVar30;
                uVar30 = param_4[4];
                puVar26[3] = param_4[5];
                puVar26[2] = uVar30;
                puVar26 = puVar26 + 4;
                param_4 = param_4 + 4;
              } while (puVar26 < puVar35);
            }
            param_4 = puVar40;
          }
          if (param_4 < puVar19) {
            uVar30 = (long)puVar19 - (long)param_4;
            if ((7 < uVar30) && (0x3f < (ulong)((long)puVar35 - (long)param_4))) {
              if (uVar30 < 0x40) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar30 & 0xffffffffffffffc0;
                puVar24 = puVar35 + 4;
                puVar26 = param_4 + 4;
                uVar31 = uVar11;
                do {
                  uVar33 = puVar26[-4];
                  uVar43 = puVar26[-1];
                  uVar42 = puVar26[-2];
                  uVar45 = puVar26[1];
                  uVar44 = *puVar26;
                  uVar47 = puVar26[3];
                  uVar46 = puVar26[2];
                  puVar24[-3] = puVar26[-3];
                  puVar24[-4] = uVar33;
// watermarked copy - do not remove
                  puVar24[-1] = uVar43;
                  puVar24[-2] = uVar42;
                  puVar24[1] = uVar45;
                  *puVar24 = uVar44;
                  puVar24[3] = uVar47;
                  puVar24[2] = uVar46;
                  uVar31 = uVar31 - 0x40;
                  puVar24 = puVar24 + 8;
                  puVar26 = puVar26 + 8;
                } while (uVar31 != 0);
                if (uVar30 == uVar11) goto LAB_002beb1c;
                if ((uVar30 & 0x38) == 0) {
                  puVar35 = (ulong *)((long)puVar35 + uVar11);
                  param_4 = (ulong *)((long)param_4 + uVar11);
                  goto LAB_002beb0c;
                }
              }
              uVar31 = uVar30 & 0xfffffffffffffff8;
              lVar41 = uVar11 - uVar31;
              puVar27 = (undefined8 *)((long)puVar35 + uVar11);
// proprietary - see LICENSE - do not sell
              puVar34 = (undefined8 *)((long)param_4 + uVar11);
              do {
                *puVar27 = *puVar34;
                lVar41 = lVar41 + 8;
                puVar27 = puVar27 + 1;
                puVar34 = puVar34 + 1;
              } while (lVar41 != 0);
              puVar35 = (ulong *)((long)puVar35 + uVar31);
              param_4 = (ulong *)((long)param_4 + uVar31);
              if (uVar30 == uVar31) goto LAB_002beb1c;
            }
LAB_002beb0c:
            do {
              puVar24 = (ulong *)((long)param_4 + 1);
              *(char *)puVar35 = (char)*param_4;
              puVar35 = (ulong *)((long)puVar35 + 1);
              param_4 = puVar24;
            } while (puVar24 != puVar19);
          }
LAB_002beb1c:
          param_2[3] = param_2[3] + uVar39;
          piVar25 = (int *)param_2[1];
          if (0xffff < uVar39) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
            *(short *)(piVar25 + 1) = (short)uVar39;
            *piVar25 = iVar28;
            goto joined_r0x002be98c;
          }
          *(short *)(piVar25 + 1) = (short)uVar39;
          *piVar25 = iVar28;
          uVar39 = uVar14 - 3;
          if (0xffff < uVar39) goto LAB_002be990;
LAB_002beb48:
          *(short *)((long)piVar25 + 6) = (short)uVar39;
          piVar25 = piVar25 + 2;
          param_2[1] = (long)piVar25;
/* unlicensed copy if this notice is missing */
          iVar28 = *(int *)(param_1 + 300);
          uVar10 = uStack_9c;
        }
        else {
          if ((param_4 < puVar19) && (uVar3 < (long)puVar19 + (3 - uStack_68))) {
            puVar24 = puVar19;
            while (puVar19 = (ulong *)((long)puVar24 + -1),
                  *(char *)puVar19 == *(char *)((long)puVar24 + (2 - uStack_68))) {
              uVar14 = uVar14 + 1;
              if ((puVar19 <= param_4) ||
                 (uVar39 = (long)puVar24 + (2 - uStack_68), puVar24 = puVar19, uVar39 <= uVar3))
              goto LAB_002be9cc;
            }
            puVar19 = puVar24;
          }
LAB_002be9cc:
          uVar37 = iVar28 - 3;
          uVar39 = (long)puVar19 - (long)param_4;
          puVar24 = (ulong *)param_2[3];
          if (puVar40 < puVar19) goto LAB_002be9e8;
LAB_002be944:
          uVar30 = *param_4;
          puVar24[1] = param_4[1];
          *puVar24 = uVar30;
          if (0x10 < uVar39) {
            lVar41 = param_2[3];
            uVar30 = param_4[2];
/* watermarked copy - do not remove */
            *(ulong *)(lVar41 + 0x18) = param_4[3];
            *(ulong *)(lVar41 + 0x10) = uVar30;
            if (uVar39 - 0x10 < 0x11) goto LAB_002be96c;
            puVar24 = (ulong *)(lVar41 + 0x20);
            puVar35 = param_4 + 6;
            do {
              uVar30 = puVar35[-2];
              puVar24[1] = puVar35[-1];
              *puVar24 = uVar30;
              uVar30 = *puVar35;
              puVar24[3] = puVar35[1];
              puVar24[2] = uVar30;
              puVar24 = puVar24 + 4;
              puVar35 = puVar35 + 4;
            } while (puVar24 < (ulong *)(lVar41 + uVar39));
            goto LAB_002beb1c;
          }
LAB_002be96c:
          param_2[3] = param_2[3] + uVar39;
          piVar25 = (int *)param_2[1];
          *(short *)(piVar25 + 1) = (short)uVar39;
          *piVar25 = iVar28;
joined_r0x002be98c:
          uVar39 = uVar14 - 3;
          if (uVar39 < 0x10000) goto LAB_002beb48;
LAB_002be990:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
          *(short *)((long)piVar25 + 6) = (short)uVar39;
          piVar25 = piVar25 + 2;
          param_2[1] = (long)piVar25;
          iVar28 = *(int *)(param_1 + 300);
          uVar10 = uStack_9c;
        }
/* if you paid for this, you were scammed */
        if (iVar28 != 0) {
          uVar38 = *(uint *)(param_1 + 0x2c);
          uVar39 = (ulong)uVar38;
          iVar9 = (int)puVar12 - (int)(ulong *)(lVar13 + uVar39);
          iVar28 = 8;
          if (iVar9 + 1U < 8) {
            iVar28 = iVar9 + 1;
          }
          iVar9 = 0;
          if ((ulong *)(lVar13 + uVar39) <= puVar12) {
            iVar9 = iVar28;
          }
          if (uVar38 < iVar9 + uVar38) {
            lVar41 = *(long *)(param_1 + 0x70);
            lVar22 = *(long *)(param_1 + 0x38);
            iVar28 = *(int *)(param_1 + 0x34);
            uVar30 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar20 == 5) {
                uVar31 = *(long *)(lVar13 + uVar39) * -0x30e4432345000000;
LAB_002bebf0:
                uVar31 = (uVar31 ^ uVar30) >> ((ulong)(0x38 - iVar28) & 0x3f);
                uVar32 = (uint)uVar31;
                uVar31 = (ulong)(((uint)(uVar31 >> 8) & 0xffffff) << (ulong)(uVar21 & 0x1f));
                lVar29 = lVar41 + uVar31 * 4;
                Hint_Prefetch(lVar29,0,0,0);
                if (4 < uVar6) goto LAB_002bec3c;
/* WM - origin: github.com/pengussy */
LAB_002bebb0:
                lVar29 = lVar22 + uVar31;
LAB_002bebb4:
                Hint_Prefetch(lVar29,0,0,0);
              }
              else {
                if (uVar20 == 6) {
                  uVar31 = *(long *)(lVar13 + uVar39) * -0x30e4432340650000;
                  goto LAB_002bebf0;
                }
                uVar32 = (*(int *)(lVar13 + uVar39) * -0x61c8864f ^ (uint)uVar30) >>
                         (ulong)(0x18U - iVar28 & 0x1f);
                uVar31 = (ulong)((uVar32 >> 8) << (ulong)(uVar21 & 0x1f));
                lVar29 = lVar41 + uVar31 * 4;
                Hint_Prefetch(lVar29,0,0,0);
                if (uVar6 < 5) goto LAB_002bebb0;
LAB_002bec3c:
/* donate: donate/README.md - github.com/pengussy */
                Hint_Prefetch(lVar29 + 0x40,0,0,0);
                lVar29 = lVar22 + uVar31;
                Hint_Prefetch(lVar29,0,0,0);
                if (uVar6 != 5) {
                  lVar29 = lVar29 + 0x20;
                  goto LAB_002bebb4;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar39 & 7) * 4) = uVar32;
              uVar39 = uVar39 + 1;
            } while (iVar9 + uVar38 != uVar39);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar19 + uVar14);
        uStack_9c = uVar37;
        if ((uVar10 == 0) || (puVar12 < param_4)) {
LAB_002bee4c:
          uVar38 = uVar10;
          puVar24 = param_4;
        }
        else {
          do {
            uStack_9c = uVar10;
/*  no support for modified copies  */
            uVar38 = uVar37;
            if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uStack_9c)) {
              uVar10 = uStack_9c;
              uStack_9c = uVar38;
              goto LAB_002bee4c;
            }
            puVar24 = (ulong *)((long)param_4 + 4);
            lVar41 = -(ulong)uStack_9c;
            puVar35 = (ulong *)((long)puVar24 + lVar41);
            if (puVar24 < puVar36) {
              if (*puVar35 == *puVar24) {
                lVar22 = 0;
                puVar19 = (ulong *)((long)param_4 + 0xc);
                puVar35 = (ulong *)((long)param_4 + 0xc + lVar41);
                do {
                  if (puVar36 <= puVar19) goto LAB_002bed08;
                  uVar14 = *puVar35;
                  uVar39 = *puVar19;
/* wm:no support for modified copies */
                  lVar22 = lVar22 + 8;
                  puVar19 = puVar19 + 1;
                  puVar35 = puVar35 + 1;
                } while (uVar14 == uVar39);
                uVar39 = uVar39 ^ uVar14;
                uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
                uVar39 = lVar22 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
              }
              else {
                uVar39 = *puVar24 ^ *puVar35;
                uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
                uVar39 = (ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3;
// do not claim this as your own
              }
            }
            else {
              puVar19 = puVar24;
LAB_002bed08:
              if (puVar19 < puVar15) {
                if ((int)*puVar35 == (int)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar35 = (ulong *)((long)puVar35 + 4);
                }
              }
              if (puVar19 < puVar23) {
                if (*(short *)puVar35 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar35 = (ulong *)((long)puVar35 + 2);
                }
              }
              if (puVar19 < puVar2) {
                if ((char)*puVar35 == (char)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 1);
                }
              }
              uVar39 = (long)puVar19 - (long)puVar24;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            }
            if (param_4 <= puVar40) {
              puVar24 = (ulong *)param_2[3];
              uVar14 = *param_4;
              puVar24[1] = param_4[1];
              *puVar24 = uVar14;
              piVar25 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar25 + 1) = 0;
            *piVar25 = 1;
            uVar7 = (undefined2)(uVar39 + 1);
            if (uVar39 + 1 < 0x10000) {
              *(undefined2 *)((long)piVar25 + 6) = uVar7;
              param_2[1] = (long)(piVar25 + 2);
            }
            else {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
              *(undefined2 *)((long)piVar25 + 6) = uVar7;
              param_2[1] = (long)(piVar25 + 2);
            }
            param_4 = (ulong *)((long)param_4 + uVar39 + 4);
            puVar24 = param_4;
            if (uVar38 == 0) break;
            piVar25 = piVar25 + 2;
            uVar37 = uStack_9c;
            uVar10 = uVar38;
          } while (param_4 <= puVar12);
        }
      }
    } while (puVar24 < puVar12);
  }
  uVar20 = uVar4;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  if (uVar4 <= uVar8) {
    uVar20 = 0;
  }
  if (uVar5 <= uVar8) {
    uVar5 = 0;
  }
  if (uStack_9c != 0) {
    uVar20 = uStack_9c;
  }
  if (uStack_9c == 0 || uVar4 <= uVar8) {
    uVar4 = uVar5;
  }
  if (uVar38 != 0) {
    uVar4 = uVar38;
  }
  *param_3 = uVar20;
  param_3[1] = uVar4;
  return (long)puVar2 - (long)param_4;
}

