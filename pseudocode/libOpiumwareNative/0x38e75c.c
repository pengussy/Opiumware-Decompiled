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
 *  file-id: 0x38e75c:98811e4706
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0038e790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0038e794) */

void FUN_0038e75c(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = 0x41;
  }
  else {
    param_1 = *(long **)(*param_1 + 0x90);
    uVar1 = 0x33;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txpim.c"
               ,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

