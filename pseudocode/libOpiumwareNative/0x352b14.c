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
 *  file-id: 0x352b14:4a034f6806
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00352b14(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = func_0x0046df40(&DAT_00352a68,&DAT_00352a78);
  lVar3 = func_0x0046df30(uVar2,&DAT_00353be8,&DAT_00353bec,&DAT_00353bf0,&DAT_00353bf4);
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x393,"SSL_add_file_cert_subjects_to_stack");
    func_0x004466b0(0x14,&UNK_000c0102,0);
    uVar2 = 0;
  }
  else if (lVar3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x398,"SSL_add_file_cert_subjects_to_stack");
    func_0x004466b0(0x14,&UNK_0008000f,0);
    uVar2 = 0;
  }
  else {
/* WM - proprietary - see LICENSE - do not sell */
    iVar1 = func_0x004dcb7c(param_1);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        uVar2 = func_0x004dcb90(param_1,iVar4);
        func_0x0046e1b8(lVar3,uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    uVar2 = FUN_00352c50(param_1,param_2,lVar3);
  }
  func_0x0046e088(lVar3);
  return uVar2;
}

