/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1db860:1ad66603d0
   =========================================================================== */

void FUN_001db860(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
// WM - watermarked copy - do not remove
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_68;
  
  if (0x7f < (ulong)param_1[4]) {
    param_1[4] = param_1[4] - 0x80;
LAB_001db894:
    uStack_68 = *(undefined8 *)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    func_0x0012d800(param_1,&uStack_68);
    return;
  }
  puVar15 = (undefined8 *)param_1[2];
  puVar8 = (undefined8 *)param_1[3];
  puVar14 = (undefined8 *)param_1[1];
  uVar16 = (long)puVar15 - (long)puVar14;
  uVar10 = (long)puVar8 - *param_1;
  if (uVar16 < uVar10) {
    if (puVar8 != puVar15) {
      uStack_68 = __Znwm(0x1000);
      func_0x0012d800(param_1,&uStack_68);
/* no support for modified copies - github.com/pengussy */
      return;
    }
    uStack_68 = __Znwm(0x1000);
    func_0x0012d970(param_1,&uStack_68);
    goto LAB_001db894;
  }
  uVar10 = (long)uVar10 >> 2;
  if (puVar8 == (undefined8 *)*param_1) {
    uVar10 = 1;
  }
  if (uVar10 >> 0x3d != 0) {
    uVar4 = func_0x0000a888();
    __ZdlPv();
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    uVar4 = __Unwind_Resume(uVar4);
    __ZdlPv();
    puVar7 = (undefined1 *)__Unwind_Resume(uVar4);
/*  reversing this took months of machine time  */
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2d] = 0;
    puVar7[0x2e] = 0;
    puVar7[0x2f] = 0;
    puVar7[0x30] = 0;
    puVar7[0x31] = 0;
    puVar7[0x32] = 0;
    puVar7[0x33] = 0;
    puVar7[0x34] = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    puVar7[0x39] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x3b] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3d] = 0;
    puVar7[0x3e] = 0;
    puVar7[0x3f] = 0;
    puVar7[0x40] = 0;
    puVar7[0x41] = 0;
    puVar7[0x42] = 0;
    puVar7[0x43] = 0;
    puVar7[0x44] = 0;
    puVar7[0x45] = 0;
    puVar7[0x46] = 0;
    puVar7[0x47] = 0;
    puVar7[0x48] = 0;
    puVar7[0x49] = 0;
    puVar7[0x4a] = 0;
    puVar7[0x4b] = 0;
    puVar7[0x4c] = 0;
    puVar7[0x4d] = 0;
    puVar7[0x4e] = 0;
    puVar7[0x4f] = 0;
    puVar7[0x50] = 0;
// WM - do not claim this as your own
    puVar7[0x51] = 0;
    puVar7[0x52] = 0;
    puVar7[0x53] = 0;
    puVar7[0x54] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1e] = 0;
