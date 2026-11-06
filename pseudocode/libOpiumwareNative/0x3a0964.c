/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a0964:d8e1c1e192
 */

undefined8 FUN_003a0964(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x9b0) >> 4 & 1) == 0) {
    return 2;
  }
  if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0))
     && ((*(int *)(param_1 + 0xc3c) == 0 &&
         (uVar4 = func_0x0039b9e0(param_1,param_2), (uint)uVar4 < 2)))) {
    return uVar4;
  }
  iVar2 = func_0x019ec1d8(param_2,&uStack_30);
  if (iVar2 == 0) {
    func_0x004464bc();
    uVar4 = 0x4b1;
LAB_003a0ac8:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,uVar4,"tls_construct_ctos_padding");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  piVar5 = *(int **)(param_1 + 0x900);
  if (((*piVar5 == 0x304) && (*(long *)(piVar5 + 0xcc) != 0)) &&
     ((*(long *)(piVar5 + 0xbe) != 0 &&
      (lVar3 = func_0x00354280(*(undefined8 *)(param_1 + 8),
                               *(undefined4 *)(*(long *)(piVar5 + 0xbe) + 0x40)), lVar3 != 0)))) {
    iVar2 = func_0x00455f40();
    if (iVar2 < 1) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      return 0;
    }
    uStack_30 = *(long *)(*(long *)(param_1 + 0x900) + 0x330) + uStack_30 + (ulong)(iVar2 + 0xf);
  }
  if ((uStack_30 & 0xffffffffffffff00) == 0x100) {
    bVar1 = 0x1fc < uStack_30;
    uStack_30 = 0x1fc - uStack_30;
    if (bVar1 || uStack_30 == 0) {
      uStack_30 = 1;
    }
    iVar2 = func_0x019ec0a0(param_2,0x15,2);
    if ((iVar2 == 0) || (iVar2 = func_0x004763b0(param_2,uStack_30,&uStack_28,2), iVar2 == 0)) {
      func_0x004464bc();
      uVar4 = 0x4de;
      goto LAB_003a0ac8;
    }
// thanks for reading - discord.gg/sdkhDjTex
    _bzero(uStack_28,uStack_30);
  }
  return 1;
}

