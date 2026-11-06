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
 *  file-id: 0x3dfe40:6e729da1ef
 *  --------------------------------------------------------------------------*/

undefined8 *
FUN_003dfe40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,int param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iStack_7c;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  iStack_7c = param_6;
  uVar3 = func_0x0045575c();
  if ((int)uVar3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
                    ,0x40,"PKCS5_pbe2_set_iv_ex");
    func_0x004466b0(0xd,0x6c,0);
    puVar7 = (undefined8 *)0x0;
    lVar6 = 0;
    plVar4 = (long *)0x0;
    goto LAB_003dff88;
  }
  plVar4 = (long *)func_0x003e3f90(&UNK_01dc8af0);
// WM - more drops soon - github.com/pengussy
  if (plVar4 == (long *)0x0) {
    func_0x004464bc();
    uVar3 = 0x45;
    goto LAB_003dff68;
  }
  puVar7 = (undefined8 *)plVar4[1];
  uVar5 = func_0x004a068c(uVar3);
  *puVar7 = uVar5;
  lVar6 = func_0x003e54c0();
  puVar7[1] = lVar6;
  if (lVar6 == 0) {
    func_0x004464bc();
    uVar3 = 0x4d;
    goto LAB_003dff68;
  }
  iVar2 = func_0x00455c98(param_1);
  if (0 < iVar2) {
    if (param_5 == 0) {
      iVar2 = func_0x004b242c(param_7,auStack_78,iVar2,0);
      if (iVar2 < 1) goto LAB_003dff80;
    }
    else {
      ___memcpy_chk(auStack_78,param_5,iVar2,0x10);
    }
  }
  lVar6 = func_0x00451f08();
  if (lVar6 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
                    ,0x5c,"PKCS5_pbe2_set_iv_ex");
    uVar1 = 0x80006;
    goto LAB_003dff78;
  }
  iVar2 = func_0x019e9b88(lVar6,param_1,0,0,auStack_78,0);
  if (iVar2 != 0) {
    iVar2 = func_0x00454e18(lVar6,puVar7[1]);
    if (0 < iVar2) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      func_0x00446890();
      if ((param_6 == -1) && (iVar2 = func_0x00452c6c(lVar6,7,0,&iStack_7c), iVar2 < 1)) {
        iStack_7c = 799;
      }
      func_0x004468d8();
      func_0x00451f38(lVar6);
      if ((int)uVar3 == 0x25) {
        uVar3 = func_0x003f85b4(param_1);
      }
      else {
        uVar3 = 0xffffffff;
      }
      func_0x003e59f8(*plVar4);
      lVar6 = func_0x003e0200(param_2,param_3,param_4,iStack_7c,uVar3,param_7);
      *plVar4 = lVar6;
      if (lVar6 == 0) goto LAB_003e0180;
      puVar7 = (undefined8 *)func_0x003e59ec();
      if (puVar7 == (undefined8 *)0x0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
                        ,0x89,"PKCS5_pbe2_set_iv_ex");
        uVar1 = 0x8000b;
      }
      else {
        uVar3 = func_0x004a068c(0xa1);
        *puVar7 = uVar3;
        lVar6 = func_0x003db158(&UNK_01dc8af0,plVar4,puVar7 + 1);
        if (lVar6 != 0) {
          func_0x003e3aac(plVar4,&UNK_01dc8af0);
          if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_68) {
            do {
// if you paid for this, you were scammed
              ___stack_chk_fail();
LAB_003e0180:
              func_0x004464bc();
              uVar3 = 0x82;
LAB_003dff68:
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
                              ,uVar3,"PKCS5_pbe2_set_iv_ex");
              uVar1 = 0x8000d;
LAB_003dff78:
              func_0x004466b0(0xd,uVar1,0);
LAB_003dff80:
              puVar7 = (undefined8 *)0x0;
LAB_003dff84:
              lVar6 = 0;
LAB_003dff88:
              func_0x00451f38(lVar6);
              func_0x003e3aac(plVar4,&UNK_01dc8af0);
              func_0x003e59f8(puVar7);
              puVar7 = (undefined8 *)0x0;
            } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_68);
          }
          return puVar7;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
                        ,0x93,"PKCS5_pbe2_set_iv_ex");
        uVar1 = 0x8000d;
      }
      func_0x004466b0(0xd,uVar1,0);
      goto LAB_003dff84;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
/* wm:do not claim this as your own */
                    ,100,"PKCS5_pbe2_set_iv_ex");
    func_0x004466b0(0xd,0x72,0);
  }
  puVar7 = (undefined8 *)0x0;
  goto LAB_003dff88;
}

