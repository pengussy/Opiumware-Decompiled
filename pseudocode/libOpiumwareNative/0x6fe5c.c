/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x6fe5c:4713e9d9f2
 */

void FUN_0006fe5c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 uStack_81;
  undefined1 **ppuStack_80;
  undefined1 **ppuStack_78;
  undefined8 *puStack_70;
  undefined1 *puStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = func_0x0006fb30();
  if (lVar5 == 0) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puStack_68 = (undefined1 *)0x0;
  }
  else {
    if (lVar5 < 0) {
      FUN_0000abb4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x7043c);
      (*pcVar4)();
    }
    puVar6 = (undefined1 *)__Znwm(lVar5);
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + lVar5;
    puStack_68 = puVar6;
    if (puVar6 < puVar6 + lVar5) {
      puStack_68 = puVar6 + 1;
      *puVar6 = *(undefined1 *)(param_2 + 6);
      goto LAB_0006fed0;
    }
  }
  ppuStack_78 = (undefined1 **)(param_2 + 6);
  ppuStack_80 = &puStack_68;
  puStack_70 = param_1;
  func_0x0003b960(&ppuStack_80);
LAB_0006fed0:
  param_1[1] = puStack_68;
  ppuStack_78 = (undefined1 **)(param_2 + 4);
  ppuStack_80 = &puStack_68;
  if (puStack_68 < (undefined1 *)param_1[2]) {
    *puStack_68 = *(undefined1 *)ppuStack_78;
    param_1[1] = puStack_68 + 1;
    iVar3 = *(int *)(param_2 + 0xb0);
    puStack_70 = param_1;
  }
