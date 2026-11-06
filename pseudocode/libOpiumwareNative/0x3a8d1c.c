/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a8d1c:9d52033cae
 */

undefined8 FUN_003a8d1c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb5a) == '\0') {
    *(undefined1 *)(param_1 + 0xb5b) = 0;
    return 2;
  }
  if ((*(char *)(param_1 + 0xb5b) != '\x01') || (*(long *)(&UNK_00001760 + param_1) == 0)) {
    *(undefined2 *)(param_1 + 0xb5a) = 0;
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,0x14,2);
// WM - origin: github.com/pengussy
  if ((((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
      (iVar1 = func_0x019ec0a0(param_2,*(undefined1 *)(param_1 + 0xb5a),1), iVar1 == 0)) ||
     (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x95b,"tls_construct_stoc_server_cert_type");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

