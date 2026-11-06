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
 *  file-id: 0x3371c:1bd63c7fd0
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00033c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00033c98) */
/* WARNING: Removing unreachable block (ram,0x00033ca0) */
/* WARNING: Removing unreachable block (ram,0x00033ce8) */
/* WARNING: Removing unreachable block (ram,0x00033cf0) */
/* WARNING: Removing unreachable block (ram,0x00033cf4) */
/* WARNING: Removing unreachable block (ram,0x00033cac) */
/* WARNING: Removing unreachable block (ram,0x00033cbc) */
/* WARNING: Removing unreachable block (ram,0x00033ccc) */
/* WARNING: Removing unreachable block (ram,0x00033cd4) */

void FUN_0003371c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
/* if you paid for this, you were scammed */
  long *plVar19;
  ulong *puVar20;
  long *plVar21;
  ulong *puVar22;
  uint uVar23;
  int iVar24;
  ulong unaff_x21;
  ulong *unaff_x22;
  long lVar25;
  long *plVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined1 auVar35 [16];
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  char cStack_89;
  undefined2 uStack_88;
  undefined6 uStack_86;
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
/* WM - stripping the watermark breaks the license */
  long lStack_60;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined8 uStack_48;
  
  lVar15 = (long)register0x00000008 + -0x10;
  uStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      unaff_x22 = param_1;
    }
    else {
      uVar18 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar17 = 0x19;
      if (uVar18 != 0x18) {
        uVar17 = uVar18;
      }
      unaff_x22 = (ulong *)__Znwm(uVar17);
      *param_1 = (ulong)unaff_x22;
      param_1[1] = param_3;
      param_1[2] = uVar17 | 0x8000000000000000;
    }
    _memcpy(unaff_x22,param_2,param_3);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    *(undefined1 *)((long)unaff_x22 + param_3) = 0;
    puVar13 = (ulong *)param_1[1];
    puVar10 = (ulong *)(ulong)*(byte *)((long)param_1 + 0x17);
    bVar6 = (char)*(byte *)((long)param_1 + 0x17) < '\0';
    puVar20 = puVar13;
    if (!bVar6) {
      puVar20 = puVar10;
    }
    if (puVar20 != (ulong *)0x0) {
      puVar20 = (ulong *)*param_1;
      puVar2 = (ulong *)((long)&MACH_HEADER.magic + 1);
      puVar22 = (ulong *)0x0;
      do {
        puVar16 = puVar2;
        puVar2 = puVar20;
        if (!bVar6) {
          puVar2 = param_1;
        }
        if (*(char *)((long)puVar2 + (long)puVar22) == '\\') {
          *(undefined1 *)((long)puVar2 + (long)puVar22) = 0x2f;
/* wm:found on a paste site? it was re-uploaded illegally */
          puVar10 = (ulong *)(ulong)*(byte *)((long)param_1 + 0x17);
          puVar20 = (ulong *)*param_1;
          puVar13 = (ulong *)param_1[1];
        }
        bVar6 = (char)puVar10 < '\0';
        puVar1 = puVar13;
        if (!bVar6) {
          puVar1 = puVar10;
        }
        puVar2 = (ulong *)(ulong)((int)puVar16 + 1);
        puVar22 = puVar16;
      } while (puVar16 < puVar1);
      if (puVar1 != (ulong *)0x0) {
        param_2 = 0;
        unaff_x22 = (ulong *)0x0;
        do {
          puVar20 = (ulong *)*param_1;
          if (!bVar6) {
            puVar20 = param_1;
          }
          iVar24 = (int)unaff_x22;
          uVar23 = (uint)param_2;
          if ((iVar24 == 0) || (*(char *)((long)puVar20 + (long)unaff_x22) != '/')) {
LAB_00033840:
            param_2 = (ulong)(uVar23 | *(char *)((long)puVar20 + (long)unaff_x22) != '/');
            unaff_x22 = (ulong *)(ulong)(iVar24 + 1);
          }
/* WM - reversing this took months of machine time */
          else {
            if (bVar6) {
              if ((*(char *)((long)*param_1 + (ulong)(iVar24 - 1U)) == '/' & uVar23) == 0)
              goto LAB_00033840;
            }
            else if ((*(char *)((long)param_1 + (ulong)(iVar24 - 1U)) == '/' & uVar23) != 1)
            goto LAB_00033840;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                      (param_1,unaff_x22,1);
            puVar10 = (ulong *)(ulong)*(byte *)((long)param_1 + 0x17);
            puVar13 = (ulong *)param_1[1];
          }
          bVar6 = (char)puVar10 < '\0';
          puVar20 = puVar13;
          if (!bVar6) {
            puVar20 = puVar10;
          }
        } while (unaff_x22 < puVar20);
      }
    }
    puVar20 = (ulong *)*param_1;
