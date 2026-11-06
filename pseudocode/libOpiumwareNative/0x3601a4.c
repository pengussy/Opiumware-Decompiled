/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3601a4:1bc4ce55d2
 */

undefined8 FUN_003601a4(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,400,"SSL_CTX_use_PrivateKey_file");
    uVar5 = 0xc0102;
LAB_003602a4:
    func_0x004466b0(0x14,uVar5,0);
    func_0x003e9468(0);
    return 0;
  }
  func_0x003ebad4();
  lVar2 = func_0x003e945c();
  if (lVar2 == 0) {
    func_0x004464bc();
/* wm:chat: discord.gg/sdkhDjTex */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0x196,"SSL_CTX_use_PrivateKey_file");
    uVar5 = 0x80007;
    goto LAB_003602a4;
  }
  iVar1 = func_0x003e95bc(lVar2,0x6c,3,param_2);
  if (iVar1 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0x19b,"SSL_CTX_use_PrivateKey_file");
    uVar5 = 0x80002;
  }
  else {
    if (param_3 == 2) {
      lVar3 = func_0x005033b4(lVar2,0,*param_1,param_1[0x91]);
      uVar5 = 0x8000d;
    }
    else {
      if (param_3 != 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x1a8,"SSL_CTX_use_PrivateKey_file");
        uVar5 = 0x7c;
        goto LAB_0036036c;
      }
      lVar3 = func_0x004a69c8(lVar2,0,param_1[0x17],param_1[0x18],*param_1,param_1[0x91]);
      uVar5 = 0x80009;
    }
    if (lVar3 != 0) {
      uVar4 = func_0x0035fb3c(param_1[0x2b],lVar3,param_1);
      func_0x0045eb4c(lVar3);
      goto LAB_00360378;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
/*  if you paid for this, you were scammed  */
                    ,0x1ac,"SSL_CTX_use_PrivateKey_file");
  }
LAB_0036036c:
  func_0x004466b0(0x14,uVar5,0);
  uVar4 = 0;
LAB_00360378:
  func_0x003e9468(lVar2);
  return uVar4;
}

