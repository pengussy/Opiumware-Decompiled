/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e6610:4a68d7cac1
   =========================================================================== */

undefined8
FUN_003e6610(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  int iStack_44;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = 0;
  iStack_44 = 0;
  plVar3 = (long *)*param_1;
  uStack_38 = param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)func_0x019eb5a0(8,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_int64.c"
                                     ,0x1f);
    *param_1 = (long)plVar3;
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  }
  if (param_3 == 0) {
LAB_003e6714:
    *plVar3 = lStack_40;
// WM - watermarked copy - do not remove
    return 1;
  }
  uVar1 = FUN_003d7180(&lStack_40,&iStack_44,&uStack_38,(long)param_3);
  if ((int)uVar1 != 0) {
    uVar2 = (uint)*(undefined8 *)(param_6 + 0x28);
    if (((uVar2 >> 1 & 1) == 0) && (iStack_44 != 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_int64.c"
                      ,0x5f,"uint64_c2i");
      uVar1 = 0xe2;
    }
    else {
      if (((uVar2 >> 1 & 1) == 0) || ((iStack_44 != 0 || (-1 < lStack_40)))) {
        if (iStack_44 != 0) {
          lStack_40 = -lStack_40;
        }
        goto LAB_003e6714;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_int64.c"
                      ,100,"uint64_c2i");
      uVar1 = 0xdf;
    }
    func_0x004466b0(0xd,uVar1,0);
    uVar1 = 0;
  }
  return uVar1;
}

