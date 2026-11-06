/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3df200:9ffc07d36e
 */

long FUN_003df200(int param_1,long *param_2,undefined1 **param_3,undefined1 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_108;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
/* wm:reversing this took months of machine time */
  undefined1 *puStack_98;
  undefined1 auStack_8a [50];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_a0 = 0;
  puVar11 = *param_3;
  puVar9 = param_4;
  uVar10 = param_5;
  puStack_98 = param_4;
  if (param_1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    pcVar8 = (char *)param_3;
    puVar2 = (undefined1 *)func_0x0045f9f8();
    if (puVar2 == (undefined1 *)0x0) {
      lVar5 = 0;
      goto LAB_003df404;
    }
  }
  func_0x00446890();
  puVar3 = (undefined8 *)func_0x003e0754(0,param_3,param_4);
  func_0x004468d8();
  if (puVar3 == (undefined8 *)0x0) {
    pcVar8 = "type-specific";
    *param_3 = puVar11;
    if (param_2 == (long *)0x0) goto LAB_003df384;
LAB_003df2e8:
    lVar5 = *param_2;
    plVar4 = &lStack_a0;
    if (lVar5 != 0) {
      plVar4 = param_2;
/* origin: github.com/pengussy */
    }
    uVar10 = 0x87;
    lVar7 = func_0x004417e4(plVar4,&UNK_01c3d2f1,pcVar8,puVar2,0x87,param_5,param_6);
    *param_2 = lVar5;
    puVar9 = puVar2;
joined_r0x003df31c:
    if (lVar7 != 0) {
      pcVar8 = (char *)&puStack_98;
      iVar1 = func_0x0043f634(lVar7,param_3,pcVar8);
      func_0x00440e5c(lVar7);
      if (((iVar1 != 0) && (*plVar4 != 0)) && (iVar1 = func_0x0045a088(*plVar4,1), iVar1 != 0)) {
        lVar5 = *plVar4;
        if (param_2 != (long *)0x0) {
          *param_2 = lVar5;
        }
        goto LAB_003df404;
      }
    }
    if (plVar4 != param_2) {
      func_0x0045eb4c(*plVar4);
    }
  }
  else {
    iVar1 = func_0x003d6a2c(&uStack_b0,*puVar3);
    if (iVar1 != 0 && uStack_b0 < 2) {
      if (puVar2 == (undefined1 *)0x0) {
        iVar1 = func_0x003e0834(&uStack_a8,0,0,0,puVar3);
        if (iVar1 == 0) {
          puVar2 = (undefined1 *)0x0;
        }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        else {
          iVar1 = func_0x004a0c1c(auStack_8a,0x32,uStack_a8,0);
          puVar2 = (undefined1 *)0x0;
          if (iVar1 != 0) {
            puVar2 = auStack_8a;
          }
        }
      }
      func_0x003e0778(puVar3);
      pcVar8 = "PrivateKeyInfo";
      *param_3 = puVar11;
      if (param_2 != (long *)0x0) goto LAB_003df2e8;
LAB_003df384:
      plVar4 = &lStack_a0;
      uVar10 = 0x87;
      lVar7 = func_0x004417e4(&lStack_a0,&UNK_01c3d2f1,pcVar8,puVar2,0x87,param_5,param_6);
      puVar9 = puVar2;
      goto joined_r0x003df31c;
    }
    *param_3 = puVar11;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/d2i_pr.c"
                    ,0x39,"d2i_PrivateKey_decoder");
    pcVar8 = (char *)0x0;
    func_0x004466b0(0xd,0xcb,0);
    func_0x003e0778(puVar3);
  }
  lVar5 = 0;
LAB_003df404:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return lVar5;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  }
  auVar13 = ___stack_chk_fail(lVar5);
  puVar3 = auVar13._8_8_;
  plVar4 = auVar13._0_8_;
  lVar5 = FUN_003df200(0,plVar4,puVar3,pcVar8,puVar9,uVar10);
  if (lVar5 == 0) {
    uStack_108 = *puVar3;
    uVar6 = func_0x003e5520(0,&uStack_108,pcVar8);
    uStack_108 = *puVar3;
    iVar1 = func_0x004dcb7c();
    if (iVar1 == 6) {
      uVar12 = 0x74;
    }
    else {
      iVar1 = func_0x004dcb7c(uVar6);
      if (iVar1 == 4) {
        uVar12 = 0x198;
      }
      else {
        iVar1 = func_0x004dcb7c(uVar6);
        if (iVar1 == 3) {
          lVar5 = func_0x003e0754(0,&uStack_108,pcVar8);
          func_0x004dcadc(uVar6,&SUB_003e54cc);
          if (lVar5 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/d2i_pr.c"
                            ,0xd2,&UNK_01c3d2f5);
            func_0x004466b0(0xd,0xa7,0);
            return 0;
          }
          lVar7 = func_0x00456844(lVar5,puVar9,uVar10);
          func_0x003e0778(lVar5);
          if (lVar7 == 0) {
            return 0;
/*  unlicensed copy if this notice is missing  */
          }
          *puVar3 = uStack_108;
          if (plVar4 == (long *)0x0) {
            return lVar7;
          }
          *plVar4 = lVar7;
          return lVar7;
        }
        uVar12 = 6;
      }
    }
    func_0x004dcadc(uVar6,&SUB_003e54cc);
    lVar5 = func_0x003def8c(uVar12,plVar4,puVar3,pcVar8,puVar9,uVar10);
  }
  return lVar5;
}

