/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38b188:2ec4d5a954
   =========================================================================== */

void FUN_0038b188(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  
  if ((*(byte *)(*param_1 + 0xa8) >> 1 & 1) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = &UNK_01c38e3a;
    }
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    pcVar1 = "read header";
  }
  else {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = "unknown";
    }
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    pcVar1 = "unknown";
  }
  *param_3 = pcVar1;
  return;
}

