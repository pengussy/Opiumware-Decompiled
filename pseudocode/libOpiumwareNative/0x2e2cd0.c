/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2e2cd0:80c1e3d4fa
 */

void FUN_002e2cd0(long *param_1,long param_2,long *param_3,int *param_4,undefined8 param_5,
                 undefined1 *param_6,long param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
/* wm:chat: discord.gg/sdkhDjTex */
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  if (*(uint *)(param_2 + 0x1c) < *(uint *)(param_2 + 0x18)) {
    uVar5 = 1;
  }
/*  if you paid for this, you were scammed  */
  else if (*(long *)(param_2 + 0xf8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
    if (*(int *)(*(long *)(param_2 + 0xf8) + 0x8c) != 0) {
      uVar5 = 3;
    }
  }
  uVar18 = *(uint *)(param_2 + 0x110);
  UNRECOVERED_JUMPTABLE = (code *)func_0x0029d5f4(*(undefined4 *)(param_2 + 0x118),param_5,uVar5);
  if (*(uint *)(param_2 + 0x118) < 7) {
    puVar1 = param_6 + param_7;
    uVar8 = param_1[1];
    uVar7 = param_1[3];
    if (uVar7 <= uVar8 || param_7 == 0) {
LAB_002e2e20:
      uVar18 = (int)param_6 - *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x2c) + 0x400U < uVar18) {
        uVar12 = (uVar18 - *(int *)(param_2 + 0x2c)) - 0x400;
        if (0x1ff < uVar12) {
          uVar12 = 0x200;
        }
        *(uint *)(param_2 + 0x2c) = uVar18 - uVar12;
      }
      if (*(int *)(param_2 + 0x118) == 2) {
        func_0x002a5eac(param_2,param_6,0,0);
      }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      else if (*(int *)(param_2 + 0x118) == 1) {
        FUN_002ae980(param_2,param_6,0,0);
      }
                    /* WARNING: Could not recover jumptable at 0x002e3278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,(long)puVar1 - (long)param_6);
      return;
    }
    puVar23 = (undefined8 *)(puVar1 + -0x20);
    do {
      puVar19 = (ulong *)(*param_1 + uVar8 * 0xc);
      uVar25 = *puVar19;
      uVar6 = uVar25 >> 0x20;
      uVar12 = (uint)puVar19[1];
      uVar14 = (uint)(uVar25 >> 0x20);
      uVar13 = (uint)((long)puVar1 - (long)param_6);
      if (uVar13 < uVar12 + uVar14) {
        uVar26 = 0;
        if (uVar18 <= uVar13 - uVar14) {
          uVar26 = uVar25;
/* wm:if you paid for this, you were scammed */
        }
        uVar4 = uVar13 - uVar14;
        if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
          uVar26 = 0;
          uVar4 = uVar12;
        }
        uVar12 = uVar4;
        if ((uVar13 != 0) && (uVar8 != uVar7)) {
          uVar25 = (long)puVar1 - (long)param_6 & 0xffffffff;
          puVar9 = (uint *)(*param_1 + uVar8 * 0xc + 8);
          do {
            uVar8 = uVar8 + 1;
            uVar13 = puVar9[-1];
            uVar3 = uVar25 - uVar13;
            if (uVar25 < uVar13 || uVar3 == 0) {
              puVar9[-1] = uVar13 - (int)uVar25;
              break;
            }
            puVar9[-1] = 0;
            uVar13 = *puVar9;
            uVar25 = uVar3 - uVar13;
            if (uVar3 < uVar13) {
              uVar13 = uVar13 - (int)uVar3;
              *puVar9 = uVar13;
              if (uVar13 < uVar18) {
                if (uVar8 < uVar7) {
                  puVar9[2] = puVar9[2] + uVar13;
                }
                param_1[1] = uVar8;
              }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
              break;
            }
            *puVar9 = 0;
            param_1[1] = uVar8;
            puVar9 = puVar9 + 3;
          } while (uVar25 != 0 && uVar7 != uVar8);
        }
      }
      else {
        param_1[1] = uVar8 + 1;
        uVar26 = uVar25;
      }
      iVar24 = (int)uVar26;
      if (iVar24 == 0) goto LAB_002e2e20;
      uVar13 = (int)param_6 - *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x2c) + 0x400U < uVar13) {
        uVar14 = (uVar13 - *(int *)(param_2 + 0x2c)) - 0x400;
        if (0x1ff < uVar14) {
          uVar14 = 0x200;
        }
        *(uint *)(param_2 + 0x2c) = uVar13 - uVar14;
      }
      if (*(int *)(param_2 + 0x118) == 2) {
        func_0x002a5eac(param_2,param_6,0,0);
      }
      else if (*(int *)(param_2 + 0x118) == 1) {
        FUN_002ae980(param_2,param_6,0,0);
      }
      uVar8 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,uVar6);
      *(undefined8 *)(param_4 + 1) = *(undefined8 *)param_4;
      *param_4 = iVar24;
      puVar2 = (undefined8 *)(param_6 + uVar6);
      puVar10 = (undefined8 *)((long)puVar2 - uVar8);
      puVar15 = (undefined8 *)param_3[3];
