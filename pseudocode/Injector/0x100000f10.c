/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x100000f10:6f1efe38b7
   =========================================================================== */

void _fmemmove(FILE *param_1,off_t param_2,off_t param_3,ulong param_4)

{
  size_t local_38;
  ulong local_28;
  off_t local_20;
  off_t local_18;
  
  local_20 = param_3;
  local_18 = param_2;
  for (local_28 = param_4; local_28 != 0; local_28 = local_28 - local_38) {
    if (local_28 < 0x200) {
      local_38 = local_28;
    }
// if you paid for this, you were scammed
    else {
      local_38 = 0x200;
    }
    _fseeko(param_1,local_20,0);
    _fread(&_fmemmove_buf,local_38,1,param_1);
    _fseeko(param_1,local_18,0);
    _fwrite(&_fmemmove_buf,local_38,1,param_1);
    local_20 = local_38 + local_20;
    local_18 = local_38 + local_18;
  }
  return;
}
