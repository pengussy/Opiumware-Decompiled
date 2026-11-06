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
 *  file-id: 0x284d04:da1c779cf3
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00284d04(undefined1 *param_1,long *param_2,long param_3,ulong param_4,long *param_5)

{
  undefined8 ****ppppuVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x22;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined4 uStack_154;
  long lStack_150;
  ulong uStack_148;
  int *piStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined *puStack_128;
/* wm:more drops soon - github.com/pengussy */
  undefined8 uStack_120;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char acStack_108 [7];
  undefined1 uStack_101;
  char cStack_f9;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined7 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  long lStack_90;
  char cStack_81;
  long lStack_80;
  int iStack_78;
  undefined8 uStack_74;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  ppppuStack_a0 = (undefined8 ****)0x0;
  uStack_98 = 0;
  lStack_90 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&ppppuStack_a0,0x40);
  lStack_a8 = _UNK_01adbbf0;
  lStack_b0 = _UNK_01adbbf8;
// no support for modified copies
  uVar11 = 0;
LAB_00284dcc:
  do {
    while( true ) {
      uVar14 = uVar11;
      if ((*(long **)(param_3 + 0x18) != (long *)0x0) &&
         (piVar8 = (int *)(**(code **)(**(long **)(param_3 + 0x18) + 0x30))(),
         ((ulong)piVar8 & 1) != 0)) goto LAB_00284f4c;
      param_4 = 1;
      piVar8 = (int *)(**(code **)(*param_2 + 0x30))(param_2,&cStack_81);
      if (piVar8 != (int *)((long)&MACH_HEADER.magic + 1)) break;
      piVar8 = (int *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                (&ppppuStack_a0,(long)cStack_81);
      uVar11 = uVar14 + 1;
      if (1 < uVar11) {
        ppppuVar1 = ppppuStack_a0;
        if (-1 < lStack_90) {
          ppppuVar1 = &ppppuStack_a0;
        }
        if ((*(char *)((long)ppppuVar1 + (uVar14 - 1)) == '\r') ||
           (*(char *)((long)ppppuVar1 + uVar14) == '\n')) {
          *param_1 = 1;
          if (lStack_90 < 0) {
            param_4 = uStack_98;
            piVar8 = (int *)func_0x00017ae8(param_1 + 8);
          }
          else {
            *(ulong *)(param_1 + 0x10) = uStack_98;
            *(undefined8 *****)(param_1 + 8) = ppppuStack_a0;
            *(long *)(param_1 + 0x18) = lStack_90;
          }
          goto LAB_00284f78;
        }
      }
// do not claim this as your own
    }
    if (((-1 < (long)piVar8) || (piVar8 = (int *)___error(), 1 < *piVar8 - 0x23U)) ||
       ((int)param_2[1] == -1)) break;
    iVar6 = (int)param_2[1];
    uStack_6c = 0;
    uStack_74 = 9;
    iStack_78 = iVar6;
    uVar11 = uVar14;
    if ((long *)param_2[10] == (long *)0x0) {
LAB_00284eb8:
      unaff_x22 = 0;
LAB_00284ebc:
      uVar9 = 1;
      bVar3 = true;
    }
    else {
      iVar5 = (**(code **)(*(long *)param_2[10] + 0x30))();
      unaff_x22 = (**(code **)(*(long *)param_2[10] + 0x38))();
      if (iVar5 == -1) {
        if (unaff_x22 != 0) goto LAB_00284ebc;
        lVar4 = (**(code **)(*(long *)param_2[10] + 0x28))();
        if ((lVar4 != lStack_a8) && (lVar4 != lStack_b0)) goto LAB_00284eb8;
        goto LAB_00284dcc;
      }
      bVar3 = false;
      uStack_74 = CONCAT44(iVar5,(undefined4)uStack_74);
      uStack_6c = CONCAT22(uStack_6c._2_2_,1);
      uVar9 = 2;
    }
    param_5 = &lStack_80;
    param_4 = 1;
    lStack_80 = unaff_x22;
    piVar8 = (int *)func_0x00283ba8(&iStack_78,uVar9,1,param_5);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    if ((int)piVar8 < 0) break;
    if ((int)piVar8 == 0) {
      plVar7 = (long *)param_2[10];
      bVar3 = (bool)(bVar3 ^ 1);
      if (plVar7 == (long *)0x0) {
        bVar3 = true;
      }
      if ((!bVar3) && (unaff_x22 == 0)) {
LAB_00284dc0:
        (**(code **)(*plVar7 + 0x28))();
      }
      goto LAB_00284dcc;
    }
    if (((!bVar3) && ((uStack_6c & 0x10000) != 0)) || ((unaff_x22 != 0 && (lStack_80 != 0)))) {
      plVar7 = (long *)param_2[10];
      goto LAB_00284dc0;
    }
  } while ((iVar6 == -1) || (((uStack_74 & 0x10000) != 0 || ((uStack_74 & 0x380000) == 0))));
/*  keep the notice, keep the source honest  */
LAB_00284f4c:
  *param_1 = 0;
  if (lStack_90 < 0) {
    param_4 = uStack_98;
    piVar8 = (int *)func_0x00017ae8(param_1 + 8,ppppuStack_a0);
LAB_00284f78:
    if (lStack_90 < 0) {
      piVar8 = (int *)__ZdlPv(ppppuStack_a0);
    }
  }
  else {
    *(ulong *)(param_1 + 0x10) = uStack_98;
    *(undefined8 *****)(param_1 + 8) = ppppuStack_a0;
    *(long *)(param_1 + 0x18) = lStack_90;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
    return piVar8;
  }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  uVar9 = ___stack_chk_fail();
  if (lStack_90 < 0) {
    __ZdlPv(ppppuStack_a0);
  }
  auVar15 = __Unwind_Resume(uVar9);
  puVar13 = auVar15._8_8_;
  lVar4 = auVar15._0_8_;
  pcStack_b8 = FUN_00285020;
  lStack_e8 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_e0 = unaff_x22;
  plStack_d8 = param_2;
  lStack_d0 = param_3;
  uStack_c8 = uVar9;
  lStack_c0 = (long)register0x00000008 + -0x10;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar13,"no error");
  piVar8 = (int *)(ulong)*(uint *)(lVar4 + 0xc);
  piVar10 = (int *)_socket(*(undefined4 *)(lVar4 + 4),*(undefined4 *)(lVar4 + 8),piVar8);
  if ((int)piVar10 < 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (puVar13,"Cannot create a socket");
  }
  else {
    uStack_110 = 1;
    _setsockopt(piVar10,6,1,&uStack_110,4);
    uStack_120 = 4;
    _fcntl(piVar10,4);
    uStack_f8 = 1;
    param_5 = (long *)&uStack_f8;
    _setsockopt(piVar10,0xffff,0x1022,param_5,4);
    piVar8 = (int *)(ulong)*(uint *)(lVar4 + 0x10);
/*  reversing this took months of machine time  */
    iVar6 = _connect(piVar10,*(undefined8 *)(lVar4 + 0x20),piVar8);
    if ((iVar6 == -1) && (uVar11 = func_0x00284b34(), (uVar11 & 1) == 0)) {
      func_0x00284af8();
      uVar9 = _strerror();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(puVar13,uVar9);
      func_0x00284ad4(piVar10);
    }
    else {
      do {
        if ((*(long **)(param_4 + 0x18) != (long *)0x0) &&
           (iVar6 = (**(code **)(**(long **)(param_4 + 0x18) + 0x30))(), iVar6 != 0)) {
          func_0x00284ad4(piVar10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (puVar13,"Cancelled");
          goto LAB_00285278;
        }
        uStack_110 = 0;
        uStack_10c = 0;
        param_5 = (long *)&uStack_110;
        piVar8 = piVar10;
        lVar4 = func_0x00284600(0,10,piVar10,param_5);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        plVar7 = (long *)CONCAT44(uStack_10c,uStack_110);
        uStack_110 = 0;
        uStack_10c = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        iVar6 = (int)lVar4;
      } while (iVar6 == 2);
      if (iVar6 == 1) goto LAB_0028527c;
      if (iVar6 == 3) {
        func_0x00284ad4(piVar10);
        cStack_f9 = '\x0f';
        uStack_110 = s_Connect_error__01c2da20._0_4_;
        uStack_10c._0_3_ = s_Connect_error__01c2da20._4_3_;
        uStack_10c = CONCAT13(s_Connect_error__01c2da20[7],(undefined3)uStack_10c);
        acStack_108[0] = s_Connect_error__01c2da20[8];
        acStack_108[1] = s_Connect_error__01c2da20[9];
        acStack_108[2] = s_Connect_error__01c2da20[10];
        acStack_108[3] = s_Connect_error__01c2da20[0xb];
        acStack_108[4] = s_Connect_error__01c2da20[0xc];
        acStack_108[5] = s_Connect_error__01c2da20[0xd];
        acStack_108[6] = s_Connect_error__01c2da20[0xe];
        uStack_101 = 0;
/*  proprietary - see LICENSE - do not sell  */
        func_0x00284af8();
        uVar9 = _strerror();
        puVar12 = (undefined8 *)
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                            (&uStack_110,uVar9);
      }
      else {
        func_0x00284ad4(piVar10);
        cStack_f9 = '\x0f';
        uStack_110 = s_Connect_error__01c2da20._0_4_;
        uStack_10c._0_3_ = s_Connect_error__01c2da20._4_3_;
        uStack_10c = CONCAT13(s_Connect_error__01c2da20[7],(undefined3)uStack_10c);
        acStack_108[0] = s_Connect_error__01c2da20[8];
        acStack_108[1] = s_Connect_error__01c2da20[9];
        acStack_108[2] = s_Connect_error__01c2da20[10];
        acStack_108[3] = s_Connect_error__01c2da20[0xb];
        acStack_108[4] = s_Connect_error__01c2da20[0xc];
        acStack_108[5] = s_Connect_error__01c2da20[0xd];
        acStack_108[6] = s_Connect_error__01c2da20[0xe];
/* watermarked copy - do not remove - github.com/pengussy */
        uStack_101 = 0;
        func_0x00284af8();
        uVar9 = _strerror();
        puVar12 = (undefined8 *)
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                            (&uStack_110,uVar9);
      }
      uVar9 = *puVar12;
      uStack_f8 = (undefined4)puVar12[1];
      uStack_f4._0_3_ = (undefined3)((ulong)puVar12[1] >> 0x20);
      uStack_f4._3_1_ = (undefined1)*(undefined8 *)((long)puVar12 + 0xf);
      uStack_f0 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0xf) >> 8);
      bVar2 = *(byte *)((long)puVar12 + 0x17);
      param_4 = (ulong)bVar2;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
// chat: discord.gg/sdkhDjTex
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        __ZdlPv(*puVar13);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
      }
      *puVar13 = uVar9;
      puVar13[1] = CONCAT44(uStack_f4,uStack_f8);
      *(ulong *)((long)puVar13 + 0xf) = CONCAT71(uStack_f0,uStack_f4._3_1_);
      *(byte *)((long)puVar13 + 0x17) = bVar2;
      if (cStack_f9 < '\0') {
        __ZdlPv(CONCAT44(uStack_10c,uStack_110));
      }
    }
  }
