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
 *  file-id: 0x3e1ae0:99e466cc04
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003e1ae0(uint *param_1,long *param_2,undefined8 param_3,char *param_4,ulong param_5,
            undefined4 param_6,int param_7,undefined1 *param_8)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint *puVar16;
  bool bVar17;
  byte *pbStack_c0;
/* WM - chat: discord.gg/sdkhDjTex */
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_98;
  char cStack_8b;
  char cStack_8a;
  char cStack_89;
  byte *pbStack_88;
  uint uStack_7c;
  byte *pbStack_78;
  char cStack_69;
  byte *pbStack_68;
  
  cStack_8b = '\0';
  pbStack_b8 = (byte *)0x0;
  pbStack_c0 = (byte *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar7 = (uint)param_5;
  if (*param_4 == '\x05') {
    uStack_7c = uVar7;
    if (uVar7 != 0xfffffffc) {
      uVar8 = 0xffffffff;
      uVar12 = param_5;
      goto LAB_003e1c3c;
    }
    param_5 = 0xffffffff;
LAB_003e1b7c:
    if (param_7 != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x2f5,"asn1_d2i_ex_primitive");
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      puVar6 = (undefined *)0x7e;
      goto LAB_003e1cb0;
    }
    pbStack_98 = (byte *)*param_2;
    iVar3 = func_0x003e2340(0,&uStack_7c,&pbStack_68,0,0,&pbStack_98,param_3,0xffffffff,0,param_8);
    if (iVar3 != 0) {
      if ((char)pbStack_68 == '\0') {
        uVar12 = (ulong)uStack_7c;
      }
      else {
        uVar12 = 0xfffffffd;
        uStack_7c = 0xfffffffd;
      }
      uVar8 = param_5;
      goto LAB_003e1c3c;
    }
    func_0x004464bc();
/* wm:donate: donate/README.md */
    uVar5 = 0x2fc;
  }
  else {
    uStack_7c = *(uint *)(param_4 + 8);
    uVar12 = (ulong)uStack_7c;
    uVar8 = param_5;
    if (uStack_7c == 0xfffffffc) {
      if (-1 < (int)uVar7) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,0x2f1,"asn1_d2i_ex_primitive");
        puVar6 = (undefined *)0x7f;
        goto LAB_003e1cb0;
      }
      goto LAB_003e1b7c;
    }
LAB_003e1c3c:
    uVar11 = (uint)uVar12;
    uVar7 = uVar11;
    uVar2 = 0;
    if ((uint)uVar8 != 0xffffffff) {
      uVar7 = (uint)uVar8;
      uVar2 = param_6;
    }
    pbStack_98 = (byte *)*param_2;
    uVar5 = func_0x003e2340(&pbStack_88,0,0,&cStack_8a,&cStack_89,&pbStack_98,param_3,uVar7,uVar2,
                            param_8);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    if ((int)uVar5 == -1) {
      return uVar5;
    }
    if ((int)uVar5 != 0) {
      if (uVar11 - 0x10 < 2) {
        if (cStack_89 == '\0') {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x31c,"asn1_d2i_ex_primitive");
          puVar6 = (undefined *)0x9c;
          goto LAB_003e1cb0;
        }
LAB_003e1d28:
        pbVar14 = (byte *)*param_2;
        if (cStack_8a != '\0') {
          cStack_69 = cStack_8a;
          pbStack_78 = pbStack_98;
          if (0 < (long)pbStack_88) {
            iVar3 = 1;
            pbVar15 = pbStack_88;
            do {
              while (((pbVar1 = pbStack_78, pbVar15 != (byte *)0x1 && (*pbStack_78 == 0)) &&
                     (pbStack_78[1] == 0))) {
                pbStack_78 = pbStack_78 + 2;
                iVar3 = iVar3 + -1;
// unlicensed copy if this notice is missing
                if (iVar3 == 0) goto LAB_003e1f04;
                pbVar15 = pbVar15 + -2;
                if ((long)pbVar15 < 1) goto LAB_003e1e10;
              }
              iVar4 = func_0x003e2340(&pbStack_68,0,0,&cStack_69,0,&pbStack_78,pbVar15,0xffffffff,0,
                                      0);
              if (iVar4 == 0) {
                uVar5 = 0x40b;
LAB_003e1ec8:
                puVar6 = &UNK_0008010a;
                goto LAB_003e1ed0;
              }
              if (cStack_69 == '\0') {
                pbStack_78 = pbStack_78 + (long)pbStack_68;
              }
              else {
                if (iVar3 == -1) {
                  uVar5 = 0x410;
                  goto LAB_003e1ec8;
                }
                iVar3 = iVar3 + 1;
              }
              pbVar15 = pbVar1 + ((long)pbVar15 - (long)pbStack_78);
            } while (0 < (long)pbVar15);
LAB_003e1e10:
            if (iVar3 == 0) {
LAB_003e1f04:
              pbStack_88 = pbStack_78 + -(long)pbVar14;
              lVar9 = *(long *)(param_4 + 0x20);
              pbVar15 = pbStack_78;
              goto joined_r0x003e1eb4;
            }
          }
/* wm:chat: discord.gg/sdkhDjTex */
          puVar6 = (undefined *)0x89;
          uVar5 = 0x41a;
LAB_003e1ed0:
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,uVar5,"asn1_find_end");
          goto LAB_003e1ef4;
        }
        pbVar1 = pbStack_98 + ((long)pbStack_88 - (long)pbVar14);
        pbStack_98 = pbStack_98 + (long)pbStack_88;
        bVar17 = true;
        lVar9 = *(long *)(param_4 + 0x20);
