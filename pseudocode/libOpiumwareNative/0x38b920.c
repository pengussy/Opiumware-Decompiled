/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x38b920:56faf48702
 */

undefined8 FUN_0038b920(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                    ,0x2a7,"ossl_quic_tx_packetiser_set_cur_dcid");
    func_0x004466b0(0x14,&UNK_000c0102,0);
    return 0;
/* wm:no support for modified copies */
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)((long)param_2 + 0xd);
  *(undefined8 *)(param_1 + 0x1d) = uVar2;
  *(undefined8 *)(param_1 + 0x15) = uVar1;
  return 1;
}

