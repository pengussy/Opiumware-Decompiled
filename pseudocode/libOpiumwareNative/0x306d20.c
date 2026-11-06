/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x306d20:1a83aa4e9e
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00306fc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0031aad8) */
/* WARNING: Removing unreachable block (ram,0x0031aadc) */
/* WARNING: Removing unreachable block (ram,0x0031aae4) */
/* WARNING: Removing unreachable block (ram,0x0031aae8) */
/* WARNING: Removing unreachable block (ram,0x0031ab28) */
/* WARNING: Removing unreachable block (ram,0x0031aaec) */
/* WARNING: Removing unreachable block (ram,0x0031ab3c) */
/* WARNING: Removing unreachable block (ram,0x0031ab54) */
/* WARNING: Removing unreachable block (ram,0x0031ab60) */
/* WARNING: Removing unreachable block (ram,0x0031ab40) */
/* WARNING: Removing unreachable block (ram,0x0031ab70) */
/* WARNING: Removing unreachable block (ram,0x0031ab98) */
/* WARNING: Removing unreachable block (ram,0x0031aba0) */
/* WARNING: Removing unreachable block (ram,0x0031abac) */
/* WARNING: Removing unreachable block (ram,0x0031abb8) */
/* WARNING: Removing unreachable block (ram,0x0031ab8c) */
/* WARNING: Removing unreachable block (ram,0x0031ab50) */
/* WARNING: Removing unreachable block (ram,0x0031abbc) */
/* WARNING: Removing unreachable block (ram,0x0031abc0) */
/* WARNING: Removing unreachable block (ram,0x0031aaf8) */
/* WARNING: Removing unreachable block (ram,0x0031abc4) */

void FUN_00306d20(long param_1,uint param_2)

