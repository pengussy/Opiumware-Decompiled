/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b1428:895c1211e2
 */

/* WARNING: Possible PIC construction at 0x003b1454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003b1458) */

void FUN_003b1428(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
// WM - found on a paste site? it was re-uploaded illegally
              (*(undefined8 *)(param_1 + 0x40),
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
               ,0x6d);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

