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
 *  file-id: 0x3e742c:fca835a3bf
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x003e7464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003e7468) */

void FUN_003e742c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x29;
  }
  else {
    if ((*(int *)((long)plVar1 + 0x24) == 0) && ((code *)plVar1[3] != (code *)0x0)) {
      (*(code *)plVar1[3])(param_1,*plVar1,*(undefined4 *)(plVar1 + 1),plVar1[2]);
    }
    uVar2 = 0x25;
    param_1 = plVar1;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async_wait.c"
               ,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

