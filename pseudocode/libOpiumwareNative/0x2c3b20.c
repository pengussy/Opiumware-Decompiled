/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2c3b20:fc3ddd92e0
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002c3b20(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

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
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  undefined8 *puVar34;
  undefined4 uVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  uint uStack_9c;
  ulong uStack_68;
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar30 = puVar2 + -2;
  lVar12 = *(long *)(param_1 + 8);
  uVar40 = *(uint *)(param_1 + 0x18);
  uVar19 = *(uint *)(param_1 + 0x110);
  if (uVar19 < 5) {
    uVar19 = 4;
  }
  if (5 < uVar19) {
    uVar19 = 6;
  }
  uVar6 = *(uint *)(param_1 + 0x10c);
// WM - found on a paste site? it was re-uploaded illegally
  uVar20 = uVar6;
  if (uVar6 < 5) {
    uVar20 = 4;
  }
  if (5 < uVar20) {
    uVar20 = 6;
  }
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar3 = lVar12 + (ulong)uVar40;
  puVar24 = param_4;
  if ((int)param_4 == (int)uVar3) {
    puVar24 = (ulong *)((long)param_4 + 1);
  }
  uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  iVar27 = (int)puVar24 - (int)lVar12;
  uVar41 = *(uint *)(param_1 + 0x2c);
  uVar39 = (ulong)uVar41;
  uVar8 = iVar27 - uVar10;
  if (iVar27 - uVar40 <= uVar10 || *(int *)(param_1 + 0x28) != 0) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    uVar8 = uVar40;
  }
  uVar8 = iVar27 - uVar8;
  uStack_9c = 0;
  if (uVar5 <= uVar8) {
    uStack_9c = uVar5;
  }
  uVar40 = 0;
  if (uVar4 <= uVar8) {
    uVar40 = uVar4;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  iVar9 = (int)puVar30 - (int)(ulong *)(lVar12 + uVar39);
  iVar27 = 8;
  if (iVar9 + 1U < 8) {
    iVar27 = iVar9 + 1;
  }
  iVar9 = 0;
  if ((ulong *)(lVar12 + uVar39) <= puVar30) {
    iVar9 = iVar27;
  }
  uVar13 = (ulong)(iVar9 + uVar41);
  if (uVar41 < iVar9 + uVar41) {
    lVar21 = *(long *)(param_1 + 0x70);
    lVar28 = *(long *)(param_1 + 0x38);
    uVar29 = *(ulong *)(param_1 + 0x60);
    uVar31 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar41 = 0x18 - *(int *)(param_1 + 0x34);
    lVar32 = param_1 + 0x40;
    if (uVar6 < 5) {
// WM - do not claim this as your own
      if (uVar19 == 6) {
        do {
          uVar11 = (*(long *)(lVar12 + uVar39) * -0x30e4432340650000 ^ uVar29) >> (uVar31 & 0x3f);
          uVar33 = (ulong)(((uint)(uVar11 >> 8) & 0xffffff) << (ulong)(uVar20 & 0x1f));
          Hint_Prefetch(lVar21 + uVar33 * 4,0,0,0);
          Hint_Prefetch(lVar28 + uVar33,0,0,0);
          *(int *)(lVar32 + (uVar39 & 7) * 4) = (int)uVar11;
          uVar39 = uVar39 + 1;
        } while (uVar13 != uVar39);
      }
      else if (uVar19 == 5) {
        do {
          uVar11 = (*(long *)(lVar12 + uVar39) * -0x30e4432345000000 ^ uVar29) >> (uVar31 & 0x3f);
          uVar33 = (ulong)(((uint)(uVar11 >> 8) & 0xffffff) << (ulong)(uVar20 & 0x1f));
          Hint_Prefetch(lVar21 + uVar33 * 4,0,0,0);
          Hint_Prefetch(lVar28 + uVar33,0,0,0);
          *(int *)(lVar32 + (uVar39 & 7) * 4) = (int)uVar11;
          uVar39 = uVar39 + 1;
        } while (uVar13 != uVar39);
      }
      else {
        do {
          uVar10 = (*(int *)(lVar12 + uVar39) * -0x61c8864f ^ (uint)uVar29) >>
                   (ulong)(uVar41 & 0x1f);
          uVar31 = (ulong)((uVar10 >> 8) << (ulong)(uVar20 & 0x1f));
          Hint_Prefetch(lVar21 + uVar31 * 4,0,0,0);
          Hint_Prefetch(lVar28 + uVar31,0,0,0);
          *(uint *)(lVar32 + (uVar39 & 7) * 4) = uVar10;
          uVar39 = uVar39 + 1;
        } while (uVar13 != uVar39);
      }
    }
    else {
      do {
        if (uVar19 == 6) {
          uVar11 = *(long *)(lVar12 + uVar39) * -0x30e4432340650000;
LAB_002c3c9c:
// origin: github.com/pengussy
          uVar10 = (uint)((uVar11 ^ uVar29) >> (uVar31 & 0x3f));
        }
        else {
          if (uVar19 == 5) {
            uVar11 = *(long *)(lVar12 + uVar39) * -0x30e4432345000000;
            goto LAB_002c3c9c;
          }
          uVar10 = (*(int *)(lVar12 + uVar39) * -0x61c8864f ^ (uint)uVar29) >>
                   (ulong)(uVar41 & 0x1f);
        }
        uVar11 = (ulong)((uVar10 >> 8) << (ulong)(uVar20 & 0x1f));
        lVar1 = lVar21 + uVar11 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar28 + uVar11;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar6 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar32 + (uVar39 & 7) * 4) = uVar10;
        uVar39 = uVar39 + 1;
      } while (uVar13 != uVar39);
    }
  }
  if (puVar24 < puVar30) {
    puVar38 = (ulong *)((long)puVar2 - 7);
    puVar22 = (ulong *)((long)puVar2 - 3);
    puVar14 = (ulong *)((long)puVar2 - 1);
/* WM - unlicensed copy if this notice is missing */
    puVar36 = puVar2 + -4;
    do {
      uVar39 = 0;
      puVar37 = (ulong *)((long)puVar24 + 1);
      lVar32 = -(ulong)uVar40;
      if ((uVar40 != 0) && (*(int *)((long)puVar37 - (ulong)uVar40) == *(int *)puVar37)) {
        puVar23 = (ulong *)((long)puVar24 + 5);
        puVar16 = (ulong *)((long)puVar23 + lVar32);
        if (puVar23 < puVar38) {
          if (*puVar16 == *puVar23) {
            lVar21 = 0;
            puVar15 = (ulong *)((long)puVar24 + 0xdU);
            puVar16 = (ulong *)((long)((long)puVar24 + 0xdU) + lVar32);
            do {
              if (puVar38 <= puVar15) goto LAB_002c3ec4;
              uVar13 = *puVar16;
              uVar39 = *puVar15;
              lVar21 = lVar21 + 8;
              puVar15 = puVar15 + 1;
              puVar16 = puVar16 + 1;
            } while (uVar13 == uVar39);
            uVar39 = uVar39 ^ uVar13;
            uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
            uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
            uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
            uVar39 = lVar21 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          }
          else {
            uVar39 = *puVar23 ^ *puVar16;
            uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
            uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
            uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
            uVar39 = (ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3;
          }
        }
        else {
          puVar15 = puVar23;
LAB_002c3ec4:
          if (puVar15 < puVar22) {
            if ((int)*puVar16 == (int)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar16 = (ulong *)((long)puVar16 + 4);
            }
          }
          if (puVar15 < puVar14) {
            if (*(short *)puVar16 == *(short *)puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar16 = (ulong *)((long)puVar16 + 2);
            }
          }
          if (puVar15 < puVar2) {
            if ((char)*puVar16 == (char)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 1);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
            }
          }
          uVar39 = (long)puVar15 - (long)puVar23;
        }
        uVar39 = uVar39 + 4;
      }
      uStack_68 = 999999999;
      if (uVar19 == 6) {
        if (uVar20 == 6) {
          uVar29 = func_0x002d221c(param_1,puVar24,puVar2,&uStack_68);
          uVar13 = uVar29;
          if (uVar29 <= uVar39) {
            uVar13 = uVar39;
          }
          goto joined_r0x002c40a0;
        }
        if (uVar20 == 5) {
          uVar29 = func_0x002d1ca0(param_1,puVar24,puVar2);
          uVar13 = uVar29;
          if (uVar29 <= uVar39) {
            uVar13 = uVar39;
          }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          goto joined_r0x002c40a0;
        }
        uVar29 = func_0x002d173c(param_1,puVar24,puVar2);
        uVar13 = uVar29;
        if (uVar29 <= uVar39) {
          uVar13 = uVar39;
        }
joined_r0x002c4084:
        if (uVar13 < 4) goto LAB_002c3e0c;
LAB_002c40c0:
        puVar23 = puVar24;
        if (uVar29 <= uVar39) {
          uStack_68 = 1;
          puVar23 = puVar37;
        }
joined_r0x002c40e4:
        do {
          puVar16 = puVar23;
          puVar37 = puVar24;
          uVar39 = uVar13;
          uVar29 = uStack_68;
          if (puVar30 <= puVar37) break;
// WM - chat: discord.gg/sdkhDjTex
          puVar24 = (ulong *)((long)puVar37 + 1);
          if (uVar29 != 0) {
            if (uVar40 != 0) {
              if (*(int *)puVar24 == *(int *)((long)puVar24 + lVar32)) {
                puVar23 = (ulong *)((long)puVar37 + 5);
                puVar15 = (ulong *)((long)puVar23 + lVar32);
                if (puVar23 < puVar38) {
                  if (*puVar15 == *puVar23) {
                    puVar18 = (ulong *)((long)puVar37 + 0xd);
                    puVar15 = (ulong *)((long)puVar37 + 0xd + lVar32);
                    do {
                      if (puVar38 <= puVar18) goto LAB_002c4258;
                      uVar31 = *puVar15;
                      puVar17 = puVar18 + 1;
                      uVar13 = *puVar18;
                      puVar18 = puVar17;
                      puVar15 = puVar15 + 1;
                    } while (uVar31 == uVar13);
                    uVar13 = uVar13 ^ uVar31;
                    uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1
                    ;
                    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2
                    ;
                    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar13 & 0xffff0000ffff) << 0x10;
                    uVar13 = (long)puVar17 +
                             ((((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) - 8) -
                             (long)puVar23);
                    goto joined_r0x002c42f8;
// WM - origin: github.com/pengussy
                  }
                  uVar13 = *puVar23 ^ *puVar15;
                  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
                }
                else {
                  puVar18 = puVar23;
LAB_002c4258:
                  if (puVar18 < puVar22) {
                    if ((int)*puVar15 == (int)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 4);
                      puVar15 = (ulong *)((long)puVar15 + 4);
                    }
                  }
                  if (puVar18 < puVar14) {
                    if ((short)*puVar15 == (short)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 2);
                      puVar15 = (ulong *)((long)puVar15 + 2);
/* WM - do not claim this as your own */
                    }
                  }
                  if (puVar18 < puVar2) {
                    if ((char)*puVar15 == (char)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 1);
                    }
                    uVar13 = (long)puVar18 - (long)puVar23;
                  }
                  else {
                    uVar13 = (long)puVar18 - (long)puVar23;
                  }
joined_r0x002c42f8:
                  if (0xfffffffffffffffb < uVar13) goto LAB_002c433c;
                }
                if ((int)uVar39 * 3 + (int)LZCOUNT((int)uVar29) + -0x1e < (int)(uVar13 + 4) * 3) {
                  uVar29 = 1;
                  uVar39 = uVar13 + 4;
                  puVar16 = puVar24;
                }
              }
            }
          }
LAB_002c433c:
          uStack_68 = 999999999;
          uVar35 = (undefined4)uVar29;
          iVar27 = (int)uVar39;
          if (uVar19 == 6) {
            if (uVar20 == 6) {
              uVar13 = func_0x002d221c(param_1,puVar24,puVar2,&uStack_68);
/* wm:found on a paste site? it was re-uploaded illegally */
            }
            else if (uVar20 == 5) {
              uVar13 = func_0x002d1ca0(param_1,puVar24,puVar2);
            }
            else {
              uVar13 = func_0x002d173c(param_1,puVar24,puVar2);
            }
          }
          else if (uVar19 == 5) {
            if (uVar20 == 6) {
              uVar13 = func_0x002d11a4(param_1,puVar24,puVar2);
            }
            else if (uVar20 == 5) {
              uVar13 = func_0x002d0c28(param_1,puVar24,puVar2);
            }
            else {
              uVar13 = func_0x002d06c4(param_1,puVar24,puVar2);
            }
          }
          else if (uVar20 == 6) {
            uVar13 = func_0x002d0130(param_1,puVar24,puVar2);
          }
/* if you paid for this, you were scammed - github.com/pengussy */
          else if (uVar20 == 5) {
            uVar13 = func_0x002cfbb8(param_1,puVar24,puVar2);
          }
          else {
            uVar13 = func_0x002cf658(param_1,puVar24,puVar2);
          }
          if (3 < uVar13) {
            puVar23 = puVar24;
            if ((int)LZCOUNT(uVar35) + iVar27 * 4 + -0x1b <
                (int)LZCOUNT((int)uStack_68) + (int)uVar13 * 4 + -0x1f) goto joined_r0x002c40e4;
          }
          if (puVar30 <= puVar24) break;
          puVar24 = (ulong *)((long)puVar37 + 2);
          if (uVar29 != 0) {
            if (uVar40 != 0) {
              if (*(int *)puVar24 == *(int *)((long)puVar24 + lVar32)) {
                puVar23 = (ulong *)((long)puVar37 + 6);
                puVar15 = (ulong *)((long)puVar23 + lVar32);
                if (puVar23 < puVar38) {
                  if (*puVar15 == *puVar23) {
                    puVar18 = (ulong *)((long)puVar37 + 0xe);
                    puVar15 = (ulong *)((long)puVar37 + 0xe + lVar32);
                    do {
                      if (puVar38 <= puVar18) goto LAB_002c4504;
// WM - watermarked copy - do not remove
                      uVar31 = *puVar15;
                      puVar37 = puVar18 + 1;
                      uVar13 = *puVar18;
                      puVar18 = puVar37;
                      puVar15 = puVar15 + 1;
                    } while (uVar31 == uVar13);
                    uVar13 = uVar13 ^ uVar31;
                    uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1
                    ;
                    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2
                    ;
                    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar13 & 0xffff0000ffff) << 0x10;
                    uVar13 = (long)puVar37 +
                             ((((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) - 8) -
                             (long)puVar23);
                    goto joined_r0x002c45a4;
                  }
                  uVar13 = *puVar23 ^ *puVar15;
                  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) + 4;
                  if ((int)uVar13 * 4 <= (int)LZCOUNT(uVar35) + iVar27 * 4 + -0x1e)
                  goto LAB_002c45cc;
LAB_002c45c0:
                  uVar29 = 1;
                  uVar39 = uVar13;
                  puVar16 = puVar24;
                }
                else {
                  puVar18 = puVar23;
// WM - thanks for reading - discord.gg/sdkhDjTex
LAB_002c4504:
                  if (puVar18 < puVar22) {
                    if ((int)*puVar15 == (int)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 4);
                      puVar15 = (ulong *)((long)puVar15 + 4);
                    }
                  }
                  if (puVar18 < puVar14) {
                    if (*(short *)puVar15 == *(short *)puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 2);
                      puVar15 = (ulong *)((long)puVar15 + 2);
                    }
                  }
                  if (puVar18 < puVar2) {
                    if (*(char *)puVar15 == *(char *)puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 1);
                    }
                    uVar13 = (long)puVar18 - (long)puVar23;
                  }
                  else {
                    uVar13 = (long)puVar18 - (long)puVar23;
                  }
joined_r0x002c45a4:
                  if (uVar13 < 0xfffffffffffffffc) {
                    uVar13 = uVar13 + 4;
                    if ((int)LZCOUNT(uVar35) + iVar27 * 4 + -0x1e < (int)uVar13 * 4)
                    goto LAB_002c45c0;
                  }
                }
              }
            }
          }
