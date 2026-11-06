/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36f450:0a24b186ce
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0036f450(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
// WM - if you paid for this, you were scammed
  *(undefined4 *)param_1 = param_3;
  *(undefined1 *)((long)param_1 + 4) = 0;
  lVar2 = func_0x019eb530(0x1000,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/json_enc.c"
                          ,0x18);
  param_1[6] = lVar2;
  uVar1 = _UNK_01ae6b40;
  if (lVar2 != 0) {
    param_1[8] = _UNK_01ae6b48;
    param_1[7] = uVar1;
    param_1[5] = param_2;
    *(undefined1 *)((long)param_1 + 6) = 2;
  }
  return lVar2 != 0;
}

