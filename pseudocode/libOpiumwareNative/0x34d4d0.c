/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34d4d0:92c1b9de24
   =========================================================================== */

undefined8 FUN_0034d4d0(long param_1)

{
  long lVar1;
  
  func_0x003ec13c();
  lVar1 = func_0x003e945c();
  if (lVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_enc.c"
                    ,0x1e,"ssl3_init_finished_mac");
    func_0x003a9570(param_1,0x50,&UNK_00080020,0);
    return 0;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  }
  func_0x003e9468(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  func_0x0044efb8(*(undefined8 *)(param_1 + 0x1b0));
  *(long *)(param_1 + 0x1a8) = lVar1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_003e95bc(lVar1,9,1,0);
  return 1;
}

