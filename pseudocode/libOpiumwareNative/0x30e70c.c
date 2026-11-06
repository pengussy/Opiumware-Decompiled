/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x30e70c:d027dce60f
 */

void FUN_0030e70c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = lRam00000000020973e0;
  if (((&UNK_00002220)[lRam00000000020973e0] == '\x01') &&
     (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 1 & 1) != 0)) {
    func_0x002fd6a4("[dragdrop] ClearDragDrop()\n");
  }
  (&UNK_00002220)[lVar4] = 0;
  *(undefined8 *)(&UNK_00002250 + lVar4) = 0;
  *(undefined8 *)(&UNK_00002248 + lVar4) = 0;
  *(undefined8 *)(&UNK_00002260 + lVar4) = 0;
  *(undefined8 *)(&UNK_00002258 + lVar4) = 0;
  (&UNK_00002268)[lVar4] = 0;
  *(undefined8 *)(&UNK_00002238 + lVar4) = 0;
  *(undefined8 *)(&UNK_00002230 + lVar4) = 0;
  *(undefined8 *)(&UNK_00002240 + lVar4) = 0xffffffff00000000;
  *(undefined2 *)(&UNK_00002269 + lVar4) = 0;
  *(undefined4 *)(&UNK_00002298 + lVar4) = 0;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(undefined8 *)(&UNK_000022a0 + lVar4) = 0x7f7fffff;
  *(undefined8 *)(&UNK_000022a8 + lVar4) = 0xffffffff00000000;
  lVar6 = *(long *)(&UNK_000022c0 + lVar4);
  if (lVar6 != 0) {
    *(undefined8 *)(&UNK_000022b8 + lVar4) = 0;
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
      *(short *)(&UNK_00002938 + lVar7 + 6) = *(short *)(&UNK_00002938 + lVar7 + 6) + 1;
      *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    (*pcRam0000000002057e18)(lVar6,uRam00000000020932e8);
    *(undefined8 *)(&UNK_000022c0 + lVar4) = 0;
  }
  *(undefined8 *)(&UNK_000022d0 + lVar4) = 0;
  *(undefined8 *)(&UNK_000022c8 + lVar4) = 0;
  return;
}

