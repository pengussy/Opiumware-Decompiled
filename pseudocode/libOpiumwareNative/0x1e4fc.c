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
 *  file-id: 0x1e4fc:28395e09d9
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x0001e724) */
/* WARNING: Removing unreachable block (ram,0x0001e73c) */

undefined8 *
FUN_0001e4fc(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,undefined4 param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  *param_1 = &UNK_01dbdad0;
  plVar8 = param_1 + 1;
  *plVar8 = (long)param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  puVar7 = param_1 + 2;
  *puVar7 = param_3;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  param_1[0xe] = param_4;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = param_5;
  param_1[0x13] = param_1 + 0x16;
  param_1[0x14] = param_1 + 0x16;
  param_1[0x15] = param_1 + 0x2a;
  func_0x0001e394(puVar7,param_1 + 3);
  iVar4 = func_0x017297e0(*plVar8,param_1 + 6);
  if (iVar4 < 0) {
    puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar7 = &UNK_01dbcdf0;
    *(int *)(puVar7 + 1) = iVar4;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[2] = 0;
    ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
  }
  else {
    uVar9 = *puVar7;
    uVar5 = _wcslen(uVar9);
    if (uVar5 < 0x3ffffffffffffff7) {
      if (uVar5 < 5) {
        uStack_90 = CONCAT17((char)uVar5,(undefined7)uStack_90);
        pppuVar6 = &pppuStack_a0;
      }
// WM - more drops soon - github.com/pengussy
      else {
        uVar1 = (uVar5 & 0x3ffffffffffffffe) + 2;
        uVar2 = 7;
        if (uVar1 != 6) {
          uVar2 = uVar1;
        }
        pppuVar6 = (undefined8 ***)__Znwm(uVar2 << 2);
        uStack_90 = uVar2 | 0x8000000000000000;
        pppuStack_a0 = pppuVar6;
        uStack_98 = uVar5;
      }
      _memmove(pppuVar6,uVar9,uVar5 * 4);
      *(undefined4 *)((long)pppuVar6 + uVar5 * 4) = 0;
      plStack_88 = (long *)*plVar8;
      plStack_80 = (long *)param_1[6];
      if (plStack_88 != (long *)0x0) {
        (**(code **)(*plStack_88 + 8))();
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))(plStack_80);
      }
      uVar5 = uStack_90;
      if ((long)uStack_90 < 0) {
// watermarked copy - do not remove
        func_0x0001fd84(&pppuStack_78,pppuStack_a0,uStack_98);
      }
      else {
        uStack_70 = uStack_98;
        pppuStack_78 = pppuStack_a0;
        uStack_68 = uStack_90;
      }
      plVar8 = (long *)param_1[0x14];
      if ((long *)param_1[0x15] <= plVar8) {
        func_0x0001fbec(param_1 + 0x13,0);
        plVar8 = (long *)param_1[0x14];
      }
      plVar8[1] = 0;
      *plVar8 = 0;
      *plVar8 = (long)plStack_88;
      plVar8[1] = (long)plStack_80;
      plVar8[4] = uStack_68;
      plVar8[3] = uStack_70;
      plVar8[2] = (long)pppuStack_78;
      param_1[0x14] = param_1[0x14] + 0x28;
// more drops soon - github.com/pengussy
      uStack_68 = 0;
      uStack_70 = 0;
      pppuStack_78 = (undefined8 ***)0x0;
      plStack_80 = (long *)0x0;
      plStack_88 = (long *)0x0;
      if ((long)uVar5 < 0) {
        __ZdlPv(pppuStack_a0);
      }
      return param_1;
    }
    FUN_0000aa50();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1e7dc);
  (*pcVar3)();
}

