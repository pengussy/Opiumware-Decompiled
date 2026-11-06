/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3492c:689d7838bb
   =========================================================================== */

undefined8 FUN_0003492c(void)

{
  long lVar1;
  
  lVar1 = __Znwm(0x10);
  func_0x01779cb0(lVar1,1);
  *(undefined4 *)(lVar1 + 8) = 0;
  *(undefined1 *)(lVar1 + 0xc) = 1;
/*  unlicensed copy if this notice is missing  */
  lRam000000000208ec78 = lVar1;
  func_0x01779d8c(lVar1);
  uRam000000000208ec70 = func_0x00034afc(0x208ec80,uRam000000000205d5c0,"DxcCreateInstance");
  func_0x01779dac(lRam000000000208ec78);
  return 0;
}

