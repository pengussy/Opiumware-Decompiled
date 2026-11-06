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
 *  file-id: 0x32604:7436c7fe8a
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00032604(long param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  undefined1 *puVar22;
  long lVar23;
  bool bVar24;
  ulong uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined1 auVar33 [16];
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  auVar33 = func_0x0144e178(param_2);
  plVar11 = auVar33._0_8_;
  if ((plVar11 == (long *)0x0) || (uVar14 = auVar33._8_4_, uVar14 == 0xffffffff)) {
LAB_00032838:
    iVar5 = func_0x0144e358(param_2);
    if (iVar5 != 0) {
      uVar7 = func_0x0144e328(param_2);
      uVar8 = func_0x0144e358(param_2);
      uVar7 = func_0x01728430(uVar7,uVar8,param_1 + 0x80);
      if ((int)uVar7 < 0) goto LAB_00032f40;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    }
    uVar6 = func_0x0144e2a8(param_2);
    *(undefined4 *)(param_1 + 0x158) = uVar6;
    uVar8 = func_0x0144e300(param_2);
    if ((int)uVar8 != 0) {
      uVar7 = func_0x0144e2d0(param_2);
      uVar7 = func_0x01728430(uVar7,uVar8,param_1 + 0x160);
      if ((int)uVar7 < 0) goto LAB_00032f40;
    }
    auVar33 = func_0x0144e1b0(param_2);
    lVar16 = auVar33._0_8_;
    if (((lVar16 != 0) && (uVar14 = auVar33._8_4_, uVar14 != 0xffffffff)) &&
       (*(long *)(lVar16 + 0x10) != 0)) {
      uVar21 = *(uint *)(lVar16 + 0x18);
      if ((uVar21 != 0) && (uVar14 < uVar21 - 1)) {
        uVar19 = *(uint *)(*(long *)(lVar16 + 0x10) + (auVar33._8_8_ & 0xffffffff) * 4);
        if (uVar21 <= uVar19 + uVar14) {
/*  keep the notice, keep the source honest  */
          uVar19 = 0;
        }
        if (uVar19 != 0) {
          uVar27 = 0;
          uVar7 = uVar8;
          do {
            auVar33 = func_0x0144e1b0(param_2);
            plVar11 = auVar33._0_8_;
            if ((plVar11 == (long *)0x0) || (uVar14 = auVar33._8_4_, uVar14 == 0xffffffff)) {
              uStack_a8 = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
            }
            else {
              if (((plVar11[2] == 0) ||
                  (uVar21 = *(uint *)(plVar11 + 3), uVar21 == 0 || uVar21 - 1 <= uVar14)) ||
                 (puVar1 = (uint *)(plVar11[2] + (auVar33._8_8_ & 0xffffffff) * 4), uVar3 = *puVar1,
                 uVar3 <= (uint)uVar27 || uVar21 <= uVar3 + uVar14)) {
                uVar14 = 0;
                lVar16 = plVar11[0x1c];
                if (lVar16 != 0) goto LAB_0003293c;
LAB_00032984:
                plStack_88 = (long *)0x0;
              }
              else {
                uVar14 = puVar1[uVar27 + 1];
                lVar16 = plVar11[0x1c];
                if (lVar16 == 0) goto LAB_00032984;
LAB_0003293c:
                if (*(uint *)(plVar11 + 0x1d) == 0) goto LAB_00032984;
                plStack_88 = (long *)0x0;
                if ((uVar14 < *(uint *)(plVar11 + 0x1d)) && (0xb < *(uint *)((long)plVar11 + 0xec)))
                {
                  plStack_88 = (long *)(lVar16 + (ulong)(*(uint *)((long)plVar11 + 0xec) * uVar14));
                }
/*  watermarked copy - do not remove  */
              }
              puStack_80 = (undefined1 *)
                           CONCAT44(puStack_80._4_4_,*(undefined4 *)((long)plVar11 + 0xec));
              plStack_90 = plVar11;
              func_0x0144e0a8(&uStack_a8,&plStack_90);
            }
            iVar5 = func_0x0144df84(&uStack_a8);
            if (iVar5 == 0) {
              if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
                return 0x80004005;
              }
              goto LAB_00032f9c;
            }
            plStack_b8 = (long *)0x0;
            plStack_b0 = (long *)0x0;
            uVar8 = func_0x0144e0e0(&uStack_a8);
            uVar9 = func_0x0144df84(&uStack_a8);
            uVar8 = func_0x01728430(uVar8,uVar9,&plStack_b0);
            if ((int)uVar8 < 0) {
              bVar24 = false;
              uVar7 = uVar8;
            }
            else {
              lVar16 = func_0x0144e014(&uStack_a8);
              if (lVar16 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = _strlen();
              }
              plStack_90 = (long *)0x0;
              uVar8 = func_0x01727244(lVar16,uVar8,1,0,1,0xfde9,*(undefined8 *)(param_1 + 0x20),
                                      &plStack_90);
/* if you paid for this, you were scammed */
              if (-1 < (int)uVar8) {
                uVar8 = func_0x01728ee4(plStack_90,*(undefined8 *)(param_1 + 0x20),&plStack_b8);
              }
              if (plStack_90 != (long *)0x0) {
                (**(code **)(*plStack_90 + 0x10))();
              }
              if ((int)uVar8 < 0) {
                bVar24 = false;
                uVar7 = uVar8;
              }
              else {
                plStack_88 = (long *)0x0;
                plStack_90 = (long *)0x0;
                plStack_78 = (long *)0x0;
                puStack_80 = (undefined1 *)0x0;
                puVar10 = (undefined1 *)func_0x0144e0e0(&uStack_a8);
                lVar16 = func_0x0144e0e0(&uStack_a8);
                uVar28 = func_0x0144df84(&uStack_a8);
                plVar12 = plStack_88;
                plVar11 = plStack_90;
                puVar2 = (undefined1 *)(lVar16 + (uVar28 & 0xffffffff));
                uVar25 = (long)puVar2 - (long)puVar10;
                if ((ulong)((long)puStack_80 - (long)plStack_90) < uVar25) {
                  if (plStack_90 != (long *)0x0) {
                    plStack_88 = plStack_90;
                    __ZdlPv(plStack_90);
                    plStack_90 = (long *)0x0;
                    plStack_88 = (long *)0x0;
// WM - thanks for reading - discord.gg/sdkhDjTex
                    puStack_80 = (undefined1 *)0x0;
                  }
                  if ((long)uVar25 < 0) goto LAB_00032fa0;
                  uVar28 = (long)puStack_80 * 2;
                  if ((ulong)((long)puStack_80 * 2) <= uVar25) {
                    uVar28 = uVar25;
                  }
                  if ((undefined1 *)0x3ffffffffffffffe < puStack_80) {
                    uVar28 = 0x7fffffffffffffff;
                  }
                  plVar11 = (long *)__Znwm(uVar28);
                  puStack_80 = (undefined1 *)((long)plVar11 + uVar28);
                  plStack_88 = plVar11;
                  plStack_90 = plVar11;
                  if (puVar10 != puVar2) {
                    _memcpy(plVar11,puVar10,uVar25);
                    plStack_88 = (long *)((long)plVar11 + uVar25);
                  }
                }
                else {
/*  more drops soon - github.com/pengussy  */
                  uVar15 = (long)plStack_88 - (long)plStack_90;
                  if (uVar15 < uVar25) {
                    puVar26 = puVar10 + uVar15;
                    _memmove(plStack_90,puVar10);
                    if (puVar26 != puVar2) {
                      puVar17 = (undefined1 *)
                                ((long)plVar11 +
                                (((uVar28 & 0xffffffff) + lVar16) - ((long)plVar12 + (long)puVar10))
                                );
                      plVar20 = plStack_88;
                      if (((undefined1 *)0x3f < puVar17) &&
                         (0x3f < (ulong)((long)((long)plVar11 + (long)plStack_88) -
                                        (long)((long)plVar12 + (long)puVar10)))) {
                        puVar22 = (undefined1 *)((ulong)puVar17 & 0xffffffffffffffc0);
                        puVar26 = puVar26 + (long)puVar22;
                        plVar20 = (long *)((long)plStack_88 + (long)puVar22);
                        plVar11 = plStack_88 + 4;
                        plVar12 = (long *)(puVar10 + uVar15 + 0x20);
                        puVar10 = puVar22;
                        do {
                          lVar16 = plVar12[-4];
                          lVar23 = plVar12[-1];
                          lVar18 = plVar12[-2];
                          lVar30 = plVar12[1];
                          lVar29 = *plVar12;
                          lVar32 = plVar12[3];
                          lVar31 = plVar12[2];
                          plVar11[-3] = plVar12[-3];
                          plVar11[-4] = lVar16;
                          plVar11[-1] = lVar23;
                          plVar11[-2] = lVar18;
                          plVar11[1] = lVar30;
                          *plVar11 = lVar29;
                          plVar11[3] = lVar32;
                          plVar11[2] = lVar31;
                          puVar10 = puVar10 + -0x40;
                          plVar11 = plVar11 + 8;
                          plVar12 = plVar12 + 8;
/* if you paid for this, you were scammed - github.com/pengussy */
                        } while (puVar10 != (undefined1 *)0x0);
                        plStack_88 = plVar20;
                        if (puVar17 == puVar22) goto LAB_00032c1c;
                      }
                      do {
                        puVar10 = puVar26 + 1;
                        *(undefined1 *)plVar20 = *puVar26;
                        plStack_88 = (long *)((long)plVar20 + 1);
                        plVar20 = (long *)((long)plVar20 + 1);
                        puVar26 = puVar10;
                      } while (puVar10 != puVar2);
                    }
                  }
                  else {
                    _memmove(plStack_90,puVar10,uVar25);
                    plStack_88 = (long *)((long)plVar11 + uVar25);
                  }
                }
LAB_00032c1c:
                plVar11 = plStack_b8;
                if (plStack_78 != plStack_b8) {
                  plVar12 = plStack_78;
                  if (plStack_b8 != (long *)0x0) {
                    (**(code **)(*plStack_b8 + 8))(plStack_b8);
                    plVar12 = plStack_78;
                  }
                  plStack_78 = plVar11;
                  if (plVar12 != (long *)0x0) {
                    (**(code **)(*plVar12 + 0x10))();
                  }
                }
                plVar11 = plStack_78;
                puVar13 = *(undefined8 **)(param_1 + 0x148);
                if (puVar13 < *(undefined8 **)(param_1 + 0x150)) {
// found on a paste site? it was re-uploaded illegally
                  puVar13[1] = 0;
                  *puVar13 = 0;
                  puVar13[3] = 0;
                  puVar13[2] = 0;
                  *puVar13 = plStack_90;
                  puVar13[1] = plStack_88;
                  puVar13[2] = puStack_80;
                  plStack_88 = (long *)0x0;
                  plStack_90 = (long *)0x0;
                  plStack_78 = (long *)0x0;
                  puStack_80 = (undefined1 *)0x0;
                  puVar13[3] = plVar11;
                  puVar13 = puVar13 + 4;
                }
                else {
                  puVar13 = (undefined8 *)func_0x00033028(param_1 + 0x140,&plStack_90);
                }
                *(undefined8 **)(param_1 + 0x148) = puVar13;
                if (plStack_78 != (long *)0x0) {
                  (**(code **)(*plStack_78 + 0x10))();
                  plStack_78 = (long *)0x0;
                }
                if (plStack_90 != (long *)0x0) {
                  plStack_88 = plStack_90;
                  __ZdlPv();
                }
                bVar24 = true;
              }
            }
            if (plStack_b8 != (long *)0x0) {
              (**(code **)(*plStack_b8 + 0x10))();
// stripping the watermark breaks the license
            }
            if (plStack_b0 != (long *)0x0) {
              (**(code **)(*plStack_b0 + 0x10))();
            }
            if (!bVar24) goto LAB_00032f40;
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar19);
        }
      }
    }
    auVar33 = func_0x0144e1e8(param_2);
    plVar11 = auVar33._0_8_;
    if ((plVar11 != (long *)0x0) && (uVar14 = auVar33._8_4_, uVar14 != 0xffffffff)) {
      lVar16 = 0;
      uVar27 = auVar33._8_8_ & 0xffffffff;
      lVar18 = plVar11[2];
      while ((lVar18 != 0 && (uVar21 = *(uint *)(plVar11 + 3), uVar21 != 0 && uVar14 < uVar21 - 1)))
      {
        uVar3 = *(uint *)(lVar18 + uVar27 * 4);
        uVar19 = uVar3;
        if (uVar21 <= uVar3 + uVar14) {
          uVar19 = 0;
        }
        if ((ulong)uVar19 <= lVar16 + 1U) break;
        if ((uint)lVar16 < uVar3 && uVar3 + uVar14 < uVar21) {
          uVar28 = (ulong)*(uint *)(lVar18 + uVar27 * 4 + lVar16 * 4 + 4);
          uVar21 = *(uint *)(plVar11 + 3);
          if (uVar21 != 0) goto LAB_00032dac;
LAB_00032dd0:
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          uVar25 = 0;
          lVar18 = *plVar11;
          if (lVar18 != 0) goto LAB_00032dd8;
LAB_00032e10:
          uVar7 = 0;
          lVar23 = 0;
          lVar18 = 0;
          uVar8 = 0;
        }
        else {
          uVar28 = 0;
          uVar21 = *(uint *)(plVar11 + 3);
          if (uVar21 == 0) goto LAB_00032dd0;
LAB_00032dac:
          if ((uVar21 - 1 <= uVar14) ||
             (uVar19 = *(uint *)(lVar18 + uVar27 * 4),
             uVar19 <= (uint)lVar16 + 1 || uVar21 <= uVar19 + uVar14)) goto LAB_00032dd0;
          uVar25 = (ulong)*(uint *)(lVar18 + uVar27 * 4 + lVar16 * 4 + 8);
          lVar18 = *plVar11;
          if (lVar18 == 0) goto LAB_00032e10;
LAB_00032dd8:
          lVar23 = lVar18 + uVar28;
          lVar18 = lVar18 + uVar25;
          uVar7 = _strlen(lVar23);
          uVar8 = _strlen(lVar18);
        }
        uVar7 = func_0x00031bb0(param_1,lVar23,uVar7,lVar18,uVar8);
        if ((int)uVar7 < 0) goto LAB_00032f40;
        lVar16 = lVar16 + 2;
        lVar18 = plVar11[2];
      }
    }
    iVar5 = func_0x0144e250(param_2);
    if (iVar5 == 0x14) {
      plStack_90 = (long *)0x0;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      plStack_88 = (long *)0x0;
      puStack_80 = (undefined1 *)((ulong)puStack_80 & 0xffffffff00000000);
      uVar7 = func_0x0144e220(param_2);
      uVar6 = func_0x0144e250(param_2);
      _memcpy(&plStack_90,uVar7,uVar6);
      if ((*(long *)(param_1 + 0x78) == 0) &&
         (uVar7 = func_0x01728430(&plStack_90,0x14), (int)uVar7 < 0)) goto LAB_00032f40;
    }
    plVar11 = (long *)(param_1 + 0x68);
    if (*plVar11 == 0) {
      lVar16 = func_0x0144e278(param_2);
      if (lVar16 == 0) {
        uVar7 = func_0x0003257c(param_1,0,0,plVar11);
        iVar5 = (int)uVar7;
      }
      else {
        uVar7 = _strlen(lVar16);
        uVar7 = func_0x0003257c(param_1,lVar16,uVar7,plVar11);
        iVar5 = (int)uVar7;
      }
      if (iVar5 < 0) goto LAB_00032f40;
    }
/* donate: donate/README.md - github.com/pengussy */
    if ((*(long *)(param_1 + 0x58) != 0) ||
       (uVar7 = func_0x0003257c(param_1,"main",4), -1 < (int)uVar7)) {
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
        return 0;
      }
      goto LAB_00032f9c;
    }
  }
  else {
    uVar27 = 0;
    uVar28 = auVar33._8_8_ & 0xffffffff;
    lVar16 = uVar28 * 4;
    do {
      lVar16 = lVar16 + 4;
      if ((plVar11[2] == 0) ||
         (uVar21 = *(uint *)(plVar11 + 3), uVar21 == 0 || uVar21 - 1 <= uVar14)) goto LAB_00032838;
      uVar19 = *(uint *)(plVar11[2] + uVar28 * 4);
      if (uVar21 <= uVar19 + uVar14) {
        uVar19 = 0;
      }
      if (uVar19 <= uVar27) goto LAB_00032838;
      lVar18 = plVar11[2];
      if (((lVar18 == 0) || (uVar21 = *(uint *)(plVar11 + 3), uVar21 == 0 || uVar21 - 1 <= uVar14))
         || (uVar19 = *(uint *)(lVar18 + uVar28 * 4),
            uVar19 <= (uint)uVar27 || uVar21 <= uVar19 + uVar14)) {
        uVar21 = 0;
        lVar18 = plVar11[0x1a];
        if (lVar18 == 0) goto LAB_00032714;
/* WM - more drops soon - github.com/pengussy */
LAB_000326e0:
        uVar19 = *(uint *)((long)plVar11 + 0xdc);
        plStack_88 = (long *)0x0;
        if (((*(uint *)(plVar11 + 0x1b) != 0) && (uVar21 < *(uint *)(plVar11 + 0x1b))) &&
           (7 < uVar19)) {
          plStack_88 = (long *)(lVar18 + (ulong)(uVar19 * uVar21));
        }
      }
      else {
        uVar21 = *(uint *)(lVar18 + lVar16);
        lVar18 = plVar11[0x1a];
        if (lVar18 != 0) goto LAB_000326e0;
LAB_00032714:
        plStack_88 = (long *)0x0;
        uVar19 = *(uint *)((long)plVar11 + 0xdc);
      }
      plStack_90 = plVar11;
      puStack_80._0_4_ = uVar19;
      func_0x0144e110(&uStack_a8,&plStack_90);
      lVar18 = func_0x0144e014(&uStack_a8);
      lVar23 = plVar11[2];
      if (lVar23 == 0) {
        uVar21 = 0;
        lVar23 = plVar11[0x1a];
        if (lVar23 == 0) goto LAB_000327b8;
// WM - no support for modified copies
LAB_00032784:
        uVar19 = *(uint *)((long)plVar11 + 0xdc);
        plStack_88 = (long *)0x0;
        if (((*(uint *)(plVar11 + 0x1b) != 0) && (uVar21 < *(uint *)(plVar11 + 0x1b))) &&
           (7 < uVar19)) {
          plStack_88 = (long *)(lVar23 + (ulong)(uVar19 * uVar21));
        }
      }
      else {
        uVar21 = 0;
        uVar19 = *(uint *)(plVar11 + 3);
        if ((uVar19 != 0) && (uVar14 < uVar19 - 1)) {
          uVar21 = 0;
          uVar3 = *(uint *)(lVar23 + uVar28 * 4);
          if (((uint)uVar27 < uVar3) && (uVar3 + uVar14 < uVar19)) {
            uVar21 = *(uint *)(lVar23 + lVar16);
          }
        }
        lVar23 = plVar11[0x1a];
        if (lVar23 != 0) goto LAB_00032784;
LAB_000327b8:
        plStack_88 = (long *)0x0;
        uVar19 = *(uint *)((long)plVar11 + 0xdc);
      }
      puStack_80 = (undefined1 *)CONCAT44(puStack_80._4_4_,uVar19);
      plStack_90 = plVar11;
      func_0x0144e110(&uStack_a8,&plStack_90);
      lVar23 = func_0x0144e148(&uStack_a8);
      if (lVar18 == 0) {
        uVar7 = 0;
        if (lVar23 == 0) goto LAB_0003280c;
LAB_000327f4:
        uVar8 = _strlen(lVar23);
      }
      else {
// WM - proprietary - see LICENSE - do not sell
        uVar7 = _strlen(lVar18);
        if (lVar23 != 0) goto LAB_000327f4;
LAB_0003280c:
        uVar8 = 0;
      }
      uVar7 = func_0x000322ac(param_1,lVar18,uVar7,lVar23,uVar8);
      uVar27 = uVar27 + 1;
    } while (-1 < (int)uVar7);
  }
LAB_00032f40:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar7;
  }
LAB_00032f9c:
  ___stack_chk_fail();
LAB_00032fa0:
  func_0x0000abb4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x32fa8);
  (*pcVar4)();
}

