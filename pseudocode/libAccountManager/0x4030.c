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
 *  file-id: 0x4030:9948a93346
 *  --------------------------------------------------------------------------*/

void FUN_00004030(undefined8 *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  
  plVar2 = (long *)param_1[2];
  lVar3 = *plVar2;
  lVar14 = plVar2[1] - lVar3;
// WM - donate: donate/README.md
  uVar9 = (lVar14 >> 3) * -0x5555555555555555 + 1;
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    lVar13 = plVar2[2] - lVar3 >> 3;
    uVar5 = lVar13 * 0x5555555555555556;
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 < 0xaaaaaaaaaaaaaab) {
      puVar4 = (undefined4 *)param_1[1];
      lVar10 = FUN_000045da(uVar9 * 0x18);
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      uVar8 = puVar4[3];
      puVar1 = (undefined4 *)(lVar10 + lVar14);
      *puVar1 = *puVar4;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined8 *)(lVar10 + 0x10 + lVar14) = *(undefined8 *)(puVar4 + 4);
      lVar13 = lVar10 + 0x18 + lVar14;
      thunk_FUN_0000482c(lVar10,lVar3,lVar14);
      *plVar2 = lVar10;
      plVar2[1] = lVar13;
      plVar2[2] = uVar9 * 0x18 + lVar10;
      if (lVar3 != 0) {
        FUN_000045d4();
      }
      *(long *)*param_1 = lVar13;
      return;
    }
  }
  else {
    FUN_00004140();
  }
  FUN_00003ff0();
/* WM - no support for modified copies */
  FUN_00003f70("vector");
  uVar11 = (*DAT_000062a8)();
  thunk_FUN_000047b4(FUN_00003750,uVar11,0);
  puVar12 = (undefined1 *)(*DAT_000062c0)();
  *puVar12 = 1;
  return;
}
