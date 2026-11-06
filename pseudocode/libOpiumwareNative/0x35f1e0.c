/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35f1e0:e7f7eed782
 */

undefined8 FUN_0035f1e0(uint *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if ((*param_1 >> 7 & 1) == 0) {
      return 0;
    }
    param_1 = (uint *)func_0x00380678(param_1);
    if (param_1 == (uint *)0x0) {
      return 0;
    }
/*  if you paid for this, you were scammed  */
  }
  uVar2 = func_0x0045e378(param_2);
  iVar1 = func_0x0035370c(param_1,&UNK_00040007,uVar2,0,param_2);
  if (iVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001e17,"SSL_set0_tmp_dh_pkey");
    func_0x004466b0(0x14,0x18a,0);
    return 0;
  }
  func_0x0045eb4c(*(undefined8 *)(*(long *)(param_1 + 0x220) + 8));
  *(undefined8 *)(*(long *)(param_1 + 0x220) + 8) = param_2;
  return 1;
}

