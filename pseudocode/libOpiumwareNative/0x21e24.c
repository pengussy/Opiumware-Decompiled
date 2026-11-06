/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x21e24:bcfbe338f6
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x000222f8) */
/* WARNING: Removing unreachable block (ram,0x00022180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00021e24(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long ****pppplVar13;
  long *plVar14;
  long *plVar15;
  long ***ppplVar16;
  long ****pppplVar17;
  long lVar18;
  long lVar19;
  long *plStack_e8;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long ****pppplStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  int iStack_54;
  
  iStack_54 = 0;
  plStack_68 = (long *)0x0;
  lStack_60 = 0;
/* wm:no support for modified copies */
  uVar5 = func_0x00021248(&plStack_68,*(undefined4 *)(param_1 + 0xe));
  plStack_70 = (long *)0x0;
  if ((((uVar5 & 1) == 0) &&
      ((**(code **)*plStack_68)(plStack_68,&UNK_01ad7ff8,&plStack_70), plStack_70 == (long *)0x0))
     || (iVar6 = func_0x016b5254(*param_1), iVar6 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = func_0x01476754(*param_1);
    lStack_60 = lVar8;
  }
  plStack_78 = (long *)0x0;
  iVar6 = (**(code **)*plStack_68)(plStack_68,&UNK_01ad7478,&plStack_78);
  if (iVar6 < 0) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar6;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022770;
  }
  iVar6 = (**(code **)(*plStack_78 + 0x18))(plStack_78,&uStack_7c,&uStack_80);
  if (iVar6 < 0) {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar6;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022770;
  }
  uVar9 = func_0x015b7070(*param_1,0);
  func_0x015acc8c(uVar9,&uStack_84,&uStack_88);
  if (uStack_7c == uStack_84) {
    if (uStack_80 < uStack_88) goto LAB_00021fb4;
  }
  else if ((uStack_7c == 0) || (uStack_84 == 0)) {
    if (uStack_7c != 0) goto LAB_00021fb4;
  }
  else if (uStack_7c < uStack_84) {
LAB_00021fb4:
    iVar6 = -0x7fffbffb;
    if (param_1[8] == 0) goto LAB_000224e4;
    uVar7 = func_0x0164d118(*(undefined8 *)(param_1[8] + 0x28),4,
                            "The module cannot be validated by the version of the validator currently attached."
                            ,0x52);
    lVar11 = param_1[8];
    *(undefined4 *)(lVar11 + 0x110) = 0;
    *(undefined4 *)(lVar11 + 0x138) = uVar7;
    if (*(char *)(lVar11 + 0x10f) < '\0') {
      **(undefined1 **)(lVar11 + 0xf8) = 0;
      *(undefined8 *)(lVar11 + 0x100) = 0;
      *(undefined8 *)(lVar11 + 0x290) = *(undefined8 *)(lVar11 + 0x288);
      lVar18 = *(long *)(lVar11 + 0x300);
      lVar19 = *(long *)(lVar11 + 0x308);
      if (lVar18 != lVar19) goto LAB_00022178;
/* do not claim this as your own - github.com/pengussy */
    }
    else {
      *(undefined1 *)(lVar11 + 0xf8) = 0;
      *(undefined1 *)(lVar11 + 0x10f) = 0;
      *(undefined8 *)(lVar11 + 0x290) = *(undefined8 *)(lVar11 + 0x288);
      lVar18 = *(long *)(lVar11 + 0x300);
      lVar19 = *(long *)(lVar11 + 0x308);
      if (lVar18 != lVar19) {
LAB_00022178:
        do {
          lVar19 = lVar19 + -0x38;
        } while (lVar19 != lVar18);
        lVar18 = *(long *)(lVar11 + 0x300);
      }
    }
    *(long *)(lVar11 + 0x308) = lVar18;
    *(undefined1 *)(lVar11 + 0x13c) = 0;
    func_0x01649544(lVar11,0);
    goto LAB_000224e4;
  }
  func_0x000212cc(param_1);
