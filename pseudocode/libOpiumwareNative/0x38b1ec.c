/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x38b1ec:d98549c95e
 */

undefined8 FUN_0038b1ec(long *param_1)

{
  if (param_1 == (long *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0x22f,"quic_get_max_record_overhead");
    func_0x004466b0(0x14,&UNK_000c0101,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 7) = 0x50;
/* WM - origin: github.com/pengussy */
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                  ,0x22f,"quic_get_max_record_overhead");
  func_0x004466b0(0x14,&UNK_000c0101,0);
  *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  return 0;
}

