/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xd2de4:e4e4440590
   =========================================================================== */

undefined8 FUN_000d2de4(undefined8 param_1)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_98;
  undefined8 uStack_90;
  char cStack_88;
  int **ppiStack_80;
  int *piStack_78;
  int **ppiStack_70;
  int *piStack_68;
  
  func_0x000d02b8();
  uStack_90 = 0x1f26eb8;
  cStack_88 = '\x01';
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x000d042c(param_1,&uStack_90);
  if ((((lRam0000000001f26f88 != 0) && (cRam0000000001f270e8 == '\x01')) &&
      (cRam0000000002097053 == '\x01')) && (lRam0000000001f26f88 == lRam0000000002097030)) {
    lVar3 = func_0x00791618(param_1);
    lVar4 = func_0x00791618(lRam0000000001f26f88);
    if (lVar3 != lVar4) goto LAB_000d3128;
    piStack_a8 = (int *)0x0;
    piStack_a0 = (int *)0x0;
    piStack_98 = (int *)0x0;
    __ZNSt3__15mutex4lockEv(0x1f26e70);
/* wm:unlicensed copy if this notice is missing */
    piVar6 = piStack_a0;
    piVar1 = piStack_a8;
    piVar7 = piRam0000000001f26f08;
    piVar9 = piRam0000000001f26f00;
    uVar10 = (long)piRam0000000001f26f08 - (long)piRam0000000001f26f00 >> 4;
    if ((ulong)((long)piStack_98 - (long)piStack_a8 >> 2) < uVar10) {
      if (uVar10 >> 0x3e != 0) {
        FUN_0000abb4();
        goto LAB_000d316c;
      }
      piVar5 = (int *)__Znwm((long)piRam0000000001f26f08 - (long)piRam0000000001f26f00 >> 2);
      piVar6 = (int *)((long)piVar5 + ((long)piVar6 - (long)piVar1));
      _memcpy(piVar5,piVar1);
      piStack_a8 = piVar5;
      piStack_a0 = piVar6;
      piStack_98 = piVar5 + uVar10;
      if (piVar1 != (int *)0x0) {
        __ZdlPv(piVar1);
        piVar7 = piRam0000000001f26f08;
        piVar9 = piRam0000000001f26f00;
      }
/*  chat: discord.gg/sdkhDjTex  */
    }
    if (piVar9 != piVar7) {
      piVar9 = piVar9 + 2;
      piVar1 = piStack_a0;
      do {
        while (piStack_a0 = piVar1, piVar6 = piVar9, ppiStack_80 = &piStack_68, piStack_78 = piVar6,
              ppiStack_70 = &piStack_a8, piStack_68 = piStack_a0, piStack_a0 < piStack_98) {
          *piStack_a0 = *piVar6;
          piVar9 = piVar6 + 4;
          piVar1 = piStack_a0 + 1;
          piStack_a0 = piStack_a0 + 1;
          if (piVar6 + 2 == piVar7) goto LAB_000d2f9c;
        }
        func_0x0013b890(&ppiStack_80);
        piStack_a0 = piStack_68;
        piVar9 = piVar6 + 4;
        piVar1 = piStack_a0;
      } while (piVar6 + 2 != piVar7);
LAB_000d2f9c:
      piVar9 = piRam0000000001f26f00;
    }
    uRam0000000001f270ec = 0;
    piRam0000000001f26f08 = piVar9;
    __ZNSt3__15mutex6unlockEv(0x1f26e70);
    __ZNSt3__15mutex4lockEv(0x1f26f20);
    piVar1 = piStack_a8;
    piVar7 = piRam0000000001f26f70;
    piVar9 = piRam0000000001f26f68;
    lVar3 = (long)piStack_a0 - (long)piStack_a8;
    uVar10 = (lVar3 >> 2) + ((long)piRam0000000001f26f70 - (long)piRam0000000001f26f68 >> 4);
    if ((ulong)((long)piStack_98 - (long)piStack_a8 >> 2) < uVar10) {
      if (uVar10 >> 0x3e != 0) {
        FUN_0000abb4();
LAB_000d316c:
/* origin: github.com/pengussy - github.com/pengussy */
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xd3170);
        (*pcVar2)();
      }
      lVar4 = __Znwm(uVar10 * 4);
      piVar6 = (int *)(lVar4 + lVar3);
      piVar5 = (int *)(lVar4 + uVar10 * 4);
      piVar8 = piVar6 + -(lVar3 >> 2);
      _memcpy(piVar8,piVar1,lVar3);
      piStack_a8 = piVar8;
      piStack_a0 = piVar6;
      piStack_98 = piVar5;
      if (piVar1 != (int *)0x0) {
        __ZdlPv(piVar1);
        piVar7 = piRam0000000001f26f70;
        piVar9 = piRam0000000001f26f68;
      }
    }
    if (piVar9 != piVar7) {
      piVar9 = piVar9 + 2;
      piVar1 = piStack_a0;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      do {
        while (piStack_a0 = piVar1, piVar6 = piVar9, ppiStack_80 = &piStack_68, piStack_78 = piVar6,
              ppiStack_70 = &piStack_a8, piStack_68 = piStack_a0, piStack_a0 < piStack_98) {
          *piStack_a0 = *piVar6;
          piVar9 = piVar6 + 4;
          piVar1 = piStack_a0 + 1;
          piStack_a0 = piStack_a0 + 1;
          if (piVar6 + 2 == piVar7) goto LAB_000d30b0;
        }
        func_0x0013b890(&ppiStack_80);
        piStack_a0 = piStack_68;
        piVar9 = piVar6 + 4;
        piVar1 = piStack_a0;
      } while (piVar6 + 2 != piVar7);
LAB_000d30b0:
      piVar9 = piRam0000000001f26f68;
    }
    uRam0000000001f270f0 = 0;
    piRam0000000001f26f70 = piVar9;
    __ZNSt3__15mutex6unlockEv(0x1f26f20);
    piVar7 = piStack_a0;
    LOAcquire();
    lRam0000000001f270e0 = lRam0000000001f270e0 + 1;
    LORelease();
    for (piVar9 = piStack_a8; piVar9 != piVar7; piVar9 = piVar9 + 1) {
      if (0 < *piVar9) {
        func_0x0079628c(param_1);
      }
    }
    if (piStack_a8 != (int *)0x0) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      piStack_a0 = piStack_a8;
      __ZdlPv(piStack_a8);
    }
  }
LAB_000d3128:
  if (cStack_88 == '\x01') {
    __ZNSt3__115recursive_mutex6unlockEv(uStack_90);
  }
  return 0;
}

