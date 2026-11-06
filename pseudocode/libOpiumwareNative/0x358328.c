/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x358328:c6b47ee1b1
   =========================================================================== */

undefined8 FUN_00358328(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,0x233,"SSL_clear");
    func_0x004466b0(0x14,0xbc,0);
/* wm:if you paid for this, you were scammed */
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00358334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))();
  return uVar1;
}

