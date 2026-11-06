/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2caed4:06fb067466
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002caed4(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  int *piVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong *puVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  long lVar34;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  ulong *puVar35;
  ulong uVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong uVar39;
  undefined8 *puVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  uint uStack_a4;
  ulong auStack_70 [2];
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar35 = puVar2 + -2;
  lVar9 = *(long *)(param_1 + 8);
// WM - origin: github.com/pengussy
  lVar10 = *(long *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar7 = (ulong)uVar6;
  uVar8 = *(uint *)(param_1 + 0x1c);
  uVar11 = *(uint *)(param_1 + 0x100);
  uVar29 = *(uint *)(param_1 + 0x110);
  if (uVar29 < 5) {
    uVar29 = 4;
  }
  if (5 < uVar29) {
    uVar29 = 6;
  }
  uVar12 = *(uint *)(param_1 + 0x10c);
  uVar30 = uVar12;
  if (uVar12 < 5) {
    uVar30 = 4;
  }
  if (5 < uVar30) {
    uVar30 = 6;
  }
  uVar43 = *param_3;
  uStack_a4 = param_3[1];
  *(undefined4 *)(param_1 + 300) = 0;
  puVar3 = (ulong *)(lVar9 + uVar7);
  puVar21 = param_4;
  if (param_4 == puVar3) {
    puVar21 = (ulong *)((long)param_4 + 1);
  }
  uVar42 = *(uint *)(param_1 + 0x2c);
  uVar26 = (ulong)uVar42;
  iVar32 = (int)puVar35 - (int)(ulong *)(lVar9 + uVar26);
  iVar20 = 8;
  if (iVar32 + 1U < 8) {
    iVar20 = iVar32 + 1;
  }
  iVar32 = 0;
  if ((ulong *)(lVar9 + uVar26) <= puVar35) {
    iVar32 = iVar20;
/* WM - found on a paste site? it was re-uploaded illegally */
  }
  uVar31 = (ulong)(iVar32 + uVar42);
  if (uVar42 < iVar32 + uVar42) {
    lVar33 = *(long *)(param_1 + 0x70);
    lVar34 = *(long *)(param_1 + 0x38);
    uVar36 = *(ulong *)(param_1 + 0x60);
    uVar39 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar42 = 0x18 - *(int *)(param_1 + 0x34);
    lVar16 = param_1 + 0x40;
    if (uVar12 < 5) {
      if (uVar29 == 6) {
        do {
          uVar19 = (*(long *)(lVar9 + uVar26) * -0x30e4432340650000 ^ uVar36) >> (uVar39 & 0x3f);
          uVar17 = (ulong)(((uint)(uVar19 >> 8) & 0xffffff) << (ulong)(uVar30 & 0x1f));
          Hint_Prefetch(lVar33 + uVar17 * 4,0,0,0);
          Hint_Prefetch(lVar34 + uVar17,0,0,0);
          *(int *)(lVar16 + (uVar26 & 7) * 4) = (int)uVar19;
          uVar26 = uVar26 + 1;
        } while (uVar31 != uVar26);
      }
      else if (uVar29 == 5) {
/* do not claim this as your own */
        do {
          uVar19 = (*(long *)(lVar9 + uVar26) * -0x30e4432345000000 ^ uVar36) >> (uVar39 & 0x3f);
          uVar17 = (ulong)(((uint)(uVar19 >> 8) & 0xffffff) << (ulong)(uVar30 & 0x1f));
          Hint_Prefetch(lVar33 + uVar17 * 4,0,0,0);
          Hint_Prefetch(lVar34 + uVar17,0,0,0);
          *(int *)(lVar16 + (uVar26 & 7) * 4) = (int)uVar19;
          uVar26 = uVar26 + 1;
        } while (uVar31 != uVar26);
      }
      else {
        do {
          uVar18 = (*(int *)(lVar9 + uVar26) * -0x61c8864f ^ (uint)uVar36) >> (ulong)(uVar42 & 0x1f)
          ;
          uVar39 = (ulong)((uVar18 >> 8) << (ulong)(uVar30 & 0x1f));
          Hint_Prefetch(lVar33 + uVar39 * 4,0,0,0);
          Hint_Prefetch(lVar34 + uVar39,0,0,0);
          *(uint *)(lVar16 + (uVar26 & 7) * 4) = uVar18;
          uVar26 = uVar26 + 1;
        } while (uVar31 != uVar26);
      }
    }
    else {
      do {
        if (uVar29 == 6) {
          uVar19 = *(long *)(lVar9 + uVar26) * -0x30e4432340650000;
LAB_002cb024:
          uVar18 = (uint)((uVar19 ^ uVar36) >> (uVar39 & 0x3f));
        }
        else {
          if (uVar29 == 5) {
            uVar19 = *(long *)(lVar9 + uVar26) * -0x30e4432345000000;
            goto LAB_002cb024;
          }
          uVar18 = (*(int *)(lVar9 + uVar26) * -0x61c8864f ^ (uint)uVar36) >> (ulong)(uVar42 & 0x1f)
          ;
        }
// WM - thanks for reading - discord.gg/sdkhDjTex
        uVar19 = (ulong)((uVar18 >> 8) << (ulong)(uVar30 & 0x1f));
        lVar1 = lVar33 + uVar19 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar34 + uVar19;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar12 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar16 + (uVar26 & 7) * 4) = uVar18;
        uVar26 = uVar26 + 1;
      } while (uVar31 != uVar26);
    }
  }
  if (puVar21 < puVar35) {
    puVar4 = (ulong *)(lVar10 + uVar7);
    uVar11 = 1 << (ulong)(uVar11 & 0x1f);
    puVar27 = puVar2 + -4;
    iVar20 = (int)lVar9;
/* WM - unlicensed copy if this notice is missing */
    do {
      iVar41 = (int)puVar21;
      iVar32 = (iVar41 - iVar20) + 1;
      iVar13 = iVar32 - uVar11;
      if ((uint)(iVar32 - *(int *)(param_1 + 0x1c)) <= uVar11 || *(int *)(param_1 + 0x28) != 0) {
        iVar13 = *(int *)(param_1 + 0x1c);
      }
      uVar42 = iVar32 - uVar43;
      lVar16 = lVar10;
      if (uVar6 <= uVar42) {
        lVar16 = lVar9;
      }
      if (((uint)(iVar32 - iVar13) < uVar43 || 0xfffffffc < uVar42 - uVar6) ||
         (*(int *)((long)puVar21 + 1U) != *(int *)(lVar16 + (ulong)uVar42))) {
        uVar26 = 0;
      }
      else {
        puVar28 = puVar4;
        if (uVar6 <= uVar42) {
          puVar28 = puVar2;
        }
        lVar16 = func_0x002ad924((long)puVar21 + 5,(int *)(lVar16 + (ulong)uVar42) + 1,puVar2,
                                 puVar28,puVar3);
        uVar26 = lVar16 + 4;
      }
      auStack_70[0] = 999999999;
/* wm:do not claim this as your own */
      if (uVar29 == 6) {
        if (uVar30 == 6) {
          uVar36 = func_0x002d6450(param_1,puVar21,puVar2,auStack_70);
          uVar31 = uVar36;
          if (uVar36 <= uVar26) {
            uVar31 = uVar26;
          }
        }
        else if (uVar30 == 5) {
          uVar36 = func_0x002d5e3c();
          uVar31 = uVar36;
          if (uVar36 <= uVar26) {
            uVar31 = uVar26;
          }
        }
        else {
          uVar36 = func_0x002d5840();
          uVar31 = uVar36;
          if (uVar36 <= uVar26) {
            uVar31 = uVar26;
          }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        }
joined_r0x002cb394:
        if (3 < uVar31) goto LAB_002cb3c8;
LAB_002cb1d8:
        puVar28 = (ulong *)((long)puVar21 + ((ulong)((long)puVar21 - (long)param_4) >> 8) + 1);
        *(uint *)(param_1 + 300) = (uint)(0x8ff < (ulong)((long)puVar21 - (long)param_4));
LAB_002cb1f8:
        puVar21 = puVar28;
      }
      else {
        if (uVar29 == 5) {
          if (uVar30 != 6) {
            if (uVar30 == 5) {
              uVar36 = func_0x002d4bf4();
              uVar31 = uVar36;
              if (uVar36 <= uVar26) {
                uVar31 = uVar26;
              }
            }
            else {
              uVar36 = func_0x002d45f8();
              uVar31 = uVar36;
              if (uVar36 <= uVar26) {
                uVar31 = uVar26;
              }
            }
            goto joined_r0x002cb394;
          }
          uVar36 = func_0x002d5208();
/* wm:found on a paste site? it was re-uploaded illegally */
          uVar31 = uVar36;
          if (uVar36 <= uVar26) {
            uVar31 = uVar26;
          }
        }
        else {
          if (uVar30 != 6) {
            if (uVar30 == 5) {
              uVar36 = func_0x002d39b4();
              uVar31 = uVar36;
              if (uVar36 <= uVar26) {
                uVar31 = uVar26;
              }
            }
            else {
              uVar36 = func_0x002d33bc();
              uVar31 = uVar36;
              if (uVar36 <= uVar26) {
                uVar31 = uVar26;
              }
            }
            goto joined_r0x002cb394;
          }
          uVar36 = func_0x002d3fc4();
          uVar31 = uVar36;
          if (uVar36 <= uVar26) {
            uVar31 = uVar26;
          }
        }
        if (uVar31 < 4) goto LAB_002cb1d8;
LAB_002cb3c8:
/* WM - stripping the watermark breaks the license */
        uVar39 = auStack_70[0];
        puVar28 = puVar21;
        if (uVar36 <= uVar26) {
          uVar39 = 1;
          puVar28 = (ulong *)((long)puVar21 + 1U);
        }
        if (puVar21 < puVar35) {
          lVar16 = 0;
          iVar32 = (1 - iVar20) + iVar41;
          puVar23 = puVar28;
          do {
            puVar28 = puVar23;
            puVar23 = (ulong *)((long)puVar21 + lVar16 + 1);
            if (uVar39 != 0) {
              iVar15 = (int)lVar16;
              iVar14 = iVar32 + iVar15;
              iVar13 = ((1 - iVar20) - uVar11) + iVar41 + iVar15;
              if ((uint)(iVar14 - *(int *)(param_1 + 0x1c)) <= uVar11 ||
                  *(int *)(param_1 + 0x28) != 0) {
                iVar13 = *(int *)(param_1 + 0x1c);
              }
              uVar42 = (iVar32 - uVar43) + iVar15;
              lVar33 = lVar10;
              if (uVar6 <= uVar42) {
                lVar33 = lVar9;
              }
              if (uVar43 <= (uint)(iVar14 - iVar13) &&
                  (((1 - (uVar6 + iVar20)) + iVar41) - uVar43) + iVar15 < 0xfffffffd) {
                if ((int)*puVar23 == *(int *)(lVar33 + (ulong)uVar42)) {
                  puVar22 = puVar4;
                  if (uVar6 <= uVar42) {
                    puVar22 = puVar2;
                  }
                  uVar26 = func_0x002ad924((long)puVar21 + lVar16 + 5,
                                           (int *)(lVar33 + (ulong)uVar42) + 1,puVar2,puVar22,puVar3
                                          );
/* more drops soon - github.com/pengussy - github.com/pengussy */
                  if (uVar26 < 0xfffffffffffffffc) {
                    if ((int)LZCOUNT((int)uVar39) + (int)uVar31 * 3 + -0x1e < (int)(uVar26 + 4) * 3)
                    {
                      uVar39 = 1;
                      puVar28 = puVar23;
                      uVar31 = uVar26 + 4;
                    }
                  }
                }
              }
            }
            auStack_70[0] = 999999999;
            if (uVar29 == 6) {
              if (uVar30 == 6) {
                uVar26 = func_0x002d6450(param_1,puVar23,puVar2,auStack_70);
              }
              else if (uVar30 == 5) {
                uVar26 = func_0x002d5e3c();
              }
              else {
                uVar26 = func_0x002d5840();
/*  stripping the watermark breaks the license  */
              }
            }
            else if (uVar29 == 5) {
              if (uVar30 == 6) {
                uVar26 = func_0x002d5208();
              }
              else if (uVar30 == 5) {
                uVar26 = func_0x002d4bf4();
              }
              else {
                uVar26 = func_0x002d45f8();
              }
            }
            else if (uVar30 == 6) {
              uVar26 = func_0x002d3fc4();
            }
            else if (uVar30 == 5) {
              uVar26 = func_0x002d39b4();
            }
            else {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              uVar26 = func_0x002d33bc();
            }
            if (uVar26 < 4) break;
            if ((int)LZCOUNT((int)auStack_70[0]) + (int)uVar26 * 4 + -0x1f <=
                (int)LZCOUNT((int)uVar39) + (int)uVar31 * 4 + -0x1b) break;
            lVar16 = lVar16 + 1;
            puVar28 = (ulong *)((long)puVar21 + lVar16);
            uVar39 = auStack_70[0];
            uVar31 = uVar26;
          } while (puVar28 < puVar35);
          if (3 < uVar39) goto LAB_002cb708;
LAB_002cb674:
          iVar32 = (int)uVar39;
          uVar26 = (long)puVar28 - (long)param_4;
          puVar21 = (ulong *)param_2[3];
          uVar42 = uVar43;
          uVar43 = uStack_a4;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
joined_r0x002cb680:
          uStack_a4 = uVar43;
          if (puVar28 <= puVar27) goto LAB_002cb7a4;
LAB_002cb684:
          puVar23 = puVar21;
          if (param_4 <= puVar27) {
            puVar23 = (ulong *)((long)puVar21 + ((long)puVar27 - (long)param_4));
            uVar36 = *param_4;
            puVar22 = puVar21 + 2;
            puVar21[1] = param_4[1];
            *puVar21 = uVar36;
            if (0x10 < (ulong)((long)puVar27 - (long)param_4)) {
              do {
                uVar36 = param_4[2];
                puVar22[1] = param_4[3];
                *puVar22 = uVar36;
                uVar36 = param_4[4];
                puVar22[3] = param_4[5];
                puVar22[2] = uVar36;
                puVar22 = puVar22 + 4;
/*  origin: github.com/pengussy  */
                param_4 = param_4 + 4;
              } while (puVar22 < puVar23);
            }
            param_4 = puVar27;
          }
          if (param_4 < puVar28) {
            uVar36 = (long)puVar28 - (long)param_4;
            if ((7 < uVar36) && (0x3f < (ulong)((long)puVar23 - (long)param_4))) {
              if (uVar36 < 0x40) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar36 & 0xffffffffffffffc0;
                puVar21 = puVar23 + 4;
                puVar22 = param_4 + 4;
                uVar39 = uVar19;
                do {
                  uVar17 = puVar22[-4];
                  uVar45 = puVar22[-1];
                  uVar44 = puVar22[-2];
                  uVar47 = puVar22[1];
                  uVar46 = *puVar22;
                  uVar49 = puVar22[3];
                  uVar48 = puVar22[2];
                  puVar21[-3] = puVar22[-3];
                  puVar21[-4] = uVar17;
                  puVar21[-1] = uVar45;
                  puVar21[-2] = uVar44;
                  puVar21[1] = uVar47;
/*  no support for modified copies  */
                  *puVar21 = uVar46;
                  puVar21[3] = uVar49;
                  puVar21[2] = uVar48;
                  uVar39 = uVar39 - 0x40;
                  puVar21 = puVar21 + 8;
                  puVar22 = puVar22 + 8;
                } while (uVar39 != 0);
                if (uVar36 == uVar19) goto LAB_002cb8bc;
                if ((uVar36 & 0x38) == 0) {
                  puVar23 = (ulong *)((long)puVar23 + uVar19);
                  param_4 = (ulong *)((long)param_4 + uVar19);
                  goto LAB_002cb8ac;
                }
              }
              uVar39 = uVar36 & 0xfffffffffffffff8;
              lVar16 = uVar19 - uVar39;
              puVar24 = (undefined8 *)((long)puVar23 + uVar19);
              puVar40 = (undefined8 *)((long)param_4 + uVar19);
              do {
                *puVar24 = *puVar40;
                lVar16 = lVar16 + 8;
                puVar24 = puVar24 + 1;
                puVar40 = puVar40 + 1;
              } while (lVar16 != 0);
              puVar23 = (ulong *)((long)puVar23 + uVar39);
              param_4 = (ulong *)((long)param_4 + uVar39);
              if (uVar36 == uVar39) goto LAB_002cb8bc;
            }
/* WM - more drops soon - github.com/pengussy */
LAB_002cb8ac:
            do {
              puVar21 = (ulong *)((long)param_4 + 1);
              *(char *)puVar23 = (char)*param_4;
              puVar23 = (ulong *)((long)puVar23 + 1);
              param_4 = puVar21;
            } while (puVar21 != puVar28);
          }
LAB_002cb8bc:
          param_2[3] = param_2[3] + uVar26;
          piVar25 = (int *)param_2[1];
          uVar43 = uVar42;
          if (0xffff < uVar26) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
          }
        }
        else {
          if (uVar39 < 4) goto LAB_002cb674;
LAB_002cb708:
          iVar32 = (int)uVar39;
          uVar26 = (long)puVar28 + (3 - (uVar39 + lVar9));
          puVar21 = (ulong *)(lVar10 + (ulong)uVar8);
          lVar16 = lVar10;
          if (uVar6 <= (uint)uVar26) {
            puVar21 = puVar3;
            lVar16 = lVar9;
          }
          if ((param_4 < puVar28) &&
             (uVar26 = uVar26 & 0xffffffff, puVar21 < (ulong *)(lVar16 + uVar26))) {
            puVar23 = (ulong *)(lVar16 + uVar26);
            puVar22 = puVar28;
/* watermarked copy - do not remove */
            do {
              puVar28 = (ulong *)((long)puVar22 + -1);
              puVar23 = (ulong *)((long)puVar23 + -1);
              if (*(char *)puVar28 != *(char *)puVar23) {
                uVar42 = iVar32 - 3;
                uVar26 = (long)puVar22 - (long)param_4;
                puVar21 = (ulong *)param_2[3];
                puVar28 = puVar22;
                goto joined_r0x002cb680;
              }
              uVar31 = uVar31 + 1;
            } while ((param_4 < puVar28) && (puVar22 = puVar28, puVar21 < puVar23));
          }
          uVar42 = iVar32 - 3;
          uVar26 = (long)puVar28 - (long)param_4;
          puVar21 = (ulong *)param_2[3];
          uStack_a4 = uVar43;
          if (puVar27 < puVar28) goto LAB_002cb684;
LAB_002cb7a4:
          uVar36 = *param_4;
          puVar21[1] = param_4[1];
          *puVar21 = uVar36;
          if (0x10 < uVar26) {
            lVar16 = param_2[3];
            uVar36 = param_4[2];
            *(ulong *)(lVar16 + 0x18) = param_4[3];
            *(ulong *)(lVar16 + 0x10) = uVar36;
            if (0x10 < uVar26 - 0x10) {
              puVar21 = (ulong *)(lVar16 + 0x20);
              puVar23 = param_4 + 6;
              do {
                uVar36 = puVar23[-2];
                puVar21[1] = puVar23[-1];
/* stripping the watermark breaks the license - github.com/pengussy */
                *puVar21 = uVar36;
                uVar36 = *puVar23;
                puVar21[3] = puVar23[1];
                puVar21[2] = uVar36;
                puVar21 = puVar21 + 4;
                puVar23 = puVar23 + 4;
              } while (puVar21 < (ulong *)(lVar16 + uVar26));
              goto LAB_002cb8bc;
            }
          }
          param_2[3] = param_2[3] + uVar26;
          piVar25 = (int *)param_2[1];
          uVar43 = uVar42;
        }
        *(short *)(piVar25 + 1) = (short)uVar26;
        *piVar25 = iVar32;
        if (0xffff < uVar31 - 3) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
        }
/* WM - chat: discord.gg/sdkhDjTex */
        *(short *)((long)piVar25 + 6) = (short)(uVar31 - 3);
        piVar25 = piVar25 + 2;
        param_2[1] = (long)piVar25;
        if (*(int *)(param_1 + 300) != 0) {
          uVar42 = *(uint *)(param_1 + 0x2c);
          uVar26 = (ulong)uVar42;
          iVar13 = (int)puVar35 - (int)(ulong *)(lVar9 + uVar26);
          iVar32 = 8;
          if (iVar13 + 1U < 8) {
            iVar32 = iVar13 + 1;
          }
          iVar13 = 0;
          if ((ulong *)(lVar9 + uVar26) <= puVar35) {
            iVar13 = iVar32;
          }
          if (uVar42 < iVar13 + uVar42) {
            lVar16 = *(long *)(param_1 + 0x70);
            lVar33 = *(long *)(param_1 + 0x38);
            iVar32 = *(int *)(param_1 + 0x34);
            uVar36 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar29 == 5) {
                uVar39 = *(long *)(lVar9 + uVar26) * -0x30e4432345000000;
LAB_002cb9c0:
/* watermarked copy - do not remove - github.com/pengussy */
                uVar39 = (uVar39 ^ uVar36) >> ((ulong)(0x38 - iVar32) & 0x3f);
                uVar18 = (uint)uVar39;
                uVar39 = (ulong)(((uint)(uVar39 >> 8) & 0xffffff) << (ulong)(uVar30 & 0x1f));
                lVar34 = lVar16 + uVar39 * 4;
                Hint_Prefetch(lVar34,0,0,0);
                if (4 < uVar12) goto LAB_002cba0c;
LAB_002cb980:
                lVar34 = lVar33 + uVar39;
LAB_002cb984:
                Hint_Prefetch(lVar34,0,0,0);
              }
              else {
                if (uVar29 == 6) {
                  uVar39 = *(long *)(lVar9 + uVar26) * -0x30e4432340650000;
                  goto LAB_002cb9c0;
                }
                uVar18 = (*(int *)(lVar9 + uVar26) * -0x61c8864f ^ (uint)uVar36) >>
                         (ulong)(0x18U - iVar32 & 0x1f);
                uVar39 = (ulong)((uVar18 >> 8) << (ulong)(uVar30 & 0x1f));
                lVar34 = lVar16 + uVar39 * 4;
                Hint_Prefetch(lVar34,0,0,0);
                if (uVar12 < 5) goto LAB_002cb980;
LAB_002cba0c:
                Hint_Prefetch(lVar34 + 0x40,0,0,0);
                lVar34 = lVar33 + uVar39;
                Hint_Prefetch(lVar34,0,0,0);
                if (uVar12 != 5) {
                  lVar34 = lVar34 + 0x20;
                  goto LAB_002cb984;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar26 & 7) * 4) = uVar18;
              uVar26 = uVar26 + 1;
            } while (iVar13 + uVar42 != uVar26);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar28 + uVar31);
