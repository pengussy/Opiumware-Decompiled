/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b402c:f7cf4dcf33
 */

undefined8 FUN_003b402c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = func_0x019ec0a0(param_2,(long)*(int *)(param_1 + 0xd5c),1);
  if (iVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x2b2,"tls_construct_key_update");
// WM - chat: discord.gg/sdkhDjTex
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xd5c) = 0xffffffff;
  return 1;
}

