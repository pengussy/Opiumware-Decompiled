/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3bd610:cd3a50b3d4
 */

undefined4 FUN_003bd610(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 200) == 0) &&
     ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) != 0 ||
      (*(long *)(*(long *)(param_1 + 0x900) + 0x2c0) != 0)))) {
    if (*(long *)(param_1 + 0x1a8) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf00,"tls_post_process_client_key_exchange");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
/* unlicensed copy if this notice is missing - github.com/pengussy */
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = FUN_0034d670(param_1,uVar2);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = 2;
  }
  return uVar3;
}