/*  watermarked copy - do not remove  */
    puVar7[0x1f] = 0;
    puVar7[0x20] = 0;
    puVar7[0x21] = 0;
    puVar7[0x22] = 0;
    puVar7[0x23] = 0;
    puVar7[0x24] = 0;
    puVar7[0x25] = 0;
    puVar7[0x26] = 0;
    puVar7[0x27] = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    puVar7[0x2a] = 0;
    *puVar7 = 1;
    return;
  }
  puVar3 = (undefined8 *)__Znwm(uVar10 * 8);
  uVar4 = __Znwm(0x1000);
  puVar13 = (undefined8 *)((long)puVar3 + uVar16);
  puVar8 = puVar3 + uVar10;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  if (uVar16 == uVar10 * 8) {
    if (puVar15 != puVar14) {
      lVar5 = ((long)uVar16 >> 3) + 1;
      puVar13 = puVar13 + -((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
      goto LAB_001db94c;
    }
    puVar6 = (undefined8 *)__Znwm(8);
    puVar8 = puVar6 + 1;
    __ZdlPv(puVar3);
    puVar14 = (undefined8 *)param_1[1];
    puVar15 = (undefined8 *)param_1[2];
    puVar17 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar13 = puVar6;
    if (puVar15 == puVar14) goto LAB_001db960;
  }
  else {
LAB_001db94c:
    puVar17 = puVar13 + 1;
    *puVar13 = uVar4;
    puVar6 = puVar3;
    if (puVar15 == puVar14) goto LAB_001db960;
  }
  do {
    if (puVar13 == puVar6) {
      if (puVar17 < puVar8) {
        lVar5 = ((long)puVar8 - (long)puVar17 >> 3) + 1;
        puVar14 = (undefined8 *)
                  ((long)(puVar17 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1)) -
                  ((long)puVar17 - (long)puVar13));
        _memmove(puVar14,puVar13);
        puVar13 = puVar14;
        puVar17 = puVar17 + ((ulong)(lVar5 - (lVar5 >> 0x3f)) >> 1);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      }
      else {
        uVar10 = (long)puVar8 - (long)puVar13 >> 2;
        if ((long)puVar8 - (long)puVar13 == 0) {
          uVar10 = 1;
        }
        if (uVar10 >> 0x3d != 0) {
          func_0x0000a888();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1dbb38);
          (*pcVar2)();
        }
        puVar3 = (undefined8 *)__Znwm(uVar10 << 3);
        uVar16 = uVar10 + 3 >> 2;
        puVar14 = puVar3 + uVar16;
        lVar5 = (long)puVar17 - (long)puVar13;
        puVar17 = puVar14;
        if (lVar5 != 0) {
          puVar17 = (undefined8 *)((long)puVar14 + lVar5);
          if ((lVar5 - 8U < 0x38) || ((long)puVar3 + (uVar16 * 8 - (long)puVar13) < 0x40)) {
            puVar8 = puVar14;
            puVar9 = puVar13;
          }
          else {
            uVar1 = (lVar5 - 8U >> 3) + 1;
            uVar11 = uVar1 & 0x3ffffffffffffff8;
            puVar8 = puVar14 + uVar11;
            puVar9 = puVar13 + uVar11;
            puVar12 = puVar3 + uVar16 + 4;
            puVar13 = puVar13 + 4;
            uVar16 = uVar11;
            do {
              uVar4 = puVar13[-4];
              uVar19 = puVar13[-1];
/* WM - stripping the watermark breaks the license */
              uVar18 = puVar13[-2];
              uVar21 = puVar13[1];
              uVar20 = *puVar13;
              uVar23 = puVar13[3];
              uVar22 = puVar13[2];
              puVar12[-3] = puVar13[-3];
              puVar12[-4] = uVar4;
              puVar12[-1] = uVar19;
              puVar12[-2] = uVar18;
              puVar12[1] = uVar21;
              *puVar12 = uVar20;
              puVar12[3] = uVar23;
              puVar12[2] = uVar22;
              uVar16 = uVar16 - 8;
              puVar12 = puVar12 + 8;
              puVar13 = puVar13 + 8;
            } while (uVar16 != 0);
            if (uVar1 == uVar11) goto LAB_001dbad0;
          }
          do {
            puVar13 = puVar8 + 1;
            *puVar8 = *puVar9;
            puVar8 = puVar13;
            puVar9 = puVar9 + 1;
          } while (puVar13 != puVar17);
        }
LAB_001dbad0:
        puVar8 = puVar3 + uVar10;
        __ZdlPv(puVar6);
        puVar6 = puVar3;
        puVar13 = puVar14;
      }
    }
    puVar15 = puVar15 + -1;
    puVar13 = puVar13 + -1;
    *puVar13 = *puVar15;
  } while (puVar15 != (undefined8 *)param_1[1]);
LAB_001db960:
/* wm:found on a paste site? it was re-uploaded illegally */
  lVar5 = *param_1;
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar13;
  param_1[2] = (long)puVar17;
  param_1[3] = (long)puVar8;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_01f20590)();
  return;
}

