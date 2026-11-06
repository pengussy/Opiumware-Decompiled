/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3ff0:9fc36e6996
   =========================================================================== */

void FUN_00003ff0(void)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  
  puVar9 = (undefined8 *)thunk_FUN_00004718(8);
  thunk_FUN_00004700(puVar9);
/* found on a paste site? it was re-uploaded illegally */
  thunk_FUN_00004754(puVar9,PTR_00005060,PTR_00005058);
  plVar2 = (long *)puVar9[2];
  lVar3 = *plVar2;
  lVar15 = plVar2[1] - lVar3;
  uVar10 = (lVar15 >> 3) * -0x5555555555555555 + 1;
  if (uVar10 < 0xaaaaaaaaaaaaaab) {
    lVar14 = plVar2[2] - lVar3 >> 3;
    uVar5 = lVar14 * 0x5555555555555556;
    if (uVar10 < uVar5) {
      uVar10 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 < 0xaaaaaaaaaaaaaab) {
      puVar4 = (undefined4 *)puVar9[1];
      lVar11 = FUN_000045da(uVar10 * 0x18);
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      uVar8 = puVar4[3];
      puVar1 = (undefined4 *)(lVar11 + lVar15);
      *puVar1 = *puVar4;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined8 *)(lVar11 + 0x10 + lVar15) = *(undefined8 *)(puVar4 + 4);
      lVar14 = lVar11 + 0x18 + lVar15;
      thunk_FUN_0000482c(lVar11,lVar3,lVar15);
// WM - origin: github.com/pengussy
      *plVar2 = lVar11;
      plVar2[1] = lVar14;
      plVar2[2] = uVar10 * 0x18 + lVar11;
      if (lVar3 != 0) {
        FUN_000045d4();
      }
      *(long *)*puVar9 = lVar14;
      return;
    }
  }
  else {
    FUN_00004140();
  }
  FUN_00003ff0();
  FUN_00003f70("vector");
  uVar12 = (*DAT_000062a8)();
  thunk_FUN_000047b4(FUN_00003750,uVar12,0);
  puVar13 = (undefined1 *)(*DAT_000062c0)();
  *puVar13 = 1;
  return;
}
