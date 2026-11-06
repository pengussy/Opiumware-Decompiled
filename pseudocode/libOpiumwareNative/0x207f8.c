/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x207f8:b631077311
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000207f8(long *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  puVar1 = auStack_88 + 0xf;
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_3 < 0x3ffffffffffffff7) {
    if (param_3 < 5) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      plVar7 = param_1;
    }
    else {
      uVar9 = (param_3 & 0x3ffffffffffffffe) + 2;
      uVar12 = 7;
      if (uVar9 != 6) {
        uVar12 = uVar9;
      }
      plVar7 = (long *)__Znwm(uVar12 << 2);
      *param_1 = (long)plVar7;
      param_1[1] = param_3;
      param_1[2] = uVar12 | 0x8000000000000000;
    }
    param_4 = (undefined8 *)(param_3 * 4);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    _memcpy(plVar7,param_2);
    *(undefined4 *)((long)plVar7 + (long)(param_3 * 4)) = 0;
    uVar12 = param_1[1];
    uVar11 = (ulong)*(byte *)((long)param_1 + 0x17);
    bVar5 = (char)*(byte *)((long)param_1 + 0x17) < '\0';
    uVar9 = uVar12;
    if (!bVar5) {
      uVar9 = uVar11;
    }
    if (uVar9 != 0) {
      lVar14 = *param_1;
      uVar9 = 1;
      uVar15 = 0;
      do {
        uVar13 = uVar9;
        plVar7 = (long *)lVar14;
        if (!bVar5) {
          plVar7 = param_1;
        }
        if (*(int *)((long)plVar7 + uVar15 * 4) == 0x5c) {
          *(undefined4 *)((long)plVar7 + uVar15 * 4) = 0x2f;
          uVar11 = (ulong)*(byte *)((long)param_1 + 0x17);
          lVar14 = *param_1;
          uVar12 = param_1[1];
        }
        bVar5 = (char)uVar11 < '\0';
        uVar2 = uVar12;
        if (!bVar5) {
          uVar2 = uVar11;
        }
        uVar9 = (ulong)((int)uVar13 + 1);
// WM - unlicensed copy if this notice is missing
        uVar15 = uVar13;
      } while (uVar13 < uVar2);
      if (uVar2 != 0) {
        uVar9 = 0;
        bVar4 = 0;
        uVar17 = 0;
        do {
          plVar7 = (long *)*param_1;
          if (!bVar5) {
            plVar7 = param_1;
          }
          if ((uVar17 == 0) || (*(int *)((long)plVar7 + uVar9 * 4) != 0x2f)) {
LAB_00020920:
            bVar4 = bVar4 | *(int *)((long)plVar7 + uVar9 * 4) != 0x2f;
            uVar17 = uVar17 + 1;
          }
          else {
            if (bVar5) {
              iVar10 = *(int *)(*param_1 + (ulong)(uVar17 - 1) * 4);
            }
            else {
              iVar10 = *(int *)((long)param_1 + (ulong)(uVar17 - 1) * 4);
            }
            if (!(bool)(iVar10 == 0x2f & bVar4)) goto LAB_00020920;
            param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5eraseEmm(param_1);
            uVar11 = (ulong)*(byte *)((long)param_1 + 0x17);
            uVar12 = param_1[1];
          }
          uVar9 = (ulong)uVar17;
          bVar5 = (char)uVar11 < '\0';
          uVar15 = uVar12;
          if (!bVar5) {
            uVar15 = uVar11;
          }
        } while (uVar9 < uVar15);
      }
    }
