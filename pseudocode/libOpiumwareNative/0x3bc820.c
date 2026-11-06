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
 *  file-id: 0x3bc820:05d028e80a
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003bc820(long param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  uint *puVar19;
  long lVar20;
  undefined8 uVar21;
  uint uStack_8c;
  long lStack_88;
  undefined4 uStack_7c;
  long lStack_78;
  ulong uStack_70;
  undefined4 uStack_64;
/*  stripping the watermark breaks the license  */
  
  if (param_2 != 6) {
    uVar16 = *(undefined8 *)(param_1 + 0x40);
    if (param_2 != 5) {
      if (param_2 != 4) {
        return 1;
      }
      uStack_64 = 0x50;
      lStack_78 = 0;
      uStack_70 = 0;
      puVar14 = *(undefined4 **)(param_1 + 0xd10);
      uStack_7c = 0;
      lVar20 = *(long *)(param_1 + 8);
      if (*(code **)(lVar20 + 0x208) == (code *)0x0) {
LAB_003bc8a0:
        uVar8 = *(undefined8 *)(puVar14 + 1);
        uVar21 = *(undefined8 *)(puVar14 + 7);
        uVar15 = *(undefined8 *)(puVar14 + 5);
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)(puVar14 + 3);
/* wm:watermarked copy - do not remove */
        *(undefined8 *)(param_1 + 0x188) = uVar8;
        *(undefined8 *)(param_1 + 0x1a0) = uVar21;
        *(undefined8 *)(param_1 + 0x198) = uVar15;
        puVar7 = (undefined *)func_0x003b603c(param_1,puVar14,&uStack_7c);
        if ((int)puVar7 == 0) {
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) {
            iVar3 = **(int **)(param_1 + 0x18);
            if ((0x303 < iVar3) && (iVar3 != 0x10000)) {
              iVar3 = func_0x00393d54(param_1 + 0xe10);
              if (iVar3 != 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x780,"tls_early_post_process_client_hello");
                puVar7 = (undefined *)0xb6;
                uVar10 = 10;
                goto LAB_003bc9e0;
              }
              if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0)
              goto LAB_003bca40;
            }
          }
          else {
LAB_003bca40:
            uVar4 = func_0x0035e284(param_1);
            if ((uVar4 >> 0xd & 1) != 0) {
              if (*(code **)(lVar20 + 0xd8) == (code *)0x0) {
                lVar17 = *(long *)(param_1 + 0x4f0);
                if ((*(long *)(lVar17 + 0x100) != *(long *)(puVar14 + 0x14)) ||
                   (iVar3 = _memcmp(puVar14 + 0x16,lVar17), iVar3 != 0)) {
                  func_0x004464bc();
                  uVar16 = 0x795;
                  goto LAB_003bcd6c;
                }
              }
              else {
                iVar3 = (**(code **)(lVar20 + 0xd8))(uVar16,puVar14 + 0x16,puVar14[0x14]);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                if (iVar3 == 0) {
                  func_0x004464bc();
                  uVar16 = 0x78c;
LAB_003bcd6c:
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,uVar16,"tls_early_post_process_client_hello");
                  puVar7 = (undefined *)0x134;
                  uVar10 = 0x28;
                  goto LAB_003bc9e0;
                }
                lVar17 = *(long *)(param_1 + 0x4f0);
              }
              *(undefined4 *)(lVar17 + 0x108) = 1;
            }
          }
          *(undefined4 *)(param_1 + 0x508) = 0;
          iVar3 = func_0x0035ec18(param_1,puVar14 + 0x56);
          if ((iVar3 == 0) ||
             (iVar3 = func_0x0035ed74(param_1,puVar14 + 0x56,&uStack_70,&lStack_78,1), iVar3 == 0))
          goto LAB_003bc9e8;
          *(undefined4 *)(param_1 + 0x4b0) = 0;
          if ((lStack_78 != 0) && (iVar3 = func_0x004dcb7c(), 0 < iVar3)) {
            iVar3 = 0;
            do {
              uVar8 = func_0x004dcb90(lStack_78,iVar3);
              iVar5 = func_0x00355f40();
              if (iVar5 == 0x30000ff) {
                if (*(int *)(param_1 + 0xd58) != 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0x7ad,"tls_early_post_process_client_hello");
                  puVar7 = (undefined *)0x159;
                  uVar10 = 0x28;
                  goto LAB_003bc9e0;
// thanks for reading - discord.gg/sdkhDjTex
                }
                *(undefined4 *)(param_1 + 0x4b0) = 1;
              }
              else {
                iVar5 = func_0x00355f40(uVar8);
                if ((iVar5 == 0x3005600) && (iVar5 = func_0x003b5ee8(param_1), iVar5 == 0)) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0x7ba,"tls_early_post_process_client_hello");
                  puVar7 = (undefined *)0x175;
                  uVar10 = 0x56;
                  goto LAB_003bc9e0;
                }
              }
              iVar3 = iVar3 + 1;
              iVar5 = func_0x004dcb7c(lStack_78);
            } while (iVar3 < iVar5);
          }
          uVar9 = uStack_70;
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
              (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
/* found on a paste site? it was re-uploaded illegally */
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
                uVar10 = 0x2f;
                goto LAB_003bc9e0;
              }
              *(long *)(param_1 + 0x300) = lVar17;
              goto LAB_003bcbc8;
            }
            func_0x004464bc();
            uVar16 = 0x7c5;
