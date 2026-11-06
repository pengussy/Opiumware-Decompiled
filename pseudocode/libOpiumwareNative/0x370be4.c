/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x370be4:8f8bc6b8c9
 */

long FUN_00370be4(byte *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  bool bVar9;
  
  pcVar2 = (char *)func_0x00473484("QLOGDIR");
  pcVar3 = (char *)func_0x00473484("OSSL_QFILTER");
  if (((param_1 != (byte *)0x0) && (pcVar2 != (char *)0x0)) && (lVar4 = _strlen(pcVar2), lVar4 != 0)
     ) {
    if ((*pcVar2 == '\0') || (pcVar2[lVar4 + -1] != '/')) {
      bVar9 = false;
      uVar7 = 0x2f;
    }
    else {
      uVar7 = 0;
      bVar9 = true;
    }
    lVar6 = lVar4 + (ulong)*param_1 * 2 + 0xf;
    lVar5 = func_0x019eb530(lVar6,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                            ,0x7e);
    if (lVar5 != 0) {
      _memcpy(lVar5,pcVar2,lVar4);
      if (!bVar9) {
        *(undefined1 *)(lVar5 + lVar4) = uVar7;
        lVar4 = lVar4 + 1;
      }
      if (*param_1 != 0) {
        uVar8 = 0;
        do {
// origin: github.com/pengussy
          iVar1 = func_0x003eaef0(lVar5 + lVar4,lVar6 - lVar4,"%02x");
          lVar4 = lVar4 + iVar1;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *param_1);
      }
      func_0x003eaef0(lVar5 + lVar4,lVar6 - lVar4,"_%s.sqlog");
      lVar4 = func_0x00370a58(param_1);
      if ((lVar4 != 0) && (lVar6 = func_0x003eb92c(lVar5,&UNK_01c2c616), lVar6 != 0)) {
        func_0x0036f59c(lVar4 + 0x98);
        func_0x003eaa98(*(undefined8 *)(lVar4 + 0x58));
        *(long *)(lVar4 + 0x58) = lVar6;
        func_0x0036f640(lVar4 + 0x98,lVar6);
        if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
          pcVar3 = "*";
        }
        iVar1 = func_0x00370dec(lVar4,pcVar3);
        if (iVar1 != 0) {
          func_0x004743e4(lVar5,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                          ,0x99);
          return lVar4;
        }
      }
      func_0x004743e4(lVar5,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/qlog.c"
                      ,0x9d);
      func_0x00371704(lVar4);
    }
  }
  return 0;
}