// stripping the watermark breaks the license
    if (-1 < (char)puVar10) {
      puVar13 = puVar10;
      puVar20 = param_1;
    }
    if (puVar13 == (ulong *)0x0) {
LAB_00033974:
      cStack_71 = '\x01';
      uStack_88 = 0x2e;
      cStack_89 = '\x01';
      uStack_a0 = 0x2f;
      puVar7 = (undefined8 *)
               __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                         (&uStack_88,&uStack_a0,1);
      uStack_68 = puVar7[1];
      uStack_70 = *puVar7;
      lStack_60 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      uVar18 = param_1[1];
      puVar20 = (ulong *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar18 = (ulong)*(byte *)((long)param_1 + 0x17);
        puVar20 = param_1;
      }
      puVar20 = (ulong *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                   (&uStack_70,puVar20,uVar18);
      param_2 = *puVar20;
      uStack_58 = (undefined7)puVar20[1];
      uStack_51 = (undefined1)*(undefined8 *)((long)puVar20 + 0xf);
      uStack_50 = (undefined7)((ulong)*(undefined8 *)((long)puVar20 + 0xf) >> 8);
      bVar4 = *(byte *)((long)puVar20 + 0x17);
      unaff_x22 = (ulong *)(ulong)bVar4;
// WM - thanks for reading - discord.gg/sdkhDjTex
      puVar20[1] = 0;
      puVar20[2] = 0;
      *puVar20 = 0;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      *param_1 = param_2;
      param_1[1] = CONCAT17(uStack_51,uStack_58);
      *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_50,uStack_51);
      *(byte *)((long)param_1 + 0x17) = bVar4;
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      if (cStack_89 < '\0') {
        __ZdlPv(CONCAT62(uStack_9e,uStack_a0));
      }
      if (cStack_71 < '\0') {
        __ZdlPv(CONCAT62(uStack_86,uStack_88));
      }
      uVar17 = (ulong)*(byte *)((long)param_1 + 0x17);
      bVar6 = (char)*(byte *)((long)param_1 + 0x17) < '\0';
      uVar11 = param_1[1];
      uVar18 = uVar11;
      if (!bVar6) {
        uVar18 = uVar17;
      }
      if (uVar18 != 0) {
        bVar4 = 0;
        param_2 = 0;
        do {
          puVar20 = (ulong *)*param_1;
          if (!bVar6) {
            puVar20 = param_1;
          }
          iVar24 = (int)param_2;
          if ((iVar24 == 0) || (*(char *)((long)puVar20 + param_2) != '/')) {
/* watermarked copy - do not remove */
LAB_00033a60:
            bVar4 = bVar4 | *(char *)((long)puVar20 + param_2) != '/';
            param_2 = (ulong)(iVar24 + 1);
          }
          else {
            if (bVar6) {
              cVar5 = *(char *)((long)*param_1 + (ulong)(iVar24 - 1U));
            }
            else {
              cVar5 = *(char *)((long)param_1 + (ulong)(iVar24 - 1U));
            }
            if (!(bool)(cVar5 == '/' & bVar4)) goto LAB_00033a60;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                      (param_1,param_2,1);
            uVar17 = (ulong)*(byte *)((long)param_1 + 0x17);
            uVar11 = param_1[1];
          }
          bVar6 = (char)uVar17 < '\0';
          uVar18 = uVar11;
          if (!bVar6) {
            uVar18 = uVar17;
          }
        } while (param_2 < uVar18);
      }
    }
