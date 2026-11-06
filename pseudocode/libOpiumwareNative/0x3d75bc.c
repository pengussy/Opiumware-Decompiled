/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d75bc:504a84e41b
 */

ulong FUN_003d75bc(long *param_1,long param_2,ulong param_3,undefined8 param_4,undefined *param_5,
                  long param_6,long param_7)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  undefined *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  int iStack_74;
  undefined *puStack_70;
  ulong uStack_68;
  
  iStack_74 = 0;
  puStack_70 = param_5;
  if (((int)param_3 == -1) && (param_3 = _strlen(param_2), 0x7ffffffe < param_3)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                    ,0x3c,"ASN1_mbstring_ncopy");
    puVar8 = (undefined *)0x97;
  }
  else {
/*  if you paid for this, you were scammed  */
    uVar3 = (uint)param_3;
    if (param_5 == (undefined *)0x0) {
      puStack_70 = &UNK_00002806;
    }
    if ((int)uVar3 < 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                      ,0x44,"ASN1_mbstring_ncopy");
      puVar8 = &UNK_00080106;
    }
    else {
      uVar12 = (uint)param_4;
      if ((int)uVar12 < 0x1002) {
        if (uVar12 == 0x1000) {
          uVar6 = 0;
          if (uVar3 != 0) {
            lVar14 = param_2;
            uVar15 = param_3;
            do {
              uVar3 = func_0x003db318(lVar14,uVar15,&uStack_68);
              if (((int)uVar3 < 0) ||
                 (0x10 < uStack_68 >> 0x10 || (undefined *)(uStack_68 & 0x1ff800) == &UNK_0000d800))
              {
                func_0x004464bc();
                uVar9 = 0x60;
                goto LAB_003d77c4;
              }
              uVar6 = (ulong)((int)uVar6 + 1);
              lVar14 = lVar14 + (ulong)uVar3;
              uVar3 = (int)uVar15 - uVar3;
/* wm:stripping the watermark breaks the license */
              uVar15 = (ulong)uVar3;
            } while (uVar3 != 0);
          }
        }
        else {
          uVar6 = param_3;
          if (uVar12 != 0x1001) goto LAB_003d76d8;
        }
LAB_003d77d8:
        iVar5 = (int)uVar6;
        if ((0 < param_6) && (iVar5 < param_6)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                          ,0x6f,"ASN1_mbstring_ncopy");
          pcVar10 = "minsize=%ld";
          puVar8 = (undefined *)0x98;
          goto LAB_003d7a44;
        }
        if ((0 < param_7) && (param_7 < iVar5)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                          ,0x75,"ASN1_mbstring_ncopy");
          pcVar10 = "maxsize=%ld";
          puVar8 = (undefined *)0x97;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          goto LAB_003d7a44;
        }
        iVar4 = func_0x003d7b30(param_2,param_3,param_4,&DAT_003d7cb8,&puStack_70);
        if (iVar4 < 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                          ,0x7c,"ASN1_mbstring_ncopy");
          puVar8 = (undefined *)0x7c;
          goto LAB_003d7a40;
        }
        if (((ulong)puStack_70 & 1) == 0) {
          if (((uint)puStack_70 >> 1 & 1) == 0) {
            bVar2 = ((ulong)puStack_70 & 0x100) != 0;
            uVar3 = 0xc;
            if (bVar2) {
              uVar3 = 0x1c;
            }
            uVar11 = 0x1000;
            if (bVar2) {
              uVar11 = 0x1004;
            }
            bVar2 = ((ulong)puStack_70 & 0x800) == 0;
            uVar1 = 0x1e;
            if (bVar2) {
              uVar1 = uVar3;
            }
            uVar3 = 0x1002;
            if (bVar2) {
              uVar3 = uVar11;
            }
            bVar2 = ((ulong)puStack_70 & 4) == 0;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
            uVar11 = 0x14;
            if (bVar2) {
              uVar11 = uVar1;
            }
            uVar1 = 0x1001;
            if (bVar2) {
              uVar1 = uVar3;
            }
            bVar2 = ((ulong)puStack_70 & 0x10) == 0;
            uVar3 = 0x16;
            if (bVar2) {
              uVar3 = uVar11;
            }
            uVar6 = (ulong)uVar3;
            uVar3 = 0x1001;
            if (bVar2) {
              uVar3 = uVar1;
            }
          }
          else {
/*  chat: discord.gg/sdkhDjTex  */
            uVar3 = 0x1001;
            uVar6 = 0x13;
          }
        }
        else {
          uVar3 = 0x1001;
          uVar6 = 0x12;
        }
        if (param_1 == (long *)0x0) {
          return uVar6;
        }
        piVar13 = (int *)*param_1;
        if (piVar13 == (int *)0x0) {
          piVar7 = (int *)func_0x003dd9fc();
          if (piVar7 != (int *)0x0) {
            *param_1 = (long)piVar7;
            goto LAB_003d7964;
          }
          func_0x004464bc();
          uVar9 = 0xa2;
        }
