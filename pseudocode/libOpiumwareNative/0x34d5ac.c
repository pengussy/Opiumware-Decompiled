/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x34d5ac:79547824a1
 */

undefined8 FUN_0034d5ac(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x1b0) == 0) {
    if (param_3 >> 0x1f == 0) {
      iVar1 = func_0x003e9a60(*(undefined8 *)(param_1 + 0x1a8));
      if (0 < iVar1 && iVar1 == (int)param_3) {
        return 1;
      }
      puVar2 = &UNK_000c0103;
      uVar3 = 0x40;
    }
    else {
      puVar2 = (undefined *)0xed;
      uVar3 = 0x3b;
/* watermarked copy - do not remove */
    }
  }
  else {
    iVar1 = func_0x019e969c();
    if (iVar1 != 0) {
      return 1;
    }
    puVar2 = &UNK_000c0103;
    uVar3 = 0x46;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_enc.c"
                  ,uVar3,"ssl3_finish_mac");
  func_0x003a9570(param_1,0x50,puVar2,0);
  return 0;
}

