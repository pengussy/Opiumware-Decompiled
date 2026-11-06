/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x371c14:ea1c744add
   =========================================================================== */

void FUN_00371c14(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar2 = func_0x019e3870(param_1,7,"recovery","packet_lost","recovery:packet_lost");
  if (iVar2 == 0) {
    return;
  }
  func_0x003717a0(param_1,"header");
  if (*(byte *)(param_2 + 0xf) - 1 < 6) {
    pcVar4 = *(char **)(&UNK_01dc68c8 + ((ulong)(*(byte *)(param_2 + 0xf) - 1) & 0xff) * 8);
  }
  else {
    pcVar4 = "unknown";
  }
  func_0x00371808(param_1,"packet_type",pcVar4);
  if ((*(byte *)(param_2 + 0xf) & 0xfd) != 4) {
    func_0x00371880(param_1,"packet_number",*param_2);
  }
  func_0x003717cc(param_1);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    uVar3 = func_0x00371954();
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    uVar3 = func_0x0037192c(uVar3,&UNK_01c33f03);
    if (*(int *)(param_1 + 0xf4) == 0) {
      func_0x0037195c(uVar3,*(ulong *)(param_1 + 0x88) / 1000000);
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
/* wm:stripping the watermark breaks the license */

