/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35a32c:34142d71ad
 */

undefined8 FUN_0035a32c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_1 != 0) {
    lVar2 = *(long *)**(undefined8 **)(param_1 + 0x158);
    if (lVar2 != 0) {
      lVar4 = ((long *)**(undefined8 **)(param_1 + 0x158))[1];
      if (lVar4 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                        ,0x84a,"SSL_CTX_check_private_key");
        func_0x004466b0(0x14,0xbe,0);
        return 0;
      }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if ((lVar2 == 0) || (lVar2 = func_0x00505650(*(undefined8 *)(lVar2 + 0x50)), lVar2 == 0)) {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c619be,400,&UNK_01c61a5d);
        func_0x004466b0(0xb,0x6c,0);
        return 0;
      }
      if (lVar2 == 0) {
        func_0x004464bc(0,lVar4);
        func_0x004465b0(&UNK_01c619be,0x199,&UNK_01c61a74);
        puVar5 = &UNK_000c0102;
      }
      else {
        uVar3 = func_0x0045ec3c();
        iVar1 = (int)uVar3;
        if (iVar1 < 0) {
          if (iVar1 == -2) {
            func_0x004464bc();
            func_0x004465b0(&UNK_01c619be,0x1a6,&UNK_01c61a74);
            puVar5 = (undefined *)0x75;
          }
          else {
            if (iVar1 != -1) {
              return 0;
            }
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            func_0x004464bc();
            func_0x004465b0(&UNK_01c619be,0x1a3,&UNK_01c61a74);
            puVar5 = (undefined *)0x73;
          }
        }
        else {
          if (iVar1 == 1) {
            return uVar3;
          }
          if (iVar1 != 0) {
            return 0;
          }
          func_0x004464bc();
          func_0x004465b0(&UNK_01c619be,0x1a0,&UNK_01c61a74);
          puVar5 = (undefined *)0x74;
        }
      }
      func_0x004466b0(0xb,puVar5,0);
      return 0;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,0x846,"SSL_CTX_check_private_key");
  func_0x004466b0(0x14,0xb1,0);
  return 0;
}

