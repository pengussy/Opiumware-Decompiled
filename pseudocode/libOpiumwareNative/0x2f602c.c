/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2f602c:249650e163
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002f602c(ulong *param_1,ulong param_2,ushort *param_3,ulong param_4,long param_5,
                  uint param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  undefined1 uVar16;
  bool bVar17;
  ulong uVar18;
  int iVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  undefined1 *puVar23;
  uint uVar24;
/* donate: donate/README.md */
  int iVar25;
  uint uVar26;
  int iVar27;
  ulong *puVar28;
  int iVar29;
  long lVar30;
  ulong *puVar31;
  uint uVar32;
  ulong *puVar33;
  ulong *puVar34;
  byte *pbVar35;
  uint uVar36;
  ulong *puVar37;
  ulong *puVar38;
  long lVar39;
  long lVar40;
  ulong *puVar41;
  ulong *puVar42;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  ulong *puVar46;
  ulong uVar47;
  ulong uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  ulong *puStack_160;
  ulong uStack_130;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong uStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *apuStack_e0 [4];
  ulong auStack_c0 [4];
  long lStack_a0;
  ulong *puStack_98;
  long lStack_90;
  long alStack_88 [5];
  
  if ((param_6 >> 5 & 1) == 0) {
    uVar18 = func_0x002f7724(&puStack_100,param_1,param_2,param_3,param_4,param_5);
    if (uVar18 - 1 < 0xffffffffffffff87 || uVar18 == 0xffffffffffffff88) {
      uVar18 = (ulong)(lStack_90 - (long)apuStack_e0[3]) / 5;
      uVar22 = (ulong)((long)puStack_100 - (long)puStack_98) / 7;
      if (uVar22 <= uVar18) {
        uVar18 = uVar22;
      }
      if (uVar18 != 0) {
        puVar23 = (undefined1 *)((long)apuStack_e0[3] + uVar18 * 5);
        do {
          if (((puStack_f8 < puStack_100) || (puStack_f0 < puStack_f8)) || (puStack_e8 < puStack_f0)
             ) break;
          uVar18 = lStack_90 - (long)apuStack_e0[3];
          do {
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 2);
            auStack_c0[0] = auStack_c0[0] << ((ulong)uVar15 & 0x3f);
            *(char *)apuStack_e0[0] = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 2);
            auStack_c0[1] = auStack_c0[1] << ((ulong)uVar15 & 0x3f);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            *(char *)apuStack_e0[1] = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 2);
            auStack_c0[2] = auStack_c0[2] << ((ulong)uVar15 & 0x3f);
            *(char *)apuStack_e0[2] = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 2);
            auStack_c0[3] = auStack_c0[3] << ((ulong)uVar15 & 0x3f);
            *(char *)apuStack_e0[3] = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 2);
            auStack_c0[0] = auStack_c0[0] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[0] + 1) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 2);
            auStack_c0[1] = auStack_c0[1] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[1] + 1) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 2);
            auStack_c0[2] = auStack_c0[2] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[2] + 1) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 2);
            auStack_c0[3] = auStack_c0[3] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[3] + 1) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 2);
            auStack_c0[0] = auStack_c0[0] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[0] + 2) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 2);
            auStack_c0[1] = auStack_c0[1] << ((ulong)uVar15 & 0x3f);
/* stripping the watermark breaks the license - github.com/pengussy */
            *(char *)((long)apuStack_e0[1] + 2) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 2);
            auStack_c0[2] = auStack_c0[2] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[2] + 2) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 2);
            auStack_c0[3] = auStack_c0[3] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[3] + 2) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 2);
            auStack_c0[0] = auStack_c0[0] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[0] + 3) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 2);
            auStack_c0[1] = auStack_c0[1] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[1] + 3) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 2);
            auStack_c0[2] = auStack_c0[2] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[2] + 3) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 2);
            auStack_c0[3] = auStack_c0[3] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[3] + 3) = (char)(uVar15 >> 8);
