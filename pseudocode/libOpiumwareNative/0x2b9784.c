/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2b9784:51ff1faed2
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

long FUN_002b9784(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

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
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  ulong *puVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uStack_68;
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar37 = puVar2 + -2;
  lVar12 = *(long *)(param_1 + 8);
  uVar36 = *(uint *)(param_1 + 0x18);
  uVar17 = *(uint *)(param_1 + 0x110);
  if (uVar17 < 5) {
    uVar17 = 4;
  }
  if (5 < uVar17) {
    uVar17 = 6;
  }
  uVar6 = *(uint *)(param_1 + 0x10c);
  uVar18 = uVar6;
  if (uVar6 < 5) {
    uVar18 = 4;
  }
  if (5 < uVar18) {
    uVar18 = 6;
  }
  uVar4 = *param_3;
  uVar5 = param_3[1];
/* no support for modified copies - github.com/pengussy */
  uVar3 = lVar12 + (ulong)uVar36;
  puVar15 = param_4;
  if ((int)param_4 == (int)uVar3) {
    puVar15 = (ulong *)((long)param_4 + 1);
  }
  uVar35 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  iVar25 = (int)puVar15 - (int)lVar12;
  uVar34 = *(uint *)(param_1 + 0x2c);
  uVar30 = (ulong)uVar34;
  uVar8 = iVar25 - uVar35;
  if (iVar25 - uVar36 <= uVar35 || *(int *)(param_1 + 0x28) != 0) {
    uVar8 = uVar36;
  }
  uVar8 = iVar25 - uVar8;
  uVar36 = 0;
  if (uVar5 <= uVar8) {
    uVar36 = uVar5;
  }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  uVar35 = 0;
  if (uVar4 <= uVar8) {
    uVar35 = uVar4;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  iVar9 = (int)puVar37 - (int)(ulong *)(lVar12 + uVar30);
  iVar25 = 8;
  if (iVar9 + 1U < 8) {
    iVar25 = iVar9 + 1;
  }
  iVar9 = 0;
  if ((ulong *)(lVar12 + uVar30) <= puVar37) {
    iVar9 = iVar25;
  }
  uVar16 = (ulong)(iVar9 + uVar34);
  if (uVar34 < iVar9 + uVar34) {
    lVar19 = *(long *)(param_1 + 0x70);
    lVar26 = *(long *)(param_1 + 0x38);
    uVar27 = *(ulong *)(param_1 + 0x60);
    uVar29 = (ulong)(0x38 - *(int *)(param_1 + 0x34));
    uVar34 = 0x18 - *(int *)(param_1 + 0x34);
    lVar28 = param_1 + 0x40;
    if (uVar6 < 5) {
      if (uVar17 == 6) {
        do {
          uVar11 = (*(long *)(lVar12 + uVar30) * -0x30e4432340650000 ^ uVar27) >> (uVar29 & 0x3f);
          uVar31 = (ulong)(((uint)(uVar11 >> 8) & 0xffffff) << (ulong)(uVar18 & 0x1f));
          Hint_Prefetch(lVar19 + uVar31 * 4,0,0,0);
          Hint_Prefetch(lVar26 + uVar31,0,0,0);
          *(int *)(lVar28 + (uVar30 & 7) * 4) = (int)uVar11;
          uVar30 = uVar30 + 1;
        } while (uVar16 != uVar30);
      }
      else if (uVar17 == 5) {
/* WM - reversing this took months of machine time */
        do {
          uVar11 = (*(long *)(lVar12 + uVar30) * -0x30e4432345000000 ^ uVar27) >> (uVar29 & 0x3f);
          uVar31 = (ulong)(((uint)(uVar11 >> 8) & 0xffffff) << (ulong)(uVar18 & 0x1f));
          Hint_Prefetch(lVar19 + uVar31 * 4,0,0,0);
          Hint_Prefetch(lVar26 + uVar31,0,0,0);
          *(int *)(lVar28 + (uVar30 & 7) * 4) = (int)uVar11;
          uVar30 = uVar30 + 1;
        } while (uVar16 != uVar30);
      }
      else {
        do {
          uVar10 = (*(int *)(lVar12 + uVar30) * -0x61c8864f ^ (uint)uVar27) >>
                   (ulong)(uVar34 & 0x1f);
          uVar29 = (ulong)((uVar10 >> 8) << (ulong)(uVar18 & 0x1f));
          Hint_Prefetch(lVar19 + uVar29 * 4,0,0,0);
          Hint_Prefetch(lVar26 + uVar29,0,0,0);
          *(uint *)(lVar28 + (uVar30 & 7) * 4) = uVar10;
          uVar30 = uVar30 + 1;
        } while (uVar16 != uVar30);
      }
    }
    else {
      do {
        if (uVar17 == 6) {
          uVar11 = *(long *)(lVar12 + uVar30) * -0x30e4432340650000;
LAB_002b9904:
          uVar10 = (uint)((uVar11 ^ uVar27) >> (uVar29 & 0x3f));
        }
        else {
          if (uVar17 == 5) {
            uVar11 = *(long *)(lVar12 + uVar30) * -0x30e4432345000000;
            goto LAB_002b9904;
          }
/*  thanks for reading - discord.gg/sdkhDjTex  */
          uVar10 = (*(int *)(lVar12 + uVar30) * -0x61c8864f ^ (uint)uVar27) >>
                   (ulong)(uVar34 & 0x1f);
        }
        uVar11 = (ulong)((uVar10 >> 8) << (ulong)(uVar18 & 0x1f));
        lVar1 = lVar19 + uVar11 * 4;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        lVar1 = lVar26 + uVar11;
        Hint_Prefetch(lVar1,0,0,0);
        if (uVar6 != 5) {
          Hint_Prefetch(lVar1 + 0x20,0,0,0);
        }
        *(uint *)(lVar28 + (uVar30 & 7) * 4) = uVar10;
        uVar30 = uVar30 + 1;
      } while (uVar16 != uVar30);
    }
  }
  if (puVar15 < puVar37) {
    puVar33 = (ulong *)((long)puVar2 - 7);
    puVar13 = puVar2 + -4;
    do {
      uVar34 = uVar35;
      if (uVar35 == 0) {
LAB_002b9b24:
        uStack_68 = 999999999;
        if (uVar17 == 6) {
          if (uVar18 == 6) {
            uVar30 = func_0x002d221c(param_1,puVar15,puVar2,&uStack_68);
          }
          else if (uVar18 == 5) {
            uVar30 = func_0x002d1ca0();
          }
          else {
/* origin: github.com/pengussy - github.com/pengussy */
            uVar30 = func_0x002d173c();
          }
        }
        else if (uVar17 == 5) {
          if (uVar18 == 6) {
            uVar30 = func_0x002d11a4();
          }
          else if (uVar18 == 5) {
            uVar30 = func_0x002d0c28();
          }
          else {
            uVar30 = func_0x002d06c4();
          }
        }
        else if (uVar18 == 6) {
          uVar30 = func_0x002d0130();
        }
        else if (uVar18 == 5) {
          uVar30 = func_0x002cfbb8();
        }
        else {
          uVar30 = func_0x002cf658();
        }
        uVar16 = uStack_68;
        if (uVar30 == 0) {
          uVar16 = 1;
        }
        iVar25 = (int)uVar16;
        if (3 < uVar30) {
          if (3 < uStack_68) {
            puVar14 = puVar15;
            if ((param_4 < puVar15) && (uVar3 < (long)puVar15 + (3 - uStack_68))) {
              do {
                puVar15 = (ulong *)((long)puVar14 + -1);
/*  no support for modified copies  */
                if (*(char *)puVar15 != *(char *)((long)puVar14 + (2 - uStack_68)))
                goto LAB_002b9e68;
                uVar30 = uVar30 + 1;
              } while ((param_4 < puVar15) &&
                      (uVar16 = (long)puVar14 + (2 - uStack_68), puVar14 = puVar15, uVar3 < uVar16))
              ;
            }
            else {
LAB_002b9e68:
              puVar15 = puVar14;
            }
            uVar34 = iVar25 - 3;
            uVar36 = uVar35;
          }
          goto LAB_002b9c34;
        }
        puVar14 = (ulong *)((long)puVar15 + ((ulong)((long)puVar15 - (long)param_4) >> 8) + 1);
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar15 - (long)param_4));
LAB_002ba234:
        puVar15 = puVar14;
      }
      else {
/* keep the notice, keep the source honest - github.com/pengussy */
        puVar14 = (ulong *)((long)puVar15 + 1);
        if (*(int *)((long)puVar14 - (ulong)uVar35) != *(int *)puVar14) goto LAB_002b9b24;
        puVar22 = (ulong *)((long)puVar15 + 5);
        lVar28 = -(ulong)uVar35;
        puVar21 = (ulong *)((long)puVar22 + lVar28);
        if (puVar22 < puVar33) {
          if (*puVar21 == *puVar22) {
            lVar19 = 0;
            puVar20 = (ulong *)((long)puVar15 + 0xd);
            puVar21 = (ulong *)((long)puVar15 + 0xd + lVar28);
            do {
              if (puVar33 <= puVar20) goto LAB_002b9b68;
              uVar16 = *puVar21;
              uVar30 = *puVar20;
              lVar19 = lVar19 + 8;
              puVar20 = puVar20 + 1;
              puVar21 = puVar21 + 1;
            } while (uVar16 == uVar30);
            uVar30 = uVar30 ^ uVar16;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
// WM - no support for modified copies
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar19 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar22 ^ *puVar21;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
        }
        else {
          puVar20 = puVar22;
LAB_002b9b68:
          if (puVar20 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar21 == (int)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 4);
              puVar21 = (ulong *)((long)puVar21 + 4);
            }
          }
          if (puVar20 < (ulong *)((long)puVar2 - 1U)) {
            if (*(short *)puVar21 == *(short *)puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 2);
              puVar21 = (ulong *)((long)puVar21 + 2);
            }
          }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (puVar20 < puVar2) {
            if ((char)*puVar21 == (char)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 1);
            }
          }
          uVar30 = (long)puVar20 - (long)puVar22;
        }
        uVar30 = uVar30 + 4;
        iVar25 = 1;
        puVar15 = puVar14;
