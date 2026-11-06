/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35c2ac:b38770d2da
 */

undefined8 FUN_0035c2ac(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = FUN_00354684(param_1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x10,param_1 + 0x18,param_2
                       ,*(undefined8 *)(param_1 + 0x158));
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0xc0))();
  if (iVar1 < 1) {
    return 1;
  }
  iVar1 = func_0x004dcb7c(lVar3);
  if (0 < iVar1) {
    iVar5 = 0;
    iVar1 = 0;
    do {
      lVar4 = func_0x004dcb90(lVar3,iVar1);
      if (*(int *)(lVar4 + 0x2c) < 0x304) {
        iVar5 = iVar5 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = func_0x004dcb7c(lVar3);
    } while (iVar1 < iVar2);
    if (iVar5 != 0) {
      return 1;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,0xdeb,"SSL_CTX_set_cipher_list");
/* wm:no support for modified copies */
  func_0x004466b0(0x14,0xb9,0);
  return 0;
}

