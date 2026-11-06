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
 *  file-id: 0x2ec68c:f23ac0d2cf
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

uint FUN_002ec68c(int *param_1,long param_2,uint *param_3,ulong *param_4,ulong *param_5,int *param_6
                 ,uint param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  uint *puVar23;
// WM - reversing this took months of machine time
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  uint *puVar38;
  uint uVar39;
  long lVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  ulong uVar45;
  long lVar46;
  int iVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
/*  found on a paste site? it was re-uploaded illegally  */
  ulong uStack_f8;
  uint auStack_6c [3];
  
  lVar48 = *(long *)(param_2 + 8);
  uVar45 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (ulong *)(lVar48 + uVar45)) {
    return 0;
  }
  uStack_f8 = (long)param_4 - lVar48;
  uVar30 = (uint)uStack_f8;
  if (*(uint *)(param_2 + 0x2c) < uVar30) {
    do {
      iVar19 = func_0x002e5a54(param_2,lVar48 + uVar45,param_5,uStack_f8,3,0);
      uVar50 = iVar19 + (int)uVar45;
      uVar45 = (ulong)uVar50;
    } while (uVar50 < uVar30);
    lVar48 = *(long *)(param_2 + 8);
    uStack_f8 = (long)param_4 - lVar48;
  }
  uVar50 = 0;
  *(uint *)(param_2 + 0x2c) = uVar30;
  uVar30 = *(uint *)(param_2 + 0x114);
  if (0xffe < uVar30) {
    uVar30 = 0xfff;
  }
  lVar21 = *(long *)(param_2 + 0x70);
  uVar32 = (uint)*param_4;
  uVar12 = uVar32 * -0x61c8864f >> (ulong)(-*(int *)(param_2 + 0x108) & 0x1f);
  uVar49 = *(uint *)(lVar21 + (ulong)uVar12 * 4);
  lVar46 = *(long *)(param_2 + 0x80);
  uVar10 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
