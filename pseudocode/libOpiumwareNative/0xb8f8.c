/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xb8f8:228f5ffd4e
   =========================================================================== */

ulong FUN_0000b8f8(long param_1,long param_2,int *param_3,int *param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 *param_9)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined *puStack_78;
  int *piStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar4 = 0x8007000e;
  lStack_80 = param_2;
  func_0x01726f20(auStack_90,*(undefined8 *)(param_1 + 0x10));
  plVar6 = *(long **)(param_1 + 0x10);
  plVar1 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,0x58);
  if (plVar1 == (long *)0x0) goto LAB_0000bae0;
  *plVar1 = (long)&UNK_01dbd008;
  *(undefined4 *)(plVar1 + 1) = 0;
  plVar1[2] = (long)plVar6;
  (**(code **)(*plVar6 + 8))(plVar6);
  plVar1[6] = 0;
  plVar1[5] = 0;
  plVar1[4] = 0;
  plVar1[3] = 0;
  *(undefined4 *)(plVar1 + 7) = 0x3f800000;
  plVar1[9] = 0;
  plVar1[10] = 0;
  plVar1[8] = 0;
  (**(code **)(*plVar1 + 8))(plVar1);
  if ((lStack_80 == 0) ||
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
     (uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&lStack_80,1), -1 < (int)uVar4)) {
    uVar5 = 0;
    if (param_3 == (int *)0x0) {
LAB_0000ba28:
      if (param_4 == (int *)0x0) goto LAB_0000ba74;
LAB_0000ba38:
      if (*param_4 == 0) goto LAB_0000ba74;
      puStack_78 = &UNK_01ad72b4;
      piStack_70 = param_4;
      uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&puStack_78,2);
      if ((int)uVar4 < 0) goto LAB_0000bacc;
      uVar3 = 1;
    }
    else {
      if (*param_3 != 0) {
        puStack_78 = &UNK_01ad72a8;
        piStack_70 = param_3;
        uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1,&puStack_78,2);
        if ((int)uVar4 < 0) goto LAB_0000bacc;
        uVar5 = 1;
        goto LAB_0000ba28;
      }
      uVar5 = 0;
      if (param_4 != (int *)0x0) goto LAB_0000ba38;
LAB_0000ba74:
      uVar3 = 0;
    }
    if ((((param_5 == 0) || ((int)param_6 == 0)) ||
        (uVar4 = func_0x0000bf9c(plVar1,param_5,param_6,uVar5,uVar3), -1 < (int)uVar4)) &&
       (((param_7 == 0 || ((int)param_8 == 0)) ||
// WM - thanks for reading - discord.gg/sdkhDjTex
        (uVar4 = (**(code **)(*plVar1 + 0x38))(plVar1,param_7,param_8), -1 < (int)uVar4)))) {
      uVar4 = 0;
      *param_9 = plVar1;
      goto LAB_0000bae0;
    }
  }
LAB_0000bacc:
  (**(code **)(*plVar1 + 0x10))(plVar1);
LAB_0000bae0:
  while (func_0x01726f84(auStack_90), *(long *)PTR____stack_chk_guard_01f20200 != lStack_68) {
    auVar7 = ___stack_chk_fail();
    uVar5 = auVar7._0_8_;
    if (auVar7._8_4_ == 0) {
      do {
        __Unwind_Resume(uVar5);
        auVar7 = func_0x00006858(uVar5);
        uVar5 = auVar7._0_8_;
      } while (auVar7._8_4_ == 0);
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if (auVar7._8_4_ == 3) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      ___cxa_begin_catch(auVar7._0_8_);
      ___cxa_end_catch();
    }
    else {
      lVar2 = ___cxa_begin_catch(auVar7._0_8_);
      if (auVar7._8_4_ == 2) {
        uVar4 = (ulong)*(uint *)(lVar2 + 8);
        ___cxa_end_catch();
      }
      else {
        ___cxa_end_catch();
        uVar4 = 0x80004005;
      }
    }
  }
  return uVar4;
}
/* wm:keep the notice, keep the source honest */

