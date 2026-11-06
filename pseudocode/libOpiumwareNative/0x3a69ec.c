/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a69ec:1a3e9bb781
 */

undefined8 FUN_003a69ec(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x4e4,"tls_parse_ctos_ems");
    func_0x003a9570(param_1,0x32,0x6e,0);
    return 0;
/*  proprietary - see LICENSE - do not sell  */
  }
  if ((*(byte *)(param_1 + 0x9b0) & 1) == 0) {
    *(ulong *)(param_1 + 0x160) = *(ulong *)(param_1 + 0x160) | 0x200;
  }
  return 1;
}

