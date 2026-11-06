/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dd758:843f66a601
 */

undefined8 FUN_003dd758(int *param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((int)param_3 < 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar2 = _strlen(param_2);
  }
  else {
    uVar2 = (ulong)param_3;
  }
  if (0x7ffffffe < uVar2) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                    ,0x131,"ASN1_STRING_set");
    func_0x004466b0(0xd,0xdf,0);
    return 0;
  }
  lVar1 = *(long *)(param_1 + 2);
  if (uVar2 < (ulong)(long)*param_1) {
    if (lVar1 != 0) goto LAB_003dd820;
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
  }
  lVar1 = func_0x019eb634(lVar3,uVar2 + 1,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                          ,0x13a);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(long *)(param_1 + 2) = lVar1;
  if (lVar1 == 0) {
    *(long *)(param_1 + 2) = lVar3;
    return 0;
  }
LAB_003dd820:
  *param_1 = (int)uVar2;
  if (param_2 != 0) {
    _memcpy(lVar1,param_2,uVar2);
    *(undefined1 *)(*(long *)(param_1 + 2) + uVar2) = 0;
  }
  return 1;
}

