/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38b298:2eb09b0a72
   =========================================================================== */

undefined8 FUN_0038b298(long *param_1)

{
  if (param_1 == (long *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0x235,"quic_increment_sequence_ctr");
    func_0x004466b0(0x14,&UNK_000c0101,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 7) = 0x50;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                  ,0x235,"quic_increment_sequence_ctr");
  func_0x004466b0(0x14,&UNK_000c0101,0);
  *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  return 0;
}

