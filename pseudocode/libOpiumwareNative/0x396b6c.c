/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x396b6c:d1d954622b
 */

undefined8 FUN_00396b6c(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (iVar1 != 0x17) {
    if (iVar1 == 0x15) {
      iVar1 = *(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      param_1 + 0x30);
    }
    else {
      if (iVar1 != 0x14) goto LAB_00396ba0;
      iVar1 = *(int *)(
                      "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                      + param_1 + 0x10);
    }
    if (iVar1 == 0) {
LAB_00396ba0:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                      ,0x107,"tls13_validate_record_header");
      func_0x00397da4(param_1,10,0x1bb,0);
      return 0;
    }
  }
  if (*param_2 != 0x303) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                    ,0x10c,"tls13_validate_record_header");
    func_0x00397da4(param_1,0x32,0x10b,0);
    return 0;
  }
  if (*(undefined **)(param_2 + 2) < &UNK_00004101) {
    return 1;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                  ,0x112,"tls13_validate_record_header");
  func_0x00397da4(param_1,0x16,0x96,0);
  return 0;
}

