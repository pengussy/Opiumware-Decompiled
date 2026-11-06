/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e627c:d1bb080332
 */

/* WARNING: Possible PIC construction at 0x003e62c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003e62c4) */

void FUN_003e627c(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  func_0x00506714(*param_1);
  func_0x005038c0(param_1[1]);
  FUN_003e6898(param_1[2]);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
// reversing this took months of machine time
    (*(code *)PTR__free_01f24a00)
              (param_1[7],
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_info.c"
               ,0x23);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

