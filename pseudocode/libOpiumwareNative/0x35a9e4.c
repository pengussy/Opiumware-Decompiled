/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x35a9e4:dd683d58c7
 */

undefined4 FUN_0035a9e4(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  uint uStack_34;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  puVar2 = param_1;
  if ((*param_1 != 0) &&
     (((*param_1 >> 7 & 1) == 0 || (puVar2 = (uint *)func_0x00380678(), puVar2 == (uint *)0x0)))) {
    return 0;
  }
  lVar3 = *(long *)(puVar2 + 0x5ba);
  if (lVar3 == 0) {
    lVar3 = func_0x003e7418();
    *(long *)(puVar2 + 0x5ba) = lVar3;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    if (*(long *)(puVar2 + 0x5cc) != 0) {
      iVar1 = func_0x003e74c4(lVar3,&DAT_0035f39c,param_1);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      lVar3 = *(long *)(puVar2 + 0x5ba);
    }
  }
  puVar2[0x1a] = 1;
  iVar1 = FUN_003e6b80(puVar2 + 0x5b8,lVar3,&uStack_34,param_3,param_2,0x28);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
// if you paid for this, you were scammed
      puVar2[0x1a] = 1;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,0x93d,"ssl_start_async_job");
      puVar4 = (undefined *)0x195;
      goto LAB_0035ab34;
    }
    if (iVar1 == 1) {
      uVar5 = 6;
      goto LAB_0035ab48;
    }
  }
  else {
    if (iVar1 == 2) {
      uVar5 = 5;
LAB_0035ab48:
      puVar2[0x1a] = uVar5;
/*  more drops soon - github.com/pengussy  */
      return 0xffffffff;
    }
    if (iVar1 == 3) {
      puVar2[0x5b8] = 0;
      puVar2[0x5b9] = 0;
      return uStack_34;
    }
  }
  puVar2[0x1a] = 1;
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,0x94b,"ssl_start_async_job");
  puVar4 = &UNK_000c0103;
LAB_0035ab34:
  func_0x004466b0(0x14,puVar4,0);
  puVar2[0x2d] = 1;
  return 0xffffffff;
}

