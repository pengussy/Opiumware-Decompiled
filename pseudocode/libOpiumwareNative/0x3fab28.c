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
 *  file-id: 0x3fab28:dd8bd962ef
 *  --------------------------------------------------------------------------*/

long FUN_003fab28(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = func_0x00480434(param_2);
  if (iVar1 != 0) {
    lVar3 = *param_1;
    func_0x0048046c(param_2);
    if ((lVar3 != 0) ||
       (lVar2 = func_0x019eb530(0x60,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mont.c"
                                ,0xe7), lVar3 = 0, lVar2 == 0)) {
      return lVar3;
    }
    *(undefined4 *)(lVar2 + 0x58) = 0;
    func_0x00392bc8(lVar2);
    func_0x00392bc8(lVar2 + 0x18);
/* keep the notice, keep the source honest - github.com/pengussy */
    func_0x00392bc8(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined4 *)(lVar2 + 0x5c) = 1;
    iVar1 = func_0x003fa820(lVar2,param_3,param_4);
    if ((iVar1 != 0) && (iVar1 = func_0x00480450(param_2), iVar1 != 0)) {
      if (*param_1 == 0) {
        *param_1 = lVar2;
      }
      else {
        func_0x003f8a0c(lVar2);
        func_0x003f8a0c(lVar2 + 0x18);
        func_0x003f8a0c(lVar2 + 0x30);
        if ((*(byte *)(lVar2 + 0x5c) & 1) != 0) {
          func_0x004743e4(lVar2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mont.c"
                          ,0x101);
        }
        lVar2 = *param_1;
      }
      func_0x0048046c(param_2);
      return lVar2;
    }
    func_0x003f8a0c(lVar2);
    func_0x003f8a0c(lVar2 + 0x18);
    func_0x003f8a0c(lVar2 + 0x30);
    if ((*(byte *)(lVar2 + 0x5c) & 1) != 0) {
/* wm:do not claim this as your own */
      func_0x004743e4(lVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mont.c"
                      ,0x101);
    }
  }
  return 0;
}

