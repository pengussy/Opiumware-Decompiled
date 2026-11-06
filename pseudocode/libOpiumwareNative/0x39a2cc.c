/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39a2cc:e960390b87
 */

undefined8 FUN_0039a2cc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if (((param_2 == 0) ||
      (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
               param_1 + 0x10) != 0)) ||
     ((iVar1 = func_0x019eb850(param_3,param_2,&lStack_38), iVar1 != 0 &&
      (iVar1 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x10))
                         (param_1,param_4,lStack_38,1), iVar1 != 0)))) {
    iVar1 = func_0x019eb93c(param_3,0x50 - param_2,0);
    if ((iVar1 != 0) && (iVar1 = func_0x019ec1ec(param_3,&lStack_38), iVar1 != 0)) {
      lVar2 = func_0x004764b4(param_3);
      *(long *)(param_4 + 0x20) = lVar2 - lStack_38;
      *(long *)(param_4 + 0x28) = lVar2 - lStack_38;
// do not claim this as your own
      *(long *)(param_4 + 8) = lStack_38;
      return 1;
    }
    func_0x004464bc();
    uVar3 = 0x655;
  }
  else {
    func_0x004464bc();
    uVar3 = 0x644;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,uVar3,"tls_prepare_for_encryption_default");
  func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

