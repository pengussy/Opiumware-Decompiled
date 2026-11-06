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
 *  file-id: 0x305ad4:fb82c97724
 *  --------------------------------------------------------------------------*/

void FUN_00305ad4(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *(undefined1 *)(param_1 + 0x434) = 0;
  lVar9 = *(long *)(param_1 + 0x2c8);
  iVar2 = *(int *)(param_1 + 0x42c);
  if (*(int *)(lVar9 + 0x14) < iVar2) {
    uVar6 = (*pcRam0000000002057e10)((long)iVar2 << 1,uRam00000000020932e8);
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar3 = *(int *)(lRam00000000020973e0 + 4);
      lVar7 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar7 * 8 + lRam00000000020973e0) != iVar3) {
        iVar4 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar4;
        lVar7 = (long)iVar4;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar4 * 8 + lVar5);
        *piVar1 = iVar3;
        piVar1[1] = 0;
      }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      lVar7 = lVar7 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar7 + 4) = *(short *)(&UNK_00002938 + lVar7 + 4) + 1;
      *(int *)(&UNK_0000292c + lVar5) = *(int *)(&UNK_0000292c + lVar5) + 1;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
      _memcpy(uVar6,*(long *)(lVar9 + 0x18),(long)*(int *)(lVar9 + 0x10) << 1);
      lVar5 = lRam00000000020973e0;
      lVar7 = *(long *)(lVar9 + 0x18);
      if ((lVar7 != 0) && (lRam00000000020973e0 != 0)) {
        iVar3 = *(int *)(lRam00000000020973e0 + 4);
        lVar8 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
        if (*(int *)(&UNK_00002938 + lVar8 * 8 + lRam00000000020973e0) != iVar3) {
          iVar4 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
          *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar4;
          lVar8 = (long)iVar4;
          piVar1 = (int *)(&UNK_00002938 + (long)iVar4 * 8 + lVar5);
          *piVar1 = iVar3;
          piVar1[1] = 0;
        }
        lVar8 = lVar8 * 8 + lVar5;
        *(short *)(&UNK_00002938 + lVar8 + 6) = *(short *)(&UNK_00002938 + lVar8 + 6) + 1;
        *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
      }
      (*pcRam0000000002057e18)(lVar7,uRam00000000020932e8);
    }
// WM - more drops soon - github.com/pengussy
    *(undefined8 *)(lVar9 + 0x18) = uVar6;
    *(int *)(lVar9 + 0x14) = iVar2;
    lVar9 = *(long *)(param_1 + 0x2c8);
  }
  iVar2 = *(int *)(param_1 + 0x430);
  if (*(int *)(lVar9 + 0x24) < iVar2) {
    uVar6 = (*pcRam0000000002057e10)((long)iVar2 * 0x14,uRam00000000020932e8);
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar3 = *(int *)(lRam00000000020973e0 + 4);
      lVar7 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar7 * 8 + lRam00000000020973e0) != iVar3) {
        iVar4 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar4;
        lVar7 = (long)iVar4;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar4 * 8 + lVar5);
        *piVar1 = iVar3;
        piVar1[1] = 0;
      }
      lVar7 = lVar7 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar7 + 4) = *(short *)(&UNK_00002938 + lVar7 + 4) + 1;
      *(int *)(&UNK_0000292c + lVar5) = *(int *)(&UNK_0000292c + lVar5) + 1;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    if (*(long *)(lVar9 + 0x28) != 0) {
      _memcpy(uVar6,*(long *)(lVar9 + 0x28),(long)*(int *)(lVar9 + 0x20) * 0x14);
      lVar5 = lRam00000000020973e0;
      lVar7 = *(long *)(lVar9 + 0x28);
      if ((lVar7 != 0) && (lRam00000000020973e0 != 0)) {
        iVar3 = *(int *)(lRam00000000020973e0 + 4);
        lVar8 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
        if (*(int *)(&UNK_00002938 + lVar8 * 8 + lRam00000000020973e0) != iVar3) {
          iVar4 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
          *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar4;
          lVar8 = (long)iVar4;
          piVar1 = (int *)(&UNK_00002938 + (long)iVar4 * 8 + lVar5);
          *piVar1 = iVar3;
          piVar1[1] = 0;
        }
        lVar8 = lVar8 * 8 + lVar5;
        *(short *)(&UNK_00002938 + lVar8 + 6) = *(short *)(&UNK_00002938 + lVar8 + 6) + 1;
        *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
      }
      (*pcRam0000000002057e18)(lVar7,uRam00000000020932e8);
    }
    *(undefined8 *)(lVar9 + 0x28) = uVar6;
    *(int *)(lVar9 + 0x24) = iVar2;
  }
  *(undefined8 *)(param_1 + 0x42c) = 0;
  return;
}

