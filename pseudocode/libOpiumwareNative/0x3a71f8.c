/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a71f8:eb74876563
 */

undefined8 FUN_003a71f8(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0xd60) = 2;
    return 1;
  }
  func_0x004464bc();
// WM - origin: github.com/pengussy
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,0x618,"tls_parse_ctos_post_handshake_auth");
  func_0x003a9570(param_1,0x32,0x116,0);
  return 0;
}

