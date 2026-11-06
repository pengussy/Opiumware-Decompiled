/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x371964:2df620e243
   =========================================================================== */

void FUN_00371964(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = func_0x019e3870(param_1,1,"connectivity","connection_started",
                          "connectivity:connection_started");
  if (iVar2 == 0) {
    return;
  }
  func_0x00371808(param_1,"protocol","quic");
  func_0x003718e8(param_1,"dst_cid",param_2 + 1,*param_2);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    uVar3 = func_0x00371954();
    uVar3 = func_0x0037192c(uVar3,&UNK_01c33f03);
    if (*(int *)(param_1 + 0xf4) == 0) {
      func_0x0037195c(uVar3,*(ulong *)(param_1 + 0x88) / 1000000);
/* WM - unlicensed copy if this notice is missing */
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
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

