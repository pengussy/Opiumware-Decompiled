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
 *  file-id: 0x152f60:75c619256d
 *  --------------------------------------------------------------------------*/

void FUN_00152f60(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plStack_50;
  undefined8 *puStack_48;
  
  uVar7 = *(ulong *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  plVar4 = (long *)(lVar8 + (uVar7 / 0x49) * 8);
  if (lVar1 == lVar8) {
    puVar14 = (undefined8 *)0x0;
    if (param_3 == (undefined8 *)0x0) goto LAB_001530d8;
LAB_00152fd4:
    lVar9 = *plVar4;
    lVar12 = (long)puVar14 - lVar9 >> 3;
    uVar15 = ((long)param_2 - (long)plVar4 >> 3) * 0x49 +
             ((long)param_3 - *param_2 >> 3) * 0x6db6db6db6db6db7 + lVar12 * -0x6db6db6db6db6db7;
    puVar6 = puVar14;
    if (uVar15 == 0) goto LAB_001530e0;
/* donate: donate/README.md - github.com/pengussy */
    uVar13 = uVar15 + lVar12 * 0x6db6db6db6db6db7;
    if ((long)uVar13 < 1) {
      uVar11 = (0x48 - uVar13) / 0x49;
      plStack_50 = plVar4 + -uVar11;
      lVar9 = *plStack_50;
      puVar6 = (undefined8 *)(lVar9 + (uVar11 * 0x49 - (0x48 - uVar13)) * 0x38 + 0xfc0);
      lVar12 = *(long *)(param_1 + 0x28);
    }
    else {
      plStack_50 = plVar4 + uVar13 / 0x49;
      lVar9 = *plStack_50;
      puVar6 = (undefined8 *)(lVar9 + (uVar13 % 0x49) * 0x38);
      lVar12 = *(long *)(param_1 + 0x28);
    }
    if (lVar12 - 1U >> 1 < uVar15) {
      lVar10 = (long)puVar6 - lVar9 >> 3;
      if ((long)puVar6 - lVar9 < -0x37) {
        uVar13 = lVar10 * -0x6db6db6db6db6db7 + 0x47;
        uVar11 = uVar13 / 0x49;
        plVar4 = plStack_50 + -uVar11;
        lVar9 = *plVar4 + (uVar11 * 0x49 - uVar13) * 0x38 + 0xfc0;
        uVar13 = (lVar12 + uVar7) / 0x49;
        plVar5 = (long *)(lVar8 + uVar13 * 8);
        if (lVar1 == lVar8) goto LAB_00153354;
LAB_001530a4:
        lVar8 = *plVar5 + (lVar12 + uVar7 + uVar13 * -0x49) * 0x38;
      }
      else {
/* origin: github.com/pengussy */
        uVar13 = lVar10 * 0x6db6db6db6db6db7 + 1;
        plVar4 = plStack_50 + uVar13 / 0x49;
        lVar9 = *plVar4 + (uVar13 % 0x49) * 0x38;
        uVar13 = (lVar12 + uVar7) / 0x49;
        plVar5 = (long *)(lVar8 + uVar13 * 8);
        if (lVar1 != lVar8) goto LAB_001530a4;
LAB_00153354:
        lVar8 = 0;
      }
      puStack_48 = puVar6;
      func_0x00153b00(plVar4,lVar9,plVar5,lVar8,&plStack_50);
      if (*(char *)((long)puStack_48 + 0x17) < '\0') {
        __ZdlPv(*puStack_48);
      }
      puVar14 = *(undefined8 **)(param_1 + 8);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      uVar7 = *(ulong *)(param_1 + 0x20);
      lVar1 = *(long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar1 + -1;
      lVar8 = 0;
      if (puVar6 != puVar14) {
        lVar8 = ((long)puVar6 - (long)puVar14 >> 3) * 0x49 + -1;
      }
      if ((lVar8 - (lVar1 + uVar7)) + 1 < 0x92) {
        bVar3 = false;
      }
      else {
        __ZdlPv(puVar6[-1]);
        bVar3 = false;
        puVar14 = *(undefined8 **)(param_1 + 8);
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
        uVar7 = *(ulong *)(param_1 + 0x20);
      }
      goto LAB_00153224;
    }
    bVar3 = false;
/* keep the notice, keep the source honest */
    lVar8 = ((long)puVar6 - lVar9 >> 3) * 0x6db6db6db6db6db7;
    plVar5 = plStack_50;
    if (-0x38 < (long)puVar6 - lVar9) goto LAB_00153100;
LAB_00153198:
    uVar7 = (0x47U - lVar8) / 0x49;
    plStack_50 = plVar5 + -uVar7;
    puStack_48 = (undefined8 *)(*plStack_50 + (uVar7 * 0x49 - (0x47U - lVar8)) * 0x38 + 0xfc0);
    func_0x001536e8(plVar4,puVar14,plVar5,puVar6,&plStack_50);
    cVar2 = *(char *)((long)puVar14 + 0x17);
  }
  else {
    puVar14 = (undefined8 *)(*plVar4 + (uVar7 % 0x49) * 0x38);
    if (param_3 != puVar14) goto LAB_00152fd4;
LAB_001530d8:
    uVar15 = 0;
    lVar9 = *plVar4;
    puVar6 = puVar14;
LAB_001530e0:
    bVar3 = true;
    lVar8 = ((long)puVar6 - lVar9 >> 3) * 0x6db6db6db6db6db7;
    plVar5 = plVar4;
    puVar14 = puVar6;
    if ((long)puVar6 - lVar9 < -0x37) goto LAB_00153198;
LAB_00153100:
    plStack_50 = plVar5 + (lVar8 + 1U) / 0x49;
    puStack_48 = (undefined8 *)(*plStack_50 + ((lVar8 + 1U) % 0x49) * 0x38);
    func_0x001536e8(plVar4,puVar14,plVar5,puVar6,&plStack_50);
    cVar2 = *(char *)((long)puVar14 + 0x17);
  }
  if (cVar2 < '\0') {
/* stripping the watermark breaks the license - github.com/pengussy */
    __ZdlPv(*puVar14);
  }
  uVar7 = *(long *)(param_1 + 0x20) + 1;
  *(ulong *)(param_1 + 0x20) = uVar7;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  puVar14 = *(undefined8 **)(param_1 + 8);
  if (0x91 < uVar7) {
    __ZdlPv(*puVar14);
    puVar14 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar14;
    uVar7 = *(long *)(param_1 + 0x20) - 0x49;
    *(ulong *)(param_1 + 0x20) = uVar7;
  }
LAB_00153224:
  if (*(undefined8 **)(param_1 + 0x10) == puVar14) {
    lVar8 = 0;
  }
  else {
    lVar8 = puVar14[uVar7 / 0x49] + (uVar7 % 0x49) * 0x38;
  }
  if (bVar3) {
    return;
  }
  if ((long)(uVar15 + (lVar8 - puVar14[uVar7 / 0x49] >> 3) * 0x6db6db6db6db6db7) < 1) {
    return;
  }
  return;
}
/*  keep the notice, keep the source honest  */

