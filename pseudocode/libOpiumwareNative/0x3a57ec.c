/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3a57ec:1dfd907261
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a57ec(long param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    pbVar2 = (byte *)*param_2;
    uVar1 = lVar4 - 1;
    if (uVar1 == *pbVar2) {
      *param_2 = (long)(pbVar2 + lVar4);
      param_2[2] = 0;
      if (uVar1 != 0) {
        do {
          pbVar2 = pbVar2 + 1;
          if (*pbVar2 == 1) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
            uVar3 = 2;
LAB_003a5834:
            *(uint *)(param_1 + 0xb18) = *(uint *)(param_1 + 0xb18) | uVar3;
          }
          else if ((*pbVar2 == 0) && ((*(byte *)(param_1 + 0x9b1) >> 2 & 1) != 0)) {
            uVar3 = 1;
            goto LAB_003a5834;
          }
          uVar1 = uVar1 - 1;
          if (uVar1 == 0) {
            if ((*(byte *)(param_1 + 0xb18) & 1) == 0) {
              return 1;
            }
            if ((*(byte *)(param_1 + 0x9b4) >> 3 & 1) == 0) {
              return 1;
            }
            *(undefined4 *)(param_1 + 0xb18) = 1;
            return 1;
          }
        } while( true );
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,0x249,"tls_parse_ctos_psk_kex_modes");
  func_0x003a9570(param_1,0x32,0x6e,0);
  return 0;
}

