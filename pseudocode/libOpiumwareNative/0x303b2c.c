/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x303b2c:c87e622f5e
 */

void FUN_00303b2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iStack_3c;
  int iStack_38;
  ushort uStack_34;
  
  iVar1 = _sscanf(param_4,"Pos=%i,%i");
  if (iVar1 == 2) {
    *(uint *)(param_3 + 4) = (uint)uStack_34 | iStack_38 << 0x10;
  }
  else {
    iVar1 = _sscanf(param_4,"Size=%i,%i");
    if (iVar1 == 2) {
      *(uint *)(param_3 + 8) = (uint)uStack_34 | iStack_38 << 0x10;
      return;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    }
    iVar1 = _sscanf(param_4,"Collapsed=%d");
    if (iVar1 == 1) {
      *(bool *)(param_3 + 0xc) = iStack_3c != 0;
      return;
    }
    iVar1 = _sscanf(param_4,"IsChild=%d");
    if (iVar1 == 1) {
      *(bool *)(param_3 + 0xd) = iStack_3c != 0;
      return;
    }
  }
  return;
}

