/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e4010:2c2b8361ec
   =========================================================================== */

undefined8
FUN_003e4010(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_2 + 0x20);
  if ((lVar2 == 0) || (pcVar6 = *(code **)(lVar2 + 0x18), pcVar6 == (code *)0x0)) {
    pcVar6 = (code *)0x0;
    bVar3 = *param_2;
    if (bVar3 < 4) goto LAB_003e4058;
LAB_003e40c8:
    if (bVar3 == 6) goto LAB_003e4108;
    if (bVar3 == 5) {
      iVar1 = func_0x003e459c(param_1,param_2);
    }
    else {
      if (bVar3 != 4) {
        return 1;
      }
      if (lVar2 == 0) {
        return 1;
      }
      if (*(code **)(lVar2 + 0x38) == (code *)0x0) {
        if (*(code **)(lVar2 + 8) == (code *)0x0) {
          return 1;
        }
        iVar1 = (**(code **)(lVar2 + 8))(param_1,param_2);
      }
      else {
        iVar1 = (**(code **)(lVar2 + 0x38))(param_1,param_2,param_4,param_5);
      }
// WM - unlicensed copy if this notice is missing
    }
    if (iVar1 != 0) {
      return 1;
    }
LAB_003e4198:
    puVar5 = &UNK_0008000d;
    uVar4 = 0xa2;
    goto LAB_003e431c;
  }
  bVar3 = *param_2;
  if (3 < bVar3) goto LAB_003e40c8;
LAB_003e4058:
  if (bVar3 == 0) {
    puVar5 = &UNK_0008000d;
    if (*(long *)(param_2 + 0x10) == 0) {
      iVar1 = func_0x003e459c(param_1,param_2);
    }
    else {
      iVar1 = func_0x003e43bc(param_1,*(long *)(param_2 + 0x10),param_4,param_5);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = 0xa2;
    goto LAB_003e431c;
  }
  if (bVar3 == 1) {
LAB_003e4108:
    if (pcVar6 != (code *)0x0) {
      iVar1 = (*pcVar6)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_003e4314;
      if (iVar1 == 2) {
        return 1;
      }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    if ((int)param_3 == 0) {
      lVar2 = func_0x019eb5a0(*(undefined8 *)(param_2 + 0x28),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_new.c"
                              ,0x87);
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      iVar1 = func_0x003e5568(param_1,0,param_2);
      if (iVar1 < 0) {
        puVar5 = &UNK_0008000d;
        func_0x004743e4(*param_1,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_new.c"
                        ,0x8e);
        *param_1 = 0;
        uVar4 = 0xa2;
        goto LAB_003e431c;
      }
    }
    else {
      _bzero(*param_1,*(undefined8 *)(param_2 + 0x28));
      iVar1 = func_0x003e5568(param_1,0,param_2);
      if (iVar1 < 0) goto LAB_003e4198;
    }
    func_0x003e5678(param_1,param_2);
    if (0 < *(long *)(param_2 + 0x18)) {
      lVar7 = 0;
      lVar2 = *(long *)(param_2 + 0x10);
      do {
// WM - do not claim this as your own
        uVar4 = func_0x003e5884(param_1,lVar2);
        iVar1 = func_0x003e43bc(uVar4,lVar2,param_4,param_5);
        if (iVar1 == 0) {
          puVar5 = &UNK_0008000d;
          func_0x003e3ad4(param_1,param_2,param_3);
          uVar4 = 0xa2;
          goto LAB_003e431c;
        }
        lVar2 = lVar2 + 0x28;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(long *)(param_2 + 0x18));
    }
joined_r0x003e4244:
    if (pcVar6 == (code *)0x0) {
      return 1;
    }
/* unlicensed copy if this notice is missing - github.com/pengussy */
    iVar1 = (*pcVar6)(1,param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
    func_0x003e3ad4(param_1,param_2,param_3);
  }
  else {
    if (bVar3 != 2) {
      return 1;
    }
    if (pcVar6 == (code *)0x0) {
LAB_003e41a8:
      if ((int)param_3 == 0) {
        lVar2 = func_0x019eb5a0(*(undefined8 *)(param_2 + 0x28),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_new.c"
                                ,0x71);
        *param_1 = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      else {
        _bzero(*param_1,*(undefined8 *)(param_2 + 0x28));
      }
      func_0x003e5554(param_1,0xffffffff,param_2);
      goto joined_r0x003e4244;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    }
    iVar1 = (*pcVar6)(0,param_1,param_2,0);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        return 1;
      }
      goto LAB_003e41a8;
    }
  }
LAB_003e4314:
  puVar5 = (undefined *)0x64;
  uVar4 = 0xa8;
LAB_003e431c:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_new.c"
                  ,uVar4,"asn1_item_embed_new");
  func_0x004466b0(0xd,puVar5,0);
  return 0;
/* keep the notice, keep the source honest - github.com/pengussy */
}

