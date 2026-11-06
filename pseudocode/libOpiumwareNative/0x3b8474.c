/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b8474:bf9c560520
 */

undefined8 FUN_003b8474(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x15:
    iVar2 = func_0x003aa4a8();
    if (iVar2 != 1) {
/* WM - origin: github.com/pengussy */
      return 4;
    }
    uVar4 = FUN_0034d4d0(param_1);
    iVar2 = (int)uVar4;
    goto joined_r0x003b86a8;
  case 0x17:
    iVar2 = func_0x003aa4a8();
    if (iVar2 != 1) {
      return 4;
    }
    if ((*(int *)(param_1 + 0x48) == 0x100) || (uVar4 = FUN_0034d4d0(param_1), (int)uVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x9d0) = 1;
      return 2;
    }
    return uVar4;
  case 0x18:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
      return 2;
    }
    iVar2 = **(int **)(param_1 + 0x18);
    if (iVar2 < 0x304) {
      return 2;
    }
    if (iVar2 == 0x10000) {
      return 2;
    }
    uVar8 = (uint)*(undefined8 *)(param_1 + 0x9b0);
    if (*(int *)(param_1 + 0x8d0) != 1) {
      if (((uVar8 >> 0x14 & 1) != 0) && (*(int *)(param_1 + 0x8d0) != 2)) {
        return 2;
      }
      goto LAB_003b87d4;
    }
    if ((uVar8 >> 0x14 & 1) != 0) {
      return 2;
    }
    goto LAB_003b867c;
  case 0x1c:
/*  donate: donate/README.md  */
    if (*(int *)(param_1 + 0xd60) != 3) {
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
          (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) &&
         ((iVar2 != 0x10000 && ((*(byte *)(param_1 + 0x9b4) & 1) == 0)))) {
        return 2;
      }
      *(undefined4 *)(param_1 + 0xb44) = 0;
      return 2;
    }
LAB_003b867c:
    iVar2 = func_0x003aa4a8();
    if (iVar2 != 1) {
      return 4;
    }
    break;
  case 0x1d:
    iVar2 = func_0x003aa4a8();
    if (iVar2 != 1) {
      return 4;
    }
    break;
  case 0x25:
// WM - keep the notice, keep the source honest
    puVar3 = (undefined4 *)___error();
    *puVar3 = 0;
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
         (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
       (iVar2 = func_0x003aa4a8(param_1), iVar2 == 1)) {
      func_0x00446a74();
      return 2;
    }
    iVar2 = func_0x0035d650(param_1,0);
    if (iVar2 != 5) {
      return 4;
    }
    piVar6 = (int *)___error();
    if ((*piVar6 == 0x36) || (*piVar6 == 0x20)) {
      *(undefined4 *)(param_1 + 0x68) = 1;
      return 2;
    }
    return 4;
  case 0x27:
/* found on a paste site? it was re-uploaded illegally */
LAB_003b87d4:
    if (*(int *)(param_1 + 0x8d0) == 1) {
      iVar2 = func_0x003aa4a8();
      if (iVar2 == 0) {
        return 4;
      }
      return 2;
    }
    puVar7 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
    if ((((*(byte *)(puVar7 + 10) >> 3 & 1) == 0) &&
        (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      uVar4 = (*(code *)*puVar7)();
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      uVar4 = func_0x0036cc5c(param_1);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0xa2);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if ((*(int *)(param_1 + 0xb20) != 2) &&
         (uVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0xa1),
         (int)uVar4 == 0)) {
        return uVar4;
      }
      pcVar9 = *(code **)(*(long *)(param_1 + 0xe28) + 0x68);
      if (pcVar9 == (code *)0x0) {
        return 2;
      }
      (*pcVar9)(*(undefined8 *)(param_1 + 0xe38),1);
      return 2;
    }
    uVar4 = (*(code *)puVar7[2])(param_1,0x22);
    iVar2 = (int)uVar4;
    goto joined_r0x003b86a8;
  case 0x28:
    iVar2 = func_0x003aa4a8();
    if (iVar2 != 1) {
      return 4;
    }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    lVar5 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
    if (((((*(byte *)(lVar5 + 0x50) >> 3 & 1) == 0) &&
         (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) &&
       (((iVar2 = (**(code **)(lVar5 + 8))(param_1,param_1 + 0x5fc,param_1 + 0x5bc,0,auStack_28),
         iVar2 == 0 || (iVar2 = func_0x0036cca8(param_1), iVar2 == 0)) ||
        (iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0x122),
        iVar2 == 0)))) {
      return 0;
    }
    break;
  case 0x29:
    if (*(int *)(param_1 + 0x508) == 0) {
      uVar8 = *(uint *)(param_1 + 0x950);
      piVar6 = *(int **)(param_1 + 0x18);
      if ((((uVar8 & 1) != 0) &&
          (((((*(uint *)(*(long *)(piVar6 + 0x36) + 0x50) >> 3 & 1) != 0 || ((uVar8 >> 3 & 1) == 0))
            || (*piVar6 < 0x304)) || ((*piVar6 == 0x10000 || (*(int *)(param_1 + 0xd60) == 3))))))
         && (((uVar8 >> 2 & 1) == 0 || (*(int *)(param_1 + 0xd78) < 1)))) {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
        uVar8 = uVar8 >> 1 & 1;
        if ((uVar1 & 4) == 0) {
          uVar8 = 1;
        }
        if (((uVar1 & 0x50) == 0) && (uVar8 != 0)) {
          return 2;
        }
      }
      if (((((*(uint *)(*(long *)(piVar6 + 0x36) + 0x50) >> 3 & 1) != 0) || (*piVar6 < 0x304)) ||
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          (*piVar6 == 0x10000)) || ((*(byte *)(param_1 + 0x9b4) & 1) != 0)) {
        *(undefined4 *)(param_1 + 0xb44) = 0;
        return 2;
      }
    }
    break;
  case 0x2e:
    iVar2 = func_0x003aa4a8();
    if (iVar2 != 1) {
      return 4;
    }
    uVar4 = FUN_0036d8e8(param_1,1);
    iVar2 = (int)uVar4;
joined_r0x003b86a8:
    if (iVar2 == 0) {
      return uVar4;
    }
  }
  return 2;
}