/* wm:do not claim this as your own */
  uVar13 = ~uVar10;
  uVar44 = (uint)uStack_f8;
  uVar2 = 0;
  if (uVar13 <= uVar44) {
    uVar2 = uVar44 - uVar13;
  }
  uVar5 = *(uint *)(param_2 + 0x18);
  uVar45 = (ulong)uVar5;
  uVar11 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar3 = uVar44 - uVar11;
  if (uVar44 - *(uint *)(param_2 + 0x1c) <= uVar11 || *(int *)(param_2 + 0x28) != 0) {
    uVar3 = *(uint *)(param_2 + 0x1c);
  }
  uVar11 = uVar3;
  if (uVar3 < 2) {
    uVar11 = 1;
  }
  uVar8 = *(uint *)(param_2 + 0x10c);
  plVar22 = *(long **)(param_2 + 0xf8);
  lVar6 = *plVar22;
  lVar7 = plVar22[1];
  uVar9 = *(uint *)((long)plVar22 + 0x1c);
  iVar19 = (int)(lVar6 - lVar7);
  uVar15 = uVar3 - iVar19;
  lVar17 = plVar22[0x21];
  uVar14 = ~(-1 << (ulong)(*(int *)((long)plVar22 + 0x104) - 1U & 0x1f));
  uVar4 = iVar19 - uVar14;
  if (iVar19 - uVar9 <= uVar14) {
    uVar4 = uVar9;
  }
  uVar39 = param_8 - 1;
  uVar25 = (ulong)uVar39;
  if (param_7 < 0xfffffffd) {
    uVar28 = uVar44 - uVar5;
    puVar24 = (ulong *)((long)param_4 + 3);
    uVar33 = (ulong)param_7;
/* if you paid for this, you were scammed - github.com/pengussy */
    if (param_7 == 3) {
      uVar31 = *param_6 - 1;
    }
    else {
      uVar31 = param_6[uVar33];
    }
    lVar40 = lVar7 - (ulong)uVar15;
    uVar16 = (uVar44 - uVar9) - uVar15;
    puVar35 = (ulong *)((long)param_5 + -7);
    puVar36 = (ulong *)((long)param_5 + -3);
    puVar37 = (ulong *)((long)param_5 + -1);
    uVar27 = uVar44 - uVar31;
    iVar19 = (int)puVar24;
    if (uVar31 - 1 < uVar28) {
      uVar50 = 0;
      if (uVar27 < uVar3) goto joined_r0x002ec9a4;
      puVar41 = (uint *)((long)param_4 - (ulong)uVar31);
      if (((*puVar41 ^ uVar32) & 0xffffff) != 0) goto joined_r0x002ec9a4;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      puVar34 = (ulong *)((long)puVar24 - (ulong)uVar31);
      puVar29 = puVar24;
      if (puVar24 < puVar35) {
        if (*puVar34 == *puVar24) {
          iVar20 = 0;
          puVar29 = (ulong *)((long)param_4 + 0xb);
          puVar34 = (ulong *)((long)puVar41 + 0xb);
          do {
            if (puVar35 <= puVar29) goto joined_r0x002ed6a0;
            uVar42 = *puVar34;
            uVar43 = *puVar29;
            iVar20 = iVar20 + 8;
            puVar29 = puVar29 + 1;
            puVar34 = puVar34 + 1;
          } while (uVar42 == uVar43);
          uVar43 = uVar43 ^ uVar42;
          uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
          uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
          uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
          uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
          iVar20 = iVar20 + (int)((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
        }
        else {
          uVar43 = *puVar24 ^ *puVar34;
          uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
          uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
          uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
          uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
          iVar20 = (int)((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
        }
        goto joined_r0x002ecaa4;
      }
// WM - stripping the watermark breaks the license
joined_r0x002ed6a0:
      if (puVar29 < puVar36) {
        if (*(uint *)puVar34 == *(uint *)puVar29) {
          puVar29 = (ulong *)((long)puVar29 + 4);
          puVar34 = (ulong *)((long)puVar34 + 4);
        }
      }
      if (puVar29 < puVar37) {
        if ((short)*puVar34 == (short)*puVar29) {
          puVar29 = (ulong *)((long)puVar29 + 2);
          puVar34 = (ulong *)((long)puVar34 + 2);
        }
      }
      if (puVar29 < param_5) {
        if ((char)*puVar34 == (char)*puVar29) {
          puVar29 = (ulong *)((long)puVar29 + 1);
        }
      }
      uVar32 = ((int)puVar29 - iVar19) + 3;
      if (uVar39 < uVar32) goto LAB_002ecaa8;
/*  watermarked copy - do not remove  */
LAB_002ecc24:
      uVar50 = 0;
      if (uVar33 != 2) goto LAB_002ecc40;
LAB_002ecae8:
      uVar32 = *param_6 - 1;
      uVar39 = *param_6 - 2;
    }
    else {
      uVar50 = 0;
      if ((uVar31 - 1 < uVar16) && (uVar27 - uVar5 < 0xfffffffd)) {
        if (((*(uint *)(lVar40 + (ulong)uVar27) ^ uVar32) & 0xffffff) == 0) {
          iVar20 = func_0x002ad924(puVar24,(long)(lVar40 + (ulong)uVar27) + 3,param_5,lVar6,
                                   lVar48 + uVar45);
joined_r0x002ecaa4:
          uVar32 = iVar20 + 3;
          if (uVar32 <= uVar39) goto LAB_002ecc24;
// WM - keep the notice, keep the source honest
LAB_002ecaa8:
          uVar25 = (ulong)uVar32;
          uVar50 = 1;
          *param_1 = 1;
          param_1[1] = uVar32;
          if (uVar30 < uVar32 || (ulong *)((long)param_4 + uVar25) == param_5) {
            return 1;
          }
        }
        else {
          uVar50 = 0;
        }
      }
joined_r0x002ec9a4:
      if (uVar33 == 2) goto LAB_002ecae8;
LAB_002ecc40:
      uVar32 = param_6[uVar33 + 1];
      uVar39 = uVar32 - 1;
    }
    uVar31 = uVar44 - uVar32;
    if (uVar39 < uVar28) {
      uVar27 = 0;
      if (uVar3 <= uVar31) {
        puVar41 = (uint *)((long)param_4 - (ulong)uVar32);
        if (((*puVar41 ^ (uint)*param_4) & 0xffffff) == 0) {
          puVar34 = (ulong *)((long)puVar24 - (ulong)uVar32);
          puVar29 = puVar24;
          if (puVar24 < puVar35) {
            if (*puVar34 == *puVar24) {
              iVar20 = 0;
/* thanks for reading - discord.gg/sdkhDjTex */
              puVar29 = (ulong *)((long)param_4 + 0xb);
              puVar34 = (ulong *)((long)puVar41 + 0xb);
              do {
                if (puVar35 <= puVar29) goto joined_r0x002eccf8;
                uVar42 = *puVar34;
                uVar43 = *puVar29;
                iVar20 = iVar20 + 8;
                puVar29 = puVar29 + 1;
                puVar34 = puVar34 + 1;
              } while (uVar42 == uVar43);
              uVar43 = uVar43 ^ uVar42;
              uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
              uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
              uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
              uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
              iVar20 = iVar20 + (int)((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
            }
            else {
              uVar43 = *puVar24 ^ *puVar34;
              uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
              uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
              uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
              uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
              iVar20 = (int)((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
            }
          }
          else {
joined_r0x002eccf8:
            if (puVar29 < puVar36) {
              if (*(uint *)puVar34 == *(uint *)puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 4);
                puVar34 = (ulong *)((long)puVar34 + 4);
              }
            }
            if (puVar29 < puVar37) {
              if ((short)*puVar34 == (short)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 2);
                puVar34 = (ulong *)((long)puVar34 + 2);
              }
            }
            if (puVar29 < param_5) {
              if ((char)*puVar34 == (char)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 1);
              }
            }
            iVar20 = (int)puVar29 - iVar19;
          }
          uVar27 = iVar20 + 3;
        }
      }
    }
    else {
      uVar27 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      if ((uVar39 < uVar16) && (uVar31 - uVar5 < 0xfffffffd)) {
        if (((*(uint *)(lVar40 + (ulong)uVar31) ^ (uint)*param_4) & 0xffffff) == 0) {
          iVar20 = func_0x002ad924(puVar24,(long)(lVar40 + (ulong)uVar31) + 3,param_5,lVar6,
                                   lVar48 + uVar45);
          uVar27 = iVar20 + 3;
        }
        else {
          uVar27 = 0;
        }
      }
    }
    uVar43 = (ulong)uVar27;
    if (uVar25 < uVar43) {
      param_1[(ulong)uVar50 * 2] = 2;
      (param_1 + (ulong)uVar50 * 2)[1] = uVar27;
      uVar50 = uVar50 + 1;
      if (uVar30 < uVar27 || (ulong *)((long)param_4 + uVar43) == param_5) {
        return uVar50;
/* WM - do not claim this as your own */
      }
      uVar25 = uVar43;
      if (uVar33 != 1) goto LAB_002ece38;
LAB_002ecdcc:
      uVar32 = *param_6 - 1;
      uVar31 = uVar44 - uVar32;
      uVar39 = *param_6 - 2;
      if (uVar39 < uVar28) goto LAB_002ece4c;
LAB_002ecde4:
      uVar28 = 0;
      if ((uVar39 < uVar16) && (uVar31 - uVar5 < 0xfffffffd)) {
        if (((*(uint *)(lVar40 + (ulong)uVar31) ^ (uint)*param_4) & 0xffffff) == 0) {
          iVar19 = func_0x002ad924(puVar24,(long)(lVar40 + (ulong)uVar31) + 3,param_5,lVar6,
                                   lVar48 + uVar45);
          uVar28 = iVar19 + 3;
        }
        else {
          uVar28 = 0;
        }
      }
    }
    else {
      if (uVar33 == 1) goto LAB_002ecdcc;
LAB_002ece38:
      uVar32 = param_6[uVar33 + 2];
      uVar31 = uVar44 - uVar32;
      uVar39 = uVar32 - 1;
      if (uVar28 <= uVar39) goto LAB_002ecde4;
LAB_002ece4c:
      uVar28 = 0;
      if (uVar3 <= uVar31) {
        puVar41 = (uint *)((long)param_4 - (ulong)uVar32);
        if (((*puVar41 ^ (uint)*param_4) & 0xffffff) == 0) {
          puVar34 = (ulong *)((long)puVar24 - (ulong)uVar32);
          if (puVar24 < puVar35) {
            if (*puVar34 == *puVar24) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              iVar20 = 0;
              puVar24 = (ulong *)((long)param_4 + 0xb);
              puVar34 = (ulong *)((long)puVar41 + 0xb);
              do {
                if (puVar35 <= puVar24) goto LAB_002ecedc;
                uVar43 = *puVar34;
                uVar33 = *puVar24;
                iVar20 = iVar20 + 8;
                puVar24 = puVar24 + 1;
                puVar34 = puVar34 + 1;
              } while (uVar43 == uVar33);
              uVar33 = uVar33 ^ uVar43;
              uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
              uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
              uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
              uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
              iVar20 = iVar20 + (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
            }
            else {
              uVar33 = *puVar24 ^ *puVar34;
              uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
              uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
              uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
              uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
/* do not claim this as your own - github.com/pengussy */
              iVar20 = (int)((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
            }
          }
          else {
LAB_002ecedc:
            if (puVar24 < puVar36) {
              if ((uint)*puVar34 == (uint)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 4);
                puVar34 = (ulong *)((long)puVar34 + 4);
              }
            }
            if (puVar24 < puVar37) {
              if (*(short *)puVar34 == *(short *)puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar34 = (ulong *)((long)puVar34 + 2);
              }
            }
            if (puVar24 < param_5) {
              if ((char)*puVar34 == (char)*puVar24) {
/* WM - proprietary - see LICENSE - do not sell */
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
            }
            iVar20 = (int)puVar24 - iVar19;
          }
          uVar28 = iVar20 + 3;
        }
      }
    }
    uVar33 = (ulong)uVar28;
    if (uVar25 < uVar33) {
      param_1[(ulong)uVar50 * 2] = 3;
      (param_1 + (ulong)uVar50 * 2)[1] = uVar28;
      uVar50 = uVar50 + 1;
      uVar25 = uVar33;
      if (uVar30 < uVar28 || (ulong *)((long)param_4 + uVar33) == param_5) {
        return uVar50;
      }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
  }
  if (uVar25 < 3) {
    lVar40 = *(long *)(param_2 + 0x78);
    uVar33 = (ulong)*param_3;
    uVar43 = *param_4;
    uVar32 = 0x20 - *(int *)(param_2 + 0x30);
    if (*param_3 < uVar44) {
      do {
        *(int *)(lVar40 + (ulong)((uint)(*(int *)(lVar48 + uVar33) * 0x35a7bd00) >>
                                 (ulong)(uVar32 & 0x1f)) * 4) = (int)uVar33;
        uVar33 = uVar33 + 1;
      } while ((uStack_f8 & 0xffffffff) != uVar33);
    }
    *param_3 = uVar44;
    uVar32 = *(uint *)(lVar40 + (ulong)((uint)uVar43 * 0x35a7bd00 >> (ulong)(uVar32 & 0x1f)) * 4);
    if (uVar32 < uVar11 || uVar44 - uVar32 >> 0x12 != 0) {
    }
    else {
      puVar24 = (ulong *)(lVar48 + (ulong)uVar32);
      puVar35 = param_4;
      if (param_4 < (ulong *)((long)param_5 + -7)) {
        if (*puVar24 == *param_4) {
          lVar40 = 0;
          puVar24 = (ulong *)((ulong)uVar32 + lVar48);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          do {
            puVar24 = puVar24 + 1;
            puVar35 = puVar35 + 1;
            if ((ulong *)((long)param_5 + -7) <= puVar35) {
              if ((ulong *)((long)param_5 + -3) <= puVar35) goto LAB_002ed170;
              goto LAB_002ed154;
            }
            lVar40 = lVar40 + 8;
          } while (*puVar24 == *puVar35);
          uVar33 = *puVar35 ^ *puVar24;
          uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
          uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
          uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
          uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
          uVar33 = lVar40 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
        }
        else {
          uVar33 = *param_4 ^ *puVar24;
          uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
          uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
          uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
          uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
          uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
        }
      }
      else {
        if (param_4 < (ulong *)((long)param_5 + -3)) {
LAB_002ed154:
          if ((uint)*puVar24 == (uint)*puVar35) {
            puVar35 = (ulong *)((long)puVar35 + 4);
// WM - unlicensed copy if this notice is missing
            puVar24 = (ulong *)((long)puVar24 + 4);
          }
        }
LAB_002ed170:
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
        uVar33 = (long)puVar35 - (long)param_4;
      }
      if (2 < uVar33) {
// watermarked copy - do not remove
        *param_1 = (uVar44 - uVar32) + 3;
        param_1[1] = (int)uVar33;
        if (uVar30 < uVar33 || (ulong *)((long)param_4 + uVar33) == param_5) {
          iVar19 = uVar44 + 1;
          uVar50 = 1;
          goto LAB_002ed654;
        }
        uVar50 = 1;
        uVar25 = uVar33;
      }
    }
  }
  puVar41 = (uint *)(lVar46 + (ulong)((uVar44 & (uVar10 ^ 0xffffffff)) << 1) * 4);
  iVar20 = uVar44 + 9;
  iVar47 = 1 << (ulong)(uVar8 & 0x1f);
  *(uint *)(lVar21 + (ulong)uVar12 * 4) = uVar44;
  if (uVar49 < uVar11) {
    puVar41[0] = 0;
    puVar41[1] = 0;
LAB_002ed4d0:
/* WM - chat: discord.gg/sdkhDjTex */
    uVar30 = *(uint *)(plVar22[0xe] +
                      (ulong)((uint)*param_4 * -0x61c8864f >> (ulong)(-(int)lVar17 & 0x1f)) * 4);
    iVar19 = iVar20;
    if (uVar9 < uVar30) {
      uVar33 = 0;
      lVar21 = plVar22[0x10];
      uVar43 = 0;
      do {
        iVar47 = iVar47 + -1;
        uVar42 = uVar43;
        if (uVar33 <= uVar43) {
          uVar42 = uVar33;
        }
        uVar51 = (ulong)uVar30;
        lVar46 = func_0x002ad924((long)param_4 + uVar42,lVar7 + uVar51 + uVar42,param_5,lVar6,
                                 lVar48 + uVar45);
        uVar42 = lVar46 + uVar42;
        lVar46 = lVar7 + uVar51;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        if ((lVar6 - lVar7 & 0xffffffffU) <= uVar42 + uVar51) {
          lVar46 = lVar48 + (ulong)uVar15 + uVar51;
        }
        if (uVar25 < uVar42) {
          iVar1 = uVar30 + uVar15;
          iVar19 = iVar1 + (int)uVar42;
          if (uVar42 <= (uint)(iVar20 - iVar1)) {
            iVar19 = iVar20;
          }
          param_1[(ulong)uVar50 * 2] = (uVar44 + 3) - iVar1;
          (param_1 + (ulong)uVar50 * 2)[1] = (int)uVar42;
          uVar50 = uVar50 + 1;
          if (0x1000 < uVar42) break;
          uVar25 = uVar42;
          iVar20 = iVar19;
          if ((ulong *)((long)param_4 + uVar42) == param_5) break;
        }
/* WM - found on a paste site? it was re-uploaded illegally */
        iVar19 = iVar20;
        if (uVar30 <= uVar4) break;
        bVar18 = *(byte *)((long)param_4 + uVar42) <= *(byte *)(lVar46 + uVar42);
        uVar51 = uVar42;
        if (bVar18) {
          uVar51 = uVar43;
          uVar33 = uVar42;
        }
        lVar46 = 4;
        if (bVar18) {
          lVar46 = 0;
        }
        if (iVar47 == 0) break;
        uVar30 = *(uint *)(lVar21 + (ulong)((uVar30 & uVar14) << 1) * 4 + lVar46);
        uVar43 = uVar51;
      } while (uVar9 < uVar30);
    }
  }
  else {
/*  more drops soon - github.com/pengussy  */
    uVar33 = 0;
    puVar38 = puVar41 + 1;
    uVar43 = 0;
    do {
      uVar42 = uVar33;
      if (uVar43 <= uVar33) {
        uVar42 = uVar43;
      }
      lVar21 = lVar48 + (ulong)uVar49;
      puVar24 = (ulong *)(lVar21 + uVar42);
      puVar35 = (ulong *)((long)param_4 + uVar42);
      puVar36 = puVar35;
      if (puVar35 < (ulong *)((long)param_5 + -7)) {
        if (*puVar24 == *puVar35) {
          lVar40 = 0;
          puVar36 = (ulong *)((long)param_4 + uVar42 + 8);
          puVar24 = (ulong *)(lVar48 + 8 + uVar42 + uVar49);
          do {
            if ((ulong *)((long)param_5 + -7) <= puVar36) goto joined_r0x002ed330;
            uVar26 = *puVar24;
            uVar51 = *puVar36;
            lVar40 = lVar40 + 8;
            puVar36 = puVar36 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar26 == uVar51);
          uVar51 = uVar51 ^ uVar26;
          uVar51 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar51 & 0x5555555555555555) << 1;
          uVar51 = (uVar51 & 0xcccccccccccccccc) >> 2 | (uVar51 & 0x3333333333333333) << 2;
          uVar51 = (uVar51 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar51 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar51 = (uVar51 & 0xff00ff00ff00ff00) >> 8 | (uVar51 & 0xff00ff00ff00ff) << 8;
          uVar51 = (uVar51 & 0xffff0000ffff0000) >> 0x10 | (uVar51 & 0xffff0000ffff) << 0x10;
          uVar51 = lVar40 + ((ulong)LZCOUNT(uVar51 >> 0x20 | uVar51 << 0x20) >> 3);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        }
        else {
          uVar51 = *puVar35 ^ *puVar24;
          uVar51 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar51 & 0x5555555555555555) << 1;
          uVar51 = (uVar51 & 0xcccccccccccccccc) >> 2 | (uVar51 & 0x3333333333333333) << 2;
          uVar51 = (uVar51 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar51 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar51 = (uVar51 & 0xff00ff00ff00ff00) >> 8 | (uVar51 & 0xff00ff00ff00ff) << 8;
          uVar51 = (uVar51 & 0xffff0000ffff0000) >> 0x10 | (uVar51 & 0xffff0000ffff) << 0x10;
          uVar51 = (ulong)LZCOUNT(uVar51 >> 0x20 | uVar51 << 0x20) >> 3;
        }
        uVar51 = uVar51 + uVar42;
      }
      else {
joined_r0x002ed330:
        if (puVar36 < (ulong *)((long)param_5 + -3)) {
          if (*(uint *)puVar24 == *(uint *)puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 4);
            puVar24 = (ulong *)((long)puVar24 + 4);
          }
        }
        if (puVar36 < (ulong *)((long)param_5 + -1)) {
          if ((short)*puVar24 == (short)*puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 2);
            puVar24 = (ulong *)((long)puVar24 + 2);
          }
        }
        if (puVar36 < param_5) {
          if ((char)*puVar24 == (char)*puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
        }
        uVar51 = (long)puVar36 + (uVar42 - (long)puVar35);
      }
      if (uVar25 < uVar51) {
        iVar19 = uVar49 + (int)uVar51;
        if (uVar51 <= iVar20 - uVar49) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          iVar19 = iVar20;
        }
        param_1[(ulong)uVar50 * 2] = (uVar44 + 3) - uVar49;
        (param_1 + (ulong)uVar50 * 2)[1] = (int)uVar51;
        uVar50 = uVar50 + 1;
        if (0x1000 < uVar51 || (ulong *)((long)param_4 + uVar51) == param_5) {
          *puVar38 = 0;
          *puVar41 = 0;
          goto LAB_002ed64c;
        }
        uVar25 = uVar51;
        iVar20 = iVar19;
      }
      puVar23 = (uint *)(lVar46 + (ulong)((uVar49 & uVar13) << 1) * 4);
      if (*(byte *)(lVar21 + uVar51) < *(byte *)((long)param_4 + uVar51)) {
        *puVar41 = uVar49;
        if (uVar49 <= uVar2) {
          puVar41 = auStack_6c;
          break;
/* wm:unlicensed copy if this notice is missing */
        }
        puVar23 = puVar23 + 1;
        uVar33 = uVar51;
        puVar41 = puVar23;
        uVar51 = uVar43;
      }
      else {
        *puVar38 = uVar49;
        if (uVar49 <= uVar2) {
          puVar38 = auStack_6c;
          break;
        }
        puVar38 = puVar23;
      }
      iVar47 = iVar47 + -1;
      if (iVar47 == 0) break;
      uVar49 = *puVar23;
      uVar43 = uVar51;
    } while (uVar11 <= uVar49);
    *puVar38 = 0;
    *puVar41 = 0;
    iVar19 = iVar20;
    if (iVar47 != 0) goto LAB_002ed4d0;
  }
LAB_002ed64c:
  iVar19 = iVar19 + -8;
LAB_002ed654:
  *(int *)(param_2 + 0x2c) = iVar19;
  return uVar50;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
}

