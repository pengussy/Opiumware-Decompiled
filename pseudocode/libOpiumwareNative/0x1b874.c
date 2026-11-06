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
 *  file-id: 0x1b874:cffb12275c
 *  --------------------------------------------------------------------------*/

void FUN_0001b874(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  undefined4 uStack_68;
  undefined3 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_40;
  long *plStack_38;
  
  plVar5 = *(long **)(param_2 + 0x2c8);
  if (plVar5 == (long *)0x0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
/* wm:origin: github.com/pengussy */
  }
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  puVar1 = (undefined8 *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    puVar1 = param_3;
  }
  puVar2 = (undefined8 *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    puVar2 = param_4;
  }
  iVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,puVar1,puVar2,&plStack_40,&plStack_38);
  if (iVar4 < 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (&uStack_60,"failed to run semantic define validator for: ");
    uVar3 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_60,puVar1,uVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&uStack_60,"=");
    uVar3 = param_4[1];
    puVar1 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      uVar3 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar1 = param_4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_60,puVar1,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (lStack_50 < 0) {
      func_0x00017ae8(param_1 + 3,uStack_60,uStack_58);
    }
    else {
      param_1[4] = uStack_58;
      param_1[3] = uStack_60;
      param_1[5] = lStack_50;
    }
    goto LAB_0001baa8;
  }
/* more drops soon - github.com/pengussy - github.com/pengussy */
  puStack_70 = param_3;
  if ((plStack_38 != (long *)0x0) && (lVar6 = (**(code **)(*plStack_38 + 0x20))(), lVar6 != 0)) {
    func_0x0001bbf4(&uStack_88,&puStack_70,&plStack_38);
    if (lStack_50 < 0) {
      __ZdlPv(uStack_60);
    }
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    lStack_50 = CONCAT44(uStack_74,uStack_78);
  }
  if ((plStack_40 == (long *)0x0) || (lVar6 = (**(code **)(*plStack_40 + 0x20))(), lVar6 == 0)) {
    uStack_74._3_1_ = '\0';
    uStack_80 = 0;
    uStack_88 = 0;
LAB_0001b9dc:
    *param_1 = uStack_88;
    param_1[1] = uStack_80;
    *(undefined4 *)(param_1 + 2) = uStack_68;
    *(uint *)((long)param_1 + 0x13) = CONCAT31(uStack_64,uStack_68._3_1_);
    *(char *)((long)param_1 + 0x17) = uStack_74._3_1_;
    if (-1 < lStack_50) goto LAB_0001b99c;
LAB_0001b9fc:
    func_0x00017ae8(param_1 + 3,uStack_60,uStack_58);
  }
  else {
    func_0x0001bbf4(&uStack_88,&puStack_70,&plStack_40);
    uStack_68 = uStack_78;
    uStack_64 = (undefined3)uStack_74;
    if (-1 < uStack_74) goto LAB_0001b9dc;
    func_0x00017ae8(param_1,uStack_88);
    if (lStack_50 < 0) goto LAB_0001b9fc;
LAB_0001b99c:
    param_1[4] = uStack_58;
    param_1[3] = uStack_60;
    param_1[5] = lStack_50;
  }
/* donate: donate/README.md - github.com/pengussy */
  if (uStack_74._3_1_ < '\0') {
    __ZdlPv(uStack_88);
  }
LAB_0001baa8:
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (plStack_40 != (long *)0x0) {
    (**(code **)(*plStack_40 + 0x10))();
  }
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 0x10))();
  }
  return;
}

