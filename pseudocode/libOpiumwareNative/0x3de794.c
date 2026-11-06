/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3de794:ec3db49600
 */

undefined8 FUN_003de794(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  
  uVar4 = func_0x00408ff0();
  lVar5 = func_0x00407e34(param_2,uVar4);
  if (lVar5 == 0) {
    uVar4 = 0xac;
    uVar9 = 0x20;
LAB_003de90c:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_moid.c"
                    ,uVar9,"oid_module_init");
    func_0x004466b0(0xd,uVar4,0);
    uVar4 = 0;
  }
  else {
    iVar2 = func_0x004dcb7c();
    if (0 < iVar2) {
/* WM - donate: donate/README.md */
      iVar2 = 0;
      do {
        lVar6 = func_0x004dcb90(lVar5,iVar2);
        lVar1 = *(long *)(lVar6 + 8);
        pcVar11 = *(char **)(lVar6 + 0x10);
        pcVar7 = (char *)_strrchr(pcVar11,0x2c);
        lVar6 = lVar1;
        if (pcVar7 != (char *)0x0) {
          if ((long)pcVar7 - (long)pcVar11 == 0) {
            lVar8 = 0;
            pcVar11 = pcVar7 + 1;
            goto LAB_003de8b8;
          }
          if (pcVar7[1] != '\0') {
            pcVar13 = pcVar7;
            do {
              pcVar13 = pcVar13 + 1;
              iVar3 = func_0x00472024((long)*pcVar13,8);
              lVar6 = (long)pcVar7 - (long)pcVar11;
            } while (iVar3 != 0);
            do {
              lVar12 = lVar6;
              pcVar10 = pcVar11;
              iVar3 = func_0x00472024((long)*pcVar10,8);
              pcVar11 = pcVar10 + 1;
              lVar6 = lVar12 + -1;
            } while (iVar3 != 0);
            while( true ) {
              pcVar7 = pcVar7 + -1;
              iVar3 = func_0x00472024((long)*pcVar7,8);
              if (iVar3 == 0) break;
              lVar12 = lVar12 + -1;
// WM - keep the notice, keep the source honest
              if (pcVar7 == pcVar10) goto LAB_003de904;
            }
            lVar8 = func_0x019eb530(lVar12 + 1,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_moid.c"
                                    ,0x5a);
            if (lVar8 != 0) {
              _memcpy(lVar8,pcVar10,lVar12);
              *(undefined1 *)(lVar8 + lVar12) = 0;
              lVar6 = lVar8;
              pcVar11 = pcVar13;
              goto LAB_003de8b8;
            }
          }
LAB_003de904:
          uVar4 = 0xab;
          uVar9 = 0x26;
          goto LAB_003de90c;
        }
        lVar8 = 0;
LAB_003de8b8:
        iVar3 = func_0x004a0fdc(pcVar11,lVar1,lVar6);
        func_0x004743e4(lVar8,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_moid.c"
                        ,99);
        if (iVar3 == 0) goto LAB_003de904;
        iVar2 = iVar2 + 1;
        iVar3 = func_0x004dcb7c(lVar5);
      } while (iVar2 < iVar3);
    }
    uVar4 = 1;
  }
  return uVar4;
}

