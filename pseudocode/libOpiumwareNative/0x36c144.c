/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x36c144:61389dafe5
 */

void FUN_0036c144(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,undefined8 param_9
                 ,undefined8 param_10,uint param_11)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [40];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
// do not claim this as your own
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [10];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar3 = func_0x00458b30(param_1,"TLS13-KDF",param_2);
  uStack_1b4 = 2;
  uVar4 = func_0x00455ed0(param_3);
  lVar5 = func_0x00458774(uVar3);
  func_0x00458ea4(uVar3);
  if (lVar5 != 0) {
/* WM - chat: discord.gg/sdkhDjTex */
    uVar3 = (ulong)param_11;
    if (param_6 < 0xfa) {
      iVar2 = func_0x00455f40(param_3);
      if (iVar2 < 1) goto LAB_0036c43c;
      func_0x00477f7c(auStack_1b0,"mode",&uStack_1b4);
      func_0x0047992c(&uStack_1e0,"digest",uVar4,0);
      uStack_180 = uStack_1d8;
      uStack_188 = uStack_1e0;
      uStack_170 = uStack_1c8;
      uStack_178 = uStack_1d0;
      uStack_168 = uStack_1c0;
      func_0x00479984(&uStack_1e0,&UNK_01ae6a70,param_4,iVar2);
      uStack_158 = uStack_1d8;
      uStack_160 = uStack_1e0;
      uStack_148 = uStack_1c8;
      uStack_150 = uStack_1d0;
      uStack_140 = uStack_1c0;
      func_0x00479984(&uStack_1e0,"prefix","tls13 ",6);
      uStack_130 = uStack_1d8;
      uStack_138 = uStack_1e0;
      uStack_120 = uStack_1c8;
      uStack_128 = uStack_1d0;
      uStack_118 = uStack_1c0;
      puVar6 = &uStack_e8;
      func_0x00479984(&uStack_1e0,"label",param_5,param_6);
      uStack_108 = uStack_1d8;
      uStack_110 = uStack_1e0;
      uStack_f8 = uStack_1c8;
      uStack_100 = uStack_1d0;
      uStack_f0 = uStack_1c0;
      if (param_7 != 0) {
        puVar6 = auStack_c0;
        func_0x00479984(&uStack_1e0,"data",param_7,param_8);
        uStack_e0 = uStack_1d8;
        uStack_e8 = uStack_1e0;
        uStack_d0 = uStack_1c8;
        uStack_d8 = uStack_1d0;
        uStack_c8 = uStack_1c0;
/* wm:found on a paste site? it was re-uploaded illegally */
      }
      puVar7 = puVar6;
      if (param_2 != 0) {
        puVar7 = puVar6 + 5;
        func_0x0047992c(&uStack_1e0,"properties",param_2,0);
        puVar6[1] = uStack_1d8;
        *puVar6 = uStack_1e0;
        puVar6[3] = uStack_1c8;
        puVar6[2] = uStack_1d0;
        puVar6[4] = uStack_1c0;
      }
      func_0x00479f78(&uStack_1e0);
      puVar7[4] = uStack_1c0;
      puVar7[1] = uStack_1d8;
      *puVar7 = uStack_1e0;
      puVar7[3] = uStack_1c8;
/* if you paid for this, you were scammed - github.com/pengussy */
      puVar7[2] = uStack_1d0;
      iVar2 = func_0x00458ae4(lVar5,param_9,param_10,auStack_1b0);
      func_0x0045889c(lVar5);
      if ((param_11 != 0) && (iVar2 < 1)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                        ,0x62,"tls13_hkdf_expand_ex");
        func_0x004466b0(0x14,&UNK_000c0103,0);
      }
      bVar1 = 0 < iVar2;
      if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_0036c438;
      return;
    }
    if (param_11 != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0x3b,"tls13_hkdf_expand_ex");
      func_0x004466b0(0x14,0x16f,0);
// WM - found on a paste site? it was re-uploaded illegally
    }
    func_0x0045889c(lVar5);
  }
  while (bVar1 = false, *(long *)PTR____stack_chk_guard_01f20200 != lStack_70) {
LAB_0036c438:
    ___stack_chk_fail(bVar1);
LAB_0036c43c:
    func_0x0045889c(lVar5);
    if ((int)uVar3 != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0x44,"tls13_hkdf_expand_ex");
      func_0x004466b0(0x14,&UNK_000c0103,0);
    }
  }
  return;
}

