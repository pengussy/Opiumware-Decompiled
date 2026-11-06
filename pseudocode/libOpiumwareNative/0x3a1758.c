/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a1758:38deaea380
 */

undefined8 FUN_003a1758(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    pbVar5 = (byte *)*param_2;
    uVar4 = lVar3 - 1;
    if (uVar4 == *pbVar5) {
      *param_2 = (long)(pbVar5 + lVar3);
      param_2[2] = 0;
      if (*(int *)(param_1 + 0x508) != 0) {
        return 1;
      }
      if (uVar4 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x6bf,"tls_parse_stoc_ec_pt_formats");
        uVar1 = 0x32;
        puVar2 = (undefined *)0x10f;
      }
      else {
        *(undefined8 *)(param_1 + 0xa80) = 0;
        func_0x004743e4(*(undefined8 *)(param_1 + 0xa88),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x6c4);
        lVar3 = func_0x019eb530(uVar4,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                                ,0x6c5);
        *(long *)(param_1 + 0xa88) = lVar3;
        if (lVar3 != 0) {
          *(ulong *)(param_1 + 0xa80) = uVar4;
          _memcpy(lVar3,pbVar5 + 1,uVar4);
          return 1;
        }
        *(undefined8 *)(param_1 + 0xa80) = 0;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x6c8,"tls_parse_stoc_ec_pt_formats");
        uVar1 = 0x50;
        puVar2 = &UNK_000c0103;
      }
      goto LAB_003a17d8;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,0x6b9,"tls_parse_stoc_ec_pt_formats");
  uVar1 = 0x32;
  puVar2 = (undefined *)0x6e;
LAB_003a17d8:
  func_0x003a9570(param_1,uVar1,puVar2,0);
  return 0;
}

