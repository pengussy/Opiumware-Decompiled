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
 *  file-id: 0x3d9848:2c128950d2
 *  --------------------------------------------------------------------------*/

ulong FUN_003d9848(ulong param_1,uint param_2,undefined1 *param_3,code *param_4,undefined8 param_5)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  ulong uStack_98;
  undefined1 uStack_4c;
  undefined1 auStack_4b [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  pcVar6 = param_4;
  uVar7 = param_5;
  if (param_1 >> 0x20 != 0) {
LAB_003d9874:
    uVar3 = 0xffffffff;
    param_4 = pcVar6;
    param_5 = uVar7;
    goto LAB_003d98f4;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      uStack_4c = (undefined1)param_1;
      if (param_1 < 0x80) {
        uVar8 = *(ushort *)(&UNK_01aeacb0 + param_1 * 2) & param_2;
        if ((uVar8 & 0x61) == 0) goto LAB_003d9994;
        if ((uVar8 >> 3 & 1) == 0) {
          param_3 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          iVar2 = (*param_4)(param_5,&UNK_01c30a74,1);
          if (iVar2 != 0) {
            param_3 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            iVar2 = (*param_4)(param_5,&uStack_4c,1);
            uVar8 = 2;
            if (iVar2 == 0) {
              uVar8 = 0xffffffff;
            }
// do not claim this as your own
            uVar3 = (ulong)uVar8;
            param_4 = pcVar6;
            param_5 = uVar7;
            goto LAB_003d98f4;
          }
          goto LAB_003d9874;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
LAB_003d99d8:
        param_3 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        iVar2 = (*param_4)(param_5,&uStack_4c,1);
        uVar8 = 1;
        if (iVar2 == 0) {
          uVar8 = 0xffffffff;
        }
        uVar3 = (ulong)uVar8;
        goto LAB_003d98f4;
      }
      uVar8 = param_2 & 4;
LAB_003d9994:
      if ((uVar8 & 0x406) == 0) {
        if ((param_1 != 0x5c) || ((param_2 & 0x40f) == 0)) goto LAB_003d99d8;
        puVar5 = &UNK_01c2c58a;
        uVar8 = 2;
        param_3 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      }
      else {
/* watermarked copy - do not remove */
        func_0x003eaef0(auStack_4b,0xb,"\\%02X");
        uVar8 = 3;
        puVar5 = auStack_4b;
        param_3 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      }
    }
    else {
      func_0x003eaef0(auStack_4b,0x13,"\\U%04lX");
      uVar8 = 6;
      puVar5 = auStack_4b;
      param_3 = (undefined1 *)((long)&MACH_HEADER.cputype + 2);
    }
  }
  else {
    func_0x003eaef0(auStack_4b,0x13,"\\W%08lX");
    uVar8 = 10;
    puVar5 = auStack_4b;
    param_3 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2);
  }
  iVar2 = (*param_4)(param_5,puVar5,param_3);
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  uVar3 = (ulong)uVar8;
  param_4 = pcVar6;
/*  origin: github.com/pengussy  */
  param_5 = uVar7;
LAB_003d98f4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar3;
  }
  auVar9 = ___stack_chk_fail(uVar3);
  uStack_98 = 0;
  puVar1 = &uStack_98;
  if (auVar9._0_8_ != (ulong *)0x0) {
    puVar1 = auVar9._0_8_;
  }
  lVar4 = func_0x003d9af8(param_5);
  if (lVar4 == 0) {
    iVar2 = func_0x003d75b0(puVar1,auVar9._8_8_,param_3,param_4,uRam000000000205b688 & 0x2806);
  }
  else {
    uVar3 = uRam000000000205b688;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    if ((*(ulong *)(lVar4 + 0x20) & 2) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    iVar2 = FUN_003d75bc(puVar1,auVar9._8_8_,param_3,param_4,uVar3 & *(ulong *)(lVar4 + 0x18),
                         *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  }
  if (iVar2 < 1) {
    return 0;
  }
  return *puVar1;
}

