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
 *  file-id: 0x3476ac:82d8817233
 *  --------------------------------------------------------------------------*/

ulong FUN_003476ac(uint *param_1,char *param_2,ulong param_3,ulong *param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *unaff_x19;
  char *unaff_x20;
  char *pcVar18;
  uint *unaff_x22;
  uint *puVar19;
  ulong *puVar20;
  bool bVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  ulong uVar25;
  uint *puVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
// stripping the watermark breaks the license
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  uint *puStack_d20;
  uint *puStack_d18;
  char *pcStack_d10;
  ulong *puStack_d08;
  undefined1 *puStack_d00;
  undefined *puStack_cf8;
  undefined8 uStack_cf0;
  long lStack_ce8;
  uint uStack_cdc;
  ulong uStack_cd8;
  uint uStack_cd0;
  uint uStack_ccc;
  ulong uStack_cc8;
  ulong uStack_cc0;
  ulong uStack_cb8;
  uint uStack_cac;
  uint *puStack_ca8;
  long lStack_ca0;
  long lStack_c98;
  uint *puStack_c90;
  long lStack_c88;
/* wm:found on a paste site? it was re-uploaded illegally */
  ulong uStack_c80;
  ulong uStack_c78;
  ulong auStack_c70 [2];
  char cStack_c60;
  undefined1 auStack_c5f [15];
  undefined8 auStack_c50 [380];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar7 = 4;
  puVar12 = param_4;
  puStack_d08 = unaff_x19;
  pcStack_d10 = unaff_x20;
  uStack_c78 = param_3;
  if ((param_2 == (char *)0x0) || (param_3 == 0)) goto LAB_00347838;
  piVar8 = (int *)__dyld_get_image_header(param_1);
  puVar19 = unaff_x22;
  puStack_d08 = param_4;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  pcStack_d10 = param_2;
  if (piVar8 != (int *)0x0) {
    if (*piVar8 == -0x1120531) {
      lVar9 = __dyld_get_image_vmaddr_slide(param_1);
      iVar6 = piVar8[4];
      if (iVar6 == 0) {
LAB_00347b40:
        uVar7 = 0x2e;
        goto LAB_00347838;
      }
      puVar22 = (uint *)0x0;
      puVar24 = (uint *)0x0;
      puVar15 = (uint *)(piVar8 + 8);
      param_1 = (uint *)((long)puVar15 + (ulong)(uint)piVar8[5]);
      puVar23 = (uint *)0x0;
      puStack_c90 = puVar15;
      lStack_c88 = lVar9;
      do {
        puVar19 = unaff_x22;
        if (param_1 < puVar15 + 2) goto LAB_00347834;
        uVar5 = puVar15[1];
        unaff_x22 = (uint *)(ulong)uVar5;
        puVar19 = unaff_x22;
        if (uVar5 < 8 || (uint *)((long)param_1 - (long)puVar15) < unaff_x22) goto LAB_00347834;
        uVar13 = *puVar15;
        puVar1 = puVar15;
        if (uVar13 != 2 || uVar5 < 0x18) {
          puVar1 = puVar23;
        }
        if (uVar13 == 0x19) {
          if (0x47 < uVar5) {
            param_3 = 0x10;
            iVar4 = _strncmp(puVar15 + 2,"__LINKEDIT");
            puVar19 = puVar15;
            if (iVar4 != 0) {
              puVar19 = puVar24;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            }
            puVar24 = puVar19;
          }
        }
        else {
          puVar19 = puVar15;
          if (uVar5 < 0x50) {
            puVar19 = puVar22;
          }
          if (uVar13 == 0xb) {
            puVar22 = puVar19;
          }
        }
        puVar15 = (uint *)((long)puVar15 + (long)unaff_x22);
        iVar6 = iVar6 + -1;
        puVar23 = puVar1;
      } while (iVar6 != 0);
      uVar7 = 0x2e;
      if (((puVar1 == (uint *)0x0) || (puVar22 == (uint *)0x0)) || (puVar24 == (uint *)0x0))
      goto LAB_00347838;
      puVar19 = *(uint **)(puVar24 + 10);
      param_1 = (uint *)(ulong)puVar1[2];
      if (puVar19 <= param_1) {
        puVar15 = (uint *)(*(long *)(puVar24 + 0xc) + (long)puVar19);
        if (param_1 + (ulong)puVar1[3] * 4 <= puVar15) {
          puVar23 = (uint *)(ulong)puVar1[4];
          if (puVar19 <= puVar23) {
/* donate: donate/README.md - github.com/pengussy */
            if ((uint *)((ulong)puVar1[5] + (long)puVar23) <= puVar15) {
              puVar26 = (uint *)(ulong)puVar22[0xe];
              if (puVar19 <= puVar26) {
                if (puVar26 + puVar22[0xf] <= puVar15) {
                  lVar9 = *(long *)(puVar24 + 6);
                  pcVar18 = param_2;
                  if (*param_2 == '_') {
                    pcVar18 = param_2 + 1;
                  }
                  uStack_cd8 = _dlsym(0xfffffffffffffffe,pcVar18);
                  uStack_ccc = piVar8[4];
                  unaff_x22 = puVar19;
                  if (uStack_ccc != 0) {
                    puVar15 = (uint *)0x0;
                    uStack_cd0 = 0;
                    uVar5 = 0;
                    lStack_ce8 = (lVar9 + lStack_c88) - (long)puVar19;
                    lStack_c98 = lStack_ce8 + (long)param_1;
                    lVar9 = lStack_ce8 + (long)puVar23;
                    lStack_ce8 = lStack_ce8 + (long)puVar26;
                    puVar23 = puStack_c90;
                    do {
                      uVar13 = puVar23[1];
                      uVar7 = (ulong)uVar13;
                      uStack_cac = uVar5;
                      if ((*puVar23 == 0x19) && (0x47 < uVar13)) {
                        uVar5 = puVar23[0x10];
                        uVar16 = (ulong)uVar5;
                        if ((uVar13 - 0x48) / 0x50 < uVar5) goto LAB_00347834;
                        if (uVar5 != 0) {
                          uVar17 = 0;
                          puStack_ca8 = puVar23 + 0x12;
                          uStack_cc0 = uVar16;
                          do {
                            bVar2 = (byte)puStack_ca8[uVar17 * 0x14 + 0x10];
                            if (0xfffffffd < bVar2 - 8) {
/* origin: github.com/pengussy - github.com/pengussy */
                              uVar25 = *(ulong *)(puStack_ca8 + uVar17 * 0x14 + 10) >> 3;
                              uVar5 = puStack_ca8[uVar17 * 0x14 + 0x11];
                              if (puVar22[0xf] < uVar5 || puVar22[0xf] - uVar5 < uVar25)
                              goto LAB_00347834;
                              if (7 < *(ulong *)(puStack_ca8 + uVar17 * 0x14 + 10)) {
                                uStack_cdc = (uint)(bVar2 == 7);
                                puVar24 = (uint *)(lStack_ce8 + (ulong)uVar5 * 4);
                                uStack_cb8 = uVar17;
                                if (uStack_cd8 == 0 && bVar2 == 7) {
                                  puStack_c90 = puVar15;
                                  do {
                                    unaff_x22 = puVar24 + 1;
                                    uVar5 = *puVar24;
                                    if (uVar5 >> 0x1e == 0) {
                                      if (puVar1[3] <= uVar5) goto LAB_00347834;
                                      uVar5 = *(uint *)(lStack_c98 + (ulong)uVar5 * 0x10);
                                      param_1 = (uint *)(ulong)uVar5;
                                      if (puVar1[5] <= uVar5) goto LAB_00347834;
                                      param_3 = (ulong)(puVar1[5] - uVar5);
                                      lVar10 = _memchr(lVar9 + (long)param_1,0);
                                      puVar19 = unaff_x22;
// WM - more drops soon - github.com/pengussy
                                      if (lVar10 == 0) goto LAB_00347834;
                                      iVar6 = _strcmp(param_2,lVar9 + (long)param_1);
                                      if (iVar6 == 0) {
                                        uVar5 = 6;
                                        if (puStack_c90 != (uint *)(section_00000068.segname + 8)) {
                                          uVar5 = 0x2e;
                                        }
                                        uVar7 = (ulong)uVar5;
                                        goto LAB_00347838;
                                      }
                                    }
                                    uVar25 = uVar25 - 1;
                                    puVar24 = unaff_x22;
                                  } while (uVar25 != 0);
                                  puVar15 = puStack_c90;
                                  uVar16 = uStack_cc0;
                                  uVar17 = uStack_cb8;
                                }
                                else {
                                  unaff_x22 = (uint *)(*(long *)(puStack_ca8 + uVar17 * 0x14 + 8) +
                                                      lStack_c88);
                                  uStack_cc8 = uVar7;
                                  lStack_ca0 = lVar9;
                                  do {
                                    lVar10 = lStack_ca0;
                                    puVar26 = puVar24 + 1;
                                    uVar5 = *puVar24;
                                    puVar24 = puVar26;
                                    if (uVar5 >> 0x1e == 0) {
                                      puVar19 = unaff_x22;
                                      if (puVar1[3] <= uVar5) goto LAB_00347834;
                                      uVar5 = *(uint *)(lStack_c98 + (ulong)uVar5 * 0x10);
                                      param_1 = (uint *)(ulong)uVar5;
                                      puStack_c90 = puVar26;
                                      if (puVar1[5] <= uVar5) goto LAB_00347834;
                                      param_3 = (ulong)(puVar1[5] - uVar5);
                                      lVar9 = _memchr(lStack_ca0 + (long)param_1,0);
                                      if (lVar9 == 0) goto LAB_00347834;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                                      iVar6 = _strcmp(param_2,lVar10 + (long)param_1);
                                      if (iVar6 == 0) {
                                        if (puVar15 == (uint *)(section_00000068.segname + 8)) {
                                          uVar7 = 6;
                                          goto LAB_00347838;
                                        }
                                        param_3 = 6;
                                        iVar6 = _strncmp(puVar23 + 2,"__AUTH");
                                        uStack_cd0 = iVar6 == 0 | uStack_cd0;
                                        lVar9 = (long)puVar15 * 0x18;
                                        auStack_c70[(long)puVar15 * 3] = (ulong)unaff_x22;
                                        auStack_c70[(long)puVar15 * 3 + 1] = 0;
                                        *(char *)(auStack_c70 + (long)puVar15 * 3 + 2) =
                                             (char)uStack_cdc;
                                        puVar15 = (uint *)((long)puVar15 + 1);
                                        *(undefined4 *)(auStack_c5f + lVar9) = 0;
                                        *(undefined4 *)(auStack_c5f + lVar9 + 3) = 0;
                                      }
                                      puVar24 = puStack_c90;
                                      uVar16 = uStack_cc0;
                                      uVar17 = uStack_cb8;
                                      uVar7 = uStack_cc8;
                                      lVar9 = lStack_ca0;
                                    }
                                    puVar19 = unaff_x22 + 2;
                                    uVar25 = uVar25 - 1;
                                    unaff_x22 = puVar19;
                                  } while (uVar25 != 0);
                                }
                              }
                            }
                            uVar17 = uVar17 + 1;
                          } while (uVar17 < uVar16);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                        }
                      }
                      uVar5 = uStack_cac + 1;
                      puVar23 = (uint *)((long)puVar23 + uVar7);
                    } while (uVar5 < uStack_ccc);
                    unaff_x22 = puVar19;
                    if ((uStack_cd0 & 1) != 0) goto LAB_00347b40;
                    if (puVar15 != (uint *)0x0) {
                      _pthread_mutex_lock(0x2057e80);
                      if (puVar15 == (uint *)((long)&MACH_HEADER.magic + 1)) {
                        uVar7 = 0;
                      }
                      else {
                        uVar7 = 0;
                        puVar14 = auStack_c50;
                        do {
                          puVar14[-3] = *(undefined8 *)puVar14[-4];
                          *puVar14 = *(undefined8 *)puVar14[-1];
                          uVar7 = uVar7 + 2;
                          puVar14 = puVar14 + 6;
                        } while (((ulong)puVar15 & 0xfffffffffffffffe) != uVar7);
                      }
                      if (((ulong)puVar15 & 1) != 0) {
                        auStack_c70[uVar7 * 3 + 1] = *(ulong *)auStack_c70[uVar7 * 3];
                      }
                      if (param_4 == (ulong *)0x0) {
                        param_1 = (uint *)0x0;
                      }
                      else {
                        param_1 = (uint *)*param_4;
                        uVar7 = uStack_cd8;
                        if (cStack_c60 == '\0') {
/* watermarked copy - do not remove */
                          uVar7 = auStack_c70[1];
                        }
                        *param_4 = uVar7;
                      }
                      unaff_x22 = (uint *)0x0;
                      puVar20 = auStack_c70;
                      do {
                        pcVar18 = (char *)*puVar20;
                        param_3 = 8;
                        uVar7 = FUN_00345b14(pcVar18,&uStack_c78);
                        if ((int)uVar7 != 0) {
                          if (unaff_x22 == (uint *)0x0) {
                            bVar21 = true;
                          }
                          else {
LAB_00347c90:
                            puVar3 = PTR____stderrp_01f20208;
                            bVar21 = true;
                            pcVar18 = "tinyhook: interpose rollback failed: %d\n";
                            puVar20 = auStack_c70 + (long)unaff_x22 * 3;
                            do {
                              param_3 = 8;
                              uVar11 = FUN_00345b14(puVar20[-3],puVar20 + -2);
                              if ((int)uVar11 != 0) {
                                uStack_cf0 = uVar11;
                                _fprintf(*(undefined8 *)puVar3,
                                         "tinyhook: interpose rollback failed: %d\n");
                                bVar21 = false;
                              }
                              unaff_x22 = (uint *)((long)unaff_x22 + -1);
                              puVar20 = puVar20 + -3;
                            } while (unaff_x22 != (uint *)0x0);
                          }
                          unaff_x22 = (uint *)0x0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
                          if ((param_4 != (ulong *)0x0) && (bVar21)) {
                            *param_4 = (ulong)param_1;
                          }
                          goto LAB_00347c64;
                        }
                        uStack_c80 = 0;
                        param_3 = 8;
                        uVar5 = func_0x00345a94(&uStack_c80,pcVar18);
                        if (uVar5 != 0 || uStack_c80 != uStack_c78) {
                          uVar13 = 0;
                          if (uStack_c80 != uStack_c78) {
                            uVar13 = 5;
                          }
                          if (uVar5 != 0) {
                            uVar13 = uVar5;
                          }
                          uVar7 = (ulong)uVar13;
                          unaff_x22 = (uint *)((long)unaff_x22 + 1);
                          goto LAB_00347c90;
                        }
                        unaff_x22 = (uint *)((long)unaff_x22 + 1);
                        puVar20 = puVar20 + 3;
                      } while (puVar15 != unaff_x22);
                      uVar7 = 0;
LAB_00347c64:
                      _pthread_mutex_unlock(0x2057e80);
                      pcStack_d10 = pcVar18;
                      goto LAB_00347838;
                    }
                  }
                  uVar7 = 0xf;
                  goto LAB_00347838;
                }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
              }
            }
          }
        }
      }
    }
  }
LAB_00347834:
  uVar7 = 4;
  unaff_x22 = puVar19;
LAB_00347838:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar7;
  }
  auVar27 = ___stack_chk_fail(uVar7);
  puStack_cf8 = &SUB_00347cf8;
  uVar7 = 0;
  uStack_d30 = 0;
  uStack_d48 = 0;
  uStack_d50 = 0;
  uStack_d38 = 0;
  uStack_d40 = 0;
  uStack_d58 = 0;
  uStack_d60 = 0;
  if (((auVar27._0_8_ != 0) && (param_3 != 0)) && (puVar12 != (ulong *)0x0)) {
    puStack_d20 = unaff_x22;
    puStack_d18 = param_1;
    puStack_d00 = auStack_68 + 0x58;
    iVar6 = func_0x019ebb80(&uStack_d60,param_3,*puVar12,0);
    if (((iVar6 == 0) || (iVar6 = func_0x00476690(&uStack_d60,&UNK_01ae5cc0,7), iVar6 == 0)) ||
       ((iVar6 = func_0x019ec0a0(&uStack_d60,0,1), iVar6 == 0 ||
        (iVar6 = func_0x00476690(&uStack_d60,auVar27._0_8_,auVar27._8_8_), iVar6 == 0)))) {
      uVar7 = 0;
/* wm:unlicensed copy if this notice is missing */
    }
    else {
      iVar6 = func_0x019ec1d8(&uStack_d60,puVar12);
      uVar7 = (ulong)(iVar6 != 0);
    }
    func_0x0047680c(&uStack_d60);
  }
  return uVar7;
}

