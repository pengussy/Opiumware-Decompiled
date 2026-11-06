/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ada04:d9f41b8613
 */

undefined8 FUN_003ada04(long param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  ushort *puVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  ushort *puStack_80;
  long lStack_78;
/* wm:donate: donate/README.md */
  ulong uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  long lStack_58;
  
  lStack_58 = 0;
  if (*(char *)(param_1 + 0xb5a) != '\0') {
    if (*(char *)(param_1 + 0xb5a) == '\x02') {
      puStack_80 = (ushort *)0x0;
      uVar8 = func_0x003b486c(param_1,param_2,&puStack_80);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      if (puStack_80 == (ushort *)0x0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x8f1,"tls_process_server_rpk");
        func_0x003a9570(param_1,0x32,0x15c,0);
        return 0;
      }
      func_0x0045eb4c(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8));
      *(ushort **)(*(long *)(param_1 + 0x900) + 0x2b8) = puStack_80;
      return 2;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x94d,"tls_process_server_certificate");
    uVar8 = 0x2b;
    puVar10 = (undefined *)0xf7;
    goto LAB_003adb74;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  }
  puVar15 = *(undefined8 **)(param_1 + 8);
  uVar8 = func_0x004dc0f0();
  lVar9 = func_0x004dc468(uVar8,&DAT_003b07e8);
  *(long *)(*(long *)(param_1 + 0x900) + 0x2c8) = lVar9;
  if (lVar9 == 0) {
    func_0x004464bc();
    uVar8 = 0x952;
LAB_003adb5c:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar8,"tls_process_server_certificate");
    puVar10 = &UNK_0008000f;
    uVar8 = 0x50;
    goto LAB_003adb74;
  }
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar7 = **(int **)(param_1 + 0x18), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
    if (param_2[2] != 0) {
      cVar1 = *(char *)*param_2;
      *param_2 = (long)((char *)*param_2 + 1);
      param_2[2] = param_2[2] + -1;
      if (cVar1 == '\0') goto LAB_003adae0;
    }
  }
  else {
LAB_003adae0:
    if (2 < (ulong)param_2[2]) {
      pbVar13 = (byte *)*param_2;
/* do not claim this as your own */
      bVar2 = *pbVar13;
      bVar3 = pbVar13[1];
      bVar4 = pbVar13[2];
      *param_2 = (long)(pbVar13 + 3);
      uVar6 = param_2[2] - 3;
      param_2[2] = uVar6;
      if ((uVar6 != 0) &&
         (uVar11 = (ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4, uVar6 == uVar11)) {
        lVar14 = 0;
        while (uVar6 = uVar11 - 3, 2 < uVar11) {
          pbVar13 = (byte *)*param_2;
          uVar11 = (ulong)*pbVar13 << 0x10 | (ulong)pbVar13[1] << 8 | (ulong)pbVar13[2];
          pbVar13 = pbVar13 + 3;
          *param_2 = (long)pbVar13;
          param_2[2] = uVar6;
          if (uVar6 < uVar11) break;
          *param_2 = (long)(pbVar13 + uVar11);
          param_2[2] = uVar6 - uVar11;
          pbStack_60 = pbVar13;
          lStack_58 = func_0x00506794(*puVar15,puVar15[0x91]);
          if (lStack_58 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x968,"tls_process_server_certificate");
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            uVar8 = 0x32;
LAB_003ade00:
            puVar10 = &UNK_0008000d;
            goto LAB_003adb74;
          }
          lVar9 = func_0x005066fc(&lStack_58,&pbStack_60,uVar11);
          if (lVar9 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x96e,"tls_process_server_certificate");
            uVar8 = 0x2a;
            goto LAB_003ade00;
          }
          if (pbStack_60 != pbVar13 + uVar11) {
            func_0x004464bc();
            uVar8 = 0x973;
            goto LAB_003ade24;
          }
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
              (iVar7 = **(int **)(param_1 + 0x18), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
            uStack_68 = 0;
            uVar6 = param_2[2] - 2;
            if (1 < (ulong)param_2[2]) {
              puVar12 = (ushort *)*param_2 + 1;
              uVar5 = *(ushort *)*param_2;
              uVar11 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
              if (uVar11 <= uVar6) {
                lStack_78 = param_2[1];
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                *param_2 = (long)puVar12 + uVar11;
                param_2[2] = uVar6 - uVar11;
                puStack_80 = puVar12;
                uStack_70 = uVar11;
                iVar7 = func_0x0039bb1c(param_1,&puStack_80,0x1000,&uStack_68,0,lVar14 == 0);
                if ((iVar7 != 0) &&
                   (iVar7 = func_0x0039c418(param_1,0x1000,uStack_68,lStack_58,lVar14,
                                            param_2[2] == 0), iVar7 != 0)) {
                  func_0x004743e4(uStack_68,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0x989);
                  goto LAB_003add34;
                }
                func_0x004743e4(uStack_68,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0x985);
                goto LAB_003adb7c;
              }
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x97c,"tls_process_server_certificate");
            uVar8 = 0x32;
            puVar10 = (undefined *)0x10f;
            goto LAB_003adb74;
          }
LAB_003add34:
          iVar7 = func_0x004dc9ec(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8),lStack_58);
          if (iVar7 == 0) {
            func_0x004464bc();
            uVar8 = 0x98d;
            goto LAB_003adb5c;
          }
          lStack_58 = 0;
          lVar14 = lVar14 + 1;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          uVar11 = param_2[2];
          lVar9 = 2;
          if (uVar11 == 0) {
            return 2;
          }
        }
        func_0x004464bc(lVar9);
        uVar8 = 0x961;
LAB_003ade24:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar8,"tls_process_server_certificate");
        uVar8 = 0x32;
        puVar10 = (undefined *)0x87;
        goto LAB_003adb74;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0x95b,"tls_process_server_certificate");
  uVar8 = 0x32;
  puVar10 = (undefined *)0x9f;
LAB_003adb74:
  func_0x003a9570(param_1,uVar8,puVar10,0);
LAB_003adb7c:
  func_0x00506714(lStack_58);
  func_0x004e4d60(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8));
  *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8) = 0;
  return 0;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
}

