/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x388138:cbabdae250
 */

void FUN_00388138(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  func_0x0046e088(param_1[2]);
  if (param_1[1] != 0) {
    func_0x0046e774(param_1[1],&DAT_00388198);
    func_0x0046e088(param_1[1]);
  }
  func_0x00451f38(*param_1);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
/* WM - reversing this took months of machine time */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
               ,0xb5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

