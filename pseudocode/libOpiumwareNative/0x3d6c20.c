/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d6c20:e24d4d5786
   =========================================================================== */

undefined8 FUN_003d6c20(ulong *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  if (param_2 == (uint *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x17d,"asn1_string_get_uint64");
    func_0x004466b0(0xd,&UNK_000c0102,0);
    return 0;
  }
  if ((param_2[1] & 0xfffffeff) != 2) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x181,"asn1_string_get_uint64");
    func_0x004466b0(0xd,0xe1,0);
    return 0;
  }
  if (0xff < param_2[1]) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x185,"asn1_string_get_uint64");
    func_0x004466b0(0xd,0xe2,0);
    return 0;
  }
  uVar1 = *param_2;
  if (8 < uVar1) {
    func_0x004464bc();
/* wm:more drops soon - github.com/pengussy */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0xe4,"asn1_get_uint64");
    func_0x004466b0(0xd,0xdf,0);
    return 0;
  }
  pbVar9 = *(byte **)(param_2 + 2);
  if (pbVar9 == (byte *)0x0) {
    return 0;
  }
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)*pbVar9;
    if (uVar1 != 1) {
      uVar2 = CONCAT11(*pbVar9,pbVar9[1]);
      uVar8 = (ulong)uVar2;
      if (uVar1 != 2) {
        uVar3 = CONCAT21(uVar2,pbVar9[2]);
        uVar8 = (ulong)uVar3;
        if (uVar1 != 3) {
          uVar4 = CONCAT31(uVar3,pbVar9[3]);
          uVar8 = (ulong)uVar4;
          if (uVar1 != 4) {
            uVar5 = CONCAT41(uVar4,pbVar9[4]);
            uVar8 = (ulong)uVar5;
            if (uVar1 != 5) {
              uVar6 = CONCAT51(uVar5,pbVar9[5]);
              uVar8 = (ulong)uVar6;
              if (uVar1 != 6) {
                uVar7 = CONCAT61(uVar6,pbVar9[6]);
                uVar8 = (ulong)uVar7;
                if (uVar1 != 7) {
                  *param_1 = CONCAT71(uVar7,pbVar9[7]);
                  return 1;
                }
              }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            }
          }
        }
      }
    }
  }
  *param_1 = uVar8;
  return 1;
}

