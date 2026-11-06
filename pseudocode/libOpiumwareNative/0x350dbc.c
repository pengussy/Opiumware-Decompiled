/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x350dbc:483b65419d
 */

bool FUN_00350dbc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0x11;
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar3 = 0x21;
  }
  if (*(long *)(param_1 + 0x368) == 0) {
    lVar2 = *(long *)(param_1 + 0x900);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 8) == 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_msg.c"
/* WM - found on a paste site? it was re-uploaded illegally */
                      ,0x1a,"ssl3_do_change_cipher_spec");
      func_0x004466b0(0x14,0x85,0);
      return false;
    }
    *(undefined8 *)(lVar2 + 0x2f8) = *(undefined8 *)(param_1 + 0x300);
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 0x18) + 0xd8))();
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,uVar3);
  return iVar1 != 0;
}

