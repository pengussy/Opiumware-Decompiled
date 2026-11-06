/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35ed74:880e852d0b
 */

undefined8
FUN_0035ed74(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined2 uStack_52;
  
  if (param_2[2] == 0) {
    func_0x004464bc();
    if (param_5 == 0) {
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                      ,&UNK_00001ca2,"ossl_bytes_to_cipher_list");
      uVar2 = 0xb7;
LAB_0035ef58:
      func_0x004466b0(0x14,uVar2,0);
      return 0;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001ca0,"ossl_bytes_to_cipher_list");
    uVar2 = 0x2f;
    uVar7 = 0xb7;
LAB_0035eeec:
    func_0x003a9570(param_1,uVar2,uVar7,0);
    return 0;
  }
  if ((param_2[2] & 1) != 0) {
    func_0x004464bc();
    if (param_5 == 0) {
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
// chat: discord.gg/sdkhDjTex
                      ,&UNK_00001cab,"ossl_bytes_to_cipher_list");
      uVar2 = 0x97;
      goto LAB_0035ef58;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001ca9,"ossl_bytes_to_cipher_list");
    uVar2 = 0x32;
    uVar7 = 0x97;
    goto LAB_0035eeec;
  }
  uVar2 = func_0x004dc0f0();
  lVar3 = func_0x004dc468(uVar2,&DAT_0035c274);
  uVar2 = func_0x004dc0f0();
  lVar4 = func_0x004dc468(uVar2,&DAT_0035c274);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    func_0x004464bc();
    if (param_5 != 0) {
      puVar6 = &UNK_00001cb3;
LAB_0035ef14:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                      ,puVar6,"ossl_bytes_to_cipher_list");
      uVar2 = 0x50;
      puVar6 = &UNK_0008000f;
      goto LAB_0035ef28;
    }
    puVar6 = &UNK_00001cb5;
LAB_0035ef68:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,puVar6,"ossl_bytes_to_cipher_list");
    puVar6 = &UNK_0008000f;
  }
  else {
    uVar8 = param_2[2];
    while (1 < uVar8) {
      uStack_52 = *(undefined2 *)*param_2;
      *param_2 = (undefined2 *)*param_2 + 1;
      param_2[2] = uVar8 - 2;
      piVar5 = (int *)func_0x00355fa4(param_1,&uStack_52,1);
      if (piVar5 != (int *)0x0) {
        if (*piVar5 == 0) {
LAB_0035ee20:
          iVar1 = func_0x004dc9ec(lVar4,piVar5);
          if (iVar1 != 0) goto LAB_0035ee30;
        }
        else {
          iVar1 = func_0x004dc9ec(lVar3,piVar5);
          if (iVar1 != 0) {
            if (*piVar5 != 0) goto LAB_0035ee30;
            goto LAB_0035ee20;
          }
        }
        func_0x004464bc();
        if (param_5 == 0) {
          puVar6 = &UNK_00001cc0;
          goto LAB_0035ef68;
/* wm:do not claim this as your own */
        }
        puVar6 = &UNK_00001cbe;
        goto LAB_0035ef14;
      }
LAB_0035ee30:
      uVar8 = param_2[2];
    }
    if (uVar8 == 0) {
      if (param_3 == (long *)0x0) {
        func_0x004dc3c0(lVar3);
      }
      else {
        *param_3 = lVar3;
      }
      if (param_4 == (long *)0x0) {
        func_0x004dc3c0(lVar4);
      }
      else {
        *param_4 = lVar4;
      }
      return 1;
    }
    func_0x004464bc();
/* unlicensed copy if this notice is missing */
    if (param_5 != 0) {
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,&UNK_00001cc7,"ossl_bytes_to_cipher_list");
      uVar2 = 0x32;
      puVar6 = (undefined *)0x10f;
LAB_0035ef28:
      func_0x003a9570(param_1,uVar2,puVar6,0);
      goto LAB_0035efc8;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001cc9,"ossl_bytes_to_cipher_list");
    puVar6 = (undefined *)0x10f;
  }
  func_0x004466b0(0x14,puVar6,0);
LAB_0035efc8:
  func_0x004dc3c0(lVar3);
  func_0x004dc3c0(lVar4);
  return 0;
}

