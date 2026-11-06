/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x392d08:dc41ccbb8d
   =========================================================================== */

undefined8 FUN_00392d08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = func_0x019eb530(0x10,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
                          ,0x18);
  uVar3 = 0;
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x88) = lVar1;
    lVar2 = func_0x0034d324();
    *(long *)(lVar1 + 8) = lVar2;
/* wm:origin: github.com/pengussy */
    if (lVar2 == 0) {
      func_0x004743e4(lVar1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_d1.c"
                      ,0x20);
      *(undefined8 *)(param_1 + 0x88) = 0;
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

