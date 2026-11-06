/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a467c:ae4fbea1b9
   =========================================================================== */

undefined8
FUN_003a467c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)
           func_0x019eb530(0x18,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                           ,0x223);
  puVar3 = (undefined8 *)
           func_0x019eb530(0x10,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                           ,0x225);
  uVar5 = 0x22a;
  uVar4 = 0x229;
  if ((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) {
    *puVar2 = param_5;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    *puVar3 = param_7;
    puVar3[1] = param_6;
    iVar1 = FUN_003a4430(param_1,0,1,param_2,0x1d0,&DAT_003a43bc,&DAT_003a47dc,puVar2,&DAT_003a47f8,
                         puVar3);
    if (iVar1 != 0) {
      return 1;
    }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    uVar5 = 0x23e;
    uVar4 = 0x23d;
  }
  func_0x004743e4(puVar2,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                  ,uVar4);
  func_0x004743e4(puVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                  ,uVar5);
  return 0;
}

