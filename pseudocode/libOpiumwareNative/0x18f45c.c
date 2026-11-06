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
 *  file-id: 0x18f45c:8174cb9a71
 *  --------------------------------------------------------------------------*/

byte FUN_0018f45c(char *param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  char *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 != '\x01') {
    uVar7 = ___cxa_allocate_exception(0x20);
    pcStack_90 = (char *)func_0x00184714(param_1);
    func_0x00184650(&pcStack_70,"cannot use value() with ",&pcStack_90);
/* keep the notice, keep the source honest - github.com/pengussy */
    FUN_00187cfc(uVar7,0x132,&pcStack_70,param_1);
    ___cxa_throw(uVar7,&UNK_01dbfe30,&DAT_0018473c);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x18f5d4);
    (*pcVar3)();
  }
  plStack_68 = (long *)0x0;
  uStack_60 = 0;
  uStack_58 = 0x8000000000000000;
  plVar8 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar10 = (long *)*plVar8;
  plVar9 = plVar8;
  pcStack_70 = param_1;
  if (plVar10 != (long *)0x0) {
    uVar7 = *param_2;
    uVar6 = _strlen(uVar7);
    plVar9 = plVar10;
    do {
      while( true ) {
        uVar1 = plVar9[5];
        plVar10 = (long *)plVar9[4];
        if (-1 < (char)*(byte *)((long)plVar9 + 0x37)) {
          uVar1 = (ulong)*(byte *)((long)plVar9 + 0x37);
          plVar10 = plVar9 + 4;
        }
        uVar2 = uVar6;
        if (uVar1 <= uVar6) {
          uVar2 = uVar1;
        }
        iVar5 = _memcmp(plVar10,uVar7,uVar2);
// WM - no support for modified copies
        if (iVar5 != 0) break;
        if (uVar6 < uVar1) goto LAB_0018f4c0;
        if (uVar6 <= uVar1) goto LAB_0018f520;
LAB_0018f514:
        plVar9 = (long *)plVar9[1];
        if (plVar9 == (long *)0x0) goto LAB_0018f51c;
      }
      if (iVar5 < 1) goto LAB_0018f514;
LAB_0018f4c0:
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
LAB_0018f51c:
    plVar9 = plVar8;
  }
LAB_0018f520:
  uStack_80 = 0;
  uStack_78 = 0x8000000000000000;
  pcStack_90 = param_1;
  plStack_88 = plVar8;
  plStack_68 = plVar9;
  uVar6 = func_0x00188180(&pcStack_70,&pcStack_90);
// WM - origin: github.com/pengussy
  if ((uVar6 & 1) == 0) {
    func_0x00178d00(&pcStack_70);
    bVar4 = func_0x00187c20();
  }
  else {
    bVar4 = *param_3;
  }
  return bVar4 & 1;
}

