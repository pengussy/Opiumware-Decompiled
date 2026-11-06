/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a8a84:5ab1951d92
 */

undefined8 FUN_003a8a84(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xb59) == '\x02') &&
     ((iVar1 = func_0x003b7770(param_1), iVar1 != 0 || (*(int *)(param_1 + 0xd60) == 2)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x8f0,"tls_construct_stoc_client_cert_type");
    func_0x003a9570(param_1,0x2b,0x6e,0);
    return 0;
  }
  if (*(char *)(param_1 + 0xb58) == '\0') {
    *(undefined1 *)(param_1 + 0xb59) = 0;
    return 2;
  }
  iVar1 = func_0x003b7770(param_1);
  if ((((iVar1 == 0) && (*(int *)(param_1 + 0xd60) != 2)) || (*(char *)(param_1 + 0xb59) != '\x01'))
/* wm:watermarked copy - do not remove */
     || (*(long *)(&UNK_00001750 + param_1) == 0)) {
    *(undefined2 *)(param_1 + 0xb58) = 0;
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0x13,2);
  if (((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
     ((iVar1 = func_0x019ec0a0(param_2,*(undefined1 *)(param_1 + 0xb58),1), iVar1 == 0 ||
      (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x90a,"tls_construct_stoc_client_cert_type");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}
/* donate: donate/README.md - github.com/pengussy */