// WM - donate: donate/README.md
      if (puVar23 < puVar2) {
        puVar16 = puVar15;
        if (puVar10 <= puVar23) {
          puVar16 = (undefined8 *)((long)puVar15 + ((long)puVar23 - (long)puVar10));
          uVar27 = *puVar10;
          puVar15[1] = puVar10[1];
          *puVar15 = uVar27;
          if (0x10 < (ulong)((long)puVar23 - (long)puVar10)) {
            puVar15 = puVar15 + 2;
            puVar10 = (undefined8 *)(param_6 + (uVar6 - uVar8));
            do {
              uVar27 = puVar10[2];
              puVar15[1] = puVar10[3];
              *puVar15 = uVar27;
              uVar27 = puVar10[4];
              puVar15[3] = puVar10[5];
              puVar15[2] = uVar27;
              puVar15 = puVar15 + 4;
              puVar10 = puVar10 + 4;
            } while (puVar15 < puVar16);
          }
          puVar10 = puVar23;
        }
        if (puVar10 < puVar2) {
          param_6 = param_6 + (uVar6 - (long)puVar10);
          if (((undefined1 *)0x7 < param_6) && (0x3f < (ulong)((long)puVar16 - (long)puVar10))) {
            if (param_6 < (undefined1 *)0x40) {
              puVar20 = (undefined1 *)0x0;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
            }
            else {
              puVar20 = (undefined1 *)((ulong)param_6 & 0xffffffffffffffc0);
              puVar15 = puVar16 + 4;
              puVar17 = puVar10 + 4;
              puVar21 = puVar20;
              do {
                uVar27 = puVar17[-4];
                uVar29 = puVar17[-1];
                uVar28 = puVar17[-2];
                uVar31 = puVar17[1];
                uVar30 = *puVar17;
                uVar33 = puVar17[3];
                uVar32 = puVar17[2];
                puVar15[-3] = puVar17[-3];
                puVar15[-4] = uVar27;
                puVar15[-1] = uVar29;
                puVar15[-2] = uVar28;
                puVar15[1] = uVar31;
                *puVar15 = uVar30;
                puVar15[3] = uVar33;
                puVar15[2] = uVar32;
                puVar21 = puVar21 + -0x40;
                puVar15 = puVar15 + 8;
                puVar17 = puVar17 + 8;
              } while (puVar21 != (undefined1 *)0x0);
              if (param_6 == puVar20) goto LAB_002e31a0;
              if (((ulong)param_6 & 0x38) == 0) {
// stripping the watermark breaks the license
                puVar16 = (undefined8 *)((long)puVar16 + (long)puVar20);
                puVar10 = (undefined8 *)((long)puVar10 + (long)puVar20);
                goto LAB_002e3190;
              }
            }
            puVar21 = (undefined1 *)((ulong)param_6 & 0xfffffffffffffff8);
            lVar22 = (long)puVar20 - (long)puVar21;
            puVar15 = (undefined8 *)((long)puVar10 + (long)puVar20);
            puVar17 = (undefined8 *)((long)puVar16 + (long)puVar20);
            do {
              *puVar17 = *puVar15;
              lVar22 = lVar22 + 8;
              puVar15 = puVar15 + 1;
              puVar17 = puVar17 + 1;
            } while (lVar22 != 0);
            puVar16 = (undefined8 *)((long)puVar16 + (long)puVar21);
            puVar10 = (undefined8 *)((long)puVar10 + (long)puVar21);
            if (param_6 == puVar21) goto LAB_002e31a0;
          }
LAB_002e3190:
          do {
            puVar15 = (undefined8 *)((long)puVar10 + 1);
            *(undefined1 *)puVar16 = *(undefined1 *)puVar10;
            puVar16 = (undefined8 *)((long)puVar16 + 1);
            puVar10 = puVar15;
          } while (puVar15 != puVar2);
        }
LAB_002e31a0:
        param_3[3] = param_3[3] + uVar8;
        piVar11 = (int *)param_3[1];
        if (0xffff < uVar8) {
          *(undefined4 *)(param_3 + 9) = 1;
          *(int *)((long)param_3 + 0x4c) = (int)((ulong)((long)piVar11 - *param_3) >> 3);
        }
/*  donate: donate/README.md  */
      }
      else {
        uVar27 = *puVar10;
        puVar15[1] = puVar10[1];
        *puVar15 = uVar27;
        if (0x10 < uVar8) {
          lVar22 = param_3[3];
          uVar27 = puVar10[2];
          *(undefined8 *)(lVar22 + 0x18) = puVar10[3];
          *(undefined8 *)(lVar22 + 0x10) = uVar27;
          if (0x10 < uVar8 - 0x10) {
            puVar15 = (undefined8 *)(lVar22 + 0x20);
            puVar10 = (undefined8 *)(param_6 + (uVar6 - uVar8) + 0x30);
            do {
              uVar27 = puVar10[-2];
              puVar15[1] = puVar10[-1];
              *puVar15 = uVar27;
              uVar27 = *puVar10;
              puVar15[3] = puVar10[1];
              puVar15[2] = uVar27;
              puVar15 = puVar15 + 4;
// no support for modified copies
              puVar10 = puVar10 + 4;
            } while (puVar15 < (undefined8 *)(lVar22 + uVar8));
            goto LAB_002e31a0;
          }
        }
        param_3[3] = param_3[3] + uVar8;
        piVar11 = (int *)param_3[1];
      }
      *(short *)(piVar11 + 1) = (short)uVar8;
      *piVar11 = iVar24 + 3;
      uVar8 = (ulong)uVar12 - 3;
      if (0xffff < uVar8) {
        *(undefined4 *)(param_3 + 9) = 2;
        *(int *)((long)param_3 + 0x4c) = (int)((ulong)((long)piVar11 - *param_3) >> 3);
      }
      *(short *)((long)piVar11 + 6) = (short)uVar8;
      param_3[1] = (long)(piVar11 + 2);
      param_6 = (undefined1 *)((long)puVar2 + (ulong)uVar12);
      uVar8 = param_1[1];
      uVar7 = param_1[3];
      if ((uVar7 <= uVar8) || (puVar1 <= param_6)) goto LAB_002e2e20;
    } while( true );
  }
/* if you paid for this, you were scammed - github.com/pengussy */
  *(long **)(param_2 + 0x120) = param_1;
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,param_7);
  uVar18 = (int)param_1[2] + (int)param_7;
  if (uVar18 != 0) {
    uVar6 = param_1[3];
    uVar8 = param_1[1];
    uVar7 = uVar8;
    if (uVar8 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar8 < uVar6) {
      piVar11 = (int *)(*param_1 + uVar8 * 0xc + 8);
      do {
        uVar12 = uVar18 - (*piVar11 + piVar11[-1]);
        if (uVar18 < (uint)(*piVar11 + piVar11[-1])) {
          param_1[2] = (ulong)uVar18;
          if (uVar8 != uVar6) {
            return;
          }
          goto LAB_002e2de0;
        }
        uVar8 = uVar8 + 1;
        param_1[1] = uVar8;
        if (uVar12 == 0) goto LAB_002e2de0;
        piVar11 = piVar11 + 3;
        uVar18 = uVar12;
      } while (uVar7 != uVar8);
    }
    if (uVar7 != uVar6) {
      return;
    }
  }
LAB_002e2de0:
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  param_1[2] = 0;
  return;
}