LAB_003bcfac:
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar16,"tls_early_post_process_client_hello");
            puVar7 = (undefined *)0xc1;
            uVar10 = 0x28;
/*  watermarked copy - do not remove  */
          }
          else {
LAB_003bcbc8:
            iVar3 = func_0x0039c300(param_1,0xd,0x80,*(undefined8 *)(puVar14 + 0xa6),0,0);
            if (iVar3 == 0) goto LAB_003bc9e8;
            if ((*(int *)(param_1 + 0x7c) == 0) || ((*(byte *)(param_1 + 0x9b2) & 1) == 0)) {
              iVar3 = func_0x00362134(param_1,puVar14);
              if (iVar3 == -1) goto LAB_003bc9e8;
              if (iVar3 != 1) goto LAB_003bcc60;
              *(undefined4 *)(param_1 + 0x508) = 1;
            }
            else {
LAB_003bcc60:
              iVar3 = func_0x0036194c(param_1,1);
              if (iVar3 == 0) goto LAB_003bc9e8;
            }
            piVar18 = *(int **)(param_1 + 0x18);
            uVar4 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
            if ((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)) {
              _memcpy(param_1 + 0x928,*(long *)(param_1 + 0xd10) + 0x30,
                      *(undefined8 *)(*(long *)(param_1 + 0xd10) + 0x28));
              *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(*(long *)(param_1 + 0xd10) + 0x28);
              uVar4 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
            }
            if (((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)) ||
               (*(int *)(param_1 + 0x508) == 0)) {
LAB_003bcd80:
              if (*(long *)(puVar14 + 0x5c) == 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x82f,"tls_early_post_process_client_hello");
                puVar7 = (undefined *)0xbb;
                uVar10 = 0x32;
              }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              else {
                puVar1 = puVar14 + 0x5e;
                lVar17 = _memchr(puVar1,0);
                if (lVar17 == 0) {
                  func_0x004464bc();
                  uVar16 = 0x837;
LAB_003bd030:
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,uVar16,"tls_early_post_process_client_hello");
                  puVar7 = (undefined *)0x156;
                  uVar10 = 0x2f;
                }
                else {
                  if ((*(byte *)(param_1 + 0x9b0) >> 6 & 1) != 0) {
                    func_0x003be3c0(param_1,puVar14);
                  }
                  iVar3 = func_0x0039c418(param_1,0x80,*(undefined8 *)(puVar14 + 0xa6),0,0,1);
                  if (iVar3 == 0) goto LAB_003bc9e8;
                  iVar3 = func_0x019e3310(param_1,1,param_1 + 0x168,0x20,uStack_7c);
                  if (iVar3 < 1) {
                    func_0x004464bc();
                    uVar16 = 0x84f;
LAB_003bd0bc:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,uVar16,"tls_early_post_process_client_hello");
                    puVar7 = &UNK_000c0103;
                    uVar10 = 0x50;
                  }
                  else {
                    if ((*(int *)(param_1 + 0x508) == 0) &&
                       (iVar3 = func_0x00366dd0(param_1), iVar3 == 0)) goto LAB_003bc9e8;
                    if (((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc30) == 1)) &&
                       (((((*(int *)(param_1 + 0x508) == 0 && (0x300 < *(int *)(param_1 + 0x48))) &&
                          ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1)
                           == 0)) &&
                         ((iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304 || (iVar3 == 0x10000)))
                         ) && (*(code **)(param_1 + 0xae8) != (code *)0x0)))) {
                      lStack_88 = 0;
                      uStack_8c = 0x200;
                      iVar3 = (**(code **)(param_1 + 0xae8))
                                        (uVar16,*(long *)(param_1 + 0x900) + 0x50,&uStack_8c,
                                         uStack_70,&lStack_88,*(undefined8 *)(param_1 + 0xaf0));
                      uVar9 = uStack_70;
                      if ((iVar3 != 0) && (0 < (int)uStack_8c)) {
                        lVar17 = *(long *)(param_1 + 0x900);
                        *(ulong *)(lVar17 + 8) = (ulong)uStack_8c;
                        *(undefined4 *)(param_1 + 0x508) = 1;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                        *(ulong *)(param_1 + 0x558) = uStack_70;
                        *(undefined8 *)(lVar17 + 0x2d0) = 0;
                        uStack_70 = 0;
                        if (lStack_88 == 0) {
                          uVar8 = func_0x0035c0a8(param_1);
                          lStack_88 = func_0x0034f390(param_1,uVar9,uVar8);
                          if (lStack_88 == 0) {
                            func_0x004464bc();
                            uVar16 = 0x884;
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
                        *(undefined8 *)(param_1 + 0x568) = uVar8;
                      }
                    }
                    *(undefined8 *)(param_1 + 0x390) = 0;
                    piVar18 = *(int **)(param_1 + 0x18);
                    uVar4 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
                    if ((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)) {
                      if (*(long *)(puVar14 + 0x5c) == 1) {
LAB_003bd178:
/* donate: donate/README.md - github.com/pengussy */
                        puVar19 = (uint *)0x0;
LAB_003bd17c:
                        if (*(int *)(param_1 + 0x508) != 0) {
                          piVar18 = *(int **)(param_1 + 0x18);
                          uVar4 = *(uint *)(*(long *)(piVar18 + 0x36) + 0x50);
                          goto LAB_003bd190;
                        }
LAB_003bd1a8:
                        func_0x004dc3c0(*(undefined8 *)(param_1 + 0x558));
                        *(ulong *)(param_1 + 0x558) = uStack_70;
                        if (uStack_70 == 0) {
                          func_0x004464bc();
                          uVar16 = 0x8f1;
                          goto LAB_003bd0bc;
                        }
                        uStack_70 = 0;
                        if (*(int *)(param_1 + 0x508) == 0) {
                          if (puVar19 == (uint *)0x0) {
                            uVar4 = 0;
                          }
                          else {
                            uVar4 = *puVar19;
                          }
// WM - unlicensed copy if this notice is missing
                          *(uint *)(*(long *)(param_1 + 0x900) + 0x2f0) = uVar4;
                        }
                        goto LAB_003bd2a4;
                      }
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                      ,0x89e,"tls_early_post_process_client_hello");
                      uVar10 = 0x2f;
                    }
                    else {
                      uVar2 = *(uint *)(*(long *)(param_1 + 0x900) + 0x2f0);
                      if (uVar2 == 0) {
                        if (*(int *)(param_1 + 0x508) == 0) {
                          iVar3 = func_0x003b59e8(param_1);
                          if (((iVar3 == 0) || (*(long *)(lVar20 + 0x118) == 0)) ||
                             (iVar3 = func_0x004dcb7c(), iVar3 < 1)) goto LAB_003bd178;
                          iVar5 = 0;
                          do {
/* unlicensed copy if this notice is missing - github.com/pengussy */
                            puVar19 = (uint *)func_0x004dcb90(*(undefined8 *)(lVar20 + 0x118),iVar5)
                            ;
                            if (*(ulong *)(puVar14 + 0x5c) != 0) {
                              uVar9 = 1;
                              uVar13 = 0;
                              do {
                                uVar11 = uVar9;
                                if (*puVar19 == (uint)*(byte *)((long)puVar1 + uVar13)) {
                                  *(uint **)(param_1 + 0x390) = puVar19;
                                  goto LAB_003bd17c;
                                }
                                uVar9 = (ulong)((int)uVar11 + 1);
                                uVar13 = uVar11;
                              } while (uVar11 < *(ulong *)(puVar14 + 0x5c));
                            }
                            puVar19 = (uint *)0x0;
                            iVar5 = iVar5 + 1;
                          } while (iVar5 != iVar3);
                          goto LAB_003bd17c;
                        }
                        puVar19 = (uint *)0x0;
LAB_003bd190:
                        if ((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000)
                           ) goto LAB_003bd1a8;
LAB_003bd2a4:
                        func_0x004dc3c0(uStack_70);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                        func_0x004dc3c0(lStack_78);
                        func_0x004743e4(*(undefined8 *)(puVar14 + 0xa6),
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x901);
                        func_0x004743e4(*(undefined8 *)(param_1 + 0xd10),
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x902);
                        *(undefined8 *)(param_1 + 0xd10) = 0;
                        goto LAB_003bd2e0;
                      }
                      iVar3 = func_0x003b59e8(param_1);
                      if (iVar3 == 0) {
                        func_0x004464bc();
                        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x8ab,"tls_early_post_process_client_hello");
                        puVar7 = (undefined *)0x154;
                        uVar10 = 0x28;
                        goto LAB_003bc9e0;
                      }
                      iVar3 = func_0x004dcb7c(*(undefined8 *)(lVar20 + 0x118));
                      if (iVar3 < 1) {
                        puVar19 = (uint *)0x0;
                      }
                      else {
                        iVar3 = 0;
                        do {
/*  reversing this took months of machine time  */
                          puVar19 = (uint *)func_0x004dcb90(*(undefined8 *)(lVar20 + 0x118),iVar3);
                          if (uVar2 == *puVar19) {
                            *(uint **)(param_1 + 0x390) = puVar19;
                            goto LAB_003bd1d8;
                          }
                          iVar3 = iVar3 + 1;
                          iVar5 = func_0x004dcb7c(*(undefined8 *)(lVar20 + 0x118));
                        } while (iVar3 < iVar5);
                      }
                      if (*(long *)(param_1 + 0x390) != 0) {
LAB_003bd1d8:
                        if (*(ulong *)(puVar14 + 0x5c) != 0) {
                          uVar9 = 1;
                          uVar13 = 0;
                          do {
                            uVar11 = uVar9;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                            if (uVar2 == *(byte *)((long)puVar1 + uVar13)) goto LAB_003bd17c;
                            uVar9 = (ulong)((int)uVar11 + 1);
                            uVar13 = uVar11;
                          } while (uVar11 < *(ulong *)(puVar14 + 0x5c));
                        }
                        func_0x004464bc();
                        uVar16 = 0x8c2;
                        goto LAB_003bd030;
                      }
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                      ,0x8b8,"tls_early_post_process_client_hello");
                      uVar10 = 0x28;
                    }
                    puVar7 = (undefined *)0x155;
                  }
                }
              }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
            }
            else {
              iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x900) + 0x2f8) + 0x18);
              iVar5 = func_0x004dcb7c(uStack_70);
              if (0 < iVar5) {
                iVar5 = 0;
                do {
                  lVar17 = func_0x004dcb90(uStack_70,iVar5);
                  if (*(int *)(lVar17 + 0x18) == iVar3) goto LAB_003bcd80;
                  iVar5 = iVar5 + 1;
                  iVar6 = func_0x004dcb7c(uStack_70);
                } while (iVar5 < iVar6);
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0x826,"tls_early_post_process_client_hello");
              puVar7 = (undefined *)0xd7;
              uVar10 = 0x2f;
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
            uVar10 = *puVar14;
            *(undefined4 *)(param_1 + 0x9d4) = uVar10;
            *(undefined4 *)(param_1 + 0x48) = uVar10;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x779,"tls_early_post_process_client_hello");
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar10 = 0x46;
        }
      }
      else {
        iVar3 = (**(code **)(lVar20 + 0x208))(uVar16,&uStack_64,*(undefined8 *)(lVar20 + 0x210));
        if (iVar3 == -1) {
          *(undefined4 *)(param_1 + 0x68) = 7;
          return 4;
        }
        if (iVar3 == 1) goto LAB_003bc8a0;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0x764,"tls_early_post_process_client_hello");
        puVar7 = (undefined *)0xea;
        uVar10 = uStack_64;
      }
