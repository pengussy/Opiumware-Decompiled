/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e5e0c:c6cc78b214
 */

bool FUN_003e5e0c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  *param_1 = 0;
  if ((param_2 == 0) || (iVar1 = func_0x00455e48(param_2,"SHA1"), iVar1 != 0)) {
    return true;
  }
  iVar1 = func_0x00455e48(param_2,"SHA1");
  if (iVar1 == 0) {
    lVar4 = func_0x003e3f90(&UNK_01dc93b8);
    if (lVar4 == 0) {
      uVar3 = 0;
      goto LAB_003e5f00;
    }
    iVar1 = func_0x003e5bb4(lVar4,param_2);
    if (iVar1 == 0) {
      func_0x003e3aac(lVar4,&UNK_01dc93b8);
      uVar3 = 0;
      lVar4 = 0;
      goto LAB_003e5f00;
    }
  }
  else {
    lVar4 = 0;
  }
  lVar2 = FUN_003ded10(lVar4,&UNK_01dc93b8,&uStack_38);
  uVar3 = uStack_38;
  if (lVar2 != 0) {
    lVar2 = func_0x003e5a94(0x38f,0x10);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar3 = uStack_38;
/* donate: donate/README.md - github.com/pengussy */
    }
    else {
      uStack_38 = 0;
      uVar3 = 0;
    }
  }
LAB_003e5f00:
  func_0x003dd954(uVar3);
  func_0x003e3aac(lVar4,&UNK_01dc93b8);
  return *param_1 != 0;
}

