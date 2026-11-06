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
 *  file-id: 0x362850:f2199957e5
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x004dcb58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004dcb5c) */

void FUN_00362850(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  
  iVar2 = func_0x00480450(*(undefined8 *)(param_1 + 0x408));
  if (iVar2 == 0) {
    return;
  }
  uVar3 = func_0x004dc0f0();
  lVar4 = func_0x004dc468(uVar3,&DAT_00362bec);
  uVar3 = func_0x0042d2a4(*(undefined8 *)(param_1 + 0x30));
  func_0x0046e958(*(undefined8 *)(param_1 + 0x30),0);
  plVar9 = (long *)(param_1 + 0x48);
  lVar8 = *plVar9;
  if (lVar8 != 0) {
// stripping the watermark breaks the license
    puVar1 = (undefined8 *)(param_1 + 0x40);
    if (lVar4 == 0) {
      if (param_2 == 0) {
        do {
          func_0x0046e40c(*(undefined8 *)(param_1 + 0x30),lVar8);
          plVar6 = *(long **)(lVar8 + 0x390);
          if ((plVar6 != (long *)0x0) &&
             (puVar7 = *(undefined8 **)(lVar8 + 0x388), puVar7 != (undefined8 *)0x0)) {
            if (plVar6 == plVar9) {
              if (puVar7 == puVar1) {
                *puVar1 = 0;
                *(undefined8 *)(param_1 + 0x48) = 0;
              }
              else {
                *plVar9 = (long)puVar7;
                puVar7[0x72] = plVar9;
// proprietary - see LICENSE - do not sell
              }
            }
            else if (puVar7 == puVar1) {
              *puVar1 = plVar6;
              plVar6[0x71] = (long)puVar1;
            }
            else {
              plVar6[0x71] = (long)puVar7;
              *(long **)(*(long *)(lVar8 + 0x388) + 0x390) = plVar6;
            }
            *(undefined8 *)(lVar8 + 0x390) = 0;
            *(undefined8 *)(lVar8 + 0x388) = 0;
            *(undefined8 *)(lVar8 + 0x380) = 0;
          }
          *(undefined4 *)(lVar8 + 0x2b0) = 1;
          if (*(code **)(param_1 + 0x68) != (code *)0x0) {
            (**(code **)(param_1 + 0x68))(param_1,lVar8);
          }
          FUN_00361b60(lVar8);
          lVar8 = *plVar9;
        } while (lVar8 != 0);
      }
      else {
        do {
          if ((ulong)(param_2 * 1000000000) <= *(ulong *)(lVar8 + 0x2e8)) break;
          func_0x0046e40c(*(undefined8 *)(param_1 + 0x30),lVar8);
/* proprietary - see LICENSE - do not sell */
          plVar6 = *(long **)(lVar8 + 0x390);
          if ((plVar6 != (long *)0x0) &&
             (puVar7 = *(undefined8 **)(lVar8 + 0x388), puVar7 != (undefined8 *)0x0)) {
            if (plVar6 == plVar9) {
              if (puVar7 == puVar1) {
                *puVar1 = 0;
                *(undefined8 *)(param_1 + 0x48) = 0;
              }
              else {
                *plVar9 = (long)puVar7;
                puVar7[0x72] = plVar9;
              }
            }
            else if (puVar7 == puVar1) {
              *puVar1 = plVar6;
              plVar6[0x71] = (long)puVar1;
            }
            else {
              plVar6[0x71] = (long)puVar7;
              *(long **)(*(long *)(lVar8 + 0x388) + 0x390) = plVar6;
            }
            *(undefined8 *)(lVar8 + 0x390) = 0;
            *(undefined8 *)(lVar8 + 0x388) = 0;
            *(undefined8 *)(lVar8 + 0x380) = 0;
          }
          *(undefined4 *)(lVar8 + 0x2b0) = 1;
          if (*(code **)(param_1 + 0x68) != (code *)0x0) {
            (**(code **)(param_1 + 0x68))(param_1,lVar8);
          }
// more drops soon - github.com/pengussy
          FUN_00361b60(lVar8);
          lVar8 = *plVar9;
        } while (lVar8 != 0);
      }
    }
    else if (param_2 == 0) {
      do {
        func_0x0046e40c(*(undefined8 *)(param_1 + 0x30),lVar8);
        plVar6 = *(long **)(lVar8 + 0x390);
        if ((plVar6 != (long *)0x0) &&
           (puVar7 = *(undefined8 **)(lVar8 + 0x388), puVar7 != (undefined8 *)0x0)) {
          if (plVar6 == plVar9) {
            if (puVar7 == puVar1) {
              *puVar1 = 0;
              *(undefined8 *)(param_1 + 0x48) = 0;
            }
// WM - found on a paste site? it was re-uploaded illegally
            else {
              *plVar9 = (long)puVar7;
              puVar7[0x72] = plVar9;
            }
          }
          else if (puVar7 == puVar1) {
            *puVar1 = plVar6;
            plVar6[0x71] = (long)puVar1;
          }
          else {
            plVar6[0x71] = (long)puVar7;
            *(long **)(*(long *)(lVar8 + 0x388) + 0x390) = plVar6;
          }
          *(undefined8 *)(lVar8 + 0x390) = 0;
          *(undefined8 *)(lVar8 + 0x388) = 0;
          *(undefined8 *)(lVar8 + 0x380) = 0;
        }
        *(undefined4 *)(lVar8 + 0x2b0) = 1;
        if (*(code **)(param_1 + 0x68) != (code *)0x0) {
          (**(code **)(param_1 + 0x68))(param_1,lVar8);
        }
        iVar2 = func_0x004dc9ec(lVar4,lVar8);
        if (iVar2 == 0) {
          FUN_00361b60(lVar8);
        }
        lVar8 = *plVar9;
      } while (lVar8 != 0);
    }
    else {
      do {
        if ((ulong)(param_2 * 1000000000) <= *(ulong *)(lVar8 + 0x2e8)) break;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        func_0x0046e40c(*(undefined8 *)(param_1 + 0x30),lVar8);
        plVar6 = *(long **)(lVar8 + 0x390);
        if ((plVar6 != (long *)0x0) &&
           (puVar7 = *(undefined8 **)(lVar8 + 0x388), puVar7 != (undefined8 *)0x0)) {
          if (plVar6 == plVar9) {
            if (puVar7 == puVar1) {
              *puVar1 = 0;
              *(undefined8 *)(param_1 + 0x48) = 0;
            }
            else {
              *plVar9 = (long)puVar7;
              puVar7[0x72] = plVar9;
            }
          }
          else if (puVar7 == puVar1) {
            *puVar1 = plVar6;
            plVar6[0x71] = (long)puVar1;
          }
          else {
            plVar6[0x71] = (long)puVar7;
            *(long **)(*(long *)(lVar8 + 0x388) + 0x390) = plVar6;
          }
          *(undefined8 *)(lVar8 + 0x390) = 0;
          *(undefined8 *)(lVar8 + 0x388) = 0;
          *(undefined8 *)(lVar8 + 0x380) = 0;
        }
        *(undefined4 *)(lVar8 + 0x2b0) = 1;
        if (*(code **)(param_1 + 0x68) != (code *)0x0) {
          (**(code **)(param_1 + 0x68))(param_1,lVar8);
        }
        iVar2 = func_0x004dc9ec(lVar4,lVar8);
        if (iVar2 == 0) {
          FUN_00361b60(lVar8);
        }
        lVar8 = *plVar9;
/* WM - proprietary - see LICENSE - do not sell */
      } while (lVar8 != 0);
    }
  }
  func_0x0046e958(*(undefined8 *)(param_1 + 0x30),uVar3);
  func_0x0048046c(*(undefined8 *)(param_1 + 0x408));
  piVar5 = (int *)func_0x004dc468(lVar4,&DAT_00362bec);
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (0 < *piVar5) {
    lVar4 = 0;
    do {
      lVar8 = *(long *)(*(long *)(piVar5 + 2) + lVar4 * 8);
      if (lVar8 != 0) {
        if (*(code **)(piVar5 + 10) == (code *)0x0) {
          FUN_00361b60(lVar8);
        }
        else {
          (**(code **)(piVar5 + 10))(FUN_00361b60);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *piVar5);
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)(*(undefined8 *)(piVar5 + 2),&UNK_01c5cd2a,0x1de);
/*  chat: discord.gg/sdkhDjTex  */
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

