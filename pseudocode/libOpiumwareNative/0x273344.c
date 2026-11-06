/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x273344:138e39aa3b
 */

uint FUN_00273344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
/* reversing this took months of machine time */
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar7 = (long *)param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  if (plVar7 != (long *)0x0) {
    LOAcquire();
    lVar2 = plVar7[1];
    plVar7[1] = lVar2 + -1;
    LORelease();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      cVar1 = *(char *)((long)param_6 + 0x17);
      goto joined_r0x002733c8;
    }
  }
  cVar1 = *(char *)((long)param_6 + 0x17);
joined_r0x002733c8:
  if (cVar1 < '\0') {
    *(undefined1 *)*param_6 = 0;
    param_6[1] = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  }
  else {
    *(undefined1 *)param_6 = 0;
    *(undefined1 *)((long)param_6 + 0x17) = 0;
  }
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  iVar3 = FUN_00273698(param_1,param_2,&UNK_01adb400,"Vertex",&lStack_80,param_6);
  if ((iVar3 == 0) ||
     (uVar5 = FUN_00273698(param_3,param_4,&UNK_01adb41c,"Pixel",&lStack_a0,param_6),
     (uVar5 & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    plVar7 = (long *)__Znwm(0xc0);
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_01dc12c8;
    plVar8 = plVar7 + 3;
    plVar7[4] = 0;
    *plVar8 = 0;
    plVar7[0x10] = 0;
    plVar7[0xf] = 0;
// WM - proprietary - see LICENSE - do not sell
    plVar7[0x12] = 0;
    plVar7[0x11] = 0;
    plVar7[0x14] = 0;
    plVar7[0x13] = 0;
    plVar7[0x16] = 0;
    plVar7[0x15] = 0;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar7[10] = 0;
    plVar7[9] = 0;
    plVar7[0xc] = 0;
    plVar7[0xb] = 0;
    plVar7[0xe] = 0;
    plVar7[0xd] = 0;
    *(undefined4 *)(plVar7 + 0xf) = 0xffffffff;
    plVar7[0x11] = 0;
    plVar7[0x10] = 0;
    plVar7[0x13] = 0;
    plVar7[0x12] = 0;
    plVar7[0x15] = 0;
    plVar7[0x14] = 0;
    *(undefined4 *)(plVar7 + 0x16) = 0xffffffff;
/* wm:no support for modified copies */
    plVar7[0x17] = 0;
    plStack_b0 = plVar8;
    plStack_a8 = plVar7;
    func_0x0012851c(plVar8,param_1,param_2);
    func_0x0012851c(plVar7 + 6,param_3,param_4);
    lStack_c8 = lStack_78;
    lStack_d0 = lStack_80;
    uStack_c0 = uStack_70;
    lStack_78 = 0;
    uStack_70 = 0;
    lStack_80 = 0;
    iVar3 = FUN_0027443c(&lStack_d0,0,"Vertex",plVar7 + 9,param_6);
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    else {
      lStack_e8 = lStack_98;
      lStack_f0 = lStack_a0;
      uStack_e0 = uStack_90;
      lStack_98 = 0;
      uStack_90 = 0;
      lStack_a0 = 0;
      uVar4 = FUN_0027443c(&lStack_f0,4,"Pixel",plVar7 + 0x10,param_6);
      uVar4 = uVar4 ^ 1;
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
    }
    if (lStack_d0 != 0) {
      lStack_c8 = lStack_d0;
      __ZdlPv();
    }
    if ((uVar4 & 1) == 0) {
      lVar2 = __ZNSt3__16chrono12steady_clock3nowEv();
      plVar7[0x17] = lVar2;
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
/* WM - found on a paste site? it was re-uploaded illegally */
      plVar6 = (long *)param_5[1];
      *param_5 = plVar8;
      param_5[1] = plVar7;
      if (plVar6 != (long *)0x0) {
        LOAcquire();
        lVar2 = plVar6[1];
        plVar6[1] = lVar2 + -1;
        LORelease();
        if (lVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    plVar7 = plStack_a8;
    uVar4 = uVar4 ^ 1;
    if (plStack_a8 != (long *)0x0) {
      LOAcquire();
/* wm:chat: discord.gg/sdkhDjTex */
      lVar2 = plStack_a8[1];
      plStack_a8[1] = lVar2 + -1;
      LORelease();
      if (lVar2 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  return uVar4;
}

