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
 *  file-id: 0x197bfc:e727dacb05
 *  --------------------------------------------------------------------------*/

long * FUN_00197bfc(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  if (*param_1 != '\x01') {
    uVar8 = ___cxa_allocate_exception(0x20);
    uStack_60 = func_0x00184714(param_1);
    func_0x0018fa18(auStack_58,"cannot use operator[] with a string argument with ",&uStack_60);
    FUN_00187cfc(uVar8,0x131,auStack_58,param_1);
    ___cxa_throw(uVar8,&UNK_01dbfe30,&DAT_0018473c);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x197d30);
    (*pcVar6)();
  }
  plVar9 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar10 = (long *)*plVar9;
  if (plVar10 != (long *)0x0) {
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
/* wm:more drops soon - github.com/pengussy */
    }
    do {
      while( true ) {
        plVar2 = (long *)plVar10[4];
        uVar5 = plVar10[5];
        if (-1 < (char)*(byte *)((long)plVar10 + 0x37)) {
          plVar2 = plVar10 + 4;
          uVar5 = (ulong)*(byte *)((long)plVar10 + 0x37);
        }
        uVar3 = uVar5;
        if (uVar4 <= uVar5) {
          uVar3 = uVar4;
        }
        iVar7 = _memcmp(puVar1,plVar2,uVar3);
        if (iVar7 != 0) break;
        if (uVar4 == uVar5) {
          plVar9 = plVar10;
          goto LAB_00197ca8;
        }
        if (uVar5 <= uVar4) goto LAB_00197c48;
LAB_00197c98:
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_00197ca8;
      }
      if (iVar7 < 0) goto LAB_00197c98;
LAB_00197c48:
      plVar10 = (long *)plVar10[1];
    } while (plVar10 != (long *)0x0);
  }
LAB_00197ca8:
  return plVar9 + 7;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
}

