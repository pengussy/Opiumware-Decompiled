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
 *  file-id: 0x3994bc:cb83a0036f
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003994bc(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1 + *(ulong *)(param_1 + 0xfe0) * 0x48;
  if (*(ulong *)(param_1 + 0xfd8) <= *(ulong *)(param_1 + 0xfe0) || param_2 != lVar2 + 0x6d0) {
    func_0x019e70c4(param_1);
    return 0xfffffffe;
  }
  uVar1 = *(ulong *)(lVar2 + 0x6d8);
  if (uVar1 < param_3) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x465,"tls_release_record");
    func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
    return 0xfffffffe;
  }
  if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    func_0x0046eb00(*(long *)(lVar2 + 0x6f0) + *(long *)(lVar2 + 0x6e8),param_3);
    uVar1 = *(ulong *)(lVar2 + 0x6d8);
  }
  *(ulong *)(lVar2 + 0x6e8) = *(long *)(lVar2 + 0x6e8) + param_3;
  *(ulong *)(lVar2 + 0x6d8) = uVar1 - param_3;
  if ((((uVar1 - param_3 == 0) &&
       (lVar2 = *(long *)(param_1 + 0xfe0) + 1, *(long *)(param_1 + 0xfe0) = lVar2,
       *(long *)(param_1 + 0xfd8) == lVar2)) && ((*(byte *)(param_1 + 0x58) >> 4 & 1) != 0)) &&
     (*(long *)(param_1 + 0x6c0) == 0)) {
    if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
      func_0x0046eb00(*(undefined8 *)(param_1 + 0x6a0),*(undefined8 *)(param_1 + 0x6b0));
    }
    func_0x004743e4(*(undefined8 *)(param_1 + 0x6a0),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x11c);
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined8 *)(param_1 + 0xff8) = 0;
    *(undefined8 *)(param_1 + 0xff0) = 0;
  }
  return 1;
}

