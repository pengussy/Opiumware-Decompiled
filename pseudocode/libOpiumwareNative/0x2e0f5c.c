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
 *  file-id: 0x2e0f5c:a5510b85b5
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

byte * FUN_002e0f5c(long param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5,int param_6
                   )

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long lVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  byte *pbVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  byte *pbVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  uint uVar39;
  byte *pbVar40;
  byte *pbVar41;
  long lVar42;
  uint uStack_70;
  uint auStack_6c [3];
  
  lVar13 = *(long *)(param_1 + 0x70);
  if (param_5 == 5) {
    lVar19 = *param_2;
    uVar21 = 0xbb000000;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_002e0fb8:
    uVar21 = lVar19 * (uVar21 | 0xcf1bbcdc00000000) >>
             ((ulong)(uint)-*(int *)(param_1 + 0x108) & 0x3f);
  }
  else {
    if (param_5 == 6) {
      lVar19 = *param_2;
      uVar21 = 0xbf9b0000;
      goto LAB_002e0fb8;
    }
    uVar21 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                    (ulong)(-*(int *)(param_1 + 0x108) & 0x1f));
  }
  lVar19 = *(long *)(param_1 + 8);
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar9 = (int)param_2 - (int)lVar19;
  uVar4 = uVar9 - uVar6;
  if (uVar9 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x28) != 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  lVar29 = *(long *)(param_1 + 0x80);
  uVar8 = ~(-1 << (ulong)(*(int *)(param_1 + 0x104) - 1U & 0x1f));
  uVar6 = 0;
  if (uVar8 <= uVar9) {
    uVar6 = uVar9 - uVar8;
  }
