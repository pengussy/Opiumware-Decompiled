/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x890c:164a27f3a1
 */

undefined8 FUN_0000890c(long *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  long *plStack_70;
  long *plStack_68;
  int iStack_60;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (((int)param_3 == 0) ||
     (0xd < *(uint *)(param_1 + 2) || (1 << (ulong)(*(uint *)(param_1 + 2) & 0x1f) & 0x38e4U) == 0))
  {
    if ((long *)*param_1 == param_2) {
      return 0;
    }
    (**(code **)(*param_2 + 8))(param_2);
    plVar7 = (long *)*param_1;
    *param_1 = (long)param_2;
/*  origin: github.com/pengussy  */
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    (**(code **)(*plVar7 + 0x10))();
    return 0;
  }
  plStack_68 = (long *)0x0;
  uVar3 = (**(code **)*param_2)(param_2,&UNK_01ad7180,&plStack_68);
  plVar7 = plStack_68;
  if ((int)uVar3 < 0) {
    bVar9 = false;
    goto LAB_00008bbc;
  }
  plStack_70 = (long *)0x0;
  plStack_58 = (long *)0x0;
  iVar2 = (**(code **)*plStack_68)(plStack_68,&UNK_01ad7190,&plStack_58);
  if (iVar2 < 0) {
    uVar10 = 1;
  }
  else {
    uVar4 = (**(code **)(*plStack_58 + 0x28))(plStack_58,&cStack_59,&iStack_60);
    if ((-1 < (int)uVar4) && (uVar4 = 0x80070000, cStack_59 == '\x01')) {
      if (iStack_60 == 12000) {
        uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
        uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
        plStack_48 = (long *)0x0;
        uVar4 = func_0x0172871c(uVar5,uVar6,&UNK_00002ee0,&plStack_48);
        if ((int)uVar4 < 0) {
          if (plStack_48 != (long *)0x0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
          }
        }
        else {
          if ((int)param_3 == 0xfde9) {
            plStack_50 = (long *)0x0;
// thanks for reading - discord.gg/sdkhDjTex
            iVar2 = func_0x0172875c(plStack_48,0,&plStack_50,0);
            if (iVar2 < 0) {
              puVar8 = (undefined8 *)___cxa_allocate_exception(0x28);
              *puVar8 = &UNK_01dbcdf0;
              *(int *)(puVar8 + 1) = iVar2;
              puVar8[3] = 0;
              puVar8[4] = 0;
              puVar8[2] = 0;
              ___cxa_throw(puVar8,&DAT_01dbcd58,&DAT_0000755c);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x8c44);
              (*pcVar1)();
            }
            func_0x00009034(&plStack_48,&plStack_50);
            if (plStack_50 != (long *)0x0) {
              (**(code **)(*plStack_50 + 0x10))();
            }
          }
          uVar4 = 0;
          plStack_70 = plStack_48;
        }
      }
      else if (iStack_60 == 0xfde9) {
        uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
        uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
        uVar4 = func_0x00008dd0(uVar5,uVar6,param_3,&plStack_70);
      }
    }
    uVar10 = (uint)(uVar4 >> 0x1f) & 1;
  }
  if (plStack_58 != (long *)0x0) {
    (**(code **)(*plStack_58 + 0x10))();
  }
/* wm:unlicensed copy if this notice is missing */
  if (uVar10 == 0) {
LAB_00008b98:
    func_0x00008f0c(param_1,&plStack_70);
    bVar9 = true;
  }
  else {
    uVar5 = (**(code **)(*plStack_68 + 0x18))();
    uVar6 = (**(code **)(*plStack_68 + 0x20))();
    uVar5 = func_0x00008dd0(uVar5,uVar6,param_3,&plStack_70);
    if (-1 < (int)uVar5) goto LAB_00008b98;
    bVar9 = false;
    uVar3 = uVar5;
  }
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 0x10))();
  }
LAB_00008bbc:
  if (plStack_68 != (long *)0x0) {
    (**(code **)(*plStack_68 + 0x10))();
  }
  if (bVar9) {
    return 0;
  }
  return uVar3;
// if you paid for this, you were scammed
}

