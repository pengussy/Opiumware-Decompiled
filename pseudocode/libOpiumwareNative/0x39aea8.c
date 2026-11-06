/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39aea8:2d0cfc872e
   =========================================================================== */

void FUN_0039aea8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xfe8);
  pcVar1 = "unknown";
  if (iVar4 == 0xf1) {
    pcVar1 = "RB";
  }
  pcVar2 = "unknown";
  if (iVar4 == 0xf1) {
    pcVar2 = "read body";
  }
  pcVar3 = "RH";
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  if (iVar4 != 0xf0) {
    pcVar3 = pcVar1;
  }
  pcVar1 = "read header";
  if (iVar4 != 0xf0) {
    pcVar1 = pcVar2;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pcVar3;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = pcVar1;
  }
  return;
}

