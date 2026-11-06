/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39911c:cb064fbc89
 */

undefined8 FUN_0039911c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_2 + 8);
  if (*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
               param_1 + 8) != 0) {
    if (&UNK_00004400 < puVar3) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x3fb,"tls_default_post_process_record");
      func_0x00397da4(param_1,0x16,0x8c,0);
      return 0;
    }
    if (*(long *)(param_2 + 0x30) == 0) {
      lVar2 = func_0x019eb530(&UNK_00004540,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                              ,0x3e3);
      *(long *)(param_2 + 0x30) = lVar2;
      if (lVar2 == 0) goto LAB_00399244;
      uVar1 = func_0x00405bd4(*(undefined8 *)
                               (
                               "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                               + param_1 + 8),lVar2,0x4000,*(undefined8 *)(param_2 + 0x20),
                              *(undefined8 *)(param_2 + 8));
    }
    else {
      uVar1 = func_0x00405bd4(*(long *)(
                                       "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                       + param_1 + 8),*(long *)(param_2 + 0x30),0x4000,
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                              *(undefined8 *)(param_2 + 0x20));
    }
    if ((int)uVar1 < 0) {
LAB_00399244:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x400,"tls_default_post_process_record");
      func_0x00397da4(param_1,0x1e,0x6b,0);
      return 0;
    }
    puVar3 = (undefined *)(ulong)uVar1;
    *(undefined **)(param_2 + 8) = puVar3;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  }
  if (puVar3 < &UNK_00004001) {
    return 1;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,0x406,"tls_default_post_process_record");
  func_0x00397da4(param_1,0x16,0x92,0);
  return 0;
}

