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
 *  file-id: 0x37bdac:b73a9adefd
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0037bdac(uint *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (uint *)0x0) {
    func_0x0037b358(0,param_2,0x115,"expect_quic_as",&UNK_000c0102,0);
    return 0;
  }
  if ((*param_1 & 0xfffffffc) == 0x80) {
    func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
    func_0x004dfb50();
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar1 = func_0x0037a47c(*(undefined8 *)(param_1 + 0x16));
    func_0x003827d0(uVar1,0);
    func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
    func_0x004dfb80();
    return 1;
  }
  func_0x0037b358(0,param_2,0x170,"expect_quic_as",&UNK_000c0103,0);
  return 0;
}