{
  char **ppcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
/* WM - chat: discord.gg/sdkhDjTex */
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x19;
  long lVar15;
  ulong uVar16;
  undefined8 unaff_x20;
  undefined8 uVar17;
  long unaff_x21;
  long unaff_x22;
  long lVar18;
  ulong uVar19;
  byte *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  undefined8 unaff_x30;
  char *pcStack_50;
  undefined8 uStack_48;
  
  lVar15 = lRam00000000020973e0;
  ppcVar1 = &pcStack_50;
  lVar12 = (long)register0x00000008 + -0x10;
  uVar17 = 0x2097000;
  if ((((param_2 >> 1 & 1) != 0) && (*(long *)(lRam00000000020973e0 + 0x1ff8) != param_1)) &&
// watermarked copy - do not remove
     (0 < (int)*(uint *)(&UNK_00001fb0 + lRam00000000020973e0))) {
    lVar4 = *(long *)(&UNK_00001fb8 + lRam00000000020973e0);
    lVar9 = (ulong)*(uint *)(&UNK_00001fb0 + lRam00000000020973e0) * 0x38;
    if (param_1 == 0) {
      plVar5 = (long *)(lVar4 + 8);
      do {
        lVar18 = *plVar5;
        if (((lVar18 != 0) && ((*(byte *)(lVar18 + 0x17) >> 3 & 1) != 0)) &&
           (((*(byte *)(lVar18 + 0xcc) & 1) != 0 || ((*(byte *)(lVar18 + 0xcd) & 1) != 0))))
        goto LAB_00306dc4;
        lVar9 = lVar9 + -0x38;
        plVar5 = plVar5 + 7;
      } while (lVar9 != 0);
    }
    else {
      lVar9 = lVar4 + lVar9;
      do {
        lVar18 = *(long *)(lVar4 + 8);
        if ((((lVar18 != 0) && ((*(byte *)(lVar18 + 0x17) >> 3 & 1) != 0)) &&
            (((*(byte *)(lVar18 + 0xcc) & 1) != 0 || (*(char *)(lVar18 + 0xcd) == '\x01')))) &&
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
           (*(long *)(param_1 + 0x3c0) != lVar18)) {
          lVar11 = param_1;
          while (lVar11 != lVar18) {
            lVar11 = *(long *)(lVar11 + 0x3b8);
            if (lVar11 == 0) goto LAB_00306dc4;
          }
        }
        lVar4 = lVar4 + 0x38;
      } while (lVar4 != lVar9);
    }
  }
  unaff_x23 = &UNK_0000152a + lRam00000000020973e0;
  if ((((param_1 == 0) || ((param_2 & 1) == 0)) ||
      (unaff_x22 = *(long *)(param_1 + 1000), unaff_x22 == 0)) ||
     ((*(byte *)(unaff_x22 + 0xcd) & 1) == 0)) {
    unaff_x22 = param_1;
  }
  if (*(long *)(lRam00000000020973e0 + 0x1ff8) == unaff_x22) goto LAB_00306fc8;
  if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 2 & 1) != 0) {
// WM - proprietary - see LICENSE - do not sell
    if (unaff_x22 == 0) {
      pcStack_50 = "<NULL>";
    }
    else {
      pcStack_50 = *(char **)(unaff_x22 + 8);
    }
    func_0x002fd6a4("[focus] SetNavWindow(\"%s\")\n");
  }
  lVar4 = lRam00000000020973e0;
  *(long *)(lVar15 + 0x1ff8) = unaff_x22;
  *(undefined8 *)(&UNK_00002050 + lVar15) = 0xffffffffffffffff;
  *(undefined2 *)(&UNK_00002098 + lVar15) = 0;
  (&UNK_0000205a)[lVar15] = 0;
  if (((&UNK_00002099)[lVar4] & 1) == 0) {
    (&UNK_00002059)[lVar4] = (&UNK_0000205a)[lVar4] & 1;
    if (unaff_x22 == 0) goto LAB_00306ee0;
LAB_00306eac:
    if ((&UNK_00001ff1)[lVar15] == '\x01') {
      (&UNK_00001ff2)[lVar15] = 1;
    }
    *(undefined4 *)(&UNK_00001ff4 + lVar15) = *(undefined4 *)(unaff_x22 + 0x3f0);
    *(undefined4 *)(&UNK_00002004 + lVar15) = 0;
    uVar2 = *(undefined4 *)(unaff_x22 + 0x428);
  }
  else {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    (&UNK_00002059)[lVar4] = 1;
    if (unaff_x22 != 0) goto LAB_00306eac;
LAB_00306ee0:
    uVar2 = 0;
    *(undefined4 *)(&UNK_00001ff4 + lVar15) = 0;
    *(undefined4 *)(&UNK_00002004 + lVar15) = 0;
  }
  func_0x00317ed4(uVar2);
  (&UNK_00001ff3)[lVar15] = 0;
  *(undefined8 *)(&UNK_00002050 + lVar15) = 0xffffffffffffffff;
  uVar7 = *(uint *)(&UNK_00001fb0 + lRam00000000020973e0);
  if (uVar7 != 0) {
    uVar16 = 0;
    if ((unaff_x22 == 0) || ((int)uVar7 < 1)) {
LAB_00306f84:
      if ((int)uVar16 < (int)uVar7) {
        if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 3 & 1) != 0) {
          if (unaff_x22 == 0) {
            pcStack_50 = "<NULL>";
          }
          else {
            pcStack_50 = *(char **)(unaff_x22 + 8);
          }
          func_0x002fd6a4("[popup] ClosePopupsOverWindow(\"%s\")\n");
        }
        unaff_x30 = 0x306fc8;
        unaff_x19 = uVar16;
code_r0x0031a9f4:
        lVar4 = lRam00000000020973e0;
        *(undefined8 *)((long)ppcVar1 + -0x50) = unaff_x26;
        *(undefined8 *)((long)ppcVar1 + -0x48) = unaff_x25;
        *(undefined8 *)((long)ppcVar1 + -0x40) = unaff_x24;
        *(byte **)((long)ppcVar1 + -0x38) = unaff_x23;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        *(long *)((long)ppcVar1 + -0x30) = unaff_x22;
        *(long *)((long)ppcVar1 + -0x28) = lVar15;
        *(undefined8 *)((long)ppcVar1 + -0x20) = uVar17;
        *(ulong *)((long)ppcVar1 + -0x18) = unaff_x19;
        *(long *)((long)ppcVar1 + -0x10) = lVar12;
        *(undefined8 *)((long)ppcVar1 + -8) = unaff_x30;
        iVar10 = (int)uVar16;
        if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 3 & 1) != 0) {
          *(ulong *)((long)ppcVar1 + -0x60) = uVar16;
          *(undefined8 *)((long)ppcVar1 + -0x58) = 0;
          func_0x002fd6a4(&UNK_01c2eb00);
          if ((((byte)(&UNK_0000286c)[lVar4] >> 3 & 1) != 0) &&
             (iVar3 = *(int *)(&UNK_00001fb0 + lVar4), iVar10 < iVar3)) {
            lVar12 = (long)iVar10;
            lVar15 = (-(uVar16 >> 0x1f & 1) & 0xffffffc000000000 | (uVar16 & 0xffffffff) << 6) +
                     (long)iVar10 * -8;
// WM - chat: discord.gg/sdkhDjTex
            do {
              if (((byte)(&UNK_0000286c)[lVar4] >> 3 & 1) != 0) {
                lVar9 = *(long *)((uint *)(*(long *)(&UNK_00001fb8 + lVar4) + lVar15) + 2);
                uVar17 = 0;
                if (lVar9 != 0) {
                  uVar17 = *(undefined8 *)(lVar9 + 8);
                }
                *(ulong *)((long)ppcVar1 + -0x60) =
                     (ulong)*(uint *)(*(long *)(&UNK_00001fb8 + lVar4) + lVar15);
                *(undefined8 *)((long)ppcVar1 + -0x58) = uVar17;
                func_0x002fd6a4(&UNK_01c2eb31);
                iVar3 = *(int *)(&UNK_00001fb0 + lVar4);
              }
              lVar12 = lVar12 + 1;
              lVar15 = lVar15 + 0x38;
            } while (lVar12 < iVar3);
          }
        }
        func_0x0030ea00(&UNK_00001fb0 + lVar4,uVar16);
        return;
      }
    }
    else {
      uVar16 = 0;
      do {
// WM - watermarked copy - do not remove
        if (*(long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + uVar16 * 0x38 + 8) != 0) {
          uVar19 = uVar16;
          do {
            lVar4 = *(long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + uVar19 * 0x38 + 8);
            if (lVar4 != 0) {
              if (*(long *)(unaff_x22 + 0x3c0) == lVar4) break;
              lVar9 = unaff_x22;
              do {
                if (lVar9 == lVar4) goto LAB_00306f28;
                lVar9 = *(long *)(lVar9 + 0x3b8);
              } while (lVar9 != 0);
            }
            uVar19 = uVar19 + 1;
            if (uVar19 == uVar7) goto LAB_00306f84;
          } while( true );
        }
LAB_00306f28:
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar7);
    }
  }
