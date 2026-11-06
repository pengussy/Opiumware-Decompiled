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
 *  file-id: 0x3a97e8:489f816358
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003a97e8(uint *param_1,uint param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined4 uVar22;
  code *pcVar23;
  code *pcVar24;
  ulong uVar25;
// no support for modified copies
  long lVar26;
  undefined8 uVar27;
  code *pcVar28;
  code *pcVar29;
  code *pcStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  int iStack_8c;
  code *pcStack_88;
  
  if (param_1[0x26] == 1) {
    return 0xffffffff;
  }
  uVar27 = *(undefined8 *)(param_1 + 0x10);
  func_0x004455e4();
  puVar15 = (undefined4 *)___error();
/* WM - keep the notice, keep the source honest */
  *puVar15 = 0;
  pcVar29 = *(code **)(param_1 + 600);
  puVar16 = param_1;
  if (pcVar29 == (code *)0x0) {
    pcVar29 = *(code **)(*(long *)(param_1 + 2) + 0x120);
    param_1[0x30] = param_1[0x30] + 1;
    uVar14 = *param_1;
    if (uVar14 != 0) goto LAB_003a9880;
LAB_003a9890:
    if ((puVar16[0x2e] == 0) ||
       ((((puVar16 = param_1, *param_1 == 0 ||
          (((*param_1 >> 7 & 1) != 0 &&
           (puVar16 = (uint *)func_0x00380678(param_1), puVar16 != (uint *)0x0)))) &&
         (puVar16[0x2b] == 0)) && (puVar16[0x26] == 0)))) goto LAB_003a98c4;
  }
  else {
    param_1[0x30] = param_1[0x30] + 1;
    uVar14 = *param_1;
    if (uVar14 == 0) goto LAB_003a9890;
LAB_003a9880:
    if (((uVar14 >> 7 & 1) != 0) &&
       (puVar16 = (uint *)func_0x00380678(param_1), puVar16 != (uint *)0x0)) goto LAB_003a9890;
LAB_003a98c4:
    if (((*(byte *)((long)param_1 + 0x161) >> 3 & 1) == 0) &&
       (iVar13 = func_0x00358328(param_1), iVar13 == 0)) {
      return 0xffffffff;
    }
  }
  uVar14 = param_1[0x26];
  if (uVar14 != 4) {
    uVar20 = _UNK_01ad8008;
    uVar6 = _UNK_01ae6ea0;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar7 = _UNK_01ae6ea8;
    uVar8 = _UNK_01ae6eb0;
    if (uVar14 != 0) goto joined_r0x003a9ad4;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  param_1[0x1e] = param_2;
  if ((pcVar29 != (code *)0x0) &&
     ((((*(long *)(param_1 + 0x98) == 0 || (*(long *)(param_1 + 0xba) == 0)) ||
       ((*(byte *)(*(long *)(*(int **)(param_1 + 6) + 0x36) + 0x50) >> 3 & 1) != 0)) ||
      ((iVar13 = **(int **)(param_1 + 6), iVar13 < 0x304 || (iVar13 == 0x10000)))))) {
    (*pcVar29)(uVar27,0x10,1);
  }
  uVar14 = param_1[0x12];
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) >> 3 & 1) == 0) {
    if ((uVar14 & 0xffffff00) == 0x300) {
LAB_003a9990:
      iVar13 = func_0x0035370c(param_1,9,0,uVar14,0);
      if (iVar13 == 0) {
        func_0x004464bc();
        uVar20 = 0x1ae;
      }
      else {
        if (*(long *)(param_1 + 0x3e) == 0) {
          lVar19 = func_0x00400364();
          if (lVar19 == 0) {
            func_0x004464bc();
            uVar20 = 0x1b4;
            goto LAB_003aa150;
          }
          lVar18 = func_0x004003ec(lVar19,0x4000);
          if (lVar18 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem.c"
                            ,0x1b8,"state_machine");
            uVar20 = 0xffffffff;
            func_0x003a9570(param_1,0xffffffff,&UNK_000c0103,0);
            goto LAB_003aa40c;
// WM - unlicensed copy if this notice is missing
          }
          *(long *)(param_1 + 0x3e) = lVar19;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          param_1[0x6e] = 0;
          iVar13 = func_0x0035dce8(param_1);
        }
        else {
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          param_1[0x6e] = 0;
          iVar13 = func_0x0035dce8(param_1);
        }
        if (iVar13 != 0) {
          puVar16 = param_1;
          if (((((*param_1 == 0) ||
                (((*param_1 >> 7 & 1) != 0 &&
                 (puVar16 = (uint *)func_0x00380678(param_1), puVar16 != (uint *)0x0)))) &&
               (puVar16[0x2b] == 0)) && (puVar16[0x26] == 0)) || (param_1[0x356] != 0)) {
            iVar13 = FUN_003b2c28(param_1);
            if (iVar13 == 0) {
LAB_003aa404:
              lVar19 = 0;
              uVar20 = 0xffffffff;
              goto LAB_003aa40c;
            }
            if ((*(long *)(param_1 + 0x98) == 0) || (*(long *)(param_1 + 0xba) == 0)) {
              param_1[0x2f] = 1;
            }
          }
          *(undefined8 *)(param_1 + 0x26) = _UNK_01ad8008;
          uVar14 = 3;
          uVar20 = _UNK_01ad8008;
          uVar6 = _UNK_01ae6ea0;
          uVar7 = _UNK_01ae6ea8;
          uVar8 = _UNK_01ae6eb0;
/* WM - origin: github.com/pengussy */
joined_r0x003a9ad4:
          while (uVar12 = _UNK_01ae6eb0, uVar11 = _UNK_01ae6ea8, uVar10 = _UNK_01ae6ea0,
                uVar9 = _UNK_01ad8008, _UNK_01ad8008 = uVar20, _UNK_01ae6ea0 = uVar6,
                _UNK_01ae6ea8 = uVar7, _UNK_01ae6eb0 = uVar8, uVar14 == 2) {
            pcStack_88 = (code *)0x0;
            pcVar28 = *(code **)(param_1 + 600);
            if (pcVar28 == (code *)0x0) {
              pcVar28 = *(code **)(*(long *)(param_1 + 2) + 0x120);
            }
            pcVar2 = (code *)&DAT_003aca40;
            pcVar3 = (code *)&DAT_003af748;
            pcVar4 = FUN_003acb1c;
            pcVar5 = (code *)&DAT_003aa588;
            if (param_1[0x1e] != 0) {
              pcVar2 = (code *)&DAT_003bad84;
              pcVar3 = (code *)&DAT_003bc7b0;
              pcVar4 = (code *)&DAT_003bae2c;
              pcVar5 = (code *)&DAT_003b737c;
            }
            if (param_1[0x2f] != 0) {
              param_1[0x274] = 1;
// WM - more drops soon - github.com/pengussy
              param_1[0x2f] = 0;
            }
            uVar20 = *(undefined8 *)(param_1 + 0x10);
LAB_003a9e1c:
            uVar14 = param_1[0x29];
            if (uVar14 != 2) {
              if (uVar14 == 1) {
LAB_003a9f50:
                if ((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) >> 3 & 1) == 0) {
                  iVar13 = func_0x003b5788(param_1,&pcStack_88);
                }
                else {
                  iVar13 = func_0x003b1d88(param_1,&pcStack_88);
                }
                if (iVar13 != 0) {
                  param_1[0x274] = 0;
                  pcVar23 = *(code **)(*(long *)(param_1 + 0x3e) + 8);
                  pcVar24 = (code *)(*(long *)(param_1 + 0x40) - (long)pcVar23);
                  pcVar1 = pcVar24 + (long)pcStack_88;
                  if ((long)pcVar1 < 0) {
                    func_0x004464bc();
                    uVar20 = 0x2b6;
                  }
                  else {
                    pcStack_c0 = pcVar23;
                    if (pcVar24 <= pcVar1) {
                      pcStack_c8 = pcVar23 + (long)pcVar24;
                      pcStack_b8 = pcStack_88;
/* WM - if you paid for this, you were scammed */
                      iVar13 = (*pcVar4)(param_1,&pcStack_c8);
                      param_1[0x42] = 0;
                      param_1[0x43] = 0;
                      if (iVar13 == 2) {
                        *(undefined8 *)(param_1 + 0x29) = uVar12;
                      }
                      else {
                        if (iVar13 == 1) goto LAB_003aa008;
                        if (iVar13 == 0) {
                          if ((param_1[0x2e] == 0) || (param_1[0x26] != 1)) {
                            func_0x019e7540(param_1);
                          }
                          goto LAB_003aa248;
                        }
                        param_1[0x29] = 0;
                      }
                      goto LAB_003a9e1c;
                    }
                    pcStack_c8 = pcVar23;
                    pcStack_b8 = pcVar1;
                    func_0x004464bc();
                    uVar20 = 0x2ba;
                  }
LAB_003aa22c:
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem.c"
/* WM - no support for modified copies */
                                  ,uVar20,"read_state_machine");
                  uVar20 = 0x50;
                  puVar21 = &UNK_000c0103;
LAB_003aa240:
                  func_0x003a9570(param_1,uVar20,puVar21,0);
                }
              }
              else {
                if (uVar14 != 0) {
                  func_0x004464bc();
                  uVar20 = 0x2f3;
                  goto LAB_003aa22c;
                }
                if ((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) >> 3 & 1) == 0) {
                  iVar13 = func_0x003b5528(param_1,&iStack_8c);
                }
                else {
                  iVar13 = func_0x003b1484(param_1,&iStack_8c);
                }
                if (iVar13 != 0) {
                  if (pcVar28 != (code *)0x0) {
                    uVar22 = 0x1001;
                    if (param_1[0x1e] != 0) {
                      uVar22 = 0x2001;
                    }
                    (*pcVar28)(uVar20,uVar22,1);
/*  found on a paste site? it was re-uploaded illegally  */
                  }
                  iVar13 = (*pcVar5)(param_1,iStack_8c);
                  if (iVar13 != 0) {
                    uVar25 = *(ulong *)(param_1 + 0xbc);
                    uVar17 = (*pcVar2)(param_1);
                    if (uVar25 <= uVar17) {
                      if (((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) >> 3 & 1) ==
                           0) && (*(long *)(param_1 + 0xbc) != 0)) {
                        uVar17 = *(long *)(param_1 + 0xbc) + 4;
                        lVar19 = *(long *)(param_1 + 0x40);
                        lVar26 = *(long *)(*(long *)(param_1 + 0x3e) + 8);
                        lVar18 = func_0x0040058c(*(long *)(param_1 + 0x3e),uVar17);
                        if ((lVar18 == 0) || (uVar25 = lVar19 - lVar26, uVar17 < uVar25)) {
                          func_0x004464bc();
                          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem.c"
                                          ,0x296,"read_state_machine");
                          func_0x003a9570(param_1,0x50,&UNK_00080007,0);
                          goto LAB_003aa248;
                        }
                        *(ulong *)(param_1 + 0x40) =
                             *(long *)(*(long *)(param_1 + 0x3e) + 8) + uVar25;
                      }
                      param_1[0x29] = 1;
                      goto LAB_003a9f50;
                    }
/*  if you paid for this, you were scammed  */
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem.c"
                                    ,0x28e,"read_state_machine");
                    uVar20 = 0x2f;
                    puVar21 = (undefined *)0x98;
                    goto LAB_003aa240;
                  }
                }
              }
