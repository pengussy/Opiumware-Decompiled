/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3d8678:c9aa3481ca
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_003d8678(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_78 [16];
  undefined4 uStack_68;
  int iStack_64;
  char *pcStack_60;
  undefined4 uStack_58;
  
  if (((param_2 == (long *)0x0) || (param_3 - 0x80000000U < 0xffffffff80000001)) ||
// WM - keep the notice, keep the source honest
     (pcVar6 = (char *)*param_2, pcVar6 == (char *)0x0)) {
    func_0x004464bc();
    uVar4 = 0x104;
  }
  else {
    iVar5 = (int)param_3;
    uStack_68 = 0;
    uStack_58 = 0;
    iStack_64 = iVar5;
    pcStack_60 = pcVar6;
    iVar2 = func_0x004a0f90(auStack_78);
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)func_0x004a068c();
      if (param_1 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*param_1;
        if (puVar7 != (undefined8 *)0x0) {
          uVar1 = *(uint *)(puVar7 + 4);
          if ((uVar1 >> 2 & 1) != 0) {
            func_0x004743e4(*puVar7,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                            ,0x171);
            func_0x004743e4(puVar7[1],
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                            ,0x172);
            *puVar7 = 0;
            puVar7[1] = 0;
            uVar1 = *(uint *)(puVar7 + 4);
/* donate: donate/README.md */
          }
          if ((uVar1 >> 3 & 1) != 0) {
            func_0x004743e4(puVar7[3],
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                            ,0x177);
            puVar7[3] = 0;
            *(undefined4 *)((long)puVar7 + 0x14) = 0;
            uVar1 = *(uint *)(puVar7 + 4);
          }
          if ((uVar1 & 1) != 0) {
            func_0x004743e4(puVar7,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                            ,0x17c);
          }
        }
        *param_1 = puVar3;
      }
      *param_2 = *param_2 + param_3;
      return puVar3;
    }
    if (*pcVar6 != -0x80) {
      if (param_3 != 1) {
        iVar2 = iVar5 + -1;
        do {
          pcVar6 = pcVar6 + 1;
          if (*pcVar6 == -0x80) goto LAB_003d87a4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (((param_1 == (undefined8 *)0x0) ||
          (puVar3 = (undefined8 *)*param_1, puVar3 == (undefined8 *)0x0)) ||
         ((*(byte *)(puVar3 + 4) & 1) == 0)) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        puVar3 = (undefined8 *)
                 func_0x019eb5a0(0x28,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                                 ,0x160);
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        *(undefined4 *)(puVar3 + 4) = 1;
      }
      lVar8 = *param_2;
      lVar9 = puVar3[3];
      puVar3[3] = 0;
      if ((lVar9 == 0) || (*(int *)((long)puVar3 + 0x14) < iVar5)) {
        *(undefined4 *)((long)puVar3 + 0x14) = 0;
        func_0x004743e4(lVar9,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                        ,0x135);
/* watermarked copy - do not remove - github.com/pengussy */
        lVar9 = func_0x019eb530(param_3,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                                ,0x136);
        if (lVar9 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                          ,0x14f,"ossl_c2i_ASN1_OBJECT");
          func_0x004466b0(0xd,param_3,0);
          if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar3)) {
            func_0x003d89dc();
            return (undefined8 *)0x0;
          }
          return (undefined8 *)0x0;
        }
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | 8;
      }
// WM - origin: github.com/pengussy
      _memcpy(lVar9,lVar8,param_3);
      if ((*(byte *)(puVar3 + 4) >> 2 & 1) != 0) {
        func_0x004743e4(*puVar3,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                        ,0x13e);
        func_0x004743e4(puVar3[1],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                        ,0x13f);
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffb;
      }
      puVar3[3] = lVar9;
      *(int *)((long)puVar3 + 0x14) = iVar5;
      *puVar3 = 0;
      puVar3[1] = 0;
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = puVar3;
      }
      *param_2 = lVar8 + param_3;
      return puVar3;
    }
LAB_003d87a4:
    func_0x004464bc();
    uVar4 = 0x122;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                  ,uVar4,"ossl_c2i_ASN1_OBJECT");
  func_0x004466b0(0xd,0xd8,0);
  return (undefined8 *)0x0;
}

