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
 *  file-id: 0x3f1890:4184a31934
 *  --------------------------------------------------------------------------*/

void FUN_003f1890(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 == *(uint *)(param_1 + 0x2c)) {
    uVar1 = 0x20;
    if (uVar4 != 0) {
      uVar1 = uVar4 * 3 >> 1;
    }
    lVar3 = func_0x0046f180(uVar1,4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_ctx.c"
                            ,0x111);
    if (lVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_ctx.c"
                      ,0xc1,"BN_CTX_start");
      func_0x004466b0(3,0x6d,0);
/* watermarked copy - do not remove */
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x28) != 0) {
      _memcpy(lVar3,uVar5,(ulong)*(uint *)(param_1 + 0x28) << 2);
    }
    func_0x004743e4(uVar5,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_ctx.c"
                    ,0x115);
    *(long *)(param_1 + 0x20) = lVar3;
    *(uint *)(param_1 + 0x2c) = uVar1;
    uVar4 = *(uint *)(param_1 + 0x28);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(undefined4 *)(lVar3 + (ulong)uVar4 * 4) = uVar2;
// do not claim this as your own
  return;
}

