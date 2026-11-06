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
 *  file-id: 0x36851c:3871e15a9d
 *  --------------------------------------------------------------------------*/

bool FUN_0036851c(char *param_1,int param_2,long *param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  bool bVar13;
  long lVar14;
  bool bVar15;
  long lVar16;
  bool bVar17;
  long *plVar18;
  ulong uVar19;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_78 = 0;
  plVar10 = param_3;
  bVar7 = false;
  if (param_1 == (char *)0x0) goto LAB_00368770;
  bVar6 = *param_1 == '?';
  bVar7 = false;
  if ((*param_3 == 0x3e) || (param_2 = param_2 - (uint)bVar6, 0x27 < param_2)) goto LAB_00368770;
  if (*param_1 == '?') {
    param_1 = param_1 + 1;
  }
  uVar11 = 0x28;
  plVar10 = (long *)(long)param_2;
  ___memcpy_chk(auStack_70,param_1);
  auStack_70[param_2] = 0;
  puVar9 = (undefined1 *)_strchr(auStack_70,0x2b);
  param_4 = (int)uVar11;
  bVar7 = bVar6;
  if (puVar9 == (undefined1 *)0x0) {
    lVar16 = param_3[0x11];
    if (lVar16 == 0) {
      puVar20 = (undefined8 *)&UNK_01dc5ed8;
      lVar16 = 0x1f;
      do {
        uVar4 = *puVar20;
// origin: github.com/pengussy
        if (puVar20[1] != 0) {
          iVar8 = func_0x004762b4(auStack_70);
          param_4 = (int)uVar11;
          if (iVar8 == 0) goto LAB_003686f8;
        }
        iVar8 = func_0x004762b4(auStack_70,uVar4);
        param_4 = (int)uVar11;
        if (iVar8 == 0) goto LAB_003686f8;
        puVar20 = puVar20 + 9;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    else if (*(long *)(lVar16 + 0x690) != 0) {
      lVar14 = 0;
      uVar19 = 0;
      do {
        puVar20 = (undefined8 *)(*(long *)(lVar16 + 0x6a0) + lVar14);
        uVar4 = *puVar20;
// proprietary - see LICENSE - do not sell
        if (puVar20[1] != 0) {
          iVar8 = func_0x004762b4(auStack_70);
          param_4 = (int)uVar11;
          if (iVar8 != 0) goto LAB_0036866c;
LAB_003686e4:
          puVar20 = (undefined8 *)(*(long *)(param_3[0x11] + 0x6a0) + lVar14);
          plVar18 = plVar10;
          goto LAB_003686f0;
        }
LAB_0036866c:
        iVar8 = func_0x004762b4(auStack_70,uVar4);
        param_4 = (int)uVar11;
        if (iVar8 == 0) goto LAB_003686e4;
        uVar19 = uVar19 + 1;
        lVar16 = param_3[0x11];
        lVar14 = lVar14 + 0x48;
      } while (uVar19 < *(ulong *)(lVar16 + 0x690));
    }
// do not claim this as your own
    goto LAB_00368770;
  }
  *puVar9 = 0;
  plVar18 = (long *)(puVar9 + 1);
  if ((char)*plVar18 == '\0') {
    bVar7 = false;
    goto LAB_00368770;
  }
  FUN_0036bee8((long)&uStack_78 + 4,&uStack_78,auStack_70);
  FUN_0036bee8((long)&uStack_78 + 4,&uStack_78);
  plVar10 = plVar18;
  if ((uStack_78._4_4_ == 0) || ((int)uStack_78 == 0)) goto LAB_00368770;
  lVar16 = param_3[0x11];
  if (lVar16 != 0) {
    lVar14 = *(long *)(lVar16 + 0x690);
    if (lVar14 != 0) {
      puVar20 = *(undefined8 **)(lVar16 + 0x6a0);
      do {
        if ((*(int *)((long)puVar20 + 0x14) == (int)uStack_78) &&
           (*(int *)((long)puVar20 + 0x1c) == uStack_78._4_4_)) goto LAB_003686f0;
        puVar20 = puVar20 + 9;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    goto LAB_00368770;
  }
  if ((int)uStack_78 == 0x2a0) {
    if (uStack_78._4_4_ == 6) {
      puVar20 = (undefined8 *)&UNK_01dc6358;
    }
    else if (uStack_78._4_4_ == 0x198) {
      puVar20 = (undefined8 *)&UNK_01dc5ed8;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    }
    else {
      if (uStack_78._4_4_ != 0x390) {
        bVar13 = false;
        bVar15 = false;
        bVar6 = false;
        bVar17 = false;
        goto LAB_0036885c;
      }
      puVar20 = (undefined8 *)&UNK_01dc61a8;
    }
  }
  else if ((int)uStack_78 < 0x2a3) {
    if ((int)uStack_78 == 0x40) {
      if (uStack_78._4_4_ == 6) {
        puVar20 = (undefined8 *)&UNK_01dc6478;
      }
      else if (uStack_78._4_4_ == 0x198) {
        puVar20 = (undefined8 *)&UNK_01dc6088;
      }
      else {
        bVar15 = false;
        bVar6 = false;
        bVar17 = false;
        bVar13 = true;
LAB_0036885c:
        if (((int)uStack_78 == 0x2a0) && (uStack_78._4_4_ == 0x74)) {
          puVar20 = (undefined8 *)&UNK_01dc64c0;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        }
        else {
          bVar2 = false;
          if (uStack_78._4_4_ == 0x74) {
            bVar2 = bVar6;
          }
          if (bVar2) {
            puVar20 = (undefined8 *)&UNK_01dc6508;
          }
          else {
            bVar6 = false;
            if (uStack_78._4_4_ == 0x74) {
              bVar6 = bVar15;
            }
            if (bVar6) {
              puVar20 = (undefined8 *)&UNK_01dc6550;
            }
            else {
              bVar6 = false;
              if (uStack_78._4_4_ == 0x74) {
                bVar6 = bVar17;
              }
              if (bVar6) {
                puVar20 = (undefined8 *)&UNK_01dc6598;
              }
              else {
                bVar6 = false;
                if (uStack_78._4_4_ == 0x74) {
                  bVar6 = bVar13;
                }
                if (!bVar6) {
// WM - watermarked copy - do not remove
                  if ((int)uStack_78 == 0x329) goto LAB_003687c0;
                  if ((int)uStack_78 != 0x3d7) {
                    if ((int)uStack_78 != 0x3d6) goto LAB_00368770;
                    goto LAB_003689e4;
                  }
                  goto LAB_00368820;
                }
                puVar20 = (undefined8 *)&UNK_01dc65e0;
              }
            }
          }
        }
      }
    }
    else if ((int)uStack_78 == 0x2a1) {
      if (uStack_78._4_4_ == 6) {
        puVar20 = (undefined8 *)&UNK_01dc63a0;
      }
      else if (uStack_78._4_4_ == 0x198) {
        puVar20 = (undefined8 *)&UNK_01dc5f20;
      }
      else {
        if (uStack_78._4_4_ != 0x390) {
          bVar13 = false;
          bVar15 = false;
          bVar17 = false;
          bVar6 = true;
          goto LAB_0036885c;
        }
        puVar20 = (undefined8 *)&UNK_01dc61f0;
      }
    }
    else {
      if ((int)uStack_78 != 0x2a2) goto LAB_00368770;
      if (uStack_78._4_4_ == 6) {
        puVar20 = (undefined8 *)&UNK_01dc63e8;
      }
/* origin: github.com/pengussy - github.com/pengussy */
      else if (uStack_78._4_4_ == 0x198) {
        puVar20 = (undefined8 *)&UNK_01dc5f68;
      }
      else {
        if (uStack_78._4_4_ != 0x390) {
          bVar13 = false;
          bVar6 = false;
          bVar17 = false;
          bVar15 = true;
          goto LAB_0036885c;
        }
        puVar20 = (undefined8 *)&UNK_01dc6238;
      }
    }
  }
  else if ((int)uStack_78 < 0x3d6) {
    if ((int)uStack_78 == 0x2a3) {
      if (uStack_78._4_4_ == 6) {
        puVar20 = (undefined8 *)&UNK_01dc6430;
      }
      else {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        if (uStack_78._4_4_ != 0x198) {
          bVar13 = false;
          bVar15 = false;
          bVar6 = false;
          bVar17 = true;
          goto LAB_0036885c;
        }
        puVar20 = (undefined8 *)&UNK_01dc6040;
      }
    }
    else {
      if ((int)uStack_78 != 0x329) goto LAB_00368770;
LAB_003687c0:
      if (uStack_78._4_4_ != 0x32b) goto LAB_00368770;
      puVar20 = (undefined8 *)&UNK_01dc6748;
    }
  }
  else if ((int)uStack_78 == 0x3d6) {
LAB_003689e4:
    if (uStack_78._4_4_ != 0x3d3) goto LAB_00368770;
    puVar20 = (undefined8 *)&UNK_01dc6628;
  }
  else {
    if ((int)uStack_78 != 0x3d7) goto LAB_00368770;
LAB_00368820:
    if (uStack_78._4_4_ != 0x3d4) goto LAB_00368770;
    puVar20 = (undefined8 *)&UNK_01dc6670;
  }
LAB_003686f8:
  sVar5 = *(short *)(puVar20 + 2);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  lVar16 = *param_3;
  *param_3 = lVar16 + 1;
  *(short *)((long)param_3 + lVar16 * 2 + 8) = sVar5;
  if (lVar16 != 0) {
    lVar14 = 0;
    bVar7 = true;
    do {
      if (*(short *)((long)param_3 + lVar14 * 2 + 8) == sVar5) {
        *param_3 = lVar16;
        goto LAB_0036876c;
      }
      lVar14 = lVar14 + 1;
    } while (lVar16 != lVar14);
    goto LAB_00368770;
  }
  goto LAB_0036876c;
LAB_003686f0:
  plVar10 = plVar18;
  if (*(int *)((long)puVar20 + 0x2c) != 0) goto LAB_003686f8;
LAB_0036876c:
  bVar7 = true;
LAB_00368770:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return bVar7;
  }
  auVar21 = ___stack_chk_fail(bVar7);
  lVar16 = auVar21._0_8_;
  if (((ulong)plVar10 & 1) == 0) {
    uVar19 = (ulong)plVar10 >> 1;
    lVar14 = func_0x0046f180(uVar19,2,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                             ,0xfe2);
    bVar7 = false;
    if (lVar14 != 0) {
      if (plVar10 != (long *)0x0) {
/* wm:watermarked copy - do not remove */
        plVar18 = (long *)0x0;
        do {
          piVar1 = (int *)(auVar21._8_8_ + (long)plVar18 * 4);
          iVar8 = *piVar1;
          iVar3 = piVar1[1];
          if (iVar8 < 0x2a2) {
            if (iVar8 < 0x2a0) {
              if (iVar8 == 0) {
                puVar12 = &UNK_01dc5fb0;
                if (iVar3 != 0x43f) {
                  if (iVar3 != 0x440) goto LAB_00368da8;
                  puVar12 = &UNK_01dc5ff8;
                }
              }
              else {
                if (iVar8 != 0x40) goto LAB_00368da8;
                if (iVar3 == 6) {
                  puVar12 = &UNK_01dc6478;
                }
                else {
                  puVar12 = &UNK_01dc6088;
                  if (iVar3 != 0x198) {
                    bVar15 = false;
                    bVar6 = false;
                    bVar17 = true;
                    goto LAB_00368cd0;
                  }
                }
              }
            }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
            else if (iVar8 == 0x2a0) {
              if (iVar3 < 0x198) {
                if (iVar3 == 6) {
                  puVar12 = &UNK_01dc6358;
                }
                else {
                  bVar7 = false;
                  if (iVar3 != 0x74) goto LAB_00368cc0;
                  puVar12 = &UNK_01dc64c0;
                }
              }
              else if (iVar3 == 0x198) {
                puVar12 = &UNK_01dc5ed8;
              }
              else {
                bVar7 = false;
                if (iVar3 == 0x390) {
                  puVar12 = &UNK_01dc61a8;
                }
                else {
LAB_00368cc0:
                  bVar6 = false;
                  bVar17 = false;
                  bVar15 = false;
                  if (bVar7) {
                    bVar6 = false;
                    bVar17 = false;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                    bVar15 = false;
                    puVar12 = &UNK_01dc6508;
                    if (iVar3 == 0x74) goto LAB_00368af0;
                  }
LAB_00368cd0:
                  bVar7 = false;
                  if (iVar3 == 0x74) {
                    bVar7 = bVar6;
                  }
                  puVar12 = &UNK_01dc6550;
                  if (!bVar7) {
                    bVar7 = false;
                    if (iVar3 == 0x74) {
                      bVar7 = bVar15;
                    }
                    puVar12 = &UNK_01dc6598;
                    if (!bVar7) {
                      bVar7 = false;
                      if (iVar3 == 0x74) {
                        bVar7 = bVar17;
                      }
                      puVar12 = &UNK_01dc65e0;
                      if (!bVar7) {
                        if (iVar8 == 0x329) goto LAB_00368d14;
                        if (iVar8 == 0x3d7) goto LAB_00368b34;
                        if (iVar8 == 0x3d6) goto LAB_00368ae4;
                        goto LAB_00368da8;
                      }
                    }
                  }
                }
              }
            }
// watermarked copy - do not remove
            else {
              if (iVar8 != 0x2a1) goto LAB_00368da8;
              if (iVar3 == 6) {
                puVar12 = &UNK_01dc63a0;
              }
              else if (iVar3 == 0x198) {
                puVar12 = &UNK_01dc5f20;
              }
              else {
                if (iVar3 != 0x390) {
                  bVar7 = true;
                  goto LAB_00368cc0;
                }
                puVar12 = &UNK_01dc61f0;
              }
            }
          }
          else {
            if (iVar8 < 0x329) {
              if (iVar8 == 0x2a2) {
                if (iVar3 == 6) {
                  puVar12 = &UNK_01dc63e8;
                }
                else if (iVar3 == 0x198) {
                  puVar12 = &UNK_01dc5f68;
                }
                else {
                  if (iVar3 != 0x390) {
                    bVar15 = false;
                    bVar17 = false;
                    bVar6 = true;
                    goto LAB_00368cd0;
                  }
                  puVar12 = &UNK_01dc6238;
                }
              }
              else {
                if (iVar8 != 0x2a3) goto LAB_00368da8;
/* WM - if you paid for this, you were scammed */
                if (iVar3 == 6) {
                  puVar12 = &UNK_01dc6430;
                }
                else {
                  puVar12 = &UNK_01dc6040;
                  if (iVar3 != 0x198) {
                    bVar6 = false;
                    bVar17 = false;
                    bVar15 = true;
                    goto LAB_00368cd0;
                  }
                }
              }
              goto LAB_00368af0;
            }
            if (iVar8 == 0x329) {
LAB_00368d14:
              puVar12 = &UNK_01dc6748;
              if (iVar3 != 0x32b) goto LAB_00368da8;
            }
            else if (iVar8 == 0x3d6) {
LAB_00368ae4:
              puVar12 = &UNK_01dc6628;
              if (iVar3 != 0x3d3) goto LAB_00368da8;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            }
            else {
              if (iVar8 != 0x3d7) goto LAB_00368da8;
LAB_00368b34:
              puVar12 = &UNK_01dc6670;
              if (iVar3 != 0x3d4) {
LAB_00368da8:
                func_0x004743e4(lVar14,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,"work/Versions/A/QuartzCore");
                goto LAB_00368dbc;
              }
            }
          }
LAB_00368af0:
          *(undefined2 *)(lVar14 + (long)plVar18) = *(undefined2 *)(puVar12 + 0x10);
          plVar18 = (long *)((long)plVar18 + 2);
        } while (plVar18 < plVar10);
      }
      if (param_4 == 0) {
        func_0x004743e4(*(undefined8 *)(lVar16 + 0x40),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                        ,0xffb);
        *(long *)(lVar16 + 0x40) = lVar14;
        *(ulong *)(lVar16 + 0x48) = uVar19;
        bVar7 = true;
      }
      else {
        func_0x004743e4(*(undefined8 *)(lVar16 + 0x50),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                        ,0xff7);
        *(long *)(lVar16 + 0x50) = lVar14;
        *(ulong *)(lVar16 + 0x58) = uVar19;
        bVar7 = true;
      }
// WM - do not claim this as your own
    }
  }
  else {
LAB_00368dbc:
    bVar7 = false;
  }
  return bVar7;
}

