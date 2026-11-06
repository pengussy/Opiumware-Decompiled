/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x12d4cc:1b4a1bbaf9
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0012d518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0012d554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0012d62c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0012d558) */
/* WARNING: Removing unreachable block (ram,0x0012d51c) */
/* WARNING: Removing unreachable block (ram,0x0012d630) */

long * FUN_0012d4cc(long *param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ***pppuVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 ***unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar18;
  undefined8 unaff_x23;
  long *plVar19;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_140 [128];
  undefined8 ****ppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 ***pppuStack_68;
  
  puVar3 = auStack_70;
  ppppuVar1 = (undefined8 ****)(auStack_70 + 0x60);
  plVar9 = param_1;
  if (0x7f < (ulong)param_1[4]) {
    param_1[4] = param_1[4] - 0x80;
    pppuStack_68 = (undefined8 ***)*(undefined8 ***)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    unaff_x20 = &pppuStack_68;
    puVar21 = (undefined *)0x12d51c;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
code_r0x0012d800:
    puVar3 = auStack_140 + 0x80;
    ppppuVar20 = &ppppuStack_80;
    plVar19 = (long *)plVar9[2];
    plVar8 = plVar9;
    if (plVar19 != (long *)plVar9[3]) goto code_r0x0012d948;
    unaff_x21 = (long *)*plVar9;
    unaff_x22 = (long *)plVar9[1];
    ppppuStack_80 = ppppuVar1;
    puStack_78 = puVar21;
    if (unaff_x21 <= unaff_x22 && (long)unaff_x22 - (long)unaff_x21 != 0) {
      lVar5 = ((long)unaff_x22 - (long)unaff_x21 >> 3) + 1;
      uVar14 = (ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1;
      plVar8 = (long *)_memmove(unaff_x22 + -uVar14,unaff_x22,(long)plVar19 - (long)unaff_x22);
      plVar19 = plVar19 + -uVar14;
      plVar9[1] = plVar9[1] + uVar14 * -8;
      goto code_r0x0012d948;
    }
    uVar14 = (long)plVar19 - (long)unaff_x21 >> 2;
    if ((long)plVar19 - (long)unaff_x21 == 0) {
      uVar14 = 1;
    }
    if (uVar14 >> 0x3d != 0) {
      puVar21 = &SUB_0012d970;
      auVar28 = func_0x0000a888();
      pppuVar10 = auVar28._8_8_;
      param_1 = auVar28._0_8_;
      goto code_r0x0012d970;
    }
    uVar11 = uVar14 >> 2;
    plVar8 = (long *)__Znwm(uVar14 * 8);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    plVar18 = plVar8 + uVar11;
    lVar5 = (long)plVar19 - (long)unaff_x22;
    plVar19 = plVar18;
    if (lVar5 != 0) {
      plVar19 = (long *)((long)plVar18 + lVar5);
      plVar4 = unaff_x22;
      if (lVar5 - 8U < 0x38) {
        plVar15 = plVar18;
      }
      else {
        plVar15 = plVar18;
        if (0x3f < (long)plVar8 + (uVar11 * 8 - (long)unaff_x22)) {
          uVar12 = (lVar5 - 8U >> 3) + 1;
          uVar16 = uVar12 & 0x3ffffffffffffff8;
          plVar15 = plVar18 + uVar16;
          plVar4 = unaff_x22 + uVar16;
          plVar6 = plVar8 + uVar11 + 4;
          plVar13 = unaff_x22 + 4;
          uVar11 = uVar16;
          do {
            lVar5 = plVar13[-4];
            lVar23 = plVar13[-1];
            lVar22 = plVar13[-2];
            lVar25 = plVar13[1];
            lVar24 = *plVar13;
            lVar27 = plVar13[3];
            lVar26 = plVar13[2];
            plVar6[-3] = plVar13[-3];
            plVar6[-4] = lVar5;
            plVar6[-1] = lVar23;
// reversing this took months of machine time
            plVar6[-2] = lVar22;
            plVar6[1] = lVar25;
            *plVar6 = lVar24;
            plVar6[3] = lVar27;
            plVar6[2] = lVar26;
            uVar11 = uVar11 - 8;
            plVar6 = plVar6 + 8;
            plVar13 = plVar13 + 8;
          } while (uVar11 != 0);
          if (uVar12 == uVar16) goto code_r0x0012d930;
        }
      }
      do {
        plVar6 = plVar15 + 1;
        *plVar15 = *plVar4;
        plVar15 = plVar6;
        plVar4 = plVar4 + 1;
      } while (plVar6 != plVar19);
    }
code_r0x0012d930:
    *plVar9 = (long)plVar8;
    plVar9[1] = (long)plVar18;
    plVar9[2] = (long)plVar19;
    plVar9[3] = (long)(plVar8 + uVar14);
    if (unaff_x21 != (long *)0x0) {
      plVar8 = (long *)__ZdlPv(unaff_x21);
// WM - chat: discord.gg/sdkhDjTex
      plVar19 = (long *)plVar9[2];
    }
code_r0x0012d948:
    *plVar19 = (long)*unaff_x20;
    plVar9[2] = (long)(plVar19 + 1);
    return plVar8;
  }
  plVar19 = (long *)param_1[2];
  plVar8 = (long *)param_1[3];
  plVar18 = (long *)param_1[1];
  unaff_x25 = (long)plVar19 - (long)plVar18;
  uVar14 = (long)plVar8 - *param_1;
  if (unaff_x25 < uVar14) {
    if (plVar8 != plVar19) {
      pppuStack_68 = (undefined8 ***)__Znwm(0x1000);
      unaff_x20 = &pppuStack_68;
      puVar21 = (undefined *)0x12d558;
      goto code_r0x0012d800;
    }
    pppuStack_68 = (undefined8 ***)__Znwm(0x1000);
    pppuVar10 = &pppuStack_68;
    puVar21 = (undefined *)0x12d630;
    ppppuVar20 = ppppuVar1;
code_r0x0012d970:
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(ulong *)(puVar3 + -0x48) = unaff_x25;
    *(long **)(puVar3 + -0x40) = plVar19;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(long **)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 ****)(puVar3 + -0x20) = unaff_x20;
    *(long **)(puVar3 + -0x18) = plVar9;
    *(undefined8 *****)(puVar3 + -0x10) = ppppuVar20;
    *(undefined **)(puVar3 + -8) = puVar21;
/*  proprietary - see LICENSE - do not sell  */
    plVar9 = (long *)*param_1;
    plVar19 = (long *)param_1[1];
    if (plVar19 != plVar9) {
      plVar18 = param_1;
      plVar8 = plVar19;
      goto code_r0x0012dacc;
    }
    uVar14 = param_1[2];
    uVar11 = param_1[3];
    if (uVar14 < uVar11) {
      lVar5 = ((long)(uVar11 - uVar14) >> 3) + 1;
      uVar14 = (lVar5 - (lVar5 >> 0x3f)) * 4 & 0xfffffffffffffff8;
      plVar8 = (long *)(uVar14 + (long)plVar19);
      plVar18 = (long *)_memmove(plVar8,plVar19);
      param_1[2] = param_1[2] + uVar14;
      goto code_r0x0012dacc;
    }
    uVar12 = (long)(uVar11 - (long)plVar19) >> 2;
    if (uVar11 - (long)plVar19 == 0) {
      uVar12 = 1;
    }
    if (uVar12 >> 0x3d != 0) {
/* origin: github.com/pengussy - github.com/pengussy */
      plVar9 = (long *)func_0x0000a888();
      *(undefined8 ****)(puVar3 + -0x70) = pppuVar10;
      *(long **)(puVar3 + -0x68) = param_1;
      *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x58) = &DAT_0012daf4;
      *plVar9 = (long)&UNK_01dbf030;
      plVar19 = (long *)plVar9[2];
      if (plVar19 != (long *)0x0) {
        LOAcquire();
        lVar5 = plVar19[1];
        plVar19[1] = lVar5 + -1;
        LORelease();
        if (lVar5 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
          return plVar9;
        }
      }
      return plVar9;
    }
    uVar11 = uVar12 + 3 >> 2;
    plVar18 = (long *)__Znwm(uVar12 * 8);
/* wm:found on a paste site? it was re-uploaded illegally */
    plVar8 = plVar18 + uVar11;
    lVar5 = uVar14 - (long)plVar19;
    plVar4 = plVar8;
    if (lVar5 != 0) {
      plVar4 = (long *)((long)plVar8 + lVar5);
      plVar15 = plVar8;
      plVar6 = plVar19;
      if ((0x37 < lVar5 - 8U) && (0x3f < (long)plVar18 + (uVar11 * 8 - (long)plVar19))) {
        uVar14 = (lVar5 - 8U >> 3) + 1;
        uVar16 = uVar14 & 0x3ffffffffffffff8;
        plVar15 = plVar18 + uVar11 + 4;
        plVar6 = plVar19 + 4;
        uVar11 = uVar16;
        do {
          lVar5 = plVar6[-4];
          lVar23 = plVar6[-1];
          lVar22 = plVar6[-2];
          lVar25 = plVar6[1];
          lVar24 = *plVar6;
          lVar27 = plVar6[3];
          lVar26 = plVar6[2];
          plVar15[-3] = plVar6[-3];
          plVar15[-4] = lVar5;
          plVar15[-1] = lVar23;
          plVar15[-2] = lVar22;
          plVar15[1] = lVar25;
          *plVar15 = lVar24;
          plVar15[3] = lVar27;
          plVar15[2] = lVar26;
          uVar11 = uVar11 - 8;
          plVar15 = plVar15 + 8;
          plVar6 = plVar6 + 8;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        } while (uVar11 != 0);
        plVar15 = plVar8 + uVar16;
        plVar6 = plVar19 + uVar16;
        if (uVar14 == uVar16) goto code_r0x0012dab4;
      }
      do {
        plVar13 = plVar15 + 1;
        *plVar15 = *plVar6;
        plVar15 = plVar13;
        plVar6 = plVar6 + 1;
      } while (plVar13 != plVar4);
    }
code_r0x0012dab4:
    *param_1 = (long)plVar18;
    param_1[1] = (long)plVar8;
    param_1[2] = (long)plVar4;
    param_1[3] = (long)(plVar18 + uVar12);
    if (plVar19 != (long *)0x0) {
      plVar18 = (long *)__ZdlPv(plVar9);
      plVar8 = (long *)param_1[1];
    }
code_r0x0012dacc:
    plVar8[-1] = (long)*pppuVar10;
    param_1[1] = (long)(plVar8 + -1);
    return plVar18;
  }
  uVar14 = (long)uVar14 >> 2;
  if (plVar8 == (long *)*param_1) {
    uVar14 = 1;
  }
  if (uVar14 >> 0x3d != 0) {
    uVar7 = func_0x0000a888();
    __ZdlPv();
    __ZdlPv();
    uVar7 = __Unwind_Resume(uVar7);
    __ZdlPv();
/* chat: discord.gg/sdkhDjTex */
    uVar7 = __Unwind_Resume(uVar7);
    __ZdlPv();
    uVar7 = __Unwind_Resume(uVar7);
    __ZdlPv();
    puVar21 = &SUB_0012d800;
    auVar28 = __Unwind_Resume(uVar7);
    unaff_x20 = auVar28._8_8_;
    plVar9 = auVar28._0_8_;
    goto code_r0x0012d800;
  }
  plVar4 = (long *)__Znwm(uVar14 * 8);
  lVar5 = __Znwm(0x1000);
  plVar8 = (long *)((long)plVar4 + unaff_x25);
  plVar9 = plVar4 + uVar14;
  if (unaff_x25 == uVar14 * 8) {
    if (plVar19 != plVar18) {
      lVar22 = ((long)unaff_x25 >> 3) + 1;
      plVar8 = plVar8 + -((ulong)(lVar22 - (lVar22 >> 0x3f)) >> 1);
      goto LAB_0012d5b8;
    }
    plVar6 = (long *)__Znwm(8);
    plVar9 = plVar6 + 1;
    __ZdlPv(plVar4);
    plVar18 = (long *)param_1[1];
    plVar19 = (long *)param_1[2];
    plVar15 = plVar6 + 1;
    *plVar6 = lVar5;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    plVar8 = plVar6;
    if (plVar19 == plVar18) goto LAB_0012d5cc;
  }
  else {
LAB_0012d5b8:
    plVar15 = plVar8 + 1;
    *plVar8 = lVar5;
    plVar6 = plVar4;
    if (plVar19 == plVar18) goto LAB_0012d5cc;
  }
  do {
    if (plVar8 == plVar6) {
      if (plVar15 < plVar9) {
        lVar5 = ((long)plVar9 - (long)plVar15 >> 3) + 1;
        plVar18 = (long *)((long)(plVar15 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1)) -
                          ((long)plVar15 - (long)plVar8));
        _memmove(plVar18,plVar8);
        plVar8 = plVar18;
        plVar15 = plVar15 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
      }
      else {
        uVar14 = (long)plVar9 - (long)plVar8 >> 2;
        if ((long)plVar9 - (long)plVar8 == 0) {
          uVar14 = 1;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        }
        if (uVar14 >> 0x3d != 0) {
          func_0x0000a888();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x12d7a4);
          (*pcVar2)();
        }
        plVar4 = (long *)__Znwm(uVar14 << 3);
        uVar11 = uVar14 + 3 >> 2;
        plVar18 = plVar4 + uVar11;
        lVar5 = (long)plVar15 - (long)plVar8;
        plVar15 = plVar18;
        if (lVar5 != 0) {
          plVar15 = (long *)((long)plVar18 + lVar5);
          if ((lVar5 - 8U < 0x38) || ((long)plVar4 + (uVar11 * 8 - (long)plVar8) < 0x40)) {
            plVar9 = plVar18;
            plVar13 = plVar8;
          }
          else {
            uVar12 = (lVar5 - 8U >> 3) + 1;
            uVar16 = uVar12 & 0x3ffffffffffffff8;
            plVar9 = plVar18 + uVar16;
            plVar13 = plVar8 + uVar16;
            plVar17 = plVar4 + uVar11 + 4;
            plVar8 = plVar8 + 4;
/*  stripping the watermark breaks the license  */
            uVar11 = uVar16;
            do {
              lVar5 = plVar8[-4];
              lVar23 = plVar8[-1];
              lVar22 = plVar8[-2];
              lVar25 = plVar8[1];
              lVar24 = *plVar8;
              lVar27 = plVar8[3];
              lVar26 = plVar8[2];
              plVar17[-3] = plVar8[-3];
              plVar17[-4] = lVar5;
              plVar17[-1] = lVar23;
              plVar17[-2] = lVar22;
              plVar17[1] = lVar25;
              *plVar17 = lVar24;
              plVar17[3] = lVar27;
/* WM - chat: discord.gg/sdkhDjTex */
              plVar17[2] = lVar26;
              uVar11 = uVar11 - 8;
              plVar17 = plVar17 + 8;
              plVar8 = plVar8 + 8;
            } while (uVar11 != 0);
            if (uVar12 == uVar16) goto LAB_0012d73c;
          }
          do {
            plVar8 = plVar9 + 1;
            *plVar9 = *plVar13;
            plVar9 = plVar8;
            plVar13 = plVar13 + 1;
          } while (plVar8 != plVar15);
        }
LAB_0012d73c:
        plVar9 = plVar4 + uVar14;
        __ZdlPv(plVar6);
        plVar6 = plVar4;
        plVar8 = plVar18;
      }
    }
    plVar19 = plVar19 + -1;
    plVar8 = plVar8 + -1;
    *plVar8 = *plVar19;
  } while (plVar19 != (long *)param_1[1]);
LAB_0012d5cc:
// WM - reversing this took months of machine time
  lVar5 = *param_1;
  *param_1 = (long)plVar6;
  param_1[1] = (long)plVar8;
  param_1[2] = (long)plVar15;
  param_1[3] = (long)plVar9;
  if (lVar5 == 0) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar9 = (long *)(*(code *)PTR___ZdlPv_01f20590)();
  return plVar9;
}

