/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a1a94:fbcfbf722c
 */

undefined8
FUN_003a1a94(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((uint)param_3 == 0x4000) {
    return 1;
  }
  if (*(long *)(param_1 + 0xd20) == 0) {
    lVar1 = func_0x003a39f0(*(long *)(param_1 + 0x880) + 0x80,((uint)param_3 >> 7 ^ 0xffffffff) & 2,
                            0x12,0);
    if (lVar1 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x744,"tls_parse_stoc_sct");
      uVar2 = 0x6e;
      puVar3 = (undefined *)0x6e;
      goto LAB_003a1c04;
    }
    uVar2 = func_0x003a3c20(param_1,param_3,0x12,*param_2,param_2[2],param_4,param_5);
    if ((int)uVar2 == 0) {
// thanks for reading - discord.gg/sdkhDjTex
      return uVar2;
    }
  }
  else {
    uVar6 = param_2[2];
    func_0x004743e4(*(undefined8 *)(param_1 + 0xa30),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x727);
    *(undefined8 *)(param_1 + 0xa30) = 0;
    *(short *)(param_1 + 0xa38) = (short)uVar6;
    if (uVar6 != 0) {
      lVar1 = func_0x019eb530(uVar6,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                              ,0x72c);
      *(long *)(param_1 + 0xa30) = lVar1;
      if (lVar1 == 0) {
        *(undefined2 *)(param_1 + 0xa38) = 0;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x72f,"tls_parse_stoc_sct");
        uVar2 = 0x50;
        puVar3 = &UNK_0008000f;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      }
      else {
        uVar4 = param_2[2];
        if (uVar6 <= uVar4) {
          lVar5 = *param_2;
          _memcpy(lVar1,lVar5,uVar6);
          *param_2 = lVar5 + uVar6;
          param_2[2] = uVar4 - uVar6;
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x733,"tls_parse_stoc_sct");
        uVar2 = 0x50;
        puVar3 = &UNK_000c0103;
      }
LAB_003a1c04:
      func_0x003a9570(param_1,uVar2,puVar3,0);
      return 0;
    }
  }
  return 1;
}