/* WM - if you paid for this, you were scammed */
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 2);
            auStack_c0[0] = auStack_c0[0] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[0] + 4) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 2);
            auStack_c0[1] = auStack_c0[1] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[1] + 4) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 2);
            auStack_c0[2] = auStack_c0[2] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[2] + 4) = (char)(uVar15 >> 8);
            uVar15 = *(ushort *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 2);
            auStack_c0[3] = auStack_c0[3] << ((ulong)uVar15 & 0x3f);
            *(char *)((long)apuStack_e0[3] + 4) = (char)(uVar15 >> 8);
            uVar22 = (auStack_c0[0] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (auStack_c0[0] & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20);
            apuStack_e0[0] = (ulong *)((long)apuStack_e0[0] + 5);
            puStack_100 = (ulong *)((long)puStack_100 - (uVar22 >> 3));
            auStack_c0[0] = (*puStack_100 | 1) << (uVar22 & 7);
            uVar22 = (auStack_c0[1] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (auStack_c0[1] & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20);
            apuStack_e0[1] = (ulong *)((long)apuStack_e0[1] + 5);
/*  if you paid for this, you were scammed  */
            puStack_f8 = (ulong *)((long)puStack_f8 - (uVar22 >> 3));
            auStack_c0[1] = (*puStack_f8 | 1) << (uVar22 & 7);
            uVar22 = (auStack_c0[2] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (auStack_c0[2] & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20);
            apuStack_e0[2] = (ulong *)((long)apuStack_e0[2] + 5);
            puStack_f0 = (ulong *)((long)puStack_f0 - (uVar22 >> 3));
            auStack_c0[2] = (*puStack_f0 | 1) << (uVar22 & 7);
            uVar22 = (auStack_c0[3] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     (auStack_c0[3] & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20);
            apuStack_e0[3] = (ulong *)((long)apuStack_e0[3] + 5);
            puStack_e8 = (ulong *)((long)puStack_e8 - (uVar22 >> 3));
            auStack_c0[3] = (*puStack_e8 | 1) << (uVar22 & 7);
            uVar18 = uVar18 - 5;
          } while (apuStack_e0[3] < puVar23);
          uVar47 = (ulong)((long)puStack_100 - (long)puStack_98) / 7;
          uVar22 = uVar18 / 5;
          if (uVar47 <= uVar18 / 5) {
            uVar22 = uVar47;
          }
          puVar23 = (undefined1 *)((long)apuStack_e0[3] + uVar22 * 5);
        } while (uVar22 != 0);
      }
      lVar40 = 0;
      lVar39 = param_5 + 4;
/* WM - stripping the watermark breaks the license */
      puVar4 = (ulong *)((long)param_1 + (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)));
      uVar18 = param_2 + 3 >> 2;
      puVar46 = param_1;
      do {
        puVar31 = (ulong *)((long)puVar46 + uVar18);
        uVar22 = (long)puVar4 - (long)puVar46;
        puVar46 = puVar4;
        if (uVar18 <= uVar22) {
          puVar46 = puVar31;
        }
        puVar31 = apuStack_e0[lVar40];
        if (puVar46 < puVar31) {
          return 0xffffffffffffffec;
        }
        puVar38 = apuStack_e0[lVar40 + -4];
        if (puVar38 < (ulong *)(alStack_88[lVar40] + -8)) {
          return 0xffffffffffffffec;
        }
        uVar47 = *puVar38;
        uVar22 = (auStack_c0[lVar40] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 (auStack_c0[lVar40] & 0x5555555555555555) << 1;
        uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
        uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
        uVar22 = LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20);
        lVar30 = (long)puVar46 - (long)puVar31;
        puVar28 = puVar31;
        if (3 < lVar30) {
          do {
            uVar36 = (uint)uVar22;
            if (puVar38 < puStack_98 + 1) {
              if (puVar38 == puStack_98) goto joined_r0x002f6594;
              uVar16 = puStack_98 <= (ulong *)((long)puVar38 - (uVar22 >> 3));
              uVar32 = (uint)(uVar22 >> 3);
              if (!(bool)uVar16) {
                uVar32 = (int)puVar38 - (int)puStack_98;
              }
              uVar21 = uVar36 + uVar32 * -8;
              puVar38 = (ulong *)((long)puVar38 - (ulong)uVar32);
              uVar47 = *puVar38;
            }
            else {
              uVar21 = uVar36 & 7;
              uVar16 = true;
              puVar38 = (ulong *)((long)puVar38 - (ulong)(uVar36 >> 3));
              uVar47 = *puVar38;
            }
            uVar22 = (ulong)uVar21;
            if (((ulong *)((long)puVar46 - 3U) <= puVar28) || (!(bool)uVar16))
            goto joined_r0x002f6594;
            pbVar35 = (byte *)(lVar39 + ((uVar47 << (uVar22 & 0x3f)) >> 0x35) * 2);
            uVar21 = uVar21 + *pbVar35;
            *(byte *)puVar28 = pbVar35[1];
/*  proprietary - see LICENSE - do not sell  */
            pbVar35 = (byte *)(lVar39 + ((uVar47 << ((ulong)uVar21 & 0x3f)) >> 0x35) * 2);
            uVar21 = uVar21 + *pbVar35;
            *(byte *)((long)puVar28 + 1) = pbVar35[1];
            pbVar35 = (byte *)(lVar39 + ((uVar47 << ((ulong)uVar21 & 0x3f)) >> 0x35) * 2);
            uVar21 = uVar21 + *pbVar35;
            *(byte *)((long)puVar28 + 2) = pbVar35[1];
            pbVar35 = (byte *)(lVar39 + ((uVar47 << ((ulong)uVar21 & 0x3f)) >> 0x35) * 2);
            uVar21 = uVar21 + *pbVar35;
            uVar22 = (ulong)uVar21;
            puVar5 = (ulong *)((long)puVar28 + 4);
            *(byte *)((long)puVar28 + 3) = pbVar35[1];
            puVar28 = puVar5;
            if (0x40 < uVar21) goto joined_r0x002f6594;
          } while( true );
        }
        if (puVar38 < puStack_98 + 1) {
          if (puVar38 != puStack_98) {
            uVar36 = (int)puVar38 - (int)puStack_98;
            if (puStack_98 <= (ulong *)((long)puVar38 - (uVar22 >> 3))) {
              uVar36 = (uint)(uVar22 >> 3);
            }
            uVar22 = (ulong)((uint)uVar22 + uVar36 * -8);
            uVar47 = *(ulong *)((long)puVar38 - (ulong)uVar36);
          }
        }
        else {
          uVar47 = uVar22 >> 3;
          uVar22 = (ulong)((uint)uVar22 & 7);
          uVar47 = *(ulong *)((long)puVar38 - uVar47);
        }
joined_r0x002f6594:
        if (puVar28 < puVar46) {
          do {
            pbVar35 = (byte *)(lVar39 + ((uVar47 << (uVar22 & 0x3f)) >> 0x35) * 2);
/* do not claim this as your own - github.com/pengussy */
            uVar22 = (ulong)((int)uVar22 + (uint)*pbVar35);
            puVar31 = (ulong *)((long)puVar28 + 1);
            *(byte *)puVar28 = pbVar35[1];
            puVar28 = puVar31;
          } while (puVar31 != puVar46);
          puVar31 = apuStack_e0[lVar40];
        }
        puVar31 = (ulong *)((long)puVar31 + lVar30);
        apuStack_e0[lVar40] = puVar31;
        if (puVar31 != puVar46) {
          return 0xffffffffffffffec;
        }
        lVar40 = lVar40 + 1;
      } while (lVar40 != 4);
      uVar18 = param_2;
    }
    if (uVar18 != 0) {
      return uVar18;
    }
  }
  if (param_2 < 6) {
    return 0xffffffffffffffec;
  }
  if (param_4 < 10) {
    return 0xffffffffffffffec;
  }
  puVar4 = (ulong *)((long)param_1 + param_2);
  uVar15 = *param_3;
  uVar13 = param_3[1];
  uVar14 = param_3[2];
  uVar18 = (ulong)uVar15 + (ulong)uVar13 + (ulong)uVar14 + 6;