LAB_003aa248:
              lVar19 = 0;
              uVar20 = 0xffffffff;
              goto LAB_003aa40c;
            }
            uVar14 = (*pcVar3)(param_1,param_1[0x2a]);
            param_1[0x2a] = uVar14;
            if ((int)uVar14 < 3) {
              if (uVar14 == 2) {
                param_1[0x29] = 0;
              }
              else {
                if (uVar14 == 0) {
                  if ((param_1[0x2e] == 0) || (param_1[0x26] != 1)) {
                    func_0x019e7510(param_1);
                  }
                  goto LAB_003aa248;
                }
                if (uVar14 == 1) goto LAB_003aa008;
              }
              goto LAB_003a9e1c;
            }
            if (uVar14 - 4 < 3) goto LAB_003aa248;
            if (uVar14 != 3) goto LAB_003a9e1c;
LAB_003aa008:
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) >> 3 & 1) != 0) {
              func_0x0034cd08(param_1);
            }
            *(undefined8 *)(param_1 + 0x26) = uVar9;
            uVar20 = _UNK_01ad8008;
            uVar6 = _UNK_01ae6ea0;
            uVar7 = _UNK_01ae6ea8;
            uVar8 = _UNK_01ae6eb0;
            _UNK_01ae6eb0 = uVar12;
            _UNK_01ae6ea8 = uVar11;
            _UNK_01ae6ea0 = uVar10;
            _UNK_01ad8008 = uVar9;
            uVar14 = 3;
          }
          if (uVar14 == 3) {
            pcVar28 = *(code **)(param_1 + 600);
            if (pcVar28 == (code *)0x0) {
              pcVar28 = *(code **)(*(long *)(param_1 + 2) + 0x120);
            }
            uVar20 = *(undefined8 *)(param_1 + 0x10);
            pcVar5 = (code *)&DAT_003aaebc;
            pcVar4 = (code *)&DAT_003aafe8;
            pcVar3 = (code *)&DAT_003ab33c;
            pcVar2 = (code *)&DAT_003aaa2c;
            if (param_1[0x1e] != 0) {
              pcVar5 = (code *)&DAT_003b81b8;
              pcVar4 = (code *)&DAT_003b8474;
              pcVar3 = (code *)&DAT_003b88fc;
              pcVar2 = (code *)&DAT_003b7a94;
            }
LAB_003a9b14:
            uVar14 = param_1[0x27];
            if ((int)uVar14 < 2) {
              if (uVar14 == 0) {
                if (pcVar28 != (code *)0x0) {
                  uVar22 = 0x1001;
                  if (param_1[0x1e] != 0) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                    uVar22 = 0x2001;
                  }
                  (*pcVar28)(uVar20,uVar22,1);
                }
                iVar13 = (*pcVar2)(param_1);
                if (iVar13 == 1) {
                  *(undefined8 *)(param_1 + 0x27) = uVar11;
                  goto LAB_003a9b14;
                }
                if (iVar13 == 0) {
                  if ((param_1[0x2e] == 0) || (param_1[0x26] != 1)) {
                    puVar21 = (undefined *)0x100;
                    uVar20 = 0x367;
                    goto LAB_003aa3f4;
                  }
                  goto LAB_003aa404;
                }
                if (iVar13 == 2) goto LAB_003a9d64;
                goto LAB_003a9b14;
              }
              if (uVar14 == 1) {
                uVar14 = (*pcVar5)(param_1,param_1[0x28]);
                param_1[0x28] = uVar14;
                if ((int)uVar14 < 3) {
                  if (uVar14 == 2) {
                    param_1[0x27] = 2;
                    goto LAB_003a9c04;
                  }
                  if (uVar14 != 0) {
                    if (uVar14 != 1) goto LAB_003a9c04;
                    goto LAB_003a9d74;
                  }
                  if ((param_1[0x2e] == 0) || (param_1[0x26] != 1)) {
                    puVar21 = (undefined *)0x100;
                    uVar20 = 0x36f;
                    goto LAB_003aa3f4;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                  }
                  goto LAB_003aa404;
                }
                if (uVar14 - 4 < 3) goto LAB_003aa404;
                if (uVar14 == 3) goto LAB_003a9d64;
LAB_003a9c04:
                iVar13 = (*pcVar3)(param_1,&pcStack_88,&iStack_8c);
                if (iVar13 == 0) goto LAB_003aa404;
                if (iStack_8c != -1) {
                  iVar13 = func_0x019ebd10(&pcStack_c8,*(undefined8 *)(param_1 + 0x3e));
                  if ((iVar13 == 0) ||
                     (iVar13 = (**(code **)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x58))
                                         (param_1,&pcStack_c8,iStack_8c), iVar13 == 0)) {
                    uVar20 = 0x38d;
                  }
                  else {
                    if (pcStack_88 != (code *)0x0) {
                      iVar13 = (*pcStack_88)(param_1,&pcStack_c8);
                      if (iVar13 == 2) {
                        func_0x0047680c(&pcStack_c8);
                        *(undefined8 *)(param_1 + 0x27) = uVar10;
                        goto LAB_003a9b14;
                      }
                      if (iVar13 == 0) {
                        func_0x0047680c(&pcStack_c8);
                        if ((param_1[0x2e] == 0) || (param_1[0x26] != 1)) {
                          puVar21 = (undefined *)0x100;
                          uVar20 = 0x396;
                          goto LAB_003aa3f4;
                        }
                        goto LAB_003aa404;
                      }
                    }
                    iVar13 = (**(code **)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x60))
                                       (param_1,&pcStack_c8,iStack_8c);
                    if ((iVar13 != 0) && (iVar13 = func_0x004765c8(&pcStack_c8), iVar13 != 0))
// found on a paste site? it was re-uploaded illegally
                    goto LAB_003a9ca0;
                    uVar20 = 0x3a6;
                  }
                  puVar21 = &UNK_000c0103;
                  func_0x0047680c(&pcStack_c8);
                  goto LAB_003aa3f4;
                }
                *(undefined8 *)(param_1 + 0x27) = uVar10;
                goto LAB_003a9b14;
              }
