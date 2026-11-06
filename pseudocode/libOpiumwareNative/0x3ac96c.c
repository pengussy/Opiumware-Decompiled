/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ac96c:1fa0b8c70e
 */

undefined8 FUN_003ac96c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xb10);
  iVar1 = func_0x004766ec(param_2,*(undefined8 *)(param_1 + 0xb08),uVar2,1);
  if (iVar1 != 0) {
    lVar3 = 0x20 - ((ulong)((int)uVar2 + 2) & 0x1f);
    iVar1 = func_0x004763b0(param_2,lVar3,&uStack_38,1);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    if (iVar1 != 0) {
      _bzero(uStack_38,lVar3);
      return 1;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0x1158,"tls_construct_next_proto");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

