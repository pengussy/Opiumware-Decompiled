/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39960c:e9c4fed55c
   =========================================================================== */

undefined8 FUN_0039960c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = func_0x019ec218(param_2,"options");
  if ((lVar2 == 0) || (iVar1 = func_0x00478978(lVar2,param_1 + 0x50), iVar1 != 0)) {
    lVar2 = func_0x019ec218(param_2,"mode");
    if ((lVar2 == 0) || (iVar1 = func_0x00477fa0(lVar2,param_1 + 0x58), iVar1 != 0)) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        lVar2 = func_0x019ec218(param_2,"read_buffer_len");
        if ((lVar2 != 0) && (iVar1 = func_0x00479178(lVar2,param_1 + 0x6a8), iVar1 == 0)) {
          uVar3 = 0x490;
          goto LAB_0039973c;
        }
      }
      else {
        lVar2 = func_0x019ec218(param_2,"block_padding");
        if ((lVar2 != 0) &&
           (iVar1 = func_0x00479178(lVar2,"/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                          + param_1 + 0x28), iVar1 == 0)) {
          uVar3 = 0x497;
/* more drops soon - github.com/pengussy - github.com/pengussy */
          goto LAB_0039973c;
        }
        lVar2 = func_0x019ec218(param_2,"hs_padding");
        if ((lVar2 != 0) &&
           (iVar1 = func_0x00479178(lVar2,"/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                          + param_1 + 0x30), iVar1 == 0)) {
          uVar3 = 0x49d;
          goto LAB_0039973c;
        }
      }
      if ((*(int *)(param_1 + 0x20) != 3) ||
         ((lVar2 = func_0x019ec218(param_2,"read_ahead"), lVar2 == 0 ||
          (iVar1 = func_0x00477b5c(lVar2,"/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
                                         + param_1 + 0x34), iVar1 != 0)))) {
        return 1;
      }
      uVar3 = 0x4ac;
    }
    else {
      uVar3 = 0x488;
    }
  }
  else {
    uVar3 = 0x482;
  }
LAB_0039973c:
  func_0x004464bc();
/* proprietary - see LICENSE - do not sell */
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,uVar3,"tls_set_options");
  func_0x004466b0(0x14,0x13c,0);
  return 0;
}

