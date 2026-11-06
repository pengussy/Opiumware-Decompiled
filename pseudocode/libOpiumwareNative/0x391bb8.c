/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x391bb8:4076b331b0
   =========================================================================== */

undefined8 FUN_00391bb8(undefined4 *param_1,undefined4 *param_2,ulong param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined1 auVar9 [16];
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
// WM - found on a paste site? it was re-uploaded illegally
  byte bStack_71;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_38;
  
  uStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_4c = 0;
  if (param_1[8] - 1 < 2) {
    if (param_3 < 0x10) {
      func_0x004464bc();
      uVar5 = 0x58;
LAB_00391c3c:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                      ,uVar5,"hdr_generate_mask");
      puVar6 = &UNK_00080106;
    }
    else {
      iVar4 = func_0x019e9b88(*(undefined8 *)(param_1 + 4),0,0,0,0,1);
      if ((iVar4 != 0) &&
         (iVar4 = func_0x00452688(*(undefined8 *)(param_1 + 4),&uStack_48,&uStack_4c,param_2,0x10),
         iVar4 != 0)) {
        *param_4 = uStack_48;
        *(undefined1 *)(param_4 + 1) = uStack_44;
        uVar5 = 1;
        puStack_68 = param_2;
        param_1 = param_4;
        goto LAB_00391d80;
      }
      func_0x004464bc();
      uVar5 = 0x5e;
      unaff_x19 = param_2;
      param_1 = param_4;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
LAB_00391d64:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                      ,uVar5,"hdr_generate_mask");
      puVar6 = &UNK_00080006;
      unaff_x20 = param_1;
    }
  }
  else {
    if (param_1[8] == 3) {
      if (0xf < param_3) {
        iVar4 = func_0x019e9b88(*(undefined8 *)(param_1 + 4),0,0,0,param_2,1);
        if ((iVar4 != 0) &&
           (iVar4 = func_0x00452688(*(undefined8 *)(param_1 + 4),param_4,&uStack_4c,&UNK_01ae6e12,5)
           , iVar4 != 0)) {
          uVar5 = 1;
          puStack_68 = param_4;
          goto LAB_00391d80;
        }
        func_0x004464bc();
        uVar5 = 0x6d;
        unaff_x19 = param_4;
        goto LAB_00391d64;
      }
      func_0x004464bc();
      uVar5 = 0x66;
      goto LAB_00391c3c;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_wire_pkt.c"
                    ,0x71,"hdr_generate_mask");
    puVar6 = &UNK_000c0103;
  }
  func_0x004466b0(0x14,puVar6,0);
  uVar5 = 0;
  puStack_68 = unaff_x19;
  param_1 = unaff_x20;
LAB_00391d80:
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_38) {
// no support for modified copies
    return uVar5;
  }
  auVar9 = ___stack_chk_fail(uVar5);
  puVar7 = auVar9._8_8_;
  puStack_58 = &DAT_00391db0;
  pbVar1 = (byte *)*puVar7;
  pbVar2 = (byte *)puVar7[3];
  puStack_70 = param_1;
  lStack_60 = (long)register0x00000008 + -0x10;
  uVar5 = FUN_00391bb8(auVar9._0_8_,puVar7[1],puVar7[2],&bStack_75);
  if ((int)uVar5 != 0) {
    bVar3 = *pbVar1;
    *pbVar2 = *pbVar2 ^ bStack_74;
    bVar8 = bVar3 & 3;
    if ((((bVar3 & 3) != 0) && (pbVar2[1] = pbVar2[1] ^ bStack_73, bVar8 != 1)) &&
       (pbVar2[2] = pbVar2[2] ^ bStack_72, bVar8 != 2)) {
      pbVar2[3] = pbVar2[3] ^ bStack_71;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    }
    bVar8 = 0x1f;
    if (0x7fffffff < (uint)(int)(char)*pbVar1) {
      bVar8 = 0xf;
    }
    *pbVar1 = bVar8 & bStack_75 ^ *pbVar1;
    uVar5 = 1;
  }
  return uVar5;
}

