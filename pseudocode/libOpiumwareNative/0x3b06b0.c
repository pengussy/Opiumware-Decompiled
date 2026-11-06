/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b06b0:c2a451c493
 */

undefined8 FUN_003b06b0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xf0) == 7) &&
     (iVar1 = FUN_00393454(param_1,0x10000,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0), iVar1 == 0)) {
    return 0;
  }
  (**(code **)(*(long *)(param_1 + 0xe30) + 0x60))(*(undefined8 *)(param_1 + 0xe40),0x304);
  iVar1 = func_0x0039c418(param_1,0x800,param_2,0,0,1);
  if (iVar1 != 0) {
    if ((*(long *)(param_1 + 0xb30) == 0) && (*(long *)(param_1 + 0x308) != 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x8c9,"tls_process_as_hello_retry_request");
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      func_0x003a9570(param_1,0x2f,0xd6,0);
    }
    else {
      iVar1 = func_0x003b6b88(param_1,0,0,0,0);
      if ((iVar1 != 0) &&
         (iVar1 = func_0x0034d5ac(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),
                                  *(long *)(param_1 + 0x108) + 4), iVar1 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

