/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x216db4:92877dad71
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00217150) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00216db4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined8 *******pppppppuStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 *******pppppppuStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  byte abStack_2c8 [8];
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *******pppppppuStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  byte abStack_288 [384];
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  undefined *apuStack_108 [19];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  func_0x00280f2c(abStack_2c8,param_2 + 0x20);
  if ((abStack_2c8[0] & 1) == 0) {
    if (plStack_2c0 == plStack_2b8) {
      bVar15 = 0;
      goto LAB_00217228;
    }
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    pppppppuStack_2e0 = (undefined8 *******)0x0;
    cVar4 = *(char *)((long)plStack_2c0 + 0x17);
    plVar10 = (long *)*plStack_2c0;
    if (-1 < (long)cVar4) {
      plVar10 = plStack_2c0;
    }
    lVar2 = plStack_2c0[1];
    if (-1 < cVar4) {
      lVar2 = (long)cVar4;
    }
    func_0x0013be80(&pppppppuStack_2e0,plVar10,(long)plVar10 + lVar2);
    auVar18 = __ZNKSt3__14__fs10filesystem4path11__extensionEv(&pppppppuStack_2e0);
    plVar10 = auVar18._8_8_;
// WM - origin: github.com/pengussy
    if (plVar10 < (long *)0x7ffffffffffffff7) {
      if ((long *)((long)&MACH_HEADER.sizeofcmds + 2) < plVar10) {
        uVar14 = ((ulong)plVar10 & 0x7ffffffffffffff8) + 8;
        uVar12 = 0x19;
        if (uVar14 != 0x18) {
          uVar12 = uVar14;
        }
        pppppppuVar7 = (undefined8 *******)__Znwm(uVar12);
        uStack_298 = (long *)(uVar12 | 0x8000000000000000);
        pppppppuStack_2a8 = pppppppuVar7;
        plStack_2a0 = plVar10;
      }
      else {
        uStack_298 = (long *)CONCAT17(auVar18[8],(undefined7)uStack_298);
        pppppppuVar7 = &pppppppuStack_2a8;
      }
      _memmove(pppppppuVar7,auVar18._0_8_,plVar10);
      *(undefined1 *)((long)pppppppuVar7 + (long)plVar10) = 0;
      if ((long)uStack_298 < 0) {
        if (plStack_2a0 == (long *)0x0) {
          uVar14 = *(ulong *)(param_2 + 0x88);
/* wm:found on a paste site? it was re-uploaded illegally */
          if (-1 < (char)*(byte *)(param_2 + 0x97)) {
            uVar14 = (ulong)*(byte *)(param_2 + 0x97);
          }
          __ZdlPv(pppppppuStack_2a8);
          if (uVar14 != 0) {
            bVar15 = *(byte *)(param_2 + 0x97);
            uVar12 = (ulong)bVar15;
            uVar14 = *(ulong *)(param_2 + 0x88);
            goto LAB_00216f14;
          }
          goto LAB_002170f0;
        }
LAB_002170ec:
        __ZdlPv(pppppppuStack_2a8);
      }
      else if (uStack_298._7_1_ == '\0') {
        bVar15 = *(byte *)(param_2 + 0x97);
        uVar12 = (ulong)bVar15;
        uVar14 = *(ulong *)(param_2 + 0x88);
        uVar3 = uVar14;
        if (-1 < (char)bVar15) {
          uVar3 = uVar12;
        }
        if (uVar3 != 0) {
LAB_00216f14:
          if (-1 < (char)bVar15) {
            uVar14 = uVar12;
          }
          plVar10 = (long *)(uVar14 + 1);
          if ((long *)0x7ffffffffffffff6 < plVar10) {
            FUN_0000aa50();
            goto LAB_002172c8;
          }
          plVar17 = *(long **)(param_2 + 0x80);
          if (plVar10 < (long *)((long)&MACH_HEADER.sizeofcmds + 3)) {
            uStack_298 = (long *)CONCAT17((char)plVar10,(undefined7)uStack_298);
            pppppppuVar7 = &pppppppuStack_2a8;
          }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          else {
            uVar12 = ((ulong)plVar10 & 0x7ffffffffffffff8) + 8;
            uVar3 = 0x19;
            if (uVar12 != 0x18) {
              uVar3 = uVar12;
            }
            pppppppuVar7 = (undefined8 *******)__Znwm(uVar3);
            uStack_298 = (long *)(uVar3 | 0x8000000000000000);
            pppppppuStack_2a8 = pppppppuVar7;
            plStack_2a0 = plVar10;
          }
          if (-1 < (char)bVar15) {
            plVar17 = (long *)(param_2 + 0x80);
          }
          *(undefined1 *)pppppppuVar7 = 0x2e;
          _memmove((undefined *)((long)pppppppuVar7 + 1),plVar17,uVar14);
          uVar12 = uStack_2d0;
          ((undefined *)((long)pppppppuVar7 + 1))[uVar14] = 0;
          uVar16 = (uint)(char)uStack_298._7_1_;
          plVar10 = plStack_2a0;
          pppppppuVar7 = pppppppuStack_2a8;
          if (-1 < (int)uVar16) {
            plVar10 = (long *)(ulong)uStack_298._7_1_;
            pppppppuVar7 = &pppppppuStack_2a8;
          }
          uVar13 = (uStack_2d0 & 0x7fffffffffffffff) - 1;
          uVar14 = uStack_2d8;
          uVar3 = uVar13;
          if (-1 < (long)uStack_2d0) {
            uVar3 = 0x16;
            uVar14 = uStack_2d0 >> 0x38;
          }
          if ((long *)(uVar3 - uVar14) < plVar10) {
            uVar3 = uVar14 + (long)plVar10;
            if (0x7ffffffffffffff6 < uVar3) {
              FUN_0000aa50();
              goto LAB_002172c8;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            }
            if ((long)uStack_2d0 < 0) {
              if (uVar13 < 0x3ffffffffffffff4) goto LAB_00217058;
              uVar13 = 0x7ffffffffffffff8;
              pppppppuVar8 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
LAB_00217090:
              pppppppuVar11 = pppppppuStack_2e0;
            }
            else {
              uVar13 = 0x16;
LAB_00217058:
              uVar1 = uVar3;
              if (uVar3 <= uVar13 * 2) {
                uVar1 = uVar13 * 2;
              }
              uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
              uVar13 = 0x19;
              if (uVar1 != 0x18) {
                uVar13 = uVar1;
              }
              pppppppuVar8 = (undefined8 *******)__Znwm(uVar13);
              if ((long)uVar12 < 0) goto LAB_00217090;
              pppppppuVar11 = &pppppppuStack_2e0;
            }
            if (uVar14 != 0) {
              _memmove(pppppppuVar8,pppppppuVar11,uVar14);
            }
            _memmove((long)pppppppuVar8 + uVar14,pppppppuVar7,plVar10);
            *(undefined1 *)((long)pppppppuVar8 + uVar3) = 0;
            if ((long)uVar12 < 0) {
              __ZdlPv(pppppppuStack_2e0);
            }
            uStack_2d0 = uVar13 | 0x8000000000000000;
            uVar16 = (uint)uStack_298._7_1_;
            pppppppuStack_2e0 = pppppppuVar8;
            uStack_2d8 = uVar3;
          }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          else if (plVar10 != (long *)0x0) {
            pppppppuVar8 = pppppppuStack_2e0;
            if (-1 < (long)uStack_2d0) {
              pppppppuVar8 = &pppppppuStack_2e0;
            }
            _memmove((long)pppppppuVar8 + uVar14,pppppppuVar7,plVar10);
            uVar14 = uVar14 + (long)plVar10;
            if ((long)uStack_2d0 < 0) {
              uStack_2d8 = uVar14;
            }
            else {
              uStack_2d0 = CONCAT17((char)uVar14,(undefined7)uStack_2d0) & 0x7fffffffffffffff;
            }
            *(undefined1 *)((long)pppppppuVar8 + uVar14) = 0;
          }
          if ((uVar16 >> 7 & 1) != 0) goto LAB_002170ec;
        }
      }
LAB_002170f0:
      func_0x000a6284(&pppppppuStack_2a8,&pppppppuStack_2e0,0x24);
      if ((abStack_288[(long)pppppppuStack_2a8[-3]] & 5) == 0) {
        uVar14 = *(ulong *)(param_2 + 0x10);
        lVar2 = *(long *)(param_2 + 8);
        if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
          uVar14 = (ulong)*(byte *)(param_2 + 0x1f);
          lVar2 = param_2 + 8;
        }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&pppppppuStack_2a8,lVar2,uVar14)
        ;
        if ((long)uStack_2d0 < 0) {
          func_0x00017ae8(&pppppppuStack_300,pppppppuStack_2e0,uStack_2d8);
        }
        else {
          uStack_2f8 = uStack_2d8;
          pppppppuStack_300 = pppppppuStack_2e0;
          uStack_2f0 = uStack_2d0;
        }
        plVar10 = plStack_2c0;
        if (*(char *)((long)plStack_2c0 + 0x17) < '\0') {
          __ZdlPv(*plStack_2c0);
          *plVar10 = 0;
          plVar10[1] = 0;
          plVar10[2] = 0;
        }
        plVar10[2] = uStack_2f0;
        plVar10[1] = uStack_2f8;
        *plVar10 = (long)pppppppuStack_300;
      }
      else {
/*  origin: github.com/pengussy  */
        abStack_2c8[0] = 1;
        for (; plStack_2c0 != plStack_2b8; plStack_2b8 = plStack_2b8 + -3) {
        }
        plStack_2b8 = plStack_2c0;
      }
      pppppppuStack_2a8 = (undefined8 *******)&UNK_01dbf310;
      apuStack_108[0] = &UNK_01dbf338;
      func_0x00140dd0(&plStack_2a0);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppppppuStack_2a8,&UNK_01dbf350);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_108);
      if ((long)uStack_2d0 < 0) {
        __ZdlPv(pppppppuStack_2e0);
      }
      bVar15 = abStack_2c8[0];
      goto LAB_00217228;
    }
  }
  else {
    bVar15 = 1;
LAB_00217228:
    uVar5 = uStack_2b0;
    plVar17 = plStack_2b8;
    plVar10 = plStack_2c0;
    pppppppuStack_2a8 = (undefined8 *******)CONCAT71(pppppppuStack_2a8._1_7_,bVar15);
    plStack_2a0 = plStack_2c0;
    uStack_290 = uStack_2b0;
    uStack_298 = plStack_2b8;
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)0x0;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uStack_2b0 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar9 = (undefined8 *)__Znwm(0x28);
    *puVar9 = &UNK_01dc0758;
    *(byte *)(puVar9 + 1) = bVar15;
    puVar9[3] = plVar17;
    puVar9[2] = plVar10;
    puVar9[4] = uVar5;
    *(undefined8 **)(param_1 + 0x18) = puVar9;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_0000aa50();
LAB_002172c8:
                    /* WARNING: Does not return */
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x2172cc);
  (*pcVar6)();
}

