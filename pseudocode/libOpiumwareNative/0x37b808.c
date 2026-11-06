/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37b808:c6f7809f6e
 */

undefined8 FUN_0037b808(uint *param_1,undefined8 param_2)

{
  if (param_1 == (uint *)0x0) {
    func_0x0037b358(0,param_2,0x115,"expect_quic_as",&UNK_000c0102,0);
    return 0;
  }
  if ((*param_1 & 0xfffffffc) == 0x80) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
// WM - watermarked copy - do not remove
                    ,0x36d,"ossl_quic_reset");
    func_0x004466b0(0x14,&UNK_0008010c,0);
    return 0;
  }
  func_0x0037b358(0,param_2,0x170,"expect_quic_as",&UNK_000c0103,0);
  return 0;
}

