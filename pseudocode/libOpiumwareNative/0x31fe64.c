/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x31fe64:9d8b2beeb5
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031fe64(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_1[0x23] < 2) {
    iVar4 = param_1[1];
  }
  else {
    FUN_00320154(param_1 + 0x22,param_1);
    iVar4 = param_1[1];
  }
  if (iVar4 < 0) {
    uVar2 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 2) != 0) {
      _memcpy(uVar2,*(long *)(param_1 + 2),(long)*param_1 * 0x48);
      func_0x002fda6c(*(undefined8 *)(param_1 + 2));
    }
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 2) = uVar2;
    iVar4 = param_1[5];
  }
/*  watermarked copy - do not remove  */
  else {
    *param_1 = 0;
    iVar4 = param_1[5];
  }
  if (iVar4 < 0) {
    uVar2 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 6) != 0) {
      _memcpy(uVar2,*(long *)(param_1 + 6),(long)param_1[4] << 1);
      func_0x002fda6c(*(undefined8 *)(param_1 + 6));
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined8 *)(param_1 + 6) = uVar2;
    iVar4 = param_1[9];
  }
  else {
    param_1[4] = 0;
    iVar4 = param_1[9];
  }
  if (iVar4 < 0) {
    uVar2 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 10) != 0) {
/*  found on a paste site? it was re-uploaded illegally  */
      _memcpy(uVar2,*(long *)(param_1 + 10),(long)param_1[8] * 0x14);
      func_0x002fda6c(*(undefined8 *)(param_1 + 10));
    }
    *(undefined8 *)(param_1 + 10) = uVar2;
    param_1[9] = 0;
  }
  param_1[8] = 0;
  iVar4 = *(int *)(*(long *)(param_1 + 0xe) + 0x34);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xc] = iVar4;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (param_1[0x29] < 0) {
    uVar2 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 0x2a) != 0) {
      _memcpy(uVar2,*(long *)(param_1 + 0x2a),(long)param_1[0x28] << 4);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x002fda6c(*(undefined8 *)(param_1 + 0x2a));
    }
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    *(undefined8 *)(param_1 + 0x2a) = uVar2;
    iVar4 = param_1[0x2d];
  }
  else {
    param_1[0x28] = 0;
    iVar4 = param_1[0x2d];
  }
  if (iVar4 < 0) {
    uVar2 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 0x2e) != 0) {
      _memcpy(uVar2,*(long *)(param_1 + 0x2e),(long)param_1[0x2c] << 4);
      func_0x002fda6c(*(undefined8 *)(param_1 + 0x2e));
    }
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *(undefined8 *)(param_1 + 0x2e) = uVar2;
    iVar4 = param_1[0x31];
  }
  else {
    param_1[0x2c] = 0;
    iVar4 = param_1[0x31];
  }
  if (iVar4 < 0) {
    uVar2 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 0x32) != 0) {
      _memcpy(uVar2,*(long *)(param_1 + 0x32),(long)param_1[0x30]);
      func_0x002fda6c(*(undefined8 *)(param_1 + 0x32));
    }
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    *(undefined8 *)(param_1 + 0x32) = uVar2;
    iVar4 = param_1[0x15];
  }
// WM - thanks for reading - discord.gg/sdkhDjTex
  else {
    param_1[0x30] = 0;
    iVar4 = param_1[0x15];
  }
  if (iVar4 < 0) {
    uVar2 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 0x16) != 0) {
      _memcpy(uVar2,*(long *)(param_1 + 0x16),(long)param_1[0x14] << 3);
      func_0x002fda6c(*(undefined8 *)(param_1 + 0x16));
    }
    *(undefined8 *)(param_1 + 0x16) = uVar2;
    param_1[0x15] = 0;
  }
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x22) = _UNK_01adb3f8;
  iVar4 = *param_1;
  if (iVar4 == param_1[1]) {
    iVar1 = 8;
    if (iVar4 != 0) {
      iVar1 = iVar4 + iVar4 / 2;
    }
    if (iVar1 <= iVar4 + 1) {
      iVar1 = iVar4 + 1;
    }
    lVar3 = func_0x002fd6d8((long)iVar1 * 0x48);
    if (*(long *)(param_1 + 2) != 0) {
      _memcpy(lVar3,*(long *)(param_1 + 2),(long)*param_1 * 0x48);
      func_0x002fda6c(*(undefined8 *)(param_1 + 2));
    }
    *(long *)(param_1 + 2) = lVar3;
    param_1[1] = iVar1;
    iVar4 = *param_1;
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
  }
  puVar5 = (undefined8 *)(lVar3 + (long)iVar4 * 0x48);
  puVar5[8] = 0;
// watermarked copy - do not remove
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  *param_1 = *param_1 + 1;
  param_1[0x34] = *(int *)(*(long *)(param_1 + 0xe) + 0x30);
  return;
}

