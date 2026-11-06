/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x33f50:ed9f214c38
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00034198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000341ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000341d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000341b0) */
/* WARNING: Removing unreachable block (ram,0x000341c0) */
/* WARNING: Removing unreachable block (ram,0x0003419c) */
/* WARNING: Removing unreachable block (ram,0x000341dc) */
/* WARNING: Removing unreachable block (ram,0x00034238) */
/* WARNING: Removing unreachable block (ram,0x00034234) */
/* WARNING: Removing unreachable block (ram,0x0003424c) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_00033f50(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long *****ppppplVar5;
  long *******ppppppplVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *******ppppppplStack_220;
  long *****ppppplStack_218;
  long *****ppppplStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  undefined8 uStack_1f0;
  long *******ppppppplStack_1e8;
// WM - watermarked copy - do not remove
  long *****ppppplStack_1e0;
  undefined8 uStack_1d8;
  long ******pppppplStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar4 = func_0x0172af08();
  plVar10 = (long *)0x0;
  if (lVar4 != 0) {
    uStack_1f0 = 0;
    func_0x013865f0(auStack_1c8,lVar4,param_2,param_3,(long)&uStack_1f0 + 4,&uStack_1f0,0,0);
    if (puStack_1c0 != puStack_1b8) {
      puVar9 = puStack_1c0;
      do {
        plVar10 = (long *)*puVar9;
        ppppplStack_208 = (long *****)0x0;
        ppppplStack_210 = (long *****)0x0;
        ppppplStack_1f8 = (long *****)0x0;
        ppppplStack_200 = (long *****)0x0;
/* proprietary - see LICENSE - do not sell */
        ppppplStack_218 = (long *****)0x0;
        ppppppplStack_220 = (long *******)0x0;
        lVar4 = *(long *)(*plVar10 + 8);
        if (lVar4 == 0) {
          ppppppplStack_1e8 = (long *******)0x0;
          ppppplStack_1e0 = (long *****)0x0;
          uStack_1d8 = (long *****)0x0;
        }
        else {
          ppppplVar5 = (long *****)_strlen(lVar4);
          if ((long *****)0x7ffffffffffffff6 < ppppplVar5) {
            FUN_0000aa50();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x3418c);
            (*pcVar3)();
          }
          if ((long *****)((long)&MACH_HEADER.sizeofcmds + 2) < ppppplVar5) {
            uVar1 = ((ulong)ppppplVar5 & 0x7ffffffffffffff8) + 8;
            uVar2 = 0x19;
            if (uVar1 != 0x18) {
              uVar2 = uVar1;
            }
            ppppppplVar6 = (long *******)__Znwm(uVar2);
            uStack_1d8 = (long *****)(uVar2 | 0x8000000000000000);
            ppppppplStack_1e8 = ppppppplVar6;
            ppppplStack_1e0 = ppppplVar5;
          }
          else {
            uStack_1d8 = (long *****)CONCAT17((char)ppppplVar5,(undefined7)uStack_1d8);
            ppppppplVar6 = (long *******)&ppppppplStack_1e8;
          }
          _memmove(ppppppplVar6,lVar4,ppppplVar5);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          *(undefined1 *)((long)ppppppplVar6 + (long)ppppplVar5) = 0;
        }
        ppppplStack_218 = ppppplStack_1e0;
        ppppppplStack_220 = ppppppplStack_1e8;
        ppppplStack_210 = uStack_1d8;
        if ((plVar10[7] - plVar10[6] & 0x7fffffff8U) != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (&ppppplStack_208,*(undefined8 *)plVar10[6]);
        }
        pppppplStack_1d0 = (long ******)param_1[1];
        ppppppplStack_1e8 = &pppppplStack_1d0;
        uStack_1d8 = (long *****)param_1;
        if (pppppplStack_1d0 < (long ******)param_1[2]) {
          pppppplStack_1d0[2] = ppppplStack_210;
          pppppplStack_1d0[1] = ppppplStack_218;
          *pppppplStack_1d0 = (long *****)ppppppplStack_220;
/* more drops soon - github.com/pengussy */
          ppppplStack_218 = (long *****)0x0;
          ppppplStack_210 = (long *****)0x0;
          ppppppplStack_220 = (long *******)0x0;
          pppppplStack_1d0[4] = ppppplStack_200;
          pppppplStack_1d0[3] = ppppplStack_208;
          pppppplStack_1d0[5] = ppppplStack_1f8;
          ppppplStack_200 = (long *****)0x0;
          ppppplStack_1f8 = (long *****)0x0;
          ppppplStack_208 = (long *****)0x0;
          param_1[1] = (long)(pppppplStack_1d0 + 6);
          ppppplStack_1e0 = (long *****)&ppppppplStack_220;
        }
        else {
          ppppplStack_1e0 = (long *****)&ppppppplStack_220;
          func_0x00034278(&ppppppplStack_1e8);
          param_1[1] = (long)pppppplStack_1d0;
          if ((long)ppppplStack_1f8 < 0) {
            __ZdlPv(ppppplStack_208);
          }
        }
        if ((long)ppppplStack_210 < 0) {
          __ZdlPv(ppppppplStack_220);
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puStack_1b8);
    }
    plVar10 = (long *)func_0x0000e37c(auStack_1c8);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return plVar10;
  }
  ___stack_chk_fail();
  lVar4 = *param_1;
  if (lVar4 != 0) {
/* donate: donate/README.md - github.com/pengussy */
    lVar8 = param_1[1];
    lVar7 = lVar4;
    if (lVar4 != lVar8) {
      do {
        lVar8 = lVar8 + -0x30;
      } while (lVar8 != lVar4);
      lVar7 = *param_1;
    }
    param_1[1] = lVar4;
    __ZdlPv(lVar7);
  }
  return param_1;
}

