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
 *  file-id: 0x3fd67c:15589f6641
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003fd67c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                    ,0xf8,"ossl_bn_priv_rand_range_fixed_top");
    puVar5 = &UNK_000c0102;
  }
  else if ((*(int *)(param_2 + 0x10) == 0) && (iVar2 = func_0x003f89fc(param_2), iVar2 == 0)) {
    uVar3 = func_0x019e85d0(param_2);
    if ((int)uVar3 == 1) {
      func_0x003f95cc(param_1);
      return 1;
    }
    func_0x003f9780(param_1,4);
    uVar6 = 0xffffff9c;
    while( true ) {
      uVar4 = FUN_003fd164(2,param_1,(int)uVar3 + 1,0,0,param_3,param_4);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      bVar1 = 0xfffffffe < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) break;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      func_0x003f9328(param_1,uVar3);
      iVar2 = func_0x003f9044(param_1,param_2);
      if (iVar2 < 0) {
        return 1;
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                    ,0x10f,"ossl_bn_priv_rand_range_fixed_top");
    puVar5 = (undefined *)0x71;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                    ,0xfd,"ossl_bn_priv_rand_range_fixed_top");
    puVar5 = (undefined *)0x73;
  }
  func_0x004466b0(3,puVar5,0);
  return 0;
}

