/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2adb64:50a9173c4d
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_002adb64(long param_1,long *param_2,ulong *param_3,ulong *param_4,long param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  int *piVar33;
  long lVar34;
  ulong uVar35;
  int *piVar36;
  int iVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  ulong *puVar45;
  ulong uVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  uint uVar51;
  ulong *puVar52;
  ulong *puVar53;
  ulong *puVar54;
  uint uVar55;
  uint uVar56;
  int iVar57;
  long lVar58;
  int iVar59;
  ulong *puVar60;
  int iVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
// do not claim this as your own
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  undefined1 auVar68 [16];
  ulong uStack_78;
  ulong *puStack_70;
  ulong uStack_68;
  
  uStack_78 = _UNK_01add89a;
  lVar58 = *(long *)(param_1 + 8);
  iVar57 = (int)lVar58;
  iVar61 = ((int)param_5 + (int)param_4) - iVar57;
  uVar55 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar26 = *(uint *)(param_1 + 0x18);
  uVar51 = iVar61 - uVar55;
  if (iVar61 - *(uint *)(param_1 + 0x1c) <= uVar55 || *(int *)(param_1 + 0x28) != 0) {
    uVar51 = *(uint *)(param_1 + 0x1c);
  }
  uStack_68 = (ulong)uVar51;
  uVar55 = uVar26;
  if (uVar26 <= uVar51) {
    uVar55 = uVar51;
/* donate: donate/README.md */
  }
  if (uVar51 < uVar26) {
    lVar39 = (long)param_4 + param_5;
    uVar51 = (uint)*param_3;
    uVar26 = *(uint *)((long)param_3 + 4);
    if (8 < param_5) {
      uStack_78 = *(ulong *)(param_1 + 0x70);
      lVar14 = *(long *)(param_1 + 0x80);
      puStack_70 = (ulong *)(lVar39 + -8);
      puVar18 = (ulong *)(lVar58 + (ulong)uVar55);
      lVar34 = *(long *)(param_1 + 0x10);
      puVar21 = (ulong *)(lVar34 + uStack_68);
      lVar42 = lVar34 + (ulong)uVar55;
      uVar8 = 0x20 - *(int *)(param_1 + 0x104);
      uVar35 = (ulong)(0x40 - *(int *)(param_1 + 0x104));
      uVar28 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      puVar29 = (ulong *)(lVar39 + -0x20);
      puVar25 = param_4;
      do {
        if (param_6 < 6) {
          if (param_6 != 4) {
            uVar22 = *puVar25;
            uVar30 = 0xbb000000;
            goto LAB_002adce8;
          }
          uVar30 = (ulong)((uint)((int)*puVar25 * -0x61c8864f) >> (ulong)(uVar8 & 0x1f));
          uVar22 = *puVar25;
        }
        else {
          if (param_6 == 6) {
            uVar22 = *puVar25;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            uVar30 = 0xbf9b0000;
          }
          else {
            uVar22 = *puVar25;
            uVar30 = 0xbfa56300;
          }
LAB_002adce8:
          uVar30 = uVar22 * (uVar30 | 0xcf1bbcdc00000000) >> (uVar35 & 0x3f);
        }
        uVar48 = *(uint *)(lVar14 + uVar30 * 4);
        lVar10 = lVar34;
        if (uVar55 <= uVar48) {
          lVar10 = lVar58;
        }
        uVar40 = uVar22 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
        uVar49 = *(uint *)(uStack_78 + uVar40 * 4);
        lVar43 = lVar34;
        if (uVar55 <= uVar49) {
// no support for modified copies
          lVar43 = lVar58;
        }
        iVar59 = (int)puVar25 - iVar57;
        iVar61 = iVar59 + 1;
        uVar56 = iVar61 - uVar51;
        lVar11 = lVar34;
        if (uVar55 <= uVar56) {
          lVar11 = lVar58;
        }
        *(int *)(uStack_78 + uVar40 * 4) = iVar59;
        *(int *)(lVar14 + uVar30 * 4) = iVar59;
        uVar27 = (uint)uStack_68;
        if ((iVar61 - uVar27 < uVar51) || (0xfffffffc < uVar56 - uVar55)) {
LAB_002adde8:
          if ((uVar27 < uVar49) && (puVar52 = (ulong *)(lVar43 + (ulong)uVar49), *puVar52 == uVar22)
             ) {
            puVar23 = puVar21;
            lVar10 = lVar42;
            if (uVar55 <= uVar49) {
              puVar23 = puVar18;
              lVar10 = lVar39;
            }
            lVar11 = func_0x002ad924(puVar25 + 1,puVar52 + 1,lVar39,lVar10);
            lVar11 = lVar11 + 8;
            if ((puVar23 < puVar52 && param_4 <= puVar25) &&
                (puVar52 <= puVar23 || puVar25 != param_4)) {
/* found on a paste site? it was re-uploaded illegally */
              puVar52 = (ulong *)(lVar43 + (ulong)uVar49);
              puVar24 = puVar25;
              do {
                puVar25 = (ulong *)((long)puVar24 + -1);
                puVar52 = (ulong *)((long)puVar52 + -1);
                if (*(char *)puVar25 != *(char *)puVar52) {
                  uVar22 = (long)puVar24 - (long)param_4;
                  puVar52 = (ulong *)param_2[3];
                  puVar25 = puVar24;
                  goto joined_r0x002ae16c;
                }
                lVar11 = lVar11 + 1;
              } while ((puVar23 < puVar52) && (puVar24 = puVar25, param_4 < puVar25));
              uVar22 = (long)puVar25 - (long)param_4;
              puVar52 = (ulong *)param_2[3];
joined_r0x002ae16c:
/* wm:chat: discord.gg/sdkhDjTex */
              if (puVar29 < puVar25) goto LAB_002ade6c;
LAB_002ae170:
              uVar30 = *param_4;
              puVar52[1] = param_4[1];
              *puVar52 = uVar30;
              if (0x10 < uVar22) {
                lVar10 = param_2[3];
                uVar30 = param_4[2];
                *(ulong *)(lVar10 + 0x18) = param_4[3];
                *(ulong *)(lVar10 + 0x10) = uVar30;
                if (0x10 < uVar22 - 0x10) {
                  puVar52 = (ulong *)(lVar10 + 0x20);
                  puVar23 = param_4 + 6;
                  do {
                    uVar30 = puVar23[-2];
                    puVar52[1] = puVar23[-1];
                    *puVar52 = uVar30;
                    uVar30 = *puVar23;
                    puVar52[3] = puVar23[1];
                    puVar52[2] = uVar30;
                    puVar52 = puVar52 + 4;
                    puVar23 = puVar23 + 4;
                  } while (puVar52 < (ulong *)(lVar10 + uVar22));
                  goto LAB_002ae5c0;
                }
              }
              param_2[3] = param_2[3] + uVar22;
              piVar36 = (int *)param_2[1];
              uVar49 = iVar59 - uVar49;
            }
            else {
              uVar22 = (long)puVar25 - (long)param_4;
// found on a paste site? it was re-uploaded illegally
              puVar52 = (ulong *)param_2[3];
              if (puVar25 <= puVar29) goto LAB_002ae170;
LAB_002ade6c:
              puVar23 = puVar52;
              if (param_4 <= puVar29) {
                puVar23 = (ulong *)((long)puVar52 + ((long)puVar29 - (long)param_4));
                uVar30 = *param_4;
                puVar24 = puVar52 + 2;
                puVar52[1] = param_4[1];
                *puVar52 = uVar30;
                if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
                  do {
                    uVar30 = param_4[2];
                    puVar24[1] = param_4[3];
                    *puVar24 = uVar30;
                    uVar30 = param_4[4];
                    puVar24[3] = param_4[5];
                    puVar24[2] = uVar30;
                    puVar24 = puVar24 + 4;
                    param_4 = param_4 + 4;
                  } while (puVar24 < puVar23);
                }
                param_4 = puVar29;
              }
              if (param_4 < puVar25) {
                uVar30 = (long)puVar25 - (long)param_4;
                if ((7 < uVar30) && (0x3f < (ulong)((long)puVar23 - (long)param_4))) {
                  if (uVar30 < 0x40) {
                    uVar38 = 0;
                  }
                  else {
                    uVar38 = uVar30 & 0xffffffffffffffc0;
                    puVar52 = puVar23 + 4;
// chat: discord.gg/sdkhDjTex
                    puVar24 = param_4 + 4;
                    uVar40 = uVar38;
                    do {
                      uVar44 = puVar24[-4];
                      uVar62 = puVar24[-1];
                      uVar46 = puVar24[-2];
                      uVar64 = puVar24[1];
                      uVar63 = *puVar24;
                      uVar66 = puVar24[3];
                      uVar65 = puVar24[2];
                      puVar52[-3] = puVar24[-3];
                      puVar52[-4] = uVar44;
                      puVar52[-1] = uVar62;
                      puVar52[-2] = uVar46;
                      puVar52[1] = uVar64;
                      *puVar52 = uVar63;
                      puVar52[3] = uVar66;
                      puVar52[2] = uVar65;
                      uVar40 = uVar40 - 0x40;
                      puVar52 = puVar52 + 8;
                      puVar24 = puVar24 + 8;
                    } while (uVar40 != 0);
                    if (uVar30 == uVar38) goto LAB_002ae5c0;
                    if ((uVar30 & 0x38) == 0) {
                      puVar23 = (ulong *)((long)puVar23 + uVar38);
                      param_4 = (ulong *)((long)param_4 + uVar38);
                      goto LAB_002ae5b0;
                    }
                  }
                  uVar40 = uVar30 & 0xfffffffffffffff8;
                  lVar10 = uVar38 - uVar40;
                  puVar32 = (undefined8 *)((long)puVar23 + uVar38);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  puVar31 = (undefined8 *)((long)param_4 + uVar38);
                  do {
                    *puVar32 = *puVar31;
                    lVar10 = lVar10 + 8;
                    puVar32 = puVar32 + 1;
                    puVar31 = puVar31 + 1;
                  } while (lVar10 != 0);
                  puVar23 = (ulong *)((long)puVar23 + uVar40);
                  param_4 = (ulong *)((long)param_4 + uVar40);
                  if (uVar30 == uVar40) goto LAB_002ae5c0;
                }
LAB_002ae5b0:
                do {
                  puVar52 = (ulong *)((long)param_4 + 1);
                  *(char *)puVar23 = (char)*param_4;
                  puVar23 = (ulong *)((long)puVar23 + 1);
                  param_4 = puVar52;
                } while (puVar52 != puVar25);
              }
LAB_002ae5c0:
              param_2[3] = param_2[3] + uVar22;
              piVar36 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
              }
              uVar49 = iVar59 - uVar49;
            }
LAB_002ae610:
            *(short *)(piVar36 + 1) = (short)uVar22;
            *piVar36 = uVar49 + 3;
            uVar22 = lVar11 - 3;
            puVar52 = puVar25;
            uVar26 = uVar51;
            uVar51 = uVar49;
            goto joined_r0x002ae62c;
          }
          if ((uVar27 < uVar48) &&
             (puVar52 = (ulong *)(lVar10 + (ulong)uVar48), (int)*puVar52 == (int)*puVar25)) {
            puVar23 = (ulong *)((long)puVar25 + 1);
            uVar22 = *puVar23;
            uVar30 = uVar22 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
            uVar26 = *(uint *)(uStack_78 + uVar30 * 4);
            lVar43 = lVar34;
            if (uVar55 <= uVar26) {
              lVar43 = lVar58;
            }
            *(int *)(uStack_78 + uVar30 * 4) = iVar61;
/* WM - keep the notice, keep the source honest */
            if ((uVar27 < uVar26) &&
               (puVar24 = (ulong *)(lVar43 + (ulong)uVar26), *puVar24 == uVar22)) {
              puVar52 = puVar21;
              lVar10 = lVar42;
              if (uVar55 <= uVar26) {
                puVar52 = puVar18;
                lVar10 = lVar39;
              }
              lVar11 = func_0x002ad924((long)puVar25 + 9,puVar24 + 1,lVar39,lVar10);
              lVar11 = lVar11 + 8;
              uVar49 = iVar61 - uVar26;
              if (puVar52 < puVar24 && param_4 < puVar23) {
                puVar23 = (ulong *)(lVar43 + (ulong)uVar26);
                puVar24 = puVar25;
                while( true ) {
                  puVar25 = puVar24;
                  puVar23 = (ulong *)((long)puVar23 + -1);
                  if ((char)*puVar25 != *(char *)puVar23) break;
                  lVar11 = lVar11 + 1;
                  if ((puVar23 <= puVar52) ||
                     (puVar24 = (ulong *)((long)puVar25 + -1), puVar25 <= param_4))
                  goto LAB_002ae260;
                }
                puVar25 = (ulong *)((long)puVar25 + 1);
              }
              else {
                puVar25 = puVar23;
// unlicensed copy if this notice is missing
              }
            }
            else {
              puVar23 = puVar21;
              lVar43 = lVar42;
              if (uVar55 <= uVar48) {
                puVar23 = puVar18;
                lVar43 = lVar39;
              }
              lVar11 = func_0x002ad924((long)puVar25 + 4,(long)puVar52 + 4,lVar39,lVar43);
              lVar11 = lVar11 + 4;
              uVar49 = iVar59 - uVar48;
              if ((puVar23 < puVar52 && param_4 <= puVar25) &&
                  (puVar52 <= puVar23 || puVar25 != param_4)) {
                puVar52 = (ulong *)(lVar10 + (ulong)uVar48);
                while( true ) {
                  puVar24 = (ulong *)((long)puVar25 + -1);
                  puVar52 = (ulong *)((long)puVar52 + -1);
                  if (*(char *)puVar24 != *(char *)puVar52) break;
                  lVar11 = lVar11 + 1;
                  puVar25 = puVar24;
                  if ((puVar52 <= puVar23) || (puVar24 <= param_4)) break;
                }
              }
              else {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              }
            }
LAB_002ae260:
            uVar22 = (long)puVar25 - (long)param_4;
            puVar52 = (ulong *)param_2[3];
            if (puVar29 < puVar25) {
              puVar23 = puVar52;
              if (param_4 <= puVar29) {
                puVar23 = (ulong *)((long)puVar52 + ((long)puVar29 - (long)param_4));
                uVar30 = *param_4;
                puVar24 = puVar52 + 2;
                puVar52[1] = param_4[1];
                *puVar52 = uVar30;
                if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
                  do {
                    uVar30 = param_4[2];
                    puVar24[1] = param_4[3];
                    *puVar24 = uVar30;
                    uVar30 = param_4[4];
                    puVar24[3] = param_4[5];
                    puVar24[2] = uVar30;
                    puVar24 = puVar24 + 4;
                    param_4 = param_4 + 4;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                  } while (puVar24 < puVar23);
                }
                param_4 = puVar29;
              }
              if (param_4 < puVar25) {
                uVar30 = (long)puVar25 - (long)param_4;
                if ((7 < uVar30) && (0x3f < (ulong)((long)puVar23 - (long)param_4))) {
                  if (uVar30 < 0x40) {
                    uVar38 = 0;
                  }
                  else {
                    uVar38 = uVar30 & 0xffffffffffffffc0;
                    puVar52 = puVar23 + 4;
                    puVar24 = param_4 + 4;
                    uVar40 = uVar38;
                    do {
                      uVar44 = puVar24[-4];
                      uVar62 = puVar24[-1];
                      uVar46 = puVar24[-2];
                      uVar64 = puVar24[1];
                      uVar63 = *puVar24;
                      uVar66 = puVar24[3];
                      uVar65 = puVar24[2];
                      puVar52[-3] = puVar24[-3];
                      puVar52[-4] = uVar44;
                      puVar52[-1] = uVar62;
                      puVar52[-2] = uVar46;
                      puVar52[1] = uVar64;
                      *puVar52 = uVar63;
                      puVar52[3] = uVar66;
/* wm:reversing this took months of machine time */
                      puVar52[2] = uVar65;
                      uVar40 = uVar40 - 0x40;
                      puVar52 = puVar52 + 8;
                      puVar24 = puVar24 + 8;
                    } while (uVar40 != 0);
                    if (uVar30 == uVar38) goto LAB_002ae5f8;
                    if ((uVar30 & 0x38) == 0) {
                      puVar23 = (ulong *)((long)puVar23 + uVar38);
                      param_4 = (ulong *)((long)param_4 + uVar38);
                      goto LAB_002ae5e8;
                    }
                  }
                  uVar40 = uVar30 & 0xfffffffffffffff8;
                  lVar10 = uVar38 - uVar40;
                  puVar32 = (undefined8 *)((long)param_4 + uVar38);
                  puVar31 = (undefined8 *)((long)puVar23 + uVar38);
                  do {
                    *puVar31 = *puVar32;
                    lVar10 = lVar10 + 8;
                    puVar32 = puVar32 + 1;
                    puVar31 = puVar31 + 1;
                  } while (lVar10 != 0);
                  puVar23 = (ulong *)((long)puVar23 + uVar40);
                  param_4 = (ulong *)((long)param_4 + uVar40);
                  if (uVar30 == uVar40) goto LAB_002ae5f8;
                }
LAB_002ae5e8:
                do {
                  puVar52 = (ulong *)((long)param_4 + 1);
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                  *(char *)puVar23 = (char)*param_4;
                  puVar23 = (ulong *)((long)puVar23 + 1);
                  param_4 = puVar52;
                } while (puVar52 != puVar25);
              }
LAB_002ae5f8:
              param_2[3] = param_2[3] + uVar22;
              piVar36 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
              }
            }
            else {
              uVar30 = *param_4;
              puVar52[1] = param_4[1];
              *puVar52 = uVar30;
              if (0x10 < uVar22) {
                lVar10 = param_2[3];
                uVar30 = param_4[2];
                *(ulong *)(lVar10 + 0x18) = param_4[3];
                *(ulong *)(lVar10 + 0x10) = uVar30;
                if (0x10 < uVar22 - 0x10) {
                  puVar52 = (ulong *)(lVar10 + 0x20);
                  puVar23 = param_4 + 6;
                  do {
                    uVar30 = puVar23[-2];
                    puVar52[1] = puVar23[-1];
                    *puVar52 = uVar30;
                    uVar30 = *puVar23;
                    puVar52[3] = puVar23[1];
                    puVar52[2] = uVar30;
                    puVar52 = puVar52 + 4;
                    puVar23 = puVar23 + 4;
/*  reversing this took months of machine time  */
                  } while (puVar52 < (ulong *)(lVar10 + uVar22));
                  goto LAB_002ae5f8;
                }
              }
              param_2[3] = param_2[3] + uVar22;
              piVar36 = (int *)param_2[1];
            }
            goto LAB_002ae610;
          }
          puVar25 = (ulong *)((long)puVar25 + ((long)puVar25 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar52 = (ulong *)((long)puVar25 + 1);
          if (*(int *)(lVar11 + (ulong)uVar56) != *(int *)puVar52) goto LAB_002adde8;
          lVar10 = lVar42;
          if (uVar55 <= uVar56) {
            lVar10 = lVar39;
          }
          lVar10 = func_0x002ad924((long)puVar25 + 5,(int *)(lVar11 + (ulong)uVar56) + 1,lVar39,
                                   lVar10,puVar18);
          uVar22 = (long)puVar52 - (long)param_4;
          puVar23 = (ulong *)param_2[3];
          if (puVar29 < puVar52) {
            puVar24 = param_4;
            if (param_4 <= puVar29) {
              puVar20 = (ulong *)((long)puVar23 + ((long)puVar29 - (long)param_4));
              uVar30 = *param_4;
              puVar17 = puVar23 + 2;
              puVar23[1] = param_4[1];
              *puVar23 = uVar30;
              puVar24 = puVar29;
              puVar23 = puVar20;
              if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
                do {
/* WM - reversing this took months of machine time */
                  uVar30 = param_4[2];
                  puVar17[1] = param_4[3];
                  *puVar17 = uVar30;
                  uVar30 = param_4[4];
                  puVar17[3] = param_4[5];
                  puVar17[2] = uVar30;
                  puVar17 = puVar17 + 4;
                  param_4 = param_4 + 4;
                } while (puVar17 < puVar20);
              }
            }
            if (puVar24 < puVar52) {
              uVar30 = (long)puVar25 + (1 - (long)puVar24);
              if ((7 < uVar30) && (0x3f < (ulong)((long)puVar23 - (long)puVar24))) {
                if (uVar30 < 0x40) {
                  uVar38 = 0;
                }
                else {
                  uVar38 = uVar30 & 0xffffffffffffffc0;
                  puVar17 = puVar23 + 4;
/* WM - stripping the watermark breaks the license */
                  puVar20 = puVar24 + 4;
                  uVar40 = uVar38;
                  do {
                    uVar44 = puVar20[-4];
                    uVar62 = puVar20[-1];
                    uVar46 = puVar20[-2];
                    uVar64 = puVar20[1];
                    uVar63 = *puVar20;
                    uVar66 = puVar20[3];
                    uVar65 = puVar20[2];
                    puVar17[-3] = puVar20[-3];
                    puVar17[-4] = uVar44;
                    puVar17[-1] = uVar62;
                    puVar17[-2] = uVar46;
                    puVar17[1] = uVar64;
                    *puVar17 = uVar63;
                    puVar17[3] = uVar66;
                    puVar17[2] = uVar65;
                    uVar40 = uVar40 - 0x40;
                    puVar17 = puVar17 + 8;
                    puVar20 = puVar20 + 8;
                  } while (uVar40 != 0);
                  if (uVar30 == uVar38) goto LAB_002ae550;
                  if ((uVar30 & 0x38) == 0) {
                    puVar23 = (ulong *)((long)puVar23 + uVar38);
                    puVar24 = (ulong *)((long)puVar24 + uVar38);
                    goto LAB_002ae53c;
                  }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                }
                uVar40 = uVar30 & 0xfffffffffffffff8;
                lVar43 = uVar38 - uVar40;
                puVar32 = (undefined8 *)((long)puVar23 + uVar38);
                puVar31 = (undefined8 *)((long)puVar24 + uVar38);
                do {
                  *puVar32 = *puVar31;
                  lVar43 = lVar43 + 8;
                  puVar32 = puVar32 + 1;
                  puVar31 = puVar31 + 1;
                } while (lVar43 != 0);
                puVar23 = (ulong *)((long)puVar23 + uVar40);
                puVar24 = (ulong *)((long)puVar24 + uVar40);
                if (uVar30 == uVar40) goto LAB_002ae550;
              }
LAB_002ae53c:
              puVar24 = (ulong *)((long)puVar24 + -1);
              do {
                puVar24 = (ulong *)((long)puVar24 + 1);
                *(undefined1 *)puVar23 = *(undefined1 *)puVar24;
                puVar23 = (ulong *)((long)puVar23 + 1);
              } while (puVar24 != puVar25);
            }
LAB_002ae550:
            param_2[3] = param_2[3] + uVar22;
            piVar36 = (int *)param_2[1];
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            if (0xffff < uVar22) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            }
          }
          else {
            uVar30 = *param_4;
            puVar23[1] = param_4[1];
            *puVar23 = uVar30;
            if (0x10 < uVar22) {
              lVar43 = param_2[3];
              uVar30 = param_4[2];
              *(ulong *)(lVar43 + 0x18) = param_4[3];
              *(ulong *)(lVar43 + 0x10) = uVar30;
              if (0x10 < uVar22 - 0x10) {
                puVar25 = (ulong *)(lVar43 + 0x20);
                puVar23 = param_4 + 6;
                do {
                  uVar30 = puVar23[-2];
                  puVar25[1] = puVar23[-1];
                  *puVar25 = uVar30;
                  uVar30 = *puVar23;
                  puVar25[3] = puVar23[1];
                  puVar25[2] = uVar30;
                  puVar25 = puVar25 + 4;
                  puVar23 = puVar23 + 4;
                } while (puVar25 < (ulong *)(lVar43 + uVar22));
                goto LAB_002ae550;
              }
            }
            param_2[3] = param_2[3] + uVar22;
            piVar36 = (int *)param_2[1];
          }
          lVar11 = lVar10 + 4;
          *(short *)(piVar36 + 1) = (short)uVar22;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          *piVar36 = 1;
          uVar22 = lVar10 + 1;
joined_r0x002ae62c:
          if (uVar22 >> 0x10 != 0) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
          }
          *(short *)((long)piVar36 + 6) = (short)uVar22;
          piVar36 = piVar36 + 2;
          param_2[1] = (long)piVar36;
          param_4 = (ulong *)((long)puVar52 + lVar11);
          if (puStack_70 < param_4) {
            puVar25 = param_4;
          }
          else {
            uVar48 = iVar59 + 2;
            lVar10 = *(long *)(lVar58 + (ulong)uVar48);
            *(uint *)(uStack_78 + ((ulong)(lVar10 * -0x30e44323485a9b9d) >> (uVar28 & 0x3f)) * 4) =
                 uVar48;
            *(int *)(uStack_78 +
                    ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >> (uVar28 & 0x3f)
                    ) * 4) = (int)(long *)((long)param_4 + -2) - iVar57;
            if (param_6 < 6) {
              if (param_6 != 4) {
                uVar22 = 0xbb000000;
                goto LAB_002ae700;
              }
              *(uint *)(lVar14 + (ulong)((uint)(*(int *)(lVar58 + (ulong)uVar48) * -0x61c8864f) >>
                                        (ulong)(uVar8 & 0x1f)) * 4) = uVar48;
              uVar22 = (ulong)((uint)(*(int *)((long)param_4 + -1) * -0x61c8864f) >>
                              (ulong)(uVar8 & 0x1f));
            }
            else {
              if (param_6 == 6) {
                uVar22 = 0xbf9b0000;
              }
              else {
/* WM - no support for modified copies */
                uVar22 = 0xbfa56300;
              }
LAB_002ae700:
              *(uint *)(lVar14 + (lVar10 * (uVar22 | 0xcf1bbcdc00000000) >> (uVar35 & 0x3f)) * 4) =
                   uVar48;
              uVar22 = *(long *)((long)param_4 + -1) * (uVar22 | 0xcf1bbcdc00000000) >>
                       (uVar35 & 0x3f);
            }
            *(int *)(lVar14 + uVar22 * 4) = ((int)param_4 + -1) - iVar57;
            do {
              uVar48 = uVar26;
              iVar61 = (int)param_4 - iVar57;
              uVar26 = iVar61 - uVar48;
              lVar10 = lVar34;
              if (uVar55 <= uVar26) {
                lVar10 = lVar58;
              }
              if ((((uint)(iVar61 - (int)uStack_68) < uVar48) || (0xfffffffc < uVar26 - uVar55)) ||
                 (*(int *)(lVar10 + (ulong)uVar26) != (int)*param_4)) {
                puVar25 = param_4;
                uVar26 = uVar48;
                break;
              }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
              lVar43 = lVar42;
              if (uVar55 <= uVar26) {
                lVar43 = lVar39;
              }
              lVar10 = func_0x002ad924((long)param_4 + 4,(int *)(lVar10 + (ulong)uVar26) + 1,lVar39,
                                       lVar43,puVar18);
              if (puVar29 < param_4) {
                *(undefined2 *)(piVar36 + 1) = 0;
                *piVar36 = 1;
                if (0xffff < lVar10 + 1U) goto LAB_002ae888;
LAB_002ae820:
                *(short *)((long)piVar36 + 6) = (short)lVar10 + 1;
                piVar36 = piVar36 + 2;
                param_2[1] = (long)piVar36;
                if (5 < param_6) goto LAB_002ae8b4;
LAB_002ae838:
                if (param_6 != 4) {
                  uVar22 = *param_4;
                  uVar30 = 0xbb000000;
                  goto LAB_002ae740;
                }
                uVar30 = (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar8 & 0x1f));
                uVar22 = *param_4;
              }
              else {
                puVar25 = (ulong *)param_2[3];
                uVar22 = *param_4;
                puVar25[1] = param_4[1];
/*  watermarked copy - do not remove  */
                *puVar25 = uVar22;
                piVar36 = (int *)param_2[1];
                *(undefined2 *)(piVar36 + 1) = 0;
                *piVar36 = 1;
                if (lVar10 + 1U < 0x10000) goto LAB_002ae820;
LAB_002ae888:
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
                *(short *)((long)piVar36 + 6) = (short)lVar10 + 1;
                piVar36 = piVar36 + 2;
                param_2[1] = (long)piVar36;
                if (param_6 < 6) goto LAB_002ae838;
LAB_002ae8b4:
                if (param_6 == 6) {
                  uVar22 = *param_4;
                  uVar30 = 0xbf9b0000;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                }
                else {
                  uVar22 = *param_4;
                  uVar30 = 0xbfa56300;
                }
LAB_002ae740:
                uVar30 = uVar22 * (uVar30 | 0xcf1bbcdc00000000) >> (uVar35 & 0x3f);
              }
              *(int *)(lVar14 + uVar30 * 4) = iVar61;
              *(int *)(uStack_78 + (uVar22 * -0x30e44323485a9b9d >> (uVar28 & 0x3f)) * 4) = iVar61;
              param_4 = (ulong *)((long)param_4 + lVar10 + 4);
              puVar25 = param_4;
              uVar26 = uVar51;
              uVar51 = uVar48;
            } while (param_4 <= puStack_70);
          }
        }
      } while (puVar25 < puStack_70);
    }
    *(uint *)param_3 = uVar51;
    *(uint *)((long)param_3 + 4) = uVar26;
    return lVar39 - (long)param_4;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  }
  uStack_68 = *(ulong *)PTR____stack_chk_guard_01f20200;
  iVar61 = *(int *)(param_1 + 0x110);
  lVar58 = *(long *)(param_1 + 0x70);
  iVar57 = *(int *)(param_1 + 0x108);
  lVar39 = *(long *)(param_1 + 0x80);
  iVar59 = *(int *)(param_1 + 0x104);
  lVar42 = *(long *)(param_1 + 8);
  puVar25 = (ulong *)(param_5 + (long)param_4);
  iVar41 = (int)lVar42;
  iVar47 = (int)puVar25 - iVar41;
  uVar26 = *(uint *)(param_1 + 0x18);
  uVar55 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  bVar9 = *(int *)(param_1 + 0x28) != 0;
  uVar51 = iVar47 - uVar55;
  if (bVar9 || iVar47 - uVar26 <= uVar55) {
    uVar51 = uVar26;
  }
  puVar29 = puVar25 + -1;
  uVar48 = (uint)*param_3;
  uVar8 = *(uint *)((long)param_3 + 4);
