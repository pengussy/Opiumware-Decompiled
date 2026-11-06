/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x21cd84:ea4081f2a1
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0021d438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0021d43c) */
/* WARNING: Removing unreachable block (ram,0x0021d448) */
/* WARNING: Removing unreachable block (ram,0x0021d450) */
/* WARNING: Removing unreachable block (ram,0x0021d458) */
/* WARNING: Removing unreachable block (ram,0x0021d470) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_0021cd84(long *******param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long *****ppppplVar3;
  long ******pppppplVar4;
  long *******ppppppplVar5;
  ulong uVar6;
  ulong uVar7;
  long ******pppppplVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  undefined8 *puVar16;
  undefined8 *puVar15;
  long lVar17;
  long ******pppppplVar18;
  long ******pppppplVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  long *****ppppplVar24;
  long *****ppppplVar25;
  long *****ppppplVar26;
  long *******ppppppplStack_a8;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  long ******pppppplStack_a0;
  long *******ppppppplStack_98;
  byte bStack_90;
  long ******pppppplStack_88;
  long ******pppppplStack_80;
  long ******pppppplStack_78;
  long ******pppppplStack_70;
  long *******ppppppplStack_68;
  
  if ((long)param_1[2] - (long)param_1[1] == 0) {
    param_2 = param_2 + 1;
  }
  uVar9 = param_2 / 0x49;
  if (param_2 % 0x49 != 0) {
    uVar9 = uVar9 + 1;
  }
  pppppplVar19 = param_1[4];
  uVar6 = (ulong)pppppplVar19 / 0x49;
  uVar11 = uVar9;
  if (uVar6 <= uVar9) {
    uVar11 = uVar6;
  }
  if (uVar9 <= uVar6) {
    param_1[4] = (long ******)((long)pppppplVar19 + uVar11 * -0x49);
    ppppppplVar5 = param_1;
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      pppppplStack_88 = (long ******)*param_1[1];
      param_1[1] = param_1[1] + 1;
      ppppppplVar5 = (long *******)func_0x0012d800(param_1,&pppppplStack_88);
// more drops soon - github.com/pengussy
    }
    return ppppppplVar5;
  }
  uVar6 = uVar9 - uVar11;
  ppppppplStack_68 = param_1 + 3;
  lVar17 = (long)param_1[2] - (long)param_1[1] >> 3;
  ppppppplVar5 = param_1;
  if ((ulong)(((long)*ppppppplStack_68 - (long)*param_1 >> 3) - lVar17) < uVar6) {
    uVar9 = (long)*ppppppplStack_68 - (long)*param_1 >> 2;
    if (uVar9 <= uVar6 + lVar17) {
      uVar9 = uVar6 + lVar17;
    }
    if (uVar9 == 0) {
      pppppplStack_88 = (long ******)0x0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
        func_0x0000a888();
        if (((bStack_90 & 1) == 0) &&
           (puVar15 = *(undefined8 **)((long)pppppplStack_a0 + 8),
           *(undefined8 **)((long)pppppplStack_a0 + 8) !=
           *(undefined8 **)((long)pppppplStack_a0 + 0x10))) {
          do {
            puVar16 = puVar15 + 1;
            __ZdlPv(*puVar15);
            puVar15 = puVar16;
          } while (puVar16 != *(undefined8 **)((long)pppppplStack_a0 + 0x10));
        }
        return (long *******)&ppppppplStack_a8;
      }
      pppppplStack_88 = (long ******)__Znwm(uVar9 << 3);
    }
    ppppppplStack_98 = param_1 + 5;
    pppppplStack_80 = pppppplStack_88 + (lVar17 - uVar11);
    pppppplStack_70 = pppppplStack_88 + uVar9;
    lVar17 = uVar11 * -0x49;
    pppppplStack_a0 = (long ******)&pppppplStack_88;
/* watermarked copy - do not remove - github.com/pengussy */
    bStack_90 = 0;
    ppppppplStack_a8 = param_1;
    pppppplStack_78 = pppppplStack_80;
    do {
      pppppplVar4 = pppppplStack_78;
      ppppplVar3 = (long *****)__Znwm(0xff8);
      pppppplVar14 = pppppplStack_80;
      pppppplVar18 = pppppplStack_88;
      if (pppppplVar4 == pppppplStack_70) {
        if (pppppplStack_80 < pppppplStack_88 || (long)pppppplStack_80 - (long)pppppplStack_88 == 0)
        {
          uVar9 = (long)pppppplVar4 - (long)pppppplStack_88 >> 2;
          if ((long)pppppplVar4 - (long)pppppplStack_88 == 0) {
            uVar9 = 1;
          }
          if (uVar9 >> 0x3d != 0) {
            func_0x0000a888();
            goto LAB_0021d414;
          }
          pppppplStack_88 = (long ******)__Znwm(uVar9 << 3);
          uVar7 = uVar9 >> 2;
          pppppplStack_80 = pppppplStack_88 + uVar7;
          lVar1 = (long)pppppplVar4 - (long)pppppplVar14;
          pppppplStack_78 = pppppplStack_80;
          if (lVar1 != 0) {
            pppppplStack_78 = (long ******)((long)pppppplStack_80 + lVar1);
            pppppplVar4 = pppppplVar14;
            if (lVar1 - 8U < 0x38) {
              pppppplVar8 = pppppplStack_80;
            }
/* WM - origin: github.com/pengussy */
            else {
              pppppplVar8 = pppppplStack_80;
              if (0x3f < (long)pppppplStack_88 + (uVar7 * 8 - (long)pppppplVar14)) {
                uVar12 = (lVar1 - 8U >> 3) + 1;
                uVar10 = uVar12 & 0x3ffffffffffffff8;
                pppppplVar8 = pppppplStack_80 + uVar10;
                pppppplVar4 = pppppplVar14 + uVar10;
                pppppplVar13 = pppppplStack_88 + uVar7 + 4;
                pppppplVar14 = pppppplVar14 + 4;
                uVar7 = uVar10;
                do {
                  ppppplVar20 = pppppplVar14[-4];
                  ppppplVar22 = pppppplVar14[-1];
                  ppppplVar21 = pppppplVar14[-2];
                  ppppplVar24 = pppppplVar14[1];
                  ppppplVar23 = *pppppplVar14;
                  ppppplVar26 = pppppplVar14[3];
                  ppppplVar25 = pppppplVar14[2];
                  pppppplVar13[-3] = pppppplVar14[-3];
                  pppppplVar13[-4] = ppppplVar20;
/*  origin: github.com/pengussy  */
                  pppppplVar13[-1] = ppppplVar22;
                  pppppplVar13[-2] = ppppplVar21;
                  pppppplVar13[1] = ppppplVar24;
                  *pppppplVar13 = ppppplVar23;
                  pppppplVar13[3] = ppppplVar26;
                  pppppplVar13[2] = ppppplVar25;
                  uVar7 = uVar7 - 8;
                  pppppplVar13 = pppppplVar13 + 8;
                  pppppplVar14 = pppppplVar14 + 8;
                } while (uVar7 != 0);
                if (uVar12 == uVar10) goto LAB_0021d02c;
              }
            }
            do {
              pppppplVar14 = pppppplVar8 + 1;
              *pppppplVar8 = *pppppplVar4;
              pppppplVar8 = pppppplVar14;
              pppppplVar4 = pppppplVar4 + 1;
            } while (pppppplVar14 != pppppplStack_78);
          }
LAB_0021d02c:
          pppppplStack_70 = pppppplStack_88 + uVar9;
          pppppplVar4 = pppppplStack_78;
          if (pppppplVar18 != (long ******)0x0) {
            __ZdlPv(pppppplVar18);
            pppppplVar4 = pppppplStack_78;
          }
        }
        else {
          lVar1 = ((long)pppppplStack_80 - (long)pppppplStack_88 >> 3) + 1;
          uVar9 = (ulong)(lVar1 - (lVar1 >> 0x3f)) >> 1;
          _memmove(pppppplStack_80 + -uVar9,pppppplStack_80,
                   (long)pppppplVar4 - (long)pppppplStack_80);
          pppppplVar4 = pppppplVar4 + -uVar9;
          pppppplStack_80 = pppppplStack_80 + -uVar9;
        }
      }
      pppppplStack_78 = pppppplVar4 + 1;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      *pppppplVar4 = ppppplVar3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    bStack_90 = 1;
    pppppplVar18 = param_1[1];
    if ((long ******)0x48 < pppppplVar19) {
      do {
        pppppplVar4 = pppppplStack_78;
        pppppplVar14 = pppppplStack_80;
        pppppplVar19 = pppppplStack_88;
        if (pppppplStack_78 == pppppplStack_70) {
          if (pppppplStack_80 < pppppplStack_88 ||
              (long)pppppplStack_80 - (long)pppppplStack_88 == 0) {
            uVar9 = (long)pppppplStack_78 - (long)pppppplStack_88 >> 2;
            if ((long)pppppplStack_78 - (long)pppppplStack_88 == 0) {
              uVar9 = 1;
            }
            if (uVar9 >> 0x3d != 0) {
              func_0x0000a888();
              goto LAB_0021d414;
            }
// WM - unlicensed copy if this notice is missing
            pppppplStack_88 = (long ******)__Znwm(uVar9 << 3);
            uVar6 = uVar9 >> 2;
            pppppplStack_80 = pppppplStack_88 + uVar6;
            lVar1 = (long)pppppplVar4 - (long)pppppplVar14;
            pppppplStack_78 = pppppplStack_80;
            if (lVar1 != 0) {
              pppppplStack_78 = (long ******)((long)pppppplStack_80 + lVar1);
              pppppplVar4 = pppppplVar14;
              if (lVar1 - 8U < 0x38) {
                pppppplVar8 = pppppplStack_80;
              }
              else {
                pppppplVar8 = pppppplStack_80;
                if (0x3f < (long)pppppplStack_88 + (uVar6 * 8 - (long)pppppplVar14)) {
                  uVar7 = (lVar1 - 8U >> 3) + 1;
                  uVar12 = uVar7 & 0x3ffffffffffffff8;
                  pppppplVar8 = pppppplStack_80 + uVar12;
                  pppppplVar4 = pppppplVar14 + uVar12;
                  pppppplVar13 = pppppplStack_88 + uVar6 + 4;
                  pppppplVar14 = pppppplVar14 + 4;
                  uVar6 = uVar12;
                  do {
                    ppppplVar3 = pppppplVar14[-4];
                    ppppplVar21 = pppppplVar14[-1];
                    ppppplVar20 = pppppplVar14[-2];
                    ppppplVar23 = pppppplVar14[1];
                    ppppplVar22 = *pppppplVar14;
                    ppppplVar25 = pppppplVar14[3];
                    ppppplVar24 = pppppplVar14[2];
                    pppppplVar13[-3] = pppppplVar14[-3];
                    pppppplVar13[-4] = ppppplVar3;
                    pppppplVar13[-1] = ppppplVar21;
                    pppppplVar13[-2] = ppppplVar20;
// WM - proprietary - see LICENSE - do not sell
                    pppppplVar13[1] = ppppplVar23;
                    *pppppplVar13 = ppppplVar22;
                    pppppplVar13[3] = ppppplVar25;
                    pppppplVar13[2] = ppppplVar24;
                    uVar6 = uVar6 - 8;
                    pppppplVar13 = pppppplVar13 + 8;
                    pppppplVar14 = pppppplVar14 + 8;
                  } while (uVar6 != 0);
                  if (uVar7 == uVar12) goto LAB_0021d2f4;
                }
              }
              do {
                pppppplVar14 = pppppplVar8 + 1;
                *pppppplVar8 = *pppppplVar4;
                pppppplVar8 = pppppplVar14;
                pppppplVar4 = pppppplVar4 + 1;
              } while (pppppplVar14 != pppppplStack_78);
            }
LAB_0021d2f4:
            pppppplStack_70 = pppppplStack_88 + uVar9;
            if (pppppplVar19 != (long ******)0x0) {
              __ZdlPv(pppppplVar19);
            }
          }
          else {
            lVar1 = ((long)pppppplStack_80 - (long)pppppplStack_88 >> 3) + 1;
            uVar9 = (ulong)(lVar1 - (lVar1 >> 0x3f)) >> 1;
            _memmove(pppppplStack_80 + -uVar9,pppppplStack_80,
                     (long)pppppplStack_78 - (long)pppppplStack_80);
            pppppplStack_78 = pppppplVar4 + -uVar9;
            pppppplStack_80 = pppppplStack_80 + -uVar9;
          }
        }
        pppppplVar19 = pppppplStack_78 + 1;
        *pppppplStack_78 = *pppppplVar18;
        pppppplVar18 = param_1[1] + 1;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        param_1[1] = pppppplVar18;
        uVar11 = uVar11 - 1;
        pppppplStack_78 = pppppplVar19;
      } while (uVar11 != 0);
    }
    pppppplVar19 = param_1[2];
    if (pppppplVar19 != pppppplVar18) {
      do {
        pppppplVar4 = pppppplStack_78;
        pppppplVar14 = pppppplStack_80;
        pppppplVar18 = pppppplStack_88;
        if (pppppplStack_80 == pppppplStack_88) {
          if (pppppplStack_78 < pppppplStack_70) {
            lVar1 = ((long)pppppplStack_70 - (long)pppppplStack_78 >> 3) + 1;
            uVar9 = (lVar1 - (lVar1 >> 0x3f)) * 4 & 0xfffffffffffffff8;
            pppppplVar18 = (long ******)(uVar9 + (long)pppppplStack_80);
            _memmove(pppppplVar18,pppppplStack_80);
            pppppplStack_78 = (long ******)((long)pppppplStack_78 + uVar9);
            pppppplStack_80 = pppppplVar18;
          }
          else {
            uVar9 = (long)pppppplStack_70 - (long)pppppplStack_80 >> 2;
            if ((long)pppppplStack_70 - (long)pppppplStack_80 == 0) {
              uVar9 = 1;
            }
            if (uVar9 >> 0x3d != 0) {
              func_0x0000a888();
LAB_0021d414:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x21d418);
              (*pcVar2)();
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            }
            pppppplStack_88 = (long ******)__Znwm(uVar9 << 3);
            uVar11 = uVar9 + 3 >> 2;
            pppppplStack_80 = pppppplStack_88 + uVar11;
            lVar1 = (long)pppppplVar4 - (long)pppppplVar14;
            pppppplStack_78 = pppppplStack_80;
            if (lVar1 != 0) {
              pppppplStack_78 = (long ******)((long)pppppplStack_80 + lVar1);
              pppppplVar4 = pppppplStack_80;
              pppppplVar8 = pppppplVar14;
              if ((0x37 < lVar1 - 8U) &&
                 (0x3f < (long)pppppplStack_88 + (uVar11 * 8 - (long)pppppplVar14))) {
                uVar6 = (lVar1 - 8U >> 3) + 1;
                uVar7 = uVar6 & 0x3ffffffffffffff8;
                pppppplVar4 = pppppplStack_88 + uVar11 + 4;
                pppppplVar8 = pppppplVar14 + 4;
                uVar11 = uVar7;
                do {
                  ppppplVar3 = pppppplVar8[-4];
                  ppppplVar21 = pppppplVar8[-1];
                  ppppplVar20 = pppppplVar8[-2];
                  ppppplVar23 = pppppplVar8[1];
                  ppppplVar22 = *pppppplVar8;
                  ppppplVar25 = pppppplVar8[3];
                  ppppplVar24 = pppppplVar8[2];
                  pppppplVar4[-3] = pppppplVar8[-3];
                  pppppplVar4[-4] = ppppplVar3;
                  pppppplVar4[-1] = ppppplVar21;
                  pppppplVar4[-2] = ppppplVar20;
                  pppppplVar4[1] = ppppplVar23;
                  *pppppplVar4 = ppppplVar22;
                  pppppplVar4[3] = ppppplVar25;
                  pppppplVar4[2] = ppppplVar24;
                  uVar11 = uVar11 - 8;
                  pppppplVar4 = pppppplVar4 + 8;
                  pppppplVar8 = pppppplVar8 + 8;
                } while (uVar11 != 0);
                pppppplVar4 = pppppplStack_80 + uVar7;
/* WM - unlicensed copy if this notice is missing */
                pppppplVar8 = pppppplVar14 + uVar7;
                if (uVar6 == uVar7) goto LAB_0021d1ac;
              }
              do {
                pppppplVar13 = pppppplVar4 + 1;
                *pppppplVar4 = *pppppplVar8;
                pppppplVar4 = pppppplVar13;
                pppppplVar8 = pppppplVar8 + 1;
              } while (pppppplVar13 != pppppplStack_78);
            }
LAB_0021d1ac:
            pppppplStack_70 = pppppplStack_88 + uVar9;
            if (pppppplVar14 != (long ******)0x0) {
              __ZdlPv(pppppplVar18);
            }
          }
        }
        pppppplVar19 = pppppplVar19 + -1;
        pppppplStack_80 = pppppplStack_80 + -1;
        *pppppplStack_80 = *pppppplVar19;
        pppppplVar18 = param_1[1];
      } while (pppppplVar19 != pppppplVar18);
      pppppplVar19 = param_1[2];
    }
    pppppplVar4 = *param_1;
