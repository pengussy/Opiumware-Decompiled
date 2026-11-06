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
 *  file-id: 0x3b4230:a1d005af6b
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b4230(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
    if (lVar3 == 0) {
LAB_003b4290:
      if (*(long *)(param_1 + 0x300) == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,800,"tls_process_change_cipher_spec");
        func_0x003a9570(param_1,10,0x85,0);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1b8) = 1;
      iVar1 = func_0x00350dbc(param_1);
      if (iVar1 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x326,"tls_process_change_cipher_spec");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
      }
      if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) &&
/* wm:stripping the watermark breaks the license */
         (*(int *)(param_1 + 0x48) == 0x100)) {
        *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) =
             *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) + 1;
      }
      return 3;
    }
    func_0x004464bc();
    uVar2 = 0x319;
  }
  else {
    if ((*(int *)(param_1 + 0x48) != 0x100 || lVar3 == 2) &&
       (*(int *)(param_1 + 0x48) == 0x100 || lVar3 == 0)) goto LAB_003b4290;
    func_0x004464bc();
    uVar2 = 0x314;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,uVar2,"tls_process_change_cipher_spec");
  func_0x003a9570(param_1,0x32,0x67,0);
  return 0;
}

