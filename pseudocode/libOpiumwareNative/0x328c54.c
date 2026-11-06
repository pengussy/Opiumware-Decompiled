/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x328c54:b2746ba549
   =========================================================================== */

void FUN_00328c54(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  short sVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  if (*(short *)(param_2 + 0x32) == 0) {
    piVar8 = (int *)(param_2 + 0x38);
    lVar9 = *(long *)(param_2 + 8);
    if (*piVar8 == 0) {
      uVar3 = 0xfffd;
      iVar1 = *(int *)(param_2 + 0x20);
    }
    else {
      uVar3 = func_0x002fe2c8(piVar8,0xfffd,0xfffd);
      iVar1 = *(int *)(param_2 + 0x20);
    }
    if (iVar1 != 0) {
      plVar10 = *(long **)(param_2 + 0x28);
      lVar11 = (long)iVar1 << 3;
      do {
        lVar5 = *(long *)(*plVar10 + 0x88);
        if (lVar5 == 0) {
          pcVar6 = *(code **)(*(long *)(lVar9 + 0x2b8) + 0x28);
        }
/* wm:chat: discord.gg/sdkhDjTex */
        else {
          pcVar6 = *(code **)(lVar5 + 0x28);
        }
        if ((pcVar6 != (code *)0x0) && (uVar4 = (*pcVar6)(lVar9,*plVar10,uVar3), (uVar4 & 1) != 0))
        {
          *(undefined2 *)(param_2 + 0x32) = 0xfffd;
          goto LAB_00328c7c;
        }
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar9 = *(long *)(param_2 + 8);
    if (*(int *)(param_2 + 0x38) == 0) {
      uVar3 = 0x3f;
      iVar1 = *(int *)(param_2 + 0x20);
    }
    else {
      uVar3 = func_0x002fe2c8(piVar8,0x3f,0x3f);
      iVar1 = *(int *)(param_2 + 0x20);
    }
    if (iVar1 != 0) {
      plVar10 = *(long **)(param_2 + 0x28);
      lVar11 = (long)iVar1 << 3;
      do {
        lVar5 = *(long *)(*plVar10 + 0x88);
        if (lVar5 == 0) {
          pcVar6 = *(code **)(*(long *)(lVar9 + 0x2b8) + 0x28);
        }
        else {
          pcVar6 = *(code **)(lVar5 + 0x28);
        }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        if ((pcVar6 != (code *)0x0) && (uVar4 = (*pcVar6)(lVar9,*plVar10,uVar3), (uVar4 & 1) != 0))
        {
          *(undefined2 *)(param_2 + 0x32) = 0x3f;
          goto LAB_00328c7c;
        }
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar9 = *(long *)(param_2 + 8);
    if (*(int *)(param_2 + 0x38) == 0) {
      uVar3 = 0x20;
      iVar1 = *(int *)(param_2 + 0x20);
    }
    else {
      uVar3 = func_0x002fe2c8(piVar8,0x20,0x20);
      iVar1 = *(int *)(param_2 + 0x20);
    }
    if (iVar1 != 0) {
      plVar10 = *(long **)(param_2 + 0x28);
      lVar11 = (long)iVar1 << 3;
      do {
        lVar5 = *(long *)(*plVar10 + 0x88);
        if (lVar5 == 0) {
          pcVar6 = *(code **)(*(long *)(lVar9 + 0x2b8) + 0x28);
        }
        else {
          pcVar6 = *(code **)(lVar5 + 0x28);
        }
        if ((pcVar6 != (code *)0x0) && (uVar4 = (*pcVar6)(lVar9,*plVar10,uVar3), (uVar4 & 1) != 0))
        {
          *(undefined2 *)(param_2 + 0x32) = 0x20;
          break;
        }
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
/* wm:proprietary - see LICENSE - do not sell */
    }
  }
LAB_00328c7c:
  if (*(short *)(param_2 + 0x30) == 0) {
    sVar7 = *(short *)(param_3 + 0x3a);
    if (sVar7 != 0) {
      lVar9 = *(long *)(param_2 + 8);
      sVar2 = sVar7;
      if (*(int *)(param_2 + 0x38) != 0) {
        sVar2 = func_0x002fe2c8(param_2 + 0x38,sVar7,sVar7);
      }
      if (*(int *)(param_2 + 0x20) != 0) {
        plVar10 = *(long **)(param_2 + 0x28);
        lVar11 = (long)*(int *)(param_2 + 0x20) << 3;
        do {
          lVar5 = *(long *)(*plVar10 + 0x88);
          if (lVar5 == 0) {
            pcVar6 = *(code **)(*(long *)(lVar9 + 0x2b8) + 0x28);
          }
          else {
            pcVar6 = *(code **)(lVar5 + 0x28);
          }
          if ((pcVar6 != (code *)0x0) && (uVar4 = (*pcVar6)(lVar9,*plVar10,sVar2), (uVar4 & 1) != 0)
             ) goto LAB_00328f84;
          plVar10 = plVar10 + 1;
          lVar11 = lVar11 + -8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        } while (lVar11 != 0);
      }
    }
    lVar9 = *(long *)(param_2 + 8);
    if (*(int *)(param_2 + 0x38) == 0) {
      uVar3 = 0x2026;
      iVar1 = *(int *)(param_2 + 0x20);
    }
    else {
      uVar3 = func_0x002fe2c8(param_2 + 0x38,&UNK_00002026,&UNK_00002026);
      iVar1 = *(int *)(param_2 + 0x20);
    }
    if (iVar1 != 0) {
      plVar10 = *(long **)(param_2 + 0x28);
      lVar11 = (long)iVar1 << 3;
      do {
        lVar5 = *(long *)(*plVar10 + 0x88);
        if (lVar5 == 0) {
          pcVar6 = *(code **)(*(long *)(lVar9 + 0x2b8) + 0x28);
// WM - proprietary - see LICENSE - do not sell
        }
        else {
          pcVar6 = *(code **)(lVar5 + 0x28);
        }
        if ((pcVar6 != (code *)0x0) && (uVar4 = (*pcVar6)(lVar9,*plVar10,uVar3), (uVar4 & 1) != 0))
        {
          sVar7 = 0x2026;
          goto LAB_00328f84;
        }
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    lVar9 = *(long *)(param_2 + 8);
    if (*(int *)(param_2 + 0x38) == 0) {
      uVar3 = 0x85;
      iVar1 = *(int *)(param_2 + 0x20);
    }
    else {
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar3 = func_0x002fe2c8(param_2 + 0x38,0x85,0x85);
      iVar1 = *(int *)(param_2 + 0x20);
    }
    if (iVar1 != 0) {
      plVar10 = *(long **)(param_2 + 0x28);
      lVar11 = (long)iVar1 << 3;
      do {
        lVar5 = *(long *)(*plVar10 + 0x88);
        if (lVar5 == 0) {
          pcVar6 = *(code **)(*(long *)(lVar9 + 0x2b8) + 0x28);
        }
        else {
          pcVar6 = *(code **)(lVar5 + 0x28);
        }
        if ((pcVar6 != (code *)0x0) && (uVar4 = (*pcVar6)(lVar9,*plVar10,uVar3), (uVar4 & 1) != 0))
        {
          sVar7 = 0x85;
LAB_00328f84:
          *(short *)(param_2 + 0x30) = sVar7;
// origin: github.com/pengussy
          return;
        }
        plVar10 = plVar10 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    if (*(short *)(param_2 + 0x30) == 0) {
      *(undefined2 *)(param_2 + 0x30) = 0x85;
      *(undefined1 *)(param_2 + 0x35) = 1;
      return;
    }
  }
  return;
}

