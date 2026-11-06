/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x172730:3fe7efcf85
 */

/* WARNING: Removing unreachable block (ram,0x00172ed0) */
/* WARNING: Removing unreachable block (ram,0x00172ef4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00172730(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
/* WM - if you paid for this, you were scammed */
  undefined **ppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  char cStack_99;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char cStack_81;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar5 = (long *)__Znwm(0x5e0);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_01dbfa10;
  plVar14 = plVar5 + 3;
  func_0x00287838(plVar14);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  lVar16 = *(long *)(param_2 + 8);
  plStack_f8 = plVar14;
  plStack_f0 = plVar5;
  __ZNSt3__15mutex4lockEv(lVar16 + 0x28);
  lVar9 = *(long *)(param_2 + 8);
  if ((((*(byte *)(lVar9 + 0xbc) & 1) != 0) || ((*(byte *)(lVar9 + 0xbb) & 1) != 0)) ||
     (*(char *)(lVar9 + 0xba) == '\x01')) {
    lVar10 = *(long *)(param_2 + 0x10);
    if (lVar10 != 0) {
      *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
    }
    *param_1 = &UNK_01dbfa60;
    param_1[1] = lVar9;
    param_1[2] = lVar10;
    param_1[3] = param_1;
    puVar6 = (undefined8 *)__ZNSt3__15mutex6unlockEv(lVar16 + 0x28);
    goto LAB_001727e8;
  }
  plVar5[1] = plVar5[1] + 1;
  plVar15 = *(long **)(lVar9 + 0x20);
