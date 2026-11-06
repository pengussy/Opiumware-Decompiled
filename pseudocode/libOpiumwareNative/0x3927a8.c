/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3927a8:48c226c300
 */

/* WARNING: Possible PIC construction at 0x003928fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00392900) */
/* WARNING: Removing unreachable block (ram,0x00392904) */
/* WARNING: Removing unreachable block (ram,0x00392994) */
/* WARNING: Removing unreachable block (ram,0x003929ac) */
/* WARNING: Removing unreachable block (ram,0x00392a90) */
/* WARNING: Removing unreachable block (ram,0x003929bc) */
/* WARNING: Removing unreachable block (ram,0x00392aac) */
/* WARNING: Removing unreachable block (ram,0x003929d4) */
/* WARNING: Removing unreachable block (ram,0x00392ad8) */
/* WARNING: Removing unreachable block (ram,0x003929e4) */
/* WARNING: Removing unreachable block (ram,0x00392af4) */
/* WARNING: Removing unreachable block (ram,0x00392a0c) */
/* WARNING: Removing unreachable block (ram,0x00392b10) */
/* WARNING: Removing unreachable block (ram,0x00392a2c) */
/* WARNING: Removing unreachable block (ram,0x00392b2c) */
/* WARNING: Removing unreachable block (ram,0x00392a50) */
/* WARNING: Removing unreachable block (ram,0x00392b48) */
/* WM - unlicensed copy if this notice is missing */
/* WARNING: Removing unreachable block (ram,0x00392a68) */
/* WARNING: Removing unreachable block (ram,0x00392b64) */
/* WARNING: Removing unreachable block (ram,0x00392b7c) */
/* WARNING: Removing unreachable block (ram,0x00392a84) */
/* WARNING: Removing unreachable block (ram,0x00392b9c) */
/* WARNING: Removing unreachable block (ram,0x00392918) */
/* WARNING: Removing unreachable block (ram,0x00392930) */
/* WARNING: Removing unreachable block (ram,0x00392948) */
/* WARNING: Removing unreachable block (ram,0x00392950) */
/* WARNING: Removing unreachable block (ram,0x019ec0f0) */
/* WARNING: Removing unreachable block (ram,0x019ec100) */
/* WARNING: Removing unreachable block (ram,0x019ec110) */
/* WARNING: Removing unreachable block (ram,0x019ec120) */
/* WARNING: Removing unreachable block (ram,0x019ec130) */
/* WARNING: Removing unreachable block (ram,0x019ec140) */
/* WARNING: Removing unreachable block (ram,0x019ec150) */
/* WARNING: Removing unreachable block (ram,0x0039284c) */
/* WARNING: Removing unreachable block (ram,0x019ec164) */
/* WARNING: Removing unreachable block (ram,0x003f9824) */

ulong FUN_003927a8(undefined1 *param_1,undefined8 param_2,char *param_3,byte *param_4,long param_5)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x1;
  undefined1 *unaff_x20;
  undefined *puVar5;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
/* wm:unlicensed copy if this notice is missing */
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined1 auStack_160 [56];
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
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  uStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_128 = 0;
  uStack_168 = 0;
  if ((((*param_3 == '\x04') && (*(int *)(param_3 + 4) != 0)) && (0xf < *(ulong *)(param_3 + 0x48)))
     && (((param_5 != 0 && (param_4 != (byte *)0x0)) &&
         ((*(long *)(param_3 + 0x50) != 0 && (*param_4 < 0x15)))))) {
    uStack_e8 = *(undefined8 *)(param_3 + 0x38);
    uStack_f0 = *(undefined8 *)(param_3 + 0x30);
    uStack_e0 = *(undefined8 *)(param_3 + 0x40);
    uStack_108 = *(undefined8 *)(param_3 + 0x18);
    uStack_110 = *(undefined8 *)(param_3 + 0x10);
    uStack_f8 = *(undefined8 *)(param_3 + 0x28);
    uStack_100 = *(undefined8 *)(param_3 + 0x20);
    uStack_d0 = *(undefined8 *)(param_3 + 0x50);
    uStack_118 = *(undefined8 *)(param_3 + 8);
    uStack_120 = *(undefined8 *)param_3;
    uStack_d8 = 0;
    iVar2 = func_0x019ebb80(auStack_160,auStack_c8,0x80,0);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    if (iVar2 != 0) {
      uVar4 = (ulong)*param_4;
      unaff_x20 = auStack_160;
      puVar5 = (undefined *)0x392900;
      goto code_r0x019ec0a0;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                    ,0x381,"ossl_quic_calculate_retry_integrity_tag");
    uVar1 = 0x8000f;
    unaff_x20 = param_1;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                    ,0x373,"ossl_quic_calculate_retry_integrity_tag");
    uVar1 = 0x80106;
  }
  func_0x004466b0(0x14,uVar1,0);
  param_2 = 0;
  func_0x00451e8c(0);
  func_0x00451f38(0);
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
    return 0;
  }
  puVar5 = &DAT_00392ba8;
  ___stack_chk_fail();
  uVar4 = extraout_x1;
  param_1 = unaff_x20;
code_r0x019ec0a0:
  puStack_190 = param_1;
  uStack_188 = param_2;
  puStack_180 = auStack_c8 + 0xb8;
  puStack_178 = puVar5;
/*  origin: github.com/pengussy  */
  uVar3 = func_0x019eb850(unaff_x20,1,&puStack_198);
  if ((int)uVar3 != 0) {
    if (puStack_198 == (undefined1 *)0x0) {
      uVar3 = 1;
    }
    else {
      *puStack_198 = (char)uVar4;
      uVar3 = (ulong)(uVar4 >> 8 == 0);
    }
  }
  return uVar3;
}

