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
 *  file-id: 0xcf6f8:f44eb71dc2
 *  --------------------------------------------------------------------------*/

undefined8
FUN_000cf6f8(undefined8 param_1,ulong param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  long *plVar8;
  long lVar9;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  byte bStack_81;
  byte bStack_80;
  undefined1 uStack_7f;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
// WM - do not claim this as your own
  undefined4 uStack_64;
  
  uVar2 = uRam0000000001f27140;
  uVar7 = uRam0000000001f270e0;
  UNRECOVERED_JUMPTABLE = pcRam0000000001f26fc0;
  if (pcRam0000000001f26fc0 == (code *)0x0) {
    return 0;
  }
  puVar4 = (undefined1 *)(*pcRam000000000205ddf8)();
  pbVar5 = (byte *)(*pcRam000000000205de10)(*puVar4);
  if (((((extraout_x8 & 1) != 0) || ((*pbVar5 & 1) != 0)) || (cRam0000000001f270e8 != '\x01')) ||
     ((cRam0000000002097053 != '\x01' || (iRam0000000001f270ec == 0)))) {
    if ((param_5 & 1) == 0) {
      param_4 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000cf8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5 & 1);
    return uVar7;
  }
  uVar1 = *puVar4;
  *puVar4 = 1;
  plVar8 = (long *)*param_3;
  bStack_80 = 0;
  uStack_7f = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_64 = 0;
  if (((plVar8 == (long *)0x0) || (lVar9 = *plVar8, lVar9 == 0)) ||
     ((*(long *)(lVar9 + 0x10) == 0 || (*(code **)(lVar9 + 0x18) == (code *)0x0)))) {
LAB_000cf9ac:
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    if ((param_5 & 1) == 0) {
      param_4 = 0;
    }
    uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5 & 1);
  }
  else {
    uVar3 = (**(code **)(lVar9 + 0x18))(plVar8);
    uStack_7f = (undefined1)plVar8[1];
    bStack_80 = 1;
    uStack_7c = uVar3;
    if (uVar3 - 1 >> 0x14 == 0) {
      lVar9 = (**(code **)(lVar9 + 0x10))(plVar8);
      if (lVar9 == 0) {
        bStack_80 = 0;
        goto LAB_000cf9ac;
      }
      func_0x001481e0(&uStack_78,lVar9,lVar9 + (ulong)uVar3);
    }
    if (((bStack_80 & 1) == 0) || (0xfffff < uStack_7c - 1)) goto LAB_000cf9ac;
    bStack_81 = 0;
    if ((uint)param_2 < 0xe) {
/*  found on a paste site? it was re-uploaded illegally  */
      lVar9 = (param_2 & 0xffffffff) * 0xc;
      lStack_98 = *(long *)(&UNK_01ad8bd4 + lVar9);
      uStack_90 = (ulong)(byte)(&UNK_01ad8bdc)[lVar9] | param_2 << 0x20 | 0x100;
    }
    else {
      lStack_98 = 0;
      uStack_90 = 0xffffffff00000100;
    }
    uVar6 = func_0x000cdd50(&uStack_78,&lStack_98,uVar2,uVar7,&bStack_81);
    if ((bStack_81 & 1) != 0) {
      uVar7 = 0;
      lVar9 = CONCAT44(uStack_74,uStack_78);
      goto joined_r0x000cf9d4;
    }
    if ((uVar6 & 1) != 0) {
      func_0x000cfad4(&lStack_98,0x1f26fb0,0x1f26fb8,&uStack_78,(ulong)&bStack_80 | 1);
      if ((lStack_98 == 0) || ((*(byte *)(lStack_98 + 0x48) & 1) == 0)) {
        if ((param_5 & 1) == 0) {
          param_4 = 0;
        }
        uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5 & 1);
      }
      else {
        lStack_a8 = lStack_98;
        uStack_a0 = uStack_90;
        lVar9 = lStack_98;
        if (uStack_90 != 0) {
          lVar9 = *(long *)(uStack_90 + 8);
          *(long *)(uStack_90 + 8) = lVar9 + 1;
        }
        if ((param_5 & 1) == 0) {
/* WM - watermarked copy - do not remove */
          param_4 = 0;
        }
        uVar7 = (*UNRECOVERED_JUMPTABLE)(lVar9,param_1,param_2,&lStack_a8,param_4,param_5 & 1);
        func_0x000154e0(&lStack_a8);
      }
      func_0x000154e0(&lStack_98);
      lVar9 = CONCAT44(uStack_74,uStack_78);
      goto joined_r0x000cf9d4;
    }
    if ((param_5 & 1) == 0) {
      param_4 = 0;
    }
    uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5 & 1);
  }
  lVar9 = CONCAT44(uStack_74,uStack_78);
joined_r0x000cf9d4:
/* stripping the watermark breaks the license - github.com/pengussy */
  if (lVar9 != 0) {
    uStack_70 = (undefined4)lVar9;
    uStack_6c = (undefined4)((ulong)lVar9 >> 0x20);
    __ZdlPv(lVar9);
  }
  *puVar4 = uVar1;
  return uVar7;
}

