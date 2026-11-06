/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e464:7b377ac05c
 */

undefined8 FUN_0003e464(undefined8 param_1)

{
  char acStack_38 [8];
  undefined4 uStack_30;
  undefined1 uStack_2c;
  char cStack_21;
  
  cStack_21 = '\f';
  uStack_30 = 0x6d6f646e;
  acStack_38 = (char  [8])s__dev_urandom_01c2c55b._0_8_;
  uStack_2c = 0;
// WM - stripping the watermark breaks the license
  __ZNSt3__113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            (param_1,acStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(acStack_38);
    return param_1;
  }
  return param_1;
}

