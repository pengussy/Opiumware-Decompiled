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
 *  file-id: 0x2ed6bc:d6dbb0fa58
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002ed6bc(undefined4 *param_1,long param_2,undefined8 param_3,int *param_4,ulong *param_5,
                  int *param_6,uint param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  bool bVar20;
  int iVar21;
  long lVar22;
  uint *puVar23;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong *puVar32;
  uint *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  uint *puVar37;
  long lVar38;
  int *piVar39;
  ulong uVar40;
  ulong uVar41;
  long *plVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  int iVar49;
  int iVar50;
/* donate: donate/README.md */
  long lVar51;
  uint uStack_94;
  uint auStack_6c [3];
  
  lVar51 = *(long *)(param_2 + 8);
  uVar44 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (int *)(lVar51 + uVar44)) {
    return 0;
  }
  uVar28 = (int)param_4 - (int)lVar51;
  uVar43 = uVar28;
  if (*(uint *)(param_2 + 0x2c) < uVar28) {
    do {
      iVar21 = func_0x002e5a54(param_2,lVar51 + uVar44,param_5,uVar28,4,0);
      uVar43 = iVar21 + (int)uVar44;
      uVar44 = (ulong)uVar43;
    } while (uVar43 < uVar28);
    lVar51 = *(long *)(param_2 + 8);
    uVar43 = (int)param_4 - (int)lVar51;
  }
  *(uint *)(param_2 + 0x2c) = uVar28;
  uVar28 = *(uint *)(param_2 + 0x114);
  if (0xffe < uVar28) {
    uVar28 = 0xfff;
  }
