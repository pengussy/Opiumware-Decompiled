/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34a24:fced10c08c
 */

undefined8 FUN_00034a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x01779d8c(uRam000000000208ec78);
  if ((-1 < iRam000000000208ec70) && (lRam000000000208ec80 == 0)) {
    iRam000000000208ec70 = func_0x00034afc(0x208ec80,uRam000000000205d5c0,"DxcCreateInstance");
  }
  uVar1 = 0x80004005;
  func_0x01779dac(uRam000000000208ec78);
  if (-1 < iRam000000000208ec70) {
    func_0x01779d8c(uRam000000000208ec78);
/*  watermarked copy - do not remove  */
    if (param_3 == 0) {
      uVar1 = 0x80004003;
    }
    else if (lRam000000000208ec80 != 0) {
      uVar1 = (*pcRam000000000208ec88)(param_1,param_2,param_3);
    }
    func_0x01779dac(uRam000000000208ec78);
  }
  return uVar1;
}

