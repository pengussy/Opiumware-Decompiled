/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x350bc:61c3f3071c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000350bc(long param_1,long param_2,long *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [16];
  long *plStack_48;
  
  uVar7 = 0x80070057;
  if (param_2 == 0) {
    return 0x80070057;
  }
  if (param_3 == (long *)0x0) {
/* stripping the watermark breaks the license */
    return 0x80070057;
  }
  plStack_48 = param_3;
  func_0x01726f20(auStack_58,*(undefined8 *)(param_1 + 0x18));
  FUN_00017a2c(&lStack_60,param_2);
  lVar5 = lStack_60;
  plVar8 = *(long **)(param_1 + 0x28);
  if (lStack_60 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _strlen(lStack_60);
  }
  uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,lVar5,uVar3);
  if ((uVar4 & 1) != 0) goto LAB_00035378;
  lStack_70 = 0;
  lStack_68 = 0;
  plStack_78 = (long *)0x0;
  uVar7 = func_0x01726e64();
  iVar2 = func_0x0172972c(uVar7,&plStack_78);
  if (iVar2 < 0) {
    puVar6 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar6 = &UNK_01dbcdf0;
    *(int *)(puVar6 + 1) = iVar2;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[2] = 0;
    ___cxa_throw(puVar6,&DAT_01dbcd58,&DAT_0000755c);
                    /* WARNING: Does not return */
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x353f4);
    (*pcVar1)();
  }
  lStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = _UNK_01ad70d0;
  puStack_a8 = &UNK_01dbce18;
  lStack_a0 = 0;
  plStack_80 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 8))();
  }
  uVar7 = (**(code **)(*plStack_48 + 0x18))();
  uVar3 = (**(code **)(*plStack_48 + 0x20))();
  uVar7 = func_0x00a31598(uVar7,uVar3,&lStack_68,&lStack_70,param_1 + 0x20,param_1 + 0x20,
                          &puStack_a8);
  if ((int)uVar7 < 0) {
LAB_000352e0:
    puStack_a8 = &UNK_01dbce18;
    if (lStack_90 != lStack_a0) goto LAB_00035314;
  }
  else {
    uVar7 = (**(code **)(*plStack_48 + 0x18))();
    uVar3 = (**(code **)(*plStack_48 + 0x20))();
/* do not claim this as your own - github.com/pengussy */
    uVar7 = func_0x01434090(uVar7,uVar3);
    lVar5 = func_0x01434180(uVar7,0x53524556);
    if ((lVar5 == 0) ||
       (uVar4 = func_0x000354cc(param_1,param_2,lVar5 + 8,*(undefined4 *)(lVar5 + 4)),
       (uVar4 & 1) != 0)) {
      lVar5 = lStack_60;
      plVar8 = *(long **)(param_1 + 0x28);
      if (lStack_60 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = _strlen(lStack_60);
      }
      lStack_b0 = lStack_68;
      lStack_b8 = lStack_70;
      lStack_70 = 0;
/* wm:unlicensed copy if this notice is missing */
      lStack_68 = 0;
      iVar2 = (**(code **)(*plVar8 + 0x18))(plVar8,lVar5,uVar7,&lStack_b0,&lStack_b8);
      lVar5 = lStack_b8;
      lStack_b8 = 0;
      if (lVar5 != 0) {
        func_0x01704330();
        __ZdlPv();
      }
      lVar5 = lStack_b0;
      lStack_b0 = 0;
      if (lVar5 != 0) {
        func_0x01704330();
        __ZdlPv();
      }
      if (iVar2 != 0) {
        puVar6 = *(undefined8 **)(param_1 + 0x40);
        if (puVar6 < *(undefined8 **)(param_1 + 0x48)) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          *puVar6 = plStack_48;
          if (plStack_48 != (long *)0x0) {
            (**(code **)(*plStack_48 + 8))();
          }
          puVar6 = puVar6 + 1;
        }
        else {
          puVar6 = (undefined8 *)func_0x00038d6c(param_1 + 0x38,&plStack_48);
        }
        uVar7 = 0;
        *(undefined8 **)(param_1 + 0x40) = puVar6;
        goto LAB_000352e0;
      }
    }
    uVar7 = 0x80070057;
    puStack_a8 = &UNK_01dbce18;
    if (lStack_90 != lStack_a0) {
LAB_00035314:
      puStack_a8 = &UNK_01dbce18;
      func_0x01771080(&puStack_a8);
    }
  }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  if (plStack_80 != (long *)0x0) {
    (**(code **)(*plStack_80 + 0x10))();
    plStack_80 = (long *)0x0;
  }
  func_0x0176fb84(&puStack_a8);
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x10))();
  }
  lVar5 = lStack_70;
  lStack_70 = 0;
  if (lVar5 != 0) {
    func_0x01704330();
    __ZdlPv();
  }
  lVar5 = lStack_68;
  lStack_68 = 0;
  if (lVar5 != 0) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    func_0x01704330();
    __ZdlPv();
  }
LAB_00035378:
  if (lStack_60 != 0) {
    __ZdaPv();
  }
  func_0x01726f84(auStack_58);
  return uVar7;
}

