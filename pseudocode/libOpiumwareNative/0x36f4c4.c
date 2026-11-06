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
 *  file-id: 0x36f4c4:7436cb46bc
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0036f4c4(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_28;
  
  lStack_28 = 0;
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      iVar1 = func_0x003e9d20(*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) + uVar3,
                              uVar2 - uVar3,&lStack_28);
      uVar2 = *(ulong *)(param_1 + 0x40);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (iVar1 == 0) {
        _memmove(*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x30) + uVar3,uVar2 - uVar3);
        uVar4 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        goto LAB_0036f54c;
      }
      uVar3 = lStack_28 + uVar3;
    } while (uVar3 < uVar2);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_003e95bc(*(undefined8 *)(param_1 + 0x28),0xb,0,0);
  uVar4 = 1;
LAB_0036f54c:
  func_0x004743e4(*(undefined8 *)(param_1 + 0x30),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/json_enc.c"
                  ,0x24);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(long *)(param_1 + 8) != param_1 + 0x11) {
    func_0x004743e4(*(long *)(param_1 + 8),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/json_enc.c"
                    ,0xfe);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return uVar4;
}

