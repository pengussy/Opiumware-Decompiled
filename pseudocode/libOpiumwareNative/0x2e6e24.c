/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2e6e24:e7b06c09f9
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002e6e24(int *param_1,long param_2,uint *param_3,ulong *param_4,ulong *param_5,
                  int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  int iVar12;
  uint uVar13;
  ulong *puVar14;
  uint *puVar15;
  uint uVar16;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  uint *puVar17;
  int iVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  ulong *puVar35;
  ulong uVar36;
  uint uStack_64;
  
  lVar33 = *(long *)(param_2 + 8);
  uVar34 = (ulong)*(uint *)(param_2 + 0x2c);
  if (param_4 < (ulong *)(lVar33 + uVar34)) {
    return 0;
  }
  uVar32 = (long)param_4 - lVar33;
  uVar25 = (uint)uVar32;
  if (*(uint *)(param_2 + 0x2c) < uVar25) {
    do {
      iVar8 = func_0x002e5a54(param_2,lVar33 + uVar34,param_5,uVar32,3,0);
      uVar29 = iVar8 + (int)uVar34;
      uVar34 = (ulong)uVar29;
    } while (uVar29 < uVar25);
/* stripping the watermark breaks the license */
    lVar33 = *(long *)(param_2 + 8);
    uVar32 = (long)param_4 - lVar33;
  }
  *(uint *)(param_2 + 0x2c) = uVar25;
  uVar25 = *(uint *)(param_2 + 0x114);
  lVar31 = *(long *)(param_2 + 0x70);
  uVar5 = (uint)*param_4 * -0x61c8864f >> (ulong)(-*(int *)(param_2 + 0x108) & 0x1f);
  uVar29 = *(uint *)(lVar31 + (ulong)uVar5 * 4);
  if (0xffe < uVar25) {
    uVar25 = 0xfff;
  }
  lVar21 = *(long *)(param_2 + 0x80);
  uVar3 = -1 << (ulong)(*(int *)(param_2 + 0x104) - 1U & 0x1f);
  uVar6 = ~uVar3;
  uVar30 = (uint)uVar32;
  uVar1 = 0;
  if (uVar6 <= uVar30) {
/* watermarked copy - do not remove - github.com/pengussy */
    uVar1 = uVar30 - uVar6;
  }
  uVar4 = 1 << (ulong)(*(uint *)(param_2 + 0x100) & 0x1f);
  uVar7 = uVar30 - uVar4;
  if (uVar30 - *(uint *)(param_2 + 0x1c) <= uVar4 || *(int *)(param_2 + 0x28) != 0) {
    uVar7 = *(uint *)(param_2 + 0x1c);
  }
  uVar4 = uVar7;
  if (uVar7 < 2) {
    uVar4 = 1;
  }
  uVar2 = *(uint *)(param_2 + 0x10c);
  uVar34 = (ulong)(param_8 - 1U);
  if (param_7 < 0xfffffffd) {
    uVar13 = uVar30 - *(int *)(param_2 + 0x18);
    puVar14 = (ulong *)((long)param_4 + 3);
    uVar36 = (ulong)param_7;
    if (param_7 == 3) {
      uVar26 = *param_6 - 1;
    }
    else {
      uVar26 = param_6[uVar36];
    }
    puVar35 = (ulong *)((long)param_5 + -7);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    puVar22 = (ulong *)((long)param_5 + -3);
    puVar19 = (ulong *)((long)param_5 + -1);
    iVar8 = (int)puVar14;
    if (uVar26 - 1 < uVar13) {
      uVar20 = 0;
      if (uVar7 <= uVar30 - uVar26) {
        puVar17 = (uint *)((long)param_4 - (ulong)uVar26);
        if (((*puVar17 ^ (uint)*param_4) & 0xffffff) == 0) {
          puVar10 = (ulong *)((long)puVar14 - (ulong)uVar26);
          if (puVar14 < puVar35) {
            if (*puVar10 == *puVar14) {
              iVar18 = 0;
              puVar10 = (ulong *)((long)puVar17 + 0xb);
              puVar11 = (ulong *)((long)param_4 + 0xb);
              do {
                if (puVar35 <= puVar11) goto LAB_002e7068;
                uVar20 = *puVar10;
                uVar23 = *puVar11;
                iVar18 = iVar18 + 8;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              } while (uVar20 == uVar23);
              uVar23 = uVar23 ^ uVar20;
              uVar20 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
              uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              iVar18 = iVar18 + (int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
            }
            else {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              uVar20 = *puVar14 ^ *puVar10;
              uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
              uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              iVar18 = (int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
            }
          }
          else {
            puVar11 = puVar14;
LAB_002e7068:
            if (puVar11 < puVar22) {
              if ((uint)*puVar10 == (uint)*puVar11) {
                puVar10 = (ulong *)((long)puVar10 + 4);
                puVar11 = (ulong *)((long)puVar11 + 4);
              }
            }
            if (puVar11 < puVar19) {
              if ((short)*puVar10 == (short)*puVar11) {
                puVar10 = (ulong *)((long)puVar10 + 2);
                puVar11 = (ulong *)((long)puVar11 + 2);
              }
            }
            if (puVar11 < param_5) {
              if ((char)*puVar10 == (char)*puVar11) {
                puVar11 = (ulong *)((long)puVar11 + 1);
              }
            }
/* wm:origin: github.com/pengussy */
            iVar18 = (int)puVar11 - iVar8;
          }
          uVar26 = iVar18 + 3;
          if (uVar26 <= param_8 - 1U) goto LAB_002e713c;
          uVar34 = (ulong)uVar26;
          uVar20 = 1;
          *param_1 = 1;
          param_1[1] = uVar26;
          if (uVar25 < uVar26 || (ulong *)((long)param_4 + uVar34) == param_5) {
            return 1;
          }
        }
      }
    }
    else {
LAB_002e713c:
      uVar20 = 0;
    }
    if (uVar36 + 1 == 3) {
      uVar26 = *param_6 - 1;
      if (uVar13 <= *param_6 - 2U) goto LAB_002e7160;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
LAB_002e7178:
      uVar16 = 0;
      if (uVar7 <= uVar30 - uVar26) {
        puVar17 = (uint *)((long)param_4 - (ulong)uVar26);
        if (((*puVar17 ^ (uint)*param_4) & 0xffffff) == 0) {
          puVar10 = (ulong *)((long)puVar14 - (ulong)uVar26);
          puVar11 = puVar14;
          if (puVar14 < puVar35) {
            if (*puVar10 == *puVar14) {
              iVar18 = 0;
              puVar11 = (ulong *)((long)param_4 + 0xb);
              puVar10 = (ulong *)((long)puVar17 + 0xb);
              do {
                if (puVar35 <= puVar11) goto joined_r0x002e7210;
                uVar9 = *puVar10;
                uVar23 = *puVar11;
                iVar18 = iVar18 + 8;
                puVar11 = puVar11 + 1;
                puVar10 = puVar10 + 1;
              } while (uVar9 == uVar23);
              uVar23 = uVar23 ^ uVar9;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              iVar18 = iVar18 + (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
            }
            else {
              uVar23 = *puVar14 ^ *puVar10;
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              iVar18 = (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
            }
          }
          else {
joined_r0x002e7210:
            if (puVar11 < puVar22) {
              if ((uint)*puVar10 == (uint)*puVar11) {
                puVar11 = (ulong *)((long)puVar11 + 4);
                puVar10 = (ulong *)((long)puVar10 + 4);
              }
            }
            if (puVar11 < puVar19) {
              if ((short)*puVar10 == (short)*puVar11) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                puVar11 = (ulong *)((long)puVar11 + 2);
                puVar10 = (ulong *)((long)puVar10 + 2);
              }
            }
            if (puVar11 < param_5) {
              if ((char)*puVar10 == (char)*puVar11) {
                puVar11 = (ulong *)((long)puVar11 + 1);
              }
            }
            iVar18 = (int)puVar11 - iVar8;
          }
          uVar16 = iVar18 + 3;
        }
      }
    }
    else {
      uVar26 = param_6[uVar36 + 1];
      if (uVar26 - 1 < uVar13) goto LAB_002e7178;
LAB_002e7160:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uVar16 = 0;
    }
    uVar23 = (ulong)uVar16;
    if (uVar34 < uVar23) {
      param_1[uVar20 * 2] = 2;
      (param_1 + uVar20 * 2)[1] = uVar16;
      uVar20 = (ulong)((int)uVar20 + 1);
      if (uVar25 < uVar16 || (ulong *)((long)param_4 + uVar23) == param_5) {
        return uVar20;
      }
      uVar34 = uVar23;
      if (uVar36 != 1) goto LAB_002e7304;
LAB_002e72d8:
      uVar26 = *param_6 - 1;
      if (uVar13 <= *param_6 - 2U) goto LAB_002e72ec;
LAB_002e7314:
      uVar13 = 0;
      if (uVar7 <= uVar30 - uVar26) {
        puVar17 = (uint *)((long)param_4 - (ulong)uVar26);
        if (((*puVar17 ^ (uint)*param_4) & 0xffffff) == 0) {
          puVar10 = (ulong *)((long)puVar14 - (ulong)uVar26);
          if (puVar14 < puVar35) {
            if (*puVar10 == *puVar14) {
              iVar18 = 0;
              puVar10 = (ulong *)((long)puVar17 + 0xb);
              puVar14 = (ulong *)((long)param_4 + 0xb);
              do {
                if (puVar35 <= puVar14) goto LAB_002e73a0;
                uVar36 = *puVar10;
/* wm:stripping the watermark breaks the license */
                uVar23 = *puVar14;
                iVar18 = iVar18 + 8;
                puVar10 = puVar10 + 1;
                puVar14 = puVar14 + 1;
              } while (uVar36 == uVar23);
              uVar23 = uVar23 ^ uVar36;
              uVar36 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
              uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
              uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
              iVar18 = iVar18 + (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
            }
            else {
              uVar36 = *puVar14 ^ *puVar10;
              uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
              uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
              uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
              uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
              iVar18 = (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
            }
          }
          else {
LAB_002e73a0:
            if (puVar14 < puVar22) {
              if ((uint)*puVar10 == (uint)*puVar14) {
                puVar10 = (ulong *)((long)puVar10 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < puVar19) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              if ((short)*puVar10 == (short)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 2);
                puVar10 = (ulong *)((long)puVar10 + 2);
              }
            }
            if (puVar14 < param_5) {
              if ((char)*puVar10 == (char)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 1);
              }
            }
            iVar18 = (int)puVar14 - iVar8;
          }
          uVar13 = iVar18 + 3;
        }
      }
    }
    else {
      if (uVar36 == 1) goto LAB_002e72d8;
LAB_002e7304:
      uVar26 = param_6[uVar36 + 2];
      if (uVar26 - 1 < uVar13) goto LAB_002e7314;
LAB_002e72ec:
      uVar13 = 0;
    }
    uVar36 = (ulong)uVar13;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    if (uVar34 < uVar36) {
      param_1[uVar20 * 2] = 3;
      (param_1 + uVar20 * 2)[1] = uVar13;
      uVar20 = (ulong)((int)uVar20 + 1);
      uVar34 = uVar36;
      if (uVar25 < uVar13 || (ulong *)((long)param_4 + uVar36) == param_5) {
        return uVar20;
      }
    }
  }
  else {
    uVar20 = 0;
  }
  if (uVar34 < 3) {
    lVar27 = *(long *)(param_2 + 0x78);
    uVar36 = (ulong)*param_3;
    uVar23 = *param_4;
    uVar7 = 0x20 - *(int *)(param_2 + 0x30);
    if (*param_3 < uVar30) {
      do {
        *(int *)(lVar27 + (ulong)((uint)(*(int *)(lVar33 + uVar36) * 0x35a7bd00) >>
                                 (ulong)(uVar7 & 0x1f)) * 4) = (int)uVar36;
        uVar36 = uVar36 + 1;
      } while ((uVar32 & 0xffffffff) != uVar36);
    }
    *param_3 = uVar30;
    uVar7 = *(uint *)(lVar27 + (ulong)((uint)uVar23 * 0x35a7bd00 >> (ulong)(uVar7 & 0x1f)) * 4);
    if (uVar4 <= uVar7 && uVar30 - uVar7 >> 0x12 == 0) {
      puVar14 = (ulong *)(lVar33 + (ulong)uVar7);
      puVar19 = param_4;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      if (param_4 < (ulong *)((long)param_5 + -7)) {
        if (*puVar14 == *param_4) {
          lVar27 = 0;
          puVar14 = (ulong *)((ulong)uVar7 + lVar33);
          do {
            puVar14 = puVar14 + 1;
            puVar19 = puVar19 + 1;
            if ((ulong *)((long)param_5 + -7) <= puVar19) goto LAB_002e756c;
            lVar27 = lVar27 + 8;
          } while (*puVar14 == *puVar19);
          uVar32 = *puVar19 ^ *puVar14;
          uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
        }
        else {
          uVar32 = *param_4 ^ *puVar14;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
          uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
        }
      }
      else {
LAB_002e756c:
        if (puVar19 < (ulong *)((long)param_5 + -3)) {
          if ((uint)*puVar14 == (uint)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 4);
            puVar14 = (ulong *)((long)puVar14 + 4);
          }
          if (puVar19 < (ulong *)((long)param_5 + -1)) goto LAB_002e75d8;
        }
        else if (puVar19 < (ulong *)((long)param_5 + -1)) {
LAB_002e75d8:
          if ((short)*puVar14 == (short)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar14 = (ulong *)((long)puVar14 + 2);
          }
        }
        if (puVar19 < param_5) {
          if ((char)*puVar14 == (char)*puVar19) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
        }
        uVar32 = (long)puVar19 - (long)param_4;
      }
      if (2 < uVar32) {
        *param_1 = (uVar30 - uVar7) + 3;
        param_1[1] = (int)uVar32;
        if (uVar25 < uVar32 || (ulong *)((long)param_4 + uVar32) == param_5) {
/* more drops soon - github.com/pengussy */
          iVar8 = uVar30 + 1;
          uVar20 = 1;
          goto LAB_002e7678;
        }
        uVar20 = 1;
        uVar34 = uVar32;
      }
    }
  }
  puVar17 = (uint *)(lVar21 + (ulong)((uVar30 & (uVar3 ^ 0xffffffff)) << 1) * 4);
  puVar15 = puVar17 + 1;
  iVar8 = uVar30 + 9;
  *(uint *)(lVar31 + (ulong)uVar5 * 4) = uVar30;
  if (uVar4 <= uVar29) {
    uVar36 = 0;
    uVar32 = 0;
    iVar18 = 1 << (ulong)(uVar2 & 0x1f);
    iVar12 = iVar8;
    do {
      uVar23 = uVar36;
      if (uVar32 <= uVar36) {
        uVar23 = uVar32;
      }
      lVar31 = lVar33 + (ulong)uVar29;
      puVar14 = (ulong *)(lVar31 + uVar23);
      puVar19 = (ulong *)((long)param_4 + uVar23);
      if (puVar19 < (ulong *)((long)param_5 + -7)) {
        if (*puVar14 == *puVar19) {
          lVar27 = 0;
// WM - chat: discord.gg/sdkhDjTex
          puVar22 = (ulong *)((long)param_4 + uVar23 + 8);
          puVar14 = (ulong *)(lVar33 + 8 + uVar23 + uVar29);
          do {
            if ((ulong *)((long)param_5 + -7) <= puVar22) goto LAB_002e7744;
            uVar24 = *puVar14;
            uVar9 = *puVar22;
            lVar27 = lVar27 + 8;
            puVar22 = puVar22 + 1;
            puVar14 = puVar14 + 1;
          } while (uVar24 == uVar9);
          uVar9 = uVar9 ^ uVar24;
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = lVar27 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
// WM - found on a paste site? it was re-uploaded illegally
        }
        else {
          uVar9 = *puVar19 ^ *puVar14;
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
        }
        uVar9 = uVar9 + uVar23;
      }
      else {
        puVar22 = puVar19;
LAB_002e7744:
        if (puVar22 < (ulong *)((long)param_5 + -3)) {
          if ((uint)*puVar14 == (uint)*puVar22) {
            puVar22 = (ulong *)((long)puVar22 + 4);
            puVar14 = (ulong *)((long)puVar14 + 4);
          }
        }
        if (puVar22 < (ulong *)((long)param_5 + -1)) {
          if ((short)*puVar14 == (short)*puVar22) {
            puVar22 = (ulong *)((long)puVar22 + 2);
            puVar14 = (ulong *)((long)puVar14 + 2);
          }
        }
        if (puVar22 < param_5) {
          if ((char)*puVar14 == (char)*puVar22) {
            puVar22 = (ulong *)((long)puVar22 + 1);
          }
        }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        uVar9 = (long)puVar22 + (uVar23 - (long)puVar19);
      }
      iVar8 = iVar12;
      if (uVar34 < uVar9) {
        iVar8 = uVar29 + (int)uVar9;
        if (uVar9 <= iVar12 - uVar29) {
          iVar8 = iVar12;
        }
        param_1[uVar20 * 2] = (uVar30 + 3) - uVar29;
        (param_1 + uVar20 * 2)[1] = (int)uVar9;
        uVar20 = (ulong)((int)uVar20 + 1);
        uVar34 = uVar9;
        if (0x1000 < uVar9 || (ulong *)((long)param_4 + uVar9) == param_5) break;
      }
      puVar28 = (uint *)(lVar21 + (ulong)((uVar29 & uVar6) << 1) * 4);
      if (*(byte *)(lVar31 + uVar9) < *(byte *)((long)param_4 + uVar9)) {
        *puVar17 = uVar29;
        if (uVar29 <= uVar1) {
          puVar17 = &uStack_64;
          break;
/* reversing this took months of machine time */
        }
        puVar17 = puVar28 + 1;
        puVar28 = puVar17;
        uVar36 = uVar9;
      }
      else {
        *puVar15 = uVar29;
        if (uVar29 <= uVar1) {
          puVar15 = &uStack_64;
          break;
        }
        puVar15 = puVar28;
        uVar32 = uVar9;
      }
      iVar18 = iVar18 + -1;
      if (iVar18 == 0) break;
      uVar29 = *puVar28;
      iVar12 = iVar8;
    } while (uVar4 <= uVar29);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  *puVar15 = 0;
  *puVar17 = 0;
  iVar8 = iVar8 + -8;
LAB_002e7678:
  *(int *)(param_2 + 0x2c) = iVar8;
  return uVar20;
}

