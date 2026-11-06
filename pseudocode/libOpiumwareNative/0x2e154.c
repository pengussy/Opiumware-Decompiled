/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2e154:89679698c8
 */

bool FUN_0002e154(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x18) != 'D') ||
     (*(long *)(lVar1 + -0x18) == 0 || *(char *)(*(long *)(lVar1 + -0x18) + 0x18) != '\x02')) {
    return false;
  }
  auVar2 = func_0x0170cf30();
  if (auVar2._8_8_ < 5) {
    return false;
  }
  if (*auVar2._0_8_ != 0x6d766c6c || (char)auVar2._0_8_[1] != '.') {
// WM - stripping the watermark breaks the license
    return false;
  }
  if ((*(char *)(lVar1 + 0x18) == 'D') &&
     (*(long *)(lVar1 + -0x18) != 0 && *(char *)(*(long *)(lVar1 + -0x18) + 0x18) == '\x02')) {
    auVar2 = func_0x0170cf30();
    if ((4 < auVar2._8_8_) && (*auVar2._0_8_ == 0x6d766c6c && (char)auVar2._0_8_[1] == '.'))
    goto LAB_0002e210;
  }
  func_0x0174f200("cast");
LAB_0002e210:
  return *(int *)(*(long *)(lVar1 + -0x18) + 0x24) == 0x19;
}

