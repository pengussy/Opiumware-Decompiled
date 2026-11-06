/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3d83fc:e81e1fd7ac
 */

/* WARNING: Possible PIC construction at 0x003d8528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d84e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003d852c) */
/* WARNING: Removing unreachable block (ram,0x003d84e8) */

ulong FUN_003d83fc(undefined8 param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong unaff_x19;
  undefined8 uVar7;
  undefined8 unaff_x20;
  char *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  undefined1 auStack_d8 [4];
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  char *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  char acStack_98 [80];
  undefined8 uStack_48;
  
  pcVar1 = acStack_98 + 0x88;
  uStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
      pcVar5 = "NULL";
      iVar2 = 4;
code_r0x003e9a60:
      if (iVar2 < 1) {
        return 0;
      }
      *(char **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar4 = func_0x003e9aa0(param_1,pcVar5,iVar2,(undefined1 *)((long)register0x00000008 + -0x18))
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      ;
      uVar3 = *(uint *)((long)register0x00000008 + -0x18);
      if ((int)uVar4 < 1) {
        uVar3 = uVar4;
      }
      return (ulong)uVar3;
    }
  }
  else {
    iVar2 = func_0x004a0c1c(acStack_98,0x50,param_2,0);
    unaff_x29 = pcVar1;
    if (iVar2 < 0x50) {
      if (0 < iVar2) {
        pcVar5 = acStack_98;
        unaff_x30 = 0x3d84e8;
        register0x00000008 = (BADSPACEBASE *)auStack_a0;
        goto code_r0x003e9a60;
      }
      param_3 = 9;
      unaff_x19 = func_0x003e9a60(param_1,"<INVALID>",9);
      if (0 < (int)unaff_x19) {
        param_3 = (ulong)*(uint *)(param_2 + 0x14);
        iVar2 = func_0x003e9148(param_1,*(undefined8 *)(param_2 + 0x18),param_3);
        unaff_x19 = (ulong)(uint)(iVar2 + (int)unaff_x19);
      }
    }
    else {
      if (iVar2 == 0x7fffffff) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                        ,199,"i2a_ASN1_OBJECT");
        param_3 = 0;
        func_0x004466b0(0xd,0xe7,0);
      }
      else {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        param_3 = 0xca;
        pcVar5 = (char *)func_0x019eb530(iVar2 + 1,
                                         "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                                         ,0xca);
        if (pcVar5 != (char *)0x0) {
          func_0x004a0c1c(pcVar5,iVar2 + 1,param_2,0);
          unaff_x30 = 0x3d852c;
          register0x00000008 = (BADSPACEBASE *)auStack_a0;
          goto code_r0x003e9a60;
        }
      }
      unaff_x19 = 0xffffffff;
    }
    unaff_x20 = param_1;
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
      return unaff_x19;
    }
  }
  auVar8 = ___stack_chk_fail();
  puStack_a8 = &SUB_003d85b8;
  uStack_c8 = *auVar8._8_8_;
  uStack_c0 = unaff_x20;
/*  thanks for reading - discord.gg/sdkhDjTex  */
  uStack_b8 = unaff_x19;
  pcStack_b0 = pcVar1;
  uVar3 = func_0x003dd2e4(&uStack_c8,&uStack_d0,&iStack_d4,auStack_d8,param_3);
  if ((uVar3 >> 7 & 1) == 0) {
    if (iStack_d4 == 6) {
      uVar6 = func_0x003d8678(auVar8._0_8_,&uStack_c8,uStack_d0);
      if (uVar6 != 0) {
        *auVar8._8_8_ = uStack_c8;
      }
      return uVar6;
    }
    uVar7 = 0x74;
  }
  else {
    uVar7 = 0x66;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                  ,0xf2,&UNK_01c3bf4f);
  func_0x004466b0(0xd,uVar7,0);
  return 0;
}

