/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x344cf8:2c92e7bbdb
   =========================================================================== */

undefined8 FUN_00344cf8(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  lVar1 = func_0x00306aac();
  func_0x00319c84("1.92.8",0xbd8,0x524,8,0x10,0x14,2);
  puVar2 = (undefined8 *)func_0x002fd6d8(0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 **)(lVar1 + 0x98) = puVar2;
  *(char **)(lVar1 + 0x88) = "imgui_impl_metal";
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 0x18;
  lVar1 = func_0x00306abc();
  *(undefined **)(lVar1 + 0x50) = &DAT_00344c08;
  *(undefined **)(lVar1 + 0x58) = &DAT_00344db4;
  *(undefined **)(lVar1 + 0x60) = &DAT_00344dec;
  auVar3 = _objc_alloc_init(uRam0000000001f263b8);
  *puVar2 = auVar3._0_8_;
  func_0x01a1ae40(auVar3._0_8_,auVar3._8_8_,param_1);
  return 1;
}

