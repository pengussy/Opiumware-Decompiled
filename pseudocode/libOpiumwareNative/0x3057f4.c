/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3057f4:071ade0bc2
 */

void FUN_003057f4(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 0x434) = 1;
  lVar5 = *(long *)(param_1 + 0x2c8);
  uVar7 = NEON_scvtf(CONCAT44((int)*(undefined8 *)(lVar5 + 0x20),(int)*(undefined8 *)(lVar5 + 0x10))
                     ,4);
  uVar7 = NEON_smin(CONCAT44((int)((float)((ulong)uVar7 >> 0x20) * 1.05),(int)((float)uVar7 * 1.05))
                    ,CONCAT44((int)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                              (int)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20)),4);
  *(undefined8 *)(param_1 + 0x42c) = uVar7;
  lVar4 = *(long *)(param_1 + 0x110);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar2 = *(int *)(lRam00000000020973e0 + 4);
      lVar6 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar6 * 8 + lRam00000000020973e0) != iVar2) {
        iVar3 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar3;
        lVar6 = (long)iVar3;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar3 * 8 + lVar5);
        *piVar1 = iVar2;
        piVar1[1] = 0;
      }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      lVar6 = lVar6 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar6 + 6) = *(short *)(&UNK_00002938 + lVar6 + 6) + 1;
      *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
    }
    (*pcRam0000000002057e18)(lVar4,uRam00000000020932e8);
    *(undefined8 *)(param_1 + 0x110) = 0;
    lVar5 = *(long *)(param_1 + 0x2c8);
  }
  func_0x0031fd04(lVar5);
  lVar4 = *(long *)(param_1 + 0x1b8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar2 = *(int *)(lRam00000000020973e0 + 4);
      lVar6 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar6 * 8 + lRam00000000020973e0) != iVar2) {
        iVar3 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar3;
        lVar6 = (long)iVar3;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar3 * 8 + lVar5);
        *piVar1 = iVar2;
        piVar1[1] = 0;
      }
      lVar6 = lVar6 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar6 + 6) = *(short *)(&UNK_00002938 + lVar6 + 6) + 1;
      *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
    }
    (*pcRam0000000002057e18)(lVar4,uRam00000000020932e8);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x200);
/* proprietary - see LICENSE - do not sell */
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar2 = *(int *)(lRam00000000020973e0 + 4);
      lVar6 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar6 * 8 + lRam00000000020973e0) != iVar2) {
        iVar3 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar3;
        lVar6 = (long)iVar3;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar3 * 8 + lVar5);
        *piVar1 = iVar2;
        piVar1[1] = 0;
      }
      lVar6 = lVar6 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar6 + 6) = *(short *)(&UNK_00002938 + lVar6 + 6) + 1;
      *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
    }
    (*pcRam0000000002057e18)(lVar4,uRam00000000020932e8);
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x210);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar2 = *(int *)(lRam00000000020973e0 + 4);
      lVar6 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar6 * 8 + lRam00000000020973e0) != iVar2) {
        iVar3 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar3;
        lVar6 = (long)iVar3;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar3 * 8 + lVar5);
        *piVar1 = iVar2;
        piVar1[1] = 0;
      }
      lVar6 = lVar6 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar6 + 6) = *(short *)(&UNK_00002938 + lVar6 + 6) + 1;
      *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
    }
    (*pcRam0000000002057e18)(lVar4,uRam00000000020932e8);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  return;
}

