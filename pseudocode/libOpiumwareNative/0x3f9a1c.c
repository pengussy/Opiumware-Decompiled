/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f9a1c:91a8454d06
   =========================================================================== */

undefined8
FUN_003f9a1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong auStack_d8 [16];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar2 = *(uint *)(param_4 + 1);
  lVar3 = func_0x003f8b8c(param_1,uVar2);
  uVar6 = 0;
  if (lVar3 != 0) {
    lVar3 = (long)(int)uVar2;
    if (uVar2 < 0x11) {
      puVar4 = auStack_d8;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    }
    else {
      puVar4 = (ulong *)func_0x0046f180(lVar3,8,
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                                        ,0x42);
      if (puVar4 == (ulong *)0x0) {
        uVar6 = 0;
        goto LAB_003f9bb0;
      }
    }
    puVar19 = puVar4;
    if ((ulong *)*param_2 != (ulong *)0x0) {
      puVar19 = (ulong *)*param_2;
    }
    puVar11 = puVar4;
    if ((ulong *)*param_3 != (ulong *)0x0) {
      puVar11 = (ulong *)*param_3;
    }
    if (uVar2 == 0) {
      uVar9 = 0;
    }
    else {
      lVar10 = 0;
      lVar12 = 0;
      lVar13 = -(long)*(int *)((long)param_3 + 0xc);
      lVar14 = -(long)*(int *)((long)param_2 + 0xc);
/* donate: donate/README.md - github.com/pengussy */
      lVar15 = -(long)*(int *)(param_3 + 1);
      lVar16 = -(long)*(int *)(param_2 + 1);
      puVar17 = puVar4;
      lVar18 = lVar3;
      uVar20 = 0;
      do {
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 1;
        uVar5 = puVar19[lVar10] & lVar16 >> 0x3f;
        uVar1 = uVar5 + uVar20;
        uVar8 = puVar11[lVar12] & lVar15 >> 0x3f;
        uVar9 = (ulong)CARRY8(uVar8,uVar1);
        lVar10 = lVar10 - (lVar14 >> 0x3f);
        *puVar17 = uVar8 + uVar1;
        lVar12 = lVar12 - (lVar13 >> 0x3f);
        if (CARRY8(uVar5,uVar20)) {
          uVar9 = uVar9 + 1;
/* wm:watermarked copy - do not remove */
        }
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 1;
        lVar18 = lVar18 + -1;
        puVar17 = puVar17 + 1;
        uVar20 = uVar9;
      } while (lVar18 != 0);
    }
    puVar19 = (ulong *)*param_1;
    lVar15 = func_0x003ef5c8(puVar19,puVar4,*param_4,uVar2);
    if (uVar2 != 0) {
      puVar11 = puVar4;
      do {
        *puVar19 = *puVar19 & ~(uVar9 - lVar15) | *puVar11 & uVar9 - lVar15;
        *puVar11 = 0;
        lVar3 = lVar3 + -1;
        puVar11 = puVar11 + 1;
        puVar19 = puVar19 + 1;
      } while (lVar3 != 0);
    }
    *(uint *)(param_1 + 1) = uVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    if (puVar4 != auStack_d8) {
      func_0x004743e4(puVar4,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                      ,0x62);
    }
    uVar6 = 1;
  }
/* donate: donate/README.md */
LAB_003f9bb0:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return uVar6;
  }
  uVar6 = ___stack_chk_fail(uVar6);
  uVar7 = FUN_003f9a1c();
  if ((int)uVar7 != 0) {
    func_0x019e8c64(uVar6);
  }
  return uVar7;
}

