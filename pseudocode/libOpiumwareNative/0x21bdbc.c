/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x21bdbc:a280005b01
 */

void FUN_0021bdbc(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
// WM - no support for modified copies
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_68;
  
  if (0x48 < (ulong)param_1[4]) {
    param_1[4] = param_1[4] - 0x49;
LAB_0021bdf0:
    uStack_68 = *(undefined8 *)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    func_0x0012d800(param_1,&uStack_68);
    return;
  }
  puVar17 = (undefined8 *)param_1[2];
  puVar10 = (undefined8 *)param_1[3];
  puVar16 = (undefined8 *)param_1[1];
  uVar18 = (long)puVar17 - (long)puVar16;
  uVar12 = (long)puVar10 - *param_1;
  if (uVar18 < uVar12) {
    if (puVar10 != puVar17) {
      uStack_68 = __Znwm(0xff8);
      func_0x0012d800(param_1,&uStack_68);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      return;
    }
    uStack_68 = __Znwm(0xff8);
    func_0x0012d970(param_1,&uStack_68);
    goto LAB_0021bdf0;
  }
  uVar12 = (long)uVar12 >> 2;
  if (puVar10 == (undefined8 *)*param_1) {
    uVar12 = 1;
  }
  if (uVar12 >> 0x3d != 0) {
    uVar4 = func_0x0000a888();
    __ZdlPv();
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    auVar26 = __Unwind_Resume(uVar4);
    plVar7 = auVar26._8_8_;
    lVar5 = auVar26._0_8_;
    uVar12 = *(ulong *)(lVar5 + 0x28);
    if (param_4 <= uVar12) {
      plStack_b0 = (long *)(*(long *)(lVar5 + 8) + (*(ulong *)(lVar5 + 0x20) / 0x49) * 8);
      if (*(long *)(lVar5 + 0x10) == *(long *)(lVar5 + 8)) {
        lStack_a8 = 0;
      }
      else {
        lStack_a8 = *plStack_b0 + (*(ulong *)(lVar5 + 0x20) % 0x49) * 0x38;
      }
      plVar8 = plVar7;
/* origin: github.com/pengussy */
      lVar9 = param_3;
      if (param_4 != 0) {
        param_4 = param_4 + (param_3 - *plVar7 >> 3) * 0x6db6db6db6db6db7;
        if ((long)param_4 < 1) {
          uVar12 = (0x48 - param_4) / 0x49;
          plVar8 = plVar7 + -uVar12;
          lVar9 = plVar7[-uVar12] + (uVar12 * 0x49 - (0x48 - param_4)) * 0x38 + 0xfc0;
        }
        else {
          plVar8 = plVar7 + param_4 / 0x49;
          lVar9 = plVar7[param_4 / 0x49] + (param_4 % 0x49) * 0x38;
        }
      }
      FUN_0021c83c(plVar7,param_3,plVar8,lVar9,&plStack_b0);
      func_0x0021c5c0(lVar5,plStack_b0,lStack_a8);
      return;
    }
    if (uVar12 == 0) {
      plVar8 = plVar7;
      lVar9 = param_3;
    }
    else {
      uVar12 = uVar12 + (param_3 - *plVar7 >> 3) * 0x6db6db6db6db6db7;
      if ((long)uVar12 < 1) {
        uVar18 = (0x48 - uVar12) / 0x49;
        plVar8 = plVar7 + -uVar18;
/*  stripping the watermark breaks the license  */
        lVar9 = plVar7[-uVar18] + (uVar18 * 0x49 - (0x48 - uVar12)) * 0x38 + 0xfc0;
      }
      else {
        plVar8 = plVar7 + uVar12 / 0x49;
        lVar9 = plVar7[uVar12 / 0x49] + (uVar12 % 0x49) * 0x38;
      }
    }
    plStack_b0 = (long *)(*(long *)(lVar5 + 8) + (*(ulong *)(lVar5 + 0x20) / 0x49) * 8);
    if (*(long *)(lVar5 + 0x10) == *(long *)(lVar5 + 8)) {
      lStack_a8 = 0;
    }
    else {
      lStack_a8 = *plStack_b0 + (*(ulong *)(lVar5 + 0x20) % 0x49) * 0x38;
    }
    FUN_0021c83c(plVar7,param_3,plVar8,lVar9,&plStack_b0);
    func_0x0021c368(lVar5,plVar8,lVar9,param_4 - *(long *)(lVar5 + 0x28));
    return;
  }
  puVar3 = (undefined8 *)__Znwm(uVar12 * 8);
  uVar4 = __Znwm(0xff8);
  puVar15 = (undefined8 *)((long)puVar3 + uVar18);
  puVar10 = puVar3 + uVar12;
  if (uVar18 == uVar12 * 8) {
    if (puVar17 != puVar16) {
      lVar5 = ((long)uVar18 >> 3) + 1;
      puVar15 = puVar15 + -((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
      goto LAB_0021bea8;
    }
    puVar6 = (undefined8 *)__Znwm(8);
    puVar10 = puVar6 + 1;
    __ZdlPv(puVar3);
    puVar16 = (undefined8 *)param_1[1];
    puVar17 = (undefined8 *)param_1[2];
    puVar19 = puVar6 + 1;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    *puVar6 = uVar4;
    puVar15 = puVar6;
    if (puVar17 == puVar16) goto LAB_0021bebc;
  }
  else {
LAB_0021bea8:
    puVar19 = puVar15 + 1;
    *puVar15 = uVar4;
    puVar6 = puVar3;
    if (puVar17 == puVar16) goto LAB_0021bebc;
  }
  do {
    if (puVar15 == puVar6) {
      if (puVar19 < puVar10) {
        lVar5 = ((long)puVar10 - (long)puVar19 >> 3) + 1;
        puVar16 = (undefined8 *)
                  ((long)(puVar19 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1)) -
                  ((long)puVar19 - (long)puVar15));
        _memmove(puVar16,puVar15);
        puVar15 = puVar16;
        puVar19 = puVar19 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
      }
      else {
        uVar12 = (long)puVar10 - (long)puVar15 >> 2;
// watermarked copy - do not remove
        if ((long)puVar10 - (long)puVar15 == 0) {
          uVar12 = 1;
        }
        if (uVar12 >> 0x3d != 0) {
          func_0x0000a888();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x21c094);
          (*pcVar2)();
        }
        puVar3 = (undefined8 *)__Znwm(uVar12 << 3);
        uVar18 = uVar12 + 3 >> 2;
        puVar16 = puVar3 + uVar18;
        lVar5 = (long)puVar19 - (long)puVar15;
        puVar19 = puVar16;
        if (lVar5 != 0) {
          puVar19 = (undefined8 *)((long)puVar16 + lVar5);
          if ((lVar5 - 8U < 0x38) || ((long)puVar3 + (uVar18 * 8 - (long)puVar15) < 0x40)) {
            puVar10 = puVar16;
            puVar11 = puVar15;
          }
          else {
            uVar1 = (lVar5 - 8U >> 3) + 1;
            uVar13 = uVar1 & 0x3ffffffffffffff8;
            puVar10 = puVar16 + uVar13;
            puVar11 = puVar15 + uVar13;
            puVar14 = puVar3 + uVar18 + 4;
            puVar15 = puVar15 + 4;
            uVar18 = uVar13;
            do {
              uVar4 = puVar15[-4];
              uVar21 = puVar15[-1];
              uVar20 = puVar15[-2];
              uVar23 = puVar15[1];
              uVar22 = *puVar15;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
              uVar25 = puVar15[3];
              uVar24 = puVar15[2];
              puVar14[-3] = puVar15[-3];
              puVar14[-4] = uVar4;
              puVar14[-1] = uVar21;
              puVar14[-2] = uVar20;
              puVar14[1] = uVar23;
              *puVar14 = uVar22;
              puVar14[3] = uVar25;
              puVar14[2] = uVar24;
              uVar18 = uVar18 - 8;
              puVar14 = puVar14 + 8;
              puVar15 = puVar15 + 8;
            } while (uVar18 != 0);
            if (uVar1 == uVar13) goto LAB_0021c02c;
          }
          do {
            puVar15 = puVar10 + 1;
            *puVar10 = *puVar11;
            puVar10 = puVar15;
            puVar11 = puVar11 + 1;
          } while (puVar15 != puVar19);
        }
LAB_0021c02c:
        puVar10 = puVar3 + uVar12;
        __ZdlPv(puVar6);
        puVar6 = puVar3;
        puVar15 = puVar16;
      }
    }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    puVar17 = puVar17 + -1;
    puVar15 = puVar15 + -1;
    *puVar15 = *puVar17;
  } while (puVar17 != (undefined8 *)param_1[1]);
LAB_0021bebc:
  lVar5 = *param_1;
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar15;
  param_1[2] = (long)puVar19;
  param_1[3] = (long)puVar10;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_01f20590)();
  return;
}

