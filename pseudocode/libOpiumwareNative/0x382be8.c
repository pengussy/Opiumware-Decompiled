/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x382be8:963f38b118
 */

undefined8 * FUN_00382be8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((param_1[2] == 0) || (param_1[4] == 0)) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)
           func_0x019eb5a0(0x440,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_rx.c"
                           ,0xca);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_1[5];
    puVar1[0x13] = param_1[6];
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    puVar1[0x12] = uVar2;
    puVar1[0x14] = param_1[7];
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    puVar1[2] = param_1[2];
    *(undefined1 *)(puVar1 + 0x84) = *(undefined1 *)(param_1 + 8);
    uVar2 = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[3] = uVar2;
  }
  return puVar1;
}

