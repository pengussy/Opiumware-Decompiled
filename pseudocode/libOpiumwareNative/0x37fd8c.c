/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37fd8c:02cef19e9f
   =========================================================================== */

ulong FUN_0037fd8c(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  long *plStack_170;
  long *plStack_168;
  long ***ppplStack_160;
  code *pcStack_158;
/* proprietary - see LICENSE - do not sell */
  undefined8 uStack_150;
  undefined5 uStack_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  long lStack_130;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  long **pplStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  long *plStack_d0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined8 *puStack_60;
  long lStack_48;
/* stripping the watermark breaks the license */
  
  plVar1 = (long *)((long)register0x00000008 + -0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar8 = param_3;
  plVar10 = param_4;
  lVar2 = FUN_0037fb8c();
  uVar3 = 0;
  if (lVar2 == 0) goto LAB_0037fffc;
  if ((int)param_3 == 1) {
    if (*(ulong *)(lVar2 + 0x20) != 0) goto LAB_0037fde8;
LAB_0037fdf0:
    plVar8 = param_4;
    uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
    if ((int)uVar3 != 0) {
      puVar7 = param_1 + 1;
      lStack_80 = *param_4;
      uStack_78 = (undefined5)param_4[1];
      uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
      uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
      puStack_60 = puVar7;
      lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
      if (lVar4 != 0) {
        plVar8 = param_4;
        uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
        if ((int)uVar3 == 0) goto LAB_0037fffc;
        lStack_80 = *param_4;
        uStack_78 = (undefined5)param_4[1];
        uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
        uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
        puStack_60 = puVar7;
        lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
/* donate: donate/README.md - github.com/pengussy */
        if (lVar4 != 0) {
          plVar8 = param_4;
          uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
          if ((int)uVar3 == 0) goto LAB_0037fffc;
          lStack_80 = *param_4;
          uStack_78 = (undefined5)param_4[1];
          uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
          puStack_60 = puVar7;
          lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
          if (lVar4 != 0) {
            plVar8 = param_4;
            uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
            if ((int)uVar3 == 0) goto LAB_0037fffc;
            lStack_80 = *param_4;
            uStack_78 = (undefined5)param_4[1];
            uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
// WM - reversing this took months of machine time
            uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
            puStack_60 = puVar7;
            lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
            if (lVar4 != 0) {
              plVar8 = param_4;
              uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
              if ((int)uVar3 == 0) goto LAB_0037fffc;
              lStack_80 = *param_4;
              uStack_78 = (undefined5)param_4[1];
              uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
              uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
              puStack_60 = puVar7;
              lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
              if (lVar4 != 0) {
                plVar8 = param_4;
                uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
                if ((int)uVar3 == 0) goto LAB_0037fffc;
                lStack_80 = *param_4;
                uStack_78 = (undefined5)param_4[1];
                uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
                uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
                puStack_60 = puVar7;
                lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
                if (lVar4 != 0) {
                  plVar8 = param_4;
                  uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
/* WM - found on a paste site? it was re-uploaded illegally */
                  if ((int)uVar3 == 0) goto LAB_0037fffc;
                  lStack_80 = *param_4;
                  uStack_78 = (undefined5)param_4[1];
                  uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
                  uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
                  puStack_60 = puVar7;
                  lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
                  if (lVar4 != 0) {
                    plVar8 = param_4;
                    uVar3 = FUN_0038ea8c(*param_1,param_1[5]);
                    if ((int)uVar3 == 0) goto LAB_0037fffc;
                    lStack_80 = *param_4;
                    uStack_78 = (undefined5)param_4[1];
                    uStack_73 = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
                    uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
                    puStack_60 = puVar7;
                    lVar4 = func_0x0046e64c(param_1[3],&lStack_80);
                    if (lVar4 != 0) goto LAB_0037fde8;
                  }
                }
              }
            }
          }
        }
/* WM - watermarked copy - do not remove */
      }
      plVar8 = param_4;
      lVar4 = FUN_0037fc98(param_1,lVar2);
      uVar3 = 0;
      if (lVar4 != 0) {
        uVar11 = *(undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar4 + 0x18) = uVar11;
        *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) & 0xfc | (byte)param_3;
        if (param_5 != (undefined8 *)0x0) {
          *param_5 = uVar11;
        }
        *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + 1;
        uVar3 = 1;
      }
    }
  }
/* unlicensed copy if this notice is missing - github.com/pengussy */
  else {
    if (*(ulong *)(lVar2 + 0x20) >> 0x3e == 0) goto LAB_0037fdf0;
LAB_0037fde8:
    uVar3 = 0;
  }
LAB_0037fffc:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return uVar3;
  }
  auVar12 = ___stack_chk_fail(uVar3);
  plVar6 = auVar12._8_8_;
  plVar5 = auVar12._0_8_;
  pcStack_88 = FUN_00380030;
  lStack_b8 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar9 = plVar8;
  puStack_b0 = param_1;
  plStack_a8 = param_4;
  plStack_a0 = param_3;
  puStack_98 = param_5;