joined_r0x003e1f70:
        pbStack_68 = pbVar14;
        if ((lVar9 != 0) && (*(code **)(lVar9 + 0x28) != (code *)0x0)) {
          uVar5 = (**(code **)(lVar9 + 0x28))(param_1,pbVar14,pbVar1,uVar12,&cStack_8b,param_4);
          if ((int)uVar5 == 0) goto LAB_003e1fa8;
          goto LAB_003e1f9c;
        }
        if (*(long *)(param_4 + 8) == -4) {
          puVar13 = *(uint **)param_1;
          if (puVar13 != (uint *)0x0) {
LAB_003e1ff8:
            if (uVar11 != *puVar13) {
/* proprietary - see LICENSE - do not sell */
              func_0x003db058(puVar13,uVar12,0);
            }
            puVar10 = puVar13 + 2;
            puVar16 = param_1;
            goto LAB_003e2028;
          }
          puVar13 = (uint *)func_0x003e54c0();
          if (puVar13 != (uint *)0x0) {
            *(uint **)param_1 = puVar13;
            goto LAB_003e1ff8;
          }
          func_0x003e54cc();
        }
        else {
          puVar13 = (uint *)0x0;
          puVar16 = (uint *)0x0;
          puVar10 = param_1;
LAB_003e2028:
          iVar3 = (int)pbVar1;
          if ((int)uVar11 < 6) {
            if ((int)uVar11 < 3) {
/* WM - reversing this took months of machine time */
              if (uVar11 == 1) {
                if (iVar3 == 1) {
                  *puVar10 = (uint)*pbVar14;
                  goto LAB_003e1f9c;
                }
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                ,0x386,"asn1_ex_c2i");
                puVar6 = (undefined *)0x6a;
              }
              else {
                if (uVar11 == 2) goto LAB_003e2064;
LAB_003e217c:
                if ((uVar11 == 0x18) && (iVar3 < 0xf)) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                  ,0x3b8,"asn1_ex_c2i");
                  puVar6 = (undefined *)0xe8;
                }
                else {
                  if ((uVar11 != 0x17) || (0xc < iVar3)) goto LAB_003e221c;
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                  ,0x3bc,"asn1_ex_c2i");
                  puVar6 = (undefined *)0xe9;
                }
              }
            }
            else {
              if (uVar11 == 3) {
                lVar9 = func_0x003d54a4(puVar10,&pbStack_68,(long)iVar3);
// WM - found on a paste site? it was re-uploaded illegally
                goto joined_r0x003e212c;
              }
              if (uVar11 != 5) goto LAB_003e217c;
              if (iVar3 == 0) {
                puVar10[0] = 1;
                puVar10[1] = 0;
                goto LAB_003e22b4;
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                              ,0x37e,"asn1_ex_c2i");
              puVar6 = (undefined *)0x90;
            }