/*  stripping the watermark breaks the license  */
  puVar21 = (ulong *)(lVar42 + (ulong)uVar51);
  puVar18 = param_4;
  if (param_4 == puVar21) {
    puVar18 = (ulong *)((long)param_4 + 1);
  }
  iVar47 = (int)puVar18 - iVar41;
  uVar49 = iVar47 - uVar55;
  if (bVar9 || iVar47 - uVar26 <= uVar55) {
    uVar49 = uVar26;
  }
  uVar49 = iVar47 - uVar49;
  uVar26 = 0;
  if (uVar8 <= uVar49) {
    uVar26 = uVar8;
  }
  puVar52 = (ulong *)(ulong)uVar26;
/*  found on a paste site? it was re-uploaded illegally  */
  uVar26 = 0;
  if (uVar48 <= uVar49) {
    uVar26 = uVar48;
  }
  puVar24 = (ulong *)(ulong)uVar26;
  puVar23 = (ulong *)((long)puVar18 + 1);
  if (iVar61 == 5) {
    puStack_70 = (ulong *)CONCAT62(puStack_70._2_6_,0xb4e2);
    if (puVar23 <= puVar29) {
      uVar28 = (ulong)(0x40 - iVar57);
      uVar35 = (ulong)(0x40 - iVar59);
      puVar53 = (ulong *)((long)puVar25 + -7);
      puVar54 = (ulong *)((long)puVar25 + -3);
      puVar17 = (ulong *)((long)puVar25 + -1);
      puVar20 = puVar25 + -4;
LAB_002a73e8:
      puVar13 = puVar18 + 0x20;
      uVar40 = *puVar18;
      uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
      uVar30 = (ulong)*(uint *)(lVar58 + uVar22 * 4);
      puVar19 = (ulong *)(lVar42 + uVar30);
      if ((int)puVar24 == 0) {
        uVar38 = 1;
        while( true ) {
          puVar16 = puVar23;
          uVar44 = uVar40 * -0x30e4432345000000 >> (uVar35 & 0x3f);
          uVar26 = *(uint *)(lVar39 + uVar44 * 4);
          iVar61 = (int)puVar18 - iVar41;
          *(int *)(lVar39 + uVar44 * 4) = iVar61;
          *(int *)(lVar58 + uVar22 * 4) = iVar61;
          puVar23 = &uStack_78;
          if (uVar51 <= (uint)uVar30) {
// stripping the watermark breaks the license
            puVar23 = puVar19;
          }
          bVar9 = *puVar23 == uVar40;
          uVar40 = *puVar16;
          uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
          if (bVar9 && puVar23 == puVar19) goto LAB_002a7560;
          puVar23 = (ulong *)(lVar42 + (ulong)uVar26);
          uVar55 = *(uint *)(lVar58 + uVar22 * 4);
          uVar30 = (ulong)uVar55;
          puVar19 = (ulong *)(lVar42 + uVar30);
          puVar60 = &uStack_78;
          if (uVar51 <= uVar26) {
            puVar60 = puVar23;
          }
          if ((int)*puVar60 == (int)*puVar18 && puVar60 == puVar23) break;
          if (puVar13 <= puVar16) {
            Hint_Prefetch(puVar16 + 8,0,0,0);
            Hint_Prefetch(puVar16 + 0x10,0,0,0);
            uVar38 = uVar38 + 1;
            puVar13 = puVar13 + 0x20;
/*  more drops soon - github.com/pengussy  */
          }
          Hint_Prefetch(puVar16 + 0x20,0,0,0);
          puVar18 = puVar16;
          puVar23 = (ulong *)((long)puVar16 + uVar38);
          if (puVar29 < (ulong *)((long)puVar16 + uVar38)) goto LAB_002a9bac;
        }
LAB_002a764c:
        puVar52 = (ulong *)((long)puVar18 + 4);
        puVar60 = (ulong *)((long)puVar23 + 4);
        if (puVar52 < puVar53) {
          if (*puVar60 == *puVar52) {
            lVar14 = 0;
            puVar60 = (ulong *)((long)puVar23 + 0xc);
            puVar13 = (ulong *)((long)puVar18 + 0xc);
            do {
              if (puVar53 <= puVar13) goto LAB_002a7750;
              uVar30 = *puVar60;
              uVar44 = *puVar13;
              lVar14 = lVar14 + 8;
              puVar60 = puVar60 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar30 == uVar44);
            uVar44 = uVar44 ^ uVar30;
            uVar30 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar52 ^ *puVar60;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
/* WM - more drops soon - github.com/pengussy */
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
          puVar60 = (ulong *)((long)puVar18 - (long)puVar23);
          puVar13 = (ulong *)(uVar30 + 4);
          if (uVar51 < uVar55) goto LAB_002a77b8;
        }
        else {
          puVar13 = puVar52;
LAB_002a7750:
          if (puVar13 < puVar54) {
            if ((int)*puVar60 == (int)*puVar13) {
              puVar60 = (ulong *)((long)puVar60 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar13 < puVar17) {
            if (*(short *)puVar60 == *(short *)puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar60 = (ulong *)((long)puVar60 + 2);
            }
          }
          if (puVar13 < puVar25) {
/* wm:no support for modified copies */
            if ((char)*puVar60 == (char)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
          }
          puVar13 = (ulong *)((long)puVar13 + (4 - (long)puVar52));
          puVar60 = (ulong *)((long)puVar18 - (long)puVar23);
          if (uVar51 < uVar55) {
LAB_002a77b8:
            if (*puVar19 == uVar40) {
              puVar52 = puVar16 + 1;
              puVar15 = puVar19 + 1;
              if (puVar52 < puVar53) {
                if (*puVar15 == *puVar52) {
                  lVar14 = 0;
                  puVar45 = puVar16 + 2;
                  puVar15 = puVar19 + 2;
                  do {
                    if (puVar53 <= puVar45) goto LAB_002a7a8c;
                    uVar30 = *puVar15;
                    uVar40 = *puVar45;
                    lVar14 = lVar14 + 8;
                    puVar45 = puVar45 + 1;
                    puVar15 = puVar15 + 1;
// proprietary - see LICENSE - do not sell
                  } while (uVar30 == uVar40);
                  uVar40 = uVar40 ^ uVar30;
                  uVar30 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
                }
                else {
                  uVar30 = *puVar52 ^ *puVar15;
                  uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
                }
              }
              else {
                puVar45 = puVar52;
LAB_002a7a8c:
                if (puVar45 < puVar54) {
/* reversing this took months of machine time - github.com/pengussy */
                  if ((int)*puVar15 == (int)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar45 < puVar17) {
                  if (*(short *)puVar15 == *(short *)puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if (puVar45 < puVar25) {
                  if ((char)*puVar15 == (char)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 1);
                  }
                }
                uVar30 = (long)puVar45 - (long)puVar52;
              }
              if (puVar13 < (ulong *)(uVar30 + 8)) {
                puVar13 = (ulong *)(uVar30 + 8);
                puVar60 = (ulong *)((long)puVar16 - (long)puVar19);
                puVar18 = puVar16;
                puVar23 = puVar19;
              }
            }
          }
        }
        if ((puVar21 < puVar23) && (param_4 < puVar18)) {
          puVar52 = (ulong *)((long)puVar18 + -1);
          do {
            puVar23 = (ulong *)((long)puVar23 + -1);
            if ((char)*puVar52 != *(char *)puVar23) goto LAB_002a79dc;
            puVar13 = (ulong *)((long)puVar13 + 1);
            puVar18 = (ulong *)((long)puVar52 + -1);
// WM - if you paid for this, you were scammed
          } while ((param_4 < puVar52) && (puVar52 = puVar18, puVar21 < puVar23));
LAB_002a7bd8:
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        goto LAB_002a7bdc;
      }
      lVar14 = -((ulong)puVar24 & 0xffffffff);
      uVar38 = 1;
      puVar60 = puVar18;
      uVar44 = uVar40;
      while( true ) {
        puVar16 = puVar23;
        uVar40 = uVar44 * -0x30e4432345000000 >> (uVar35 & 0x3f);
        uVar26 = *(uint *)(lVar39 + uVar40 * 4);
        iVar61 = (int)puVar60 - iVar41;
        *(int *)(lVar39 + uVar40 * 4) = iVar61;
/* WM - unlicensed copy if this notice is missing */
        *(int *)(lVar58 + uVar22 * 4) = iVar61;
        puVar18 = (ulong *)((long)puVar60 + 1);
        if (*(int *)((long)puVar18 + lVar14) == *(int *)puVar18) break;
        uVar40 = *puVar16;
        uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
        puVar23 = &uStack_78;
        if (uVar51 <= (uint)uVar30) {
          puVar23 = puVar19;
        }
        puVar18 = puVar60;
        if (*puVar23 == uVar44 && puVar23 == puVar19) goto LAB_002a7560;
        puVar23 = (ulong *)(lVar42 + (ulong)uVar26);
        uVar55 = *(uint *)(lVar58 + uVar22 * 4);
        uVar30 = (ulong)uVar55;
        puVar19 = (ulong *)(lVar42 + uVar30);
        puVar15 = &uStack_78;
        if (uVar51 <= uVar26) {
          puVar15 = puVar23;
        }
        if ((int)*puVar15 == (int)*puVar60 && puVar15 == puVar23) goto LAB_002a764c;
        if (puVar13 <= puVar16) {
          Hint_Prefetch(puVar16 + 8,0,0,0);
          Hint_Prefetch(puVar16 + 0x10,0,0,0);
          uVar38 = uVar38 + 1;
          puVar13 = puVar13 + 0x20;
        }
        Hint_Prefetch(puVar16 + 0x20,0,0,0);
/* wm:stripping the watermark breaks the license */
        puVar60 = puVar16;
        puVar23 = (ulong *)((long)puVar16 + uVar38);
        uVar44 = uVar40;
        if (puVar29 < (ulong *)((long)puVar16 + uVar38)) goto LAB_002a9bb4;
      }
      puVar23 = (ulong *)((long)puVar60 + 5);
      puVar13 = (ulong *)((long)puVar23 + lVar14);
      if (puVar23 < puVar53) {
        if (*puVar13 == *puVar23) {
          lVar34 = 0;
          puVar19 = (ulong *)((long)puVar60 + 0xd);
          puVar13 = (ulong *)((long)puVar60 + 0xd + lVar14);
          do {
            if (puVar53 <= puVar19) goto LAB_002a786c;
            uVar30 = *puVar13;
            uVar22 = *puVar19;
            lVar34 = lVar34 + 8;
            puVar19 = puVar19 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar30 == uVar22);
          uVar22 = uVar22 ^ uVar30;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
// if you paid for this, you were scammed
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = lVar34 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          puVar23 = (ulong *)param_2[3];
        }
        else {
          uVar22 = *puVar23 ^ *puVar13;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          puVar23 = (ulong *)param_2[3];
        }
        uVar30 = (long)puVar18 - (long)param_4;
        if (puVar18 <= puVar20) goto LAB_002a7a38;
LAB_002a78cc:
        puVar13 = puVar23;
        if (param_4 <= puVar20) {
          puVar13 = (ulong *)((long)puVar23 + ((long)puVar20 - (long)param_4));
          uVar40 = *param_4;
          puVar19 = puVar23 + 2;
          puVar23[1] = param_4[1];
          *puVar23 = uVar40;
          if (0x10 < (ulong)((long)puVar20 - (long)param_4)) {
            do {
// thanks for reading - discord.gg/sdkhDjTex
              uVar40 = param_4[2];
              puVar19[1] = param_4[3];
              *puVar19 = uVar40;
              uVar40 = param_4[4];
              puVar19[3] = param_4[5];
              puVar19[2] = uVar40;
              puVar19 = puVar19 + 4;
              param_4 = param_4 + 4;
            } while (puVar19 < puVar13);
          }
          param_4 = puVar20;
        }
        if (param_4 < puVar18) {
          uVar40 = (long)puVar60 + (1 - (long)param_4);
          if ((7 < uVar40) && (0x3f < (ulong)((long)puVar13 - (long)param_4))) {
            if (uVar40 < 0x40) {
              uVar44 = 0;
            }
            else {
              uVar44 = uVar40 & 0xffffffffffffffc0;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
              puVar23 = param_4 + 4;
              puVar19 = puVar13 + 4;
              uVar38 = uVar44;
              do {
                uVar46 = puVar23[-4];
                uVar63 = puVar23[-1];
                uVar62 = puVar23[-2];
                uVar65 = puVar23[1];
                uVar64 = *puVar23;
                uVar67 = puVar23[3];
                uVar66 = puVar23[2];
                puVar19[-3] = puVar23[-3];
                puVar19[-4] = uVar46;
                puVar19[-1] = uVar63;
                puVar19[-2] = uVar62;
                puVar19[1] = uVar65;
                *puVar19 = uVar64;
                puVar19[3] = uVar67;
                puVar19[2] = uVar66;
                uVar38 = uVar38 - 0x40;
                puVar23 = puVar23 + 8;
                puVar19 = puVar19 + 8;
              } while (uVar38 != 0);
              if (uVar40 == uVar44) goto LAB_002a8054;
              if ((uVar40 & 0x38) == 0) {
                puVar13 = (ulong *)((long)puVar13 + uVar44);
                param_4 = (ulong *)((long)param_4 + uVar44);
                goto LAB_002a8040;
              }
            }
            uVar38 = uVar40 & 0xfffffffffffffff8;
            lVar14 = uVar44 - uVar38;
            puVar32 = (undefined8 *)((long)param_4 + uVar44);
            puVar31 = (undefined8 *)((long)puVar13 + uVar44);
            do {
              *puVar31 = *puVar32;
              lVar14 = lVar14 + 8;
              puVar32 = puVar32 + 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
              puVar31 = puVar31 + 1;
            } while (lVar14 != 0);
            puVar13 = (ulong *)((long)puVar13 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            if (uVar40 == uVar38) goto LAB_002a8054;
          }
LAB_002a8040:
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar13 = *(undefined1 *)param_4;
            puVar13 = (ulong *)((long)puVar13 + 1);
          } while (param_4 != puVar60);
        }
LAB_002a8054:
        param_2[3] = param_2[3] + uVar30;
        piVar36 = (int *)param_2[1];
        if (0xffff < uVar30) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
        }
      }
      else {
// WM - chat: discord.gg/sdkhDjTex
        puVar19 = puVar23;
LAB_002a786c:
        if (puVar19 < puVar54) {
          if ((int)*puVar13 == (int)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 4);
            puVar13 = (ulong *)((long)puVar13 + 4);
          }
        }
        if (puVar19 < puVar17) {
          if (*(short *)puVar13 == *(short *)puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar13 = (ulong *)((long)puVar13 + 2);
          }
        }
        if (puVar19 < puVar25) {
          if ((char)*puVar13 == (char)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar22 = (long)puVar19 - (long)puVar23;
        uVar30 = (long)puVar18 - (long)param_4;
        puVar23 = (ulong *)param_2[3];
        if (puVar20 < puVar18) goto LAB_002a78cc;
LAB_002a7a38:
        uVar40 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar40;
        if (0x10 < uVar30) {
          lVar14 = param_2[3];
// more drops soon - github.com/pengussy
          uVar40 = param_4[2];
          *(ulong *)(lVar14 + 0x18) = param_4[3];
          *(ulong *)(lVar14 + 0x10) = uVar40;
          if (uVar30 - 0x10 < 0x11) goto LAB_002a7a60;
          puVar23 = (ulong *)(lVar14 + 0x20);
          puVar13 = param_4 + 6;
          do {
            uVar40 = puVar13[-2];
            puVar23[1] = puVar13[-1];
            *puVar23 = uVar40;
            uVar40 = *puVar13;
            puVar23[3] = puVar13[1];
            puVar23[2] = uVar40;
            puVar23 = puVar23 + 4;
            puVar13 = puVar13 + 4;
          } while (puVar23 < (ulong *)(lVar14 + uVar30));
          goto LAB_002a8054;
        }
LAB_002a7a60:
        param_2[3] = param_2[3] + uVar30;
        piVar36 = (int *)param_2[1];
      }
      puVar13 = (ulong *)(uVar22 + 4);
      *(short *)(piVar36 + 1) = (short)uVar30;
      *piVar36 = 1;
      uVar22 = uVar22 + 1;
      if (uVar22 >> 0x10 == 0) goto LAB_002a7e1c;
      goto LAB_002a8094;
    }
  }
  else if (iVar61 == 6) {
    puStack_70 = (ulong *)CONCAT62(puStack_70._2_6_,0xb4e2);
/*  if you paid for this, you were scammed  */
    if (puVar23 <= puVar29) {
      uVar28 = (ulong)(0x40 - iVar57);
      uVar35 = (ulong)(0x40 - iVar59);
      puVar53 = (ulong *)((long)puVar25 + -7);
      puVar54 = (ulong *)((long)puVar25 + -3);
      puVar17 = (ulong *)((long)puVar25 + -1);
      puVar20 = puVar25 + -4;
LAB_002a66b8:
      puVar13 = puVar18 + 0x20;
      uVar40 = *puVar18;
      uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
      uVar30 = (ulong)*(uint *)(lVar58 + uVar22 * 4);
      puVar19 = (ulong *)(lVar42 + uVar30);
      if ((int)puVar24 == 0) {
        uVar38 = 1;
        while( true ) {
          puVar16 = puVar23;
          uVar44 = uVar40 * -0x30e4432340650000 >> (uVar35 & 0x3f);
          uVar26 = *(uint *)(lVar39 + uVar44 * 4);
          iVar61 = (int)puVar18 - iVar41;
          *(int *)(lVar39 + uVar44 * 4) = iVar61;
          *(int *)(lVar58 + uVar22 * 4) = iVar61;
          puVar23 = &uStack_78;
          if (uVar51 <= (uint)uVar30) {
            puVar23 = puVar19;
          }
          bVar9 = *puVar23 == uVar40;
          uVar40 = *puVar16;
          uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
          if (bVar9 && puVar23 == puVar19) goto LAB_002a6830;
          puVar23 = (ulong *)(lVar42 + (ulong)uVar26);
          uVar55 = *(uint *)(lVar58 + uVar22 * 4);
          uVar30 = (ulong)uVar55;
          puVar19 = (ulong *)(lVar42 + uVar30);
          puVar60 = &uStack_78;
          if (uVar51 <= uVar26) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            puVar60 = puVar23;
          }
          if ((int)*puVar60 == (int)*puVar18 && puVar60 == puVar23) break;
          if (puVar13 <= puVar16) {
            Hint_Prefetch(puVar16 + 8,0,0,0);
            Hint_Prefetch(puVar16 + 0x10,0,0,0);
            uVar38 = uVar38 + 1;
            puVar13 = puVar13 + 0x20;
          }
          Hint_Prefetch(puVar16 + 0x20,0,0,0);
          puVar18 = puVar16;
          puVar23 = (ulong *)((long)puVar16 + uVar38);
          if (puVar29 < (ulong *)((long)puVar16 + uVar38)) goto LAB_002a9bac;
        }
LAB_002a691c:
        puVar52 = (ulong *)((long)puVar18 + 4);
        puVar60 = (ulong *)((long)puVar23 + 4);
        if (puVar52 < puVar53) {
          if (*puVar60 == *puVar52) {
            lVar14 = 0;
            puVar60 = (ulong *)((long)puVar23 + 0xc);
            puVar13 = (ulong *)((long)puVar18 + 0xc);
            do {
              if (puVar53 <= puVar13) goto LAB_002a6a20;
              uVar30 = *puVar60;
              uVar44 = *puVar13;
              lVar14 = lVar14 + 8;
              puVar60 = puVar60 + 1;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
              puVar13 = puVar13 + 1;
            } while (uVar30 == uVar44);
            uVar44 = uVar44 ^ uVar30;
            uVar30 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar52 ^ *puVar60;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
          puVar60 = (ulong *)((long)puVar18 - (long)puVar23);
          puVar13 = (ulong *)(uVar30 + 4);
          if (uVar51 < uVar55) goto LAB_002a6a88;
        }
        else {
          puVar13 = puVar52;
LAB_002a6a20:
          if (puVar13 < puVar54) {
            if ((int)*puVar60 == (int)*puVar13) {
              puVar60 = (ulong *)((long)puVar60 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
/* wm:watermarked copy - do not remove */
            }
          }
          if (puVar13 < puVar17) {
            if (*(short *)puVar60 == *(short *)puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar60 = (ulong *)((long)puVar60 + 2);
            }
          }
          if (puVar13 < puVar25) {
            if ((char)*puVar60 == (char)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
          }
          puVar13 = (ulong *)((long)puVar13 + (4 - (long)puVar52));
          puVar60 = (ulong *)((long)puVar18 - (long)puVar23);
          if (uVar51 < uVar55) {
LAB_002a6a88:
            if (*puVar19 == uVar40) {
              puVar52 = puVar16 + 1;
              puVar15 = puVar19 + 1;
              if (puVar52 < puVar53) {
                if (*puVar15 == *puVar52) {
                  lVar14 = 0;
                  puVar45 = puVar16 + 2;
                  puVar15 = puVar19 + 2;
                  do {
                    if (puVar53 <= puVar45) goto LAB_002a6d5c;
                    uVar30 = *puVar15;
                    uVar40 = *puVar45;
                    lVar14 = lVar14 + 8;
                    puVar45 = puVar45 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar30 == uVar40);
                  uVar40 = uVar40 ^ uVar30;
/* origin: github.com/pengussy */
                  uVar30 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
                }
                else {
                  uVar30 = *puVar52 ^ *puVar15;
                  uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
                }
              }
              else {
                puVar45 = puVar52;
LAB_002a6d5c:
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
                if (puVar45 < puVar54) {
                  if ((int)*puVar15 == (int)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar45 < puVar17) {
                  if (*(short *)puVar15 == *(short *)puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if (puVar45 < puVar25) {
                  if ((char)*puVar15 == (char)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 1);
                  }
                }
                uVar30 = (long)puVar45 - (long)puVar52;
              }
              if (puVar13 < (ulong *)(uVar30 + 8)) {
                puVar13 = (ulong *)(uVar30 + 8);
/* wm:origin: github.com/pengussy */
                puVar60 = (ulong *)((long)puVar16 - (long)puVar19);
                puVar18 = puVar16;
                puVar23 = puVar19;
              }
            }
          }
        }
        if ((puVar21 < puVar23) && (param_4 < puVar18)) {
          puVar52 = (ulong *)((long)puVar18 + -1);
          do {
            puVar23 = (ulong *)((long)puVar23 + -1);
            if ((char)*puVar52 != *(char *)puVar23) goto LAB_002a6cac;
            puVar13 = (ulong *)((long)puVar13 + 1);
            puVar18 = (ulong *)((long)puVar52 + -1);
          } while ((param_4 < puVar52) && (puVar52 = puVar18, puVar21 < puVar23));
LAB_002a6ea8:
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        goto LAB_002a6eac;
      }
// WM - found on a paste site? it was re-uploaded illegally
      lVar14 = -((ulong)puVar24 & 0xffffffff);
      uVar38 = 1;
      puVar60 = puVar18;
      uVar44 = uVar40;
      while( true ) {
        puVar16 = puVar23;
        uVar40 = uVar44 * -0x30e4432340650000 >> (uVar35 & 0x3f);
        uVar26 = *(uint *)(lVar39 + uVar40 * 4);
        iVar61 = (int)puVar60 - iVar41;
        *(int *)(lVar39 + uVar40 * 4) = iVar61;
        *(int *)(lVar58 + uVar22 * 4) = iVar61;
        puVar18 = (ulong *)((long)puVar60 + 1);
        if (*(int *)((long)puVar18 + lVar14) == *(int *)puVar18) break;
        uVar40 = *puVar16;
        uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
        puVar23 = &uStack_78;
        if (uVar51 <= (uint)uVar30) {
          puVar23 = puVar19;
        }
        puVar18 = puVar60;
        if (*puVar23 == uVar44 && puVar23 == puVar19) goto LAB_002a6830;
        puVar23 = (ulong *)(lVar42 + (ulong)uVar26);
/* WM - donate: donate/README.md */
        uVar55 = *(uint *)(lVar58 + uVar22 * 4);
        uVar30 = (ulong)uVar55;
        puVar19 = (ulong *)(lVar42 + uVar30);
        puVar15 = &uStack_78;
        if (uVar51 <= uVar26) {
          puVar15 = puVar23;
        }
        if ((int)*puVar15 == (int)*puVar60 && puVar15 == puVar23) goto LAB_002a691c;
        if (puVar13 <= puVar16) {
          Hint_Prefetch(puVar16 + 8,0,0,0);
          Hint_Prefetch(puVar16 + 0x10,0,0,0);
          uVar38 = uVar38 + 1;
          puVar13 = puVar13 + 0x20;
        }
        Hint_Prefetch(puVar16 + 0x20,0,0,0);
        puVar60 = puVar16;
        puVar23 = (ulong *)((long)puVar16 + uVar38);
        uVar44 = uVar40;
        if (puVar29 < (ulong *)((long)puVar16 + uVar38)) goto LAB_002a9bb4;
      }
      puVar23 = (ulong *)((long)puVar60 + 5);
      puVar13 = (ulong *)((long)puVar23 + lVar14);
      if (puVar23 < puVar53) {
        if (*puVar13 == *puVar23) {
          lVar34 = 0;
          puVar19 = (ulong *)((long)puVar60 + 0xd);
          puVar13 = (ulong *)((long)puVar60 + 0xd + lVar14);
          do {
            if (puVar53 <= puVar19) goto LAB_002a6b3c;
            uVar30 = *puVar13;
            uVar22 = *puVar19;
            lVar34 = lVar34 + 8;
            puVar19 = puVar19 + 1;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            puVar13 = puVar13 + 1;
          } while (uVar30 == uVar22);
          uVar22 = uVar22 ^ uVar30;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = lVar34 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          puVar23 = (ulong *)param_2[3];
        }
        else {
          uVar22 = *puVar23 ^ *puVar13;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          puVar23 = (ulong *)param_2[3];
        }
        uVar30 = (long)puVar18 - (long)param_4;
        if (puVar18 <= puVar20) goto LAB_002a6d08;
/*  thanks for reading - discord.gg/sdkhDjTex  */
LAB_002a6b9c:
        puVar13 = puVar23;
        if (param_4 <= puVar20) {
          puVar13 = (ulong *)((long)puVar23 + ((long)puVar20 - (long)param_4));
          uVar40 = *param_4;
          puVar19 = puVar23 + 2;
          puVar23[1] = param_4[1];
          *puVar23 = uVar40;
          if (0x10 < (ulong)((long)puVar20 - (long)param_4)) {
            do {
              uVar40 = param_4[2];
              puVar19[1] = param_4[3];
              *puVar19 = uVar40;
              uVar40 = param_4[4];
              puVar19[3] = param_4[5];
              puVar19[2] = uVar40;
              puVar19 = puVar19 + 4;
              param_4 = param_4 + 4;
            } while (puVar19 < puVar13);
          }
          param_4 = puVar20;
        }
        if (param_4 < puVar18) {
          uVar40 = (long)puVar60 + (1 - (long)param_4);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          if ((7 < uVar40) && (0x3f < (ulong)((long)puVar13 - (long)param_4))) {
            if (uVar40 < 0x40) {
              uVar44 = 0;
            }
            else {
              uVar44 = uVar40 & 0xffffffffffffffc0;
              puVar23 = param_4 + 4;
              puVar19 = puVar13 + 4;
              uVar38 = uVar44;
              do {
                uVar46 = puVar23[-4];
                uVar63 = puVar23[-1];
                uVar62 = puVar23[-2];
                uVar65 = puVar23[1];
                uVar64 = *puVar23;
                uVar67 = puVar23[3];
                uVar66 = puVar23[2];
                puVar19[-3] = puVar23[-3];
                puVar19[-4] = uVar46;
                puVar19[-1] = uVar63;
                puVar19[-2] = uVar62;
                puVar19[1] = uVar65;
                *puVar19 = uVar64;
                puVar19[3] = uVar67;
                puVar19[2] = uVar66;
                uVar38 = uVar38 - 0x40;
                puVar23 = puVar23 + 8;
                puVar19 = puVar19 + 8;
              } while (uVar38 != 0);
              if (uVar40 == uVar44) goto LAB_002a7324;
/* keep the notice, keep the source honest */
              if ((uVar40 & 0x38) == 0) {
                puVar13 = (ulong *)((long)puVar13 + uVar44);
                param_4 = (ulong *)((long)param_4 + uVar44);
                goto LAB_002a7310;
              }
            }
            uVar38 = uVar40 & 0xfffffffffffffff8;
            lVar14 = uVar44 - uVar38;
            puVar32 = (undefined8 *)((long)param_4 + uVar44);
            puVar31 = (undefined8 *)((long)puVar13 + uVar44);
            do {
              *puVar31 = *puVar32;
              lVar14 = lVar14 + 8;
              puVar32 = puVar32 + 1;
              puVar31 = puVar31 + 1;
            } while (lVar14 != 0);
            puVar13 = (ulong *)((long)puVar13 + uVar38);
            param_4 = (ulong *)((long)param_4 + uVar38);
            if (uVar40 == uVar38) goto LAB_002a7324;
          }
LAB_002a7310:
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar13 = *(undefined1 *)param_4;
            puVar13 = (ulong *)((long)puVar13 + 1);
          } while (param_4 != puVar60);
/* thanks for reading - discord.gg/sdkhDjTex */
        }
LAB_002a7324:
        param_2[3] = param_2[3] + uVar30;
        piVar36 = (int *)param_2[1];
        if (0xffff < uVar30) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
        }
      }
      else {
        puVar19 = puVar23;
LAB_002a6b3c:
        if (puVar19 < puVar54) {
          if ((int)*puVar13 == (int)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 4);
            puVar13 = (ulong *)((long)puVar13 + 4);
          }
        }
        if (puVar19 < puVar17) {
          if (*(short *)puVar13 == *(short *)puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
            puVar13 = (ulong *)((long)puVar13 + 2);
          }
        }
        if (puVar19 < puVar25) {
          if ((char)*puVar13 == (char)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar22 = (long)puVar19 - (long)puVar23;
        uVar30 = (long)puVar18 - (long)param_4;
        puVar23 = (ulong *)param_2[3];
        if (puVar20 < puVar18) goto LAB_002a6b9c;
LAB_002a6d08:
        uVar40 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar40;
        if (0x10 < uVar30) {
/* if you paid for this, you were scammed */
          lVar14 = param_2[3];
          uVar40 = param_4[2];
          *(ulong *)(lVar14 + 0x18) = param_4[3];
          *(ulong *)(lVar14 + 0x10) = uVar40;
          if (uVar30 - 0x10 < 0x11) goto LAB_002a6d30;
          puVar23 = (ulong *)(lVar14 + 0x20);
          puVar13 = param_4 + 6;
          do {
            uVar40 = puVar13[-2];
            puVar23[1] = puVar13[-1];
            *puVar23 = uVar40;
            uVar40 = *puVar13;
            puVar23[3] = puVar13[1];
            puVar23[2] = uVar40;
            puVar23 = puVar23 + 4;
            puVar13 = puVar13 + 4;
          } while (puVar23 < (ulong *)(lVar14 + uVar30));
          goto LAB_002a7324;
        }
LAB_002a6d30:
        param_2[3] = param_2[3] + uVar30;
        piVar36 = (int *)param_2[1];
/*  origin: github.com/pengussy  */
      }
      puVar13 = (ulong *)(uVar22 + 4);
      *(short *)(piVar36 + 1) = (short)uVar30;
      *piVar36 = 1;
      uVar22 = uVar22 + 1;
      if (uVar22 >> 0x10 == 0) goto LAB_002a70ec;
      goto LAB_002a7364;
    }
  }
  else if (iVar61 == 7) {
    puStack_70 = (ulong *)CONCAT62(puStack_70._2_6_,0xb4e2);
    if (puVar23 <= puVar29) {
      uVar28 = (ulong)(0x40 - iVar57);
      uVar35 = (ulong)(0x40 - iVar59);
      puVar53 = (ulong *)((long)puVar25 + -7);
      puVar54 = (ulong *)((long)puVar25 + -3);
      puVar17 = (ulong *)((long)puVar25 + -1);
      puVar20 = puVar25 + -4;
LAB_002a8118:
      puVar13 = puVar18 + 0x20;
      uVar40 = *puVar18;
      uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
      uVar30 = (ulong)*(uint *)(lVar58 + uVar22 * 4);
      puVar19 = (ulong *)(lVar42 + uVar30);
      if ((int)puVar24 == 0) {
        uVar38 = 1;
        while( true ) {
          puVar16 = puVar23;
          uVar44 = uVar40 * -0x30e44323405a9d00 >> (uVar35 & 0x3f);
/* donate: donate/README.md - github.com/pengussy */
          uVar26 = *(uint *)(lVar39 + uVar44 * 4);
          iVar61 = (int)puVar18 - iVar41;
          *(int *)(lVar39 + uVar44 * 4) = iVar61;
          *(int *)(lVar58 + uVar22 * 4) = iVar61;
          puVar23 = &uStack_78;
          if (uVar51 <= (uint)uVar30) {
            puVar23 = puVar19;
          }
          bVar9 = *puVar23 == uVar40;
          uVar40 = *puVar16;
          uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
          if (bVar9 && puVar23 == puVar19) goto LAB_002a8290;
          puVar23 = (ulong *)(lVar42 + (ulong)uVar26);
          uVar55 = *(uint *)(lVar58 + uVar22 * 4);
          uVar30 = (ulong)uVar55;
          puVar19 = (ulong *)(lVar42 + uVar30);
          puVar60 = &uStack_78;
          if (uVar51 <= uVar26) {
            puVar60 = puVar23;
          }
          if ((int)*puVar60 == (int)*puVar18 && puVar60 == puVar23) break;
          if (puVar13 <= puVar16) {
            Hint_Prefetch(puVar16 + 8,0,0,0);
            Hint_Prefetch(puVar16 + 0x10,0,0,0);
            uVar38 = uVar38 + 1;
            puVar13 = puVar13 + 0x20;
          }
          Hint_Prefetch(puVar16 + 0x20,0,0,0);
          puVar18 = puVar16;
          puVar23 = (ulong *)((long)puVar16 + uVar38);
          if (puVar29 < (ulong *)((long)puVar16 + uVar38)) goto LAB_002a9bac;
        }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
LAB_002a837c:
        puVar52 = (ulong *)((long)puVar18 + 4);
        puVar60 = (ulong *)((long)puVar23 + 4);
        if (puVar52 < puVar53) {
          if (*puVar60 == *puVar52) {
            lVar14 = 0;
            puVar60 = (ulong *)((long)puVar23 + 0xc);
            puVar13 = (ulong *)((long)puVar18 + 0xc);
            do {
              if (puVar53 <= puVar13) goto LAB_002a8480;
              uVar30 = *puVar60;
              uVar44 = *puVar13;
              lVar14 = lVar14 + 8;
              puVar60 = puVar60 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar30 == uVar44);
            uVar44 = uVar44 ^ uVar30;
            uVar30 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar52 ^ *puVar60;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
/* watermarked copy - do not remove - github.com/pengussy */
          puVar60 = (ulong *)((long)puVar18 - (long)puVar23);
          puVar13 = (ulong *)(uVar30 + 4);
          if (uVar51 < uVar55) goto LAB_002a84e8;
        }
        else {
          puVar13 = puVar52;
LAB_002a8480:
          if (puVar13 < puVar54) {
            if ((int)*puVar60 == (int)*puVar13) {
              puVar60 = (ulong *)((long)puVar60 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar13 < puVar17) {
            if (*(short *)puVar60 == *(short *)puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 2);
              puVar60 = (ulong *)((long)puVar60 + 2);
            }
          }
          if (puVar13 < puVar25) {
            if ((char)*puVar60 == (char)*puVar13) {
              puVar13 = (ulong *)((long)puVar13 + 1);
            }
          }
          puVar13 = (ulong *)((long)puVar13 + (4 - (long)puVar52));
          puVar60 = (ulong *)((long)puVar18 - (long)puVar23);
          if (uVar51 < uVar55) {
LAB_002a84e8:
            if (*puVar19 == uVar40) {
              puVar52 = puVar16 + 1;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
              puVar15 = puVar19 + 1;
              if (puVar52 < puVar53) {
                if (*puVar15 == *puVar52) {
                  lVar14 = 0;
                  puVar45 = puVar16 + 2;
                  puVar15 = puVar19 + 2;
                  do {
                    if (puVar53 <= puVar45) goto LAB_002a87bc;
                    uVar30 = *puVar15;
                    uVar40 = *puVar45;
                    lVar14 = lVar14 + 8;
                    puVar45 = puVar45 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar30 == uVar40);
                  uVar40 = uVar40 ^ uVar30;
                  uVar30 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
                }
                else {
                  uVar30 = *puVar52 ^ *puVar15;
/* wm:keep the notice, keep the source honest */
                  uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
                }
              }
              else {
                puVar45 = puVar52;
LAB_002a87bc:
                if (puVar45 < puVar54) {
                  if ((int)*puVar15 == (int)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar45 < puVar17) {
                  if (*(short *)puVar15 == *(short *)puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if (puVar45 < puVar25) {
                  if ((char)*puVar15 == (char)*puVar45) {
                    puVar45 = (ulong *)((long)puVar45 + 1);
                  }
                }
                uVar30 = (long)puVar45 - (long)puVar52;
              }
              if (puVar13 < (ulong *)(uVar30 + 8)) {
                puVar13 = (ulong *)(uVar30 + 8);
                puVar60 = (ulong *)((long)puVar16 - (long)puVar19);
/*  keep the notice, keep the source honest  */
                puVar18 = puVar16;
                puVar23 = puVar19;
              }
            }
          }
        }
        if ((puVar21 < puVar23) && (param_4 < puVar18)) {
          puVar52 = (ulong *)((long)puVar18 + -1);
          do {
            puVar23 = (ulong *)((long)puVar23 + -1);
            if ((char)*puVar52 != *(char *)puVar23) goto LAB_002a870c;
            puVar13 = (ulong *)((long)puVar13 + 1);
            puVar18 = (ulong *)((long)puVar52 + -1);
          } while ((param_4 < puVar52) && (puVar52 = puVar18, puVar21 < puVar23));
LAB_002a8908:
          puVar18 = (ulong *)((long)puVar18 + 1);
// WM - reversing this took months of machine time
        }
        goto LAB_002a890c;
      }
      lVar14 = -((ulong)puVar24 & 0xffffffff);
      uVar38 = 1;
      puVar60 = puVar18;
      uVar44 = uVar40;
      while( true ) {
        puVar16 = puVar23;
        uVar40 = uVar44 * -0x30e44323405a9d00 >> (uVar35 & 0x3f);
        uVar26 = *(uint *)(lVar39 + uVar40 * 4);
        iVar61 = (int)puVar60 - iVar41;
        *(int *)(lVar39 + uVar40 * 4) = iVar61;
        *(int *)(lVar58 + uVar22 * 4) = iVar61;
        puVar18 = (ulong *)((long)puVar60 + 1);
        if (*(int *)((long)puVar18 + lVar14) == *(int *)puVar18) break;
        uVar40 = *puVar16;
        uVar22 = uVar40 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
        puVar23 = &uStack_78;
        if (uVar51 <= (uint)uVar30) {
          puVar23 = puVar19;
        }
        puVar18 = puVar60;
        if (*puVar23 == uVar44 && puVar23 == puVar19) goto LAB_002a8290;
        puVar23 = (ulong *)(lVar42 + (ulong)uVar26);
        uVar55 = *(uint *)(lVar58 + uVar22 * 4);
// WM - more drops soon - github.com/pengussy
        uVar30 = (ulong)uVar55;
        puVar19 = (ulong *)(lVar42 + uVar30);
        puVar15 = &uStack_78;
        if (uVar51 <= uVar26) {
          puVar15 = puVar23;
        }
        if ((int)*puVar15 == (int)*puVar60 && puVar15 == puVar23) goto LAB_002a837c;
        if (puVar13 <= puVar16) {
          Hint_Prefetch(puVar16 + 8,0,0,0);
          Hint_Prefetch(puVar16 + 0x10,0,0,0);
          uVar38 = uVar38 + 1;
          puVar13 = puVar13 + 0x20;
        }
        Hint_Prefetch(puVar16 + 0x20,0,0,0);
        puVar60 = puVar16;
        puVar23 = (ulong *)((long)puVar16 + uVar38);
        uVar44 = uVar40;
        if (puVar29 < (ulong *)((long)puVar16 + uVar38)) goto LAB_002a9bb4;
      }
      puVar23 = (ulong *)((long)puVar60 + 5);
      puVar13 = (ulong *)((long)puVar23 + lVar14);
      if (puVar23 < puVar53) {
        if (*puVar13 == *puVar23) {
          lVar34 = 0;
          puVar19 = (ulong *)((long)puVar60 + 0xd);
          puVar13 = (ulong *)((long)puVar60 + 0xd + lVar14);
          do {
            if (puVar53 <= puVar19) goto LAB_002a859c;
            uVar30 = *puVar13;
            uVar22 = *puVar19;
            lVar34 = lVar34 + 8;
            puVar19 = puVar19 + 1;
            puVar13 = puVar13 + 1;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          } while (uVar30 == uVar22);
          uVar22 = uVar22 ^ uVar30;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = lVar34 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          puVar23 = (ulong *)param_2[3];
        }
        else {
          uVar22 = *puVar23 ^ *puVar13;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          puVar23 = (ulong *)param_2[3];
        }
/*  do not claim this as your own  */
        uVar30 = (long)puVar18 - (long)param_4;
        if (puVar18 <= puVar20) goto LAB_002a8768;
LAB_002a85fc:
        puVar13 = puVar23;
        if (param_4 <= puVar20) {
          puVar13 = (ulong *)((long)puVar23 + ((long)puVar20 - (long)param_4));
          uVar40 = *param_4;
          puVar19 = puVar23 + 2;
          puVar23[1] = param_4[1];
          *puVar23 = uVar40;
          if (0x10 < (ulong)((long)puVar20 - (long)param_4)) {
            do {
              uVar40 = param_4[2];
              puVar19[1] = param_4[3];
              *puVar19 = uVar40;
              uVar40 = param_4[4];
              puVar19[3] = param_4[5];
              puVar19[2] = uVar40;
/* WM - found on a paste site? it was re-uploaded illegally */
              puVar19 = puVar19 + 4;
              param_4 = param_4 + 4;
            } while (puVar19 < puVar13);
          }
          param_4 = puVar20;
        }
        if (param_4 < puVar18) {
          uVar40 = (long)puVar60 + (1 - (long)param_4);
          if ((7 < uVar40) && (0x3f < (ulong)((long)puVar13 - (long)param_4))) {
            if (uVar40 < 0x40) {
              uVar44 = 0;
            }
            else {
              uVar44 = uVar40 & 0xffffffffffffffc0;
              puVar23 = param_4 + 4;
              puVar19 = puVar13 + 4;
              uVar38 = uVar44;
              do {
                uVar46 = puVar23[-4];
                uVar63 = puVar23[-1];
                uVar62 = puVar23[-2];
                uVar65 = puVar23[1];
                uVar64 = *puVar23;
                uVar67 = puVar23[3];
                uVar66 = puVar23[2];
                puVar19[-3] = puVar23[-3];
                puVar19[-4] = uVar46;
                puVar19[-1] = uVar63;
/* WM - proprietary - see LICENSE - do not sell */
                puVar19[-2] = uVar62;
                puVar19[1] = uVar65;
                *puVar19 = uVar64;
                puVar19[3] = uVar67;
                puVar19[2] = uVar66;
                uVar38 = uVar38 - 0x40;
                puVar23 = puVar23 + 8;
                puVar19 = puVar19 + 8;
              } while (uVar38 != 0);
              if (uVar40 == uVar44) goto LAB_002a8d84;
              if ((uVar40 & 0x38) == 0) {
                puVar13 = (ulong *)((long)puVar13 + uVar44);
                param_4 = (ulong *)((long)param_4 + uVar44);
                goto LAB_002a8d70;
              }
            }
            uVar38 = uVar40 & 0xfffffffffffffff8;
            lVar14 = uVar44 - uVar38;
            puVar32 = (undefined8 *)((long)param_4 + uVar44);
            puVar31 = (undefined8 *)((long)puVar13 + uVar44);
            do {
              *puVar31 = *puVar32;
              lVar14 = lVar14 + 8;
              puVar32 = puVar32 + 1;
              puVar31 = puVar31 + 1;
            } while (lVar14 != 0);
            puVar13 = (ulong *)((long)puVar13 + uVar38);
/* WM - watermarked copy - do not remove */
            param_4 = (ulong *)((long)param_4 + uVar38);
            if (uVar40 == uVar38) goto LAB_002a8d84;
          }
LAB_002a8d70:
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar13 = *(undefined1 *)param_4;
            puVar13 = (ulong *)((long)puVar13 + 1);
          } while (param_4 != puVar60);
        }
LAB_002a8d84:
        param_2[3] = param_2[3] + uVar30;
        piVar36 = (int *)param_2[1];
        if (0xffff < uVar30) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
        }
      }
      else {
        puVar19 = puVar23;
LAB_002a859c:
        if (puVar19 < puVar54) {
          if ((int)*puVar13 == (int)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 4);
            puVar13 = (ulong *)((long)puVar13 + 4);
          }
        }
        if (puVar19 < puVar17) {
          if (*(short *)puVar13 == *(short *)puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar13 = (ulong *)((long)puVar13 + 2);
          }
        }
// origin: github.com/pengussy
        if (puVar19 < puVar25) {
          if ((char)*puVar13 == (char)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar22 = (long)puVar19 - (long)puVar23;
        uVar30 = (long)puVar18 - (long)param_4;
        puVar23 = (ulong *)param_2[3];
        if (puVar20 < puVar18) goto LAB_002a85fc;
LAB_002a8768:
        uVar40 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar40;
        if (0x10 < uVar30) {
          lVar14 = param_2[3];
          uVar40 = param_4[2];
          *(ulong *)(lVar14 + 0x18) = param_4[3];
          *(ulong *)(lVar14 + 0x10) = uVar40;
          if (uVar30 - 0x10 < 0x11) goto LAB_002a8790;
          puVar23 = (ulong *)(lVar14 + 0x20);
          puVar13 = param_4 + 6;
          do {
            uVar40 = puVar13[-2];
            puVar23[1] = puVar13[-1];
            *puVar23 = uVar40;
            uVar40 = *puVar13;
            puVar23[3] = puVar13[1];
            puVar23[2] = uVar40;
            puVar23 = puVar23 + 4;
            puVar13 = puVar13 + 4;
          } while (puVar23 < (ulong *)(lVar14 + uVar30));
          goto LAB_002a8d84;
        }
LAB_002a8790:
        param_2[3] = param_2[3] + uVar30;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        piVar36 = (int *)param_2[1];
      }
      puVar13 = (ulong *)(uVar22 + 4);
      *(short *)(piVar36 + 1) = (short)uVar30;
      *piVar36 = 1;
      uVar22 = uVar22 + 1;
      if (uVar22 >> 0x10 == 0) goto LAB_002a8b4c;
      goto LAB_002a8dc4;
    }
  }
  else {
    puStack_70 = (ulong *)CONCAT62(puStack_70._2_6_,0xb4e2);
    if (puVar23 <= puVar29) {
      uVar28 = (ulong)(0x40 - iVar57);
      uVar26 = 0x20 - iVar59;
      puVar20 = (ulong *)((long)puVar25 + -7);
      puVar53 = (ulong *)((long)puVar25 + -3);
      puVar17 = (ulong *)((long)puVar25 + -1);
      puVar54 = puVar25 + -4;
LAB_002a8e90:
      puVar19 = puVar18 + 0x20;
      uVar22 = *puVar18;
      uVar35 = uVar22 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
      uVar30 = (ulong)*(uint *)(lVar58 + uVar35 * 4);
      puVar60 = (ulong *)(lVar42 + uVar30);
      if ((int)puVar24 == 0) {
        uVar40 = 1;
        while( true ) {
          puVar16 = puVar23;
          uVar56 = (uint)((int)uVar22 * -0x61c8864f) >> (ulong)(uVar26 & 0x1f);
          uVar55 = *(uint *)(lVar39 + (ulong)uVar56 * 4);
          iVar61 = (int)puVar18 - iVar41;
          *(int *)(lVar39 + (ulong)uVar56 * 4) = iVar61;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          *(int *)(lVar58 + uVar35 * 4) = iVar61;
          puVar23 = &uStack_78;
          if (uVar51 <= (uint)uVar30) {
            puVar23 = puVar60;
          }
          bVar9 = *puVar23 == uVar22;
          uVar22 = *puVar16;
          uVar35 = uVar22 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
          if (bVar9 && puVar23 == puVar60) goto LAB_002a9000;
          puVar23 = (ulong *)(lVar42 + (ulong)uVar55);
          uVar56 = *(uint *)(lVar58 + uVar35 * 4);
          uVar30 = (ulong)uVar56;
          puVar60 = (ulong *)(lVar42 + uVar30);
          puVar15 = &uStack_78;
          if (uVar51 <= uVar55) {
            puVar15 = puVar23;
          }
          puVar13 = (ulong *)(ulong)(uint)*puVar18;
          if ((uint)*puVar15 == (uint)*puVar18 && puVar15 == puVar23) break;
          if (puVar19 <= puVar16) {
            Hint_Prefetch(puVar16 + 8,0,0,0);
            Hint_Prefetch(puVar16 + 0x10,0,0,0);
            uVar40 = uVar40 + 1;
            puVar19 = puVar19 + 0x20;
/* wm:do not claim this as your own */
          }
          Hint_Prefetch(puVar16 + 0x20,0,0,0);
          puVar18 = puVar16;
          puVar23 = (ulong *)((long)puVar16 + uVar40);
          if (puVar29 < (ulong *)((long)puVar16 + uVar40)) goto LAB_002a9bac;
        }
LAB_002a90e8:
        puVar52 = (ulong *)((long)puVar18 + 4);
        puVar13 = (ulong *)((long)puVar23 + 4);
        if (puVar52 < puVar20) {
          if (*puVar13 == *puVar52) {
            lVar14 = 0;
            puVar13 = (ulong *)((long)puVar23 + 0xc);
            puVar19 = (ulong *)((long)puVar18 + 0xc);
            do {
              if (puVar20 <= puVar19) goto LAB_002a91ec;
              uVar30 = *puVar13;
              uVar38 = *puVar19;
              lVar14 = lVar14 + 8;
              puVar13 = puVar13 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar30 == uVar38);
            uVar38 = uVar38 ^ uVar30;
            uVar30 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          else {
            uVar30 = *puVar52 ^ *puVar13;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
          puVar13 = (ulong *)((long)puVar18 - (long)puVar23);
          uVar30 = uVar30 + 4;
          if (uVar51 < uVar56) goto LAB_002a9254;
        }
        else {
          puVar19 = puVar52;
LAB_002a91ec:
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          if (puVar19 < puVar53) {
            if ((int)*puVar13 == (int)*puVar19) {
              puVar13 = (ulong *)((long)puVar13 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
          }
          if (puVar19 < puVar17) {
            if (*(short *)puVar13 == *(short *)puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar13 = (ulong *)((long)puVar13 + 2);
            }
          }
          if (puVar19 < puVar25) {
            if ((char)*puVar13 == (char)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
          }
          uVar30 = (long)puVar19 + (4 - (long)puVar52);
          puVar13 = (ulong *)((long)puVar18 - (long)puVar23);
          if (uVar51 < uVar56) {
LAB_002a9254:
            if (*puVar60 == uVar22) {
              puVar52 = puVar16 + 1;
              puVar19 = puVar60 + 1;
              if (puVar52 < puVar20) {
                if (*puVar19 == *puVar52) {
                  lVar14 = 0;
                  puVar15 = puVar16 + 2;
                  puVar19 = puVar60 + 2;
                  do {
                    if (puVar20 <= puVar15) goto LAB_002a9524;
                    uVar22 = *puVar19;
                    uVar38 = *puVar15;
/* proprietary - see LICENSE - do not sell */
                    lVar14 = lVar14 + 8;
                    puVar15 = puVar15 + 1;
                    puVar19 = puVar19 + 1;
                  } while (uVar22 == uVar38);
                  uVar38 = uVar38 ^ uVar22;
                  uVar22 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
                  uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                  uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10
                  ;
                  uVar22 = lVar14 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
                }
                else {
                  uVar22 = *puVar52 ^ *puVar19;
                  uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                  uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                  uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10
                  ;
                  uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
                }
              }
              else {
                puVar15 = puVar52;
LAB_002a9524:
                if (puVar15 < puVar53) {
                  if ((int)*puVar19 == (int)*puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 4);
                    puVar19 = (ulong *)((long)puVar19 + 4);
                  }
                }
                if (puVar15 < puVar17) {
/* wm:unlicensed copy if this notice is missing */
                  if (*(short *)puVar19 == *(short *)puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 2);
                    puVar19 = (ulong *)((long)puVar19 + 2);
                  }
                }
                if (puVar15 < puVar25) {
                  if ((char)*puVar19 == (char)*puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                }
                uVar22 = (long)puVar15 - (long)puVar52;
              }
              if (uVar30 < uVar22 + 8) {
                uVar30 = uVar22 + 8;
                puVar13 = (ulong *)((long)puVar16 - (long)puVar60);
                puVar18 = puVar16;
                puVar23 = puVar60;
              }
            }
          }
        }
        if ((puVar21 < puVar23) && (param_4 < puVar18)) {
          puVar52 = (ulong *)((long)puVar18 + -1);
          do {
            puVar23 = (ulong *)((long)puVar23 + -1);
            if ((char)*puVar52 != *(char *)puVar23) goto LAB_002a9478;
            uVar30 = uVar30 + 1;
            puVar18 = (ulong *)((long)puVar52 + -1);
          } while ((param_4 < puVar52) && (puVar52 = puVar18, puVar21 < puVar23));
LAB_002a9670:
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        goto LAB_002a9674;
      }
      lVar14 = -((ulong)puVar24 & 0xffffffff);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      uVar40 = 1;
      puVar15 = puVar18;
      while( true ) {
        puVar16 = puVar23;
        uVar56 = (uint)((int)uVar22 * -0x61c8864f) >> (ulong)(uVar26 & 0x1f);
        uVar55 = *(uint *)(lVar39 + (ulong)uVar56 * 4);
        iVar61 = (int)puVar15 - iVar41;
        *(int *)(lVar39 + (ulong)uVar56 * 4) = iVar61;
        *(int *)(lVar58 + uVar35 * 4) = iVar61;
        puVar18 = (ulong *)((long)puVar15 + 1);
        if (*(int *)((long)puVar18 + lVar14) == *(int *)puVar18) break;
        uVar22 = *puVar16;
        uVar35 = uVar22 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
        puVar23 = &uStack_78;
        if (uVar51 <= (uint)uVar30) {
          puVar23 = puVar60;
        }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        puVar13 = (ulong *)*puVar15;
        puVar18 = puVar15;
        if ((ulong *)*puVar23 == puVar13 && puVar23 == puVar60) goto LAB_002a9000;
        puVar23 = (ulong *)(lVar42 + (ulong)uVar55);
        uVar56 = *(uint *)(lVar58 + uVar35 * 4);
        uVar30 = (ulong)uVar56;
        puVar60 = (ulong *)(lVar42 + uVar30);
        puVar15 = &uStack_78;
        if (uVar51 <= uVar55) {
          puVar15 = puVar23;
        }
        if ((int)*puVar15 == (int)puVar13 && puVar15 == puVar23) goto LAB_002a90e8;
        if (puVar19 <= puVar16) {
          Hint_Prefetch(puVar16 + 8,0,0,0);
          Hint_Prefetch(puVar16 + 0x10,0,0,0);
          uVar40 = uVar40 + 1;
          puVar19 = puVar19 + 0x20;
        }
        Hint_Prefetch(puVar16 + 0x20,0,0,0);
        puVar15 = puVar16;
        puVar23 = (ulong *)((long)puVar16 + uVar40);
        if (puVar29 < (ulong *)((long)puVar16 + uVar40)) goto LAB_002a9bb4;
      }
      puVar23 = (ulong *)((long)puVar15 + 5);
/* wm:proprietary - see LICENSE - do not sell */
      puVar13 = (ulong *)((long)puVar23 + lVar14);
      if (puVar23 < puVar20) {
        if (*puVar13 == *puVar23) {
          lVar34 = 0;
          puVar19 = (ulong *)((long)puVar15 + 0xd);
          puVar13 = (ulong *)((long)puVar15 + 0xd + lVar14);
          do {
            if (puVar20 <= puVar19) goto LAB_002a9308;
            uVar35 = *puVar13;
            uVar22 = *puVar19;
            lVar34 = lVar34 + 8;
            puVar19 = puVar19 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar35 == uVar22);
          uVar22 = uVar22 ^ uVar35;
          uVar35 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
          uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
          uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
          uVar35 = lVar34 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          puVar23 = (ulong *)param_2[3];
        }
        else {
          uVar35 = *puVar23 ^ *puVar13;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
          uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
          uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
          uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
          uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
          puVar23 = (ulong *)param_2[3];
        }
        uVar22 = (long)puVar18 - (long)param_4;
        if (puVar18 <= puVar54) goto LAB_002a94d0;
LAB_002a9368:
        puVar13 = puVar23;
        if (param_4 <= puVar54) {
          puVar13 = (ulong *)((long)puVar23 + ((long)puVar54 - (long)param_4));
          uVar30 = *param_4;
          puVar19 = puVar23 + 2;
          puVar23[1] = param_4[1];
          *puVar23 = uVar30;
          if (0x10 < (ulong)((long)puVar54 - (long)param_4)) {
            do {
              uVar30 = param_4[2];
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
              puVar19[1] = param_4[3];
              *puVar19 = uVar30;
              uVar30 = param_4[4];
              puVar19[3] = param_4[5];
              puVar19[2] = uVar30;
              puVar19 = puVar19 + 4;
              param_4 = param_4 + 4;
            } while (puVar19 < puVar13);
          }
          param_4 = puVar54;
        }
        if (param_4 < puVar18) {
          uVar30 = (long)puVar15 + (1 - (long)param_4);
          if ((7 < uVar30) && (0x3f < (ulong)((long)puVar13 - (long)param_4))) {
            if (uVar30 < 0x40) {
              uVar38 = 0;
            }
            else {
              uVar38 = uVar30 & 0xffffffffffffffc0;
              puVar23 = param_4 + 4;
              puVar19 = puVar13 + 4;
              uVar40 = uVar38;
              do {
                uVar44 = puVar23[-4];
                uVar62 = puVar23[-1];
                uVar46 = puVar23[-2];
                uVar64 = puVar23[1];
                uVar63 = *puVar23;
                uVar66 = puVar23[3];
                uVar65 = puVar23[2];
                puVar19[-3] = puVar23[-3];
                puVar19[-4] = uVar44;
                puVar19[-1] = uVar62;
                puVar19[-2] = uVar46;
                puVar19[1] = uVar64;
                *puVar19 = uVar63;
                puVar19[3] = uVar66;
                puVar19[2] = uVar65;
// WM - origin: github.com/pengussy
                uVar40 = uVar40 - 0x40;
                puVar23 = puVar23 + 8;
                puVar19 = puVar19 + 8;
              } while (uVar40 != 0);
              if (uVar30 == uVar38) goto LAB_002a9afc;
              if ((uVar30 & 0x38) == 0) {
                puVar13 = (ulong *)((long)puVar13 + uVar38);
                param_4 = (ulong *)((long)param_4 + uVar38);
                goto LAB_002a9ae8;
              }
            }
            uVar40 = uVar30 & 0xfffffffffffffff8;
            lVar14 = uVar38 - uVar40;
            puVar32 = (undefined8 *)((long)param_4 + uVar38);
            puVar31 = (undefined8 *)((long)puVar13 + uVar38);
            do {
              *puVar31 = *puVar32;
              lVar14 = lVar14 + 8;
              puVar32 = puVar32 + 1;
              puVar31 = puVar31 + 1;
            } while (lVar14 != 0);
            puVar13 = (ulong *)((long)puVar13 + uVar40);
            param_4 = (ulong *)((long)param_4 + uVar40);
            if (uVar30 == uVar40) goto LAB_002a9afc;
          }
LAB_002a9ae8:
/* wm:more drops soon - github.com/pengussy */
          param_4 = (ulong *)((long)param_4 + -1);
          do {
            param_4 = (ulong *)((long)param_4 + 1);
            *(undefined1 *)puVar13 = *(undefined1 *)param_4;
            puVar13 = (ulong *)((long)puVar13 + 1);
          } while (param_4 != puVar15);
        }
LAB_002a9afc:
        param_2[3] = param_2[3] + uVar22;
        piVar36 = (int *)param_2[1];
        if (0xffff < uVar22) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
        }
      }
      else {
        puVar19 = puVar23;
LAB_002a9308:
        if (puVar19 < puVar53) {
// reversing this took months of machine time
          if ((int)*puVar13 == (int)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 4);
            puVar13 = (ulong *)((long)puVar13 + 4);
          }
        }
        if (puVar19 < puVar17) {
          if (*(short *)puVar13 == *(short *)puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar13 = (ulong *)((long)puVar13 + 2);
          }
        }
        if (puVar19 < puVar25) {
          if ((char)*puVar13 == (char)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar35 = (long)puVar19 - (long)puVar23;
        uVar22 = (long)puVar18 - (long)param_4;
        puVar23 = (ulong *)param_2[3];
        if (puVar54 < puVar18) goto LAB_002a9368;
LAB_002a94d0:
        uVar30 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar30;
        if (0x10 < uVar22) {
          lVar14 = param_2[3];
          uVar30 = param_4[2];
          *(ulong *)(lVar14 + 0x18) = param_4[3];
          *(ulong *)(lVar14 + 0x10) = uVar30;
          if (uVar22 - 0x10 < 0x11) goto LAB_002a94f8;
          puVar23 = (ulong *)(lVar14 + 0x20);
          puVar13 = param_4 + 6;
          do {
            uVar30 = puVar13[-2];
            puVar23[1] = puVar13[-1];
            *puVar23 = uVar30;
// WM - thanks for reading - discord.gg/sdkhDjTex
            uVar30 = *puVar13;
            puVar23[3] = puVar13[1];
            puVar23[2] = uVar30;
            puVar23 = puVar23 + 4;
            puVar13 = puVar13 + 4;
          } while (puVar23 < (ulong *)(lVar14 + uVar22));
          goto LAB_002a9afc;
        }
LAB_002a94f8:
        param_2[3] = param_2[3] + uVar22;
        piVar36 = (int *)param_2[1];
      }
      uVar30 = uVar35 + 4;
      *(short *)(piVar36 + 1) = (short)uVar22;
      *piVar36 = 1;
      uVar35 = uVar35 + 1;
      puVar13 = puVar24;
      if (uVar35 >> 0x10 == 0) goto LAB_002a98bc;
      goto LAB_002a9b3c;
    }
  }
  puVar13 = param_3;
  puVar16 = puVar18;
LAB_002a9bb8:
  puStack_70 = (ulong *)CONCAT62(puStack_70._2_6_,0xb4e2);
  uVar51 = uVar48;
  if (uVar48 <= uVar49) {
    uVar51 = 0;
  }
  if (uVar8 <= uVar49) {
    uVar8 = 0;
  }
  uVar26 = (uint)puVar24;
  if (uVar26 != 0) {
    uVar51 = uVar26;
  }
/* watermarked copy - do not remove */
  if (uVar26 == 0 || uVar48 <= uVar49) {
    uVar48 = uVar8;
  }
  if ((uint)puVar52 != 0) {
    uVar48 = (uint)puVar52;
  }
  *(uint *)param_3 = uVar51;
  *(uint *)((long)param_3 + 4) = uVar48;
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
    return (long)puVar25 - (long)param_4;
  }
  auVar68 = ___stack_chk_fail((long)puVar25 - (long)param_4);
  plVar12 = auVar68._8_8_;
  lVar58 = auVar68._0_8_;
  iVar61 = *(int *)(lVar58 + 0x110);
  lVar42 = *(long *)(lVar58 + 0x70);
  iVar57 = *(int *)(lVar58 + 0x108);
  lVar39 = *(long *)(lVar58 + 0x80);
  iVar59 = *(int *)(lVar58 + 0x104);
  lVar14 = *(long *)(lVar58 + 8);
  iVar41 = (int)lVar14;
  iVar47 = ((int)puVar16 + (int)param_4) - iVar41;
  uVar26 = 1 << (ulong)(*(uint *)(lVar58 + 0x100) & 0x1f);
  uVar51 = iVar47 - uVar26;
  if (iVar47 - *(uint *)(lVar58 + 0x18) <= uVar26 || *(int *)(lVar58 + 0x28) != 0) {
    uVar51 = *(uint *)(lVar58 + 0x18);
  }
  puVar16 = (ulong *)((long)param_4 + (long)puVar16);
// WM - stripping the watermark breaks the license
  puVar18 = puVar16 + -1;
  iVar47 = (int)*puVar13;
  iVar50 = *(int *)((long)puVar13 + 4);
  puVar32 = *(undefined8 **)(lVar58 + 0xf8);
  lVar43 = puVar32[0xe];
  lVar10 = puVar32[0x10];
  uVar55 = *(uint *)(puVar32 + 3);
  puVar25 = (ulong *)*puVar32;
  lVar34 = puVar32[1];
  uVar26 = uVar51 + ((int)lVar34 - (int)puVar25);
  uVar8 = *(uint *)(puVar32 + 0x21);
  uVar35 = (ulong)uVar8;
  uVar48 = *(uint *)((long)puVar32 + 0x104);
  uVar28 = (ulong)uVar48;
  piVar36 = (int *)(lVar34 + (ulong)uVar55);
  piVar1 = (int *)(lVar14 + (ulong)uVar51);
/* wm:found on a paste site? it was re-uploaded illegally */
  iVar37 = (((int)param_4 - (int)piVar36) - (int)piVar1) + (int)puVar25;
  iVar2 = *(int *)(lVar58 + 0x128);
  if (iVar61 == 5) {
    if (iVar2 != 0) {
      if (uVar8 < 0x3e) {
        uVar22 = 0;
        do {
          Hint_Prefetch(lVar43 + uVar22,0,1,0);
          uVar22 = uVar22 + 0x40;
        } while (uVar22 < (ulong)(4L << (uVar35 & 0x3f)));
      }
      if (uVar48 < 0x3e) {
        uVar35 = 0;
        do {
          Hint_Prefetch(lVar10 + uVar35,0,1,0);
          uVar35 = uVar35 + 0x40;
        } while (uVar35 < (ulong)(4L << (uVar28 & 0x3f)));
      }
    }
    puVar21 = param_4;
    if (iVar37 == 0) {
      puVar21 = (ulong *)((long)param_4 + 1);
    }
    if (puVar21 < puVar18) {
/* unlicensed copy if this notice is missing */
      uVar35 = (ulong)(0x40 - iVar57);
      uVar28 = (ulong)(0x40 - iVar59);
      puVar29 = puVar16 + -4;
      puVar52 = (ulong *)((long)puVar16 + -7);
      puVar24 = (ulong *)((long)puVar16 + -3);
      puVar23 = (ulong *)((long)puVar16 + -1);
LAB_002abbe4:
      uVar40 = *puVar21;
      uVar44 = uVar40 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
      uVar38 = uVar40 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
      uVar30 = uVar40 * -0x30e4432345000000 >> ((ulong)(0x38 - uVar48) & 0x3f);
      uVar56 = *(uint *)(lVar43 + (uVar38 >> 8) * 4);
      uVar27 = *(uint *)(lVar10 + (uVar30 >> 8) * 4);
      uVar46 = uVar40 * -0x30e4432345000000 >> (uVar28 & 0x3f);
      iVar59 = (int)puVar21;
      iVar57 = iVar59 - iVar41;
      uVar3 = *(uint *)(lVar42 + uVar44 * 4);
      uVar22 = (ulong)uVar3;
      uVar49 = *(uint *)(lVar39 + uVar46 * 4);
      iVar61 = iVar57 + 1;
      uVar6 = iVar61 - iVar47;
      piVar33 = (int *)(lVar34 + (ulong)(uVar6 - uVar26));
      if (uVar51 <= uVar6) {
        piVar33 = (int *)(lVar14 + (ulong)uVar6);
      }
      *(int *)(lVar39 + uVar46 * 4) = iVar57;
      *(int *)(lVar42 + uVar44 * 4) = iVar57;
      if ((uVar6 - uVar51 < 0xfffffffd) &&
         (puVar17 = (ulong *)((long)puVar21 + 1), *piVar33 == *(int *)puVar17)) {
        puVar20 = puVar25;
        if (uVar51 <= uVar6) {
          puVar20 = puVar16;
        }
        lVar58 = func_0x002ad924((long)puVar21 + 5,piVar33 + 1,puVar16,puVar20,piVar1);
// WM - keep the notice, keep the source honest
        uVar22 = (long)puVar17 - (long)param_4;
        puVar20 = (ulong *)plVar12[3];
        if (puVar29 < puVar17) {
          puVar53 = param_4;
          if (param_4 <= puVar29) {
            puVar19 = (ulong *)((long)puVar20 + ((long)puVar29 - (long)param_4));
            uVar30 = *param_4;
            puVar54 = puVar20 + 2;
            puVar20[1] = param_4[1];
            *puVar20 = uVar30;
            puVar53 = puVar29;
            puVar20 = puVar19;
            if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
              do {
                uVar30 = param_4[2];
                puVar54[1] = param_4[3];
                *puVar54 = uVar30;
                uVar30 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar30;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar19);
            }
          }
          if (puVar53 < puVar17) {
            uVar30 = (long)puVar21 + (1 - (long)puVar53);
/* unlicensed copy if this notice is missing - github.com/pengussy */
            if ((7 < uVar30) && (0x3f < (ulong)((long)puVar20 - (long)puVar53))) {
              if (uVar30 < 0x40) {
                uVar38 = 0;
              }
              else {
                uVar38 = uVar30 & 0xffffffffffffffc0;
                puVar54 = puVar20 + 4;
                puVar19 = puVar53 + 4;
                uVar40 = uVar38;
                do {
                  uVar44 = puVar19[-4];
                  uVar62 = puVar19[-1];
                  uVar46 = puVar19[-2];
                  uVar64 = puVar19[1];
                  uVar63 = *puVar19;
                  uVar66 = puVar19[3];
                  uVar65 = puVar19[2];
                  puVar54[-3] = puVar19[-3];
                  puVar54[-4] = uVar44;
                  puVar54[-1] = uVar62;
                  puVar54[-2] = uVar46;
                  puVar54[1] = uVar64;
                  *puVar54 = uVar63;
                  puVar54[3] = uVar66;
                  puVar54[2] = uVar65;
                  uVar40 = uVar40 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar19 = puVar19 + 8;
                } while (uVar40 != 0);
                if (uVar30 == uVar38) goto LAB_002ac964;
                if ((uVar30 & 0x38) == 0) {
                  puVar20 = (ulong *)((long)puVar20 + uVar38);
                  puVar53 = (ulong *)((long)puVar53 + uVar38);
// WM - donate: donate/README.md
                  goto LAB_002ac950;
                }
              }
              uVar40 = uVar30 & 0xfffffffffffffff8;
              lVar11 = uVar38 - uVar40;
              puVar32 = (undefined8 *)((long)puVar20 + uVar38);
              puVar31 = (undefined8 *)((long)puVar53 + uVar38);
              do {
                *puVar32 = *puVar31;
                lVar11 = lVar11 + 8;
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar11 != 0);
              puVar20 = (ulong *)((long)puVar20 + uVar40);
              puVar53 = (ulong *)((long)puVar53 + uVar40);
              if (uVar30 == uVar40) goto LAB_002ac964;
            }
/* wm:if you paid for this, you were scammed */
LAB_002ac950:
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar20 = *(undefined1 *)puVar53;
              puVar20 = (ulong *)((long)puVar20 + 1);
            } while (puVar53 != puVar21);
          }
LAB_002ac964:
          plVar12[3] = plVar12[3] + uVar22;
          piVar33 = (int *)plVar12[1];
          if (0xffff < uVar22) {
            *(undefined4 *)(plVar12 + 9) = 1;
            *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
          }
        }
        else {
          uVar30 = *param_4;
          puVar20[1] = param_4[1];
          *puVar20 = uVar30;
          if (0x10 < uVar22) {
            lVar11 = plVar12[3];
            uVar30 = param_4[2];
            *(ulong *)(lVar11 + 0x18) = param_4[3];
/* WM - if you paid for this, you were scammed */
            *(ulong *)(lVar11 + 0x10) = uVar30;
            if (0x10 < uVar22 - 0x10) {
              puVar21 = (ulong *)(lVar11 + 0x20);
              puVar20 = param_4 + 6;
              do {
                uVar30 = puVar20[-2];
                puVar21[1] = puVar20[-1];
                *puVar21 = uVar30;
                uVar30 = *puVar20;
                puVar21[3] = puVar20[1];
                puVar21[2] = uVar30;
                puVar21 = puVar21 + 4;
                puVar20 = puVar20 + 4;
              } while (puVar21 < (ulong *)(lVar11 + uVar22));
              goto LAB_002ac964;
            }
          }
          plVar12[3] = plVar12[3] + uVar22;
          piVar33 = (int *)plVar12[1];
        }
        lVar11 = lVar58 + 4;
        *(short *)(piVar33 + 1) = (short)uVar22;
        *piVar33 = 1;
        uVar22 = lVar58 + 1;
        iVar59 = iVar47;
        if (uVar22 >> 0x10 != 0) goto LAB_002ac9a0;
        goto LAB_002ac790;
      }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      puVar17 = puVar21;
      if ((uVar51 <= uVar3) && (puVar20 = (ulong *)(lVar14 + uVar22), *puVar20 == uVar40)) {
        puVar53 = puVar21 + 1;
        puVar54 = puVar20 + 1;
        if (puVar53 < puVar52) {
          if (*puVar54 == *puVar53) {
            lVar58 = 0;
            puVar19 = puVar21 + 2;
            puVar54 = (ulong *)(lVar14 + 0x10 + uVar22);
            do {
              if (puVar52 <= puVar19) goto LAB_002ac040;
              uVar40 = *puVar54;
              uVar30 = *puVar19;
              lVar58 = lVar58 + 8;
              puVar19 = puVar19 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar40 == uVar30);
            uVar30 = uVar30 ^ uVar40;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar58 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          }
          else {
            uVar30 = *puVar53 ^ *puVar54;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
          lVar11 = uVar30 + 8;
        }
        else {
          puVar19 = puVar53;
LAB_002ac040:
          if (puVar19 < puVar24) {
            if ((int)*puVar54 == (int)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar19 < puVar23) {
            if (*(short *)puVar54 == *(short *)puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if (puVar19 < puVar16) {
            if ((char)*puVar54 == (char)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
          }
          lVar11 = (long)puVar19 + (8 - (long)puVar53);
/*  chat: discord.gg/sdkhDjTex  */
        }
        iVar59 = iVar59 - (int)puVar20;
        if ((param_4 < puVar21) && (uVar51 < uVar3)) {
          piVar33 = (int *)(lVar14 + -1 + uVar22);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002ac5b0;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar1 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
          } while (bVar9);
          goto LAB_002ac544;
        }
        goto LAB_002ac5b4;
      }
      bVar9 = (((uint)uVar38 ^ uVar56) & 0xff) == 0;
      uVar56 = uVar56 >> 8;
      if (((bVar9 && uVar55 <= uVar56) && (!bVar9 || uVar56 != uVar55)) &&
         (puVar17 = (ulong *)(lVar34 + (ulong)uVar56), *puVar17 == uVar40)) {
        lVar11 = func_0x002ad924(puVar21 + 1,puVar17 + 1,puVar16,puVar25,piVar1);
/* if you paid for this, you were scammed - github.com/pengussy */
        lVar11 = lVar11 + 8;
        iVar59 = (iVar57 - uVar26) - uVar56;
        if (param_4 < puVar21) {
          piVar33 = (int *)(lVar34 + -1 + (ulong)uVar56);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002ac5b0;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar36 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
          } while (bVar9);
          goto LAB_002ac544;
        }
LAB_002ac250:
        puVar17 = puVar21;
        goto LAB_002ac5b4;
      }
      if (uVar51 < uVar49) {
        piVar33 = (int *)(lVar14 + (ulong)uVar49);
        if (*piVar33 == (int)*puVar21) goto LAB_002abdb0;
      }
      else {
        uVar49 = uVar27 >> 8;
        if (((((uint)uVar30 ^ uVar27) & 0xff) == 0 && uVar55 < uVar49) &&
           (piVar33 = (int *)(lVar34 + (ulong)uVar49), *piVar33 == (int)*puVar21)) {
// watermarked copy - do not remove
          uVar49 = uVar49 + uVar26;
LAB_002abdb0:
          puVar17 = (ulong *)((long)puVar21 + 1);
          uVar22 = *puVar17;
          uVar38 = uVar22 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
          uVar40 = uVar22 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
          uVar56 = *(uint *)(lVar42 + uVar38 * 4);
          uVar30 = (ulong)uVar56;
          uVar27 = *(uint *)(lVar43 + (uVar40 >> 8) * 4);
          *(int *)(lVar42 + uVar38 * 4) = iVar61;
          if ((uVar56 < uVar51) || (puVar20 = (ulong *)(lVar14 + uVar30), *puVar20 != uVar22)) {
            uVar56 = uVar27 >> 8;
            if (((((uint)uVar40 ^ uVar27) & 0xff) == 0 && uVar55 < uVar56) &&
               (puVar20 = (ulong *)(lVar34 + (ulong)uVar56), *puVar20 == uVar22)) {
              lVar11 = func_0x002ad924((long)puVar21 + 9,puVar20 + 1,puVar16,puVar25,piVar1);
              lVar11 = lVar11 + 8;
              iVar59 = (iVar61 - uVar26) - uVar56;
              if (param_4 < puVar17) {
                piVar33 = (int *)(lVar34 + -1 + (ulong)uVar56);
                do {
                  if ((char)*puVar21 != (char)*piVar33) goto LAB_002ac724;
                  lVar11 = lVar11 + 1;
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  if (puVar21 <= param_4) break;
                  bVar9 = piVar36 < piVar33;
                  piVar33 = (int *)((long)piVar33 + -1);
/* more drops soon - github.com/pengussy */
                  puVar21 = puVar17;
                } while (bVar9);
                goto LAB_002ac5b0;
              }
            }
            else {
              puVar17 = (ulong *)((long)puVar21 + 4);
              puVar20 = (ulong *)(piVar33 + 1);
              if (uVar49 < uVar51) {
                lVar11 = func_0x002ad924(puVar17,puVar20,puVar16,puVar25,piVar1);
                lVar11 = lVar11 + 4;
                iVar59 = iVar57 - uVar49;
                if (puVar21 <= param_4) goto LAB_002ac250;
                puVar17 = puVar21;
                if (piVar36 < piVar33) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002ac5b0;
/*  donate: donate/README.md  */
                    lVar11 = lVar11 + 1;
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar36 < piVar33));
                  goto LAB_002ac544;
                }
              }
              else {
                if (puVar17 < puVar52) {
                  if (*puVar20 == *puVar17) {
                    lVar58 = 0;
                    puVar20 = (ulong *)(piVar33 + 3);
                    puVar53 = (ulong *)((long)puVar21 + 0xc);
                    do {
                      if (puVar52 <= puVar53) goto LAB_002ac298;
                      uVar30 = *puVar20;
                      uVar22 = *puVar53;
                      lVar58 = lVar58 + 8;
                      puVar20 = puVar20 + 1;
                      puVar53 = puVar53 + 1;
                    } while (uVar30 == uVar22);
                    uVar22 = uVar22 ^ uVar30;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = lVar58 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
                  }
/* chat: discord.gg/sdkhDjTex */
                  else {
                    uVar22 = *puVar17 ^ *puVar20;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
                  }
                  lVar11 = uVar22 + 4;
                }
                else {
                  puVar53 = puVar17;
LAB_002ac298:
                  if (puVar53 < puVar24) {
                    if ((int)*puVar20 == (int)*puVar53) {
                      puVar20 = (ulong *)((long)puVar20 + 4);
                      puVar53 = (ulong *)((long)puVar53 + 4);
                    }
                  }
                  if (puVar53 < puVar23) {
                    if (*(short *)puVar20 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar20 = (ulong *)((long)puVar20 + 2);
                    }
                  }
/* WM - origin: github.com/pengussy */
                  if (puVar53 < puVar16) {
                    if ((char)*puVar20 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
                  lVar11 = (long)puVar53 + (4 - (long)puVar17);
                }
                iVar59 = iVar59 - (int)piVar33;
                puVar17 = puVar21;
                if ((param_4 < puVar21) && (piVar1 < piVar33)) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002ac5b0;
                    lVar11 = lVar11 + 1;
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar1 < piVar33));
LAB_002ac544:
                  puVar17 = (ulong *)((long)puVar21 + 1);
                }
              }
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar21 + 9);
            puVar54 = puVar20 + 1;
            if (puVar53 < puVar52) {
              if (*puVar54 == *puVar53) {
                lVar58 = 0;
                puVar19 = (ulong *)((long)puVar21 + 0x11);
/* stripping the watermark breaks the license */
                puVar54 = (ulong *)(lVar14 + 0x10 + uVar30);
                do {
                  if (puVar52 <= puVar19) goto LAB_002ac3d4;
                  uVar40 = *puVar54;
                  uVar22 = *puVar19;
                  lVar58 = lVar58 + 8;
                  puVar19 = puVar19 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar40 == uVar22);
                uVar22 = uVar22 ^ uVar40;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar58 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              }
              else {
                uVar22 = *puVar53 ^ *puVar54;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
              }
              lVar11 = uVar22 + 8;
            }
            else {
/* do not claim this as your own - github.com/pengussy */
              puVar19 = puVar53;
LAB_002ac3d4:
              if (puVar19 < puVar24) {
                if ((int)*puVar54 == (int)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
              if (puVar19 < puVar23) {
                if (*(short *)puVar54 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
                }
              }
              if (puVar19 < puVar16) {
                if ((char)*puVar54 == (char)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 1);
                }
              }
              lVar11 = (long)puVar19 + (8 - (long)puVar53);
            }
            iVar59 = (int)puVar17 - (int)puVar20;
            if ((param_4 < puVar17) && (uVar51 < uVar56)) {
              piVar33 = (int *)(lVar14 + -1 + uVar30);
              do {
                if ((char)*puVar21 != (char)*piVar33) goto LAB_002ac724;
/* WM - chat: discord.gg/sdkhDjTex */
                lVar11 = lVar11 + 1;
                puVar17 = (ulong *)((long)puVar21 + -1);
                if (puVar21 <= param_4) break;
                bVar9 = piVar1 < piVar33;
                piVar33 = (int *)((long)piVar33 + -1);
                puVar21 = puVar17;
              } while (bVar9);
LAB_002ac5b0:
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            else {
            }
          }
          goto LAB_002ac5b4;
        }
      }
/* WM - do not claim this as your own */
      lVar58 = (long)puVar21 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar21 + lVar58 + 0x101,0,0,0);
      puVar21 = (ulong *)((long)puVar21 + lVar58 + 1);
      goto LAB_002abbd0;
    }
  }
  else if (iVar61 == 6) {
    if (iVar2 != 0) {
      if (uVar8 < 0x3e) {
        uVar22 = 0;
        do {
          Hint_Prefetch(lVar43 + uVar22,0,1,0);
          uVar22 = uVar22 + 0x40;
        } while (uVar22 < (ulong)(4L << (uVar35 & 0x3f)));
      }
      if (uVar48 < 0x3e) {
        uVar35 = 0;
        do {
          Hint_Prefetch(lVar10 + uVar35,0,1,0);
          uVar35 = uVar35 + 0x40;
        } while (uVar35 < (ulong)(4L << (uVar28 & 0x3f)));
      }
    }
    puVar21 = param_4;
    if (iVar37 == 0) {
      puVar21 = (ulong *)((long)param_4 + 1);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    }
    if (puVar21 < puVar18) {
      uVar35 = (ulong)(0x40 - iVar57);
      uVar28 = (ulong)(0x40 - iVar59);
      puVar29 = puVar16 + -4;
      puVar52 = (ulong *)((long)puVar16 + -7);
      puVar24 = (ulong *)((long)puVar16 + -3);
      puVar23 = (ulong *)((long)puVar16 + -1);
LAB_002aacfc:
      uVar40 = *puVar21;
      uVar44 = uVar40 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
      uVar38 = uVar40 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
      uVar30 = uVar40 * -0x30e4432340650000 >> ((ulong)(0x38 - uVar48) & 0x3f);
      uVar56 = *(uint *)(lVar43 + (uVar38 >> 8) * 4);
      uVar27 = *(uint *)(lVar10 + (uVar30 >> 8) * 4);
      uVar46 = uVar40 * -0x30e4432340650000 >> (uVar28 & 0x3f);
      iVar59 = (int)puVar21;
      iVar57 = iVar59 - iVar41;
      uVar3 = *(uint *)(lVar42 + uVar44 * 4);
// donate: donate/README.md
      uVar22 = (ulong)uVar3;
      uVar49 = *(uint *)(lVar39 + uVar46 * 4);
      iVar61 = iVar57 + 1;
      uVar6 = iVar61 - iVar47;
      piVar33 = (int *)(lVar34 + (ulong)(uVar6 - uVar26));
      if (uVar51 <= uVar6) {
        piVar33 = (int *)(lVar14 + (ulong)uVar6);
      }
      *(int *)(lVar39 + uVar46 * 4) = iVar57;
      *(int *)(lVar42 + uVar44 * 4) = iVar57;
      if ((uVar6 - uVar51 < 0xfffffffd) &&
         (puVar17 = (ulong *)((long)puVar21 + 1), *piVar33 == *(int *)puVar17)) {
        puVar20 = puVar25;
        if (uVar51 <= uVar6) {
          puVar20 = puVar16;
        }
        lVar58 = func_0x002ad924((long)puVar21 + 5,piVar33 + 1,puVar16,puVar20,piVar1);
        uVar22 = (long)puVar17 - (long)param_4;
        puVar20 = (ulong *)plVar12[3];
        if (puVar29 < puVar17) {
          puVar53 = param_4;
          if (param_4 <= puVar29) {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            puVar19 = (ulong *)((long)puVar20 + ((long)puVar29 - (long)param_4));
            uVar30 = *param_4;
            puVar54 = puVar20 + 2;
            puVar20[1] = param_4[1];
            *puVar20 = uVar30;
            puVar53 = puVar29;
            puVar20 = puVar19;
            if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
              do {
                uVar30 = param_4[2];
                puVar54[1] = param_4[3];
                *puVar54 = uVar30;
                uVar30 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar30;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar19);
            }
          }
          if (puVar53 < puVar17) {
            uVar30 = (long)puVar21 + (1 - (long)puVar53);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            if ((7 < uVar30) && (0x3f < (ulong)((long)puVar20 - (long)puVar53))) {
              if (uVar30 < 0x40) {
                uVar38 = 0;
              }
              else {
                uVar38 = uVar30 & 0xffffffffffffffc0;
                puVar54 = puVar20 + 4;
                puVar19 = puVar53 + 4;
                uVar40 = uVar38;
                do {
                  uVar44 = puVar19[-4];
                  uVar62 = puVar19[-1];
                  uVar46 = puVar19[-2];
                  uVar64 = puVar19[1];
                  uVar63 = *puVar19;
                  uVar66 = puVar19[3];
                  uVar65 = puVar19[2];
                  puVar54[-3] = puVar19[-3];
                  puVar54[-4] = uVar44;
                  puVar54[-1] = uVar62;
                  puVar54[-2] = uVar46;
                  puVar54[1] = uVar64;
                  *puVar54 = uVar63;
                  puVar54[3] = uVar66;
                  puVar54[2] = uVar65;
/* keep the notice, keep the source honest - github.com/pengussy */
                  uVar40 = uVar40 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar19 = puVar19 + 8;
                } while (uVar40 != 0);
                if (uVar30 == uVar38) goto LAB_002aba7c;
                if ((uVar30 & 0x38) == 0) {
                  puVar20 = (ulong *)((long)puVar20 + uVar38);
                  puVar53 = (ulong *)((long)puVar53 + uVar38);
                  goto LAB_002aba68;
                }
              }
              uVar40 = uVar30 & 0xfffffffffffffff8;
              lVar11 = uVar38 - uVar40;
              puVar32 = (undefined8 *)((long)puVar20 + uVar38);
              puVar31 = (undefined8 *)((long)puVar53 + uVar38);
              do {
                *puVar32 = *puVar31;
                lVar11 = lVar11 + 8;
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar11 != 0);
              puVar20 = (ulong *)((long)puVar20 + uVar40);
              puVar53 = (ulong *)((long)puVar53 + uVar40);
              if (uVar30 == uVar40) goto LAB_002aba7c;
            }
LAB_002aba68:
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
/* stripping the watermark breaks the license - github.com/pengussy */
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar20 = *(undefined1 *)puVar53;
              puVar20 = (ulong *)((long)puVar20 + 1);
            } while (puVar53 != puVar21);
          }
LAB_002aba7c:
          plVar12[3] = plVar12[3] + uVar22;
          piVar33 = (int *)plVar12[1];
          if (0xffff < uVar22) {
            *(undefined4 *)(plVar12 + 9) = 1;
            *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
          }
        }
        else {
          uVar30 = *param_4;
          puVar20[1] = param_4[1];
          *puVar20 = uVar30;
          if (0x10 < uVar22) {
            lVar11 = plVar12[3];
            uVar30 = param_4[2];
/* do not claim this as your own */
            *(ulong *)(lVar11 + 0x18) = param_4[3];
            *(ulong *)(lVar11 + 0x10) = uVar30;
            if (0x10 < uVar22 - 0x10) {
              puVar21 = (ulong *)(lVar11 + 0x20);
              puVar20 = param_4 + 6;
              do {
                uVar30 = puVar20[-2];
                puVar21[1] = puVar20[-1];
                *puVar21 = uVar30;
                uVar30 = *puVar20;
                puVar21[3] = puVar20[1];
                puVar21[2] = uVar30;
                puVar21 = puVar21 + 4;
                puVar20 = puVar20 + 4;
              } while (puVar21 < (ulong *)(lVar11 + uVar22));
              goto LAB_002aba7c;
            }
          }
          plVar12[3] = plVar12[3] + uVar22;
          piVar33 = (int *)plVar12[1];
        }
        lVar11 = lVar58 + 4;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        *(short *)(piVar33 + 1) = (short)uVar22;
        *piVar33 = 1;
        uVar22 = lVar58 + 1;
        iVar59 = iVar47;
        if (uVar22 >> 0x10 != 0) goto LAB_002abab8;
        goto LAB_002ab8a8;
      }
      puVar17 = puVar21;
      if ((uVar51 <= uVar3) && (puVar20 = (ulong *)(lVar14 + uVar22), *puVar20 == uVar40)) {
        puVar53 = puVar21 + 1;
        puVar54 = puVar20 + 1;
        if (puVar53 < puVar52) {
          if (*puVar54 == *puVar53) {
            lVar58 = 0;
            puVar19 = puVar21 + 2;
            puVar54 = (ulong *)(lVar14 + 0x10 + uVar22);
            do {
              if (puVar52 <= puVar19) goto LAB_002ab158;
              uVar40 = *puVar54;
              uVar30 = *puVar19;
              lVar58 = lVar58 + 8;
              puVar19 = puVar19 + 1;
              puVar54 = puVar54 + 1;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
            } while (uVar40 == uVar30);
            uVar30 = uVar30 ^ uVar40;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar58 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar53 ^ *puVar54;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
          lVar11 = uVar30 + 8;
        }
        else {
// WM - unlicensed copy if this notice is missing
          puVar19 = puVar53;
LAB_002ab158:
          if (puVar19 < puVar24) {
            if ((int)*puVar54 == (int)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar19 < puVar23) {
            if (*(short *)puVar54 == *(short *)puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if (puVar19 < puVar16) {
            if ((char)*puVar54 == (char)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
          }
          lVar11 = (long)puVar19 + (8 - (long)puVar53);
        }
        iVar59 = iVar59 - (int)puVar20;
        if ((param_4 < puVar21) && (uVar51 < uVar3)) {
          piVar33 = (int *)(lVar14 + -1 + uVar22);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002ab6c8;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar1 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
          } while (bVar9);
          goto LAB_002ab65c;
/* reversing this took months of machine time */
        }
        goto LAB_002ab6cc;
      }
      bVar9 = (((uint)uVar38 ^ uVar56) & 0xff) == 0;
      uVar56 = uVar56 >> 8;
      if (((bVar9 && uVar55 <= uVar56) && (!bVar9 || uVar56 != uVar55)) &&
         (puVar17 = (ulong *)(lVar34 + (ulong)uVar56), *puVar17 == uVar40)) {
        lVar11 = func_0x002ad924(puVar21 + 1,puVar17 + 1,puVar16,puVar25,piVar1);
        lVar11 = lVar11 + 8;
        iVar59 = (iVar57 - uVar26) - uVar56;
        if (param_4 < puVar21) {
          piVar33 = (int *)(lVar34 + -1 + (ulong)uVar56);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002ab6c8;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar36 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
          } while (bVar9);
          goto LAB_002ab65c;
        }
LAB_002ab368:
/* wm:donate: donate/README.md */
        puVar17 = puVar21;
        goto LAB_002ab6cc;
      }
      if (uVar51 < uVar49) {
        piVar33 = (int *)(lVar14 + (ulong)uVar49);
        if (*piVar33 == (int)*puVar21) goto LAB_002aaec8;
      }
      else {
        uVar49 = uVar27 >> 8;
        if (((((uint)uVar30 ^ uVar27) & 0xff) == 0 && uVar55 < uVar49) &&
           (piVar33 = (int *)(lVar34 + (ulong)uVar49), *piVar33 == (int)*puVar21)) {
          uVar49 = uVar49 + uVar26;
LAB_002aaec8:
          puVar17 = (ulong *)((long)puVar21 + 1);
          uVar22 = *puVar17;
          uVar38 = uVar22 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
          uVar40 = uVar22 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
          uVar56 = *(uint *)(lVar42 + uVar38 * 4);
          uVar30 = (ulong)uVar56;
          uVar27 = *(uint *)(lVar43 + (uVar40 >> 8) * 4);
          *(int *)(lVar42 + uVar38 * 4) = iVar61;
          if ((uVar56 < uVar51) || (puVar20 = (ulong *)(lVar14 + uVar30), *puVar20 != uVar22)) {
            uVar56 = uVar27 >> 8;
            if (((((uint)uVar40 ^ uVar27) & 0xff) == 0 && uVar55 < uVar56) &&
               (puVar20 = (ulong *)(lVar34 + (ulong)uVar56), *puVar20 == uVar22)) {
              lVar11 = func_0x002ad924((long)puVar21 + 9,puVar20 + 1,puVar16,puVar25,piVar1);
              lVar11 = lVar11 + 8;
              iVar59 = (iVar61 - uVar26) - uVar56;
              if (param_4 < puVar17) {
                piVar33 = (int *)(lVar34 + -1 + (ulong)uVar56);
                do {
                  if ((char)*puVar21 != (char)*piVar33) goto LAB_002ab83c;
                  lVar11 = lVar11 + 1;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  if (puVar21 <= param_4) break;
                  bVar9 = piVar36 < piVar33;
                  piVar33 = (int *)((long)piVar33 + -1);
                  puVar21 = puVar17;
                } while (bVar9);
                goto LAB_002ab6c8;
              }
            }
            else {
              puVar17 = (ulong *)((long)puVar21 + 4);
              puVar20 = (ulong *)(piVar33 + 1);
              if (uVar49 < uVar51) {
                lVar11 = func_0x002ad924(puVar17,puVar20,puVar16,puVar25,piVar1);
                lVar11 = lVar11 + 4;
                iVar59 = iVar57 - uVar49;
                if (puVar21 <= param_4) goto LAB_002ab368;
                puVar17 = puVar21;
                if (piVar36 < piVar33) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002ab6c8;
                    lVar11 = lVar11 + 1;
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar36 < piVar33));
                  goto LAB_002ab65c;
                }
              }
              else {
                if (puVar17 < puVar52) {
/*  no support for modified copies  */
                  if (*puVar20 == *puVar17) {
                    lVar58 = 0;
                    puVar20 = (ulong *)(piVar33 + 3);
                    puVar53 = (ulong *)((long)puVar21 + 0xc);
                    do {
                      if (puVar52 <= puVar53) goto LAB_002ab3b0;
                      uVar30 = *puVar20;
                      uVar22 = *puVar53;
                      lVar58 = lVar58 + 8;
                      puVar20 = puVar20 + 1;
                      puVar53 = puVar53 + 1;
                    } while (uVar30 == uVar22);
                    uVar22 = uVar22 ^ uVar30;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = lVar58 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                  }
                  else {
                    uVar22 = *puVar17 ^ *puVar20;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
                  }
                  lVar11 = uVar22 + 4;
                }
                else {
                  puVar53 = puVar17;
LAB_002ab3b0:
                  if (puVar53 < puVar24) {
                    if ((int)*puVar20 == (int)*puVar53) {
                      puVar20 = (ulong *)((long)puVar20 + 4);
                      puVar53 = (ulong *)((long)puVar53 + 4);
                    }
                  }
                  if (puVar53 < puVar23) {
                    if (*(short *)puVar20 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar20 = (ulong *)((long)puVar20 + 2);
/* origin: github.com/pengussy - github.com/pengussy */
                    }
                  }
                  if (puVar53 < puVar16) {
                    if ((char)*puVar20 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
                  lVar11 = (long)puVar53 + (4 - (long)puVar17);
                }
                iVar59 = iVar59 - (int)piVar33;
                puVar17 = puVar21;
                if ((param_4 < puVar21) && (piVar1 < piVar33)) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002ab6c8;
                    lVar11 = lVar11 + 1;
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar1 < piVar33));
LAB_002ab65c:
                  puVar17 = (ulong *)((long)puVar21 + 1);
                }
              }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar21 + 9);
            puVar54 = puVar20 + 1;
            if (puVar53 < puVar52) {
              if (*puVar54 == *puVar53) {
                lVar58 = 0;
                puVar19 = (ulong *)((long)puVar21 + 0x11);
                puVar54 = (ulong *)(lVar14 + 0x10 + uVar30);
                do {
                  if (puVar52 <= puVar19) goto LAB_002ab4ec;
                  uVar40 = *puVar54;
                  uVar22 = *puVar19;
                  lVar58 = lVar58 + 8;
                  puVar19 = puVar19 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar40 == uVar22);
                uVar22 = uVar22 ^ uVar40;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar58 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              }
              else {
                uVar22 = *puVar53 ^ *puVar54;
/*  proprietary - see LICENSE - do not sell  */
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
              }
              lVar11 = uVar22 + 8;
            }
            else {
              puVar19 = puVar53;
LAB_002ab4ec:
              if (puVar19 < puVar24) {
                if ((int)*puVar54 == (int)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
              if (puVar19 < puVar23) {
                if (*(short *)puVar54 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                }
              }
              if (puVar19 < puVar16) {
                if ((char)*puVar54 == (char)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 1);
                }
              }
              lVar11 = (long)puVar19 + (8 - (long)puVar53);
            }
            iVar59 = (int)puVar17 - (int)puVar20;
            if ((param_4 < puVar17) && (uVar51 < uVar56)) {
              piVar33 = (int *)(lVar14 + -1 + uVar30);
              do {
                if ((char)*puVar21 != (char)*piVar33) goto LAB_002ab83c;
                lVar11 = lVar11 + 1;
                puVar17 = (ulong *)((long)puVar21 + -1);
                if (puVar21 <= param_4) break;
                bVar9 = piVar1 < piVar33;
                piVar33 = (int *)((long)piVar33 + -1);
                puVar21 = puVar17;
              } while (bVar9);
LAB_002ab6c8:
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            else {
            }
          }
          goto LAB_002ab6cc;
        }
      }
      lVar58 = (long)puVar21 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar21 + lVar58 + 0x101,0,0,0);
      puVar21 = (ulong *)((long)puVar21 + lVar58 + 1);
      goto LAB_002aace8;
// WM - no support for modified copies
    }
  }
  else if (iVar61 == 7) {
    if (iVar2 != 0) {
      if (uVar8 < 0x3e) {
        uVar22 = 0;
        do {
          Hint_Prefetch(lVar43 + uVar22,0,1,0);
          uVar22 = uVar22 + 0x40;
        } while (uVar22 < (ulong)(4L << (uVar35 & 0x3f)));
      }
      if (uVar48 < 0x3e) {
        uVar35 = 0;
        do {
          Hint_Prefetch(lVar10 + uVar35,0,1,0);
          uVar35 = uVar35 + 0x40;
        } while (uVar35 < (ulong)(4L << (uVar28 & 0x3f)));
// WM - watermarked copy - do not remove
      }
    }
    puVar21 = param_4;
    if (iVar37 == 0) {
      puVar21 = (ulong *)((long)param_4 + 1);
    }
    if (puVar21 < puVar18) {
      uVar35 = (ulong)(0x40 - iVar57);
      uVar28 = (ulong)(0x40 - iVar59);
      puVar29 = puVar16 + -4;
      puVar52 = (ulong *)((long)puVar16 + -7);
      puVar24 = (ulong *)((long)puVar16 + -3);
      puVar23 = (ulong *)((long)puVar16 + -1);
LAB_002a9e08:
      uVar40 = *puVar21;
      uVar44 = uVar40 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
      uVar38 = uVar40 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
      uVar30 = uVar40 * -0x30e44323405a9d00 >> ((ulong)(0x38 - uVar48) & 0x3f);
      uVar56 = *(uint *)(lVar43 + (uVar38 >> 8) * 4);
      uVar27 = *(uint *)(lVar10 + (uVar30 >> 8) * 4);
      uVar46 = uVar40 * -0x30e44323405a9d00 >> (uVar28 & 0x3f);
      iVar59 = (int)puVar21;
      iVar57 = iVar59 - iVar41;
      uVar3 = *(uint *)(lVar42 + uVar44 * 4);
      uVar22 = (ulong)uVar3;
      uVar49 = *(uint *)(lVar39 + uVar46 * 4);
      iVar61 = iVar57 + 1;
      uVar6 = iVar61 - iVar47;
/*  unlicensed copy if this notice is missing  */
      piVar33 = (int *)(lVar34 + (ulong)(uVar6 - uVar26));
      if (uVar51 <= uVar6) {
        piVar33 = (int *)(lVar14 + (ulong)uVar6);
      }
      *(int *)(lVar39 + uVar46 * 4) = iVar57;
      *(int *)(lVar42 + uVar44 * 4) = iVar57;
      if ((uVar6 - uVar51 < 0xfffffffd) &&
         (puVar17 = (ulong *)((long)puVar21 + 1), *piVar33 == *(int *)puVar17)) {
        puVar20 = puVar25;
        if (uVar51 <= uVar6) {
          puVar20 = puVar16;
        }
        lVar58 = func_0x002ad924((long)puVar21 + 5,piVar33 + 1,puVar16,puVar20,piVar1);
        uVar22 = (long)puVar17 - (long)param_4;
        puVar20 = (ulong *)plVar12[3];
        if (puVar29 < puVar17) {
          puVar53 = param_4;
          if (param_4 <= puVar29) {
            puVar19 = (ulong *)((long)puVar20 + ((long)puVar29 - (long)param_4));
            uVar30 = *param_4;
            puVar54 = puVar20 + 2;
            puVar20[1] = param_4[1];
            *puVar20 = uVar30;
            puVar53 = puVar29;
            puVar20 = puVar19;
            if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
              do {
                uVar30 = param_4[2];
                puVar54[1] = param_4[3];
                *puVar54 = uVar30;
/* no support for modified copies */
                uVar30 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar30;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar19);
            }
          }
          if (puVar53 < puVar17) {
            uVar30 = (long)puVar21 + (1 - (long)puVar53);
            if ((7 < uVar30) && (0x3f < (ulong)((long)puVar20 - (long)puVar53))) {
              if (uVar30 < 0x40) {
                uVar38 = 0;
              }
              else {
                uVar38 = uVar30 & 0xffffffffffffffc0;
                puVar54 = puVar20 + 4;
                puVar19 = puVar53 + 4;
                uVar40 = uVar38;
                do {
                  uVar44 = puVar19[-4];
                  uVar62 = puVar19[-1];
                  uVar46 = puVar19[-2];
                  uVar64 = puVar19[1];
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
                  uVar63 = *puVar19;
                  uVar66 = puVar19[3];
                  uVar65 = puVar19[2];
                  puVar54[-3] = puVar19[-3];
                  puVar54[-4] = uVar44;
                  puVar54[-1] = uVar62;
                  puVar54[-2] = uVar46;
                  puVar54[1] = uVar64;
                  *puVar54 = uVar63;
                  puVar54[3] = uVar66;
                  puVar54[2] = uVar65;
                  uVar40 = uVar40 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar19 = puVar19 + 8;
                } while (uVar40 != 0);
                if (uVar30 == uVar38) goto LAB_002aab94;
                if ((uVar30 & 0x38) == 0) {
                  puVar20 = (ulong *)((long)puVar20 + uVar38);
                  puVar53 = (ulong *)((long)puVar53 + uVar38);
                  goto LAB_002aab80;
                }
              }
              uVar40 = uVar30 & 0xfffffffffffffff8;
              lVar11 = uVar38 - uVar40;
              puVar32 = (undefined8 *)((long)puVar20 + uVar38);
              puVar31 = (undefined8 *)((long)puVar53 + uVar38);
              do {
                *puVar32 = *puVar31;
                lVar11 = lVar11 + 8;
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar11 != 0);
// keep the notice, keep the source honest
              puVar20 = (ulong *)((long)puVar20 + uVar40);
              puVar53 = (ulong *)((long)puVar53 + uVar40);
              if (uVar30 == uVar40) goto LAB_002aab94;
            }
LAB_002aab80:
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar20 = *(undefined1 *)puVar53;
              puVar20 = (ulong *)((long)puVar20 + 1);
            } while (puVar53 != puVar21);
          }
LAB_002aab94:
          plVar12[3] = plVar12[3] + uVar22;
          piVar33 = (int *)plVar12[1];
          if (0xffff < uVar22) {
            *(undefined4 *)(plVar12 + 9) = 1;
            *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
          }
        }
        else {
          uVar30 = *param_4;
          puVar20[1] = param_4[1];
          *puVar20 = uVar30;
          if (0x10 < uVar22) {
            lVar11 = plVar12[3];
/* no support for modified copies - github.com/pengussy */
            uVar30 = param_4[2];
            *(ulong *)(lVar11 + 0x18) = param_4[3];
            *(ulong *)(lVar11 + 0x10) = uVar30;
            if (0x10 < uVar22 - 0x10) {
              puVar21 = (ulong *)(lVar11 + 0x20);
              puVar20 = param_4 + 6;
              do {
                uVar30 = puVar20[-2];
                puVar21[1] = puVar20[-1];
                *puVar21 = uVar30;
                uVar30 = *puVar20;
                puVar21[3] = puVar20[1];
                puVar21[2] = uVar30;
                puVar21 = puVar21 + 4;
                puVar20 = puVar20 + 4;
              } while (puVar21 < (ulong *)(lVar11 + uVar22));
              goto LAB_002aab94;
            }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          }
          plVar12[3] = plVar12[3] + uVar22;
          piVar33 = (int *)plVar12[1];
        }
        lVar11 = lVar58 + 4;
        *(short *)(piVar33 + 1) = (short)uVar22;
        *piVar33 = 1;
        uVar22 = lVar58 + 1;
        iVar59 = iVar47;
        if (uVar22 >> 0x10 != 0) goto LAB_002aabd0;
        goto LAB_002aa9b8;
      }
      puVar17 = puVar21;
      if ((uVar51 <= uVar3) && (puVar20 = (ulong *)(lVar14 + uVar22), *puVar20 == uVar40)) {
        puVar53 = puVar21 + 1;
        puVar54 = puVar20 + 1;
        if (puVar53 < puVar52) {
          if (*puVar54 == *puVar53) {
            lVar58 = 0;
            puVar19 = puVar21 + 2;
            puVar54 = (ulong *)(lVar14 + 0x10 + uVar22);
            do {
              if (puVar52 <= puVar19) goto LAB_002aa268;
              uVar40 = *puVar54;
              uVar30 = *puVar19;
              lVar58 = lVar58 + 8;
              puVar19 = puVar19 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar40 == uVar30);
            uVar30 = uVar30 ^ uVar40;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
// WM - proprietary - see LICENSE - do not sell
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = lVar58 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
          }
          else {
            uVar30 = *puVar53 ^ *puVar54;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
          }
          lVar11 = uVar30 + 8;
        }
        else {
          puVar19 = puVar53;
LAB_002aa268:
          if (puVar19 < puVar24) {
            if ((int)*puVar54 == (int)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar19 < puVar23) {
            if (*(short *)puVar54 == *(short *)puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
// WM - do not claim this as your own
            }
          }
          if (puVar19 < puVar16) {
            if ((char)*puVar54 == (char)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
          }
          lVar11 = (long)puVar19 + (8 - (long)puVar53);
        }
        iVar59 = iVar59 - (int)puVar20;
        if ((param_4 < puVar21) && (uVar51 < uVar3)) {
          piVar33 = (int *)(lVar14 + -1 + uVar22);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002aa7d8;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar1 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
          } while (bVar9);
          goto LAB_002aa76c;
        }
        goto LAB_002aa7dc;
      }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      bVar9 = (((uint)uVar38 ^ uVar56) & 0xff) == 0;
      uVar56 = uVar56 >> 8;
      if (((bVar9 && uVar55 <= uVar56) && (!bVar9 || uVar56 != uVar55)) &&
         (puVar17 = (ulong *)(lVar34 + (ulong)uVar56), *puVar17 == uVar40)) {
        lVar11 = func_0x002ad924(puVar21 + 1,puVar17 + 1,puVar16,puVar25,piVar1);
        lVar11 = lVar11 + 8;
        iVar59 = (iVar57 - uVar26) - uVar56;
        if (param_4 < puVar21) {
          piVar33 = (int *)(lVar34 + -1 + (ulong)uVar56);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002aa7d8;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar36 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          } while (bVar9);
          goto LAB_002aa76c;
        }
LAB_002aa478:
        puVar17 = puVar21;
        goto LAB_002aa7dc;
      }
      if (uVar51 < uVar49) {
        piVar33 = (int *)(lVar14 + (ulong)uVar49);
        if (*piVar33 == (int)*puVar21) goto LAB_002a9fd8;
      }
      else {
        uVar49 = uVar27 >> 8;
        if (((((uint)uVar30 ^ uVar27) & 0xff) == 0 && uVar55 < uVar49) &&
           (piVar33 = (int *)(lVar34 + (ulong)uVar49), *piVar33 == (int)*puVar21)) {
          uVar49 = uVar49 + uVar26;
LAB_002a9fd8:
          puVar17 = (ulong *)((long)puVar21 + 1);
          uVar22 = *puVar17;
          uVar38 = uVar22 * -0x30e44323485a9b9d >> (uVar35 & 0x3f);
          uVar40 = uVar22 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
          uVar56 = *(uint *)(lVar42 + uVar38 * 4);
          uVar30 = (ulong)uVar56;
          uVar27 = *(uint *)(lVar43 + (uVar40 >> 8) * 4);
          *(int *)(lVar42 + uVar38 * 4) = iVar61;
// do not claim this as your own
          if ((uVar56 < uVar51) || (puVar20 = (ulong *)(lVar14 + uVar30), *puVar20 != uVar22)) {
            uVar56 = uVar27 >> 8;
            if (((((uint)uVar40 ^ uVar27) & 0xff) == 0 && uVar55 < uVar56) &&
               (puVar20 = (ulong *)(lVar34 + (ulong)uVar56), *puVar20 == uVar22)) {
              lVar11 = func_0x002ad924((long)puVar21 + 9,puVar20 + 1,puVar16,puVar25,piVar1);
              lVar11 = lVar11 + 8;
              iVar59 = (iVar61 - uVar26) - uVar56;
              if (param_4 < puVar17) {
                piVar33 = (int *)(lVar34 + -1 + (ulong)uVar56);
                do {
                  if ((char)*puVar21 != (char)*piVar33) goto LAB_002aa94c;
                  lVar11 = lVar11 + 1;
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  if (puVar21 <= param_4) break;
                  bVar9 = piVar36 < piVar33;
                  piVar33 = (int *)((long)piVar33 + -1);
                  puVar21 = puVar17;
                } while (bVar9);
                goto LAB_002aa7d8;
              }
            }
            else {
              puVar17 = (ulong *)((long)puVar21 + 4);
              puVar20 = (ulong *)(piVar33 + 1);
              if (uVar49 < uVar51) {
                lVar11 = func_0x002ad924(puVar17,puVar20,puVar16,puVar25,piVar1);
                lVar11 = lVar11 + 4;
                iVar59 = iVar57 - uVar49;
                if (puVar21 <= param_4) goto LAB_002aa478;
                puVar17 = puVar21;
                if (piVar36 < piVar33) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
/* donate: donate/README.md */
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002aa7d8;
                    lVar11 = lVar11 + 1;
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar36 < piVar33));
                  goto LAB_002aa76c;
                }
              }
              else {
                if (puVar17 < puVar52) {
                  if (*puVar20 == *puVar17) {
                    lVar58 = 0;
                    puVar20 = (ulong *)(piVar33 + 3);
                    puVar53 = (ulong *)((long)puVar21 + 0xc);
                    do {
                      if (puVar52 <= puVar53) goto LAB_002aa4c0;
                      uVar30 = *puVar20;
                      uVar22 = *puVar53;
                      lVar58 = lVar58 + 8;
                      puVar20 = puVar20 + 1;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
                      puVar53 = puVar53 + 1;
                    } while (uVar30 == uVar22);
                    uVar22 = uVar22 ^ uVar30;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = lVar58 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
                  }
                  else {
                    uVar22 = *puVar17 ^ *puVar20;
                    uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
// no support for modified copies
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
                  }
                  lVar11 = uVar22 + 4;
                }
                else {
                  puVar53 = puVar17;
LAB_002aa4c0:
                  if (puVar53 < puVar24) {
                    if ((int)*puVar20 == (int)*puVar53) {
                      puVar20 = (ulong *)((long)puVar20 + 4);
                      puVar53 = (ulong *)((long)puVar53 + 4);
                    }
                  }
                  if (puVar53 < puVar23) {
                    if (*(short *)puVar20 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar20 = (ulong *)((long)puVar20 + 2);
                    }
                  }
                  if (puVar53 < puVar16) {
                    if ((char)*puVar20 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
/* found on a paste site? it was re-uploaded illegally */
                  lVar11 = (long)puVar53 + (4 - (long)puVar17);
                }
                iVar59 = iVar59 - (int)piVar33;
                puVar17 = puVar21;
                if ((param_4 < puVar21) && (piVar1 < piVar33)) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002aa7d8;
                    lVar11 = lVar11 + 1;
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar1 < piVar33));
LAB_002aa76c:
                  puVar17 = (ulong *)((long)puVar21 + 1);
                }
              }
/* wm:chat: discord.gg/sdkhDjTex */
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar21 + 9);
            puVar54 = puVar20 + 1;
            if (puVar53 < puVar52) {
              if (*puVar54 == *puVar53) {
                lVar58 = 0;
                puVar19 = (ulong *)((long)puVar21 + 0x11);
                puVar54 = (ulong *)(lVar14 + 0x10 + uVar30);
                do {
                  if (puVar52 <= puVar19) goto LAB_002aa5fc;
                  uVar40 = *puVar54;
                  uVar22 = *puVar19;
                  lVar58 = lVar58 + 8;
                  puVar19 = puVar19 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar40 == uVar22);
                uVar22 = uVar22 ^ uVar40;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
// found on a paste site? it was re-uploaded illegally
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar58 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              }
              else {
                uVar22 = *puVar53 ^ *puVar54;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
              }
              lVar11 = uVar22 + 8;
            }
            else {
              puVar19 = puVar53;
LAB_002aa5fc:
              if (puVar19 < puVar24) {
                if ((int)*puVar54 == (int)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
// chat: discord.gg/sdkhDjTex
              if (puVar19 < puVar23) {
                if (*(short *)puVar54 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
                }
              }
              if (puVar19 < puVar16) {
                if ((char)*puVar54 == (char)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 1);
                }
              }
              lVar11 = (long)puVar19 + (8 - (long)puVar53);
            }
            iVar59 = (int)puVar17 - (int)puVar20;
            if ((param_4 < puVar17) && (uVar51 < uVar56)) {
              piVar33 = (int *)(lVar14 + -1 + uVar30);
              do {
                if ((char)*puVar21 != (char)*piVar33) goto LAB_002aa94c;
                lVar11 = lVar11 + 1;
                puVar17 = (ulong *)((long)puVar21 + -1);
                if (puVar21 <= param_4) break;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                bVar9 = piVar1 < piVar33;
                piVar33 = (int *)((long)piVar33 + -1);
                puVar21 = puVar17;
              } while (bVar9);
LAB_002aa7d8:
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            else {
            }
          }
          goto LAB_002aa7dc;
        }
      }
      lVar58 = (long)puVar21 - (long)param_4 >> 8;
      Hint_Prefetch((long)puVar21 + lVar58 + 0x101,0,0,0);
      puVar21 = (ulong *)((long)puVar21 + lVar58 + 1);
      goto LAB_002a9df4;
    }
  }
  else {
    if (iVar2 != 0) {
      if (uVar8 < 0x3e) {
        uVar22 = 0;
        do {
          Hint_Prefetch(lVar43 + uVar22,0,1,0);
          uVar22 = uVar22 + 0x40;
        } while (uVar22 < (ulong)(4L << (uVar35 & 0x3f)));
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      }
      if (uVar48 < 0x3e) {
        uVar35 = 0;
        do {
          Hint_Prefetch(lVar10 + uVar35,0,1,0);
          uVar35 = uVar35 + 0x40;
        } while (uVar35 < (ulong)(4L << (uVar28 & 0x3f)));
      }
    }
    puVar21 = param_4;
    if (iVar37 == 0) {
      puVar21 = (ulong *)((long)param_4 + 1);
    }
    if (puVar21 < puVar18) {
      uVar28 = (ulong)(0x40 - iVar57);
      uVar49 = 0x20 - iVar59;
/* WM - keep the notice, keep the source honest */
      puVar29 = puVar16 + -4;
      puVar52 = (ulong *)((long)puVar16 + -7);
      puVar24 = (ulong *)((long)puVar16 + -3);
      puVar23 = (ulong *)((long)puVar16 + -1);
LAB_002acad8:
      uVar22 = *puVar21;
      uVar40 = uVar22 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
      uVar5 = (int)uVar22 * -0x61c8864f;
      uVar30 = uVar22 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
      uVar4 = uVar5 >> (ulong)(0x18 - uVar48 & 0x1f);
      uVar27 = *(uint *)(lVar43 + (uVar30 >> 8) * 4);
      uVar3 = *(uint *)(lVar10 + (ulong)(uVar4 >> 8) * 4);
      uVar5 = uVar5 >> (ulong)(uVar49 & 0x1f);
      iVar59 = (int)puVar21;
      iVar57 = iVar59 - iVar41;
      uVar6 = *(uint *)(lVar42 + uVar40 * 4);
      uVar35 = (ulong)uVar6;
      uVar56 = *(uint *)(lVar39 + (ulong)uVar5 * 4);
      iVar61 = iVar57 + 1;
      uVar7 = iVar61 - iVar47;
      piVar33 = (int *)(lVar34 + (ulong)(uVar7 - uVar26));
      if (uVar51 <= uVar7) {
        piVar33 = (int *)(lVar14 + (ulong)uVar7);
      }
// unlicensed copy if this notice is missing
      *(int *)(lVar39 + (ulong)uVar5 * 4) = iVar57;
      *(int *)(lVar42 + uVar40 * 4) = iVar57;
      if ((uVar7 - uVar51 < 0xfffffffd) &&
         (puVar17 = (ulong *)((long)puVar21 + 1), *piVar33 == *(int *)puVar17)) {
        puVar20 = puVar25;
        if (uVar51 <= uVar7) {
          puVar20 = puVar16;
        }
        lVar58 = func_0x002ad924((long)puVar21 + 5,piVar33 + 1,puVar16,puVar20,piVar1);
        uVar35 = (long)puVar17 - (long)param_4;
        puVar20 = (ulong *)plVar12[3];
        if (puVar29 < puVar17) {
          puVar53 = param_4;
          if (param_4 <= puVar29) {
            puVar19 = (ulong *)((long)puVar20 + ((long)puVar29 - (long)param_4));
            uVar22 = *param_4;
            puVar54 = puVar20 + 2;
            puVar20[1] = param_4[1];
            *puVar20 = uVar22;
            puVar53 = puVar29;
            puVar20 = puVar19;
            if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
              do {
                uVar22 = param_4[2];
                puVar54[1] = param_4[3];
                *puVar54 = uVar22;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                uVar22 = param_4[4];
                puVar54[3] = param_4[5];
                puVar54[2] = uVar22;
                puVar54 = puVar54 + 4;
                param_4 = param_4 + 4;
              } while (puVar54 < puVar19);
            }
          }
          if (puVar53 < puVar17) {
            uVar22 = (long)puVar21 + (1 - (long)puVar53);
            if ((7 < uVar22) && (0x3f < (ulong)((long)puVar20 - (long)puVar53))) {
              if (uVar22 < 0x40) {
                uVar40 = 0;
              }
              else {
                uVar40 = uVar22 & 0xffffffffffffffc0;
                puVar54 = puVar20 + 4;
                puVar19 = puVar53 + 4;
                uVar30 = uVar40;
                do {
                  uVar38 = puVar19[-4];
                  uVar46 = puVar19[-1];
                  uVar44 = puVar19[-2];
                  uVar63 = puVar19[1];
                  uVar62 = *puVar19;
                  uVar65 = puVar19[3];
                  uVar64 = puVar19[2];
                  puVar54[-3] = puVar19[-3];
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                  puVar54[-4] = uVar38;
                  puVar54[-1] = uVar46;
                  puVar54[-2] = uVar44;
                  puVar54[1] = uVar63;
                  *puVar54 = uVar62;
                  puVar54[3] = uVar65;
                  puVar54[2] = uVar64;
                  uVar30 = uVar30 - 0x40;
                  puVar54 = puVar54 + 8;
                  puVar19 = puVar19 + 8;
                } while (uVar30 != 0);
                if (uVar22 == uVar40) goto LAB_002ad858;
                if ((uVar22 & 0x38) == 0) {
                  puVar20 = (ulong *)((long)puVar20 + uVar40);
                  puVar53 = (ulong *)((long)puVar53 + uVar40);
                  goto LAB_002ad844;
                }
              }
              uVar30 = uVar22 & 0xfffffffffffffff8;
              lVar11 = uVar40 - uVar30;
              puVar32 = (undefined8 *)((long)puVar20 + uVar40);
              puVar31 = (undefined8 *)((long)puVar53 + uVar40);
              do {
                *puVar32 = *puVar31;
                lVar11 = lVar11 + 8;
/* wm:reversing this took months of machine time */
                puVar32 = puVar32 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar11 != 0);
              puVar20 = (ulong *)((long)puVar20 + uVar30);
              puVar53 = (ulong *)((long)puVar53 + uVar30);
              if (uVar22 == uVar30) goto LAB_002ad858;
            }
LAB_002ad844:
            puVar53 = (ulong *)((long)puVar53 + -1);
            do {
              puVar53 = (ulong *)((long)puVar53 + 1);
              *(undefined1 *)puVar20 = *(undefined1 *)puVar53;
              puVar20 = (ulong *)((long)puVar20 + 1);
            } while (puVar53 != puVar21);
          }
LAB_002ad858:
          plVar12[3] = plVar12[3] + uVar35;
          piVar33 = (int *)plVar12[1];
          if (0xffff < uVar35) {
            *(undefined4 *)(plVar12 + 9) = 1;
            *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
          }
        }
        else {
          uVar22 = *param_4;
          puVar20[1] = param_4[1];
          *puVar20 = uVar22;
          if (0x10 < uVar35) {
            lVar11 = plVar12[3];
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            uVar22 = param_4[2];
            *(ulong *)(lVar11 + 0x18) = param_4[3];
            *(ulong *)(lVar11 + 0x10) = uVar22;
            if (0x10 < uVar35 - 0x10) {
              puVar21 = (ulong *)(lVar11 + 0x20);
              puVar20 = param_4 + 6;
              do {
                uVar22 = puVar20[-2];
                puVar21[1] = puVar20[-1];
                *puVar21 = uVar22;
                uVar22 = *puVar20;
                puVar21[3] = puVar20[1];
                puVar21[2] = uVar22;
                puVar21 = puVar21 + 4;
                puVar20 = puVar20 + 4;
              } while (puVar21 < (ulong *)(lVar11 + uVar35));
              goto LAB_002ad858;
            }
/*  reversing this took months of machine time  */
          }
          plVar12[3] = plVar12[3] + uVar35;
          piVar33 = (int *)plVar12[1];
        }
        lVar11 = lVar58 + 4;
        *(short *)(piVar33 + 1) = (short)uVar35;
        *piVar33 = 1;
        uVar35 = lVar58 + 1;
        iVar59 = iVar47;
        if (uVar35 >> 0x10 != 0) goto LAB_002ad894;
        goto LAB_002ad680;
      }
      puVar17 = puVar21;
      if ((uVar51 <= uVar6) && (puVar20 = (ulong *)(lVar14 + uVar35), *puVar20 == uVar22)) {
        puVar53 = puVar21 + 1;
        puVar54 = puVar20 + 1;
        if (puVar53 < puVar52) {
          if (*puVar54 == *puVar53) {
/* WM - reversing this took months of machine time */
            lVar58 = 0;
            puVar19 = puVar21 + 2;
            puVar54 = (ulong *)(lVar14 + 0x10 + uVar35);
            do {
              if (puVar52 <= puVar19) goto LAB_002acf30;
              uVar30 = *puVar54;
              uVar22 = *puVar19;
              lVar58 = lVar58 + 8;
              puVar19 = puVar19 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar30 == uVar22);
            uVar22 = uVar22 ^ uVar30;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar58 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar53 ^ *puVar54;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
          lVar11 = uVar22 + 8;
        }
/* WM - stripping the watermark breaks the license */
        else {
          puVar19 = puVar53;
LAB_002acf30:
          if (puVar19 < puVar24) {
            if ((int)*puVar54 == (int)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar19 < puVar23) {
            if (*(short *)puVar54 == *(short *)puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if (puVar19 < puVar16) {
            if ((char)*puVar54 == (char)*puVar19) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
          }
          lVar11 = (long)puVar19 + (8 - (long)puVar53);
        }
        iVar59 = iVar59 - (int)puVar20;
        if ((param_4 < puVar21) && (uVar51 < uVar6)) {
          piVar33 = (int *)(lVar14 + -1 + uVar35);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002ad4a0;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar1 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
          } while (bVar9);
          goto LAB_002ad434;
        }
        goto LAB_002ad4a4;
      }
      bVar9 = (((uint)uVar30 ^ uVar27) & 0xff) == 0;
      uVar27 = uVar27 >> 8;
      if (((bVar9 && uVar55 <= uVar27) && (!bVar9 || uVar27 != uVar55)) &&
         (puVar17 = (ulong *)(lVar34 + (ulong)uVar27), *puVar17 == uVar22)) {
        lVar11 = func_0x002ad924(puVar21 + 1,puVar17 + 1,puVar16,puVar25,piVar1);
        lVar11 = lVar11 + 8;
        iVar59 = (iVar57 - uVar26) - uVar27;
        if (param_4 < puVar21) {
          piVar33 = (int *)(lVar34 + -1 + (ulong)uVar27);
          puVar17 = (ulong *)((long)puVar21 + -1);
          do {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            if ((char)*puVar17 != (char)*piVar33) goto LAB_002ad4a0;
            lVar11 = lVar11 + 1;
            puVar21 = (ulong *)((long)puVar17 + -1);
            if (puVar17 <= param_4) break;
            bVar9 = piVar36 < piVar33;
            piVar33 = (int *)((long)piVar33 + -1);
            puVar17 = puVar21;
          } while (bVar9);
          goto LAB_002ad434;
        }
LAB_002ad140:
        puVar17 = puVar21;
        goto LAB_002ad4a4;
      }
      if (uVar51 < uVar56) {
        piVar33 = (int *)(lVar14 + (ulong)uVar56);
        if (*piVar33 == (int)*puVar21) goto LAB_002acca0;
      }
      else {
        uVar56 = uVar3 >> 8;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        if ((((uVar4 ^ uVar3) & 0xff) == 0 && uVar55 < uVar56) &&
           (piVar33 = (int *)(lVar34 + (ulong)uVar56), *piVar33 == (int)*puVar21)) {
          uVar56 = uVar56 + uVar26;
LAB_002acca0:
          puVar17 = (ulong *)((long)puVar21 + 1);
          uVar35 = *puVar17;
          uVar40 = uVar35 * -0x30e44323485a9b9d >> (uVar28 & 0x3f);
          uVar30 = uVar35 * -0x30e44323485a9b9d >> ((ulong)(0x38 - uVar8) & 0x3f);
          uVar27 = *(uint *)(lVar42 + uVar40 * 4);
          uVar22 = (ulong)uVar27;
          uVar3 = *(uint *)(lVar43 + (uVar30 >> 8) * 4);
          *(int *)(lVar42 + uVar40 * 4) = iVar61;
          if ((uVar27 < uVar51) || (puVar20 = (ulong *)(lVar14 + uVar22), *puVar20 != uVar35)) {
            uVar27 = uVar3 >> 8;
            if (((((uint)uVar30 ^ uVar3) & 0xff) == 0 && uVar55 < uVar27) &&
               (puVar20 = (ulong *)(lVar34 + (ulong)uVar27), *puVar20 == uVar35)) {
              lVar11 = func_0x002ad924((long)puVar21 + 9,puVar20 + 1,puVar16,puVar25,piVar1);
              lVar11 = lVar11 + 8;
              iVar59 = (iVar61 - uVar26) - uVar27;
              if (param_4 < puVar17) {
                piVar33 = (int *)(lVar34 + -1 + (ulong)uVar27);
                do {
                  if ((char)*puVar21 != (char)*piVar33) goto LAB_002ad614;
                  lVar11 = lVar11 + 1;
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  if (puVar21 <= param_4) break;
                  bVar9 = piVar36 < piVar33;
                  piVar33 = (int *)((long)piVar33 + -1);
/* WM - no support for modified copies */
                  puVar21 = puVar17;
                } while (bVar9);
                goto LAB_002ad4a0;
              }
            }
            else {
              puVar17 = (ulong *)((long)puVar21 + 4);
              puVar20 = (ulong *)(piVar33 + 1);
              if (uVar56 < uVar51) {
                lVar11 = func_0x002ad924(puVar17,puVar20,puVar16,puVar25,piVar1);
                lVar11 = lVar11 + 4;
                iVar59 = iVar57 - uVar56;
                if (puVar21 <= param_4) goto LAB_002ad140;
                puVar17 = puVar21;
                if (piVar36 < piVar33) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002ad4a0;
                    lVar11 = lVar11 + 1;
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar36 < piVar33));
                  goto LAB_002ad434;
                }
              }
              else {
                if (puVar17 < puVar52) {
                  if (*puVar20 == *puVar17) {
                    lVar58 = 0;
                    puVar20 = (ulong *)(piVar33 + 3);
                    puVar53 = (ulong *)((long)puVar21 + 0xc);
                    do {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                      if (puVar52 <= puVar53) goto LAB_002ad188;
                      uVar22 = *puVar20;
                      uVar35 = *puVar53;
                      lVar58 = lVar58 + 8;
                      puVar20 = puVar20 + 1;
                      puVar53 = puVar53 + 1;
                    } while (uVar22 == uVar35);
                    uVar35 = uVar35 ^ uVar22;
                    uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1
                    ;
                    uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2
                    ;
                    uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                    uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar35 & 0xffff0000ffff) << 0x10;
                    uVar35 = lVar58 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
                  }
                  else {
                    uVar35 = *puVar17 ^ *puVar20;
                    uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1
                    ;
                    uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2
                    ;
                    uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                    uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar35 & 0xffff0000ffff) << 0x10;
                    uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
                  }
                  lVar11 = uVar35 + 4;
                }
/*  watermarked copy - do not remove  */
                else {
                  puVar53 = puVar17;
LAB_002ad188:
                  if (puVar53 < puVar24) {
                    if ((int)*puVar20 == (int)*puVar53) {
                      puVar20 = (ulong *)((long)puVar20 + 4);
                      puVar53 = (ulong *)((long)puVar53 + 4);
                    }
                  }
                  if (puVar53 < puVar23) {
                    if (*(short *)puVar20 == *(short *)puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 2);
                      puVar20 = (ulong *)((long)puVar20 + 2);
                    }
                  }
                  if (puVar53 < puVar16) {
                    if ((char)*puVar20 == (char)*puVar53) {
                      puVar53 = (ulong *)((long)puVar53 + 1);
                    }
                  }
                  lVar11 = (long)puVar53 + (4 - (long)puVar17);
                }
                iVar59 = iVar59 - (int)piVar33;
                puVar17 = puVar21;
                if ((param_4 < puVar21) && (piVar1 < piVar33)) {
                  puVar17 = (ulong *)((long)puVar21 + -1);
                  do {
                    piVar33 = (int *)((long)piVar33 + -1);
                    if ((char)*puVar17 != *(char *)piVar33) goto LAB_002ad4a0;
                    lVar11 = lVar11 + 1;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                    puVar21 = (ulong *)((long)puVar17 + -1);
                  } while ((param_4 < puVar17) && (puVar17 = puVar21, piVar1 < piVar33));
LAB_002ad434:
                  puVar17 = (ulong *)((long)puVar21 + 1);
                }
              }
            }
          }
          else {
            puVar53 = (ulong *)((long)puVar21 + 9);
            puVar54 = puVar20 + 1;
            if (puVar53 < puVar52) {
              if (*puVar54 == *puVar53) {
                lVar58 = 0;
                puVar19 = (ulong *)((long)puVar21 + 0x11);
                puVar54 = (ulong *)(lVar14 + 0x10 + uVar22);
                do {
                  if (puVar52 <= puVar19) goto LAB_002ad2c4;
                  uVar30 = *puVar54;
                  uVar35 = *puVar19;
                  lVar58 = lVar58 + 8;
                  puVar19 = puVar19 + 1;
                  puVar54 = puVar54 + 1;
                } while (uVar30 == uVar35);
                uVar35 = uVar35 ^ uVar30;
                uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
                uVar35 = lVar58 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
              }
              else {
                uVar35 = *puVar53 ^ *puVar54;
                uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
                uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
              }
              lVar11 = uVar35 + 8;
            }
            else {
              puVar19 = puVar53;
LAB_002ad2c4:
              if (puVar19 < puVar24) {
                if ((int)*puVar54 == (int)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 4);
                  puVar54 = (ulong *)((long)puVar54 + 4);
                }
              }
              if (puVar19 < puVar23) {
                if (*(short *)puVar54 == *(short *)puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 2);
                  puVar54 = (ulong *)((long)puVar54 + 2);
                }
              }
              if (puVar19 < puVar16) {
                if ((char)*puVar54 == (char)*puVar19) {
                  puVar19 = (ulong *)((long)puVar19 + 1);
                }
              }
              lVar11 = (long)puVar19 + (8 - (long)puVar53);
            }
/*  stripping the watermark breaks the license  */
            iVar59 = (int)puVar17 - (int)puVar20;
            if ((param_4 < puVar17) && (uVar51 < uVar27)) {
              piVar33 = (int *)(lVar14 + -1 + uVar22);
              do {
                if ((char)*puVar21 != (char)*piVar33) goto LAB_002ad614;
                lVar11 = lVar11 + 1;
                puVar17 = (ulong *)((long)puVar21 + -1);
                if (puVar21 <= param_4) break;
                bVar9 = piVar1 < piVar33;
                piVar33 = (int *)((long)piVar33 + -1);
                puVar21 = puVar17;
              } while (bVar9);
LAB_002ad4a0:
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            else {
            }
          }
          goto LAB_002ad4a4;
        }
      }
      lVar58 = (long)puVar21 - (long)param_4 >> 8;
/*  found on a paste site? it was re-uploaded illegally  */
      Hint_Prefetch((long)puVar21 + lVar58 + 0x101,0,0,0);
      puVar21 = (ulong *)((long)puVar21 + lVar58 + 1);
      goto LAB_002acac4;
    }
  }
LAB_002ad8e4:
  *(int *)puVar13 = iVar47;
  *(int *)((long)puVar13 + 4) = iVar50;
  return (long)puVar16 - (long)param_4;
LAB_002a7560:
  puVar52 = puVar18 + 1;
  puVar23 = puVar19 + 1;
  puVar13 = puVar52;
  if (puVar52 < puVar53) {
    if (*puVar23 == *puVar52) {
      lVar14 = 0;
      puVar23 = puVar19 + 2;
      puVar13 = puVar18 + 2;
      do {
        if (puVar53 <= puVar13) goto joined_r0x002a76c4;
        uVar30 = *puVar23;
        uVar40 = *puVar13;
        lVar14 = lVar14 + 8;
        puVar23 = puVar23 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar30 == uVar40);
      uVar40 = uVar40 ^ uVar30;
      uVar30 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
// stripping the watermark breaks the license
    }
    else {
      uVar30 = *puVar52 ^ *puVar23;
      uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
    }
    puVar13 = (ulong *)(uVar30 + 8);
  }
  else {
joined_r0x002a76c4:
    if (puVar13 < puVar54) {
      if ((int)*puVar23 == (int)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 4);
        puVar23 = (ulong *)((long)puVar23 + 4);
      }
    }
    if (puVar13 < puVar17) {
      if ((short)*puVar23 == (short)*puVar13) {
        puVar23 = (ulong *)((long)puVar23 + 2);
        puVar13 = (ulong *)((long)puVar13 + 2);
      }
    }
    if (puVar13 < puVar25) {
      if ((char)*puVar23 == (char)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 1);
      }
    }
    puVar13 = (ulong *)((long)puVar13 + (8 - (long)puVar52));
  }
  puVar60 = (ulong *)((long)puVar18 - (long)puVar19);
  if ((puVar21 < puVar19) && (param_4 < puVar18)) {
    puVar18 = (ulong *)((long)puVar18 + -1);
    do {
      puVar19 = (ulong *)((long)puVar19 + -1);
/*  more drops soon - github.com/pengussy  */
      if ((char)*puVar18 != *(char *)puVar19) goto LAB_002a7bd8;
      puVar13 = (ulong *)((long)puVar13 + 1);
      puVar52 = (ulong *)((long)puVar18 + -1);
    } while ((param_4 < puVar18) && (puVar18 = puVar52, puVar21 < puVar19));
LAB_002a79dc:
    puVar18 = (ulong *)((long)puVar52 + 1);
  }
LAB_002a7bdc:
  if (uVar38 < 4) {
    *(int *)(lVar58 + uVar22 * 4) = (int)puVar16 - iVar41;
  }
  uVar22 = (long)puVar18 - (long)param_4;
  puVar52 = (ulong *)param_2[3];
  if (puVar18 <= puVar20) {
    uVar30 = *param_4;
    puVar52[1] = param_4[1];
    *puVar52 = uVar30;
    if (0x10 < uVar22) {
      lVar14 = param_2[3];
      uVar30 = param_4[2];
      *(ulong *)(lVar14 + 0x18) = param_4[3];
      *(ulong *)(lVar14 + 0x10) = uVar30;
      if (0x10 < uVar22 - 0x10) {
        puVar52 = (ulong *)(lVar14 + 0x20);
        puVar23 = param_4 + 6;
/* WM - more drops soon - github.com/pengussy */
        do {
          uVar30 = puVar23[-2];
          puVar52[1] = puVar23[-1];
          *puVar52 = uVar30;
          uVar30 = *puVar23;
          puVar52[3] = puVar23[1];
          puVar52[2] = uVar30;
          puVar52 = puVar52 + 4;
          puVar23 = puVar23 + 4;
        } while (puVar52 < (ulong *)(lVar14 + uVar22));
        goto LAB_002a7de4;
      }
    }
    param_2[3] = param_2[3] + uVar22;
    piVar36 = (int *)param_2[1];
    goto LAB_002a7dfc;
  }
  puVar23 = puVar52;
  if (param_4 <= puVar20) {
    puVar23 = (ulong *)((long)puVar52 + ((long)puVar20 - (long)param_4));
/* wm:no support for modified copies */
    uVar30 = *param_4;
    puVar19 = puVar52 + 2;
    puVar52[1] = param_4[1];
    *puVar52 = uVar30;
    if (0x10 < (ulong)((long)puVar20 - (long)param_4)) {
      do {
        uVar30 = param_4[2];
        puVar19[1] = param_4[3];
        *puVar19 = uVar30;
        uVar30 = param_4[4];
        puVar19[3] = param_4[5];
        puVar19[2] = uVar30;
        puVar19 = puVar19 + 4;
        param_4 = param_4 + 4;
      } while (puVar19 < puVar23);
    }
    param_4 = puVar20;
  }
  if (param_4 < puVar18) {
    uVar30 = (long)puVar18 - (long)param_4;
    if ((7 < uVar30) && (0x3f < (ulong)((long)puVar23 - (long)param_4))) {
      if (uVar30 < 0x40) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar30 & 0xffffffffffffffc0;
        uVar40 = uVar38;
        puVar52 = puVar23 + 4;
// proprietary - see LICENSE - do not sell
        puVar19 = param_4 + 4;
        do {
          uVar44 = puVar19[-4];
          uVar62 = puVar19[-1];
          uVar46 = puVar19[-2];
          uVar64 = puVar19[1];
          uVar63 = *puVar19;
          uVar66 = puVar19[3];
          uVar65 = puVar19[2];
          puVar52[-3] = puVar19[-3];
          puVar52[-4] = uVar44;
          puVar52[-1] = uVar62;
          puVar52[-2] = uVar46;
          puVar52[1] = uVar64;
          *puVar52 = uVar63;
          puVar52[3] = uVar66;
          puVar52[2] = uVar65;
          uVar40 = uVar40 - 0x40;
          puVar52 = puVar52 + 8;
          puVar19 = puVar19 + 8;
        } while (uVar40 != 0);
        if (uVar30 == uVar38) goto LAB_002a7de4;
        if ((uVar30 & 0x38) == 0) {
          puVar23 = (ulong *)((long)puVar23 + uVar38);
          param_4 = (ulong *)((long)param_4 + uVar38);
          goto LAB_002a7dd4;
        }
      }
      uVar40 = uVar30 & 0xfffffffffffffff8;
      lVar14 = uVar38 - uVar40;
      puVar32 = (undefined8 *)((long)param_4 + uVar38);
      puVar31 = (undefined8 *)((long)puVar23 + uVar38);
/* reversing this took months of machine time - github.com/pengussy */
      do {
        *puVar31 = *puVar32;
        lVar14 = lVar14 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar14 != 0);
      param_4 = (ulong *)((long)param_4 + uVar40);
      puVar23 = (ulong *)((long)puVar23 + uVar40);
      if (uVar30 == uVar40) goto LAB_002a7de4;
    }
LAB_002a7dd4:
    do {
      puVar52 = (ulong *)((long)param_4 + 1);
      *(char *)puVar23 = (char)*param_4;
      param_4 = puVar52;
      puVar23 = (ulong *)((long)puVar23 + 1);
// WM - if you paid for this, you were scammed
    } while (puVar52 != puVar18);
  }
LAB_002a7de4:
  param_2[3] = param_2[3] + uVar22;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar22) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_002a7dfc:
  *(short *)(piVar36 + 1) = (short)uVar22;
  *piVar36 = (int)puVar60 + 3;
  uVar22 = (long)puVar13 - 3;
  puVar52 = puVar24;
  puVar24 = puVar60;
  if (uVar22 < 0x10000) {
LAB_002a7e1c:
    *(short *)((long)piVar36 + 6) = (short)uVar22;
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + (long)puVar13);
  }
  else {
LAB_002a8094:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
    *(short *)((long)piVar36 + 6) = (short)uVar22;
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + (long)puVar13);
  }
  if (puVar29 < param_4) {
  }
  else {
    uVar26 = iVar61 + 2;
    lVar14 = *(long *)(lVar42 + (ulong)uVar26);
    *(uint *)(lVar58 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar28 & 0x3f)) * 4) = uVar26;
