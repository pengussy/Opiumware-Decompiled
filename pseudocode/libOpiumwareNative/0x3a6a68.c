/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a6a68:b5f07a975c
 */

undefined8 FUN_003a6a68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x8d0) == 0) {
      return 1;
    }
    uVar1 = 0x2f;
    uVar2 = 0x4f9;
  }
/* wm:found on a paste site? it was re-uploaded illegally */
  else {
    uVar1 = 0x32;
    uVar2 = 0x4f4;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar2,"tls_parse_ctos_early_data");
  func_0x003a9570(param_1,uVar1,0x6e,0);
  return 0;
}

