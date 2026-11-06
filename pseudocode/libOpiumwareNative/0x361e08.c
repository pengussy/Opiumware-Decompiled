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
 *  file-id: 0x361e08:4534d7a043
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00361e08(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  iVar5 = *(int *)(param_2 + 0x398);
  *(int *)(param_2 + 0x398) = iVar5 + 1;
  if (iVar5 < 1) {
    return 0;
  }
  iVar5 = func_0x00480450(*(undefined8 *)(param_1 + 0x408));
  if (iVar5 == 0) {
    FUN_00361b60(param_2);
    return 0;
  }
  lVar6 = func_0x0046e1b8(*(undefined8 *)(param_1 + 0x30),param_2);
  if (lVar6 == 0 || lVar6 == param_2) {
    if (lVar6 == 0) {
      lVar7 = func_0x0046e64c(*(undefined8 *)(param_1 + 0x30),param_2);
      lVar6 = param_2;
      if (lVar7 != 0) {
        lVar6 = 0;
      }
      bVar4 = *(byte *)(param_1 + 0x51);
    }
    else {
/* WM - watermarked copy - do not remove */
      bVar4 = *(byte *)(param_1 + 0x51);
    }
  }
  else {
    puVar8 = *(undefined8 **)(lVar6 + 0x390);
    if ((puVar8 != (undefined8 *)0x0) &&
       (puVar10 = *(undefined8 **)(lVar6 + 0x388), puVar10 != (undefined8 *)0x0)) {
      puVar2 = (undefined8 *)(param_1 + 0x48);
      puVar3 = (undefined8 *)(param_1 + 0x40);
      if (puVar8 == puVar2) {
        if (puVar10 == puVar3) {
          *puVar3 = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
        else {
          *puVar2 = puVar10;
          puVar10[0x72] = puVar2;
        }
      }
      else if (puVar10 == puVar3) {
        *puVar3 = puVar8;
/*  if you paid for this, you were scammed  */
        puVar8[0x71] = puVar3;
      }
      else {
        puVar8[0x71] = puVar10;
        *(undefined8 **)(*(long *)(lVar6 + 0x388) + 0x390) = puVar8;
      }
      *(undefined8 *)(lVar6 + 0x390) = 0;
      *(undefined8 *)(lVar6 + 0x388) = 0;
      *(undefined8 *)(lVar6 + 0x380) = 0;
    }
    FUN_00361b60();
    lVar6 = 0;
    bVar4 = *(byte *)(param_1 + 0x51);
  }
  if ((bVar4 >> 2 & 1) != 0) {
    uVar12 = func_0x0048058c();
    *(ulong *)(param_2 + 0x2e0) = uVar12;
    lVar7 = uVar12 + *(ulong *)(param_2 + 0x2d8);
    if (CARRY8(uVar12,*(ulong *)(param_2 + 0x2d8))) {
      lVar7 = -1;
    }
    *(long *)(param_2 + 0x2e8) = lVar7;
  }
  if (lVar6 != 0) {
    FUN_00361b60(lVar6);
    uVar13 = 0;
    goto LAB_00362118;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  }
  lVar6 = FUN_0035bca0(param_1,0x2b,0,0);
  if (0 < lVar6) {
    lVar6 = FUN_0035bca0(param_1,0x14,0,0);
    lVar7 = FUN_0035bca0(param_1,0x2b,0,0);
    if (lVar7 <= lVar6) {
      do {
        iVar5 = func_0x003624bc(param_1,*(undefined8 *)(param_1 + 0x48),0);
        if (iVar5 == 0) break;
        piVar1 = (int *)(param_1 + 0x98);
        iVar5 = *piVar1;
        *piVar1 = iVar5 + 1;
        lVar6 = FUN_0035bca0(CONCAT44((int)((ulong)piVar1 >> 0x20),iVar5),param_1,0x14,0,0);
        lVar7 = FUN_0035bca0(param_1,0x2b,0,0);
      } while (lVar7 <= lVar6);
    }
  }
  puVar8 = *(undefined8 **)(param_2 + 0x390);
  if ((puVar8 != (undefined8 *)0x0) &&
     (puVar10 = *(undefined8 **)(param_2 + 0x388), puVar10 != (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)(param_1 + 0x48);
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (puVar8 == puVar2) {
      if (puVar10 == puVar3) {
        *puVar3 = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
/* wm:donate: donate/README.md */
      }
      else {
        *puVar2 = puVar10;
        puVar10[0x72] = puVar2;
      }
    }
    else if (puVar10 == puVar3) {
      *puVar3 = puVar8;
      puVar8[0x71] = puVar3;
    }
    else {
      puVar8[0x71] = puVar10;
      *(undefined8 **)(*(long *)(param_2 + 0x388) + 0x390) = puVar8;
    }
    *(undefined8 *)(param_2 + 0x390) = 0;
    *(undefined8 *)(param_2 + 0x388) = 0;
    *(undefined8 *)(param_2 + 0x380) = 0;
  }
  plVar11 = (long *)(param_1 + 0x40);
  plVar9 = (long *)*plVar11;
  if (plVar9 == (long *)0x0) {
    *(long *)(param_1 + 0x48) = param_2;
    *(long *)(param_1 + 0x40) = param_2;
    *(long **)(param_2 + 0x388) = plVar11;
    *(long **)(param_2 + 0x390) = (long *)(param_1 + 0x48);
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x2e8);
    if (uVar12 < (ulong)plVar9[0x5d]) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      plVar11 = (long *)(param_1 + 0x48);
      lVar6 = *plVar11;
      if (*(ulong *)(lVar6 + 0x2e8) <= uVar12) {
        do {
          plVar9 = (long *)plVar9[0x72];
          if (plVar9 == plVar11) goto LAB_00362110;
        } while (uVar12 < (ulong)plVar9[0x5d]);
        *(long **)(param_2 + 0x390) = plVar9;
        lVar6 = plVar9[0x71];
        *(long *)(param_2 + 0x388) = lVar6;
        *(long *)(lVar6 + 0x390) = param_2;
        plVar9[0x71] = param_2;
        goto LAB_00362110;
      }
      *(long *)(param_2 + 0x388) = lVar6;
      *(long *)(lVar6 + 0x390) = param_2;
      *(long **)(param_2 + 0x390) = plVar11;
    }
    else {
      *(long **)(param_2 + 0x390) = plVar9;
      plVar9[0x71] = param_2;
      *(long **)(param_2 + 0x388) = plVar11;
    }
    *plVar11 = param_2;
  }
LAB_00362110:
  *(long *)(param_2 + 0x380) = param_1;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  uVar13 = 1;
LAB_00362118:
  func_0x0048046c(*(undefined8 *)(param_1 + 0x408));
  return uVar13;
}

