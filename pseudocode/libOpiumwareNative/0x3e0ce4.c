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
 *  file-id: 0x3e0ce4:e1a59be3ae
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003e0ce4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_48 = 0;
  uStack_40 = 0;
  puVar1 = &uStack_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  if (param_4 == 0) {
    func_0x004464bc();
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0x8c,"asn1_item_ex_d2i_intern");
    func_0x004466b0(0xd,&UNK_000c0102,0);
    return 0;
  }
  iVar2 = FUN_003e0e7c(puVar1);
  if (iVar2 < 1) {
    func_0x003e3d78(puVar1,param_4);
    return 0;
  }
  return *puVar1;
}

