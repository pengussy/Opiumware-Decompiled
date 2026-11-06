/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36eec0:4b070a0420
   =========================================================================== */

undefined8 FUN_0036eec0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = func_0x019ec218(param_2,"max_dgram_payload_len");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar1 = func_0x019ec218(param_2,"cur_cwnd_size");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar1 = func_0x019ec218(param_2,"min_cwnd_size");
  if (lVar1 != 0) {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar1 = func_0x019ec218(param_2,"bytes_in_flight");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar1 = func_0x019ec218(param_2,"cur_state");
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return 1;
}

