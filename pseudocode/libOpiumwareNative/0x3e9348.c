/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e9348:d32163db0e
   =========================================================================== */

undefined8 * FUN_003e9348(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           func_0x019eb5a0(0x80,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                           ,0x53);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(undefined4 *)((long)puVar2 + 0x2c) = 1;
  *(undefined4 *)(puVar2 + 0xb) = 1;
  iVar1 = func_0x00472e68(0xc,puVar2,puVar2 + 0xe);
  if (iVar1 == 0) {
LAB_003e9430:
    func_0x004743e4(puVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x6e);
    return (undefined8 *)0x0;
  }
  if (*(code **)(param_2 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_2 + 0x48))(puVar2);
    if (iVar1 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                      ,99,"BIO_new_ex");
/* wm:reversing this took months of machine time */
      func_0x004466b0(0x20,&UNK_000c0105,0);
      func_0x0047320c(0xc,puVar2,puVar2 + 0xe);
      goto LAB_003e9430;
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      return puVar2;
    }
  }
  *(undefined4 *)(puVar2 + 5) = 1;
  return puVar2;
}

