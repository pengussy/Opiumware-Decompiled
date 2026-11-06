/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a79ac:c09dc8ef5a
 */

undefined8 FUN_003a79ac(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  iVar1 = *(int *)(param_1 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  if (iVar1 == 0) {
    return 2;
  }
  pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x2d8);
  if ((pcVar2 == (code *)0x0) ||
     (iVar1 = (*pcVar2)(*(undefined8 *)(param_1 + 0x40),&uStack_28,&uStack_2c,
                        *(undefined8 *)(*(long *)(param_1 + 8) + 0x2e0)), iVar1 != 0)) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    return 2;
  }
  iVar1 = func_0x019ec0a0(param_2,&UNK_00003374,2);
  if ((iVar1 == 0) || (iVar1 = func_0x004766ec(param_2,uStack_28,uStack_2c,2), iVar1 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x714,"tls_construct_stoc_next_proto_neg");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4b4) = 1;
  return 1;
}

