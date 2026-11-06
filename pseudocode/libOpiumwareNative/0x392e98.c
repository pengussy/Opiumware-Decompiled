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
 *  file-id: 0x392e98:2bb95f1e76
 *  --------------------------------------------------------------------------*/

undefined8
FUN_00392e98(long param_1,undefined1 param_2,undefined8 param_3,ulong param_4,ulong *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((*(int *)(param_1 + 0x1c4) < 1) ||
     (uVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x90))(param_1), 0 < (int)uVar1)) {
    if (param_4 == 0) {
      return 0;
    }
    uVar2 = func_0x0035f01c(param_1);
    if ((uVar2 & 0xffffffff) < param_4) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
                      ,0x285,"do_dtls1_write");
      func_0x003a9570(param_1,0x50,0xc2,0);
// WM - origin: github.com/pengussy
      uVar1 = 0;
    }
    else {
      if ((**(int **)(param_1 + 0x18) == 0x1ffff) && (*(int *)(param_1 + 0x9c0) != 0x100)) {
        uStack_54 = 0xfeff;
      }
      else {
        uStack_54 = *(undefined4 *)(param_1 + 0x48);
      }
      auStack_58[0] = param_2;
      uStack_50 = param_3;
      uStack_48 = param_4;
      uVar1 = (**(code **)(*(long *)(param_1 + 0xe30) + 0x30))
                        (*(undefined8 *)(param_1 + 0xe40),auStack_58,1);
      uVar1 = func_0x00394790(param_1,1,uVar1,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
                              ,0x298);
      if (0 < (int)uVar1) {
        *param_5 = param_4;
        return uVar1;
      }
    }
  }
  return uVar1;
}

