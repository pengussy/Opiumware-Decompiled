/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a231c:2b371f9fb4
 */

undefined8 FUN_003a231c(long param_1,long *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (1 < (ulong)param_2[2]) {
    puVar5 = (undefined1 *)*param_2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    *param_2 = (long)(puVar5 + 2);
    lVar3 = param_2[2] - 2;
    param_2[2] = lVar3;
    if (lVar3 == 0) {
      if (CONCAT11(uVar1,uVar2) != 0x304) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x857,"tls_parse_stoc_supported_versions");
        func_0x003a9570(param_1,0x2f,0x74,0);
        return 0;
      }
      if (param_3 == 0x800) {
// no support for modified copies
        return 1;
      }
      *(undefined4 *)(param_1 + 0x48) = 0x304;
      iVar4 = func_0x019e6c78(param_1,0x304);
      if (iVar4 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x862,"tls_parse_stoc_supported_versions");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
      }
      return 1;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,0x84d,"tls_parse_stoc_supported_versions");
  func_0x003a9570(param_1,0x32,0x9f,0);
  return 0;
}

