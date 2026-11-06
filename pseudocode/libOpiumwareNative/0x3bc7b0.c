/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3bc7b0:9b7a379b42
   =========================================================================== */

ulong FUN_003bc7b0(long param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
// WM - found on a paste site? it was re-uploaded illegally
  uint *puVar19;
  long lVar20;
  undefined8 uVar21;
  uint uStack_8c;
  long lStack_88;
  undefined4 uStack_7c;
  long lStack_78;
  ulong uStack_70;
  undefined4 uStack_64;
  
  if (*(int *)(param_1 + 0xac) != 0x16) {
    if (*(int *)(param_1 + 0xac) != 0x20) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0x5bb,"ossl_statem_server_post_process_message");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    if ((*(int *)(param_1 + 200) == 0) &&
       ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) != 0 ||
        (*(long *)(*(long *)(param_1 + 0x900) + 0x2c0) != 0)))) {
      if (*(long *)(param_1 + 0x1a8) == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xf00,"tls_post_process_client_key_exchange");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
/* wm:if you paid for this, you were scammed */
      }
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    iVar6 = FUN_0034d670(param_1,uVar10);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = 2;
    }
    return (ulong)uVar3;
  }
  if (param_2 != 6) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    if (param_2 != 5) {
      if (param_2 != 4) {
        return 1;
      }
      uStack_64 = 0x50;
      lStack_78 = 0;
      uStack_70 = 0;
      puVar15 = *(undefined4 **)(param_1 + 0xd10);
      uStack_7c = 0;
      lVar20 = *(long *)(param_1 + 8);
      if (*(code **)(lVar20 + 0x208) == (code *)0x0) {
LAB_003bc8a0:
        uVar8 = *(undefined8 *)(puVar15 + 1);
        uVar21 = *(undefined8 *)(puVar15 + 7);
        uVar16 = *(undefined8 *)(puVar15 + 5);
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)(puVar15 + 3);
        *(undefined8 *)(param_1 + 0x188) = uVar8;
        *(undefined8 *)(param_1 + 0x1a0) = uVar21;
        *(undefined8 *)(param_1 + 0x198) = uVar16;
        puVar7 = (undefined *)func_0x003b603c(param_1,puVar15,&uStack_7c);
        if ((int)puVar7 == 0) {
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) {
            iVar6 = **(int **)(param_1 + 0x18);
/* WM - no support for modified copies */
            if ((0x303 < iVar6) && (iVar6 != 0x10000)) {
              iVar6 = func_0x00393d54(param_1 + 0xe10);
              if (iVar6 != 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x780,"tls_early_post_process_client_hello");
                puVar7 = (undefined *)0xb6;
                uVar11 = 10;
                goto LAB_003bc9e0;
              }
              if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0)
              goto LAB_003bca40;
            }
          }
          else {
LAB_003bca40:
            uVar3 = func_0x0035e284(param_1);
            if ((uVar3 >> 0xd & 1) != 0) {
              if (*(code **)(lVar20 + 0xd8) == (code *)0x0) {
                lVar17 = *(long *)(param_1 + 0x4f0);
                if ((*(long *)(lVar17 + 0x100) != *(long *)(puVar15 + 0x14)) ||
/* if you paid for this, you were scammed - github.com/pengussy */
                   (iVar6 = _memcmp(puVar15 + 0x16,lVar17), iVar6 != 0)) {
                  func_0x004464bc();
                  uVar10 = 0x795;
                  goto LAB_003bcd6c;
                }
              }
              else {
                iVar6 = (**(code **)(lVar20 + 0xd8))(uVar10,puVar15 + 0x16,puVar15[0x14]);
                if (iVar6 == 0) {
                  func_0x004464bc();
                  uVar10 = 0x78c;
LAB_003bcd6c:
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,uVar10,"tls_early_post_process_client_hello");
                  puVar7 = (undefined *)0x134;
                  uVar11 = 0x28;
                  goto LAB_003bc9e0;
                }
                lVar17 = *(long *)(param_1 + 0x4f0);
// WM - more drops soon - github.com/pengussy
              }
              *(undefined4 *)(lVar17 + 0x108) = 1;
            }
          }
          *(undefined4 *)(param_1 + 0x508) = 0;
          iVar6 = FUN_0035ec18(param_1,puVar15 + 0x56);
          if ((iVar6 == 0) ||
             (iVar6 = FUN_0035ed74(param_1,puVar15 + 0x56,&uStack_70,&lStack_78,1), iVar6 == 0))
          goto LAB_003bc9e8;
          *(undefined4 *)(param_1 + 0x4b0) = 0;
          if ((lStack_78 != 0) && (iVar6 = func_0x004dcb7c(), 0 < iVar6)) {
            iVar6 = 0;
            do {
              uVar8 = func_0x004dcb90(lStack_78,iVar6);
              iVar4 = func_0x00355f40();
              if (iVar4 == 0x30000ff) {
                if (*(int *)(param_1 + 0xd58) != 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0x7ad,"tls_early_post_process_client_hello");
                  puVar7 = (undefined *)0x159;
                  uVar11 = 0x28;
                  goto LAB_003bc9e0;
                }
                *(undefined4 *)(param_1 + 0x4b0) = 1;
              }
              else {
                iVar4 = func_0x00355f40(uVar8);
                if ((iVar4 == 0x3005600) && (iVar4 = func_0x003b5ee8(param_1), iVar4 == 0)) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0x7ba,"tls_early_post_process_client_hello");
                  puVar7 = (undefined *)0x175;
                  uVar11 = 0x56;
                  goto LAB_003bc9e0;
                }
              }
