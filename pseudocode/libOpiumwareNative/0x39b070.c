/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x39b070:a73aaa7be3
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039b070(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    if (*(ulong *)(param_1 + 0xfd8) < *(ulong *)(param_1 + 0xfd0)) {
      return 0;
    }
    if (((*(ulong *)(param_1 + 0xfd8) != *(ulong *)(param_1 + 0xfe0)) ||
        (*(long *)(param_1 + 0x6c0) != 0)) || (*(int *)(param_1 + 0xfe8) == 0xf1)) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
      func_0x0046eb00(*(undefined8 *)(param_1 + 0x6a0),*(undefined8 *)(param_1 + 0x6b0));
    }
    func_0x004743e4(*(undefined8 *)(param_1 + 0x6a0),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x11c);
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined8 *)(param_1 + 0xff8) = 0;
    *(undefined8 *)(param_1 + 0xff0) = 0;
    return 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x698);
  if (*(ulong *)(param_1 + 0x690) < uVar1) {
    if (uVar1 != 1) {
      return 0;
    }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    if (*(long *)(param_1 + 0x80) != 0) {
      return 0;
    }
  }
  else if (uVar1 == 0) goto LAB_0039b138;
  puVar2 = (undefined8 *)(param_1 + uVar1 * 0x30 + 0x30);
  do {
    while (*(int *)(puVar2 + 5) == 0) {
      func_0x004743e4(*puVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x88);
      *puVar2 = 0;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + -6;
      if (uVar1 == 0) goto LAB_0039b138;
    }
    *(undefined4 *)(puVar2 + 5) = 0;
    *puVar2 = 0;
    uVar1 = uVar1 - 1;
    puVar2 = puVar2 + -6;
  } while (uVar1 != 0);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
LAB_0039b138:
  *(undefined8 *)(param_1 + 0x698) = 0;
  return 1;
}