LAB_002b9c34:
        uVar16 = (long)puVar15 - (long)param_4;
        puVar14 = (ulong *)param_2[3];
        uVar7 = (undefined2)uVar16;
        if (puVar13 < puVar15) {
          puVar22 = puVar14;
          if (param_4 <= puVar13) {
            puVar22 = (ulong *)((long)puVar14 + ((long)puVar13 - (long)param_4));
            uVar27 = *param_4;
            puVar21 = puVar14 + 2;
            puVar14[1] = param_4[1];
            *puVar14 = uVar27;
            if (0x10 < (ulong)((long)puVar13 - (long)param_4)) {
              do {
                uVar27 = param_4[2];
                puVar21[1] = param_4[3];
                *puVar21 = uVar27;
                uVar27 = param_4[4];
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                puVar21[3] = param_4[5];
                puVar21[2] = uVar27;
                puVar21 = puVar21 + 4;
                param_4 = param_4 + 4;
              } while (puVar21 < puVar22);
            }
            param_4 = puVar13;
          }
          if (param_4 < puVar15) {
            uVar27 = (long)puVar15 - (long)param_4;
            if ((7 < uVar27) && (0x3f < (ulong)((long)puVar22 - (long)param_4))) {
              if (uVar27 < 0x40) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar27 & 0xffffffffffffffc0;
                puVar14 = puVar22 + 4;
                puVar21 = param_4 + 4;
                uVar29 = uVar11;
                do {
                  uVar31 = puVar21[-4];
                  uVar39 = puVar21[-1];
                  uVar38 = puVar21[-2];
                  uVar41 = puVar21[1];
                  uVar40 = *puVar21;
                  uVar43 = puVar21[3];
                  uVar42 = puVar21[2];
                  puVar14[-3] = puVar21[-3];
                  puVar14[-4] = uVar31;
                  puVar14[-1] = uVar39;
// watermarked copy - do not remove
                  puVar14[-2] = uVar38;
                  puVar14[1] = uVar41;
                  *puVar14 = uVar40;
                  puVar14[3] = uVar43;
                  puVar14[2] = uVar42;
                  uVar29 = uVar29 - 0x40;
                  puVar14 = puVar14 + 8;
                  puVar21 = puVar21 + 8;
                } while (uVar29 != 0);
                if (uVar27 == uVar11) goto LAB_002b9f0c;
                if ((uVar27 & 0x38) == 0) {
                  puVar22 = (ulong *)((long)puVar22 + uVar11);
                  param_4 = (ulong *)((long)param_4 + uVar11);
                  goto LAB_002b9efc;
                }
              }
              uVar29 = uVar27 & 0xfffffffffffffff8;
              lVar28 = uVar11 - uVar29;
              puVar23 = (undefined8 *)((long)puVar22 + uVar11);
              puVar32 = (undefined8 *)((long)param_4 + uVar11);
              do {
                *puVar23 = *puVar32;
                lVar28 = lVar28 + 8;
                puVar23 = puVar23 + 1;
                puVar32 = puVar32 + 1;
              } while (lVar28 != 0);
              puVar22 = (ulong *)((long)puVar22 + uVar29);
              param_4 = (ulong *)((long)param_4 + uVar29);
              if (uVar27 == uVar29) goto LAB_002b9f0c;
/* WM - no support for modified copies */
            }
LAB_002b9efc:
            do {
              puVar14 = (ulong *)((long)param_4 + 1);
              *(char *)puVar22 = (char)*param_4;
              puVar22 = (ulong *)((long)puVar22 + 1);
              param_4 = puVar14;
            } while (puVar14 != puVar15);
          }
