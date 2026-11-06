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
 *  file-id: 0x3847ec:852ee3922e
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003847ec(long param_1,uint param_2,long param_3,long param_4,undefined1 *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *unaff_x19;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  long unaff_x22;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_138 [64];
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
/* origin: github.com/pengussy - github.com/pengussy */
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  
  puVar1 = auStack_a8 + 0x98;
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  if (((param_2 < 4) && (param_1 != 0)) &&
     ((param_2 == 3 || (unaff_x19 = param_5, unaff_x20 = param_3, unaff_x21 = param_4, param_3 == 0)
      ))) {
    param_1 = param_1 + (ulong)param_2 * 0xd0;
    unaff_x22 = func_0x003859b0(*(undefined4 *)(param_1 + 0x60));
    uVar10 = func_0x00385a50(*(undefined4 *)(param_1 + 0x60));
/* wm:no support for modified copies */
    uVar4 = func_0x00385a28(*(undefined4 *)(param_1 + 0x60));
    if (unaff_x22 == 0) {
      func_0x004464bc();
      uVar6 = 0x7e;
LAB_003849cc:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                      ,uVar6,"el_setup_keyslot");
      func_0x004466b0(0x14,&UNK_000c0103,0);
      goto LAB_00384a60;
    }
    uVar5 = func_0x00385a00(*(undefined4 *)(param_1 + 0x60));
    if ((&segment_command_00000020.vmsize < param_5) ||
       (param_5 != (undefined1 *)(uVar5 & 0xffffffff))) {
      func_0x004464bc();
      uVar6 = 0x84;
      goto LAB_003849cc;
    }
    param_5 = (undefined1 *)(param_1 + param_3 * 0x10 + 0x6a);
    uStack_b0 = 1;
    puStack_c0 = param_5;
    uStack_b8 = uVar10 & 0xffffffff;
    iVar2 = FUN_0036c144(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         *(undefined8 *)(param_1 + 0x28),param_4,"quic ivquic key",7,0,0);
    if (iVar2 == 0) {
LAB_003849e8:
      param_4 = 0;
      unaff_x22 = 0;
LAB_00384a38:
      func_0x00451f38(unaff_x22);
      func_0x00451e8c(param_4);
/* WM - stripping the watermark breaks the license */
      func_0x0046eb00(param_5,0x10);
      func_0x0046eb00(auStack_a8,0x40);
      goto LAB_00384a60;
    }
    uStack_b0 = 1;
    puStack_c0 = auStack_a8;
    uStack_b8 = uVar4 & 0xffffffff;
    iVar2 = FUN_0036c144(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                         *(undefined8 *)(param_1 + 0x28),param_4,"quic key",8,0,0);
    if (iVar2 == 0) goto LAB_003849e8;
    puVar11 = &UNK_00080006;
    param_4 = func_0x004535cc(*(undefined8 *)(param_1 + 0x40),unaff_x22,
                              *(undefined8 *)(param_1 + 0x48));
    if (param_4 == 0) {
      unaff_x22 = 0;
      param_3 = 0xa0;
LAB_00384a0c:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                      ,param_3,"el_setup_keyslot");
      func_0x004466b0(0x14,puVar11,0);
/* do not claim this as your own */
      goto LAB_00384a38;
    }
    unaff_x22 = func_0x00451f08();
    if (unaff_x22 == 0) {
      param_3 = 0xa5;
      goto LAB_00384a0c;
    }
    iVar2 = func_0x00455c98(param_4);
    if (((uVar10 & 0xffffffff) != (long)iVar2) ||
       (iVar2 = func_0x003f85b4(param_4), (uVar4 & 0xffffffff) != (long)iVar2)) {
      param_3 = 0xab;
      puVar11 = &UNK_000c0103;
      goto LAB_00384a0c;
    }
    iVar2 = func_0x019e9b88(unaff_x22,param_4,0,auStack_a8,param_5,0);
    if (iVar2 == 0) {
      param_3 = 0xb1;
      goto LAB_00384a0c;
    }
    *(long *)(param_1 + param_3 * 8 + 0x30) = unaff_x22;
    func_0x0046eb00(auStack_a8,0x40);
    func_0x00451e8c(param_4);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar6 = 1;
  }
  else {
    param_4 = unaff_x21;
    param_3 = unaff_x20;
    param_5 = unaff_x19;
    func_0x019e4924();
LAB_00384a60:
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
    return uVar6;
  }
  auVar12 = ___stack_chk_fail(uVar6);
  lVar7 = auVar12._0_8_;
  puStack_c8 = &DAT_00384ab0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_f0 = unaff_x22;
  lStack_e8 = param_4;
  lStack_e0 = param_3;
  puStack_d8 = param_5;
  puStack_d0 = puVar1;
  if (((auVar12._8_4_ < 4) && (lVar7 != 0)) && (auVar12._8_4_ == 3)) {
    lVar9 = lVar7 + (auVar12._8_8_ & 0xffffffff) * 0xd0;
    if (*(char *)(lVar9 + 0x68) == '\x01') {
      if (*(char *)(lVar9 + 0x69) == '\0') {
        *(long *)(lVar9 + 0x50) = *(long *)(lVar9 + 0x50) + 1;
        *(undefined1 *)(lVar9 + 0x68) = 2;
      }
      else {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        uVar3 = func_0x00385a00(*(undefined4 *)(lVar9 + 0x60));
        uVar6 = FUN_0036c144(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48),
                             *(undefined8 *)(lVar9 + 0x28),lVar9 + 0x8a,"quic kuquic ivquic key",7,0
                             ,0,auStack_138,uVar3,1);
        if ((int)uVar6 == 0) goto code_r0x00384be4;
        if ((*(byte *)(lVar7 + 0x2d8) - 1 < 2) ||
           ((*(byte *)(lVar7 + 0x2d8) == 3 && ((*(byte *)(lVar7 + 0x2c0) & 1) == 0)))) {
          if (*(long *)(lVar7 + 0x2a0) != 0) {
            func_0x00451f38();
            *(undefined8 *)(lVar7 + 0x2a0) = 0;
          }
          func_0x0046eb00(lVar7 + 0x2da,0x10);
        }
        uVar6 = FUN_003847ec(lVar7,3,0,lVar9 + 0x8a,uVar3);
        if ((int)uVar6 == 0) goto code_r0x00384be4;
        *(long *)(lVar9 + 0x50) = *(long *)(lVar9 + 0x50) + 1;
        *(undefined8 *)(lVar9 + 0x58) = 0;
        _memcpy(lVar9 + 0x8a,auStack_138,uVar3);
      }
      uVar6 = 1;
      goto code_r0x00384be4;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,0x166,&UNK_01c3801e);
    uVar3 = 0xc0103;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,0x161,&UNK_01c3801e);
    uVar3 = 0x80106;
  }