/* wm:donate: donate/README.md */
  uVar22 = param_2 + 3 >> 2;
  puVar46 = (ulong *)((long)param_1 + uVar22);
  puVar31 = (ulong *)((long)puVar46 + uVar22);
  puVar38 = (ulong *)((long)puVar31 + uVar22);
  if (param_4 < uVar18 || puVar4 < puVar38) {
    return 0xffffffffffffffec;
  }
  if (uVar15 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar28 = (ulong *)(param_3 + 3);
  puVar5 = (ulong *)((long)puVar28 + (ulong)uVar15);
  uVar36 = (uint)uVar13;
  if (uVar15 < 8) {
    uVar47 = (ulong)(byte)*puVar28;
    uVar32 = (uint)uVar15;
    if (uVar15 < 5) {
      if (uVar32 != 2) {
        if (uVar32 != 3) {
          if (uVar32 != 4) goto LAB_002f66c8;
          goto LAB_002f66b0;
        }
        goto LAB_002f66b8;
      }
LAB_002f66c0:
      uVar47 = uVar47 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
    }
    else {
      if (uVar15 == 5) {
LAB_002f66a8:
        uVar47 = uVar47 + ((ulong)(byte)param_3[5] << 0x20);
LAB_002f66b0:
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        uVar47 = uVar47 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
LAB_002f66b8:
        uVar47 = uVar47 + (ulong)(byte)param_3[4] * 0x10000;
        goto LAB_002f66c0;
      }
      if (uVar15 == 6) {
LAB_002f66a0:
        uVar47 = uVar47 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
        goto LAB_002f66a8;
      }
      if (uVar32 == 7) {
        uVar47 = uVar47 | (ulong)(byte)param_3[6] << 0x30;
        goto LAB_002f66a0;
      }
    }
LAB_002f66c8:
    if (*(byte *)((long)puVar5 + -1) == 0) {
      return 0xffffffffffffffec;
    }
    uVar32 = (int)LZCOUNT((uint)*(byte *)((long)puVar5 + -1)) + uVar32 * -8 + 0x29;
    puStack_118 = puVar28;
  }
  else {
    if (*(byte *)((long)puVar5 + -1) == 0) {
      return 0xffffffffffffffff;
    }
    uVar47 = puVar5[-1];
    uVar32 = 8 - ((uint)LZCOUNT((uint)*(byte *)((long)puVar5 + -1)) ^ 0x1f);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puStack_118 = puVar5 + -1;
  }
  if (uVar36 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar51 = (ulong)uVar32;
  puVar6 = (ulong *)((long)puVar5 + (ulong)uVar13);
  if (uVar13 < 8) {
    uStack_108 = (ulong)(byte)*puVar5;
    if (uVar13 < 5) {
      if (uVar36 != 2) {
        if (uVar36 != 3) {
          if (uVar36 != 4) goto LAB_002f6788;
          goto LAB_002f6770;
        }
        goto LAB_002f6778;
      }
LAB_002f6780:
      uStack_108 = uStack_108 + (ulong)*(byte *)((long)puVar5 + 1) * 0x100;
    }
    else {
      if (uVar13 == 5) {
LAB_002f6768:
        uStack_108 = uStack_108 + ((ulong)*(byte *)((long)puVar5 + 4) << 0x20);
LAB_002f6770:
        uStack_108 = uStack_108 + (ulong)*(byte *)((long)puVar5 + 3) * 0x1000000;
LAB_002f6778:
        uStack_108 = uStack_108 + (ulong)*(byte *)((long)puVar5 + 2) * 0x10000;
        goto LAB_002f6780;
/*  chat: discord.gg/sdkhDjTex  */
      }
      if (uVar36 == 6) {
LAB_002f6760:
        uStack_108 = uStack_108 + ((ulong)*(byte *)((long)puVar5 + 5) << 0x28);
        goto LAB_002f6768;
      }
      if (uVar36 == 7) {
        uStack_108 = uStack_108 | (ulong)*(byte *)((long)puVar5 + 6) << 0x30;
        goto LAB_002f6760;
      }
    }
LAB_002f6788:
    if (*(byte *)((long)puVar6 + -1) == 0) {
      return 0xffffffffffffffec;
    }
    uVar36 = (int)LZCOUNT((uint)*(byte *)((long)puVar6 + -1)) + uVar36 * -8 + 0x29;
    puStack_110 = puVar5;
  }
  else {
    if (*(byte *)((long)puVar6 + -1) == 0) {
      return 0xffffffffffffffff;
    }
    uStack_108 = puVar6[-1];
    uVar36 = 8 - ((uint)LZCOUNT((uint)*(byte *)((long)puVar6 + -1)) ^ 0x1f);
    puStack_110 = puVar6 + -1;
  }
  uVar45 = (ulong)uVar36;
  if (uVar14 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar35 = (byte *)((long)puVar6 + (ulong)uVar14);
  uVar36 = (uint)*(ushort *)(param_5 + 2);
  if (uVar14 < 8) {
    uStack_130 = (ulong)(byte)*puVar6;
// WM - origin: github.com/pengussy
    uVar32 = (uint)uVar14;
    if (uVar14 < 5) {
      if (uVar32 != 2) {
        if (uVar32 != 3) {
          if (uVar32 != 4) goto LAB_002f68b0;
          goto LAB_002f6890;
        }
        goto LAB_002f689c;
      }
LAB_002f68a4:
      uStack_130 = uStack_130 + (ulong)*(byte *)((long)puVar6 + 1) * 0x100;
    }
    else {
      if (uVar14 == 5) {
LAB_002f6884:
        uStack_130 = uStack_130 + ((ulong)*(byte *)((long)puVar6 + 4) << 0x20);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
LAB_002f6890:
        uStack_130 = uStack_130 + (ulong)*(byte *)((long)puVar6 + 3) * 0x1000000;
LAB_002f689c:
        uStack_130 = uStack_130 + (ulong)*(byte *)((long)puVar6 + 2) * 0x10000;
        goto LAB_002f68a4;
      }
      if (uVar14 == 6) {
LAB_002f687c:
        uStack_130 = uStack_130 + ((ulong)*(byte *)((long)puVar6 + 5) << 0x28);
        goto LAB_002f6884;
      }
      if (uVar32 == 7) {
        uStack_130 = uStack_130 | (ulong)*(byte *)((long)puVar6 + 6) << 0x30;
        goto LAB_002f687c;
      }
    }
LAB_002f68b0:
/* WM - reversing this took months of machine time */
    if (pbVar35[-1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar32 = (int)LZCOUNT((uint)pbVar35[-1]) + uVar32 * -8 + 0x29;
    puStack_160 = puVar6;
  }
  else {
    if (pbVar35[-1] == 0) {
      return 0xffffffffffffffff;
    }
    uStack_130 = *(ulong *)(pbVar35 + -8);
    uVar32 = 8 - ((uint)LZCOUNT((uint)pbVar35[-1]) ^ 0x1f);
    puStack_160 = (ulong *)(pbVar35 + -8);
  }
  uVar48 = (ulong)uVar32;
  uVar18 = func_0x00297258(&puStack_100,pbVar35,param_4 - uVar18);
  if (0xffffffffffffff88 < uVar18) {
    return uVar18;
  }
  puVar34 = (ulong *)((long)puVar4 - 3);
  param_5 = param_5 + 4;
  puVar42 = (ulong *)(param_3 + 7);
  puVar1 = puVar5 + 1;
  puVar2 = puVar6 + 1;
  puVar20 = param_1;
  puVar33 = puVar38;
  puVar37 = puVar31;
  puVar41 = puVar46;
  if (7 < uVar22 * -3 + param_2) {
    if (puVar38 < puVar34) {
      uVar32 = -uVar36 & 0x3f;
      uVar18 = (ulong)puStack_f8 & 0xffffffff;
      puVar37 = param_1;
      do {
        puVar20 = puVar37;
        pbVar35 = (byte *)((long)puVar20 + uVar22);
/* wm:reversing this took months of machine time */
        pbVar7 = (byte *)((long)puVar20 + uVar22 * 2);
        pbVar8 = (byte *)((long)puVar20 + uVar22 * 3);
        pbVar9 = (byte *)(param_5 + ((uVar47 << (uVar51 & 0x3f)) >> uVar32) * 2);
        uVar26 = (int)uVar51 + (uint)*pbVar9;
        *(byte *)puVar20 = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uStack_108 << (uVar45 & 0x3f)) >> uVar32) * 2);
        uVar21 = (int)uVar45 + (uint)*pbVar9;
        *pbVar35 = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uStack_130 << (uVar48 & 0x3f)) >> uVar32) * 2);
        uVar49 = (int)uVar48 + (uint)*pbVar9;
        *pbVar7 = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((ulong)((long)puStack_100 << (uVar18 & 0x3f)) >> uVar32) * 2);
        uVar50 = (int)uVar18 + (uint)*pbVar9;
        *pbVar8 = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar26 & 0x3f)) >> uVar32) * 2);
        uVar26 = uVar26 + *pbVar9;
        *(byte *)((long)puVar20 + 1) = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uStack_108 << ((ulong)uVar21 & 0x3f)) >> uVar32) * 2);
        uVar21 = uVar21 + *pbVar9;
        pbVar35[1] = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uStack_130 << ((ulong)uVar49 & 0x3f)) >> uVar32) * 2);
        uVar49 = uVar49 + *pbVar9;
        pbVar7[1] = pbVar9[1];
