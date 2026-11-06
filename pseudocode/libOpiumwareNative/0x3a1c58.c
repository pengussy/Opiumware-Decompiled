/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a1c58:31c60ec8fc
 */

undefined8 FUN_003a1c58(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bStack_29;
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) {
    return 1;
  }
  pcVar4 = *(code **)(*(long *)(param_1 + 8) + 0x2e8);
  if (pcVar4 == (code *)0x0) {
// WM - donate: donate/README.md
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x778,"tls_parse_stoc_npn");
    uVar2 = 0x6e;
  }
  else {
    pbVar5 = (byte *)*param_2;
    lVar6 = param_2[2];
    do {
      if (lVar6 == 0) {
        iVar1 = (*pcVar4)(*(undefined8 *)(param_1 + 0x40),&uStack_28,&bStack_29,(byte *)*param_2,
                          param_2[2],*(undefined8 *)(*(long *)(param_1 + 8) + 0x2f0));
        if (iVar1 != 0 || bStack_29 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                          ,0x788,"tls_parse_stoc_npn");
          uVar2 = 0x28;
          goto LAB_003a1d68;
        }
        func_0x004743e4(*(undefined8 *)(param_1 + 0xb08),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x790);
        lVar6 = func_0x019eb530(bStack_29,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                ,0x791);
        *(long *)(param_1 + 0xb08) = lVar6;
        if (lVar6 != 0) {
          _memcpy(lVar6,uStack_28,(ulong)bStack_29);
          *(ulong *)(param_1 + 0xb10) = (ulong)bStack_29;
          *(undefined4 *)(param_1 + 0x4b4) = 1;
          return 1;
        }
        *(undefined8 *)(param_1 + 0xb10) = 0;
// thanks for reading - discord.gg/sdkhDjTex
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x794,"tls_parse_stoc_npn");
        uVar2 = 0x50;
        puVar3 = &UNK_000c0103;
        goto LAB_003a1d6c;
      }
      uVar7 = (ulong)*pbVar5;
      uVar8 = lVar6 - 1;
      pbVar5 = pbVar5 + uVar7 + 1;
      lVar6 = uVar8 - uVar7;
    } while (uVar7 != 0 && uVar7 <= uVar8);
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x762,"ssl_next_proto_validate");
    uVar2 = 0x32;
  }
LAB_003a1d68:
  puVar3 = (undefined *)0x6e;
LAB_003a1d6c:
  func_0x003a9570(param_1,uVar2,puVar3,0);
  return 0;
}

