/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x399098:674efa85ed
 */

undefined8 FUN_00399098(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 == 0) {
    lVar2 = func_0x019eb530(&UNK_00004540,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                            ,0x3e3);
    *(long *)(param_2 + 0x30) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
/* wm:more drops soon - github.com/pengussy */
  uVar1 = func_0x00405bd4(*(undefined8 *)
                           (
                           "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                           + param_1 + 8),lVar2,0x4000,*(undefined8 *)(param_2 + 0x20),
                          *(undefined4 *)(param_2 + 8));
  if ((int)uVar1 < 0) {
    return 0;
  }
  *(ulong *)(param_2 + 8) = (ulong)uVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  return 1;
}

