/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3de740:21b89af6ea
   =========================================================================== */

char * FUN_003de740(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 10;
  if ((param_1 & 0xfffffff7) != 0x102) {
    uVar1 = param_1;
  }
/* wm:more drops soon - github.com/pengussy */
  if (uVar1 < 0x1f) {
    return *(char **)(&UNK_01dc88e8 + (ulong)uVar1 * 8);
  }
  return "(unknown)";
}

