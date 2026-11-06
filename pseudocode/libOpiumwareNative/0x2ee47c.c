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
 *  file-id: 0x2ee47c:d6a8465d94
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002ee47c(undefined4 *param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
                  int *param_6,uint param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
/* keep the notice, keep the source honest - github.com/pengussy */
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  ulong *puVar24;
  ulong uVar25;
  uint uVar26;
  ulong *puVar27;
  uint uVar28;
  uint uVar29;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  uint uVar30;
  ulong uVar31;
  ulong *puVar32;
  uint *puVar33;
  uint uVar34;
  ulong *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  uint *puVar38;
  long lVar39;
  int *piVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  uint uVar47;
  long *plVar48;
  int iVar49;
  long lVar50;
  uint uStack_70;
  uint auStack_6c [3];
  
  lVar50 = *(long *)(param_2 + 8);
  uVar45 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (long *)(lVar50 + uVar45)) {
    return 0;
  }
  uVar28 = (int)param_4 - (int)lVar50;
  uVar43 = uVar28;
  if (*(uint *)(param_2 + 0x2c) < uVar28) {
    do {
      iVar19 = func_0x002e5a54(param_2,lVar50 + uVar45,param_5,uVar28,5,0);
      uVar43 = iVar19 + (int)uVar45;
      uVar45 = (ulong)uVar43;
/* stripping the watermark breaks the license */
    } while (uVar43 < uVar28);
    lVar50 = *(long *)(param_2 + 8);
    uVar43 = (int)param_4 - (int)lVar50;
  }
  *(uint *)(param_2 + 0x2c) = uVar28;
  uVar28 = *(uint *)(param_2 + 0x114);
  if (0xffe < uVar28) {
    uVar28 = 0xfff;
  }
  lVar22 = *(long *)(param_2 + 0x70);
  uVar44 = *param_4 * -0x30e4432345000000;
  uVar45 = uVar44 >> ((ulong)(uint)-*(int *)(param_2 + 0x108) & 0x3f);
  uVar47 = *(uint *)(lVar22 + uVar45 * 4);
  lVar46 = *(long *)(param_2 + 0x80);
  uVar11 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar13 = ~uVar11;
  uVar2 = 0;
  if (uVar13 <= uVar43) {
    uVar2 = uVar43 - uVar13;
  }
  uVar5 = *(uint *)(param_2 + 0x18);
  uVar6 = (ulong)uVar5;
  uVar12 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar3 = uVar43 - uVar12;
  if (uVar43 - *(uint *)(param_2 + 0x1c) <= uVar12 || *(int *)(param_2 + 0x28) != 0) {
    uVar3 = *(uint *)(param_2 + 0x1c);
  }
  uVar12 = uVar3;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  if (uVar3 < 2) {
    uVar12 = 1;
  }
  uVar9 = *(uint *)(param_2 + 0x10c);
  plVar48 = *(long **)(param_2 + 0xf8);
  lVar7 = *plVar48;
  lVar8 = plVar48[1];
  uVar10 = *(uint *)((long)plVar48 + 0x1c);
  iVar19 = (int)(lVar7 - lVar8);
  uVar15 = uVar3 - iVar19;
  lVar17 = plVar48[0x21];
  uVar14 = ~(-1 << (ulong)(*(int *)((long)plVar48 + 0x104) - 1U & 0x1f));
  uVar4 = iVar19 - uVar14;
  if (iVar19 - uVar10 <= uVar14) {
    uVar4 = uVar10;
  }
  uVar30 = param_8 - 1;
  uVar25 = (ulong)uVar30;
