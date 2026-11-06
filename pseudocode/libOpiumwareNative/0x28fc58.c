/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x28fc58:b37ecda1e3
 */

bool FUN_0028fc58(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _deflateInit2_(param_1 + 0x1002,0xffffffff,8,-param_2,4,0,"1.2.12",0x70);
  if (iVar1 != 0) {
    return iVar1 == 0;
  }
/* thanks for reading - discord.gg/sdkhDjTex */
  uVar2 = 2;
  if (param_3 != 0) {
    uVar2 = 3;
  }
  *param_1 = uVar2;
  return true;
}

