/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x10ddb8:2301559abb
 */

/* WARNING: Possible PIC construction at 0x0010de44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010de48) */
/* WARNING: Removing unreachable block (ram,0x0010dfc0) */
/* WARNING: Removing unreachable block (ram,0x0010dfd8) */
/* WARNING: Removing unreachable block (ram,0x0010dfcc) */
/* WARNING: Removing unreachable block (ram,0x0010dfd0) */
/* WARNING: Removing unreachable block (ram,0x0010dfdc) */
/* WARNING: Removing unreachable block (ram,0x0010dfe8) */
/* WARNING: Removing unreachable block (ram,0x0010e020) */
/* WARNING: Removing unreachable block (ram,0x0010e048) */
/* WARNING: Removing unreachable block (ram,0x0010e05c) */
/* WARNING: Removing unreachable block (ram,0x0010e074) */
/* WARNING: Removing unreachable block (ram,0x0010e078) */
/* WARNING: Removing unreachable block (ram,0x0010e080) */
/* WARNING: Removing unreachable block (ram,0x0010e000) */
/* WARNING: Removing unreachable block (ram,0x0010de54) */
/* WARNING: Removing unreachable block (ram,0x0010de58) */
/* WARNING: Removing unreachable block (ram,0x0010de2c) */
/* WARNING: Removing unreachable block (ram,0x0010de74) */
/* WARNING: Removing unreachable block (ram,0x0010de78) */
/* WARNING: Removing unreachable block (ram,0x0010de30) */

bool FUN_0010ddb8(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
/* donate: donate/README.md */
  long lVar4;
  ulong uVar5;
  long lVar6;
  long alStack_88 [3];
  long *plStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_01f20200;
  FUN_001d8c90();
  plStack_70 = (long *)0x0;
  (*pcRam000000000206d638)();
  lVar2 = func_0x001e7bc4();
  __ZNSt3__15mutex4lockEv(lVar2 + 0x30);
  plVar1 = plStack_70;
  lVar6 = *(long *)(lVar2 + 0x28);
  if (lVar6 == 0) goto code_r0x0010e1c0;
  plVar3 = (long *)(*(long *)(*(long *)(lVar2 + 8) + (*(ulong *)(lVar2 + 0x20) >> 7) * 8) +
                   (*(ulong *)(lVar2 + 0x20) & 0x7f) * 0x20);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  plStack_70 = (long *)0x0;
  if (plVar1 == alStack_88) {
    lVar4 = 0x20;
code_r0x0010e0f8:
    (**(code **)(*plVar1 + lVar4))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar4 = 0x28;
    goto code_r0x0010e0f8;
  }
  plStack_70 = (long *)plVar3[3];
  if (plStack_70 == (long *)0x0) {
    plStack_70 = (long *)0x0;
  }
  else if (plStack_70 == plVar3) {
    plStack_70 = alStack_88;
    (**(code **)(*(long *)plVar3[3] + 0x18))((long *)plVar3[3],alStack_88);
  }
  else {
    plVar3[3] = 0;
  }
  uVar5 = *(ulong *)(lVar2 + 0x20);
  plVar1 = (long *)(*(long *)(*(long *)(lVar2 + 8) + (uVar5 >> 7) * 8) + (uVar5 & 0x7f) * 0x20);
  plVar3 = (long *)plVar1[3];
  if (plVar3 == plVar1) {
    lVar4 = 0x20;
code_r0x0010e174:
    (**(code **)(*plVar3 + lVar4))();
    uVar5 = *(ulong *)(lVar2 + 0x20);
  }
  else if (plVar3 != (long *)0x0) {
    lVar4 = 0x28;
    goto code_r0x0010e174;
// stripping the watermark breaks the license
  }
  *(ulong *)(lVar2 + 0x20) = uVar5 + 1;
  *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + -1;
  if (0xff < uVar5 + 1) {
    __ZdlPv(**(undefined8 **)(lVar2 + 8));
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 8;
    *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + -0x80;
  }
code_r0x0010e1c0:
  __ZNSt3__15mutex6unlockEv(lVar2 + 0x30);
  return lVar6 != 0;
}

