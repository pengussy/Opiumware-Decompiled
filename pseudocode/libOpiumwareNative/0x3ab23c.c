/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ab23c:de9f725240
 */

undefined8 FUN_003ab23c(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x3b0);
  uVar3 = *(undefined8 *)(param_1 + 0x3b8);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  if ((uVar1 >> 5 & 1) == 0) {
    if (lVar4 == 0 && (uVar1 & 8) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xfe2,"tls_client_key_exchange_post_work");
      func_0x003a9570(param_1,0x50,&UNK_00080106,0);
      lVar4 = 0;
// thanks for reading - discord.gg/sdkhDjTex
    }
    else {
      iVar2 = func_0x0034ff4c(param_1,lVar4,uVar3,1);
      if (iVar2 != 0) {
        return 1;
      }
      lVar4 = 0;
      uVar3 = 0;
    }
  }
  else {
    iVar2 = FUN_0036e530(param_1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  func_0x00474404(lVar4,uVar3,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* more drops soon - github.com/pengussy - github.com/pengussy */
                  ,"A/QuartzCore");
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  return 0;
}

