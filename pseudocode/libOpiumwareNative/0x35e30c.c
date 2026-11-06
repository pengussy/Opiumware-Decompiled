/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35e30c:8c341f585f
   =========================================================================== */

uint * FUN_0035e30c(uint *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  uint *unaff_x19;
  uint *puVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar9 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [40];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
// chat: discord.gg/sdkhDjTex
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = auStack_78;
  uStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_1 == (uint *)0x0) {
LAB_0035e340:
    puVar8 = param_1;
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_28) {
      return param_1;
    }
  }
  else if ((*param_1 >> 7 & 1) == 0) {
    if (*param_1 != 0) {
      param_1 = (uint *)0x0;
      goto LAB_0035e340;
    }
    *(ulong *)(param_1 + 0x26c) = *(ulong *)(param_1 + 0x26c) | param_2;
    func_0x00479158(auStack_78,"options",param_1 + 0x26c);
    func_0x00479f78(&uStack_a0);
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    uStack_38 = uStack_88;
    uStack_40 = uStack_90;
    uStack_30 = uStack_80;
    (**(code **)(*(long *)(param_1 + 0x38a) + 0x90))(*(undefined8 *)(param_1 + 0x38e),auStack_78);
    (**(code **)(*(long *)(param_1 + 0x38c) + 0x90))(*(undefined8 *)(param_1 + 0x390),auStack_78);
    puVar8 = *(uint **)(param_1 + 0x26c);
    unaff_x19 = param_1;
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_28) {
      return *(uint **)(param_1 + 0x26c);
    }
  }
  else {
    puVar8 = param_1;
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_28) {
      uVar6 = 0;
      pcStack_a8 = unaff_x30;
      goto DAT_0037b8c4;
    }
  }
  auVar9 = ___stack_chk_fail(puVar8);
  uVar6 = auVar9._8_8_;
  param_1 = auVar9._0_8_;
  pcStack_a8 = FUN_0035e418;
  lStack_c8 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      if ((uVar2 >> 7 & 1) == 0) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar8 = (uint *)0x0;
      }
      else {
        puVar8 = (uint *)func_0x00380678();
        uVar2 = *param_1;
      }
      if ((uVar2 >> 7 & 1) != 0) {
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_c8) {
          param_2 = 0;
          register0x00000008 = (BADSPACEBASE *)&uStack_a0;
          unaff_x29 = puVar3 + 0x68;
DAT_0037b8c4:
          *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = pcStack_a8;
          iVar4 = FUN_0037e724(param_1,(undefined1 *)((long)register0x00000008 + -0x68),3);
          if (iVar4 == 0) {
            return (uint *)0x0;
          }
          func_0x002f78bc(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x68) + 0x58));
          func_0x004dfb50();
          if (*(int *)((long)register0x00000008 + -0x40) == 0) {
            FUN_0035e418(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x50) + 0x78),
                         uVar6 & 0x3dd6ffb85);
            FUN_0035e30c(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x50) + 0x78),
                         param_2 & 0x3dd6ffb85);
            lVar1 = *(long *)((long)register0x00000008 + -0x48);
            puVar8 = (uint *)((*(ulong *)(*(long *)((long)register0x00000008 + -0x50) + 0x160) &
                               (uVar6 ^ 0xffffffffffffffff) | param_2) & 0x3dd6ffb87);
            *(uint **)(*(long *)((long)register0x00000008 + -0x50) + 0x160) = puVar8;
          }
          else {
            lVar1 = *(long *)((long)register0x00000008 + -0x48);
// WM - chat: discord.gg/sdkhDjTex
            puVar8 = *(uint **)(*(long *)((long)register0x00000008 + -0x50) + 0x160);
          }
          if (lVar1 != 0) {
            param_2 = *(ulong *)(lVar1 + 0xb0) & (uVar6 ^ 0xffffffffffffffff) | param_2;
            *(ulong *)(lVar1 + 0xb0) = param_2 & 0xdc0fa987;
            uVar2 = (uint)param_2 >> 1 & 1;
            lVar7 = *(long *)(lVar1 + 0x80);
            if (*(long *)(lVar7 + 0x78) != 0) {
              func_0x0038619c(*(long *)(lVar7 + 0x78),uVar2);
              lVar7 = *(long *)(lVar1 + 0x80);
            }
            if (*(long *)(lVar7 + 0x70) != 0) {
              func_0x0038901c(*(long *)(lVar7 + 0x70),uVar2);
            }
            if (*(int *)((long)register0x00000008 + -0x40) != 0) {
              puVar8 = *(uint **)(*(long *)((long)register0x00000008 + -0x48) + 0xb0);
            }
          }
          func_0x002f78bc(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x68) + 0x58));
          func_0x004dfb80();
          return puVar8;
        }
        goto LAB_0035e54c;
      }
      param_1 = puVar8;
      if (puVar8 == (uint *)0x0) {
        param_1 = (uint *)0x0;
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_c8) {
          return (uint *)0x0;
        }
        goto LAB_0035e54c;
      }
    }
    *(ulong *)(param_1 + 0x26c) = *(ulong *)(param_1 + 0x26c) & (uVar6 ^ 0xffffffffffffffff);
    func_0x00479158(auStack_118,"options",param_1 + 0x26c);
    func_0x00479f78(&uStack_140);
    uStack_e8 = uStack_138;
    uStack_f0 = uStack_140;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
    uStack_d0 = uStack_120;
    (**(code **)(*(long *)(param_1 + 0x38a) + 0x90))(*(undefined8 *)(param_1 + 0x38e),auStack_118);
    (**(code **)(*(long *)(param_1 + 0x38c) + 0x90))(*(undefined8 *)(param_1 + 0x390),auStack_118);
    param_1 = *(uint **)(param_1 + 0x26c);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_c8) {
    return param_1;
  }
LAB_0035e54c:
  puVar5 = (uint *)___stack_chk_fail(param_1);
  puVar8 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      if ((*puVar5 >> 7 & 1) == 0) {
        return (uint *)0x0;
      }
      puVar5 = (uint *)func_0x00380678();
      if (puVar5 == (uint *)0x0) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        return (uint *)0x0;
      }
    }
    puVar8 = *(uint **)(puVar5 + 0x264);
  }
  return puVar8;
}