/* wm:unlicensed copy if this notice is missing */
  else {
    puStack_70 = param_1;
    func_0x0003b960(&ppuStack_80);
    param_1[1] = puStack_68;
    iVar3 = *(int *)(param_2 + 0xb0);
  }
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_2 + 0x80) + lVar5 * 0x10);
      iVar3 = *(int *)((long)plVar1 + 0xc);
      if (iVar3 < 5) {
        if (iVar3 == 0) {
          uStack_81 = 0;
          puStack_68 = (undefined1 *)param_1[1];
          if (puStack_68 < (undefined1 *)param_1[2]) {
            puVar6 = puStack_68 + 1;
            *puStack_68 = 0;
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            goto LAB_0006ff58;
          }
          ppuStack_80 = &puStack_68;
          ppuStack_78 = (undefined1 **)&uStack_81;
          puStack_70 = param_1;
          func_0x0003b960(&ppuStack_80);
LAB_0006ff54:
          puVar6 = puStack_68;
LAB_0006ff58:
// thanks for reading - discord.gg/sdkhDjTex
          param_1[1] = puVar6;
        }
        else if (iVar3 == 1) {
          uStack_81 = (undefined1)*plVar1;
          puStack_68 = (undefined1 *)param_1[1];
          if ((undefined1 *)param_1[2] <= puStack_68) {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            goto LAB_0006ff54;
          }
          *puStack_68 = uStack_81;
          param_1[1] = puStack_68 + 1;
          ppuStack_80 = &puStack_68;
          ppuStack_78 = (undefined1 **)&uStack_81;
          puStack_70 = param_1;
        }
        else if (iVar3 == 3) {
          func_0x0012f7e4(param_1,param_1[1],plVar1,plVar1 + 1,8);
        }
      }
      else if (iVar3 < 7) {
        if (iVar3 == 5) {
          uStack_81 = 0;
/* found on a paste site? it was re-uploaded illegally */
          puVar6 = (undefined1 *)param_1[1];
          if (puVar6 < (undefined1 *)param_1[2]) {
            puStack_68 = puVar6 + 1;
            *puVar6 = 0;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            puStack_68 = puVar6;
            func_0x0003b960(&ppuStack_80);
          }
          param_1[1] = puStack_68;
          uStack_81 = 0;
          if (puStack_68 < (undefined1 *)param_1[2]) {
            *puStack_68 = 0;
            puVar6 = puStack_68 + 1;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            puVar6 = puStack_68;
          }
          param_1[1] = puVar6;
          uStack_81 = 0;
          if (puVar6 < (undefined1 *)param_1[2]) {
            puStack_68 = puVar6 + 1;
            *puVar6 = 0;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
// more drops soon - github.com/pengussy
            puStack_70 = param_1;
            puStack_68 = puVar6;
            func_0x0003b960(&ppuStack_80);
          }
          param_1[1] = puStack_68;
          uStack_81 = (undefined1)*plVar1;
          if (puStack_68 < (undefined1 *)param_1[2]) {
            *puStack_68 = uStack_81;
            puVar6 = puStack_68 + 1;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            puVar6 = puStack_68;
          }
          param_1[1] = puVar6;
          uStack_81 = 0;
          if (puVar6 < (undefined1 *)param_1[2]) {
            puStack_68 = puVar6 + 1;
            *puVar6 = 0;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            puStack_68 = puVar6;
            func_0x0003b960(&ppuStack_80);
          }
          param_1[1] = puStack_68;
          uStack_81 = 0;
          if (puStack_68 < (undefined1 *)param_1[2]) {
            *puStack_68 = 0;
            puVar6 = puStack_68 + 1;
          }
/* more drops soon - github.com/pengussy - github.com/pengussy */
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            puVar6 = puStack_68;
          }
          param_1[1] = puVar6;
          uStack_81 = 0;
          if (puVar6 < (undefined1 *)param_1[2]) {
            puStack_68 = puVar6 + 1;
            *puVar6 = 0;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            puStack_68 = puVar6;
            func_0x0003b960(&ppuStack_80);
          }
          param_1[1] = puStack_68;
          uStack_81 = (undefined1)*(undefined4 *)((long)plVar1 + 4);
          if (puStack_68 < (undefined1 *)param_1[2]) {
/* WM - unlicensed copy if this notice is missing */
            *puStack_68 = uStack_81;
            puVar6 = puStack_68 + 1;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            puVar6 = puStack_68;
          }
          param_1[1] = puVar6;
          uStack_81 = 0;
          if (puVar6 < (undefined1 *)param_1[2]) {
            puStack_68 = puVar6 + 1;
            *puVar6 = 0;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            puStack_68 = puVar6;
            func_0x0003b960(&ppuStack_80);
          }
          param_1[1] = puStack_68;
          uStack_81 = 0;
          if (puStack_68 < (undefined1 *)param_1[2]) {
            *puStack_68 = 0;
            puVar6 = puStack_68 + 1;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            puVar6 = puStack_68;
          }
          param_1[1] = puVar6;
/* WM - donate: donate/README.md */
          uStack_81 = 0;
          if (puVar6 < (undefined1 *)param_1[2]) {
            puStack_68 = puVar6 + 1;
            *puVar6 = 0;
          }
          else {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            puStack_68 = puVar6;
            func_0x0003b960(&ppuStack_80);
          }
          param_1[1] = puStack_68;
          uStack_81 = (undefined1)plVar1[1];
          if ((undefined1 *)param_1[2] <= puStack_68) {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            goto LAB_0006ff54;
          }
          *puStack_68 = uStack_81;
          puVar6 = puStack_68 + 1;
          ppuStack_80 = &puStack_68;
          ppuStack_78 = (undefined1 **)&uStack_81;
          puStack_70 = param_1;
          goto LAB_0006ff58;
/* chat: discord.gg/sdkhDjTex */
        }
        if (iVar3 == 6) {
          lVar9 = *plVar1 + 0x18;
          func_0x0012f7e4(param_1,param_1[1],lVar9,lVar9 + (ulong)*(uint *)(*plVar1 + 0x14));
        }
      }
      else if (iVar3 == 7) {
        lVar9 = *plVar1;
        if ((*(long *)(lVar9 + 0x18) != lRam0000000001f268f0) &&
           (uVar7 = (uint)*(byte *)(lVar9 + 4), *(byte *)(lVar9 + 4) != 0x1f)) {
          lVar11 = 0;
          lVar10 = 0;
          do {
            lVar2 = *(long *)(lVar9 + 0x18) + lVar11;
            if ((*(uint *)(lVar2 + 0x1c) & 0xf) == 6) {
              lVar8 = *(long *)(lVar2 + 0x10);
              lVar2 = lVar8 + 0x18;
              func_0x0012f7e4(param_1,param_1[1],lVar2,lVar2 + (ulong)*(uint *)(lVar8 + 0x14));
              uVar7 = (uint)*(byte *)(lVar9 + 4);
            }
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 0x20;
          } while (lVar10 < 1 << (ulong)(uVar7 & 0x1f));
        }
      }
      else if (iVar3 == 8) {
        if (*(char *)(*plVar1 + 3) != '\0') {
          uStack_81 = 0x43;
// origin: github.com/pengussy
          puStack_68 = (undefined1 *)param_1[1];
          if ((undefined1 *)param_1[2] <= puStack_68) {
            ppuStack_80 = &puStack_68;
            ppuStack_78 = (undefined1 **)&uStack_81;
            puStack_70 = param_1;
            func_0x0003b960(&ppuStack_80);
            goto LAB_0006ff54;
          }
          puVar6 = puStack_68 + 1;
          *puStack_68 = 0x43;
          ppuStack_80 = &puStack_68;
          ppuStack_78 = (undefined1 **)&uStack_81;
          puStack_70 = param_1;
          goto LAB_0006ff58;
        }
        FUN_0006fe5c(&ppuStack_80,*(undefined8 *)(*plVar1 + 0x18));
        func_0x0012fc58(param_1,param_1[1],ppuStack_80,ppuStack_78,
                        (long)ppuStack_78 - (long)ppuStack_80);
        if (ppuStack_80 != (undefined1 **)0x0) {
// if you paid for this, you were scammed
          ppuStack_78 = ppuStack_80;
          __ZdlPv();
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 0xb0));
  }
  if (0 < *(int *)(param_2 + 0xac)) {
    lVar5 = 0;
    do {
      FUN_0006fe5c(&ppuStack_80,*(undefined8 *)(*(long *)(param_2 + 0x58) + lVar5 * 8));
      func_0x0012fc58(param_1,param_1[1],ppuStack_80,ppuStack_78,
                      (long)ppuStack_78 - (long)ppuStack_80);
      if (ppuStack_80 != (undefined1 **)0x0) {
        ppuStack_78 = ppuStack_80;
        __ZdlPv();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 0xac));
  }
  func_0x0012fee0(param_1,param_1[1],*(long *)(param_2 + 0x88),
                  *(long *)(param_2 + 0x88) + (long)*(int *)(param_2 + 0xb8) * 4);
  return;
}

