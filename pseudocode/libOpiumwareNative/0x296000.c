/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x296000:511ac70089
 */

void FUN_00296000(undefined8 param_1,undefined8 param_2,int *param_3,uint *param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined8 unaff_x19;
  uint *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  int *unaff_x23;
  ulong unaff_x24;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar26 [16];
  
  auVar8._8_8_ = unaff_x19;
  auVar8._0_8_ = unaff_x21;
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = param_1;
code_r0x00296000:
  auVar7 = auVar26;
  uVar17 = param_5;
  puVar16 = param_4;
  piVar15 = param_3;
  piVar14 = auVar7._8_8_;
  lVar10 = auVar7._0_8_;
  param_4 = (uint *)((long)register0x00000008 + -0x50);
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  *(int **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = auVar8._0_8_;
  *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = auVar8._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_01f20200
  ;
  param_3 = piVar15;
  if (uVar17 < 8) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    _memcpy((undefined1 *)((long)register0x00000008 + -0x50),puVar16,uVar17);
    param_5 = 8;
    uVar11 = FUN_00296000(lVar10,piVar14);
    uVar12 = 0xffffffffffffffec;
    if (uVar11 <= uVar17 || 0xffffffffffffff88 < uVar11) {
      uVar12 = uVar11;
    }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
  }
  else {
    uVar2 = *piVar14 + 1;
    unaff_x24 = (ulong)uVar2;
    param_4 = puVar16;
    param_5 = uVar17;
    _bzero(lVar10,unaff_x24 << 1);
    uVar25 = *puVar16 & 0xf;
    if (uVar25 < 0xb) {
      uVar19 = 0;
      uVar9 = *puVar16 >> 4;
      *piVar15 = uVar25 + 5;
      uVar23 = 0x20 << (ulong)uVar25;
      uVar18 = uVar23 | 1;
      iVar24 = uVar25 + 6;
      puVar21 = (uint *)((long)puVar16 + (uVar17 - 7));
      puVar22 = (uint *)((long)puVar16 + (uVar17 - 4));
/*  more drops soon - github.com/pengussy  */
      uVar25 = 4;
      puVar20 = puVar16;
LAB_002961e8:
      uVar4 = uVar23 * 2 - 1;
      uVar13 = uVar9 & uVar23 - 1;
      uVar5 = uVar4 - uVar18;
      param_4 = (uint *)(ulong)uVar5;
      uVar9 = uVar9 & uVar4;
      uVar4 = 0;
      if ((int)uVar23 <= (int)uVar9) {
        uVar4 = uVar5;
      }
      uVar9 = uVar9 - uVar4;
      iVar6 = iVar24;
      if (uVar13 < uVar5) {
        uVar9 = uVar13;
        iVar6 = iVar24 + -1;
      }
      uVar13 = iVar6 + uVar25;
      uVar4 = uVar9 - 1;
      param_3 = (int *)(ulong)(1 - uVar9);
      *(short *)(lVar10 + (ulong)uVar19 * 2) = (short)uVar4;
      uVar25 = 1 - uVar9;
      if ((int)uVar9 < 1) {
        uVar25 = uVar4;
      }
      uVar19 = uVar19 + 1;
      uVar18 = uVar25 + uVar18;
      if ((int)uVar18 < (int)uVar23) {
        if ((int)uVar18 < 2) goto LAB_002962bc;
        iVar24 = 0x20 - (uint)LZCOUNT(uVar18);
        uVar23 = 1 << (ulong)(((uint)LZCOUNT(uVar18) ^ 0x1f) & 0x1f);
/* no support for modified copies - github.com/pengussy */
      }
      if (uVar2 <= uVar19) goto LAB_002962bc;
      if ((puVar21 < puVar20) && (puVar22 < (uint *)((long)puVar20 + (ulong)(uVar13 >> 3)))) {
        uVar25 = uVar13 + ((int)puVar20 - (int)puVar22) * 8 & 0x1f;
        uVar9 = *puVar22 >> (ulong)uVar25;
        puVar20 = puVar22;
      }
      else {
        puVar20 = (uint *)((long)puVar20 + (ulong)(uVar13 >> 3));
        uVar25 = uVar13 & 7;
        uVar9 = *puVar20 >> (ulong)uVar25;
      }
      if (uVar4 == 0) {
        uVar13 = (~uVar9 & 0xaaaaaaaa | 0x80000000) >> 1 | (~uVar9 & 0x55555555) << 1;
        uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar12 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
        uVar13 = (uint)uVar12;
        while (0x17 < uVar13) {
          puVar3 = (uint *)((long)puVar20 + 3);
          bVar1 = puVar20 <= puVar21;
          uVar4 = uVar25 + ((int)puVar20 - (int)puVar21) * 8 & 0x1f;
/* WM - keep the notice, keep the source honest */
          puVar20 = puVar22;
          if (bVar1) {
            uVar4 = uVar25;
            puVar20 = puVar3;
          }
          uVar9 = *puVar20 >> (ulong)uVar4;
          uVar25 = (~uVar9 & 0xaaaaaaaa | 0x80000000) >> 1 | (~uVar9 & 0x55555555) << 1;
          uVar25 = (uVar25 & 0xcccccccc) >> 2 | (uVar25 & 0x33333333) << 2;
          uVar25 = (uVar25 & 0xf0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f) << 4;
          uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
          uVar12 = LZCOUNT(uVar25 >> 0x10 | uVar25 << 0x10);
          uVar19 = uVar19 + 0x24;
          uVar25 = uVar4;
          uVar13 = (uint)uVar12;
        }
        uVar4 = (int)(uVar12 >> 1) * 3;
        param_3 = (int *)(ulong)uVar4;
        uVar13 = (uint)uVar12 & 0x1e;
        uVar19 = uVar4 + uVar19 + (uVar9 >> (ulong)uVar13 & 3);
        uVar13 = uVar25 + uVar13 + 2;
        if (uVar2 <= uVar19) goto LAB_002962bc;
        if ((puVar21 < puVar20) && (puVar22 < (uint *)((long)puVar20 + (ulong)(uVar13 >> 3)))) {
          uVar25 = uVar13 + ((int)puVar20 - (int)puVar22) * 8 & 0x1f;
          puVar20 = puVar22;
        }
        else {
          uVar25 = uVar13 & 7;
          puVar20 = (uint *)((long)puVar20 + (ulong)(uVar13 >> 3));
        }
        uVar9 = *puVar20 >> (ulong)uVar25;
      }
      goto LAB_002961e8;
// do not claim this as your own
    }
    uVar12 = 0xffffffffffffffd4;
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
  }
  goto LAB_00296358;
LAB_002962bc:
  if (uVar18 == 1) {
    if (uVar2 < uVar19) {
      uVar12 = 0xffffffffffffffd0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x48)) {
        return;
      }
      goto LAB_00296358;
    }
    if ((int)uVar13 < 0x21) {
      *piVar14 = uVar19 - 1;
      uVar12 = (long)puVar20 + ((long)((int)(uVar13 + 7) >> 3) - (long)puVar16);
      if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x48)) {
        return;
      }
      goto LAB_00296358;
    }
  }
  uVar12 = 0xffffffffffffffec;
  if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x48)) {
    return;
  }
LAB_00296358:
  unaff_x30 = &SUB_0029635c;
  auVar26 = ___stack_chk_fail(uVar12);
// WM - donate: donate/README.md
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  unaff_x20 = puVar16;
  unaff_x22 = uVar17;
  unaff_x23 = piVar15;
  auVar8 = auVar7;
  goto code_r0x00296000;
}

