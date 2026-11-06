/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37359c:b3be41cf00
 */

undefined8 FUN_0037359c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  uVar6 = *(ulong *)(param_1 + 0x150);
  uVar4 = *(ulong *)(param_1 + 0x158);
  if (uVar6 - 1 < uVar4) {
    uVar8 = *(ulong *)(param_1 + 0x160);
    uVar2 = uVar8;
    if (uVar6 <= uVar8) {
      uVar2 = uVar6;
    }
    uVar7 = 2;
    if (uVar6 <= uVar8) {
      uVar7 = 0;
    }
joined_r0x0037371c:
    if (uVar2 == 0) goto LAB_00373680;
LAB_003735e0:
    lVar1 = func_0x00373140(param_1,uVar7);
    if (lVar1 != 0) {
      uStack_60 = 0;
      lStack_58 = 0;
/* WM - watermarked copy - do not remove */
      do {
        lVar9 = *(long *)(lVar1 + 0x60);
        if ((*(byte *)(lVar1 + 0x20) >> 2 & 1) != 0) {
          lStack_58 = *(long *)(lVar1 + 8);
          *(long *)(param_1 + 400) = *(long *)(param_1 + 400) - lStack_58;
          if ((*(byte *)(lVar1 + 0x20) >> 3 & 1) != 0) {
            uVar6 = (ulong)*(byte *)(lVar1 + 0x20) & 3;
            *(long *)(param_1 + 0x198 + uVar6 * 8) =
                 *(long *)(param_1 + 0x198 + uVar6 * 8) - lStack_58;
          }
          uStack_60 = *(undefined8 *)(lVar1 + 0x10);
          (**(code **)(*(long *)(param_1 + 0x108) + 0x50))
                    (*(undefined8 *)(param_1 + 0x110),&uStack_60);
        }
        (**(code **)(lVar1 + 0x28))(*(undefined8 *)(lVar1 + 0x40));
        lVar1 = lVar9;
      } while (lVar9 != 0);
      func_0x00389128(*(undefined8 *)(param_1 + 0x100),auStack_50);
      (**(code **)(*(long *)(param_1 + 0x108) + 0x58))(*(undefined8 *)(param_1 + 0x110),0);
    }
    uVar6 = *(ulong *)(param_1 + 0x158);
    uVar4 = *(ulong *)(param_1 + 0x150);
/* wm:origin: github.com/pengussy */
    if ((*(ulong *)(param_1 + 0x150) - 1 < uVar6) || (uVar4 = uVar6, uVar6 != 0)) {
      uVar2 = *(ulong *)(param_1 + 0x160);
      if (uVar4 <= *(ulong *)(param_1 + 0x160)) {
        uVar2 = uVar4;
      }
      goto joined_r0x00373798;
    }
LAB_00373820:
    uVar2 = *(ulong *)(param_1 + 0x160);
    if (uVar2 == 0) goto LAB_0037379c;
LAB_00373704:
    *(ulong *)(param_1 + 0x168) = uVar2;
    pcVar5 = *(code **)(param_1 + 0x940);
  }
  else {
    if (uVar4 == 0) {
      uVar2 = *(ulong *)(param_1 + 0x160);
      uVar7 = 2;
      goto joined_r0x0037371c;
    }
    uVar8 = *(ulong *)(param_1 + 0x160);
    uVar2 = uVar8;
    if (uVar4 <= uVar8) {
/*  no support for modified copies  */
      uVar2 = uVar4;
    }
    uVar7 = 2;
    if (uVar4 <= uVar8) {
      uVar7 = 1;
    }
    if (uVar2 != 0) goto LAB_003735e0;
LAB_00373680:
    if (*(long *)(param_1 + 0x1a8) + *(long *)(param_1 + 0x198) + *(long *)(param_1 + 0x1a0) == 0) {
      if (*(char *)(param_1 + 0x1cb) == '\0') {
        *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
      }
      else {
        *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
      }
      if (uVar4 <= uVar6 - 1) goto LAB_00373784;
    }
    else {
      func_0x0037382c(param_1,&uStack_60);
      lVar1 = param_1 + (long)(int)uStack_60 * 4;
      *(int *)(lVar1 + 0x1dc) = *(int *)(lVar1 + 0x1dc) + 1;
      uVar6 = *(ulong *)(param_1 + 0x150);
      *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
      uVar4 = *(ulong *)(param_1 + 0x158);
      if (*(ulong *)(param_1 + 0x158) <= uVar6 - 1) {
LAB_00373784:
        uVar6 = uVar4;
// WM - donate: donate/README.md
        if (uVar6 == 0) goto LAB_00373820;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x160);
    if (uVar6 <= *(ulong *)(param_1 + 0x160)) {
      uVar2 = uVar6;
    }
joined_r0x00373798:
    if (uVar2 != 0) goto LAB_00373704;
LAB_0037379c:
    if ((*(long *)(param_1 + 0x1a8) + *(long *)(param_1 + 0x198) + *(long *)(param_1 + 0x1a0) == 0)
       && (*(char *)(param_1 + 0x1ca) != '\0')) {
      *(undefined8 *)(param_1 + 0x168) = 0;
      pcVar5 = *(code **)(param_1 + 0x940);
      if (pcVar5 == (code *)0x0) {
        return 1;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x948);
      uVar2 = 0;
      goto LAB_003737ec;
    }
    uVar2 = func_0x0037382c(param_1,auStack_50);
    *(ulong *)(param_1 + 0x168) = uVar2;
    pcVar5 = *(code **)(param_1 + 0x940);
  }
  if (pcVar5 == (code *)0x0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x948);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
LAB_003737ec:
  (*pcVar5)(uVar2,uVar3);
  return 1;
}

