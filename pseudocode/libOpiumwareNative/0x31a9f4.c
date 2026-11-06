/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x31a9f4:dfbc7d1c22
 */

/* WARNING: Removing unreachable block (ram,0x00306d44) */
/* WARNING: Removing unreachable block (ram,0x00306d50) */
/* WARNING: Removing unreachable block (ram,0x00306d5c) */
/* WARNING: Removing unreachable block (ram,0x00306de0) */
/* WARNING: Removing unreachable block (ram,0x00306df0) */
/* WARNING: Removing unreachable block (ram,0x00306df8) */
/* WARNING: Removing unreachable block (ram,0x00306e00) */
/* WARNING: Removing unreachable block (ram,0x00306e08) */
/* WARNING: Removing unreachable block (ram,0x00306e10) */
/* WARNING: Removing unreachable block (ram,0x00306de8) */
/* WARNING: Removing unreachable block (ram,0x00306d6c) */
/* WARNING: Removing unreachable block (ram,0x00306d80) */
/* WARNING: Removing unreachable block (ram,0x00306d88) */
/* WARNING: Removing unreachable block (ram,0x00306d90) */
/* WARNING: Removing unreachable block (ram,0x00306d98) */
/* WARNING: Removing unreachable block (ram,0x00306da4) */
/* WARNING: Removing unreachable block (ram,0x00306db0) */
/* WARNING: Removing unreachable block (ram,0x00306db4) */
/* WARNING: Removing unreachable block (ram,0x00306dbc) */
/* WARNING: Removing unreachable block (ram,0x00306dc4) */
/* WARNING: Removing unreachable block (ram,0x00306dd0) */
/* WARNING: Removing unreachable block (ram,0x00307130) */
/* WARNING: Removing unreachable block (ram,0x00306dd4) */
/* WARNING: Removing unreachable block (ram,0x0030713c) */
/* WARNING: Removing unreachable block (ram,0x00307154) */
/* WARNING: Removing unreachable block (ram,0x00307158) */
/* WARNING: Removing unreachable block (ram,0x00307164) */
/* WARNING: Removing unreachable block (ram,0x0030716c) */
/* WARNING: Removing unreachable block (ram,0x003071cc) */
/* WARNING: Removing unreachable block (ram,0x00307180) */
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
/* WARNING: Removing unreachable block (ram,0x0030718c) */
/* WARNING: Removing unreachable block (ram,0x00307198) */
/* WARNING: Removing unreachable block (ram,0x003071a4) */
/* WARNING: Removing unreachable block (ram,0x003071b0) */
/* WARNING: Removing unreachable block (ram,0x003071bc) */
/* WARNING: Removing unreachable block (ram,0x003071c8) */
/* WARNING: Removing unreachable block (ram,0x003071d4) */
/* WARNING: Removing unreachable block (ram,0x00307214) */
/* WARNING: Removing unreachable block (ram,0x003071e4) */
/* WARNING: Removing unreachable block (ram,0x00307234) */
/* WARNING: Removing unreachable block (ram,0x00307244) */
/* WARNING: Removing unreachable block (ram,0x00307268) */
/* WARNING: Removing unreachable block (ram,0x00307270) */
/* WARNING: Removing unreachable block (ram,0x00307278) */
/* WARNING: Removing unreachable block (ram,0x0030725c) */
/* WARNING: Removing unreachable block (ram,0x0030727c) */
/* WARNING: Removing unreachable block (ram,0x00307280) */
/* WARNING: Removing unreachable block (ram,0x00307284) */
/* WARNING: Removing unreachable block (ram,0x00307290) */
/* WARNING: Removing unreachable block (ram,0x00307294) */
/* WARNING: Removing unreachable block (ram,0x003072b0) */
/* WARNING: Removing unreachable block (ram,0x003072bc) */
/* WARNING: Removing unreachable block (ram,0x003072d0) */
/* WARNING: Removing unreachable block (ram,0x003072dc) */
/* WARNING: Removing unreachable block (ram,0x003072e8) */
/* WARNING: Removing unreachable block (ram,0x003072ec) */
/* WARNING: Removing unreachable block (ram,0x003072f4) */
/* WARNING: Removing unreachable block (ram,0x003072fc) */
/* WARNING: Removing unreachable block (ram,0x003072c4) */
/* WM - keep the notice, keep the source honest */
/* WARNING: Removing unreachable block (ram,0x003072a4) */
/* WARNING: Removing unreachable block (ram,0x00307300) */
/* WARNING: Removing unreachable block (ram,0x00307308) */
/* WARNING: Removing unreachable block (ram,0x00307314) */
/* WARNING: Removing unreachable block (ram,0x00307320) */
/* WARNING: Removing unreachable block (ram,0x00307318) */
/* WARNING: Removing unreachable block (ram,0x00307328) */
/* WARNING: Removing unreachable block (ram,0x00307338) */
/* WARNING: Removing unreachable block (ram,0x00306d74) */
/* WARNING: Removing unreachable block (ram,0x00306e24) */
/* WARNING: Removing unreachable block (ram,0x00306e2c) */

