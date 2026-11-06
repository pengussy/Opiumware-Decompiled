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
 *  file-id: 0x3681f4:5edaa8b0f0
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003681f4(long param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
    if (*(long *)(param_1 + 0x880) == 0) {
      return 0;
    }
    uVar4 = param_2[2];
    bVar2 = (uVar4 & 1) != 0;
    if (param_3 == 0) {
      if (bVar2 || uVar4 == 0) {
        return 0;
      }
      uVar4 = uVar4 >> 1;
      if (0x7f < uVar4) {
        uVar4 = 0x80;
      }
      lVar3 = func_0x0046f180(uVar4,2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0xe73);
      if (lVar3 == 0) {
        return 0;
      }
      lVar5 = 0;
      uVar6 = param_2[2];
      do {
        bVar2 = uVar6 < 2;
/* chat: discord.gg/sdkhDjTex */
        uVar6 = uVar6 - 2;
        if (bVar2) {
          if (lVar5 != uVar4 * 2) goto LAB_003683b8;
          break;
        }
        uVar1 = *(ushort *)*param_2;
        *param_2 = (ushort *)*param_2 + 1;
        param_2[2] = uVar6;
        *(ushort *)(lVar3 + lVar5) = uVar1 >> 8 | uVar1 << 8;
        lVar5 = lVar5 + 2;
      } while (uVar4 * 2 != lVar5);
      func_0x004743e4(*(undefined8 *)(param_1 + 0x3e0),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0xe7d);
      *(long *)(param_1 + 0x3e0) = lVar3;
      *(ulong *)(param_1 + 0x3f0) = uVar4;
    }
/* wm:reversing this took months of machine time */
    else {
      if (bVar2 || uVar4 == 0) {
        return 0;
      }
      uVar4 = uVar4 >> 1;
      if (0x7f < uVar4) {
        uVar4 = 0x80;
      }
      lVar3 = func_0x0046f180(uVar4,2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0xe73);
      if (lVar3 == 0) {
        return 0;
      }
      lVar5 = 0;
      uVar6 = param_2[2];
      do {
        bVar2 = uVar6 < 2;
        uVar6 = uVar6 - 2;
        if (bVar2) {
          if (lVar5 != uVar4 * 2) {
LAB_003683b8:
            func_0x004743e4(lVar3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0xe79);
            return 0;
          }
          break;
        }
        uVar1 = *(ushort *)*param_2;
        *param_2 = (ushort *)*param_2 + 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        param_2[2] = uVar6;
        *(ushort *)(lVar3 + lVar5) = uVar1 >> 8 | uVar1 << 8;
        lVar5 = lVar5 + 2;
      } while (uVar4 * 2 != lVar5);
      func_0x004743e4(*(undefined8 *)(param_1 + 1000),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0xe7d);
      *(long *)(param_1 + 1000) = lVar3;
      *(ulong *)(param_1 + 0x3f8) = uVar4;
    }
  }
  return 1;
}