/* wm:unlicensed copy if this notice is missing */
    *param_1 = pppppplStack_88;
    param_1[1] = pppppplStack_80;
    pppppplVar14 = param_1[3];
    param_1[2] = pppppplStack_78;
    param_1[3] = pppppplStack_70;
    param_1[4] = (long ******)((long)param_1[4] + lVar17);
    pppppplStack_78 = pppppplVar19;
    if ((long)pppppplVar18 - (long)pppppplVar19 != 0) {
      pppppplStack_78 =
           (long ******)
           ((long)pppppplVar19 +
           (((long)pppppplVar18 - (long)pppppplVar19) + 7U & 0xfffffffffffffff8));
    }
    if (pppppplVar4 == (long ******)0x0) {
      return (long *******)0x0;
    }
    pppppplStack_88 = pppppplVar4;
    pppppplStack_80 = pppppplVar18;
    pppppplStack_70 = pppppplVar14;
    ppppppplVar5 = (long *******)__ZdlPv();
    return ppppppplVar5;
// found on a paste site? it was re-uploaded illegally
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (param_1[3] == param_1[2]) goto LAB_0021d36c;
    pppppplStack_88 = (long ******)__Znwm(0xff8);
    ppppppplVar5 = (long *******)func_0x0012d800(param_1,&pppppplStack_88);
    uVar9 = uVar9 - 1;
  }
  param_1[4] = (long ******)((long)param_1[4] + uVar11 * -0x49);
joined_r0x0021d3b8:
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    pppppplStack_88 = (long ******)*param_1[1];
    param_1[1] = param_1[1] + 1;
    ppppppplVar5 = (long *******)func_0x0012d800(param_1,&pppppplStack_88);
  }
  return ppppppplVar5;
LAB_0021d36c:
/* donate: donate/README.md - github.com/pengussy */
  do {
    pppppplStack_88 = (long ******)__Znwm(0xff8);
    ppppppplVar5 = (long *******)func_0x0012d970(param_1,&pppppplStack_88);
    lVar17 = 0x48;
    if ((long)param_1[2] - (long)param_1[1] != 8) {
      lVar17 = 0x49;
    }
    pppppplVar19 = param_1[4];
    param_1[4] = (long ******)(lVar17 + (long)pppppplVar19);
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  param_1[4] = (long ******)(lVar17 + (long)pppppplVar19 + uVar9 * -0x49);
  uVar11 = uVar9;
  goto joined_r0x0021d3b8;
}

