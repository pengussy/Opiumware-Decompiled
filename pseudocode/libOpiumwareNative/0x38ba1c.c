/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38ba1c:1b39f776a4
   =========================================================================== */

undefined8 FUN_0038ba1c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (3 < param_2) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                    ,0x2dc,"ossl_quic_tx_packetiser_discard_enc_level");
    func_0x004466b0(0x14,&UNK_00080106,0);
    return 0;
  }
  if (param_2 == 1) {
    return 1;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  lVar1 = 1;
  if (param_2 != 2) {
    lVar1 = 2;
  }
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = lVar1;
  }
  *(undefined8 *)(param_1 + lVar2 * 8 + 0x120) = 0;
  return 1;
}

