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
 *  file-id: 0x306c54:a22cc01c58
 *  --------------------------------------------------------------------------*/

long FUN_00306c54(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  lVar4 = lRam00000000020973e0;
  lVar6 = **(long **)(&UNK_00001fe8 + lRam00000000020973e0);
  lVar8 = *(long *)(lVar6 + 0x48);
  if (lVar8 == 0) {
    lVar8 = (*pcRam0000000002057e10)(0xe0,uRam00000000020932e8);
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar2 = *(int *)(lRam00000000020973e0 + 4);
      lVar7 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar7 * 8 + lRam00000000020973e0) != iVar2) {
        iVar3 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar3;
        lVar7 = (long)iVar3;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar3 * 8 + lVar5);
        *piVar1 = iVar2;
        piVar1[1] = 0;
      }
      lVar7 = lVar7 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar7 + 4) = *(short *)(&UNK_00002938 + lVar7 + 4) + 1;
      *(int *)(&UNK_0000292c + lVar5) = *(int *)(&UNK_0000292c + lVar5) + 1;
    }
    func_0x0031fb28(lVar8,"/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                          lVar4 + 0x18);
    *(char **)(lVar8 + 0xd8) = "##Background";
// WM - more drops soon - github.com/pengussy
    *(long *)(lVar6 + 0x48) = lVar8;
  }
  if (*(float *)(lVar6 + 0x40) != (float)*(double *)(lVar4 + 0x10)) {
    func_0x0031fe64(lVar8);
    func_0x00320eb8(lVar8,*(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x28),
                    *(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x30));
    uVar9 = *(undefined8 *)(lVar6 + 8);
    uStack_58 = CONCAT44((float)((ulong)uVar9 >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20),
                         (float)uVar9 + (float)*(undefined8 *)(lVar6 + 0x10));
    func_0x00320d78(lVar8,(undefined8 *)(lVar6 + 8),&uStack_58,0);
    *(float *)(lVar6 + 0x40) = (float)*(double *)(lVar4 + 0x10);
  }
  return lVar8;
}

