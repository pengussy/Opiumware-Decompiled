/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a4bc4:91fe127196
 */

undefined8 FUN_003a4bc4(long param_1,undefined8 *param_2)

{
  byte bVar1;
  
  if (param_2[2] != 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0xbf,"tls_parse_ctos_maxfragmentlen");
    func_0x003a9570(param_1,0x32,0x6e,0);
    return 0;
  }
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_2[2] = 0;
/* wm:proprietary - see LICENSE - do not sell */
  if (3 < bVar1 - 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0xc6,"tls_parse_ctos_maxfragmentlen");
    func_0x003a9570(param_1,0x2f,0xe8,0);
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x900) + 0x358) == -1) {
    *(byte *)(*(long *)(param_1 + 0x900) + 0x358) = bVar1;
  }
  return 1;
}

