/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a199c:bd1415a8d2
 */

undefined8
FUN_003a199c(long param_1,long *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int *piVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  long lStack_58;
  
  if (param_3 == 0x4000) {
    return 1;
  }
  if (*(int *)(param_1 + 0xa28) != 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x701,"tls_parse_stoc_status_request");
    uVar4 = 0x6e;
LAB_003a1a60:
    func_0x003a9570(param_1,uVar4,0x6e,0);
    return 0;
  }
/*  watermarked copy - do not remove  */
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
      (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
    if (param_2[2] == 0) {
      *(undefined4 *)(param_1 + 0xa3c) = 1;
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,0x705,"tls_parse_stoc_status_request");
    uVar4 = 0x32;
    goto LAB_003a1a60;
  }
  if (param_2[2] != 0) {
    cVar2 = *(char *)*param_2;
    *param_2 = (long)((char *)*param_2 + 1);
    param_2[2] = param_2[2] + -1;
    if (cVar2 == '\x01') {
      func_0x004743e4(*(undefined8 *)(param_1 + 0xa50),
/* WM - reversing this took months of machine time */
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xce2);
      *(undefined8 *)(param_1 + 0xa58) = 0;
      *(undefined8 *)(param_1 + 0xa50) = 0;
      lVar3 = *(long *)(param_1 + 0xa60);
      if (lVar3 == 0) {
        uVar4 = func_0x004dc0f0();
        lVar3 = func_0x004dc468(uVar4,&DAT_003b141c);
        *(long *)(param_1 + 0xa60) = lVar3;
        piVar6 = *(int **)(param_1 + 0x18);
        if ((*(byte *)(*(long *)(piVar6 + 0x36) + 0x50) >> 3 & 1) == 0) goto LAB_003b0a84;
LAB_003b0a98:
        uVar4 = func_0x004dc468(lVar3,&DAT_003b141c);
        func_0x004dcadc(uVar4,&DAT_004a2478);
        uVar4 = func_0x004dc0f0();
        uVar4 = func_0x004dc468(uVar4,&DAT_003b141c);
        *(undefined8 *)(param_1 + 0xa60) = uVar4;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x18);
        if ((*(byte *)(*(long *)(piVar6 + 0x36) + 0x50) >> 3 & 1) != 0) goto LAB_003b0a98;
LAB_003b0a84:
        if ((*piVar6 < 0x304) || (*piVar6 == 0x10000)) goto LAB_003b0a98;
      }
      uVar7 = param_2[2];
      if (uVar7 == 0) {
        return 1;
      }
/* wm:watermarked copy - do not remove */
      if (2 < uVar7) {
        pbVar8 = (byte *)*param_2;
        uVar9 = (ulong)*pbVar8 << 0x10 | (ulong)pbVar8[1] << 8 | (ulong)pbVar8[2];
        *param_2 = (long)(pbVar8 + 3);
        param_2[2] = uVar7 - 3;
        if (uVar7 - 3 == uVar9) {
          if (uVar9 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xcf9,"tls_process_cert_status_body");
            uVar4 = 0x32;
            puVar5 = (undefined *)0xf0;
          }
          else {
            lVar3 = func_0x019eb530(uVar9,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                    ,0xcfd);
            if (lVar3 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xcfe,"tls_process_cert_status_body");
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uVar4 = 0x50;
              puVar5 = &UNK_0008000f;
            }
            else {
              uVar7 = param_2[2];
              if (uVar7 < uVar9) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0xd03,"tls_process_cert_status_body");
                func_0x003a9570(param_1,0x32,0x9f,0);
                func_0x004743e4(lVar3,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0xd04);
                return 0;
              }
              lVar10 = *param_2;
              _memcpy(lVar3,lVar10,uVar9);
              *param_2 = lVar10 + uVar9;
              param_2[2] = uVar7 - uVar9;
              lStack_58 = lVar3;
              lVar10 = func_0x004a2460(0,&lStack_58,uVar9);
              func_0x004743e4(lVar3,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xd09);
              if (lVar10 != 0) {
                func_0x004dc480(*(undefined8 *)(param_1 + 0xa60),lVar10,param_5);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                return 1;
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xd0c,"tls_process_cert_status_body");
              uVar4 = 0x71;
              puVar5 = (undefined *)0x459;
            }
          }
          goto LAB_003b0a38;
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xcf4,"tls_process_cert_status_body");
      uVar4 = 0x32;
      puVar5 = (undefined *)0x9f;
      goto LAB_003b0a38;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0xcdd,"tls_process_cert_status_body");
  uVar4 = 0x32;
  puVar5 = (undefined *)0x149;
LAB_003b0a38:
  func_0x003a9570(param_1,uVar4,puVar5,0);
  return 0;
}

