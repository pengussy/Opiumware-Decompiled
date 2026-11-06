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
 *  file-id: 0x34c46c:b07a291e09
 *  --------------------------------------------------------------------------*/

ulong FUN_0034c46c(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    return 0;
  }
  uVar2 = func_0x00392d08(param_1 + 900);
  if (((int)uVar2 == 0) || (uVar2 = func_0x0034d8f8(param_1), (int)uVar2 == 0)) {
    return uVar2;
  }
  lVar3 = func_0x019eb5a0(0x1d8,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/d1_lib.c"
                          ,0x4f);
  if (lVar3 != 0) {
    lVar4 = func_0x0034d324();
    *(long *)(lVar3 + 0x118) = lVar4;
    lVar5 = func_0x0034d324();
    *(long *)(lVar3 + 0x120) = lVar5;
    if ((lVar4 != 0) && (lVar5 != 0)) {
      *(long *)(param_1 + 0x13c) = lVar3;
      iVar1 = (**(code **)(*(long *)(param_1 + 6) + 0x30))(param_1);
      return (ulong)(iVar1 != 0);
/*  no support for modified copies  */
    }
    func_0x0034d338(lVar4);
    func_0x0034d338(*(undefined8 *)(lVar3 + 0x120));
    func_0x004743e4(lVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/d1_lib.c"
                    ,0x5a);
  }
  FUN_0034d958(param_1);
  return 0;
}

