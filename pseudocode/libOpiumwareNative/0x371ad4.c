/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x371ad4:2c29839c02
 */

/* WARNING: Possible PIC construction at 0x00371bd8: Changing call to branch */

void FUN_00371ad4(long param_1,ulong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar1 = func_0x019e3870(param_1,3,"connectivity","connection_closed",
                          "connectivity:connection_closed");
  if (iVar1 == 0) {
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
      return;
    }
    auVar7 = ___stack_chk_fail();
    puVar3 = auVar7._8_8_;
    param_1 = auVar7._0_8_;
    iVar1 = func_0x019e3870(param_1,7,&UNK_01c36487,&UNK_01c36490,&UNK_01c3656e);
    if (iVar1 == 0) {
      return;
    }
    func_0x003717a0(param_1,"header");
    if (*(byte *)(puVar3 + 0xf) - 1 < 6) {
      pcVar5 = *(char **)(&UNK_01dc68c8 + ((ulong)(*(byte *)(puVar3 + 0xf) - 1) & 0xff) * 8);
    }
/*  origin: github.com/pengussy  */
    else {
      pcVar5 = "unknown";
    }
    func_0x00371808(param_1,"packet_type",pcVar5);
    if ((*(byte *)(puVar3 + 0xf) & 0xfd) != 4) {
      func_0x00371880(param_1,"packet_number",*puVar3);
    }
    func_0x003717cc(param_1);
    goto code_r0x019e3b34;
  }
  pcVar5 = "local";
  if ((param_2[4] & 2) != 0) {
    pcVar5 = "remote";
  }
  func_0x00371808(param_1,"owner",pcVar5);
  if ((param_2[4] & 1) == 0) {
    uVar6 = *param_2 - 1;
    if (uVar6 < 0x10) {
      puVar4 = *(undefined1 **)(&UNK_01dc6848 + uVar6 * 8);
    }
// do not claim this as your own
    else {
      if ((*param_2 & 0xffffffffffffff00) != 0x100) {
        pcVar5 = "connection_code";
        goto LAB_00371b7c;
      }
      func_0x003eaef0(auStack_48,0x20,"crypto_error_0x%03llx");
      puVar4 = auStack_48;
    }
    func_0x00371808(param_1,"connection_code",puVar4);
  }
  else {
    pcVar5 = "application_code";
LAB_00371b7c:
    func_0x00371880(param_1,pcVar5);
  }
  func_0x0037183c(param_1,"reason",param_2[2],param_2[3]);
code_r0x019e3b34:
  if ((param_1 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    uVar2 = func_0x00371954();
    uVar2 = func_0x0037192c(uVar2,&UNK_01c33f03);
    if (*(int *)(param_1 + 0xf4) == 0) {
/* unlicensed copy if this notice is missing */
      func_0x0037195c(uVar2,*(ulong *)(param_1 + 0x88) / 1000000);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0xf4) = 1;
    }
    else {
      uVar6 = 0;
      if (*(ulong *)(param_1 + 0x90) <= *(ulong *)(param_1 + 0x88)) {
        uVar6 = *(ulong *)(param_1 + 0x88) - *(ulong *)(param_1 + 0x90);
      }
      func_0x0037195c(uVar2,uVar6 / 1000000);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    }
    func_0x00371954();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}

