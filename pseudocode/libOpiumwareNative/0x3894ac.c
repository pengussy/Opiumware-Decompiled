/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3894ac:e0a9336ffe
 */

ulong FUN_003894ac(long param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  long extraout_x1;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  long lStack_70;
  byte bStack_60;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar5 = func_0x00375624(*(undefined8 *)(param_1 + 8));
  if (((uVar3 & 1) == (uint)uVar5) && (*(code **)(param_1 + 0x70) != (code *)0x0)) {
    uVar9 = param_2[7];
    uVar5 = (**(code **)(param_1 + 0x70))
/*  proprietary - see LICENSE - do not sell  */
                      (*(uint *)(param_2 + 0x20) >> 1 & 1,*(undefined8 *)(param_1 + 0x78));
    bVar1 = uVar9 >> 2 < uVar5;
    uVar9 = param_2[0x20];
    if ((uVar9 & 0xff00) != 0x300) goto LAB_00389574;
LAB_0038953c:
    uVar5 = func_0x00388f80(param_2[0xe]);
    uVar9 = param_2[0x20];
    if ((int)uVar5 == 0) goto LAB_00389574;
    if ((uVar9 & 0xff00) == 0x300) {
      param_2[0x20] = uVar9 & 0xffffffffffff00ff | 0x400;
      uVar5 = FUN_00388994(param_2[0xe]);
      param_2[0xe] = 0;
      goto LAB_00389598;
    }
  }
  else {
    bVar1 = true;
    uVar9 = param_2[0x20];
    if ((uVar9 & 0xff00) == 0x300) goto LAB_0038953c;
LAB_00389574:
    if (((uVar9 & 0x800000ff00) == 0x8000000200) &&
       (uVar5 = func_0x00388f80(param_2[0xe]), (int)uVar5 != 0)) {
LAB_00389598:
      if (((ulong)param_2[0x20] >> 0x27 & 1) != 0) {
        param_2[0x20] = param_2[0x20] & 0xffffff7fffffffff;
        lVar8 = *(long *)(param_1 + 0x60) + -1;
        *(long *)(param_1 + 0x60) = lVar8;
        if (lVar8 == 0) {
          uVar5 = func_0x00375630(*(undefined8 *)(param_1 + 8));
        }
      }
    }
  }
  uVar9 = param_2[0x20];
  if (((uVar9 & 0x6000000000) == 0x2000000000) &&
     (((uVar9 & 0xff0000) == 0 || ((uVar9 >> 0x24 & 1) != 0)))) {
    if (((uVar9 & 0xff00) == 0) || (uVar3 = (uint)uVar9 >> 8 & 0xff, uVar3 == 4)) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      param_2[0x20] = uVar9 | 0x4000000000;
    }
    else {
      uVar2 = 0x4000000000;
      if (uVar3 != 6) {
        uVar2 = 0;
      }
      uVar9 = uVar2 | uVar9;
      param_2[0x20] = uVar9;
      if (uVar3 != 6) goto LAB_0038961c;
    }
    plVar6 = (long *)(param_1 + 0x30);
    lVar8 = *plVar6;
    plVar7 = param_2 + 4;
    *plVar7 = lVar8;
    *(long **)(lVar8 + 8) = plVar7;
    *plVar6 = (long)plVar7;
    param_2[5] = (long)plVar6;
    uVar9 = param_2[0x20];
  }
LAB_0038961c:
  bVar4 = false;
  if ((uVar9 & 0x4000000000) == 0) {
    bVar4 = bVar1;
  }
  if (bVar4) {
    if ((((uVar9 & 0xff0000) == 0) || ((uVar9 & 0xff0000) != 0x10000)) ||
       (0xfffffffd < ((uint)uVar9 >> 0x10 & 0xff) - 7)) {
LAB_00389664:
      if ((uVar9 & 0xc00000000) == 0) {
        if ((((uint)uVar9 >> 0x1b & 1) == 0) && (((uint)uVar9 >> 8 & 0xff) - 1 < 3)) {
          uStack_88 = 2;
// more drops soon - github.com/pengussy
          uVar5 = func_0x00388a10(param_2[0xe],0,auStack_80,auStack_58,&uStack_88);
          if ((int)uVar5 == 0) {
            uVar9 = param_2[0x20];
          }
          else {
            lVar8 = func_0x0037a6bc(param_2 + 0x10,0);
            uVar5 = func_0x002f78b4(param_2 + 0x10);
            uVar9 = param_2[0x20];
            if (((lStack_70 == 0 & bStack_60 >> 1) != 0) || (uStack_78 < uVar5 + lVar8))
            goto LAB_0038966c;
          }
        }
        goto LAB_00389740;
      }
    }
    else if ((uVar9 >> 0x21 & 1) == 0) {
      uVar5 = func_0x0037aaec(param_2 + 0x14,0);
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar9 = param_2[0x20];
      if ((int)uVar5 == 0) goto LAB_00389664;
    }
LAB_0038966c:
    if (((uint)uVar9 >> 0x18 & 1) != 0) goto LAB_00389774;
    plVar6 = (long *)(param_1 + 0x10);
    lVar8 = *plVar6;
    *(long **)(lVar8 + 8) = param_2;
    *param_2 = lVar8;
    *plVar6 = (long)param_2;
    param_2[1] = (long)plVar6;
    if (*(long *)(param_1 + 0x68) == 0) {
      *(long **)(param_1 + 0x68) = param_2;
    }
    uVar9 = param_2[0x20] | 0x1000000;
  }
  else {
LAB_00389740:
    if (((uint)uVar9 >> 0x18 & 1) == 0) goto LAB_00389774;
    plVar6 = *(long **)(param_1 + 0x68);
    if (plVar6 == param_2) {
      plVar7 = (long *)param_2[1];
      if (plVar7 == (long *)(param_1 + 0x10)) {
        plVar7 = (long *)plVar7[1];
      }
/* WM - keep the notice, keep the source honest */
      plVar6 = (long *)0x0;
      if (plVar7 != (long *)(param_1 + 0x10)) {
        plVar6 = plVar7;
      }
      *(long **)(param_1 + 0x68) = plVar6;
    }
    if (plVar6 == param_2) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    lVar8 = *param_2;
    plVar6 = (long *)param_2[1];
    *(long **)(lVar8 + 8) = plVar6;
    *plVar6 = lVar8;
    *param_2 = 0;
    param_2[1] = 0;
    uVar9 = param_2[0x20] & 0xfffffffffeffffff;
  }
  param_2[0x20] = uVar9;
LAB_00389774:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar5;
  }
  ___stack_chk_fail();
  uVar3 = (uint)*(ulong *)(extraout_x1 + 0x100) >> 8 & 0xff;
  uVar5 = (ulong)uVar3;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      *(ulong *)(extraout_x1 + 0x100) = *(ulong *)(extraout_x1 + 0x100) & 0xffffffffffff00ff | 0x200
      ;
      return 1;
    }
    uVar5 = 1;
  }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  return uVar5;
}

