/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x303d6c:8ac2137d25
 */

void FUN_00303d6c(long param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  if (*(int *)(&UNK_00001448 + param_1) != 0) {
    plVar8 = *(long **)(&UNK_00001450 + param_1);
    plVar2 = plVar8 + *(int *)(&UNK_00001448 + param_1);
    do {
      lVar10 = *plVar8;
      if ((*(byte *)(lVar10 + 0x15) & 1) == 0) {
        if (*(int *)(lVar10 + 0x2c4) == -1) {
          if (*(long *)(&UNK_00002758 + lRam00000000020973e0) != 0) {
            piVar1 = (int *)(*(long *)(&UNK_00002758 + lRam00000000020973e0) + 4);
            piVar5 = piVar1;
            do {
              if ((*piVar5 == *(int *)(lVar10 + 0x10)) && (*(char *)((long)piVar5 + 0xf) != '\x01'))
              goto LAB_00303dc4;
              piVar5 = (int *)((long)piVar5 + (long)piVar5[-1]);
            } while (piVar5 != (int *)((long)piVar1 +
                                      (long)*(int *)(&UNK_00002750 + lRam00000000020973e0)));
// unlicensed copy if this notice is missing
          }
LAB_00303db0:
          piVar5 = (int *)func_0x0031c844(*(undefined8 *)(lVar10 + 8));
          *(int *)(lVar10 + 0x2c4) = (int)piVar5 - *(int *)(&UNK_00002758 + param_1);
        }
        else {
          if (*(long *)(&UNK_00002758 + lRam00000000020973e0) == 0) goto LAB_00303db0;
          piVar5 = (int *)(*(long *)(&UNK_00002758 + lRam00000000020973e0) +
                          (long)*(int *)(lVar10 + 0x2c4));
        }
LAB_00303dc4:
        piVar5[1] = (int)*(float *)(lVar10 + 0x28) & 0xffffU |
                    (int)*(float *)(lVar10 + 0x2c) << 0x10;
        piVar5[2] = (int)*(float *)(lVar10 + 0x38) & 0xffffU |
                    (int)*(float *)(lVar10 + 0x3c) << 0x10;
        *(byte *)((long)piVar5 + 0xd) = *(byte *)(lVar10 + 0x17) & 1;
        *(undefined1 *)(piVar5 + 3) = *(undefined1 *)(lVar10 + 0xcf);
        *(undefined1 *)((long)piVar5 + 0xf) = 0;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  iVar3 = 0;
  if (*param_3 != 0) {
    iVar3 = *param_3 - 1;
  }
  func_0x002fe704(param_3,iVar3 + *(int *)(&UNK_00002750 + param_1) * 6);
  lVar10 = *(long *)(&UNK_00002758 + param_1);
  if (lVar10 != 0) {
    lVar12 = lVar10 + 4;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    do {
      if ((*(byte *)(lVar12 + 0xf) & 1) == 0) {
        func_0x002fe8b0(param_3,"[%s][%s]\n");
        if (*(char *)(lVar12 + 0xd) == '\x01') {
          func_0x002fe8b0(param_3,"IsChild=1\n");
          pcVar6 = "Size=%d,%d\n";
LAB_00303fd4:
          func_0x002fe8b0(param_3,pcVar6);
          uVar9 = *param_3;
          uVar7 = param_3[1];
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          uVar11 = uVar9 + 1;
          if ((int)uVar11 < (int)uVar7) goto LAB_00303fbc;
LAB_00303ff0:
          uVar4 = uVar11;
          if ((int)uVar11 <= (int)(uVar7 * 2)) {
            uVar4 = uVar7 * 2;
          }
          func_0x002fe704(param_3,uVar4);
          uVar7 = param_3[1];
          if ((int)uVar7 <= (int)uVar9) goto LAB_00304010;
        }
        else {
          func_0x002fe8b0(param_3,"Pos=%d,%d\n");
          func_0x002fe8b0(param_3,"Size=%d,%d\n");
          if (*(char *)(lVar12 + 0xc) == '\x01') {
            pcVar6 = "Collapsed=1\n";
            goto LAB_00303fd4;
          }
          uVar9 = *param_3;
          uVar7 = param_3[1];
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          uVar11 = uVar9 + 1;
/* proprietary - see LICENSE - do not sell */
          if ((int)uVar7 <= (int)uVar11) goto LAB_00303ff0;
LAB_00303fbc:
          if ((int)uVar7 <= (int)uVar9) {
LAB_00304010:
            uVar4 = 8;
            if (uVar7 != 0) {
              uVar4 = uVar7 + (int)uVar7 / 2;
            }
            if ((int)uVar4 <= (int)uVar11) {
              uVar4 = uVar11;
            }
            func_0x002fe704(param_3,uVar4);
          }
        }
        *param_3 = uVar11;
        *(undefined1 *)(*(long *)(param_3 + 2) + (long)(int)uVar9 + -1) = 10;
        *(undefined1 *)(*(long *)(param_3 + 2) + (long)(int)uVar9) = 0;
        lVar10 = *(long *)(&UNK_00002758 + param_1);
      }
      lVar12 = lVar12 + *(int *)(lVar12 + -4);
    } while (lVar12 != lVar10 + *(int *)(&UNK_00002750 + param_1) + 4);
  }
  return;
}