/* wm:unlicensed copy if this notice is missing */
        if (puVar35 < param_4) {
          puVar28 = param_4;
          goto LAB_002cb1f8;
        }
        uVar42 = uVar43;
        do {
          uVar43 = uStack_a4;
          uVar18 = uVar42;
          iVar13 = (int)param_4 - iVar20;
          iVar32 = iVar13 - uVar11;
          if ((uint)(iVar13 - *(int *)(param_1 + 0x1c)) <= uVar11 || *(int *)(param_1 + 0x28) != 0)
          {
            iVar32 = *(int *)(param_1 + 0x1c);
          }
          uVar42 = iVar13 - uVar43;
          lVar16 = lVar10;
          if (uVar6 <= uVar42) {
            lVar16 = lVar9;
          }
          if (((uint)(iVar13 - iVar32) < uVar43 || 0xfffffffc < uVar42 - uVar6) ||
             (piVar5 = (int *)(lVar16 + (ulong)uVar42), (int)*param_4 != *piVar5)) {
            puVar21 = param_4;
            uStack_a4 = uVar43;
/* proprietary - see LICENSE - do not sell */
            uVar43 = uVar18;
            break;
          }
          puVar21 = puVar4;
          if (uVar6 <= uVar42) {
            puVar21 = puVar2;
          }
          puVar28 = (ulong *)((long)param_4 + 4);
          puVar23 = (ulong *)(piVar5 + 1);
          puVar22 = (ulong *)((long)puVar28 + ((long)puVar21 - (long)puVar23));
          if (puVar2 <= puVar22) {
            puVar22 = puVar2;
          }
          if (puVar28 < (ulong *)((long)puVar22 - 7U)) {
            if (*puVar23 == *puVar28) {
              lVar33 = 0;
              puVar37 = (ulong *)((long)param_4 + 0xc);
              puVar38 = (ulong *)(lVar16 + (ulong)uVar42 + 0xc);
              do {
                if ((ulong *)((long)puVar22 - 7U) <= puVar37) goto LAB_002cbb54;
                uVar26 = *puVar38;
                uVar31 = *puVar37;
                lVar33 = lVar33 + 8;
                puVar37 = puVar37 + 1;
                puVar38 = puVar38 + 1;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
              } while (uVar26 == uVar31);
              uVar31 = uVar31 ^ uVar26;
              uVar26 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
              uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
              uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
              uVar26 = lVar33 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
            }
            else {
              uVar26 = *puVar28 ^ *puVar23;
              uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
              uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
              uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
              uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
              uVar26 = (ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3;
            }
            if ((ulong *)((long)puVar23 + uVar26) == puVar21) goto LAB_002cbc50;
joined_r0x002cbbb8:
            if (param_4 <= puVar27) goto LAB_002cbd24;
LAB_002cbbbc:
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            *(undefined2 *)(piVar25 + 1) = 0;
            *piVar25 = 1;
          }
          else {
            puVar37 = puVar28;
            puVar38 = puVar23;
LAB_002cbb54:
            if (puVar37 < (ulong *)((long)puVar22 - 3U)) {
              if ((int)*puVar38 == (int)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar38 = (ulong *)((long)puVar38 + 4);
              }
              if (puVar37 < (ulong *)((long)puVar22 - 1U)) goto LAB_002cbc0c;
            }
            else if (puVar37 < (ulong *)((long)puVar22 - 1U)) {
LAB_002cbc0c:
              if ((short)*puVar38 == (short)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar38 = (ulong *)((long)puVar38 + 2);
              }
            }
            if (puVar37 < puVar22) {
              if ((char)*puVar38 == (char)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 1);
              }
            }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            uVar26 = (long)puVar37 - (long)puVar28;
            if ((ulong *)((long)puVar23 + uVar26) != puVar21) goto joined_r0x002cbbb8;
LAB_002cbc50:
            puVar28 = (ulong *)((long)puVar28 + uVar26);
            if (puVar28 < (ulong *)((long)puVar2 - 7U)) {
              if (*puVar3 == *puVar28) {
                lVar16 = 0;
                puVar21 = (ulong *)((long)param_4 + uVar26 + 0xc);
                puVar23 = (ulong *)(uVar7 + lVar9);
                do {
                  puVar23 = puVar23 + 1;
                  if ((ulong *)((long)puVar2 - 7U) <= puVar21) goto LAB_002cbcc4;
                  uVar31 = *puVar21;
                  lVar16 = lVar16 + 8;
                  puVar21 = puVar21 + 1;
                } while (*puVar23 == uVar31);
// reversing this took months of machine time
                uVar31 = uVar31 ^ *puVar23;
                uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                uVar26 = lVar16 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3) + uVar26;
              }
              else {
                uVar31 = *puVar28 ^ *puVar3;
                uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                uVar26 = ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3) + uVar26;
              }
              goto joined_r0x002cbbb8;
            }
            puVar21 = puVar28;
            puVar23 = puVar3;
