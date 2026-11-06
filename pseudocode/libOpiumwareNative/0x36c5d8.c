/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36c5d8:a20aafc71d
 */

ulong FUN_0036c5d8(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_18c;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
// WM - if you paid for this, you were scammed
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_110 [20];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_18c = 1;
  uVar2 = func_0x00455ed0(param_2);
  uVar3 = func_0x00458b30(**(undefined8 **)(param_1 + 8),"TLS13-KDF",
                          (*(undefined8 **)(param_1 + 8))[0x91]);
  lVar4 = func_0x00458774();
  func_0x00458ea4(uVar3);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  if (lVar4 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                    ,0xbe,"tls13_generate_secret");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    goto LAB_0036c884;
  }
  iVar1 = func_0x00455f40(param_2);
  if (iVar1 < 1) goto LAB_0036c8a4;
  func_0x00477f7c(auStack_188,"mode",&uStack_18c);
  puVar5 = &uStack_138;
  func_0x0047992c(&uStack_1b8,"digest",uVar2,0);
  uStack_158 = uStack_1b0;
  uStack_160 = uStack_1b8;
  uStack_148 = uStack_1a0;
  uStack_150 = uStack_1a8;
  uStack_140 = uStack_198;
  if (param_4 != 0) {
    puVar5 = auStack_110;
    func_0x00479984(&uStack_1b8,&UNK_01ae6a70,param_4,param_5);
    uStack_130 = uStack_1b0;
    uStack_138 = uStack_1b8;
    uStack_120 = uStack_1a0;
    uStack_128 = uStack_1a8;
    uStack_118 = uStack_198;
  }
  puVar6 = puVar5;
  if (param_3 != 0) {
    puVar6 = puVar5 + 5;
    func_0x00479984(&uStack_1b8,"salt",param_3,iVar1);
    puVar5[1] = uStack_1b0;
    *puVar5 = uStack_1b8;
    puVar5[3] = uStack_1a0;
/*  chat: discord.gg/sdkhDjTex  */
    puVar5[2] = uStack_1a8;
    puVar5[4] = uStack_198;
  }
  func_0x00479984(&uStack_1b8,"prefix","tls13 ",6);
  puVar6[4] = uStack_198;
  puVar6[1] = uStack_1b0;
  *puVar6 = uStack_1b8;
  puVar6[3] = uStack_1a0;
  puVar6[2] = uStack_1a8;
  func_0x00479984(&uStack_1b8,"label","derived",7);
  puVar6[6] = uStack_1b0;
  puVar6[5] = uStack_1b8;
  puVar6[8] = uStack_1a0;
  puVar6[7] = uStack_1a8;
  puVar6[9] = uStack_198;
  func_0x00479f78(&uStack_1b8);
  puVar6[0xb] = uStack_1b0;
  puVar6[10] = uStack_1b8;
  puVar6[0xd] = uStack_1a0;
  puVar6[0xc] = uStack_1a8;
  puVar6[0xe] = uStack_198;
  iVar1 = func_0x00458ae4(lVar4,param_6,iVar1,auStack_188);
  if (iVar1 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                    ,0xe0,"tls13_generate_secret");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  param_1 = (ulong)(0 < iVar1);
/* WM - watermarked copy - do not remove */
  func_0x0045889c(lVar4);
  if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) {
    do {
      ___stack_chk_fail();
LAB_0036c8a4:
      func_0x019e37c0(param_1,lVar4);
LAB_0036c884:
      param_1 = 0;
    } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70);
  }
  return param_1;
}

