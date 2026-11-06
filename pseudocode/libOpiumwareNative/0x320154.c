/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x320154:cbd3a73f7a
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00320154(long param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  func_0x003255d0(param_1,param_2,0);
  uVar6 = *param_2;
  if (0 < (int)uVar6) {
    uVar18 = uVar6;
    do {
      lVar11 = *(long *)(param_2 + 2) + (ulong)uVar18 * 0x48;
      uVar6 = uVar18;
      if ((*(int *)(lVar11 + -0x20) != 0) || (*(long *)(lVar11 + -0x18) != 0)) break;
      uVar6 = uVar18 - 1;
      *param_2 = uVar6;
      bVar1 = 0 < (int)uVar18;
      uVar18 = uVar6;
    } while (uVar6 != 0 && bVar1);
  }
  if (*(int *)(param_1 + 4) < 1) {
LAB_00320210:
    iVar15 = 0;
    iVar14 = 0;
    uVar18 = param_2[1];
    uVar9 = (ulong)uVar6;
    if ((int)uVar6 <= (int)uVar18) goto LAB_00320228;
LAB_00320404:
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    uVar6 = 8;
    if (uVar18 != 0) {
      uVar6 = uVar18 + (int)uVar18 / 2;
    }
    uVar18 = (uint)uVar9;
    if ((int)uVar6 <= (int)uVar18) {
      uVar6 = uVar18;
    }
    uVar5 = func_0x002fd6d8((long)(int)uVar6 * 0x48);
    if (*(long *)(param_2 + 2) != 0) {
      _memcpy(uVar5,*(long *)(param_2 + 2),(long)(int)*param_2 * 0x48);
      func_0x002fda6c(*(undefined8 *)(param_2 + 2));
    }
    *(undefined8 *)(param_2 + 2) = uVar5;
    *param_2 = uVar18;
    param_2[1] = uVar6;
    uVar18 = param_2[5];
    uVar6 = param_2[4] + iVar15;
    if ((int)uVar6 <= (int)uVar18) goto LAB_0032046c;
LAB_0032023c:
    uVar19 = 8;
    if (uVar18 != 0) {
      uVar19 = uVar18 + (int)uVar18 / 2;
    }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    if ((int)uVar19 <= (int)uVar6) {
      uVar19 = uVar6;
    }
    lVar11 = func_0x002fd6d8(-(ulong)(uVar19 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar19 << 1);
    if (*(long *)(param_2 + 6) != 0) {
      _memcpy(lVar11,*(long *)(param_2 + 6),(long)(int)param_2[4] << 1);
      func_0x002fda6c(*(undefined8 *)(param_2 + 6));
    }
    *(long *)(param_2 + 6) = lVar11;
    param_2[4] = uVar6;
    param_2[5] = uVar19;
    uVar18 = *param_2;
    uVar9 = (ulong)uVar18;
    lVar11 = lVar11 + (long)(int)uVar6 * 2 + (long)iVar15 * -2;
    if (*(int *)(param_1 + 4) < 2) goto LAB_003202a4;
LAB_00320488:
    lVar21 = 0;
    lVar26 = *(long *)(param_2 + 2) + (long)(int)uVar18 * 0x48 + (long)iVar14 * -0x48;
    lVar10 = 1;
    do {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      lVar22 = *(long *)(param_1 + 0x10);
      lVar17 = lVar22 + lVar21;
      if (*(int *)(lVar17 + 0x20) != 0) {
        lVar16 = (long)*(int *)(lVar17 + 0x20) * 0x48;
        _memcpy(lVar26,*(undefined8 *)(lVar17 + 0x28),lVar16);
        lVar26 = lVar26 + lVar16;
      }
      if (*(int *)(lVar17 + 0x30) != 0) {
        lVar17 = (long)*(int *)(lVar17 + 0x30) * 2;
        _memcpy(lVar11,*(undefined8 *)(lVar22 + lVar21 + 0x38),lVar17);
        lVar11 = lVar11 + lVar17;
      }
      lVar10 = lVar10 + 1;
      lVar21 = lVar21 + 0x20;
    } while (lVar10 < *(int *)(param_1 + 4));
    uVar9 = (ulong)*param_2;
    *(long *)(param_2 + 0x12) = lVar11;
    uVar6 = 0;
    if (*param_2 != 0) goto LAB_00320520;
  }
  else {
    if ((int)uVar6 < 1) {
// WM - proprietary - see LICENSE - do not sell
      plVar20 = (long *)0x0;
      iVar13 = 0;
    }
    else {
      lVar11 = *(long *)(param_2 + 2) + (ulong)uVar6 * 0x48;
      plVar20 = (long *)(lVar11 + -0x48);
      if (plVar20 == (long *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(lVar11 + -0x20) + *(int *)(lVar11 + -0x24);
      }
    }
    if (*(int *)(param_1 + 4) == 1) goto LAB_00320210;
    iVar14 = 0;
    iVar15 = 0;
    lVar11 = 1;
    do {
      puVar2 = (uint *)(*(long *)(param_1 + 0x10) + lVar11 * 0x20);
      uVar6 = *puVar2;
      uVar7 = (ulong)uVar6;
// WM - no support for modified copies
      uVar18 = uVar6 - 1;
      uVar9 = (ulong)uVar18;
      if ((int)uVar6 < 1) {
LAB_003202d4:
        uVar18 = puVar2[4];
      }
      else {
        lVar10 = *(long *)(puVar2 + 2) + uVar7 * 0x48;
        if ((*(int *)(lVar10 + -0x20) == 0) && (*(long *)(lVar10 + -0x18) == 0)) {
          *puVar2 = uVar18;
          if (uVar18 != 0 && plVar20 != (long *)0x0) goto LAB_00320348;
LAB_00320328:
          uVar6 = (uint)uVar9;
joined_r0x0032032c:
          if ((int)uVar6 < 1) goto LAB_003202d4;
        }
        else {
          uVar9 = uVar7;
          if (uVar6 == 0 || plVar20 == (long *)0x0) goto LAB_00320328;
LAB_00320348:
          plVar4 = *(long **)(puVar2 + 2);
          if ((((((*plVar20 == *plVar4 && plVar20[1] == plVar4[1]) && plVar20[2] == plVar4[2]) &&
                plVar20[3] == plVar4[3]) && (int)plVar20[4] == (int)plVar4[4]) && (plVar20[6] == 0))
             && (plVar4[6] == 0)) {
            *(int *)(plVar20 + 5) = (int)plVar20[5] + (int)plVar4[5];
            iVar13 = (int)plVar4[5] + iVar13;
            _memmove(plVar4,plVar4 + 9,uVar9 * 0x48 + -0x48);
            uVar6 = *puVar2 - 1;
            uVar9 = (ulong)uVar6;
            *puVar2 = uVar6;
            goto joined_r0x0032032c;
          }
        }
        uVar6 = (uint)uVar9;
        plVar20 = (long *)(*(long *)(puVar2 + 2) + uVar9 * 0x48 + -0x48);
        uVar18 = puVar2[4];
/* wm:proprietary - see LICENSE - do not sell */
        piVar12 = (int *)(*(long *)(puVar2 + 2) + 0x28);
        do {
          piVar12[-1] = iVar13;
          iVar13 = *piVar12 + iVar13;
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 0x12;
        } while (uVar9 != 0);
      }
      iVar14 = uVar6 + iVar14;
      iVar15 = uVar18 + iVar15;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 4));
    uVar18 = param_2[1];
    uVar9 = (ulong)(*param_2 + iVar14);
    if ((int)uVar18 < (int)(*param_2 + iVar14)) goto LAB_00320404;
LAB_00320228:
    *param_2 = (uint)uVar9;
    uVar18 = param_2[5];
    uVar6 = param_2[4] + iVar15;
// WM - chat: discord.gg/sdkhDjTex
    if ((int)uVar18 < (int)uVar6) goto LAB_0032023c;
LAB_0032046c:
    uVar18 = (uint)uVar9;
    param_2[4] = uVar6;
    lVar11 = *(long *)(param_2 + 6) + (long)(int)uVar6 * 2 + (long)iVar15 * -2;
    if (1 < *(int *)(param_1 + 4)) goto LAB_00320488;
LAB_003202a4:
    *(long *)(param_2 + 0x12) = lVar11;
    if ((int)uVar9 == 0) {
      uVar6 = 0;
    }
    else {
LAB_00320520:
      lVar11 = *(long *)(param_2 + 2);
      uVar6 = (uint)uVar9;
      if (*(long *)(lVar11 + (long)(int)uVar6 * 0x48 + -0x18) == 0) {
        uVar7 = (ulong)(int)uVar6;
        lVar10 = lVar11 + uVar7 * 0x48;
        iVar13 = *(int *)(lVar10 + -0x20);
        goto joined_r0x003205fc;
      }
    }
  }
  uVar23 = *(undefined8 *)(param_2 + 0x1a);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
/* wm:if you paid for this, you were scammed */
  uVar25 = *(undefined8 *)(param_2 + 0x1e);
  uVar24 = *(undefined8 *)(param_2 + 0x1c);
  uVar18 = param_2[0x20];
  uVar19 = param_2[4];
  if (uVar6 == param_2[1]) {
    uVar3 = 8;
    if (uVar6 != 0) {
      uVar3 = uVar6 + (int)uVar6 / 2;
    }
    if ((int)uVar3 <= (int)(uVar6 + 1)) {
      uVar3 = uVar6 + 1;
    }
    lVar11 = func_0x002fd6d8((long)(int)uVar3 * 0x48);
    if (*(long *)(param_2 + 2) != 0) {
      _memcpy(lVar11,*(long *)(param_2 + 2),(long)(int)*param_2 * 0x48);
      func_0x002fda6c(*(undefined8 *)(param_2 + 2));
    }
    *(long *)(param_2 + 2) = lVar11;
    param_2[1] = uVar3;
    uVar6 = *param_2;
  }
  else {
    lVar11 = *(long *)(param_2 + 2);
  }
  puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar6 * 0x48);
  puVar8[1] = uVar23;
  *puVar8 = uVar5;
  puVar8[3] = uVar25;
  puVar8[2] = uVar24;
  *(uint *)(puVar8 + 4) = uVar18;
// WM - found on a paste site? it was re-uploaded illegally
  *(uint *)((long)puVar8 + 0x24) = uVar19;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[8] = 0;
  puVar8[7] = 0;
  uVar7 = (long)(int)*param_2 + 1;
  *param_2 = (uint)uVar7;
  lVar11 = *(long *)(param_2 + 2);
  lVar10 = lVar11 + uVar7 * 0x48;
  iVar13 = *(int *)(lVar10 + -0x20);
  uVar9 = uVar7;
joined_r0x003205fc:
  plVar20 = (long *)(lVar10 + -0x48);
  if (iVar13 == 0) {
    lVar10 = *(long *)(param_2 + 0x1a);
    lVar11 = *(long *)(param_2 + 0x18);
    lVar26 = *(long *)(param_2 + 0x1e);
    lVar21 = *(long *)(param_2 + 0x1c);
    *(uint *)(plVar20 + 4) = param_2[0x20];
    plVar20[1] = lVar10;
    *plVar20 = lVar11;
    plVar20[3] = lVar26;
    plVar20[2] = lVar21;
  }
  else if ((((*plVar20 != *(long *)(param_2 + 0x18) || plVar20[1] != *(long *)(param_2 + 0x1a)) ||
            plVar20[2] != *(long *)(param_2 + 0x1c)) || plVar20[3] != *(long *)(param_2 + 0x1e)) ||
           *(uint *)(plVar20 + 4) != param_2[0x20]) {
    uVar23 = *(undefined8 *)(param_2 + 0x1a);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar25 = *(undefined8 *)(param_2 + 0x1e);
    uVar24 = *(undefined8 *)(param_2 + 0x1c);
    uVar6 = param_2[0x20];
// watermarked copy - do not remove
    uVar18 = param_2[4];
    uVar19 = (uint)uVar9;
    if (uVar19 == param_2[1]) {
      uVar3 = 8;
      if (uVar19 != 0) {
        uVar3 = uVar19 + (int)uVar19 / 2;
      }
      if ((int)uVar3 <= (int)(uVar19 + 1)) {
        uVar3 = uVar19 + 1;
      }
      lVar11 = func_0x002fd6d8((long)(int)uVar3 * 0x48);
      if (*(long *)(param_2 + 2) != 0) {
        _memcpy(lVar11,*(long *)(param_2 + 2),(long)(int)*param_2 * 0x48);
        func_0x002fda6c(*(undefined8 *)(param_2 + 2));
      }
      *(long *)(param_2 + 2) = lVar11;
      param_2[1] = uVar3;
      uVar7 = (ulong)(int)*param_2;
    }
    puVar8 = (undefined8 *)(lVar11 + uVar7 * 0x48);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    puVar8[1] = uVar23;
    *puVar8 = uVar5;
    puVar8[3] = uVar25;
    puVar8[2] = uVar24;
    *(uint *)(puVar8 + 4) = uVar6;
    *(uint *)((long)puVar8 + 0x24) = uVar18;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[8] = 0;
    puVar8[7] = 0;
    *param_2 = *param_2 + 1;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

