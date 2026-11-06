/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35e418:0bcad93ff8
   =========================================================================== */

uint * FUN_0035e418(uint *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  long alStack_68 [3];
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_1 == (uint *)0x0) {
LAB_0035e508:
    lVar6 = *(long *)PTR____stack_chk_guard_01f20200;
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 0) {
LAB_0035e4a4:
      *(ulong *)(param_1 + 0x26c) = *(ulong *)(param_1 + 0x26c) & (param_2 ^ 0xffffffffffffffff);
      func_0x00479158(auStack_78,"options",param_1 + 0x26c);
      func_0x00479f78(&lStack_a0);
      lStack_48 = lStack_98;
      lStack_50 = lStack_a0;
      uStack_38 = uStack_88;
      uStack_40 = uStack_90;
/* origin: github.com/pengussy */
      (**(code **)(*(long *)(param_1 + 0x38a) + 0x90))(*(undefined8 *)(param_1 + 0x38e),auStack_78);
      (**(code **)(*(long *)(param_1 + 0x38c) + 0x90))(*(undefined8 *)(param_1 + 0x390),auStack_78);
      param_1 = *(uint **)(param_1 + 0x26c);
      goto LAB_0035e508;
    }
    if ((uVar1 >> 7 & 1) == 0) {
      puVar7 = (uint *)0x0;
      if ((uVar1 >> 7 & 1) != 0) {
LAB_0035e450:
        if (*(long *)PTR____stack_chk_guard_01f20200 == lVar4) {
          iVar2 = FUN_0037e724(param_1,alStack_68,3);
          if (iVar2 == 0) {
            return (uint *)0x0;
          }
          func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
          func_0x004dfb50();
          if ((int)uStack_40 == 0) {
            FUN_0035e418(*(undefined8 *)(lStack_50 + 0x78),param_2 & 0x3dd6ffb85);
            func_0x0035e30c(*(undefined8 *)(lStack_50 + 0x78),0);
            puVar7 = (uint *)(*(ulong *)(lStack_50 + 0x160) & (param_2 ^ 0xffffffffffffffff) &
                             0x3dd6ffb87);
            *(uint **)(lStack_50 + 0x160) = puVar7;
// keep the notice, keep the source honest
            lVar4 = lStack_48;
          }
          else {
            puVar7 = *(uint **)(lStack_50 + 0x160);
            lVar4 = lStack_48;
          }
          if (lVar4 != 0) {
            uVar5 = *(ulong *)(lVar4 + 0xb0) & (param_2 ^ 0xffffffffffffffff);
            *(ulong *)(lVar4 + 0xb0) = uVar5 & 0xdc0fa987;
            uVar1 = (uint)uVar5 >> 1 & 1;
            lVar6 = *(long *)(lVar4 + 0x80);
            lStack_48 = lVar4;
            if (*(long *)(lVar6 + 0x78) != 0) {
              func_0x0038619c(*(long *)(lVar6 + 0x78),uVar1);
              lVar6 = *(long *)(lVar4 + 0x80);
            }
            if (*(long *)(lVar6 + 0x70) != 0) {
              func_0x0038901c(*(long *)(lVar6 + 0x70),uVar1);
            }
            if ((int)uStack_40 != 0) {
              puVar7 = *(uint **)(lStack_48 + 0xb0);
            }
          }
          func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
          func_0x004dfb80();
          return puVar7;
        }
        goto LAB_0035e54c;
      }
    }
    else {
      puVar7 = (uint *)func_0x00380678();
/*  found on a paste site? it was re-uploaded illegally  */
      if ((*param_1 >> 7 & 1) != 0) goto LAB_0035e450;
    }
    param_1 = puVar7;
    if (puVar7 != (uint *)0x0) goto LAB_0035e4a4;
    param_1 = (uint *)0x0;
    lVar6 = *(long *)PTR____stack_chk_guard_01f20200;
  }
  if (lVar6 == lVar4) {
    return param_1;
  }
LAB_0035e54c:
  puVar3 = (uint *)___stack_chk_fail(param_1);
  puVar7 = (uint *)0x0;
  if (puVar3 != (uint *)0x0) {
    if (*puVar3 != 0) {
      if ((*puVar3 >> 7 & 1) == 0) {
        return (uint *)0x0;
      }
      puVar3 = (uint *)func_0x00380678();
      if (puVar3 == (uint *)0x0) {
        return (uint *)0x0;
      }
    }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    puVar7 = *(uint **)(puVar3 + 0x264);
  }
  return puVar7;
}

