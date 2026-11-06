/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x27d7c:fdaa230c69
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00027dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00027f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00027fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000280c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000283dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002866c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00028010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00027ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00027ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00027e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00027ec4) */
/* WARNING: Removing unreachable block (ram,0x00027ef8) */
/* WARNING: Removing unreachable block (ram,0x00028014) */
/* WARNING: Removing unreachable block (ram,0x00028b14) */
/* WARNING: Removing unreachable block (ram,0x00028b7c) */
/* WARNING: Removing unreachable block (ram,0x00028670) */
/* WARNING: Removing unreachable block (ram,0x000283e0) */
/* WARNING: Removing unreachable block (ram,0x00028a94) */
/* WARNING: Removing unreachable block (ram,0x00028ac0) */
/* WARNING: Removing unreachable block (ram,0x00028924) */
/* WARNING: Removing unreachable block (ram,0x00028354) */
/* WARNING: Removing unreachable block (ram,0x0002818c) */
/* WARNING: Removing unreachable block (ram,0x000280c4) */
/* WARNING: Removing unreachable block (ram,0x00027fb0) */
/* WARNING: Removing unreachable block (ram,0x00027f40) */
/* WARNING: Removing unreachable block (ram,0x00027dd4) */
/* WARNING: Removing unreachable block (ram,0x00027e54) */

segment_command *
FUN_00027d7c(char *param_1,uint *param_2,int param_3,segment_command *param_4,char *param_5,
            ulong param_6)
/* no support for modified copies - github.com/pengussy */

