/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3def8c:28f580a3f0
   =========================================================================== */

long FUN_003def8c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_58;
  
  uStack_58 = *param_3;
  if (((param_2 == (long *)0x0) || (lVar6 = *param_2, lVar6 == 0)) &&
     (lVar6 = func_0x00460248(), lVar6 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/d2i_pr.c"
                    ,0x6a,"ossl_d2i_PrivateKey_legacy");
    func_0x004466b0(0xd,&UNK_00080006,0);
    return 0;
  }
  iVar1 = func_0x0045e6b4(lVar6,param_1);
  if (iVar1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/d2i_pr.c"
                    ,0x72,"ossl_d2i_PrivateKey_legacy");
    puVar4 = (undefined *)0xa3;
  }
  else {
    func_0x00446890();
    lVar5 = *(long *)(lVar6 + 8);
    if (*(code **)(lVar5 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(lVar5 + 0xb8))(lVar6,&uStack_58,param_4);
      if (iVar1 != 0) {
// more drops soon - github.com/pengussy
        func_0x00446a74();
        lVar5 = lVar6;
        goto LAB_003df0f8;
      }
      lVar5 = *(long *)(lVar6 + 8);
    }
    if ((*(long *)(lVar5 + 0x40) != 0) || (*(long *)(lVar5 + 0x138) != 0)) {
      lVar3 = func_0x003e0754(0,&uStack_58,param_4);
      if (lVar3 == 0) {
        func_0x00446a74();
      }
      else {
        lVar5 = func_0x00456844(lVar3,param_5,param_6);
        func_0x003e0778(lVar3);
        if (lVar5 == 0) {
          func_0x00446a74();
        }
        else {
          func_0x0045eb4c(lVar6);
          func_0x004468d8();
          iVar1 = func_0x00456c38(param_1);
          iVar2 = func_0x0045f7b0(lVar5);
          lVar6 = lVar5;
          if (iVar1 == iVar2) {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_003df0f8:
            *param_3 = uStack_58;
            if (param_2 == (long *)0x0) {
              return lVar5;
            }
            *param_2 = lVar5;
            return lVar5;
          }
        }
      }
      goto joined_r0x003df048;
    }
    func_0x00446a74();
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/d2i_pr.c"
                    ,0x8e,"ossl_d2i_PrivateKey_legacy");
    puVar4 = &UNK_0008000d;
  }
  func_0x004466b0(0xd,puVar4,0);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
joined_r0x003df048:
  if ((param_2 == (long *)0x0) || (*param_2 != lVar6)) {
    func_0x0045eb4c(lVar6);
  }
  return 0;
}

