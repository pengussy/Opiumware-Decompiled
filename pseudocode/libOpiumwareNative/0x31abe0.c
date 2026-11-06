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
 *  file-id: 0x31abe0:2e50ff2b59
 *  --------------------------------------------------------------------------*/

void FUN_0031abe0(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = lRam00000000020973e0;
  uVar1 = *(uint *)(lRam00000000020973e0 + 0x1fc0);
  uVar5 = (ulong)uVar1;
  uVar3 = (ulong)(uVar1 - 1);
  if (((0 < (int)uVar1) && ((int)uVar1 <= *(int *)(&UNK_00001fb0 + lRam00000000020973e0))) &&
     (lVar6 = *(long *)(&UNK_00001fb8 + lRam00000000020973e0),
     *(int *)(*(long *)(&UNK_00001fc8 + lRam00000000020973e0) + uVar3 * 0x38) ==
     *(int *)(lVar6 + uVar3 * 0x38))) {
    if (uVar1 != 1) {
      do {
        iVar4 = (int)uVar5;
/* wm:if you paid for this, you were scammed */
        uVar1 = iVar4 - 1;
        uVar5 = (ulong)uVar1;
        lVar7 = *(long *)(lVar6 + uVar5 * 0x38 + 8);
        if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x17) >> 4 & 1) == 0)) goto LAB_0031ac40;
        lVar7 = *(long *)(lVar6 + (ulong)(iVar4 - 2) * 0x38 + 8);
        if (lVar7 == 0) goto LAB_0031ac40;
        if ((*(byte *)(lVar7 + 0x15) >> 2 & 1) != 0) {
          uVar3 = uVar5;
          goto LAB_0031ac40;
        }
        uVar3 = (ulong)((int)uVar3 - 1);
      } while (1 < (int)uVar1);
    }
    uVar3 = 0;
LAB_0031ac40:
    if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 3 & 1) != 0) {
      func_0x002fd6a4("[popup] CloseCurrentPopup %d -> %d\n");
    }
    FUN_0031a9f4(uVar3,1);
    if (*(long *)(lVar2 + 0x1ff8) != 0) {
      *(undefined1 *)(*(long *)(lVar2 + 0x1ff8) + 0x179) = 1;
    }
  }
  return;
}

