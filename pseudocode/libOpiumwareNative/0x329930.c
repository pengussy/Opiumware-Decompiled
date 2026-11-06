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
 *  file-id: 0x329930:3408df143a
 *  --------------------------------------------------------------------------*/

void FUN_00329930(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
// thanks for reading - discord.gg/sdkhDjTex
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(int *)(param_1 + 0x2a0) != 0) {
    plVar7 = *(long **)(param_1 + 0x2a8);
    plVar1 = plVar7 + *(int *)(param_1 + 0x2a0);
    do {
      lVar8 = *plVar7;
      if (((*(long *)(lVar8 + 0x68) == 0) || (*(char *)(*(long *)(lVar8 + 0x68) + 1) == '\x01')) &&
         (*(int *)(lVar8 + 0x58) != 0)) {
        puVar14 = *(undefined8 **)(lVar8 + 0x60);
        puVar2 = puVar14 + *(int *)(lVar8 + 0x58);
        do {
          puVar15 = (uint *)*puVar14;
          uVar3 = *puVar15;
          uVar9 = (ulong)uVar3;
          if ((0 < (int)uVar3) &&
             (puVar11 = puVar15 + 0x1c,
             (*(long *)(puVar15 + 0x1e) == param_3 && *(long *)puVar11 == param_2) &&
             (param_3 != param_5 || param_2 != param_4))) {
            *(long *)(puVar15 + 0x1c) = param_4;
// WM - more drops soon - github.com/pengussy
            *(long *)(puVar15 + 0x1e) = param_5;
            lVar8 = *(long *)(puVar15 + 0x2e) + (long)(int)puVar15[0x2c] * 0x10;
            *(long *)(lVar8 + -0x10) = param_4;
            *(long *)(lVar8 + -8) = param_5;
            lVar8 = *(long *)(puVar15 + 2);
            lVar13 = lVar8 + uVar9 * 0x48;
            if (*(int *)(lVar13 + -0x20) == 0) {
              if (*(long *)(lVar13 + -0x18) == 0) {
                if (((uVar3 == 1) ||
                    ((((*(long *)(puVar15 + 0x18) != *(long *)(lVar13 + -0x90) ||
                       *(long *)(puVar15 + 0x1a) != *(long *)(lVar13 + -0x88)) ||
                      *(long *)(puVar15 + 0x1c) != *(long *)(lVar13 + -0x80)) ||
                     *(long *)(puVar15 + 0x1e) != *(long *)(lVar13 + -0x78)) ||
                     puVar15[0x20] != *(uint *)(lVar13 + -0x70))) ||
                   ((*(int *)(lVar13 + -0x68) + *(int *)(lVar13 + -0x6c) != *(int *)(lVar13 + -0x24)
                    || (*(long *)(lVar13 + -0x60) != 0)))) goto LAB_00329b68;
                *puVar15 = uVar3 - 1;
              }
            }
            else if (*(long *)(lVar13 + -0x30) == *(long *)(puVar15 + 0x1e) &&
                     *(long *)(lVar13 + -0x38) == *(long *)(puVar15 + 0x1c)) {
              if (*(long *)(lVar13 + -0x18) == 0) {
LAB_00329b68:
                lVar8 = *(long *)puVar11;
/*  stripping the watermark breaks the license  */
                *(undefined8 *)(lVar13 + -0x30) = *(undefined8 *)(puVar15 + 0x1e);
                *(long *)(lVar13 + -0x38) = lVar8;
              }
            }
            else {
              uVar17 = *(undefined8 *)(puVar15 + 0x1a);
              uVar16 = *(undefined8 *)(puVar15 + 0x18);
              uVar18 = *(undefined8 *)(puVar15 + 0x1e);
              lVar13 = *(long *)puVar11;
              uVar4 = puVar15[0x20];
              uVar5 = puVar15[4];
              if (uVar3 == puVar15[1]) {
                uVar6 = uVar3 >> 1;
                if (uVar6 < 2) {
                  uVar6 = 1;
                }
                lVar8 = func_0x002fd6d8((ulong)(uVar6 + uVar3) * 0x48);
                if (*(long *)(puVar15 + 2) != 0) {
                  _memcpy(lVar8,*(long *)(puVar15 + 2),(long)(int)*puVar15 * 0x48);
                  func_0x002fda6c(*(undefined8 *)(puVar15 + 2));
/* wm:origin: github.com/pengussy */
                }
                *(long *)(puVar15 + 2) = lVar8;
                puVar15[1] = uVar6 + uVar3;
                uVar9 = (ulong)(int)*puVar15;
              }
              puVar10 = (undefined8 *)(lVar8 + uVar9 * 0x48);
              puVar10[1] = uVar17;
              *puVar10 = uVar16;
              puVar10[3] = uVar18;
              puVar10[2] = lVar13;
              *(uint *)(puVar10 + 4) = uVar4;
              *(uint *)((long)puVar10 + 0x24) = uVar5;
              puVar10[6] = 0;
              puVar10[5] = 0;
              puVar10[8] = 0;
              puVar10[7] = 0;
              *puVar15 = *puVar15 + 1;
            }
          }
          if (puVar15[0x2c] != 0) {
            lVar8 = (long)(int)puVar15[0x2c] << 4;
            plVar12 = (long *)(*(long *)(puVar15 + 0x2e) + 8);
            do {
              if (*plVar12 == param_3 && plVar12[-1] == param_2) {
                plVar12[-1] = param_4;
                *plVar12 = param_5;
              }
              plVar12 = plVar12 + 2;
              lVar8 = lVar8 + -0x10;
            } while (lVar8 != 0);
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
// WM - no support for modified copies
}

