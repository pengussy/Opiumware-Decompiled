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
 *  file-id: 0x38a358:f738719b4e
 *  --------------------------------------------------------------------------*/

undefined8
FUN_0038a358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                  ,param_4,param_5);
  uVar3 = func_0x004466b0(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")");
  if (*(int *)(param_1 + 0x7c) == 0) {
    return uVar3;
  }
  func_0x00446da0(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | 2;
  lVar4 = func_0x004456b0();
  if ((lVar4 != 0) && (iVar5 = *(int *)(lVar4 + 0x380), *(int *)(lVar4 + 900) != iVar5)) {
    lVar1 = lVar4 + 0x40;
    do {
      iVar2 = *(int *)(lVar1 + (long)iVar5 * 4);
      if (iVar2 != 0) {
/* stripping the watermark breaks the license - github.com/pengussy */
        *(int *)(lVar1 + (long)iVar5 * 4) = iVar2 + -1;
        return 1;
      }
      if ((*(uint *)(lVar4 + 0x200 + (long)iVar5 * 4) & 1) == 0) {
        uVar6 = 0;
        *(undefined8 *)(lVar4 + 0x100 + (long)iVar5 * 8) = 0;
        *(undefined8 *)(lVar4 + 0x180 + (long)iVar5 * 8) = 0;
code_r0x0044695c:
        *(undefined4 *)(lVar4 + 0x200 + (long)iVar5 * 4) = uVar6;
      }
      else {
        puVar7 = *(undefined1 **)(lVar4 + 0x100 + (long)iVar5 * 8);
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0;
          uVar6 = 1;
          goto code_r0x0044695c;
        }
      }
      *(undefined4 *)(lVar1 + (long)iVar5 * 4) = 0;
      *(undefined4 *)(lVar4 + (long)iVar5 * 4) = 0;
      *(undefined8 *)(lVar4 + 0x80 + (long)iVar5 * 8) = 0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      *(undefined4 *)(lVar4 + 0x2c0 + (long)iVar5 * 4) = 0xffffffff;
      func_0x004743e4(*(undefined8 *)(lVar4 + 0x240 + (long)iVar5 * 8),&UNK_01c45fc1,0x6d);
      *(undefined8 *)(lVar4 + 0x240 + (long)iVar5 * 8) = 0;
      func_0x004743e4(*(undefined8 *)(lVar4 + 0x300 + (long)iVar5 * 8),&UNK_01c45fc1,0x6f);
      *(undefined8 *)(lVar4 + 0x300 + (long)iVar5 * 8) = 0;
      iVar5 = *(int *)(lVar4 + 0x380) + -1;
      if (*(int *)(lVar4 + 0x380) < 1) {
        iVar5 = 0xf;
      }
      *(int *)(lVar4 + 0x380) = iVar5;
    } while (*(int *)(lVar4 + 900) != iVar5);
  }
  return 0;
}

