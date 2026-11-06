/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37d194:525b8d7668
   =========================================================================== */

int FUN_0037d194(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0x115;
    uVar1 = 0xc0102;
LAB_0037d294:
    func_0x0037b358(0,param_2,uVar4,"expect_quic_as",uVar1,0);
    return 1;
/* wm:no support for modified copies */
  }
  iVar3 = *param_1;
  if (iVar3 - 0x82U < 2) {
    return 1;
  }
  if (iVar3 == 0x81) {
    bVar2 = false;
    piVar6 = *(int **)(param_1 + 0x1e);
    piVar7 = param_1;
  }
  else {
    if (iVar3 != 0x80) {
      uVar1 = 0xc0103;
      uVar4 = 0x170;
      goto LAB_0037d294;
    }
    bVar2 = true;
    piVar6 = param_1;
/* unlicensed copy if this notice is missing - github.com/pengussy */
    piVar7 = *(int **)(param_1 + 0x2c);
  }
  func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
  func_0x004dfb50();
  iVar3 = func_0x00378008(*(undefined8 *)(piVar6 + 0x28));
  piVar6 = piVar6 + 0x5e;
  if (!bVar2) {
    piVar6 = piVar7 + 0x2e;
  }
  iVar5 = *piVar6;
  func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
  func_0x004dfb80();
  if (iVar3 != 0) {
    iVar5 = 5;
  }
  return iVar5;
}