// WM - keep the notice, keep the source honest
  plStack_90 = plVar1;
  if (plVar8 == (long *)0x0) {
LAB_0038009c:
    plVar6 = (long *)FUN_0037fb8c(plVar5,plVar6);
    uVar3 = 0;
    if (plVar6 != (long *)0x0) {
      lVar2 = FUN_0037fc98(plVar5,plVar6);
      if (lVar2 == 0) {
        func_0x0046e958(plVar6[1],0);
        func_0x0046e7ec(plVar6[1],FUN_003805f0,plVar5);
        func_0x0046e40c(plVar5[4],plVar6);
        func_0x0046e088(plVar6[1]);
        plVar9 = (long *)((long)&section_000000b8.reserved2 + 3);
        func_0x004743e4(plVar6,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                       );
        goto LAB_0038015c;
      }
      *(long *)(lVar2 + 0x18) = plVar6[4];
      *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) & 0xfc | 1;
      plVar6[4] = plVar6[4] + 1;
      uVar3 = 1;
      plVar9 = plVar8;
      param_3 = plVar6;
    }
    plVar6 = param_3;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b8) {
      return uVar3;
    }
  }
  else {
/* no support for modified copies - github.com/pengussy */
    lStack_f0 = *plVar8;
    uStack_e8 = (undefined5)plVar8[1];
    uStack_e3 = (undefined3)*(undefined8 *)((long)plVar8 + 0xd);
    uStack_e0 = (undefined5)((ulong)*(undefined8 *)((long)plVar8 + 0xd) >> 0x18);
    plStack_d0 = plVar5 + 1;
    if ((0x14 < (byte)lStack_f0) ||
       (lVar2 = func_0x0046e64c(plVar5[3],&lStack_f0), param_3 = plVar6, lVar2 == 0))
    goto LAB_0038009c;
LAB_0038015c:
    uVar3 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b8) {
      return 0;
    }
  }
  auVar12 = ___stack_chk_fail(uVar3);
  puVar7 = auVar12._8_8_;
  puStack_f8 = &SUB_0038017c;
  lStack_118 = *(long *)PTR____stack_chk_guard_01f20200;
  plStack_110 = plVar6;
  plStack_108 = plVar5;
  pplStack_100 = &plStack_90;
  if (puVar7 != (undefined8 *)0x0) {
    uStack_150 = *puVar7;
    uStack_148 = (undefined5)puVar7[1];
    uStack_143 = (undefined3)*(undefined8 *)((long)puVar7 + 0xd);
    uStack_140 = (undefined5)((ulong)*(undefined8 *)((long)puVar7 + 0xd) >> 0x18);
    lStack_130 = auVar12._0_8_ + 8;
    if ((byte)uStack_150 < 0x15) {
      lVar2 = func_0x0046e64c(*(undefined8 *)(auVar12._0_8_ + 0x18),&uStack_150);
      uVar3 = 0;
      if (lVar2 != 0) {
/* WM - no support for modified copies */
        if (plVar9 != (long *)0x0) {
          *plVar9 = *(long *)(lVar2 + 0x18);
        }
        if (plVar10 != (long *)0x0) {
          *plVar10 = *(long *)(*(long *)(lVar2 + 0x28) + 0x10);
        }
        uVar3 = 1;
      }
      goto code_r0x00380204;
    }
  }
  uVar3 = 0;
  plVar10 = plVar5;
  plVar9 = plVar6;
code_r0x00380204:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_118) {
    return uVar3;
  }
  auVar12 = ___stack_chk_fail(uVar3);
  uStack_190 = auVar12._8_8_;
/* do not claim this as your own - github.com/pengussy */
  lVar2 = auVar12._0_8_;
  pcStack_158 = FUN_00380230;
  plStack_170 = plVar9;
  plStack_168 = plVar10;
  ppplStack_160 = &pplStack_100;
  lVar4 = func_0x0046e64c(*(undefined8 *)(lVar2 + 0x20),auStack_1a0);
  if (lVar4 != 0) {
    func_0x0046e958(*(undefined8 *)(lVar4 + 8),0);
    func_0x0046e7ec(*(undefined8 *)(lVar4 + 8),FUN_003805f0,lVar2);
    func_0x0046e40c(*(undefined8 *)(lVar2 + 0x20),lVar4);
    func_0x0046e088(*(undefined8 *)(lVar4 + 8));
    func_0x004743e4(lVar4,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_lcidm.c"
                    ,0x103);
  }
  return (ulong)(lVar4 != 0);
}

