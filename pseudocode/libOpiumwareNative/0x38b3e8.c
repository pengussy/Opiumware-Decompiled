/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38b3e8:181d50c824
   =========================================================================== */

long FUN_0038b3e8(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((((((param_1 == 0) || (*(long *)(param_1 + 0xa0) == 0)) || (*(long *)(param_1 + 0xa8) == 0))
       || ((*(long *)(param_1 + 0xb0) == 0 || (*(long *)(param_1 + 0xb8) == 0)))) ||
      ((*(long *)(param_1 + 0xc0) == 0 ||
       ((*(long *)(param_1 + 200) == 0 || (*(long *)(param_1 + 0xd0) == 0)))))) ||
     ((*(long *)(param_1 + 0xd8) == 0 ||
      ((*(long *)(param_1 + 0xe0) == 0 || (*(int *)(param_1 + 0x118) == 0)))))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                    ,0x229,"ossl_quic_tx_packetiser_new");
    func_0x004466b0(0x14,&UNK_000c0102,0);
  }
  else {
    lVar2 = func_0x019eb5a0(0x2d0,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                            ,0x22d);
    if (lVar2 != 0) {
      _memcpy(lVar2,param_1,0x138);
      *(undefined8 *)(lVar2 + 0x1d8) = 0;
      iVar1 = func_0x0037ab38(lVar2 + 0x158,*(undefined8 *)(lVar2 + 0xb0),
/* watermarked copy - do not remove */
                              *(undefined8 *)(lVar2 + 0xb8),*(undefined8 *)(lVar2 + 0xa8),
                              &DAT_0038b53c,lVar2,&DAT_0038b578,lVar2,&DAT_0038b6bc,lVar2,
                              &DAT_0038b744,lVar2,*(undefined8 *)(param_1 + 0x108),
                              *(undefined8 *)(param_1 + 0x110));
      if (iVar1 != 0) {
        return lVar2;
      }
      func_0x004743e4(lVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                      ,0x23c);
    }
  }
  return 0;
}