LAB_002c45cc:
          uStack_68 = 999999999;
          if (uVar19 == 6) {
            if (uVar20 == 6) {
/* WM - watermarked copy - do not remove */
              uVar13 = func_0x002d221c(param_1,puVar24,puVar2,&uStack_68);
            }
            else if (uVar20 == 5) {
              uVar13 = func_0x002d1ca0(param_1,puVar24,puVar2);
            }
            else {
              uVar13 = func_0x002d173c(param_1,puVar24,puVar2);
            }
          }
          else if (uVar19 == 5) {
            if (uVar20 == 6) {
              uVar13 = func_0x002d11a4(param_1,puVar24,puVar2);
            }
            else if (uVar20 == 5) {
              uVar13 = func_0x002d0c28(param_1,puVar24,puVar2);
            }
            else {
              uVar13 = func_0x002d06c4(param_1,puVar24,puVar2);
            }
          }
          else if (uVar20 == 6) {
            uVar13 = func_0x002d0130(param_1,puVar24,puVar2);
          }
          else if (uVar20 == 5) {
            uVar13 = func_0x002cfbb8(param_1,puVar24,puVar2);
          }
          else {
            uVar13 = func_0x002cf658(param_1,puVar24,puVar2);
/* wm:no support for modified copies */
          }
          if (uVar13 < 4) break;
          puVar23 = puVar24;
        } while ((int)LZCOUNT((int)uVar29) + (int)uVar39 * 4 + -0x18 <
                 (int)LZCOUNT((int)uStack_68) + (int)uVar13 * 4 + -0x1f);
        uVar35 = (undefined4)uVar29;
        if (uVar29 < 4) {
          uVar13 = (long)puVar16 - (long)param_4;
          puVar24 = (ulong *)param_2[3];
          uVar41 = uVar40;
          if (puVar16 <= puVar36) goto LAB_002c47ec;
LAB_002c4754:
          puVar37 = puVar24;
          if (param_4 <= puVar36) {
            puVar37 = (ulong *)((long)puVar24 + ((long)puVar36 - (long)param_4));
            uVar29 = *param_4;
            puVar23 = puVar24 + 2;
            puVar24[1] = param_4[1];
            *puVar24 = uVar29;
            if (0x10 < (ulong)((long)puVar36 - (long)param_4)) {
              do {
                uVar29 = param_4[2];
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                puVar23[1] = param_4[3];
                *puVar23 = uVar29;
                uVar29 = param_4[4];
                puVar23[3] = param_4[5];
                puVar23[2] = uVar29;
                puVar23 = puVar23 + 4;
                param_4 = param_4 + 4;
              } while (puVar23 < puVar37);
            }
            param_4 = puVar36;
          }
          if (param_4 < puVar16) {
            uVar29 = (long)puVar16 - (long)param_4;
            if ((7 < uVar29) && (0x3f < (ulong)((long)puVar37 - (long)param_4))) {
              if (uVar29 < 0x40) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar29 & 0xffffffffffffffc0;
                puVar24 = puVar37 + 4;
                puVar23 = param_4 + 4;
                uVar31 = uVar11;
                do {
                  uVar33 = puVar23[-4];
                  uVar43 = puVar23[-1];
                  uVar42 = puVar23[-2];
                  uVar45 = puVar23[1];
                  uVar44 = *puVar23;
/* wm:more drops soon - github.com/pengussy */
                  uVar47 = puVar23[3];
                  uVar46 = puVar23[2];
                  puVar24[-3] = puVar23[-3];
                  puVar24[-4] = uVar33;
                  puVar24[-1] = uVar43;
                  puVar24[-2] = uVar42;
                  puVar24[1] = uVar45;
                  *puVar24 = uVar44;
                  puVar24[3] = uVar47;
                  puVar24[2] = uVar46;
                  uVar31 = uVar31 - 0x40;
                  puVar24 = puVar24 + 8;
                  puVar23 = puVar23 + 8;
                } while (uVar31 != 0);
                if (uVar29 == uVar11) goto LAB_002c4938;
                if ((uVar29 & 0x38) == 0) {
                  puVar37 = (ulong *)((long)puVar37 + uVar11);
                  param_4 = (ulong *)((long)param_4 + uVar11);
                  goto LAB_002c4928;
                }
              }
              uVar31 = uVar29 & 0xfffffffffffffff8;
              lVar32 = uVar11 - uVar31;
              puVar26 = (undefined8 *)((long)puVar37 + uVar11);
              puVar34 = (undefined8 *)((long)param_4 + uVar11);
              do {
                *puVar26 = *puVar34;
                lVar32 = lVar32 + 8;
                puVar26 = puVar26 + 1;
                puVar34 = puVar34 + 1;
              } while (lVar32 != 0);
              puVar37 = (ulong *)((long)puVar37 + uVar31);
              param_4 = (ulong *)((long)param_4 + uVar31);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              if (uVar29 == uVar31) goto LAB_002c4938;
            }
LAB_002c4928:
            do {
              puVar24 = (ulong *)((long)param_4 + 1);
              *(char *)puVar37 = (char)*param_4;
              puVar37 = (ulong *)((long)puVar37 + 1);
              param_4 = puVar24;
            } while (puVar24 != puVar16);
          }
