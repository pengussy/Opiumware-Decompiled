/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1d7090:c563ab9abb
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_001d7090(long *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined8 *******pppppppuVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
/* WM - chat: discord.gg/sdkhDjTex */
  byte *unaff_x22;
  undefined8 *******pppppppuStack_88;
  long lStack_80;
  long lStack_78;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  byte abStack_64 [4];
  
  bVar3 = param_2[0x17];
  uVar11 = (ulong)(uint)bVar3;
  if ((char)bVar3 < '\0') {
    uVar12 = *(ulong *)(param_2 + 8);
    if (uVar12 < 8) goto LAB_001d70e0;
  }
  else {
    if (bVar3 < 8) {
LAB_001d70e0:
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      *(undefined1 *)param_1 = 0;
      return;
    }
/* wm:chat: discord.gg/sdkhDjTex */
    uVar12 = (ulong)bVar3;
  }
  if (uVar12 < 9) {
LAB_001d712c:
    bVar5 = -1 < (char)uVar11;
    uVar12 = *(ulong *)(param_2 + 8);
    if (bVar5) {
      uVar12 = uVar11;
    }
    if (-1 < (long)uVar12) {
      pbVar1 = *(byte **)param_2;
      if (bVar5) {
        pbVar1 = param_2;
      }
      param_2 = (byte *)__Znwm(uVar12);
      _memcpy(param_2,pbVar1,uVar12);
      uVar11 = 0;
      abStack_64[0] = *param_2 ^ 0x52;
      abStack_64[1] = (param_2[1] ^ 0x53) - 0x29;
      abStack_64[2] = (param_2[2] ^ 0x42) + 0xae;
      abStack_64[3] = (param_2[3] ^ 0x31) + 0x85;
// WM - unlicensed copy if this notice is missing
      uVar13 = (uVar12 - 1) % 3;
      lVar14 = 0;
      if (uVar13 != 2) {
        lVar14 = uVar13 + 1;
      }
      if (1 < uVar12 - 1) {
        uVar11 = 0;
        do {
          pbVar1 = param_2 + uVar11;
          *pbVar1 = abStack_64[uVar11 & 3] + (char)uVar11 * ')' ^ *pbVar1;
          pbVar1[1] = abStack_64[uVar11 + 1 & 3] + (char)(uVar11 + 1) * ')' ^ pbVar1[1];
          pbVar1[2] = abStack_64[uVar11 + 2 & 3] + (char)(uVar11 + 2) * ')' ^ pbVar1[2];
          uVar11 = uVar11 + 3;
        } while (uVar12 - lVar14 != uVar11);
      }
      if (uVar13 != 2) {
        do {
          param_2[uVar11] = abStack_64[uVar11 & 3] + (char)uVar11 * ')' ^ param_2[uVar11];
          uVar11 = uVar11 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (*(int *)param_2 == 0x31425352) {
        pcVar7 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
        (*pcVar7)(&iStack_68,abStack_64,4);
        pcVar7 = (code *)func_0x0011ab24(&DAT_00295eb8);
        iVar6 = (*pcVar7)(param_2,uVar12,0x2a);
        if (iVar6 == iStack_68) {
          pcVar7 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
/* stripping the watermark breaks the license - github.com/pengussy */
          (*pcVar7)(&uStack_6c,param_2 + 4,4);
          unaff_x22 = param_2 + 8;
          uVar12 = uVar12 - 8;
          if (uStack_6c == 0) goto LAB_001d73f4;
          if (uStack_6c < 0x4000001) {
            iStack_70 = 0;
            if (3 < uVar12) {
              pcVar7 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
              (*pcVar7)(&iStack_70,unaff_x22,4);
              if (iStack_70 == -0x2d04ad8) {
                uVar11 = 0;
                uVar13 = 0;
                bVar3 = 1;
                do {
                  while( true ) {
                    bVar4 = bVar3;
                    pcVar7 = (code *)func_0x0011ab24(&DAT_002f7e18);
                    uVar8 = (*pcVar7)(unaff_x22 + uVar13,uVar12 - uVar13);
                    pcVar7 = (code *)func_0x0011ab24(&DAT_002979d0);
                    iVar6 = (*pcVar7)(uVar8);
                    if ((iVar6 != 0 || uVar8 == 0) || uVar12 - uVar13 < uVar8) goto LAB_001d7328;
                    pcVar7 = (code *)func_0x0011ab24(&DAT_002f7dd0);
// WM - reversing this took months of machine time
                    uVar9 = (*pcVar7)(unaff_x22 + uVar13,uVar8);
                    if (uVar9 == 0xffffffffffffffff) break;
                    if ((uVar9 == 0xfffffffffffffffe) || (0x4000000 - uVar11 < uVar9))
                    goto LAB_001d7328;
                    uVar11 = uVar9 + uVar11;
                    uVar13 = uVar8 + uVar13;
                    bVar3 = bVar4;
                    if (uVar12 <= uVar13) goto LAB_001d7510;
                  }
                  bVar4 = 0;
                  uVar13 = uVar8 + uVar13;
                  bVar3 = 0;
                } while (uVar13 < uVar12);
LAB_001d7510:
                if ((bool)(bVar4 & uVar11 != uStack_6c)) {
                  func_0x0000e100(param_1,&UNK_01cb7848);
                }
                else {
                  func_0x001d76a8(&pppppppuStack_88,(ulong)uStack_6c,0);
                  pcVar7 = (code *)func_0x0011ab24(&DAT_002f8694);
                  pppppppuVar2 = pppppppuStack_88;
                  if (-1 < lStack_78) {
                    pppppppuVar2 = &pppppppuStack_88;
                  }
                  uVar11 = (*pcVar7)(pppppppuVar2,uStack_6c,unaff_x22,uVar12);
                  pcVar7 = (code *)func_0x0011ab24(&DAT_002979d0);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
                  iVar6 = (*pcVar7)(uVar11);
                  if ((iVar6 == 0) && (uVar11 == uStack_6c)) {
                    param_1[1] = lStack_80;
                    *param_1 = (long)pppppppuStack_88;
                    param_1[2] = lStack_78;
                    lStack_80 = 0;
                    lStack_78 = 0;
                    pppppppuStack_88 = (undefined8 *******)0x0;
                  }
                  else {
                    func_0x0000e100(param_1,&UNK_01cb7848);
                  }
                  if (lStack_78 < 0) {
                    __ZdlPv(pppppppuStack_88);
                  }
                }
                goto LAB_001d7330;
              }
            }
            func_0x0000e100(param_1,&UNK_01cb7848);
            goto LAB_001d7330;
          }
        }
      }
LAB_001d7328:
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      *(undefined1 *)param_1 = 0;
LAB_001d7330:
      __ZdlPv(param_2);
      return;
    }
    FUN_0000abb4();
  }
  else {
// WM - no support for modified copies
    pcVar7 = (code *)func_0x0011ab24(PTR__memcmp_01f20360);
    pbVar1 = *(byte **)param_2;
    if (-1 < (char)param_2[0x17]) {
      pbVar1 = param_2;
    }
    iVar6 = (*pcVar7)(pbVar1,&UNK_01ad9d20,8);
    bVar3 = param_2[0x17];
    uVar11 = (ulong)bVar3;
    if (iVar6 != 0) goto LAB_001d712c;
    if ((char)bVar3 < '\0') {
      uVar11 = *(ulong *)(param_2 + 8);
      if (uVar11 < 8) goto LAB_001d7644;
      param_2 = *(byte **)param_2;
joined_r0x001d7374:
      uVar12 = uVar11 - 8;
      if (uVar12 < 0x7ffffffffffffff7) {
        if (uVar12 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)uVar12;
          plVar10 = param_1;
        }
        else {
          uVar11 = (uVar12 & 0x7ffffffffffffff8) + 8;
          uVar13 = 0x19;
          if (uVar11 != 0x18) {
            uVar13 = uVar11;
          }
          plVar10 = (long *)__Znwm(uVar13);
          *param_1 = (long)plVar10;
          param_1[1] = uVar12;
          param_1[2] = uVar13 | 0x8000000000000000;
        }
        _memmove(plVar10,param_2 + 8,uVar12);
        *(undefined1 *)((long)plVar10 + uVar12) = 0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        return;
      }
      FUN_0000aa50();
LAB_001d73f4:
      if (uVar12 < 0x7ffffffffffffff7) {
        if (uVar12 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)uVar12;
          plVar10 = param_1;
        }
        else {
          uVar11 = (uVar12 & 0x7ffffffffffffff8) + 8;
          uVar13 = 0x19;
          if (uVar11 != 0x18) {
            uVar13 = uVar11;
          }
          plVar10 = (long *)__Znwm(uVar13);
          *param_1 = (long)plVar10;
          param_1[1] = uVar12;
          param_1[2] = uVar13 | 0x8000000000000000;
        }
        _memmove(plVar10,unaff_x22,uVar12);
        *(undefined1 *)((long)plVar10 + uVar12) = 0;
        goto LAB_001d7330;
      }
      goto LAB_001d7648;
    }
    if (7 < bVar3) goto joined_r0x001d7374;
  }
LAB_001d7644:
  FUN_0001c430();
LAB_001d7648:
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1d7650);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  (*pcVar7)();
}

