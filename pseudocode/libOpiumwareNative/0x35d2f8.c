/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35d2f8:1e75dd1c55
   =========================================================================== */

undefined8 FUN_0035d2f8(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (((*(byte *)(*(long *)(param_2 + 0x300) + 0x20) >> 3 & 1) == 0) ||
     (uVar1 = func_0x004f2954(), (uVar1 >> 7 & 1) != 0)) {
    return 1;
  }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,"vices.framework/Versions/A/CoreServices","ssl_check_srvr_ecc_cert_and_alg");
  func_0x004466b0(0x14,0x13e,0);
  return 0;
}

