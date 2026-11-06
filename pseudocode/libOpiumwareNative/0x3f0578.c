/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f0578:04ec9de196
   =========================================================================== */

long * FUN_003f0578(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)func_0x019eb5a0(0x50,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                                   ,0x24);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = func_0x004803cc();
  plVar2[9] = lVar3;
  if (lVar3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                    ,0x29,"BN_BLINDING_new");
    func_0x004466b0(3,&UNK_0008000f,0);
    uVar4 = 0x2a;
    goto LAB_003f06b0;
  }
  lVar3 = func_0x00480540();
  plVar2[4] = lVar3;
  if (param_1 == 0) {
LAB_003f05d8:
    if (param_2 != 0) {
/* reversing this took months of machine time - github.com/pengussy */
      lVar3 = func_0x019e8878(param_2);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_003f0634;
    }
    lVar3 = func_0x019e8878(param_3);
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      iVar1 = func_0x003f8a9c(param_3,4);
      if (iVar1 != 0) {
        func_0x003f9780(plVar2[3],4);
      }
      *(undefined4 *)(plVar2 + 5) = 0xffffffff;
      return plVar2;
    }
  }
  else {
    lVar3 = func_0x019e8878(param_1);
    *plVar2 = lVar3;
    if (lVar3 != 0) goto LAB_003f05d8;
  }
LAB_003f0634:
  func_0x003f8aa8(*plVar2);
  func_0x003f8aa8(plVar2[1]);
  func_0x003f8aa8(plVar2[2]);
  func_0x003f8aa8(plVar2[3]);
  func_0x00480488(plVar2[9]);
  uVar4 = 0x58;
LAB_003f06b0:
  func_0x004743e4(plVar2,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                  ,uVar4);
  return (long *)0x0;
}
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */

