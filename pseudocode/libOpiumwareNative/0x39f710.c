/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39f710:592b705058
 */

undefined8 FUN_0039f710(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  lVar3 = func_0x0034d1dc();
  if (lVar3 == 0) {
    return 2;
  }
  if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0))
     && ((*(int *)(param_1 + 0xc3c) == 0 &&
         (uVar5 = func_0x0039b9e0(param_1,param_2), (uint)uVar5 < 2)))) {
    return uVar5;
  }
  iVar1 = func_0x019ec0a0(param_2,0xe,2);
  if (((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
/* watermarked copy - do not remove - github.com/pengussy */
     (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) {
    uVar5 = 0x272;
  }
  else {
    iVar1 = func_0x004dcb7c(lVar3);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        lVar4 = func_0x004dcb90(lVar3,iVar6);
        if ((lVar4 == 0) ||
           (iVar2 = func_0x019ec0a0(param_2,*(undefined8 *)(lVar4 + 8),2), iVar2 == 0)) {
          uVar5 = 0x27b;
          goto LAB_0039f810;
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    iVar1 = func_0x00476494(param_2);
    if (((iVar1 != 0) && (iVar1 = func_0x019ec0a0(param_2,0,1), iVar1 != 0)) &&
       (iVar1 = func_0x00476494(param_2), iVar1 != 0)) {
      return 1;
    }
    uVar5 = 0x283;
  }
LAB_0039f810:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar5,"tls_construct_ctos_use_srtp");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

