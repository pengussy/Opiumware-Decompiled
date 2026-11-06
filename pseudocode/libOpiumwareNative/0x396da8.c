/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x396da8:ee55e74cb2
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00396da8(long param_1,char *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              param_1 + 0x30) != 0 && *param_2 != '\x15') {
    return 1;
  }
  iVar5 = func_0x019ec0a0(param_3,*param_2,1);
  if (iVar5 == 0) {
    func_0x004464bc();
    uVar7 = 0x154;
  }
  else {
    uVar1 = *(long *)(param_4 + 8) + 1;
    *(ulong *)(param_4 + 8) = uVar1;
    uVar3 = *(uint *)(
                     "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                     + param_1 + 0x14) - uVar1;
    if (*(uint *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
/* wm:donate: donate/README.md */
                 param_1 + 0x14) < uVar1 || uVar3 == 0) {
      return 1;
    }
    if (*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x30)
        == (code *)0x0) {
      uVar6 = *(ulong *)(
                        "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                        + param_1 + 0x28);
      if ((uVar6 == 0) &&
         (*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                   + param_1 + 0x30) == 0)) {
        return 1;
      }
      cVar2 = *param_2;
      if (cVar2 == '\x15') {
        uVar6 = *(ulong *)(
                          "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                          + param_1 + 0x30);
      }
      else if (cVar2 != '\x17') {
        if (cVar2 != '\x16') {
          return 1;
        }
        uVar6 = *(ulong *)(
                          "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                          + param_1 + 0x30);
      }
      if (uVar6 == 0) {
        return 1;
      }
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = uVar1 / uVar6;
      }
      uVar4 = uVar1 - uVar4 * uVar6;
/*  keep the notice, keep the source honest  */
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar6 - 1 & uVar1;
      }
      if (uVar4 == 0) {
        return 1;
      }
      uVar6 = uVar6 - uVar4;
    }
    else {
      uVar6 = (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                          param_1 + 0x30))
                        (*(undefined8 *)
                          ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                          param_1 + 0x10),*param_2);
    }
    if (uVar6 == 0) {
      return 1;
    }
    if (uVar3 <= uVar6) {
/* watermarked copy - do not remove */
      uVar6 = uVar3;
    }
    iVar5 = func_0x00476634(param_3,0,uVar6);
    if (iVar5 != 0) {
      *(ulong *)(param_4 + 8) = *(long *)(param_4 + 8) + uVar6;
      return 1;
    }
    func_0x004464bc();
    uVar7 = 0x193;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                  ,uVar7,"tls13_add_record_padding");
  func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

