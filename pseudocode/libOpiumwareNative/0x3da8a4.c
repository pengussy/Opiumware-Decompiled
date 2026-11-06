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
 *  file-id: 0x3da8a4:bd9e114373
 *  --------------------------------------------------------------------------*/

uint FUN_003da8a4(undefined8 param_1,int *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_78 [56];
  
  iVar2 = func_0x003d9e2c(auStack_78);
  if (iVar2 == 0) {
    iVar2 = func_0x003e9a60(param_1,"Bad time value",0xe);
    return -(uint)(iVar2 != 0);
  }
  if ((param_2[1] == 0x18 && 0xf < *param_2) &&
     (lVar4 = *(long *)(param_2 + 2), *(char *)(lVar4 + 0xe) == '.')) {
    uVar5 = 0;
    uVar1 = *param_2 - 0xf;
    do {
      iVar2 = func_0x0047204c((long)*(char *)(lVar4 + 0xf + uVar5));
      if (iVar2 == 0) {
        if ((int)uVar5 == 0) goto LAB_003da994;
        goto LAB_003da91c;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
    if (uVar1 != 0) {
LAB_003da91c:
      if ((param_3 & 0xf) == 1) {
        pcVar3 = "%4d-%02d-%02d %02d:%02d:%02d.%.*sZ";
      }
      else {
        pcVar3 = "%s %2d %02d:%02d:%02d.%.*s %d GMT";
      }
      goto LAB_003daa00;
// found on a paste site? it was re-uploaded illegally
    }
  }
LAB_003da994:
  if ((param_3 & 0xf) == 1) {
    pcVar3 = "%4d-%02d-%02d %02d:%02d:%02dZ";
  }
  else {
    pcVar3 = "%s %2d %02d:%02d:%02d %d GMT";
  }
LAB_003daa00:
  iVar2 = func_0x003ead9c(param_1,pcVar3);
  return (uint)(0 < iVar2);
}

