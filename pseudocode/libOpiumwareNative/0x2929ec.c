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
 *  file-id: 0x2929ec:4bdb0ec9d9
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_002929ec(long param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  piVar1 = (int *)(param_1 + 0x118);
  if ((*piVar1 == 3) && (0 < *(int *)(param_1 + 0x30c))) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x340);
/*  no support for modified copies  */
    lVar5 = __ZNSt3__16chrono12steady_clock3nowEv();
    lVar7 = *(long *)(param_1 + 0x380);
    iVar4 = *(int *)(param_1 + 0x30c);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x340);
    if (lVar5 - lVar7 <= (long)iVar4 * 1000000000) goto LAB_00292a80;
    iVar4 = *(int *)(param_1 + 0x330);
    if (iVar4 != 2) {
LAB_00292a74:
      FUN_0029256c(auStack_48,param_1,iVar4);
      goto LAB_00292a80;
    }
    if (*(char *)(param_1 + 0x310) == '\x01') {
      iVar4 = *(int *)(param_1 + 0x330);
      goto LAB_00292a74;
    }
    func_0x00292cd4(param_1,_UNK_01adc0c2,0x20972d8,0,0);
    iVar3 = *(int *)(param_1 + 0x30c);
    iVar4 = iVar3;
    if (*piVar1 != 3) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      iVar4 = 0;
    }
  }
  else {
LAB_00292a80:
    iVar3 = *(int *)(param_1 + 0x30c);
    iVar4 = iVar3;
    if (*piVar1 != 3) {
      iVar4 = 0;
    }
  }
  if (0 < iVar3) {
    lVar5 = __ZNSt3__16chrono12steady_clock3nowEv();
    auVar2 = SEXT816(lVar5 - *(long *)(param_1 + 0x380)) * SEXT816(-0x431bde82d7b634db);
    iVar4 = ((int)(auVar2._8_8_ >> 0x12) - (auVar2._12_4_ >> 0x1f)) +
            *(int *)(param_1 + 0x30c) * 1000;
  }
  if ((iVar4 < 1) && (iVar3 = func_0x00284918(*(undefined8 *)(param_1 + 0xd0)), iVar3 == 0)) {
    iVar4 = 0x14;
  }
  iVar3 = 100;
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    iVar3 = iVar4;
  }
  iVar4 = func_0x002848b8(*(undefined8 *)(param_1 + 0xd0),iVar3);
  if (iVar4 < 4) {
    if (iVar4 == 0) {
      uVar6 = func_0x0029307c(param_1);
      if ((uVar6 & 1) == 0) {
        return 1;
      }
      goto LAB_00292bb8;
    }
/* WM - watermarked copy - do not remove */
    if (iVar4 != 3) goto LAB_00292bb8;
    __ZNSt3__15mutex4lockEv(param_1 + 0xd8);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
  }
  else {
    if (iVar4 != 5) {
      if ((iVar4 == 4) && (uVar6 = func_0x00292e9c(param_1), (uVar6 & 1) == 0)) {
        return 2;
      }
      goto LAB_00292bb8;
    }
    __ZNSt3__15mutex4lockEv(param_1 + 0xd8);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0xd8);
LAB_00292bb8:
  if (*(int *)(param_1 + 0x118) == 0) {
    __ZNSt3__15mutex4lockEv(param_1 + 0x2c0);
    lVar5 = __ZNSt3__16chrono12steady_clock3nowEv();
    lVar7 = *(long *)(param_1 + 0x300);
    __ZNSt3__15mutex6unlockEv(param_1 + 0x2c0);
    if (300000000 < lVar5 - lVar7) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
      __ZNSt3__15mutex4lockEv(param_1 + 0xd8);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
      __ZNSt3__15mutex6unlockEv(param_1 + 0xd8);
      func_0x0029232c(param_1,1);
      return 0;
    }
  }
  return 0;
}
/* stripping the watermark breaks the license */

