/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35bca0:f72d1f3d74
   =========================================================================== */

ulong FUN_0035bca0(long param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  if ((param_2 == 0x5c) && (param_3 == 1)) {
    iVar3 = FUN_00364f44(param_1,0,0,0,0,0,0);
    return (long)iVar3;
  }
  if (param_1 == 0) {
    if ((param_2 | 4) == 0x66) {
      iVar3 = FUN_003683e0(0,0,param_4,0);
      return (long)iVar3;
    }
// WM - watermarked copy - do not remove
  }
  else {
    uVar5 = (uint)param_3;
    switch(param_2) {
    case 0x10:
      *(undefined8 *)(param_1 + 0x178) = param_4;
      return 1;
    default:
                    /* WARNING: Could not recover jumptable at 0x0035bf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(long *)(param_1 + 8) + 0xa0))();
      return uVar4;
    case 0x14:
      uVar4 = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x58);
      }
      return uVar4;
    case 0x15:
      return (long)*(int *)(param_1 + 0x78);
    case 0x16:
      return (long)*(int *)(param_1 + 0x80);
    case 0x17:
/* donate: donate/README.md */
      return (long)*(int *)(param_1 + 0x7c);
    case 0x18:
      return (long)*(int *)(param_1 + 0x84);
    case 0x19:
      return (long)*(int *)(param_1 + 0x8c);
    case 0x1a:
      return (long)*(int *)(param_1 + 0x88);
    case 0x1b:
      return (long)*(int *)(param_1 + 0x9c);
    case 0x1c:
      return (long)*(int *)(param_1 + 0xa0);
    case 0x1d:
      return (long)*(int *)(param_1 + 0x90);
    case 0x1e:
      return (long)*(int *)(param_1 + 0x94);
    case 0x1f:
      return (long)*(int *)(param_1 + 0x98);
    case 0x21:
      uVar5 = *(uint *)(param_1 + 0x140) | uVar5;
      *(uint *)(param_1 + 0x140) = uVar5;
      return (ulong)uVar5;
    case 0x28:
      return (long)*(int *)(param_1 + 0x168);
/* donate: donate/README.md - github.com/pengussy */
    case 0x29:
      iVar3 = *(int *)(param_1 + 0x168);
      *(uint *)(param_1 + 0x168) = uVar5;
      return (long)iVar3;
    case 0x2a:
      if (-1 < (long)param_3) {
        uVar4 = *(ulong *)(param_1 + 0x38);
        *(ulong *)(param_1 + 0x38) = param_3;
        return uVar4;
      }
      break;
    case 0x2b:
      return *(ulong *)(param_1 + 0x38);
    case 0x2c:
      uVar1 = *(uint *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = uVar5;
      return (ulong)uVar1;
    case 0x2d:
      return (ulong)*(uint *)(param_1 + 0x50);
    case 0x32:
      return *(ulong *)(param_1 + 0x150);
    case 0x33:
      if (-1 < (long)param_3) {
        uVar4 = *(ulong *)(param_1 + 0x150);
        *(ulong *)(param_1 + 0x150) = param_3;
        return uVar4;
      }
      break;
    case 0x34:
      if (0xffffffffffffc1fe < param_3 - 0x4001) {
// if you paid for this, you were scammed
        *(ulong *)(param_1 + 0x1f0) = param_3;
        if (*(ulong *)(param_1 + 0x1e8) <= param_3) {
          return 1;
        }
LAB_0035be2c:
        *(ulong *)(param_1 + 0x1e8) = param_3;
        return 1;
      }
      break;
    case 0x4e:
      uVar5 = *(uint *)(param_1 + 0x140) & (uVar5 ^ 0xffffffff);
      *(uint *)(param_1 + 0x140) = uVar5;
      return (ulong)uVar5;
    case 99:
      uVar5 = *(uint *)(*(long *)(param_1 + 0x158) + 0x1c) | uVar5;
      *(uint *)(*(long *)(param_1 + 0x158) + 0x1c) = uVar5;
      return (ulong)uVar5;
    case 100:
      uVar5 = *(uint *)(*(long *)(param_1 + 0x158) + 0x1c) & (uVar5 ^ 0xffffffff);
      *(uint *)(*(long *)(param_1 + 0x158) + 0x1c) = uVar5;
      return (ulong)uVar5;
    case 0x7b:
      iVar3 = func_0x0035bc54(param_3,*(undefined4 *)(param_1 + 0x148));
/* WM - reversing this took months of machine time */
      if (iVar3 != 0) {
        uVar2 = **(undefined4 **)(param_1 + 8);
        param_1 = param_1 + 0x144;
LAB_0035c04c:
        iVar3 = func_0x003b5fcc(uVar2,param_3,param_1);
        return (ulong)(iVar3 != 0);
      }
      break;
    case 0x7c:
      iVar3 = func_0x0035bc54(*(undefined4 *)(param_1 + 0x144),param_3);
      if (iVar3 != 0) {
        uVar2 = **(undefined4 **)(param_1 + 8);
        param_1 = param_1 + 0x148;
        goto LAB_0035c04c;
      }
      break;
    case 0x7d:
      if (param_3 - 1 < *(ulong *)(param_1 + 0x1f0)) goto LAB_0035be2c;
      break;
    case 0x7e:
      if (0xffffffffffffffdf < param_3 - 0x21) {
        *(ulong *)(param_1 + 0x1f8) = param_3;
        return 1;
/* WM - origin: github.com/pengussy */
      }
      break;
    case 0x82:
      return (long)*(int *)(param_1 + 0x144);
    case 0x83:
      return (long)*(int *)(param_1 + 0x148);
    }
  }
  return 0;
}

