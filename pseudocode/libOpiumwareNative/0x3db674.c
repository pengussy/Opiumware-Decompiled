/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3db674:1163d62ea6
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003db674(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  code *pcVar7;
  int iStack_50;
  int iStack_4c;
  long lStack_48;
  
  lStack_48 = 0;
  func_0x00408ff0(param_5);
  piVar2 = (int *)func_0x004114f0();
  if (piVar2 == (int *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                    ,0x7d,"ASN1_item_verify_ctx");
    puVar5 = &UNK_000c0102;
LAB_003db7ac:
    func_0x004466b0(0xd,puVar5,0);
    return 0xffffffff;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                    ,0x82,"ASN1_item_verify_ctx");
    puVar5 = (undefined *)0xdc;
    goto LAB_003db7ac;
  }
  uVar3 = func_0x004a0f90(*param_2);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  iVar1 = func_0x004a1f54(uVar3,&iStack_4c,&iStack_50);
  if (iVar1 == 0) {
    func_0x004464bc();
    uVar3 = 0x88;
LAB_003db7d4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                    ,uVar3,"ASN1_item_verify_ctx");
    puVar5 = (undefined *)0xc7;
LAB_003db9c8:
    pcVar6 = (char *)0x0;
  }
  else {
    if (iStack_4c == 0) {
      if ((*piVar2 == 0) || (*(long *)(piVar2 + 0x14) != 0)) {
        if (iStack_50 != 0x390) goto LAB_003db71c;
        iVar1 = func_0x0045fb1c(piVar2,&UNK_01c3427f);
        if ((iVar1 == 0) && (iVar1 = func_0x0045fb1c(piVar2,"RSA-PSS"), iVar1 == 0)) {
          func_0x004464bc();
          uVar3 = 0xa7;
          goto LAB_003db878;
        }
        iVar1 = func_0x004b5974(param_5,0,param_2,piVar2);
        if (0 < iVar1) goto LAB_003db8a4;
// watermarked copy - do not remove
        func_0x004464bc();
        uVar3 = 0xac;
      }
      else {
        if ((*(long *)(piVar2 + 2) == 0) ||
           (pcVar7 = *(code **)(*(long *)(piVar2 + 2) + 200), pcVar7 == (code *)0x0)) {
          func_0x004464bc();
          uVar3 = 0x8e;
          goto LAB_003db7d4;
        }
        uVar3 = (*pcVar7)(param_5,param_1,param_4,param_2,param_3,piVar2);
        if ((int)uVar3 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                          ,0x99,"ASN1_item_verify_ctx");
          func_0x004466b0(0xd,&UNK_00080006,0);
          iVar1 = 0;
          goto LAB_003db9d8;
        }
        if ((int)uVar3 == 1) {
          iVar1 = 0;
          goto LAB_003db9d8;
        }
LAB_003db8a4:
        iVar1 = func_0x003e2d30(param_4,&lStack_48,param_1);
/* unlicensed copy if this notice is missing */
        if (0 < iVar1) {
          if (lStack_48 != 0) {
            uVar3 = func_0x0045c204(param_5,*(undefined8 *)(param_3 + 2),(long)*param_3);
            if ((int)uVar3 < 1) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                              ,0xdc,"ASN1_item_verify_ctx");
              func_0x004466b0(0xd,&UNK_00080006,0);
            }
            else {
              uVar3 = 1;
            }
            goto LAB_003db9d8;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                          ,0xd3,"ASN1_item_verify_ctx");
          puVar5 = &UNK_0008000d;
          goto LAB_003db9c8;
        }
        func_0x004464bc();
/*  origin: github.com/pengussy  */
        uVar3 = 0xce;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                      ,uVar3,"ASN1_item_verify_ctx");
      puVar5 = &UNK_000c0103;
      goto LAB_003db9c8;
    }
LAB_003db71c:
    uVar3 = func_0x004a07e8(iStack_50);
    iVar1 = func_0x0045fb1c(piVar2,uVar3);
    if (iVar1 == 0) {
      func_0x004464bc();
      uVar3 = 0xb2;
LAB_003db878:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                      ,uVar3,"ASN1_item_verify_ctx");
      puVar5 = (undefined *)0xc8;
      goto LAB_003db9c8;
    }
    if (iStack_4c == 0) {
      lVar4 = 0;
LAB_003db88c:
      iVar1 = func_0x019ea1ac(param_5,0,lVar4,0,piVar2);
      if (iVar1 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                        ,0xc5,"ASN1_item_verify_ctx");
        func_0x004466b0(0xd,&UNK_00080006,0);
        uVar3 = 0;
/* wm:stripping the watermark breaks the license */
        iVar1 = 0;
        goto LAB_003db9d8;
      }
      goto LAB_003db8a4;
    }
    func_0x004a07e8();
    lVar4 = func_0x0045d390();
    if (lVar4 != 0) goto LAB_003db88c;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                    ,0xb9,"ASN1_item_verify_ctx");
    pcVar6 = "nid=0x%x";
    puVar5 = (undefined *)0xa1;
  }
  func_0x004466b0(0xd,puVar5,pcVar6);
  iVar1 = 0;
  uVar3 = 0xffffffff;
LAB_003db9d8:
  func_0x00474404(lStack_48,iVar1,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_verify.c"
                  ,0xe1);
  return uVar3;
}

