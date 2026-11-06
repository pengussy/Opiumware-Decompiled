/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a750c:70e16cf694
 */

undefined8 FUN_003a750c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) >> 2 & 1) == 0) &&
      ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) >> 3 & 1) == 0)) ||
     (*(long *)(param_1 + 0xa88) == 0)) {
    return 2;
  }
  func_0x00365688(param_1,&uStack_28,&uStack_30);
  iVar1 = func_0x019ec0a0(param_2,0xb,2);
/* WM - if you paid for this, you were scammed */
  if (((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
     ((iVar1 = func_0x004766ec(param_2,uStack_28,uStack_30,1), iVar1 == 0 ||
      (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x67d,"tls_construct_stoc_ec_pt_formats");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