LAB_002b9f0c:
          param_2[3] = param_2[3] + uVar16;
          piVar24 = (int *)param_2[1];
          if (0xffff < uVar16) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
            *(undefined2 *)(piVar24 + 1) = uVar7;
            *piVar24 = iVar25;
            goto joined_r0x002b9cb8;
// WM - proprietary - see LICENSE - do not sell
          }
          *(undefined2 *)(piVar24 + 1) = uVar7;
          *piVar24 = iVar25;
          if (uVar30 - 3 < 0x10000) goto LAB_002b9f38;
LAB_002b9cbc:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
          *(short *)((long)piVar24 + 6) = (short)uVar30 + -3;
          piVar24 = piVar24 + 2;
          param_2[1] = (long)piVar24;
          iVar25 = *(int *)(param_1 + 300);
        }
        else {
          uVar27 = *param_4;
          puVar14[1] = param_4[1];
          *puVar14 = uVar27;
          if (0x10 < uVar16) {
            lVar28 = param_2[3];
            uVar27 = param_4[2];
            *(ulong *)(lVar28 + 0x18) = param_4[3];
            *(ulong *)(lVar28 + 0x10) = uVar27;
            if (0x10 < uVar16 - 0x10) {
              puVar14 = (ulong *)(lVar28 + 0x20);
              puVar22 = param_4 + 6;
              do {
                uVar27 = puVar22[-2];
/* wm:donate: donate/README.md */
                puVar14[1] = puVar22[-1];
                *puVar14 = uVar27;
                uVar27 = *puVar22;
                puVar14[3] = puVar22[1];
                puVar14[2] = uVar27;
                puVar14 = puVar14 + 4;
                puVar22 = puVar22 + 4;
              } while (puVar14 < (ulong *)(lVar28 + uVar16));
              goto LAB_002b9f0c;
            }
          }
          param_2[3] = param_2[3] + uVar16;
          piVar24 = (int *)param_2[1];
          *(undefined2 *)(piVar24 + 1) = uVar7;
          *piVar24 = iVar25;
joined_r0x002b9cb8:
          if (0xffff < uVar30 - 3) goto LAB_002b9cbc;
LAB_002b9f38:
          *(short *)((long)piVar24 + 6) = (short)uVar30 + -3;
/*  chat: discord.gg/sdkhDjTex  */
          piVar24 = piVar24 + 2;
          param_2[1] = (long)piVar24;
          iVar25 = *(int *)(param_1 + 300);
        }
        if (iVar25 != 0) {
          uVar35 = *(uint *)(param_1 + 0x2c);
          uVar16 = (ulong)uVar35;
          iVar9 = (int)puVar37 - (int)(ulong *)(lVar12 + uVar16);
          iVar25 = 8;
          if (iVar9 + 1U < 8) {
            iVar25 = iVar9 + 1;
          }
          iVar9 = 0;
          if ((ulong *)(lVar12 + uVar16) <= puVar37) {
            iVar9 = iVar25;
          }
          if (uVar35 < iVar9 + uVar35) {
            lVar28 = *(long *)(param_1 + 0x70);
            lVar19 = *(long *)(param_1 + 0x38);
            iVar25 = *(int *)(param_1 + 0x34);
            uVar27 = *(ulong *)(param_1 + 0x60);
            do {
              if (uVar17 == 5) {
                uVar29 = *(long *)(lVar12 + uVar16) * -0x30e4432345000000;
LAB_002b9fe0:
                uVar29 = (uVar29 ^ uVar27) >> ((ulong)(0x38 - iVar25) & 0x3f);
                uVar10 = (uint)uVar29;
                uVar29 = (ulong)(((uint)(uVar29 >> 8) & 0xffffff) << (ulong)(uVar18 & 0x1f));
                lVar26 = lVar28 + uVar29 * 4;
                Hint_Prefetch(lVar26,0,0,0);
                if (4 < uVar6) goto LAB_002ba02c;
LAB_002b9fa0:
/* more drops soon - github.com/pengussy */
                lVar26 = lVar19 + uVar29;
LAB_002b9fa4:
                Hint_Prefetch(lVar26,0,0,0);
              }
              else {
                if (uVar17 == 6) {
                  uVar29 = *(long *)(lVar12 + uVar16) * -0x30e4432340650000;
                  goto LAB_002b9fe0;
                }
                uVar10 = (*(int *)(lVar12 + uVar16) * -0x61c8864f ^ (uint)uVar27) >>
                         (ulong)(0x18U - iVar25 & 0x1f);
                uVar29 = (ulong)((uVar10 >> 8) << (ulong)(uVar18 & 0x1f));
                lVar26 = lVar28 + uVar29 * 4;
                Hint_Prefetch(lVar26,0,0,0);
                if (uVar6 < 5) goto LAB_002b9fa0;
LAB_002ba02c:
                Hint_Prefetch(lVar26 + 0x40,0,0,0);
                lVar26 = lVar19 + uVar29;
                Hint_Prefetch(lVar26,0,0,0);
                if (uVar6 != 5) {
                  lVar26 = lVar26 + 0x20;
                  goto LAB_002b9fa4;
                }
/* no support for modified copies */
              }
              *(uint *)(param_1 + 0x40 + (uVar16 & 7) * 4) = uVar10;
              uVar16 = uVar16 + 1;
            } while (iVar9 + uVar35 != uVar16);
          }
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar15 + uVar30);
        if (uVar36 == 0) {
          puVar14 = param_4;
          uVar35 = uVar34;
          goto LAB_002ba234;
        }
        if (puVar37 < param_4) {
LAB_002b9a98:
          puVar15 = param_4;
          uVar35 = uVar34;
        }
        else {
          uVar35 = uVar34;
          do {
            uVar34 = uVar35;
            uVar35 = uVar36;
            if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar35)) {
              uVar36 = uVar35;
              goto LAB_002b9a98;
/*  keep the notice, keep the source honest  */
            }
            puVar15 = (ulong *)((long)param_4 + 4);
            lVar28 = -(ulong)uVar35;
            puVar14 = (ulong *)((long)puVar15 + lVar28);
            puVar22 = puVar15;
            if (puVar15 < puVar33) {
              if (*puVar14 == *puVar15) {
                lVar19 = 0;
                puVar22 = (ulong *)((long)param_4 + 0xc);
                puVar14 = (ulong *)((long)param_4 + 0xc + lVar28);
                do {
                  if (puVar33 <= puVar22) goto joined_r0x002ba104;
                  uVar16 = *puVar14;
                  uVar30 = *puVar22;
                  lVar19 = lVar19 + 8;
                  puVar22 = puVar22 + 1;
                  puVar14 = puVar14 + 1;
                } while (uVar16 == uVar30);
                uVar30 = uVar30 ^ uVar16;
                uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                uVar30 = lVar19 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
              }
              else {
                uVar30 = *puVar15 ^ *puVar14;
                uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
              }
            }
