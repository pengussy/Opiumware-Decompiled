/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x39af18:593bfafe9c
 */

undefined8 FUN_0039af18(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2f];
  "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2f] =
       (char)(bVar2 + 1);
  if (((((bVar2 + 1 >> 8 == 0) ||
        (bVar2 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
                 [param_1 + 0x2e],
        "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2e] =
             (char)(bVar2 + 1), bVar2 + 1 >> 8 == 0)) ||
       (bVar2 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
                [param_1 + 0x2d],
       "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2d] =
            (char)(bVar2 + 1), bVar2 + 1 >> 8 == 0)) ||
      ((bVar2 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
/*  proprietary - see LICENSE - do not sell  */
                [param_1 + 0x2c],
       "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2c] =
            (char)(bVar2 + 1), bVar2 + 1 >> 8 == 0 ||
       (bVar2 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
                [param_1 + 0x2b],
       "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2b] =
            (char)(bVar2 + 1), bVar2 + 1 >> 8 == 0)))) ||
     ((bVar2 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
               [param_1 + 0x2a],
      "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2a] =
           (char)(bVar2 + 1), bVar2 + 1 >> 8 == 0 ||
      ((bVar2 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
                [param_1 + 0x29],
       "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x29] =
            (char)(bVar2 + 1), bVar2 + 1 >> 8 == 0 ||
       (uVar1 = *(byte *)(param_1 + 0x1000) + 1, *(byte *)(param_1 + 0x1000) = (byte)uVar1,
       uVar1 >> 8 == 0)))))) {
    return 1;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,0x7f9,"tls_increment_sequence_ctr");
  func_0x00397da4(param_1,0x50,0x147,0);
  return 0;
}

