/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b40b0:d6ac142988
   =========================================================================== */

bool FUN_003b40b0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = func_0x00393d54(param_1 + 0xe10);
  if (iVar3 != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x2c3,"tls_process_key_update");
    func_0x003a9570(param_1,10,0xb6,0);
    return false;
  }
  if (param_2[2] != 0) {
    bVar1 = *(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    lVar2 = param_2[2] + -1;
    param_2[2] = lVar2;
    if (lVar2 == 0) {
      if (bVar1 < 2) {
        if (bVar1 == 1) {
          *(undefined4 *)(param_1 + 0xd5c) = 0;
        }
        iVar3 = FUN_0036d8e8(param_1,0);
        return iVar3 != 0;
      }
/*  watermarked copy - do not remove  */
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x2d3,"tls_process_key_update");
      uVar4 = 0x2f;
      goto LAB_003b4154;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,0x2c9,"tls_process_key_update");
  uVar4 = 0x32;
LAB_003b4154:
  func_0x003a9570(param_1,uVar4,0x7a,0);
  return false;
}

