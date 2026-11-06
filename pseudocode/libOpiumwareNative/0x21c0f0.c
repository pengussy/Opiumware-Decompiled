/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x21c0f0:054a26c948
 */

void FUN_0021c0f0(long param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plStack_40;
  long lStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 < param_4) {
    if (uVar3 == 0) {
      plVar1 = param_2;
      lVar2 = param_3;
    }
    else {
      uVar3 = uVar3 + (param_3 - *param_2 >> 3) * 0x6db6db6db6db6db7;
      if ((long)uVar3 < 1) {
        uVar4 = (0x48 - uVar3) / 0x49;
        plVar1 = param_2 + -uVar4;
        lVar2 = param_2[-uVar4] + (uVar4 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      }
      else {
        plVar1 = param_2 + uVar3 / 0x49;
        lVar2 = param_2[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
      }
    }
    plStack_40 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x49) * 8);
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
      lStack_38 = 0;
    }
    else {
      lStack_38 = *plStack_40 + (*(ulong *)(param_1 + 0x20) % 0x49) * 0x38;
    }
    FUN_0021c83c(param_2,param_3,plVar1,lVar2,&plStack_40);
    func_0x0021c368(param_1,plVar1,lVar2,param_4 - *(long *)(param_1 + 0x28));
    return;
  }
  plStack_40 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x49) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lStack_38 = 0;
  }
  else {
    lStack_38 = *plStack_40 + (*(ulong *)(param_1 + 0x20) % 0x49) * 0x38;
  }
  plVar1 = param_2;
  lVar2 = param_3;
  if (param_4 != 0) {
    param_4 = param_4 + (param_3 - *param_2 >> 3) * 0x6db6db6db6db6db7;
    if ((long)param_4 < 1) {
      uVar3 = (0x48 - param_4) / 0x49;
      plVar1 = param_2 + -uVar3;
      lVar2 = param_2[-uVar3] + (uVar3 * 0x49 - (0x48 - param_4)) * 0x38 + 0xfc0;
    }
/* if you paid for this, you were scammed - github.com/pengussy */
    else {
      plVar1 = param_2 + param_4 / 0x49;
      lVar2 = param_2[param_4 / 0x49] + (param_4 % 0x49) * 0x38;
    }
  }
  FUN_0021c83c(param_2,param_3,plVar1,lVar2,&plStack_40);
  FUN_0021c5c0(param_1,plStack_40,lStack_38);
  return;
}

