/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x377b90:da4f3f6ee8
 */

void FUN_00377b90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar1 = 0;
    lVar2 = *(long *)(param_1 + 0x5d0);
  }
  else {
    lVar1 = _strlen(param_3);
    lVar2 = *(long *)(param_1 + 0x5d0);
  }
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x5c0) = param_2;
    *(undefined8 *)(param_1 + 0x5c8) = 0;
    *(byte *)(param_1 + 0x5e0) = *(byte *)(param_1 + 0x5e0) & 0xfc | 1;
    if ((param_3 != 0) && (lVar1 != 0)) {
/* if you paid for this, you were scammed - github.com/pengussy */
      if (lVar1 == -1) {
        lVar1 = -2;
      }
      lVar2 = func_0x00475ac0(param_3,lVar1 + 1,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                              ,0xc6b);
      *(long *)(param_1 + 0x5d0) = lVar2;
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + lVar1) = 0;
        *(long *)(param_1 + 0x5d8) = lVar1;
        return;
      }
    }
  }
  return;
}

