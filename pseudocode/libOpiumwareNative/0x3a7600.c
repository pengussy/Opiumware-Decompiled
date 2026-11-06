/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a7600:fa00f6e38d
 */

undefined8 FUN_003a7600(long param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uStack_50;
  long lStack_48;
  
  if (*(short *)(param_1 + 0x4de) == 0) {
    return 2;
  }
  func_0x00364394(param_1,&lStack_48,&uStack_50);
  if (uStack_50 == 0) {
    uVar4 = 0x693;
  }
  else {
    uVar4 = func_0x0035d294(param_1);
    if (uStack_50 != 0) {
      uVar5 = 0;
      bVar2 = true;
      do {
        sVar1 = *(short *)(lStack_48 + uVar5 * 2);
        iVar3 = func_0x003644b4(param_1,sVar1,uVar4,uVar4,0,0);
        if ((iVar3 != 0) && (iVar3 = func_0x003645fc(param_1,sVar1,&UNK_00020004), iVar3 != 0)) {
          if (bVar2) {
            if (*(short *)(param_1 + 0x4de) == sVar1) {
              return 2;
            }
            iVar3 = func_0x019ec0a0(param_2,10,2);
            if (((iVar3 == 0) || (iVar3 = func_0x019eba0c(param_2,2), iVar3 == 0)) ||
               (iVar3 = func_0x019eba0c(param_2,2), iVar3 == 0)) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
              uVar4 = 0x6ab;
              goto LAB_003a7764;
            }
          }
          iVar3 = func_0x019ec0a0(param_2,sVar1,2);
          if (iVar3 == 0) {
            uVar4 = 0x6b2;
            goto LAB_003a7764;
          }
          bVar2 = false;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uStack_50);
    }
    iVar3 = func_0x00476494(param_2);
    if ((iVar3 != 0) && (iVar3 = func_0x00476494(param_2), iVar3 != 0)) {
      return 1;
    }
    uVar4 = 0x6b9;
  }
LAB_003a7764:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar4,"tls_construct_stoc_supported_groups");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

