/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2f3e78:860830c3f2
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002f3e78(ulong *param_1,ulong param_2,ushort *param_3,ulong param_4,uint *param_5,
                  uint param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  ulong *puVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
/*  found on a paste site? it was re-uploaded illegally  */
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  bool bVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  uint uVar24;
  ulong *puVar25;
  ulong *puVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  uint uVar32;
  ulong *puVar33;
  ulong *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong *puVar38;
  ulong *puVar39;
  long lVar40;
  ulong *puVar41;
  ulong *puVar42;
  ulong *puVar43;
  ulong uVar44;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  int iVar45;
  ulong uVar46;
  int iVar47;
  ulong uVar48;
  uint uVar49;
  int iVar50;
  ulong *puVar51;
  ulong *puStack_178;
  ulong *puStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *apuStack_e0 [4];
  ulong auStack_c0 [4];
  long lStack_a0;
  ulong *puStack_98;
  long lStack_90;
  long alStack_88 [5];
  
  if ((param_6 >> 5 & 1) == 0) {
    uVar21 = func_0x002f7724(&puStack_100,param_1,param_2,param_3,param_4,param_5);
    if (uVar21 - 1 < 0xffffffffffffff87 || uVar21 == 0xffffffffffffff88) {
      puVar3 = (ulong *)((long)param_1 + (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)));
      puVar25 = apuStack_e0[3];
      puVar22 = apuStack_e0[2];
      puVar34 = apuStack_e0[1];
      while( true ) {
        uVar21 = (ulong)((long)puStack_100 - (long)puStack_98) / 7;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        uVar44 = (ulong)((long)apuStack_e0[1] - (long)apuStack_e0[0]) / 10;
        if (uVar44 <= uVar21) {
          uVar21 = uVar44;
        }
        uVar44 = (ulong)((long)apuStack_e0[2] - (long)puVar34) / 10;
        if (uVar44 <= uVar21) {
          uVar21 = uVar44;
        }
        uVar44 = (ulong)((long)apuStack_e0[3] - (long)puVar22) / 10;
        if (uVar44 <= uVar21) {
          uVar21 = uVar44;
        }
        uVar44 = (ulong)(lStack_90 - (long)puVar25) / 10;
        if (uVar44 <= uVar21) {
          uVar21 = uVar44;
        }
        if (((uVar21 == 0 || puStack_f8 < puStack_100) || puStack_f0 < puStack_f8) ||
            puStack_e8 < puStack_f0) break;
        puVar4 = (undefined2 *)((long)puVar25 + uVar21 * 5);
        do {
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 4);
          *(short *)apuStack_e0[0] = (short)uVar28;
          auStack_c0[0] = auStack_c0[0] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar5 = (undefined2 *)((long)apuStack_e0[0] + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 4);
          *(short *)puVar34 = (short)uVar28;
          auStack_c0[1] = auStack_c0[1] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar6 = (undefined2 *)((long)puVar34 + (ulong)(uVar28 >> 0x18));
// WM - found on a paste site? it was re-uploaded illegally
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 4);
          *(short *)puVar22 = (short)uVar28;
          auStack_c0[2] = auStack_c0[2] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar7 = (undefined2 *)((long)puVar22 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 4);
          *(short *)puVar25 = (short)uVar28;
          auStack_c0[3] = auStack_c0[3] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar8 = (undefined2 *)((long)puVar25 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 4);
          *puVar5 = (short)uVar28;
          auStack_c0[0] = auStack_c0[0] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          uVar32 = *(uint *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 4);
          puVar5 = (undefined2 *)((long)puVar5 + (ulong)(uVar28 >> 0x18));
          *puVar6 = (short)uVar32;
          auStack_c0[1] = auStack_c0[1] << ((ulong)(uVar32 >> 0x10) & 0x3f);
          puVar6 = (undefined2 *)((long)puVar6 + (ulong)(uVar32 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 4);
          *puVar7 = (short)uVar28;
          auStack_c0[2] = auStack_c0[2] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar7 = (undefined2 *)((long)puVar7 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 4);
          *puVar8 = (short)uVar28;
          auStack_c0[3] = auStack_c0[3] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar8 = (undefined2 *)((long)puVar8 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 4);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          *puVar5 = (short)uVar28;
          auStack_c0[0] = auStack_c0[0] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar5 = (undefined2 *)((long)puVar5 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 4);
          *puVar6 = (short)uVar28;
          auStack_c0[1] = auStack_c0[1] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar6 = (undefined2 *)((long)puVar6 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 4);
          *puVar7 = (short)uVar28;
          auStack_c0[2] = auStack_c0[2] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          uVar32 = *(uint *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 4);
          puVar7 = (undefined2 *)((long)puVar7 + (ulong)(uVar28 >> 0x18));
          *puVar8 = (short)uVar32;
          auStack_c0[3] = auStack_c0[3] << ((ulong)(uVar32 >> 0x10) & 0x3f);
          puVar8 = (undefined2 *)((long)puVar8 + (ulong)(uVar32 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 4);
          *puVar5 = (short)uVar28;
          auStack_c0[0] = auStack_c0[0] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar5 = (undefined2 *)((long)puVar5 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 4);
          *puVar6 = (short)uVar28;
          auStack_c0[1] = auStack_c0[1] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar6 = (undefined2 *)((long)puVar6 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 4);
          *puVar7 = (short)uVar28;
          auStack_c0[2] = auStack_c0[2] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar7 = (undefined2 *)((long)puVar7 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 4);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
          *puVar8 = (short)uVar28;
          auStack_c0[3] = auStack_c0[3] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar8 = (undefined2 *)((long)puVar8 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[0] >> 0x35) * 4);
          *puVar5 = (short)uVar28;
          auStack_c0[0] = auStack_c0[0] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          uVar32 = *(uint *)(lStack_a0 + (auStack_c0[1] >> 0x35) * 4);
          apuStack_e0[0] = (ulong *)((long)puVar5 + (ulong)(uVar28 >> 0x18));
          *puVar6 = (short)uVar32;
          auStack_c0[1] = auStack_c0[1] << ((ulong)(uVar32 >> 0x10) & 0x3f);
          puVar34 = (ulong *)((long)puVar6 + (ulong)(uVar32 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[2] >> 0x35) * 4);
          *puVar7 = (short)uVar28;
          auStack_c0[2] = auStack_c0[2] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar22 = (ulong *)((long)puVar7 + (ulong)(uVar28 >> 0x18));
          uVar28 = *(uint *)(lStack_a0 + (auStack_c0[3] >> 0x35) * 4);
          *puVar8 = (short)uVar28;
          auStack_c0[3] = auStack_c0[3] << ((ulong)(uVar28 >> 0x10) & 0x3f);
          puVar25 = (ulong *)((long)puVar8 + (ulong)(uVar28 >> 0x18));
          uVar21 = (auStack_c0[0] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   (auStack_c0[0] & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          uVar21 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20);
          puStack_100 = (ulong *)((long)puStack_100 - (uVar21 >> 3));
          auStack_c0[0] = (*puStack_100 | 1) << (uVar21 & 7);
          uVar21 = (auStack_c0[1] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   (auStack_c0[1] & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          uVar21 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20);
          puStack_f8 = (ulong *)((long)puStack_f8 - (uVar21 >> 3));
          auStack_c0[1] = (*puStack_f8 | 1) << (uVar21 & 7);
          uVar21 = (auStack_c0[2] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   (auStack_c0[2] & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          uVar21 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20);
          puStack_f0 = (ulong *)((long)puStack_f0 - (uVar21 >> 3));
          auStack_c0[2] = (*puStack_f0 | 1) << (uVar21 & 7);
          uVar21 = (auStack_c0[3] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   (auStack_c0[3] & 0x5555555555555555) << 1;
          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
          uVar21 = LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20);
          puStack_e8 = (ulong *)((long)puStack_e8 - (uVar21 >> 3));
          auStack_c0[3] = (*puStack_e8 | 1) << (uVar21 & 7);
        } while (puVar25 < puVar4);
      }
      lVar40 = 0;
      uVar21 = param_2 + 3 >> 2;
      apuStack_e0[1] = puVar34;
      apuStack_e0[2] = puVar22;
      apuStack_e0[3] = puVar25;
      puVar34 = param_1;
      do {
        puVar22 = (ulong *)((long)puVar34 + uVar21);
        uVar44 = (long)puVar3 - (long)puVar34;
/*  donate: donate/README.md  */
        puVar34 = puVar3;
        if (uVar21 <= uVar44) {
          puVar34 = puVar22;
        }
        puVar22 = apuStack_e0[lVar40];
        if (puVar34 < puVar22) {
          return 0xffffffffffffffec;
        }
        puVar25 = apuStack_e0[lVar40 + -4];
        if (puVar25 < (ulong *)(alStack_88[lVar40] + -8)) {
          return 0xffffffffffffffec;
        }
        uVar29 = *puVar25;
        uVar44 = (auStack_c0[lVar40] & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 (auStack_c0[lVar40] & 0x5555555555555555) << 1;
        uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
        uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
        uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
        uVar44 = LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20);
        puVar1 = puStack_98 + 1;
        uVar31 = (long)puVar34 - (long)puVar22;
        iVar27 = (int)puStack_98;
        puVar30 = puVar22;
        if (uVar31 < 8) {
          if (puVar25 < puVar1) {
            if (puVar25 != puStack_98) {
              uVar28 = (int)puVar25 - iVar27;
              if (puStack_98 <= (ulong *)((long)puVar25 - (uVar44 >> 3))) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                uVar28 = (uint)(uVar44 >> 3);
              }
              puVar25 = (ulong *)((long)puVar25 - (ulong)uVar28);
              uVar44 = (ulong)((uint)uVar44 + uVar28 * -8);
              uVar29 = *puVar25;
            }
          }
          else {
            puVar25 = (ulong *)((long)puVar25 - (uVar44 >> 3));
            uVar44 = (ulong)((uint)uVar44 & 7);
            uVar29 = *puVar25;
          }
        }
        else {
          do {
            uVar28 = (uint)uVar44;
            if (puVar25 < puVar1) {
              if (puVar25 != puStack_98) {
                bVar20 = puStack_98 <= (ulong *)((long)puVar25 - (uVar44 >> 3));
                uVar32 = (uint)(uVar44 >> 3);
                if (!bVar20) {
                  uVar32 = (int)puVar25 - iVar27;
                }
                uVar37 = uVar28 + uVar32 * -8;
                puVar25 = (ulong *)((long)puVar25 - (ulong)uVar32);
                uVar29 = *puVar25;
                goto joined_r0x002f42e8;
              }
LAB_002f444c:
              uVar31 = (long)puVar34 - (long)puVar30;
              goto joined_r0x002f4444;
            }
            uVar37 = uVar28 & 7;
            bVar20 = true;
            puVar25 = (ulong *)((long)puVar25 - (ulong)(uVar28 >> 3));
            uVar29 = *puVar25;
joined_r0x002f42e8:
            uVar44 = (ulong)uVar37;
// WM - donate: donate/README.md
            if ((ulong *)((long)puVar34 - 9U) <= puVar30) {
              uVar31 = (long)puVar34 - (long)puVar30;
              goto joined_r0x002f4444;
            }
            if (!bVar20) goto LAB_002f444c;
            puVar9 = param_5 + ((uVar29 << (uVar44 & 0x3f)) >> 0x35) + 1;
            *(short *)puVar30 = (short)*puVar9;
            uVar37 = uVar37 + *(byte *)((long)puVar9 + 2);
            puVar4 = (undefined2 *)((long)puVar30 + (ulong)*(byte *)((long)puVar9 + 3));
            puVar9 = param_5 + ((uVar29 << ((ulong)uVar37 & 0x3f)) >> 0x35) + 1;
            *puVar4 = (short)*puVar9;
            uVar37 = uVar37 + *(byte *)((long)puVar9 + 2);
            puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
            puVar9 = param_5 + ((uVar29 << ((ulong)uVar37 & 0x3f)) >> 0x35) + 1;
            *puVar4 = (short)*puVar9;
            uVar37 = uVar37 + *(byte *)((long)puVar9 + 2);
            puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
            puVar9 = param_5 + ((uVar29 << ((ulong)uVar37 & 0x3f)) >> 0x35) + 1;
            *puVar4 = (short)*puVar9;
            uVar37 = uVar37 + *(byte *)((long)puVar9 + 2);
            puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
            puVar9 = param_5 + ((uVar29 << ((ulong)uVar37 & 0x3f)) >> 0x35) + 1;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            *puVar4 = (short)*puVar9;
            uVar37 = uVar37 + *(byte *)((long)puVar9 + 2);
            uVar44 = (ulong)uVar37;
            puVar30 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
          } while (uVar37 < 0x41);
          puVar25 = (ulong *)&UNK_01ade400;
          uVar31 = (long)puVar34 - (long)puVar30;
        }
joined_r0x002f4444:
        if (1 < uVar31) {
          uVar28 = (uint)uVar44;
          while (uVar28 < 0x41) {
            uVar32 = (uint)uVar44;
            if (puVar25 < puVar1) {
              if (puVar25 == puStack_98) break;
              bVar20 = puStack_98 <= (ulong *)((long)puVar25 - (uVar44 >> 3));
              uVar37 = (uint)(uVar44 >> 3);
              if (!bVar20) {
                uVar37 = (int)puVar25 - iVar27;
              }
              uVar28 = uVar32 + uVar37 * -8;
              puVar25 = (ulong *)((long)puVar25 - (ulong)uVar37);
/*  watermarked copy - do not remove  */
              uVar29 = *puVar25;
            }
            else {
              uVar28 = uVar32 & 7;
              bVar20 = true;
              puVar25 = (ulong *)((long)puVar25 - (ulong)(uVar32 >> 3));
              uVar29 = *puVar25;
            }
            uVar44 = (ulong)uVar28;
            if (((ulong *)((long)puVar34 - 2U) < puVar30) || (!bVar20)) break;
            puVar9 = param_5 + ((uVar29 << (uVar44 & 0x3f)) >> 0x35) + 1;
            *(short *)puVar30 = (short)*puVar9;
            uVar28 = uVar28 + *(byte *)((long)puVar9 + 2);
            uVar44 = (ulong)uVar28;
            puVar30 = (ulong *)((long)puVar30 + (ulong)*(byte *)((long)puVar9 + 3));
          }
          for (; puVar30 <= (ulong *)((long)puVar34 - 2U);
              puVar30 = (ulong *)((long)puVar30 + (ulong)*(byte *)((long)puVar9 + 3))) {
            puVar9 = param_5 + ((uVar29 << (uVar44 & 0x3f)) >> 0x35) + 1;
            *(short *)puVar30 = (short)*puVar9;
            uVar44 = (ulong)((int)uVar44 + (uint)*(byte *)((long)puVar9 + 2));
          }
        }
        puVar25 = puVar30;
        if (puVar30 < puVar34) {
          puVar25 = (ulong *)((long)puVar30 + 1);
          *(undefined1 *)puVar30 =
               *(undefined1 *)((long)param_5 + ((uVar29 << (uVar44 & 0x3f)) >> 0x33 & 0x1ffc) + 4);
        }
        puVar25 = (ulong *)((long)puVar25 + ((long)apuStack_e0[lVar40] - (long)puVar22));
        apuStack_e0[lVar40] = puVar25;
        if (puVar25 != puVar34) {
          return 0xffffffffffffffec;
/* keep the notice, keep the source honest - github.com/pengussy */
        }
        lVar40 = lVar40 + 1;
      } while (lVar40 != 4);
      uVar21 = param_2;
    }
    if (uVar21 != 0) {
      return uVar21;
    }
  }
  if (param_2 < 6) {
    return 0xffffffffffffffec;
  }
  if (param_4 < 10) {
    return 0xffffffffffffffec;
  }
  puVar3 = (ulong *)((long)param_1 + param_2);
  uVar17 = *param_3;
  uVar18 = param_3[1];
  uVar19 = param_3[2];
  uVar21 = (ulong)uVar17 + (ulong)uVar18 + (ulong)uVar19 + 6;
  uVar44 = param_2 + 3 >> 2;
  puVar34 = (ulong *)((long)param_1 + uVar44);
  puVar22 = (ulong *)((long)puVar34 + uVar44);
  puVar25 = (ulong *)((long)puVar22 + uVar44);
  if (param_4 < uVar21 || puVar3 < puVar25) {
    return 0xffffffffffffffec;
  }
  if (uVar17 == 0) {
    return 0xffffffffffffffb8;
/* donate: donate/README.md */
  }
  uVar28 = *param_5;
  puVar1 = (ulong *)(param_3 + 3);
  puVar30 = (ulong *)((long)puVar1 + (ulong)uVar17);
  uVar32 = (uint)uVar18;
  if (uVar17 < 8) {
    uVar29 = (ulong)(byte)*puVar1;
    uVar37 = (uint)uVar17;
    if (uVar17 < 5) {
      if (uVar37 != 2) {
        if (uVar37 != 3) {
          if (uVar37 != 4) goto LAB_002f46a8;
          goto LAB_002f4690;
        }
        goto LAB_002f4698;
      }
LAB_002f46a0:
      uVar29 = uVar29 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
    }
    else {
/* thanks for reading - discord.gg/sdkhDjTex */
      if (uVar17 == 5) {
LAB_002f4688:
        uVar29 = uVar29 + ((ulong)(byte)param_3[5] << 0x20);
LAB_002f4690:
        uVar29 = uVar29 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
LAB_002f4698:
        uVar29 = uVar29 + (ulong)(byte)param_3[4] * 0x10000;
        goto LAB_002f46a0;
      }
      if (uVar17 == 6) {
LAB_002f4680:
        uVar29 = uVar29 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
        goto LAB_002f4688;
      }
      if (uVar37 == 7) {
        uVar29 = uVar29 | (ulong)(byte)param_3[6] << 0x30;
        goto LAB_002f4680;
      }
    }
LAB_002f46a8:
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (*(byte *)((long)puVar30 + -1) == 0) {
      return 0xffffffffffffffec;
    }
    uVar37 = (int)LZCOUNT((uint)*(byte *)((long)puVar30 + -1)) + uVar37 * -8 + 0x29;
    puVar51 = puVar1;
  }
  else {
    if (*(byte *)((long)puVar30 + -1) == 0) {
      return 0xffffffffffffffff;
    }
    uVar29 = puVar30[-1];
    uVar37 = 8 - ((uint)LZCOUNT((uint)*(byte *)((long)puVar30 + -1)) ^ 0x1f);
    puVar51 = puVar30 + -1;
  }
  if (uVar32 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar31 = (ulong)uVar37;
  puVar10 = (ulong *)((long)puVar30 + (ulong)uVar18);
  if (uVar18 < 8) {
    uVar48 = (ulong)(byte)*puVar30;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (uVar18 < 5) {
      if (uVar32 != 2) {
        if (uVar32 != 3) {
          if (uVar32 != 4) goto LAB_002f4768;
          goto LAB_002f4750;
        }
        goto LAB_002f4758;
      }
LAB_002f4760:
      uVar48 = uVar48 + (ulong)*(byte *)((long)puVar30 + 1) * 0x100;
    }
    else {
      if (uVar18 == 5) {
LAB_002f4748:
        uVar48 = uVar48 + ((ulong)*(byte *)((long)puVar30 + 4) << 0x20);
LAB_002f4750:
        uVar48 = uVar48 + (ulong)*(byte *)((long)puVar30 + 3) * 0x1000000;
LAB_002f4758:
        uVar48 = uVar48 + (ulong)*(byte *)((long)puVar30 + 2) * 0x10000;
        goto LAB_002f4760;
      }
      if (uVar32 == 6) {
LAB_002f4740:
        uVar48 = uVar48 + ((ulong)*(byte *)((long)puVar30 + 5) << 0x28);
        goto LAB_002f4748;
      }
      if (uVar32 == 7) {
        uVar48 = uVar48 | (ulong)*(byte *)((long)puVar30 + 6) << 0x30;
/* wm:if you paid for this, you were scammed */
        goto LAB_002f4740;
      }
    }
LAB_002f4768:
    if (*(byte *)((long)puVar10 + -1) == 0) {
      return 0xffffffffffffffec;
    }
    uVar32 = (int)LZCOUNT((uint)*(byte *)((long)puVar10 + -1)) + uVar32 * -8 + 0x29;
    puStack_128 = puVar30;
  }
  else {
    if (*(byte *)((long)puVar10 + -1) == 0) {
      return 0xffffffffffffffff;
    }
    uVar48 = puVar10[-1];
    uVar32 = 8 - ((uint)LZCOUNT((uint)*(byte *)((long)puVar10 + -1)) ^ 0x1f);
    puStack_128 = puVar10 + -1;
  }
  uVar46 = (ulong)uVar32;
  if (uVar19 == 0) {
    return 0xffffffffffffffb8;
  }
  pbVar11 = (byte *)((long)puVar10 + (ulong)uVar19);
  if (uVar19 < 8) {
    uStack_120 = (ulong)(byte)*puVar10;
    uVar32 = (uint)uVar19;
    if (uVar19 < 5) {
      if (uVar32 != 2) {
        if (uVar32 != 3) {
          if (uVar32 != 4) goto LAB_002f4890;
          goto LAB_002f4870;
        }
        goto LAB_002f487c;
      }
LAB_002f4884:
      uStack_120 = uStack_120 + (ulong)*(byte *)((long)puVar10 + 1) * 0x100;
// do not claim this as your own
    }
    else {
      if (uVar19 == 5) {
LAB_002f4864:
        uStack_120 = uStack_120 + ((ulong)*(byte *)((long)puVar10 + 4) << 0x20);
LAB_002f4870:
        uStack_120 = uStack_120 + (ulong)*(byte *)((long)puVar10 + 3) * 0x1000000;
LAB_002f487c:
        uStack_120 = uStack_120 + (ulong)*(byte *)((long)puVar10 + 2) * 0x10000;
        goto LAB_002f4884;
      }
      if (uVar19 == 6) {
LAB_002f485c:
        uStack_120 = uStack_120 + ((ulong)*(byte *)((long)puVar10 + 5) << 0x28);
        goto LAB_002f4864;
      }
      if (uVar32 == 7) {
        uStack_120 = uStack_120 | (ulong)*(byte *)((long)puVar10 + 6) << 0x30;
        goto LAB_002f485c;
      }
    }
// WM - origin: github.com/pengussy
LAB_002f4890:
    if (pbVar11[-1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar32 = (int)LZCOUNT((uint)pbVar11[-1]) + uVar32 * -8 + 0x29;
    puStack_178 = puVar10;
  }
  else {
    if (pbVar11[-1] == 0) {
      return 0xffffffffffffffff;
    }
    uStack_120 = *(ulong *)(pbVar11 + -8);
    uVar32 = 8 - ((uint)LZCOUNT((uint)pbVar11[-1]) ^ 0x1f);
    puStack_178 = (ulong *)(pbVar11 + -8);
  }
  uStack_110 = (ulong)uVar32;
  uVar21 = func_0x00297258(&puStack_100,pbVar11,param_4 - uVar21);
  if (0xffffffffffffff88 < uVar21) {
    return uVar21;
  }
  puVar38 = (ulong *)((long)puVar3 - 7);
  uVar32 = uVar28 >> 0x10;
  puVar33 = (ulong *)(param_3 + 7);
  puVar42 = puVar30 + 1;
  puVar2 = puVar10 + 1;
  puVar39 = puVar25;
  puVar41 = puVar22;
  puVar43 = puVar34;
  if ((7 < uVar44 * -3 + param_2) && (puVar25 < puVar38)) {
    uVar37 = -uVar32 & 0x3f;
    puStack_f8 = (ulong *)((ulong)puStack_f8 & 0xffffffff);
    puVar23 = puStack_100;
    puVar26 = puStack_f0;
/* if you paid for this, you were scammed */
    do {
      puVar9 = param_5 + ((uVar29 << (uVar31 & 0x3f)) >> uVar37) + 1;
      *(short *)param_1 = (short)*puVar9;
      uVar24 = (int)uVar31 + (uint)*(byte *)((long)puVar9 + 2);
      puVar4 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uVar48 << (uVar46 & 0x3f)) >> uVar37) + 1;
      *(short *)puVar43 = (short)*puVar9;
      uVar49 = (int)uVar46 + (uint)*(byte *)((long)puVar9 + 2);
      puVar5 = (undefined2 *)((long)puVar43 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uStack_120 << (uStack_110 & 0x3f)) >> uVar37) + 1;
      *(short *)puVar41 = (short)*puVar9;
      uVar36 = (int)uStack_110 + (uint)*(byte *)((long)puVar9 + 2);
      puVar6 = (undefined2 *)((long)puVar41 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((ulong)((long)puVar23 << ((ulong)puStack_f8 & 0x3f)) >> uVar37) + 1;
      *(short *)puVar39 = (short)*puVar9;
      uVar35 = (int)puStack_f8 + (uint)*(byte *)((long)puVar9 + 2);
      puVar7 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uVar29 << ((ulong)uVar24 & 0x3f)) >> uVar37) + 1;
      *puVar4 = (short)*puVar9;
      uVar24 = uVar24 + *(byte *)((long)puVar9 + 2);
      bVar12 = *(byte *)((long)puVar9 + 3);
      puVar9 = param_5 + ((uVar48 << ((ulong)uVar49 & 0x3f)) >> uVar37) + 1;
      *puVar5 = (short)*puVar9;
      uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
      puVar5 = (undefined2 *)((long)puVar5 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uStack_120 << ((ulong)uVar36 & 0x3f)) >> uVar37) + 1;
      *puVar6 = (short)*puVar9;
      uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
      puVar6 = (undefined2 *)((long)puVar6 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((ulong)((long)puVar23 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
      *puVar7 = (short)*puVar9;
      uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
/*  chat: discord.gg/sdkhDjTex  */
      puVar7 = (undefined2 *)((long)puVar7 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar4 = (undefined2 *)((long)puVar4 + (ulong)bVar12);
      puVar9 = param_5 + ((uVar29 << ((ulong)uVar24 & 0x3f)) >> uVar37) + 1;
      *puVar4 = (short)*puVar9;
      uVar24 = uVar24 + *(byte *)((long)puVar9 + 2);
      puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uVar48 << ((ulong)uVar49 & 0x3f)) >> uVar37) + 1;
      *puVar5 = (short)*puVar9;
      uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
      puVar5 = (undefined2 *)((long)puVar5 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uStack_120 << ((ulong)uVar36 & 0x3f)) >> uVar37) + 1;
      *puVar6 = (short)*puVar9;
      uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
      puVar6 = (undefined2 *)((long)puVar6 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((ulong)((long)puVar23 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
      *puVar7 = (short)*puVar9;
      uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
      puVar7 = (undefined2 *)((long)puVar7 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uVar29 << ((ulong)uVar24 & 0x3f)) >> uVar37) + 1;
      *puVar4 = (short)*puVar9;
      uVar24 = uVar24 + *(byte *)((long)puVar9 + 2);
      uVar31 = (ulong)uVar24;
      bVar12 = *(byte *)((long)puVar9 + 3);
      puVar9 = param_5 + ((uVar48 << ((ulong)uVar49 & 0x3f)) >> uVar37) + 1;
      *puVar5 = (short)*puVar9;
      bVar13 = *(byte *)((long)puVar9 + 2);
/* reversing this took months of machine time - github.com/pengussy */
      bVar14 = *(byte *)((long)puVar9 + 3);
      puVar9 = param_5 + ((uStack_120 << ((ulong)uVar36 & 0x3f)) >> uVar37) + 1;
      *puVar6 = (short)*puVar9;
      bVar15 = *(byte *)((long)puVar9 + 2);
      bVar16 = *(byte *)((long)puVar9 + 3);
      puVar9 = param_5 + ((ulong)((long)puVar23 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
      *puVar7 = (short)*puVar9;
      if (puVar51 < puVar33) {
        iVar27 = 3;
        uVar46 = (ulong)(uVar49 + bVar13);
        uVar49 = (uint)*(byte *)((long)puVar9 + 2);
        uVar21 = (ulong)*(byte *)((long)puVar9 + 3);
        if (puStack_128 < puVar42) goto LAB_002f4c90;
LAB_002f4bc8:
        iVar45 = 0;
        puStack_128 = (ulong *)((long)puStack_128 - (uVar46 >> 3));
        uVar46 = (ulong)((uint)uVar46 & 7);
        uVar48 = *puStack_128;
        uStack_110 = (ulong)(uVar36 + bVar15);
        if (puVar2 <= puStack_178) goto LAB_002f4bf4;
LAB_002f4ca8:
        iVar47 = 3;
        puStack_f8 = (ulong *)(ulong)(uVar35 + uVar49);
        if (puVar26 < apuStack_e0[0]) goto LAB_002f4cbc;
LAB_002f4c1c:
        iVar50 = 0;
        puVar26 = (ulong *)((long)puVar26 - ((ulong)puStack_f8 >> 3));
        puStack_f8 = (ulong *)(ulong)((uint)puStack_f8 & 7);
        puVar23 = (ulong *)*puVar26;
        puStack_100 = puVar23;
        puStack_f0 = puVar26;
      }
      else {
        iVar27 = 0;
        puVar51 = (ulong *)((long)puVar51 - (ulong)(uVar24 >> 3));
        uVar31 = (ulong)(uVar24 & 7);
// WM - proprietary - see LICENSE - do not sell
        uVar29 = *puVar51;
        uVar46 = (ulong)(uVar49 + bVar13);
        uVar49 = (uint)*(byte *)((long)puVar9 + 2);
        uVar21 = (ulong)*(byte *)((long)puVar9 + 3);
        if (puVar42 <= puStack_128) goto LAB_002f4bc8;
LAB_002f4c90:
        iVar45 = 3;
        uStack_110 = (ulong)(uVar36 + bVar15);
        if (puStack_178 < puVar2) goto LAB_002f4ca8;
LAB_002f4bf4:
        iVar47 = 0;
        puStack_178 = (ulong *)((long)puStack_178 - (uStack_110 >> 3));
        uStack_110 = (ulong)((uint)uStack_110 & 7);
        uStack_120 = *puStack_178;
        puStack_f8 = (ulong *)(ulong)(uVar35 + uVar49);
        if (apuStack_e0[0] <= puVar26) goto LAB_002f4c1c;
LAB_002f4cbc:
        iVar50 = 3;
      }
      param_1 = (ulong *)((long)puVar4 + (ulong)bVar12);
      puVar43 = (ulong *)((long)puVar5 + (ulong)bVar14);
      puVar41 = (ulong *)((long)puVar6 + (ulong)bVar16);
      puVar39 = (ulong *)((long)puVar7 + uVar21);
    } while (puVar39 < puVar38 && (((iVar45 == 0 && iVar27 == 0) && iVar47 == 0) && iVar50 == 0));
  }
  if (puVar34 < param_1) {
    return 0xffffffffffffffec;
// if you paid for this, you were scammed
  }
  if (puVar22 < puVar43) {
    return 0xffffffffffffffec;
  }
  if (puVar25 < puVar41) {
    return 0xffffffffffffffec;
  }
  uVar37 = uVar28 >> 0x10 & 0xff;
  iVar27 = (int)puVar1;
  uVar28 = (uint)uVar31;
  if ((ulong)((long)puVar34 - (long)param_1) < 8) {
    if (uVar28 < 0x41) {
      if (puVar51 < puVar33) {
        if (puVar51 == puVar1) {
LAB_002f4fe8:
          puVar51 = puVar1;
          goto LAB_002f5000;
        }
        uVar49 = (int)puVar51 - iVar27;
        if (puVar1 <= (ulong *)((long)puVar51 - (ulong)(uVar28 >> 3))) {
          uVar49 = uVar28 >> 3;
        }
        uVar28 = uVar28 + uVar49 * -8;
      }
      else {
        uVar49 = uVar28 >> 3;
// WM - keep the notice, keep the source honest
        uVar28 = uVar28 & 7;
      }
      puVar51 = (ulong *)((long)puVar51 - (ulong)uVar49);
      uVar31 = (ulong)uVar28;
      uVar29 = *puVar51;
    }
    else {
      puVar51 = (ulong *)&UNK_01ade400;
    }
  }
  else {
    if (uVar37 < 0xc) {
      if (0x40 < uVar28) goto LAB_002f5f5c;
      uVar28 = -uVar32 & 0x3f;
      do {
        uVar49 = (uint)uVar31;
        if (puVar51 < puVar33) {
          if (puVar51 == puVar1) goto LAB_002f4fe8;
          bVar20 = puVar1 <= (ulong *)((long)puVar51 - (uVar31 >> 3));
          uVar36 = (uint)(uVar31 >> 3);
          if (!bVar20) {
            uVar36 = (int)puVar51 - iVar27;
          }
          uVar49 = uVar49 + uVar36 * -8;
        }
        else {
          uVar36 = uVar49 >> 3;
          uVar49 = uVar49 & 7;
          bVar20 = true;
/*  stripping the watermark breaks the license  */
        }
        uVar31 = (ulong)uVar49;
        puVar51 = (ulong *)((long)puVar51 - (ulong)uVar36);
        uVar29 = *puVar51;
        if (((ulong *)((long)puVar34 - 9U) <= param_1) || (!bVar20)) goto LAB_002f5000;
        puVar9 = param_5 + ((uVar29 << (uVar31 & 0x3f)) >> uVar28) + 1;
        *(short *)param_1 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar29 << ((ulong)uVar49 & 0x3f)) >> uVar28) + 1;
        *puVar4 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar29 << ((ulong)uVar49 & 0x3f)) >> uVar28) + 1;
        *puVar4 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
/* chat: discord.gg/sdkhDjTex */
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar29 << ((ulong)uVar49 & 0x3f)) >> uVar28) + 1;
        *puVar4 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar29 << ((ulong)uVar49 & 0x3f)) >> uVar28) + 1;
        *puVar4 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
        uVar31 = (ulong)uVar49;
        param_1 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      } while (uVar49 < 0x41);
    }
    else {
      if (0x40 < uVar28) {
LAB_002f5f5c:
        puVar51 = (ulong *)&UNK_01ade400;
        goto LAB_002f5000;
      }
      uVar28 = -uVar32 & 0x3f;
      do {
        uVar49 = (uint)uVar31;
        if (puVar51 < puVar33) {
          if (puVar51 == puVar1) goto LAB_002f4fe8;
          bVar20 = puVar1 <= (ulong *)((long)puVar51 - (uVar31 >> 3));
          uVar36 = (uint)(uVar31 >> 3);
/* more drops soon - github.com/pengussy */
          if (!bVar20) {
            uVar36 = (int)puVar51 - iVar27;
          }
          uVar49 = uVar49 + uVar36 * -8;
        }
        else {
          uVar36 = uVar49 >> 3;
          uVar49 = uVar49 & 7;
          bVar20 = true;
        }
        uVar31 = (ulong)uVar49;
        puVar51 = (ulong *)((long)puVar51 - (ulong)uVar36);
        uVar29 = *puVar51;
        if (((ulong *)((long)puVar34 - 7U) <= param_1) || (!bVar20)) goto LAB_002f5000;
        puVar9 = param_5 + ((uVar29 << (uVar31 & 0x3f)) >> uVar28) + 1;
        *(short *)param_1 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar29 << ((ulong)uVar49 & 0x3f)) >> uVar28) + 1;
        *puVar4 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar29 << ((ulong)uVar49 & 0x3f)) >> uVar28) + 1;
        *puVar4 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar29 << ((ulong)uVar49 & 0x3f)) >> uVar28) + 1;
        *puVar4 = (short)*puVar9;
        uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