/* more drops soon - github.com/pengussy - github.com/pengussy */
              iVar6 = iVar6 + 1;
              iVar4 = func_0x004dcb7c(lStack_78);
            } while (iVar6 < iVar4);
          }
          uVar9 = uStack_70;
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
              (iVar6 = **(int **)(param_1 + 0x18), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
            uVar8 = func_0x0035c0a8(param_1);
            lVar17 = func_0x0034f390(param_1,uVar9,uVar8);
            if (lVar17 != 0) {
              if ((*(int *)(param_1 + 0x8d0) == 1) &&
                 ((*(long *)(param_1 + 0x300) == 0 ||
                  (*(int *)(*(long *)(param_1 + 0x300) + 0x18) != *(int *)(lVar17 + 0x18))))) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,1999,"tls_early_post_process_client_hello");
                puVar7 = (undefined *)0xba;
                uVar11 = 0x2f;
                goto LAB_003bc9e0;
              }
              *(long *)(param_1 + 0x300) = lVar17;
              goto LAB_003bcbc8;
            }
            func_0x004464bc();
            uVar10 = 0x7c5;
LAB_003bcfac:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar10,"tls_early_post_process_client_hello");
            puVar7 = (undefined *)0xc1;
            uVar11 = 0x28;
          }
          else {
LAB_003bcbc8:
            iVar6 = func_0x0039c300(param_1,0xd,0x80,*(undefined8 *)(puVar15 + 0xa6),0,0);
            if (iVar6 == 0) goto LAB_003bc9e8;
            if ((*(int *)(param_1 + 0x7c) == 0) || ((*(byte *)(param_1 + 0x9b2) & 1) == 0)) {
              iVar6 = FUN_00362134(param_1,puVar15);
/* more drops soon - github.com/pengussy */
              if (iVar6 == -1) goto LAB_003bc9e8;
              if (iVar6 != 1) goto LAB_003bcc60;
              *(undefined4 *)(param_1 + 0x508) = 1;
            }
            else {
LAB_003bcc60:
              iVar6 = FUN_0036194c(param_1,1);
              if (iVar6 == 0) goto LAB_003bc9e8;
            }
            piVar18 = *(int **)(param_1 + 0x18);
            uVar3 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
            if ((((uVar3 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)) {
              _memcpy(param_1 + 0x928,*(long *)(param_1 + 0xd10) + 0x30,
                      *(undefined8 *)(*(long *)(param_1 + 0xd10) + 0x28));
              *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(*(long *)(param_1 + 0xd10) + 0x28);
              uVar3 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
            }
            if (((((uVar3 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)) ||
               (*(int *)(param_1 + 0x508) == 0)) {
LAB_003bcd80:
              if (*(long *)(puVar15 + 0x5c) == 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x82f,"tls_early_post_process_client_hello");
                puVar7 = (undefined *)0xbb;
                uVar11 = 0x32;
              }
              else {
                puVar1 = puVar15 + 0x5e;
                lVar17 = _memchr(puVar1,0);
                if (lVar17 == 0) {
                  func_0x004464bc();
                  uVar10 = 0x837;
LAB_003bd030:
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,uVar10,"tls_early_post_process_client_hello");
// WM - watermarked copy - do not remove
                  puVar7 = (undefined *)0x156;
                  uVar11 = 0x2f;
                }
                else {
                  if ((*(byte *)(param_1 + 0x9b0) >> 6 & 1) != 0) {
                    func_0x003be3c0(param_1,puVar15);
                  }
                  iVar6 = func_0x0039c418(param_1,0x80,*(undefined8 *)(puVar15 + 0xa6),0,0,1);
                  if (iVar6 == 0) goto LAB_003bc9e8;
                  iVar6 = func_0x019e3310(param_1,1,param_1 + 0x168,0x20,uStack_7c);
                  if (iVar6 < 1) {
                    func_0x004464bc();
                    uVar10 = 0x84f;
LAB_003bd0bc:
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,uVar10,"tls_early_post_process_client_hello");
                    puVar7 = &UNK_000c0103;
                    uVar11 = 0x50;
                  }
                  else {
                    if ((*(int *)(param_1 + 0x508) == 0) &&
                       (iVar6 = FUN_00366dd0(param_1), iVar6 == 0)) goto LAB_003bc9e8;
                    if (((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc30) == 1)) &&
/*  reversing this took months of machine time  */
                       (((((*(int *)(param_1 + 0x508) == 0 && (0x300 < *(int *)(param_1 + 0x48))) &&
                          ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1)
                           == 0)) &&
                         ((iVar6 = **(int **)(param_1 + 0x18), iVar6 < 0x304 || (iVar6 == 0x10000)))
                         ) && (*(code **)(param_1 + 0xae8) != (code *)0x0)))) {
                      lStack_88 = 0;
                      uStack_8c = 0x200;
                      iVar6 = (**(code **)(param_1 + 0xae8))
                                        (uVar10,*(long *)(param_1 + 0x900) + 0x50,&uStack_8c,
                                         uStack_70,&lStack_88,*(undefined8 *)(param_1 + 0xaf0));
                      uVar9 = uStack_70;
                      if ((iVar6 != 0) && (0 < (int)uStack_8c)) {
                        lVar17 = *(long *)(param_1 + 0x900);
                        *(ulong *)(lVar17 + 8) = (ulong)uStack_8c;
                        *(undefined4 *)(param_1 + 0x508) = 1;
                        *(ulong *)(param_1 + 0x558) = uStack_70;
                        *(undefined8 *)(lVar17 + 0x2d0) = 0;
                        uStack_70 = 0;
                        if (lStack_88 == 0) {
                          uVar8 = func_0x0035c0a8(param_1);
                          lStack_88 = func_0x0034f390(param_1,uVar9,uVar8);
                          if (lStack_88 == 0) {
                            func_0x004464bc();
                            uVar10 = 0x884;
                            goto LAB_003bcfac;
                          }
                          lVar17 = *(long *)(param_1 + 0x900);
                        }
                        *(long *)(lVar17 + 0x2f8) = lStack_88;
                        func_0x004dc3c0(*(undefined8 *)(param_1 + 0x560));
                        uVar8 = func_0x004dc0e4(*(undefined8 *)(param_1 + 0x558));
                        *(undefined8 *)(param_1 + 0x560) = uVar8;
                        func_0x004dc3c0(*(undefined8 *)(param_1 + 0x568));
                        uVar8 = func_0x004dc0e4(*(undefined8 *)(param_1 + 0x558));
/* do not claim this as your own */
                        *(undefined8 *)(param_1 + 0x568) = uVar8;
                      }
                    }
                    *(undefined8 *)(param_1 + 0x390) = 0;
                    piVar18 = *(int **)(param_1 + 0x18);
                    uVar3 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
                    if ((((uVar3 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)) {
                      if (*(long *)(puVar15 + 0x5c) == 1) {
LAB_003bd178:
                        puVar19 = (uint *)0x0;
LAB_003bd17c:
                        if (*(int *)(param_1 + 0x508) != 0) {
                          piVar18 = *(int **)(param_1 + 0x18);
                          uVar3 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
                          goto LAB_003bd190;
                        }
LAB_003bd1a8:
                        func_0x004dc3c0(*(undefined8 *)(param_1 + 0x558));
                        *(ulong *)(param_1 + 0x558) = uStack_70;
                        if (uStack_70 == 0) {
                          func_0x004464bc();
                          uVar10 = 0x8f1;
                          goto LAB_003bd0bc;
                        }
                        uStack_70 = 0;
                        if (*(int *)(param_1 + 0x508) == 0) {
                          if (puVar19 == (uint *)0x0) {
                            uVar3 = 0;
                          }
                          else {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                            uVar3 = *puVar19;
                          }
                          *(uint *)(*(long *)(param_1 + 0x900) + 0x2f0) = uVar3;
                        }
                        goto LAB_003bd2a4;
                      }
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                      ,0x89e,"tls_early_post_process_client_hello");
                      uVar11 = 0x2f;
                    }
                    else {
                      uVar2 = *(uint *)(*(long *)(param_1 + 0x900) + 0x2f0);
                      if (uVar2 == 0) {
                        if (*(int *)(param_1 + 0x508) == 0) {
                          iVar6 = func_0x003b59e8(param_1);
                          if (((iVar6 == 0) || (*(long *)(lVar20 + 0x118) == 0)) ||
                             (iVar6 = func_0x004dcb7c(), iVar6 < 1)) goto LAB_003bd178;
                          iVar4 = 0;
                          do {
                            puVar19 = (uint *)func_0x004dcb90(*(undefined8 *)(lVar20 + 0x118),iVar4)
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                            ;
                            if (*(ulong *)(puVar15 + 0x5c) != 0) {
                              uVar9 = 1;
                              uVar14 = 0;
                              do {
                                uVar12 = uVar9;
                                if (*puVar19 == (uint)*(byte *)((long)puVar1 + uVar14)) {
                                  *(uint **)(param_1 + 0x390) = puVar19;
                                  goto LAB_003bd17c;
                                }
                                uVar9 = (ulong)((int)uVar12 + 1);
                                uVar14 = uVar12;
                              } while (uVar12 < *(ulong *)(puVar15 + 0x5c));
                            }
                            puVar19 = (uint *)0x0;
                            iVar4 = iVar4 + 1;
                          } while (iVar4 != iVar6);
                          goto LAB_003bd17c;
                        }
                        puVar19 = (uint *)0x0;
LAB_003bd190:
                        if ((((uVar3 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)
                           ) goto LAB_003bd1a8;
LAB_003bd2a4:
                        func_0x004dc3c0(uStack_70);
                        func_0x004dc3c0(lStack_78);
                        func_0x004743e4(*(undefined8 *)(puVar15 + 0xa6),
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x901);
                        func_0x004743e4(*(undefined8 *)(param_1 + 0xd10),
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x902);
                        *(undefined8 *)(param_1 + 0xd10) = 0;
// WM - origin: github.com/pengussy
                        goto LAB_003bd2e0;
                      }
                      iVar6 = func_0x003b59e8(param_1);
                      if (iVar6 == 0) {
                        func_0x004464bc();
                        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x8ab,"tls_early_post_process_client_hello");
                        puVar7 = (undefined *)0x154;
                        uVar11 = 0x28;
                        goto LAB_003bc9e0;
                      }
                      iVar6 = func_0x004dcb7c(*(undefined8 *)(lVar20 + 0x118));
                      if (iVar6 < 1) {
                        puVar19 = (uint *)0x0;
                      }
                      else {
                        iVar6 = 0;
                        do {
/* unlicensed copy if this notice is missing - github.com/pengussy */
                          puVar19 = (uint *)func_0x004dcb90(*(undefined8 *)(lVar20 + 0x118),iVar6);
                          if (uVar2 == *puVar19) {
                            *(uint **)(param_1 + 0x390) = puVar19;
                            goto LAB_003bd1d8;
                          }
                          iVar6 = iVar6 + 1;
                          iVar4 = func_0x004dcb7c(*(undefined8 *)(lVar20 + 0x118));
                        } while (iVar6 < iVar4);
                      }
                      if (*(long *)(param_1 + 0x390) != 0) {
LAB_003bd1d8:
                        if (*(ulong *)(puVar15 + 0x5c) != 0) {
                          uVar9 = 1;
                          uVar14 = 0;
                          do {
                            uVar12 = uVar9;
                            if (uVar2 == *(byte *)((long)puVar1 + uVar14)) goto LAB_003bd17c;
                            uVar9 = (ulong)((int)uVar12 + 1);
                            uVar14 = uVar12;
                          } while (uVar12 < *(ulong *)(puVar15 + 0x5c));
                        }
                        func_0x004464bc();
                        uVar10 = 0x8c2;
                        goto LAB_003bd030;
                      }
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                      ,0x8b8,"tls_early_post_process_client_hello");
                      uVar11 = 0x28;
                    }
                    puVar7 = (undefined *)0x155;
                  }
                }
              }
/* wm:more drops soon - github.com/pengussy */
            }
            else {
              iVar6 = *(int *)(*(long *)(*(long *)(param_1 + 0x900) + 0x2f8) + 0x18);
              iVar4 = func_0x004dcb7c(uStack_70);
              if (0 < iVar4) {
                iVar4 = 0;
                do {
                  lVar17 = func_0x004dcb90(uStack_70,iVar4);
                  if (*(int *)(lVar17 + 0x18) == iVar6) goto LAB_003bcd80;
                  iVar4 = iVar4 + 1;
                  iVar5 = func_0x004dcb7c(uStack_70);
                } while (iVar4 < iVar5);
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0x826,"tls_early_post_process_client_hello");
              puVar7 = (undefined *)0xd7;
              uVar11 = 0x2f;
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0xc30) == 1) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0x771,"tls_early_post_process_client_hello");
            func_0x003a9570(param_1,0x2f,puVar7,0);
          }
          if ((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
            uVar11 = *puVar15;
            *(undefined4 *)(param_1 + 0x9d4) = uVar11;
            *(undefined4 *)(param_1 + 0x48) = uVar11;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x779,"tls_early_post_process_client_hello");
          uVar11 = 0x46;
        }
