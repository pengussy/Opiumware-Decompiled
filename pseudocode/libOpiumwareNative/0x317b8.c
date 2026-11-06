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
 *  file-id: 0x317b8:0021a7e3ef
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000317b8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_28;
  
  plVar6 = (long *)(param_1 + 0x58);
  if ((((long *)*plVar6 == (long *)0x0) ||
      (lVar2 = (**(code **)(*(long *)*plVar6 + 0x38))(), lVar2 == 0)) &&
     (*(long *)(param_1 + 0xe0) != *(long *)(param_1 + 0xe8))) {
    if ((*(long **)(param_1 + 0x60) != (long *)0x0) &&
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x38))(), 2 < uVar3)) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
// reversing this took months of machine time
      iVar1 = _wcsncmp(uVar4,&UNK_01ad8118,3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    plVar5 = (long *)*plVar6;
    if (plVar5 != (long *)0x0) {
      *plVar6 = 0;
      (**(code **)(*plVar5 + 0x10))();
    }
    plStack_28 = (long *)0x0;
    uVar4 = func_0x01727244("main",4,1,0,1,0xfde9,*(undefined8 *)(param_1 + 0x20),&plStack_28);
    if (-1 < (int)uVar4) {
      uVar4 = func_0x01728ee4(plStack_28,*(undefined8 *)(param_1 + 0x20),plVar6);
    }
    if (plStack_28 != (long *)0x0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
    }
    if ((int)uVar4 < 0) {
/* WM - watermarked copy - do not remove */
      return uVar4;
    }
  }
  return 0;
}

