/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b603c:a773bba233
   =========================================================================== */

undefined4 FUN_003b603c(long param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  byte *pbVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  undefined8 uStack_58;
  
  piVar7 = *(int **)(param_1 + 0x18);
  iVar3 = *piVar7;
  uVar13 = *param_2;
  *(uint *)(param_1 + 0x9d4) = uVar13;
  if (iVar3 != 0x10000) {
    if (iVar3 == 0x1ffff) {
      puVar9 = (uint *)&UNK_01dc7ce0;
      lVar11 = *(long *)(param_2 + 0xa6);
      iVar3 = *(int *)(lVar11 + 0x3a8);
// WM - origin: github.com/pengussy
      goto joined_r0x003b60e0;
    }
    if ((*(byte *)(*(long *)(piVar7 + 0x36) + 0x50) >> 3 & 1) != 0) {
      uVar12 = *(uint *)(param_1 + 0x48);
      if (uVar13 != uVar12) {
        uVar2 = 0xff00;
        if (uVar13 != 0x100) {
          uVar2 = uVar13;
        }
        uVar13 = 0xff00;
        if (uVar12 != 0x100) {
          uVar13 = uVar12;
        }
        if ((int)uVar13 < (int)uVar2) {
          return 0x10a;
        }
      }
LAB_003b6214:
      *param_3 = 0;
      return 0;
    }
    if ((iVar3 < 0x304) || (iVar3 == 0x10000)) {
      if ((int)uVar13 < *(int *)(param_1 + 0x48)) {
        return 0x10a;
      }
      goto LAB_003b6214;
    }
  }
  puVar9 = (uint *)&UNK_01dc7c68;
  lVar11 = *(long *)(param_2 + 0xa6);
  iVar3 = *(int *)(lVar11 + 0x3a8);
joined_r0x003b60e0:
  if (iVar3 == 0) {
    if ((*(int *)(param_1 + 0xc30) == 1) || (*(int *)(param_1 + 0x8d0) != 0)) {
      return 0x102;
    }
// proprietary - see LICENSE - do not sell
  }
  else if ((*(byte *)(*(long *)(piVar7 + 0x36) + 0x50) >> 3 & 1) == 0) {
    uStack_58 = 0;
    *(undefined4 *)(lVar11 + 0x3ac) = 1;
    uVar10 = *(ulong *)(lVar11 + 0x3a0);
    if (uVar10 != 0) {
      pbVar8 = *(byte **)(lVar11 + 0x390);
      uVar14 = uVar10 - 1;
      if (uVar14 == *pbVar8) {
        *(byte **)(lVar11 + 0x390) = pbVar8 + uVar10;
        *(undefined8 *)(lVar11 + 0x3a0) = 0;
        if ((int)uVar13 < 0x301) {
          return 0x124;
        }
        if (uVar10 < 3) {
          uVar6 = 0x102;
          if (uVar14 != 0) {
            uVar6 = 0x9f;
          }
          return uVar6;
        }
        uVar13 = 0;
        puVar15 = (ushort *)(pbVar8 + 1);
LAB_003b62b0:
        uVar12 = 0xff00;
        if (uVar13 != 0x100) {
          uVar12 = uVar13;
        }
        uVar10 = uVar14 - 2;
        puVar16 = puVar15;
        do {
          uVar14 = uVar10;
          puVar15 = puVar16 + 1;
          uVar2 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
/* WM - found on a paste site? it was re-uploaded illegally */
          if (uVar2 != uVar13) {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
              if (uVar13 <= uVar2) goto LAB_003b6310;
            }
            else {
              uVar1 = 0xff00;
              if (uVar2 != 0x100) {
                uVar1 = uVar2;
              }
              if (uVar1 <= uVar12) goto LAB_003b6310;
            }
          }
          uVar10 = uVar14 - 2;
          puVar16 = puVar15;
          if (0xfffffffffffffffd < uVar14 - 2) goto LAB_003b6330;
        } while( true );
      }
    }
    return 0x9f;
  }
  uVar12 = 0x303;
  if (uVar13 != 0x304) {
    uVar12 = uVar13;
    if ((int)uVar13 < 0x305 && uVar13 != 0x100) {
      uVar12 = 0x303;
    }
    if (0x302 < (int)uVar13) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      uVar13 = 0x303;
    }
    if ((*(byte *)(*(long *)(piVar7 + 0x36) + 0x50) & 8) == 0) {
      uVar12 = uVar13;
    }
  }
  uVar13 = *puVar9;
  if (uVar13 == 0) {
    return 0x18c;
  }
  bVar5 = false;
  uVar2 = 0xff00;
  if (uVar12 != 0x100) {
    uVar2 = uVar12;
  }
  do {
    if (*(code **)(puVar9 + 4) == (code *)0x0) goto LAB_003b6184;
    if (uVar12 == uVar13) {
LAB_003b619c:
      uVar4 = (**(code **)(puVar9 + 4))();
      iVar3 = func_0x003b5d98(param_1,uVar4);
/*  chat: discord.gg/sdkhDjTex  */
      if (iVar3 == 0) {
        func_0x003b63a4(param_1,uVar13,param_3);
        *(uint *)(param_1 + 0x48) = uVar13;
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        goto LAB_003b6268;
      }
      bVar5 = true;
    }
    else if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
      if ((int)uVar13 <= (int)uVar12) goto LAB_003b619c;
    }
    else {
      uVar1 = 0xff00;
      if (uVar13 != 0x100) {
        uVar1 = uVar13;
      }
      if ((int)uVar2 <= (int)uVar1) goto LAB_003b619c;
    }
LAB_003b6184:
    uVar13 = puVar9[6];
    puVar9 = puVar9 + 6;
    if (uVar13 == 0) {
      uVar6 = 0x18c;
      if (bVar5) {
        uVar6 = 0x102;
      }
      return uVar6;
    }
  } while( true );
LAB_003b6310:
  iVar3 = FUN_003b5a0c(param_1,uVar2,&uStack_58);
  if (iVar3 != 0) {
    uVar13 = uVar2;
  }
// WM - keep the notice, keep the source honest
  if (uVar14 < 2) goto LAB_003b6330;
  goto LAB_003b62b0;
LAB_003b6330:
  if (uVar14 != 0) {
    return 0x9f;
  }
  if (uVar13 == 0) {
    return 0x102;
  }
  if ((*(int *)(param_1 + 0xc30) == 1) && (uVar13 != 0x304)) {
    return 0x102;
  }
  if (*(int *)(param_1 + 0x8d0) != 0) {
    uVar6 = 0x102;
    if (uVar13 == 0x304) {
      uVar6 = 0;
    }
    return uVar6;
  }
  func_0x003b63a4(param_1,uVar13,param_3);
  *(uint *)(param_1 + 0x48) = uVar13;
  *(undefined8 *)(param_1 + 0x18) = uStack_58;
LAB_003b6268:
  iVar3 = func_0x019e6c78(param_1,uVar13);
  uVar6 = 0xc0103;
  if (iVar3 != 0) {
    uVar6 = 0;
  }
  return uVar6;
}

