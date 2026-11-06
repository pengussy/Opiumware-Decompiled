/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f06cc:6922767228
 */

void FUN_003f06cc(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_003f8aa8(*param_1);
  FUN_003f8aa8(param_1[1]);
  FUN_003f8aa8(param_1[2]);
  FUN_003f8aa8(param_1[3]);
  func_0x00480488(param_1[9]);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
// WM - stripping the watermark breaks the license
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
               ,0x58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