/* WM - found on a paste site? it was re-uploaded illegally */
        uVar31 = (ulong)uVar49;
        param_1 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      } while (uVar49 < 0x41);
    }
    puVar51 = (ulong *)&UNK_01ade400;
  }
LAB_002f5000:
  if (1 < (ulong)((long)puVar34 - (long)param_1)) {
    uVar28 = (uint)uVar31;
    puVar23 = puVar51;
    while (uVar28 < 0x41) {
      uVar28 = (uint)uVar31;
      if (puVar23 < puVar33) {
        puVar51 = puVar1;
        if (puVar23 == puVar1) goto joined_r0x002f50b8;
        bVar20 = puVar1 <= (ulong *)((long)puVar23 - (uVar31 >> 3));
        uVar49 = (uint)(uVar31 >> 3);
        if (!bVar20) {
          uVar49 = (int)puVar23 - iVar27;
        }
        uVar28 = uVar28 + uVar49 * -8;
      }
      else {
        uVar49 = uVar28 >> 3;
        uVar28 = uVar28 & 7;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        bVar20 = true;
      }
      uVar31 = (ulong)uVar28;
      puVar23 = (ulong *)((long)puVar23 - (ulong)uVar49);
      uVar29 = *puVar23;
      puVar51 = puVar23;
      if (((ulong *)((long)puVar34 - 2U) < param_1) || (!bVar20)) goto joined_r0x002f50b8;
      puVar9 = param_5 + ((uVar29 << (uVar31 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
      *(short *)param_1 = (short)*puVar9;
      uVar28 = uVar28 + *(byte *)((long)puVar9 + 2);
      uVar31 = (ulong)uVar28;
      param_1 = (ulong *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3));
    }
    puVar51 = (ulong *)&UNK_01ade400;
joined_r0x002f50b8:
    for (; param_1 <= (ulong *)((long)puVar34 - 2U);
        param_1 = (ulong *)((long)param_1 + (ulong)*(byte *)((long)puVar9 + 3))) {
      puVar9 = param_5 + ((uVar29 << (uVar31 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
      *(short *)param_1 = (short)*puVar9;
      uVar31 = (ulong)((int)uVar31 + (uint)*(byte *)((long)puVar9 + 2));
    }
  }
  uVar28 = (uint)uVar31;
  if (param_1 < puVar34) {
    puVar9 = param_5 + ((uVar29 << (uVar31 & 0x3f)) >> ((ulong)-uVar32 & 0x3f)) + 1;
    *(char *)param_1 = (char)*puVar9;
    if (*(char *)((long)puVar9 + 3) == '\x01') {
/* proprietary - see LICENSE - do not sell */
      uVar28 = uVar28 + *(byte *)((long)puVar9 + 2);
    }
    else if ((uVar28 < 0x40) && (uVar28 = uVar28 + *(byte *)((long)puVar9 + 2), 0x3f < uVar28)) {
      uVar28 = 0x40;
    }
  }
  iVar27 = (int)puVar30;
  uVar49 = (uint)uVar46;
  if ((ulong)((long)puVar22 - (long)puVar43) < 8) {
    if (0x40 < uVar49) goto LAB_002f556c;
    if (puStack_128 < puVar42) {
      puVar34 = puVar30;
      if (puStack_128 == puVar30) goto joined_r0x002f5458;
      uVar36 = (int)puStack_128 - iVar27;
      if (puVar30 <= (ulong *)((long)puStack_128 - (ulong)(uVar49 >> 3))) {
        uVar36 = uVar49 >> 3;
      }
      uVar49 = uVar49 + uVar36 * -8;
    }
    else {
      uVar36 = uVar49 >> 3;
      uVar49 = uVar49 & 7;
    }
    uVar46 = (ulong)uVar49;
    uVar48 = *(ulong *)((long)puStack_128 - (ulong)uVar36);
    puVar34 = (ulong *)((long)puStack_128 - (ulong)uVar36);
  }
  else {
    if (uVar37 < 0xc) {
      if (0x40 < uVar49) goto LAB_002f556c;
      uVar49 = -uVar32 & 0x3f;
      do {
        uVar36 = (uint)uVar46;
        if (puStack_128 < puVar42) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          puVar34 = puVar30;
          if (puStack_128 == puVar30) goto joined_r0x002f5458;
          bVar20 = puVar30 <= (ulong *)((long)puStack_128 - (uVar46 >> 3));
          uVar35 = (uint)(uVar46 >> 3);
          if (!bVar20) {
            uVar35 = (int)puStack_128 - iVar27;
          }
          uVar36 = uVar36 + uVar35 * -8;
        }
        else {
          uVar35 = uVar36 >> 3;
          uVar36 = uVar36 & 7;
          bVar20 = true;
        }
        uVar46 = (ulong)uVar36;
        puStack_128 = (ulong *)((long)puStack_128 - (ulong)uVar35);
        uVar48 = *puStack_128;
        puVar34 = puStack_128;
        if (((ulong *)((long)puVar22 - 9U) <= puVar43) || (!bVar20)) goto joined_r0x002f5458;
        puVar9 = param_5 + ((uVar48 << (uVar46 & 0x3f)) >> uVar49) + 1;
        *(short *)puVar43 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar43 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar48 << ((ulong)uVar36 & 0x3f)) >> uVar49) + 1;
// stripping the watermark breaks the license
        *puVar4 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar48 << ((ulong)uVar36 & 0x3f)) >> uVar49) + 1;
        *puVar4 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar48 << ((ulong)uVar36 & 0x3f)) >> uVar49) + 1;
        *puVar4 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar48 << ((ulong)uVar36 & 0x3f)) >> uVar49) + 1;
        *puVar4 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        uVar46 = (ulong)uVar36;
        puVar43 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      } while (uVar36 < 0x41);
    }
    else {
      if (0x40 < uVar49) {
LAB_002f556c:
        puVar34 = (ulong *)&UNK_01ade400;
        goto joined_r0x002f5458;
      }
      uVar49 = -uVar32 & 0x3f;
      do {
        uVar36 = (uint)uVar46;
        if (puStack_128 < puVar42) {
          puVar34 = puVar30;
          if (puStack_128 == puVar30) goto joined_r0x002f5458;
          bVar20 = puVar30 <= (ulong *)((long)puStack_128 - (uVar46 >> 3));
          uVar35 = (uint)(uVar46 >> 3);
// no support for modified copies
          if (!bVar20) {
            uVar35 = (int)puStack_128 - iVar27;
          }
          uVar36 = uVar36 + uVar35 * -8;
        }
        else {
          uVar35 = uVar36 >> 3;
          uVar36 = uVar36 & 7;
          bVar20 = true;
        }
        uVar46 = (ulong)uVar36;
        puStack_128 = (ulong *)((long)puStack_128 - (ulong)uVar35);
        uVar48 = *puStack_128;
        puVar34 = puStack_128;
        if (((ulong *)((long)puVar22 - 7U) <= puVar43) || (!bVar20)) goto joined_r0x002f5458;
        puVar9 = param_5 + ((uVar48 << (uVar46 & 0x3f)) >> uVar49) + 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        *(short *)puVar43 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar43 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar48 << ((ulong)uVar36 & 0x3f)) >> uVar49) + 1;
        *puVar4 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar48 << ((ulong)uVar36 & 0x3f)) >> uVar49) + 1;
        *puVar4 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((uVar48 << ((ulong)uVar36 & 0x3f)) >> uVar49) + 1;
        *puVar4 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        uVar46 = (ulong)uVar36;
        puVar43 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      } while (uVar36 < 0x41);
    }
    puVar34 = (ulong *)&UNK_01ade400;
  }
