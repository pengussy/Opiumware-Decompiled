/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36ea18:ad121c5b94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036ea18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined8 *)
           func_0x019eb5a0(0xa0,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/cc_newreno.c"
                           ,0x34);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    uVar3 = puVar2[6];
/* WM - proprietary - see LICENSE - do not sell */
    puVar2[6] = 0x4b0;
    uVar1 = _UNK_01ae6b10;
    puVar2[3] = _UNK_01ae6b18;
    puVar2[2] = uVar1;
    if (0x4b0 < uVar3) {
      puVar2[8] = &UNK_00002ee0;
    }
    if ((undefined8 *)puVar2[0xf] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[0xf] = 0x4b0;
    }
    if ((undefined8 *)puVar2[0x10] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[0x10] = puVar2[8];
    }
    if ((undefined8 *)puVar2[0x11] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[0x11] = 0x960;
    }
    if ((undefined8 *)puVar2[0x12] != (undefined8 *)0x0) {
      *(undefined8 *)puVar2[0x12] = puVar2[7];
    }
    if ((undefined4 *)puVar2[0x13] != (undefined4 *)0x0) {
      if (*(int *)(puVar2 + 0xe) == 0) {
        uVar4 = 0x53;
        if ((ulong)puVar2[9] <= (ulong)puVar2[8]) {
          uVar4 = 0x41;
        }
/*  do not claim this as your own  */
      }
      else {
        uVar4 = 0x52;
      }
      *(undefined4 *)puVar2[0x13] = uVar4;
    }
    puVar2[4] = _UNK_01ae6b30;
    *(undefined4 *)(puVar2 + 5) = 3;
    uVar1 = _UNK_01ae6b20;
    puVar2[8] = _UNK_01ae6b28;
    puVar2[7] = uVar1;
    uVar1 = _UNK_01adfc00;
    puVar2[10] = _UNK_01adfc08;
    puVar2[9] = uVar1;
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
  }
  return;
}

