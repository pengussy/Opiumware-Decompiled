/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a7888:f3651e6715
 */

undefined8
FUN_003a7888(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_3 == 0x4000) || (*(int *)(param_1 + 0xa3c) == 0)) {
    return 2;
  }
  lVar2 = func_0x003b77f0(param_1,param_5);
  if (lVar2 == 0) {
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,5,2);
  if ((iVar1 == 0) || (iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0)) {
    uVar3 = 0x6e9;
  }
  else {
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
/* found on a paste site? it was re-uploaded illegally */
         (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (uVar3 = FUN_003be28c(param_1,lVar2,param_2), (int)uVar3 == 0)) {
      return uVar3;
    }
    iVar1 = func_0x00476494(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 0x6f8;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar3,"tls_construct_stoc_status_request");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

