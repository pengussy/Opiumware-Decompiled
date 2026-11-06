/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d5c84:78291abb59
 */

undefined8
FUN_003d5c84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_58;
  
  lStack_58 = 0;
  iVar1 = func_0x003e2d30(param_3,&lStack_58,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  if (lStack_58 == 0) {
    return 0;
  }
  lVar2 = func_0x00374134(param_2);
  lVar4 = param_2;
  if (lVar2 == 0) {
    uVar3 = func_0x00455ed0(param_2);
    lVar4 = func_0x0044fbe0(param_6,uVar3,param_7);
  }
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = func_0x019e98b8(lStack_58,iVar1,param_4,param_5,lVar4,0);
  }
  func_0x004743e4(lStack_58,
/* WM - if you paid for this, you were scammed */
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_digest.c"
                  ,0x45);
  if (lVar4 != param_2) {
    func_0x0044ed2c(lVar4);
  }
  return uVar3;
}