LAB_003aa3d0:
              uVar20 = 0x3cf;
              puVar21 = &UNK_000c0103;
            }
            else {
              if (uVar14 == 2) {
LAB_003a9ca0:
                if (((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) >> 3 & 1) != 0) &&
                   (param_1[0x33] != 0)) {
                  func_0x0034cbd0(param_1);
                }
                if (param_1[0x2b] == 0x27 || param_1[0x2b] == 0x12) {
                  if ((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) >> 3 & 1) == 0) {
                    iVar13 = func_0x003b29c0(param_1,0x14);
                  }
                  else {
                    iVar13 = func_0x019e764c(param_1,0x14);
/*  reversing this took months of machine time  */
                  }
                }
                else {
                  iVar13 = (**(code **)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x68))(param_1);
                }
                if (iVar13 < 1) goto LAB_003aa404;
                *(undefined8 *)(param_1 + 0x27) = uVar10;
                uVar14 = (*pcVar4)(param_1,4);
                param_1[0x28] = uVar14;
              }
              else {
                if (uVar14 != 3) goto LAB_003aa3d0;
                uVar14 = (*pcVar4)(param_1,param_1[0x28]);
                param_1[0x28] = uVar14;
              }
              if (2 < (int)uVar14) {
                if (uVar14 - 4 < 3) goto LAB_003aa404;
                if (uVar14 == 3) goto LAB_003a9d64;
                goto LAB_003a9b14;
              }
              if (uVar14 == 2) {
                param_1[0x27] = 0;
                goto LAB_003a9b14;
              }
              if (uVar14 != 0) {
                if (uVar14 == 1) {
LAB_003a9d74:
                  uVar14 = 4;
                  param_1[0x26] = 4;
                  uVar20 = _UNK_01ad8008;
                  uVar6 = _UNK_01ae6ea0;
                  uVar7 = _UNK_01ae6ea8;
                  uVar8 = _UNK_01ae6eb0;
                  _UNK_01ae6eb0 = uVar12;
                  _UNK_01ae6ea8 = uVar11;
                  _UNK_01ae6ea0 = uVar10;
                  _UNK_01ad8008 = uVar9;
/* wm:proprietary - see LICENSE - do not sell */
                  goto joined_r0x003a9ad4;
                }
                goto LAB_003a9b14;
              }
              if ((param_1[0x2e] != 0) && (param_1[0x26] == 1)) goto LAB_003aa404;
              puVar21 = (undefined *)0x100;
              uVar20 = 0x3bb;
            }
