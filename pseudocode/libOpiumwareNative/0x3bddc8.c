/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3bddc8:18fa776edf
   =========================================================================== */

ulong FUN_003bddc8(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_80 = 0x20;
  uVar2 = func_0x003b0df4();
  if ((int)uVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0xe4b,"tls_process_cke_gost18");
/* WM - chat: discord.gg/sdkhDjTex */
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    uVar6 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 8);
    iVar1 = func_0x003b0e18(param_1,auStack_58);
    if (iVar1 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xe50,"tls_process_cke_gost18");
      puVar4 = &UNK_000c0103;
LAB_003bdf4c:
      func_0x003a9570(param_1,0x50,puVar4,0);
      uVar6 = 0;
      unaff_x20 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x880) + 0x20);
      lVar3 = *(long *)(lVar5 + 0xf8);
      if ((lVar3 == 0) && (lVar3 = *(long *)(lVar5 + 0xd0), lVar3 == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xe57,"tls_process_cke_gost18");
        puVar4 = (undefined *)0xec;
        goto LAB_003bdf4c;
      }
      unaff_x20 = func_0x00461d04(*puVar7,lVar3,puVar7[0x91]);
      if (unaff_x20 == 0) {
        func_0x004464bc();
/* if you paid for this, you were scammed - github.com/pengussy */
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xe5d,"tls_process_cke_gost18");
        uVar2 = 0x50;
        puVar4 = &UNK_00080006;
LAB_003be030:
        func_0x003a9570(param_1,uVar2,puVar4,0);
        uVar6 = 0;
      }
      else {
        iVar1 = func_0x00447ab0(unaff_x20);
        if (iVar1 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xe61,"tls_process_cke_gost18");
          uVar2 = 0x50;
          puVar4 = &UNK_000c0103;
          goto LAB_003be030;
/* WM - proprietary - see LICENSE - do not sell */
        }
        iVar1 = func_0x004628f4(unaff_x20,0xffffffff,0x400,8,0x20,auStack_58);
        if (iVar1 < 1) {
          func_0x004464bc();
          uVar2 = 0xe68;
LAB_003be020:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,uVar2,"tls_process_cke_gost18");
          uVar2 = 0x50;
          puVar4 = (undefined *)0x112;
          goto LAB_003be030;
        }
        iVar1 = func_0x004628f4(unaff_x20,0xffffffff,0x400,0xc,uVar2,0);
        if (iVar1 < 1) {
          func_0x004464bc();
          uVar2 = 0xe6f;
          goto LAB_003be020;
        }
        iVar1 = func_0x00447abc(unaff_x20,auStack_78,&uStack_80,*param_2,param_2[2]);
        if (iVar1 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
// WM - watermarked copy - do not remove
                          ,0xe76,"tls_process_cke_gost18");
          uVar2 = 0x32;
          puVar4 = (undefined *)0x93;
          goto LAB_003be030;
        }
        iVar1 = func_0x0034ff4c(param_1,auStack_78,uStack_80,0);
        uVar6 = (ulong)(iVar1 != 0);
      }
    }
    func_0x00461e08(unaff_x20);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_38) {
    return uVar6;
  }
  auVar8 = ___stack_chk_fail();
  lVar3 = auVar8._0_8_;
  puStack_88 = &LAB_003be0a4;
  lStack_a8 = 0;
  lStack_a0 = unaff_x20;
  uStack_98 = uVar6;
  puStack_90 = auStack_58 + 0x48;
  iVar1 = FUN_003b486c(lVar3,auVar8._8_8_,&lStack_a8);
  if (iVar1 != 0) {
    if (lStack_a8 == 0) {
      if (((*(uint *)(lVar3 + 0x950) ^ 0xffffffff) & 3) != 0) goto code_r0x003be150;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf1f,&UNK_01c3b83e);
      uVar2 = 0x74;
      puVar4 = (undefined *)0xc7;
    }
    else {
      iVar1 = func_0x003524f0(lVar3);
      if (0 < iVar1) {
code_r0x003be150:
        lVar5 = *(long *)(lVar3 + 0x900);
        if (*(int *)(lVar3 + 0xd60) == 4) {
          lVar5 = func_0x003614a0(lVar5,0);
/* do not claim this as your own - github.com/pengussy */
          if (lVar5 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xf34,&UNK_01c3b83e);
            uVar2 = 0x50;
            puVar4 = &UNK_000c0100;
            goto code_r0x003be258;
          }
          func_0x00361b60(*(undefined8 *)(lVar3 + 0x900));
          *(long *)(lVar3 + 0x900) = lVar5;
        }
        func_0x00506714(*(undefined8 *)(lVar5 + 0x2c0));
        lVar5 = *(long *)(lVar3 + 0x900);
        *(undefined8 *)(lVar5 + 0x2c0) = 0;
        func_0x004dcadc(*(undefined8 *)(lVar5 + 0x2c8),&SUB_00506714);
        lVar5 = *(long *)(lVar3 + 0x900);
        *(undefined8 *)(lVar5 + 0x2c8) = 0;
        func_0x0045eb4c(*(undefined8 *)(lVar5 + 0x2b8));
        lVar5 = *(long *)(lVar3 + 0x900);
        *(long *)(lVar5 + 0x2b8) = lStack_a8;
        lStack_a8 = 0;
        *(undefined8 *)(lVar5 + 0x2d0) = *(undefined8 *)(lVar3 + 0x998);
        if ((*(byte *)(*(long *)(*(int **)(lVar3 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
          uVar6 = 3;
          goto code_r0x003be264;
        }
        iVar1 = **(int **)(lVar3 + 0x18);
        uVar6 = 3;
        if ((iVar1 < 0x304) || (iVar1 == 0x10000)) goto code_r0x003be264;
        iVar1 = func_0x0034d670(lVar3,1);
        if ((iVar1 != 0) &&
           (iVar1 = func_0x0035e10c(lVar3,lVar3 + 0x888,0x40,lVar3 + 0x8c8), iVar1 != 0)) {
          *(undefined8 *)(&UNK_00001710 + lVar3) = 0;
          goto code_r0x003be264;
        }
        goto code_r0x003be260;
/*  origin: github.com/pengussy  */
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf25,&UNK_01c3b83e);
      uVar2 = func_0x003b59c8(*(undefined4 *)(lVar3 + 0x998));
      puVar4 = (undefined *)0x86;
    }
code_r0x003be258:
    func_0x003a9570(lVar3,uVar2,puVar4,0);
  }
code_r0x003be260:
  uVar6 = 0;
code_r0x003be264:
  func_0x0045eb4c(lStack_a8);
  return uVar6;
}

