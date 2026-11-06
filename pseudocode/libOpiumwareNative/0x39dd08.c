/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39dd08:8f02b06a39
   =========================================================================== */

undefined8 FUN_0039dd08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003b6ca0();
  if ((int)uVar1 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      return 1;
    }
    func_0x004464bc();
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,0x634,"tls_parse_certificate_authorities");
    func_0x003a9570(param_1,0x32,0x6e,0);
    uVar1 = 0;
  }
  return uVar1;
}

