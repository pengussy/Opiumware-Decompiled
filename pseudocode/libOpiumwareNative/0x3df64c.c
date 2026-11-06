/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3df64c:27f858570e
   =========================================================================== */

undefined8 FUN_003df64c(int *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*param_1 != 4) || (*(long *)(param_1 + 2) == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/evp_asn1.c"
                    ,0x28,"ASN1_TYPE_get_octetstring");
    func_0x004466b0(0xd,0x6d,0);
    return 0xffffffff;
  }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar2 = func_0x002f78b4(*(long *)(param_1 + 2));
  uVar3 = func_0x003ddb7c(*(undefined8 *)(param_1 + 2));
  iVar1 = (int)uVar3;
  if (param_3 <= (int)uVar3) {
    iVar1 = param_3;
  }
  if ((param_2 != 0) && (0 < iVar1)) {
    _memcpy(param_2,uVar2);
  }
  return uVar3;
}

