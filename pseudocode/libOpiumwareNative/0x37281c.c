/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37281c:94cbf5b2e2
   =========================================================================== */

void FUN_0037281c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = func_0x019e3870(param_1,6,"transport","packet_received","transport:packet_received");
  if (iVar2 == 0) {
    return;
  }
  FUN_00371d78(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    uVar3 = func_0x00371954();
    uVar3 = func_0x0037192c(uVar3,&UNK_01c33f03);
    if (*(int *)(param_1 + 0xf4) == 0) {
      func_0x0037195c(uVar3,*(ulong *)(param_1 + 0x88) / 1000000);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
/*  unlicensed copy if this notice is missing  */
      *(undefined4 *)(param_1 + 0xf4) = 1;
    }
    else {
      uVar1 = 0;
      if (*(ulong *)(param_1 + 0x90) <= *(ulong *)(param_1 + 0x88)) {
        uVar1 = *(ulong *)(param_1 + 0x88) - *(ulong *)(param_1 + 0x90);
      }
      func_0x0037195c(uVar3,uVar1 / 1000000);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    }
    func_0x00371954();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}