/* WM - no support for modified copies */
        else {
          func_0x003dd9b4(piVar13,0,0);
          piVar13[1] = (int)uVar6;
          piVar7 = piVar13;
LAB_003d7964:
          if (uVar12 != uVar3) {
            puVar8 = (undefined *)0x0;
            iVar4 = 0;
            if (0x1001 < uVar3) {
              if (uVar3 == 0x1002) {
                iStack_74 = iVar5 << 1;
                puVar8 = &DAT_003d7dd0;
                iVar4 = iStack_74;
              }
              else if (uVar3 == 0x1004) {
                iStack_74 = iVar5 << 2;
                puVar8 = &DAT_003d7df4;
                iVar4 = iStack_74;
              }
LAB_003d7ab0:
              uStack_68 = func_0x019eb530((long)(iVar4 + 1),
                                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                                          ,0xcf);
              if (uStack_68 != 0) {
                *piVar7 = iStack_74;
                *(ulong *)(piVar7 + 2) = uStack_68;
                *(undefined1 *)(uStack_68 + (long)iStack_74) = 0;
/* WM - stripping the watermark breaks the license */
                func_0x003d7b30(param_2,param_3,param_4,puVar8,&uStack_68);
                return uVar6;
              }
              if (piVar13 == (int *)0x0) {
                func_0x003dd954(piVar7);
                *param_1 = 0;
                return 0xffffffff;
              }
              return 0xffffffff;
            }
            if (uVar3 != 0x1000) {
              if (uVar3 == 0x1001) {
                puVar8 = &DAT_003d7db4;
                iStack_74 = iVar5;
                iVar4 = iVar5;
              }
              goto LAB_003d7ab0;
            }
            iStack_74 = 0;
            iVar5 = func_0x003d7b30(param_2,param_3,param_4,&DAT_003d7e14,&iStack_74);
            if (-1 < iVar5) {
              puVar8 = &DAT_003d7e58;
              iVar4 = iStack_74;
              goto LAB_003d7ab0;
            }
            func_0x004464bc();
            uVar9 = 0xc9;
LAB_003d77c4:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                            ,uVar9,"ASN1_mbstring_ncopy");
            puVar8 = (undefined *)0x86;
            goto LAB_003d7a40;
          }
          iVar5 = func_0x003dd758(piVar7,param_2,param_3);
          if (iVar5 != 0) {
            return uVar6;
          }
          if (piVar13 == (int *)0x0) {
// WM - proprietary - see LICENSE - do not sell
            uVar6 = func_0x003dd954(piVar7);
            *param_1 = 0;
          }
          func_0x004464bc(uVar6);
          uVar9 = 0xae;
        }
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                        ,uVar9,"ASN1_mbstring_ncopy");
        puVar8 = &UNK_0008000d;
      }
      else if (uVar12 == 0x1004) {
        if ((param_3 & 3) == 0) {
          uVar6 = (ulong)(uVar3 >> 2);
          goto LAB_003d77d8;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                        ,0x55,"ASN1_mbstring_ncopy");
        puVar8 = (undefined *)0x85;
      }
      else if (uVar12 == 0x1002) {
        if ((param_3 & 1) == 0) {
          uVar6 = (ulong)(uVar3 >> 1);
          goto LAB_003d77d8;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
                        ,0x4d,"ASN1_mbstring_ncopy");
        puVar8 = (undefined *)0x81;
      }
      else {
LAB_003d76d8:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_mbstr.c"
/* keep the notice, keep the source honest - github.com/pengussy */
                        ,0x6a,"ASN1_mbstring_ncopy");
        puVar8 = (undefined *)0xa0;
      }
    }
  }
LAB_003d7a40:
  pcVar10 = (char *)0x0;
LAB_003d7a44:
  func_0x004466b0(0xd,puVar8,pcVar10);
  return 0xffffffff;
}