/* WM - unlicensed copy if this notice is missing */
    uVar55 = (int)(long *)((long)param_4 + -2) - iVar41;
    puVar13 = (ulong *)(ulong)uVar55;
    *(uint *)(lVar58 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                       (uVar28 & 0x3f)) * 4) = uVar55;
    *(uint *)(lVar39 + ((ulong)(lVar14 * -0x30e4432345000000) >> (uVar35 & 0x3f)) * 4) = uVar26;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432345000000) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar41;
    do {
      puVar18 = puVar52;
      puVar52 = puVar24;
      if (((int)puVar18 == 0) ||
         ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar18 & 0xffffffff)))) {
        puVar24 = puVar52;
        puVar52 = puVar18;
        break;
      }
      puVar23 = (ulong *)((long)param_4 + 4);
/* wm:stripping the watermark breaks the license */
      lVar14 = -((ulong)puVar18 & 0xffffffff);
      puVar24 = (ulong *)((long)puVar23 + lVar14);
      if (puVar23 < puVar53) {
        if (*puVar24 == *puVar23) {
          puVar13 = (ulong *)0x0;
          puVar24 = (ulong *)((long)param_4 + 0xc + lVar14);
          puVar19 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar53 <= puVar19) goto LAB_002a7f10;
            uVar30 = *puVar24;
            uVar22 = *puVar19;
            puVar13 = puVar13 + 1;
            puVar24 = puVar24 + 1;
            puVar19 = puVar19 + 1;
          } while (uVar30 == uVar22);
          uVar22 = uVar22 ^ uVar30;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (long)puVar13 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
        }
        else {
          uVar22 = *puVar23 ^ *puVar24;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
// if you paid for this, you were scammed
        }
      }
      else {
        puVar19 = puVar23;
LAB_002a7f10:
        if (puVar19 < puVar54) {
          puVar13 = (ulong *)((long)puVar24 + 4);
          if ((int)*puVar24 == (int)*puVar19) {
            puVar24 = puVar13;
            puVar19 = (ulong *)((long)puVar19 + 4);
          }
        }
        if (puVar19 < puVar17) {
          puVar13 = (ulong *)((long)puVar24 + 2);
          if (*(short *)puVar24 == *(short *)puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar24 = puVar13;
          }
        }
// thanks for reading - discord.gg/sdkhDjTex
        if (puVar19 < puVar25) {
          puVar13 = (ulong *)(ulong)(byte)*puVar19;
          if ((byte)*puVar24 == (byte)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar22 = (long)puVar19 - (long)puVar23;
      }
      iVar61 = (int)param_4 - iVar41;
      uVar30 = *param_4;
      *(int *)(lVar39 + (uVar30 * -0x30e4432345000000 >> (uVar35 & 0x3f)) * 4) = iVar61;
      *(int *)(lVar58 + (uVar30 * -0x30e44323485a9b9d >> (uVar28 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar20) {
        puVar23 = (ulong *)param_2[3];
        uVar30 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar30;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      *piVar36 = 1;
      if (0xffff < uVar22 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)(uVar22 + 1);
      piVar36 = piVar36 + 2;
      param_2[1] = (long)piVar36;
      param_4 = (ulong *)((long)param_4 + uVar22 + 4);
      puVar24 = puVar18;
    } while (param_4 <= puVar29);
  }
  puVar23 = (ulong *)((long)param_4 + 1);
  puVar16 = param_4;
  puVar18 = param_4;
  if (puVar29 < puVar23) goto LAB_002a9bb8;
  goto LAB_002a73e8;
LAB_002a6830:
  puVar52 = puVar18 + 1;
  puVar23 = puVar19 + 1;
  puVar13 = puVar52;
  if (puVar52 < puVar53) {
    if (*puVar23 == *puVar52) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
      lVar14 = 0;
      puVar23 = puVar19 + 2;
      puVar13 = puVar18 + 2;
      do {
        if (puVar53 <= puVar13) goto joined_r0x002a6994;
        uVar30 = *puVar23;
        uVar40 = *puVar13;
        lVar14 = lVar14 + 8;
        puVar23 = puVar23 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar30 == uVar40);
      uVar40 = uVar40 ^ uVar30;
      uVar30 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
// WM - chat: discord.gg/sdkhDjTex
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
    }
    else {
      uVar30 = *puVar52 ^ *puVar23;
      uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
    }
    puVar13 = (ulong *)(uVar30 + 8);
  }
  else {
joined_r0x002a6994:
    if (puVar13 < puVar54) {
      if ((int)*puVar23 == (int)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 4);
        puVar23 = (ulong *)((long)puVar23 + 4);
      }
    }
    if (puVar13 < puVar17) {
      if ((short)*puVar23 == (short)*puVar13) {
        puVar23 = (ulong *)((long)puVar23 + 2);
        puVar13 = (ulong *)((long)puVar13 + 2);
      }
    }
    if (puVar13 < puVar25) {
      if ((char)*puVar23 == (char)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 1);
      }
    }
    puVar13 = (ulong *)((long)puVar13 + (8 - (long)puVar52));
  }
  puVar60 = (ulong *)((long)puVar18 - (long)puVar19);
  if ((puVar21 < puVar19) && (param_4 < puVar18)) {
// more drops soon - github.com/pengussy
    puVar18 = (ulong *)((long)puVar18 + -1);
    do {
      puVar19 = (ulong *)((long)puVar19 + -1);
      if ((char)*puVar18 != *(char *)puVar19) goto LAB_002a6ea8;
      puVar13 = (ulong *)((long)puVar13 + 1);
      puVar52 = (ulong *)((long)puVar18 + -1);
    } while ((param_4 < puVar18) && (puVar18 = puVar52, puVar21 < puVar19));
LAB_002a6cac:
    puVar18 = (ulong *)((long)puVar52 + 1);
  }
