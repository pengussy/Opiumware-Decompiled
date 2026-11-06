/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x384328:7ab2b9edab
 */

void FUN_00384328(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,ulong param_9
                 )

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  uVar14 = param_9 & 0xff;
/*  keep the notice, keep the source honest  */
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar13 = param_1 + (param_4 & 0xffffffff) * 0xd0;
  uVar12 = (uint)param_4;
  lVar1 = lVar13;
  if (3 < uVar12) {
    lVar1 = 0;
  }
  lVar8 = func_0x003859d8(param_5);
  if ((((1 < param_9._4_4_ || 1 < (byte)param_9) || lVar1 == 0) || lVar8 == 0) ||
     ((uVar12 != 3 && ((byte)param_9 != 0)))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,0xd9,"ossl_qrl_enc_level_set_provide_secret");
    puVar11 = &UNK_00080106;
    goto LAB_003843e0;
  }
  if ((uVar12 == 0) && (*(char *)(lVar13 + 0x68) == '\x01')) {
    func_0x019e4814(param_1,0);
    *(undefined1 *)(lVar13 + 0x68) = 0;
  }
  else if (*(char *)(lVar13 + 0x68) != '\0') {
// WM - watermarked copy - do not remove
    func_0x004464bc();
    uVar9 = 0xea;
    goto LAB_0038460c;
  }
  uVar2 = uVar14;
  if (param_9._4_4_ != 0) {
    uVar2 = 0;
  }
  iVar5 = func_0x00385ac8(param_5);
  if (iVar5 == 0) goto LAB_003845f4;
  lVar10 = param_6;
  if ((param_6 == 0) && (lVar10 = func_0x0044fbe0(param_2,lVar8,param_3), lVar10 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,0xf8,"ossl_qrl_enc_level_set_provide_secret");
    puVar11 = &UNK_00080006;
    goto LAB_003843e0;
  }
  *(undefined8 *)(lVar13 + 0x40) = param_2;
  *(undefined8 *)(lVar13 + 0x48) = param_3;
  *(long *)(lVar1 + 0x28) = lVar10;
  *(int *)(lVar1 + 0x60) = (int)param_5;
  uVar6 = func_0x00385a78(param_5);
  *(undefined4 *)(lVar13 + 100) = uVar6;
  *(ulong *)(lVar13 + 0x50) = uVar14;
  *(undefined8 *)(lVar13 + 0x58) = 0;
/* wm:stripping the watermark breaks the license */
  *(char *)(lVar13 + 0x69) = (char)(param_9 >> 0x20);
  iVar7 = FUN_0036c144(param_2,param_3,lVar10,param_7,"quic hpquic kuquic ivquic key",7,0,0,
                       auStack_f0,iVar5,1);
  if ((iVar7 == 0) || (iVar7 = func_0x003847ec(param_1,param_4,uVar2,param_7,param_8), iVar7 == 0))
  {
    bVar4 = false;
    bVar15 = true;
  }
  else {
    if (uVar12 == 3) {
      puVar3 = auStack_b0;
      if (param_9._4_4_ != 0) {
        puVar3 = (undefined1 *)(lVar13 + 0x8a);
      }
      iVar7 = FUN_0036c144(param_2,param_3,lVar10,param_7,"quic kuquic ivquic key",7,0,0,puVar3,
                           param_8,1);
      if (iVar7 != 0) {
        if (param_9._4_4_ != 0) goto LAB_0038458c;
        iVar7 = func_0x003847ec(param_1,3,uVar14 ^ 1,auStack_b0,param_8);
        if (iVar7 == 0) goto LAB_003846b4;
        bVar4 = true;
        iVar7 = FUN_0036c144(param_2,param_3,lVar10,auStack_b0,"quic kuquic ivquic key",7,0,0,
                             (undefined1 *)(lVar13 + 0x8a),param_8,1);
        if (iVar7 == 0) goto LAB_003846b8;
        goto LAB_00384590;
      }
LAB_003846b4:
      bVar4 = false;
    }
    else {
LAB_0038458c:
      bVar4 = false;
LAB_00384590:
      uVar9 = func_0x00385aa0(param_5);
      iVar5 = func_0x00391920(lVar13,param_2,param_3,uVar9,auStack_f0,iVar5);
// donate: donate/README.md
      if (iVar5 != 0) {
        func_0x0046eb00(auStack_f0,0x40);
        func_0x0046eb00(auStack_b0,0x40);
        uVar9 = 1;
        *(undefined1 *)(lVar13 + 0x68) = 1;
        if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_003845f0;
        return;
      }
    }
LAB_003846b8:
    bVar15 = false;
  }
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  func_0x0046eb00(auStack_f0,0x40);
  func_0x0046eb00(auStack_b0,0x40);
  func_0x0046eb00(lVar13 + 0x8a,0x40);
  if (bVar15) goto LAB_00384760;
  if (3 < uVar12) goto LAB_003847d8;
  if (*(byte *)(lVar13 + 0x68) - 1 < 2) {
    if ((uVar12 == 3) || (uVar2 == 0)) {
LAB_0038473c:
      if (*(long *)(lVar13 + 0x30 + uVar2 * 8) != 0) {
        func_0x00451f38();
        *(undefined8 *)(lVar13 + 0x30 + uVar2 * 8) = 0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      }
      func_0x0046eb00(lVar13 + uVar2 * 0x10 + 0x6a,0x10);
    }
  }
  else if ((*(byte *)(lVar13 + 0x68) == 3) &&
          (uVar2 == (*(ulong *)(param_1 + (param_4 & 0xffffffff) * 0xd0 + 0x50) & 1)))
  goto LAB_0038473c;
LAB_00384760:
  if ((bVar4) && (uVar12 < 4)) {
    uVar14 = uVar2 ^ 1;
    if (*(byte *)(lVar13 + 0x68) - 1 < 2) {
      if ((uVar12 != 3) && (uVar2 != 1)) goto LAB_003847d8;
    }
    else if ((*(byte *)(lVar13 + 0x68) != 3) ||
            (uVar14 != (*(ulong *)(param_1 + (param_4 & 0xffffffff) * 0xd0 + 0x50) & 1)))
    goto LAB_003847d8;
    if (*(long *)(lVar13 + 0x30 + uVar14 * 8) != 0) {
      func_0x00451f38();
      *(undefined8 *)(lVar13 + 0x30 + uVar14 * 8) = 0;
/* more drops soon - github.com/pengussy */
    }
    func_0x0046eb00(lVar13 + uVar14 * 0x10 + 0x6a,0x10);
  }
LAB_003847d8:
  if (param_6 == 0) {
    func_0x0044ed2c(lVar10);
  }
  while (uVar9 = 0, *(long *)PTR____stack_chk_guard_01f20200 != lStack_70) {
LAB_003845f0:
    ___stack_chk_fail(uVar9);
LAB_003845f4:
    func_0x004464bc();
    uVar9 = 0xf1;
LAB_0038460c:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_shared.c"
                    ,uVar9,"ossl_qrl_enc_level_set_provide_secret");
    puVar11 = &UNK_000c0103;
LAB_003843e0:
    func_0x004466b0(0x14,puVar11,0);
  }
  return;
}