LAB_003aa3f4:
            func_0x019e74b8(uVar20,param_1,puVar21);
            goto LAB_003aa404;
          }
          if (uVar14 == 4) {
            lVar19 = 0;
            uVar20 = 1;
            goto LAB_003aa40c;
          }
          if ((uVar14 != 1) || (param_1[0x2e] == 0)) {
            func_0x019e7570(param_1);
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem.c"
                          ,0x1f9,"state_machine");
          func_0x004466b0(0x14,&UNK_000c0101,0);
          goto LAB_003aa404;
/* reversing this took months of machine time - github.com/pengussy */
        }
        func_0x004464bc();
        uVar20 = 0x1ce;
      }
    }
    else {
      func_0x004464bc();
      uVar20 = 0x1a8;
    }
  }
  else {
    if (((uVar14 & 0xff00) == 0xfe00) || ((param_2 == 0 && ((uVar14 & 0xff00) == 0x100))))
    goto LAB_003a9990;
    func_0x004464bc();
    uVar20 = 0x1a3;
  }
LAB_003aa150:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem.c"
                  ,uVar20,"state_machine");
  uVar20 = 0xffffffff;
  func_0x003a9570(param_1,0xffffffff,&UNK_000c0103,0);
  lVar19 = 0;
LAB_003aa40c:
  param_1[0x30] = param_1[0x30] - 1;
  func_0x00400378(lVar19);
  if (pcVar29 != (code *)0x0) {
    uVar22 = 0x1002;
    if (param_2 != 0) {
      uVar22 = 0x2002;
/* donate: donate/README.md */
    }
    (*pcVar29)(uVar27,uVar22,uVar20);
  }
  return uVar20;
LAB_003a9d64:
  uVar14 = 2;
  param_1[0x26] = 2;
  param_1[0x29] = 0;
  uVar20 = _UNK_01ad8008;
  uVar6 = _UNK_01ae6ea0;
  uVar7 = _UNK_01ae6ea8;
  uVar8 = _UNK_01ae6eb0;
  _UNK_01ae6eb0 = uVar12;
  _UNK_01ae6ea8 = uVar11;
  _UNK_01ae6ea0 = uVar10;
  _UNK_01ad8008 = uVar9;
  goto joined_r0x003a9ad4;
}