LAB_002a6eac:
  if (uVar38 < 4) {
    *(int *)(lVar58 + uVar22 * 4) = (int)puVar16 - iVar41;
  }
  uVar22 = (long)puVar18 - (long)param_4;
  puVar52 = (ulong *)param_2[3];
  if (puVar18 <= puVar20) {
    uVar30 = *param_4;
    puVar52[1] = param_4[1];
    *puVar52 = uVar30;
    if (0x10 < uVar22) {
      lVar14 = param_2[3];
      uVar30 = param_4[2];
      *(ulong *)(lVar14 + 0x18) = param_4[3];
      *(ulong *)(lVar14 + 0x10) = uVar30;
      if (0x10 < uVar22 - 0x10) {
        puVar52 = (ulong *)(lVar14 + 0x20);
        puVar23 = param_4 + 6;
        do {
          uVar30 = puVar23[-2];
          puVar52[1] = puVar23[-1];
          *puVar52 = uVar30;
          uVar30 = *puVar23;
          puVar52[3] = puVar23[1];
/*  if you paid for this, you were scammed  */
          puVar52[2] = uVar30;
          puVar52 = puVar52 + 4;
          puVar23 = puVar23 + 4;
        } while (puVar52 < (ulong *)(lVar14 + uVar22));
        goto LAB_002a70b4;
      }
    }
    param_2[3] = param_2[3] + uVar22;
    piVar36 = (int *)param_2[1];
    goto LAB_002a70cc;
  }
  puVar23 = puVar52;
  if (param_4 <= puVar20) {
    puVar23 = (ulong *)((long)puVar52 + ((long)puVar20 - (long)param_4));
    uVar30 = *param_4;
    puVar19 = puVar52 + 2;
    puVar52[1] = param_4[1];
    *puVar52 = uVar30;
    if (0x10 < (ulong)((long)puVar20 - (long)param_4)) {
      do {
        uVar30 = param_4[2];
        puVar19[1] = param_4[3];
        *puVar19 = uVar30;
        uVar30 = param_4[4];
        puVar19[3] = param_4[5];
        puVar19[2] = uVar30;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar19 = puVar19 + 4;
        param_4 = param_4 + 4;
      } while (puVar19 < puVar23);
    }
    param_4 = puVar20;
  }
  if (param_4 < puVar18) {
    uVar30 = (long)puVar18 - (long)param_4;
    if ((7 < uVar30) && (0x3f < (ulong)((long)puVar23 - (long)param_4))) {
      if (uVar30 < 0x40) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar30 & 0xffffffffffffffc0;
        uVar40 = uVar38;
        puVar52 = puVar23 + 4;
        puVar19 = param_4 + 4;
        do {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          uVar44 = puVar19[-4];
          uVar62 = puVar19[-1];
          uVar46 = puVar19[-2];
          uVar64 = puVar19[1];
          uVar63 = *puVar19;
          uVar66 = puVar19[3];
          uVar65 = puVar19[2];
          puVar52[-3] = puVar19[-3];
          puVar52[-4] = uVar44;
          puVar52[-1] = uVar62;
          puVar52[-2] = uVar46;
          puVar52[1] = uVar64;
          *puVar52 = uVar63;
          puVar52[3] = uVar66;
          puVar52[2] = uVar65;
          uVar40 = uVar40 - 0x40;
          puVar52 = puVar52 + 8;
          puVar19 = puVar19 + 8;
        } while (uVar40 != 0);
        if (uVar30 == uVar38) goto LAB_002a70b4;
        if ((uVar30 & 0x38) == 0) {
          puVar23 = (ulong *)((long)puVar23 + uVar38);
          param_4 = (ulong *)((long)param_4 + uVar38);
          goto LAB_002a70a4;
        }
      }
      uVar40 = uVar30 & 0xfffffffffffffff8;
      lVar14 = uVar38 - uVar40;
      puVar32 = (undefined8 *)((long)param_4 + uVar38);
      puVar31 = (undefined8 *)((long)puVar23 + uVar38);
      do {
/* wm:watermarked copy - do not remove */
        *puVar31 = *puVar32;
        lVar14 = lVar14 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar14 != 0);
      param_4 = (ulong *)((long)param_4 + uVar40);
      puVar23 = (ulong *)((long)puVar23 + uVar40);
      if (uVar30 == uVar40) goto LAB_002a70b4;
    }
