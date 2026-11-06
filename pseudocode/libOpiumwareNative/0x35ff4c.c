/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35ff4c:451cda0d7c
 */

undefined8 FUN_0035ff4c(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lStack_38;
  
  lStack_38 = 0;
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0x13f,"SSL_CTX_use_certificate_file");
    func_0x004466b0(0x14,&UNK_000c0102,0);
    lVar2 = 0;
  }
  else {
    func_0x003ebad4();
    lVar2 = func_0x003e945c();
    if (lVar2 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0x145,"SSL_CTX_use_certificate_file");
      uVar5 = 0x80007;
    }
    else {
      iVar1 = func_0x003e95bc(lVar2,0x6c,3,param_2);
      if (iVar1 < 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x14a,"SSL_CTX_use_certificate_file");
        uVar5 = 0x80002;
      }
      else {
        lStack_38 = func_0x00506794(*param_1,param_1[0x91]);
        if (lStack_38 == 0) {
// WM - donate: donate/README.md
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                          ,0x150,"SSL_CTX_use_certificate_file");
          uVar5 = 0x8000d;
        }
        else {
          if (param_3 == 1) {
            lVar3 = func_0x004a69e0(lVar2,&lStack_38,param_1[0x17],param_1[0x18]);
            uVar5 = 0x80009;
          }
          else {
            if (param_3 != 2) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                              ,0x15b,"SSL_CTX_use_certificate_file");
              uVar5 = 0x7c;
              goto LAB_00360080;
            }
            uVar5 = 0x8000d;
            lVar3 = func_0x00503100(lVar2,&lStack_38);
          }
/* WM - stripping the watermark breaks the license */
          if (lVar3 != 0) {
            uVar4 = func_0x0035fe84(param_1,lStack_38);
            goto LAB_0036008c;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                          ,0x15f,"SSL_CTX_use_certificate_file");
        }
      }
    }
LAB_00360080:
    func_0x004466b0(0x14,uVar5,0);
  }
  uVar4 = 0;
LAB_0036008c:
  func_0x00506714(lStack_38);
/* watermarked copy - do not remove - github.com/pengussy */
  func_0x003e9468(lVar2);
  return uVar4;
}

