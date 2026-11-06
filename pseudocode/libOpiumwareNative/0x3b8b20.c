/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b8b20:ebffb3677f
 */

undefined8 FUN_003b8b20(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uStack_44;
  
  pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0xd0);
  if (pcVar2 == (code *)0x0) {
    puVar3 = (undefined *)0x190;
    uVar4 = 0x5fd;
  }
  else {
    iVar1 = (*pcVar2)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x4f0),&uStack_44);
    puVar3 = (undefined *)0x190;
    uVar4 = 0x5fd;
    if ((iVar1 != 0) && (uStack_44 < 0x100)) {
      puVar3 = &UNK_000c0103;
      lVar5 = *(long *)(param_1 + 0x4f0);
      *(ulong *)(lVar5 + 0x100) = (ulong)uStack_44;
      iVar1 = func_0x019ec0a0(param_2,0xfeff,2);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      if ((iVar1 != 0) && (iVar1 = func_0x004766ec(param_2,lVar5,(ulong)uStack_44,1), iVar1 != 0)) {
        return 1;
      }
      uVar4 = 0x604;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,uVar4,"dtls_construct_hello_verify_request");
  func_0x003a9570(param_1,0xffffffff,puVar3,0);
  return 0;
}