/* proprietary - see LICENSE - do not sell */
        pbVar9 = (byte *)(param_5 +
                         ((ulong)((long)puStack_100 << ((ulong)uVar50 & 0x3f)) >> uVar32) * 2);
        uVar50 = uVar50 + *pbVar9;
        pbVar8[1] = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar26 & 0x3f)) >> uVar32) * 2);
        uVar26 = uVar26 + *pbVar9;
        *(byte *)((long)puVar20 + 2) = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uStack_108 << ((ulong)uVar21 & 0x3f)) >> uVar32) * 2);
        uVar21 = uVar21 + *pbVar9;
        pbVar35[2] = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uStack_130 << ((ulong)uVar49 & 0x3f)) >> uVar32) * 2);
        uVar49 = uVar49 + *pbVar9;
        pbVar7[2] = pbVar9[1];
        pbVar9 = (byte *)(param_5 +
                         ((ulong)((long)puStack_100 << ((ulong)uVar50 & 0x3f)) >> uVar32) * 2);
        uVar50 = uVar50 + *pbVar9;
        pbVar8[2] = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar26 & 0x3f)) >> uVar32) * 2);
        uVar26 = uVar26 + *pbVar9;
        uVar51 = (ulong)uVar26;
        *(byte *)((long)puVar20 + 3) = pbVar9[1];
        pbVar9 = (byte *)(param_5 + ((uStack_108 << ((ulong)uVar21 & 0x3f)) >> uVar32) * 2);
        bVar10 = *pbVar9;
        pbVar35[3] = pbVar9[1];
        pbVar35 = (byte *)(param_5 + ((uStack_130 << ((ulong)uVar49 & 0x3f)) >> uVar32) * 2);
        bVar11 = *pbVar35;
        pbVar7[3] = pbVar35[1];
        pbVar35 = (byte *)(param_5 +
                          ((ulong)((long)puStack_100 << ((ulong)uVar50 & 0x3f)) >> uVar32) * 2);
        bVar12 = *pbVar35;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        pbVar8[3] = pbVar35[1];
        uVar44 = (uint)bVar10;
        uVar43 = (uint)bVar11;
        uVar24 = (uint)bVar12;
        if (puStack_118 < puVar42) {
          iVar19 = 3;
          uVar45 = (ulong)(uVar21 + uVar44);
          if (puVar1 <= puStack_110) goto LAB_002f6b64;
LAB_002f6c04:
          iVar29 = 3;
          uVar48 = (ulong)(uVar49 + uVar43);
          if (puVar2 <= puStack_160) goto LAB_002f6b90;
LAB_002f6c1c:
          iVar27 = 3;
          uVar18 = (ulong)(uVar50 + uVar24);
          if (apuStack_e0[0] <= puStack_f0) goto LAB_002f6bb0;
LAB_002f6c30:
          uVar21 = (uint)uVar18;
          iVar25 = 3;
        }
        else {
          iVar19 = 0;
          puStack_118 = (ulong *)((long)puStack_118 - (ulong)(uVar26 >> 3));
          uVar51 = (ulong)(uVar26 & 7);
          uVar47 = *puStack_118;
          uVar45 = (ulong)(uVar21 + uVar44);
          if (puStack_110 < puVar1) goto LAB_002f6c04;
LAB_002f6b64:
          iVar29 = 0;
          puStack_110 = (ulong *)((long)puStack_110 - (uVar45 >> 3));
          uVar45 = (ulong)((uint)uVar45 & 7);
          uStack_108 = *puStack_110;
          uVar48 = (ulong)(uVar49 + uVar43);
/* chat: discord.gg/sdkhDjTex */
          if (puStack_160 < puVar2) goto LAB_002f6c1c;
LAB_002f6b90:
          iVar27 = 0;
          puStack_160 = (ulong *)((long)puStack_160 - (uVar48 >> 3));
          uVar48 = (ulong)((uint)uVar48 & 7);
          uStack_130 = *puStack_160;
          uVar18 = (ulong)(uVar50 + uVar24);
          if (puStack_f0 < apuStack_e0[0]) goto LAB_002f6c30;
LAB_002f6bb0:
          iVar25 = 0;
          puStack_f0 = (ulong *)((long)puStack_f0 - (uVar18 >> 3));
          uVar21 = (uint)uVar18 & 7;
          uVar18 = (ulong)uVar21;
          puStack_100 = (ulong *)*puStack_f0;
        }
        if (puVar34 <= pbVar8 + 4) break;
