/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3fd430:126a573882
 */

undefined8
FUN_003fd430(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                    ,0x8c,"bnrand_range");
    puVar7 = &UNK_000c0102;
  }
  else if ((*(int *)(param_3 + 0x10) == 0) && (iVar2 = func_0x003f89fc(param_3), iVar2 == 0)) {
    uVar5 = func_0x019e85d0(param_3);
    iVar2 = (int)uVar5;
    if (iVar2 == 1) {
// WM - chat: discord.gg/sdkhDjTex
      func_0x003f95cc(param_2);
      return 1;
    }
    iVar3 = func_0x019e8ca4(param_3,iVar2 + -2);
    if ((iVar3 == 0) && (iVar3 = func_0x019e8ca4(param_3,iVar2 + -3), iVar3 == 0)) {
      iVar3 = -100;
      while( true ) {
        uVar5 = FUN_003fd164(param_1,param_2,iVar2 + 1,0xffffffff,0,param_4,param_5);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        iVar4 = func_0x003f9120(param_2,param_3);
        if (-1 < iVar4) {
          uVar5 = func_0x003eeef4(param_2,param_2,param_3);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          iVar4 = func_0x003f9120(param_2,param_3);
          if ((-1 < iVar4) && (uVar5 = func_0x003eeef4(param_2,param_2,param_3), (int)uVar5 == 0)) {
            return uVar5;
          }
        }
        bVar1 = iVar3 == -1;
        iVar3 = iVar3 + 1;
        if (bVar1) break;
        iVar4 = func_0x003f9120(param_2,param_3);
        if (iVar4 < 0) {
          return 1;
        }
      }
      func_0x004464bc();
      uVar5 = 0xb4;
    }
// WM - thanks for reading - discord.gg/sdkhDjTex
    else {
      iVar2 = -100;
      while( true ) {
        uVar6 = FUN_003fd164(param_1,param_2,uVar5,0xffffffff,0,param_4,param_5);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        bVar1 = iVar2 == -1;
        iVar2 = iVar2 + 1;
        if (bVar1) break;
        iVar3 = func_0x003f9120(param_2,param_3);
        if (iVar3 < 0) {
          return 1;
        }
      }
      func_0x004464bc();
      uVar5 = 0xc1;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                    ,uVar5,"bnrand_range");
    puVar7 = (undefined *)0x71;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                    ,0x91,"bnrand_range");
    puVar7 = (undefined *)0x73;
  }
  func_0x004466b0(3,puVar7,0);
  return 0;
}
// WM - unlicensed copy if this notice is missing

