/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b098c:4e34841b2c
   =========================================================================== */

undefined8 FUN_003b098c(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int *piVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long lStack_58;
  
  if (param_3[2] != 0) {
    cVar1 = *(char *)*param_3;
    *param_3 = (long)((char *)*param_3 + 1);
    param_3[2] = param_3[2] + -1;
    if (cVar1 == '\x01') {
      func_0x004743e4(*(undefined8 *)(param_1 + 0xa50),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xce2);
      *(undefined8 *)(param_1 + 0xa58) = 0;
      *(undefined8 *)(param_1 + 0xa50) = 0;
      lVar2 = *(long *)(param_1 + 0xa60);
      if (lVar2 == 0) {
        uVar3 = func_0x004dc0f0();
        lVar2 = func_0x004dc468(uVar3,&DAT_003b141c);
        *(long *)(param_1 + 0xa60) = lVar2;
        piVar5 = *(int **)(param_1 + 0x18);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        if ((*(byte *)(*(long *)(piVar5 + 0x36) + 0x50) >> 3 & 1) == 0) goto LAB_003b0a84;
LAB_003b0a98:
        uVar3 = func_0x004dc468(lVar2,&DAT_003b141c);
        func_0x004dcadc(uVar3,&DAT_004a2478);
        uVar3 = func_0x004dc0f0();
        uVar3 = func_0x004dc468(uVar3,&DAT_003b141c);
        *(undefined8 *)(param_1 + 0xa60) = uVar3;
      }
      else {
        piVar5 = *(int **)(param_1 + 0x18);
        if ((*(byte *)(*(long *)(piVar5 + 0x36) + 0x50) >> 3 & 1) != 0) goto LAB_003b0a98;
LAB_003b0a84:
        if ((*piVar5 < 0x304) || (*piVar5 == 0x10000)) goto LAB_003b0a98;
      }
      uVar6 = param_3[2];
      if (uVar6 == 0) {
        return 1;
      }
      if (2 < uVar6) {
        pbVar7 = (byte *)*param_3;
        uVar8 = (ulong)*pbVar7 << 0x10 | (ulong)pbVar7[1] << 8 | (ulong)pbVar7[2];
        *param_3 = (long)(pbVar7 + 3);
        param_3[2] = uVar6 - 3;
        if (uVar6 - 3 == uVar8) {
          if (uVar8 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                            ,0xcf9,"tls_process_cert_status_body");
            uVar3 = 0x32;
            puVar4 = (undefined *)0xf0;
          }
          else {
            lVar2 = func_0x019eb530(uVar8,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                    ,0xcfd);
            if (lVar2 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xcfe,"tls_process_cert_status_body");
              uVar3 = 0x50;
              puVar4 = &UNK_0008000f;
            }
            else {
              uVar6 = param_3[2];
              if (uVar6 < uVar8) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0xd03,"tls_process_cert_status_body");
                func_0x003a9570(param_1,0x32,0x9f,0);
                func_0x004743e4(lVar2,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0xd04);
                return 0;
              }
              lVar9 = *param_3;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              _memcpy(lVar2,lVar9,uVar8);
              *param_3 = lVar9 + uVar8;
              param_3[2] = uVar6 - uVar8;
              lStack_58 = lVar2;
              lVar9 = func_0x004a2460(0,&lStack_58,uVar8);
              func_0x004743e4(lVar2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xd09);
              if (lVar9 != 0) {
                func_0x004dc480(*(undefined8 *)(param_1 + 0xa60),lVar9,param_2);
                return 1;
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xd0c,"tls_process_cert_status_body");
              uVar3 = 0x71;
              puVar4 = (undefined *)0x459;
            }
          }
          goto LAB_003b0a38;
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xcf4,"tls_process_cert_status_body");
      uVar3 = 0x32;
      puVar4 = (undefined *)0x9f;
      goto LAB_003b0a38;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0xcdd,"tls_process_cert_status_body");
  uVar3 = 0x32;
  puVar4 = (undefined *)0x149;
LAB_003b0a38:
  func_0x003a9570(param_1,uVar3,puVar4,0);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  return 0;
}

