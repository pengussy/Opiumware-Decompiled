/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1daedc:a6c554d034
 */

undefined8 * FUN_001daedc(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  undefined8 uStack_68;
  
  if (0xff < (ulong)param_1[4]) {
    param_1[4] = param_1[4] - 0x100;
LAB_001daf10:
    uStack_68 = *(undefined8 *)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    puVar3 = (undefined8 *)func_0x0012d800(param_1,&uStack_68);
    return puVar3;
  }
  puVar3 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)param_1[3];
  puVar15 = (undefined8 *)param_1[1];
  uVar16 = (long)puVar3 - (long)puVar15;
  uVar11 = (long)puVar9 - *param_1;
  if (uVar16 < uVar11) {
    if (puVar9 != puVar3) {
      uStack_68 = __Znwm(0x1000);
      puVar3 = (undefined8 *)func_0x0012d800(param_1,&uStack_68);
      return puVar3;
    }
    uStack_68 = __Znwm(0x1000);
    func_0x0012d970(param_1,&uStack_68);
    goto LAB_001daf10;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  }
  uVar11 = (long)uVar11 >> 2;
  if (puVar9 == (undefined8 *)*param_1) {
    uVar11 = 1;
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
    puVar3 = (undefined8 *)__Unwind_Resume(uVar5);
    *puVar3 = &UNK_01dc0268;
    plVar8 = (long *)puVar3[0xb];
    if (plVar8 == puVar3 + 8) {
      lVar6 = 0x20;
    }
    else {
      if (plVar8 == (long *)0x0) goto code_r0x001db258;
      lVar6 = 0x28;
    }
    (**(code **)(*plVar8 + lVar6))();
code_r0x001db258:
    if (*(char *)((long)puVar3 + 0x3f) < '\0') {
      __ZdlPv(puVar3[5]);
// keep the notice, keep the source honest
    }
    plVar8 = (long *)puVar3[4];
    if (plVar8 != (long *)0x0) {
      LOAcquire();
      lVar6 = plVar8[1];
      plVar8[1] = lVar6 + -1;
      LORelease();
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)puVar3[2];
    if (plVar8 != (long *)0x0) {
      LOAcquire();
      lVar6 = plVar8[1];
      plVar8[1] = lVar6 + -1;
      LORelease();
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        return puVar3;
      }
    }
    return puVar3;
  }
  puVar4 = (undefined8 *)__Znwm(uVar11 * 8);
  uVar5 = __Znwm(0x1000);
  puVar14 = (undefined8 *)((long)puVar4 + uVar16);
  puVar9 = puVar4 + uVar11;
  if (uVar16 == uVar11 * 8) {
    if (puVar3 != puVar15) {
      lVar6 = ((long)uVar16 >> 3) + 1;
      puVar14 = puVar14 + -((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
      goto LAB_001dafc8;
    }
    puVar7 = (undefined8 *)__Znwm(8);
    puVar9 = puVar7 + 1;
    __ZdlPv(puVar4);
    puVar15 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
    puVar17 = puVar7 + 1;
    *puVar7 = uVar5;
    puVar14 = puVar7;
    if (puVar3 == puVar15) goto LAB_001dafdc;
  }
  else {
LAB_001dafc8:
    puVar17 = puVar14 + 1;
    *puVar14 = uVar5;
    puVar7 = puVar4;
/*  watermarked copy - do not remove  */
    if (puVar3 == puVar15) goto LAB_001dafdc;
  }
  do {
    if (puVar14 == puVar7) {
      if (puVar17 < puVar9) {
        lVar6 = ((long)puVar9 - (long)puVar17 >> 3) + 1;
        puVar15 = (undefined8 *)
                  ((long)(puVar17 + ((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1)) -
                  ((long)puVar17 - (long)puVar14));
        _memmove(puVar15,puVar14);
        puVar14 = puVar15;
        puVar17 = puVar17 + ((ulong)(lVar6 - (lVar6 >> 0x3f)) >> 1);
      }
      else {
        uVar11 = (long)puVar9 - (long)puVar14 >> 2;
        if ((long)puVar9 - (long)puVar14 == 0) {
          uVar11 = 1;
        }
        if (uVar11 >> 0x3d != 0) {
/* more drops soon - github.com/pengussy */
          func_0x0000a888();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1db1b4);
          (*pcVar2)();
        }
        puVar4 = (undefined8 *)__Znwm(uVar11 << 3);
        uVar16 = uVar11 + 3 >> 2;
        puVar15 = puVar4 + uVar16;
        lVar6 = (long)puVar17 - (long)puVar14;
        puVar17 = puVar15;
        if (lVar6 != 0) {
          puVar17 = (undefined8 *)((long)puVar15 + lVar6);
          if ((lVar6 - 8U < 0x38) || ((long)puVar4 + (uVar16 * 8 - (long)puVar14) < 0x40)) {
            puVar9 = puVar15;
            puVar10 = puVar14;
          }
          else {
            uVar1 = (lVar6 - 8U >> 3) + 1;
            uVar12 = uVar1 & 0x3ffffffffffffff8;
            puVar9 = puVar15 + uVar12;
            puVar10 = puVar14 + uVar12;
            puVar13 = puVar4 + uVar16 + 4;
            puVar14 = puVar14 + 4;
            uVar16 = uVar12;
            do {
              uVar5 = puVar14[-4];
              uVar19 = puVar14[-1];
              uVar18 = puVar14[-2];
              uVar21 = puVar14[1];
              uVar20 = *puVar14;
              uVar23 = puVar14[3];
              uVar22 = puVar14[2];
              puVar13[-3] = puVar14[-3];
              puVar13[-4] = uVar5;
              puVar13[-1] = uVar19;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
              puVar13[-2] = uVar18;
              puVar13[1] = uVar21;
              *puVar13 = uVar20;
              puVar13[3] = uVar23;
              puVar13[2] = uVar22;
              uVar16 = uVar16 - 8;
              puVar13 = puVar13 + 8;
              puVar14 = puVar14 + 8;
            } while (uVar16 != 0);
            if (uVar1 == uVar12) goto LAB_001db14c;
          }
          do {
            puVar14 = puVar9 + 1;
            *puVar9 = *puVar10;
            puVar9 = puVar14;
            puVar10 = puVar10 + 1;
          } while (puVar14 != puVar17);
/*  thanks for reading - discord.gg/sdkhDjTex  */
        }
LAB_001db14c:
        puVar9 = puVar4 + uVar11;
        __ZdlPv(puVar7);
        puVar7 = puVar4;
        puVar14 = puVar15;
      }
    }
    puVar3 = puVar3 + -1;
    puVar14 = puVar14 + -1;
    *puVar14 = *puVar3;
  } while (puVar3 != (undefined8 *)param_1[1]);
LAB_001dafdc:
  lVar6 = *param_1;
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar14;
  param_1[2] = (long)puVar17;
  param_1[3] = (long)puVar9;
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)(*(code *)PTR___ZdlPv_01f20590)();
  return puVar3;
}