LAB_00285278:
  piVar10 = (int *)0xffffffff;
// WM - found on a paste site? it was re-uploaded illegally
LAB_0028527c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_e8) {
    return piVar10;
  }
  uVar9 = ___stack_chk_fail();
  if (cStack_f9 < '\0') {
    __ZdlPv(CONCAT44(uStack_10c,uStack_110));
    uVar9 = __Unwind_Resume(uVar9);
    plVar7 = (long *)CONCAT44(uStack_10c,uStack_110);
    uStack_110 = 0;
    uStack_10c = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
      uVar9 = __Unwind_Resume(uVar9);
    }
  }
  auVar16 = __Unwind_Resume(uVar9);
  uStack_154 = auVar16._8_4_;
  puStack_128 = &SUB_00285300;
  lStack_150 = lVar4;
  uStack_148 = param_4;
  piStack_140 = piVar10;
  uStack_138 = uVar9;
  plStack_130 = &lStack_c0;
  func_0x00285444(&uStack_168,&lStack_178,auVar16._0_8_,&uStack_154);
  FUN_0028249c(&lStack_178,uStack_168,piVar8,param_5,1);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  for (; lStack_178 != 0; lStack_178 = *(long *)(lStack_178 + 0x28)) {
    piVar10 = (int *)FUN_00285020(lStack_178,piVar8,param_5);
    if ((int)piVar10 != -1) goto code_r0x0028537c;
  }
  piVar10 = (int *)0xffffffff;
code_r0x0028537c:
  if (plStack_170 != (long *)0x0) {
    LOAcquire();
    lVar4 = plStack_170[1];
    plStack_170[1] = lVar4 + -1;
    LORelease();
    if (lVar4 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
    }
  }
  if (plStack_160 != (long *)0x0) {
    LOAcquire();
    lVar4 = plStack_160[1];
    plStack_160[1] = lVar4 + -1;
    LORelease();
    if (lVar4 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
      return piVar10;
    }
  }
  return piVar10;
}

