/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39a0b4:5dde62cf0e
 */

undefined8
FUN_0039a0b4(undefined8 param_1,byte *param_2,long param_3,undefined8 param_4,long param_5,
            long param_6,long *param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return 1;
  }
  puVar4 = (ulong *)(param_6 + 0x18);
  do {
    *(uint *)((long)puVar4 + 0x14) = (uint)*param_2;
    uVar3 = puVar4[-3] & 7 ^ 3;
    *puVar4 = uVar3;
    iVar1 = func_0x019ebb80(param_5,puVar4[-3],puVar4[-1],0);
    if (iVar1 == 0) {
      uVar2 = 0x607;
LAB_0039a174:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,uVar2,"tls_initialise_write_packets_default");
      func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    *param_7 = *param_7 + 1;
    iVar1 = func_0x019eb850(param_5,uVar3,0);
    if (iVar1 == 0) {
      uVar2 = 0x60c;
      goto LAB_0039a174;
    }
    puVar4 = puVar4 + 6;
/* wm:watermarked copy - do not remove */
    param_5 = param_5 + 0x38;
    param_3 = param_3 + -1;
    param_2 = param_2 + 0x18;
    if (param_3 == 0) {
      return 1;
    }
  } while( true );
}