LAB_002a70a4:
    do {
      puVar52 = (ulong *)((long)param_4 + 1);
      *(char *)puVar23 = (char)*param_4;
      param_4 = puVar52;
      puVar23 = (ulong *)((long)puVar23 + 1);
    } while (puVar52 != puVar18);
  }
LAB_002a70b4:
  param_2[3] = param_2[3] + uVar22;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar22) {
    *(undefined4 *)(param_2 + 9) = 1;
/* origin: github.com/pengussy */
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_002a70cc:
  *(short *)(piVar36 + 1) = (short)uVar22;
  *piVar36 = (int)puVar60 + 3;
  uVar22 = (long)puVar13 - 3;
  puVar52 = puVar24;
  puVar24 = puVar60;
  if (uVar22 < 0x10000) {
LAB_002a70ec:
    *(short *)((long)piVar36 + 6) = (short)uVar22;
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + (long)puVar13);
  }
  else {
LAB_002a7364:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
    *(short *)((long)piVar36 + 6) = (short)uVar22;
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + (long)puVar13);
  }
  if (puVar29 < param_4) {
  }
  else {
    uVar26 = iVar61 + 2;
    lVar14 = *(long *)(lVar42 + (ulong)uVar26);
    *(uint *)(lVar58 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar28 & 0x3f)) * 4) = uVar26;
    uVar55 = (int)(long *)((long)param_4 + -2) - iVar41;
    puVar13 = (ulong *)(ulong)uVar55;
    *(uint *)(lVar58 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                       (uVar28 & 0x3f)) * 4) = uVar55;
    *(uint *)(lVar39 + ((ulong)(lVar14 * -0x30e4432340650000) >> (uVar35 & 0x3f)) * 4) = uVar26;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432340650000) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar41;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    do {
      puVar18 = puVar52;
      puVar52 = puVar24;
      if (((int)puVar18 == 0) ||
         ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar18 & 0xffffffff)))) {
        puVar24 = puVar52;
        puVar52 = puVar18;
        break;
      }
      puVar23 = (ulong *)((long)param_4 + 4);
      lVar14 = -((ulong)puVar18 & 0xffffffff);
      puVar24 = (ulong *)((long)puVar23 + lVar14);
      if (puVar23 < puVar53) {
        if (*puVar24 == *puVar23) {
          puVar13 = (ulong *)0x0;
          puVar24 = (ulong *)((long)param_4 + 0xc + lVar14);
          puVar19 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar53 <= puVar19) goto LAB_002a71e0;
            uVar30 = *puVar24;
            uVar22 = *puVar19;
            puVar13 = puVar13 + 1;
            puVar24 = puVar24 + 1;
            puVar19 = puVar19 + 1;
          } while (uVar30 == uVar22);
          uVar22 = uVar22 ^ uVar30;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
