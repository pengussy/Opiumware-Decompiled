/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2a36cc:d42c3794a1
 */

void FUN_002a36cc(ulong *param_1,ulong *param_2,undefined8 param_3,long param_4,ulong param_5,
                 ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
  bVar7 = *(int *)(param_4 + 0x60) != 1;
  bVar6 = 1 < *(int *)(param_4 + 0x1c) - 1U;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  bVar8 = (int)param_8 == 0;
  lVar3 = -0xfffffe;
  if (bVar8 || bVar6) {
    lVar3 = -0xdabffffe;
  }
  uVar13 = 0xfffffe;
  if (bVar8 || bVar6) {
    uVar13 = 0xdabffffe;
  }
  lVar1 = param_5 + param_6;
  uVar5 = param_6;
  if (uVar13 <= param_6) {
    uVar5 = uVar13;
  }
  uVar4 = lVar1 + lVar3;
  if (param_6 <= uVar13) {
    uVar4 = param_5;
  }
  iVar14 = (int)lVar1;
  if (param_6 == 0) {
    if (param_2 == (ulong *)0x0 || bVar7) goto LAB_002a3880;
  }
  else {
    if (uVar4 == *param_1) {
      uVar12 = param_1[2];
      uVar13 = (ulong)(uint)param_1[3];
      uVar9 = (ulong)*(uint *)((long)param_1 + 0x1c);
    }
    else {
      uVar12 = param_1[1];
      uVar10 = (uint)param_1[3];
      uVar13 = *param_1 - uVar12;
      iVar11 = (int)uVar13;
      *(int *)(param_1 + 3) = iVar11;
      *(uint *)((long)param_1 + 0x1c) = uVar10;
      param_1[1] = uVar4 - uVar13;
      param_1[2] = uVar12;
      uVar9 = (ulong)uVar10;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (iVar11 - uVar10 < 8) {
        *(int *)((long)param_1 + 0x1c) = iVar11;
        uVar9 = uVar13;
      }
    }
    uVar2 = uVar4 + uVar5;
    *param_1 = uVar2;
    uVar13 = uVar13 & 0xffffffff;
    if (uVar12 + (uVar9 & 0xffffffff) < uVar2 && uVar4 < uVar12 + uVar13) {
      uVar9 = uVar2 - uVar12;
      if (uVar13 <= uVar2 - uVar12) {
        uVar9 = uVar13;
      }
      *(int *)((long)param_1 + 0x1c) = (int)uVar9;
    }
    if (param_2 == (ulong *)0x0 || bVar7) goto LAB_002a3880;
    if (uVar4 == *param_2) {
      uVar12 = param_2[2];
      uVar13 = (ulong)(uint)param_2[3];
      uVar9 = (ulong)*(uint *)((long)param_2 + 0x1c);
    }
    else {
      uVar12 = param_2[1];
      uVar10 = (uint)param_2[3];
      uVar13 = *param_2 - uVar12;
      iVar11 = (int)uVar13;
      *(int *)(param_2 + 3) = iVar11;
      *(uint *)((long)param_2 + 0x1c) = uVar10;
      param_2[1] = uVar4 - uVar13;
      param_2[2] = uVar12;
      uVar9 = (ulong)uVar10;
      if (iVar11 - uVar10 < 8) {
        *(int *)((long)param_2 + 0x1c) = iVar11;
        uVar9 = uVar13;
/* WM - found on a paste site? it was re-uploaded illegally */
      }
    }
    *param_2 = uVar2;
    if ((uVar12 + (uVar9 & 0xffffffff) < uVar2) &&
       (uVar13 = uVar13 & 0xffffffff, uVar4 < uVar12 + uVar13)) {
      uVar9 = uVar2 - uVar12;
      if (uVar13 <= uVar2 - uVar12) {
        uVar9 = uVar13;
      }
      *(int *)((long)param_2 + 0x1c) = (int)uVar9;
    }
  }
  if (*(int *)(param_4 + 0x30) == 0) {
    iVar11 = iVar14 - (int)param_2[1];
  }
  else {
    iVar11 = 0;
  }
  *(int *)(param_2 + 6) = iVar11;
  func_0x002e1b74(param_2,uVar4,lVar1);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
LAB_002a3880:
  uVar10 = *(int *)(param_4 + 0xc) + 3;
  if (uVar10 <= *(int *)(param_4 + 8) + 1U) {
    uVar10 = *(int *)(param_4 + 8) + 1;
  }
  if (0x1e < uVar10) {
    uVar10 = 0x1f;
  }
  uVar9 = (ulong)(uint)(1 << (ulong)(uVar10 & 0x1f));
  uVar13 = lVar1 - uVar9;
  if (uVar5 <= uVar9) {
    uVar13 = uVar4;
  }
  if (uVar9 <= uVar5) {
    uVar5 = uVar9;
  }
  iVar11 = iVar14 - (int)param_1[1];
  if (*(int *)(param_4 + 0x30) != 0) {
    iVar11 = 0;
  }
  *(int *)(param_1 + 5) = iVar11;
  *(int *)((long)param_1 + 0x2c) = (int)uVar13 - (int)param_1[1];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_4 + 0xa4);
  if (8 < uVar5) {
    FUN_002a0c8c(param_1,param_3,param_4,uVar13,lVar1);
    iVar11 = *(int *)(param_4 + 0x1c);
    if (iVar11 < 6) {
      if (iVar11 - 3U < 3) {
        if (*(int *)((long)param_1 + 0x8c) == 0) {
          if (*(int *)(param_4 + 0xa0) == 1) {
            _bzero(param_1[7],1L << ((ulong)*(uint *)(param_4 + 0xc) & 0x3f));
            func_0x002b7e04(param_1,lVar1 + -8);
          }
          else {
            func_0x002b7bd8(param_1,lVar1 + -8);
          }
/*  origin: github.com/pengussy  */
        }
        else {
          FUN_002b7808(param_1,lVar1 + -8);
        }
      }
      else if (iVar11 == 1) {
        FUN_002ae980(param_1,lVar1,param_7,param_8);
      }
      else if (iVar11 == 2) {
        FUN_002a5eac(param_1,lVar1,param_7,param_8);
      }
    }
    else if (iVar11 - 6U < 4) {
      func_0x002e3290(param_1,lVar1 + -8,lVar1);
    }
    *(int *)((long)param_1 + 0x2c) = iVar14 - (int)param_1[1];
  }
  return;
}

