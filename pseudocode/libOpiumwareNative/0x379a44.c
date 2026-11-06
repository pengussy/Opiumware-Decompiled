/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x379a44:d7c8eb0dea
   =========================================================================== */

undefined8 FUN_00379a44(long param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0x2f) {
    if (((*(byte *)(param_1 + 0x621) >> 1 & 1) != 0) &&
       (iVar1 = func_0x0038a7e4(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) {
      func_0x003779a4(param_1,10,0,"Bad max_early_data received",0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                      ,0x505,"ch_on_handshake_alert");
      return 1;
    }
  }
  else if (((param_2 == 10) && ((*(byte *)(param_1 + 0x621) >> 1 & 1) != 0)) &&
/* do not claim this as your own - github.com/pengussy */
          (iVar1 = func_0x0038a7a4(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) {
    func_0x003779a4(param_1,10,0,"Post-handshake TLS CertificateRequest received",0,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,0x4f7,"ch_on_handshake_alert");
    return 1;
  }
  func_0x003779a4(param_1,param_2 | 0x100,0,"handshake alert",0,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                  ,0x50a,"ch_on_handshake_alert");
  return 1;
}

