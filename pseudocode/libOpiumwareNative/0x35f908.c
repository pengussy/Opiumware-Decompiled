/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35f908:57f54b32c8
 */

undefined8 FUN_0035f908(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lStack_38;
  
  lVar2 = func_0x004fa268(param_2);
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0x109,"ssl_set_cert");
    uVar4 = 0x10c;
  }
  else {
    lVar3 = func_0x00353890(lVar2,&lStack_38,param_3);
    if (lVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0x10e,"ssl_set_cert");
      uVar4 = 0xf7;
    }
    else {
      if ((lStack_38 != 3) || (iVar1 = func_0x0045fb5c(lVar2), iVar1 != 0)) {
        if (*(long *)(param_1[4] + lStack_38 * 0x28 + 8) != 0) {
/* stripping the watermark breaks the license - github.com/pengussy */
          func_0x0045e3ec(lVar2);
          func_0x004455e4();
          iVar1 = func_0x004fa288(param_2,*(undefined8 *)(param_1[4] + lStack_38 * 0x28 + 8));
          if (iVar1 == 0) {
            func_0x0045eb4c(*(undefined8 *)(param_1[4] + lStack_38 * 0x28 + 8));
            *(undefined8 *)(param_1[4] + lStack_38 * 0x28 + 8) = 0;
            func_0x004455e4();
          }
        }
        uVar4 = func_0x004fc8ac(param_2);
        if ((int)uVar4 != 0) {
          func_0x00506714(*(undefined8 *)(param_1[4] + lStack_38 * 0x28));
          puVar5 = (undefined8 *)(param_1[4] + lStack_38 * 0x28);
          *puVar5 = param_2;
          *param_1 = puVar5;
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
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  return 0;
}

