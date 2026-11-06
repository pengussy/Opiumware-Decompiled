/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3e1924:5a27e684d0
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003e1924(long *******param_1,long *param_2,char *param_3,ulong *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 uStack_88;
  char cStack_79;
  undefined8 uStack_78;
  long *******ppppppplStack_70;
  char *pcStack_68;
  
  if (param_1 == (long *******)0x0) {
    return 0;
  }
  ppppppplStack_70 = (long *******)*param_2;
  if (((uint)*param_4 >> 4 & 1) != 0) {
    uStack_88 = param_6;
    uVar4 = FUN_003e2340(&pcStack_68,0,0,(long)&uStack_78 + 7,(long)&uStack_78 + 6,&ppppppplStack_70
                         ,param_3,(uint)param_4[1],
                         CONCAT44(CONCAT31((int3)((ulong)in_stack_ffffffffffffff70 >> 0x28),
                                           (char)param_5),(uint)*param_4) & 0xffffffff000000c0);
    ppppppplVar10 = ppppppplStack_70;
    if ((int)uVar4 == -1) {
// thanks for reading - discord.gg/sdkhDjTex
      return uVar4;
    }
    puVar6 = &UNK_0008010a;
    if ((int)uVar4 == 0) {
      uVar4 = 0x227;
    }
    else if (uStack_78._6_1_ == '\0') {
      puVar6 = (undefined *)0x78;
      uVar4 = 0x22c;
    }
    else {
      iVar3 = FUN_003e25c4(param_1,&ppppppplStack_70,pcStack_68,param_4,0,param_6,param_7,param_8,
                           param_9);
      if (iVar3 == 0) {
        uVar4 = 0x233;
      }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      else {
        pcVar1 = (char *)((long)ppppppplVar10 + ((long)pcStack_68 - (long)ppppppplStack_70));
        if (uStack_78._7_1_ == '\0') {
          if (pcVar1 == (char *)0x0) goto LAB_003e1ad4;
          puVar6 = (undefined *)0x77;
          uVar4 = 0x243;
        }
        else {
          if (((1 < (long)pcVar1) && (*(char *)ppppppplStack_70 == '\0')) &&
             (*(char *)((long)ppppppplStack_70 + 1) == '\0')) {
            ppppppplStack_70 = (long *******)((long)ppppppplStack_70 + 2);
LAB_003e1ad4:
            *param_2 = (long)ppppppplStack_70;
            return 1;
          }
          puVar6 = (undefined *)0x89;
// WM - stripping the watermark breaks the license
          uVar4 = 0x23b;
        }
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,uVar4,"asn1_template_ex_d2i");
    func_0x004466b0(0xd,puVar6,0);
    return 0;
  }
  uVar8 = *param_4;
  uVar7 = (uint)uVar8;
  uVar13 = uVar7 & 0xc0;
  uStack_78 = (char *)*param_2;
  ppppppplVar10 = param_1;
  if ((uVar7 >> 0xc & 1) != 0) {
    ppppppplVar10 = (long *******)&ppppppplStack_70;
    ppppppplStack_70 = param_1;
  }
  uVar9 = (undefined4)param_7;
  pcStack_68 = param_3;
  if ((uVar8 & 6) != 0) {
    if ((uVar7 >> 3 & 1) == 0) {
      uVar13 = 0;
/* wm:chat: discord.gg/sdkhDjTex */
      uVar7 = 0x10;
      if ((uVar8 & 2) != 0) {
        uVar7 = 0x11;
      }
    }
    else {
      uVar7 = (uint)param_4[1];
    }
    uVar4 = FUN_003e2340(&pcStack_68,0,0,&cStack_79,0,&uStack_78,param_3,uVar7,uVar13,param_6);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
    if ((int)uVar4 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x27f,"asn1_template_noexp_d2i");
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
/* wm:more drops soon - github.com/pengussy */
      }
      pppppplVar11 = *ppppppplVar10;
    }
    pcVar1 = uStack_78;
    pcVar12 = pcStack_68;
    if (pppppplVar11 == (long ******)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x292,"asn1_template_noexp_d2i");
      puVar6 = &UNK_0008000f;
    }
    else {
      for (; uStack_78 = pcVar1, 0 < (long)pcVar12;
          pcVar12 = pcVar1 + ((long)pcVar12 - (long)pcVar2)) {
        if (((pcVar12 != (char *)0x1) && (*pcVar1 == '\0')) && (pcVar1[1] == '\0')) {
          uStack_78 = pcVar1 + 2;
          if (cStack_79 != '\0') goto LAB_003e297c;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x29d,"asn1_template_noexp_d2i");
          puVar6 = (undefined *)0x9f;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          goto LAB_003e28dc;
        }
        uStack_88 = 0;
        uVar4 = (*(code *)param_4[4])();
        iVar3 = FUN_003e0e7c(&uStack_88,&uStack_78,pcVar12,uVar4,0xffffffff,0,0,param_6,uVar9,
                             param_8,param_9);
        pcVar2 = uStack_78;
        if (iVar3 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x2a9,"asn1_template_noexp_d2i");
          uVar9 = 0x8010a;
LAB_003e2944:
          func_0x004466b0(0xd,uVar9,0);
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
// watermarked copy - do not remove
          uVar9 = 0x8000f;
          goto LAB_003e2944;
        }
        pcVar1 = uStack_78;
      }
      if (cStack_79 == '\0') goto LAB_003e297c;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x2b6,"asn1_template_noexp_d2i");
      puVar6 = (undefined *)0x89;
    }
LAB_003e28dc:
    func_0x004466b0(0xd,puVar6,0);
    return 0;
  }
  uVar4 = (*(code *)param_4[4])();
  if ((uVar7 >> 3 & 1) == 0) {
    uVar4 = FUN_003e0e7c(ppppppplVar10,&uStack_78,param_3,uVar4,0xffffffff,0,param_5,param_6,uVar9,
                         param_8,param_9);
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
/*  keep the notice, keep the source honest  */
    }
  }
  else {
    uVar4 = FUN_003e0e7c(ppppppplVar10,&uStack_78,param_3,uVar4,(uint)param_4[1],uVar13,param_5,
                         param_6,uVar9,param_8,param_9);
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
  *param_2 = (long)uStack_78;
  return 1;
}

