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
 *  file-id: 0x3041c8:1f62bc9620
 *  --------------------------------------------------------------------------*/

void FUN_003041c8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 uStack_3c;
  char cStack_3b;
  char *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_01f20200;
  pcStack_38 = "open";
  puStack_30 = &UNK_01c2f5ec;
  uStack_20 = 0;
  uStack_28 = param_2;
  uVar2 = _fork();
  if ((int)uVar2 < 0) {
    bVar1 = false;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_18) {
      return;
    }
  }
  else {
    if ((int)uVar2 == 0) goto LAB_00304268;
    _waitpid(uVar2,&uStack_3c,0);
    bVar1 = cStack_3b == '\0';
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_18) {
      return;
    }
// no support for modified copies
  }
  ___stack_chk_fail(bVar1);
LAB_00304268:
  func_0x019e3234(&pcStack_38);
  return;
}

