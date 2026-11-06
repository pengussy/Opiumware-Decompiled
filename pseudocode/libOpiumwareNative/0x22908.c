/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x22908:092d21bb6f
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00022ab8) */

int FUN_00022908(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *****pppppuVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  int iStack_5c;
  undefined8 *****pppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  iStack_5c = 0;
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  iVar5 = func_0x000349b8();
  if (((iVar5 == 0) ||
      (func_0x00034a24(&UNK_01ad7fc0,&UNK_01ad7fd0,&plStack_68), plStack_68 == (long *)0x0)) &&
     (iVar5 = func_0x00034ca8(&UNK_01ad7fd0,&plStack_68), iVar5 < 0)) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar5;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022d04;
  }
  iVar5 = (**(code **)(*plStack_68 + 0x18))(plStack_68,param_1,3,&plStack_70);
  if (iVar5 < 0) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar5;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022d04;
  }
  iVar5 = (**(code **)(*plStack_70 + 0x18))(plStack_70,&iStack_5c);
  if (iVar5 < 0) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar5;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022d04;
  }
  if ((param_2 == 0) || (-1 < iStack_5c)) goto LAB_00022b90;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  iVar5 = (**(code **)(*plStack_70 + 0x28))(plStack_70,&plStack_78);
  if (iVar5 < 0) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar5;
    puVar10[3] = 0;
/* WM - if you paid for this, you were scammed */
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022d04;
  }
  iVar5 = func_0x0172875c(plStack_78,0,&plStack_80,0);
  if (iVar5 < 0) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar5;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022d04;
  }
/* wm:unlicensed copy if this notice is missing */
  lVar7 = (**(code **)(*plStack_80 + 0x30))();
  uVar8 = (**(code **)(*plStack_80 + 0x38))();
  uVar6 = func_0x0164d118(*(undefined8 *)(param_2 + 0x28),4,"root signature validation errors\r\n%0"
                          ,0x24);
  *(undefined4 *)(param_2 + 0x110) = 0;
  *(undefined4 *)(param_2 + 0x138) = uVar6;
  if (*(char *)(param_2 + 0x10f) < '\0') {
    **(undefined1 **)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0xf8) = 0;
    *(undefined1 *)(param_2 + 0x10f) = 0;
  }
  *(undefined8 *)(param_2 + 0x290) = *(undefined8 *)(param_2 + 0x288);
  lVar11 = *(long *)(param_2 + 0x300);
  lVar12 = *(long *)(param_2 + 0x308);
  if (lVar11 == lVar12) {
    *(long *)(param_2 + 0x308) = lVar11;
    *(undefined1 *)(param_2 + 0x13d) = 0;
/*  unlicensed copy if this notice is missing  */
    if (lVar7 == 0) goto LAB_00022ad4;
LAB_00022a80:
    if (0x7ffffffffffffff6 < uVar8) {
      func_0x0000aa50();
LAB_00022d04:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x22d08);
      (*pcVar4)();
    }
    if (uVar8 < 0x17) {
      uStack_48 = CONCAT17((char)uVar8,(undefined7)uStack_48);
      pppppuVar9 = &pppppuStack_58;
    }
    else {
      uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppppuVar9 = (undefined8 *****)__Znwm(uVar2);
      uStack_48 = uVar2 | 0x8000000000000000;
      pppppuStack_58 = pppppuVar9;
      uStack_50 = uVar8;
    }
    _memmove(pppppuVar9,lVar7,uVar8);
    *(undefined1 *)((long)pppppuVar9 + uVar8) = 0;
    cVar3 = *(char *)(param_2 + 0x15f);
  }
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  else {
    do {
      lVar12 = lVar12 + -0x38;
    } while (lVar12 != lVar11);
    *(undefined8 *)(param_2 + 0x308) = *(undefined8 *)(param_2 + 0x300);
    *(undefined1 *)(param_2 + 0x13d) = 0;
    if (lVar7 != 0) goto LAB_00022a80;
LAB_00022ad4:
    pppppuStack_58 = (undefined8 *****)0x0;
    uStack_50 = 0;
    uStack_48 = 0;
    cVar3 = *(char *)(param_2 + 0x15f);
  }
  if (cVar3 < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x148));
  }
  *(ulong *)(param_2 + 0x150) = uStack_50;
  *(undefined8 ******)(param_2 + 0x148) = pppppuStack_58;
  *(ulong *)(param_2 + 0x158) = uStack_48;
  *(undefined1 *)(param_2 + 0x13c) = 1;
  func_0x01649544(param_2,0);
  if (plStack_80 != (long *)0x0) {
    (**(code **)(*plStack_80 + 0x10))();
  }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x10))();
  }
LAB_00022b90:
  iVar5 = iStack_5c;
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 0x10))();
  }
  if (plStack_68 != (long *)0x0) {
    (**(code **)(*plStack_68 + 0x10))();
  }
  return iVar5;
}

