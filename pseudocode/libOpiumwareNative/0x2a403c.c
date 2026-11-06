/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2a403c:6456eb1404
 */

void FUN_002a403c(int *param_1,uint *param_2,undefined8 param_3,ulong param_4,ulong param_5,
                 undefined8 param_6,ushort *param_7,long param_8,ulong param_9,uint param_10)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  ulong extraout_x8;
  uint uVar14;
/* WM - donate: donate/README.md */
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  short *psVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint *puVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  ulong unaff_x25;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined1 auStack_2d2 [106];
  undefined1 auStack_268 [512];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_4 == param_5) {
    *param_1 = 0;
    uVar12 = 2 < param_4 || param_9._4_4_ == 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
      return;
    }
    goto LAB_002a443c;
  }
  if (param_10 < 4) {
    if (param_9._4_4_ == 0) goto LAB_002a4448;
    if ((param_5 < 1000) && (*param_1 == 2)) goto LAB_002a4470;
    if ((((ulong)(10 - param_10) << (param_9 & 0x3f)) >> 3 <= param_5) &&
       (param_5 >> ((ulong)((int)param_9 - 1) & 0x3f) <= param_4)) goto LAB_002a4448;
  }
  else {
    uVar28 = (uint)param_3;
    if (param_9._4_4_ == 0) {
      uVar19 = 0xffffffffffffffff;
      if (*param_1 != 0) goto LAB_002a4260;
LAB_002a4288:
      unaff_x25 = 0xffffffffffffffff;
    }
    else {
      uVar7 = 8 - (int)param_9;
      uVar14 = 1;
      if (1 < uVar28 + 1) {
        uVar14 = uVar28 + 1;
      }
      uVar15 = (ulong)uVar14;
      if (uVar28 + 1 < 4) {
        uVar17 = 0;
        uVar19 = 0;
LAB_002a4218:
        lVar16 = uVar15 - uVar17;
        psVar18 = (short *)(param_8 + uVar17 * 2);
        puVar21 = param_2 + uVar17;
/*  thanks for reading - discord.gg/sdkhDjTex  */
        do {
          sVar5 = *psVar18;
          if (sVar5 == -1) {
            sVar5 = 1;
          }
          uVar19 = uVar19 + *(int *)(&UNK_01add278 +
                                    (ulong)(uint)((int)sVar5 << (ulong)(uVar7 & 0x1f)) * 4) *
                            *puVar21;
          lVar16 = lVar16 + -1;
          psVar18 = psVar18 + 1;
          puVar21 = puVar21 + 1;
        } while (lVar16 != 0);
      }
      else {
        uVar17 = uVar15 & 0xfffffffc;
        psVar18 = (short *)(param_8 + 4);
        lVar16 = 0;
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        puVar21 = param_2;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        uVar19 = uVar17;
        do {
          sVar5 = psVar18[-2];
          sVar6 = psVar18[-1];
          sVar2 = *psVar18;
          sVar3 = psVar18[1];
          if (sVar5 == -1) {
            sVar5 = 1;
          }
          if (sVar6 == -1) {
            sVar6 = 1;
          }
          if (sVar2 == -1) {
            sVar2 = 1;
          }
          if (sVar3 == -1) {
            sVar3 = 1;
          }
          lVar30 = lVar30 + (ulong)(uint)(*(int *)(&UNK_01add278 +
                                                  (ulong)(uint)((int)sVar2 << (ulong)(uVar7 & 0x1f))
                                                  * 4) * (int)*(undefined8 *)(puVar21 + 2));
          lVar31 = lVar31 + (ulong)(uint)(*(int *)(&UNK_01add278 +
                                                  (ulong)(uint)((int)sVar3 << (ulong)(uVar7 & 0x1f))
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                  * 4) *
                                         (int)((ulong)*(undefined8 *)(puVar21 + 2) >> 0x20));
          lVar16 = lVar16 + (ulong)(uint)(*(int *)(&UNK_01add278 +
                                                  (ulong)(uint)((int)sVar5 << (ulong)(uVar7 & 0x1f))
                                                  * 4) * (int)*(undefined8 *)puVar21);
          lVar29 = lVar29 + (ulong)(uint)(*(int *)(&UNK_01add278 +
                                                  (ulong)(uint)((int)sVar6 << (ulong)(uVar7 & 0x1f))
                                                  * 4) *
                                         (int)((ulong)*(undefined8 *)puVar21 >> 0x20));
          psVar18 = psVar18 + 4;
          uVar19 = uVar19 - 4;
          puVar21 = puVar21 + 4;
        } while (uVar19 != 0);
        uVar19 = lVar16 + lVar30 + lVar29 + lVar31;
        if (uVar17 != uVar15) goto LAB_002a4218;
      }
      uVar19 = uVar19 >> 8;
      if (*param_1 == 0) goto LAB_002a4288;
LAB_002a4260:
      uVar4 = *param_7;
      lVar16 = (long)(1 << (ulong)(uVar4 - 1 & 0x1f));
      if (uVar4 == 0) {
        lVar16 = 1;
      }
      if (param_7[1] < uVar28) goto LAB_002a4288;
      uVar17 = 0;
      uVar15 = (ulong)(uVar28 + 1);
      puVar21 = (uint *)(param_7 + lVar16 * 2);
      puVar25 = param_2;
      do {
// WM - chat: discord.gg/sdkhDjTex
        puVar21 = puVar21 + 2;
        if (*puVar25 != 0) {
          iVar22 = (*puVar21 >> 0x10) + 1;
          uVar14 = iVar22 * 0x100 -
                   (iVar22 * 0x1000000 + (*puVar21 + (1 << (ulong)(uVar4 & 0x1f))) * -0x100 >>
                   (ulong)(uVar4 & 0x1f));
          if ((uint)uVar4 * 0x100 + 0x100 <= uVar14) goto LAB_002a4288;
          uVar17 = uVar17 + (ulong)*puVar25 * (ulong)uVar14;
        }
        uVar15 = uVar15 - 1;
        puVar25 = puVar25 + 1;
      } while (uVar15 != 0);
      unaff_x25 = uVar17 >> 8;
    }
    uVar13 = func_0x002980a4(param_6,param_5,param_3);
    uVar15 = func_0x0029810c(auStack_2d2,uVar13,param_2,param_5,param_3,0x7ff < param_5);
    if (uVar15 < 0xffffffffffffff89) {
      uVar15 = func_0x00297dd0(auStack_268,0x200,auStack_2d2,param_3,uVar13);
    }
    uVar14 = 1;
    if (1 < uVar28 + 1) {
      uVar14 = uVar28 + 1;
    }
    uVar17 = (ulong)uVar14;
    if (uVar28 + 1 < 4) {
      uVar20 = 0;
      uVar28 = 0;
LAB_002a43d4:
      lVar16 = uVar17 - uVar20;
      puVar21 = param_2 + uVar20;
      do {
        uVar14 = *puVar21;
        uVar17 = 0;
        if (param_5 != 0) {
          uVar17 = (uVar14 << 8) / param_5;
        }
        if (uVar14 << 8 < param_5 && uVar14 != 0) {
          uVar17 = 1;
// do not claim this as your own
        }
        uVar28 = uVar28 + *(int *)(&UNK_01add278 + uVar17 * 4) * uVar14;
        lVar16 = lVar16 + -1;
        puVar21 = puVar21 + 1;
      } while (lVar16 != 0);
    }
    else {
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar26 = 0;
      uVar20 = uVar17 & 0xfffffffc;
      puVar21 = param_2 + 2;
      uVar27 = uVar20;
      do {
        uVar28 = puVar21[-2];
        uVar7 = puVar21[-1];
        uVar14 = *puVar21;
        uVar1 = puVar21[1];
        uVar8 = 0;
        if (param_5 != 0) {
          uVar8 = (uVar28 << 8) / param_5;
        }
        uVar9 = 0;
        if (param_5 != 0) {
          uVar9 = (uVar7 << 8) / param_5;
        }
        uVar10 = 0;
        if (param_5 != 0) {
          uVar10 = (uVar14 << 8) / param_5;
        }
        if (uVar28 << 8 < param_5 && uVar28 != 0) {
          uVar8 = 1;
        }
        if (uVar7 << 8 < param_5 && uVar7 != 0) {
          uVar9 = 1;
/* chat: discord.gg/sdkhDjTex */
        }
        if (uVar14 << 8 < param_5 && uVar14 != 0) {
          uVar10 = 1;
        }
        uVar11 = 0;
        if (param_5 != 0) {
          uVar11 = (uVar1 << 8) / param_5;
        }
        if (uVar1 << 8 < param_5 && uVar1 != 0) {
          uVar11 = 1;
        }
        iVar22 = iVar22 + *(int *)(&UNK_01add278 + uVar8 * 4) * uVar28;
        iVar23 = iVar23 + *(int *)(&UNK_01add278 + uVar9 * 4) * uVar7;
        iVar24 = iVar24 + *(int *)(&UNK_01add278 + uVar10 * 4) * uVar14;
        iVar26 = iVar26 + *(int *)(&UNK_01add278 + uVar11 * 4) * uVar1;
        uVar27 = uVar27 - 4;
        puVar21 = puVar21 + 4;
      } while (uVar27 != 0);
      uVar28 = iVar26 + iVar24 + iVar23 + iVar22;
      if (uVar20 != uVar17) goto LAB_002a43d4;
    }
    uVar15 = (ulong)(uVar28 >> 8) + uVar15 * 8;
    if (unaff_x25 < uVar19) goto LAB_002a4440;
// origin: github.com/pengussy
    if (uVar15 < uVar19) goto LAB_002a4440;
  }
  *param_1 = 0;
  uVar12 = 0;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return;
  }
LAB_002a443c:
  do {
    while( true ) {
      param_1 = (int *)___stack_chk_fail(uVar12);
      uVar15 = extraout_x8;
LAB_002a4440:
      if (unaff_x25 <= uVar15) break;
LAB_002a4448:
      *param_1 = 1;
      uVar12 = 2;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
        return;
      }
    }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
LAB_002a4470:
    uVar12 = 3;
  } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_68);
  return;
}

