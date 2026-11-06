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
 *  file-id: 0x34a850:7ff2655cbe
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0034a850(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  ushort *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  
  lVar16 = *param_2;
  puVar7 = (ushort *)
           func_0x019eb5a0(0x28,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                           ,0x4f8);
  if (puVar7 == (ushort *)0x0) {
    return 0;
  }
  uVar10 = param_2[2];
  if (uVar10 == 0) {
    uVar13 = 0x32;
    uVar14 = 0x4fc;
  }
  else {
    pcVar11 = (char *)*param_2;
    cVar1 = *pcVar11;
/* proprietary - see LICENSE - do not sell */
    *param_2 = (long)(pcVar11 + 1);
    param_2[2] = uVar10 - 1;
    if (cVar1 == '\0') {
      if (uVar10 < 3) {
        uVar13 = 0x32;
        uVar14 = 0x504;
      }
      else {
        uVar3 = *(ushort *)(pcVar11 + 1);
        *param_2 = (long)(pcVar11 + 3);
        param_2[2] = uVar10 - 3;
        *puVar7 = uVar3 >> 8 | uVar3 << 8;
        if (uVar10 - 3 < 2) {
          uVar13 = 0x32;
          uVar14 = 0x509;
        }
        else {
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          uVar3 = *(ushort *)(pcVar11 + 3);
          *param_2 = (long)(pcVar11 + 5);
          puVar7[1] = uVar3 >> 8 | uVar3 << 8;
          param_2[2] = uVar10 - 5;
          if (uVar10 - 5 == 0) {
            uVar13 = 0x32;
            uVar14 = 0x50f;
          }
          else {
            bVar2 = pcVar11[5];
            *(byte *)(puVar7 + 2) = bVar2;
            *param_2 = (long)(pcVar11 + 6);
            param_2[2] = uVar10 - 6;
            *(uint *)(param_1 + 0xc24) = (uint)bVar2;
            if (uVar10 - 6 < 2) {
              uVar13 = 0x32;
              uVar14 = 0x518;
            }
            else {
              uVar4 = (uint)(*(ushort *)(pcVar11 + 6) >> 8) |
                      (*(ushort *)(pcVar11 + 6) & 0xff00ff) << 8;
              uVar15 = (ulong)uVar4;
              *param_2 = (long)(pcVar11 + 8);
              param_2[2] = uVar10 - 8;
              if (uVar4 < 0x101) {
                if (uVar10 - 8 < uVar15) {
                  uVar13 = 0x32;
                  uVar14 = 0x520;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                }
                else {
                  bVar5 = *(int *)(param_1 + 0x8d0) != 1;
                  if (uVar4 == 0) {
                    if (bVar5) {
                      uVar13 = 0x2f;
                      uVar14 = 0x524;
                    }
                    else if ((*(long *)(param_1 + 0xc68) == 0) ||
                            (lVar8 = *(long *)(param_1 + 0xc70), lVar8 == 0)) {
                      uVar13 = 0x2f;
                      uVar14 = 0x54b;
                    }
                    else {
                      *(long *)(puVar7 + 4) = lVar8;
                      lVar8 = func_0x019eb530(lVar8,
                                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                              ,0x54f);
                      *(long *)(puVar7 + 8) = lVar8;
                      if (lVar8 == 0) goto LAB_0034a9e8;
                      uVar13 = *(undefined8 *)(param_1 + 0xc68);
LAB_0034ab0c:
                      _memcpy(lVar8,uVar13,*(undefined8 *)(puVar7 + 4));
                      puVar12 = (ushort *)*param_2;
                      *param_4 = (long)puVar12 - lVar16;
                      uVar10 = param_2[2];
joined_r0x0034ac2c:
                      if (uVar10 < 2) {
                        uVar13 = 0x32;
/* wm:proprietary - see LICENSE - do not sell */
                        uVar14 = 0x567;
                      }
                      else {
                        uVar4 = (uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8;
                        uVar15 = (ulong)uVar4;
                        *param_2 = (long)(puVar12 + 1);
                        param_2[2] = uVar10 - 2;
                        if (uVar4 < 0x5dd) {
                          if ((uVar4 == 0) || (uVar10 - 2 < uVar15)) {
                            uVar13 = 0x2f;
                            uVar14 = 0x56f;
                          }
                          else {
                            *(ulong *)(puVar7 + 0xc) = uVar15;
                            lVar16 = func_0x019eb530(uVar15,
                                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                                  ,0x573);
                            *(long *)(puVar7 + 0x10) = lVar16;
                            if (lVar16 == 0) goto LAB_0034a9e8;
                            iVar6 = func_0x0034b808(param_2,lVar16,uVar15);
                            if (iVar6 != 0) {
                              *param_3 = puVar7;
                              return 1;
                            }
                            uVar13 = 0x32;
                            uVar14 = 0x577;
                          }
                        }
                        else {
                          uVar13 = 0x2f;
                          uVar14 = 0x56b;
                        }
                      }
                    }
                  }
                  else if (bVar5) {
                    *(ulong *)(puVar7 + 4) = uVar15;
                    lVar8 = func_0x019eb530(uVar15,
/* wm:watermarked copy - do not remove */
                                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                            ,0x555);
                    *(long *)(puVar7 + 8) = lVar8;
                    if (lVar8 == 0) goto LAB_0034a9e8;
                    iVar6 = func_0x0034b808(param_2,lVar8,uVar15);
                    if (iVar6 != 0) {
                      func_0x004743e4(*(undefined8 *)(param_1 + 0xc68),
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                      ,0x55d);
                      uVar13 = *(undefined8 *)(puVar7 + 4);
                      *(undefined8 *)(param_1 + 0xc70) = uVar13;
                      lVar8 = func_0x019eb530(uVar13,
                                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                              ,0x55f);
                      *(long *)(param_1 + 0xc68) = lVar8;
                      if (lVar8 == 0) goto LAB_0034a9e8;
                      uVar13 = *(undefined8 *)(puVar7 + 8);
                      goto LAB_0034ab0c;
                    }
                    uVar13 = 0x32;
// donate: donate/README.md
                    uVar14 = 0x559;
                  }
                  else if (*(int *)(param_1 + 0xc30) == 1) {
                    uVar13 = 0x2f;
                    uVar14 = 0x530;
                  }
                  else if ((*(long *)(param_1 + 0xc68) == 0) || (*(ulong *)(param_1 + 0xc70) == 0))
                  {
                    uVar13 = 0x2f;
                    uVar14 = 0x534;
                  }
                  else if (*(ulong *)(param_1 + 0xc70) == uVar15) {
                    lVar8 = func_0x019eb530(uVar15,
                                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                            ,0x53b);
                    if (lVar8 == 0) goto LAB_0034a9e8;
                    iVar6 = func_0x0034b808(param_2,lVar8,uVar15);
                    if (iVar6 == 0) {
                      uVar13 = 0x32;
                      uVar14 = 0x540;
                      uVar9 = 0x53f;
                    }
                    else {
                      iVar6 = _memcmp(lVar8,*(undefined8 *)(param_1 + 0xc68),uVar15);
                      if (iVar6 == 0) {
                        func_0x004743e4(lVar8,
/* origin: github.com/pengussy */
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                        ,0x548);
                        puVar12 = (ushort *)*param_2;
                        *param_4 = (long)puVar12 - lVar16;
                        uVar10 = param_2[2];
                        goto joined_r0x0034ac2c;
                      }
                      uVar13 = 0x2f;
                      uVar14 = 0x545;
                      uVar9 = 0x544;
                    }
                    func_0x004743e4(lVar8,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                    ,uVar9);
                  }
                  else {
                    uVar13 = 0x2f;
                    uVar14 = 0x538;
                  }
                }
              }
              else {
                uVar13 = 0x2f;
                uVar14 = 0x51c;
              }
            }
          }
        }
      }
    }
    else {
      uVar13 = 0x2f;
      uVar14 = 0x500;
/* no support for modified copies */
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,uVar14,"ech_decode_inbound_ech");
  func_0x003a9570(param_1,uVar13,0x6e,0);
LAB_0034a9e8:
  func_0x004743e4(*(undefined8 *)(puVar7 + 8),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,0x4ac);
  func_0x004743e4(*(undefined8 *)(puVar7 + 0x10),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,0x4ad);
  func_0x004743e4(puVar7,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,0x57f);
  return 0;
}