LAB_002c4938:
          param_2[3] = param_2[3] + uVar13;
          puVar25 = (undefined4 *)param_2[1];
          if (0xffff < uVar13) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)puVar25 - *param_2) >> 3);
            *(short *)(puVar25 + 1) = (short)uVar13;
            *puVar25 = uVar35;
            goto joined_r0x002c4834;
          }
          *(short *)(puVar25 + 1) = (short)uVar13;
          *puVar25 = uVar35;
          uVar13 = uVar39 - 3;
          if (0xffff < uVar13) goto LAB_002c4838;
LAB_002c4964:
          *(short *)((long)puVar25 + 6) = (short)uVar13;
          puVar25 = puVar25 + 2;
          param_2[1] = (long)puVar25;
          iVar27 = *(int *)(param_1 + 300);
        }
/* WM - chat: discord.gg/sdkhDjTex */
        else {
          if ((param_4 < puVar16) && (uVar3 < (long)puVar16 + (3 - uVar29))) {
            puVar24 = puVar16;
            while (puVar16 = (ulong *)((long)puVar24 + -1),
                  *(char *)puVar16 == *(char *)((long)puVar24 + (2 - uVar29))) {
              uVar39 = uVar39 + 1;
              if ((puVar16 <= param_4) ||
                 (uVar13 = (long)puVar24 + (2 - uVar29), puVar24 = puVar16, uVar13 <= uVar3))
              goto LAB_002c47d0;
            }
            puVar16 = puVar24;
          }
LAB_002c47d0:
          uVar13 = (long)puVar16 - (long)param_4;
          puVar24 = (ulong *)param_2[3];
          uVar41 = uVar35 - 3;
          uStack_9c = uVar40;
          if (puVar36 < puVar16) goto LAB_002c4754;
LAB_002c47ec:
          uVar29 = *param_4;
          puVar24[1] = param_4[1];
// WM - proprietary - see LICENSE - do not sell
          *puVar24 = uVar29;
          if (0x10 < uVar13) {
            lVar32 = param_2[3];
            uVar29 = param_4[2];
            *(ulong *)(lVar32 + 0x18) = param_4[3];
            *(ulong *)(lVar32 + 0x10) = uVar29;
            if (uVar13 - 0x10 < 0x11) goto LAB_002c4814;
            puVar24 = (ulong *)(lVar32 + 0x20);
            puVar37 = param_4 + 6;
            do {
              uVar29 = puVar37[-2];
              puVar24[1] = puVar37[-1];
              *puVar24 = uVar29;
              uVar29 = *puVar37;
              puVar24[3] = puVar37[1];
              puVar24[2] = uVar29;
              puVar24 = puVar24 + 4;
              puVar37 = puVar37 + 4;
            } while (puVar24 < (ulong *)(lVar32 + uVar13));
            goto LAB_002c4938;
          }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
LAB_002c4814:
          param_2[3] = param_2[3] + uVar13;
          puVar25 = (undefined4 *)param_2[1];
          *(short *)(puVar25 + 1) = (short)uVar13;
          *puVar25 = uVar35;
joined_r0x002c4834:
          uVar13 = uVar39 - 3;
          if (uVar13 < 0x10000) goto LAB_002c4964;
LAB_002c4838:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)puVar25 - *param_2) >> 3);
          *(short *)((long)puVar25 + 6) = (short)uVar13;
          puVar25 = puVar25 + 2;
          param_2[1] = (long)puVar25;
          iVar27 = *(int *)(param_1 + 300);
        }
        if (iVar27 != 0) {
          uVar40 = *(uint *)(param_1 + 0x2c);
          uVar13 = (ulong)uVar40;
          iVar9 = (int)puVar30 - (int)(ulong *)(lVar12 + uVar13);
          iVar27 = 8;
// donate: donate/README.md
          if (iVar9 + 1U < 8) {
            iVar27 = iVar9 + 1;
          }
          iVar9 = 0;
          if ((ulong *)(lVar12 + uVar13) <= puVar30) {
            iVar9 = iVar27;
          }
          if (uVar40 < iVar9 + uVar40) {
            lVar32 = *(long *)(param_1 + 0x70);
            lVar21 = *(long *)(param_1 + 0x38);
            iVar27 = *(int *)(param_1 + 0x34);
            uVar29 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar19 == 5) {
                uVar31 = *(long *)(lVar12 + uVar13) * -0x30e4432345000000;
LAB_002c4a10:
                uVar31 = (uVar31 ^ uVar29) >> ((ulong)(0x38 - iVar27) & 0x3f);
                uVar10 = (uint)uVar31;
                uVar31 = (ulong)(((uint)(uVar31 >> 8) & 0xffffff) << (ulong)(uVar20 & 0x1f));
                lVar28 = lVar32 + uVar31 * 4;
                Hint_Prefetch(lVar28,0,0,0);
                if (4 < uVar6) goto LAB_002c4a5c;
LAB_002c49d0:
                lVar28 = lVar21 + uVar31;
LAB_002c49d4:
                Hint_Prefetch(lVar28,0,0,0);
              }
/*  if you paid for this, you were scammed  */
              else {
                if (uVar19 == 6) {
                  uVar31 = *(long *)(lVar12 + uVar13) * -0x30e4432340650000;
                  goto LAB_002c4a10;
                }
                uVar10 = (*(int *)(lVar12 + uVar13) * -0x61c8864f ^ (uint)uVar29) >>
                         (ulong)(0x18U - iVar27 & 0x1f);
                uVar31 = (ulong)((uVar10 >> 8) << (ulong)(uVar20 & 0x1f));
                lVar28 = lVar32 + uVar31 * 4;
                Hint_Prefetch(lVar28,0,0,0);
                if (uVar6 < 5) goto LAB_002c49d0;
LAB_002c4a5c:
                Hint_Prefetch(lVar28 + 0x40,0,0,0);
                lVar28 = lVar21 + uVar31;
                Hint_Prefetch(lVar28,0,0,0);
                if (uVar6 != 5) {
                  lVar28 = lVar28 + 0x20;
                  goto LAB_002c49d4;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar13 & 7) * 4) = uVar10;
              uVar13 = uVar13 + 1;
            } while (iVar9 + uVar40 != uVar13);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar16 + uVar39);
        uVar10 = uStack_9c;
        uVar40 = uVar41;
        if ((uStack_9c == 0) || (puVar30 < param_4)) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
