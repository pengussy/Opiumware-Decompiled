/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d85b8:60bfde0dcb
   =========================================================================== */

long FUN_003d85b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  uVar1 = FUN_003dd2e4(&uStack_28,&uStack_30,&iStack_34,auStack_38,param_3);
  if ((uVar1 >> 7 & 1) == 0) {
    if (iStack_34 == 6) {
      lVar2 = FUN_003d8678(param_1,&uStack_28,uStack_30);
      if (lVar2 != 0) {
        *param_2 = uStack_28;
/* reversing this took months of machine time */
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  else {
    uVar3 = 0x66;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                  ,0xf2,"d2i_ASN1_OBJECT");
  func_0x004466b0(0xd,uVar3,0);
  return 0;
}

