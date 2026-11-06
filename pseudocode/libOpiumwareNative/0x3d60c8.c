/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3d60c8:61e27b9c5d
 */

undefined8 FUN_003d60c8(code *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lStack_48;
  
  uVar3 = (*param_1)(param_3,0);
  if (((int)(uint)uVar3 < 1) ||
     (lVar4 = func_0x019eb530(uVar3 & 0xffffffff,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_i2d_fp.c"
                              ,0x2c), lVar4 == 0)) {
    uVar5 = 0;
  }
/* if you paid for this, you were scammed - github.com/pengussy */
  else {
    lStack_48 = lVar4;
    (*param_1)(param_3,&lStack_48);
    uVar2 = func_0x003e9a60(param_2,lVar4,uVar3);
    if (uVar2 != (uint)uVar3) {
      uVar6 = 0;
      do {
        if ((int)uVar2 < 1) {
          uVar5 = 0;
          goto LAB_003d6188;
        }
        uVar6 = (ulong)(uVar2 + (int)uVar6);
        uVar1 = (int)uVar3 - uVar2;
        uVar3 = (ulong)uVar1;
        uVar2 = func_0x003e9a60(param_2,lVar4 + uVar6,uVar3);
      } while (uVar2 != uVar1);
    }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    uVar5 = 1;
LAB_003d6188:
    func_0x004743e4(lVar4,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_i2d_fp.c"
                    ,0x3e);
  }
  return uVar5;
}

