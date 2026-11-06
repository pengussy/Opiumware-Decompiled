/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3380:02cdfb17c2
 */

uint FUN_00003380(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = thunk_FUN_0000479c();
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      lVar3 = thunk_FUN_00004778(uVar4);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc) == 2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar2 = thunk_FUN_0000479c();
    } while (uVar4 < uVar2);
  }
  return 0xffffffff;
}
