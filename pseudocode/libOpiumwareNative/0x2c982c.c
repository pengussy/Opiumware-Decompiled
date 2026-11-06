/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2c982c:8f65a76cb7
 */

/* WARNING: Type propagation algorithm not settling */

long FUN_002c982c(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
/* thanks for reading - discord.gg/sdkhDjTex */
  uint uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong *puVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
/* keep the notice, keep the source honest - github.com/pengussy */
  ulong uVar35;
  undefined8 *puVar36;
  uint uVar37;
  uint uVar38;
  ulong *puVar39;
  ulong *puVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uStack_68;
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar19 = puVar2 + -2;
  lVar8 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar5;
  uVar7 = *(uint *)(param_1 + 0x1c);
/*  if you paid for this, you were scammed  */
  uVar10 = *(uint *)(param_1 + 0x100);
  uVar25 = *(uint *)(param_1 + 0x110);
  if (uVar25 < 5) {
    uVar25 = 4;
  }
  if (5 < uVar25) {
    uVar25 = 6;
  }
  uVar11 = *(uint *)(param_1 + 0x10c);
  uVar26 = uVar11;
  if (uVar11 < 5) {
    uVar26 = 4;
  }
  if (5 < uVar26) {
    uVar26 = 6;
  }
  uVar38 = *param_3;
  uVar37 = param_3[1];
  *(undefined4 *)(param_1 + 300) = 0;
  puVar3 = (ulong *)(lVar8 + uVar6);
  puVar21 = param_4;
  if (param_4 == puVar3) {
    puVar21 = (ulong *)((long)param_4 + 1);
  }
  uVar12 = *(uint *)(param_1 + 0x2c);
  uVar20 = (ulong)uVar12;
/* keep the notice, keep the source honest */
  iVar14 = (int)puVar19 - (int)(ulong *)(lVar8 + uVar20);
  iVar29 = 8;
  if (iVar14 + 1U < 8) {
    iVar29 = iVar14 + 1;
  }
  iVar14 = 0;
  if ((ulong *)(lVar8 + uVar20) <= puVar19) {
    iVar14 = iVar29;
  }
  uVar27 = (ulong)(iVar14 + uVar12);
  if (uVar12 < iVar14 + uVar12) {
    lVar30 = *(long *)(param_1 + 0x70);
    lVar31 = *(long *)(param_1 + 0x38);
    uVar32 = *(ulong *)(param_1 + 0x60);
    uVar35 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar12 = 0x18 - *(int *)(param_1 + 0x34);
    lVar15 = param_1 + 0x40;
    if (uVar11 < 5) {
      if (uVar25 == 6) {
        do {
          uVar18 = (*(long *)(lVar8 + uVar20) * -0x30e4432340650000 ^ uVar32) >> (uVar35 & 0x3f);
// reversing this took months of machine time
          uVar16 = (ulong)(((uint)(uVar18 >> 8) & 0xffffff) << (ulong)(uVar26 & 0x1f));
          Hint_Prefetch(lVar30 + uVar16 * 4,0,0,0);
          Hint_Prefetch(lVar31 + uVar16,0,0,0);
          *(int *)(lVar15 + (uVar20 & 7) * 4) = (int)uVar18;
          uVar20 = uVar20 + 1;
        } while (uVar27 != uVar20);
      }
      else if (uVar25 == 5) {
        do {
          uVar18 = (*(long *)(lVar8 + uVar20) * -0x30e4432345000000 ^ uVar32) >> (uVar35 & 0x3f);
          uVar16 = (ulong)(((uint)(uVar18 >> 8) & 0xffffff) << (ulong)(uVar26 & 0x1f));
          Hint_Prefetch(lVar30 + uVar16 * 4,0,0,0);
          Hint_Prefetch(lVar31 + uVar16,0,0,0);
          *(int *)(lVar15 + (uVar20 & 7) * 4) = (int)uVar18;
          uVar20 = uVar20 + 1;
        } while (uVar27 != uVar20);
      }
      else {
        do {
          uVar17 = (*(int *)(lVar8 + uVar20) * -0x61c8864f ^ (uint)uVar32) >> (ulong)(uVar12 & 0x1f)
          ;
          uVar35 = (ulong)((uVar17 >> 8) << (ulong)(uVar26 & 0x1f));
          Hint_Prefetch(lVar30 + uVar35 * 4,0,0,0);
          Hint_Prefetch(lVar31 + uVar35,0,0,0);
          *(uint *)(lVar15 + (uVar20 & 7) * 4) = uVar17;
          uVar20 = uVar20 + 1;
        } while (uVar27 != uVar20);
      }
    }
    else {
      do {
        if (uVar25 == 6) {
          uVar18 = *(long *)(lVar8 + uVar20) * -0x30e4432340650000;
LAB_002c9980:
          uVar17 = (uint)((uVar18 ^ uVar32) >> (uVar35 & 0x3f));
        }
        else {
/* WM - watermarked copy - do not remove */
          if (uVar25 == 5) {
            uVar18 = *(long *)(lVar8 + uVar20) * -0x30e4432345000000;
            goto LAB_002c9980;
          }
          uVar17 = (*(int *)(lVar8 + uVar20) * -0x61c8864f ^ (uint)uVar32) >> (ulong)(uVar12 & 0x1f)
          ;
        }
        uVar18 = (ulong)((uVar17 >> 8) << (ulong)(uVar26 & 0x1f));
        lVar1 = lVar30 + uVar18 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar31 + uVar18;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar11 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar15 + (uVar20 & 7) * 4) = uVar17;
        uVar20 = uVar20 + 1;
      } while (uVar27 != uVar20);
    }
  }
  if (puVar21 < puVar19) {
/* do not claim this as your own - github.com/pengussy */
    uVar10 = 1 << (ulong)(uVar10 & 0x1f);
    puVar39 = puVar2 + -4;
    do {
      puVar40 = (ulong *)((long)puVar21 + 1);
      iVar29 = ((int)puVar21 - (int)lVar8) + 1;
      iVar14 = iVar29 - uVar10;
      if ((uint)(iVar29 - *(int *)(param_1 + 0x1c)) <= uVar10 || *(int *)(param_1 + 0x28) != 0) {
        iVar14 = *(int *)(param_1 + 0x1c);
      }
      uVar12 = iVar29 - uVar38;
      lVar15 = lVar9;
      if (uVar5 <= uVar12) {
        lVar15 = lVar8;
      }
      if (((uint)(iVar29 - iVar14) < uVar38 || 0xfffffffc < uVar12 - uVar5) ||
         (*(int *)puVar40 != *(int *)(lVar15 + (ulong)uVar12))) {
        uStack_68 = 999999999;
        if (uVar25 == 6) {
          if (uVar26 == 6) {
            uVar20 = func_0x002d6450(param_1,puVar21,puVar2,&uStack_68);
          }
          else if (uVar26 == 5) {
            uVar20 = func_0x002d5e3c();
          }
          else {
/* proprietary - see LICENSE - do not sell */
            uVar20 = func_0x002d5840();
          }
        }
        else if (uVar25 == 5) {
          if (uVar26 == 6) {
            uVar20 = func_0x002d5208();
          }
          else if (uVar26 == 5) {
            uVar20 = func_0x002d4bf4();
          }
          else {
            uVar20 = func_0x002d45f8();
          }
        }
        else if (uVar26 == 6) {
          uVar20 = func_0x002d3fc4();
        }
        else if (uVar26 == 5) {
          uVar20 = func_0x002d39b4();
        }
        else {
          uVar20 = func_0x002d33bc();
        }
        if (uVar20 == 0) {
          uVar27 = 1;
        }
        else {
          uVar27 = uStack_68;
          puVar40 = puVar21;
        }
        iVar29 = (int)uVar27;
/*  reversing this took months of machine time  */
        if (3 < uVar20) {
          if (uStack_68 < 4) goto LAB_002c9d28;
          uVar27 = (long)puVar21 + (-uStack_68 - lVar8) + 3;
          puVar22 = (ulong *)(lVar9 + (ulong)uVar7);
          lVar15 = lVar9;
          if (uVar5 <= (uint)uVar27) {
            puVar22 = puVar3;
            lVar15 = lVar8;
          }
          if ((param_4 < puVar21) &&
             (uVar27 = uVar27 & 0xffffffff, puVar22 < (ulong *)(lVar15 + uVar27))) {
            puVar21 = (ulong *)(lVar15 + uVar27);
            while( true ) {
              puVar28 = (ulong *)((long)puVar40 + -1);
              puVar21 = (ulong *)((long)puVar21 + -1);
              if (*(char *)puVar28 != *(char *)puVar21) break;
              uVar20 = uVar20 + 1;
              puVar40 = puVar28;
              if ((puVar28 <= param_4) || (puVar21 <= puVar22)) break;
            }
          }
          uVar27 = (long)puVar40 - (long)param_4;
          puVar21 = (ulong *)param_2[3];
          uVar12 = iVar29 - 3;
          uVar37 = uVar38;
          goto joined_r0x002c9e0c;
        }
        *(uint *)(param_1 + 300) = (uint)(0x8ff < (ulong)((long)puVar21 - (long)param_4));
        puVar21 = (ulong *)((long)puVar21 + ((ulong)((long)puVar21 - (long)param_4) >> 8) + 1);
      }
      else {
        puVar22 = (ulong *)(lVar9 + uVar6);
// donate: donate/README.md
        if (uVar5 <= uVar12) {
          puVar22 = puVar2;
        }
        lVar15 = func_0x002ad924((long)puVar21 + 5,(int *)(lVar15 + (ulong)uVar12) + 1,puVar2,
                                 puVar22,puVar3);
        uVar20 = lVar15 + 4;
        iVar29 = 1;
LAB_002c9d28:
        uVar27 = (long)puVar40 - (long)param_4;
        puVar21 = (ulong *)param_2[3];
        uVar12 = uVar38;
joined_r0x002c9e0c:
        if (puVar39 < puVar40) {
          puVar22 = puVar21;
          if (param_4 <= puVar39) {
            puVar22 = (ulong *)((long)puVar21 + ((long)puVar39 - (long)param_4));
            uVar32 = *param_4;
            puVar28 = puVar21 + 2;
            puVar21[1] = param_4[1];
            *puVar21 = uVar32;
            if (0x10 < (ulong)((long)puVar39 - (long)param_4)) {
              do {
                uVar32 = param_4[2];
                puVar28[1] = param_4[3];
                *puVar28 = uVar32;
                uVar32 = param_4[4];
                puVar28[3] = param_4[5];
                puVar28[2] = uVar32;
                puVar28 = puVar28 + 4;
                param_4 = param_4 + 4;
              } while (puVar28 < puVar22);
            }
            param_4 = puVar39;
/* WM - found on a paste site? it was re-uploaded illegally */
          }
          if (param_4 < puVar40) {
            uVar32 = (long)puVar40 - (long)param_4;
            if ((7 < uVar32) && (0x3f < (ulong)((long)puVar22 - (long)param_4))) {
              if (uVar32 < 0x40) {
                uVar18 = 0;
              }
              else {
                uVar18 = uVar32 & 0xffffffffffffffc0;
                puVar21 = puVar22 + 4;
                puVar28 = param_4 + 4;
                uVar35 = uVar18;
                do {
                  uVar16 = puVar28[-4];
                  uVar42 = puVar28[-1];
                  uVar41 = puVar28[-2];
                  uVar44 = puVar28[1];
                  uVar43 = *puVar28;
                  uVar46 = puVar28[3];
                  uVar45 = puVar28[2];
                  puVar21[-3] = puVar28[-3];
                  puVar21[-4] = uVar16;
                  puVar21[-1] = uVar42;
                  puVar21[-2] = uVar41;
                  puVar21[1] = uVar44;
                  *puVar21 = uVar43;
                  puVar21[3] = uVar46;
                  puVar21[2] = uVar45;
                  uVar35 = uVar35 - 0x40;
                  puVar21 = puVar21 + 8;
                  puVar28 = puVar28 + 8;
                } while (uVar35 != 0);
                if (uVar32 == uVar18) goto LAB_002c9f00;
                if ((uVar32 & 0x38) == 0) {
                  puVar22 = (ulong *)((long)puVar22 + uVar18);
                  param_4 = (ulong *)((long)param_4 + uVar18);
/*  watermarked copy - do not remove  */
                  goto LAB_002c9ef0;
                }
              }
              uVar35 = uVar32 & 0xfffffffffffffff8;
              lVar15 = uVar18 - uVar35;
              puVar23 = (undefined8 *)((long)puVar22 + uVar18);
              puVar36 = (undefined8 *)((long)param_4 + uVar18);
              do {
                *puVar23 = *puVar36;
                lVar15 = lVar15 + 8;
                puVar23 = puVar23 + 1;
                puVar36 = puVar36 + 1;
              } while (lVar15 != 0);
              puVar22 = (ulong *)((long)puVar22 + uVar35);
              param_4 = (ulong *)((long)param_4 + uVar35);
              if (uVar32 == uVar35) goto LAB_002c9f00;
            }
LAB_002c9ef0:
            do {
              puVar21 = (ulong *)((long)param_4 + 1);
              *(char *)puVar22 = (char)*param_4;
              puVar22 = (ulong *)((long)puVar22 + 1);
              param_4 = puVar21;
            } while (puVar21 != puVar40);
          }
LAB_002c9f00:
          param_2[3] = param_2[3] + uVar27;
          piVar24 = (int *)param_2[1];
          if (0xffff < uVar27) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
          }
        }
        else {
          uVar32 = *param_4;
          puVar21[1] = param_4[1];
          *puVar21 = uVar32;
/* wm:donate: donate/README.md */
          if (0x10 < uVar27) {
            lVar15 = param_2[3];
            uVar32 = param_4[2];
            *(ulong *)(lVar15 + 0x18) = param_4[3];
            *(ulong *)(lVar15 + 0x10) = uVar32;
            if (0x10 < uVar27 - 0x10) {
              puVar21 = (ulong *)(lVar15 + 0x20);
              puVar22 = param_4 + 6;
              do {
                uVar32 = puVar22[-2];
                puVar21[1] = puVar22[-1];
                *puVar21 = uVar32;
                uVar32 = *puVar22;
                puVar21[3] = puVar22[1];
                puVar21[2] = uVar32;
                puVar21 = puVar21 + 4;
                puVar22 = puVar22 + 4;
              } while (puVar21 < (ulong *)(lVar15 + uVar27));
              goto LAB_002c9f00;
            }
          }
          param_2[3] = param_2[3] + uVar27;
          piVar24 = (int *)param_2[1];
        }
        *(short *)(piVar24 + 1) = (short)uVar27;
        *piVar24 = iVar29;
        uVar13 = (undefined2)(uVar20 - 3);
        if (uVar20 - 3 < 0x10000) {
          *(undefined2 *)((long)piVar24 + 6) = uVar13;
          param_2[1] = (long)(piVar24 + 2);
// WM - chat: discord.gg/sdkhDjTex
          iVar29 = *(int *)(param_1 + 300);
        }
        else {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
          *(undefined2 *)((long)piVar24 + 6) = uVar13;
          param_2[1] = (long)(piVar24 + 2);
          iVar29 = *(int *)(param_1 + 300);
        }
        if (iVar29 != 0) {
          uVar38 = *(uint *)(param_1 + 0x2c);
          uVar27 = (ulong)uVar38;
          iVar14 = (int)puVar19 - (int)(ulong *)(lVar8 + uVar27);
          iVar29 = 8;
          if (iVar14 + 1U < 8) {
            iVar29 = iVar14 + 1;
          }
          iVar14 = 0;
          if ((ulong *)(lVar8 + uVar27) <= puVar19) {
            iVar14 = iVar29;
          }
          if (uVar38 < iVar14 + uVar38) {
            lVar15 = *(long *)(param_1 + 0x70);
            lVar30 = *(long *)(param_1 + 0x38);
            iVar29 = *(int *)(param_1 + 0x34);
            uVar32 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar25 == 5) {
                uVar35 = *(long *)(lVar8 + uVar27) * -0x30e4432345000000;
LAB_002c9fe4:
                uVar35 = (uVar35 ^ uVar32) >> ((ulong)(0x38 - iVar29) & 0x3f);
                uVar17 = (uint)uVar35;
                uVar35 = (ulong)(((uint)(uVar35 >> 8) & 0xffffff) << (ulong)(uVar26 & 0x1f));
                lVar31 = lVar15 + uVar35 * 4;
                Hint_Prefetch(lVar31,0,0,0);
                if (4 < uVar11) goto LAB_002ca038;
/* stripping the watermark breaks the license */
LAB_002c9fa0:
                lVar31 = lVar30 + uVar35;
LAB_002c9fa4:
                Hint_Prefetch(lVar31,0,0,0);
              }
              else {
                if (uVar25 == 6) {
                  uVar35 = *(long *)(lVar8 + uVar27) * -0x30e4432340650000;
                  goto LAB_002c9fe4;
                }
                uVar17 = (*(int *)(lVar8 + uVar27) * -0x61c8864f ^ (uint)uVar32) >>
                         (ulong)(0x18U - iVar29 & 0x1f);
                uVar35 = (ulong)((uVar17 >> 8) << (ulong)(uVar26 & 0x1f));
                lVar31 = lVar15 + uVar35 * 4;
                Hint_Prefetch(lVar31,0,0,0);
                if (uVar11 < 5) goto LAB_002c9fa0;
LAB_002ca038:
                Hint_Prefetch(lVar31 + 0x40,0,0,0);
                lVar31 = lVar30 + uVar35;
                Hint_Prefetch(lVar31,0,0,0);
                if (uVar11 != 5) {
                  lVar31 = lVar31 + 0x20;
                  goto LAB_002c9fa4;
                }
              }
              *(uint *)(param_1 + 0x40 + (uVar27 & 7) * 4) = uVar17;
              uVar27 = uVar27 + 1;
// more drops soon - github.com/pengussy
            } while (iVar14 + uVar38 != uVar27);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        piVar24 = piVar24 + 2;
        param_4 = (ulong *)((long)puVar40 + uVar20);
        if (puVar19 < param_4) {
          puVar21 = param_4;
          uVar38 = uVar12;
        }
        else {
          do {
            uVar38 = uVar37;
            uVar17 = uVar12;
            iVar14 = (int)param_4 - (int)lVar8;
            iVar29 = iVar14 - uVar10;
            if ((uint)(iVar14 - *(int *)(param_1 + 0x1c)) <= uVar10 || *(int *)(param_1 + 0x28) != 0
               ) {
              iVar29 = *(int *)(param_1 + 0x1c);
            }
            uVar37 = iVar14 - uVar38;
            lVar15 = lVar9;
            if (uVar5 <= uVar37) {
              lVar15 = lVar8;
            }
            if (((uint)(iVar14 - iVar29) < uVar38 || 0xfffffffc < uVar37 - uVar5) ||
               (piVar4 = (int *)(lVar15 + (ulong)uVar37), (int)*param_4 != *piVar4)) {
              puVar21 = param_4;
              uVar37 = uVar38;
              uVar38 = uVar17;
              break;
            }
            puVar21 = (ulong *)(lVar9 + uVar6);
            if (uVar5 <= uVar37) {
              puVar21 = puVar2;
            }
            puVar40 = (ulong *)((long)param_4 + 4);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            puVar22 = (ulong *)(piVar4 + 1);
            puVar28 = (ulong *)((long)puVar40 + ((long)puVar21 - (long)puVar22));
            if (puVar2 <= puVar28) {
              puVar28 = puVar2;
            }
            if (puVar40 < (ulong *)((long)puVar28 - 7U)) {
              if (*puVar22 == *puVar40) {
                lVar30 = 0;
                puVar33 = (ulong *)((long)param_4 + 0xc);
                puVar34 = (ulong *)(lVar15 + (ulong)uVar37 + 0xc);
                do {
                  if ((ulong *)((long)puVar28 - 7U) <= puVar33) goto LAB_002ca164;
                  uVar20 = *puVar34;
                  uVar27 = *puVar33;
                  lVar30 = lVar30 + 8;
                  puVar33 = puVar33 + 1;
                  puVar34 = puVar34 + 1;
                } while (uVar20 == uVar27);
                uVar27 = uVar27 ^ uVar20;
                uVar20 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = lVar30 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              }
              else {
                uVar20 = *puVar40 ^ *puVar22;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
              }
/* do not claim this as your own */
              if ((ulong *)((long)puVar22 + uVar20) == puVar21) goto LAB_002ca25c;
joined_r0x002ca318:
              if (param_4 <= puVar39) goto LAB_002ca38c;
LAB_002ca1b0:
              *(undefined2 *)(piVar24 + 1) = 0;
              *piVar24 = 1;
            }
            else {
              puVar33 = puVar40;
              puVar34 = puVar22;
LAB_002ca164:
              if (puVar33 < (ulong *)((long)puVar28 - 3U)) {
                if ((int)*puVar34 == (int)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
                if (puVar33 < (ulong *)((long)puVar28 - 1U)) goto LAB_002ca218;
              }
              else if (puVar33 < (ulong *)((long)puVar28 - 1U)) {
LAB_002ca218:
                if ((short)*puVar34 == (short)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
              }
              if (puVar33 < puVar28) {
                if ((char)*puVar34 == (char)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 1);
                }
              }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              uVar20 = (long)puVar33 - (long)puVar40;
              if ((ulong *)((long)puVar22 + uVar20) != puVar21) goto joined_r0x002ca318;
LAB_002ca25c:
              puVar40 = (ulong *)((long)puVar40 + uVar20);
              if ((ulong *)((long)puVar2 - 7U) <= puVar40) {
                puVar21 = puVar40;
                puVar22 = puVar3;
LAB_002ca2d8:
                if (puVar21 < (ulong *)((long)puVar2 - 3U)) {
                  if ((int)*puVar22 == (int)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 4);
                    puVar22 = (ulong *)((long)puVar22 + 4);
                  }
                }
                if (puVar21 < (ulong *)((long)puVar2 - 1U)) {
                  if ((short)*puVar22 == (short)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 2);
                    puVar22 = (ulong *)((long)puVar22 + 2);
                  }
                }
                if (puVar21 < puVar2) {
                  if ((char)*puVar22 == (char)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 1);
                  }
                }
                uVar20 = (long)puVar21 + (uVar20 - (long)puVar40);
                goto joined_r0x002ca318;
              }
              if (*puVar3 != *puVar40) {
                uVar27 = *puVar40 ^ *puVar3;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                uVar20 = ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + uVar20;
                goto joined_r0x002ca318;
/* WM - proprietary - see LICENSE - do not sell */
              }
              lVar15 = 0;
              puVar21 = (ulong *)((long)param_4 + uVar20 + 0xc);
              puVar22 = (ulong *)(uVar6 + lVar8);
              do {
                puVar22 = puVar22 + 1;
                if ((ulong *)((long)puVar2 - 7U) <= puVar21) goto LAB_002ca2d8;
                uVar27 = *puVar21;
                lVar15 = lVar15 + 8;
                puVar21 = puVar21 + 1;
              } while (*puVar22 == uVar27);
              uVar27 = uVar27 ^ *puVar22;
              uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
              uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
              uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
              uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
              uVar20 = lVar15 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + uVar20;
              if (puVar39 < param_4) goto LAB_002ca1b0;
LAB_002ca38c:
              puVar21 = (ulong *)param_2[3];
              uVar27 = *param_4;
              puVar21[1] = param_4[1];
              *puVar21 = uVar27;
              piVar24 = (int *)param_2[1];
              *(undefined2 *)(piVar24 + 1) = 0;
              *piVar24 = 1;
            }
            if (0xffff < uVar20 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
            }
            *(short *)((long)piVar24 + 6) = (short)(uVar20 + 1);
            piVar24 = piVar24 + 2;
/* WM - origin: github.com/pengussy */
            param_4 = (ulong *)((long)param_4 + uVar20 + 4);
            param_2[1] = (long)piVar24;
            puVar21 = param_4;
            uVar12 = uVar38;
            uVar37 = uVar17;
          } while (param_4 <= puVar19);
        }
      }
    } while (puVar21 < puVar19);
  }
  *param_3 = uVar38;
  param_3[1] = uVar37;
  return (long)puVar2 - (long)param_4;
}

