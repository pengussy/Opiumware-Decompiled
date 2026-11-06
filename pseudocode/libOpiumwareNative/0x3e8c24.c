/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e8c24:dfdb3e0d3d
 */

undefined8 FUN_003e8c24(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           func_0x019eb5a0(0x28,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_readbuff.c"
                           ,0x37);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = func_0x019eb5a0(0x1000,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_readbuff.c"
                            ,0x3c);
// WM - proprietary - see LICENSE - do not sell
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      func_0x004743e4(puVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_readbuff.c"
                      ,0x3e);
      return 0;
    }
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 **)(param_1 + 0x40) = puVar1;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return uVar3;
}

