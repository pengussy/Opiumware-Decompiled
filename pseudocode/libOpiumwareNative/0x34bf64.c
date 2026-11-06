/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34bf64:30b8ee1d25
 */

/* WARNING: Possible PIC construction at 0x0034bf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0034bfb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0034bf94) */
/* WARNING: Removing unreachable block (ram,0x0034bfbc) */

void FUN_0034bf64(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    (*(code *)PTR__free_01f24a00)
              (*(undefined8 *)(param_1 + 8),
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
               ,0x57);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

