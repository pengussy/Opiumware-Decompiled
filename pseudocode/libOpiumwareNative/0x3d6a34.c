/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d6a34:d69511db44
   =========================================================================== */

undefined8 FUN_003d6a34(ulong *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint3 uVar4;
  uint uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  
  if (param_2 == (uint *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x158,"asn1_string_get_int64");
    puVar10 = &UNK_000c0102;
    goto LAB_003d6ad4;
  }
  uVar1 = param_2[1];
  if ((uVar1 & 0xfffffeff) != param_3) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x15c,"asn1_string_get_int64");
    puVar10 = (undefined *)0xe1;
    goto LAB_003d6ad4;
  }
  uVar2 = *param_2;
  if (8 < uVar2) {
    func_0x004464bc();
    pcVar11 = "asn1_get_uint64";
    uVar9 = 0xe4;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_003d6a74:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,uVar9,pcVar11);
    puVar10 = (undefined *)0xdf;
LAB_003d6ad4:
    func_0x004466b0(0xd,puVar10,0);
    return 0;
  }
  pbVar14 = *(byte **)(param_2 + 2);
  if (pbVar14 == (byte *)0x0) {
    return 0;
  }
  if (uVar2 == 0) {
    uVar13 = 0;
    if ((uVar1 >> 8 & 1) == 0) goto LAB_003d6b54;
  }
  else {
    uVar13 = (ulong)*pbVar14;
    if (uVar2 == 1) {
      lVar15 = 0;
    }
    else {
      uVar3 = CONCAT11(*pbVar14,pbVar14[1]);
      uVar13 = (ulong)uVar3;
      if (uVar2 == 2) {
LAB_003d6b28:
        lVar15 = 0;
      }
      else {
        uVar4 = CONCAT21(uVar3,pbVar14[2]);
        uVar13 = (ulong)uVar4;
        if (uVar2 != 3) {
          uVar5 = CONCAT31(uVar4,pbVar14[3]);
          uVar13 = (ulong)uVar5;
          if (uVar2 == 4) goto LAB_003d6b28;
          uVar6 = CONCAT41(uVar5,pbVar14[4]);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          uVar13 = (ulong)uVar6;
          if (uVar2 != 5) {
            uVar7 = CONCAT51(uVar6,pbVar14[5]);
            uVar13 = (ulong)uVar7;
            if (uVar2 == 6) goto LAB_003d6b28;
            uVar8 = CONCAT61(uVar7,pbVar14[6]);
            uVar13 = (ulong)uVar8;
            if (uVar2 != 7) {
              lVar15 = uVar13 << 8;
              uVar13 = CONCAT71(uVar8,pbVar14[7]);
              goto joined_r0x003d6b30;
            }
          }
        }
        lVar15 = 0;
      }
    }
joined_r0x003d6b30:
    if ((uVar1 >> 8 & 1) == 0) {
      if (-1 < lVar15) {
LAB_003d6b54:
        *param_1 = uVar13;
        return 1;
      }
      func_0x004464bc();
      pcVar11 = "asn1_get_int64";
      uVar9 = 0x123;
      goto LAB_003d6a74;
    }
    if (lVar15 < 0) {
      uVar12 = 0x8000000000000000;
      if (uVar13 == 0x8000000000000000) goto LAB_003d6bdc;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                      ,0x11c,"asn1_get_int64");
      puVar10 = (undefined *)0xe0;
      goto LAB_003d6ad4;
// WM - do not claim this as your own
    }
  }
  uVar12 = -uVar13;
LAB_003d6bdc:
  *param_1 = uVar12;
  return 1;
}