LAB_00306fc8:
  if (unaff_x22 == 0) {
    lVar12 = 0;
    iVar10 = *(int *)(&UNK_0000151c + lVar15);
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x3c0);
    iVar10 = *(int *)(&UNK_0000151c + lVar15);
  }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  if ((((iVar10 != 0) && (*(long *)(&UNK_00001540 + lVar15) != 0)) &&
      (*(long *)(*(long *)(&UNK_00001540 + lVar15) + 0x3c0) != lVar12)) && ((*unaff_x23 & 1) == 0))
  {
    func_0x00305de0(0,0);
  }
  lVar15 = lRam00000000020973e0;
  if (unaff_x22 != 0) {
    lVar4 = *(long *)(&UNK_00001460 + lRam00000000020973e0);
    if (*(long *)(lVar4 + (long)*(int *)(&UNK_00001458 + lRam00000000020973e0) * 8 + -8) != lVar12)
    {
      lVar18 = (long)*(int *)(&UNK_00001458 + lRam00000000020973e0) + -1;
      lVar9 = lVar18;
      if ((int)*(short *)(lVar12 + 0xe2) < (int)lVar18) {
        lVar13 = (long)(int)*(short *)(lVar12 + 0xe2);
        lVar9 = (long)(int)lVar18;
        lVar11 = lVar9 - lVar13;
        plVar5 = (long *)(lVar4 + lVar13 * 8);
        do {
          lVar13 = plVar5[1];
          *plVar5 = lVar13;
          *(short *)(lVar13 + 0xe2) = *(short *)(lVar13 + 0xe2) + -1;
          lVar11 = lVar11 + -1;
          plVar5 = plVar5 + 1;
        } while (lVar11 != 0);
      }
// thanks for reading - discord.gg/sdkhDjTex
      *(long *)(lVar4 + lVar9 * 8) = lVar12;
      *(short *)(lVar12 + 0xe2) = (short)lVar18;
    }
    if (((*(uint *)(lVar12 + 0x14) | *(uint *)(unaff_x22 + 0x14)) >> 0xd & 1) == 0) {
      lVar4 = *(long *)(&UNK_00001450 + lVar15);
      iVar10 = *(int *)(&UNK_00001448 + lVar15);
      lVar9 = *(long *)(lVar4 + (long)iVar10 * 8 + -8);
      if (((lVar9 != lVar12) && (1 < iVar10)) && (*(long *)(lVar9 + 0x3c0) != lVar12)) {
        uVar19 = (ulong)(iVar10 - 1);
        uVar16 = 1;
        do {
          uVar7 = (int)uVar19 - 1;
          uVar19 = (ulong)uVar7;
          if (*(long *)(lVar4 + uVar19 * 8) == lVar12) {
            lVar4 = lVar4 + uVar19 * 8;
            _memmove(lVar4,lVar4 + 8,-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3);
            *(long *)(*(long *)(&UNK_00001450 + lVar15) + (long)*(int *)(&UNK_00001448 + lVar15) * 8
                     + -8) = lVar12;
            return;
          }
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (0 < (int)uVar7);
      }
    }
  }
  return;
LAB_00306dc4:
  if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 2 & 1) != 0) {
    if (param_1 == 0) {
      pcStack_50 = "<NULL>";
    }
    else {
      pcStack_50 = *(char **)(param_1 + 8);
    }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uStack_48 = *(undefined8 *)(lVar18 + 8);
    func_0x002fd6a4("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n");
  }
  lVar12 = lRam00000000020973e0;
  if (((param_1 != 0) && (lVar15 = *(long *)(param_1 + 0x3c0), param_1 == lVar15)) &&
     ((*(byte *)(param_1 + 0x15) >> 5 & 1) == 0)) {
    plVar6 = *(long **)(&UNK_00001450 + lRam00000000020973e0);
    plVar5 = plVar6;
    if (*(int *)(&UNK_00001448 + lRam00000000020973e0) < 1) {
      uVar7 = 0;
    }
    else {
      plVar8 = plVar6;
      do {
        if (*plVar8 == param_1) break;
        plVar8 = plVar8 + 1;
      } while (plVar8 < plVar6 + *(int *)(&UNK_00001448 + lRam00000000020973e0));
      uVar7 = (uint)((ulong)((long)plVar8 - (long)plVar6) >> 3);
      do {
        if (*plVar5 == *(long *)(lVar18 + 0x3c0)) break;
        plVar5 = plVar5 + 1;
      } while (plVar5 < plVar6 + *(int *)(&UNK_00001448 + lRam00000000020973e0));
    }
    uVar19 = (long)plVar5 - (long)plVar6;
    iVar10 = (int)(uVar19 >> 3);
    if ((int)uVar7 < iVar10) {
      _memmove(plVar6 + (int)uVar7,plVar6 + (int)uVar7 + 1,
               -(ulong)(iVar10 + ~uVar7 >> 0x1f) & 0xfffffff800000000 |
               (ulong)(iVar10 + ~uVar7) << 3);
      *(long *)(*(long *)(&UNK_00001450 + lVar12) +
               ((long)(uVar19 * 0x20000000 + -0x100000000) >> 0x20) * 8) = lVar15;
    }
    else {
      lVar4 = (long)(uVar19 * 0x20000000) >> 0x20;
      _memmove(plVar6 + lVar4 + 1,plVar6 + lVar4,(ulong)(uVar7 - iVar10) << 3);
// chat: discord.gg/sdkhDjTex
      *(long *)(*(long *)(&UNK_00001450 + lVar12) + lVar4 * 8) = lVar15;
    }
  }
  uVar7 = *(uint *)(&UNK_00001fb0 + lRam00000000020973e0);
  uVar19 = (ulong)uVar7;
  if (0 < (int)uVar7) {
    uVar16 = uVar19 + 1;
    plVar5 = (long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + (ulong)uVar7 * 0x38 + -0x30)
    ;
    do {
      lVar12 = *plVar5;
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x17) >> 3 & 1) != 0)) goto LAB_00307280;
      uVar16 = uVar16 - 1;
      plVar5 = plVar5 + -7;
    } while (1 < uVar16);
  }
  lVar12 = 0;
