/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1094b0:8ed8d1b9b0
   =========================================================================== */

void FUN_001094b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long *plStack_68;
  
  if (param_1 != 0) {
    uStack_70 = 0x656a2bf7;
    iVar2 = func_0x0011ab1c(0x30);
    lVar4 = *(long *)(param_1 + iVar2);
    uStack_70 = 0x1c2c6684;
    iVar3 = func_0x0011ab1c(0x18);
    (**(code **)(lVar4 + iVar3))(&uStack_70,(long *)(param_1 + iVar2));
    __ZNSt3__15mutex4lockEv(0x1f26bf0);
    plVar1 = plRam0000000002097038;
    if (plRam0000000002097038 != (long *)0x0) {
      if (*plRam0000000002097038 == 0) {
/* chat: discord.gg/sdkhDjTex */
        plVar1 = (long *)0x0;
      }
      else {
        plVar1 = (long *)(*(long *)(*plRam0000000002097038 + -0x10) + (long)plRam0000000002097038);
      }
    }
    if (((CONCAT44(uStack_6c,uStack_70) != 0) && (plVar1 == (long *)CONCAT44(uStack_6c,uStack_70)))
       && (lRam0000000002097040 != 0)) {
      _puts("yo hi");
      uRam000000000208ed00 = uRam0000000001f26d30;
    }
    __ZNSt3__15mutex6unlockEv(0x1f26bf0);
    if (plStack_68 != (long *)0x0) {
      LOAcquire();
      lVar4 = plStack_68[1];
      plStack_68[1] = lVar4 + -1;
      LORelease();
      if (lVar4 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  (*pcRam0000000002097160)(param_1,param_2,param_3,param_4);
  return;
}

