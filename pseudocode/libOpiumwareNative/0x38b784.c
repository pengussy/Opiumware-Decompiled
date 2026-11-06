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
 *  file-id: 0x38b784:3dfc01f497
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0038b7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038b804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038b824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038b844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0038b864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0038b848) */
/* WARNING: Removing unreachable block (ram,0x0038b828) */
/* WARNING: Removing unreachable block (ram,0x0038b808) */
/* WARNING: Removing unreachable block (ram,0x0038b7e8) */
/* WARNING: Removing unreachable block (ram,0x0038b868) */

void FUN_0038b784(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  func_0x0038550c(*(undefined8 *)(param_1 + 0xa0));
  if ((*(long *)(param_1 + 0x138) != 0) && (*(code **)(param_1 + 0x148) != (code *)0x0)) {
    (**(code **)(param_1 + 0x148))
              (*(long *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),
               *(undefined8 *)(param_1 + 0x150));
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  func_0x0011ab24(param_1 + 0x158);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (*(undefined8 *)(param_1 + 0x208),
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
               ,0x24c);
    return;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

