/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dce4:20481ef0e6
 */

undefined8 FUN_0003dce4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    *(undefined1 *)*param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
  }
  pcVar3 = (code *)func_0x0011ab24(&SUB_003e945c);
  pcVar4 = (code *)func_0x0011ab24(&SUB_0044803c);
  (*pcVar4)();
  lVar5 = (*pcVar3)();
  lStack_48 = lVar5;
  pcVar3 = (code *)func_0x0011ab24(&SUB_003e945c);
  pcVar4 = (code *)func_0x0011ab24(&SUB_003ec13c);
  (*pcVar4)();
  lVar6 = (*pcVar3)();
  if (lVar5 == 0 || lVar6 == 0) {
    uVar9 = 0;
  }
/* no support for modified copies - github.com/pengussy */
  else {
    lStack_50 = lVar6;
    pcVar3 = (code *)func_0x0011ab24(&SUB_003ea920);
    lVar7 = (*pcVar3)(lVar5,lVar6);
    if (lVar7 == lVar5) {
      lStack_50 = 0;
      pcVar3 = (code *)func_0x0011ab24(&SUB_003e95ac);
      (*pcVar3)(lVar5,0x100);
      uVar11 = 0;
      do {
        uVar8 = (ulong)*(char *)((long)param_1 + 0x17);
        if ((long)uVar8 < 0) {
          uVar8 = param_1[1];
        }
        if (uVar8 <= uVar11) {
          iVar2 = FUN_003e95bc(lStack_48,0xb,0,0);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          if (iVar2 == 1) {
            plStack_58 = (long *)0x0;
            lVar5 = FUN_003e95bc(lVar6,0x73,0,&plStack_58);
            uVar9 = 0;
            lVar6 = lStack_50;
            if ((lVar5 < 1) || (plStack_58 == (long *)0x0)) goto joined_r0x0003df20;
            if (*plStack_58 == 0) {
              if (*(char *)((long)param_2 + 0x17) < '\0') {
                *(undefined1 *)*param_2 = 0;
                param_2[1] = 0;
                uVar9 = 1;
              }
              else {
                *(undefined1 *)param_2 = 0;
                *(undefined1 *)((long)param_2 + 0x17) = 0;
                uVar9 = 1;
              }
              goto joined_r0x0003df20;
            }
            if (plStack_58[1] != 0) {
              func_0x0012851c(param_2);
              uVar9 = 1;
              lVar6 = lStack_50;
              goto joined_r0x0003df20;
            }
          }
          break;
        }
        plStack_58 = (long *)0x0;
        plVar10 = (long *)(uVar8 - uVar11);
        pcVar3 = (code *)func_0x0011ab24(&SUB_003e9d20);
        plVar1 = (long *)*param_1;
/*  stripping the watermark breaks the license  */
        if (-1 < *(char *)((long)param_1 + 0x17)) {
          plVar1 = param_1;
        }
        iVar2 = (*pcVar3)(lStack_48,(long)plVar1 + uVar11,plVar10,&plStack_58);
        plVar1 = plStack_58;
        if ((iVar2 != 1 || plStack_58 == (long *)0x0) || plStack_58 > plVar10) {
          plVar1 = (long *)0x0;
        }
        uVar11 = (long)plVar1 + uVar11;
      } while ((iVar2 == 1 && plStack_58 != (long *)0x0) && plStack_58 <= plVar10);
    }
    uVar9 = 0;
    lVar6 = lStack_50;
  }
joined_r0x0003df20:
  lStack_50 = lVar6;
/* stripping the watermark breaks the license */
  if (lVar6 != 0) {
    pcVar3 = (code *)func_0x0011ab24(&SUB_003eaa98);
    (*pcVar3)(lVar6);
  }
  lVar6 = lStack_48;
  if (lStack_48 != 0) {
    pcVar3 = (code *)func_0x0011ab24(&SUB_003eaa98);
    (*pcVar3)(lVar6);
  }
  return uVar9;
}

