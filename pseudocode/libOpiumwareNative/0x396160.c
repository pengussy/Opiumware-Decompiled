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
 *  file-id: 0x396160:926184aef9
 *  --------------------------------------------------------------------------*/

bool FUN_00396160(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x6c0) == 0) {
    uVar1 = 1;
    lVar4 = *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                     param_1 + 0x40);
  }
  else {
    uVar1 = func_0x003e9d20(*(undefined8 *)(param_1 + 0x48),
                            *(long *)(param_1 + 0x6a0) + *(long *)(param_1 + 0x6b8),
                            *(long *)(param_1 + 0x6c0),auStack_48);
    *(undefined8 *)(param_1 + 0x6c0) = 0;
    lVar4 = *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                     param_1 + 0x40);
  }
  if (lVar4 != 0) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    lVar4 = func_0x0034d3f8();
    while (lVar4 != 0) {
      puVar5 = *(undefined8 **)(lVar4 + 8);
      uVar2 = func_0x003e9d20(*(undefined8 *)(param_1 + 0x48),*puVar5,puVar5[1],auStack_48);
      uVar1 = uVar2 & uVar1;
      func_0x004743e4(puVar5[2],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                      ,0x262);
      func_0x004743e4(*(undefined8 *)(lVar4 + 8),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                      ,0x263);
      func_0x0034d314(lVar4);
      lVar4 = func_0x0034d3f8(*(undefined8 *)
                               (
                               "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                               + param_1 + 0x40));
    }
    func_0x0034d338(*(undefined8 *)
                     ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                     param_1 + 0x40));
  }
  if (*(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
               param_1 + 0x48) != 0) {
    lVar4 = func_0x0034d3f8();
    while (lVar4 != 0) {
      func_0x004743e4(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x10),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                      ,0x26c);
      func_0x004743e4(*(undefined8 *)(lVar4 + 8),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                      ,0x26d);
      func_0x0034d314(lVar4);
      lVar4 = func_0x0034d3f8(*(undefined8 *)
                               (
                               "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                               + param_1 + 0x48));
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    func_0x0034d338(*(undefined8 *)
                     ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                     param_1 + 0x48));
  }
  iVar3 = func_0x00399edc(param_1);
  return iVar3 != 0 && uVar1 != 0;
}

