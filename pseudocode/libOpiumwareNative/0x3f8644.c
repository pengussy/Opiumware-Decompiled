/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f8644:e3913905af
   =========================================================================== */

undefined8 FUN_003f8644(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = func_0x003f8b8c(param_1,param_3);
  if (lVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_intern.c"
                    ,0xbb,"bn_set_words");
    func_0x004466b0(3,&UNK_00080003,0);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    return 0;
  }
  _memcpy(*param_1,param_2,-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3
         );
  *(int *)(param_1 + 1) = (int)param_3;
  func_0x019e8c64(param_1);
  return 1;
}

