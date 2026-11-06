/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36bee8:72b4e4621d
 */

void FUN_0036bee8(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = func_0x004762b4(param_3,&UNK_01c3427f);
  if (iVar1 == 0) {
    *param_1 = 6;
    return;
  }
  iVar1 = func_0x004762b4(param_3,"RSA-PSS");
  if ((iVar1 == 0) || (iVar1 = func_0x004762b4(param_3,&UNK_01c35e31), iVar1 == 0)) {
    *param_1 = 0x390;
    return;
  }
  iVar1 = func_0x004762b4(param_3,&UNK_01c341a4);
  if (iVar1 == 0) {
    *param_1 = 0x74;
    return;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  }
  iVar1 = func_0x004762b4(param_3,"ECDSA");
  if (iVar1 == 0) {
    *param_1 = 0x198;
    return;
  }
  iVar1 = func_0x004a0998(param_3);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    iVar1 = func_0x004a0ad8(param_3);
    *param_2 = iVar1;
    return;
  }
  return;
}

