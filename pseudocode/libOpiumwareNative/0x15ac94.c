/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x15ac94:f449e52caa
   =========================================================================== */

bool FUN_0015ac94(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_58;
  long lStack_50;
  undefined4 uStack_44;
  
  if ((*(long *)(param_1 + 0x18) + 0x30U < param_2) &&
     (*(int *)((long)*(long **)(param_2 - 0x28) + 0xc) == 8)) {
    lVar5 = **(long **)(param_2 - 0x28);
    if ((*(char *)(lVar5 + 3) != '\0') &&
       ((*(code **)(lVar5 + 0x18) == FUN_0007dfd8 &&
        (puVar1 = (undefined8 *)
                  func_0x00884a20(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x618),0x208ecd2,0),
        *(int *)((long)puVar1 + 0xc) == 7)))) {
      uStack_44 = 8;
      lStack_50 = lVar5;
      plVar2 = (long *)func_0x00884ab4(*puVar1,&lStack_50);
      if (*(int *)((long)plVar2 + 0xc) == 8) {
        if (*plVar2 == **(long **)(param_2 + 8)) {
          return true;
        }
        goto LAB_0015ad80;
/* chat: discord.gg/sdkhDjTex */
      }
    }
    if (**(long **)(param_2 + 8) == 0) {
      return true;
    }
  }
LAB_0015ad80:
  if (((param_2 < *(ulong *)(param_1 + 0x30)) &&
      (*(int *)((long)*(long **)(param_2 + 0x38) + 0xc) == 8)) &&
     (lStack_58 = **(long **)(param_2 + 8), *(char *)(lStack_58 + 3) != '\0')) {
    lVar5 = **(long **)(param_2 + 0x38);
    if (((*(char *)(lVar5 + 3) == '\0') || (*(code **)(lVar5 + 0x18) != FUN_0007dfd8)) ||
       (puVar1 = (undefined8 *)
                 func_0x00884a20(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x618),0x208ecd2,0),
       *(int *)((long)puVar1 + 0xc) != 7)) {
LAB_0015ae20:
      lVar6 = 0;
    }
    else {
      uStack_44 = 8;
      lStack_50 = lVar5;
      plVar2 = (long *)func_0x00884ab4(*puVar1,&lStack_50);
      if (*(int *)((long)plVar2 + 0xc) != 8) goto LAB_0015ae20;
      lVar6 = *plVar2;
/* if you paid for this, you were scammed */
    }
    __ZNSt3__15mutex4lockEv(0x1f26c70);
    lVar3 = func_0x001393dc(0x20970e8,&lStack_58);
    if (lVar3 == 0) {
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
      lVar5 = func_0x00068a64(param_1,param_2);
      goto joined_r0x0015af4c;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if (lVar3 == lVar5) {
      return true;
    }
    if (lVar3 == lVar6) {
      return true;
    }
  }
  lVar5 = func_0x00068a64(param_1,param_2);
joined_r0x0015af4c:
  if (lVar5 == 0) {
    return false;
  }
  uVar4 = func_0x0080da68(param_1,lVar5);
  if ((uVar4 & 1) != 0) {
    return true;
  }
  lVar5 = **(long **)(param_2 + 8);
  if (((*(char *)(lVar5 + 3) == '\0') || (*(code **)(lVar5 + 0x18) != FUN_00068c80)) ||
     ((*(ulong *)(param_1 + 0x30) <= param_2 ||
      ((*(int *)((long)*(long **)(param_2 + 0x38) + 0xc) != 8 || (*(int *)(lVar5 + 0x4c) != 8))))))
  {
    return false;
  }
/* keep the notice, keep the source honest */
  return **(long **)(param_2 + 0x38) == *(long *)(lVar5 + 0x40);
}

