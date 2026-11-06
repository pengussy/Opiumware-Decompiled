/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x398f2c:e64d55d82a
 */

undefined8 FUN_00398f2c(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(int *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
              param_1 + 0x18) == 0) {
    func_0x004464bc();
    uVar1 = 0x1f8;
  }
  else {
    if ((ulong)(*(long *)(
                         "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                         + param_1 + 0x20) + param_2) <=
        (ulong)(uint)(*(int *)(
                              "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                              + param_1 + 0x18) + param_3)) {
// watermarked copy - do not remove
      *(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
               param_1 + 0x20) =
           *(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                    + param_1 + 0x20) + param_2;
      return 1;
    }
    func_0x004464bc();
    uVar1 = 0x201;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,uVar1,"rlayer_early_data_count_ok");
  func_0x00397da4(param_1,10,0xa4,0);
  return 0;
}

