/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3f1d68:7817252f4d
 */

undefined8
FUN_003f1d68(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = func_0x003f89fc(param_4);
  if (iVar1 == 0) {
    if (*(long *)(*param_4 + (long)(int)param_4[1] * 8 + -8) != 0) {
      uVar2 = func_0x003f1e68(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if (param_1 != 0) {
        func_0x019e8c64(param_1);
      }
      if (param_2 != 0) {
        func_0x019e8c64(param_2);
      }
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_div.c"
                    ,0xe3,"BN_div");
    uVar2 = 0x6b;
  }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_div.c"
                    ,0xd9,"BN_div");
    uVar2 = 0x67;
  }
  func_0x004466b0(3,uVar2,0);
  return 0;
}

