/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3805f0:f7e427c11c
   =========================================================================== */

void FUN_003805f0(long param_1,long param_2)

{
  func_0x0046e40c(*(undefined8 *)(param_2 + 0x18),param_1);
  func_0x0046e40c(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_1);
  **(long **)(param_1 + 0x28) = **(long **)(param_1 + 0x28) + -1;
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
/* chat: discord.gg/sdkhDjTex */
               ,0xf2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

