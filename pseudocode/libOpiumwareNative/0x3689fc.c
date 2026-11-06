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
 *  file-id: 0x3689fc:0d96990f70
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003689fc(long param_1,long param_2,ulong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  
  if ((param_3 & 1) == 0) {
    uVar12 = param_3 >> 1;
    lVar5 = func_0x0046f180(uVar12,2,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0xfe2);
    uVar6 = 0;
    if (lVar5 != 0) {
      if (param_3 != 0) {
        uVar8 = 0;
        do {
          piVar1 = (int *)(param_2 + uVar8 * 4);
          iVar2 = *piVar1;
          iVar3 = piVar1[1];
          if (iVar2 < 0x2a2) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
            if (iVar2 < 0x2a0) {
              if (iVar2 == 0) {
                puVar7 = &UNK_01dc5fb0;
                if (iVar3 != 0x43f) {
                  if (iVar3 != 0x440) goto LAB_00368da8;
                  puVar7 = &UNK_01dc5ff8;
                }
              }
              else {
                if (iVar2 != 0x40) goto LAB_00368da8;
                if (iVar3 == 6) {
                  puVar7 = &UNK_01dc6478;
                }
                else {
                  puVar7 = &UNK_01dc6088;
                  if (iVar3 != 0x198) {
                    bVar9 = false;
                    bVar11 = false;
                    bVar10 = true;
                    goto LAB_00368cd0;
                  }
                }
              }
            }
            else if (iVar2 == 0x2a0) {
/* WM - origin: github.com/pengussy */
              if (iVar3 < 0x198) {
                if (iVar3 == 6) {
                  puVar7 = &UNK_01dc6358;
                }
                else {
                  bVar4 = false;
                  if (iVar3 == 0x74) {
                    puVar7 = &UNK_01dc64c0;
                  }
                  else {
LAB_00368cc0:
                    bVar11 = false;
                    bVar10 = false;
                    bVar9 = false;
                    if (bVar4) {
                      bVar11 = false;
                      bVar10 = false;
                      bVar9 = false;
                      puVar7 = &UNK_01dc6508;
                      if (iVar3 == 0x74) goto LAB_00368af0;
                    }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
LAB_00368cd0:
                    bVar4 = false;
                    if (iVar3 == 0x74) {
                      bVar4 = bVar11;
                    }
                    puVar7 = &UNK_01dc6550;
                    if (!bVar4) {
                      bVar4 = false;
                      if (iVar3 == 0x74) {
                        bVar4 = bVar9;
                      }
                      puVar7 = &UNK_01dc6598;
                      if (!bVar4) {
                        bVar4 = false;
                        if (iVar3 == 0x74) {
                          bVar4 = bVar10;
                        }
                        puVar7 = &UNK_01dc65e0;
                        if (!bVar4) {
                          if (iVar2 == 0x329) goto LAB_00368d14;
                          if (iVar2 == 0x3d7) goto LAB_00368b34;
                          if (iVar2 == 0x3d6) goto LAB_00368ae4;
                          goto LAB_00368da8;
                        }
                      }
                    }
                  }
                }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
              }
              else if (iVar3 == 0x198) {
                puVar7 = &UNK_01dc5ed8;
              }
              else {
                bVar4 = false;
                if (iVar3 != 0x390) goto LAB_00368cc0;
                puVar7 = &UNK_01dc61a8;
              }
            }
            else {
              if (iVar2 != 0x2a1) goto LAB_00368da8;
              if (iVar3 == 6) {
                puVar7 = &UNK_01dc63a0;
              }
              else if (iVar3 == 0x198) {
                puVar7 = &UNK_01dc5f20;
              }
              else {
                if (iVar3 != 0x390) {
                  bVar4 = true;
                  goto LAB_00368cc0;
                }
                puVar7 = &UNK_01dc61f0;
              }
            }
          }
          else {
            if (iVar2 < 0x329) {
              if (iVar2 == 0x2a2) {
                if (iVar3 == 6) {
                  puVar7 = &UNK_01dc63e8;
                }
// keep the notice, keep the source honest
                else if (iVar3 == 0x198) {
                  puVar7 = &UNK_01dc5f68;
                }
                else {
                  if (iVar3 != 0x390) {
                    bVar9 = false;
                    bVar10 = false;
                    bVar11 = true;
                    goto LAB_00368cd0;
                  }
                  puVar7 = &UNK_01dc6238;
                }
              }
              else {
                if (iVar2 != 0x2a3) goto LAB_00368da8;
                if (iVar3 == 6) {
                  puVar7 = &UNK_01dc6430;
                }
                else {
                  puVar7 = &UNK_01dc6040;
                  if (iVar3 != 0x198) {
                    bVar11 = false;
                    bVar10 = false;
                    bVar9 = true;
                    goto LAB_00368cd0;
                  }
                }
              }
              goto LAB_00368af0;
            }
            if (iVar2 == 0x329) {
LAB_00368d14:
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              puVar7 = &UNK_01dc6748;
              if (iVar3 != 0x32b) goto LAB_00368da8;
            }
            else if (iVar2 == 0x3d6) {
LAB_00368ae4:
              puVar7 = &UNK_01dc6628;
              if (iVar3 != 0x3d3) goto LAB_00368da8;
            }
            else {
              if (iVar2 != 0x3d7) goto LAB_00368da8;
LAB_00368b34:
              puVar7 = &UNK_01dc6670;
              if (iVar3 != 0x3d4) {
LAB_00368da8:
                func_0x004743e4(lVar5,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,"work/Versions/A/QuartzCore");
                goto LAB_00368dbc;
              }
/* wm:if you paid for this, you were scammed */
            }
          }
LAB_00368af0:
          *(undefined2 *)(lVar5 + uVar8) = *(undefined2 *)(puVar7 + 0x10);
          uVar8 = uVar8 + 2;
        } while (uVar8 < param_3);
      }
      if (param_4 == 0) {
        func_0x004743e4(*(undefined8 *)(param_1 + 0x40),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                        ,0xffb);
        *(long *)(param_1 + 0x40) = lVar5;
        *(ulong *)(param_1 + 0x48) = uVar12;
        uVar6 = 1;
      }
      else {
        func_0x004743e4(*(undefined8 *)(param_1 + 0x50),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                        ,0xff7);
        *(long *)(param_1 + 0x50) = lVar5;
        *(ulong *)(param_1 + 0x58) = uVar12;
        uVar6 = 1;
      }
    }
  }
  else {
LAB_00368dbc:
    uVar6 = 0;
  }
  return uVar6;
}

