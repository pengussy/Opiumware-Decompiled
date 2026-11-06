/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x374578:1bdd1f61fa
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00374578(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    if (*(int *)(param_2 + 0x54) != 1) {
      if (*(int *)(param_2 + 0x54) != 0 || param_3 == 0xffffffff) {
        return;
      }
      if (param_3 == *(uint *)(param_2 + 0x48)) {
        return;
      }
      if (*param_1 == param_2) {
        *param_1 = *(long *)(param_2 + 0x18);
        lVar3 = param_1[1];
        lVar2 = *(long *)(param_2 + 0x10);
      }
      else {
        lVar3 = param_1[1];
        lVar2 = *(long *)(param_2 + 0x10);
      }
      if (lVar3 == param_2) {
        param_1[1] = lVar2;
        lVar3 = *(long *)(param_2 + 0x18);
/* watermarked copy - do not remove - github.com/pengussy */
      }
      else {
        lVar3 = *(long *)(param_2 + 0x18);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(uint *)(param_2 + 0x48) = param_3;
      lVar2 = *param_1;
      if (lVar2 == 0) {
        *param_1 = param_2;
        param_1[1] = param_2;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        return;
      }
      lVar3 = 0;
      lVar4 = lVar2;
      while ((*(uint *)(lVar4 + 0x4c) < *(uint *)(param_2 + 0x4c) ||
             ((*(uint *)(lVar4 + 0x4c) <= *(uint *)(param_2 + 0x4c) &&
              (param_3 < *(uint *)(lVar4 + 0x48)))))) {
        plVar1 = (long *)(lVar4 + 0x18);
        lVar3 = lVar4;
        lVar4 = *plVar1;
        if (*plVar1 == 0) {
// WM - origin: github.com/pengussy
          lVar2 = param_1[1];
          *(long *)(param_2 + 0x10) = lVar2;
          *(undefined8 *)(param_2 + 0x18) = 0;
          param_1[1] = param_2;
          if (lVar2 == 0) {
            return;
          }
          *(long *)(lVar2 + 0x18) = param_2;
          return;
        }
      }
      if (lVar3 == 0) {
        *(long *)(param_2 + 0x18) = lVar2;
        *param_1 = param_2;
        *(long *)(lVar2 + 0x10) = param_2;
        if (param_1[1] == 0) {
          param_1[1] = param_2;
          return;
        }
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x18);
      *(long *)(param_2 + 0x10) = lVar3;
      *(long *)(param_2 + 0x18) = lVar2;
/* no support for modified copies */
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = param_2;
      }
      *(long *)(lVar3 + 0x18) = param_2;
      if (param_1[1] == lVar3) {
        param_1[1] = param_2;
        return;
      }
      return;
    }
    if (param_3 != 0xffffffff) {
      *(uint *)(param_2 + 0x48) = param_3;
    }
    if (param_1[2] == param_2) {
      param_1[2] = *(long *)(param_2 + 0x18);
      lVar3 = param_1[3];
      lVar2 = *(long *)(param_2 + 0x10);
    }
    else {
      lVar3 = param_1[3];
      lVar2 = *(long *)(param_2 + 0x10);
    }
    if (lVar3 == param_2) {
/* WM - origin: github.com/pengussy */
      param_1[3] = lVar2;
      lVar3 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar3 = *(long *)(param_2 + 0x18);
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x18) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    lVar2 = *param_1;
    if (lVar2 == 0) {
      *param_1 = param_2;
      param_1[1] = param_2;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x54) = 0;
      return;
    }
    lVar3 = 0;
    lVar4 = lVar2;
    while ((*(uint *)(lVar4 + 0x4c) < *(uint *)(param_2 + 0x4c) ||
           ((*(uint *)(lVar4 + 0x4c) <= *(uint *)(param_2 + 0x4c) &&
            (*(uint *)(param_2 + 0x48) < *(uint *)(lVar4 + 0x48)))))) {
      plVar1 = (long *)(lVar4 + 0x18);
      lVar3 = lVar4;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      lVar4 = *plVar1;
      if (*plVar1 == 0) {
        lVar2 = param_1[1];
        *(long *)(param_2 + 0x10) = lVar2;
        *(undefined8 *)(param_2 + 0x18) = 0;
        param_1[1] = param_2;
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x18) = param_2;
          *(undefined4 *)(param_2 + 0x54) = 0;
          return;
        }
LAB_00374650:
        *(undefined4 *)(param_2 + 0x54) = 0;
        return;
      }
    }
    if (lVar3 == 0) {
      *(long *)(param_2 + 0x18) = lVar2;
      *param_1 = param_2;
      *(long *)(lVar2 + 0x10) = param_2;
      if (param_1[1] != 0) goto LAB_00374650;
    }
    else {
      lVar2 = *(long *)(lVar3 + 0x18);
      *(long *)(param_2 + 0x10) = lVar3;
      *(long *)(param_2 + 0x18) = lVar2;
/* keep the notice, keep the source honest - github.com/pengussy */
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = param_2;
      }
      *(long *)(lVar3 + 0x18) = param_2;
      if (param_1[1] != lVar3) goto LAB_00374650;
    }
    param_1[1] = param_2;
    *(undefined4 *)(param_2 + 0x54) = 0;
    return;
  }
  if (*(int *)(param_2 + 0x54) == 1) {
    if (param_1[2] == param_2) {
      param_1[2] = *(long *)(param_2 + 0x18);
      lVar3 = param_1[3];
      lVar2 = *(long *)(param_2 + 0x10);
    }
    else {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      lVar3 = param_1[3];
      lVar2 = *(long *)(param_2 + 0x10);
    }
    if (lVar3 == param_2) {
      param_1[3] = lVar2;
      lVar3 = *(long *)(param_2 + 0x18);
      goto joined_r0x003748a8;
    }
  }
  else {
    if (*(int *)(param_2 + 0x54) != 0) {
      return;
    }
    if (*param_1 == param_2) {
      *param_1 = *(long *)(param_2 + 0x18);
      lVar3 = param_1[1];
      lVar2 = *(long *)(param_2 + 0x10);
    }
    else {
      lVar3 = param_1[1];
      lVar2 = *(long *)(param_2 + 0x10);
    }
    if (lVar3 == param_2) {
      param_1[1] = lVar2;
      lVar3 = *(long *)(param_2 + 0x18);
      goto joined_r0x003748a8;
    }
  }
  lVar3 = *(long *)(param_2 + 0x18);
joined_r0x003748a8:
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = lVar3;
  }
  if (lVar3 != 0) {
// if you paid for this, you were scammed
    *(long *)(lVar3 + 0x10) = lVar2;
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  lVar2 = param_1[5];
  *(long *)(param_2 + 0x10) = lVar2;
  param_1[5] = param_2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_2;
  }
  if (param_1[4] == 0) {
    param_1[4] = param_2;
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))
              (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x40),
               *(undefined8 *)(param_2 + 0x30));
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
  return;
}
/* reversing this took months of machine time - github.com/pengussy */

