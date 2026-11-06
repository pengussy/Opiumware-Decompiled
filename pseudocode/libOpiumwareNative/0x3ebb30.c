/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ebb30:52912b08c2
 */

undefined8 FUN_003ebb30(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if ((((param_3 < 1) || (param_2 == 0)) || (*(int *)(param_1 + 0x28) == 0)) ||
     ((uVar1 = _fread(param_2,1,param_3,*(undefined8 *)(param_1 + 0x40)), (int)uVar1 != 0 ||
      (uVar1 = _ferror(*(undefined8 *)(param_1 + 0x40)), (int)uVar1 == 0)))) {
    return uVar1;
  }
  func_0x004464bc();
/*  proprietary - see LICENSE - do not sell  */
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                  ,0x9b,"file_read");
  puVar2 = (undefined4 *)___error();
  func_0x004466b0(2,*puVar2,"calling fread()");
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                  ,0x9d,"file_read");
  func_0x004466b0(0x20,&UNK_00080002,0);
  return 0xffffffff;
}

