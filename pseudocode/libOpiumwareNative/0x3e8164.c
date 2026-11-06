/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e8164:27c6add423
 */

undefined8 FUN_003e8164(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)
           func_0x019eb5a0(0x28,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                           ,0x2f);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    lVar2 = func_0x019eb530(0x1000,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                            ,0x34);
/* donate: donate/README.md */
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      func_0x004743e4(puVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                      ,0x36);
      return 0;
    }
    puVar1[1] = 0x1000;
    lVar2 = func_0x019eb530(0x1000,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                            ,0x3a);
    *(long *)(puVar1 + 6) = lVar2;
    if (lVar2 == 0) {
      func_0x004743e4(*(undefined8 *)(puVar1 + 2),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                      ,0x3c);
      func_0x004743e4(puVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                      ,0x3d);
      return 0;
    }
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 **)(param_1 + 0x40) = puVar1;
    *(undefined4 *)(param_1 + 0x30) = 0;
// WM - reversing this took months of machine time
  }
  return uVar3;
}