void FUN_0031a9f4(undefined8 param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  int iVar15;
  long lVar16;
  
  lVar2 = lRam00000000020973e0;
  iVar15 = (int)param_1;
  if (((((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 3 & 1) != 0) &&
      (func_0x002fd6a4("[popup] ClosePopupToLevel(%d), restore_under=%d\n"),
      ((byte)(&UNK_0000286c)[lVar2] >> 3 & 1) != 0)) &&
     (iVar4 = *(int *)(&UNK_00001fb0 + lVar2), iVar15 < iVar4)) {
    lVar16 = (long)iVar15;
    do {
      if (((byte)(&UNK_0000286c)[lVar2] >> 3 & 1) != 0) {
        func_0x002fd6a4("[popup] - Closing PopupID 0x%08X Window \"%s\"\n");
        iVar4 = *(int *)(&UNK_00001fb0 + lVar2);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar4);
// WM - proprietary - see LICENSE - do not sell
  }
  lVar7 = *(long *)(&UNK_00001fb8 + lVar2) + (long)iVar15 * 0x38;
  lVar16 = *(long *)(lVar7 + 8);
  lVar7 = *(long *)(lVar7 + 0x10);
  func_0x0030ea00(&UNK_00001fb0 + lVar2,param_1);
  lVar2 = lRam00000000020973e0;
  if ((param_2 == 0) || (lVar16 == 0)) {
    return;
  }
  if ((*(uint *)(lVar16 + 0x14) >> 0x1c & 1) != 0) {
    lVar7 = *(long *)(lVar16 + 0x3b0);
  }
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if (*(char *)(lVar7 + 0xcd) != '\x01') {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    if ((*(uint *)(lVar16 + 0x14) >> 0x18 & 1) == 0) {
      uVar5 = (int)*(short *)(lVar16 + 0xe2) - 1;
    }
    else {
      do {
        lVar16 = *(long *)(lVar16 + 0x3b0);
      } while ((*(byte *)(lVar16 + 0x17) & 1) != 0);
      uVar5 = (uint)*(short *)(lVar16 + 0xe2);
    }
    if (-1 < (int)uVar5) {
      lVar16 = (ulong)uVar5 + 1;
      plVar10 = (long *)(*(long *)(&UNK_00001460 + lRam00000000020973e0) + (ulong)uVar5 * 8);
      do {
        lVar7 = *plVar10;
        if (((lVar7 != 0) && (*(char *)(lVar7 + 0xcd) == '\x01')) &&
           (((*(uint *)(lVar7 + 0x14) ^ 0xffffffff) & 0x10200) != 0)) goto LAB_0031abc4;
        lVar16 = lVar16 + -1;
        plVar10 = plVar10 + -1;
      } while (0 < lVar16);
    }
    lVar7 = 0;
  }
LAB_0031abc4:
  pbVar1 = &UNK_0000152a + lRam00000000020973e0;
  if (*(long *)(lRam00000000020973e0 + 0x1ff8) == lVar7) goto LAB_00306fc8;
  if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 2 & 1) != 0) {
    func_0x002fd6a4("[focus] SetNavWindow(\"%s\")\n");
  }
  lVar16 = lRam00000000020973e0;
  *(long *)(lVar2 + 0x1ff8) = lVar7;
  *(undefined8 *)(&UNK_00002050 + lVar2) = 0xffffffffffffffff;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  *(undefined2 *)(&UNK_00002098 + lVar2) = 0;
  (&UNK_0000205a)[lVar2] = 0;
  if (((&UNK_00002099)[lVar16] & 1) == 0) {
    (&UNK_00002059)[lVar16] = (&UNK_0000205a)[lVar16] & 1;
    if (lVar7 != 0) goto LAB_00306eac;
LAB_00306ee0:
    uVar3 = 0;
    *(undefined4 *)(&UNK_00001ff4 + lVar2) = 0;
    *(undefined4 *)(&UNK_00002004 + lVar2) = 0;
  }
  else {
    (&UNK_00002059)[lVar16] = 1;
    if (lVar7 == 0) goto LAB_00306ee0;
LAB_00306eac:
    if ((&UNK_00001ff1)[lVar2] == '\x01') {
      (&UNK_00001ff2)[lVar2] = 1;
    }
    *(undefined4 *)(&UNK_00001ff4 + lVar2) = *(undefined4 *)(lVar7 + 0x3f0);
    *(undefined4 *)(&UNK_00002004 + lVar2) = 0;
    uVar3 = *(undefined4 *)(lVar7 + 0x428);
  }
  func_0x00317ed4(uVar3);
  (&UNK_00001ff3)[lVar2] = 0;
  *(undefined8 *)(&UNK_00002050 + lVar2) = 0xffffffffffffffff;
  uVar5 = *(uint *)(&UNK_00001fb0 + lRam00000000020973e0);
  if (uVar5 != 0) {
    uVar14 = 0;
    if ((lVar7 == 0) || ((int)uVar5 < 1)) {
LAB_00306f84:
      if ((int)uVar14 < (int)uVar5) {
        if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 3 & 1) != 0) {
          func_0x002fd6a4("[popup] ClosePopupsOverWindow(\"%s\")\n");
        }
/* keep the notice, keep the source honest */
        FUN_0031a9f4(uVar14,0);
      }
    }
    else {
      uVar14 = 0;
      do {
        if (*(long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + uVar14 * 0x38 + 8) != 0) {
          uVar9 = uVar14;
          do {
            lVar16 = *(long *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) + uVar9 * 0x38 + 8);
            if (lVar16 != 0) {
              if (*(long *)(lVar7 + 0x3c0) == lVar16) break;
              lVar13 = lVar7;
              do {
                if (lVar13 == lVar16) goto LAB_00306f28;
                lVar13 = *(long *)(lVar13 + 0x3b8);
              } while (lVar13 != 0);
            }
            uVar9 = uVar9 + 1;
            if (uVar9 == uVar5) goto LAB_00306f84;
          } while( true );
        }
LAB_00306f28:
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar5);
    }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  }