LAB_00307280:
  if (uVar7 == 0) {
    return;
  }
  uVar16 = 0;
  if ((0 < (int)uVar7) && (lVar12 != 0)) {
    uVar16 = 0;
    while (*(long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + uVar16 * 0x38 + 8) == 0) {
LAB_003072a4:
      uVar16 = uVar16 + 1;
      if (uVar16 == uVar19) {
        return;
      }
    }
    uVar14 = uVar16;
    do {
// WM - keep the notice, keep the source honest
      lVar15 = *(long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + uVar14 * 0x38 + 8);
      if (lVar15 != 0) {
        if (*(long *)(lVar12 + 0x3c0) == lVar15) goto LAB_003072a4;
        lVar4 = lVar12;
        do {
          if (lVar4 == lVar15) goto LAB_003072a4;
          lVar4 = *(long *)(lVar4 + 0x3b8);
        } while (lVar4 != 0);
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar19) break;
    } while( true );
  }
  if ((int)uVar7 <= (int)uVar16) {
    return;
  }
  if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 3 & 1) != 0) {
    if (lVar12 == 0) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      pcStack_50 = "<NULL>";
    }
    else {
      pcStack_50 = *(char **)(lVar12 + 8);
    }
    func_0x002fd6a4("[popup] ClosePopupsOverWindow(\"%s\")\n");
  }
  ppcVar1 = (char **)register0x00000008;
  uVar17 = unaff_x20;
  lVar15 = unaff_x21;
  lVar12 = unaff_x29;
  goto code_r0x0031a9f4;
}