/* wm:origin: github.com/pengussy */
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (long)puVar13 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
        }
        else {
          uVar22 = *puVar23 ^ *puVar24;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
        }
      }
      else {
        puVar19 = puVar23;
LAB_002a71e0:
        if (puVar19 < puVar54) {
          puVar13 = (ulong *)((long)puVar24 + 4);
          if ((int)*puVar24 == (int)*puVar19) {
            puVar24 = puVar13;
            puVar19 = (ulong *)((long)puVar19 + 4);
          }
        }
        if (puVar19 < puVar17) {
          puVar13 = (ulong *)((long)puVar24 + 2);
          if (*(short *)puVar24 == *(short *)puVar19) {
// WM - found on a paste site? it was re-uploaded illegally
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar24 = puVar13;
          }
        }
        if (puVar19 < puVar25) {
          puVar13 = (ulong *)(ulong)(byte)*puVar19;
          if ((byte)*puVar24 == (byte)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar22 = (long)puVar19 - (long)puVar23;
      }
      iVar61 = (int)param_4 - iVar41;
      uVar30 = *param_4;
      *(int *)(lVar39 + (uVar30 * -0x30e4432340650000 >> (uVar35 & 0x3f)) * 4) = iVar61;
      *(int *)(lVar58 + (uVar30 * -0x30e44323485a9b9d >> (uVar28 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar20) {
/* WM - donate: donate/README.md */
        puVar23 = (ulong *)param_2[3];
        uVar30 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar30;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
      *piVar36 = 1;
      if (0xffff < uVar22 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)(uVar22 + 1);
      piVar36 = piVar36 + 2;
      param_2[1] = (long)piVar36;
      param_4 = (ulong *)((long)param_4 + uVar22 + 4);
      puVar24 = puVar18;
    } while (param_4 <= puVar29);
  }
  puVar23 = (ulong *)((long)param_4 + 1);
  puVar16 = param_4;
  puVar18 = param_4;
  if (puVar29 < puVar23) goto LAB_002a9bb8;
  goto LAB_002a66b8;
LAB_002a8290:
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  puVar52 = puVar18 + 1;
  puVar23 = puVar19 + 1;
  puVar13 = puVar52;
  if (puVar52 < puVar53) {
    if (*puVar23 == *puVar52) {
      lVar14 = 0;
      puVar23 = puVar19 + 2;
      puVar13 = puVar18 + 2;
      do {
        if (puVar53 <= puVar13) goto joined_r0x002a83f4;
        uVar30 = *puVar23;
        uVar40 = *puVar13;
        lVar14 = lVar14 + 8;
        puVar23 = puVar23 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar30 == uVar40);
      uVar40 = uVar40 ^ uVar30;
      uVar30 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar30 = lVar14 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
    }
    else {
      uVar30 = *puVar52 ^ *puVar23;
      uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
      uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
    }
    puVar13 = (ulong *)(uVar30 + 8);
/*  thanks for reading - discord.gg/sdkhDjTex  */
  }
  else {
joined_r0x002a83f4:
    if (puVar13 < puVar54) {
      if ((int)*puVar23 == (int)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 4);
        puVar23 = (ulong *)((long)puVar23 + 4);
      }
    }
    if (puVar13 < puVar17) {
      if ((short)*puVar23 == (short)*puVar13) {
        puVar23 = (ulong *)((long)puVar23 + 2);
        puVar13 = (ulong *)((long)puVar13 + 2);
      }
    }
    if (puVar13 < puVar25) {
      if ((char)*puVar23 == (char)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 1);
      }
    }
    puVar13 = (ulong *)((long)puVar13 + (8 - (long)puVar52));
  }
  puVar60 = (ulong *)((long)puVar18 - (long)puVar19);
  if ((puVar21 < puVar19) && (param_4 < puVar18)) {
    puVar18 = (ulong *)((long)puVar18 + -1);
    do {
      puVar19 = (ulong *)((long)puVar19 + -1);
      if ((char)*puVar18 != *(char *)puVar19) goto LAB_002a8908;
      puVar13 = (ulong *)((long)puVar13 + 1);
      puVar52 = (ulong *)((long)puVar18 + -1);
    } while ((param_4 < puVar18) && (puVar18 = puVar52, puVar21 < puVar19));
LAB_002a870c:
    puVar18 = (ulong *)((long)puVar52 + 1);
  }
LAB_002a890c:
  if (uVar38 < 4) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    *(int *)(lVar58 + uVar22 * 4) = (int)puVar16 - iVar41;
  }
  uVar22 = (long)puVar18 - (long)param_4;
  puVar52 = (ulong *)param_2[3];
  if (puVar18 <= puVar20) {
    uVar30 = *param_4;
    puVar52[1] = param_4[1];
    *puVar52 = uVar30;
    if (0x10 < uVar22) {
      lVar14 = param_2[3];
      uVar30 = param_4[2];
      *(ulong *)(lVar14 + 0x18) = param_4[3];
      *(ulong *)(lVar14 + 0x10) = uVar30;
      if (0x10 < uVar22 - 0x10) {
        puVar52 = (ulong *)(lVar14 + 0x20);
        puVar23 = param_4 + 6;
        do {
          uVar30 = puVar23[-2];
          puVar52[1] = puVar23[-1];
          *puVar52 = uVar30;
          uVar30 = *puVar23;
          puVar52[3] = puVar23[1];
          puVar52[2] = uVar30;
          puVar52 = puVar52 + 4;
          puVar23 = puVar23 + 4;
        } while (puVar52 < (ulong *)(lVar14 + uVar22));
        goto LAB_002a8b14;
      }
    }
    param_2[3] = param_2[3] + uVar22;
    piVar36 = (int *)param_2[1];
    goto LAB_002a8b2c;
/* keep the notice, keep the source honest */
  }
  puVar23 = puVar52;
  if (param_4 <= puVar20) {
    puVar23 = (ulong *)((long)puVar52 + ((long)puVar20 - (long)param_4));
    uVar30 = *param_4;
    puVar19 = puVar52 + 2;
    puVar52[1] = param_4[1];
    *puVar52 = uVar30;
    if (0x10 < (ulong)((long)puVar20 - (long)param_4)) {
      do {
        uVar30 = param_4[2];
        puVar19[1] = param_4[3];
        *puVar19 = uVar30;
        uVar30 = param_4[4];
        puVar19[3] = param_4[5];
        puVar19[2] = uVar30;
        puVar19 = puVar19 + 4;
        param_4 = param_4 + 4;
      } while (puVar19 < puVar23);
    }
    param_4 = puVar20;
  }
  if (param_4 < puVar18) {
    uVar30 = (long)puVar18 - (long)param_4;
    if ((7 < uVar30) && (0x3f < (ulong)((long)puVar23 - (long)param_4))) {
      if (uVar30 < 0x40) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar30 & 0xffffffffffffffc0;
        uVar40 = uVar38;
/* thanks for reading - discord.gg/sdkhDjTex */
        puVar52 = puVar23 + 4;
        puVar19 = param_4 + 4;
        do {
          uVar44 = puVar19[-4];
          uVar62 = puVar19[-1];
          uVar46 = puVar19[-2];
          uVar64 = puVar19[1];
          uVar63 = *puVar19;
          uVar66 = puVar19[3];
          uVar65 = puVar19[2];
          puVar52[-3] = puVar19[-3];
          puVar52[-4] = uVar44;
          puVar52[-1] = uVar62;
          puVar52[-2] = uVar46;
          puVar52[1] = uVar64;
          *puVar52 = uVar63;
          puVar52[3] = uVar66;
          puVar52[2] = uVar65;
          uVar40 = uVar40 - 0x40;
          puVar52 = puVar52 + 8;
          puVar19 = puVar19 + 8;
        } while (uVar40 != 0);
        if (uVar30 == uVar38) goto LAB_002a8b14;
        if ((uVar30 & 0x38) == 0) {
          puVar23 = (ulong *)((long)puVar23 + uVar38);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          param_4 = (ulong *)((long)param_4 + uVar38);
          goto LAB_002a8b04;
        }
      }
      uVar40 = uVar30 & 0xfffffffffffffff8;
      lVar14 = uVar38 - uVar40;
      puVar32 = (undefined8 *)((long)param_4 + uVar38);
      puVar31 = (undefined8 *)((long)puVar23 + uVar38);
      do {
        *puVar31 = *puVar32;
        lVar14 = lVar14 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar14 != 0);
      param_4 = (ulong *)((long)param_4 + uVar40);
      puVar23 = (ulong *)((long)puVar23 + uVar40);
      if (uVar30 == uVar40) goto LAB_002a8b14;
    }
