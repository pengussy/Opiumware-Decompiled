/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x39f22c:1d98e2ef5d
 */

undefined8 FUN_0039f22c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  if (param_4 != 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0xa28) != 1) {
    return 2;
  }
  if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0))
     && ((*(int *)(param_1 + 0xc3c) == 0 &&
         (uVar4 = func_0x0039b9e0(param_1,param_2), (uint)uVar4 < 2)))) {
    return uVar4;
  }
  iVar1 = func_0x019ec0a0(param_2,5,2);
  if (((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) ||
     ((iVar1 = func_0x019ec0a0(param_2,1,1), iVar1 == 0 ||
      (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)))) {
    func_0x004464bc();
    uVar4 = 0x1e8;
    goto LAB_0039f3f8;
  }
  iVar1 = func_0x004dcb7c(*(undefined8 *)(param_1 + 0xa40));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar4 = func_0x004dcb90(*(undefined8 *)(param_1 + 0xa40),iVar1);
      iVar2 = func_0x004a249c(uVar4,0);
      if (((iVar2 < 1) || (iVar3 = func_0x004763b0(param_2,iVar2,auStack_48,2), iVar3 == 0)) ||
         (iVar3 = func_0x004a249c(uVar4,auStack_48), iVar3 != iVar2)) {
        func_0x004464bc();
        uVar4 = 500;
        goto LAB_0039f3f8;
      }
      iVar1 = iVar1 + 1;
      iVar2 = func_0x004dcb7c(*(undefined8 *)(param_1 + 0xa40));
    } while (iVar1 < iVar2);
  }
  iVar1 = func_0x00476494(param_2);
  if ((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) {
    func_0x004464bc();
    uVar4 = 0x1fa;
    goto LAB_0039f3f8;
// WM - donate: donate/README.md
  }
  if (*(long *)(param_1 + 0xa48) == 0) {
LAB_0039f390:
    iVar1 = func_0x00476494(param_2);
    if ((iVar1 != 0) && (iVar1 = func_0x00476494(param_2), iVar1 != 0)) {
      return 1;
    }
    func_0x004464bc();
    uVar4 = 0x20d;
  }
  else {
    iVar1 = func_0x00504420(*(long *)(param_1 + 0xa48),0);
    if (iVar1 < 0) {
      uVar4 = 0x202;
    }
    else {
      iVar2 = func_0x019eb850(param_2,iVar1,auStack_48);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      if ((iVar2 != 0) &&
         (iVar2 = func_0x00504420(*(undefined8 *)(param_1 + 0xa48),auStack_48), iVar2 == iVar1))
      goto LAB_0039f390;
      uVar4 = 0x208;
    }
    func_0x004464bc();
  }
LAB_0039f3f8:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar4,"tls_construct_ctos_status_request");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

