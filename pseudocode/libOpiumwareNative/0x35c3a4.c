/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x35c3a4:4d66c57ef7
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0035c3a4(uint *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  puVar3 = param_1;
  if (*param_1 != 0) {
    if ((*param_1 >> 7 & 1) == 0) {
      return 0;
    }
    puVar3 = (uint *)func_0x00380678(param_1);
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
  }
  lVar5 = *(long *)(param_1 + 2);
  lVar4 = FUN_00354684(lVar5,*(undefined8 *)(puVar3 + 0x15c),puVar3 + 0x158,puVar3 + 0x15a,param_2,
                       *(undefined8 *)(puVar3 + 0x220));
  if (lVar4 == 0) {
    return 0;
  }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  iVar1 = (**(code **)(*(long *)(lVar5 + 8) + 0xc0))();
  if (iVar1 < 1) {
    return 1;
  }
  iVar1 = func_0x004dcb7c(lVar4);
  if (0 < iVar1) {
    iVar6 = 0;
    iVar1 = 0;
    do {
      lVar5 = func_0x004dcb90(lVar4,iVar1);
      if (*(int *)(lVar5 + 0x2c) < 0x304) {
        iVar6 = iVar6 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = func_0x004dcb7c(lVar4);
    } while (iVar1 < iVar2);
    if (iVar6 != 0) {
      return 1;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                  ,0xe03,"SSL_set_cipher_list");
  func_0x004466b0(0x14,0xb9,0);
  return 0;
}