/*  found on a paste site? it was re-uploaded illegally  */
  lVar22 = *(long *)(param_2 + 0x70);
  iVar21 = *param_4;
  uVar11 = (uint)(iVar21 * -0x61c8864f) >> (ulong)(-*(int *)(param_2 + 0x108) & 0x1f);
  uVar47 = *(uint *)(lVar22 + (ulong)uVar11 * 4);
  lVar45 = *(long *)(param_2 + 0x80);
  uVar9 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar12 = ~uVar9;
  uVar2 = 0;
  if (uVar12 <= uVar43) {
    uVar2 = uVar43 - uVar12;
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar44 = (ulong)uVar4;
  uVar10 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar18 = uVar43 - uVar10;
  if (uVar43 - *(uint *)(param_2 + 0x1c) <= uVar10 || *(int *)(param_2 + 0x28) != 0) {
    uVar18 = *(uint *)(param_2 + 0x1c);
  }
  uVar10 = uVar18;
  if (uVar18 < 2) {
    uVar10 = 1;
/* if you paid for this, you were scammed - github.com/pengussy */
  }
  uVar7 = *(uint *)(param_2 + 0x10c);
  plVar42 = *(long **)(param_2 + 0xf8);
  lVar5 = *plVar42;
  lVar6 = plVar42[1];
  uVar8 = *(uint *)((long)plVar42 + 0x1c);
  iVar50 = (int)(lVar5 - lVar6);
  uVar14 = uVar18 - iVar50;
  lVar19 = plVar42[0x21];
  uVar13 = ~(-1 << (ulong)(*(int *)((long)plVar42 + 0x104) - 1U & 0x1f));
  uVar3 = iVar50 - uVar13;
  if (iVar50 - uVar8 <= uVar13) {
    uVar3 = uVar8;
  }
  uVar30 = param_8 - 1;
  uVar25 = (ulong)uVar30;
  if (param_7 < 0xfffffffd) {
    uVar15 = uVar43 - uVar4;
    puVar24 = (ulong *)(param_4 + 1);
    uVar31 = (ulong)param_7;
    if (param_7 == 3) {
      uVar29 = *param_6 - 1;
    }
    else {
      uVar29 = param_6[uVar31];
    }
    lVar38 = lVar6 - (ulong)uVar14;
    uVar16 = (uVar43 - uVar8) - uVar14;
    puVar34 = (ulong *)((long)param_5 + -7);
    puVar35 = (ulong *)((long)param_5 + -3);
    puVar36 = (ulong *)((long)param_5 + -1);
    uVar17 = uVar43 - uVar29;
    uVar48 = 0;
/* WM - if you paid for this, you were scammed */
    iVar50 = (int)puVar24;
    if (uVar29 - 1 < uVar15) {
      if (uVar18 <= uVar17) {
        piVar39 = (int *)((long)param_4 - (ulong)uVar29);
        if (iVar21 == *piVar39) {
          puVar32 = (ulong *)((long)puVar24 - (ulong)uVar29);
          if (puVar24 < puVar34) {
            if (*puVar32 == *puVar24) {
              iVar21 = 0;
              puVar27 = (ulong *)(param_4 + 3);
              puVar32 = (ulong *)(piVar39 + 3);
              do {
                if (puVar34 <= puVar27) goto LAB_002eda2c;
                uVar40 = *puVar32;
                uVar48 = *puVar27;
                iVar21 = iVar21 + 8;
                puVar27 = puVar27 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar40 == uVar48);
              uVar48 = uVar48 ^ uVar40;
              uVar48 = (uVar48 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar48 & 0x5555555555555555) << 1;
              uVar48 = (uVar48 & 0xcccccccccccccccc) >> 2 | (uVar48 & 0x3333333333333333) << 2;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
              uVar48 = (uVar48 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar48 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar48 = (uVar48 & 0xff00ff00ff00ff00) >> 8 | (uVar48 & 0xff00ff00ff00ff) << 8;
              uVar48 = (uVar48 & 0xffff0000ffff0000) >> 0x10 | (uVar48 & 0xffff0000ffff) << 0x10;
              iVar21 = iVar21 + (int)((ulong)LZCOUNT(uVar48 >> 0x20 | uVar48 << 0x20) >> 3);
              goto joined_r0x002eda20;
            }
            uVar48 = *puVar24 ^ *puVar32;
            uVar48 = (uVar48 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar48 & 0x5555555555555555) << 1;
            uVar48 = (uVar48 & 0xcccccccccccccccc) >> 2 | (uVar48 & 0x3333333333333333) << 2;
            uVar48 = (uVar48 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar48 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar48 = (uVar48 & 0xff00ff00ff00ff00) >> 8 | (uVar48 & 0xff00ff00ff00ff) << 8;
            uVar48 = (uVar48 & 0xffff0000ffff0000) >> 0x10 | (uVar48 & 0xffff0000ffff) << 0x10;
            iVar21 = (int)((ulong)LZCOUNT(uVar48 >> 0x20 | uVar48 << 0x20) >> 3);
          }
          else {
            puVar27 = puVar24;
LAB_002eda2c:
            if (puVar27 < puVar35) {
              if ((int)*puVar32 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
            }
            if (puVar27 < puVar36) {
              if (*(short *)puVar32 == *(short *)puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
/* keep the notice, keep the source honest */
              }
            }
            if (puVar27 < param_5) {
              if ((char)*puVar32 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
            }
            iVar21 = (int)puVar27 - iVar50;
          }
          uVar29 = iVar21 + 4;
          if (uVar29 <= uVar30) goto LAB_002edb28;
LAB_002eda74:
          uVar25 = (ulong)uVar29;
          uVar48 = 1;
          *param_1 = 1;
          param_1[1] = uVar29;
// watermarked copy - do not remove
          if (uVar28 < uVar29 || (ulong *)((long)param_4 + uVar25) == param_5) {
            return 1;
          }
        }
      }
LAB_002edaa4:
      if (uVar31 != 2) goto LAB_002edb3c;
LAB_002edab0:
      uVar30 = *param_6 - 1;
    }
    else {
      if ((uVar16 <= uVar29 - 1) || (0xfffffffc < uVar17 - uVar4)) goto LAB_002edaa4;
      if (iVar21 != *(int *)(lVar38 + (ulong)uVar17)) {
        uVar48 = 0;
        goto LAB_002edaa4;
      }
      iVar21 = func_0x002ad924(puVar24,(int *)(lVar38 + (ulong)uVar17) + 1,param_5,lVar5,
                               lVar51 + uVar44);
joined_r0x002eda20:
      uVar29 = iVar21 + 4;
      if (uVar30 < uVar29) goto LAB_002eda74;
LAB_002edb28:
      uVar48 = 0;
      if (uVar31 == 2) goto LAB_002edab0;
LAB_002edb3c:
      uVar30 = param_6[uVar31 + 1];
    }
/* wm:watermarked copy - do not remove */
    uVar29 = uVar43 - uVar30;
    if (uVar30 - 1 < uVar15) {
      if (uVar18 <= uVar29) {
        piVar39 = (int *)((long)param_4 - (ulong)uVar30);
        if (*param_4 == *piVar39) {
          puVar32 = (ulong *)((long)puVar24 - (ulong)uVar30);
          if (puVar24 < puVar34) {
            if (*puVar32 == *puVar24) {
              iVar21 = 0;
              puVar27 = (ulong *)(param_4 + 3);
              puVar32 = (ulong *)(piVar39 + 3);
              do {
                if (puVar34 <= puVar27) goto LAB_002edcb0;
                uVar41 = *puVar32;
                uVar40 = *puVar27;
                iVar21 = iVar21 + 8;
                puVar27 = puVar27 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar41 == uVar40);
              uVar40 = uVar40 ^ uVar41;
              uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
              uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
              uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
              uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
              iVar21 = iVar21 + (int)((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
            }
            else {
              uVar40 = *puVar24 ^ *puVar32;
              uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
              uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
// WM - stripping the watermark breaks the license
              uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
              uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
              iVar21 = (int)((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
            }
          }
          else {
            puVar27 = puVar24;
LAB_002edcb0:
            if (puVar27 < puVar35) {
              if ((int)*puVar32 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
            }
            if (puVar27 < puVar36) {
              if (*(short *)puVar32 == *(short *)puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 2);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
            }
            if (puVar27 < param_5) {
              if ((char)*puVar32 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
            }
            iVar21 = (int)puVar27 - iVar50;
          }
          uVar30 = iVar21 + 4;
          uVar40 = (ulong)uVar30;
          if (uVar25 < uVar40) goto LAB_002edd00;
        }
      }
LAB_002eddb0:
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      uVar40 = uVar25;
      if (uVar31 == 1) goto LAB_002edd34;
LAB_002eddc0:
      uVar30 = param_6[uVar31 + 2];
    }
    else {
      if (((uVar16 <= uVar30 - 1) || (0xfffffffc < uVar29 - uVar4)) ||
         (*param_4 != *(int *)(lVar38 + (ulong)uVar29))) goto LAB_002eddb0;
      iVar21 = func_0x002ad924(puVar24,(int *)(lVar38 + (ulong)uVar29) + 1,param_5,lVar5,
                               lVar51 + uVar44);
      uVar30 = iVar21 + 4;
      uVar40 = (ulong)uVar30;
      if (uVar40 <= uVar25) goto LAB_002eddb0;
LAB_002edd00:
      param_1[uVar48 * 2] = 2;
      (param_1 + uVar48 * 2)[1] = uVar30;
      uVar48 = (ulong)((int)uVar48 + 1);
      if (uVar28 < uVar30 || (ulong *)((long)param_4 + uVar40) == param_5) {
        return uVar48;
      }
      if (uVar31 != 1) goto LAB_002eddc0;
LAB_002edd34:
      uVar30 = *param_6 - 1;
    }
    uVar29 = uVar43 - uVar30;
    if (uVar30 - 1 < uVar15) {
      if (uVar18 <= uVar29) {
        piVar39 = (int *)((long)param_4 - (ulong)uVar30);
        if (*param_4 == *piVar39) {
/*  thanks for reading - discord.gg/sdkhDjTex  */
          puVar32 = (ulong *)((long)puVar24 - (ulong)uVar30);
          if (puVar24 < puVar34) {
            if (*puVar32 == *puVar24) {
              iVar21 = 0;
              puVar24 = (ulong *)(param_4 + 3);
              puVar32 = (ulong *)(piVar39 + 3);
              do {
                if (puVar34 <= puVar24) goto LAB_002edf24;
                uVar31 = *puVar32;
                uVar25 = *puVar24;
                iVar21 = iVar21 + 8;
                puVar24 = puVar24 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar31 == uVar25);
              uVar25 = uVar25 ^ uVar31;
              uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
              uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
              uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
              uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
              iVar21 = iVar21 + (int)((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
            }
            else {
              uVar25 = *puVar24 ^ *puVar32;
              uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
/*  keep the notice, keep the source honest  */
              uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
              uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
              uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
              iVar21 = (int)((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
            }
          }
          else {
LAB_002edf24:
            if (puVar24 < puVar35) {
              if ((int)*puVar32 == (int)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
            }
            if (puVar24 < puVar36) {
              if (*(short *)puVar32 == *(short *)puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
            }
            if (puVar24 < param_5) {
              if ((char)*puVar32 == (char)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
            }
/*  do not claim this as your own  */
            iVar21 = (int)puVar24 - iVar50;
          }
          goto joined_r0x002edf18;
        }
      }
    }
    else if (((uVar30 - 1 < uVar16) && (uVar29 - uVar4 < 0xfffffffd)) &&
            (*param_4 == *(int *)(lVar38 + (ulong)uVar29))) {
      iVar21 = func_0x002ad924(puVar24,(int *)(lVar38 + (ulong)uVar29) + 1,param_5,lVar5,
                               lVar51 + uVar44);
joined_r0x002edf18:
      uVar18 = iVar21 + 4;
      uVar25 = (ulong)uVar18;
      if (uVar40 < uVar25) {
        param_1[uVar48 * 2] = 3;
        (param_1 + uVar48 * 2)[1] = uVar18;
        uVar48 = (ulong)((int)uVar48 + 1);
        if (uVar28 < uVar18 || (ulong *)((long)param_4 + uVar25) == param_5) {
          return uVar48;
        }
        goto LAB_002ee014;
      }
    }
    uVar25 = uVar40;
  }
  else {
    uVar48 = 0;
  }
LAB_002ee014:
  puVar33 = (uint *)(lVar45 + (ulong)((uVar43 & (uVar9 ^ 0xffffffff)) << 1) * 4);
  iVar21 = uVar43 + 9;
  iVar50 = 1 << (ulong)(uVar7 & 0x1f);
  *(uint *)(lVar22 + (ulong)uVar11 * 4) = uVar43;
  if (uVar47 < uVar10) {
    uStack_94 = (uint)uVar48;
    puVar33[0] = 0;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    puVar33[1] = 0;
  }
  else {
    uVar31 = 0;
    puVar37 = puVar33 + 1;
    uVar40 = 0;
    do {
      uVar41 = uVar31;
      if (uVar40 <= uVar31) {
        uVar41 = uVar40;
      }
      lVar22 = lVar51 + (ulong)uVar47;
      puVar24 = (ulong *)(lVar22 + uVar41);
      puVar34 = (ulong *)((long)param_4 + uVar41);
      puVar35 = puVar34;
      if (puVar34 < (ulong *)((long)param_5 + -7)) {
        if (*puVar24 == *puVar34) {
          lVar38 = 0;
          puVar35 = (ulong *)((long)param_4 + uVar41 + 8);
          puVar24 = (ulong *)(lVar51 + 8 + uVar41 + uVar47);
          do {
            if ((ulong *)((long)param_5 + -7) <= puVar35) goto joined_r0x002ee120;
            uVar26 = *puVar24;
/* reversing this took months of machine time - github.com/pengussy */
            uVar46 = *puVar35;
            lVar38 = lVar38 + 8;
            puVar35 = puVar35 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar26 == uVar46);
          uVar46 = uVar46 ^ uVar26;
          uVar46 = (uVar46 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar46 & 0x5555555555555555) << 1;
          uVar46 = (uVar46 & 0xcccccccccccccccc) >> 2 | (uVar46 & 0x3333333333333333) << 2;
          uVar46 = (uVar46 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar46 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar46 = (uVar46 & 0xff00ff00ff00ff00) >> 8 | (uVar46 & 0xff00ff00ff00ff) << 8;
          uVar46 = (uVar46 & 0xffff0000ffff0000) >> 0x10 | (uVar46 & 0xffff0000ffff) << 0x10;
          uVar46 = lVar38 + ((ulong)LZCOUNT(uVar46 >> 0x20 | uVar46 << 0x20) >> 3);
        }
        else {
          uVar46 = *puVar34 ^ *puVar24;
          uVar46 = (uVar46 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar46 & 0x5555555555555555) << 1;
          uVar46 = (uVar46 & 0xcccccccccccccccc) >> 2 | (uVar46 & 0x3333333333333333) << 2;
          uVar46 = (uVar46 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar46 & 0xf0f0f0f0f0f0f0f) << 4;
// WM - no support for modified copies
          uVar46 = (uVar46 & 0xff00ff00ff00ff00) >> 8 | (uVar46 & 0xff00ff00ff00ff) << 8;
          uVar46 = (uVar46 & 0xffff0000ffff0000) >> 0x10 | (uVar46 & 0xffff0000ffff) << 0x10;
          uVar46 = (ulong)LZCOUNT(uVar46 >> 0x20 | uVar46 << 0x20) >> 3;
        }
        uVar46 = uVar46 + uVar41;
      }
      else {
joined_r0x002ee120:
        if (puVar35 < (ulong *)((long)param_5 + -3)) {
          if ((int)*puVar24 == (int)*puVar35) {
            puVar35 = (ulong *)((long)puVar35 + 4);
            puVar24 = (ulong *)((long)puVar24 + 4);
          }
        }
        if (puVar35 < (ulong *)((long)param_5 + -1)) {
          if ((short)*puVar24 == (short)*puVar35) {
            puVar35 = (ulong *)((long)puVar35 + 2);
            puVar24 = (ulong *)((long)puVar24 + 2);
          }
        }
        if (puVar35 < param_5) {
          if ((char)*puVar24 == (char)*puVar35) {
            puVar35 = (ulong *)((long)puVar35 + 1);
          }
        }
        uVar46 = (long)puVar35 + (uVar41 - (long)puVar34);
      }
      if (uVar25 < uVar46) {
        iVar49 = uVar47 + (int)uVar46;
        if (uVar46 <= iVar21 - uVar47) {
          iVar49 = iVar21;
        }
        param_1[uVar48 * 2] = (uVar43 + 3) - uVar47;
        (param_1 + uVar48 * 2)[1] = (int)uVar46;
        uStack_94 = (int)uVar48 + 1;
        uVar48 = (ulong)uStack_94;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        if (0x1000 < uVar46 || (ulong *)((long)param_4 + uVar46) == param_5) {
          *puVar37 = 0;
          *puVar33 = 0;
          goto LAB_002ee448;
        }
        uVar25 = uVar46;
        iVar21 = iVar49;
      }
      puVar23 = (uint *)(lVar45 + (ulong)((uVar47 & uVar12) << 1) * 4);
      if (*(byte *)(lVar22 + uVar46) < *(byte *)((long)param_4 + uVar46)) {
        *puVar33 = uVar47;
        if (uVar47 <= uVar2) {
          puVar33 = auStack_6c;
          break;
        }
        puVar23 = puVar23 + 1;
        uVar31 = uVar46;
        puVar33 = puVar23;
        uVar46 = uVar40;
      }
      else {
        *puVar37 = uVar47;
        if (uVar47 <= uVar2) {
          puVar37 = auStack_6c;
          break;
        }
        puVar37 = puVar23;
// stripping the watermark breaks the license
      }
      iVar50 = iVar50 + -1;
      if (iVar50 == 0) break;
      uVar47 = *puVar23;
      uVar40 = uVar46;
    } while (uVar10 <= uVar47);
    uStack_94 = (uint)uVar48;
    *puVar37 = 0;
    *puVar33 = 0;
    iVar49 = iVar21;
    if (iVar50 == 0) goto LAB_002ee448;
  }
  uVar28 = *(uint *)(plVar42[0xe] +
                    (ulong)((uint)(*param_4 * -0x61c8864f) >> (ulong)(-(int)lVar19 & 0x1f)) * 4);
  iVar49 = iVar21;
  if (uVar8 < uVar28) {
    uVar48 = 0;
    lVar22 = plVar42[0x10];
    uVar31 = 0;
    do {
      iVar50 = iVar50 + -1;
      uVar40 = uVar31;
      if (uVar48 <= uVar31) {
        uVar40 = uVar48;
      }
      uVar41 = (ulong)uVar28;
      lVar45 = func_0x002ad924((long)param_4 + uVar40,lVar6 + uVar41 + uVar40,param_5,lVar5,
                               lVar51 + uVar44);
      uVar40 = lVar45 + uVar40;
      lVar45 = lVar6 + uVar41;
      if ((lVar5 - lVar6 & 0xffffffffU) <= uVar40 + uVar41) {
        lVar45 = lVar51 + (ulong)uVar14 + uVar41;
// more drops soon - github.com/pengussy
      }
      if (uVar25 < uVar40) {
        iVar1 = uVar28 + uVar14;
        iVar49 = iVar1 + (int)uVar40;
        if (uVar40 <= (uint)(iVar21 - iVar1)) {
          iVar49 = iVar21;
        }
        param_1[(ulong)uStack_94 * 2] = (uVar43 + 3) - iVar1;
        (param_1 + (ulong)uStack_94 * 2)[1] = (int)uVar40;
        uStack_94 = uStack_94 + 1;
        if (0x1000 < uVar40) break;
        uVar25 = uVar40;
        iVar21 = iVar49;
        if ((ulong *)((long)param_4 + uVar40) == param_5) break;
      }
      iVar49 = iVar21;
      if (uVar28 <= uVar3) break;
      bVar20 = *(byte *)((long)param_4 + uVar40) <= *(byte *)(lVar45 + uVar40);
      uVar41 = uVar40;
/* no support for modified copies */
      if (bVar20) {
        uVar41 = uVar31;
        uVar48 = uVar40;
      }
      lVar45 = 4;
      if (bVar20) {
        lVar45 = 0;
      }
      if (iVar50 == 0) break;
      uVar28 = *(uint *)(lVar22 + (ulong)((uVar28 & uVar13) << 1) * 4 + lVar45);
      uVar31 = uVar41;
    } while (uVar8 < uVar28);
  }
LAB_002ee448:
  *(int *)(param_2 + 0x2c) = iVar49 + -8;
  return (ulong)uStack_94;
// unlicensed copy if this notice is missing
}