// donate: donate/README.md
            else {
joined_r0x002ba104:
              if (puVar22 < (ulong *)((long)puVar2 - 3U)) {
                if ((int)*puVar14 == (int)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 4);
                  puVar14 = (ulong *)((long)puVar14 + 4);
                }
              }
              if (puVar22 < (ulong *)((long)puVar2 - 1U)) {
                if ((short)*puVar14 == (short)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 2);
                  puVar14 = (ulong *)((long)puVar14 + 2);
                }
              }
              if (puVar22 < puVar2) {
                if ((char)*puVar14 == (char)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 1);
                }
              }
              uVar30 = (long)puVar22 - (long)puVar15;
            }
            if (param_4 <= puVar13) {
              puVar15 = (ulong *)param_2[3];
              uVar16 = *param_4;
              puVar15[1] = param_4[1];
              *puVar15 = uVar16;
              piVar24 = (int *)param_2[1];
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
            }
            *(undefined2 *)(piVar24 + 1) = 0;
            *piVar24 = 1;
            uVar7 = (undefined2)(uVar30 + 1);
            if (uVar30 + 1 < 0x10000) {
              *(undefined2 *)((long)piVar24 + 6) = uVar7;
              param_2[1] = (long)(piVar24 + 2);
            }
            else {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar24 - *param_2) >> 3);
              *(undefined2 *)((long)piVar24 + 6) = uVar7;
              param_2[1] = (long)(piVar24 + 2);
            }
            param_4 = (ulong *)((long)param_4 + uVar30 + 4);
            uVar36 = uVar34;
// keep the notice, keep the source honest
            if (uVar34 == 0) {
              uVar34 = uVar35;
              goto LAB_002b9a98;
            }
            piVar24 = piVar24 + 2;
            puVar15 = param_4;
          } while (param_4 <= puVar37);
        }
      }
    } while (puVar15 < puVar37);
  }
  uVar17 = uVar4;
  if (uVar4 <= uVar8) {
    uVar17 = 0;
  }
  if (uVar5 <= uVar8) {
    uVar5 = 0;
  }
  if (uVar35 != 0) {
    uVar17 = uVar35;
  }
  if (uVar35 == 0 || uVar4 <= uVar8) {
    uVar4 = uVar5;
  }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  if (uVar36 != 0) {
    uVar4 = uVar36;
  }
  *param_3 = uVar17;
  param_3[1] = uVar4;
  return (long)puVar2 - (long)param_4;
}

