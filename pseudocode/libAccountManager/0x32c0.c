/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x32c0:6dfe700620
 */

int FUN_000032c0(int param_1)

{
  int iVar1;
  
  if ((DAT_000067c0 == '\0') && (iVar1 = thunk_FUN_0000473c(&DAT_000067c0), iVar1 != 0)) {
    DAT_000067b8 = FUN_000033d0();
    thunk_FUN_00004748(&DAT_000067c0);
  }
  if (DAT_000067b8 == '\x01') {
    if ((DAT_000067b0 == '\0') && (iVar1 = thunk_FUN_0000473c(&DAT_000067b0), iVar1 != 0)) {
      DAT_000067a8 = FUN_00003380();
      thunk_FUN_00004748(&DAT_000067b0);
    }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (DAT_000067a8 != -1) {
      if (param_1 == 0) {
        param_1 = DAT_000067a8;
      }
      else if (param_1 == DAT_000067a8) {
        param_1 = 0;
      }
    }
  }
  return param_1;
}
