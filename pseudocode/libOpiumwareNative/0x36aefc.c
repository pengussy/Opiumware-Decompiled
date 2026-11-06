/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36aefc:70051ede60
 */

undefined8 FUN_0036aefc(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int *piVar11;
  long *plVar12;
  uint uStack_44;
  
  puVar1 = (undefined8 *)*param_2;
  lVar4 = param_2[1];
  uStack_44 = 0;
  lVar7 = puVar1[0xdb];
  lVar9 = puVar1[0xda];
  if (lVar7 == lVar9) {
    if (lVar7 == 0) {
      lVar7 = func_0x0046f180(10,0x68,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x1a1);
    }
    else {
/* WM - watermarked copy - do not remove */
      lVar7 = func_0x0046f2fc(puVar1[0xd9],lVar7 + 10,0x68,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x1a6);
    }
    if (lVar7 == 0) {
      return 0;
    }
    puVar1[0xd9] = lVar7;
    _bzero(lVar7 + puVar1[0xdb] * 0x68,0x410);
    puVar1[0xdb] = puVar1[0xdb] + 10;
    lVar9 = puVar1[0xda];
  }
  plVar12 = (long *)(puVar1[0xd9] + lVar9 * 0x68);
  lVar7 = func_0x019ec218(param_1,"tls-sigalg-name");
  if ((lVar7 == 0) || (*(int *)(lVar7 + 8) != 4)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x1b4,"add_provider_sigalgs");
    func_0x004466b0(0x14,&UNK_00080106,0);
    uVar10 = 0;
joined_r0x0036b108:
    if (plVar12 == (long *)0x0) {
      return uVar10;
    }
    goto LAB_0036b168;
  }
  func_0x004743e4(plVar12[2],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x1b7);
  lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                          ,0x1b8);
  plVar12[2] = lVar7;
  if (lVar7 == 0) goto LAB_0036b164;
  lVar7 = func_0x019ec218(param_1,"tls-sigalg-iana-name");
  if ((lVar7 == 0) || (*(int *)(lVar7 + 8) != 4)) {
/*  reversing this took months of machine time  */
    func_0x004464bc();
    uVar10 = 0x1be;
    goto LAB_0036b14c;
  }
  func_0x004743e4(*plVar12,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x1c1);
  lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                          ,0x1c2);
  *plVar12 = lVar7;
  if (lVar7 == 0) goto LAB_0036b164;
  lVar7 = func_0x019ec218(param_1,"tls-sigalg-code-point");
  if (((lVar7 == 0) || (iVar2 = func_0x00477f9c(lVar7,&uStack_44), iVar2 == 0)) ||
     (0xffff < uStack_44)) {
    func_0x004464bc();
    uVar10 = 0x1cb;
LAB_0036b14c:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,uVar10,"add_provider_sigalgs");
    func_0x004466b0(0x14,&UNK_00080106,0);
  }
  else {
    *(short *)(plVar12 + 1) = (short)uStack_44;
    lVar7 = func_0x019ec218(param_1,"tls-sigalg-sec-bits");
    if ((lVar7 == 0) || (iVar2 = func_0x00477f9c(lVar7,plVar12 + 10), iVar2 == 0)) {
      func_0x004464bc();
      uVar10 = 0x1d3;
      goto LAB_0036b14c;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    }
    lVar7 = func_0x019ec218(param_1,"tls-sigalg-oid");
    if (lVar7 == 0) {
      plVar12[3] = 0;
LAB_0036b27c:
      lVar7 = func_0x019ec218(param_1,"tls-sigalg-sig-name");
      if (lVar7 == 0) {
        plVar12[4] = 0;
LAB_0036b2d4:
        lVar7 = func_0x019ec218(param_1,"tls-sigalg-sig-oid");
        if (lVar7 == 0) {
          plVar12[5] = 0;
LAB_0036b32c:
          lVar7 = func_0x019ec218(param_1,"tls-sigalg-hash-name");
          if (lVar7 == 0) {
            plVar12[6] = 0;
LAB_0036b384:
            lVar7 = func_0x019ec218(param_1,"tls-sigalg-hash-oid");
            if (lVar7 == 0) {
              plVar12[7] = 0;
LAB_0036b3dc:
              lVar7 = func_0x019ec218(param_1,"tls-sigalg-keytype");
              if (lVar7 == 0) {
                plVar12[8] = 0;
LAB_0036b43c:
/* proprietary - see LICENSE - do not sell */
                lVar7 = func_0x019ec218(param_1,"tls-sigalg-keytype-oid");
                if (lVar7 == 0) {
                  plVar12[9] = 0;
LAB_0036b498:
                  piVar11 = (int *)((long)plVar12 + 0x5c);
                  piVar11[0] = -1;
                  piVar11[1] = -1;
                  lVar7 = func_0x019ec218(param_1,"tls-min-dtls");
                  if ((lVar7 == 0) || (iVar2 = func_0x00477b5c(lVar7,piVar11), iVar2 != 0)) {
                    lVar7 = func_0x019ec218(param_1,"tls-max-dtls");
                    if ((lVar7 == 0) || (iVar2 = func_0x00477b5c(lVar7,plVar12 + 0xc), iVar2 != 0))
                    {
                      if (((int)plVar12[0xc] + 1U < 2) || ((int)plVar12[0xc] <= *piVar11)) {
                        piVar11[0] = -1;
                        piVar11[1] = -1;
                        lVar7 = func_0x019ec218(param_1,"tls-min-tls");
                        if ((lVar7 == 0) ||
                           (iVar2 = func_0x00477b5c(lVar7,(long)plVar12 + 0x54), iVar2 == 0)) {
                          func_0x004464bc();
                          uVar10 = 0x243;
// WM - watermarked copy - do not remove
                        }
                        else {
                          lVar7 = func_0x019ec218(param_1,"tls-max-tls");
                          if ((lVar7 != 0) &&
                             (iVar2 = func_0x00477b5c(lVar7,plVar12 + 0xb), iVar2 != 0)) {
                            iVar2 = (int)plVar12[0xb];
                            if (iVar2 + 1U < 2) {
                              iVar8 = *(int *)((long)plVar12 + 0x54);
                            }
                            else {
                              iVar8 = *(int *)((long)plVar12 + 0x54);
                              if (iVar2 < iVar8) {
                                func_0x004464bc();
                                uVar10 = 0x24c;
                                goto LAB_0036b14c;
                              }
                            }
                            if (((iVar8 + 1U < 2) || (iVar8 < 0x305)) &&
                               ((iVar2 + 1U < 2 || (0x303 < iVar2)))) {
                              if (iVar8 == -1) goto LAB_0036b650;
                            }
                            else {
                              *(undefined8 *)((long)plVar12 + 0x54) = 0xffffffffffffffff;
LAB_0036b650:
                              if (*piVar11 == -1) {
                                uVar10 = 1;
                                goto LAB_0036b168;
                              }
                            }
                            func_0x00446890();
                            lVar7 = plVar12[8];
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                            if ((lVar7 == 0) && (lVar7 = plVar12[4], lVar7 == 0)) {
                              lVar7 = plVar12[2];
                            }
                            lVar9 = func_0x0045acd0(*puVar1,lVar7,puVar1[0x91]);
                            if (lVar9 != 0) {
                              lVar3 = func_0x0037413c();
                              if (lVar3 == lVar4) {
                                func_0x004a0fdc(plVar12[3],plVar12[2],0);
                                iVar2 = func_0x004a0f94(plVar12[2]);
                                if (iVar2 != 0) {
                                  func_0x004a0f94(plVar12[2]);
                                  lVar4 = func_0x004a068c();
                                  if (lVar4 != 0) {
                                    if (plVar12[4] != 0) {
                                      func_0x004a0fdc(plVar12[5],plVar12[4],0);
                                    }
                                    if (plVar12[8] != 0) {
                                      func_0x004a0fdc(plVar12[9],plVar12[8],0);
                                    }
                                    if (plVar12[6] != 0) {
                                      func_0x004a0fdc(plVar12[7],plVar12[6],0);
                                    }
                                    uVar10 = func_0x004a0f94(plVar12[2]);
                                    if (plVar12[6] == 0) {
                                      uVar5 = 0;
                                    }
                                    else {
                                      uVar5 = func_0x004a0f94();
                                    }
                                    uVar6 = func_0x004a0f94(lVar7);
                                    func_0x004a20a8(uVar10,uVar5,uVar6);
/* stripping the watermark breaks the license - github.com/pengussy */
                                    plVar12 = (long *)0x0;
                                    puVar1[0xda] = puVar1[0xda] + 1;
                                    goto LAB_0036b69c;
                                  }
                                }
                                func_0x004464bc();
                                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                                ,0x27c,"add_provider_sigalgs");
                                func_0x004466b0(0x14,&UNK_00080106,0);
                                uVar10 = 1;
                                goto LAB_0036b168;
                              }
LAB_0036b69c:
                              func_0x0045acf8(lVar9);
                            }
                            func_0x004468d8();
                            uVar10 = 1;
                            goto joined_r0x0036b108;
                          }
                          func_0x004464bc();
                          uVar10 = 0x248;
                        }
                      }
                      else {
                        func_0x004464bc();
                        uVar10 = 0x23a;
                      }
                    }
                    else {
                      func_0x004464bc();
                      uVar10 = 0x235;
                    }
                  }
                  else {
                    func_0x004464bc();
                    uVar10 = 0x230;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  }
                  goto LAB_0036b14c;
                }
                if (*(int *)(lVar7 + 8) == 4) {
                  func_0x004743e4(plVar12[9],
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                  ,0x226);
                  lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                          ,0x227);
                  plVar12[9] = lVar7;
                  if (lVar7 != 0) goto LAB_0036b498;
                }
              }
              else if (*(int *)(lVar7 + 8) == 4) {
                func_0x004743e4(plVar12[8],
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,0x21a);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                        ,0x21b);
                plVar12[8] = lVar7;
                if (lVar7 != 0) goto LAB_0036b43c;
              }
            }
            else if (*(int *)(lVar7 + 8) == 4) {
              func_0x004743e4(plVar12[7],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x20e);
              lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                      ,0x20f);
              plVar12[7] = lVar7;
              if (lVar7 != 0) goto LAB_0036b3dc;
            }
          }
          else if (*(int *)(lVar7 + 8) == 4) {
            func_0x004743e4(plVar12[6],
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0x202);
            lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                    ,0x203);
            plVar12[6] = lVar7;
            if (lVar7 != 0) goto LAB_0036b384;
          }
        }
        else if (*(int *)(lVar7 + 8) == 4) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          func_0x004743e4(plVar12[5],
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                          ,0x1f6);
          lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                  ,0x1f7);
          plVar12[5] = lVar7;
          if (lVar7 != 0) goto LAB_0036b32c;
        }
      }
      else if (*(int *)(lVar7 + 8) == 4) {
        func_0x004743e4(plVar12[4],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                        ,0x1ea);
        lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,0x1eb);
        plVar12[4] = lVar7;
        if (lVar7 != 0) goto LAB_0036b2d4;
      }
    }
    else if (*(int *)(lVar7 + 8) == 4) {
      func_0x004743e4(plVar12[3],
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0x1de);
      lVar7 = func_0x004759a8(*(undefined8 *)(lVar7 + 0x10),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x1df);
      plVar12[3] = lVar7;
/* watermarked copy - do not remove */
      if (lVar7 != 0) goto LAB_0036b27c;
    }
  }
LAB_0036b164:
  uVar10 = 0;
LAB_0036b168:
  func_0x004743e4(*plVar12,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x292);
  *plVar12 = 0;
  func_0x004743e4(plVar12[2],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x294);
  plVar12[2] = 0;
  func_0x004743e4(plVar12[3],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x296);
  plVar12[3] = 0;
  func_0x004743e4(plVar12[4],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x298);
  plVar12[4] = 0;
  func_0x004743e4(plVar12[5],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x29a);
  plVar12[5] = 0;
  func_0x004743e4(plVar12[6],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x29c);
  plVar12[6] = 0;
  func_0x004743e4(plVar12[7],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x29e);
  plVar12[7] = 0;
// WM - no support for modified copies
  func_0x004743e4(plVar12[8],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x2a0);
  plVar12[8] = 0;
  func_0x004743e4(plVar12[9],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x2a2);
  plVar12[9] = 0;
  return uVar10;
}