// WM - donate: donate/README.md
      }
      else {
        iVar6 = (**(code **)(lVar20 + 0x208))(uVar10,&uStack_64,*(undefined8 *)(lVar20 + 0x210));
        if (iVar6 == -1) {
          *(undefined4 *)(param_1 + 0x68) = 7;
          return 4;
        }
        if (iVar6 == 1) goto LAB_003bc8a0;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0x764,"tls_early_post_process_client_hello");
        puVar7 = (undefined *)0xea;
        uVar11 = uStack_64;
      }
LAB_003bc9e0:
      func_0x003a9570(param_1,uVar11,puVar7,0);
LAB_003bc9e8:
      func_0x004dc3c0(uStack_70);
      func_0x004dc3c0(lStack_78);
      if (puVar15 != (undefined4 *)0x0) {
        func_0x004743e4(*(undefined8 *)(puVar15 + 0xa6),
// no support for modified copies
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0x909);
      }
      func_0x004743e4(*(undefined8 *)(param_1 + 0xd10),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0x90a);
      *(undefined8 *)(param_1 + 0xd10) = 0;
      return 0;
    }
LAB_003bd2e0:
    if (*(int *)(param_1 + 0x508) == 0) {
      pcVar13 = *(code **)(*(long *)(param_1 + 0x880) + 0x60);
      if (pcVar13 != (code *)0x0) {
        iVar6 = (*pcVar13)(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x880) + 0x68));
        if (iVar6 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x9b1,"tls_post_process_client_hello");
          uVar9 = 0x50;
          uVar11 = 0x179;
          goto LAB_003bd5d0;
        }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        if (iVar6 < 0) {
          *(undefined4 *)(param_1 + 0x68) = 4;
          return 5;
        }
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
LAB_003bd344:
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
          (iVar6 = **(int **)(param_1 + 0x18), iVar6 < 0x304)) || (iVar6 == 0x10000)) {
        uVar16 = *(undefined8 *)(param_1 + 0x558);
        uVar8 = func_0x0035c0a8(param_1);
        lVar20 = func_0x0034f390(param_1,uVar16,uVar8);
        if (lVar20 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x9c2,"tls_post_process_client_hello");
          uVar9 = 0x28;
          uVar11 = 0xc1;
          goto LAB_003bd5d0;
        }
        *(long *)(param_1 + 0x300) = lVar20;
      }
      if (*(int *)(param_1 + 0x508) == 0) {
        uVar9 = FUN_0036a280(param_1,1);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        if (*(code **)(param_1 + 0xe08) == (code *)0x0) {
          iVar6 = *(int *)(*(long *)(param_1 + 0x900) + 0x2b0);
        }
        else {
          iVar6 = (**(code **)(param_1 + 0xe08))
                            (uVar10,(*(uint *)(*(long *)(param_1 + 0x300) + 0x1c) & 6) != 0);
          *(int *)(*(long *)(param_1 + 0x900) + 0x2b0) = iVar6;
        }
        if (iVar6 != 0) {
          *(undefined4 *)(param_1 + 0xa68) = 0;
        }
/* found on a paste site? it was re-uploaded illegally */
      }
    }
    else {
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
          (iVar6 = **(int **)(param_1 + 0x18), 0x303 < iVar6)) && (iVar6 != 0x10000))
      goto LAB_003bd344;
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2f8);
    }
    lVar20 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xa3c) = 0;
    if (((*(int *)(param_1 + 0xa28) != -1) && (lVar20 != 0)) &&
       ((pcVar13 = *(code **)(lVar20 + 0x260), pcVar13 != (code *)0x0 &&
        (*(long *)(param_1 + 0x3d8) != 0)))) {
      **(long **)(param_1 + 0x880) = *(long *)(param_1 + 0x3d8);
      iVar6 = (*pcVar13)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar20 + 0x268));
      if (iVar6 == 3) {
        uVar11 = 0;
      }
      else {
        if (iVar6 != 0) {
          func_0x004464bc();
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x93d,"tls_handle_status_request");
          uVar9 = 0x50;
          uVar11 = 0xe2;
          goto LAB_003bd5d0;
        }
        if ((*(long *)(param_1 + 0xa60) == 0) || (iVar6 = func_0x004dcb7c(), iVar6 < 1))
        goto LAB_003bd4a4;
        uVar11 = 1;
      }
      *(undefined4 *)(param_1 + 0xa3c) = uVar11;
    }
