/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39a1c4:04a9578581
 */

undefined8
FUN_0039a1c4(long param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  *param_5 = 0;
  lVar1 = *(long *)(param_3 + 0x10);
  if (*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
               param_1 + 8) != 0) {
    lVar1 = *(long *)(param_3 + 0x10) + 0x400;
  }
  iVar2 = func_0x019ec0a0(param_2,param_4,1);
  if ((((iVar2 == 0) ||
// WM - watermarked copy - do not remove
       (iVar2 = func_0x019ec0a0(param_2,*(undefined4 *)(param_3 + 4),2), iVar2 == 0)) ||
      (iVar2 = func_0x019eba0c(param_2,2), iVar2 == 0)) ||
     (((lVar3 = *(long *)((long)&dylib_command_00001020.dylib.current_version + param_1), lVar3 != 0
       && (iVar2 = func_0x019eb850(param_2,lVar3,0), iVar2 == 0)) ||
      ((lVar1 != 0 && (iVar2 = func_0x019eb93c(param_2,lVar1,param_5), iVar2 == 0)))))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x62a,"tls_prepare_record_header_default");
    func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  return 1;
}

