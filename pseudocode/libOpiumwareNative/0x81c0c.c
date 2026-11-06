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
 *  file-id: 0x81c0c:bf7d5f751c
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

void FUN_00081c0c(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *******pppppppuVar3;
  ulong uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  pcVar6 = (code *)func_0x0011ab24(&SUB_003e945c);
  func_0x0044803c();
  lVar7 = (*pcVar6)();
  if (lVar7 != 0) {
    pcVar6 = (code *)func_0x0011ab24(FUN_003ec154);
    plVar1 = (long *)*param_2;
    iVar2 = (int)param_2[1];
    if (-1 < *(char *)((long)param_2 + 0x17)) {
/* proprietary - see LICENSE - do not sell */
      plVar1 = param_2;
      iVar2 = (int)*(char *)((long)param_2 + 0x17);
    }
    lVar8 = (*pcVar6)(plVar1,iVar2);
    if (lVar8 != 0) {
      pcVar6 = (code *)func_0x0011ab24(&SUB_003ea920);
      (*pcVar6)(lVar7,lVar8);
      pcVar6 = (code *)func_0x0011ab24(&SUB_003e95ac);
      (*pcVar6)(lVar7,0x100);
      uVar9 = __Znwm(0x1000);
      _bzero(uVar9,0x1000);
      pppppppuStack_78 = (undefined8 *******)0x0;
      uStack_70 = 0;
      uStack_68 = 0;
      do {
        while( true ) {
          pcVar6 = (code *)func_0x0011ab24(FUN_003e9754);
          uVar5 = (*pcVar6)(lVar7,uVar9,0x1000);
          uVar4 = uStack_68;
          uVar13 = uStack_70;
          if ((int)uVar5 < 1) {
            pcVar6 = (code *)func_0x0011ab24(&SUB_003eaa98);
            (*pcVar6)(lVar7);
            if ((int)uVar5 < 0) {
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              if ((long)uStack_68 < 0) {
// proprietary - see LICENSE - do not sell
                __ZdlPv(pppppppuStack_78);
              }
            }
            else {
              param_1[1] = uStack_70;
              *param_1 = (long)pppppppuStack_78;
              param_1[2] = uStack_68;
            }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_01f20590)(uVar9);
            return;
          }
          uVar14 = (ulong)uVar5;
          uVar15 = (ulong)uStack_68._7_1_;
          if (-1 < (long)uVar15) break;
          if (uVar14 <= (uStack_68 & 0x7fffffffffffffff) + ~uStack_70) {
            uVar15 = uStack_70;
            pppppppuVar10 = pppppppuStack_78;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            goto LAB_00081e24;
          }
          uVar11 = uStack_70 + uVar14;
          if (0x7ffffffffffffff6 < uVar11) {
            FUN_0000aa50();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x81f1c);
            (*pcVar6)();
          }
          uVar12 = (uStack_68 & 0x7fffffffffffffff) - 1;
          if (uVar12 < 0x3ffffffffffffff4) goto LAB_00081da0;
          uVar15 = 0x7ffffffffffffff8;
          pppppppuVar10 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar3 = pppppppuStack_78;
joined_r0x00081e14:
          if (uVar13 != 0) {
            _memmove(pppppppuVar10,pppppppuVar3,uVar13);
          }
          _memmove((long)pppppppuVar10 + uVar13,uVar9,uVar14);
          *(undefined1 *)((long)pppppppuVar10 + uVar13 + uVar14) = 0;
          if ((long)uVar4 < 0) {
            __ZdlPv(pppppppuStack_78);
          }
          uStack_68 = uVar15 | 0x8000000000000000;
          pppppppuStack_78 = pppppppuVar10;
          uStack_70 = uVar13 + uVar14;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        }
        if (0x16 - uVar15 < uVar14) {
          uVar11 = uVar15 + uVar14;
          uVar12 = 0x16;
          uVar13 = uVar15;
LAB_00081da0:
          if (uVar11 <= uVar12 * 2) {
            uVar11 = uVar12 * 2;
          }
          uVar11 = (uVar11 & 0x7ffffffffffffff8) + 8;
          uVar15 = 0x19;
          if (uVar11 != 0x18) {
            uVar15 = uVar11;
          }
          pppppppuVar10 = (undefined8 *******)__Znwm(uVar15);
          pppppppuVar3 = pppppppuStack_78;
          if (-1 < (long)uVar4) {
            pppppppuVar3 = &pppppppuStack_78;
          }
          goto joined_r0x00081e14;
        }
        pppppppuVar10 = &pppppppuStack_78;
LAB_00081e24:
        _memmove((long)pppppppuVar10 + uVar15,uVar9,uVar14);
        uVar15 = uVar15 + uVar14;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        if ((long)uStack_68 < 0) {
          uStack_70 = uVar15;
          *(undefined1 *)((long)pppppppuVar10 + uVar15) = 0;
        }
        else {
          uStack_68 = CONCAT17((char)uVar15,(undefined7)uStack_68) & 0x7fffffffffffffff;
          *(undefined1 *)((long)pppppppuVar10 + uVar15) = 0;
        }
      } while( true );
    }
    pcVar6 = (code *)func_0x0011ab24(&SUB_003eaa98);
    (*pcVar6)(lVar7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

