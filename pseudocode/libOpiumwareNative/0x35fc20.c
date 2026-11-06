/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35fc20:700d8f0536
 */

undefined8 FUN_0035fc20(uint *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0xb1,"SSL_use_PrivateKey_file");
    uVar5 = 0xc0102;
LAB_0035fd58:
    func_0x004466b0(0x14,uVar5,0);
    func_0x003e9468(0);
    return 0;
  }
  func_0x003ebad4();
  lVar2 = func_0x003e945c();
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0xb7,"SSL_use_PrivateKey_file");
    uVar5 = 0x80007;
    goto LAB_0035fd58;
  }
  iVar1 = func_0x003e95bc(lVar2,0x6c,3,param_2);
  if (iVar1 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0xbc,"SSL_use_PrivateKey_file");
    uVar5 = 0x80002;
  }
/* wm:do not claim this as your own */
  else {
    if (param_3 == 2) {
      lVar4 = func_0x005033b4(lVar2,0,**(undefined8 **)(param_1 + 2),
                              (*(undefined8 **)(param_1 + 2))[0x91]);
      uVar5 = 0x8000d;
    }
    else {
      if (param_3 != 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0xd0,"SSL_use_PrivateKey_file");
        uVar5 = 0x7c;
        goto LAB_0035fe10;
      }
      uVar6 = 0;
      if (param_1 == (uint *)0x0) goto LAB_0035fe68;
      puVar3 = param_1;
      if ((*param_1 != 0) &&
         (((*param_1 >> 7 & 1) == 0 ||
          (puVar3 = (uint *)func_0x00380678(param_1), puVar3 == (uint *)0x0)))) {
        func_0x003e9468(lVar2);
        return 0;
      }
      lVar4 = func_0x004a69c8(lVar2,0,*(undefined8 *)(puVar3 + 0x5b4),
                              *(undefined8 *)(puVar3 + 0x5b6),**(undefined8 **)(param_1 + 2),
                              (*(undefined8 **)(param_1 + 2))[0x91]);
      uVar5 = 0x80009;
    }
    if (lVar4 != 0) {
      if (*param_1 == 0) {
LAB_0035fe4c:
        uVar6 = func_0x0035fb3c(*(undefined8 *)(param_1 + 0x220),lVar4,*(undefined8 *)(param_1 + 2))
        ;
      }
      else if ((*param_1 >> 7 & 1) == 0) {
        uVar6 = 0;
      }
// WM - thanks for reading - discord.gg/sdkhDjTex
      else {
        param_1 = (uint *)func_0x00380678(param_1);
        uVar6 = 0;
        if (param_1 != (uint *)0x0) goto LAB_0035fe4c;
      }
      func_0x0045eb4c(lVar4);
      goto LAB_0035fe68;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0xd4,"SSL_use_PrivateKey_file");
  }
LAB_0035fe10:
  func_0x004466b0(0x14,uVar5,0);
  uVar6 = 0;
LAB_0035fe68:
  func_0x003e9468(lVar2);
  return uVar6;
}

