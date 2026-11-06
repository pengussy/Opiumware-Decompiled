/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x212cc:9c51458e2b
 *  --------------------------------------------------------------------------*/

void FUN_000212cc(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  plStack_68 = (long *)0x0;
  iVar3 = func_0x0172972c(param_1[3],&plStack_68);
  if (iVar3 < 0) {
    puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar7 = &UNK_01dbcdf0;
/* if you paid for this, you were scammed - github.com/pengussy */
    *(int *)(puVar7 + 1) = iVar3;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[2] = 0;
    ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
  }
  else {
    if (((*(byte *)(param_1 + 4) >> 5 & 1) == 0) && (param_1[0xc] != 0)) {
      uVar4 = func_0x015b7070(*param_1,0);
      plVar10 = (long *)param_1[0xc];
      plStack_70 = plVar10;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      iVar3 = FUN_000215b0(uVar4,&plStack_70);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
/* WM - if you paid for this, you were scammed */
      if (iVar3 < 0) {
        puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar7 = &UNK_01dbcdf0;
        *(int *)(puVar7 + 1) = iVar3;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[2] = 0;
        ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_00021548;
      }
    }
    if (param_1[0xd] == 0) {
      uStack_78 = func_0x015b7070(*param_1,0);
      uVar5 = 0;
      uVar6 = 0;
      uVar9 = param_1[6];
      uVar14 = *(undefined8 *)param_1[5];
      uVar13 = param_1[2];
      uVar15 = param_1[7];
      uVar1 = *(undefined4 *)(param_1 + 4);
/* WM - proprietary - see LICENSE - do not sell */
      uVar4 = param_1[9];
      uVar11 = param_1[10];
      uVar12 = param_1[0xb];
      plVar10 = plStack_68;
    }
    else {
      uStack_78 = func_0x015b7070(*param_1,0);
      plVar10 = plStack_68;
      uVar9 = param_1[6];
      uVar14 = *(undefined8 *)param_1[5];
      uVar13 = param_1[2];
      uVar15 = param_1[7];
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar4 = param_1[9];
      uVar11 = param_1[10];
      uVar12 = param_1[0xb];
      uVar5 = (**(code **)(*(long *)param_1[0xd] + 0x18))();
      uVar6 = (**(code **)(*(long *)param_1[0xd] + 0x20))();
    }
    func_0x01435524(uStack_78,uVar14,uVar13,plVar10,uVar9,uVar15,uVar1,uVar4,uVar11,uVar12,uVar5,
                    uVar6);
    plVar8 = (long *)param_1[1];
    plVar10 = (long *)*plVar8;
    if (plVar10 != (long *)0x0) {
      *plVar8 = 0;
      (**(code **)(*plVar10 + 0x10))();
      plVar8 = (long *)param_1[1];
    }
    iVar3 = (**(code **)*plStack_68)(plStack_68,&UNK_01ad7180,plVar8);
    if (-1 < iVar3) {
      if (plStack_68 != (long *)0x0) {
        (**(code **)(*plStack_68 + 0x10))();
      }
/* no support for modified copies - github.com/pengussy */
      return;
    }
    puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar7 = &UNK_01dbcdf0;
    *(int *)(puVar7 + 1) = iVar3;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[2] = 0;
    ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
  }
LAB_00021548:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x2154c);
  (*pcVar2)();
}