/* unlicensed copy if this notice is missing */
  func_0x004466b0(0x14,uVar3,0);
  uVar6 = 0;
code_r0x00384be4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_f8) {
    return uVar6;
  }
  auVar12 = ___stack_chk_fail(uVar6);
  lVar7 = auVar12._0_8_;
  if (((3 < auVar12._8_4_) || (lVar7 == 0)) || (auVar12._8_4_ != 3)) {
    func_0x019e4954();
    return 0;
  }
  lVar9 = lVar7 + (auVar12._8_8_ & 0xffffffff) * 0xd0;
  uVar10 = (ulong)~*(uint *)(lVar9 + 0x50) & 1;
  if ((*(byte *)(lVar7 + 0x2d8) - 1 < 2) ||
     ((*(byte *)(lVar7 + 0x2d8) == 3 && (uVar10 == (*(ulong *)(lVar7 + 0x2c0) & 1))))) {
    lVar8 = *(long *)(lVar7 + 0x2a0 + uVar10 * 8);
    if (lVar8 != 0) {
      func_0x00451f38(lVar8);
      *(undefined8 *)(lVar7 + 0x2a0 + uVar10 * 8) = 0;
    }
    func_0x0046eb00(lVar7 + uVar10 * 0x10 + 0x2da,0x10);
  }
  *(undefined1 *)(lVar9 + 0x68) = 3;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  return 1;
}

