/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e25c4:23a149c515
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003e25c4(long *******param_1,long *param_2,char *param_3,ulong *param_4,undefined8 param_5,
            undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 uStack_88;
  char cStack_79;
  char *pcStack_78;
  long *******ppppppplStack_70;
  char *pcStack_68;
  
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  uVar9 = *param_4;
  uVar8 = (uint)uVar9;
  uVar13 = uVar8 & 0xc0;
  pcStack_78 = (char *)*param_2;
  ppppppplVar10 = param_1;
  if ((uVar8 >> 0xc & 1) != 0) {
    ppppppplVar10 = (long *******)&ppppppplStack_70;
    ppppppplStack_70 = param_1;
  }
  pcStack_68 = param_3;
  if ((uVar9 & 6) != 0) {
    if ((uVar8 >> 3 & 1) == 0) {
      uVar13 = 0;
      uVar7 = 0x10;
      if ((uVar9 & 2) != 0) {
        uVar7 = 0x11;
      }
    }
    else {
      uVar7 = (undefined4)param_4[1];
    }
    uVar4 = func_0x003e2340(&pcStack_68,0,0,&cStack_79,0,&pcStack_78,param_3,uVar7,uVar13,param_6);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
    if ((int)uVar4 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x27f,"asn1_template_noexp_d2i");
// more drops soon - github.com/pengussy
      func_0x004466b0(0xd,&UNK_0008010a,0);
      return uVar4;
    }
    pppppplVar11 = *ppppppplVar10;
    if (pppppplVar11 == (long ******)0x0) {
      uVar4 = func_0x004dc0f0();
      pppppplVar11 = (long ******)func_0x004dc468(uVar4,&DAT_003e29d4);
      *ppppppplVar10 = pppppplVar11;
    }
    else {
      iVar3 = func_0x004dcb7c(pppppplVar11);
      while (0 < iVar3) {
        uStack_88 = func_0x004dca9c(pppppplVar11);
        uVar4 = (*(code *)param_4[4])();
        func_0x003e3d78(&uStack_88,uVar4);
        iVar3 = func_0x004dcb7c(pppppplVar11);
      }
      pppppplVar11 = *ppppppplVar10;
    }
    pcVar1 = pcStack_78;
    pcVar12 = pcStack_68;
    if (pppppplVar11 == (long ******)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x292,"asn1_template_noexp_d2i");
      puVar6 = &UNK_0008000f;
    }
    else {
/*  donate: donate/README.md  */
      for (; pcStack_78 = pcVar1, 0 < (long)pcVar12;
          pcVar12 = pcVar1 + ((long)pcVar12 - (long)pcVar2)) {
        if (((pcVar12 != (char *)0x1) && (*pcVar1 == '\0')) && (pcVar1[1] == '\0')) {
          pcStack_78 = pcVar1 + 2;
          if (cStack_79 != '\0') goto LAB_003e297c;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x29d,"asn1_template_noexp_d2i");
          puVar6 = (undefined *)0x9f;
          goto LAB_003e28dc;
        }
        uStack_88 = 0;
        uVar4 = (*(code *)param_4[4])();
        iVar3 = FUN_003e0e7c(&uStack_88,&pcStack_78,pcVar12,uVar4,0xffffffff,0,0,param_6,param_7,
                             param_8,param_9);
        pcVar2 = pcStack_78;
        if (iVar3 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x2a9,"asn1_template_noexp_d2i");
          uVar7 = 0x8010a;
LAB_003e2944:
/* donate: donate/README.md - github.com/pengussy */
          func_0x004466b0(0xd,uVar7,0);
          uVar4 = uStack_88;
          uVar5 = (*(code *)param_4[4])();
          func_0x003e3aac(uVar4,uVar5);
          return 0;
        }
        iVar3 = func_0x004dc9ec(*ppppppplVar10,uStack_88);
        if (iVar3 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x2b0,"asn1_template_noexp_d2i");
          uVar7 = 0x8000f;
          goto LAB_003e2944;
        }
        pcVar1 = pcStack_78;
      }
      if (cStack_79 == '\0') goto LAB_003e297c;
      func_0x004464bc();
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x2b6,"asn1_template_noexp_d2i");
      puVar6 = (undefined *)0x89;
    }
LAB_003e28dc:
    func_0x004466b0(0xd,puVar6,0);
    return 0;
  }
  uVar4 = (*(code *)param_4[4])();
  if ((uVar8 >> 3 & 1) == 0) {
    uVar4 = FUN_003e0e7c(ppppppplVar10,&pcStack_78,param_3,uVar4,0xffffffff,0,param_5,param_6,
                         param_7,param_8,param_9);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
    if ((int)uVar4 == 0) {
      func_0x004464bc();
      uVar4 = 0x2c8;
LAB_003e2878:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,uVar4,"asn1_template_noexp_d2i");
      func_0x004466b0(0xd,&UNK_0008010a,0);
      return 0;
    }
  }
  else {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    uVar4 = FUN_003e0e7c(ppppppplVar10,&pcStack_78,param_3,uVar4,(int)param_4[1],uVar13,param_5,
                         param_6,param_7,param_8,param_9);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
    if ((int)uVar4 == 0) {
      func_0x004464bc();
      uVar4 = 0x2bf;
      goto LAB_003e2878;
    }
  }
LAB_003e297c:
  *param_2 = (long)pcStack_78;
  return 1;
}