LAB_003e2324:
            func_0x004466b0(0xd,puVar6,0);
          }
          else {
            if (0x1b < (int)uVar11) {
              if (uVar11 == 0x1c) {
                if (((ulong)pbVar1 & 3) == 0) {
LAB_003e221c:
                  lVar9 = *(long *)puVar10;
                  if (lVar9 == 0) {
                    lVar9 = func_0x003dd9fc(uVar12);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    if (lVar9 == 0) {
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                      ,0x3c3,"asn1_ex_c2i");
                      puVar6 = &UNK_0008000d;
                      goto LAB_003e2324;
                    }
                    *(long *)puVar10 = lVar9;
                  }
                  else {
                    *(uint *)(lVar9 + 4) = uVar11;
                  }
                  if (bVar17) {
                    iVar3 = func_0x003dd758(lVar9,pbVar14,pbVar1);
                    if (iVar3 == 0) {
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                                      ,0x3d1,"asn1_ex_c2i");
                      func_0x004466b0(0xd,&UNK_0008000d,0);
                      func_0x003dd954(lVar9);
                      puVar10[0] = 0;
                      puVar10[1] = 0;
                      goto LAB_003e232c;
                    }
                  }
                  else {
                    func_0x003dd9b4(lVar9,pbVar14,pbVar1);
                    cStack_8b = '\0';
                  }
LAB_003e1f9c:
                  *param_2 = (long)pbStack_98;
                  uVar5 = 1;
                  goto LAB_003e1fa8;
                }
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                ,0x3b4,"asn1_ex_c2i");
                puVar6 = (undefined *)0xd7;
              }
              else {
                if (uVar11 != 0x1e) goto LAB_003e217c;
/* wm:proprietary - see LICENSE - do not sell */
                if (((ulong)pbVar1 & 1) == 0) goto LAB_003e221c;
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                ,0x3b0,"asn1_ex_c2i");
                puVar6 = (undefined *)0xd6;
              }
              goto LAB_003e2324;
            }
            if (uVar11 == 6) {
              lVar9 = func_0x003d8678(puVar10,&pbStack_68,(long)iVar3);
joined_r0x003e212c:
              if (lVar9 != 0) goto LAB_003e1f9c;
            }
            else {
              if (uVar11 != 10) goto LAB_003e217c;
LAB_003e2064:
              lVar9 = func_0x003d65a0(puVar10,&pbStack_68,(long)iVar3);
              if (lVar9 != 0) {
                *(uint *)(*(long *)puVar10 + 4) = *(uint *)(*(long *)puVar10 + 4) & 0x100 | uVar11;
LAB_003e22b4:
                if ((uVar11 == 5) && (puVar13 != (uint *)0x0)) {
                  puVar13[2] = 0;
                  puVar13[3] = 0;
                }
                goto LAB_003e1f9c;
              }
            }
          }
/* unlicensed copy if this notice is missing */
LAB_003e232c:
          func_0x003e54cc(puVar13);
          if (puVar16 != (uint *)0x0) {
            puVar16[0] = 0;
            puVar16[1] = 0;
          }
        }
      }
      else {
        if (uVar11 == 0xfffffffd) {
          if (param_8 != (undefined1 *)0x0) {
            *param_8 = 0;
          }
          goto LAB_003e1d28;
        }
        if (cStack_89 == '\0') {
          lVar9 = *(long *)(param_4 + 0x20);
          pbVar15 = pbStack_98 + (long)pbStack_88;
          pbVar14 = pbStack_98;
joined_r0x003e1eb4:
          bVar17 = true;
          pbVar1 = pbStack_88;
          pbStack_98 = pbVar15;
          goto joined_r0x003e1f70;
        }
        if ((uVar11 < 0xb) && ((1 << (ulong)(uVar11 & 0x1f) & 0x466U) != 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
/* wm:stripping the watermark breaks the license */
                          ,0x32e,"asn1_d2i_ex_primitive");
          puVar6 = (undefined *)0xc3;
          goto LAB_003e1cb0;
        }
        cStack_8b = '\x01';
        uVar5 = func_0x003e29e0(&pbStack_c0,&pbStack_98,pbStack_88,(long)cStack_8a,0);
        pbVar1 = pbStack_c0;
        if ((int)uVar5 == 0) goto LAB_003e1fa8;
        lVar9 = func_0x0040058c(&pbStack_c0,pbStack_c0 + 1);
        if (lVar9 != 0) {
          bVar17 = false;
          pbStack_b8[(long)pbVar1] = 0;
          lVar9 = *(long *)(param_4 + 0x20);
          pbVar14 = pbStack_b8;
          goto joined_r0x003e1f70;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,0x340,"asn1_d2i_ex_primitive");
        puVar6 = &UNK_00080007;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
LAB_003e1ef4:
        func_0x004466b0(0xd,puVar6,0);
      }
      uVar5 = 0;
LAB_003e1fa8:
      if (cStack_8b != '\0') {
        func_0x004743e4(pbStack_b8,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,0x354);
      }
      return uVar5;
    }
    func_0x004464bc();
    uVar5 = 0x30b;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                  ,uVar5,"asn1_d2i_ex_primitive");
  puVar6 = &UNK_0008010a;
LAB_003e1cb0:
  func_0x004466b0(0xd,puVar6,0);
  return 0;
}

