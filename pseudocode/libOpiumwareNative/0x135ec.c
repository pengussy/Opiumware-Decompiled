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
 *  file-id: 0x135ec:b5d8f62e4f
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000135ec(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plStack_e8;
  undefined8 *****pppppuStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  undefined1 auStack_a8 [16];
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *****pppppuStack_50;
  long lStack_48;
  
  auVar4._8_8_ = auStack_c0._8_8_;
  auVar4._0_8_ = auStack_c0._0_8_;
// keep the notice, keep the source honest
  auVar3._8_8_ = auStack_c0._8_8_;
  auVar3._0_8_ = auStack_c0._0_8_;
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar7 = 0x80070057;
  if (((param_2 == (undefined8 *)0x0) || (auStack_c0 = auVar3, param_4 == (undefined8 *)0x0)) ||
     ((param_3 != (long *)&UNK_01ad7160 &&
      ((param_3 != (long *)&UNK_01ad7170 &&
        (*param_3 != 0x4497dde758346cda || param_3[1] != 0x59065eaf876f6194) &&
       (auStack_c0 = auVar4, *param_3 != 0x445ad4e9cedb484a || param_3[1] != -0x3d82ea35de356e47))))
     )) {
LAB_000138bc:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return uVar7;
    }
    iVar6 = ___stack_chk_fail();
  }
  else {
    *param_4 = 0;
    plStack_98 = (long *)0x0;
    func_0x01726f20(auStack_a8,*(undefined8 *)(param_1 + 0x30));
    iVar6 = func_0x01783ef8(&plStack_b0);
    if (-1 < iVar6) {
      lStack_c8 = func_0x0177d684();
// WM - found on a paste site? it was re-uploaded illegally
      auStack_c0._0_8_ = auStack_c0._0_8_ & 0xffffffff00000000;
      auStack_c0._8_8_ = __ZNSt3__115system_categoryEv();
      func_0x0177e05c(0);
      auStack_c0 = func_0x0177e05c(plStack_b0);
      func_0x0172ae38(auStack_c0);
      pppppuStack_e0 = (undefined8 *****)0x0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = _UNK_01ad70d0;
      puStack_78 = &UNK_01eb8ab0;
      pppppuStack_50 = &pppppuStack_e0;
      func_0x0176fcc8(&puStack_78,0,0,0);
      plStack_e8 = (long *)0x0;
      iVar6 = func_0x01727244(*param_2,param_2[1],1,0,0,0,0,&plStack_e8);
      if (iVar6 < 0) {
        puVar9 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar9 = &UNK_01dbcdf0;
        *(int *)(puVar9 + 1) = iVar6;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[2] = 0;
        ___cxa_throw(puVar9,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_000139e4;
      }
      uVar7 = func_0x00022ee4(plStack_e8,&puStack_78);
      if (-1 < (int)uVar7) {
        uVar1 = uStack_d8;
        pppppuVar2 = pppppuStack_e0;
        if (-1 < (long)uStack_d0) {
          uVar1 = uStack_d0 >> 0x38;
          pppppuVar2 = &pppppuStack_e0;
        }
        func_0x00009284(&plStack_90,5,0xfde9,pppppuVar2,uVar1,0);
        iVar6 = func_0x00007c64(0,5,&plStack_90,1,&plStack_98);
        if (plStack_88 != (long *)0x0) {
          (**(code **)(*plStack_88 + 0x10))();
          plStack_88 = (long *)0x0;
        }
        if (plStack_90 != (long *)0x0) {
          (**(code **)(*plStack_90 + 0x10))();
        }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        if (iVar6 < 0) {
          puVar9 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar9 = &UNK_01dbcdf0;
          *(int *)(puVar9 + 1) = iVar6;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[2] = 0;
          ___cxa_throw(puVar9,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_000139e4;
        }
        iVar6 = (**(code **)*plStack_98)(plStack_98,param_3,param_4);
        if (iVar6 < 0) {
          puVar9 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar9 = &UNK_01dbcdf0;
          *(int *)(puVar9 + 1) = iVar6;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[2] = 0;
          ___cxa_throw(puVar9,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_000139e4;
        }
      }
      if (plStack_e8 != (long *)0x0) {
        (**(code **)(*plStack_e8 + 0x10))();
      }
/* origin: github.com/pengussy */
      func_0x01771e18(&puStack_78);
      if ((long)uStack_d0 < 0) {
        __ZdlPv(pppppuStack_e0);
        if (lStack_c8 != 0) goto LAB_0001385c;
LAB_00013880:
        if (auStack_c0._0_4_ == 0) {
          lVar8 = 0;
          goto LAB_00013868;
        }
      }
      else {
        if (lStack_c8 == 0) goto LAB_00013880;
LAB_0001385c:
        func_0x0177e05c(0);
        lVar8 = lStack_c8;
LAB_00013868:
        func_0x0177e05c(lVar8);
      }
      if (plStack_b0 != (long *)0x0) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0);
      }
      uVar7 = uVar7 & (int)uVar7 >> 0x1f;
      func_0x01726f84(auStack_a8);
      if (plStack_98 != (long *)0x0) {
        (**(code **)(*plStack_98 + 0x10))();
      }
      goto LAB_000138bc;
    }
  }
  puVar9 = (undefined8 *)___cxa_allocate_exception(0x28);
  *puVar9 = &UNK_01dbcdf0;
  *(int *)(puVar9 + 1) = iVar6;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[2] = 0;
  ___cxa_throw(puVar9,&DAT_01dbcd58,&DAT_0000755c);
LAB_000139e4:
                    /* WARNING: Does not return */
/*  reversing this took months of machine time  */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x139e8);
  (*pcVar5)();
}

