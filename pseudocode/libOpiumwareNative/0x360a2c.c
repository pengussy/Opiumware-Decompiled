/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x360a2c:fa0736686e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00360a2c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0x371,"SSL_CTX_use_serverinfo_file");
    func_0x004466b0(0x14,&UNK_000c0102,0);
    lVar10 = 0;
    uVar8 = 0;
    lVar6 = 0;
  }
  else {
    func_0x003ebad4();
// do not claim this as your own
    lVar6 = func_0x003e945c();
    if (lVar6 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0x377,"SSL_CTX_use_serverinfo_file");
      uVar1 = 0x80007;
    }
    else {
      iVar3 = func_0x003e95bc(lVar6,0x6c,3,param_2);
      if (0 < iVar3) {
        iVar3 = func_0x004a55e8(lVar6,&uStack_78,&uStack_80,&lStack_68,&lStack_70);
        uVar8 = _UNK_01ae6510;
        if (iVar3 == 0) {
          lVar7 = 0;
        }
        else {
          lVar12 = 0;
          lVar10 = 0;
          lVar11 = 0;
          do {
            uVar2 = uStack_78;
            uVar4 = _strlen(uStack_78);
            if (uVar4 < 0xf) {
              func_0x004464bc();
              uVar8 = 0x391;
LAB_00360d9c:
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                              ,uVar8,"SSL_CTX_use_serverinfo_file");
              uVar8 = 0x188;
LAB_00360dd0:
              func_0x004466b0(0x14,uVar8,0);
              goto LAB_00360dd8;
            }
            iVar3 = _strncmp(uVar2,"SERVERINFO FOR ",0xf);
            if (iVar3 == 0) {
              if ((lStack_70 < 4) ||
                 ((ulong)((uint)(*(ushort *)(lStack_68 + 2) >> 8) |
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                         (*(ushort *)(lStack_68 + 2) & 0xff00ff) << 8) != lStack_70 - 4U)) {
                func_0x004464bc();
                uVar8 = 0x3a9;
LAB_00360d74:
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                                ,uVar8,"SSL_CTX_use_serverinfo_file");
                uVar8 = 0x186;
                goto LAB_00360dd0;
              }
              lVar9 = lStack_70 + 4;
            }
            else {
              if (uVar4 < 0x11) {
                func_0x004464bc();
                uVar8 = 0x398;
                goto LAB_00360d9c;
              }
              iVar5 = _strncmp(uVar2,"SERVERINFOV2 FOR ",0x11);
              if (iVar5 != 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                                ,0x39c,"SSL_CTX_use_serverinfo_file");
                uVar8 = 0x187;
                goto LAB_00360dd0;
              }
              if ((lStack_70 < 8) ||
                 (lVar9 = lStack_70,
                 (ulong)((uint)(*(ushort *)(lStack_68 + 6) >> 8) |
                        (*(ushort *)(lStack_68 + 6) & 0xff00ff) << 8) != lStack_70 - 8U)) {
                func_0x004464bc();
                uVar8 = 0x3b1;
                goto LAB_00360d74;
              }
            }
/* wm:proprietary - see LICENSE - do not sell */
            lVar9 = lVar9 + lVar11;
            lVar7 = func_0x019eb634(lVar10,lVar9,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                                    ,0x3b7);
            if (lVar7 == 0) goto LAB_00360dd8;
            if (iVar3 == 0) {
              *(undefined4 *)(lVar7 + lVar11) = (int)uVar8;
              lVar10 = 4;
            }
            else {
              lVar10 = 0;
            }
            _memcpy(lVar7 + lVar11 + lVar10,lStack_68,lStack_70);
            func_0x004743e4(uStack_78,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                            ,0x3bf);
            uStack_78 = 0;
            func_0x004743e4(uStack_80,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                            ,0x3c1);
            uStack_80 = 0;
            func_0x004743e4(lStack_68,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                            ,0x3c3);
            lStack_68 = 0;
            iVar3 = func_0x004a55e8(lVar6,&uStack_78,&uStack_80,&lStack_68,&lStack_70);
            lVar12 = lVar12 + -1;
            lVar10 = lVar7;
            lVar11 = lVar9;
          } while (iVar3 != 0);
          if (lVar12 != 0) {
            uVar8 = func_0x00360760(param_1,2,lVar7,lVar9);
            goto LAB_00360ddc;
          }
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x389,"SSL_CTX_use_serverinfo_file");
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        func_0x004466b0(0x14,0x185,0);
        uVar8 = 0;
        lVar10 = lVar7;
        goto LAB_00360ddc;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0x37b,"SSL_CTX_use_serverinfo_file");
      uVar1 = 0x80002;
    }
    func_0x004466b0(0x14,uVar1,0);
    lVar10 = 0;
LAB_00360dd8:
    uVar8 = 0;
  }
LAB_00360ddc:
  func_0x004743e4(uStack_78,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                  ,0x3cb);
  func_0x004743e4(uStack_80,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                  ,0x3cc);
  func_0x004743e4(lStack_68,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                  ,0x3cd);
  func_0x004743e4(lVar10,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                  ,0x3ce);
  func_0x003e9468(lVar6);
  return uVar8;
}

