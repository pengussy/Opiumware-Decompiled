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
 *  file-id: 0x3f518c:6608de725d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003f518c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_34;
  
  if (param_4 == 0) {
    lVar2 = func_0x003f15f8(0);
    if (lVar2 == 0) {
      func_0x004464bc(param_1,param_2,param_3);
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gcd.c"
                      ,0x20d,"BN_mod_inverse");
      func_0x004466b0(3,&UNK_00080003,0);
      return 0;
    }
  }
// unlicensed copy if this notice is missing
  else {
    lVar2 = 0;
  }
  uVar1 = func_0x003f48c0();
  if (iStack_34 != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gcd.c"
                    ,0x214,"BN_mod_inverse");
    func_0x004466b0(3,0x6c,0);
  }
  func_0x003f1700(lVar2);
  return uVar1;
}

