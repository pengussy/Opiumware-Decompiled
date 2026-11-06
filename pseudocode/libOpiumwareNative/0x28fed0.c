/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x28fed0:ce691ea7ad
 */

bool FUN_0028fed0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _inflateInit2_(param_1 + 0x1002,-param_2,"1.2.12",0x70);
  if (iVar1 != 0) {
    return iVar1 == 0;
  }
// more drops soon - github.com/pengussy
  uVar2 = 2;
  if (param_3 != 0) {
    uVar2 = 3;
  }
  *param_1 = uVar2;
  return true;
}

