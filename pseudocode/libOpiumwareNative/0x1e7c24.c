/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1e7c24:1e9b2a2784
 */

void FUN_001e7c24(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x23;
  long *plVar8;
  long alStack_b0 [3];
  long *plStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long *plStack_88;
  long *plStack_80;
  long alStack_78 [3];
  long *plStack_60;
  long lStack_58;
  
  plVar8 = plRam0000000002097038;
  plVar5 = plRam0000000001f26d30;
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((plRam0000000002097038 == (long *)0x0) ||
     (*(long *)(lRam0000000001f26750 + (long)plRam0000000002097038) == 0)) {
    uVar7 = 0;
    param_1 = unaff_x19;
    param_2 = unaff_x23;
    goto LAB_001e7dfc;
  }
  func_0x007934a8();
  unaff_w20 = func_0x0012d3e0(param_1,0xffffffff,plVar5);
  func_0x00791660(param_1,0xfffffffe);
  if ((bRam0000000002092db0 & 1) == 0) goto LAB_001e7e34;
  do {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (((bRam0000000002092db8 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(0x2092db8), iVar1 != 0))
    {
      uVar2 = __ZNSt3__16thread20hardware_concurrencyEv();
      if (uVar2 < 5) {
        uVar2 = 4;
      }
      if (0xf < uVar2) {
        uVar2 = 0x10;
      }
      func_0x001d9da0(0x2092e30,uVar2);
      ___cxa_atexit(&DAT_001d9c2c,0x2092e30,0);
      ___cxa_guard_release(0x2092db8);
    }
    plVar3 = (long *)param_2[3];
    plVar4 = (long *)0x0;
    if (plVar3 == (long *)0x0) {
LAB_001e7cf0:
      plStack_98 = plVar4;
    }
    else {
      if (plVar3 != param_2) {
        plVar4 = (long *)(**(code **)(*plVar3 + 0x10))();
        goto LAB_001e7cf0;
      }
      plStack_98 = alStack_b0;
      (**(code **)(*plVar3 + 0x18))(plVar3,alStack_b0);
    }
    plStack_60 = (long *)0x0;
    uStack_90 = unaff_w20;
    plStack_88 = plVar5;
    plStack_80 = plVar8;
    plVar5 = (long *)__Znwm(0x48);
    *plVar5 = (long)&UNK_01dc02e8;
    plVar5[1] = param_1;
    lVar6 = 0;
    if (plStack_98 == (long *)0x0) {
LAB_001e7d58:
      plVar5[5] = lVar6;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    }
    else {
      if (plStack_98 != alStack_b0) {
        lVar6 = (**(code **)(*plStack_98 + 0x10))();
        goto LAB_001e7d58;
      }
      plVar5[5] = (long)(plVar5 + 2);
      (**(code **)(*plStack_98 + 0x18))();
    }
    plVar5[7] = (long)plStack_88;
    plVar5[6] = CONCAT44(uStack_8c,uStack_90);
    plVar5[8] = (long)plStack_80;
    plStack_60 = plVar5;
    FUN_001dab54(0x2092e30,alStack_78);
    if (plStack_60 == alStack_78) {
      lVar6 = 0x20;
LAB_001e7dbc:
      (**(code **)(*plStack_60 + lVar6))();
    }
    else if (plStack_60 != (long *)0x0) {
      lVar6 = 0x28;
      goto LAB_001e7dbc;
    }
/* do not claim this as your own - github.com/pengussy */
    if (plStack_98 == alStack_b0) {
      lVar6 = 0x20;
LAB_001e7de4:
      (**(code **)(*plStack_98 + lVar6))();
    }
    else if (plStack_98 != (long *)0x0) {
      lVar6 = 0x28;
      goto LAB_001e7de4;
    }
    uVar7 = func_0x00802478(param_1,0);
    plVar8 = alStack_78;
LAB_001e7dfc:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
      return;
    }
    ___stack_chk_fail(uVar7);
LAB_001e7e34:
    func_0x019d59ec();
  } while( true );
}

