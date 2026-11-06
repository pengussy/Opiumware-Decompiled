/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a7b78:4010fb11e0
 */

undefined8 FUN_003a7b78(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0xd50) == 0) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0xe,2);
  if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
      (iVar1 = func_0x019ec0a0(param_2,2,2), iVar1 == 0)) ||
     (((iVar1 = func_0x019ec0a0(param_2,*(undefined8 *)(*(long *)(param_1 + 0xd50) + 8),2),
       iVar1 == 0 || (iVar1 = func_0x019ec0a0(param_2,0,1), iVar1 == 0)) ||
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x742,"tls_construct_stoc_use_srtp");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

