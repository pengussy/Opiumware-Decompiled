/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a151c:7bb95723d5
 */

undefined8 FUN_003a151c(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_2[2] != 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x670,"tls_parse_stoc_maxfragmentlen");
    func_0x003a9570(param_1,0x32,0x6e,0);
    return 0;
  }
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_2[2] = 0;
  if (bVar1 - 1 < 4) {
    if ((uint)bVar1 == (uint)*(byte *)(param_1 + 0xb3c)) {
/* proprietary - see LICENSE - do not sell */
      *(byte *)(*(long *)(param_1 + 0x900) + 0x358) = bVar1;
      return 1;
    }
    func_0x004464bc();
    uVar2 = 0x683;
  }
  else {
    func_0x004464bc();
    uVar2 = 0x677;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar2,"tls_parse_stoc_maxfragmentlen");
  func_0x003a9570(param_1,0x2f,0xe8,0);
  return 0;
}

