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
 *  file-id: 0x380030:6b1e7e3c14
 *  --------------------------------------------------------------------------*/

bool FUN_00380030(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  long **pplStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  long lStack_b0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
/*  no support for modified copies  */
  undefined8 *puStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar5 = param_3;
  if (param_3 == (undefined8 *)0x0) {
LAB_0038009c:
    param_2 = (undefined8 *)func_0x0037fb8c(param_1,param_2);
    bVar1 = false;
    if (param_2 != (undefined8 *)0x0) {
      lVar2 = func_0x0037fc98(param_1,param_2);
      if (lVar2 == 0) {
        func_0x0046e958(param_2[1],0);
        func_0x0046e7ec(param_2[1],&DAT_003805f0,param_1);
        func_0x0046e40c(param_1[4],param_2);
        func_0x0046e088(param_2[1]);
        puVar5 = (undefined8 *)((long)&section_000000b8.reserved2 + 3);
/* watermarked copy - do not remove - github.com/pengussy */
        func_0x004743e4(param_2,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                       );
        goto LAB_0038015c;
      }
      *(undefined8 *)(lVar2 + 0x18) = param_2[4];
      *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) & 0xfc | 1;
      param_2[4] = param_2[4] + 1;
      bVar1 = true;
      puVar5 = param_3;
      unaff_x20 = param_2;
    }
    param_2 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return bVar1;
    }
  }
  else {
    uStack_70 = *param_3;
    uStack_68 = (undefined5)param_3[1];
    uStack_63 = (undefined3)*(undefined8 *)((long)param_3 + 0xd);
    uStack_60 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0xd) >> 0x18);
    puStack_50 = param_1 + 1;
    if ((0x14 < (byte)uStack_70) ||
       (lVar2 = func_0x0046e64c(param_1[3],&uStack_70), unaff_x20 = param_2, lVar2 == 0))
    goto LAB_0038009c;
LAB_0038015c:
    bVar1 = false;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return false;
    }
/* thanks for reading - discord.gg/sdkhDjTex */
  }
  auVar6 = ___stack_chk_fail(bVar1);
  puVar4 = auVar6._8_8_;
  puStack_78 = &DAT_0038017c;
  lStack_98 = *(long *)PTR____stack_chk_guard_01f20200;
  puStack_90 = param_2;
  puStack_88 = param_1;
  plStack_80 = (long *)((long)register0x00000008 + -0x10);
  if (puVar4 != (undefined8 *)0x0) {
    uStack_d0 = *puVar4;
    uStack_c8 = (undefined5)puVar4[1];
    uStack_c3 = (undefined3)*(undefined8 *)((long)puVar4 + 0xd);
    uStack_c0 = (undefined5)((ulong)*(undefined8 *)((long)puVar4 + 0xd) >> 0x18);
    lStack_b0 = auVar6._0_8_ + 8;
    if ((byte)uStack_d0 < 0x15) {
      lVar2 = func_0x0046e64c(*(undefined8 *)(auVar6._0_8_ + 0x18),&uStack_d0);
      bVar1 = false;
      if (lVar2 != 0) {
// WM - more drops soon - github.com/pengussy
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *(undefined8 *)(lVar2 + 0x18);
        }
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = *(undefined8 *)(*(long *)(lVar2 + 0x28) + 0x10);
        }
        bVar1 = true;
      }
      goto code_r0x00380204;
    }
  }
  bVar1 = false;
  param_4 = param_1;
  puVar5 = param_2;
code_r0x00380204:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_98) {
    return bVar1;
  }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  auVar6 = ___stack_chk_fail(bVar1);
  uStack_110 = auVar6._8_8_;
  lVar2 = auVar6._0_8_;
  puStack_d8 = &SUB_00380230;
  puStack_f0 = puVar5;
  puStack_e8 = param_4;
  pplStack_e0 = &plStack_80;
  lVar3 = func_0x0046e64c(*(undefined8 *)(lVar2 + 0x20),auStack_120);
  if (lVar3 != 0) {
    func_0x0046e958(*(undefined8 *)(lVar3 + 8),0);
    func_0x0046e7ec(*(undefined8 *)(lVar3 + 8),&DAT_003805f0,lVar2);
    func_0x0046e40c(*(undefined8 *)(lVar2 + 0x20),lVar3);
    func_0x0046e088(*(undefined8 *)(lVar3 + 8));
    func_0x004743e4(lVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                    ,0x103);
  }
  return lVar3 != 0;
}

