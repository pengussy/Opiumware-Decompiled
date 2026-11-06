/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35f82c:74b522e5d9
 */

undefined8 FUN_0035f82c(uint *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lStack_38;
  
  if ((param_1 != (uint *)0x0) &&
     ((*param_1 == 0 ||
      (((*param_1 >> 7 & 1) != 0 && (param_1 = (uint *)func_0x00380678(), param_1 != (uint *)0x0))))
     )) {
    if (param_2 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0x29,"SSL_use_certificate");
      puVar2 = &UNK_000c0102;
/* proprietary - see LICENSE - do not sell */
    }
    else {
      puVar2 = (undefined *)func_0x00369fb0(param_1,0,param_2,0,1);
      if ((int)puVar2 == 1) {
        puVar3 = *(undefined8 **)(param_1 + 0x220);
        uVar6 = *(undefined8 *)(param_1 + 2);
        lVar4 = func_0x004fa268(param_2);
        if (lVar4 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                          ,0x109,"ssl_set_cert");
          uVar6 = 0x10c;
        }
        else {
          lVar5 = func_0x00353890(lVar4,&lStack_38,uVar6);
          if (lVar5 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                            ,0x10e,"ssl_set_cert");
            uVar6 = 0xf7;
          }
          else {
            if ((lStack_38 != 3) || (iVar1 = func_0x0045fb5c(lVar4), iVar1 != 0)) {
              if (*(long *)(puVar3[4] + lStack_38 * 0x28 + 8) != 0) {
                func_0x0045e3ec(lVar4);
                func_0x004455e4();
                iVar1 = func_0x004fa288(param_2,*(undefined8 *)(puVar3[4] + lStack_38 * 0x28 + 8));
                if (iVar1 == 0) {
                  func_0x0045eb4c(*(undefined8 *)(puVar3[4] + lStack_38 * 0x28 + 8));
                  *(undefined8 *)(puVar3[4] + lStack_38 * 0x28 + 8) = 0;
                  func_0x004455e4();
                }
              }
              uVar6 = func_0x004fc8ac(param_2);
              if ((int)uVar6 != 0) {
/* wm:no support for modified copies */
                func_0x00506714(*(undefined8 *)(puVar3[4] + lStack_38 * 0x28));
                plVar7 = (long *)(puVar3[4] + lStack_38 * 0x28);
                *plVar7 = param_2;
                *puVar3 = plVar7;
                uVar6 = 1;
              }
              return uVar6;
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                            ,0x113,"ssl_set_cert");
            uVar6 = 0x13e;
          }
        }
        func_0x004466b0(0x14,uVar6,0);
        return 0;
      }
      func_0x004464bc();
// proprietary - see LICENSE - do not sell
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0x2f,"SSL_use_certificate");
    }
    func_0x004466b0(0x14,puVar2,0);
  }
  return 0;
}

