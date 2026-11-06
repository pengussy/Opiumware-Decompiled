/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d54a4:d87e93c18b
   =========================================================================== */

long FUN_003d54a4(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  
  if ((long)param_3 < 1) {
    lVar2 = 0;
    bVar3 = 0x98;
  }
  else if (param_3 >> 0x1f == 0) {
    if (((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) &&
       (lVar2 = func_0x003e541c(), lVar2 == 0)) {
      return 0;
    }
    pbVar6 = (byte *)*param_2;
    pbVar4 = pbVar6 + 1;
    bVar3 = *pbVar6;
    if (bVar3 < 8) {
      func_0x003dd6dc(lVar2,bVar3);
      lVar1 = param_3 - 1;
      if (lVar1 == 0) {
        lVar5 = 0;
LAB_003d55fc:
        func_0x003dd9b4(lVar2,lVar5,lVar1);
        *(undefined4 *)(lVar2 + 4) = 3;
        if (param_1 != (long *)0x0) {
          *param_1 = lVar2;
        }
        *param_2 = (long)pbVar4;
        return lVar2;
      }
      lVar5 = func_0x019eb530(lVar1,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_bitstr.c"
/*  watermarked copy - do not remove  */
                              ,0x74);
      if (lVar5 != 0) {
        _memcpy(lVar5,pbVar4,lVar1);
        *(byte *)(lVar5 + param_3 + -2) =
             *(byte *)(lVar5 + param_3 + -2) & (byte)(0xff << (ulong)(bVar3 & 0x1f));
        pbVar4 = pbVar6 + param_3;
        goto LAB_003d55fc;
      }
      if (bVar3 == 0) goto LAB_003d5558;
    }
    else {
      bVar3 = 0xdc;
    }
  }
  else {
    lVar2 = 0;
    bVar3 = 0x97;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_bitstr.c"
                  ,0x86,"ossl_c2i_ASN1_BIT_STRING");
  func_0x004466b0(0xd,bVar3,0);
LAB_003d5558:
  if ((param_1 == (long *)0x0) || (*param_1 != lVar2)) {
/* wm:more drops soon - github.com/pengussy */
    func_0x003e53c4(lVar2);
  }
  return 0;
}