// watermarked copy - do not remove
    else if (puVar13 == (ulong *)((long)&MACH_HEADER.magic + 1)) {
      cVar5 = (char)*puVar20;
      if (cVar5 != '.') {
LAB_0003396c:
        if (cVar5 != '/') goto LAB_00033974;
      }
    }
    else {
      cVar5 = (char)*puVar20;
      if (((cVar5 != '.') ||
          ((*(char *)((long)puVar20 + 1) != '/' && (*(char *)((long)puVar20 + 1) != '\\')))) &&
         ((puVar13 < (ulong *)((long)&MACH_HEADER.magic + 3) ||
          ((*(char *)((long)puVar20 + 1) != ':' ||
           ((*(char *)((long)puVar20 + 2) != '/' && (*(char *)((long)puVar20 + 2) != '\\')))))))) {
        if (cVar5 != '\\') goto LAB_0003396c;
        if (*(char *)((long)puVar20 + 1) != '\\') goto LAB_00033974;
      }
    }
    unaff_x21 = param_2;
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
      return;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    }
  }
  else {
    FUN_0000aa50();
  }
  uVar8 = ___stack_chk_fail();
  if (lStack_60 < 0) goto LAB_00033b8c;
  if (cStack_89 < '\0') goto LAB_00033bac;
LAB_00033b74:
  if (cStack_71 < '\0') goto LAB_00033bbc;
  while (-1 < *(char *)((long)param_1 + 0x17)) {
    while( true ) {
      __Unwind_Resume(uVar8);
LAB_00033b8c:
      __ZdlPv(uStack_70);
      if (-1 < cStack_89) goto LAB_00033b74;
LAB_00033bac:
      __ZdlPv(CONCAT62(uStack_9e,uStack_a0));
      if (-1 < cStack_71) break;
LAB_00033bbc:
      __ZdlPv(CONCAT62(uStack_86,uStack_88));
      if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_00033bec;
    }
  }
