/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36c8fc:1718934e83
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0036c6c4) */

ulong FUN_0036c8fc(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_18c;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_110 [20];
  long lStack_70;
  
  uVar6 = func_0x003542a0();
  uVar2 = func_0x00455f40();
  if ((int)uVar2 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                    ,0x103,"tls13_generate_master_secret");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  *param_5 = (ulong)uVar2;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
/*  donate: donate/README.md  */
  uStack_18c = 1;
  uVar3 = func_0x00455ed0(uVar6);
  uVar4 = func_0x00458b30(**(undefined8 **)(param_1 + 8),"TLS13-KDF",
                          (*(undefined8 **)(param_1 + 8))[0x91]);
  lVar5 = func_0x00458774();
  func_0x00458ea4(uVar4);
  if (lVar5 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                    ,0xbe,"tls13_generate_secret");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    while (param_1 = 0, *(long *)PTR____stack_chk_guard_01f20200 != lStack_70) {
LAB_0036c8a0:
      ___stack_chk_fail();
LAB_0036c8a4:
      func_0x019e37c0(param_1,lVar5);
    }
  }
  else {
    iVar1 = func_0x00455f40(uVar6);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (iVar1 < 1) goto LAB_0036c8a4;
    func_0x00477f7c(auStack_188,"mode",&uStack_18c);
    puVar7 = &uStack_138;
    func_0x0047992c(&uStack_1b8,"digest",uVar3,0);
    uStack_158 = uStack_1b0;
    uStack_160 = uStack_1b8;
    uStack_148 = uStack_1a0;
    uStack_150 = uStack_1a8;
    uStack_140 = uStack_198;
    if (param_3 != 0) {
      puVar7 = auStack_110;
      func_0x00479984(&uStack_1b8,"salt",param_3,iVar1);
      uStack_130 = uStack_1b0;
      uStack_138 = uStack_1b8;
      uStack_120 = uStack_1a0;
      uStack_128 = uStack_1a8;
      uStack_118 = uStack_198;
    }
    func_0x00479984(&uStack_1b8,"prefix","tls13 ",6);
    puVar7[4] = uStack_198;
    puVar7[1] = uStack_1b0;
    *puVar7 = uStack_1b8;
    puVar7[3] = uStack_1a0;
/* WM - keep the notice, keep the source honest */
    puVar7[2] = uStack_1a8;
    func_0x00479984(&uStack_1b8,"label","derived",7);
    puVar7[6] = uStack_1b0;
    puVar7[5] = uStack_1b8;
    puVar7[8] = uStack_1a0;
    puVar7[7] = uStack_1a8;
    puVar7[9] = uStack_198;
    func_0x00479f78(&uStack_1b8);
    puVar7[0xb] = uStack_1b0;
    puVar7[10] = uStack_1b8;
    puVar7[0xd] = uStack_1a0;
    puVar7[0xc] = uStack_1a8;
    puVar7[0xe] = uStack_198;
    iVar1 = func_0x00458ae4(lVar5,param_2,iVar1,auStack_188);
    if (iVar1 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0xe0,"tls13_generate_secret");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    }
    param_1 = (ulong)(0 < iVar1);
    func_0x0045889c(lVar5);
    if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_0036c8a0;
  }
  return param_1;
}

