/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x36ec84:e745c4091a
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0036ec84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar1 = func_0x019ec218(param_2,"max_dgram_payload_len");
  if (lVar1 == 0) {
    lVar1 = 0;
    lVar2 = func_0x019ec218(param_2,"cur_cwnd_size");
  }
  else {
    if (*(int *)(lVar1 + 8) != 2) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x18) != 8) {
      return 0;
    }
    lVar1 = *(long *)(lVar1 + 0x10);
    lVar2 = func_0x019ec218(param_2,"cur_cwnd_size");
  }
  if (lVar2 == 0) {
    lVar2 = 0;
    lVar3 = func_0x019ec218(param_2,"min_cwnd_size");
/* wm:donate: donate/README.md */
  }
  else {
    if (*(int *)(lVar2 + 8) != 2) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x18) != 8) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    lVar3 = func_0x019ec218(param_2,"min_cwnd_size");
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    lVar4 = func_0x019ec218(param_2,"bytes_in_flight");
  }
  else {
    if (*(int *)(lVar3 + 8) != 2) {
      return 0;
    }
    if (*(long *)(lVar3 + 0x18) != 8) {
      return 0;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    lVar4 = func_0x019ec218(param_2,"bytes_in_flight");
/* wm:found on a paste site? it was re-uploaded illegally */
  }
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar5 = func_0x019ec218(param_2,"cur_state");
  }
  else {
    if (*(int *)(lVar4 + 8) != 2) {
      return 0;
    }
    if (*(long *)(lVar4 + 0x18) != 8) {
      return 0;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    lVar5 = func_0x019ec218(param_2,"cur_state");
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    if ((*(int *)(lVar5 + 8) != 2) || (*(long *)(lVar5 + 0x18) != 4)) {
      return 0;
    }
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x78) = lVar1;
  }
  if (lVar2 != 0) {
    *(long *)(param_1 + 0x80) = lVar2;
/* WM - no support for modified copies */
  }
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x88) = lVar3;
  }
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x90) = lVar4;
  }
  if (lVar5 != 0) {
    *(long *)(param_1 + 0x98) = lVar5;
  }
  if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  }
  if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  }
  if (*(undefined4 **)(param_1 + 0x98) != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar6 = 0x53;
      if (*(ulong *)(param_1 + 0x48) <= *(ulong *)(param_1 + 0x40)) {
        uVar6 = 0x41;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      }
    }
    else {
      uVar6 = 0x52;
    }
    **(undefined4 **)(param_1 + 0x98) = uVar6;
  }
  return 1;
}