/* no support for modified copies - github.com/pengussy */
    plVar7 = (long *)*param_1;
    if (-1 < (char)uVar11) {
      uVar12 = uVar11;
      plVar7 = param_1;
    }
    if (uVar12 == 0) {
LAB_00020a54:
      cStack_71 = '\x01';
      auStack_88[0] = _UNK_01ad7f08;
      cStack_89 = '\x01';
      auStack_a0[0] = _UNK_01ad7f10;
      puVar6 = (undefined8 *)
               __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKwm
                         (auStack_88,auStack_a0,1);
      uStack_68 = puVar6[1];
      uStack_70 = *puVar6;
      lStack_60 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      param_4 = (undefined8 *)param_1[1];
      plVar7 = (long *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        param_4 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0x17);
        plVar7 = param_1;
      }
      plVar7 = (long *)__ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKwm
                                 (&uStack_70,plVar7);
      lVar14 = *plVar7;
      uStack_58 = (undefined7)plVar7[1];
      uStack_51 = (undefined1)*(undefined8 *)((long)plVar7 + 0xf);
      uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)plVar7 + 0xf) >> 8);
      uVar3 = *(undefined1 *)((long)plVar7 + 0x17);
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
/* if you paid for this, you were scammed - github.com/pengussy */
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      *param_1 = lVar14;
      param_1[1] = CONCAT17(uStack_51,uStack_58);
      *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_50,uStack_51);
      *(undefined1 *)((long)param_1 + 0x17) = uVar3;
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      if (cStack_89 < '\0') {
        __ZdlPv(auStack_a0[0]);
      }
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
      uVar12 = (ulong)*(byte *)((long)param_1 + 0x17);
      bVar5 = (char)*(byte *)((long)param_1 + 0x17) < '\0';
      uVar11 = param_1[1];
      uVar9 = uVar11;
      if (!bVar5) {
        uVar9 = uVar12;
      }
      if (uVar9 != 0) {
        uVar9 = 0;
        bVar4 = 0;
        uVar17 = 0;
        do {
          plVar7 = (long *)*param_1;
          if (!bVar5) {
            plVar7 = param_1;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
          }
          if ((uVar17 == 0) || (*(int *)((long)plVar7 + uVar9 * 4) != 0x2f)) {
LAB_00020b48:
            bVar4 = bVar4 | *(int *)((long)plVar7 + uVar9 * 4) != 0x2f;
            uVar17 = uVar17 + 1;
          }
          else {
            if (bVar5) {
              iVar10 = *(int *)(*param_1 + (ulong)(uVar17 - 1) * 4);
            }
            else {
              iVar10 = *(int *)((long)param_1 + (ulong)(uVar17 - 1) * 4);
            }
            if (!(bool)(iVar10 == 0x2f & bVar4)) goto LAB_00020b48;
            param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5eraseEmm(param_1);
            uVar12 = (ulong)*(byte *)((long)param_1 + 0x17);
            uVar11 = param_1[1];
          }
          uVar9 = (ulong)uVar17;
          bVar5 = (char)uVar12 < '\0';
          uVar15 = uVar11;
          if (!bVar5) {
            uVar15 = uVar12;
          }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        } while (uVar9 < uVar15);
      }
    }
    else if (uVar12 == 1) {
      iVar10 = (int)*plVar7;
      if (iVar10 != 0x2e) {
LAB_00020a4c:
        if (iVar10 != 0x2f) goto LAB_00020a54;
      }
    }
    else {
      iVar10 = (int)*plVar7;
      if (((iVar10 != 0x2e) ||
          ((*(int *)((long)plVar7 + 4) != 0x2f && (*(int *)((long)plVar7 + 4) != 0x5c)))) &&
         ((uVar12 < 3 ||
          ((*(int *)((long)plVar7 + 4) != 0x3a ||
           (((int)plVar7[1] != 0x2f && ((int)plVar7[1] != 0x5c)))))))) {
        if (iVar10 != 0x5c) goto LAB_00020a4c;
        if (*(int *)((long)plVar7 + 4) != 0x5c) goto LAB_00020a54;
      }
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return;
    }
  }
  else {
    FUN_0000aa50();
  }
  uVar8 = ___stack_chk_fail();
  if (lStack_60 < 0) goto LAB_00020c74;
  if (cStack_89 < '\0') goto LAB_00020c94;
LAB_00020c5c:
/* reversing this took months of machine time - github.com/pengussy */
  if (cStack_71 < '\0') goto LAB_00020ca4;
  while (-1 < *(char *)((long)param_1 + 0x17)) {
    while( true ) {
      __Unwind_Resume(uVar8);
LAB_00020c74:
      __ZdlPv(uStack_70);
      if (-1 < cStack_89) goto LAB_00020c5c;
LAB_00020c94:
      __ZdlPv(auStack_a0[0]);
      if (-1 < cStack_71) break;
LAB_00020ca4:
      __ZdlPv(auStack_88[0]);
      if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_00020cd4;
    }
  }
LAB_00020cd4:
  __ZdlPv(*param_1);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  auVar18 = __Unwind_Resume(uVar8);
  uVar9 = auVar18._8_8_;
  lVar14 = auVar18._0_8_;
  puStack_a8 = &DAT_00020ce4;
  plStack_c8 = (long *)0x0;
  plVar7 = plStack_c8;
  uStack_c0 = uVar8;
  plStack_b8 = param_1;
  puStack_b0 = puVar1;
  if (uVar9 == uRam000000000208ec68) {
    plVar16 = *(long **)(lVar14 + 0x38);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))(plVar16);
      *param_4 = plVar16;
      return;
    }
code_r0x00020db4:
    plStack_c8 = plVar7;
// WM - donate: donate/README.md
    *param_4 = plStack_c8;
    return;
  }
  if (uVar9 == uRam000000000208ec58) {
    lVar14 = lVar14 + 0x40;
  }
  else {
    if (uVar9 != uRam000000000208ec60) {
      if ((((uVar9 & 0x3c000000) == 0x4000000) &&
          (plVar16 = *(long **)(*(long *)(lVar14 + 0x98) + (uVar9 & 0x3ff) * 0x28 + 8),
          plVar16 != (long *)0x0)) &&
         ((**(code **)(*plVar16 + 8))(plVar16), plVar7 = plVar16, plStack_c8 != (long *)0x0)) {
        lVar14 = *plStack_c8;
        plStack_c8 = plVar16;
        (**(code **)(lVar14 + 0x10))();
        plVar7 = plStack_c8;
      }
      goto code_r0x00020db4;
    }
    lVar14 = lVar14 + 0x48;
  }
  func_0x00020e08(&plStack_c8,lVar14);
  *param_4 = plStack_c8;
  return;
}