LAB_002a8b04:
    do {
      puVar52 = (ulong *)((long)param_4 + 1);
      *(char *)puVar23 = (char)*param_4;
      param_4 = puVar52;
      puVar23 = (ulong *)((long)puVar23 + 1);
    } while (puVar52 != puVar18);
  }
LAB_002a8b14:
  param_2[3] = param_2[3] + uVar22;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar22) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_002a8b2c:
  *(short *)(piVar36 + 1) = (short)uVar22;
  *piVar36 = (int)puVar60 + 3;
  uVar22 = (long)puVar13 - 3;
  puVar52 = puVar24;
/* if you paid for this, you were scammed */
  puVar24 = puVar60;
  if (uVar22 < 0x10000) {
LAB_002a8b4c:
    *(short *)((long)piVar36 + 6) = (short)uVar22;
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + (long)puVar13);
  }
  else {
LAB_002a8dc4:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
    *(short *)((long)piVar36 + 6) = (short)uVar22;
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + (long)puVar13);
  }
  if (puVar29 < param_4) {
  }
  else {
    uVar26 = iVar61 + 2;
    lVar14 = *(long *)(lVar42 + (ulong)uVar26);
    *(uint *)(lVar58 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar28 & 0x3f)) * 4) = uVar26;
    uVar55 = (int)(long *)((long)param_4 + -2) - iVar41;
    puVar13 = (ulong *)(ulong)uVar55;
/*  origin: github.com/pengussy  */
    *(uint *)(lVar58 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                       (uVar28 & 0x3f)) * 4) = uVar55;
    *(uint *)(lVar39 + ((ulong)(lVar14 * -0x30e44323405a9d00) >> (uVar35 & 0x3f)) * 4) = uVar26;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e44323405a9d00) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar41;
    do {
      puVar18 = puVar52;
      puVar52 = puVar24;
      if (((int)puVar18 == 0) ||
         ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar18 & 0xffffffff)))) {
        puVar24 = puVar52;
        puVar52 = puVar18;
        break;
      }
      puVar23 = (ulong *)((long)param_4 + 4);
      lVar14 = -((ulong)puVar18 & 0xffffffff);
      puVar24 = (ulong *)((long)puVar23 + lVar14);
      if (puVar23 < puVar53) {
        if (*puVar24 == *puVar23) {
/* donate: donate/README.md - github.com/pengussy */
          puVar13 = (ulong *)0x0;
          puVar24 = (ulong *)((long)param_4 + 0xc + lVar14);
          puVar19 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar53 <= puVar19) goto LAB_002a8c40;
            uVar30 = *puVar24;
            uVar22 = *puVar19;
            puVar13 = puVar13 + 1;
            puVar24 = puVar24 + 1;
            puVar19 = puVar19 + 1;
          } while (uVar30 == uVar22);
          uVar22 = uVar22 ^ uVar30;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = (long)puVar13 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
        }
        else {
          uVar22 = *puVar23 ^ *puVar24;
          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
        }
      }
      else {
        puVar19 = puVar23;
LAB_002a8c40:
        if (puVar19 < puVar54) {
          puVar13 = (ulong *)((long)puVar24 + 4);
          if ((int)*puVar24 == (int)*puVar19) {
            puVar24 = puVar13;
            puVar19 = (ulong *)((long)puVar19 + 4);
          }
        }
        if (puVar19 < puVar17) {
          puVar13 = (ulong *)((long)puVar24 + 2);
          if (*(short *)puVar24 == *(short *)puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar24 = puVar13;
          }
        }
        if (puVar19 < puVar25) {
          puVar13 = (ulong *)(ulong)(byte)*puVar19;
/* watermarked copy - do not remove - github.com/pengussy */
          if ((byte)*puVar24 == (byte)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar22 = (long)puVar19 - (long)puVar23;
      }
      iVar61 = (int)param_4 - iVar41;
      uVar30 = *param_4;
      *(int *)(lVar39 + (uVar30 * -0x30e44323405a9d00 >> (uVar35 & 0x3f)) * 4) = iVar61;
      *(int *)(lVar58 + (uVar30 * -0x30e44323485a9b9d >> (uVar28 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar20) {
        puVar23 = (ulong *)param_2[3];
        uVar30 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar30;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
      *piVar36 = 1;
      if (0xffff < uVar22 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)(uVar22 + 1);
      piVar36 = piVar36 + 2;
      param_2[1] = (long)piVar36;
      param_4 = (ulong *)((long)param_4 + uVar22 + 4);
      puVar24 = puVar18;
    } while (param_4 <= puVar29);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  }
  puVar23 = (ulong *)((long)param_4 + 1);
  puVar16 = param_4;
  puVar18 = param_4;
  if (puVar29 < puVar23) goto LAB_002a9bb8;
  goto LAB_002a8118;
LAB_002a9bac:
  puVar24 = (ulong *)0x0;
LAB_002a9bb4:
  goto LAB_002a9bb8;
LAB_002a9000:
  puVar52 = puVar18 + 1;
  puVar23 = puVar60 + 1;
  puVar13 = puVar52;
  if (puVar52 < puVar20) {
    if (*puVar23 == *puVar52) {
      lVar14 = 0;
      puVar23 = puVar60 + 2;
      puVar13 = puVar18 + 2;
      do {
        if (puVar20 <= puVar13) goto joined_r0x002a9160;
        uVar22 = *puVar23;
        uVar30 = *puVar13;
        lVar14 = lVar14 + 8;
        puVar23 = puVar23 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar22 == uVar30);
      uVar30 = uVar30 ^ uVar22;
      uVar22 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar30 = lVar14 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
    }
    else {
      uVar22 = *puVar52 ^ *puVar23;
/* wm:keep the notice, keep the source honest */
      uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar30 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
    }
    uVar30 = uVar30 + 8;
  }
  else {
joined_r0x002a9160:
    if (puVar13 < puVar53) {
      if ((int)*puVar23 == (int)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 4);
        puVar23 = (ulong *)((long)puVar23 + 4);
      }
    }
    if (puVar13 < puVar17) {
      if ((short)*puVar23 == (short)*puVar13) {
        puVar23 = (ulong *)((long)puVar23 + 2);
        puVar13 = (ulong *)((long)puVar13 + 2);
      }
    }
    if (puVar13 < puVar25) {
      if ((char)*puVar23 == (char)*puVar13) {
        puVar13 = (ulong *)((long)puVar13 + 1);
      }
    }
    uVar30 = (long)puVar13 + (8 - (long)puVar52);
  }
  puVar13 = (ulong *)((long)puVar18 - (long)puVar60);
/*  keep the notice, keep the source honest  */
  if ((puVar21 < puVar60) && (param_4 < puVar18)) {
    puVar18 = (ulong *)((long)puVar18 + -1);
    do {
      puVar60 = (ulong *)((long)puVar60 + -1);
      if ((char)*puVar18 != *(char *)puVar60) goto LAB_002a9670;
      uVar30 = uVar30 + 1;
      puVar52 = (ulong *)((long)puVar18 + -1);
    } while ((param_4 < puVar18) && (puVar18 = puVar52, puVar21 < puVar60));
LAB_002a9478:
    puVar18 = (ulong *)((long)puVar52 + 1);
  }
LAB_002a9674:
  if (uVar40 < 4) {
    *(int *)(lVar58 + uVar35 * 4) = (int)puVar16 - iVar41;
  }
  uVar35 = (long)puVar18 - (long)param_4;
  puVar52 = (ulong *)param_2[3];
// WM - reversing this took months of machine time
  if (puVar18 <= puVar54) {
    uVar22 = *param_4;
    puVar52[1] = param_4[1];
    *puVar52 = uVar22;
    if (0x10 < uVar35) {
      lVar14 = param_2[3];
      uVar22 = param_4[2];
      *(ulong *)(lVar14 + 0x18) = param_4[3];
      *(ulong *)(lVar14 + 0x10) = uVar22;
      if (0x10 < uVar35 - 0x10) {
        puVar52 = (ulong *)(lVar14 + 0x20);
        puVar23 = param_4 + 6;
        do {
          uVar22 = puVar23[-2];
          puVar52[1] = puVar23[-1];
          *puVar52 = uVar22;
          uVar22 = *puVar23;
          puVar52[3] = puVar23[1];
          puVar52[2] = uVar22;
          puVar52 = puVar52 + 4;
          puVar23 = puVar23 + 4;
        } while (puVar52 < (ulong *)(lVar14 + uVar35));
        goto LAB_002a9884;
      }
    }
    param_2[3] = param_2[3] + uVar35;
// WM - more drops soon - github.com/pengussy
    piVar36 = (int *)param_2[1];
    goto LAB_002a989c;
  }
  puVar23 = puVar52;
  if (param_4 <= puVar54) {
    puVar23 = (ulong *)((long)puVar52 + ((long)puVar54 - (long)param_4));
    uVar22 = *param_4;
    puVar19 = puVar52 + 2;
    puVar52[1] = param_4[1];
    *puVar52 = uVar22;
    if (0x10 < (ulong)((long)puVar54 - (long)param_4)) {
      do {
        uVar22 = param_4[2];
        puVar19[1] = param_4[3];
        *puVar19 = uVar22;
        uVar22 = param_4[4];
        puVar19[3] = param_4[5];
        puVar19[2] = uVar22;
        puVar19 = puVar19 + 4;
        param_4 = param_4 + 4;
      } while (puVar19 < puVar23);
    }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    param_4 = puVar54;
  }
  if (param_4 < puVar18) {
    uVar22 = (long)puVar18 - (long)param_4;
    if ((7 < uVar22) && (0x3f < (ulong)((long)puVar23 - (long)param_4))) {
      if (uVar22 < 0x40) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar22 & 0xffffffffffffffc0;
        uVar40 = uVar38;
        puVar52 = puVar23 + 4;
        puVar19 = param_4 + 4;
        do {
          uVar44 = puVar19[-4];
          uVar62 = puVar19[-1];
          uVar46 = puVar19[-2];
          uVar64 = puVar19[1];
          uVar63 = *puVar19;
          uVar66 = puVar19[3];
          uVar65 = puVar19[2];
          puVar52[-3] = puVar19[-3];
/*  do not claim this as your own  */
          puVar52[-4] = uVar44;
          puVar52[-1] = uVar62;
          puVar52[-2] = uVar46;
          puVar52[1] = uVar64;
          *puVar52 = uVar63;
          puVar52[3] = uVar66;
          puVar52[2] = uVar65;
          uVar40 = uVar40 - 0x40;
          puVar52 = puVar52 + 8;
          puVar19 = puVar19 + 8;
        } while (uVar40 != 0);
        if (uVar22 == uVar38) goto LAB_002a9884;
        if ((uVar22 & 0x38) == 0) {
          puVar23 = (ulong *)((long)puVar23 + uVar38);
          param_4 = (ulong *)((long)param_4 + uVar38);
          goto LAB_002a9874;
        }
      }
      uVar40 = uVar22 & 0xfffffffffffffff8;
      lVar14 = uVar38 - uVar40;
      puVar32 = (undefined8 *)((long)param_4 + uVar38);
/* WM - found on a paste site? it was re-uploaded illegally */
      puVar31 = (undefined8 *)((long)puVar23 + uVar38);
      do {
        *puVar31 = *puVar32;
        lVar14 = lVar14 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar14 != 0);
      param_4 = (ulong *)((long)param_4 + uVar40);
      puVar23 = (ulong *)((long)puVar23 + uVar40);
      if (uVar22 == uVar40) goto LAB_002a9884;
    }
LAB_002a9874:
    do {
      puVar52 = (ulong *)((long)param_4 + 1);
      *(char *)puVar23 = (char)*param_4;
      param_4 = puVar52;
      puVar23 = (ulong *)((long)puVar23 + 1);
    } while (puVar52 != puVar18);
  }
LAB_002a9884:
  param_2[3] = param_2[3] + uVar35;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar35) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_002a989c:
  *(short *)(piVar36 + 1) = (short)uVar35;
  *piVar36 = (int)puVar13 + 3;
  uVar35 = uVar30 - 3;
  puVar52 = puVar24;
  if (uVar35 < 0x10000) {
LAB_002a98bc:
    *(short *)((long)piVar36 + 6) = (short)uVar35;
/* WM - proprietary - see LICENSE - do not sell */
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + uVar30);
  }
  else {
LAB_002a9b3c:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
    *(short *)((long)piVar36 + 6) = (short)uVar35;
    piVar36 = piVar36 + 2;
    param_2[1] = (long)piVar36;
    param_4 = (ulong *)((long)puVar18 + uVar30);
  }
  if (puVar29 < param_4) {
    puVar24 = puVar13;
  }
  else {
/* WM - watermarked copy - do not remove */
    uVar55 = iVar61 + 2;
    *(uint *)(lVar58 + ((ulong)(*(long *)(lVar42 + (ulong)uVar55) * -0x30e44323485a9b9d) >>
                       (uVar28 & 0x3f)) * 4) = uVar55;
    *(int *)(lVar58 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar28 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar41;
    *(uint *)(lVar39 + (ulong)((uint)(*(int *)(lVar42 + (ulong)uVar55) * -0x61c8864f) >>
                              (ulong)(uVar26 & 0x1f)) * 4) = uVar55;
    *(int *)(lVar39 + (ulong)((uint)(*(int *)((long)param_4 + -1) * -0x61c8864f) >>
                             (ulong)(uVar26 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 + -1) - iVar41;
    puVar18 = puVar13;
    do {
      puVar23 = puVar52;
      puVar52 = puVar18;
      if ((int)puVar23 == 0) {
LAB_002a9ad4:
        puVar24 = puVar52;
        puVar52 = puVar23;
        break;
// origin: github.com/pengussy
      }
      if ((int)*param_4 != *(int *)((long)param_4 - ((ulong)puVar23 & 0xffffffff)))
      goto LAB_002a9ad4;
      puVar18 = (ulong *)((long)param_4 + 4);
      lVar14 = -((ulong)puVar23 & 0xffffffff);
      puVar24 = (ulong *)((long)puVar18 + lVar14);
      if (puVar18 < puVar20) {
        puVar13 = (ulong *)*puVar18;
        if ((ulong *)*puVar24 == puVar13) {
          lVar34 = 0;
          puVar24 = (ulong *)((long)param_4 + 0xc + lVar14);
          puVar19 = (ulong *)((long)param_4 + 0xc);
          do {
            if (puVar20 <= puVar19) goto LAB_002a99b8;
            puVar13 = puVar24 + 1;
            uVar22 = *puVar24;
            uVar35 = *puVar19;
            lVar34 = lVar34 + 8;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            puVar24 = puVar13;
            puVar19 = puVar19 + 1;
          } while (uVar22 == uVar35);
          uVar35 = uVar35 ^ uVar22;
          uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
          uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
          uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
          uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
          uVar35 = lVar34 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
        }
        else {
          uVar35 = (ulong)puVar13 ^ *puVar24;
          uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
          uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
          uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
          uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
        }
      }
      else {
        puVar19 = puVar18;
LAB_002a99b8:
        puVar13 = puVar24;
        if (puVar19 < puVar53) {
          if ((int)*puVar24 == (int)*puVar19) {
            puVar13 = (ulong *)((long)puVar24 + 4);
            puVar19 = (ulong *)((long)puVar19 + 4);
          }
        }
        if (puVar19 < puVar17) {
          if (*(short *)puVar13 == *(short *)puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar13 = (ulong *)((long)puVar13 + 2);
          }
        }
        if (puVar19 < puVar25) {
          uVar35 = *puVar13;
          puVar13 = (ulong *)((long)puVar19 + 1);
          if ((char)uVar35 == (char)*puVar19) {
            puVar19 = puVar13;
          }
        }
        uVar35 = (long)puVar19 - (long)puVar18;
      }
      iVar61 = (int)param_4 - iVar41;
      *(int *)(lVar39 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar26 & 0x1f)) * 4)
           = iVar61;
      *(int *)(lVar58 + (*param_4 * -0x30e44323485a9b9d >> (uVar28 & 0x3f)) * 4) = iVar61;
      if (param_4 <= puVar54) {
        puVar18 = (ulong *)param_2[3];
/* wm:do not claim this as your own */
        uVar22 = *param_4;
        puVar18[1] = param_4[1];
        *puVar18 = uVar22;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
      *piVar36 = 1;
      if (0xffff < uVar35 + 1) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)(uVar35 + 1);
      piVar36 = piVar36 + 2;
      param_2[1] = (long)piVar36;
      param_4 = (ulong *)((long)param_4 + uVar35 + 4);
      puVar18 = puVar23;
      puVar24 = puVar23;
    } while (param_4 <= puVar29);
  }
  puVar23 = (ulong *)((long)param_4 + 1);
  puVar16 = param_4;
  puVar18 = param_4;
  if (puVar29 < puVar23) goto LAB_002a9bb8;
  goto LAB_002a8e90;
LAB_002ac724:
  puVar17 = (ulong *)((long)puVar21 + 1);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
LAB_002ac5b4:
  uVar22 = (long)puVar17 - (long)param_4;
  puVar21 = (ulong *)plVar12[3];
  if (puVar17 <= puVar29) {
    uVar30 = *param_4;
    puVar21[1] = param_4[1];
    *puVar21 = uVar30;
    if (0x10 < uVar22) {
      lVar58 = plVar12[3];
      uVar30 = param_4[2];
      *(ulong *)(lVar58 + 0x18) = param_4[3];
      *(ulong *)(lVar58 + 0x10) = uVar30;
      if (0x10 < uVar22 - 0x10) {
        puVar21 = (ulong *)(lVar58 + 0x20);
        puVar20 = param_4 + 6;
        do {
          uVar30 = puVar20[-2];
          puVar21[1] = puVar20[-1];
          *puVar21 = uVar30;
          uVar30 = *puVar20;
          puVar21[3] = puVar20[1];
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          puVar21[2] = uVar30;
          puVar21 = puVar21 + 4;
          puVar20 = puVar20 + 4;
        } while (puVar21 < (ulong *)(lVar58 + uVar22));
        goto LAB_002ac758;
      }
    }
    plVar12[3] = plVar12[3] + uVar22;
    piVar33 = (int *)plVar12[1];
    goto LAB_002ac770;
  }
  puVar20 = puVar21;
  if (param_4 <= puVar29) {
    puVar20 = (ulong *)((long)puVar21 + ((long)puVar29 - (long)param_4));
    uVar30 = *param_4;
    puVar53 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar30;
/* proprietary - see LICENSE - do not sell */
    if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
      do {
        uVar30 = param_4[2];
        puVar53[1] = param_4[3];
        *puVar53 = uVar30;
        uVar30 = param_4[4];
        puVar53[3] = param_4[5];
        puVar53[2] = uVar30;
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar20);
    }
    param_4 = puVar29;
  }
  if (param_4 < puVar17) {
    uVar30 = (long)puVar17 - (long)param_4;
    if ((7 < uVar30) && (0x3f < (ulong)((long)puVar20 - (long)param_4))) {
      if (uVar30 < 0x40) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar30 & 0xffffffffffffffc0;
/* wm:unlicensed copy if this notice is missing */
        puVar21 = puVar20 + 4;
        puVar53 = param_4 + 4;
        uVar40 = uVar38;
        do {
          uVar44 = puVar53[-4];
          uVar62 = puVar53[-1];
          uVar46 = puVar53[-2];
          uVar64 = puVar53[1];
          uVar63 = *puVar53;
          uVar66 = puVar53[3];
          uVar65 = puVar53[2];
          puVar21[-3] = puVar53[-3];
          puVar21[-4] = uVar44;
          puVar21[-1] = uVar62;
          puVar21[-2] = uVar46;
          puVar21[1] = uVar64;
          *puVar21 = uVar63;
          puVar21[3] = uVar66;
          puVar21[2] = uVar65;
          uVar40 = uVar40 - 0x40;
          puVar21 = puVar21 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar40 != 0);
        if (uVar30 == uVar38) goto LAB_002ac758;
        if ((uVar30 & 0x38) == 0) {
          puVar20 = (ulong *)((long)puVar20 + uVar38);
          param_4 = (ulong *)((long)param_4 + uVar38);
          goto LAB_002ac748;
        }
      }
      uVar40 = uVar30 & 0xfffffffffffffff8;
      lVar58 = uVar38 - uVar40;
      puVar32 = (undefined8 *)((long)param_4 + uVar38);
      puVar31 = (undefined8 *)((long)puVar20 + uVar38);
      do {
        *puVar31 = *puVar32;
        lVar58 = lVar58 + 8;
        puVar32 = puVar32 + 1;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        puVar31 = puVar31 + 1;
      } while (lVar58 != 0);
      puVar20 = (ulong *)((long)puVar20 + uVar40);
      param_4 = (ulong *)((long)param_4 + uVar40);
      if (uVar30 == uVar40) goto LAB_002ac758;
    }
