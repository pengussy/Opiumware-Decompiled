/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x21b04:76a3793037
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00021b04(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4,
                 undefined1 *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar4 = func_0x0172af08();
  lStack_90 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = _UNK_01ad70d0;
  puStack_a8 = &UNK_01dbce18;
  plStack_80 = param_3;
  if (param_3 != (long *)0x0) {
/* wm:keep the notice, keep the source honest */
    (**(code **)(*param_3 + 8))(param_3);
  }
  iVar3 = func_0x0172b4fc(uVar4,0x8000,param_1,param_2,&puStack_a8);
  if (iVar3 == 0) {
    *param_5 = 0;
    puStack_a8 = &UNK_01dbce18;
    if (lStack_90 != lStack_a0) {
LAB_00021cd4:
      puStack_a8 = &UNK_01dbce18;
      func_0x01771080(&puStack_a8);
    }
LAB_00021cdc:
    if (plStack_80 != (long *)0x0) {
      (**(code **)(*plStack_80 + 0x10))();
      plStack_80 = (long *)0x0;
    }
    func_0x0176fb84(&puStack_a8);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
      return;
    }
    iVar3 = ___stack_chk_fail();
  }
  else {
    plStack_b0 = (long *)0x0;
    iVar3 = (**(code **)*param_3)(param_3,&UNK_01ad7180,&plStack_b0);
    if (-1 < iVar3) {
      if (lStack_90 != lStack_a0) {
        func_0x01771080(&puStack_a8);
/* watermarked copy - do not remove */
      }
      uVar1 = *(undefined4 *)(param_2 + 0x478);
      uVar4 = (**(code **)(*plStack_b0 + 0x18))();
      uVar5 = (**(code **)(*plStack_b0 + 0x20))();
      func_0x00009284(&plStack_70,2,uVar1,uVar4,uVar5,0);
      iVar3 = func_0x00007c64(0x80070057,0,&plStack_70,1,&uStack_78);
      if (-1 < iVar3) {
        iVar3 = 0;
        *param_4 = uStack_78;
      }
      if (plStack_68 != (long *)0x0) {
        (**(code **)(*plStack_68 + 0x10))();
        plStack_68 = (long *)0x0;
      }
      if (plStack_70 != (long *)0x0) {
        (**(code **)(*plStack_70 + 0x10))();
      }
      if (iVar3 < 0) {
        puVar6 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar6 = &UNK_01dbcdf0;
        *(int *)(puVar6 + 1) = iVar3;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[2] = 0;
        ___cxa_throw(puVar6,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_00021da4;
      }
      *param_5 = 1;
      if (plStack_b0 != (long *)0x0) {
        (**(code **)(*plStack_b0 + 0x10))();
      }
      puStack_a8 = &UNK_01dbce18;
      if (lStack_90 != lStack_a0) goto LAB_00021cd4;
      goto LAB_00021cdc;
    }
  }
  puVar6 = (undefined8 *)___cxa_allocate_exception(0x28);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  *puVar6 = &UNK_01dbcdf0;
  *(int *)(puVar6 + 1) = iVar3;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = 0;
  ___cxa_throw(puVar6,&DAT_01dbcd58,&DAT_0000755c);
LAB_00021da4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x21da8);
  (*pcVar2)();
}

