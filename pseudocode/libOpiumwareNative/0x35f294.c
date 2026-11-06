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
 *  file-id: 0x35f294:379a0dc552
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0035f294(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x0045e378(param_2);
  iVar1 = func_0x00353734(param_1,&UNK_00040007,uVar2,0,param_2);
  if (iVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
/* WM - do not claim this as your own */
                    ,&UNK_00001e23,"SSL_CTX_set0_tmp_dh_pkey");
    func_0x004466b0(0x14,0x18a,0);
    return 0;
  }
  func_0x0045eb4c(*(undefined8 *)(*(long *)(param_1 + 0x158) + 8));
  *(undefined8 *)(*(long *)(param_1 + 0x158) + 8) = param_2;
  return 1;
}

