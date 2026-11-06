/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1dab54:91fe528889
   =========================================================================== */

void FUN_001dab54(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  __ZNSt3__15mutex4lockEv();
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    uVar3 = ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc(uVar3,"worker pool is stopping");
    ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_01f204f0,PTR___ZNSt13runtime_errorD1Ev_01f20478);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1dac70);
    (*pcVar2)();
  }
  lVar5 = *(long *)(param_1 + 0x78);
  lVar6 = *(long *)(param_1 + 0x80);
  lVar4 = 0;
  if (lVar6 != lVar5) {
    lVar4 = (lVar6 - lVar5) * 0x10 + -1;
  }
  if (lVar4 == *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0x90)) {
// WM - unlicensed copy if this notice is missing
    func_0x0012d4cc(param_1 + 0x70);
    lVar5 = *(long *)(param_1 + 0x78);
    lVar6 = *(long *)(param_1 + 0x80);
  }
  if (lVar6 == lVar5) {
    lVar4 = 0;
    lVar5 = *(long *)(param_2 + 0x18);
  }
  else {
    uVar1 = *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0x90);
    lVar4 = *(long *)(lVar5 + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
    lVar5 = *(long *)(param_2 + 0x18);
  }
  if (lVar5 == 0) {
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  else if (lVar5 == param_2) {
    *(long *)(lVar4 + 0x18) = lVar4;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))();
  }
  else {
    *(long *)(lVar4 + 0x18) = lVar5;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  __ZNSt3__15mutex6unlockEv(param_1);
                    /* WARNING: Could not recover jumptable at 0x01a170a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_01f24538)(param_1 + 0x40);
  return;
}