/* found on a paste site? it was re-uploaded illegally */
  plStack_90 = (long *)0x0;
  uVar3 = *(uint *)((long)param_1 + 0x24) | 1;
  *(uint *)((long)param_1 + 0x24) = uVar3;
  if (uVar5 == 0) {
    if ((plStack_70 == (long *)0x0) || (lVar8 == 0)) {
      iVar6 = (**(code **)(*plStack_68 + 0x18))
                        (plStack_68,*(undefined8 *)param_1[1],uVar3,&plStack_90);
      if (iVar6 < 0) {
        puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar10 = &UNK_01dbcdf0;
        *(int *)(puVar10 + 1) = iVar6;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
        ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_00022770;
      }
    }
    else {
      plStack_98 = (long *)0x0;
      uVar9 = func_0x01726e64();
      iVar6 = func_0x0172972c(uVar9,&plStack_98);
      if (iVar6 < 0) {
        puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar10 = &UNK_01dbcdf0;
        *(int *)(puVar10 + 1) = iVar6;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
        ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_00022770;
      }
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a8 = _UNK_01ad70d0;
      pppplStack_c8 = (long ****)&UNK_01dbce18;
      uStack_c0 = 0;
      plStack_a0 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        (**(code **)(*plStack_98 + 8))();
      }
      func_0x0144f468(lVar8,&pppplStack_c8,1);
      if (uStack_b0 != uStack_c0) {
        func_0x01771080(&pppplStack_c8);
      }
      lStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      lStack_e0 = (**(code **)(*plStack_98 + 0x70))();
      uStack_d8 = (**(code **)(*plStack_98 + 0x78))();
      iVar6 = (**(code **)(*plStack_70 + 0x20))
                        (plStack_70,*(undefined8 *)param_1[1],*(undefined4 *)((long)param_1 + 0x24),
                         &lStack_e0,&plStack_90);
      if (iVar6 < 0) {
        puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar10 = &UNK_01dbcdf0;
        *(int *)(puVar10 + 1) = iVar6;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
        ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_00022770;
      }
      pppplStack_c8 = (long ****)&UNK_01dbce18;
      if (uStack_b0 != uStack_c0) {
        func_0x01771080(&pppplStack_c8);
// more drops soon - github.com/pengussy
      }
      if (plStack_a0 != (long *)0x0) {
        (**(code **)(*plStack_a0 + 0x10))();
        plStack_a0 = (long *)0x0;
      }
      func_0x0176fb84(&pppplStack_c8);
      if (plStack_98 != (long *)0x0) {
        (**(code **)(*plStack_98 + 0x10))();
      }
    }
  }
  else {
    iVar6 = func_0x00034c94(plStack_68,lVar8,*(undefined8 *)param_1[1],uVar3,&plStack_90);
    if (iVar6 < 0) {
      puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar10 = &UNK_01dbcdf0;
      *(int *)(puVar10 + 1) = iVar6;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[2] = 0;
      ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
      goto LAB_00022770;
    }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  }
  iVar6 = (**(code **)(*plStack_90 + 0x18))(plStack_90,&iStack_54);
  if (iVar6 < 0) {
    puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar10 = &UNK_01dbcdf0;
    *(int *)(puVar10 + 1) = iVar6;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[2] = 0;
    ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
    goto LAB_00022770;
  }
  if ((param_1[8] != 0) && (iStack_54 < 0)) {
    plStack_98 = (long *)0x0;
    plStack_e8 = (long *)0x0;
    iVar6 = (**(code **)(*plStack_90 + 0x28))(plStack_90,&plStack_98);
    if (iVar6 < 0) {
      puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar10 = &UNK_01dbcdf0;
      *(int *)(puVar10 + 1) = iVar6;
      puVar10[3] = 0;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      puVar10[4] = 0;
      puVar10[2] = 0;
      ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
      goto LAB_00022770;
    }
    iVar6 = func_0x0172875c(plStack_98,param_1[3],&plStack_e8,0);
    if (iVar6 < 0) {
      puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar10 = &UNK_01dbcdf0;
      *(int *)(puVar10 + 1) = iVar6;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[2] = 0;
      ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
      goto LAB_00022770;
    }
    lVar11 = (**(code **)(*plStack_e8 + 0x30))();
    uVar12 = (**(code **)(*plStack_e8 + 0x38))();
    uVar7 = func_0x0164d118(*(undefined8 *)(param_1[8] + 0x28),4,"validation errors\r\n%0",0x15);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    lStack_e0 = param_1[8];
    *(undefined4 *)(lStack_e0 + 0x110) = 0;
    *(undefined4 *)(lStack_e0 + 0x138) = uVar7;
    if (*(char *)(lStack_e0 + 0x10f) < '\0') {
      **(undefined1 **)(lStack_e0 + 0xf8) = 0;
      *(undefined8 *)(lStack_e0 + 0x100) = 0;
    }
    else {
      *(undefined1 *)(lStack_e0 + 0xf8) = 0;
      *(undefined1 *)(lStack_e0 + 0x10f) = 0;
    }
    uStack_d8 = CONCAT26((short)(uStack_d8 >> 0x30),0x100000000);
    *(undefined8 *)(lStack_e0 + 0x290) = *(undefined8 *)(lStack_e0 + 0x288);
    lVar18 = *(long *)(lStack_e0 + 0x300);
    lVar19 = *(long *)(lStack_e0 + 0x308);
    if (lVar18 == lVar19) {
      *(long *)(lStack_e0 + 0x308) = lVar18;
      *(undefined1 *)(lStack_e0 + 0x13d) = 0;
      if (lVar11 == 0) goto LAB_000222d8;
LAB_00022320:
      if (0x7ffffffffffffff6 < uVar12) {
        func_0x0000aa50();
        goto LAB_00022770;
      }
      if (uVar12 < 0x17) {
        uStack_b8 = CONCAT17((char)uVar12,(undefined7)uStack_b8);
        pppplVar13 = (long ****)&pppplStack_c8;
      }
/* WM - reversing this took months of machine time */
      else {
        uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        pppplVar13 = (long ****)__Znwm(uVar2);
        uStack_b8 = uVar2 | 0x8000000000000000;
        pppplStack_c8 = pppplVar13;
        uStack_c0 = uVar12;
      }
      _memmove(pppplVar13,lVar11,uVar12);
      *(undefined1 *)((long)pppplVar13 + uVar12) = 0;
    }
    else {
      do {
        lVar19 = lVar19 + -0x38;
      } while (lVar19 != lVar18);
      *(undefined8 *)(lStack_e0 + 0x308) = *(undefined8 *)(lStack_e0 + 0x300);
      *(undefined1 *)(lStack_e0 + 0x13d) = 0;
      if (lVar11 != 0) goto LAB_00022320;
LAB_000222d8:
      pppplStack_c8 = (long ****)0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
    }
    lVar11 = lStack_e0 + (uStack_d8 & 0xffffffff) * 0x18;
    uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)uStack_d8 + 1);
    if (*(char *)(lVar11 + 0x15f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar11 + 0x148));
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    }
    *(ulong *)(lVar11 + 0x150) = uStack_c0;
    *(undefined8 *)(lVar11 + 0x148) = pppplStack_c8;
    *(ulong *)(lVar11 + 0x158) = uStack_b8;
    if (uStack_d8._4_1_ == '\x01') {
      *(char *)(lStack_e0 + 0x13c) = (char)uStack_d8;
      func_0x01649544(lStack_e0,uStack_d8._5_1_);
    }
    if (plStack_e8 != (long *)0x0) {
      (**(code **)(*plStack_e8 + 0x10))();
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)(*plStack_98 + 0x10))();
    }
  }
  pppplStack_c8 = (long ****)0x0;
  iVar6 = (**(code **)(*plStack_90 + 0x20))(plStack_90,&pppplStack_c8);
  pppplVar13 = pppplStack_c8;
  if (-1 < iVar6) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    if (pppplStack_c8 != (long ****)0x0) {
      plVar15 = (long *)param_1[1];
      pppplVar17 = (long ****)*plVar15;
      *plVar15 = 0;
      if (pppplStack_c8 == (long ****)0x0) {
        if (pppplVar17 != (long ****)0x0) {
          pppplVar13 = pppplVar17;
        }
      }
      else {
        pppplStack_c8 = (long ****)0x0;
        plVar14 = (long *)*plVar15;
        *plVar15 = (long)pppplVar13;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        if (pppplStack_c8 == pppplVar17) {
          pppplVar13 = pppplStack_c8;
          if (pppplVar17 != (long ****)0x0) {
            (*(code *)(*pppplVar17)[2])(pppplVar17);
            pppplVar13 = pppplStack_c8;
          }
        }
        else {
          pppplVar13 = pppplVar17;
          if (pppplStack_c8 != (long ****)0x0) {
            ppplVar16 = *pppplStack_c8;
            pppplStack_c8 = pppplVar17;
            (*(code *)ppplVar16[2])();
            pppplVar13 = pppplStack_c8;
          }
        }
      }
    }
    pppplStack_c8 = pppplVar13;
    plVar15 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plStack_68 = (long *)0x0;
/*  chat: discord.gg/sdkhDjTex  */
      (**(code **)(*plVar15 + 0x10))();
    }
    iVar6 = iStack_54;
    if (pppplStack_c8 != (long ****)0x0) {
      (*(code *)(*pppplStack_c8)[2])();
    }
    if (plStack_90 != (long *)0x0) {
      (**(code **)(*plStack_90 + 0x10))();
    }
LAB_000224e4:
    if (plStack_78 != (long *)0x0) {
      (**(code **)(*plStack_78 + 0x10))();
    }
    if (plStack_70 != (long *)0x0) {
      (**(code **)(*plStack_70 + 0x10))();
    }
    if (plStack_68 != (long *)0x0) {
      (**(code **)(*plStack_68 + 0x10))();
    }
    if (lVar8 != 0) {
      func_0x01704330(lVar8);
/* wm:reversing this took months of machine time */
      __ZdlPv();
    }
    return iVar6;
  }
  puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
  *puVar10 = &UNK_01dbcdf0;
  *(int *)(puVar10 + 1) = iVar6;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[2] = 0;
  ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
LAB_00022770:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x22774);
  (*pcVar4)();
}

