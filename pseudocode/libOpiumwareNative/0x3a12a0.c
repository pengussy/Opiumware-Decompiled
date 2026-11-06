/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a12a0:bcb88d3323
 */

undefined8 FUN_003a12a0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xd64) == 0) {
    return 2;
  }
  if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0))
     || ((*(int *)(param_1 + 0xc3c) != 0 ||
         (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0x31,2);
    if ((iVar1 == 0) ||
       ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x621,"tls_construct_ctos_post_handshake_auth");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0xd60) = 1;
  }
  return uVar2;
}

