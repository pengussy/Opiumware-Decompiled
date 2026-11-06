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
 *  file-id: 0x3e0928:b28cbe057e
 *  --------------------------------------------------------------------------*/

ulong FUN_003e0928(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    uVar2 = func_0x003ea714(param_1,param_4,0x80);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar4 = param_3 + -1;
    iVar1 = func_0x003ead9c(param_1,"%02x%s");
    if (iVar1 < 1) {
      return 0;
    }
    if (param_3 != 1) {
      uVar2 = 1;
      do {
        if ((uVar2 & 0xf) == 0) {
          iVar1 = FUN_003ea20c(param_1,"\n");
          if (iVar1 < 1) {
            return 0;
          }
          uVar3 = func_0x003ea714(param_1,param_4,0x80);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
        }
        iVar1 = func_0x003ead9c(param_1,"%02x%s");
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        if (iVar1 < 1) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  iVar1 = func_0x003e9a60(param_1,"\n",1);
  return (ulong)(0 < iVar1);
}