LAB_00033bec:
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  __ZdlPv(*param_1);
  auVar35 = __Unwind_Resume(uVar8);
  puVar7 = auVar35._8_8_;
  plVar26 = auVar35._0_8_;
  puStack_a8 = &DAT_00033bfc;
  lVar25 = plVar26[1] - *plVar26;
  uVar18 = (lVar25 >> 4) + 1;
  puStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  uStack_c0 = uVar8;
  puStack_b8 = param_1;
  lStack_b0 = lVar15;
  if (uVar18 >> 0x3c == 0) {
    plStack_d8 = plVar26 + 2;
    uVar11 = *plStack_d8 - *plVar26;
    uVar17 = (long)uVar11 >> 3;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    if (uVar17 <= uVar18) {
      uVar17 = uVar18;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar17 = 0xfffffffffffffff;
    }
    if (uVar17 >> 0x3c != 0) goto code_r0x00033d10;
    lStack_f8 = __Znwm(uVar17 * 0x10);
    puStack_f0 = (undefined8 *)(lStack_f8 + lVar25);
    uVar28 = puVar7[1];
    uVar8 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puStack_f0[1] = uVar28;
    *puStack_f0 = uVar8;
    puStack_e8 = puStack_f0 + 2;
    lStack_e0 = lStack_f8 + uVar17 * 0x10;
    auVar35._8_8_ = &lStack_f8;
    auVar35._0_8_ = plVar26;
  }
  else {
    FUN_0000abb4();
code_r0x00033d10:
    uVar8 = func_0x0000a888();
    func_0x00033ec4(&lStack_f8);
    __Unwind_Resume(uVar8);
    func_0x00006858();
    auVar35 = func_0x00006858();
  }
  puVar9 = auVar35._8_8_;
  puVar7 = auVar35._0_8_;
  lVar25 = puVar9[1];
  plVar26 = (long *)*puVar7;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  plVar3 = (long *)puVar7[1];
  plVar27 = (long *)(lVar25 - ((long)plVar3 - (long)plVar26));
  lVar15 = (long)plVar3 - (long)plVar26;
  if (lVar15 == 0) goto code_r0x00033e68;
  uVar18 = lVar15 - 0x10;
  plVar12 = plVar27;
  plVar14 = plVar26;
  if ((uVar18 < 0x50) ||
     (lVar29 = (uVar18 & 0xfffffffffffffff0) + 0x10,
     plVar27 < (long *)((long)plVar26 + lVar29) && plVar26 < (long *)(lVar25 + (lVar29 - lVar15))))
  {
code_r0x00033df8:
    do {
      *plVar12 = 0;
      lVar15 = *plVar14;
      *plVar14 = 0;
      *plVar12 = lVar15;
      plVar12[1] = 0;
      lVar15 = plVar14[1];
      plVar14[1] = 0;
      plVar12[1] = lVar15;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      plVar14 = plVar14 + 2;
      plVar12 = plVar12 + 2;
    } while (plVar14 != plVar3);
  }
  else {
    uVar18 = (uVar18 >> 4) + 1;
    uVar11 = uVar18 & 0x1ffffffffffffffc;
    plVar12 = plVar27 + uVar11 * 2;
    plVar14 = plVar26 + uVar11 * 2;
    plVar19 = (long *)(lVar25 + (lVar15 >> 4) * -0x10 + 0x20);
    plVar21 = plVar26 + 4;
    uVar17 = uVar11;
    do {
      lVar25 = plVar21[-3];
      lVar15 = plVar21[-4];
      lVar30 = plVar21[-1];
      lVar29 = plVar21[-2];
      lVar32 = plVar21[1];
      lVar31 = *plVar21;
      lVar34 = plVar21[3];
      lVar33 = plVar21[2];
      plVar21[-3] = 0;
      plVar21[-4] = 0;
      plVar21[-1] = 0;
      plVar21[-2] = 0;
      plVar21[1] = 0;
      *plVar21 = 0;
      plVar21[3] = 0;
      plVar21[2] = 0;
      plVar19[-3] = lVar25;
      plVar19[-4] = lVar15;
      plVar19[-1] = lVar30;
      plVar19[-2] = lVar29;
      plVar19[1] = lVar32;
      *plVar19 = lVar31;
      plVar19[3] = lVar34;
      plVar19[2] = lVar33;
      uVar17 = uVar17 - 4;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      plVar19 = plVar19 + 8;
      plVar21 = plVar21 + 8;
    } while (uVar17 != 0);
    if (uVar18 != uVar11) goto code_r0x00033df8;
  }
  do {
    if ((long *)plVar26[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar26[1] + 0x10))();
      plVar26[1] = 0;
    }
    if ((long *)*plVar26 != (long *)0x0) {
      (**(code **)(*(long *)*plVar26 + 0x10))();
      *plVar26 = 0;
    }
    plVar26 = plVar26 + 2;
  } while (plVar26 != plVar3);
code_r0x00033e68:
  puVar9[1] = plVar27;
  uVar8 = *puVar7;
  puVar7[1] = uVar8;
  *puVar7 = puVar9[1];
  puVar9[1] = uVar8;
  uVar8 = puVar7[1];
  puVar7[1] = puVar9[2];
  puVar9[2] = uVar8;
  uVar8 = puVar7[2];
  puVar7[2] = puVar9[3];
  puVar9[3] = uVar8;
  *puVar9 = puVar9[1];
  return;
}