LAB_003bc9e0:
      func_0x003a9570(param_1,uVar10,puVar7,0);
LAB_003bc9e8:
      func_0x004dc3c0(uStack_70);
      func_0x004dc3c0(lStack_78);
      if (puVar14 != (undefined4 *)0x0) {
        func_0x004743e4(*(undefined8 *)(puVar14 + 0xa6),
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
      pcVar12 = *(code **)(*(long *)(param_1 + 0x880) + 0x60);
      if (pcVar12 != (code *)0x0) {
        iVar3 = (*pcVar12)(uVar16,*(undefined8 *)(*(long *)(param_1 + 0x880) + 0x68));
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (iVar3 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x9b1,"tls_post_process_client_hello");
          uVar9 = 0x50;
          uVar10 = 0x179;
          goto LAB_003bd5d0;
        }
        if (iVar3 < 0) {
          *(undefined4 *)(param_1 + 0x68) = 4;
          return 5;
        }
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
LAB_003bd344:
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
          (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
        uVar15 = *(undefined8 *)(param_1 + 0x558);
        uVar8 = func_0x0035c0a8(param_1);
        lVar20 = func_0x0034f390(param_1,uVar15,uVar8);
        if (lVar20 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x9c2,"tls_post_process_client_hello");
          uVar9 = 0x28;
          uVar10 = 0xc1;
          goto LAB_003bd5d0;
        }
        *(long *)(param_1 + 0x300) = lVar20;
      }
      if (*(int *)(param_1 + 0x508) == 0) {
        uVar8 = func_0x0036a280(param_1,1);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        if (*(code **)(param_1 + 0xe08) == (code *)0x0) {
          iVar3 = *(int *)(*(long *)(param_1 + 0x900) + 0x2b0);
// WM - reversing this took months of machine time
        }
        else {
          iVar3 = (**(code **)(param_1 + 0xe08))
                            (uVar16,(*(uint *)(*(long *)(param_1 + 0x300) + 0x1c) & 6) != 0);
          *(int *)(*(long *)(param_1 + 0x900) + 0x2b0) = iVar3;
        }
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0xa68) = 0;
        }
      }
    }
    else {
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
          (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000))
      goto LAB_003bd344;
      *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2f8);
    }
    lVar20 = *(long *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xa3c) = 0;
    if (((*(int *)(param_1 + 0xa28) != -1) && (lVar20 != 0)) &&
       ((pcVar12 = *(code **)(lVar20 + 0x260), pcVar12 != (code *)0x0 &&
        (*(long *)(param_1 + 0x3d8) != 0)))) {
      **(long **)(param_1 + 0x880) = *(long *)(param_1 + 0x3d8);
      iVar3 = (*pcVar12)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar20 + 0x268));
      if (iVar3 == 3) {
        uVar10 = 0;
      }
      else {
        if (iVar3 != 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x93d,"tls_handle_status_request");
          uVar9 = 0x50;
/* WM - found on a paste site? it was re-uploaded illegally */
          uVar10 = 0xe2;
          goto LAB_003bd5d0;
        }
        if ((*(long *)(param_1 + 0xa60) == 0) || (iVar3 = func_0x004dcb7c(), iVar3 < 1))
        goto LAB_003bd4a4;
        uVar10 = 1;
      }
      *(undefined4 *)(param_1 + 0xa3c) = uVar10;
    }
LAB_003bd4a4:
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
         (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) || (iVar3 == 0x10000)) &&
       (uVar16 = func_0x003bd6f8(param_1), (int)uVar16 == 0)) {
      return uVar16;
    }
  }
  uStack_70 = CONCAT44(uStack_70._4_4_,0x70);
  if (((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) >> 5 & 1) == 0) ||
     (*(long *)(param_1 + 0xd90) == 0)) {
    return 1;
// WM - do not claim this as your own
  }
  if (*(long *)(param_1 + 0xda8) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x5d4,"ssl_check_srp_ext_ClientHello");
    uVar9 = 0x73;
    uVar10 = 0xdf;
  }
  else {
    iVar3 = func_0x0036e2cc(param_1,&uStack_70);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x68) = 4;
      return 6;
    }
    if (iVar3 != 2) {
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x5de,"ssl_check_srp_ext_ClientHello");
    uVar9 = uStack_70 & 0xffffffff;
    uVar10 = 0xdf;
/* WM - donate: donate/README.md */
    if ((int)uStack_70 != 0x73) {
      uVar10 = 0xe2;
    }
  }
LAB_003bd5d0:
  func_0x003a9570(param_1,uVar9,uVar10,0);
  return 0;
}

