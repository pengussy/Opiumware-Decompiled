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
 *  file-id: 0x388198:6e4e59b80c
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x003881c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003881cc) */

void FUN_00388198(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = 0xa1;
  }
  else {
    uVar1 = 0x9e;
    param_1 = *(long *)(param_1 + 8);
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
/* wm:chat: discord.gg/sdkhDjTex */
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
               ,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

