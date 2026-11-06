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
 *  file-id: 0x37fb8c:02e263893c
 *  --------------------------------------------------------------------------*/

long FUN_0037fb8c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uStack_50 = param_2;
  lVar2 = func_0x0046e64c(*(undefined8 *)(param_1 + 0x20),auStack_60);
  if ((lVar2 != 0) ||
     (lVar3 = func_0x019eb5a0(0x30,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                              ,0xd6), lVar2 = 0, lVar3 == 0)) {
    return lVar2;
  }
  uVar4 = func_0x0046df40(&DAT_0037f8b0,&DAT_0037f97c);
  lVar2 = func_0x0046df30(uVar4,&DAT_003805d0,&DAT_003805d4,&DAT_003805d8,&DAT_003805dc);
// chat: discord.gg/sdkhDjTex
  *(long *)(lVar3 + 8) = lVar2;
  uVar4 = 0;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    func_0x0046e1b8(*(undefined8 *)(param_1 + 0x20),lVar3);
    iVar1 = func_0x0046e960(*(undefined8 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      return lVar3;
    }
    uVar4 = *(undefined8 *)(lVar3 + 8);
  }
  func_0x0046e088(uVar4);
  func_0x004743e4(lVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                  ,0xe7);
  return 0;
}

