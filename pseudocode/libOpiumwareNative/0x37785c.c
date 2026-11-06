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
 *  file-id: 0x37785c:619be85015
 *  --------------------------------------------------------------------------*/

void FUN_0037785c(long param_1,undefined8 param_2,ulong param_3,char *param_4,ulong param_5,
                 char *param_6,undefined4 param_7,char *param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  long lStack_110;
  ulong uStack_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined *puStack_48;
  long lStack_40;
/* chat: discord.gg/sdkhDjTex */
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar5 = (uint)*(undefined8 *)(param_1 + 0x620);
  if ((uVar5 >> 10 & 1) == 0) {
    if ((uVar5 >> 9 & 1) != 0) {
      func_0x019e3d08(param_1,2);
      uVar8 = *(ulong *)(param_1 + 0x620);
      uVar7 = uVar8 | 0x400;
      *(ulong *)(param_1 + 0x620) = uVar7;
      uStack_30 = 0;
      puStack_48 = (undefined *)0x0;
      uStack_50 = 0;
      uStack_38 = 0;
      lStack_40 = 0;
      uStack_68 = 0;
/* watermarked copy - do not remove */
      uStack_70 = 0;
      uStack_6b = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      lVar2 = *(long *)(param_1 + 0x48);
      uVar5 = (uint)uVar8;
      if (lVar2 == 0) {
        if (((uVar8 >> 0x29 & 1) == 0) ||
           (((uVar5 >> 0x19 & 1) != 0 && (*(char *)(param_1 + 0x478) == '\0')))) {
          lVar2 = 0;
        }
        else {
          uStack_80 = *(undefined8 *)(param_1 + 0x478);
          uStack_78 = (undefined5)*(undefined8 *)(param_1 + 0x480);
          uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x485);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
          uStack_68 = *(undefined8 *)(param_1 + 0x640);
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = (ulong)(uVar5 >> 0x19 & 1);
          puStack_48 = &DAT_003757b0;
          lStack_40 = param_1;
          lVar2 = FUN_00370be4(&uStack_80);
          *(long *)(param_1 + 0x48) = lVar2;
          uVar7 = *(ulong *)(param_1 + 0x620);
          if (lVar2 == 0) {
            uVar7 = uVar7 & 0xfffffdffffffffff;
            *(ulong *)(param_1 + 0x620) = uVar7;
          }
        }
      }
      param_4 = (char *)(ulong)((uint)uVar7 >> 9 & 1);
/* WM - donate: donate/README.md */
      param_5 = (ulong)((uint)uVar7 >> 10 & 1);
      param_3 = (ulong)(uVar5 & 7);
      FUN_003719e8(lVar2,uVar5 & 7);
      func_0x003734b0(*(undefined8 *)(param_1 + 0x418));
      goto LAB_00377974;
    }
    param_4 = "handshake cannot be confirmed before it is completed";
    param_6 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
    ;
    param_8 = "ossl_quic_channel_on_handshake_confirmed";
    param_3 = 0x1e;
    param_5 = 0;
    param_7 = 0xc1a;
    FUN_003779a4(param_1,10);
    uVar1 = 0;
  }
  else {
LAB_00377974:
    uVar1 = 1;
  }
/* unlicensed copy if this notice is missing */
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
    return;
  }
  auVar9 = ___stack_chk_fail(uVar1);
  lVar4 = auVar9._8_8_;
  lVar2 = auVar9._0_8_;
  uStack_f0 = 0;
  uStack_108 = 0;
  lStack_110 = 0;
  uStack_f8 = 0;
  pcStack_100 = (char *)0x0;
  uVar6 = 0xc0103;
  if (lVar4 != 1) {
    uVar6 = 0x17e;
  }
  func_0x00391900(lVar4);
  if ((*(byte *)(lVar2 + 0x624) >> 6 & 1) != 0) {
    return;
  }
  if (param_5 != 0) {
    func_0x004470e4(param_5);
  }
  if (param_3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,0xddf,"ossl_quic_channel_raise_protocol_error_loc");
    func_0x004466b0(0x14,uVar6,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"");
  }
  else {
    func_0x003918e0(param_3);
/* if you paid for this, you were scammed - github.com/pengussy */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,0xdd6,"ossl_quic_channel_raise_protocol_error_loc");
    func_0x004466b0(0x14,uVar6,
                    "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                   );
  }
  if (param_6 != (char *)0x0) {
    func_0x004465b0(param_6,param_7,param_8);
  }
  if (*(long *)(lVar2 + 0x628) == 0) {
    lVar3 = func_0x00446c9c();
    *(long *)(lVar2 + 0x628) = lVar3;
    if (lVar3 == 0) goto LAB_00377aec;
  }
  func_0x00446cac();
LAB_00377aec:
  lStack_110 = lVar4;
  uStack_108 = param_3;
  pcStack_100 = param_4;
  uStack_f8 = _strlen(param_4);
  *(ulong *)(lVar2 + 0x620) = *(ulong *)(lVar2 + 0x620) | 0x4000000000;
  func_0x003772a4(lVar2,&lStack_110,0);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  return;
}

