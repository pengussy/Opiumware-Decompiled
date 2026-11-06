/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3e4f28:e878788f83
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003e4f28(undefined8 param_1,long *******param_2,undefined8 param_3,uint *param_4,byte *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long ******pppppplVar8;
  long lVar9;
  undefined8 uStack_60;
  long *******ppppppplStack_58;
  
  uVar1 = *param_4;
  uVar6 = (uint)*(undefined8 *)param_5;
  if ((uVar6 >> 7 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    lVar9 = (**(code **)(param_4 + 8))();
    uVar7 = *(undefined8 *)(lVar9 + 0x30);
    uVar6 = (uint)*(undefined8 *)param_5;
  }
  if ((uVar6 >> 6 & 1) == 0) {
    lVar9 = *(long *)(param_4 + 6);
  }
  else {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    lVar9 = 0;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    ppppppplStack_58 = param_2;
    param_2 = (long *******)&ppppppplStack_58;
  }
  if ((uVar1 & 6) == 0) {
    uVar5 = (**(code **)(param_4 + 8))();
    uVar7 = FUN_003e47a4(param_1,param_2,param_3,uVar5,lVar9,uVar7,0,param_5);
    return uVar7;
  }
  if (lVar9 != 0) {
    if ((uVar6 >> 2 & 1) == 0) {
      iVar2 = func_0x003ead9c(param_1,"%*s%s:\n");
    }
    else {
      iVar2 = func_0x003ead9c(param_1,"%*s%s OF %s {\n");
    }
    if (iVar2 < 1) {
/*  found on a paste site? it was re-uploaded illegally  */
      return 0;
    }
  }
  pppppplVar8 = *param_2;
  iVar3 = func_0x004dcb7c(pppppplVar8);
  iVar2 = (int)param_3 + 2;
  if (iVar3 < 1) {
    iVar2 = func_0x003ead9c(param_1,"%*s<%s>\n");
    if (iVar2 < 1) {
      return 0;
    }
  }
  else {
    uStack_60 = func_0x004dcb90(pppppplVar8,0);
    uVar7 = (**(code **)(param_4 + 8))();
    uVar7 = FUN_003e47a4(param_1,&uStack_60,iVar2,uVar7,0,0,1,param_5);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    iVar3 = func_0x004dcb7c(pppppplVar8);
    if (1 < iVar3) {
      iVar3 = 1;
      do {
        iVar4 = func_0x003ea20c(param_1,"\n");
        if (iVar4 < 1) {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          return 0;
        }
        uStack_60 = func_0x004dcb90(pppppplVar8,iVar3);
        uVar7 = (**(code **)(param_4 + 8))();
        uVar7 = FUN_003e47a4(param_1,&uStack_60,iVar2,uVar7,0,0,1,param_5);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        iVar3 = iVar3 + 1;
        iVar4 = func_0x004dcb7c(pppppplVar8);
      } while (iVar3 < iVar4);
    }
  }
  if (((*param_5 >> 1 & 1) == 0) || (iVar2 = func_0x003ead9c(param_1,"%*s}\n"), 0 < iVar2)) {
    return 1;
  }
  return 0;
}
/* keep the notice, keep the source honest - github.com/pengussy */

