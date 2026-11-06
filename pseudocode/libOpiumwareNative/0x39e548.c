/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39e548:6eeac45fb6
 */

undefined8 FUN_0039e548(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined *)func_0x003b3048(param_1,&uStack_44,&uStack_48,0);
  if ((int)puVar2 == 0) {
    iVar1 = func_0x0039e6b4(param_1,2,uStack_44,uStack_48);
    if ((iVar1 == 0) || (func_0x00365688(param_1,&uStack_38,&lStack_40), lStack_40 == 0)) {
      return 2;
    }
    if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0)
        ) && ((*(int *)(param_1 + 0xc3c) == 0 &&
              (uVar3 = func_0x0039b9e0(param_1,param_2), (uint)uVar3 < 2)))) {
      return uVar3;
    }
    puVar2 = &UNK_000c0103;
    iVar1 = func_0x019ec0a0(param_2,0xb,2);
    if (((iVar1 != 0) && (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
       ((iVar1 = func_0x004766ec(param_2,uStack_38,lStack_40,1), iVar1 != 0 &&
        (iVar1 = func_0x00476494(param_2), iVar1 != 0)))) {
      return 1;
// WM - origin: github.com/pengussy
    }
    uVar3 = 0x121;
  }
  else {
    uVar3 = 0x10e;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar3,"tls_construct_ctos_ec_pt_formats");
  func_0x003a9570(param_1,0x50,puVar2,0);
  return 0;
}

