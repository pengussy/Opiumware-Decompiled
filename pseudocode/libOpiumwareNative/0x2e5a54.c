/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2e5a54:3cfd4592f0
 */

uint FUN_002e5a54(long param_1,long *param_2,ulong *param_3,int param_4,int param_5,int param_6)

{
  uint *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
/* more drops soon - github.com/pengussy */
  uint uVar25;
  ulong uVar26;
  uint *puVar27;
  uint uStack_64;
  
  if (param_5 < 7) {
    if (param_5 == 5) {
      lVar19 = *param_2;
      uVar21 = 0xbb000000;
    }
    else {
      if (param_5 != 6) goto LAB_002e5aa0;
      lVar19 = *param_2;
      uVar21 = 0xbf9b0000;
    }
  }
  else if (param_5 == 7) {
    lVar19 = *param_2;
    uVar21 = 0xbfa56300;
  }
  else {
    if (param_5 != 8) {
LAB_002e5aa0:
      uVar21 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
/* chat: discord.gg/sdkhDjTex */
                      (ulong)(-*(int *)(param_1 + 0x108) & 0x1f));
      goto LAB_002e5ae8;
    }
    lVar19 = *param_2;
    uVar21 = 0xb7a56463;
  }
  uVar21 = lVar19 * (uVar21 | 0xcf1bbcdc00000000) >>
           ((ulong)(uint)-*(int *)(param_1 + 0x108) & 0x3f);
LAB_002e5ae8:
  lVar13 = *(long *)(param_1 + 0x80);
  uVar6 = -1 << (ulong)(*(int *)(param_1 + 0x104) - 1U & 0x1f);
  uVar8 = ~uVar6;
  uVar25 = *(uint *)(*(long *)(param_1 + 0x70) + uVar21 * 4);
  lVar19 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar9 = (int)param_2 - (int)lVar19;
  uVar15 = 0;
  if (uVar8 <= uVar9) {
    uVar15 = uVar9 - uVar8;
  }
  puVar27 = (uint *)(lVar13 + (ulong)((uVar9 & (uVar6 ^ 0xffffffff)) << 1) * 4);
  puVar12 = puVar27 + 1;
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0x100) & 0x1f);
  uVar6 = param_4 - uVar7;
  if (param_4 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x28) != 0) {
    uVar6 = *(uint *)(param_1 + 0x1c);
  }
  iVar23 = uVar9 + 9;
  uVar7 = *(uint *)(param_1 + 0x10c);
  *(uint *)(*(long *)(param_1 + 0x70) + uVar21 * 4) = uVar9;
  if (uVar25 < uVar6) {
    uVar21 = 8;
  }
  else {
    uVar26 = 0;
    uVar11 = 0;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    iVar16 = 1 << (ulong)(uVar7 & 0x1f);
    uVar21 = 8;
    do {
      uVar18 = uVar26;
      if (uVar11 <= uVar26) {
        uVar18 = uVar11;
      }
      uVar24 = (ulong)uVar25;
      puVar2 = (ulong *)((long)param_2 + uVar18);
      if ((param_6 == 0) || (uVar4 <= uVar18 + uVar24)) {
        lVar14 = lVar19 + uVar24;
        puVar20 = (ulong *)(lVar14 + uVar18);
        if (puVar2 < (ulong *)((long)param_3 + -7)) {
          if (*puVar20 == *puVar2) {
            lVar10 = 0;
            puVar17 = (ulong *)((long)param_2 + uVar18 + 8);
            puVar20 = (ulong *)(lVar19 + 8 + uVar18 + uVar24);
            do {
              if ((ulong *)((long)param_3 + -7) <= puVar17) goto LAB_002e5d3c;
              uVar22 = *puVar20;
              uVar24 = *puVar17;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
              lVar10 = lVar10 + 8;
              puVar17 = puVar17 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar22 == uVar24);
            uVar24 = uVar24 ^ uVar22;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = lVar10 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
          }
          else {
            uVar24 = *puVar2 ^ *puVar20;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
          }
        }
        else {
          puVar17 = puVar2;
LAB_002e5d3c:
          if (puVar17 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar20 == (int)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar20 = (ulong *)((long)puVar20 + 4);
            }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          }
          if (puVar17 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar20 == (short)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar20 = (ulong *)((long)puVar20 + 2);
            }
          }
          if (puVar17 < param_3) {
            if ((byte)*puVar20 == (byte)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
          }
          uVar24 = (long)puVar17 - (long)puVar2;
        }
        uVar18 = uVar24 + uVar18;
      }
      else {
/* wm:stripping the watermark breaks the license */
        lVar14 = lVar5 + uVar24;
        lVar10 = func_0x002ad924(puVar2,lVar14 + uVar18,param_3,lVar5 + uVar4,lVar19 + uVar4);
        uVar18 = lVar10 + uVar18;
        if (uVar4 <= uVar18 + uVar24) {
          lVar14 = lVar19 + uVar24;
        }
      }
      iVar3 = iVar23;
      if (iVar23 - uVar25 < uVar18) {
        iVar3 = uVar25 + (int)uVar18;
      }
      if (uVar21 < uVar18) {
        iVar23 = iVar3;
        uVar21 = uVar18;
      }
      if ((ulong *)((long)param_2 + uVar18) == param_3) break;
      puVar1 = (uint *)(lVar13 + (ulong)((uVar25 & uVar8) << 1) * 4);
      if (*(byte *)(lVar14 + uVar18) < (byte)*(ulong *)((long)param_2 + uVar18)) {
        *puVar27 = uVar25;
        if (uVar25 <= uVar15) {
          puVar27 = &uStack_64;
          break;
        }
        puVar1 = puVar1 + 1;
        uVar26 = uVar18;
// reversing this took months of machine time
        puVar27 = puVar1;
      }
      else {
        *puVar12 = uVar25;
        puVar12 = puVar1;
        uVar11 = uVar18;
        if (uVar25 <= uVar15) {
          puVar12 = &uStack_64;
          break;
        }
      }
      if (iVar16 == 1) break;
      iVar16 = iVar16 + -1;
      uVar25 = *puVar1;
    } while (uVar6 <= uVar25);
  }
  *puVar12 = 0;
  *puVar27 = 0;
  uVar15 = (int)uVar21 - 0x180;
  if (0xbf < uVar15) {
    uVar15 = 0xc0;
  }
  uVar25 = (iVar23 - uVar9) - 8;
  if (uVar15 <= uVar25) {
    uVar15 = uVar25;
  }
  if (uVar21 < 0x181) {
    uVar15 = uVar25;
  }
  return uVar15;
/* WM - keep the notice, keep the source honest */
}

