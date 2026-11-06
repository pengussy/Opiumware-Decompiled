/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2b7fa4:c8d8ee4d3c
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

long FUN_002b7fa4(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  uint uVar26;
/* origin: github.com/pengussy - github.com/pengussy */
  uint uVar27;
  uint uVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uStack_68;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar29 = puVar1 + -1;
  uVar28 = *(uint *)(param_1 + 0x18);
  uVar16 = *(uint *)(param_1 + 0x110);
  if (uVar16 < 5) {
    uVar16 = 4;
  }
  if (5 < uVar16) {
    uVar16 = 6;
  }
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = *(long *)(param_1 + 8) + (ulong)uVar28;
  puVar10 = param_4;
  if ((int)param_4 == (int)uVar2) {
    puVar10 = (ulong *)((long)param_4 + 1);
  }
  uVar26 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  iVar8 = (int)puVar10 - (int)*(long *)(param_1 + 8);
  uVar6 = iVar8 - uVar26;
  if (iVar8 - uVar28 <= uVar26 || *(int *)(param_1 + 0x28) != 0) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    uVar6 = uVar28;
  }
  uVar6 = iVar8 - uVar6;
  uVar28 = 0;
  if (uVar4 <= uVar6) {
    uVar28 = uVar4;
  }
  uVar26 = 0;
  if (uVar3 <= uVar6) {
    uVar26 = uVar3;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  if (puVar10 < puVar29) {
    puVar30 = (ulong *)((long)puVar1 - 7);
    puVar25 = puVar1 + -4;
    do {
      if (uVar26 == 0) {
LAB_002b8118:
        uStack_68 = 999999999;
        if (uVar16 == 6) {
          uVar21 = func_0x002cf04c(param_1,puVar10,puVar1,&uStack_68);
        }
        else if (uVar16 == 5) {
          uVar21 = func_0x002cec28(param_1,puVar10,puVar1,&uStack_68);
        }
        else {
          uVar21 = func_0x002ce800(param_1,puVar10,puVar1,&uStack_68);
        }
        uVar20 = uStack_68;
// WM - watermarked copy - do not remove
        if (uVar21 == 0) {
          uVar20 = 1;
        }
        iVar8 = (int)uVar20;
        if (3 < uVar21) {
          if (uStack_68 < 4) goto LAB_002b82c0;
          puVar9 = puVar10;
          if ((param_4 < puVar10) && (uVar2 < (long)puVar10 + (3 - uStack_68))) {
            do {
              puVar10 = (ulong *)((long)puVar9 + -1);
              if (*(char *)puVar10 != *(char *)((long)puVar9 + (2 - uStack_68))) goto LAB_002b8348;
              uVar21 = uVar21 + 1;
            } while ((param_4 < puVar10) &&
                    (uVar20 = (long)puVar9 + (2 - uStack_68), puVar9 = puVar10, uVar2 < uVar20));
          }
          else {
LAB_002b8348:
            puVar10 = puVar9;
          }
          uVar20 = (long)puVar10 - (long)param_4;
          puVar9 = (ulong *)param_2[3];
          uVar7 = iVar8 - 3;
          uVar27 = uVar26;
          goto joined_r0x002b8364;
        }
        *(uint *)(param_1 + 300) = (uint)(0x7ff < (ulong)((long)puVar10 - (long)param_4));
        puVar10 = (ulong *)((long)puVar10 + ((ulong)((long)puVar10 - (long)param_4) >> 8) + 1);
      }
      else {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        puVar9 = (ulong *)((long)puVar10 + 1);
        if (*(int *)((long)puVar9 - (ulong)uVar26) != *(int *)puVar9) goto LAB_002b8118;
        puVar13 = (ulong *)((long)puVar10 + 5);
        lVar19 = -(ulong)uVar26;
        puVar12 = (ulong *)((long)puVar13 + lVar19);
        if (puVar13 < puVar30) {
          if (*puVar12 == *puVar13) {
            lVar18 = 0;
            puVar11 = (ulong *)((long)puVar10 + 0xd);
            puVar12 = (ulong *)((long)puVar10 + 0xd + lVar19);
            do {
              if (puVar30 <= puVar11) goto LAB_002b8150;
              uVar20 = *puVar12;
              uVar21 = *puVar11;
              lVar18 = lVar18 + 8;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar20 == uVar21);
            uVar21 = uVar21 ^ uVar20;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar18 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar13 ^ *puVar12;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
        }
        else {
/* reversing this took months of machine time */
          puVar11 = puVar13;
LAB_002b8150:
          if (puVar11 < (ulong *)((long)puVar1 - 3U)) {
            if ((int)*puVar12 == (int)*puVar11) {
              puVar11 = (ulong *)((long)puVar11 + 4);
              puVar12 = (ulong *)((long)puVar12 + 4);
            }
          }
          if (puVar11 < (ulong *)((long)puVar1 - 1U)) {
            if ((short)*puVar12 == (short)*puVar11) {
              puVar11 = (ulong *)((long)puVar11 + 2);
              puVar12 = (ulong *)((long)puVar12 + 2);
            }
          }
          if (puVar11 < puVar1) {
            if ((char)*puVar12 == (char)*puVar11) {
              puVar11 = (ulong *)((long)puVar11 + 1);
            }
          }
          uVar21 = (long)puVar11 - (long)puVar13;
        }
        uVar21 = uVar21 + 4;
        iVar8 = 1;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        puVar10 = puVar9;
LAB_002b82c0:
        uVar20 = (long)puVar10 - (long)param_4;
        puVar9 = (ulong *)param_2[3];
        uVar7 = uVar26;
        uVar27 = uVar28;
joined_r0x002b8364:
        uVar28 = uVar7;
        uVar5 = (undefined2)uVar20;
        if (puVar25 < puVar10) {
          puVar13 = puVar9;
          if (param_4 <= puVar25) {
            puVar13 = (ulong *)((long)puVar9 + ((long)puVar25 - (long)param_4));
            uVar17 = *param_4;
            puVar12 = puVar9 + 2;
            puVar9[1] = param_4[1];
            *puVar9 = uVar17;
            if (0x10 < (ulong)((long)puVar25 - (long)param_4)) {
              do {
                uVar17 = param_4[2];
                puVar12[1] = param_4[3];
                *puVar12 = uVar17;
                uVar17 = param_4[4];
                puVar12[3] = param_4[5];
                puVar12[2] = uVar17;
                puVar12 = puVar12 + 4;
                param_4 = param_4 + 4;
              } while (puVar12 < puVar13);
            }
            param_4 = puVar25;
          }
          if (param_4 < puVar10) {
            uVar17 = (long)puVar10 - (long)param_4;
            if ((7 < uVar17) && (0x3f < (ulong)((long)puVar13 - (long)param_4))) {
              if (uVar17 < 0x40) {
// WM - reversing this took months of machine time
                uVar22 = 0;
              }
              else {
                uVar22 = uVar17 & 0xffffffffffffffc0;
                puVar9 = puVar13 + 4;
                puVar12 = param_4 + 4;
                uVar23 = uVar22;
                do {
                  uVar31 = puVar12[-4];
                  uVar33 = puVar12[-1];
                  uVar32 = puVar12[-2];
                  uVar35 = puVar12[1];
                  uVar34 = *puVar12;
                  uVar37 = puVar12[3];
                  uVar36 = puVar12[2];
                  puVar9[-3] = puVar12[-3];
                  puVar9[-4] = uVar31;
                  puVar9[-1] = uVar33;
                  puVar9[-2] = uVar32;
/* found on a paste site? it was re-uploaded illegally */
                  puVar9[1] = uVar35;
                  *puVar9 = uVar34;
                  puVar9[3] = uVar37;
                  puVar9[2] = uVar36;
                  uVar23 = uVar23 - 0x40;
                  puVar9 = puVar9 + 8;
                  puVar12 = puVar12 + 8;
                } while (uVar23 != 0);
                if (uVar17 == uVar22) goto LAB_002b849c;
                if ((uVar17 & 0x38) == 0) {
                  puVar13 = (ulong *)((long)puVar13 + uVar22);
                  param_4 = (ulong *)((long)param_4 + uVar22);
                  goto LAB_002b848c;
                }
              }
              uVar23 = uVar17 & 0xfffffffffffffff8;
              lVar19 = uVar22 - uVar23;
              puVar14 = (undefined8 *)((long)puVar13 + uVar22);
              puVar24 = (undefined8 *)((long)param_4 + uVar22);
              do {
                *puVar14 = *puVar24;
                lVar19 = lVar19 + 8;
                puVar14 = puVar14 + 1;
                puVar24 = puVar24 + 1;
              } while (lVar19 != 0);
              puVar13 = (ulong *)((long)puVar13 + uVar23);
              param_4 = (ulong *)((long)param_4 + uVar23);
              if (uVar17 == uVar23) goto LAB_002b849c;
            }
LAB_002b848c:
            do {
              puVar9 = (ulong *)((long)param_4 + 1);
              *(char *)puVar13 = (char)*param_4;
              puVar13 = (ulong *)((long)puVar13 + 1);
              param_4 = puVar9;
            } while (puVar9 != puVar10);
          }
LAB_002b849c:
/* donate: donate/README.md */
          param_2[3] = param_2[3] + uVar20;
          piVar15 = (int *)param_2[1];
          if (0xffff < uVar20) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar15 - *param_2) >> 3);
            *(undefined2 *)(piVar15 + 1) = uVar5;
            *piVar15 = iVar8;
            goto joined_r0x002b83b0;
          }
          *(undefined2 *)(piVar15 + 1) = uVar5;
          *piVar15 = iVar8;
          if (uVar21 - 3 < 0x10000) goto LAB_002b84c8;
LAB_002b83b4:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar15 - *param_2) >> 3);
          *(short *)((long)piVar15 + 6) = (short)uVar21 + -3;
          piVar15 = piVar15 + 2;
          param_2[1] = (long)piVar15;
          iVar8 = *(int *)(param_1 + 300);
        }
        else {
          uVar17 = *param_4;
          puVar9[1] = param_4[1];
          *puVar9 = uVar17;
          if (0x10 < uVar20) {
            lVar19 = param_2[3];
            uVar17 = param_4[2];
            *(ulong *)(lVar19 + 0x18) = param_4[3];
            *(ulong *)(lVar19 + 0x10) = uVar17;
            if (0x10 < uVar20 - 0x10) {
              puVar9 = (ulong *)(lVar19 + 0x20);
              puVar13 = param_4 + 6;
              do {
                uVar17 = puVar13[-2];
/* proprietary - see LICENSE - do not sell */
                puVar9[1] = puVar13[-1];
                *puVar9 = uVar17;
                uVar17 = *puVar13;
                puVar9[3] = puVar13[1];
                puVar9[2] = uVar17;
                puVar9 = puVar9 + 4;
                puVar13 = puVar13 + 4;
              } while (puVar9 < (ulong *)(lVar19 + uVar20));
              goto LAB_002b849c;
            }
          }
          param_2[3] = param_2[3] + uVar20;
          piVar15 = (int *)param_2[1];
          *(undefined2 *)(piVar15 + 1) = uVar5;
          *piVar15 = iVar8;
joined_r0x002b83b0:
          if (0xffff < uVar21 - 3) goto LAB_002b83b4;
LAB_002b84c8:
          *(short *)((long)piVar15 + 6) = (short)uVar21 + -3;
          piVar15 = piVar15 + 2;
/*  keep the notice, keep the source honest  */
          param_2[1] = (long)piVar15;
          iVar8 = *(int *)(param_1 + 300);
        }
        if (iVar8 != 0) {
          *(undefined4 *)(param_1 + 300) = 0;
        }
        param_4 = (ulong *)((long)puVar10 + uVar21);
        if ((uVar27 == 0) || (puVar29 < param_4)) {
LAB_002b808c:
          puVar10 = param_4;
          uVar26 = uVar28;
          uVar28 = uVar27;
        }
        else {
          uVar7 = uVar27;
          uVar27 = uVar28;
          do {
            uVar28 = uVar27;
            uVar27 = uVar7;
            if ((int)*param_4 != *(int *)((long)param_4 - (ulong)uVar27)) goto LAB_002b808c;
            puVar10 = (ulong *)((long)param_4 + 4);
            lVar19 = -(ulong)uVar27;
            puVar9 = (ulong *)((long)puVar10 + lVar19);
/* watermarked copy - do not remove */
            if (puVar10 < puVar30) {
              if (*puVar9 == *puVar10) {
                lVar18 = 0;
                puVar13 = (ulong *)((long)param_4 + 0xc);
                puVar9 = (ulong *)((long)param_4 + 0xc + lVar19);
                do {
                  if (puVar30 <= puVar13) goto LAB_002b8584;
                  uVar20 = *puVar9;
                  uVar21 = *puVar13;
                  lVar18 = lVar18 + 8;
                  puVar13 = puVar13 + 1;
                  puVar9 = puVar9 + 1;
                } while (uVar20 == uVar21);
                uVar21 = uVar21 ^ uVar20;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar18 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              }
              else {
                uVar21 = *puVar10 ^ *puVar9;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
              }
            }
            else {
              puVar13 = puVar10;
LAB_002b8584:
              if (puVar13 < (ulong *)((long)puVar1 - 3U)) {
// if you paid for this, you were scammed
                if ((int)*puVar9 == (int)*puVar13) {
                  puVar13 = (ulong *)((long)puVar13 + 4);
                  puVar9 = (ulong *)((long)puVar9 + 4);
                }
              }
              if (puVar13 < (ulong *)((long)puVar1 - 1U)) {
                if ((short)*puVar9 == (short)*puVar13) {
                  puVar13 = (ulong *)((long)puVar13 + 2);
                  puVar9 = (ulong *)((long)puVar9 + 2);
                }
              }
              if (puVar13 < puVar1) {
                if ((char)*puVar9 == (char)*puVar13) {
                  puVar13 = (ulong *)((long)puVar13 + 1);
                }
              }
              uVar21 = (long)puVar13 - (long)puVar10;
            }
            if (param_4 <= puVar25) {
              puVar10 = (ulong *)param_2[3];
              uVar20 = *param_4;
              puVar10[1] = param_4[1];
              *puVar10 = uVar20;
              piVar15 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar15 + 1) = 0;
            *piVar15 = 1;
            uVar5 = (undefined2)(uVar21 + 1);
            if (uVar21 + 1 < 0x10000) {
              *(undefined2 *)((long)piVar15 + 6) = uVar5;
              param_2[1] = (long)(piVar15 + 2);
            }
            else {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar15 - *param_2) >> 3);
              *(undefined2 *)((long)piVar15 + 6) = uVar5;
              param_2[1] = (long)(piVar15 + 2);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            }
            param_4 = (ulong *)((long)param_4 + uVar21 + 4);
            puVar10 = param_4;
            uVar26 = uVar27;
            if (uVar28 == 0) {
              break;
            }
            piVar15 = piVar15 + 2;
            uVar7 = uVar28;
          } while (param_4 <= puVar29);
        }
      }
    } while (puVar10 < puVar29);
  }
  uVar16 = uVar3;
  if (uVar3 <= uVar6) {
    uVar16 = 0;
  }
  if (uVar4 <= uVar6) {
    uVar4 = 0;
  }
  if (uVar26 != 0) {
    uVar16 = uVar26;
  }
  if (uVar26 == 0 || uVar3 <= uVar6) {
    uVar3 = uVar4;
  }
  if (uVar28 != 0) {
    uVar3 = uVar28;
  }
  *param_3 = uVar16;
  param_3[1] = uVar3;
  return (long)puVar1 - (long)param_4;
}