/* unlicensed copy if this notice is missing */
        uVar21 = (uint)uVar18;
        puVar37 = (ulong *)((long)puVar20 + 4);
      } while (((iVar29 == 0 && iVar19 == 0) && iVar27 == 0) && iVar25 == 0);
      puVar20 = (ulong *)((long)puVar20 + 4);
      puStack_f8 = (ulong *)(ulong)uVar21;
      puVar33 = (ulong *)((long)puVar20 + uVar22 * 3);
      puVar37 = (ulong *)((long)puVar20 + uVar22 * 2);
      puVar41 = (ulong *)((long)puVar20 + uVar22);
    }
  }
  uVar32 = (uint)uVar45;
  uVar21 = (uint)uVar48;
  if (puVar46 < puVar20) {
    return 0xffffffffffffffec;
  }
  if (puVar31 < puVar41) {
    return 0xffffffffffffffec;
  }
  if (puVar38 < puVar37) {
    return 0xffffffffffffffec;
  }
  uVar49 = (uint)uVar51;
  if ((long)puVar46 - (long)puVar20 < 4) {
    if (0x40 < uVar49) goto LAB_002f7568;
    if (puStack_118 < puVar42) {
      if (puStack_118 == puVar28) {
        puStack_118 = puVar28;
        goto LAB_002f6e48;
      }
      uVar50 = (int)puStack_118 - (int)puVar28;
      if (puVar28 <= (ulong *)((long)puStack_118 - (ulong)(uVar49 >> 3))) {
        uVar50 = uVar49 >> 3;
      }
      uVar49 = uVar49 + uVar50 * -8;
    }
    else {
      uVar50 = uVar49 >> 3;
/*  donate: donate/README.md  */
      uVar49 = uVar49 & 7;
    }
    uVar51 = (ulong)uVar49;
    uVar47 = *(ulong *)((long)puStack_118 - (ulong)uVar50);
    puStack_118 = (ulong *)((long)puStack_118 - (ulong)uVar50);
  }
  else if (uVar49 < 0x41) {
    uVar49 = -uVar36 & 0x3f;
    do {
      uVar50 = (uint)uVar51;
      if (puStack_118 < puVar42) {
        if (puStack_118 == puVar28) {
          puStack_118 = puVar28;
          goto LAB_002f6e44;
        }
        bVar17 = puVar28 <= (ulong *)((long)puStack_118 - (uVar51 >> 3));
        uVar26 = (uint)(uVar51 >> 3);
        if (!bVar17) {
          uVar26 = (int)puStack_118 - (int)puVar28;
        }
        uVar50 = uVar50 + uVar26 * -8;
      }
      else {
        uVar26 = uVar50 >> 3;
        uVar50 = uVar50 & 7;
/* WM - do not claim this as your own */
        bVar17 = true;
      }
      uVar51 = (ulong)uVar50;
      puStack_118 = (ulong *)((long)puStack_118 - (ulong)uVar26);
      uVar47 = *puStack_118;
      if (((ulong *)((long)puVar46 - 3U) <= puVar20) || (!bVar17)) goto LAB_002f6e44;
      pbVar35 = (byte *)(param_5 + ((uVar47 << (uVar51 & 0x3f)) >> uVar49) * 2);
      uVar50 = uVar50 + *pbVar35;
      *(byte *)puVar20 = pbVar35[1];
      pbVar35 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar50 & 0x3f)) >> uVar49) * 2);
      uVar50 = uVar50 + *pbVar35;
      *(byte *)((long)puVar20 + 1) = pbVar35[1];
      pbVar35 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar50 & 0x3f)) >> uVar49) * 2);
      uVar50 = uVar50 + *pbVar35;
      *(byte *)((long)puVar20 + 2) = pbVar35[1];
      pbVar35 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar50 & 0x3f)) >> uVar49) * 2);
      uVar50 = uVar50 + *pbVar35;
      uVar51 = (ulong)uVar50;
      puVar3 = (ulong *)((long)puVar20 + 4);
      *(byte *)((long)puVar20 + 3) = pbVar35[1];
      puVar20 = puVar3;
    } while (uVar50 < 0x41);
    puStack_118 = (ulong *)&UNK_01ade400;
