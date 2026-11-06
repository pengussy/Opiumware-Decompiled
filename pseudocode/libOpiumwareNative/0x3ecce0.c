/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3ecce0:2bc009a179
   =========================================================================== */

undefined4 * FUN_003ecce0(void)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_003ec154();
  puVar2 = (undefined4 *)0x0;
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)
             func_0x019eb530(0x10,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                             ,0x19);
    if (puVar2 == (undefined4 *)0x0) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      func_0x004743e4(0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/ossl_core_bio.c"
                      ,0x1c);
      FUN_003e9468(lVar1);
      return (undefined4 *)0x0;
    }
    *puVar2 = 1;
    *(long *)(puVar2 + 2) = lVar1;
  }
  return puVar2;
}