LAB_00306fc8:
  if (lVar7 == 0) {
    lVar16 = 0;
    iVar15 = *(int *)(&UNK_0000151c + lVar2);
  }
  else {
    lVar16 = *(long *)(lVar7 + 0x3c0);
    iVar15 = *(int *)(&UNK_0000151c + lVar2);
  }
  if ((((iVar15 != 0) && (*(long *)(&UNK_00001540 + lVar2) != 0)) &&
      (*(long *)(*(long *)(&UNK_00001540 + lVar2) + 0x3c0) != lVar16)) && ((*pbVar1 & 1) == 0)) {
    func_0x00305de0(0,0);
  }
  lVar2 = lRam00000000020973e0;
  if (lVar7 != 0) {
    lVar13 = *(long *)(&UNK_00001460 + lRam00000000020973e0);
    if (*(long *)(lVar13 + (long)*(int *)(&UNK_00001458 + lRam00000000020973e0) * 8 + -8) != lVar16)
    {
      lVar6 = (long)*(int *)(&UNK_00001458 + lRam00000000020973e0) + -1;
      lVar8 = lVar6;
      if ((int)*(short *)(lVar16 + 0xe2) < (int)lVar6) {
        lVar11 = (long)(int)*(short *)(lVar16 + 0xe2);
        lVar8 = (long)(int)lVar6;
        lVar12 = lVar8 - lVar11;
/* wm:no support for modified copies */
        plVar10 = (long *)(lVar13 + lVar11 * 8);
        do {
          lVar11 = plVar10[1];
          *plVar10 = lVar11;
          *(short *)(lVar11 + 0xe2) = *(short *)(lVar11 + 0xe2) + -1;
          lVar12 = lVar12 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar12 != 0);
      }
      *(long *)(lVar13 + lVar8 * 8) = lVar16;
      *(short *)(lVar16 + 0xe2) = (short)lVar6;
    }
    if (((*(uint *)(lVar16 + 0x14) | *(uint *)(lVar7 + 0x14)) >> 0xd & 1) == 0) {
      lVar7 = *(long *)(&UNK_00001450 + lVar2);
      iVar15 = *(int *)(&UNK_00001448 + lVar2);
      lVar13 = *(long *)(lVar7 + (long)iVar15 * 8 + -8);
      if (((lVar13 != lVar16) && (1 < iVar15)) && (*(long *)(lVar13 + 0x3c0) != lVar16)) {
        uVar14 = (ulong)(iVar15 - 1);
        uVar9 = 1;
        do {
          uVar5 = (int)uVar14 - 1;
          uVar14 = (ulong)uVar5;
          if (*(long *)(lVar7 + uVar14 * 8) == lVar16) {
            lVar7 = lVar7 + uVar14 * 8;
            _memmove(lVar7,lVar7 + 8,-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3);
            *(long *)(*(long *)(&UNK_00001450 + lVar2) + (long)*(int *)(&UNK_00001448 + lVar2) * 8 +
                     -8) = lVar16;
            return;
          }
          uVar9 = (ulong)((int)uVar9 + 1);
        } while (0 < (int)uVar5);
      }
    }
  }
  return;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
}

