/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x189ac4:42397cdebe
 */

long * FUN_00189ac4(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
// donate: donate/README.md
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_68;
  
  if (0xa9 < (ulong)param_1[4]) {
    param_1[4] = param_1[4] - 0xaa;
LAB_00189af8:
    uStack_68 = *(undefined8 *)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    plVar3 = (long *)func_0x0012d800(param_1,&uStack_68);
    return plVar3;
  }
  puVar14 = (undefined8 *)param_1[2];
  puVar8 = (undefined8 *)param_1[3];
  puVar15 = (undefined8 *)param_1[1];
  uVar17 = (long)puVar14 - (long)puVar15;
  uVar11 = (long)puVar8 - *param_1;
  if (uVar17 < uVar11) {
    if (puVar8 != puVar14) {
      uStack_68 = __Znwm(0xff0);
      plVar3 = (long *)func_0x0012d800(param_1,&uStack_68);
      return plVar3;
    }
    uStack_68 = __Znwm(0xff0);
    func_0x0012d970(param_1,&uStack_68);
    goto LAB_00189af8;
  }
  uVar11 = (long)uVar11 >> 2;
  if (puVar8 == (undefined8 *)*param_1) {
    uVar11 = 1;
// WM - proprietary - see LICENSE - do not sell
  }
  if (uVar11 >> 0x3d != 0) {
    uVar5 = func_0x0000a888();
    __ZdlPv();
    __ZdlPv();
    uVar5 = __Unwind_Resume(uVar5);
    __ZdlPv();
    uVar5 = __Unwind_Resume(uVar5);
    __ZdlPv();
    uVar5 = __Unwind_Resume(uVar5);
    __ZdlPv();
    plVar3 = (long *)__Unwind_Resume(uVar5);
    puVar14 = (undefined8 *)plVar3[1];
    puVar8 = (undefined8 *)plVar3[2];
    if (puVar8 == puVar14) {
      plVar3[5] = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = plVar3[4];
      puVar15 = puVar14 + uVar11 / 0xaa;
      puVar9 = (undefined8 *)*puVar15;
      puVar4 = puVar9 + (uVar11 % 0xaa) * 3;
      uVar11 = plVar3[5] + uVar11;
      puVar16 = (undefined8 *)(puVar14[uVar11 / 0xaa] + (uVar11 % 0xaa) * 0x18);
      if (puVar4 != puVar16) {
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            __ZdlPv(*puVar4);
            puVar9 = (undefined8 *)*puVar15;
            lVar6 = (long)(puVar4 + 3) - (long)puVar9;
          }
          else {
            lVar6 = (long)(puVar4 + 3) - (long)puVar9;
          }
          puVar4 = puVar4 + 3;
          if (lVar6 == 0xff0) {
            puVar15 = puVar15 + 1;
/* WM - no support for modified copies */
            puVar9 = (undefined8 *)*puVar15;
            puVar4 = puVar9;
          }
        } while (puVar4 != puVar16);
        puVar14 = (undefined8 *)plVar3[1];
        puVar8 = (undefined8 *)plVar3[2];
      }
      plVar3[5] = 0;
      lVar6 = (long)puVar8 - (long)puVar14;
      while (uVar11 = lVar6 >> 3, 2 < uVar11) {
        __ZdlPv(*puVar14);
        puVar8 = (undefined8 *)plVar3[2];
        puVar14 = (undefined8 *)(plVar3[1] + 8);
        plVar3[1] = (long)puVar14;
        lVar6 = (long)puVar8 - (long)puVar14;
      }
    }
    if (uVar11 == 1) {
      lVar6 = 0x55;
    }
    else {
      if (uVar11 != 2) goto code_r0x00189f38;
      lVar6 = 0xaa;
/*  more drops soon - github.com/pengussy  */
    }
    plVar3[4] = lVar6;
