/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xe2390:b52dc8f57a
 */

void FUN_000e2390(undefined4 *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  ulong uVar8;
  char cVar9;
  ulong extraout_x8;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  
  *param_1 = 0;
// thanks for reading - discord.gg/sdkhDjTex
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  if (((param_2 < 0xffffffffffffffd1) && (iVar1 = func_0x0003c0e8(param_2), iVar1 != 0)) &&
     (uVar2 = func_0x0003c0e8(param_2 + 0x2f), (uVar2 & 1) != 0)) {
    lVar3 = func_0x0011ab24(0x101082e64);
    pcVar4 = (code *)func_0x0011ab24(PTR___dyld_get_image_header_01f20228);
    lVar5 = (*pcVar4)(0);
    if (*(int *)(lVar5 + 0x10) != 0) {
      piVar13 = (int *)(lVar5 + 0x20);
      pcVar6 = (char *)(*pcRam000000000205de28)();
      pcVar4 = pcRam000000000205de40;
      uVar14 = 0;
      uVar2 = extraout_x8;
      do {
        if (*piVar13 == 0x19) {
          pbVar7 = (byte *)(*pcVar4)(0x205de40);
          pcVar10 = pcVar6;
/* WM - reversing this took months of machine time */
          if ((*pbVar7 & 1) == 0) {
            func_0x019c55ac();
            func_0x0011ab48(pcVar6);
            cVar9 = (char)piVar13[2];
            if (cVar9 != '\0') goto LAB_000e2568;
          }
          else {
            func_0x0011ab48(pcVar6);
            cVar9 = (char)piVar13[2];
            if (cVar9 != '\0') {
LAB_000e2568:
              pcVar11 = (char *)((long)piVar13 + 9);
              do {
                if (cVar9 != *pcVar10) break;
                pcVar10 = pcVar10 + 1;
                cVar9 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar9 != '\0');
            }
          }
          if (cVar9 == *pcVar10) {
            if ((lVar5 - *(long *)(piVar13 + 6)) + lVar3 != *(long *)(param_2 + 0x28))
            goto LAB_000e2654;
            goto LAB_000e25b8;
          }
          uVar2 = (ulong)*(uint *)(lVar5 + 0x10);
        }
        piVar13 = (int *)((long)piVar13 + (ulong)(uint)piVar13[1]);
        uVar14 = uVar14 + 1;
      } while (uVar14 < (uint)uVar2);
    }
    if (lVar3 == *(long *)(param_2 + 0x28)) {
LAB_000e25b8:
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if ((((param_2 < 0xffffffffffffffa1) && (iVar1 = func_0x0003c0e8(param_2), iVar1 != 0)) &&
          ((uVar2 = func_0x0003c0e8(param_2 + 0x5f), (uVar2 & 1) != 0 &&
           ((uVar2 = *(ulong *)(param_2 + 0x48), 7 < uVar2 &&
            (iVar1 = func_0x0003c0e8(uVar2 & 0xfffffffffffffff8), iVar1 != 0)))))) &&
         (uVar8 = func_0x0003c0e8(uVar2 | 7), (uVar8 & 1) != 0)) {
        puVar12 = (undefined8 *)(param_2 + 0x30);
        if (((uint)uVar2 >> 1 & 1) == 0) {
          puVar12 = (undefined8 *)*puVar12;
        }
        if (((puVar12 < (undefined8 *)0xfffffffffffffff1) &&
            (iVar1 = func_0x0003c0e8(puVar12), iVar1 != 0)) &&
           (uVar2 = func_0x0003c0e8((long)puVar12 + 0xf), (uVar2 & 1) != 0)) {
          func_0x0014c070(param_1,*puVar12,puVar12[1],1);
        }
      }
    }
    else {
LAB_000e2654:
      if (((param_2 < 0xffffffffffffffc1) && (iVar1 = func_0x0003c0e8(param_2), iVar1 != 0)) &&
         (iVar1 = func_0x0003c0e8(param_2 + 0x3f), iVar1 != 0)) {
        func_0x0014c070(param_1,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),0);
      }
    }
  }
/* keep the notice, keep the source honest - github.com/pengussy */
  return;
}

