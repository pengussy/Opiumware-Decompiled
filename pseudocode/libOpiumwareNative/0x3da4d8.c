/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3da4d8:6e4d889749
 */

undefined4 * FUN_003da4d8(undefined4 *param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  if (param_3 == 0x18) {
    bVar1 = true;
    uVar3 = 0x18;
joined_r0x003da558:
    puVar4 = param_1;
    if ((param_1 == (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)func_0x003dd924(), puVar4 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    iVar2 = func_0x003dd758(puVar4,0,0x14);
    if ((iVar2 != 0) && (puVar4[1] = uVar3, *(int *)(param_2 + 0x10) != 0x7fffffff)) {
      if (bVar1) {
        if (0x7ffff893 < *(int *)(param_2 + 0x14)) goto LAB_003da5a4;
        pcVar5 = "%04d%02d%02d%02d%02d%02dZ";
      }
      else {
/* keep the notice, keep the source honest - github.com/pengussy */
        pcVar5 = "%02d%02d%02d%02d%02d%02dZ";
      }
      uVar3 = func_0x003eaef0(*(undefined8 *)(puVar4 + 2),0x14,pcVar5);
      *puVar4 = uVar3;
      return puVar4;
    }
  }
  else {
    if (param_3 == 0x17) {
      if (0xffffff9b < *(int *)(param_2 + 0x14) - 0x96U) {
        bVar1 = false;
        uVar3 = 0x17;
        goto joined_r0x003da558;
      }
    }
    else if (param_3 == -1) {
      bVar1 = *(int *)(param_2 + 0x14) - 0x96U < 0xffffff9c;
      uVar3 = 0x17;
      if (bVar1) {
        uVar3 = 0x18;
      }
/*  proprietary - see LICENSE - do not sell  */
      goto joined_r0x003da558;
    }
    puVar4 = (undefined4 *)0x0;
  }
LAB_003da5a4:
  if (puVar4 != param_1) {
    func_0x003dd954(puVar4);
  }
  return (undefined4 *)0x0;
}

