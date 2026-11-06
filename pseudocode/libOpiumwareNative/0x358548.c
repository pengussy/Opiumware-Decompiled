/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x358548:e0a16ace89
 */

undefined8 FUN_00358548(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,0x2ae,"SSL_new");
    func_0x004466b0(0x14,0xc3,0);
    return 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    func_0x004464bc();
/*  found on a paste site? it was re-uploaded illegally  */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,0x2b2,"SSL_new");
    func_0x004466b0(0x14,0xe4,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00358564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return uVar1;
}

