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
 *  file-id: 0x29d9a8:5c41408c17
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0029d9a8(int *param_1,ushort *param_2,ulong param_3,undefined1 *param_4,ulong param_5,
                  int param_6,uint param_7)

{
  ulong *puVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  undefined1 uVar10;
  ushort uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
/* wm:origin: github.com/pengussy */
  undefined1 *puVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ushort *puVar30;
  ushort *puVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  ushort *puStack_90;
  int *piStack_88;
  undefined4 uStack_80;
  int *piStack_78;
  ulong uStack_70;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  
  if (*param_1 == 0) {
    return 0xffffffffffffffc4;
  }
  uVar34 = 0;
  if ((param_6 != 0) && (*param_1 == 1)) {
    uVar34 = func_0x0029f06c(param_2,param_3,param_1 + 0x3c,*(long *)(param_1 + 0xc4) + -1,
                             param_1[0xac]);
    if (0xffffffffffffff88 < uVar34) {
      return uVar34;
    }
    param_3 = param_3 - uVar34;
    param_2 = (ushort *)((long)param_2 + uVar34);
    *param_1 = 2;
  }
  if (param_5 == 0) {
    return uVar34;
  }
  puVar1 = (ulong *)(param_1 + 0x32a);
  puVar20 = *(undefined1 **)(param_1 + 0x32a);
  if (param_1[0x34c] == 0 && param_4 == puVar20) {
    lVar25 = *(long *)(param_1 + 0x32e);
    uVar17 = (ulong)(uint)param_1[0x331];
    uVar21 = (ulong)(uint)param_1[0x330];
  }
  else {
    lVar25 = *(long *)(param_1 + 0x32c);
    uVar9 = param_1[0x330];
    param_1[0x331] = uVar9;
    uVar21 = (long)puVar20 - lVar25;
    iVar13 = (int)uVar21;
    param_1[0x330] = iVar13;
    *(long *)(param_1 + 0x32e) = lVar25;
    *(ulong *)(param_1 + 0x32c) = (long)param_4 - uVar21;
    uVar17 = (ulong)uVar9;
    if (iVar13 - uVar9 < 8) {
      param_1[0x331] = iVar13;
      uVar17 = uVar21;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    }
  }
  puVar6 = param_4 + param_5;
  *puVar1 = (ulong)puVar6;
  uVar28 = uVar21 & 0xffffffff;
  if ((undefined1 *)(lVar25 + (uVar17 & 0xffffffff)) < puVar6 &&
      param_4 < (undefined1 *)(lVar25 + uVar28)) {
    uVar17 = (long)puVar6 - lVar25;
    if (uVar28 <= (ulong)((long)puVar6 - lVar25)) {
      uVar17 = uVar28;
    }
    param_1[0x331] = (int)uVar17;
  }
  if (param_1[0x34c] == 0 && param_4 == puVar20) {
    iVar13 = param_1[0x54];
  }
  else {
    param_1[0x34c] = 0;
    param_1[0x335] = (int)uVar21;
    iVar13 = param_1[0x54];
  }
  if (iVar13 == 1) {
// WM - thanks for reading - discord.gg/sdkhDjTex
    if (param_4 == *(undefined1 **)(param_1 + 0x108)) {
      lVar25 = *(long *)(param_1 + 0x10c);
      uVar17 = (ulong)(uint)param_1[0x10f];
      uVar21 = (ulong)(uint)param_1[0x10e];
    }
    else {
      lVar25 = *(long *)(param_1 + 0x10a);
      uVar9 = param_1[0x10e];
      param_1[0x10f] = uVar9;
      uVar21 = (long)*(undefined1 **)(param_1 + 0x108) - lVar25;
      iVar13 = (int)uVar21;
      param_1[0x10e] = iVar13;
      *(long *)(param_1 + 0x10c) = lVar25;
      *(ulong *)(param_1 + 0x10a) = (long)param_4 - uVar21;
      uVar17 = (ulong)uVar9;
      if (iVar13 - uVar9 < 8) {
        param_1[0x10f] = iVar13;
        uVar17 = uVar21;
      }
    }
    *(undefined1 **)(param_1 + 0x108) = puVar6;
    if (((undefined1 *)(lVar25 + (uVar17 & 0xffffffff)) < puVar6) &&
       (uVar21 = uVar21 & 0xffffffff, param_4 < (undefined1 *)(lVar25 + uVar21))) {
      uVar17 = (long)puVar6 - lVar25;
      if (uVar21 <= (ulong)((long)puVar6 - lVar25)) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        uVar17 = uVar21;
      }
      param_1[0x10f] = (int)uVar17;
    }
  }
  if (param_6 == 0) {
    func_0x002a0c8c(puVar1,param_1 + 0xb0,param_1 + 0x3c,param_4);
    uVar17 = func_0x002a1314(param_1,param_2,param_3,param_4,param_5,0);
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0xc2);
    uVar9 = param_1[0x3d];
    lVar25 = *(long *)(param_1 + 0xc6) - *(long *)(param_1 + 200);
    if (param_1[0x45] != 0) {
      func_0x002976a4(param_1 + 0xca,param_4,param_5);
    }
    uVar9 = 1 << (ulong)(uVar9 & 0x1f);
    piVar2 = param_1 + 0xf4;
    pauVar3 = (undefined1 (*) [16])(param_1 + 0x326);
    piVar7 = param_1 + 0x410;
    piVar4 = param_1 + 0x3fc;
    piVar5 = param_1 + 1000;
    uVar21 = param_5;
    puStack_90 = param_2;
    do {
      uVar19 = param_7;
      if ((uVar17 < 0x20000) || (uVar21 >> 0x11 == 0)) {
        uVar28 = uVar21;
        if (uVar17 <= uVar21) {
          uVar28 = uVar17;
        }
        uVar21 = uVar21 - uVar28;
        if (uVar21 != 0) {
          uVar19 = 0;
        }
      }
      else if ((lVar25 < 3) || (iVar13 = param_1[0x60], iVar13 == 1)) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        uVar28 = 0x20000;
        uVar21 = uVar21 - 0x20000;
        if (uVar21 != 0) {
          uVar19 = 0;
        }
      }
      else {
        if (iVar13 == 0) {
          iVar13 = *(int *)(&UNK_01adc7dc + (ulong)(uint)param_1[0x43] * 4);
        }
        else {
          iVar13 = iVar13 + -2;
        }
        uVar28 = func_0x002eff84(param_4,uVar17,iVar13,*(undefined8 *)(param_1 + 0x376),
                                 *(undefined8 *)(param_1 + 0x378));
        uVar21 = uVar21 - uVar28;
        if (uVar21 != 0) {
          uVar19 = 0;
        }
      }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (param_3 < 6) {
        return 0xffffffffffffffba;
      }
      puVar20 = param_4 + uVar28;
      func_0x002a0c8c(puVar1,param_1 + 0xb0,param_1 + 0x3c,param_4,puVar20);
      iVar15 = (int)*(undefined8 *)(param_1 + 0x32c);
      iVar13 = param_1[0x334];
      uVar33 = (uint)uVar28;
      uVar11 = (ushort)uVar19;
      if ((iVar13 + uVar9 < (uint)((int)puVar20 - iVar15)) || (iVar13 != param_1[0x330])) {
        param_1[0x334] = 0;
        param_1[0x368] = 0;
        param_1[0x369] = 0;
        uVar24 = (int)param_4 - iVar15;
        uVar16 = param_1[0x331];
        if (uVar24 <= uVar9) goto LAB_0029df08;
LAB_0029de00:
        uVar24 = uVar24 - uVar9;
        if (uVar16 < uVar24) {
          param_1[0x331] = uVar24;
          uVar16 = uVar24;
        }
        if ((uint)param_1[0x330] < uVar16) {
          param_1[0x330] = uVar16;
        }
        param_1[0x334] = 0;
        param_1[0x368] = 0;
        param_1[0x369] = 0;
        if (uVar16 <= (uint)param_1[0x335]) goto LAB_0029de38;
LAB_0029df14:
        param_1[0x335] = uVar16;
        if (*(long *)(param_1 + 0x4a) == 0) goto LAB_0029df20;
LAB_0029de40:
        uVar14 = func_0x002a18d4(param_1,param_4,uVar28);
/* wm:keep the notice, keep the source honest */
        if (0xffffffffffffff88 < uVar14) {
          return uVar14;
        }
        if (uVar14 == 0) {
          if ((((param_1[0xf2] != 0) ||
               (0x1f < (ulong)(*(long *)(param_1 + 0xf6) - *(long *)(param_1 + 0xf4)))) ||
              (9 < (ulong)(*(long *)(param_1 + 0xfa) - *(long *)(param_1 + 0xf8)))) ||
             (iVar13 = func_0x002a2384(param_4,uVar28), iVar13 == 0)) {
            uVar14 = FUN_002a4c38(param_1,puStack_90,param_3,param_4,uVar28,uVar19);
            if (uVar14 != 0xffffffffffffffba) {
              if (0xffffffffffffff88 < uVar14) {
                return uVar14;
              }
              uVar19 = param_1[0x43];
              if (uVar19 < 8) {
                uVar19 = 7;
              }
              if ((uVar14 != 0) &&
                 (uVar14 < (uVar28 - (uVar28 >> ((ulong)(uVar19 - 1) & 0x3f))) + 1)) {
                auVar37 = NEON_ext(*pauVar3,*pauVar3,8,1);
                *(long *)(param_1 + 0x328) = auVar37._8_8_;
                *(long *)*pauVar3 = auVar37._0_8_;
                goto LAB_0029dec8;
              }
            }
            goto LAB_0029de8c;
          }
          uVar10 = *param_4;
          *puStack_90 = uVar11 | (ushort)(uVar33 << 3) | 2;
          *(char *)(puStack_90 + 1) = (char)(uVar33 >> 0xd);
          *(undefined1 *)((long)puStack_90 + 3) = uVar10;
          uVar14 = 4;
        }
/* WM - do not claim this as your own */
        else {
LAB_0029de8c:
          uVar14 = uVar28 + 3;
          if (param_3 < uVar14) {
            return 0xffffffffffffffba;
          }
          *puStack_90 = uVar11 | (ushort)(uVar33 << 3);
          *(char *)(puStack_90 + 1) = (char)(uVar28 >> 0xd);
          _memcpy((long)puStack_90 + 3,param_4,uVar28);
          if (0xffffffffffffff87 < uVar14 && uVar28 != 0xffffffffffffff85) {
            return uVar14;
          }
        }
LAB_0029dec8:
        if (*(int *)(&UNK_000015e4 + *(long *)*pauVar3) == 2) {
          *(undefined4 *)(&UNK_000015e4 + *(long *)*pauVar3) = 1;
        }
      }
      else {
        uVar24 = (int)param_4 - iVar15;
        uVar16 = param_1[0x331];
        if (iVar13 + uVar9 < uVar24) goto LAB_0029de00;
LAB_0029df08:
        if ((uint)param_1[0x335] < uVar16) goto LAB_0029df14;
LAB_0029de38:
        if (*(long *)(param_1 + 0x4a) != 0) goto LAB_0029de40;
LAB_0029df20:
        if (param_1[0x5f] == 1) {
          uVar14 = func_0x002a18d4(param_1,param_4,uVar28);
          if (0xffffffffffffff88 < uVar14) {
            return uVar14;
          }
          if (uVar14 == 1) {
            if (*(int *)(&UNK_000015e4 + *(long *)*pauVar3) == 2) {
/* keep the notice, keep the source honest - github.com/pengussy */
              *(undefined4 *)(&UNK_000015e4 + *(long *)*pauVar3) = 1;
            }
            if (param_1[0xea] != 0) {
              return 0xffffffffffffff96;
            }
LAB_0029dfb0:
            uVar14 = uVar28 + 3;
            if (param_3 < uVar14) {
              return 0xffffffffffffffba;
            }
            *puStack_90 = uVar11 | (ushort)(uVar33 << 3);
            *(char *)(puStack_90 + 1) = (char)(uVar33 >> 0xd);
            _memcpy((long)puStack_90 + 3,param_4,uVar28);
          }
          else {
            uStack_70 = 0;
            uVar33 = (uint)((ulong)(*(long *)(param_1 + 0xf6) - *(long *)(param_1 + 0xf4)) >> 3);
            if (4 < uVar33) {
              piStack_78 = piVar7;
              func_0x002a2a34(&piStack_78,0,
                              (ulong)(*(long *)(param_1 + 0xf6) - *(long *)(param_1 + 0xf4)) >> 3 &
/* wm:found on a paste site? it was re-uploaded illegally */
                              0xffffffff,param_1,piVar2);
              piStack_78[uStack_70] = uVar33;
            }
            uVar12 = uStack_70;
            piStack_88 = *(int **)(&UNK_000015f0 + *(long *)*pauVar3);
            uStack_80 = *(undefined4 *)(&UNK_000015f8 + *(long *)*pauVar3);
            uStack_70 = CONCAT44(uStack_70._4_4_,uStack_80);
            param_1[0x3fe] = 0;
            param_1[0x3ff] = 0;
            piVar4[0] = 0;
            piVar4[1] = 0;
            param_1[0x402] = 0;
            param_1[0x403] = 0;
            param_1[0x400] = 0;
            param_1[0x401] = 0;
            param_1[0x406] = 0;
            param_1[0x407] = 0;
            param_1[0x404] = 0;
            param_1[0x405] = 0;
            param_1[0x40a] = 0;
            param_1[0x40b] = 0;
            param_1[0x408] = 0;
            param_1[0x409] = 0;
            param_1[0x40e] = 0;
            param_1[0x40f] = 0;
            param_1[0x40c] = 0;
            param_1[0x40d] = 0;
            piStack_78 = piStack_88;
            if (uVar12 == 0) {
              uVar14 = func_0x002a252c(param_1,piVar2,&piStack_78,&piStack_88,puStack_90,param_3,
                                       param_4,uVar28,uVar19);
            }
            else {
              uVar33 = param_1[0x410];
              uVar14 = (ulong)uVar33;
              *(undefined8 *)(param_1 + 0x3f2) = *(undefined8 *)(param_1 + 0xfe);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
              *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_1 + 0xfc);
              *(undefined8 *)(param_1 + 0x3f6) = *(undefined8 *)(param_1 + 0x102);
              *(undefined8 *)(param_1 + 0x3f4) = *(undefined8 *)(param_1 + 0x100);
              *(undefined8 *)(param_1 + 0x3fa) = *(undefined8 *)(param_1 + 0x106);
              *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x104);
              *(undefined8 *)(param_1 + 0x3ea) = *(undefined8 *)(param_1 + 0xf6);
              *(undefined8 *)piVar5 = *(undefined8 *)piVar2;
              *(long *)(param_1 + 0x3ee) = SUB168(*(undefined1 (*) [16])(param_1 + 0xf8),8);
              *(long *)(param_1 + 0x3ec) = SUB168(*(undefined1 (*) [16])(param_1 + 0xf8),0);
              if ((param_1[0x106] != 0) && (uVar33 < (uint)param_1[0x107])) {
                param_1[0x3fa] = 0;
              }
              lVar29 = *(long *)(param_1 + 0xf4);
              *(long *)(param_1 + 1000) = lVar29;
              *(ulong *)(param_1 + 0x3ea) = lVar29 + uVar14 * 8;
              if (uVar14 != *(long *)(param_1 + 0xf6) - lVar29 >> 3) {
                lVar22 = 0;
                if (uVar33 != 0) {
                  uVar26 = (ulong)(uint)param_1[0x3fb];
                  puVar30 = (ushort *)(lVar29 + 4);
                  do {
                    lVar29 = lVar22 + (ulong)*puVar30;
                    lVar22 = lVar29;
                    if ((uVar26 == 0) && (lVar22 = lVar29 + 0x10000, param_1[0x3fa] != 1)) {
                      lVar22 = lVar29;
                    }
                    uVar26 = uVar26 - 1;
                    uVar14 = uVar14 - 1;
                    puVar30 = puVar30 + 4;
                  } while (uVar14 != 0);
                }
                *(long *)(param_1 + 0x3ee) = *(long *)(param_1 + 0x3ec) + lVar22;
              }
              uVar26 = 0;
/* WM - found on a paste site? it was re-uploaded illegally */
              lVar29 = 0;
              puVar30 = puStack_90;
              uVar35 = param_3;
              uVar36 = 0;
              do {
                lVar22 = *(long *)(param_1 + 1000);
                if (*(long *)(param_1 + 0x3ea) - lVar22 == 0) {
                  lVar32 = 0;
                  lVar22 = lVar32;
                  if (uVar26 != uVar12) goto LAB_0029e2d4;
LAB_0029e2b8:
                  lVar32 = uVar28 - lVar29;
                  uVar33 = uVar19;
                }
                else {
                  lVar18 = 0;
                  lVar23 = *(long *)(param_1 + 0x3ea) - lVar22 >> 3;
                  uVar27 = (ulong)(uint)param_1[0x3fb];
                  puVar31 = (ushort *)(lVar22 + 4);
                  uVar14 = uVar27;
                  lVar32 = lVar23;
                  do {
                    lVar8 = lVar18 + (ulong)*puVar31;
                    lVar18 = lVar8;
                    if ((uVar14 == 0) && (lVar18 = lVar8 + 0x10000, param_1[0x3fa] != 1)) {
                      lVar18 = lVar8;
                    }
                    uVar14 = uVar14 - 1;
                    lVar32 = lVar32 + -1;
                    puVar31 = puVar31 + 4;
                  } while (lVar32 != 0);
                  lVar32 = 0;
/* WM - keep the notice, keep the source honest */
                  puVar31 = (ushort *)(lVar22 + 6);
                  do {
                    lVar8 = lVar32 + (ulong)*puVar31;
                    lVar22 = lVar8 + 3;
                    lVar32 = lVar22;
                    if ((uVar27 == 0) && (lVar32 = lVar8 + 0x10003, param_1[0x3fa] != 2)) {
                      lVar32 = lVar22;
                    }
                    uVar27 = uVar27 - 1;
                    lVar23 = lVar23 + -1;
                    puVar31 = puVar31 + 4;
                  } while (lVar23 != 0);
                  lVar32 = lVar32 + lVar18;
                  lVar22 = lVar32;
                  if (uVar26 == uVar12) goto LAB_0029e2b8;
LAB_0029e2d4:
                  func_0x002a28e4(piVar4,piVar2,piVar7[uVar26],(piVar7 + uVar26)[1]);
                  uVar33 = 0;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  lVar22 = lVar32;
                }
                uVar14 = func_0x002a252c(param_1,piVar5,&piStack_78,&piStack_88,puVar30,uVar35,
                                         param_4,lVar32,uVar33);
                if (0xffffffffffffff88 < uVar14) goto LAB_0029dc94;
                lVar29 = lVar22 + lVar29;
                param_4 = param_4 + lVar32;
                puVar30 = (ushort *)((long)puVar30 + uVar14);
                uVar35 = uVar35 - uVar14;
                uVar14 = uVar14 + uVar36;
                *(undefined8 *)(param_1 + 0x3f2) = *(undefined8 *)(param_1 + 0x406);
                *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_1 + 0x404);
                *(undefined8 *)(param_1 + 0x3f6) = *(undefined8 *)(param_1 + 0x40a);
                *(undefined8 *)(param_1 + 0x3f4) = *(undefined8 *)(param_1 + 0x408);
                *(undefined8 *)(param_1 + 0x3fa) = *(undefined8 *)(param_1 + 0x40e);
                *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_1 + 0x40c);
                *(undefined8 *)(param_1 + 0x3ea) = *(undefined8 *)(param_1 + 0x3fe);
                *(undefined8 *)piVar5 = *(undefined8 *)piVar4;
                *(long *)(param_1 + 0x3ee) = SUB168(*(undefined1 (*) [16])(param_1 + 0x400),8);
                *(long *)(param_1 + 0x3ec) = SUB168(*(undefined1 (*) [16])(param_1 + 0x400),0);
                uVar26 = uVar26 + 1;
                uVar36 = uVar14;
              } while (uVar26 <= uVar12);
              lVar29 = *(long *)*pauVar3;
              *(int **)(&UNK_000015f0 + lVar29) = piStack_78;
              *(undefined4 *)(&UNK_000015f8 + lVar29) = (undefined4)uStack_70;
            }
          }