LAB_002f6e44:
  }
  else {
LAB_002f7568:
    puStack_118 = (ulong *)&UNK_01ade400;
  }
LAB_002f6e48:
  uVar49 = (uint)uVar51;
  if (puVar20 < puVar46) {
// proprietary - see LICENSE - do not sell
    uVar50 = -uVar36 & 0x3f;
    pbVar35 = (byte *)((long)((long)param_1 + uVar22) + ~(ulong)puVar20);
    uVar18 = (ulong)pbVar35 % 5;
    if (uVar18 != 4) {
      lVar39 = uVar18 + 1;
      puVar46 = puVar20;
      do {
        pbVar7 = (byte *)(param_5 + ((uVar47 << (uVar51 & 0x3f)) >> uVar50) * 2);
        uVar51 = (ulong)((int)uVar51 + (uint)*pbVar7);
        puVar20 = (ulong *)((long)puVar46 + 1);
        *(byte *)puVar46 = pbVar7[1];
        lVar39 = lVar39 + -1;
        puVar46 = puVar20;
      } while (lVar39 != 0);
    }
    uVar49 = (uint)uVar51;
    if ((byte *)((long)&MACH_HEADER.magic + 3) < pbVar35) {
      do {
        pbVar35 = (byte *)(param_5 + ((uVar47 << (uVar51 & 0x3f)) >> uVar50) * 2);
        uVar49 = (int)uVar51 + (uint)*pbVar35;
        *(byte *)puVar20 = pbVar35[1];
        pbVar35 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar49 & 0x3f)) >> uVar50) * 2);
        uVar49 = uVar49 + *pbVar35;
        *(byte *)((long)puVar20 + 1) = pbVar35[1];
        pbVar35 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar49 & 0x3f)) >> uVar50) * 2);
        uVar49 = uVar49 + *pbVar35;
        *(byte *)((long)puVar20 + 2) = pbVar35[1];
