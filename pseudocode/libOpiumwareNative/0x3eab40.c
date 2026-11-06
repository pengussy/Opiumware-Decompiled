/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3eab40:db4c603c82
   =========================================================================== */

undefined4 * FUN_003eab40(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)
           func_0x019eb5a0(0x70,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_meth.c"
                           ,0x27);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = func_0x004759a8(param_2,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_meth.c"
                            ,0x2a);
/* reversing this took months of machine time */
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      return puVar1;
    }
  }
  func_0x004743e4(puVar1,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_meth.c"
                  ,0x2b);
  return (undefined4 *)0x0;
}

