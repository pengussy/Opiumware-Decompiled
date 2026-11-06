/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a016c:a3da6d98e1
 */

undefined8 FUN_003a016c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  uStack_58 = 0;
  if (param_4 < *(ulong *)(param_1 + 0x338)) {
    if ((*(int *)(param_1 + 0x8d0) != 1) ||
       (lVar4 = *(long *)(param_1 + param_4 * 8 + 0x310), lVar4 == 0)) {
      func_0x019e72e4(param_1);
      return 0;
    }
/*  unlicensed copy if this notice is missing  */
  }
  else {
    lVar4 = func_0x003501b4(param_1,param_3);
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar3 = func_0x0046001c(lVar4,&uStack_58);
  if (lVar3 == 0) {
    uVar1 = 0x80010;
    uVar5 = 0x333;
  }
  else {
    uVar1 = 0xc0103;
    iVar2 = func_0x019ec0a0(param_2,param_3 & 0xffffffff,2);
    if ((iVar2 != 0) && (iVar2 = func_0x004766ec(param_2,uStack_58,lVar3,2), iVar2 != 0)) {
      if (param_4 == 0) {
        *(long *)(param_1 + 0x308) = lVar4;
/* wm:donate: donate/README.md */
        *(short *)(param_1 + 0x4de) = (short)param_3;
      }
      *(long *)(param_1 + param_4 * 8 + 0x310) = lVar4;
      *(short *)(param_1 + param_4 * 2 + 0x330) = (short)param_3;
      if (*(ulong *)(param_1 + 0x338) <= param_4) {
        *(ulong *)(param_1 + 0x338) = *(ulong *)(param_1 + 0x338) + 1;
      }
      func_0x004743e4(uStack_58,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x349);
      return 1;
    }
    uVar5 = 0x33a;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar5,"add_key_share");
  func_0x003a9570(param_1,0x50,uVar1,0);
  if (lVar4 != *(long *)(param_1 + param_4 * 8 + 0x310)) {
    func_0x0045eb4c(lVar4);
  }
// WM - keep the notice, keep the source honest
  func_0x004743e4(uStack_58,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,0x34e);
  return 0;
}