// WM - do not claim this as your own
        pbVar35 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar49 & 0x3f)) >> uVar50) * 2);
        uVar49 = uVar49 + *pbVar35;
        *(byte *)((long)puVar20 + 3) = pbVar35[1];
        pbVar35 = (byte *)(param_5 + ((uVar47 << ((ulong)uVar49 & 0x3f)) >> uVar50) * 2);
        uVar49 = uVar49 + *pbVar35;
        uVar51 = (ulong)uVar49;
        *(byte *)((long)puVar20 + 4) = pbVar35[1];
        puVar20 = (ulong *)((long)puVar20 + 5);
      } while (puVar20 != (ulong *)((long)param_1 + uVar22));
    }
  }
  if ((long)puVar31 - (long)puVar41 < 4) {
    if (0x40 < uVar32) goto LAB_002f7578;
    if (puStack_110 < puVar1) {
      puVar46 = puVar5;
      if (puStack_110 != puVar5) {
        uVar50 = (int)puStack_110 - (int)puVar5;
        if (puVar5 <= (ulong *)((long)puStack_110 - (ulong)(uVar32 >> 3))) {
          uVar50 = uVar32 >> 3;
        }
        uVar32 = uVar32 + uVar50 * -8;
        uVar45 = (ulong)uVar32;
        uStack_108 = *(ulong *)((long)puStack_110 - (ulong)uVar50);
        puVar46 = (ulong *)((long)puStack_110 - (ulong)uVar50);
      }
    }
    else {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      puVar46 = (ulong *)((long)puStack_110 - (ulong)(uVar32 >> 3));
      uVar32 = uVar32 & 7;
      uVar45 = (ulong)uVar32;
      uStack_108 = *puVar46;
    }
  }
  else if (uVar32 < 0x41) {
    uVar32 = -uVar36 & 0x3f;
    do {
      uVar50 = (uint)uVar45;
      if (puStack_110 < puVar1) {
        if (puStack_110 == puVar5) {
          puStack_110 = puVar5;
          goto LAB_002f7120;
        }
        bVar17 = puVar5 <= (ulong *)((long)puStack_110 - (uVar45 >> 3));
        uVar26 = (uint)(uVar45 >> 3);
        if (!bVar17) {
          uVar26 = (int)puStack_110 - (int)puVar5;
        }
        uVar50 = uVar50 + uVar26 * -8;
      }
      else {
        uVar26 = uVar50 >> 3;
        uVar50 = uVar50 & 7;
        bVar17 = true;
      }
      uVar45 = (ulong)uVar50;
      puStack_110 = (ulong *)((long)puStack_110 - (ulong)uVar26);
      uStack_108 = *puStack_110;
      if (((ulong *)((long)puVar31 - 3U) <= puVar41) || (!bVar17)) goto LAB_002f7120;
      pbVar35 = (byte *)(param_5 + ((uStack_108 << (uVar45 & 0x3f)) >> uVar32) * 2);
      uVar50 = uVar50 + *pbVar35;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      *(byte *)puVar41 = pbVar35[1];
      pbVar35 = (byte *)(param_5 + ((uStack_108 << ((ulong)uVar50 & 0x3f)) >> uVar32) * 2);
      uVar50 = uVar50 + *pbVar35;
      *(byte *)((long)puVar41 + 1) = pbVar35[1];
      pbVar35 = (byte *)(param_5 + ((uStack_108 << ((ulong)uVar50 & 0x3f)) >> uVar32) * 2);
      uVar50 = uVar50 + *pbVar35;
      *(byte *)((long)puVar41 + 2) = pbVar35[1];
      pbVar35 = (byte *)(param_5 + ((uStack_108 << ((ulong)uVar50 & 0x3f)) >> uVar32) * 2);
      uVar50 = uVar50 + *pbVar35;
      uVar45 = (ulong)uVar50;
      puVar46 = (ulong *)((long)puVar41 + 4);
      *(byte *)((long)puVar41 + 3) = pbVar35[1];
      puVar41 = puVar46;
    } while (uVar50 < 0x41);
    puStack_110 = (ulong *)&UNK_01ade400;
LAB_002f7120:
    uVar32 = (uint)uVar45;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    puVar46 = puStack_110;
  }
  else {
LAB_002f7578:
    puVar46 = (ulong *)&UNK_01ade400;
  }
  if (puVar41 < puVar31) {
    do {
      pbVar35 = (byte *)(param_5 + ((uStack_108 << (uVar45 & 0x3f)) >> (-uVar36 & 0x3f)) * 2);
      uVar32 = (int)uVar45 + (uint)*pbVar35;
      uVar45 = (ulong)uVar32;
      puVar42 = (ulong *)((long)puVar41 + 1);
      *(byte *)puVar41 = pbVar35[1];
      puVar41 = puVar42;
    } while (puVar42 < puVar31);
  }
  if ((long)puVar38 - (long)puVar37 < 4) {
    if (0x40 < uVar21) goto joined_r0x002f726c;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    if (puStack_160 < puVar2) {
      if (puStack_160 != puVar6) {
        uVar50 = (int)puStack_160 - (int)puVar6;
        if (puVar6 <= (ulong *)((long)puStack_160 - (ulong)(uVar21 >> 3))) {
          uVar50 = uVar21 >> 3;
        }
        puStack_160 = (ulong *)((long)puStack_160 - (ulong)uVar50);
        uVar21 = uVar21 + uVar50 * -8;
        uStack_130 = *puStack_160;
        goto joined_r0x002f72b4;
      }
LAB_002f72c8:
      uVar21 = (uint)uVar48;
      puStack_160 = puVar6;
    }
    else {
      puStack_160 = (ulong *)((long)puStack_160 - (ulong)(uVar21 >> 3));
      uVar21 = uVar21 & 7;
      uStack_130 = *puStack_160;
joined_r0x002f72b4:
      uVar48 = (ulong)uVar21;
    }
  }
  else {
    if (uVar21 < 0x41) {
      uVar50 = -uVar36 & 0x3f;
      do {
        uVar21 = (uint)uVar48;
        if (puStack_160 < puVar2) {
          if (puStack_160 == puVar6) goto LAB_002f72c8;
          bVar17 = puVar6 <= (ulong *)((long)puStack_160 - (uVar48 >> 3));
          uVar26 = (uint)(uVar48 >> 3);
          if (!bVar17) {
            uVar26 = (int)puStack_160 - (int)puVar6;
          }
          uVar21 = uVar21 + uVar26 * -8;
        }
/* WM - found on a paste site? it was re-uploaded illegally */
        else {
          uVar26 = uVar21 >> 3;
          uVar21 = uVar21 & 7;
          bVar17 = true;
        }
        uVar48 = (ulong)uVar21;
        puStack_160 = (ulong *)((long)puStack_160 - (ulong)uVar26);
        uStack_130 = *puStack_160;
        if (((ulong *)((long)puVar38 - 3U) <= puVar37) || (!bVar17)) goto joined_r0x002f72c0;
        pbVar35 = (byte *)(param_5 + ((uStack_130 << (uVar48 & 0x3f)) >> uVar50) * 2);
        uVar21 = uVar21 + *pbVar35;
        *(byte *)puVar37 = pbVar35[1];
        pbVar35 = (byte *)(param_5 + ((uStack_130 << ((ulong)uVar21 & 0x3f)) >> uVar50) * 2);
        uVar21 = uVar21 + *pbVar35;
        *(byte *)((long)puVar37 + 1) = pbVar35[1];
        pbVar35 = (byte *)(param_5 + ((uStack_130 << ((ulong)uVar21 & 0x3f)) >> uVar50) * 2);
        uVar21 = uVar21 + *pbVar35;
        *(byte *)((long)puVar37 + 2) = pbVar35[1];
        pbVar35 = (byte *)(param_5 + ((uStack_130 << ((ulong)uVar21 & 0x3f)) >> uVar50) * 2);
        uVar21 = uVar21 + *pbVar35;
        uVar48 = (ulong)uVar21;
        puVar31 = (ulong *)((long)puVar37 + 4);
        *(byte *)((long)puVar37 + 3) = pbVar35[1];
        puVar37 = puVar31;
      } while (uVar21 < 0x41);
    }
joined_r0x002f726c:
    puStack_160 = (ulong *)&UNK_01ade400;
  }