// proprietary - see LICENSE - do not sell
  if (param_7 < 0xfffffffd) {
    uVar26 = uVar43 - uVar5;
    puVar24 = (ulong *)((long)param_4 + 4);
    uVar31 = (ulong)param_7;
    if (param_7 == 3) {
      uVar29 = *param_6 - 1;
    }
    else {
      uVar29 = param_6[uVar31];
    }
    lVar39 = lVar8 - (ulong)uVar15;
    uVar16 = (uVar43 - uVar10) - uVar15;
    puVar35 = (ulong *)((long)param_5 + -7);
    puVar36 = (ulong *)((long)param_5 + -3);
    puVar37 = (ulong *)((long)param_5 + -1);
    uVar34 = uVar43 - uVar29;
    uVar21 = 0;
    iVar20 = (int)*param_4;
    iVar19 = (int)puVar24;
    if (uVar29 - 1 < uVar26) {
      if (uVar3 <= uVar34) {
        piVar40 = (int *)((long)param_4 - (ulong)uVar29);
        if (*piVar40 == iVar20) {
          puVar32 = (ulong *)((long)puVar24 - (ulong)uVar29);
          if (puVar24 < puVar35) {
            if (*puVar32 == *puVar24) {
              iVar20 = 0;
              puVar27 = (ulong *)((long)param_4 + 0xc);
              puVar32 = (ulong *)(piVar40 + 3);
              do {
                if (puVar35 <= puVar27) goto LAB_002ee7e8;
                uVar41 = *puVar32;
                uVar21 = *puVar27;
                iVar20 = iVar20 + 8;
                puVar27 = puVar27 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar41 == uVar21);
              uVar21 = uVar21 ^ uVar41;
/* WM - stripping the watermark breaks the license */
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              iVar20 = iVar20 + (int)((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
              goto joined_r0x002ee7dc;
            }
            uVar21 = *puVar24 ^ *puVar32;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            iVar20 = (int)((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
          }
          else {
            puVar27 = puVar24;
LAB_002ee7e8:
            if (puVar27 < puVar36) {
              if ((int)*puVar32 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
            }
            if (puVar27 < puVar37) {
              if (*(short *)puVar32 == *(short *)puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
            }
            if (puVar27 < param_5) {
              if ((char)*puVar32 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
            }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            iVar20 = (int)puVar27 - iVar19;
          }
          uVar29 = iVar20 + 4;
          if (uVar29 <= uVar30) goto LAB_002ee8dc;
LAB_002ee82c:
          uVar25 = (ulong)uVar29;
          uVar21 = 1;
          *param_1 = 1;
          param_1[1] = uVar29;
          if (uVar28 < uVar29 || (ulong *)((long)param_4 + uVar25) == param_5) {
            return 1;
          }
        }
      }
LAB_002ee854:
      if (uVar31 != 2) goto LAB_002ee8f0;
LAB_002ee864:
// WM - watermarked copy - do not remove
      uVar30 = *param_6 - 1;
    }
    else {
      if ((uVar16 <= uVar29 - 1) || (0xfffffffc < uVar34 - uVar5)) goto LAB_002ee854;
      if (*(int *)(lVar39 + (ulong)uVar34) != iVar20) {
        uVar21 = 0;
        goto LAB_002ee854;
      }
      iVar20 = func_0x002ad924(puVar24,(int *)(lVar39 + (ulong)uVar34) + 1,param_5,lVar7,
                               lVar50 + uVar6);
joined_r0x002ee7dc:
      uVar29 = iVar20 + 4;
      if (uVar30 < uVar29) goto LAB_002ee82c;
LAB_002ee8dc:
      uVar21 = 0;
      if (uVar31 == 2) goto LAB_002ee864;
LAB_002ee8f0:
      uVar30 = param_6[uVar31 + 1];
    }
    uVar29 = uVar43 - uVar30;
    if (uVar30 - 1 < uVar26) {
/* watermarked copy - do not remove - github.com/pengussy */
      if (uVar3 <= uVar29) {
        piVar40 = (int *)((long)param_4 - (ulong)uVar30);
        if ((int)*param_4 == *piVar40) {
          puVar32 = (ulong *)((long)puVar24 - (ulong)uVar30);
          if (puVar24 < puVar35) {
            if (*puVar32 == *puVar24) {
              iVar20 = 0;
              puVar27 = (ulong *)((long)param_4 + 0xc);
              puVar32 = (ulong *)(piVar40 + 3);
              do {
                if (puVar35 <= puVar27) goto LAB_002eea60;
                uVar42 = *puVar32;
                uVar41 = *puVar27;
                iVar20 = iVar20 + 8;
                puVar27 = puVar27 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar42 == uVar41);
              uVar41 = uVar41 ^ uVar42;
              uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1;
              uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
              uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
              uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
              iVar20 = iVar20 + (int)((ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3);
// WM - no support for modified copies
            }
            else {
              uVar41 = *puVar24 ^ *puVar32;
              uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1;
              uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
              uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
              uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
              iVar20 = (int)((ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3);
            }
          }
          else {
            puVar27 = puVar24;
LAB_002eea60:
            if (puVar27 < puVar36) {
              if ((int)*puVar32 == (int)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
/* WM - more drops soon - github.com/pengussy */
            }
            if (puVar27 < puVar37) {
              if (*(short *)puVar32 == *(short *)puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
            }
            if (puVar27 < param_5) {
              if ((char)*puVar32 == (char)*puVar27) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
            }
            iVar20 = (int)puVar27 - iVar19;
          }
          uVar30 = iVar20 + 4;
          uVar41 = (ulong)uVar30;
          if (uVar25 < uVar41) goto LAB_002eeaac;
        }
      }
LAB_002eec20:
      uVar41 = uVar25;
      if (uVar31 == 1) goto LAB_002eeae4;
LAB_002eec38:
      uVar30 = param_6[uVar31 + 2];
      uVar34 = uVar43 - uVar30;
      uVar29 = uVar30 - 1;
      if (uVar29 < uVar26) goto LAB_002eec50;
LAB_002eeb00:
      uVar26 = 0;
      uVar25 = uVar41;
      if ((uVar29 < uVar16) && (uVar34 - uVar5 < 0xfffffffd)) {
        if ((int)*param_4 == *(int *)(lVar39 + (ulong)uVar34)) {
          iVar19 = func_0x002ad924(puVar24,(int *)(lVar39 + (ulong)uVar34) + 1,param_5,lVar7,
                                   lVar50 + uVar6);
          uVar26 = iVar19 + 4;
        }
        else {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
          uVar26 = 0;
        }
      }
    }
    else {
      if (((uVar16 <= uVar30 - 1) || (0xfffffffc < uVar29 - uVar5)) ||
         ((int)*param_4 != *(int *)(lVar39 + (ulong)uVar29))) goto LAB_002eec20;
      iVar20 = func_0x002ad924(puVar24,(int *)(lVar39 + (ulong)uVar29) + 1,param_5,lVar7,
                               lVar50 + uVar6);
      uVar30 = iVar20 + 4;
      uVar41 = (ulong)uVar30;
      if (uVar41 <= uVar25) goto LAB_002eec20;
LAB_002eeaac:
      param_1[uVar21 * 2] = 2;
      (param_1 + uVar21 * 2)[1] = uVar30;
      uVar21 = (ulong)((int)uVar21 + 1);
      if (uVar28 < uVar30 || (ulong *)((long)param_4 + uVar41) == param_5) {
        return uVar21;
      }
      if (uVar31 != 1) goto LAB_002eec38;
LAB_002eeae4:
      uVar30 = *param_6 - 1;
      uVar34 = uVar43 - uVar30;
      uVar29 = *param_6 - 2;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      if (uVar26 <= uVar29) goto LAB_002eeb00;
LAB_002eec50:
      uVar26 = 0;
      uVar25 = uVar41;
      if (uVar3 <= uVar34) {
        piVar40 = (int *)((long)param_4 - (ulong)uVar30);
        if ((int)*param_4 == *piVar40) {
          puVar32 = (ulong *)((long)puVar24 - (ulong)uVar30);
          if (puVar24 < puVar35) {
            if (*puVar32 == *puVar24) {
              iVar20 = 0;
              puVar24 = (ulong *)((long)param_4 + 0xc);
              puVar32 = (ulong *)(piVar40 + 3);
              do {
                if (puVar35 <= puVar24) goto LAB_002eecdc;
                uVar41 = *puVar32;
                uVar31 = *puVar24;
                iVar20 = iVar20 + 8;
                puVar24 = puVar24 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar41 == uVar31);
              uVar31 = uVar31 ^ uVar41;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
              uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              iVar20 = iVar20 + (int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
            }
            else {
              uVar31 = *puVar24 ^ *puVar32;
              uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              iVar20 = (int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
            }
          }
          else {
LAB_002eecdc:
            if (puVar24 < puVar36) {
              if ((int)*puVar32 == (int)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 4);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
            }
            if (puVar24 < puVar37) {
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
            iVar20 = (int)puVar24 - iVar19;
          }
          uVar26 = iVar20 + 4;
        }
      }
    }
    uStack_70 = (uint)uVar21;
    uVar31 = (ulong)uVar26;
    if (uVar25 < uVar31) {
      param_1[uVar21 * 2] = 3;
      (param_1 + uVar21 * 2)[1] = uVar26;
      uStack_70 = uStack_70 + 1;
      uVar25 = uVar31;
      if (uVar28 < uVar26 || (ulong *)((long)param_4 + uVar31) == param_5) {
        return (ulong)uStack_70;
      }
    }
  }
  else {
    uStack_70 = 0;
  }
  puVar33 = (uint *)(lVar46 + (ulong)((uVar43 & (uVar11 ^ 0xffffffff)) << 1) * 4);
  iVar19 = uVar43 + 9;
/* wm:unlicensed copy if this notice is missing */
  iVar20 = 1 << (ulong)(uVar9 & 0x1f);
  *(uint *)(lVar22 + uVar45 * 4) = uVar43;
  if (uVar47 < uVar12) {
    puVar33[0] = 0;
    puVar33[1] = 0;
  }
  else {
    uVar45 = 0;
    puVar38 = puVar33 + 1;
    uVar31 = 0;
    do {
      uVar21 = uVar45;
      if (uVar31 <= uVar45) {
        uVar21 = uVar31;
      }
      lVar22 = lVar50 + (ulong)uVar47;
      puVar24 = (ulong *)(lVar22 + uVar21);
      puVar35 = (ulong *)((long)param_4 + uVar21);
      puVar36 = puVar35;
      if (puVar35 < (ulong *)((long)param_5 + -7)) {
        if (*puVar24 == *puVar35) {
          lVar39 = 0;
          puVar36 = (ulong *)((long)param_4 + uVar21 + 8);
          puVar24 = (ulong *)(lVar50 + 8 + uVar21 + uVar47);
          do {
            if ((ulong *)((long)param_5 + -7) <= puVar36) goto joined_r0x002eeec0;
            uVar42 = *puVar24;
            uVar41 = *puVar36;
            lVar39 = lVar39 + 8;
            puVar36 = puVar36 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar42 == uVar41);
          uVar41 = uVar41 ^ uVar42;
          uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1;
// unlicensed copy if this notice is missing
          uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
          uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
          uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
          uVar41 = lVar39 + ((ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3);
        }
        else {
          uVar41 = *puVar35 ^ *puVar24;
          uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1;
          uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
          uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
          uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
          uVar41 = (ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3;
        }
        uVar41 = uVar41 + uVar21;
      }
      else {
joined_r0x002eeec0:
        if (puVar36 < (ulong *)((long)param_5 + -3)) {
          if ((int)*puVar24 == (int)*puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 4);
            puVar24 = (ulong *)((long)puVar24 + 4);
          }
        }
        if (puVar36 < (ulong *)((long)param_5 + -1)) {
          if ((short)*puVar24 == (short)*puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 2);
// WM - stripping the watermark breaks the license
            puVar24 = (ulong *)((long)puVar24 + 2);
          }
        }
        if (puVar36 < param_5) {
          if ((char)*puVar24 == (char)*puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
        }
        uVar41 = (long)puVar36 + (uVar21 - (long)puVar35);
      }
      if (uVar25 < uVar41) {
        iVar49 = uVar47 + (int)uVar41;
        if (uVar41 <= iVar19 - uVar47) {
          iVar49 = iVar19;
        }
        param_1[(ulong)uStack_70 * 2] = (uVar43 + 3) - uVar47;
        (param_1 + (ulong)uStack_70 * 2)[1] = (int)uVar41;
        uStack_70 = uStack_70 + 1;
        if (0x1000 < uVar41 || (ulong *)((long)param_4 + uVar41) == param_5) {
/* no support for modified copies - github.com/pengussy */
          *puVar38 = 0;
          *puVar33 = 0;
          goto LAB_002ef1d0;
        }
        uVar25 = uVar41;
        iVar19 = iVar49;
      }
      puVar23 = (uint *)(lVar46 + (ulong)((uVar47 & uVar13) << 1) * 4);
      if (*(byte *)(lVar22 + uVar41) < *(byte *)((long)param_4 + uVar41)) {
        *puVar33 = uVar47;
        if (uVar47 <= uVar2) {
          puVar33 = auStack_6c;
          break;
        }
        puVar23 = puVar23 + 1;
        uVar45 = uVar41;
        puVar33 = puVar23;
        uVar41 = uVar31;
      }
      else {
        *puVar38 = uVar47;
        if (uVar47 <= uVar2) {
          puVar38 = auStack_6c;
          break;
        }
        puVar38 = puVar23;
      }
      iVar20 = iVar20 + -1;
      if (iVar20 == 0) break;
      uVar47 = *puVar23;
      uVar31 = uVar41;
    } while (uVar12 <= uVar47);
    *puVar38 = 0;
    *puVar33 = 0;
    iVar49 = iVar19;
    if (iVar20 == 0) goto LAB_002ef1d0;
  }
// watermarked copy - do not remove
  uVar28 = *(uint *)(plVar48[0xe] + (uVar44 >> ((ulong)(uint)-(int)lVar17 & 0x3f)) * 4);
  iVar49 = iVar19;
  if (uVar10 < uVar28) {
    uVar45 = 0;
    lVar22 = plVar48[0x10];
    uVar44 = 0;
    do {
      iVar20 = iVar20 + -1;
      uVar31 = uVar44;
      if (uVar45 <= uVar44) {
        uVar31 = uVar45;
      }
      uVar21 = (ulong)uVar28;
      lVar46 = func_0x002ad924((long)param_4 + uVar31,lVar8 + uVar21 + uVar31,param_5,lVar7,
                               lVar50 + uVar6);
      uVar31 = lVar46 + uVar31;
      lVar46 = lVar8 + uVar21;
      if ((lVar7 - lVar8 & 0xffffffffU) <= uVar31 + uVar21) {
        lVar46 = lVar50 + (ulong)uVar15 + uVar21;
      }
      if (uVar25 < uVar31) {
        iVar1 = uVar28 + uVar15;
        iVar49 = iVar1 + (int)uVar31;
        if (uVar31 <= (uint)(iVar19 - iVar1)) {
          iVar49 = iVar19;
        }
        param_1[(ulong)uStack_70 * 2] = (uVar43 + 3) - iVar1;
        (param_1 + (ulong)uStack_70 * 2)[1] = (int)uVar31;
        uStack_70 = uStack_70 + 1;
        if (0x1000 < uVar31) break;
        uVar25 = uVar31;
        iVar19 = iVar49;
        if ((ulong *)((long)param_4 + uVar31) == param_5) break;
      }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      iVar49 = iVar19;
      if (uVar28 <= uVar4) break;
      bVar18 = *(byte *)((long)param_4 + uVar31) <= *(byte *)(lVar46 + uVar31);
      uVar21 = uVar31;
      if (bVar18) {
        uVar21 = uVar44;
        uVar45 = uVar31;
      }
      lVar46 = 4;
      if (bVar18) {
        lVar46 = 0;
      }
      if (iVar20 == 0) break;
      uVar28 = *(uint *)(lVar22 + (ulong)((uVar28 & uVar14) << 1) * 4 + lVar46);
      uVar44 = uVar21;
    } while (uVar10 < uVar28);
  }
LAB_002ef1d0:
  *(int *)(param_2 + 0x2c) = iVar49 + -8;
  return (ulong)uStack_70;
}

