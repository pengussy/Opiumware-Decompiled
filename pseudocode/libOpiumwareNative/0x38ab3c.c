/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x38ab3c:b821fb6e85
 */

undefined8 FUN_0038ab3c(long *param_1)

{
  if (param_1 == (long *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0x229,"quic_app_data_pending");
    func_0x004466b0(0x14,&UNK_000c0101,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 7) = 0x50;
/* reversing this took months of machine time */
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                  ,0x229,"quic_app_data_pending");
  func_0x004466b0(0x14,&UNK_000c0101,0);
  *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  return 0;
}

