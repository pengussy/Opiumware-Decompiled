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
 *  file-id: 0x3b202c:583f453ebd
 *  --------------------------------------------------------------------------*/

long FUN_003b202c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_50 = (ulong)CONCAT11((char)param_2,(char)((ulong)param_2 >> 8)) << 0x30;
  lVar2 = func_0x0034d410(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x120),&lStack_50);
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                    ,0x4b5,"dtls1_retransmit_message");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    lVar2 = 0;
    *param_3 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return 0;
    }
  }
/* WM - if you paid for this, you were scammed */
  else {
    *param_3 = 1;
    puVar7 = *(undefined1 **)(lVar2 + 8);
    lVar2 = 0xc;
    if (*(int *)(puVar7 + 0x28) != 0) {
      lVar2 = 1;
    }
    _memcpy(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),*(undefined8 *)(puVar7 + 0x40),
            *(long *)(puVar7 + 8) + lVar2);
    lVar3 = *(long *)(puVar7 + 8);
    *(long *)(param_1 + 0x108) = lVar3 + lVar2;
    uVar1 = *(undefined2 *)(puVar7 + 0x10);
    uVar6 = *(undefined8 *)(puVar7 + 0x20);
    lVar2 = *(long *)(param_1 + 0x4f0);
    *(undefined1 *)(lVar2 + 0x138) = *puVar7;
    *(long *)(lVar2 + 0x140) = lVar3;
    *(undefined2 *)(lVar2 + 0x148) = uVar1;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = uVar6;
    uVar8 = *(undefined8 *)(param_1 + 0xe30);
    uVar9 = *(undefined8 *)(param_1 + 0xe40);
    *(undefined4 *)(lVar2 + 0x1cc) = 1;
/* if you paid for this, you were scammed */
    lVar2 = *(long *)(puVar7 + 0x30);
    uVar6 = *(undefined8 *)(puVar7 + 0x38);
    *(long *)(param_1 + 0xe30) = lVar2;
    *(undefined8 *)(param_1 + 0xe40) = uVar6;
    (**(code **)(lVar2 + 0x58))(uVar6,*(undefined8 *)(param_1 + 0x58));
    uVar5 = 0x16;
    if (*(int *)(puVar7 + 0x28) != 0) {
      uVar5 = 0x14;
    }
    lVar2 = func_0x019e764c(param_1,uVar5);
    *(undefined8 *)(param_1 + 0xe30) = uVar8;
    *(undefined8 *)(param_1 + 0xe40) = uVar9;
    *(undefined4 *)(*(long *)(param_1 + 0x4f0) + 0x1cc) = 0;
    func_0x003e95bc(*(undefined8 *)(param_1 + 0x58),0xb,0,0);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return lVar2;
    }
  }
  auVar10 = ___stack_chk_fail(lVar2);
  lVar2 = auVar10._0_8_;
  lVar3 = func_0x019eb5a0(0x50,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                          ,0x4c);
  if (lVar3 == 0) {
    return 0;
  }
  if (lVar2 == 0) {
    lVar4 = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
  }
  else {
    lVar4 = func_0x019eb530(lVar2,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                            ,0x50);
    if (lVar4 == 0) {
      func_0x004743e4(lVar3,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x51);
      return 0;
    }
    *(long *)(lVar3 + 0x40) = lVar4;
  }
  if (auVar10._8_4_ == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x019eb5a0(lVar2 + 7U >> 3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                            ,0x5b);
    if (lVar2 == 0) {
      func_0x004743e4(lVar4,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x5d);
      func_0x004743e4(lVar3,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x5e);
      return 0;
    }
  }
/*  no support for modified copies  */
  *(long *)(lVar3 + 0x48) = lVar2;
  return lVar3;
}

