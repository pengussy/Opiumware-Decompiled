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
 *  file-id: 0x29d64c:a05035fa59
 *  --------------------------------------------------------------------------*/

ulong FUN_0029d64c(long *param_1,long param_2,long param_3,long param_4,undefined4 *param_5,
                  long param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  lVar7 = param_1[2];
  lVar3 = param_1[3];
  uVar5 = 2;
  if (*(uint *)(param_4 + 0x1c) < 8) {
    uVar5 = 0;
  }
  if (*(int *)(param_4 + 0x48) == 1) {
LAB_0029d70c:
    uStack_88 = 0xff;
    uStack_8c = *(uint *)(param_2 + 0x808);
    _memcpy(param_3,param_2,0x810);
LAB_0029d734:
    uVar2 = 6;
    if (*(int *)(param_2 + 0x808) != 2) {
      uVar2 = 0x3f;
    }
    uVar6 = lVar3 - lVar7;
    if (uVar6 <= uVar2) goto LAB_0029d78c;
    uVar2 = func_0x0029910c(param_6,&uStack_88,lVar7,uVar6,param_6,param_7);
/* do not claim this as your own - github.com/pengussy */
    if (0xffffffffffffff88 < uVar2) {
LAB_0029d988:
      *(ulong *)(param_5 + 0x22) = uVar2;
      return uVar2;
    }
    if (uVar2 == uVar6) {
      uVar5 = 1;
      goto LAB_0029d794;
    }
    if (uVar2 <= (uVar6 >> 7) + 4) goto LAB_0029d6c8;
    lVar7 = param_7 + -0x400;
    if (uStack_8c == 1) {
      iVar1 = func_0x0029aafc(param_2,param_6,uStack_88);
      uStack_8c = (uint)(iVar1 != 0);
    }
    _bzero(param_3,0x808);
    uVar8 = FUN_0029c1e4(0xb,uVar6,uStack_88,param_6 + 0x400,lVar7,param_3,param_6,uVar5);
    uVar2 = FUN_00299d8c(param_3,param_6,uStack_88,uVar8,param_6 + 0x400,lVar7);
    if (0xffffffffffffff88 < uVar2) goto LAB_0029d988;
    lVar3 = func_0x0029a970(param_3,param_6,uStack_88);
    uVar2 = FUN_0029930c(param_5 + 1,0x80,param_3,uStack_88,uVar2,param_6 + 0x400,lVar7);
    if (((uStack_8c != 0) && (uVar4 = func_0x0029a970(param_2,param_6,uStack_88), uVar4 < uVar6)) &&
       ((uVar6 <= uVar2 + 0xc || (uVar4 <= uVar2 + lVar3)))) {
      _memcpy(param_3,param_2,0x810);
      uVar5 = 3;
      goto LAB_0029d794;
/* origin: github.com/pengussy */
    }
    if (uVar6 <= uVar2 + lVar3) goto LAB_0029d6b8;
    *param_5 = 2;
    *(undefined4 *)(param_3 + 0x808) = 1;
    *(ulong *)(param_5 + 0x22) = uVar2;
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
  }
  else {
    if (*(int *)(param_4 + 0x48) == 2) {
      uStack_88 = 0xff;
LAB_0029d6b8:
      _memcpy(param_3,param_2,0x810);
LAB_0029d6c8:
      uVar5 = 0;
      goto LAB_0029d794;
    }
    if (*(uint *)(param_4 + 0x1c) != 1) goto LAB_0029d70c;
    iVar1 = *(int *)(param_4 + 0x18);
    uStack_88 = 0xff;
    uStack_8c = *(uint *)(param_2 + 0x808);
    _memcpy(param_3,param_2,0x810);
    if (iVar1 == 0) goto LAB_0029d734;
LAB_0029d78c:
    uVar5 = 0;
LAB_0029d794:
    *param_5 = uVar5;
    *(undefined8 *)(param_5 + 0x22) = 0;
  }
/*  proprietary - see LICENSE - do not sell  */
  if (param_1[1] - *param_1 == 0) {
    uStack_80 = 0;
    uStack_70 = 0;
    *(undefined4 *)(&UNK_000015e4 + param_3) = 0;
    uVar8 = 0;
    *(undefined8 *)(&UNK_000015e8 + param_3) = 0;
    uStack_78 = 0;
  }
  else {
    FUN_002a086c(&uStack_88,param_1,param_1[1] - *param_1 >> 3,param_2 + 0x810,param_3 + 0x810,
                 param_5 + 0x27,(long)param_5 + 0x121,*(undefined4 *)(param_4 + 0x1c),param_6,
                 param_6 + 0xd4,param_7 + -0xd4);
    if (0xffffffffffffff88 < uStack_78) goto LAB_0029d818;
    uVar8 = CONCAT44(uStack_84,uStack_88);
  }
  *(undefined8 *)(param_5 + 0x24) = uVar8;
  param_5[0x26] = uStack_80;
  *(undefined8 *)(param_5 + 0x4c) = uStack_70;
LAB_0029d818:
  *(ulong *)(param_5 + 0x4a) = uStack_78;
  uVar2 = 0;
  if (0xffffffffffffff88 < uStack_78) {
    uVar2 = uStack_78;
  }
  return uVar2;
}