LAB_0029dc94:
          if (0xffffffffffffff88 < uVar14) {
            return uVar14;
          }
        }
        else {
          uVar14 = func_0x002a1314(param_1,(long)puStack_90 + 3,param_3 - 3,param_4,uVar28,1);
          if (0xffffffffffffff88 < uVar14) {
            return uVar14;
/* wm:stripping the watermark breaks the license */
          }
          if (uVar14 == 1) {
            uVar19 = uVar19 | uVar33 << 3 | 2;
          }
          else {
            if (uVar14 == 0) goto LAB_0029dfb0;
            uVar19 = uVar19 | (int)uVar14 << 3 | 4;
          }
          *puStack_90 = (ushort)uVar19;
          *(char *)(puStack_90 + 1) = (char)(uVar19 >> 0x10);
          uVar14 = uVar14 + 3;
        }
      }
      lVar25 = (uVar28 + lVar25) - uVar14;
      puStack_90 = (ushort *)((long)puStack_90 + uVar14);
      param_3 = param_3 - uVar14;
      param_1[0xf2] = 0;
      param_4 = puVar20;
    } while (uVar21 != 0);
    if ((param_7 != 0) && (param_2 < puStack_90)) {
      *param_1 = 3;
    }
    uVar17 = (long)puStack_90 - (long)param_2;
  }
  if (0xffffffffffffff88 < uVar17) {
    return uVar17;
  }
  lVar25 = *(long *)(param_1 + 0xc6);
  *(ulong *)(param_1 + 0xc6) = lVar25 + param_5;
  *(ulong *)(param_1 + 200) = *(long *)(param_1 + 200) + uVar17 + uVar34;
  uVar21 = 0xffffffffffffffb8;
  if (lVar25 + param_5 + 1 <= *(ulong *)(param_1 + 0xc4) || *(ulong *)(param_1 + 0xc4) == 0) {
/* WM - proprietary - see LICENSE - do not sell */
    uVar21 = uVar17 + uVar34;
  }
  return uVar21;
}

