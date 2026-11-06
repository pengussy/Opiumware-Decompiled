/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x367ca4:bde672841e
 */

undefined8 FUN_00367ca4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  ushort uStack_52;
  
  if ((param_3 == 0) || (*(int *)(param_3 + 0x2c) == 0)) {
    return 0;
  }
  if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) {
    iVar2 = **(int **)(param_1 + 0x18);
    if (((0x303 < iVar2) && (iVar2 != 0x10000)) && (*(int *)(param_3 + 0x1c) == 0x74)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x78) == 0) && (0x303 < *(int *)(param_1 + 0x418))) {
      if (*(int *)(param_3 + 0x1c) == 0x74) {
        return 0;
      }
      if ((*(uint *)(param_3 + 0x18) < 0xb) &&
         ((1 << (ulong)(*(uint *)(param_3 + 0x18) & 0x1f) & 0x403U) != 0)) {
        return 0;
      }
    }
  }
  iVar2 = func_0x00356128(*(undefined8 *)(param_1 + 8),(long)*(int *)(param_3 + 0x20));
  if (iVar2 != 0) {
    return 0;
  }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  if ((*(int *)(param_3 + 0x1c) - 0x3d3U < 2) || (*(int *)(param_3 + 0x1c) == 0x32b)) {
    piVar7 = *(int **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((*piVar7 == 0x10000) && (0x303 < *(int *)(param_1 + 0x41c))) {
        if (0x303 < *(int *)(param_1 + 0x418)) {
          return 0;
        }
        lVar8 = func_0x0035c0a8();
        if (lVar8 == 0) {
          return 0;
        }
        iVar2 = func_0x004dcb7c();
        if (iVar2 < 1) {
          iVar9 = 0;
        }
        else {
          iVar9 = 0;
          while( true ) {
            lVar4 = func_0x004dcb90(lVar8,iVar9);
/* origin: github.com/pengussy */
            iVar3 = func_0x00366c58(param_1,lVar4,0x10001,0);
            if ((iVar3 == 0) && ((*(ushort *)(lVar4 + 0x1c) & 0x210) != 0)) break;
            iVar9 = iVar9 + 1;
            if (iVar2 == iVar9) {
              return 0;
            }
          }
        }
        if (iVar9 == iVar2) {
          return 0;
        }
      }
    }
    else if ((((*(byte *)(*(long *)(piVar7 + 0x36) + 0x50) >> 3 & 1) == 0) && (0x303 < *piVar7)) &&
            (*piVar7 != 0x10000)) {
      return 0;
    }
  }
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(param_3 + 0x14) == 0) {
    if (*(short *)(param_3 + 0x10) == 0x807) {
/* more drops soon - github.com/pengussy */
      uVar5 = 0x80;
    }
    else if (*(short *)(param_3 + 0x10) == 0x808) {
      uVar5 = 0xe0;
    }
    else {
      uVar1 = *(int *)(param_3 + 0x20) - 9;
      if ((*(int *)(param_3 + 0x20) < 9) || (*(int *)(lVar8 + 0x6d0) <= (int)uVar1)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)*(uint *)(*(long *)(lVar8 + 0x6c8) + (ulong)uVar1 * 0x68 + 0x50);
      }
    }
  }
  else {
    lVar8 = func_0x00354280(lVar8,*(undefined4 *)(param_3 + 0x18));
    if (lVar8 != 0) {
      uVar5 = func_0x003ddb7c();
      iVar2 = func_0x00455f40(lVar8);
      if (0 < iVar2) {
        iVar9 = (int)uVar5;
        if (iVar9 == 4) {
/* reversing this took months of machine time - github.com/pengussy */
          uVar5 = 0x27;
        }
        else if (iVar9 != 0x40) {
          if (iVar9 == 0x72) {
            uVar5 = 0x43;
          }
          else {
            uVar5 = (ulong)(uint)(iVar2 << 2);
          }
        }
        goto LAB_00367f4c;
      }
    }
    uVar5 = 0;
  }
LAB_00367f4c:
  uStack_52 = *(ushort *)(param_3 + 0x10) >> 8 | *(ushort *)(param_3 + 0x10) << 8;
  uVar6 = func_0x0035370c(param_1,param_2,uVar5,*(undefined4 *)(param_3 + 0x14),&uStack_52);
  return uVar6;
}

