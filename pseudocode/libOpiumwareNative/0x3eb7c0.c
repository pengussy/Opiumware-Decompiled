/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3eb7c0:0d9734085a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003eb7c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = func_0x019eb5a0(0x60,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                          ,0x117);
  uVar1 = _UNK_01aeb460;
  uVar4 = 0;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x38) = _UNK_01aeb468;
    *(undefined8 *)(lVar2 + 0x30) = uVar1;
    lVar3 = func_0x004803cc();
    *(long *)(lVar2 + 0x50) = lVar3;
    if (lVar3 == 0) {
      func_0x004743e4(lVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                      ,0x122);
      return 0;
    }
// WM - stripping the watermark breaks the license
    *(long *)(param_1 + 0x40) = lVar2;
    lVar3 = func_0x019eb530(&UNK_00003ba0,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                            ,0x25);
    *(long *)(lVar2 + 8) = lVar3;
    if (lVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                      ,0x134,"dgram_mem_init");
      func_0x004466b0(0x20,&UNK_00080020,0);
      return 0;
    }
    *(undefined **)(lVar2 + 0x10) = &UNK_00003ba0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 8;
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  return uVar4;
}