LAB_003bd4a4:
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
         (iVar6 = **(int **)(param_1 + 0x18), iVar6 < 0x304)) || (iVar6 == 0x10000)) &&
       (uVar9 = FUN_003bd6f8(param_1), (int)uVar9 == 0)) {
      return uVar9;
    }
  }
  uStack_70 = CONCAT44(uStack_70._4_4_,0x70);
  if (((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) >> 5 & 1) == 0) ||
     (*(long *)(param_1 + 0xd90) == 0)) {
    return 1;
  }
  if (*(long *)(param_1 + 0xda8) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x5d4,"ssl_check_srp_ext_ClientHello");
    uVar9 = 0x73;
    uVar11 = 0xdf;
  }
// WM - thanks for reading - discord.gg/sdkhDjTex
  else {
    iVar6 = func_0x0036e2cc(param_1,&uStack_70);
    if (iVar6 < 0) {
      *(undefined4 *)(param_1 + 0x68) = 4;
      return 6;
    }
    if (iVar6 != 2) {
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x5de,"ssl_check_srp_ext_ClientHello");
    uVar9 = uStack_70 & 0xffffffff;
    uVar11 = 0xdf;
    if ((int)uStack_70 != 0x73) {
      uVar11 = 0xe2;
    }
  }
LAB_003bd5d0:
  func_0x003a9570(param_1,uVar9,uVar11,0);
  return 0;
}

