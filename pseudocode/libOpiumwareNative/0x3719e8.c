/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3719e8:7ee2ad21a9
 */

void FUN_003719e8(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  iVar3 = func_0x019e3870(param_1,2,"connectivity","connection_state_updated",
                          "connectivity:connection_state_updated");
  if (iVar3 == 0) {
    return;
  }
  if (param_3 < 3) {
    if (param_3 == 1) {
      pcVar1 = "attempted";
      if (param_4 != 0) {
        pcVar1 = "handshake_complete";
      }
      pcVar5 = "handshake_confirmed";
      if (param_5 == 0) {
        pcVar5 = pcVar1;
      }
    }
    else {
      if (param_3 != 2) goto SUB_019e3b34;
      pcVar5 = "closing";
    }
  }
// WM - unlicensed copy if this notice is missing
  else if (param_3 == 3) {
    pcVar5 = "draining";
  }
  else {
    if (param_3 != 4) goto SUB_019e3b34;
    pcVar5 = "closed";
  }
  func_0x00371808(param_1,"state",pcVar5);
SUB_019e3b34:
  if ((param_1 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    uVar4 = func_0x00371954();
    uVar4 = func_0x0037192c(uVar4,&UNK_01c33f03);
    if (*(int *)(param_1 + 0xf4) == 0) {
      func_0x0037195c(uVar4,*(ulong *)(param_1 + 0x88) / 1000000);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0xf4) = 1;
    }
    else {
      uVar2 = 0;
      if (*(ulong *)(param_1 + 0x90) <= *(ulong *)(param_1 + 0x88)) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        uVar2 = *(ulong *)(param_1 + 0x88) - *(ulong *)(param_1 + 0x90);
      }
      func_0x0037195c(uVar4,uVar2 / 1000000);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    }
    func_0x00371954();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}