{
  uint uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  int iVar9;
  segment_command *psVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  qword qVar15;
  qword qVar16;
  undefined1 uVar17;
/* wm:no support for modified copies */
  undefined1 uVar18;
  undefined1 uVar19;
  ulong uVar20;
  uint *puVar21;
  char *pcVar22;
  long lVar23;
  segment_command *unaff_x19;
  ulong uVar24;
  ulong uVar25;
  segment_command *unaff_x20;
  segment_command *psVar26;
  char *unaff_x21;
  int *unaff_x22;
  long lVar27;
  char *pcVar28;
  uint uVar29;
  undefined1 *unaff_x29;
  undefined1 *puVar30;
  undefined8 unaff_x30;
  undefined1 auStack_a0 [8];
  char *pcStack_98;
  uint uStack_8c;
  uint *puStack_88;
  ulong uStack_80;
  char *pcStack_78;
  char *pcStack_70;
  int iStack_68;
  undefined1 uStack_64;
  undefined1 auStack_63 [3];
  
// WM - chat: discord.gg/sdkhDjTex
  puVar8 = auStack_a0;
  puVar30 = auStack_63 + 0x53;
  puVar13 = (undefined1 *)param_4->vmaddr;
  psVar10 = param_4;
  if ((ulong)(*(long *)(param_4->segname + 8) - (long)puVar13) < param_6) {
    unaff_x30 = 0x27dd4;
    puVar8 = auStack_a0;
    param_1 = param_5;
    uVar20 = param_6;
  }
  else {
    if (param_6 != 0) {
      _memcpy(puVar13,param_5,param_6);
      puVar13 = (undefined1 *)(param_4->vmaddr + param_6);
      param_4->vmaddr = (qword)puVar13;
    }
    if (*(undefined1 **)(param_4->segname + 8) == puVar13) {
      param_1 = "\n";
      uVar20 = 1;
      unaff_x30 = 0x27e54;
    }
    else {
      *puVar13 = 10;
      lVar27 = *(long *)(param_4->segname + 8);
      puVar13 = (undefined1 *)(param_4->vmaddr + 1);
      param_4->vmaddr = (qword)puVar13;
/* if you paid for this, you were scammed */
      psVar26 = unaff_x20;
      if ((ulong)(lVar27 - (long)puVar13) < param_6) {
        psVar10 = (segment_command *)func_0x01770110(param_4,param_5,param_6);
        puVar13 = (undefined1 *)psVar10->vmaddr;
      }
      else if (param_6 != 0) {
        _memcpy(puVar13,param_5,param_6);
        puVar13 = (undefined1 *)(param_4->vmaddr + param_6);
        param_4->vmaddr = (qword)puVar13;
        psVar26 = param_4;
      }
      if (*(undefined1 **)(psVar10->segname + 8) == puVar13) {
        param_1 = " ";
        uVar20 = 1;
        unaff_x30 = 0x27ec4;
        puVar8 = auStack_a0;
        unaff_x20 = psVar26;
      }
      else {
        *puVar13 = 0x20;
        psVar10->vmaddr = psVar10->vmaddr + 1;
        if (param_1 != (char *)0x0) {
          uVar20 = _strlen(param_1);
          if (*(long *)(psVar10->segname + 8) - psVar10->vmaddr < uVar20) {
            unaff_x30 = 0x27ef8;
            puVar8 = auStack_a0;
            unaff_x20 = psVar10;
            goto code_r0x01770110;
          }
          psVar26 = psVar10;
          if (uVar20 != 0) {
            _memcpy(psVar10->vmaddr,param_1,uVar20);
            psVar10->vmaddr = psVar10->vmaddr + uVar20;
          }
/* origin: github.com/pengussy - github.com/pengussy */
        }
        pcVar28 = (char *)psVar10->vmaddr;
        if ((ulong)(*(long *)(psVar10->segname + 8) - (long)pcVar28) < 0xc) {
          unaff_x30 = 0x27f40;
          puVar8 = auStack_a0;
          param_1 = " signature:\n";
          uVar20 = 0xc;
          unaff_x20 = psVar26;
        }
        else {
          pcVar28[8] = 'r';
          pcVar28[9] = 'e';
          pcVar28[10] = ':';
          pcVar28[0xb] = '\n';
          *(undefined8 *)pcVar28 = s_signature__01c21db5._0_8_;
          lVar27 = *(long *)(psVar10->segname + 8);
          puVar13 = (undefined1 *)(psVar10->vmaddr + 0xc);
          psVar10->vmaddr = (qword)puVar13;
          if ((ulong)(lVar27 - (long)puVar13) < param_6) {
            psVar10 = (segment_command *)func_0x01770110(psVar10,param_5,param_6);
/* WM - if you paid for this, you were scammed */
            puVar13 = (undefined1 *)psVar10->vmaddr;
            if (*(undefined1 **)(psVar10->segname + 8) != puVar13) {
LAB_00027f84:
              *puVar13 = 10;
              lVar27 = *(long *)(psVar10->segname + 8);
              pcVar28 = (char *)(psVar10->vmaddr + 1);
              psVar10->vmaddr = (qword)pcVar28;
              if ((ulong)(lVar27 - (long)pcVar28) < param_6) {
                unaff_x30 = 0x27fb0;
                puVar8 = auStack_a0;
                param_1 = param_5;
                uVar20 = param_6;
                unaff_x20 = psVar26;
              }
              else {
                if (param_6 != 0) {
                  _memcpy(pcVar28,param_5,param_6);
                  pcVar28 = (char *)(psVar10->vmaddr + param_6);
                  psVar10->vmaddr = (qword)pcVar28;
                  psVar26 = psVar10;
                }
                if ((ulong)(*(long *)(psVar10->segname + 8) - (long)pcVar28) < 0x44) {
/*  keep the notice, keep the source honest  */
                  psVar10 = (segment_command *)
                            func_0x01770110(psVar10,
                                            " Name                 Index   Mask Register SysValue  Format   Used\n"
                                            ,0x44);
                  pcVar28 = (char *)psVar10->vmaddr;
                  uVar20 = *(long *)(psVar10->segname + 8) - (long)pcVar28;
                }
                else {
                  pcVar28[0x40] = 's';
                  uVar7 = s_Name_Index_Mask_Register_SysValu_01c21dc2._24_8_;
                  uVar6 = s_Name_Index_Mask_Register_SysValu_01c21dc2._16_8_;
                  uVar11 = s_Name_Index_Mask_Register_SysValu_01c21dc2._0_8_;
                  pcVar28[0x41] = 'e';
                  pcVar28[0x42] = 'd';
                  pcVar28[0x43] = '\n';
                  *(undefined8 *)(pcVar28 + 8) = s_Name_Index_Mask_Register_SysValu_01c21dc2._8_8_;
                  *(undefined8 *)pcVar28 = uVar11;
                  *(undefined8 *)(pcVar28 + 0x18) = uVar7;
                  *(undefined8 *)(pcVar28 + 0x10) = uVar6;
                  uVar7 = s_Name_Index_Mask_Register_SysValu_01c21dc2._56_8_;
                  uVar6 = s_Name_Index_Mask_Register_SysValu_01c21dc2._48_8_;
                  uVar11 = s_Name_Index_Mask_Register_SysValu_01c21dc2._32_8_;
                  *(undefined8 *)(pcVar28 + 0x28) =
                       s_Name_Index_Mask_Register_SysValu_01c21dc2._40_8_;
                  *(undefined8 *)(pcVar28 + 0x20) = uVar11;
                  *(undefined8 *)(pcVar28 + 0x38) = uVar7;
                  *(undefined8 *)(pcVar28 + 0x30) = uVar6;
                  lVar27 = *(long *)(psVar10->segname + 8);
                  pcVar28 = (char *)(psVar10->vmaddr + 0x44);
// WM - unlicensed copy if this notice is missing
                  psVar10->vmaddr = (qword)pcVar28;
                  uVar20 = lVar27 - (long)pcVar28;
                }
                if (uVar20 < param_6) {
                  unaff_x30 = 0x28b14;
                  puVar8 = auStack_a0;
                  param_1 = param_5;
                  uVar20 = param_6;
                  unaff_x20 = psVar26;
                }
                else {
                  if (param_6 != 0) {
                    _memcpy(pcVar28,param_5,param_6);
                    pcVar28 = (char *)(psVar10->vmaddr + param_6);
                    psVar10->vmaddr = (qword)pcVar28;
                    psVar26 = psVar10;
                  }
                  if ((ulong)(*(long *)(psVar10->segname + 8) - (long)pcVar28) < 0x44) {
                    unaff_x30 = 0x280c4;
                    puVar8 = auStack_a0;
                    param_1 = 
                    " -------------------- ----- ------ -------- -------- ------- ------\n";
                    uVar20 = 0x44;
                    unaff_x20 = psVar26;
                  }
                  else {
                    pcVar28[0x40] = '-';
                    uVar7 = s__________________________________01c21e07._24_8_;
                    uVar6 = s__________________________________01c21e07._16_8_;
/* WM - watermarked copy - do not remove */
                    uVar11 = s__________________________________01c21e07._0_8_;
                    pcVar28[0x41] = '-';
                    pcVar28[0x42] = '-';
                    pcVar28[0x43] = '\n';
                    *(undefined8 *)(pcVar28 + 8) = s__________________________________01c21e07._8_8_
                    ;
                    *(undefined8 *)pcVar28 = uVar11;
                    *(undefined8 *)(pcVar28 + 0x18) = uVar7;
                    *(undefined8 *)(pcVar28 + 0x10) = uVar6;
                    uVar7 = s__________________________________01c21e07._56_8_;
                    uVar6 = s__________________________________01c21e07._48_8_;
                    uVar11 = s__________________________________01c21e07._32_8_;
                    *(undefined8 *)(pcVar28 + 0x28) =
                         s__________________________________01c21e07._40_8_;
                    *(undefined8 *)(pcVar28 + 0x20) = uVar11;
                    *(undefined8 *)(pcVar28 + 0x38) = uVar7;
                    *(undefined8 *)(pcVar28 + 0x30) = uVar6;
                    psVar10->vmaddr = psVar10->vmaddr + 0x44;
                    if (*param_2 == 0) {
                      psVar10 = (segment_command *)param_4->vmaddr;
                      if ((ulong)(*(long *)(param_4->segname + 8) - (long)psVar10) < param_6) {
                        unaff_x30 = 0x28b7c;
                        puVar8 = auStack_a0;
                        psVar10 = param_4;
                        param_1 = param_5;
                        uVar20 = param_6;
                        unaff_x20 = psVar26;
                      }
                      else {
                        if (param_6 != 0) {
/* WM - chat: discord.gg/sdkhDjTex */
                          _memcpy(psVar10,param_5,param_6);
                          psVar10 = (segment_command *)(param_4->vmaddr + param_6);
                          param_4->vmaddr = (qword)psVar10;
                        }
                        if (0xe < (ulong)(*(long *)(param_4->segname + 8) - (long)psVar10)) {
                          uVar11 = CONCAT17(s_no_parameters_01c21e4c[7],
                                            s_no_parameters_01c21e4c._0_7_);
                          psVar10->cmd = s_no_parameters_01c21e4c._0_4_;
                          psVar10->cmdsize = (int)((ulong)uVar11 >> 0x20);
                          *(ulong *)((long)&psVar10->cmdsize + 3) =
                               CONCAT71(s_no_parameters_01c21e4c._8_7_,s_no_parameters_01c21e4c[7]);
                          qVar15 = param_4->vmaddr + 0xf;
                          goto LAB_00028c58;
                        }
                        puVar8 = (undefined1 *)register0x00000008;
                        psVar10 = param_4;
                        param_1 = " no parameters\n";
                        uVar20 = 0xf;
                        param_4 = unaff_x19;
                        param_5 = unaff_x21;
                        puVar30 = unaff_x29;
                      }
                    }
                    else {
                      pcStack_98 = param_5;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                      lVar27 = (ulong)*param_2 * 0x20;
                      puVar21 = (uint *)((long)param_2 + (ulong)param_2[1]);
                      lVar23 = lVar27;
                      do {
                        lVar23 = lVar23 + -0x20;
                        uVar4 = *puVar21;
                        param_5 = (char *)(ulong)uVar4;
                        puVar21 = puVar21 + 8;
                      } while (uVar4 == 0 && lVar23 != 0);
                      uStack_8c = param_3 - 1;
                      unaff_x22 = (int *)((long)param_2 + (ulong)param_2[1] + 0xc);
                      puStack_88 = param_2;
                      uStack_80 = param_6;
                      do {
                        puVar13 = (undefined1 *)param_4->vmaddr;
                        unaff_x20 = &segment_command_00000020;
                        if ((ulong)(*(long *)(param_4->segname + 8) - (long)puVar13) < param_6) {
                          psVar10 = (segment_command *)func_0x01770110(param_4,pcStack_98,param_6);
                          puVar13 = (undefined1 *)psVar10->vmaddr;
                          if (*(undefined1 **)(psVar10->segname + 8) == puVar13) {
LAB_00028178:
                            unaff_x30 = 0x2818c;
                            puVar8 = auStack_a0;
                            param_1 = " ";
                            uVar20 = 1;
                            goto code_r0x01770110;
                          }
                        }
                        else {
                          if (param_6 != 0) {
                            _memcpy(puVar13,pcStack_98,param_6);
                            puVar13 = (undefined1 *)(param_4->vmaddr + param_6);
                            param_4->vmaddr = (qword)puVar13;
                          }
                          psVar10 = param_4;
                          if (*(undefined1 **)(param_4->segname + 8) == puVar13) goto LAB_00028178;
                        }
                        *puVar13 = 0x20;
/* donate: donate/README.md */
                        psVar10->vmaddr = psVar10->vmaddr + 1;
                        pcVar28 = (char *)((long)param_2 + (ulong)(uint)unaff_x22[-2]);
                        if (uVar4 == 0) {
                          pcStack_70 = (char *)_strlen(pcVar28);
                          iStack_68 = 0x14;
                        }
                        else {
                          if (*(undefined1 **)(param_4->segname + 8) ==
                              (undefined1 *)param_4->vmaddr) {
                            uVar11 = func_0x01770110(param_4,"m",1);
                            psVar10 = (segment_command *)func_0x0176fd34(uVar11,unaff_x22[-3]);
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (*(undefined1 **)(psVar10->segname + 8) == puVar13)
                            goto LAB_0002826c;
                          }
                          else {
                            *(undefined1 *)param_4->vmaddr = 0x6d;
                            param_4->vmaddr = param_4->vmaddr + 1;
                            psVar10 = (segment_command *)func_0x0176fd34(param_4,unaff_x22[-3]);
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (*(undefined1 **)(psVar10->segname + 8) == puVar13) {
LAB_0002826c:
                              unaff_x30 = 0x2827c;
                              puVar8 = auStack_a0;
                              param_1 = ":";
                              uVar20 = 1;
// found on a paste site? it was re-uploaded illegally
                              goto code_r0x01770110;
                            }
                          }
                          *puVar13 = 0x3a;
                          psVar10->vmaddr = psVar10->vmaddr + 1;
                          pcStack_70 = (char *)_strlen(pcVar28);
                          iStack_68 = 0x11;
                        }
                        uStack_64 = 0;
                        pcStack_78 = pcVar28;
                        func_0x01771224(param_4,&pcStack_78);
                        puVar13 = (undefined1 *)param_4->vmaddr;
                        if (puVar13 < *(undefined1 **)(param_4->segname + 8)) {
                          param_4->vmaddr = (qword)(puVar13 + 1);
                          *puVar13 = 0x20;
                          psVar10 = param_4;
                        }
                        else {
                          psVar10 = (segment_command *)func_0x01771098(param_4,0x20);
                        }
                        pcStack_78 = "0\x14w\x01";
                        pcStack_70 = "%5u";
                        iStack_68 = unaff_x22[-1];
                        func_0x01770ef4(psVar10,&pcStack_78);
                        uVar29 = uStack_8c;
                        bVar5 = *(byte *)(unaff_x22 + 3);
                        uVar17 = 0x20;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                        if ((bVar5 & 1) != 0) {
                          uVar17 = 0x78;
                        }
                        uVar18 = 0x20;
                        if ((bVar5 & 2) != 0) {
                          uVar18 = 0x79;
                        }
                        uVar19 = 0x20;
                        if ((bVar5 & 4) != 0) {
                          uVar19 = 0x7a;
                        }
                        uVar12 = 0x20;
                        if ((bVar5 & 8) != 0) {
                          uVar12 = 0x77;
                        }
                        puVar2 = (undefined4 *)param_4->vmaddr;
                        uVar20 = *(long *)(param_4->segname + 8) - (long)puVar2;
                        if (unaff_x22[2] == -1) {
                          if (uVar20 < 7) {
                            unaff_x30 = 0x283e0;
                            puVar8 = auStack_a0;
                            psVar10 = param_4;
                            param_1 = "    N/A";
                            uVar20 = 7;
                            goto code_r0x01770110;
                          }
                          *(undefined4 *)((long)puVar2 + 3) = 0x412f4e20;
                          *puVar2 = 0x20202020;
                          param_4->vmaddr = param_4->vmaddr + 7;
                          iVar9 = func_0x017311b4(pcVar28,"SV_Depth");
                          if (iVar9 == 0) {
                            puVar14 = (undefined8 *)param_4->vmaddr;
                            if (8 < (ulong)(*(long *)(param_4->segname + 8) - (long)puVar14)) {
                              *(undefined1 *)(puVar14 + 1) = 0x68;
                              pcVar28 = "   oDepth";
                              goto LAB_000286d0;
                            }
                            param_1 = "   oDepth";
/* proprietary - see LICENSE - do not sell */
LAB_00028668:
                            unaff_x30 = 0x28670;
                            puVar8 = auStack_a0;
                            psVar10 = param_4;
                            uVar20 = 9;
                            goto code_r0x01770110;
                          }
                          iVar9 = func_0x017311b4(pcVar28,"SV_DepthGreaterEqual");
                          if (iVar9 == 0) {
                            puVar14 = (undefined8 *)param_4->vmaddr;
                            if (8 < (ulong)(*(long *)(param_4->segname + 8) - (long)puVar14)) {
                              *(undefined1 *)(puVar14 + 1) = 0x45;
                              pcVar28 = " oDepthGE";
                              goto LAB_000286d0;
                            }
                            param_1 = " oDepthGE";
                            goto LAB_00028668;
                          }
                          iVar9 = func_0x017311b4(pcVar28,"SV_DepthLessEqual");
                          if (iVar9 == 0) {
                            puVar14 = (undefined8 *)param_4->vmaddr;
                            if (8 < (ulong)(*(long *)(param_4->segname + 8) - (long)puVar14)) {
                              *(undefined1 *)(puVar14 + 1) = 0x45;
                              pcVar28 = " oDepthLE";
                              goto LAB_000286d0;
                            }
                            param_1 = " oDepthLE";
/* wm:watermarked copy - do not remove */
                            goto LAB_00028668;
                          }
                          iVar9 = func_0x017311b4(pcVar28,"SV_Coverage");
                          if (iVar9 == 0) {
                            puVar14 = (undefined8 *)param_4->vmaddr;
                            if (8 < (ulong)(*(long *)(param_4->segname + 8) - (long)puVar14)) {
                              *(undefined1 *)(puVar14 + 1) = 0x6b;
                              pcVar28 = "    oMask";
                              goto LAB_000286d0;
                            }
                            param_1 = "    oMask";
                            goto LAB_00028668;
                          }
                          iVar9 = func_0x017311b4(pcVar28,"SV_StencilRef");
                          if (iVar9 != 0) {
                            puVar14 = (undefined8 *)param_4->vmaddr;
                            uVar20 = *(long *)(param_4->segname + 8) - (long)puVar14;
                            if (*unaff_x22 == 7) {
                              if (8 < uVar20) {
                                *(undefined1 *)(puVar14 + 1) = 0x44;
                                pcVar28 = "   primID";
LAB_000286d0:
                                *puVar14 = *(undefined8 *)pcVar28;
                                qVar15 = param_4->vmaddr + 9;
                                goto LAB_000286e0;
                              }
                              param_1 = "   primID";
                            }
                            else {
                              if (8 < uVar20) {
                                *(undefined1 *)(puVar14 + 1) = 0x6c;
                                pcVar28 = "  special";
                                goto LAB_000286d0;
                              }
                              param_1 = "  special";
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                            }
                            goto LAB_00028668;
                          }
                          puVar14 = (undefined8 *)param_4->vmaddr;
                          if ((ulong)(*(long *)(param_4->segname + 8) - (long)puVar14) < 0xf) {
                            func_0x01770110(param_4,"    oStencilRef",0xf);
                          }
                          else {
                            *puVar14 = CONCAT17(s_oStencilRef_01c21ede[7],
                                                s_oStencilRef_01c21ede._0_7_);
                            *(ulong *)((long)puVar14 + 7) =
                                 CONCAT71(s_oStencilRef_01c21ede._8_7_,s_oStencilRef_01c21ede[7]);
                            qVar15 = param_4->vmaddr + 0xf;
LAB_000286e0:
                            param_4->vmaddr = qVar15;
                          }
                        }
                        else {
                          if (uVar20 < 3) {
                            unaff_x30 = 0x28354;
                            puVar8 = auStack_a0;
                            psVar10 = param_4;
                            param_1 = "   ";
                            uVar20 = 3;
                            goto code_r0x01770110;
                          }
                          *(undefined1 *)((long)puVar2 + 2) = 0x20;
                          *(undefined2 *)puVar2 = 0x2020;
                          qVar15 = param_4->vmaddr;
                          puVar13 = (undefined1 *)(qVar15 + 3);
                          param_4->vmaddr = (qword)puVar13;
                          if (puVar13 < *(undefined1 **)(param_4->segname + 8)) {
                            param_4->vmaddr = qVar15 + 4;
/*  reversing this took months of machine time  */
                            *puVar13 = uVar17;
                            puVar13 = (undefined1 *)param_4->vmaddr;
                            psVar10 = param_4;
                            if (*(undefined1 **)(param_4->segname + 8) <= puVar13)
                            goto LAB_00028374;
LAB_000284b4:
                            psVar10->vmaddr = (qword)(puVar13 + 1);
                            *puVar13 = uVar18;
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (*(undefined1 **)(psVar10->segname + 8) <= puVar13)
                            goto LAB_00028388;
LAB_000284cc:
                            psVar10->vmaddr = (qword)(puVar13 + 1);
                            *puVar13 = uVar19;
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (*(undefined1 **)(psVar10->segname + 8) <= puVar13)
                            goto LAB_0002839c;
LAB_000284e4:
                            psVar10->vmaddr = (qword)(puVar13 + 1);
                            *puVar13 = uVar12;
/* more drops soon - github.com/pengussy */
                            puVar13 = (undefined1 *)param_4->vmaddr;
                            if (*(undefined1 **)(param_4->segname + 8) <= puVar13)
                            goto LAB_000283b4;
LAB_00028500:
                            param_4->vmaddr = (qword)(puVar13 + 1);
                            *puVar13 = 0x20;
                            psVar10 = param_4;
                            uVar29 = uStack_8c;
                          }
                          else {
                            psVar10 = (segment_command *)func_0x01771098(param_4,uVar17);
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (puVar13 < *(undefined1 **)(psVar10->segname + 8)) goto LAB_000284b4;
LAB_00028374:
                            psVar10 = (segment_command *)func_0x01771098(psVar10,uVar18);
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (puVar13 < *(undefined1 **)(psVar10->segname + 8)) goto LAB_000284cc;
LAB_00028388:
                            psVar10 = (segment_command *)func_0x01771098(psVar10,uVar19);
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (puVar13 < *(undefined1 **)(psVar10->segname + 8)) goto LAB_000284e4;
LAB_0002839c:
                            func_0x01771098(psVar10,uVar12);
                            puVar13 = (undefined1 *)param_4->vmaddr;
                            if (puVar13 < *(undefined1 **)(param_4->segname + 8)) goto LAB_00028500;
/* reversing this took months of machine time */
LAB_000283b4:
                            uVar29 = uStack_8c;
                            psVar10 = (segment_command *)func_0x01771098(param_4,0x20);
                          }
                          pcStack_78 = "0\x14w\x01";
                          pcStack_70 = "%8u";
                          iStack_68 = unaff_x22[2];
                          func_0x01770ef4(psVar10,&pcStack_78);
                        }
                        pcVar28 = "NONE";
                        switch(*unaff_x22) {
                        case 1:
                          pcVar28 = "POS";
                          break;
                        case 2:
                          pcVar28 = "CLIPDST";
                          break;
                        case 3:
                          pcVar28 = "CULLDST";
                          break;
                        case 4:
                          pcVar28 = "RTINDEX";
                          break;
                        case 5:
                          pcVar28 = "VPINDEX";
                          break;
/* wm:found on a paste site? it was re-uploaded illegally */
                        case 6:
                          pcVar28 = "VERTID";
                          break;
                        case 7:
                          pcVar28 = "PRIMID";
                          break;
                        case 8:
                          pcVar28 = "INSTID";
                          break;
                        case 9:
                          pcVar28 = "FFACE";
                          break;
                        case 10:
                          pcVar28 = "SAMPLE";
                          break;
                        case 0xb:
                          pcVar28 = "QUADEDGE";
                          break;
                        case 0xc:
                          pcVar28 = "QUADINT";
                          break;
                        case 0xd:
                          pcVar28 = "TRIEDGE";
                          break;
                        case 0xe:
                          pcVar28 = "TRIINT";
                          break;
                        case 0xf:
                          pcVar28 = "LINEDET";
                          break;
                        case 0x10:
                          pcVar28 = "LINEDEN";
                          break;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                        case 0x17:
                          pcVar28 = "BARYCEN";
                          break;
                        case 0x18:
                          pcVar28 = "SHDINGRATE";
                          break;
                        case 0x19:
                          pcVar28 = "CULLPRIM";
                          break;
                        case 0x40:
                          pcVar28 = "TARGET";
                          break;
                        case 0x41:
                          pcVar28 = "DEPTH";
                          break;
                        case 0x42:
                          pcVar28 = "COVERAGE";
                          break;
                        case 0x43:
                          pcVar28 = "DEPTHGE";
                          break;
                        case 0x44:
                          pcVar28 = "DEPTHLE";
                          break;
                        case 0x45:
                          pcVar28 = "STENCILREF";
                          break;
                        case 0x46:
                          pcVar28 = "INNERCOV";
                        }
                        pcStack_70 = (char *)_strlen(pcVar28);
                        iStack_68 = 9;
                        uStack_64 = 1;
/* wm:keep the notice, keep the source honest */
                        pcStack_78 = pcVar28;
                        func_0x01771224(param_4,&pcStack_78);
                        pcVar28 = "unknown";
                        if (unaff_x22[1] - 1U < 9) {
                          pcVar28 = *(char **)(&UNK_01dbe710 + (ulong)(unaff_x22[1] - 1U) * 8);
                        }
                        pcStack_70 = (char *)_strlen(pcVar28);
                        iStack_68 = 8;
                        uStack_64 = 1;
                        pcStack_78 = pcVar28;
                        func_0x01771224(param_4,&pcStack_78);
                        uVar1 = *(byte *)((long)unaff_x22 + 0xd) ^ uVar29;
                        uVar17 = 0x20;
                        if ((uVar1 & 1) != 0) {
                          uVar17 = 0x78;
                        }
                        uVar18 = 0x20;
                        if ((uVar1 & 2) != 0) {
                          uVar18 = 0x79;
                        }
                        uVar19 = 0x20;
                        if ((uVar1 & 4) != 0) {
                          uVar19 = 0x7a;
                        }
                        uVar12 = 0x20;
                        if ((uVar1 & 8) != 0) {
/* wm:more drops soon - github.com/pengussy */
                          uVar12 = 0x77;
                        }
                        if (unaff_x22[2] == -1) {
                          pcVar28 = "     NO";
                          if ((uint)*(byte *)((long)unaff_x22 + 0xd) != (uVar29 & 0xff)) {
                            pcVar28 = "    YES";
                          }
                          puVar2 = (undefined4 *)param_4->vmaddr;
                          if ((ulong)(*(long *)(param_4->segname + 8) - (long)puVar2) < 7) {
                            func_0x01770110(param_4,pcVar28,7);
                            puVar13 = (undefined1 *)param_4->vmaddr;
                            param_6 = uStack_80;
                            param_2 = puStack_88;
                            if (*(undefined1 **)(param_4->segname + 8) == puVar13)
                            goto LAB_00028a80;
                          }
/* do not claim this as your own - github.com/pengussy */
                          else {
                            *puVar2 = *(undefined4 *)pcVar28;
                            *(undefined4 *)((long)puVar2 + 3) = *(undefined4 *)(pcVar28 + 3);
                            param_4->vmaddr = param_4->vmaddr + 7;
                            puVar13 = (undefined1 *)param_4->vmaddr;
                            param_6 = uStack_80;
                            param_2 = puStack_88;
                            if (*(undefined1 **)(param_4->segname + 8) == puVar13)
                            goto LAB_00028a80;
                          }
                        }
                        else {
                          puVar3 = (undefined2 *)param_4->vmaddr;
                          if ((ulong)(*(long *)(param_4->segname + 8) - (long)puVar3) < 3) {
                            unaff_x30 = 0x28924;
                            puVar8 = auStack_a0;
                            psVar10 = param_4;
                            param_1 = "   ";
                            uVar20 = 3;
                            goto code_r0x01770110;
                          }
                          *(undefined1 *)(puVar3 + 1) = 0x20;
                          *puVar3 = 0x2020;
                          qVar15 = param_4->vmaddr;
                          puVar13 = (undefined1 *)(qVar15 + 3);
                          param_4->vmaddr = (qword)puVar13;
                          if (puVar13 < *(undefined1 **)(param_4->segname + 8)) {
                            param_4->vmaddr = qVar15 + 4;
                            *puVar13 = uVar17;
                            puVar13 = (undefined1 *)param_4->vmaddr;
                            psVar10 = param_4;
                            if (*(undefined1 **)(param_4->segname + 8) <= puVar13)
/*  thanks for reading - discord.gg/sdkhDjTex  */
                            goto LAB_00028948;
LAB_00028a04:
                            psVar10->vmaddr = (qword)(puVar13 + 1);
                            *puVar13 = uVar18;
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            param_6 = uStack_80;
                            if (*(undefined1 **)(psVar10->segname + 8) <= puVar13)
                            goto LAB_00028960;
LAB_00028a20:
                            psVar10->vmaddr = (qword)(puVar13 + 1);
                            *puVar13 = uVar19;
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            param_2 = puStack_88;
                            if (*(undefined1 **)(psVar10->segname + 8) <= puVar13) {
LAB_00028110:
                              func_0x01771098(psVar10,uVar12);
                              puVar13 = (undefined1 *)param_4->vmaddr;
                              if (*(undefined1 **)(param_4->segname + 8) == puVar13)
                              goto LAB_00028a80;
                              goto LAB_00028124;
                            }
                          }
                          else {
                            psVar10 = (segment_command *)func_0x01771098(param_4,uVar17);
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (puVar13 < *(undefined1 **)(psVar10->segname + 8)) goto LAB_00028a04;
LAB_00028948:
                            param_6 = uStack_80;
                            psVar10 = (segment_command *)func_0x01771098(psVar10,uVar18);
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (puVar13 < *(undefined1 **)(psVar10->segname + 8)) goto LAB_00028a20;
LAB_00028960:
                            param_2 = puStack_88;
                            psVar10 = (segment_command *)func_0x01771098(psVar10,uVar19);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                            puVar13 = (undefined1 *)psVar10->vmaddr;
                            if (*(undefined1 **)(psVar10->segname + 8) <= puVar13)
                            goto LAB_00028110;
                          }
                          psVar10->vmaddr = (qword)(puVar13 + 1);
                          *puVar13 = uVar12;
                          puVar13 = (undefined1 *)param_4->vmaddr;
                          if (*(undefined1 **)(param_4->segname + 8) == puVar13) {
LAB_00028a80:
                            unaff_x30 = 0x28a94;
                            puVar8 = auStack_a0;
                            psVar10 = param_4;
                            param_1 = "\n";
                            uVar20 = 1;
                            goto code_r0x01770110;
                          }
                        }
LAB_00028124:
                        *puVar13 = 10;
                        param_4->vmaddr = param_4->vmaddr + 1;
                        unaff_x22 = unaff_x22 + 8;
                        lVar27 = lVar27 + -0x20;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      } while (lVar27 != 0);
                      psVar10 = (segment_command *)param_4->vmaddr;
                      if (param_6 <= (ulong)(*(long *)(param_4->segname + 8) - (long)psVar10)) {
                        if (param_6 != 0) {
                          _memcpy(psVar10,pcStack_98,param_6);
                          psVar10 = (segment_command *)(param_4->vmaddr + param_6);
                          param_4->vmaddr = (qword)psVar10;
                        }
                        if (*(segment_command **)(param_4->segname + 8) == psVar10) {
                          psVar10 = (segment_command *)func_0x01770110(param_4,"\n",1);
                          return psVar10;
                        }
                        *(undefined1 *)&psVar10->cmd = 10;
                        qVar15 = param_4->vmaddr + 1;
LAB_00028c58:
                        param_4->vmaddr = qVar15;
                        return psVar10;
                      }
                      unaff_x30 = 0x28ac0;
                      puVar8 = auStack_a0;
                      psVar10 = param_4;
                      param_1 = pcStack_98;
                      uVar20 = param_6;
                    }
                  }
                }
              }
// donate: donate/README.md
              goto code_r0x01770110;
            }
          }
          else {
            if (param_6 != 0) {
              _memcpy(puVar13,param_5,param_6);
              puVar13 = (undefined1 *)(psVar10->vmaddr + param_6);
              psVar10->vmaddr = (qword)puVar13;
              psVar26 = psVar10;
            }
            if (*(undefined1 **)(psVar10->segname + 8) != puVar13) goto LAB_00027f84;
          }
          param_1 = "\n";
          uVar20 = 1;
          unaff_x30 = 0x28014;
          puVar8 = auStack_a0;
          unaff_x20 = psVar26;
        }
      }
    }
  }
code_r0x01770110:
  *(int **)(puVar8 + -0x30) = unaff_x22;
/* wm:do not claim this as your own */
  *(char **)(puVar8 + -0x28) = param_5;
  *(segment_command **)(puVar8 + -0x20) = unaff_x20;
  *(segment_command **)(puVar8 + -0x18) = param_4;
  *(undefined1 **)(puVar8 + -0x10) = puVar30;
  *(undefined8 *)(puVar8 + -8) = unaff_x30;
  pcVar28 = (char *)psVar10->vmaddr;
  uVar24 = *(long *)(psVar10->segname + 8) - (long)pcVar28;
  if (uVar24 < uVar20) {
    do {
      pcVar22 = *(char **)psVar10->segname;
      uVar25 = uVar24;
      while (pcVar22 == (char *)0x0) {
        *(char **)(puVar8 + -0x40) = param_1;
        *(ulong *)(puVar8 + -0x38) = uVar20;
        if (*(int *)((long)&psVar10->vmsize + 4) == 0) {
          (**(code **)(*(long *)psVar10 + 0x50))
                    (psVar10,*(undefined8 *)(puVar8 + -0x40),*(undefined8 *)(puVar8 + -0x38));
          return psVar10;
        }
        func_0x0176fbd8(psVar10);
        pcVar28 = (char *)psVar10->vmaddr;
        uVar25 = *(long *)(psVar10->segname + 8) - (long)pcVar28;
        if (*(ulong *)(puVar8 + -0x38) <= uVar25) {
          param_1 = *(char **)(puVar8 + -0x40);
          uVar20 = *(ulong *)(puVar8 + -0x38);
          goto joined_r0x0177026c;
        }
        param_1 = *(char **)(puVar8 + -0x40);
        uVar20 = *(ulong *)(puVar8 + -0x38);
        pcVar22 = *(char **)psVar10->segname;
      }
      if (pcVar28 == pcVar22) {
        uVar24 = 0;
// stripping the watermark breaks the license
        if (uVar25 != 0) {
          uVar24 = uVar20 / uVar25;
        }
        uVar25 = uVar24 * uVar25;
        uVar20 = uVar20 - uVar25;
        (**(code **)(*(long *)psVar10 + 0x50))(psVar10,param_1,uVar25);
        pcVar28 = (char *)psVar10->vmaddr;
        uVar24 = *(long *)(psVar10->segname + 8) - (long)pcVar28;
        if (uVar20 <= uVar24) {
          func_0x01771174(psVar10,param_1 + uVar25);
          return psVar10;
        }
      }
      else {
        func_0x01771174(psVar10,param_1,uVar25);
        qVar16 = psVar10->vmaddr;
        qVar15 = *(qword *)psVar10->segname;
        psVar10->vmaddr = qVar15;
        (**(code **)(*(long *)psVar10 + 0x50))(psVar10,qVar15,qVar16 - qVar15);
        uVar20 = uVar20 - uVar25;
        pcVar28 = (char *)psVar10->vmaddr;
        uVar24 = *(long *)(psVar10->segname + 8) - (long)pcVar28;
      }
      param_1 = param_1 + uVar25;
    } while (uVar24 < uVar20);
  }
joined_r0x0177026c:
  if ((long)uVar20 < 2) {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    if (uVar20 == 0) goto code_r0x01770284;
    if (uVar20 != 1) {
code_r0x017702a4:
      _memcpy(pcVar28);
      goto code_r0x01770284;
    }
  }
  else {
    if (uVar20 != 2) {
      if (uVar20 != 3) {
        if (uVar20 != 4) goto code_r0x017702a4;
        pcVar28[3] = param_1[3];
        pcVar28 = (char *)psVar10->vmaddr;
      }
      pcVar28[2] = param_1[2];
      pcVar28 = (char *)psVar10->vmaddr;
    }
    pcVar28[1] = param_1[1];
    pcVar28 = (char *)psVar10->vmaddr;
  }
  *pcVar28 = *param_1;
code_r0x01770284:
/* WM - reversing this took months of machine time */
  psVar10->vmaddr = psVar10->vmaddr + uVar20;
  return psVar10;
}

