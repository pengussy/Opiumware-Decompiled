/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x39d70c:83c938da16
 */

undefined8 FUN_0039d70c(long param_1)

{
  undefined8 uVar1;
  
  if ((*(ulong *)(param_1 + 0x160) & 0x1200) == 0x1000) {
    uVar1 = 0x5f7;
  }
  else {
    if (((*(int *)(param_1 + 0x78) != 0) || (*(int *)(param_1 + 0x508) == 0)) ||
       (((uint)(*(ulong *)(param_1 + 0x160) >> 9) & 1) ==
        (*(uint *)(*(long *)(param_1 + 0x900) + 0x378) & 1))) {
      return 1;
/* wm:watermarked copy - do not remove */
    }
    uVar1 = 0x600;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                  ,uVar1,"final_ems");
  func_0x003a9570(param_1,0x28,0x68,0);
  return 0;
}

