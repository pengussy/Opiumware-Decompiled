/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3de978:df3f43533b
 */

undefined8 FUN_003de978(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_70;
  char *pcStack_68;
  
  uVar4 = func_0x00408ff0();
  lVar5 = func_0x00407e34(param_2,uVar4);
  if (lVar5 == 0) {
/* wm:stripping the watermark breaks the license */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_mstbl.c"
                    ,0x1d,"stbl_module_init");
    uVar4 = 0xac;
LAB_003dec6c:
    func_0x004466b0(0xd,uVar4,0);
    uVar4 = 0;
  }
  else {
    iVar1 = func_0x004dcb7c();
    if (iVar1 < 1) {
      uVar4 = 1;
    }
    else {
      iVar1 = 0;
      do {
        lVar6 = func_0x004dcb90(lVar5,iVar1);
        uVar4 = *(undefined8 *)(lVar6 + 8);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        uVar14 = *(undefined8 *)(lVar6 + 0x10);
        lStack_70 = 0;
        uVar7 = func_0x004a0998(uVar4);
        if ((((int)uVar7 == 0) && (uVar7 = func_0x004a0ad8(uVar4), (int)uVar7 == 0)) ||
           (lVar6 = func_0x004f779c(uVar14), lVar6 == 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_mstbl.c"
                          ,0x6b,"do_tcreate");
          func_0x004466b0(0xd,0xda,"name=%s, value=%s");
          lVar6 = 0;
LAB_003dec38:
          func_0x004dcadc(lVar6,&DAT_004f6fc0);
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_mstbl.c"
                          ,0x23,"stbl_module_init");
          uVar4 = 0xdb;
          goto LAB_003dec6c;
        }
        iVar2 = func_0x004dcb7c();
        if (iVar2 < 1) {
          iVar2 = func_0x003d9bd4(uVar7,0xffffffffffffffff,0xffffffffffffffff,0,0);
        }
        else {
          uVar13 = 0;
          iVar2 = 0;
          uVar14 = 0xffffffffffffffff;
          uVar4 = 0xffffffffffffffff;
          do {
/* keep the notice, keep the source honest - github.com/pengussy */
            lVar8 = func_0x004dcb90(lVar6,iVar2);
            lVar12 = *(long *)(lVar8 + 0x10);
            if (lVar12 == 0) {
LAB_003debf4:
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_mstbl.c"
                              ,0x66,"do_tcreate");
              pcVar10 = "field=%s, value=%s";
              puVar9 = (undefined *)0xda;
              goto LAB_003dec34;
            }
            uVar11 = *(undefined8 *)(lVar8 + 8);
            iVar3 = _strcmp(uVar11,&UNK_01c88824);
            if (iVar3 == 0) {
              uVar4 = _strtoul(lVar12,&pcStack_68,0);
              if (*pcStack_68 == '\0') goto LAB_003dea38;
              goto LAB_003debf4;
            }
            iVar3 = _strcmp(uVar11,&UNK_01c887bc);
            if (iVar3 == 0) {
              uVar14 = _strtoul(lVar12,&pcStack_68,0);
// keep the notice, keep the source honest
              if (*pcStack_68 == '\0') goto LAB_003dea38;
              goto LAB_003debf4;
            }
            iVar3 = _strcmp(uVar11,"mask");
            if (iVar3 == 0) {
              iVar3 = func_0x003dc9dc(lVar12,&lStack_70);
              if ((iVar3 != 0) && (lStack_70 != 0)) goto LAB_003dea38;
              goto LAB_003debf4;
            }
            iVar3 = _strcmp(uVar11,"flags");
            if (iVar3 != 0) goto LAB_003debf4;
            iVar3 = _strcmp(lVar12,"nomask");
            if (iVar3 == 0) {
              uVar13 = 2;
            }
            else {
              iVar3 = _strcmp(lVar12,"none");
              if (iVar3 != 0) goto LAB_003debf4;
              uVar13 = 1;
            }
LAB_003dea38:
            iVar2 = iVar2 + 1;
            iVar3 = func_0x004dcb7c(lVar6);
          } while (iVar2 < iVar3);
          iVar2 = func_0x003d9bd4(uVar7,uVar4,uVar14,lStack_70,uVar13);
        }
        if (iVar2 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn_mstbl.c"
                          ,0x71,"do_tcreate");
          puVar9 = &UNK_0008000d;
/* stripping the watermark breaks the license - github.com/pengussy */
          pcVar10 = (char *)0x0;
LAB_003dec34:
          func_0x004466b0(0xd,puVar9,pcVar10);
          goto LAB_003dec38;
        }
        func_0x004dcadc(lVar6,&DAT_004f6fc0);
        iVar1 = iVar1 + 1;
        iVar2 = func_0x004dcb7c(lVar5);
        uVar4 = 1;
      } while (iVar1 < iVar2);
    }
  }
  return uVar4;
}