LAB_002c4c78:
          uStack_9c = uVar10;
          puVar24 = param_4;
        }
        else {
          do {
            uVar40 = uStack_9c;
            uStack_9c = uVar41;
            if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar40)) {
              uVar10 = uVar40;
              uVar40 = uStack_9c;
              goto LAB_002c4c78;
            }
            puVar24 = (ulong *)((long)param_4 + 4);
            lVar32 = -(ulong)uVar40;
            puVar37 = (ulong *)((long)puVar24 + lVar32);
            if (puVar24 < puVar38) {
              if (*puVar37 == *puVar24) {
                lVar21 = 0;
                puVar23 = (ulong *)((long)param_4 + 0xc);
                puVar37 = (ulong *)((long)param_4 + 0xc + lVar32);
                do {
// do not claim this as your own
                  if (puVar38 <= puVar23) goto LAB_002c4b2c;
                  uVar13 = *puVar37;
                  uVar39 = *puVar23;
                  lVar21 = lVar21 + 8;
                  puVar23 = puVar23 + 1;
                  puVar37 = puVar37 + 1;
                } while (uVar13 == uVar39);
                uVar39 = uVar39 ^ uVar13;
                uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
                uVar39 = lVar21 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
              }
              else {
                uVar39 = *puVar24 ^ *puVar37;
                uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
                uVar39 = (ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3;
/* donate: donate/README.md */
              }
            }
            else {
              puVar23 = puVar24;
LAB_002c4b2c:
              if (puVar23 < puVar22) {
                if ((int)*puVar37 == (int)*puVar23) {
                  puVar23 = (ulong *)((long)puVar23 + 4);
                  puVar37 = (ulong *)((long)puVar37 + 4);
                }
              }
              if (puVar23 < puVar14) {
                if (*(short *)puVar37 == *(short *)puVar23) {
                  puVar23 = (ulong *)((long)puVar23 + 2);
                  puVar37 = (ulong *)((long)puVar37 + 2);
                }
              }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              if (puVar23 < puVar2) {
                if ((char)*puVar37 == (char)*puVar23) {
                  puVar23 = (ulong *)((long)puVar23 + 1);
                }
              }
              uVar39 = (long)puVar23 - (long)puVar24;
            }
            if (param_4 <= puVar36) {
              puVar24 = (ulong *)param_2[3];
              uVar13 = *param_4;
              puVar24[1] = param_4[1];
              *puVar24 = uVar13;
              puVar25 = (undefined4 *)param_2[1];
            }
            *(undefined2 *)(puVar25 + 1) = 0;
            *puVar25 = 1;
            uVar7 = (undefined2)(uVar39 + 1);
            if (uVar39 + 1 < 0x10000) {
              *(undefined2 *)((long)puVar25 + 6) = uVar7;
              param_2[1] = (long)(puVar25 + 2);
            }
            else {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)puVar25 - *param_2) >> 3);
              *(undefined2 *)((long)puVar25 + 6) = uVar7;
              param_2[1] = (long)(puVar25 + 2);
            }
            param_4 = (ulong *)((long)param_4 + uVar39 + 4);
            puVar24 = param_4;
            if (uStack_9c == 0) break;
            puVar25 = puVar25 + 2;
