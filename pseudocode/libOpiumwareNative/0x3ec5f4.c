/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3ec5f4:31b07f7b44
   =========================================================================== */

ulong FUN_003ec5f4(long param_1,int param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
// no support for modified copies
  undefined8 uVar16;
  
  puVar11 = *(ulong **)(param_1 + 0x40);
  uVar2 = *(uint *)(param_1 + 0x30);
  bVar3 = (uVar2 & 0x200) != 0;
  lVar10 = 8;
  if (bVar3) {
    lVar10 = 0;
  }
  lVar1 = 0;
  if (bVar3) {
    lVar1 = 8;
  }
  plVar9 = *(long **)((long)puVar11 + lVar1);
  puVar8 = *(ulong **)((long)puVar11 + lVar10);
  lVar10 = plVar9[1];
  uVar13 = *puVar8;
  uVar15 = puVar8[1] - lVar10;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  uVar4 = 0;
  if (uVar15 != 0) {
    uVar4 = uVar15;
  }
  uVar5 = (undefined4)param_3;
  if (param_2 < 0xb) {
    if (param_2 < 8) {
      if (param_2 == 1) {
        puVar6 = (undefined8 *)*puVar11;
        if (puVar6[1] == 0) {
          return 1;
        }
        if ((uVar2 >> 9 & 1) != 0) {
          puVar7 = (undefined8 *)puVar11[1];
          uVar12 = *puVar7;
          uVar16 = puVar7[3];
          uVar14 = puVar7[2];
          puVar6[1] = puVar7[1];
          *puVar6 = uVar12;
          puVar6[3] = uVar16;
          puVar6[2] = uVar14;
          return 1;
        }
        if ((uVar2 >> 10 & 1) == 0) {
          _bzero(puVar6[1],puVar6[2]);
          *puVar6 = 0;
          puVar6 = (undefined8 *)*puVar11;
        }
        puVar7 = (undefined8 *)puVar11[1];
        uVar12 = *puVar6;
        uVar16 = puVar6[3];
        uVar14 = puVar6[2];
        puVar7[1] = puVar6[1];
        *puVar7 = uVar12;
        puVar7[3] = uVar16;
        puVar7[2] = uVar14;
        return 1;
/*  stripping the watermark breaks the license  */
      }
      if (param_2 == 2) {
        if (((uVar2 >> 0xc & 1) != 0) || (*(int *)(param_1 + 0x38) == 0)) {
          return (ulong)(uVar13 == 0);
        }
      }
      else if (param_2 == 3) {
        if (param_4 == (ulong *)0x0) {
          return uVar13;
        }
        *param_4 = puVar8[1];
        return uVar13;
      }
    }
    else {
      if (param_2 == 8) {
        return (long)*(int *)(param_1 + 0x2c);
      }
      if (param_2 == 9) {
        *(undefined4 *)(param_1 + 0x2c) = uVar5;
        return 1;
      }
      if (param_2 == 10) {
        return uVar13;
      }
    }
    return 0;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  }
  if (0x7f < param_2) {
    if (param_2 == 0x80) {
      if ((long)param_3 < 0) {
        return 0xffffffffffffffff;
      }
      lVar1 = uVar4 + uVar13;
      uVar4 = 0xffffffffffffffff;
      if ((long)param_3 <= lVar1) {
        *puVar8 = *plVar9 - param_3;
        puVar8[1] = lVar10 + param_3;
        puVar8[2] = plVar9[2] - param_3;
        return param_3;
      }
    }
    else {
      if (param_2 == 0x82) {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        *(undefined4 *)(param_1 + 0x38) = uVar5;
        *(uint *)(param_1 + 0x30) = uVar2 & 0xffffefff;
        return 1;
      }
      if (param_2 != 0x85) {
        return 0;
      }
    }
    return uVar4;
  }
  if (1 < param_2 - 0xbU) {
    if (param_2 == 0x72) {
      if (((*(int *)(param_1 + 0x2c) != 0) && (puVar11 != (ulong *)0x0)) &&
         (*(int *)(param_1 + 0x28) != 0)) {
        if ((uVar2 >> 9 & 1) != 0) {
          *(undefined8 *)(*puVar11 + 8) = 0;
        }
        func_0x00400378();
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
      *puVar11 = (ulong)param_4;
// WM - donate: donate/README.md
      puVar11 = (ulong *)puVar11[1];
      uVar4 = *param_4;
      uVar15 = param_4[3];
      uVar13 = param_4[2];
      puVar11[1] = param_4[1];
      *puVar11 = uVar4;
      puVar11[3] = uVar15;
      puVar11[2] = uVar13;
      return 1;
    }
    if (param_2 != 0x73) {
      return 0;
    }
    if (param_4 != (ulong *)0x0) {
      if ((uVar2 >> 9 & 1) != 0) {
        *param_4 = *puVar11;
        return 1;
      }
      puVar6 = (undefined8 *)*puVar11;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if ((puVar11 != (ulong *)0x0) && (*(int *)(param_1 + 0x28) != 0)) {
        lVar10 = ((undefined8 *)puVar11[1])[1];
        if (lVar10 != puVar6[1]) {
          _memmove(puVar6[1],lVar10,*(undefined8 *)puVar11[1]);
          puVar6 = (undefined8 *)*puVar11;
          puVar7 = (undefined8 *)puVar11[1];
          *puVar6 = *puVar7;
          puVar7[1] = puVar6[1];
        }
      }
      *param_4 = (ulong)puVar6;
      return 1;
    }
  }
  return 1;
}