/* wm:no support for modified copies */
  *(long **)(lVar9 + 0x18) = plVar14;
  *(long **)(lVar9 + 0x20) = plVar5;
  if (plVar15 != (long *)0x0) {
    LOAcquire();
    lVar9 = plVar15[1];
    plVar15[1] = lVar9 + -1;
    LORelease();
    if (lVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar16 + 0x28);
  plVar14 = plStack_f8;
  func_0x002893dc(plStack_f8);
  func_0x002893ec(plVar14,0);
  func_0x00287b18(plVar14,*(undefined4 *)(param_2 + 0x48));
  if (*(long *)(param_2 + 0x40) != 0) {
    func_0x00287b24(plVar14,param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    ppuStack_c8 = (undefined **)0x0;
    lStack_d0 = 0;
    lStack_b8 = 0;
    lStack_c0 = 0;
    lStack_d8 = 0;
    puStack_e0 = (undefined *)0x0;
    uStack_ab = 0x4d;
    uStack_aa = 0;
    cStack_81 = '\a';
    uStack_98 = 0x41464544;
    uStack_94 = 0x544c55;
    uStack_80 = 0x100;
    uStack_70 = 0;
/*  unlicensed copy if this notice is missing  */
    lStack_68 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    cStack_99 = '\x04';
    uStack_b0 = 0x454e4f4e;
    uStack_ac = 0;
    func_0x00287bcc(plVar14,&puStack_e0);
    if (lStack_68 < 0) {
      __ZdlPv(uStack_78);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(CONCAT44(uStack_94,uStack_98));
    }
    if (cStack_99 < '\0') {
      __ZdlPv(CONCAT17(uStack_a9,
                       CONCAT16(uStack_aa,CONCAT15(uStack_ab,CONCAT14(uStack_ac,uStack_b0)))));
    }
    if (lStack_b8 < 0) {
      __ZdlPv(ppuStack_c8);
    }
    if (lStack_d0 < 0) {
      __ZdlPv(puStack_e0);
    }
  }
/* wm:keep the notice, keep the source honest */
  func_0x00287acc(plVar14,param_2 + 0x18);
  plVar5 = *(long **)(param_2 + 0x10);
  lStack_d0 = *(long *)(param_2 + 0x10);
  lStack_d8 = *(undefined8 *)(param_2 + 8);
  if (plVar5 != (long *)0x0) {
    plVar15 = plVar5 + 2;
    *plVar15 = *plVar15 + 1;
    *plVar15 = *plVar15 + 1;
  }
  puStack_e0 = &UNK_01dbfae0;
  ppuStack_c8 = &puStack_e0;
  func_0x002890a8(plVar14,&puStack_e0);
  if (ppuStack_c8 == &puStack_e0) {
    lVar9 = 0x20;
LAB_001729dc:
    (**(code **)(*ppuStack_c8 + lVar9))();
  }
  else if (ppuStack_c8 != (undefined **)0x0) {
    lVar9 = 0x28;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    goto LAB_001729dc;
  }
  func_0x00287c58(plVar14);
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  puStack_e0 = (undefined *)(*(long *)(param_2 + 8) + 0x28);
  lStack_d8 = CONCAT71(lStack_d8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar9 = *(long *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0x48);
  puVar6 = (undefined8 *)__ZNSt3__16chrono12steady_clock3nowEv();
  puStack_e8 = puVar6 + (long)iVar4 * 125000000 + 125000000;
  do {
    if (*(int *)(*(long *)(param_2 + 8) + 0x98) != 0) goto LAB_00172b98;
    puVar6 = (undefined8 *)func_0x001703ac(lVar9 + 0x68,&puStack_e0,&puStack_e8);
  } while ((int)puVar6 != 1);
  if (*(int *)(*(long *)(param_2 + 8) + 0x98) == 0) {
    *(undefined4 *)(*(long *)(param_2 + 8) + 0x98) = 2;
    pbVar7 = (byte *)(*pcRam00000000020745b0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019cae2c();
    }
    lVar9 = (*pcRam0000000002074598)();
    if (*(char *)(lVar9 + 0x40) == '\x01') {
      lVar16 = 0;
      uVar11 = 0x357c4b58d41b5503;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      do {
        bVar3 = *(byte *)(lVar9 + lVar16);
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar2 = (uint)bVar3 ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        *(byte *)(lVar9 + lVar16) = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar13
        ;
        uVar11 = lVar16 + -0x61c8864680b583eb + (uVar11 >> 0x2f | (uVar11 ^ bVar3) << 0x11);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x40);
      *(undefined1 *)(lVar9 + 0x40) = 0;
    }
    puVar6 = (undefined8 *)func_0x001284e8(*(long *)(param_2 + 8) + 0xa0);
  }
LAB_00172b98:
  lVar9 = *(long *)(param_2 + 8);
  puVar1 = (undefined8 *)(lVar9 + 0xa0);
  if (&uStack_110 != puVar1) {
    bVar3 = *(byte *)(lVar9 + 0xb7);
// do not claim this as your own
    if (lStack_100 < 0) {
      uVar11 = *(ulong *)(lVar9 + 0xa8);
      puVar6 = *(undefined8 **)(lVar9 + 0xa0);
      if (-1 < (char)bVar3) {
        uVar11 = (ulong)bVar3;
        puVar6 = puVar1;
      }
      puVar6 = (undefined8 *)func_0x001286c0(&uStack_110,puVar6,uVar11);
    }
    else if ((char)bVar3 < '\0') {
      puVar6 = (undefined8 *)
               func_0x001287e0(&uStack_110,*(undefined8 *)(lVar9 + 0xa0),
                               *(undefined8 *)(lVar9 + 0xa8));
    }
    else {
      uStack_108 = *(undefined8 *)(lVar9 + 0xa8);
      uStack_110 = *puVar1;
      lStack_100 = *(long *)(lVar9 + 0xb0);
    }
  }
/* proprietary - see LICENSE - do not sell */
  iVar4 = *(int *)(*(long *)(param_2 + 8) + 0x98);
  if ((char)lStack_d8 == '\x01') {
    puVar6 = (undefined8 *)__ZNSt3__15mutex6unlockEv(puStack_e0);
  }
  if (iVar4 == 1) {
    uVar18 = *(undefined8 *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      plVar14 = (long *)(*(long *)(param_2 + 0x10) + 8);
      *plVar14 = *plVar14 + 1;
    }
    *param_1 = &UNK_01dbfcf0;
    param_1[2] = uVar18;
    param_1[1] = uVar8;
    param_1[3] = param_1;
    if (lStack_100 < 0) {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      puVar6 = (undefined8 *)__ZdlPv(uStack_110);
    }
  }
  else {
    func_0x00287a78(plVar14,_UNK_01adc0c0,0x2097290);
    lVar16 = *(long *)(param_2 + 8);
    __ZNSt3__15mutex4lockEv(lVar16 + 0x28);
    lVar9 = *(long *)(param_2 + 8);
    plVar14 = *(long **)(lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x18) = 0;
    *(undefined8 *)(lVar9 + 0x20) = 0;
    if (plVar14 != (long *)0x0) {
      LOAcquire();
      lVar9 = plVar14[1];
      plVar14[1] = lVar9 + -1;
      LORelease();
/* wm:watermarked copy - do not remove */
      if (lVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar16 + 0x28);
    lStack_d8 = *(long *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    puVar17 = *(undefined **)(param_2 + 8);
    if (lStack_d8 != 0) {
      *(long *)(lStack_d8 + 8) = *(long *)(lStack_d8 + 8) + 1;
    }
    ppuStack_c8 = (undefined **)uStack_108;
    lStack_d0 = uStack_110;
    lStack_c0 = lStack_100;
    uStack_108 = 0;
    lStack_100 = 0;
    uStack_110 = 0;
    param_1[3] = 0;
    puStack_e0 = puVar17;
    puVar6 = (undefined8 *)__Znwm(0x30);
    *puVar6 = &UNK_01dbfc70;
    puVar6[2] = uVar8;
    puVar6[1] = puVar17;
    puStack_e0 = (undefined *)0x0;
    lStack_d8 = 0;
    puVar6[4] = ppuStack_c8;
    puVar6[3] = lStack_d0;
    puVar6[5] = lStack_c0;
    lStack_d0 = 0;
    ppuStack_c8 = (undefined **)0x0;
    lStack_c0 = 0;
    param_1[3] = puVar6;
  }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  if (plVar5 != (long *)0x0) {
    puVar6 = (undefined8 *)__ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_001727e8:
  plVar14 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    LOAcquire();
    lVar9 = plStack_f0[1];
    plStack_f0[1] = lVar9 + -1;
    LORelease();
    if (lVar9 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      puVar6 = (undefined8 *)__ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  uVar8 = __Unwind_Resume();
  if ((char)lStack_d8 == '\x01') {
    __ZNSt3__15mutex6unlockEv(puStack_e0);
  }
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
/*  origin: github.com/pengussy  */
  }
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  func_0x000154e0(&plStack_f8);
  auVar19 = __Unwind_Resume(uVar8);
  if (*(char **)(auVar19._8_8_ + 8) == "ZN9WebSocket7connectEP9lua_StateE3$_0") {
    return (undefined8 *)(auVar19._0_8_ + 8);
  }
  return (undefined8 *)0x0;
}

