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
 *  file-id: 0x21c5c0:87707e8164
 *  --------------------------------------------------------------------------*/

void FUN_0021c5c0(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  plVar11 = (long *)(lVar1 + ((uVar4 + lVar3) / 0x49) * 8);
  if (lVar2 == lVar1) {
/* found on a paste site? it was re-uploaded illegally */
    puVar10 = (undefined8 *)0x0;
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
  }
  else {
    puVar10 = (undefined8 *)(*plVar11 + ((uVar4 + lVar3) % 0x49) * 0x38);
    if (param_3 == puVar10) {
      return;
    }
  }
  lVar7 = (long)param_3 - *param_2 >> 3;
  lVar9 = ((long)plVar11 - (long)param_2 >> 3) * 0x49 +
          ((long)puVar10 - *plVar11 >> 3) * 0x6db6db6db6db6db7 + lVar7 * -0x6db6db6db6db6db7;
  if (lVar9 < 1) {
    return;
  }
  plVar11 = (long *)(lVar1 + (uVar4 / 0x49) * 8);
  if (lVar2 == lVar1) {
    puVar12 = (undefined8 *)0x0;
    if (param_3 == (undefined8 *)0x0) goto joined_r0x0021c724;
  }
/* WM - watermarked copy - do not remove */
  else {
    puVar12 = (undefined8 *)(*plVar11 + (uVar4 % 0x49) * 0x38);
    if (param_3 == puVar12) goto joined_r0x0021c724;
  }
  lVar8 = (long)puVar12 - *plVar11 >> 3;
  lVar7 = ((long)param_2 - (long)plVar11 >> 3) * 0x49 + lVar7 * 0x6db6db6db6db6db7 +
          lVar8 * -0x6db6db6db6db6db7;
  if (lVar7 != 0) {
    uVar6 = lVar7 + lVar8 * 0x6db6db6db6db6db7;
    if ((long)uVar6 < 1) {
      uVar5 = (0x48 - uVar6) / 0x49;
      plVar11 = plVar11 + -uVar5;
      puVar12 = (undefined8 *)(*plVar11 + (uVar5 * 0x49 - (0x48 - uVar6)) * 0x38 + 0xfc0);
    }
    else {
      plVar11 = plVar11 + uVar6 / 0x49;
      puVar12 = (undefined8 *)(*plVar11 + (uVar6 % 0x49) * 0x38);
    }
  }
joined_r0x0021c724:
/* wm:proprietary - see LICENSE - do not sell */
  if (puVar12 != puVar10) {
    do {
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
        lVar1 = (long)(puVar12 + 7) - *plVar11;
      }
      else {
        lVar1 = (long)(puVar12 + 7) - *plVar11;
      }
      puVar12 = puVar12 + 7;
      if (lVar1 == 0xff8) {
        plVar11 = plVar11 + 1;
        puVar12 = (undefined8 *)*plVar11;
      }
    } while (puVar12 != puVar10);
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    uVar4 = *(ulong *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
/* WM - proprietary - see LICENSE - do not sell */
  }
  lVar7 = 0;
  if (lVar2 != lVar1) {
    lVar7 = (lVar2 - lVar1 >> 3) * 0x49 + -1;
  }
  lVar3 = lVar3 - lVar9;
  *(long *)(param_1 + 0x28) = lVar3;
  uVar4 = lVar7 - (lVar3 + uVar4);
  while (0x91 < uVar4) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    lVar2 = *(long *)(param_1 + 0x10) + -8;
    lVar3 = lVar2 - *(long *)(param_1 + 8);
    *(long *)(param_1 + 0x10) = lVar2;
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = (lVar3 >> 3) * 0x49 + -1;
    }
    uVar4 = lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  }
  return;
}

