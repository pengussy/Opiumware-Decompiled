/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3df75c:22bdafe5c5
 */

undefined8 FUN_003df75c(int *param_1,long *param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*param_1 == 0x10) && (*(long *)(param_1 + 2) != 0)) {
    puVar1 = (undefined8 *)func_0x003db224(&UNK_01dc89e0,param_1);
    if (puVar1 != (undefined8 *)0x0) {
      uVar4 = *puVar1;
      iVar3 = *(int *)(puVar1 + 1);
      uVar2 = func_0x003ddb7c(uVar4);
      if (param_2 != (long *)0x0) {
        *param_2 = (long)iVar3;
      }
      iVar3 = (int)uVar2;
      if (param_3 != 0) {
        if (iVar3 <= param_4) {
// watermarked copy - do not remove
          param_4 = iVar3;
        }
        uVar4 = func_0x002f78b4(uVar4);
        _memcpy(param_3,uVar4,(long)param_4);
      }
      if (iVar3 != -1) goto LAB_003df830;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/evp_asn1.c"
                  ,0xcb,"ossl_asn1_type_get_octetstring_int");
  func_0x004466b0(0xd,0x6d,0);
  uVar2 = 0xffffffff;
LAB_003df830:
  func_0x003e3aac(puVar1,&UNK_01dc89e0);
  return uVar2;
}

