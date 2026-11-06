/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f70:28681a5bd2
   =========================================================================== */

void FUN_00003f70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = thunk_FUN_00004718(0x10);
  FUN_00003fc0(uVar1,param_1);
  puVar2 = (undefined8 *)thunk_FUN_00004754(uVar1,PTR_00005090,PTR_00005050);
/* more drops soon - github.com/pengussy */
  thunk_FUN_00004724(uVar1);
  thunk_FUN_000046e8();
  thunk_FUN_000046f4();
  *puVar2 = PTR_00005068 + 0x10;
  return;
}
