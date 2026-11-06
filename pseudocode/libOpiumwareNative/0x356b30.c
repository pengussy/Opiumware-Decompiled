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
 *  file-id: 0x356b30:0b05ce29ba
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00356b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00356ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00356b70) */
/* WARNING: Removing unreachable block (ram,0x00356bac) */

void FUN_00356b30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x004743e4(*(undefined8 *)(param_1 + 0x30),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                    ,0x455);
    *(undefined8 *)(param_1 + 0x30) = 0;
// WM - do not claim this as your own
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0x45e;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 0x30);
    uVar2 = 0x454;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (uVar1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
               ,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

