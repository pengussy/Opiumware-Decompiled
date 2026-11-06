/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a2e04:6831510fb3
   =========================================================================== */

undefined8 FUN_003a2e04(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2[2] == 1) {
    uVar1 = *(undefined1 *)*param_2;
    *param_2 = (undefined1 *)*param_2 + 1;
    param_2[2] = 0;
    if (*(char *)(param_1 + 0xb59) != '\x01') {
      func_0x019e7344(param_1);
      return 0;
    }
    if (*(long *)(&UNK_00001750 + param_1) != 0) {
      lVar2 = _memchr(*(long *)(&UNK_00001750 + param_1),uVar1,
/*  watermarked copy - do not remove  */
                      *(undefined8 *)(&UNK_00001758 + param_1));
      if (lVar2 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x9c3,"tls_parse_stoc_client_cert_type");
        func_0x003a9570(param_1,0x32,0x180,0);
        return 0;
      }
      *(undefined1 *)(param_1 + 0xb58) = uVar1;
      return 1;
    }
    func_0x004464bc();
    uVar3 = 0x9be;
  }
  else {
    func_0x004464bc();
    uVar3 = 0x9b0;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar3,"tls_parse_stoc_client_cert_type");
  func_0x003a9570(param_1,0x32,0x6e,0);
  return 0;
}

