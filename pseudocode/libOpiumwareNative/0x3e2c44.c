/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e2c44:1a328b4b42
 */

ulong FUN_003e2c44(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    uVar1 = FUN_003e2d38(&uStack_48,param_2,param_3,0xffffffff,param_4);
  }
  else {
    uVar1 = FUN_003e2d38(&uStack_48,0,param_3,0xffffffff,param_4);
    if (0 < (int)uVar1) {
      lVar2 = func_0x019eb530(uVar1 & 0xffffffff,
// reversing this took months of machine time
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                              ,0x41);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      lStack_50 = lVar2;
      FUN_003e2d38(&uStack_48,&lStack_50,param_3,0xffffffff,param_4);
      *param_2 = lVar2;
      return uVar1;
    }
  }
  return uVar1;
}

