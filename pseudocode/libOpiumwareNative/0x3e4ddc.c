/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e4ddc:4fa6e81d43
 */

bool FUN_003e4ddc(undefined8 param_1,ulong param_2,long param_3,long param_4,ulong *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  
  if (0x14 < (int)param_2) {
    do {
      iVar4 = func_0x003e9a60(param_1,"                    ",0x14);
      if (iVar4 != 0x14) goto LAB_003e4f08;
      iVar4 = (int)param_2;
      param_2 = (ulong)(iVar4 - 0x14);
    } while (0x28 < iVar4);
  }
  iVar4 = func_0x003e9a60(param_1,"                    ",param_2);
  if (iVar4 == (int)param_2) {
    bVar1 = (*param_5 & 0x100) != 0;
    bVar2 = param_4 == 0;
    bVar3 = (*param_5 & 0x40) != 0;
    if ((bVar1 || bVar2) && (bVar3 || param_3 == 0)) {
      return true;
    }
    if (bVar3 || param_3 == 0) {
      if (!bVar1 && !bVar2) {
        iVar4 = FUN_003ea20c(param_1,param_4);
joined_r0x003e4ee4:
        if (iVar4 < 1) goto LAB_003e4f08;
      }
    }
    else {
      iVar4 = FUN_003ea20c(param_1,param_3);
      if (iVar4 < 1) goto LAB_003e4f08;
      if (!bVar1 && !bVar2) {
        iVar4 = func_0x003ead9c(param_1," (%s)");
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        goto joined_r0x003e4ee4;
      }
    }
    iVar4 = func_0x003e9a60(param_1,": ",2);
    bVar1 = iVar4 == 2;
  }
  else {
LAB_003e4f08:
    bVar1 = false;
  }
  return bVar1;
}