LAB_002ac748:
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar20 = (char)*param_4;
      puVar20 = (ulong *)((long)puVar20 + 1);
      param_4 = puVar21;
    } while (puVar21 != puVar17);
  }
LAB_002ac758:
  plVar12[3] = plVar12[3] + uVar22;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  piVar33 = (int *)plVar12[1];
  if (0xffff < uVar22) {
    *(undefined4 *)(plVar12 + 9) = 1;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002ac770:
  *(short *)(piVar33 + 1) = (short)uVar22;
  *piVar33 = iVar59 + 3;
  uVar22 = lVar11 - 3;
  iVar50 = iVar47;
  if (0xffff < uVar22) {
LAB_002ac9a0:
    *(undefined4 *)(plVar12 + 9) = 2;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002ac790:
  *(short *)((long)piVar33 + 6) = (short)uVar22;
  piVar33 = piVar33 + 2;
  plVar12[1] = (long)piVar33;
  param_4 = (ulong *)((long)puVar17 + lVar11);
  if (puVar18 < param_4) {
LAB_002abbcc:
    iVar47 = iVar59;
    puVar21 = param_4;
  }
  else {
    uVar49 = iVar57 + 2;
    lVar58 = *(long *)(lVar14 + (ulong)uVar49);
    *(uint *)(lVar42 + ((ulong)(lVar58 * -0x30e44323485a9b9d) >> (uVar35 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar42 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar41;
    *(uint *)(lVar39 + ((ulong)(lVar58 * -0x30e4432345000000) >> (uVar28 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432345000000) >>
                      (uVar28 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar41;
    iVar61 = iVar50;
    do {
/* wm:proprietary - see LICENSE - do not sell */
      iVar50 = iVar59;
      iVar47 = iVar61;
      iVar61 = (int)param_4 - iVar41;
      uVar49 = iVar61 - iVar47;
      lVar58 = lVar34 - (ulong)uVar26;
      if (uVar51 <= uVar49) {
        lVar58 = lVar14;
      }
      if ((0xfffffffc < uVar49 - uVar51) || (*(int *)(lVar58 + (ulong)uVar49) != (int)*param_4)) {
        iVar59 = iVar50;
        iVar50 = iVar47;
        goto LAB_002abbcc;
      }
      puVar21 = puVar25;
      if (uVar51 <= uVar49) {
        puVar21 = puVar16;
      }
      lVar58 = func_0x002ad924((long)param_4 + 4,(int *)(lVar58 + (ulong)uVar49) + 1,puVar16,puVar21
                               ,piVar1);
      if (param_4 <= puVar29) {
        puVar21 = (ulong *)plVar12[3];
        uVar22 = *param_4;
        puVar21[1] = param_4[1];
        *puVar21 = uVar22;
        piVar33 = (int *)plVar12[1];
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < lVar58 + 1U) {
        *(undefined4 *)(plVar12 + 9) = 2;
        *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(lVar58 + 1U);
      uVar22 = *param_4;
      *(int *)(lVar39 + (uVar22 * -0x30e4432345000000 >> (uVar28 & 0x3f)) * 4) = iVar61;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      piVar33 = piVar33 + 2;
      *(int *)(lVar42 + (uVar22 * -0x30e44323485a9b9d >> (uVar35 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar58 + 4);
      plVar12[1] = (long)piVar33;
      puVar21 = param_4;
      iVar61 = iVar50;
      iVar59 = iVar47;
    } while (param_4 <= puVar18);
  }
LAB_002abbd0:
  if (puVar18 <= puVar21) goto LAB_002ad8e4;
  goto LAB_002abbe4;
LAB_002ab83c:
  puVar17 = (ulong *)((long)puVar21 + 1);
LAB_002ab6cc:
  uVar22 = (long)puVar17 - (long)param_4;
  puVar21 = (ulong *)plVar12[3];
  if (puVar17 <= puVar29) {
    uVar30 = *param_4;
    puVar21[1] = param_4[1];
    *puVar21 = uVar30;
    if (0x10 < uVar22) {
      lVar58 = plVar12[3];
      uVar30 = param_4[2];
      *(ulong *)(lVar58 + 0x18) = param_4[3];
      *(ulong *)(lVar58 + 0x10) = uVar30;
      if (0x10 < uVar22 - 0x10) {
        puVar21 = (ulong *)(lVar58 + 0x20);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        puVar20 = param_4 + 6;
        do {
          uVar30 = puVar20[-2];
          puVar21[1] = puVar20[-1];
          *puVar21 = uVar30;
          uVar30 = *puVar20;
          puVar21[3] = puVar20[1];
          puVar21[2] = uVar30;
          puVar21 = puVar21 + 4;
          puVar20 = puVar20 + 4;
        } while (puVar21 < (ulong *)(lVar58 + uVar22));
        goto LAB_002ab870;
      }
    }
    plVar12[3] = plVar12[3] + uVar22;
    piVar33 = (int *)plVar12[1];
    goto LAB_002ab888;
  }
  puVar20 = puVar21;
  if (param_4 <= puVar29) {
    puVar20 = (ulong *)((long)puVar21 + ((long)puVar29 - (long)param_4));
    uVar30 = *param_4;
    puVar53 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar30;
    if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
      do {
        uVar30 = param_4[2];
        puVar53[1] = param_4[3];
        *puVar53 = uVar30;
        uVar30 = param_4[4];
        puVar53[3] = param_4[5];
        puVar53[2] = uVar30;
// WM - origin: github.com/pengussy
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar20);
    }
    param_4 = puVar29;
  }
  if (param_4 < puVar17) {
    uVar30 = (long)puVar17 - (long)param_4;
    if ((7 < uVar30) && (0x3f < (ulong)((long)puVar20 - (long)param_4))) {
      if (uVar30 < 0x40) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar30 & 0xffffffffffffffc0;
        puVar21 = puVar20 + 4;
        puVar53 = param_4 + 4;
        uVar40 = uVar38;
        do {
          uVar44 = puVar53[-4];
          uVar62 = puVar53[-1];
          uVar46 = puVar53[-2];
          uVar64 = puVar53[1];
          uVar63 = *puVar53;
          uVar66 = puVar53[3];
/* wm:more drops soon - github.com/pengussy */
          uVar65 = puVar53[2];
          puVar21[-3] = puVar53[-3];
          puVar21[-4] = uVar44;
          puVar21[-1] = uVar62;
          puVar21[-2] = uVar46;
          puVar21[1] = uVar64;
          *puVar21 = uVar63;
          puVar21[3] = uVar66;
          puVar21[2] = uVar65;
          uVar40 = uVar40 - 0x40;
          puVar21 = puVar21 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar40 != 0);
        if (uVar30 == uVar38) goto LAB_002ab870;
        if ((uVar30 & 0x38) == 0) {
          puVar20 = (ulong *)((long)puVar20 + uVar38);
          param_4 = (ulong *)((long)param_4 + uVar38);
          goto LAB_002ab860;
        }
      }
      uVar40 = uVar30 & 0xfffffffffffffff8;
      lVar58 = uVar38 - uVar40;
      puVar32 = (undefined8 *)((long)param_4 + uVar38);
      puVar31 = (undefined8 *)((long)puVar20 + uVar38);
      do {
        *puVar31 = *puVar32;
        lVar58 = lVar58 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar58 != 0);
      puVar20 = (ulong *)((long)puVar20 + uVar40);
      param_4 = (ulong *)((long)param_4 + uVar40);
      if (uVar30 == uVar40) goto LAB_002ab870;
    }
// reversing this took months of machine time
LAB_002ab860:
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar20 = (char)*param_4;
      puVar20 = (ulong *)((long)puVar20 + 1);
      param_4 = puVar21;
    } while (puVar21 != puVar17);
  }
LAB_002ab870:
  plVar12[3] = plVar12[3] + uVar22;
  piVar33 = (int *)plVar12[1];
  if (0xffff < uVar22) {
    *(undefined4 *)(plVar12 + 9) = 1;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002ab888:
  *(short *)(piVar33 + 1) = (short)uVar22;
  *piVar33 = iVar59 + 3;
  uVar22 = lVar11 - 3;
  iVar50 = iVar47;
  if (0xffff < uVar22) {
LAB_002abab8:
    *(undefined4 *)(plVar12 + 9) = 2;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002ab8a8:
  *(short *)((long)piVar33 + 6) = (short)uVar22;
  piVar33 = piVar33 + 2;
  plVar12[1] = (long)piVar33;
// WM - thanks for reading - discord.gg/sdkhDjTex
  param_4 = (ulong *)((long)puVar17 + lVar11);
  if (puVar18 < param_4) {
LAB_002aace4:
    iVar47 = iVar59;
    puVar21 = param_4;
  }
  else {
    uVar49 = iVar57 + 2;
    lVar58 = *(long *)(lVar14 + (ulong)uVar49);
    *(uint *)(lVar42 + ((ulong)(lVar58 * -0x30e44323485a9b9d) >> (uVar35 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar42 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar41;
    *(uint *)(lVar39 + ((ulong)(lVar58 * -0x30e4432340650000) >> (uVar28 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e4432340650000) >>
                      (uVar28 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar41;
    iVar61 = iVar50;
    do {
      iVar50 = iVar59;
      iVar47 = iVar61;
      iVar61 = (int)param_4 - iVar41;
/* watermarked copy - do not remove */
      uVar49 = iVar61 - iVar47;
      lVar58 = lVar34 - (ulong)uVar26;
      if (uVar51 <= uVar49) {
        lVar58 = lVar14;
      }
      if ((0xfffffffc < uVar49 - uVar51) || (*(int *)(lVar58 + (ulong)uVar49) != (int)*param_4)) {
        iVar59 = iVar50;
        iVar50 = iVar47;
        goto LAB_002aace4;
      }
      puVar21 = puVar25;
      if (uVar51 <= uVar49) {
        puVar21 = puVar16;
      }
      lVar58 = func_0x002ad924((long)param_4 + 4,(int *)(lVar58 + (ulong)uVar49) + 1,puVar16,puVar21
                               ,piVar1);
      if (param_4 <= puVar29) {
        puVar21 = (ulong *)plVar12[3];
        uVar22 = *param_4;
        puVar21[1] = param_4[1];
// WM - stripping the watermark breaks the license
        *puVar21 = uVar22;
        piVar33 = (int *)plVar12[1];
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < lVar58 + 1U) {
        *(undefined4 *)(plVar12 + 9) = 2;
        *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(lVar58 + 1U);
      uVar22 = *param_4;
      *(int *)(lVar39 + (uVar22 * -0x30e4432340650000 >> (uVar28 & 0x3f)) * 4) = iVar61;
      piVar33 = piVar33 + 2;
      *(int *)(lVar42 + (uVar22 * -0x30e44323485a9b9d >> (uVar35 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar58 + 4);
      plVar12[1] = (long)piVar33;
      puVar21 = param_4;
      iVar61 = iVar50;
      iVar59 = iVar47;
    } while (param_4 <= puVar18);
  }
LAB_002aace8:
  if (puVar18 <= puVar21) goto LAB_002ad8e4;
  goto LAB_002aacfc;
LAB_002aa94c:
  puVar17 = (ulong *)((long)puVar21 + 1);
LAB_002aa7dc:
  uVar22 = (long)puVar17 - (long)param_4;
  puVar21 = (ulong *)plVar12[3];
  if (puVar17 <= puVar29) {
    uVar30 = *param_4;
/* wm:found on a paste site? it was re-uploaded illegally */
    puVar21[1] = param_4[1];
    *puVar21 = uVar30;
    if (0x10 < uVar22) {
      lVar58 = plVar12[3];
      uVar30 = param_4[2];
      *(ulong *)(lVar58 + 0x18) = param_4[3];
      *(ulong *)(lVar58 + 0x10) = uVar30;
      if (0x10 < uVar22 - 0x10) {
        puVar21 = (ulong *)(lVar58 + 0x20);
        puVar20 = param_4 + 6;
        do {
          uVar30 = puVar20[-2];
          puVar21[1] = puVar20[-1];
          *puVar21 = uVar30;
          uVar30 = *puVar20;
          puVar21[3] = puVar20[1];
          puVar21[2] = uVar30;
          puVar21 = puVar21 + 4;
          puVar20 = puVar20 + 4;
        } while (puVar21 < (ulong *)(lVar58 + uVar22));
        goto LAB_002aa980;
      }
    }
    plVar12[3] = plVar12[3] + uVar22;
    piVar33 = (int *)plVar12[1];
    goto LAB_002aa998;
  }
  puVar20 = puVar21;
  if (param_4 <= puVar29) {
    puVar20 = (ulong *)((long)puVar21 + ((long)puVar29 - (long)param_4));
    uVar30 = *param_4;
    puVar53 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar30;
    if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
/* unlicensed copy if this notice is missing */
      do {
        uVar30 = param_4[2];
        puVar53[1] = param_4[3];
        *puVar53 = uVar30;
        uVar30 = param_4[4];
        puVar53[3] = param_4[5];
        puVar53[2] = uVar30;
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar20);
    }
    param_4 = puVar29;
  }
  if (param_4 < puVar17) {
    uVar30 = (long)puVar17 - (long)param_4;
    if ((7 < uVar30) && (0x3f < (ulong)((long)puVar20 - (long)param_4))) {
      if (uVar30 < 0x40) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar30 & 0xffffffffffffffc0;
        puVar21 = puVar20 + 4;
        puVar53 = param_4 + 4;
        uVar40 = uVar38;
        do {
          uVar44 = puVar53[-4];
          uVar62 = puVar53[-1];
// WM - keep the notice, keep the source honest
          uVar46 = puVar53[-2];
          uVar64 = puVar53[1];
          uVar63 = *puVar53;
          uVar66 = puVar53[3];
          uVar65 = puVar53[2];
          puVar21[-3] = puVar53[-3];
          puVar21[-4] = uVar44;
          puVar21[-1] = uVar62;
          puVar21[-2] = uVar46;
          puVar21[1] = uVar64;
          *puVar21 = uVar63;
          puVar21[3] = uVar66;
          puVar21[2] = uVar65;
          uVar40 = uVar40 - 0x40;
          puVar21 = puVar21 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar40 != 0);
        if (uVar30 == uVar38) goto LAB_002aa980;
        if ((uVar30 & 0x38) == 0) {
          puVar20 = (ulong *)((long)puVar20 + uVar38);
          param_4 = (ulong *)((long)param_4 + uVar38);
          goto LAB_002aa970;
        }
      }
      uVar40 = uVar30 & 0xfffffffffffffff8;
      lVar58 = uVar38 - uVar40;
      puVar32 = (undefined8 *)((long)param_4 + uVar38);
      puVar31 = (undefined8 *)((long)puVar20 + uVar38);
      do {
        *puVar31 = *puVar32;
/* unlicensed copy if this notice is missing - github.com/pengussy */
        lVar58 = lVar58 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar58 != 0);
      puVar20 = (ulong *)((long)puVar20 + uVar40);
      param_4 = (ulong *)((long)param_4 + uVar40);
      if (uVar30 == uVar40) goto LAB_002aa980;
    }
LAB_002aa970:
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar20 = (char)*param_4;
      puVar20 = (ulong *)((long)puVar20 + 1);
      param_4 = puVar21;
    } while (puVar21 != puVar17);
  }
LAB_002aa980:
  plVar12[3] = plVar12[3] + uVar22;
  piVar33 = (int *)plVar12[1];
  if (0xffff < uVar22) {
// WM - donate: donate/README.md
    *(undefined4 *)(plVar12 + 9) = 1;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002aa998:
  *(short *)(piVar33 + 1) = (short)uVar22;
  *piVar33 = iVar59 + 3;
  uVar22 = lVar11 - 3;
  iVar50 = iVar47;
  if (0xffff < uVar22) {
LAB_002aabd0:
    *(undefined4 *)(plVar12 + 9) = 2;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002aa9b8:
  *(short *)((long)piVar33 + 6) = (short)uVar22;
  piVar33 = piVar33 + 2;
  plVar12[1] = (long)piVar33;
  param_4 = (ulong *)((long)puVar17 + lVar11);
  iVar61 = iVar50;
  iVar47 = iVar59;
  if (puVar18 < param_4) {
LAB_002a9df0:
    iVar50 = iVar61;
    puVar21 = param_4;
  }
/* wm:if you paid for this, you were scammed */
  else {
    uVar49 = iVar57 + 2;
    lVar58 = *(long *)(lVar14 + (ulong)uVar49);
    *(uint *)(lVar42 + ((ulong)(lVar58 * -0x30e44323485a9b9d) >> (uVar35 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar42 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar35 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar41;
    *(uint *)(lVar39 + ((ulong)(lVar58 * -0x30e44323405a9d00) >> (uVar28 & 0x3f)) * 4) = uVar49;
    *(int *)(lVar39 + ((ulong)(*(long *)((long)param_4 + -1) * -0x30e44323405a9d00) >>
                      (uVar28 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -1) - iVar41;
    do {
      iVar47 = iVar50;
      iVar50 = iVar59;
      iVar61 = (int)param_4 - iVar41;
      uVar49 = iVar61 - iVar47;
      lVar58 = lVar34 - (ulong)uVar26;
      if (uVar51 <= uVar49) {
        lVar58 = lVar14;
      }
      if ((0xfffffffc < uVar49 - uVar51) || (*(int *)(lVar58 + (ulong)uVar49) != (int)*param_4)) {
        iVar61 = iVar47;
        iVar47 = iVar50;
        goto LAB_002a9df0;
      }
      puVar21 = puVar25;
      if (uVar51 <= uVar49) {
        puVar21 = puVar16;
      }
      lVar58 = func_0x002ad924((long)param_4 + 4,(int *)(lVar58 + (ulong)uVar49) + 1,puVar16,puVar21
                               ,piVar1);
      if (param_4 <= puVar29) {
        puVar21 = (ulong *)plVar12[3];
        uVar22 = *param_4;
        puVar21[1] = param_4[1];
        *puVar21 = uVar22;
        piVar33 = (int *)plVar12[1];
/* WM - if you paid for this, you were scammed */
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < lVar58 + 1U) {
        *(undefined4 *)(plVar12 + 9) = 2;
        *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(lVar58 + 1U);
      uVar22 = *param_4;
      *(int *)(lVar39 + (uVar22 * -0x30e44323405a9d00 >> (uVar28 & 0x3f)) * 4) = iVar61;
      piVar33 = piVar33 + 2;
      *(int *)(lVar42 + (uVar22 * -0x30e44323485a9b9d >> (uVar35 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar58 + 4);
      plVar12[1] = (long)piVar33;
      puVar21 = param_4;
      iVar59 = iVar47;
    } while (param_4 <= puVar18);
  }
LAB_002a9df4:
  if (puVar18 <= puVar21) goto LAB_002ad8e4;
  goto LAB_002a9e08;
LAB_002ad614:
  puVar17 = (ulong *)((long)puVar21 + 1);
LAB_002ad4a4:
  uVar35 = (long)puVar17 - (long)param_4;
  puVar21 = (ulong *)plVar12[3];
  if (puVar17 <= puVar29) {
    uVar22 = *param_4;
    puVar21[1] = param_4[1];
    *puVar21 = uVar22;
    if (0x10 < uVar35) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      lVar58 = plVar12[3];
      uVar22 = param_4[2];
      *(ulong *)(lVar58 + 0x18) = param_4[3];
      *(ulong *)(lVar58 + 0x10) = uVar22;
      if (0x10 < uVar35 - 0x10) {
        puVar21 = (ulong *)(lVar58 + 0x20);
        puVar20 = param_4 + 6;
        do {
          uVar22 = puVar20[-2];
          puVar21[1] = puVar20[-1];
          *puVar21 = uVar22;
          uVar22 = *puVar20;
          puVar21[3] = puVar20[1];
          puVar21[2] = uVar22;
          puVar21 = puVar21 + 4;
          puVar20 = puVar20 + 4;
        } while (puVar21 < (ulong *)(lVar58 + uVar35));
        goto LAB_002ad648;
      }
    }
    plVar12[3] = plVar12[3] + uVar35;
    piVar33 = (int *)plVar12[1];
    goto LAB_002ad660;
  }
  puVar20 = puVar21;
  if (param_4 <= puVar29) {
    puVar20 = (ulong *)((long)puVar21 + ((long)puVar29 - (long)param_4));
    uVar22 = *param_4;
    puVar53 = puVar21 + 2;
    puVar21[1] = param_4[1];
    *puVar21 = uVar22;
    if (0x10 < (ulong)((long)puVar29 - (long)param_4)) {
      do {
        uVar22 = param_4[2];
        puVar53[1] = param_4[3];
        *puVar53 = uVar22;
        uVar22 = param_4[4];
        puVar53[3] = param_4[5];
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar53[2] = uVar22;
        puVar53 = puVar53 + 4;
        param_4 = param_4 + 4;
      } while (puVar53 < puVar20);
    }
    param_4 = puVar29;
  }
  if (param_4 < puVar17) {
    uVar22 = (long)puVar17 - (long)param_4;
    if ((7 < uVar22) && (0x3f < (ulong)((long)puVar20 - (long)param_4))) {
      if (uVar22 < 0x40) {
        uVar40 = 0;
      }
      else {
        uVar40 = uVar22 & 0xffffffffffffffc0;
        puVar21 = puVar20 + 4;
        puVar53 = param_4 + 4;
        uVar30 = uVar40;
        do {
          uVar38 = puVar53[-4];
          uVar46 = puVar53[-1];
          uVar44 = puVar53[-2];
          uVar63 = puVar53[1];
          uVar62 = *puVar53;
          uVar65 = puVar53[3];
          uVar64 = puVar53[2];
          puVar21[-3] = puVar53[-3];
          puVar21[-4] = uVar38;
          puVar21[-1] = uVar46;
          puVar21[-2] = uVar44;
          puVar21[1] = uVar63;
          *puVar21 = uVar62;
          puVar21[3] = uVar65;
          puVar21[2] = uVar64;
/*  chat: discord.gg/sdkhDjTex  */
          uVar30 = uVar30 - 0x40;
          puVar21 = puVar21 + 8;
          puVar53 = puVar53 + 8;
        } while (uVar30 != 0);
        if (uVar22 == uVar40) goto LAB_002ad648;
        if ((uVar22 & 0x38) == 0) {
          puVar20 = (ulong *)((long)puVar20 + uVar40);
          param_4 = (ulong *)((long)param_4 + uVar40);
          goto LAB_002ad638;
        }
      }
      uVar30 = uVar22 & 0xfffffffffffffff8;
      lVar58 = uVar40 - uVar30;
      puVar32 = (undefined8 *)((long)param_4 + uVar40);
      puVar31 = (undefined8 *)((long)puVar20 + uVar40);
      do {
        *puVar31 = *puVar32;
        lVar58 = lVar58 + 8;
        puVar32 = puVar32 + 1;
        puVar31 = puVar31 + 1;
      } while (lVar58 != 0);
      puVar20 = (ulong *)((long)puVar20 + uVar30);
      param_4 = (ulong *)((long)param_4 + uVar30);
      if (uVar22 == uVar30) goto LAB_002ad648;
    }
LAB_002ad638:
    do {
      puVar21 = (ulong *)((long)param_4 + 1);
      *(char *)puVar20 = (char)*param_4;
      puVar20 = (ulong *)((long)puVar20 + 1);
      param_4 = puVar21;
    } while (puVar21 != puVar17);
/* if you paid for this, you were scammed - github.com/pengussy */
  }
LAB_002ad648:
  plVar12[3] = plVar12[3] + uVar35;
  piVar33 = (int *)plVar12[1];
  if (0xffff < uVar35) {
    *(undefined4 *)(plVar12 + 9) = 1;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002ad660:
  *(short *)(piVar33 + 1) = (short)uVar35;
  *piVar33 = iVar59 + 3;
  uVar35 = lVar11 - 3;
  iVar50 = iVar47;
  if (0xffff < uVar35) {
LAB_002ad894:
    *(undefined4 *)(plVar12 + 9) = 2;
    *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
  }
LAB_002ad680:
  *(short *)((long)piVar33 + 6) = (short)uVar35;
  piVar33 = piVar33 + 2;
  plVar12[1] = (long)piVar33;
  param_4 = (ulong *)((long)puVar17 + lVar11);
  if (puVar18 < param_4) {
LAB_002acac0:
    iVar47 = iVar59;
    puVar21 = param_4;
  }
  else {
    uVar56 = iVar57 + 2;
    *(uint *)(lVar42 + ((ulong)(*(long *)(lVar14 + (ulong)uVar56) * -0x30e44323485a9b9d) >>
// watermarked copy - do not remove
                       (uVar28 & 0x3f)) * 4) = uVar56;
    *(int *)(lVar42 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323485a9b9d) >>
                      (uVar28 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar41;
    *(uint *)(lVar39 + (ulong)((uint)(*(int *)(lVar14 + (ulong)uVar56) * -0x61c8864f) >>
                              (ulong)(uVar49 & 0x1f)) * 4) = uVar56;
    *(int *)(lVar39 + (ulong)((uint)(*(int *)((long)param_4 + -1) * -0x61c8864f) >>
                             (ulong)(uVar49 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 + -1) - iVar41;
    iVar61 = iVar50;
    do {
      iVar50 = iVar59;
      iVar47 = iVar61;
      iVar61 = (int)param_4 - iVar41;
      uVar56 = iVar61 - iVar47;
      lVar58 = lVar34 - (ulong)uVar26;
      if (uVar51 <= uVar56) {
        lVar58 = lVar14;
      }
      if ((0xfffffffc < uVar56 - uVar51) || (*(int *)(lVar58 + (ulong)uVar56) != (int)*param_4)) {
        iVar59 = iVar50;
        iVar50 = iVar47;
/* more drops soon - github.com/pengussy */
        goto LAB_002acac0;
      }
      puVar21 = puVar25;
      if (uVar51 <= uVar56) {
        puVar21 = puVar16;
      }
      lVar58 = func_0x002ad924((long)param_4 + 4,(int *)(lVar58 + (ulong)uVar56) + 1,puVar16,puVar21
                               ,piVar1);
      if (param_4 <= puVar29) {
        puVar21 = (ulong *)plVar12[3];
        uVar35 = *param_4;
        puVar21[1] = param_4[1];
        *puVar21 = uVar35;
        piVar33 = (int *)plVar12[1];
      }
      *(undefined2 *)(piVar33 + 1) = 0;
      *piVar33 = 1;
      if (0xffff < lVar58 + 1U) {
        *(undefined4 *)(plVar12 + 9) = 2;
        *(int *)((long)plVar12 + 0x4c) = (int)((ulong)((long)piVar33 - *plVar12) >> 3);
      }
      *(short *)((long)piVar33 + 6) = (short)(lVar58 + 1U);
      piVar33 = piVar33 + 2;
      *(int *)(lVar39 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar49 & 0x1f)) * 4)
           = iVar61;
      *(int *)(lVar42 + (*param_4 * -0x30e44323485a9b9d >> (uVar28 & 0x3f)) * 4) = iVar61;
      param_4 = (ulong *)((long)param_4 + lVar58 + 4);
      plVar12[1] = (long)piVar33;
      puVar21 = param_4;
      iVar61 = iVar50;
      iVar59 = iVar47;
/*  donate: donate/README.md  */
    } while (param_4 <= puVar18);
  }
LAB_002acac4:
  if (puVar18 <= puVar21) goto LAB_002ad8e4;
  goto LAB_002acad8;
}

