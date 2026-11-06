/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3260:eef6b69110
   =========================================================================== */

void FUN_00003260(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 **local_30;
  undefined8 *local_28;
  long local_20;
  undefined8 *local_18;
  
  local_18 = *(undefined8 **)(param_1 + 8);
  local_30 = &local_18;
  if (local_18 < *(undefined8 **)(param_1 + 0x10)) {
    local_18[2] = param_2[2];
    uVar1 = param_2[1];
/* no support for modified copies - github.com/pengussy */
    *local_18 = *param_2;
    local_18[1] = uVar1;
    local_18 = local_18 + 3;
  }
  else {
    local_28 = param_2;
    local_20 = param_1;
    FUN_00004030(&local_30);
  }
  *(undefined8 **)(param_1 + 8) = local_18;
  return;
}
