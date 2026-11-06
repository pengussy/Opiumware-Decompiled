/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e29e0:503ec0c6c9
   =========================================================================== */

undefined8 FUN_003e29e0(long *param_1,long *param_2,char *param_3,uint param_4,uint param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  char cStack_72;
  char cStack_71;
  long lStack_70;
  char *pcStack_68;
  
  pcStack_68 = (char *)*param_2;
  if (0 < (long)param_3) {
    do {
      pcVar2 = pcStack_68;
      if (((param_3 != (char *)0x1) && (*pcStack_68 == '\0')) && (pcStack_68[1] == '\0')) {
        if ((param_4 & 1) != 0) {
          pcStack_68 = pcStack_68 + 2;
          goto LAB_003e2b08;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,0x449,"asn1_collect");
        puVar6 = (undefined *)0x9f;
        goto LAB_003e2c10;
      }
      uVar4 = func_0x003e2340(&lStack_70,0,0,&cStack_72,&cStack_71,&pcStack_68,param_3,0xffffffff,0,
                              0);
      lVar1 = lStack_70;
      if ((int)uVar4 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,0x452,"asn1_collect");
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        puVar6 = &UNK_0008010a;
        goto LAB_003e2c10;
      }
      if (cStack_71 == '\0') {
        if (lStack_70 != 0) {
          lVar7 = *param_1;
          lVar5 = lVar7 + lStack_70;
          if (lVar5 < 0) {
            func_0x004464bc(uVar4,lVar5);
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                            ,0x471,"collect_data");
            puVar6 = (undefined *)0xe7;
            goto LAB_003e2c10;
          }
          lVar5 = func_0x0040058c(param_1);
          pcVar3 = pcStack_68;
          if (lVar5 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                            ,0x475,"collect_data");
// WM - donate: donate/README.md
            puVar6 = &UNK_00080007;
            goto LAB_003e2c10;
          }
          _memcpy(param_1[1] + lVar7,pcStack_68,lVar1);
          pcStack_68 = pcVar3 + lVar1;
        }
      }
      else {
        if (4 < param_5) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x459,"asn1_collect");
          puVar6 = (undefined *)0xc5;
          goto LAB_003e2c10;
        }
        uVar4 = FUN_003e29e0(param_1,&pcStack_68,lStack_70,(long)cStack_72,param_5 + 1);
        if ((int)uVar4 == 0) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          return uVar4;
        }
      }
      param_3 = pcVar2 + ((long)param_3 - (long)pcStack_68);
    } while (0 < (long)param_3);
  }
  if ((param_4 & 1) == 0) {
LAB_003e2b08:
    *param_2 = (long)pcStack_68;
    uVar4 = 1;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0x463,"asn1_collect");
    puVar6 = (undefined *)0x89;
LAB_003e2c10:
    func_0x004466b0(0xd,puVar6,0);
// thanks for reading - discord.gg/sdkhDjTex
    uVar4 = 0;
  }
  return uVar4;
}

