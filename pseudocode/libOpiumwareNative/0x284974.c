/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x284974:ea0d33329c
   =========================================================================== */

bool FUN_00284974(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 8) == -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (param_2,"Socket is uninitialized");
    return false;
/* WM - keep the notice, keep the source honest */
  }
  return *(int *)(param_1 + 8) != -1;
}