LAB_002cbcc4:
            if (puVar21 < (ulong *)((long)puVar2 - 3U)) {
              if ((int)*puVar23 == (int)*puVar21) {
                puVar21 = (ulong *)((long)puVar21 + 4);
                puVar23 = (ulong *)((long)puVar23 + 4);
              }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
            }
            if (puVar21 < (ulong *)((long)puVar2 - 1U)) {
              if (*(short *)puVar23 == *(short *)puVar21) {
                puVar21 = (ulong *)((long)puVar21 + 2);
                puVar23 = (ulong *)((long)puVar23 + 2);
              }
            }
            if (puVar21 < puVar2) {
              if ((char)*puVar23 == (char)*puVar21) {
                puVar21 = (ulong *)((long)puVar21 + 1);
              }
            }
            uVar26 = (long)puVar21 + (uVar26 - (long)puVar28);
            if (puVar27 < param_4) goto LAB_002cbbbc;
LAB_002cbd24:
            puVar21 = (ulong *)param_2[3];
            uVar31 = *param_4;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            puVar21[1] = param_4[1];
            *puVar21 = uVar31;
            piVar25 = (int *)param_2[1];
            *(undefined2 *)(piVar25 + 1) = 0;
            *piVar25 = 1;
          }
          if (0xffff < uVar26 + 1) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
          }
          *(short *)((long)piVar25 + 6) = (short)(uVar26 + 1);
          piVar25 = piVar25 + 2;
          param_4 = (ulong *)((long)param_4 + uVar26 + 4);
          param_2[1] = (long)piVar25;
          puVar21 = param_4;
          uVar42 = uVar43;
          uStack_a4 = uVar18;
        } while (param_4 <= puVar35);
      }
    } while (puVar21 < puVar35);
  }
  *param_3 = uVar43;
  param_3[1] = uStack_a4;
/* wm:more drops soon - github.com/pengussy */
  return (long)puVar2 - (long)param_4;
}

