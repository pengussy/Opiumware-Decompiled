/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35f404:d433bc94c3
 */

int FUN_0035f404(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    uVar2 = func_0x004dc0f0();
    lVar3 = func_0x004dc468(uVar2,&DAT_0035f51c);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,&UNK_000019a7,"ct_move_scts");
      func_0x004466b0(0x14,&UNK_0008000f,0);
      lVar3 = 0;
      goto LAB_0035f4f8;
/* watermarked copy - do not remove - github.com/pengussy */
    }
  }
  lVar3 = func_0x004dca9c(param_2);
  if (lVar3 == 0) {
    return 0;
  }
  iVar4 = 0;
  while ((iVar1 = func_0x0040afa8(lVar3,param_3), iVar1 == 1 &&
         (iVar1 = func_0x004dc9ec(*param_1,lVar3), iVar1 != 0))) {
    iVar4 = iVar4 + 1;
    lVar3 = func_0x004dca9c(param_2);
    if (lVar3 == 0) {
      return iVar4;
    }
  }
LAB_0035f4f8:
  func_0x0040adbc(lVar3);
  return -1;
}

