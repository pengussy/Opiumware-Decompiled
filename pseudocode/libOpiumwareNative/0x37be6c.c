/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37be6c:d709292a0b
 */

undefined8 FUN_0037be6c(uint *param_1,ulong *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_1 == (uint *)0x0) {
    uVar5 = 0x115;
    uVar2 = 0xc0102;
  }
  else {
    if ((*param_1 & 0xfffffffc) == 0x80) {
      func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
      func_0x004dfb50();
      func_0x0037a47c(*(undefined8 *)(param_1 + 0x16));
      uVar3 = func_0x0037413c();
      if (uVar3 == 0xffffffffffffffff) {
        func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
        func_0x004dfb80();
        *param_3 = 1;
        *param_2 = (ulong)&UNK_000f4240;
        *(undefined4 *)(param_2 + 1) = 0;
        return 1;
      }
      uVar4 = func_0x0037a484();
      func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
      func_0x004dfb80();
      uVar1 = 0;
      if (uVar4 <= uVar3) {
        uVar1 = uVar3 - uVar4;
/* WM - proprietary - see LICENSE - do not sell */
      }
      uVar3 = uVar1 + 999;
      if (0xfffffffffffffc18 < uVar1) {
        uVar3 = 0xffffffffffffffff;
      }
      *param_2 = uVar3 / 1000000000;
      param_2[1] = (ulong)(uint)((int)uVar3 + (int)(uVar3 / 1000000000) * -1000000000) / 1000;
      *param_3 = 0;
      return 1;
    }
    uVar2 = 0xc0103;
    uVar5 = 0x170;
  }
  func_0x0037b358(0,param_2,uVar5,"expect_quic_as",uVar2,0);
  return 0;
}