joined_r0x002f72c0:
  if (puVar37 < puVar38) {
    do {
      pbVar35 = (byte *)(param_5 + ((uStack_130 << (uVar48 & 0x3f)) >> (-uVar36 & 0x3f)) * 2);
      uVar21 = (int)uVar48 + (uint)*pbVar35;
      uVar48 = (ulong)uVar21;
      puVar31 = (ulong *)((long)puVar37 + 1);
      *(byte *)puVar37 = pbVar35[1];
      puVar37 = puVar31;
// WM - no support for modified copies
    } while (puVar31 < puVar38);
  }
  uVar50 = (uint)puStack_f8;
  if ((long)puVar4 - (long)puVar33 < 4) {
    if ((uint)puStack_f8 < 0x41) {
      if (puStack_f0 < apuStack_e0[0]) {
        if (puStack_f0 == puStack_e8) goto LAB_002f74c4;
        uVar26 = (int)puStack_f0 - (int)puStack_e8;
        if (puStack_e8 <= (ulong *)((long)puStack_f0 - (ulong)((uint)puStack_f8 >> 3))) {
          uVar26 = (uint)puStack_f8 >> 3;
        }
        uVar50 = (uint)puStack_f8 + uVar26 * -8;
      }
      else {
        uVar26 = (uint)puStack_f8 >> 3;
        uVar50 = (uint)puStack_f8 & 7;
      }
      puStack_f0 = (ulong *)((long)puStack_f0 - (ulong)uVar26);
/*  keep the notice, keep the source honest  */
      puStack_f8 = (ulong *)(ulong)uVar50;
      puStack_100 = (ulong *)*puStack_f0;
    }
    else {
      puStack_f0 = (ulong *)&UNK_01ade400;
    }
  }
  else {
    if ((uint)puStack_f8 < 0x41) {
      uVar26 = -uVar36 & 0x3f;
      do {
        if (puStack_f0 < apuStack_e0[0]) {
          if (puStack_f0 == puStack_e8) goto LAB_002f74c4;
          bVar17 = puStack_e8 <= (ulong *)((long)puStack_f0 - (ulong)(uVar50 >> 3));
          uVar24 = uVar50 >> 3;
          if (!bVar17) {
            uVar24 = (int)puStack_f0 - (int)puStack_e8;
          }
          uVar50 = uVar50 + uVar24 * -8;
        }
        else {
          uVar24 = uVar50 >> 3;
          uVar50 = uVar50 & 7;
          bVar17 = true;
        }
        puStack_f0 = (ulong *)((long)puStack_f0 - (ulong)uVar24);
        puStack_f8 = (ulong *)(ulong)uVar50;
        puStack_100 = (ulong *)*puStack_f0;
        if ((puVar34 <= puVar33) || (!bVar17)) goto LAB_002f74c4;
        pbVar35 = (byte *)(param_5 +
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                          ((ulong)((long)puStack_100 << ((ulong)uVar50 & 0x3f)) >> uVar26) * 2);
        uVar50 = uVar50 + *pbVar35;
        *(byte *)puVar33 = pbVar35[1];
        pbVar35 = (byte *)(param_5 +
                          ((ulong)((long)puStack_100 << ((ulong)uVar50 & 0x3f)) >> uVar26) * 2);
        uVar50 = uVar50 + *pbVar35;
        *(byte *)((long)puVar33 + 1) = pbVar35[1];
        pbVar35 = (byte *)(param_5 +
                          ((ulong)((long)puStack_100 << ((ulong)uVar50 & 0x3f)) >> uVar26) * 2);
        uVar50 = uVar50 + *pbVar35;
        *(byte *)((long)puVar33 + 2) = pbVar35[1];
        pbVar35 = (byte *)(param_5 +
                          ((ulong)((long)puStack_100 << ((ulong)uVar50 & 0x3f)) >> uVar26) * 2);
        uVar50 = uVar50 + *pbVar35;
        puStack_f8 = (ulong *)(ulong)uVar50;
        puVar31 = (ulong *)((long)puVar33 + 4);
        *(byte *)((long)puVar33 + 3) = pbVar35[1];
        puVar33 = puVar31;
      } while (uVar50 < 0x41);
    }
    else {
    }
    puStack_f0 = (ulong *)&UNK_01ade400;
  }
LAB_002f74c4:
  if (puVar33 < puVar4) {
    pbVar35 = (byte *)((long)param_1 + (param_2 - (long)puVar33));
    do {
      pbVar7 = (byte *)(param_5 +
                       ((ulong)((long)puStack_100 << ((ulong)puStack_f8 & 0x3f)) >> (-uVar36 & 0x3f)
                       ) * 2);
      uVar50 = (uint)puStack_f8 + *pbVar7;
      puStack_f8 = (ulong *)(ulong)uVar50;
      *(byte *)puVar33 = pbVar7[1];
      pbVar35 = pbVar35 + -1;
      puVar33 = (ulong *)((long)puVar33 + 1);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    } while (pbVar35 != (byte *)0x0);
  }
  uVar18 = 0xffffffffffffffec;
  if (((((((uVar50 == 0x40 && puStack_f0 == puStack_e8) && uVar21 == 0x40) && puStack_160 == puVar6)
        && uVar32 == 0x40) && puVar46 == puVar5) && uVar49 == 0x40) && puStack_118 == puVar28) {
    uVar18 = param_2;
  }
  return uVar18;
}

