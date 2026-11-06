/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e63a4:f177c996a3
   =========================================================================== */

undefined8
FUN_003e63a4(long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iStack_44;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  iStack_44 = 0;
  puVar3 = (undefined4 *)*param_1;
  uStack_38 = param_2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)
             func_0x019eb5a0(8,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_int64.c"
                             ,0x1f);
    *param_1 = (long)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (param_3 == 0) {
    uStack_40 = 0;
    goto LAB_003e644c;
// WM - do not claim this as your own
  }
  uVar1 = func_0x003d7180(&uStack_40,&iStack_44,&uStack_38,(long)param_3);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  uVar2 = (uint)*(ulong *)(param_6 + 0x28);
  if (((uVar2 >> 1 & 1) == 0) && (iStack_44 != 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_int64.c"
                    ,0xc4,"uint32_c2i");
    uVar1 = 0xe2;
LAB_003e64f0:
    func_0x004466b0(0xd,uVar1,0);
    return 0;
  }
  if (iStack_44 == 0) {
    if ((((uint)((uStack_40 & 0xffffffff80000000) != 0) & uVar2 >> 1) != 0) ||
       ((uStack_40 & 0xffffffff00000000) != 0 && (*(ulong *)(param_6 + 0x28) & 2) == 0)) {
// no support for modified copies
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_int64.c"
                      ,0xd0,"uint32_c2i");
      uVar1 = 0xdf;
      goto LAB_003e64f0;
    }
  }
  else {
    if (0x80000000 < uStack_40) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_int64.c"
                      ,0xc9,"uint32_c2i");
      uVar1 = 0xe0;
      goto LAB_003e64f0;
    }
    uStack_40 = -uStack_40;
  }
LAB_003e644c:
  *puVar3 = (int)uStack_40;
  return 1;
/*  thanks for reading - discord.gg/sdkhDjTex  */
}