joined_r0x002f5458:
  if (1 < (ulong)((long)puVar22 - (long)puVar43)) {
    uVar49 = (uint)uVar46;
    puVar33 = puVar34;
    while (uVar49 < 0x41) {
      uVar49 = (uint)uVar46;
      if (puVar33 < puVar42) {
        puVar34 = puVar30;
        if (puVar33 == puVar30) goto joined_r0x002f5524;
/* WM - origin: github.com/pengussy */
        bVar20 = puVar30 <= (ulong *)((long)puVar33 - (uVar46 >> 3));
        uVar36 = (uint)(uVar46 >> 3);
        if (!bVar20) {
          uVar36 = (int)puVar33 - iVar27;
        }
        uVar49 = uVar49 + uVar36 * -8;
      }
      else {
        uVar36 = uVar49 >> 3;
        uVar49 = uVar49 & 7;
        bVar20 = true;
      }
      uVar46 = (ulong)uVar49;
      puVar33 = (ulong *)((long)puVar33 - (ulong)uVar36);
      uVar48 = *puVar33;
      puVar34 = puVar33;
      if (((ulong *)((long)puVar22 - 2U) < puVar43) || (!bVar20)) goto joined_r0x002f5524;
      puVar9 = param_5 + ((uVar48 << (uVar46 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      *(short *)puVar43 = (short)*puVar9;
      uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
      uVar46 = (ulong)uVar49;
      puVar43 = (ulong *)((long)puVar43 + (ulong)*(byte *)((long)puVar9 + 3));
    }
    puVar34 = (ulong *)&UNK_01ade400;
joined_r0x002f5524:
    for (; puVar43 <= (ulong *)((long)puVar22 - 2U);
        puVar43 = (ulong *)((long)puVar43 + (ulong)*(byte *)((long)puVar9 + 3))) {
      puVar9 = param_5 + ((uVar48 << (uVar46 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
      *(short *)puVar43 = (short)*puVar9;
      uVar46 = (ulong)((int)uVar46 + (uint)*(byte *)((long)puVar9 + 2));
    }
  }
  uVar49 = (uint)uVar46;
  if (puVar43 < puVar22) {
    puVar9 = param_5 + ((uVar48 << (uVar46 & 0x3f)) >> ((ulong)-uVar32 & 0x3f)) + 1;
    *(char *)puVar43 = (char)*puVar9;
    if (*(char *)((long)puVar9 + 3) == '\x01') {
      uVar49 = uVar49 + *(byte *)((long)puVar9 + 2);
    }
    else if ((uVar49 < 0x40) && (uVar49 = uVar49 + *(byte *)((long)puVar9 + 2), 0x3f < uVar49)) {
      uVar49 = 0x40;
    }
  }
  iVar27 = (int)puVar10;
  uVar36 = (uint)uStack_110;
  if ((ulong)((long)puVar25 - (long)puVar41) < 8) {
    if (0x40 < uVar36) goto LAB_002f5a08;
    if (puStack_178 < puVar2) {
/* wm:donate: donate/README.md */
      puVar22 = puVar10;
      if (puStack_178 == puVar10) goto joined_r0x002f58c4;
      uVar35 = (int)puStack_178 - iVar27;
      if (puVar10 <= (ulong *)((long)puStack_178 - (uStack_110 >> 3))) {
        uVar35 = (uint)(uStack_110 >> 3);
      }
      uVar21 = (ulong)uVar35;
      uVar36 = uVar36 + uVar35 * -8;
    }
    else {
      uVar21 = uStack_110 >> 3;
      uVar36 = uVar36 & 7;
    }
    uStack_110 = (ulong)uVar36;
    puVar22 = (ulong *)((long)puStack_178 - uVar21);
    uStack_120 = *puVar22;
joined_r0x002f58f0:
    if (1 < (ulong)((long)puVar25 - (long)puVar41)) {
LAB_002f58f4:
      puVar42 = (ulong *)((long)puVar25 - 2);
      uVar36 = (uint)uStack_110;
      puVar33 = puVar22;
      while (uVar36 < 0x41) {
/* wm:proprietary - see LICENSE - do not sell */
        uVar36 = (uint)uStack_110;
        if (puVar33 < puVar2) {
          puVar22 = puVar10;
          if (puVar33 == puVar10) goto joined_r0x002f59d0;
          bVar20 = puVar10 <= (ulong *)((long)puVar33 - (uStack_110 >> 3));
          uVar35 = (uint)(uStack_110 >> 3);
          if (!bVar20) {
            uVar35 = (int)puVar33 - iVar27;
          }
          uVar36 = uVar36 + uVar35 * -8;
        }
        else {
          uVar35 = uVar36 >> 3;
          uVar36 = uVar36 & 7;
          bVar20 = true;
        }
        uStack_110 = (ulong)uVar36;
        puVar22 = (ulong *)((long)puVar33 - (ulong)uVar35);
        uStack_120 = *puVar22;
        if ((puVar42 < puVar41) || (!bVar20)) goto joined_r0x002f59d0;
        puVar9 = param_5 + ((uStack_120 << (uStack_110 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
        *(short *)puVar41 = (short)*puVar9;
        uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
        uStack_110 = (ulong)uVar36;
        puVar41 = (ulong *)((long)puVar41 + (ulong)*(byte *)((long)puVar9 + 3));
/* wm:found on a paste site? it was re-uploaded illegally */
        puVar33 = puVar22;
      }
      puVar22 = (ulong *)&UNK_01ade400;
joined_r0x002f59d0:
      if (puVar41 <= puVar42) {
        do {
          puVar9 = param_5 + ((uStack_120 << (uStack_110 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
          *(short *)puVar41 = (short)*puVar9;
          uStack_110 = (ulong)((int)uStack_110 + (uint)*(byte *)((long)puVar9 + 2));
          puVar41 = (ulong *)((long)puVar41 + (ulong)*(byte *)((long)puVar9 + 3));
        } while (puVar41 <= puVar42);
      }
    }
  }
  else {
    if (0xb < uVar37) {
      if (uVar36 < 0x41) {
        uVar36 = -uVar32 & 0x3f;
        do {
          uVar35 = (uint)uStack_110;
          if (puStack_178 < puVar2) {
            puVar22 = puVar10;
            if (puStack_178 == puVar10) goto joined_r0x002f58c4;
            bVar20 = puVar10 <= (ulong *)((long)puStack_178 - (uStack_110 >> 3));
            uVar24 = (uint)(uStack_110 >> 3);
            if (!bVar20) {
              uVar24 = (int)puStack_178 - iVar27;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            }
            uVar35 = uVar35 + uVar24 * -8;
          }
          else {
            uVar24 = uVar35 >> 3;
            uVar35 = uVar35 & 7;
            bVar20 = true;
          }
          uStack_110 = (ulong)uVar35;
          puStack_178 = (ulong *)((long)puStack_178 - (ulong)uVar24);
          uStack_120 = *puStack_178;
          puVar22 = puStack_178;
          if (((ulong *)((long)puVar25 - 7U) <= puVar41) || (!bVar20)) goto joined_r0x002f58c4;
          puVar9 = param_5 + ((uStack_120 << (uStack_110 & 0x3f)) >> uVar36) + 1;
          *(short *)puVar41 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          puVar4 = (undefined2 *)((long)puVar41 + (ulong)*(byte *)((long)puVar9 + 3));
          puVar9 = param_5 + ((uStack_120 << ((ulong)uVar35 & 0x3f)) >> uVar36) + 1;
          *puVar4 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
          puVar9 = param_5 + ((uStack_120 << ((ulong)uVar35 & 0x3f)) >> uVar36) + 1;
/* WM - chat: discord.gg/sdkhDjTex */
          *puVar4 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
          puVar9 = param_5 + ((uStack_120 << ((ulong)uVar35 & 0x3f)) >> uVar36) + 1;
          *puVar4 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          uStack_110 = (ulong)uVar35;
          puVar41 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        } while (uVar35 < 0x41);
        goto LAB_002f5884;
      }
LAB_002f5a08:
      puVar22 = (ulong *)&UNK_01ade400;
      goto joined_r0x002f58f0;
    }
    if (0x40 < uVar36) goto LAB_002f5a08;
    uVar36 = -uVar32 & 0x3f;
    do {
      uVar35 = (uint)uStack_110;
      if (puStack_178 < puVar2) {
        puVar22 = puVar10;
        if (puStack_178 == puVar10) goto joined_r0x002f58c4;
        bVar20 = puVar10 <= (ulong *)((long)puStack_178 - (uStack_110 >> 3));
        uVar24 = (uint)(uStack_110 >> 3);
        if (!bVar20) {
          uVar24 = (int)puStack_178 - iVar27;
        }
        uVar35 = uVar35 + uVar24 * -8;
      }
      else {
        uVar24 = uVar35 >> 3;
        uVar35 = uVar35 & 7;
        bVar20 = true;
      }
      uStack_110 = (ulong)uVar35;
      puStack_178 = (ulong *)((long)puStack_178 - (ulong)uVar24);
      uStack_120 = *puStack_178;
      puVar22 = puStack_178;
/* wm:chat: discord.gg/sdkhDjTex */
      if (((ulong *)((long)puVar25 - 9U) <= puVar41) || (!bVar20)) goto joined_r0x002f58c4;
      puVar9 = param_5 + ((uStack_120 << (uStack_110 & 0x3f)) >> uVar36) + 1;
      *(short *)puVar41 = (short)*puVar9;
      uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
      puVar4 = (undefined2 *)((long)puVar41 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uStack_120 << ((ulong)uVar35 & 0x3f)) >> uVar36) + 1;
      *puVar4 = (short)*puVar9;
      uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
      puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uStack_120 << ((ulong)uVar35 & 0x3f)) >> uVar36) + 1;
      *puVar4 = (short)*puVar9;
      uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
      puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uStack_120 << ((ulong)uVar35 & 0x3f)) >> uVar36) + 1;
      *puVar4 = (short)*puVar9;
      uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
      puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      puVar9 = param_5 + ((uStack_120 << ((ulong)uVar35 & 0x3f)) >> uVar36) + 1;
      *puVar4 = (short)*puVar9;
      uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
      uStack_110 = (ulong)uVar35;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      puVar41 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
    } while (uVar35 < 0x41);
LAB_002f5884:
    puVar22 = (ulong *)&UNK_01ade400;
joined_r0x002f58c4:
    if (1 < (ulong)((long)puVar25 - (long)puVar41)) goto LAB_002f58f4;
  }
  uVar36 = (uint)uStack_110;
  if (puVar41 < puVar25) {
    puVar9 = param_5 + ((uStack_120 << (uStack_110 & 0x3f)) >> ((ulong)-uVar32 & 0x3f)) + 1;
    *(char *)puVar41 = (char)*puVar9;
    if (*(char *)((long)puVar9 + 3) == '\x01') {
      uVar36 = uVar36 + *(byte *)((long)puVar9 + 2);
    }
    else if ((uVar36 < 0x40) && (uVar36 = uVar36 + *(byte *)((long)puVar9 + 2), 0x3f < uVar36)) {
      uVar36 = 0x40;
/* keep the notice, keep the source honest */
    }
  }
  iVar27 = (int)puStack_e8;
  if ((ulong)((long)puVar3 - (long)puVar39) < 8) {
    uVar21 = (ulong)puStack_f8 & 0xffffffff;
    if ((uint)puStack_f8 < 0x41) {
      if (puStack_f0 < apuStack_e0[0]) {
        if (puStack_f0 == puStack_e8) {
LAB_002f5e0c:
          uVar37 = (uint)puStack_f8;
          puVar25 = puStack_f8;
          goto joined_r0x002f5e00;
        }
        uVar35 = (int)puStack_f0 - iVar27;
        if (puStack_e8 <= (ulong *)((long)puStack_f0 - (ulong)((uint)puStack_f8 >> 3))) {
          uVar35 = (uint)puStack_f8 >> 3;
        }
        uVar37 = (uint)puStack_f8 + uVar35 * -8;
      }
      else {
        uVar35 = (uint)puStack_f8 >> 3;
        uVar37 = (uint)puStack_f8 & 7;
      }
      puStack_f0 = (ulong *)((long)puStack_f0 - (ulong)uVar35);
      uVar21 = (ulong)uVar37;
      puStack_f8 = (ulong *)(ulong)uVar37;
      puStack_100 = (ulong *)*puStack_f0;
      puVar25 = puStack_f8;
    }
    else {
      puStack_f0 = (ulong *)&UNK_01ade400;
      uVar37 = (uint)puStack_f8;
      puVar25 = puStack_f8;
/* no support for modified copies - github.com/pengussy */
    }
  }
  else {
    uVar21 = (ulong)puStack_f8 & 0xffffffff;
    if (uVar37 < 0xc) {
      if ((uint)puStack_f8 < 0x41) {
        uVar37 = -uVar32 & 0x3f;
        do {
          uVar35 = (uint)uVar21;
          if (puStack_f0 < apuStack_e0[0]) {
            if (puStack_f0 == puStack_e8) goto LAB_002f5e0c;
            bVar20 = puStack_e8 <= (ulong *)((long)puStack_f0 - (uVar21 >> 3));
            uVar24 = (uint)(uVar21 >> 3);
            if (!bVar20) {
              uVar24 = (int)puStack_f0 - iVar27;
            }
            uVar35 = uVar35 + uVar24 * -8;
          }
          else {
            uVar24 = uVar35 >> 3;
            uVar35 = uVar35 & 7;
            bVar20 = true;
          }
          puStack_f0 = (ulong *)((long)puStack_f0 - (ulong)uVar24);
          uVar21 = (ulong)uVar35;
          puStack_f8 = (ulong *)(ulong)uVar35;
          puStack_100 = (ulong *)*puStack_f0;
          if (((ulong *)((long)puVar3 - 9U) <= puVar39) || (!bVar20)) goto LAB_002f5dcc;
          puVar9 = param_5 + ((ulong)((long)puStack_100 << (uVar21 & 0x3f)) >> uVar37) + 1;
          *(short *)puVar39 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          puVar4 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar9 + 3));
          puVar9 = param_5 + ((ulong)((long)puStack_100 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
          *puVar4 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
// WM - stripping the watermark breaks the license
          puVar9 = param_5 + ((ulong)((long)puStack_100 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
          *puVar4 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
          puVar9 = param_5 + ((ulong)((long)puStack_100 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
          *puVar4 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
          puVar9 = param_5 + ((ulong)((long)puStack_100 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
          *puVar4 = (short)*puVar9;
          uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
          uVar21 = (ulong)uVar35;
          puStack_f8 = (ulong *)(ulong)uVar35;
          puVar39 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        } while (uVar35 < 0x41);
      }
    }
    else if ((uint)puStack_f8 < 0x41) {
      uVar37 = -uVar32 & 0x3f;
      do {
        uVar35 = (uint)uVar21;
        if (puStack_f0 < apuStack_e0[0]) {
          if (puStack_f0 == puStack_e8) goto LAB_002f5e0c;
          bVar20 = puStack_e8 <= (ulong *)((long)puStack_f0 - (uVar21 >> 3));
          uVar24 = (uint)(uVar21 >> 3);
          if (!bVar20) {
            uVar24 = (int)puStack_f0 - iVar27;
          }
          uVar35 = uVar35 + uVar24 * -8;
        }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        else {
          uVar24 = uVar35 >> 3;
          uVar35 = uVar35 & 7;
          bVar20 = true;
        }
        puStack_f0 = (ulong *)((long)puStack_f0 - (ulong)uVar24);
        uVar21 = (ulong)uVar35;
        puStack_f8 = (ulong *)(ulong)uVar35;
        puStack_100 = (ulong *)*puStack_f0;
        if ((puVar38 <= puVar39) || (!bVar20)) goto LAB_002f5dcc;
        puVar9 = param_5 + ((ulong)((long)puStack_100 << (uVar21 & 0x3f)) >> uVar37) + 1;
        *(short *)puVar39 = (short)*puVar9;
        uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar39 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((ulong)((long)puStack_100 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
        *puVar4 = (short)*puVar9;
        uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((ulong)((long)puStack_100 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
        *puVar4 = (short)*puVar9;
        uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
        puVar4 = (undefined2 *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
        puVar9 = param_5 + ((ulong)((long)puStack_100 << ((ulong)uVar35 & 0x3f)) >> uVar37) + 1;
        *puVar4 = (short)*puVar9;
        uVar35 = uVar35 + *(byte *)((long)puVar9 + 2);
        uVar21 = (ulong)uVar35;
        puStack_f8 = (ulong *)(ulong)uVar35;
        puVar39 = (ulong *)((long)puVar4 + (ulong)*(byte *)((long)puVar9 + 3));
      } while (uVar35 < 0x41);
    }
    puStack_f0 = (ulong *)&UNK_01ade400;
    uVar37 = (uint)puStack_f8;
    puVar25 = puStack_f8;
  }
joined_r0x002f5e00:
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  puStack_f8._0_4_ = uVar37;
  if (1 < (ulong)((long)puVar3 - (long)puVar39)) {
    uVar37 = (uint)uVar21;
    puStack_f8 = puVar25;
    while (uVar37 < 0x41) {
      uVar37 = (uint)uVar21;
      if (puStack_f0 < apuStack_e0[0]) {
        if (puStack_f0 == puStack_e8) goto LAB_002f5f14;
        bVar20 = puStack_e8 <= (ulong *)((long)puStack_f0 - (uVar21 >> 3));
        uVar35 = (uint)(uVar21 >> 3);
        if (!bVar20) {
          uVar35 = (int)puStack_f0 - iVar27;
        }
        uVar37 = uVar37 + uVar35 * -8;
      }
      else {
        uVar35 = uVar37 >> 3;
        uVar37 = uVar37 & 7;
        bVar20 = true;
      }
      puStack_f0 = (ulong *)((long)puStack_f0 - (ulong)uVar35);
      uVar21 = (ulong)uVar37;
/*  unlicensed copy if this notice is missing  */
      puStack_f8 = (ulong *)(ulong)uVar37;
      puStack_100 = (ulong *)*puStack_f0;
      if (((ulong *)((long)puVar3 - 2U) < puVar39) || (!bVar20)) goto LAB_002f5f14;
      puVar9 = param_5 + ((ulong)((long)puStack_100 << (uVar21 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
      *(short *)puVar39 = (short)*puVar9;
      uVar37 = uVar37 + *(byte *)((long)puVar9 + 2);
      uVar21 = (ulong)uVar37;
      puStack_f8 = (ulong *)(ulong)uVar37;
      puVar39 = (ulong *)((long)puVar39 + (ulong)*(byte *)((long)puVar9 + 3));
    }
    puStack_f0 = (ulong *)&UNK_01ade400;
LAB_002f5f14:
    for (; puVar39 <= (ulong *)((long)puVar3 - 2U);
        puVar39 = (ulong *)((long)puVar39 + (ulong)*(byte *)((long)puVar9 + 3))) {
      puVar9 = param_5 + ((ulong)((long)puStack_100 << (uVar21 & 0x3f)) >> (-uVar32 & 0x3f)) + 1;
      *(short *)puVar39 = (short)*puVar9;
      puStack_f8._0_4_ = (uint)puStack_f8 + *(byte *)((long)puVar9 + 2);
      uVar21 = (ulong)(uint)puStack_f8;
      puStack_f8 = (ulong *)(ulong)(uint)puStack_f8;
    }
  }
  uVar37 = (uint)uVar21;
  if (puVar39 < puVar3) {
    param_5 = param_5 + ((ulong)((long)puStack_100 << (uVar21 & 0x3f)) >> ((ulong)-uVar32 & 0x3f)) +
                        1;
    *(char *)puVar39 = (char)*param_5;
    if (*(char *)((long)param_5 + 3) == '\x01') {
      uVar37 = (uint)puStack_f8 + *(byte *)((long)param_5 + 2);
    }
    else {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar37 = (uint)puStack_f8;
      if (((uint)puStack_f8 < 0x40) &&
         (uVar37 = (uint)puStack_f8 + *(byte *)((long)param_5 + 2), 0x3f < uVar37)) {
        uVar37 = 0x40;
      }
    }
  }
  uVar21 = 0xffffffffffffffec;
  if (((((((uVar37 == 0x40 && puStack_f0 == puStack_e8) && uVar36 == 0x40) && puVar22 == puVar10) &&
        uVar49 == 0x40) && puVar34 == puVar30) && uVar28 == 0x40) && puVar51 == puVar1) {
    uVar21 = param_2;
  }
  return uVar21;
LAB_002f5dcc:
  uVar37 = (uint)puStack_f8;
  puVar25 = puStack_f8;
  goto joined_r0x002f5e00;
}
/* WM - keep the notice, keep the source honest */

