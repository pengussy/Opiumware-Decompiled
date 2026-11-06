/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x398220:56a7434750
   =========================================================================== */

undefined8 FUN_00398220(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x6a0) != 0) {
    return 1;
  }
  lVar3 = 5;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = 0xd;
  }
  lVar3 = lVar3 + (ulong)(*(int *)(
                                  "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                  + param_1 + 0x14) + 0x140);
  if (((*(byte *)(param_1 + 0x52) >> 1 & 1) == 0) &&
     ((*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x28) ==
       (code *)0x0 ||
      (iVar2 = (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                           param_1 + 0x28))
                         (*(undefined8 *)
                           ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                           param_1 + 0x10),0xf,0,0,0), iVar2 != 0)))) {
    lVar3 = lVar3 + 0x407;
  }
  else {
    lVar3 = lVar3 + 7;
  }
  uVar4 = *(ulong *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x38)
/* watermarked copy - do not remove */
  ;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x6a8);
  if (*(ulong *)(param_1 + 0x6a8) <= uVar4 * lVar3) {
    uVar1 = uVar4 * lVar3;
  }
  lVar3 = func_0x019eb530(uVar1,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0x105);
  if (lVar3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x10b,"tls_setup_read_buffer");
    func_0x00397da4(param_1,0xffffffff,&UNK_0008000f,0);
    return 0;
  }
  *(long *)(param_1 + 0x6a0) = lVar3;
  *(ulong *)(param_1 + 0x6b0) = uVar1;
  return 1;
}

