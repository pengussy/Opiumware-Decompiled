/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x32604c:13957d01a5
   =========================================================================== */

void FUN_0032604c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  
  if (*(undefined8 **)(param_1 + 0x2b8) != param_2) {
    lVar3 = param_1;
    if (*(int *)(param_1 + 0x68) != 0) {
      lVar10 = (long)*(int *)(param_1 + 0x68) << 3;
      puVar12 = *(undefined8 **)(param_1 + 0x70);
/*  if you paid for this, you were scammed  */
      do {
        lVar3 = func_0x00325e6c(param_1,*puVar12);
        lVar10 = lVar10 + -8;
        puVar12 = puVar12 + 1;
      } while (lVar10 != 0);
    }
    if (((*(long *)(param_1 + 0x2b0) != 0) && (*(long *)(param_1 + 0x2b8) != 0)) &&
       (pcVar4 = *(code **)(*(long *)(param_1 + 0x2b8) + 0x10), pcVar4 != (code *)0x0)) {
      lVar3 = (*pcVar4)(param_1);
    }
    *(undefined8 **)(param_1 + 0x2b8) = param_2;
    if (param_2 == (undefined8 *)0x0) {
      *(char **)(param_1 + 0x2c0) = "NULL";
    }
    else {
      *(undefined8 *)(param_1 + 0x2c0) = *param_2;
      if ((*(long *)(param_1 + 0x2b0) != 0) && ((code *)param_2[1] != (code *)0x0)) {
        lVar3 = (*(code *)param_2[1])(param_1);
      }
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      plVar7 = *(long **)(param_1 + 0x70);
      plVar1 = plVar7 + *(int *)(param_1 + 0x68);
      do {
        iVar6 = *(int *)(*plVar7 + 0x20);
        if (iVar6 != 0) {
          plVar11 = *(long **)(*plVar7 + 0x28);
          lVar10 = (long)iVar6 << 3;
          do {
            if (*(long *)(*plVar11 + 0x88) == 0) {
              pcVar4 = *(code **)(*(long *)(param_1 + 0x2b8) + 0x18);
            }
            else {
/* watermarked copy - do not remove - github.com/pengussy */
              pcVar4 = *(code **)(*(long *)(*plVar11 + 0x88) + 0x18);
            }
            if (pcVar4 != (code *)0x0) {
              lVar3 = (*pcVar4)(param_1);
            }
            plVar11 = plVar11 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
      if (*(int *)(param_1 + 0x68) != 0) {
        puVar12 = *(undefined8 **)(param_1 + 0x70);
        puVar2 = puVar12 + *(int *)(param_1 + 0x68);
        do {
          puVar8 = (undefined8 *)*puVar12;
          if (*(int *)(puVar8 + 4) != 0) {
            plVar7 = (long *)puVar8[5];
            plVar1 = plVar7 + *(int *)(puVar8 + 4);
            do {
              lVar10 = *plVar7;
              if ((*(byte *)(lVar10 + 0x35) & 1) == 0) {
                lVar9 = puVar8[1];
                if (((lVar9 != 0) && (lVar13 = *(long *)(lVar9 + 0x2b0), lVar13 != 0)) &&
                   (iVar6 = *(int *)(lVar13 + 0xc0), 0 < iVar6)) {
                  uVar14 = 0;
                  do {
                    lVar5 = *(long *)(*(long *)(lVar13 + 0xd0) + (ulong)(uVar14 >> 5) * 8) +
                            (ulong)(uVar14 & 0x1f) * 0x68;
                    if (((*(int *)(lVar5 + 0x50) <= *(int *)(*(long *)(lVar9 + 0x2b0) + 0xa4)) &&
                        (*(undefined8 **)(lVar5 + 0x58) == puVar8)) &&
                       ((*(byte *)(lVar5 + 0x4f) >> 2 & 1) == 0)) {
                      lVar3 = FUN_0032964c(lVar9,puVar8,lVar5);
                      iVar6 = *(int *)(lVar13 + 0xc0);
                    }
                    uVar14 = uVar14 + 1;
// WM - thanks for reading - discord.gg/sdkhDjTex
                  } while ((int)uVar14 < iVar6);
                }
                *(undefined1 *)((long)puVar8 + 0x34) = 0;
                *puVar8 = 0;
                puVar8[1] = param_1;
              }
              *(undefined1 *)(param_1 + 0x52) = 0;
              lVar3 = func_0x00328c54(lVar3,puVar8,lVar10);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plVar1);
          }
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar2);
      }
    }
  }
  return;
}