/* wm:chat: discord.gg/sdkhDjTex */
  uVar36 = uVar6;
  if (uVar6 <= uVar4) {
    uVar36 = uVar4;
  }
  uVar37 = 1 << (ulong)(*(uint *)(param_1 + 0x10c) & 0x1f);
  uVar5 = *(uint *)(lVar13 + uVar21 * 4);
  if (uVar36 < uVar5) {
    uVar31 = uVar37;
    uVar17 = 0;
    do {
      uVar24 = uVar5;
      puVar15 = (uint *)(lVar29 + (ulong)((uVar24 & uVar8) << 1) * 4);
      if (puVar15[1] != 1 || uVar31 < 2) {
        if (puVar15[1] == 1) {
          puVar15[0] = 0;
          puVar15[1] = 0;
        }
        uVar24 = uVar17;
        if (uVar17 == 0) goto LAB_002e1468;
        break;
      }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      puVar15[1] = uVar17;
      uVar31 = uVar31 - 1;
      uVar5 = *puVar15;
      uVar17 = uVar24;
    } while (uVar36 < *puVar15);
    lVar42 = *(long *)(param_1 + 0x10);
    do {
      uVar17 = *(uint *)(lVar29 + 4 + (ulong)((uVar24 & uVar8) << 1) * 4);
      uVar7 = -1 << (ulong)(*(int *)(param_1 + 0x104) - 1U & 0x1f);
      uVar5 = *(uint *)(param_1 + 0x18);
      pbVar16 = (byte *)(ulong)uVar5;
      lVar26 = lVar42;
      if (uVar5 <= uVar24) {
        lVar26 = lVar19;
      }
      puVar2 = (ulong *)(pbVar16 + lVar42);
      if (uVar5 <= uVar24) {
        puVar2 = param_3;
      }
      puVar15 = (uint *)(lVar29 + (ulong)((uVar24 & (uVar7 ^ 0xffffffff)) << 1) * 4);
      puVar14 = puVar15 + 1;
      uVar39 = *puVar15;
      uVar32 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
      uVar3 = uVar24 - uVar32;
      if (uVar24 - *(uint *)(param_1 + 0x1c) <= uVar32) {
        uVar3 = *(uint *)(param_1 + 0x1c);
      }
      if ((uVar31 != 0) && (uVar3 < uVar39)) {
        pbVar38 = (byte *)0x0;
        pbVar35 = (byte *)0x0;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        lVar12 = lVar26 + (ulong)uVar24;
        lVar26 = lVar26 + (ulong)uVar24 + 8;
        uVar32 = uVar31;
        do {
          pbVar41 = pbVar38;
          if (pbVar35 <= pbVar38) {
            pbVar41 = pbVar35;
          }
          uVar30 = (ulong)uVar39;
          lVar11 = lVar19;
          if (param_6 == 1) {
            if ((uVar24 < uVar5) || (pbVar16 <= pbVar41 + uVar30)) {
              lVar11 = lVar42;
              if (pbVar16 <= pbVar41 + uVar30) {
                lVar11 = lVar19;
              }
              goto LAB_002e129c;
            }
            lVar11 = func_0x002ad924(pbVar41 + lVar12,pbVar41 + lVar42 + uVar30,puVar2,
                                     pbVar16 + lVar42,pbVar16 + lVar19);
            pbVar41 = pbVar41 + lVar11;
            lVar1 = lVar42 + uVar30;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
            if (pbVar16 <= pbVar41 + uVar30) {
              lVar1 = lVar19 + uVar30;
            }
          }
          else {
LAB_002e129c:
            lVar1 = lVar11 + uVar30;
            puVar23 = (ulong *)(pbVar41 + lVar1);
            puVar20 = (ulong *)(pbVar41 + lVar12);
            puVar22 = puVar20;
            if (puVar20 < (ulong *)((long)puVar2 - 7U)) {
              if (*puVar23 == *puVar20) {
                lVar27 = 0;
                do {
                  if ((ulong *)((long)puVar2 - 7U) <= pbVar41 + lVar27 + lVar26) {
                    puVar23 = (ulong *)(pbVar41 + lVar11 + lVar27 + uVar30 + 8);
                    puVar22 = (ulong *)(pbVar41 + lVar27 + lVar26);
                    goto joined_r0x002e1324;
                  }
                  lVar10 = lVar27 + lVar11 + uVar30 + 8;
                  uVar28 = *(ulong *)(pbVar41 + lVar27 + lVar26);
                  lVar27 = lVar27 + 8;
                } while (*(ulong *)(pbVar41 + lVar10) == uVar28);
                uVar28 = uVar28 ^ *(ulong *)(pbVar41 + lVar10);
                uVar30 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
// WM - chat: discord.gg/sdkhDjTex
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                pbVar41 = pbVar41 + lVar27 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
              }
              else {
                uVar30 = *puVar20 ^ *puVar23;
                uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                pbVar41 = pbVar41 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
              }
            }
            else {
joined_r0x002e1324:
              if (puVar22 < (ulong *)((long)puVar2 - 3U)) {
                if ((int)*puVar23 == (int)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 4);
                  puVar23 = (ulong *)((long)puVar23 + 4);
                }
              }
              if (puVar22 < (ulong *)((long)puVar2 - 1U)) {
                if ((short)*puVar23 == (short)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 2);
/*  if you paid for this, you were scammed  */
                  puVar23 = (ulong *)((long)puVar23 + 2);
                }
              }
              if (puVar22 < puVar2) {
                if ((byte)*puVar23 == (byte)*puVar22) {
                  puVar22 = (ulong *)((long)puVar22 + 1);
                }
              }
              pbVar41 = (byte *)((long)puVar22 + ((long)pbVar41 - (long)puVar20));
            }
          }
          if ((ulong *)(pbVar41 + lVar12) == puVar2) break;
          puVar33 = (uint *)(lVar29 + (ulong)((uVar39 & ~uVar7) << 1) * 4);
          if (pbVar41[lVar1] < (byte)*(ulong *)(pbVar41 + lVar12)) {
            *puVar15 = uVar39;
            if (uVar39 <= uVar36) {
              puVar15 = auStack_6c;
              break;
/* keep the notice, keep the source honest */
            }
            puVar33 = puVar33 + 1;
            puVar15 = puVar33;
            pbVar38 = pbVar41;
          }
          else {
            *puVar14 = uVar39;
            puVar14 = puVar33;
            pbVar35 = pbVar41;
            if (uVar39 <= uVar36) {
              puVar14 = auStack_6c;
              break;
            }
          }
          if (uVar32 == 1) break;
          uVar32 = uVar32 - 1;
          uVar39 = *puVar33;
        } while (uVar3 < uVar39);
      }
      *puVar14 = 0;
      *puVar15 = 0;
      uVar31 = uVar31 + 1;
      uVar24 = uVar17;
    } while (uVar17 != 0);
  }
  else {
LAB_002e1468:
    lVar42 = *(long *)(param_1 + 0x10);
  }
  pbVar16 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
  puVar15 = (uint *)(lVar29 + (ulong)((uVar8 & uVar9) << 1) * 4);
  puVar14 = puVar15 + 1;
  iVar34 = uVar9 + 9;
  uVar36 = *(uint *)(lVar13 + uVar21 * 4);
  *(uint *)(lVar13 + uVar21 * 4) = uVar9;
  if (uVar4 < uVar36) {
    pbVar35 = (byte *)0x0;
    pbVar38 = (byte *)0x0;
// WM - origin: github.com/pengussy
    puVar33 = puVar14;
    pbVar41 = (byte *)0x0;
    iVar25 = iVar34;
    do {
      pbVar40 = pbVar38;
      if (pbVar41 <= pbVar38) {
        pbVar40 = pbVar41;
      }
      uVar21 = (ulong)uVar36;
      puVar2 = (ulong *)((long)param_2 + (long)pbVar40);
      if ((param_6 == 1) && (pbVar40 + uVar21 < pbVar16)) {
        lVar13 = func_0x002ad924(puVar2,pbVar40 + lVar42 + uVar21,param_3,pbVar16 + lVar42,
                                 pbVar16 + lVar19);
        pbVar40 = pbVar40 + lVar13;
        lVar13 = lVar42 + uVar21;
        if (pbVar16 <= pbVar40 + uVar21) {
          lVar13 = lVar19 + uVar21;
        }
      }
      else {
        lVar13 = lVar19 + uVar21;
        puVar23 = (ulong *)(pbVar40 + lVar13);
        if (puVar2 < (ulong *)((long)param_3 + -7)) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
          if (*puVar23 == *puVar2) {
            lVar26 = 0;
            puVar20 = (ulong *)((long)param_2 + (long)(pbVar40 + 8));
            puVar23 = (ulong *)(pbVar40 + lVar19 + 8 + uVar21);
            do {
              if ((ulong *)((long)param_3 + -7) <= puVar20) goto LAB_002e1680;
              uVar30 = *puVar23;
              uVar21 = *puVar20;
              lVar26 = lVar26 + 8;
              puVar20 = puVar20 + 1;
              puVar23 = puVar23 + 1;
            } while (uVar30 == uVar21);
            uVar21 = uVar21 ^ uVar30;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = lVar26 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            uVar21 = *puVar2 ^ *puVar23;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
/* WM - no support for modified copies */
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
          }
          pbVar40 = pbVar40 + uVar21;
        }
        else {
          puVar20 = puVar2;
LAB_002e1680:
          if (puVar20 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar23 == (int)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 4);
              puVar23 = (ulong *)((long)puVar23 + 4);
            }
          }
          if (puVar20 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar23 == (short)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 2);
              puVar23 = (ulong *)((long)puVar23 + 2);
            }
          }
          if (puVar20 < param_3) {
            if ((byte)*puVar23 == (byte)*puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 1);
// found on a paste site? it was re-uploaded illegally
            }
          }
          pbVar40 = (byte *)((long)puVar20 + ((long)pbVar40 - (long)puVar2));
        }
      }
      iVar34 = iVar25;
      if (pbVar35 < pbVar40) {
        iVar34 = uVar36 + (int)pbVar40;
        if (pbVar40 <= (byte *)(ulong)(iVar25 - uVar36)) {
          iVar34 = iVar25;
        }
        if ((int)LZCOUNT((int)*param_4) - (int)LZCOUNT((uVar9 - uVar36) + 1) <
            ((int)pbVar40 - (int)pbVar35) * 4) {
          *param_4 = (ulong)((uVar9 - uVar36) + 3);
          pbVar35 = pbVar40;
        }
        if ((ulong *)((long)param_2 + (long)pbVar40) == param_3) {
          uVar4 = 0;
          if (param_6 != 2) {
            uVar4 = uVar37;
          }
          puVar14 = puVar33;
          uVar37 = uVar4;
          break;
        }
      }
      puVar14 = (uint *)(lVar29 + (ulong)((uVar36 & uVar8) << 1) * 4);
      if (pbVar40[lVar13] < *(byte *)((long)param_2 + (long)pbVar40)) {
        *puVar15 = uVar36;
        if (uVar36 <= uVar6) {
          puVar15 = &uStack_70;
/* donate: donate/README.md */
          puVar14 = puVar33;
          break;
        }
        puVar15 = puVar14 + 1;
        pbVar38 = pbVar40;
        puVar14 = puVar15;
        pbVar40 = pbVar41;
        if (uVar37 == 1) {
          uVar37 = 0;
          puVar14 = puVar33;
          break;
        }
      }
      else {
        *puVar33 = uVar36;
        if (uVar36 <= uVar6) {
          puVar14 = &uStack_70;
          break;
        }
        puVar33 = puVar14;
        if (uVar37 == 1) {
          uVar37 = 0;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          break;
        }
      }
      uVar37 = uVar37 - 1;
      uVar36 = *puVar14;
      puVar14 = puVar33;
      pbVar41 = pbVar40;
      iVar25 = iVar34;
    } while (uVar4 < uVar36);
  }
  else {
    pbVar35 = (byte *)0x0;
  }
  *puVar14 = 0;
  *puVar15 = 0;
  if ((param_6 != 2) || (uVar37 == 0)) goto LAB_002e19e8;
  plVar18 = *(long **)(param_1 + 0xf8);
  if (param_5 == 5) {
    lVar13 = *param_2;
    uVar21 = 0xbb000000;
LAB_002e180c:
    uVar21 = lVar13 * (uVar21 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-(int)plVar18[0x21] & 0x3f);
  }
  else {
    if (param_5 == 6) {
      lVar13 = *param_2;
      uVar21 = 0xbf9b0000;
      goto LAB_002e180c;
    }
    uVar21 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >> (ulong)(-(int)plVar18[0x21] & 0x1f));
  }
  lVar13 = *plVar18;
  lVar29 = plVar18[1];
  uVar6 = *(uint *)((long)plVar18 + 0x1c);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  uVar8 = ~(-1 << (ulong)(*(int *)((long)plVar18 + 0x104) - 1U & 0x1f));
  uVar30 = lVar13 - lVar29;
  iVar25 = (int)uVar30;
  uVar4 = iVar25 - uVar8;
  if (iVar25 - uVar6 <= uVar8) {
    uVar4 = uVar6;
  }
  uVar36 = *(uint *)(plVar18[0xe] + uVar21 * 4);
  if (uVar6 < uVar36) {
    pbVar16 = (byte *)0x0;
    pbVar38 = (byte *)0x0;
    lVar42 = plVar18[0x10];
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar31 = *(int *)(param_1 + 0x1c) - iVar25;
    iVar25 = uVar9 - uVar31;
    do {
      uVar37 = uVar37 - 1;
      pbVar41 = pbVar38;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (pbVar16 <= pbVar38) {
        pbVar41 = pbVar16;
      }
      uVar21 = (ulong)uVar36;
      lVar26 = lVar29 + uVar21;
      lVar12 = func_0x002ad924((byte *)((long)param_2 + (long)pbVar41),pbVar41 + lVar26,param_3,
                               lVar13,lVar19 + (ulong)uVar5);
      pbVar41 = pbVar41 + lVar12;
      if ((byte *)(uVar30 & 0xffffffff) <= pbVar41 + uVar21) {
        lVar26 = lVar19 + (ulong)uVar31 + uVar21;
      }
      if (pbVar35 < pbVar41) {
        if ((int)LZCOUNT((int)*param_4 + 1) - (int)LZCOUNT((iVar25 + 1) - uVar36) <
            ((int)pbVar41 - (int)pbVar35) * 4) {
          *param_4 = (ulong)((iVar25 + 3) - uVar36);
          pbVar35 = pbVar41;
        }
        if ((ulong *)((long)param_2 + (long)pbVar41) == param_3) break;
      }
      puVar15 = (uint *)(lVar42 + (ulong)((uVar36 & uVar8) << 1) * 4);
      if (pbVar41[lVar26] < *(byte *)((long)param_2 + (long)pbVar41)) {
        if (uVar36 <= uVar4) break;
        puVar15 = puVar15 + 1;
        pbVar38 = pbVar41;
      }
      else {
        pbVar16 = pbVar41;
        if (uVar36 <= uVar4) break;
      }
      if ((uVar37 == 0) || (uVar36 = *puVar15, uVar36 <= uVar6)) break;
    } while( true );
  }
LAB_002e19e8:
  *(int *)(param_1 + 0x2c) = iVar34 + -8;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  return pbVar35;
}

