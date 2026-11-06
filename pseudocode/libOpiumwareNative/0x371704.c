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
 *  file-id: 0x371704:18f7263d8a
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0037173c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0037175c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00371740) */
/* WARNING: Removing unreachable block (ram,0x00371760) */

void FUN_00371704(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_0036f4c4(param_1 + 0x98);
  func_0x003eaa98(*(undefined8 *)(param_1 + 0x58));
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (*(undefined8 *)(param_1 + 0x18),
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
               ,0xa9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

