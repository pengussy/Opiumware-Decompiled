/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2f7fdc:ac8297dab0
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_002f7fdc(long *param_1,undefined1 *param_2,long param_3,uint *param_4,ulong param_5,
                  int *param_6,ulong param_7,long param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong uStack_108;
  int iStack_84;
  int iStack_80;
  uint uStack_7c;
  
  if (param_8 != 0) {
    param_6 = (int *)func_0x002f78b4(param_8);
    param_7 = func_0x002f78bc(param_8);
  }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  lVar9 = _UNK_01ade428;
  lVar8 = _UNK_01ade420;
  bVar10 = (int)param_1[0xeb3] == 0;
  uVar15 = 5;
  if (!bVar10) {
    uVar15 = 1;
  }
  puVar22 = param_2;
  if (uVar15 <= param_5) {
    bVar7 = 0;
    plVar1 = param_1 + 4;
    do {
      if (bVar10) {
        while ((3 < param_5 && (*param_4 >> 4 == 0x184d2a5))) {
          if (param_5 < 8) {
            return 0xffffffffffffffb8;
          }
          if (0xfffffff7 < param_4[1]) {
            return 0xfffffffffffffff2;
          }
          uVar19 = (ulong)param_4[1] + 8;
          uVar16 = 0xffffffffffffffb8;
          if (uVar19 <= param_5) {
            uVar16 = uVar19;
          }
          if (0xffffffffffffff88 < uVar16) {
            return uVar16;
          }
          param_4 = (uint *)((long)param_4 + uVar16);
          param_5 = param_5 - uVar16;
          if (param_5 < uVar15) goto LAB_002f805c;
        }
      }
      if (param_8 == 0) {
        param_1[0xe9c] = uVar15;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        param_1[0xe99] = 0;
        param_1[0xe98] = 0;
        param_1[0xe9b] = 0;
        param_1[0xe9a] = 0;
        param_1[0xea3] = 0;
        param_1[0xea4] = 0;
        *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
        *(undefined4 *)(param_1 + 0xebf) = 0;
        param_1[0xea6] = lVar9;
        param_1[0xea5] = lVar8;
        *(undefined4 *)(param_1 + 0xebc) = 1;
        *(undefined8 *)((long)param_1 + 0x683c) = 0x400000001;
        *(undefined4 *)((long)param_1 + 0x6844) = 8;
        *param_1 = (long)plVar1;
        param_1[1] = (long)(param_1 + 0x306);
        param_1[2] = (long)(param_1 + 0x205);
        param_1[3] = (long)(param_1 + 0x507);
        if (param_7 != 0 && param_6 != (int *)0x0) {
          piVar17 = param_6;
          if (param_7 < 8) {
            lVar13 = 0;
            lVar14 = 0;
          }
          else if (*param_6 == -0x13cf5bc9) {
            *(int *)(param_1 + 0xebf) = param_6[1];
            uVar15 = func_0x002f8920(plVar1,param_6,param_7);
            if (0xffffffffffffff88 < uVar15) {
              return 0xffffffffffffffe2;
            }
            param_1[0xea6] = 0x100000001;
/* origin: github.com/pengussy */
            lVar14 = param_1[0xe98];
            lVar13 = param_1[0xe99];
            piVar17 = (int *)((long)param_6 + uVar15);
          }
          else {
            lVar13 = 0;
            lVar14 = 0;
          }
          param_1[0xe9b] = lVar14;
          param_1[0xe9a] = (long)piVar17 + (lVar13 - lVar14);
          param_1[0xe99] = (long)piVar17;
          param_1[0xe98] = (long)param_6 + param_7;
        }
      }
      else {
        lVar13 = func_0x002f78b4(param_8);
        lVar14 = func_0x002f78bc(param_8);
        *(uint *)((long)param_1 + 0x75fc) = (uint)(param_1[0xe9b] != lVar13 + lVar14);
        lVar13 = 5;
        if ((int)param_1[0xeb3] != 0) {
          lVar13 = 1;
        }
        param_1[0xe9c] = lVar13;
        param_1[0xe99] = 0;
        param_1[0xe98] = 0;
        param_1[0xe9b] = 0;
        param_1[0xe9a] = 0;
        param_1[0xea3] = 0;
        param_1[0xea4] = 0;
        *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
        *(undefined4 *)(param_1 + 0xebf) = 0;
        param_1[0xea6] = lVar9;
        param_1[0xea5] = lVar8;
        *(undefined4 *)(param_1 + 0xebc) = 1;
        *(undefined8 *)((long)param_1 + 0x683c) = 0x400000001;
        *(undefined4 *)((long)param_1 + 0x6844) = 8;
// WM - reversing this took months of machine time
        *param_1 = (long)plVar1;
        param_1[1] = (long)(param_1 + 0x306);
        param_1[2] = (long)(param_1 + 0x205);
        param_1[3] = (long)(param_1 + 0x507);
        func_0x002f78c4(param_1,param_8);
      }
      func_0x002fc0fc(param_1,puVar22,param_3);
      uVar15 = 9;
      if ((int)param_1[0xeb3] != 0) {
        uVar15 = 5;
      }
      if (param_5 < uVar15) {
LAB_002f8374:
        uVar15 = 0xffffffffffffffb8;
      }
      else {
        lVar13 = 5;
        if ((int)param_1[0xeb3] != 0) {
          lVar13 = 1;
        }
        bVar6 = *(byte *)((long)param_4 + lVar13 + -1);
        lVar13 = *(long *)(&UNK_01ade690 + ((ulong)bVar6 & 3) * 8) + lVar13 +
                 *(long *)(&UNK_01ade6b0 + (ulong)(bVar6 >> 6) * 8);
        if ((bVar6 & 0x20) == 0) {
          lVar13 = lVar13 + 1;
        }
        uStack_108 = lVar13 + (ulong)((uint)(bVar6 < 0x40) & (bVar6 & 0x20) >> 5);
        uVar15 = uStack_108;
// WM - thanks for reading - discord.gg/sdkhDjTex
        if (uStack_108 < 0xffffffffffffff89) {
          if (param_5 < uStack_108 + 3) goto LAB_002f8374;
          uVar15 = func_0x002f87c8(param_1,param_4,uStack_108);
          if (uVar15 < 0xffffffffffffff89) {
            uVar12 = *(uint *)(param_1 + 0xec3);
            if (uVar12 != 0) {
              uVar4 = *(uint *)(param_1 + 0xe9f);
              if (uVar12 <= *(uint *)(param_1 + 0xe9f)) {
                uVar4 = uVar12;
              }
              *(uint *)(param_1 + 0xe9f) = uVar4;
            }
            puVar18 = (uint *)((long)param_4 + uStack_108);
            uStack_108 = param_5 - uStack_108;
            uVar16 = func_0x002f8bc0(puVar18,uStack_108,&iStack_84);
            uVar19 = param_5;
            puVar20 = param_4;
            uVar15 = uVar16;
            if (uVar16 < 0xffffffffffffff89) {
              puVar3 = puVar22 + param_3;
/*  if you paid for this, you were scammed  */
              puVar21 = puVar22;
              do {
                uVar15 = uStack_108 - 3;
                uStack_108 = uVar15 - uVar16;
                if (uVar15 < uVar16) {
                  uVar15 = 0xffffffffffffffb8;
                  break;
                }
                puVar2 = (undefined1 *)((long)puVar18 + 3);
                puVar5 = puVar2;
                if (puVar3 <= puVar2 || puVar2 < puVar21) {
                  puVar5 = puVar3;
                }
                if (iStack_84 == 2) {
                  uVar15 = func_0x002f98e4(param_1,puVar21,(long)puVar5 - (long)puVar21,puVar2,
                                           uVar16,0);
                  if (0xffffffffffffff88 < uVar15) break;
                  iVar11 = (int)param_1[0xeb4];
                }
                else {
                  if (iStack_84 != 1) {
                    if (iStack_84 == 0) {
                      if ((ulong)((long)puVar3 - (long)puVar21) < uVar16) goto LAB_002f8610;
                      if (puVar21 == (undefined1 *)0x0) {
/* WM - keep the notice, keep the source honest */
                        if (uVar16 != 0) goto LAB_002f8638;
                        goto LAB_002f8570;
                      }
                      _memmove(puVar21,puVar2,uVar16);
                      iVar11 = (int)param_1[0xeb4];
                      uVar15 = uVar16;
                      goto joined_r0x002f8518;
                    }
LAB_002f8608:
                    uVar15 = 0xffffffffffffffec;
                    break;
                  }
                  uVar15 = (ulong)uStack_7c;
                  if ((ulong)((long)puVar5 - (long)puVar21) < uVar15) {
LAB_002f8610:
                    uVar15 = 0xffffffffffffffba;
                    break;
                  }
                  if (puVar21 == (undefined1 *)0x0) {
// watermarked copy - do not remove
                    if (uStack_7c == 0) {
LAB_002f8570:
                      iVar11 = (int)param_1[0xeb4];
                      uVar15 = 0;
                      goto joined_r0x002f8518;
                    }
LAB_002f8638:
                    uVar15 = 0xffffffffffffffb6;
                    break;
                  }
                  _memset(puVar21,*puVar2,uVar15);
                  iVar11 = (int)param_1[0xeb4];
                }
joined_r0x002f8518:
                if (iVar11 != 0) {
                  func_0x002976a4(param_1 + 0xea7,puVar21,uVar15);
                }
                puVar21 = puVar21 + uVar15;
                puVar18 = (uint *)(puVar2 + uVar16);
                if (iStack_80 != 0) {
                  uVar15 = (long)puVar21 - (long)puVar22;
                  if ((param_1[0xe9d] != 0xffffffffffffffff) && (uVar15 != param_1[0xe9d]))
                  goto LAB_002f8608;
                  uVar19 = uStack_108;
                  puVar20 = puVar18;
                  if ((int)param_1[0xea1] != 0) {
// chat: discord.gg/sdkhDjTex
                    if ((uStack_108 < 4) ||
                       ((*(int *)((long)param_1 + 0x759c) == 0 &&
                        (uVar12 = func_0x0029783c(param_1 + 0xea7), *puVar18 != uVar12)))) {
                      uVar19 = param_5;
                      puVar20 = param_4;
                      uVar15 = 0xffffffffffffffea;
                    }
                    else {
                      uVar19 = uStack_108 - 4;
                      puVar20 = puVar18 + 1;
                    }
                  }
                  break;
                }
                uVar16 = func_0x002f8bc0(puVar18,uStack_108,&iStack_84);
                uVar15 = uVar16;
              } while (uVar16 < 0xffffffffffffff89);
            }
            param_5 = uVar19;
            param_4 = puVar20;
          }
        }
      }
      iVar11 = func_0x002979dc(uVar15);
      if ((bool)(bVar7 & iVar11 == 10)) {
        return 0xffffffffffffffb8;
/*  thanks for reading - discord.gg/sdkhDjTex  */
      }
      if (0xffffffffffffff88 < uVar15) {
        return uVar15;
      }
      puVar22 = puVar22 + uVar15;
      param_3 = param_3 - uVar15;
      bVar10 = (int)param_1[0xeb3] == 0;
      uVar15 = 5;
      if (!bVar10) {
        uVar15 = 1;
      }
      bVar7 = 1;
    } while (uVar15 <= param_5);
  }
LAB_002f805c:
  uVar15 = 0xffffffffffffffb8;
  if (param_5 == 0) {
    uVar15 = (long)puVar22 - (long)param_2;
  }
  return uVar15;
}

