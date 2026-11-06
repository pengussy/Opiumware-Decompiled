/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b5a0c:fe08a4dfcb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_003b5a0c(long param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (**(int **)(param_1 + 0x18) == 0x10000) {
    piVar9 = (int *)&UNK_01dc7c68;
    iVar5 = _UNK_01dc7c68;
  }
  else {
    if (**(int **)(param_1 + 0x18) != 0x1ffff) {
      return param_2 == *(int *)(param_1 + 0x48);
    }
    piVar9 = (int *)&UNK_01dc7ce0;
    iVar5 = _UNK_01dc7ce0;
  }
  if (iVar5 != 0) {
    iVar1 = 0xff00;
    if (param_2 != 0x100) {
      iVar1 = param_2;
    }
    if (param_2 == 0x304) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
      do {
        if (iVar5 == 0x304) {
          lVar11 = 8;
          if (*(int *)(param_1 + 0x78) != 0) {
            lVar11 = 0x10;
          }
          pcVar10 = *(code **)((long)piVar9 + lVar11);
          if (pcVar10 != (code *)0x0) {
            uVar6 = (*pcVar10)();
            iVar5 = func_0x003b5d98(param_1,uVar6);
            if (iVar5 == 0) {
              if (*(int *)(param_1 + 0x78) == 0) goto LAB_003b5d84;
              if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0xd40) != 0)) {
                if (((*(long *)(*(long *)(param_1 + 8) + 0x228) != 0) ||
                    (((*(long *)(*(long *)(param_1 + 0xd40) + 0x228) != 0 ||
                      (*(long *)(param_1 + 0x978) != 0)) || (*(long *)(param_1 + 0x980) != 0)))) ||
                   (lVar11 = *(long *)(param_1 + 0x880), *(long *)(lVar11 + 0x60) != 0))
                goto LAB_003b5d84;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                uVar13 = *(ulong *)(param_1 + 0x118);
                if (uVar13 != 0) {
                  iVar5 = (int)uVar13;
                  if (0 < iVar5) {
                    if ((*(long *)(&UNK_00001760 + param_1) == 0) ||
                       (lVar7 = _memchr(*(long *)(&UNK_00001760 + param_1),2,
                                        *(undefined8 *)(&UNK_00001768 + param_1)), lVar7 == 0)) {
                      plVar8 = *(long **)(lVar11 + 0x20);
                      if (*plVar8 == 0) goto LAB_003b5b80;
                    }
                    else {
                      plVar8 = *(long **)(lVar11 + 0x20);
                    }
                    if (plVar8[1] != 0) goto LAB_003b5d84;
                  }
LAB_003b5b80:
// WM - proprietary - see LICENSE - do not sell
                  if (uVar13 != 1) {
                    if (1 < iVar5) {
                      if ((*(long *)(&UNK_00001760 + param_1) == 0) ||
                         (lVar7 = _memchr(*(long *)(&UNK_00001760 + param_1),2,
                                          *(undefined8 *)(&UNK_00001768 + param_1)), lVar7 == 0)) {
                        lVar7 = *(long *)(lVar11 + 0x20);
                        if (*(long *)(lVar7 + 0x28) == 0) goto LAB_003b5bc4;
                      }
                      else {
                        lVar7 = *(long *)(lVar11 + 0x20);
                      }
                      if (*(long *)(lVar7 + 0x30) != 0) goto LAB_003b5d84;
                    }
LAB_003b5bc4:
                    if (3 < uVar13) {
                      if (3 < iVar5) {
                        if ((*(long *)(&UNK_00001760 + param_1) == 0) ||
                           (lVar7 = _memchr(*(long *)(&UNK_00001760 + param_1),2,
                                            *(undefined8 *)(&UNK_00001768 + param_1)), lVar7 == 0))
                        {
                          lVar11 = *(long *)(lVar11 + 0x20);
                          if (*(long *)(lVar11 + 0x78) == 0) goto LAB_003b5c20;
                        }
                        else {
                          lVar11 = *(long *)(lVar11 + 0x20);
                        }
/* keep the notice, keep the source honest */
                        if (*(long *)(lVar11 + 0x80) != 0) {
                          uVar6 = func_0x003667c8();
                          iVar5 = func_0x00365f68(param_1,uVar6);
                          if (iVar5 != 0) {
LAB_003b5d84:
                            if (param_3 != (undefined8 *)0x0) {
                              uVar6 = (*pcVar10)();
                              *param_3 = uVar6;
                            }
                            return true;
                          }
                          uVar13 = *(ulong *)(param_1 + 0x118);
                        }
                      }
LAB_003b5c20:
                      if (4 < uVar13) {
                        uVar12 = 4;
                        do {
                          if ((((6 < uVar12) || ((1L << (uVar12 & 0x3f) & 0x74U) == 0)) &&
                              (-1 < (int)uVar12)) && ((int)uVar12 < (int)uVar13)) {
                            puVar3 = &UNK_00001750;
                            if (*(int *)(param_1 + 0x78) != 0) {
                              puVar3 = &UNK_00001760;
                            }
                            if (*(long *)(puVar3 + param_1) == 0) {
                              lVar11 = *(long *)(param_1 + 0x880);
LAB_003b5cc8:
                              plVar8 = (long *)(*(long *)(lVar11 + 0x20) +
                                               (uVar12 & 0x7fffffff) * 0x28);
                              if (*plVar8 == 0) goto LAB_003b5c4c;
                            }
                            else {
                              puVar4 = &UNK_00001758;
                              if (*(int *)(param_1 + 0x78) != 0) {
                                puVar4 = &UNK_00001768;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                              }
                              lVar7 = _memchr(*(long *)(puVar3 + param_1),2,
                                              *(undefined8 *)(puVar4 + param_1));
                              lVar11 = *(long *)(param_1 + 0x880);
                              if (lVar7 == 0) goto LAB_003b5cc8;
                              plVar8 = (long *)(*(long *)(lVar11 + 0x20) +
                                               (uVar12 & 0x7fffffff) * 0x28);
                            }
                            if (plVar8[1] != 0) goto LAB_003b5d84;
                          }
LAB_003b5c4c:
                          uVar12 = uVar12 + 1;
                        } while (uVar13 != uVar12);
                      }
                    }
                  }
                }
/* WM - proprietary - see LICENSE - do not sell */
              }
            }
          }
        }
        else if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
          if (iVar5 < 0x305) {
            return false;
          }
        }
        else {
          iVar2 = 0xff00;
          if (iVar5 != 0x100) {
            iVar2 = iVar5;
          }
          if (iVar1 <= iVar2) {
            return false;
          }
        }
        piVar9 = piVar9 + 6;
        iVar5 = *piVar9;
      } while (iVar5 != 0);
    }
    else {
      do {
        if (param_2 == iVar5) {
          lVar11 = 8;
          if (*(int *)(param_1 + 0x78) != 0) {
            lVar11 = 0x10;
          }
          pcVar10 = *(code **)((long)piVar9 + lVar11);
/*  proprietary - see LICENSE - do not sell  */
          if (pcVar10 != (code *)0x0) {
            uVar6 = (*pcVar10)();
            iVar5 = func_0x003b5d98(param_1,uVar6);
            if (iVar5 == 0) goto LAB_003b5d84;
          }
        }
        else if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
          if (iVar5 <= param_2) {
            return false;
          }
        }
        else {
          iVar2 = 0xff00;
          if (iVar5 != 0x100) {
            iVar2 = iVar5;
          }
          if (iVar1 <= iVar2) {
            return false;
          }
        }
        piVar9 = piVar9 + 6;
        iVar5 = *piVar9;
      } while (iVar5 != 0);
    }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  }
  return false;
}

