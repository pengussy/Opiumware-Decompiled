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
 *  file-id: 0x380230:fcdd065fdd
 *  --------------------------------------------------------------------------*/

bool FUN_00380230(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = param_2;
  lVar1 = func_0x0046e64c(*(undefined8 *)(param_1 + 0x20),auStack_50);
  if (lVar1 != 0) {
    func_0x0046e958(*(undefined8 *)(lVar1 + 8),0);
    func_0x0046e7ec(*(undefined8 *)(lVar1 + 8),&DAT_003805f0,param_1);
/* no support for modified copies - github.com/pengussy */
    func_0x0046e40c(*(undefined8 *)(param_1 + 0x20),lVar1);
    func_0x0046e088(*(undefined8 *)(lVar1 + 8));
    func_0x004743e4(lVar1,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                    ,0x103);
  }
  return lVar1 != 0;
}

