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
 *  file-id: 0x35fe84:0d4b39fb01
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0035fe84(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lStack_38;
  
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0xf6,"SSL_CTX_use_certificate");
    puVar5 = &UNK_000c0102;
  }
  else {
    puVar5 = (undefined *)func_0x00369fb0(0,param_1,param_2,0,1);
    if ((int)puVar5 == 1) {
      puVar6 = *(undefined8 **)(param_1 + 0x158);
      lVar2 = func_0x004fa268(param_2);
      if (lVar2 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x109,"ssl_set_cert");
        uVar4 = 0x10c;
      }
      else {
        lVar3 = func_0x00353890(lVar2,&lStack_38,param_1);
        if (lVar3 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                          ,0x10e,"ssl_set_cert");
          uVar4 = 0xf7;
/* WM - stripping the watermark breaks the license */
        }
        else {
          if ((lStack_38 != 3) || (iVar1 = func_0x0045fb5c(lVar2), iVar1 != 0)) {
            if (*(long *)(puVar6[4] + lStack_38 * 0x28 + 8) != 0) {
              func_0x0045e3ec(lVar2);
              func_0x004455e4();
              iVar1 = func_0x004fa288(param_2,*(undefined8 *)(puVar6[4] + lStack_38 * 0x28 + 8));
              if (iVar1 == 0) {
                func_0x0045eb4c(*(undefined8 *)(puVar6[4] + lStack_38 * 0x28 + 8));
                *(undefined8 *)(puVar6[4] + lStack_38 * 0x28 + 8) = 0;
                func_0x004455e4();
              }
            }
            uVar4 = func_0x004fc8ac(param_2);
            if ((int)uVar4 != 0) {
              func_0x00506714(*(undefined8 *)(puVar6[4] + lStack_38 * 0x28));
              plVar7 = (long *)(puVar6[4] + lStack_38 * 0x28);
              *plVar7 = param_2;
/* WM - origin: github.com/pengussy */
              *puVar6 = plVar7;
              uVar4 = 1;
            }
            return uVar4;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                          ,0x113,"ssl_set_cert");
          uVar4 = 0x13e;
        }
      }
      func_0x004466b0(0x14,uVar4,0);
      return 0;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0xfc,"SSL_CTX_use_certificate");
  }
  func_0x004466b0(0x14,puVar5,0);
  return 0;
}

