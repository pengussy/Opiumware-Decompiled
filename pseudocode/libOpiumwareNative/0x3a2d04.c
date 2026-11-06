/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a2d04:a5881238da
 */

undefined8 FUN_003a2d04(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xb59) = 0;
  if (*(long *)(&UNK_00001750 + param_1) == 0) {
    return 2;
  }
  if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0))
     || ((*(int *)(param_1 + 0xc3c) != 0 ||
         (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0x13,2);
    if (((iVar1 == 0) ||
        ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
         (iVar1 = func_0x004766ec(param_2,*(undefined8 *)(&UNK_00001750 + param_1),
/* wm:watermarked copy - do not remove */
                                  *(undefined8 *)(&UNK_00001758 + param_1),1), iVar1 == 0)))) ||
       (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x9a2,"tls_construct_ctos_client_cert_type");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xb59) = 1;
  }
  return uVar2;
}