code_r0x00189f38:
    if (puVar14 != puVar8) {
      do {
        puVar15 = puVar14 + 1;
        __ZdlPv(*puVar14);
        puVar14 = puVar15;
      } while (puVar15 != puVar8);
      lVar6 = plVar3[1] - plVar3[2];
      if (lVar6 != 0) {
        plVar3[2] = plVar3[2] + (lVar6 + 7U & 0xfffffffffffffff8);
      }
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    return plVar3;
  }
  puVar4 = (undefined8 *)__Znwm(uVar11 * 8);
  uVar5 = __Znwm(0xff0);
  puVar9 = (undefined8 *)((long)puVar4 + uVar17);
  puVar8 = puVar4 + uVar11;
  if (uVar17 == uVar11 * 8) {
    if (puVar14 != puVar15) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      lVar6 = ((long)uVar17 >> 3) + 1;
      puVar9 = puVar9 + -((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
      goto LAB_00189bb0;
    }
    puVar7 = (undefined8 *)__Znwm(8);
    puVar8 = puVar7 + 1;
    __ZdlPv(puVar4);
    puVar15 = (undefined8 *)param_1[1];
    puVar14 = (undefined8 *)param_1[2];
    puVar16 = puVar7 + 1;
    *puVar7 = uVar5;
    puVar9 = puVar7;
    if (puVar14 == puVar15) goto LAB_00189bc4;
  }
  else {
LAB_00189bb0:
    puVar16 = puVar9 + 1;
    *puVar9 = uVar5;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    puVar7 = puVar4;
    if (puVar14 == puVar15) goto LAB_00189bc4;
  }
  do {
    if (puVar9 == puVar7) {
      if (puVar16 < puVar8) {
        lVar6 = ((long)puVar8 - (long)puVar16 >> 3) + 1;
        puVar15 = (undefined8 *)
                  ((long)(puVar16 + ((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1)) -
                  ((long)puVar16 - (long)puVar9));
        _memmove(puVar15,puVar9);
        puVar9 = puVar15;
        puVar16 = puVar16 + ((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
      }
      else {
        uVar11 = (long)puVar8 - (long)puVar9 >> 2;
        if ((long)puVar8 - (long)puVar9 == 0) {
          uVar11 = 1;
        }
        if (uVar11 >> 0x3d != 0) {
          func_0x0000a888();
/*  no support for modified copies  */
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x189d9c);
          (*pcVar2)();
        }
        puVar4 = (undefined8 *)__Znwm(uVar11 << 3);
        uVar17 = uVar11 + 3 >> 2;
        puVar15 = puVar4 + uVar17;
        lVar6 = (long)puVar16 - (long)puVar9;
        puVar16 = puVar15;
        if (lVar6 != 0) {
          puVar16 = (undefined8 *)((long)puVar15 + lVar6);
          if ((lVar6 - 8U < 0x38) || ((long)puVar4 + (uVar17 * 8 - (long)puVar9) < 0x40)) {
            puVar8 = puVar15;
            puVar10 = puVar9;
          }
          else {
            uVar1 = (lVar6 - 8U >> 3) + 1;
            uVar12 = uVar1 & 0x3ffffffffffffff8;
            puVar8 = puVar15 + uVar12;
            puVar10 = puVar9 + uVar12;
            puVar13 = puVar4 + uVar17 + 4;
            puVar9 = puVar9 + 4;
            uVar17 = uVar12;
            do {
              uVar5 = puVar9[-4];
              uVar19 = puVar9[-1];
              uVar18 = puVar9[-2];
              uVar21 = puVar9[1];
              uVar20 = *puVar9;
              uVar23 = puVar9[3];
              uVar22 = puVar9[2];
              puVar13[-3] = puVar9[-3];
              puVar13[-4] = uVar5;
              puVar13[-1] = uVar19;
              puVar13[-2] = uVar18;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
              puVar13[1] = uVar21;
              *puVar13 = uVar20;
              puVar13[3] = uVar23;
              puVar13[2] = uVar22;
              uVar17 = uVar17 - 8;
              puVar13 = puVar13 + 8;
              puVar9 = puVar9 + 8;
            } while (uVar17 != 0);
            if (uVar1 == uVar12) goto LAB_00189d34;
          }
          do {
            puVar9 = puVar8 + 1;
            *puVar8 = *puVar10;
            puVar8 = puVar9;
            puVar10 = puVar10 + 1;
          } while (puVar9 != puVar16);
        }
LAB_00189d34:
        puVar8 = puVar4 + uVar11;
        __ZdlPv(puVar7);
        puVar7 = puVar4;
        puVar9 = puVar15;
      }
    }
    puVar14 = puVar14 + -1;
    puVar9 = puVar9 + -1;
    *puVar9 = *puVar14;
  } while (puVar14 != (undefined8 *)param_1[1]);
LAB_00189bc4:
  lVar6 = *param_1;
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar9;
  param_1[2] = (long)puVar16;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  param_1[3] = (long)puVar8;
  if (lVar6 == 0) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar3 = (long *)(*(code *)PTR___ZdlPv_01f20590)();
  return plVar3;
}

