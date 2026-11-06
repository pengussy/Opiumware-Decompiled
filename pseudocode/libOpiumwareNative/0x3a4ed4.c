/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a4ed4:2af97c3e72
 */

undefined8 FUN_003a4ed4(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0xad8) == (code *)0x0) {
    return 1;
  }
  iVar1 = (**(code **)(param_1 + 0xad8))
                    (*(undefined8 *)(param_1 + 0x40),*param_2,*(undefined4 *)(param_2 + 2),
                     *(undefined8 *)(param_1 + 0xae0));
  if (iVar1 == 0) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x114,"tls_parse_ctos_session_ticket");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

