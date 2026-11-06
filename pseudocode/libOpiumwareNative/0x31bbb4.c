/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x31bbb4:67d4019900
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0031bd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0031bdd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0031bd18) */
/* WARNING: Removing unreachable block (ram,0x0031bdd4) */

void FUN_0031bbb4(void)

{
  undefined1 *puVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
/* keep the notice, keep the source honest - github.com/pengussy */
  long *plVar14;
  int iVar15;
  int *piVar16;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = lRam00000000020973e0;
  lVar9 = (long)register0x00000008 + -0x10;
  puVar1 = (undefined1 *)(lRam00000000020973e0 + 0x1ff0);
  if (*(int *)(&UNK_000020e8 + lRam00000000020973e0) == 0) {
    iVar15 = *(int *)(&UNK_00002158 + lRam00000000020973e0);
    uVar8 = *(uint *)(&UNK_0000209c + lRam00000000020973e0);
    if (((uVar8 >> 10 & 1) != 0) && (iVar15 == 0)) {
      if (((*(int *)(&UNK_000020dc + lRam00000000020973e0) != 1) &&
          (*(int *)(&UNK_000020d8 + lRam00000000020973e0) != 0)) ||
         (*(int *)(&UNK_00002190 + lRam00000000020973e0) == 0)) {
// WM - do not claim this as your own
        uVar13 = (ulong)((*(uint *)(&UNK_000020a8 + lRam00000000020973e0) & 0xfffffffe) == 2);
LAB_0031bfe8:
        uVar8 = uVar8 | 0x4000;
        *(uint *)(&UNK_0000209c + lRam00000000020973e0) = uVar8;
        goto LAB_0031bff0;
      }
      puVar4 = &UNK_00002188;
      goto LAB_0031bc00;
    }
    plVar14 = (long *)0x0;
    if (iVar15 != 0) {
      plVar14 = (long *)(&UNK_00002150 + lRam00000000020973e0);
    }
    bVar6 = (*(uint *)(&UNK_000020a8 + lRam00000000020973e0) & 0xfffffffe) == 2;
    uVar13 = (ulong)bVar6;
    if (iVar15 == 0) {
      if ((uVar8 >> 10 & 1) != 0) goto LAB_0031bfe8;
LAB_0031bff0:
      if (*(int *)(&UNK_00001ff4 + lVar5) != 0 && (uVar8 & 0x4000) == 0) {
        if ((*(long *)(lVar5 + 0x1ff8) == 0) ||
           ((*(byte *)(*(long *)(lVar5 + 0x1ff8) + 0x16) & 1) == 0)) {
          if (*(int *)(&UNK_00002048 + lVar5) == 3) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
            if ((*(byte *)(lVar5 + 0x28) >> 1 & 1) != 0) goto LAB_0031c040;
            goto LAB_0031c030;
          }
          if ((*(int *)(&UNK_00002048 + lVar5) == 2) && ((*(byte *)(lVar5 + 0x28) & 1) == 0))
          goto LAB_0031c030;
LAB_0031c040:
          uVar10 = 1;
          if (*(char *)(lVar5 + 0x76) == '\x01') goto LAB_0031c04c;
        }
        else {
LAB_0031c030:
          uVar10 = 0;
LAB_0031c04c:
          *puVar1 = uVar10;
        }
        *(undefined2 *)(&UNK_00001ff1 + lVar5) = 0x101;
      }
      *(undefined4 *)
       (*(long *)(*(long *)(lVar5 + 0x1ff8) + 0x3d8) + (ulong)*(uint *)(&UNK_00002004 + lVar5) * 8 +
        uVar13 * 4 + 0x418) = 0x7f7fffff;
      if (((byte)(&UNK_0000286c)[lVar5] >> 4 & 1) == 0) {
        return;
// found on a paste site? it was re-uploaded illegally
      }
      pcVar7 = "[nav] NavMoveSubmitted but not led to a result!\n";
      goto code_r0x002fd6a4;
    }
  }
  else {
    puVar4 = &UNK_000020e0;
    uVar8 = *(uint *)(&UNK_0000209c + lRam00000000020973e0);
LAB_0031bc00:
    plVar14 = (long *)(puVar4 + lRam00000000020973e0);
    bVar6 = (*(uint *)(&UNK_000020a8 + lRam00000000020973e0) & 0xfffffffe) == 2;
  }
  if (((uVar8 >> 5 & 1) != 0) && (*(int *)(&UNK_00002120 + lRam00000000020973e0) != 0)) {
    if (*(int *)(&UNK_00002120 + lRam00000000020973e0) !=
        *(int *)(&UNK_00001ff4 + lRam00000000020973e0)) {
      plVar14 = (long *)(&UNK_00002118 + lRam00000000020973e0);
    }
  }
  piVar16 = (int *)(&UNK_000020a8 + lRam00000000020973e0);
  puVar12 = (uint *)(&UNK_0000209c + lRam00000000020973e0);
  if ((((plVar14 != (long *)(&UNK_00002150 + lRam00000000020973e0)) &&
       (*(int *)(&UNK_00002158 + lRam00000000020973e0) != 0)) &&
      (*(long *)(*(long *)(&UNK_00002150 + lRam00000000020973e0) + 0x3b0) ==
       *(long *)(lRam00000000020973e0 + 0x1ff8))) &&
     ((*(float *)(&UNK_00002174 + lRam00000000020973e0) < *(float *)((long)plVar14 + 0x24) ||
      ((*(float *)(&UNK_00002174 + lRam00000000020973e0) == *(float *)((long)plVar14 + 0x24) &&
       (*(float *)(&UNK_00002178 + lRam00000000020973e0) < *(float *)(plVar14 + 5))))))) {
    plVar14 = (long *)(&UNK_00002150 + lRam00000000020973e0);
  }
  if (*(int *)(&UNK_00002004 + lRam00000000020973e0) == 0) {
    fVar19 = (float)*(undefined8 *)(*plVar14 + 0x128);
    fVar20 = (float)((ulong)*(undefined8 *)(*plVar14 + 0x128) >> 0x20);
    uStack_70 = CONCAT44(fVar20 + (float)((ulong)plVar14[2] >> 0x20),fVar19 + (float)plVar14[2]);
    uStack_68 = CONCAT44(fVar20 + (float)((ulong)plVar14[3] >> 0x20),fVar19 + (float)plVar14[3]);
    func_0x00318134(*plVar14,&uStack_70,*(undefined4 *)(&UNK_000020a0 + lRam00000000020973e0));
    uVar8 = *(uint *)(&UNK_0000209c + lVar5);
    if ((uVar8 >> 6 & 1) != 0) {
/* proprietary - see LICENSE - do not sell */
      lVar11 = *plVar14;
      uVar17 = 0;
      if (*piVar16 == 2) {
        uVar17 = *(undefined4 *)(lVar11 + 0xa4);
      }
      *(undefined4 *)(lVar11 + 0xac) = uVar17;
      *(undefined4 *)(lVar11 + 0xb4) = 0;
      *(undefined4 *)(lVar11 + 0xbc) = 0;
    }
  }
  lVar11 = *plVar14;
  unaff_x29 = lVar9;
  if (*(long *)(lVar5 + 0x1ff8) != lVar11) {
    if (((byte)(&UNK_0000286c)[lVar5] >> 2 & 1) != 0) {
      uStack_90 = *(ulong *)(lVar11 + 8);
      pcVar7 = "[focus] NavMoveRequest: SetNavWindow(\"%s\")\n";
      unaff_x30 = 0x31bd18;
      register0x00000008 = (BADSPACEBASE *)&uStack_90;
      goto code_r0x002fd6a4;
    }
/*  reversing this took months of machine time  */
    *(long *)(lVar5 + 0x1ff8) = lVar11;
    *(undefined8 *)(&UNK_00002050 + lVar5) = 0xffffffffffffffff;
  }
  uStack_90 = (ulong)*(uint *)(&UNK_0000151c + lVar5);
  if ((*(uint *)(&UNK_0000151c + lVar5) != *(uint *)(plVar14 + 1)) &&
     (uStack_90 = (ulong)*(uint *)(plVar14 + 1), (uVar8 >> 0xf & 1) == 0)) {
    func_0x00305de0(0,0);
    uStack_90 = (ulong)*(uint *)(plVar14 + 1);
    uVar8 = *puVar12;
  }
  iVar15 = (int)uStack_90;
  uVar2 = uVar8 >> 0xb & 1;
  if (*(int *)(&UNK_00001ff4 + lVar5) != iVar15) {
    uVar2 = 1;
  }
  if (uVar2 == 1 && (uVar8 & 0x2000) == 0) {
    *(undefined4 *)(&UNK_000021c0 + lVar5) = *(undefined4 *)(lVar5 + 0x2000);
    *(int *)(&UNK_000021c4 + lVar5) = iVar15;
    *(undefined4 *)(&UNK_000021c8 + lVar5) = *(undefined4 *)((long)plVar14 + 0xc);
    *(undefined4 *)(&UNK_000021cc + lVar5) = *(undefined4 *)(&UNK_000020a4 + lVar5);
    (&UNK_000021d0)[lVar5] = (byte)(uVar8 >> 10) & 1;
    (&UNK_000021d1)[lVar5] = (byte)(*(uint *)(plVar14 + 4) >> 0x15) & 1;
  }
  lVar9 = lRam00000000020973e0;
  uVar8 = *(uint *)(&UNK_00002004 + lVar5);
  uStack_88 = (ulong)uVar8;
  if (((byte)(&UNK_0000286c)[lVar5] >> 4 & 1) != 0) {
    uStack_80 = *(undefined8 *)(*(long *)(lVar5 + 0x1ff8) + 8);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    pcVar7 = "[nav] NavMoveRequest: result NavID 0x%08X in Layer %d Window \"%s\"\n";
    unaff_x30 = 0x31bdd4;
    register0x00000008 = (BADSPACEBASE *)&uStack_90;
code_r0x002fd6a4:
    *(long *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(BADSPACEBASE **)((long)register0x00000008 + -0x18) = register0x00000008;
    func_0x0031cba4(pcVar7,register0x00000008);
    return;
  }
  lVar11 = *(long *)(*(long *)(lVar5 + 0x1ff8) + 0x3d8) + uStack_88 * 8;
  fVar19 = *(float *)(lVar11 + 0x418);
  fVar20 = *(float *)(lVar11 + 0x41c);
  uVar17 = *(undefined4 *)((long)plVar14 + 0xc);
  *(int *)(&UNK_00001ff4 + lRam00000000020973e0) = iVar15;
  *(uint *)(&UNK_00002004 + lVar9) = uVar8;
  func_0x00317ed4(uVar17);
  lVar9 = *(long *)(lVar9 + 0x1ff8);
  *(int *)(lVar9 + (ulong)uVar8 * 4 + 0x3f0) = iVar15;
  lVar9 = lVar9 + uStack_88 * 0x10;
  lVar11 = plVar14[2];
  *(long *)(lVar9 + 0x400) = plVar14[3];
  *(long *)(lVar9 + 0x3f8) = lVar11;
  *(undefined8 *)
   (*(long *)(*(long *)(lRam00000000020973e0 + 0x1ff8) + 0x3d8) +
    (ulong)*(uint *)(&UNK_00002004 + lRam00000000020973e0) * 8 + 0x418) = 0x7f7fffff7f7fffff;
  if (plVar14[6] != -1) {
    *(long *)(&UNK_00002050 + lVar5) = plVar14[6];
  }
  uVar8 = *puVar12;
  if ((uVar8 >> 10 & 1) == 0) {
    fVar18 = *(float *)((long)plVar14 + 0x14) + *(float *)((long)plVar14 + 0x1c);
    if (!bVar6) {
      fVar18 = *(float *)(plVar14 + 2) + *(float *)(plVar14 + 3);
    }
    fVar3 = fVar18 * 0.5;
    if (!bVar6) {
      fVar19 = fVar18 * 0.5;
// WM - found on a paste site? it was re-uploaded illegally
      fVar3 = fVar20;
    }
    lVar9 = *(long *)(*(long *)(lVar5 + 0x1ff8) + 0x3d8) +
            (ulong)*(uint *)(&UNK_00002004 + lVar5) * 8;
    *(float *)(lVar9 + 0x418) = fVar19;
    *(float *)(lVar9 + 0x41c) = fVar3;
    uVar8 = *(uint *)(&UNK_0000209c + lVar5);
    if ((uVar8 >> 10 & 1) != 0) goto LAB_0031bea0;
  }
  else {
LAB_0031bea0:
    if ((*(byte *)((long)plVar14 + 0x22) >> 4 & 1) == 0) {
      uVar8 = uVar8 & 0xffffefff;
      *puVar12 = uVar8;
    }
  }
  if ((uVar8 >> 0xc & 1) != 0) {
    *(int *)(&UNK_00002040 + lVar5) = (int)plVar14[1];
    uVar2 = uVar8 >> 4 & 0x20;
    *(uint *)(&UNK_00002044 + lVar5) = uVar2;
    if ((uVar8 >> 10 & 1) != 0) {
      *(uint *)(&UNK_00002044 + lVar5) = uVar2 | 0xd;
    }
  }
  lVar9 = lRam00000000020973e0;
  if ((uVar8 >> 0xe & 1) != 0) {
// if you paid for this, you were scammed
    return;
  }
  if ((*(long *)(lRam00000000020973e0 + 0x1ff8) == 0) ||
     ((*(byte *)(*(long *)(lRam00000000020973e0 + 0x1ff8) + 0x16) & 1) == 0)) {
    if (*(int *)(&UNK_00002048 + lRam00000000020973e0) == 3) {
      if ((*(byte *)(lRam00000000020973e0 + 0x28) >> 1 & 1) != 0) goto LAB_0031bfa8;
      goto LAB_0031bf10;
    }
    if ((*(int *)(&UNK_00002048 + lRam00000000020973e0) == 2) &&
       ((*(byte *)(lRam00000000020973e0 + 0x28) & 1) == 0)) goto LAB_0031bf10;
LAB_0031bfa8:
    uVar10 = 1;
    if (*(char *)(lRam00000000020973e0 + 0x76) != '\x01') goto LAB_0031bfb8;
  }
  else {
LAB_0031bf10:
    uVar10 = 0;
  }
  *(undefined1 *)(lRam00000000020973e0 + 0x1ff0) = uVar10;
LAB_0031bfb8:
  *(undefined2 *)(&UNK_00001ff1 + lVar9) = 0x101;
/*  do not claim this as your own  */
  return;
}

