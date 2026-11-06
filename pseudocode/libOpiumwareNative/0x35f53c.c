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
 *  file-id: 0x35f53c:048bee168b
 *  --------------------------------------------------------------------------*/

byte FUN_0035f53c(long param_1,undefined8 *param_2,char *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
// chat: discord.gg/sdkhDjTex
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  
  pcStack_58 = param_3;
  if (param_1 == 0 && param_2 == (undefined8 *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_mcnf.c"
                    ,0x31,"ssl_do_config");
    puVar8 = &UNK_000c0102;
    pcVar9 = (char *)0x0;
LAB_0035f594:
    func_0x004466b0(0x14,puVar8,pcVar9);
LAB_0035f5a0:
    lVar6 = 0;
// more drops soon - github.com/pengussy
  }
  else {
    if ((param_3 != (char *)0x0) || (param_4 == 0)) {
      if (param_3 != (char *)0x0) goto LAB_0035f5fc;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_mcnf.c"
                      ,0x38,"ssl_do_config");
      func_0x004466b0(0x14,0x71,"name not specified (name == NULL)");
      goto LAB_0035f5a0;
    }
    pcStack_58 = "system_default";
LAB_0035f5fc:
    pcVar9 = pcStack_58;
    puVar11 = param_2;
    if (param_1 != 0) {
      puVar11 = *(undefined8 **)(param_1 + 8);
    }
    lVar6 = func_0x004707dc(*puVar11,0x17);
    if (lVar6 == 0) {
// origin: github.com/pengussy
      uVar12 = func_0x00470334();
      lVar6 = func_0x004707dc(uVar12,0x17);
      iVar4 = func_0x004093a0(lVar6,pcVar9,&uStack_60);
    }
    else {
      iVar4 = func_0x004093a0(lVar6,pcVar9,&uStack_60);
    }
    if (iVar4 == 0) {
      if (param_4 != 0) {
        bVar3 = false;
        lVar6 = 0;
        uVar12 = 0;
        bVar2 = true;
        param_4 = 1;
        goto LAB_0035f5a8;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_mcnf.c"
                      ,0x41,"ssl_do_config");
      pcVar9 = "name=%s";
      puVar8 = (undefined *)0x71;
      goto LAB_0035f594;
    }
    uVar7 = func_0x00409340(lVar6,uStack_60,&pcStack_58,&uStack_68);
    uVar10 = 2;
    if (param_4 == 0) {
      uVar10 = 0x62;
    }
    lVar6 = func_0x00356948();
    if (lVar6 != 0) {
      if (param_1 == 0) {
        lVar14 = param_2[1];
        func_0x00356d0c(lVar6,param_2);
      }
      else {
        lVar14 = *(long *)(param_1 + 0x18);
        func_0x00356c08(lVar6,param_1);
        param_2 = *(undefined8 **)(param_1 + 8);
/* watermarked copy - do not remove - github.com/pengussy */
      }
      uVar12 = *param_2;
      iVar4 = func_0x00470a14(uVar12);
      bVar2 = iVar4 == 0;
      if (!bVar2) {
        uVar10 = uVar10 | 0x10;
      }
      if (*(undefined **)(lVar14 + 0x40) != &DAT_003594a8) {
        uVar10 = uVar10 | 8;
      }
      if (*(undefined **)(lVar14 + 0x48) != &DAT_003594a8) {
        uVar10 = uVar10 | 4;
      }
      func_0x00356bdc(lVar6,uVar10);
      uVar12 = func_0x00470424(uVar12);
      if (uStack_68 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        uVar13 = 0;
        do {
          func_0x0040941c(uVar7,uVar13,&uStack_70,&uStack_78);
          iVar5 = FUN_003565e4(lVar6,uStack_70,uStack_78);
          if (iVar5 < 1) {
            iVar4 = iVar4 + 1;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uStack_68);
      }
/*  do not claim this as your own  */
      iVar5 = func_0x0035695c(lVar6);
      bVar3 = iVar4 == 0 && iVar5 != 0;
      goto LAB_0035f5a8;
    }
    param_4 = 0;
  }
  uVar12 = 0;
  bVar3 = false;
  bVar2 = true;
LAB_0035f5a8:
  func_0x00470424(uVar12);
  func_0x00356b30(lVar6);
  bVar1 = false;
  if (param_4 != 0) {
    bVar1 = bVar2;
  }
  return bVar3 | bVar1;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
}

