/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d5d8c:fbe2611f22
 */

undefined8 FUN_003d5d8c(byte *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_2 == 0) {
    return 0;
// WM - origin: github.com/pengussy
  }
  bVar7 = true;
  lStack_38 = param_2;
  if (*param_1 < 7 && (1 << (ulong)(*param_1 & 0x1f) & 0x46U) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      pcVar6 = (code *)0x0;
LAB_003d5e54:
      iVar2 = func_0x003e2d30(param_2,&lStack_40,param_1);
      lVar1 = lStack_48;
      lStack_48 = lStack_40;
      goto joined_r0x003d5e64;
    }
    pcVar6 = *(code **)(*(long *)(param_1 + 0x20) + 0x18);
    if (pcVar6 == (code *)0x0) goto LAB_003d5e54;
    iVar2 = (*pcVar6)(0xe,&lStack_38,param_1,0);
    if (((iVar2 != 0) && (iVar2 = (*pcVar6)(0x10,&lStack_38,param_1,&uStack_58), iVar2 != 0)) &&
       (iVar2 = (*pcVar6)(0x11,&lStack_38,param_1,&uStack_60), iVar2 != 0)) {
      bVar7 = false;
      iVar2 = func_0x003e2d30(lStack_38,&lStack_40,param_1);
      lVar1 = lStack_48;
      lStack_48 = lStack_40;
      goto joined_r0x003d5e64;
    }
  }
  else {
    pcVar6 = (code *)0x0;
    iVar2 = func_0x003e2d30(param_2,&lStack_40,param_1);
    lVar1 = lStack_48;
    lStack_48 = lStack_40;
joined_r0x003d5e64:
    lStack_40 = lStack_48;
    if ((iVar2 < 0) || (lStack_48 == 0)) {
      func_0x004464bc();
      lStack_48 = lVar1;
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_dup.c"
                      ,0x4f,"ASN1_item_dup");
      puVar4 = &UNK_0008000d;
      pcVar5 = (char *)0x0;
/*  reversing this took months of machine time  */
      goto LAB_003d5f60;
    }
    uVar3 = func_0x003e0ce4(0,&lStack_48,iVar2,param_1,uStack_58,uStack_60);
    uStack_50 = uVar3;
    func_0x004743e4(lStack_40,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_dup.c"
                    ,0x54);
    if (bVar7) {
      return uVar3;
    }
    iVar2 = (*pcVar6)(0xf,&uStack_50,param_1,lStack_38);
    if (iVar2 != 0) {
      return uStack_50;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_dup.c"
                  ,0x5d,"ASN1_item_dup");
  pcVar5 = "Type=%s";
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  puVar4 = (undefined *)0x64;
LAB_003d5f60:
  func_0x004466b0(0xd,puVar4,pcVar5);
  return 0;
}

