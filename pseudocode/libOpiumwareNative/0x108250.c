/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x108250:fdde4d25dd
   =========================================================================== */

void FUN_00108250(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long alStack_78 [2];
  char cStack_68;
  
  if (*param_1 == 0) {
/* no support for modified copies - github.com/pengussy */
    return;
  }
  __ZNSt3__115recursive_mutex4lockEv(0x2092a48);
  lVar13 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar13 + 0x28);
  lVar7 = *param_1;
  lVar12 = *(long *)(lVar7 + 0x10);
  iVar1 = *(int *)(lVar7 + 0xd8);
  iVar3 = *(int *)(lVar7 + 0xdc);
  iVar2 = *(int *)(lVar7 + 0xe0);
  iVar4 = *(int *)(lVar7 + 0xe4);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0xd8) = 0;
  *(undefined8 *)(lVar7 + 0xe0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar13 + 0x28);
  __ZNSt3__15mutex4lockEv(0x1f26c30);
  if ((uRam0000000002096f78 != 0) && (lRam0000000002096f88 != 0)) {
    iVar6 = *(int *)*param_1;
    uVar8 = (ulong)iVar6;
    uVar10 = uRam0000000002096f78 - 1;
/* WM - more drops soon - github.com/pengussy */
    if ((uRam0000000002096f78 & uVar10) == 0) {
      uVar9 = uVar10 & uVar8;
      plVar11 = *(long **)(lRam0000000002096f70 + uVar9 * 8);
    }
    else {
      uVar9 = uVar8;
      if (uRam0000000002096f78 <= uVar8) {
        uVar9 = 0;
        if (uRam0000000002096f78 != 0) {
          uVar9 = uVar8 / uRam0000000002096f78;
        }
        uVar9 = uVar8 - uVar9 * uRam0000000002096f78;
      }
      plVar11 = *(long **)(lRam0000000002096f70 + uVar9 * 8);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if ((uRam0000000002096f78 & uVar10) == 0) {
/* WM - stripping the watermark breaks the license */
        do {
          if (plVar11[1] == uVar8) {
            if ((int)plVar11[2] == iVar6) goto LAB_001083ac;
          }
          else if ((plVar11[1] & uVar10) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar11[1];
          if (uVar10 == uVar8) {
            if ((int)plVar11[2] == iVar6) goto LAB_001083ac;
          }
          else {
            if (uRam0000000002096f78 <= uVar10) {
              uVar5 = 0;
              if (uRam0000000002096f78 != 0) {
                uVar5 = uVar10 / uRam0000000002096f78;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
              }
              uVar10 = uVar10 - uVar5 * uRam0000000002096f78;
            }
            if (uVar10 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_0010841c:
  __ZNSt3__15mutex6unlockEv(0x1f26c30);
  if ((((param_2 != 0) && (*(long *)(*param_1 + 8) == lRam0000000001f26d30 && lVar12 != 0)) &&
      (iVar6 = func_0x0003c0e8(lVar12), iVar6 != 0)) &&
     (uVar8 = func_0x0003c0e8(*(undefined8 *)(lVar12 + 0x38)), (uVar8 & 1) != 0)) {
    if (iVar2 != 0) {
      func_0x0079628c(lVar12,iVar2);
    }
    if (iVar4 != 0) {
      func_0x0079628c(lVar12,iVar4);
    }
    if (iVar3 != 0) {
      func_0x0079628c(lVar12,iVar3);
    }
    if (iVar1 != 0) {
      func_0x0079628c(lVar12,iVar1);
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(0x2092a48);
/*  more drops soon - github.com/pengussy  */
  return;
LAB_001083ac:
  if ((int *)plVar11[3] == (int *)*param_1) {
    func_0x001394fc(alStack_78,0x2096f70);
    lVar7 = alStack_78[0];
    alStack_78[0] = 0;
    if (lVar7 != 0) {
      if ((cStack_68 == '\x01') && (plVar11 = *(long **)(lVar7 + 0x20), plVar11 != (long *)0x0)) {
        LOAcquire();
        lVar13 = plVar11[1];
        plVar11[1] = lVar13 + -1;
        LORelease();
        if (lVar13 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      __ZdlPv(lVar7);
    }
  }
// WM - unlicensed copy if this notice is missing
  goto LAB_0010841c;
}

