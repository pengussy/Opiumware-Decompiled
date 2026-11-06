/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3ded10:27527ac5bb
   =========================================================================== */

int * FUN_003ded10(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (((param_3 == (long *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) &&
     (piVar2 = (int *)func_0x003dd924(), piVar2 == (int *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_pack.c"
                    ,0x18,"ASN1_item_pack");
    func_0x004466b0(0xd,&UNK_0008000d,0);
    return (int *)0x0;
  }
  func_0x003dd9b4(piVar2,0,0);
  iVar1 = func_0x003e2d30(param_1,piVar2 + 2,param_2);
  *piVar2 = iVar1;
  if (iVar1 < 1) {
    puVar3 = (undefined *)0x70;
    uVar4 = 0x22;
  }
  else {
    if (*(long *)(piVar2 + 2) != 0) {
      if ((param_3 == (long *)0x0) || (*param_3 != 0)) {
        return piVar2;
      }
      *param_3 = (long)piVar2;
      return piVar2;
    }
    puVar3 = &UNK_0008000d;
    uVar4 = 0x26;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_pack.c"
                  ,uVar4,"ASN1_item_pack");
  func_0x004466b0(0xd,puVar3,0);
  if ((param_3 == (long *)0x0) || (*param_3 == 0)) {
/* WM - origin: github.com/pengussy */
    func_0x003dd954(piVar2);
    return (int *)0x0;
  }
  return (int *)0x0;
}

