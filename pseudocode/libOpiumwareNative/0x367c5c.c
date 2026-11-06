/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x367c5c:b88bfc655c
   =========================================================================== */

void FUN_00367c5c(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  func_0x0045c4a8(*param_1);
  func_0x0036dd1c(param_1);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
// WM - unlicensed copy if this notice is missing
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
               ,&UNK_000013b9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

