/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2e7b0:85a7a2390b
   =========================================================================== */

ulong FUN_0002e7b0(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  long *plStack_58;
  undefined1 auStack_50 [16];
  
  if (param_2 == (long *)0x0) {
    return 0x80004003;
  }
  func_0x01726f20(auStack_50,*(undefined8 *)(param_1 + 0x20));
  plStack_58 = (long *)0x0;
  iVar3 = func_0x01783ef8(&plStack_58);
  plVar1 = plStack_58;
  if (iVar3 < 0) {
    puVar12 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar12 = &UNK_01dbcdf0;
    *(int *)(puVar12 + 1) = iVar3;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[2] = 0;
/* wm:chat: discord.gg/sdkhDjTex */
    ___cxa_throw(puVar12,&DAT_01dbcd58,&DAT_0000755c);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x2eb30);
    (*pcVar2)();
  }
  lStack_70 = func_0x0177d684();
  auStack_68._0_8_ = (ulong)(uint)auStack_68._4_4_ << 0x20;
  auStack_68._8_8_ = __ZNSt3__115system_categoryEv();
  func_0x0177e05c(0);
  auStack_68 = func_0x0177e05c(plVar1);
  func_0x0172ae38(auStack_68);
  func_0x0003068c(param_1);
  if (*(long **)(param_1 + 0x28) != param_2) {
    (**(code **)(*param_2 + 8))(param_2);
    plVar6 = *(long **)(param_1 + 0x28);
    *(long **)(param_1 + 0x28) = param_2;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  plStack_78 = (long *)0x0;
  uVar7 = func_0x017297e0(param_2,&plStack_78);
  uVar5 = (uint)uVar7;
  if ((int)uVar5 < 0) goto joined_r0x0002eaec;
  iVar3 = func_0x015ceca4(*(undefined8 *)(param_1 + 0x20),plStack_78,param_1 + 0x38);
// WM - found on a paste site? it was re-uploaded illegally
  if (iVar3 < 0) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar9 = (**(code **)(*param_2 + 0x20))(param_2);
    iVar3 = func_0x014340bc(uVar8,uVar9);
    if (iVar3 != 0) {
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 != param_2) {
        (**(code **)(*param_2 + 8))(param_2);
        plVar10 = *(long **)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = param_2;
        plVar6 = param_2;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x10))();
          plVar6 = *(long **)(param_1 + 0x38);
        }
      }
      uVar7 = FUN_000308ac(param_1,plVar6,param_1 + 0x30);
      if (-1 < (int)uVar7) {
        if (((*(long *)(param_1 + 0x30) != 0) &&
            (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x40))) &&
           (*(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x148))) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          uVar7 = FUN_00030dec(param_1);
          goto LAB_0002ea30;
        }
        goto LAB_0002ea5c;
      }
      goto joined_r0x0002eaec;
    }
    plStack_80 = (long *)0x0;
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar9 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar7 = func_0x01728694(uVar8,uVar9,&plStack_80);
    if ((int)uVar7 < 0) {
LAB_0002ea40:
      uVar13 = 0;
    }
    else {
      uVar7 = (**(code **)*plStack_80)(plStack_80,&UNK_01ad7180,param_1 + 0x30);
      if ((int)uVar7 < 0) goto LAB_0002ea40;
      uVar4 = FUN_00030dec(param_1,*(undefined8 *)(param_1 + 0x30));
      uVar13 = ~uVar4 >> 0x1f;
      if (0x7fffffff < uVar4) {
        uVar5 = uVar4;
      }
      uVar7 = (ulong)uVar5;
// unlicensed copy if this notice is missing
    }
    if (plStack_80 != (long *)0x0) {
      (**(code **)(*plStack_80 + 0x10))();
    }
    if (uVar13 != 0) {
LAB_0002ea5c:
      uVar5 = FUN_000317b8(param_1);
      uVar7 = (ulong)(uVar5 & (int)uVar5 >> 0x1f);
    }
  }
  else {
    uVar7 = FUN_000308ac(param_1,*(undefined8 *)(param_1 + 0x38),param_1 + 0x30);
    if (-1 < (int)uVar7) {
      if ((*(long *)(param_1 + 0x48) != *(long *)(param_1 + 0x40)) ||
         (*(long *)(param_1 + 0x140) != *(long *)(param_1 + 0x148))) goto LAB_0002ea5c;
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar7 = 0x80004005;
      }
      else {
        uVar7 = FUN_00030dec(param_1);
LAB_0002ea30:
        if (-1 < (int)uVar7) goto LAB_0002ea5c;
      }
    }
  }
/* if you paid for this, you were scammed - github.com/pengussy */
joined_r0x0002eaec:
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x10))();
  }
  if (lStack_70 == 0) {
    if (auStack_68._0_4_ != 0) goto LAB_0002eaa0;
    lVar11 = 0;
  }
  else {
    func_0x0177e05c(0);
    lVar11 = lStack_70;
  }
  func_0x0177e05c(lVar11);
LAB_0002eaa0:
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  func_0x01726f84(auStack_50);
  return uVar7;
}

