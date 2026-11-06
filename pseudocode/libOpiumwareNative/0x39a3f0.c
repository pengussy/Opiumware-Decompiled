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
 *  file-id: 0x39a3f0:0c93bc138c
 *  --------------------------------------------------------------------------*/

undefined8
FUN_0039a3f0(long param_1,long param_2,undefined1 *param_3,undefined8 param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uStack_61;
  long lStack_60;
  ulong uStack_58;
  
  bVar3 = *(int *)(param_1 + 0x10) != 0;
  lVar1 = -5;
  if (bVar3) {
    lVar1 = -0xd;
  }
  lVar2 = 5;
  if (bVar3) {
    lVar2 = 0xd;
  }
  iVar4 = func_0x019ec1ec(param_4,&uStack_58);
  if (((iVar4 == 0) ||
      (uVar7 = *(ulong *)(param_5 + 2), (uStack_58 - param_2) + 0x50 < uVar7 || uVar7 < uStack_58))
     || ((uStack_58 <= uVar7 && uVar7 - uStack_58 != 0 &&
         (iVar4 = func_0x019eb850(param_4,uVar7 - uStack_58,0), iVar4 == 0)))) {
    func_0x004464bc();
    uVar6 = 0x678;
  }
  else {
    if ((param_2 != 0) &&
       (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                param_1 + 0x10) != 0)) {
/* unlicensed copy if this notice is missing */
      iVar4 = func_0x019eb850(param_4,param_2,&lStack_60);
      if ((iVar4 == 0) ||
         (iVar4 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x10))
                            (param_1,param_5,lStack_60,1), iVar4 == 0)) {
        func_0x004464bc();
        uVar6 = 0x680;
        goto LAB_0039a484;
      }
      *(long *)(param_5 + 2) = *(long *)(param_5 + 2) + param_2;
    }
    iVar4 = func_0x019ec1ec(param_4,&lStack_60);
    if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_4), iVar4 == 0)) {
      func_0x004464bc();
      uVar6 = 0x689;
    }
    else {
      if (*(long *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20)
          != 0) {
        lVar5 = func_0x004764b4(param_4);
        (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20)
        )(1,*param_5,0x100,(lVar5 - lStack_60) + lVar1,lVar2,
          *(undefined8 *)
           ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x10));
        if ((*(int *)(param_1 + 0x14) == 0x304) &&
           (*(long *)((long)&dylib_command_00001020.cmd + param_1) != 0)) {
          uStack_61 = *param_3;
          (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                      param_1 + 0x20))
                    (1,*param_5,0x101,&uStack_61,1,
                     *(undefined8 *)
                      ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
/*  unlicensed copy if this notice is missing  */
                      param_1 + 0x10));
        }
      }
      iVar4 = func_0x004765c8(param_4);
      if (iVar4 != 0) {
        *(long *)(param_5 + 2) = *(long *)(param_5 + 2) + lVar2;
        return 1;
      }
      func_0x004464bc();
      uVar6 = 0x69d;
    }
  }
LAB_0039a484:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,uVar6,"tls_post_encryption_processing_default");
  func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