/*  no support for modified copies  */
            uVar41 = uVar40;
          } while (param_4 <= puVar30);
        }
      }
      else {
        if (uVar19 == 5) {
          if (uVar20 == 6) {
            uVar29 = func_0x002d11a4(param_1,puVar24,puVar2);
            uVar13 = uVar29;
            if (uVar29 <= uVar39) {
              uVar13 = uVar39;
            }
          }
          else {
            if (uVar20 != 5) {
              uVar29 = func_0x002d06c4(param_1,puVar24,puVar2);
              uVar13 = uVar29;
              if (uVar29 <= uVar39) {
                uVar13 = uVar39;
              }
              goto joined_r0x002c4084;
            }
            uVar29 = func_0x002d0c28(param_1,puVar24,puVar2);
            uVar13 = uVar29;
            if (uVar29 <= uVar39) {
// WM - keep the notice, keep the source honest
              uVar13 = uVar39;
            }
          }
        }
        else if (uVar20 == 6) {
          uVar29 = func_0x002d0130(param_1,puVar24,puVar2);
          uVar13 = uVar29;
          if (uVar29 <= uVar39) {
            uVar13 = uVar39;
          }
        }
        else if (uVar20 == 5) {
          uVar29 = func_0x002cfbb8(param_1,puVar24,puVar2);
          uVar13 = uVar29;
          if (uVar29 <= uVar39) {
            uVar13 = uVar39;
          }
        }
        else {
          uVar29 = func_0x002cf658(param_1,puVar24,puVar2);
          uVar13 = uVar29;
          if (uVar29 <= uVar39) {
            uVar13 = uVar39;
          }
        }
// WM - more drops soon - github.com/pengussy
joined_r0x002c40a0:
        if (3 < uVar13) goto LAB_002c40c0;
LAB_002c3e0c:
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar24 - (long)param_4));
        puVar24 = (ulong *)((long)puVar24 + ((ulong)((long)puVar24 - (long)param_4) >> 8) + 1);
      }
    } while (puVar24 < puVar30);
  }
  uVar19 = uVar4;
  if (uVar4 <= uVar8) {
    uVar19 = 0;
  }
  if (uVar5 <= uVar8) {
    uVar5 = 0;
  }
  if (uVar40 != 0) {
    uVar19 = uVar40;
  }
  if (uVar40 == 0 || uVar4 <= uVar8) {
    uVar4 = uVar5;
  }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  if (uStack_9c != 0) {
    uVar4 = uStack_9c;
  }
  *param_3 = uVar19;
  param_3[1] = uVar4;
  return (long)puVar2 - (long)param_4;
}

