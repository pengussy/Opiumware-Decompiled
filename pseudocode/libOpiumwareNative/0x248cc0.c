/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x248cc0:136f2a14e8
   =========================================================================== */

void FUN_00248cc0(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_68;
  
  if (0x48 < (ulong)param_1[4]) {
    param_1[4] = param_1[4] - 0x49;
LAB_00248cf4:
    uStack_68 = *(undefined8 *)param_1[1];
// WM - more drops soon - github.com/pengussy
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    func_0x0012d800(param_1,&uStack_68);
    return;
  }
  puVar14 = (undefined8 *)param_1[2];
  puVar7 = (undefined8 *)param_1[3];
  puVar13 = (undefined8 *)param_1[1];
  uVar15 = (long)puVar14 - (long)puVar13;
  uVar9 = (long)puVar7 - *param_1;
  if (uVar15 < uVar9) {
    if (puVar7 != puVar14) {
      uStack_68 = __Znwm(0xff8);
      func_0x0012d800(param_1,&uStack_68);
      return;
    }
    uStack_68 = __Znwm(0xff8);
    func_0x0012d970(param_1,&uStack_68);
    goto LAB_00248cf4;
  }
  uVar9 = (long)uVar9 >> 2;
  if (puVar7 == (undefined8 *)*param_1) {
    uVar9 = 1;
  }
  if (uVar9 >> 0x3d != 0) {
    uVar4 = func_0x0000a888();
    __ZdlPv();
    __ZdlPv();
/* do not claim this as your own - github.com/pengussy */
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    __Unwind_Resume(uVar4);
    if ((bRam0000000002093050 & 1) == 0) {
      func_0x019dd200();
    }
    if ((bRam0000000002093050 & 1) == 0) {
      uRam0000000001f276a0 = 1;
      func_0x019dd200();
      uRam0000000001f276a1 = 1;
      return;
    }
    uRam0000000001f276a0 = 1;
    uRam0000000001f276a1 = 1;
    return;
  }
  puVar3 = (undefined8 *)__Znwm(uVar9 * 8);
  uVar4 = __Znwm(0xff8);
  puVar12 = (undefined8 *)((long)puVar3 + uVar15);
  puVar7 = puVar3 + uVar9;
  if (uVar15 == uVar9 * 8) {
    if (puVar14 != puVar13) {
      lVar5 = ((long)uVar15 >> 3) + 1;
      puVar12 = puVar12 + -((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      goto LAB_00248dac;
    }
    puVar6 = (undefined8 *)__Znwm(8);
    puVar7 = puVar6 + 1;
    __ZdlPv(puVar3);
    puVar13 = (undefined8 *)param_1[1];
    puVar14 = (undefined8 *)param_1[2];
    puVar16 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar12 = puVar6;
    if (puVar14 == puVar13) goto LAB_00248dc0;
  }
  else {
LAB_00248dac:
    puVar16 = puVar12 + 1;
    *puVar12 = uVar4;
    puVar6 = puVar3;
    if (puVar14 == puVar13) goto LAB_00248dc0;
  }
  do {
    if (puVar12 == puVar6) {
      if (puVar16 < puVar7) {
        lVar5 = ((long)puVar7 - (long)puVar16 >> 3) + 1;
        puVar13 = (undefined8 *)
                  ((long)(puVar16 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1)) -
                  ((long)puVar16 - (long)puVar12));
        _memmove(puVar13,puVar12);
        puVar12 = puVar13;
        puVar16 = puVar16 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
/*  found on a paste site? it was re-uploaded illegally  */
      }
      else {
        uVar9 = (long)puVar7 - (long)puVar12 >> 2;
        if ((long)puVar7 - (long)puVar12 == 0) {
          uVar9 = 1;
        }
        if (uVar9 >> 0x3d != 0) {
          func_0x0000a888();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x248f98);
          (*pcVar2)();
        }
        puVar3 = (undefined8 *)__Znwm(uVar9 << 3);
        uVar15 = uVar9 + 3 >> 2;
        puVar13 = puVar3 + uVar15;
        lVar5 = (long)puVar16 - (long)puVar12;
        puVar16 = puVar13;
        if (lVar5 != 0) {
          puVar16 = (undefined8 *)((long)puVar13 + lVar5);
          if ((lVar5 - 8U < 0x38) || ((long)puVar3 + (uVar15 * 8 - (long)puVar12) < 0x40)) {
            puVar7 = puVar13;
            puVar8 = puVar12;
          }
          else {
            uVar1 = (lVar5 - 8U >> 3) + 1;
            uVar10 = uVar1 & 0x3ffffffffffffff8;
            puVar7 = puVar13 + uVar10;
            puVar8 = puVar12 + uVar10;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            puVar11 = puVar3 + uVar15 + 4;
            puVar12 = puVar12 + 4;
            uVar15 = uVar10;
            do {
              uVar4 = puVar12[-4];
              uVar18 = puVar12[-1];
              uVar17 = puVar12[-2];
              uVar20 = puVar12[1];
              uVar19 = *puVar12;
              uVar22 = puVar12[3];
              uVar21 = puVar12[2];
              puVar11[-3] = puVar12[-3];
              puVar11[-4] = uVar4;
              puVar11[-1] = uVar18;
              puVar11[-2] = uVar17;
              puVar11[1] = uVar20;
              *puVar11 = uVar19;
              puVar11[3] = uVar22;
              puVar11[2] = uVar21;
              uVar15 = uVar15 - 8;
              puVar11 = puVar11 + 8;
              puVar12 = puVar12 + 8;
            } while (uVar15 != 0);
            if (uVar1 == uVar10) goto LAB_00248f30;
          }
          do {
            puVar12 = puVar7 + 1;
            *puVar7 = *puVar8;
            puVar7 = puVar12;
            puVar8 = puVar8 + 1;
          } while (puVar12 != puVar16);
        }
LAB_00248f30:
        puVar7 = puVar3 + uVar9;
        __ZdlPv(puVar6);
        puVar6 = puVar3;
        puVar12 = puVar13;
/* wm:found on a paste site? it was re-uploaded illegally */
      }
    }
    puVar14 = puVar14 + -1;
    puVar12 = puVar12 + -1;
    *puVar12 = *puVar14;
  } while (puVar14 != (undefined8 *)param_1[1]);
LAB_00248dc0:
  lVar5 = *param_1;
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar12;
  param_1[2] = (long)puVar16;
  param_1[3] = (long)puVar7;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_01f20590)();
  return;
}
// WM - no support for modified copies

