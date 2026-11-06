/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x337c14:d55d0f1ed6
 */

void FUN_00337c14(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
/* origin: github.com/pengussy */
  uint uVar15;
  int iVar16;
  short sVar17;
  uint uVar18;
  char cVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  undefined2 uVar27;
  undefined4 *puVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
/* wm:more drops soon - github.com/pengussy */
  float fVar41;
  float fVar42;
  float fVar43;
  int iStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  float fStack_a4;
  
  lVar6 = lRam00000000020973e0;
  uVar12 = param_1[1];
  *(undefined1 *)((long)param_1 + 0x242) = 1;
  *(undefined2 *)((long)param_1 + 0x202) = 0;
  uVar15 = param_1[0x1b] + 0x1f >> 5;
  _bzero(*(undefined8 *)(param_1 + 0x14),
         -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2);
  uVar15 = param_1[0x1b] + 0x1f >> 5;
  _bzero(*(undefined8 *)(param_1 + 0x12),
         -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2);
  uVar27 = 0xffff;
  *(undefined2 *)((long)param_1 + 0x21e) = 0xffff;
  fVar34 = 1.0;
  if (1.0 < *(float *)(lVar6 + 0xcc4)) {
    fVar34 = *(float *)(lVar6 + 0xcc4);
  }
  param_1[0x2e] = fVar34;
  uVar15 = param_1[0x1b];
  if ((int)uVar15 < 1) {
    bVar5 = 0;
    bVar10 = false;
    sVar17 = 0;
    fVar34 = 0.0;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    fVar39 = 0.0;
    fVar30 = 0.0;
    uVar18 = param_1[1];
  }
  else {
    iStack_b8 = 0;
    sVar17 = 0;
    lVar29 = 0;
    bVar10 = false;
    bVar5 = 0;
    fVar39 = 0.0;
    fVar34 = 0.0;
    lVar22 = 0xffffffff;
LAB_00337d00:
    do {
      sVar4 = *(short *)(*(long *)(param_1 + 10) + lVar29 * 2);
      lVar26 = (long)sVar4;
      uVar15 = (uint)sVar4;
      if (lVar29 == lVar26) {
        puVar25 = (uint *)(*(long *)(param_1 + 6) + (long)(int)uVar15 * 0x74);
        if ((int)uVar15 < (int)*(short *)((long)param_1 + 0x206)) goto LAB_00337d24;
LAB_00337d48:
        func_0x00338df4(param_1,puVar25,0);
        *(undefined2 *)(puVar25 + 0x15) = 0xffff;
        puVar25[0xd] = 0;
        puVar25[8] = 0xbf800000;
        uVar18 = param_1[1];
        if ((uVar18 >> 2 & 1) == 0) goto LAB_00337d94;
// origin: github.com/pengussy
LAB_00337d78:
        if ((char)*puVar25 < '\0') goto LAB_00337d94;
        cVar19 = (char)puVar25[0x1a];
        if (*(char *)((long)puVar25 + 0x67) != cVar19) goto LAB_00337da8;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x242) = 0;
        puVar25 = (uint *)(*(long *)(param_1 + 6) + (long)(int)uVar15 * 0x74);
        if ((int)*(short *)((long)param_1 + 0x206) <= (int)uVar15) goto LAB_00337d48;
LAB_00337d24:
        uVar18 = param_1[1];
        if ((uVar18 >> 2 & 1) != 0) goto LAB_00337d78;
LAB_00337d94:
        cVar19 = '\x01';
        *(undefined1 *)(puVar25 + 0x1a) = 1;
        if (*(char *)((long)puVar25 + 0x67) != '\x01') {
LAB_00337da8:
          *(char *)((long)puVar25 + 0x67) = cVar19;
          *(undefined1 *)((long)param_1 + 0x241) = 1;
        }
      }
      bVar9 = false;
      if (cVar19 != '\0') {
        bVar9 = (*puVar25 & 1) == 0;
      }
      *(bool *)((long)puVar25 + 0x66) = bVar9;
      if ((!(0 < *(short *)((long)puVar25 + 0x5e) && (uVar18 & 0x4000000) == 0)) &&
         (!(*(short *)((long)puVar25 + 0x5e) != -1 && bVar9 == false))) {
        lVar24 = 0x1c;
        if ((*puVar25 & 0x10) != 0) {
          lVar24 = 0x10;
// WM - chat: discord.gg/sdkhDjTex
        }
        if (0.0 <= *(float *)((long)puVar25 + lVar24)) goto LAB_00337e04;
LAB_00337e28:
        *(undefined2 *)((long)puVar25 + 0x6f) = 0x707;
        if (bVar9 == false) goto LAB_00337cec;
LAB_00337e34:
        *(short *)((long)puVar25 + 0x5a) = (short)lVar22;
        *(undefined2 *)(puVar25 + 0x17) = 0xffff;
        if ((int)lVar22 == -1) {
          *(short *)((long)param_1 + 0x21e) = sVar4;
        }
        else {
          *(short *)(*(long *)(param_1 + 6) + (long)(int)lVar22 * 0x74 + 0x5c) = sVar4;
        }
        sVar4 = *(short *)((long)param_1 + 0x202);
        *(short *)((long)param_1 + 0x202) = sVar4 + 1;
        *(short *)(puVar25 + 0x16) = sVar4;
        lVar22 = *(long *)(param_1 + 0x12);
        *(uint *)(*(long *)(param_1 + 0x14) + (long)((int)uVar15 >> 5) * 4) =
/* wm:thanks for reading - discord.gg/sdkhDjTex */
             *(uint *)(*(long *)(param_1 + 0x14) + (long)((int)uVar15 >> 5) * 4) |
             1 << (ulong)(uVar15 & 0x1f);
        iVar11 = (int)*(short *)((long)puVar25 + 0x56) >> 5;
        *(uint *)(lVar22 + (long)iVar11 * 4) =
             1 << (ulong)((int)*(short *)((long)puVar25 + 0x56) & 0x1f) |
             *(uint *)(lVar22 + (long)iVar11 * 4);
        if (*(char *)((long)puVar25 + 0x6d) == '\x01') {
          uVar15 = *puVar25;
        }
        else {
          uVar15 = *puVar25;
          if (*(short *)(param_1 + 0x1e) == 0) {
            fVar30 = (float)puVar25[0x11];
            if ((float)puVar25[0x11] < (float)puVar25[0x12]) {
              fVar30 = (float)puVar25[0x12];
            }
            fVar30 = fVar30 - (float)puVar25[0xe];
            if ((uVar15 >> 0xd & 1) == 0) {
              fVar32 = (float)puVar25[0x14] - (float)puVar25[0xe];
              if (fVar30 < fVar32) {
                fVar30 = fVar32;
              }
            }
            if ((uVar15 >> 4 & 1) != 0) {
              if ((0.0 < (float)puVar25[8]) &&
                 (((uVar15 & 0x20) == 0 & *(byte *)(param_1 + 1)) == 0)) {
                fVar30 = (float)puVar25[8];
              }
            }
            if (fVar30 < (float)param_1[0x2e]) {
              fVar30 = (float)param_1[0x2e];
            }
            puVar25[5] = (uint)fVar30;
          }
        }
        if ((((uVar15 >> 4 & 1) != 0) && ((uVar15 >> 5 & 1) != 0)) && (0.0 < (float)puVar25[8])) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          puVar25[5] = puVar25[8];
        }
        bVar5 = (uVar15 & 0x20) == 0 | bVar5;
        bVar10 = (bool)(*(char *)((long)puVar25 + 0x6f) != '\0' | bVar10);
        fVar30 = (float)puVar25[5];
        lVar22 = lVar26;
        if ((uVar15 >> 3 & 1) == 0) {
          if (fVar34 < fVar30) {
            fVar34 = fVar30;
          }
          sVar17 = sVar17 + 1;
          lVar29 = lVar29 + 1;
          uVar15 = param_1[0x1b];
          if ((int)uVar15 <= lVar29) break;
        }
        else {
          fVar39 = fVar39 + fVar30;
          iStack_b8 = iStack_b8 + 1;
          lVar29 = lVar29 + 1;
          uVar15 = param_1[0x1b];
          if ((int)uVar15 <= lVar29) break;
        }
        goto LAB_00337d00;
      }
      *(undefined1 *)(param_1 + 0x8f) = 1;
      lVar24 = 0x1c;
      if ((*puVar25 & 0x10) != 0) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        lVar24 = 0x10;
      }
      if (*(float *)((long)puVar25 + lVar24) < 0.0) goto LAB_00337e28;
LAB_00337e04:
      if (bVar9 != false) goto LAB_00337e34;
LAB_00337cec:
      *(undefined2 *)(puVar25 + 0x16) = 0xffff;
      lVar29 = lVar29 + 1;
      uVar15 = param_1[0x1b];
      lVar26 = lVar22;
    } while (lVar29 < (int)uVar15);
    uVar27 = (undefined2)lVar26;
    fVar30 = (float)iStack_b8;
    uVar18 = param_1[1];
  }
  if ((((uVar18 >> 3 & 1) != 0) && ((uVar18 >> 0x1b & 1) == 0)) && (*(short *)(param_1 + 0x80) == 0)
     ) {
    *(undefined1 *)(param_1 + 0x8f) = 1;
  }
  *(undefined2 *)(param_1 + 0x88) = uVar27;
  if (bVar10) {
    if (*(long *)(param_1 + 0x60) != *(long *)(param_1 + 0x62)) {
      *(undefined1 *)(*(long *)(param_1 + 0x62) + 0xd1) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x241) = 1;
  }
  *(undefined4 *)((long)param_1 + 0x222) = 0xffffffff;
  fVar32 = 0.0;
  if ((int)uVar15 < 1) {
    bVar10 = true;
    fVar31 = 0.0;
    fVar33 = 0.0;
  }
  else {
    lVar29 = 0;
    uVar20 = 0;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    lVar22 = *(long *)(param_1 + 0x14);
    fVar33 = 0.0;
    uVar13 = 0xffff;
    uVar23 = 0xffff;
    fVar31 = 0.0;
    do {
      if ((*(uint *)(lVar22 + (uVar20 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) !=
          0) {
        lVar26 = *(long *)(param_1 + 6);
        uVar2 = *(uint *)(lVar26 + lVar29);
        if ((uVar2 >> 4 & 1) == 0) {
          lVar24 = lVar26 + lVar29;
          if (((*(char *)(lVar24 + 0x6f) != '\0') || ((uVar2 >> 5 & 1) != 0)) ||
             (fVar36 = *(float *)(lVar24 + 0x1c), fVar36 < 0.0)) {
            fVar36 = *(float *)(lVar24 + 0x20);
            if ((*(float *)(lVar24 + 0x20) <= 0.0) && (fVar36 = 1.0, (uVar12 & 0xe000) == 0x6000)) {
              fVar36 = (*(float *)(lVar26 + lVar29 + 0x14) / fVar39) * fVar30;
            }
            *(float *)(lVar26 + lVar29 + 0x1c) = fVar36;
          }
          if (((((uint)uVar23 ^ 0xffffffff) & 0xffff) == 0) ||
             (*(short *)(lVar26 + lVar29 + 0x56) <
              *(short *)(lVar26 + (long)(int)(short)uVar23 * 0x74 + 0x56))) {
            *(short *)((long)param_1 + 0x222) = (short)uVar20;
            uVar23 = uVar20;
          }
          fVar31 = fVar31 + fVar36;
          if (((((uint)uVar13 ^ 0xffffffff) & 0xffff) == 0) ||
             (*(short *)(lVar26 + (long)(int)(short)uVar13 * 0x74 + 0x56) <
              *(short *)(lVar26 + lVar29 + 0x56))) {
            *(short *)(param_1 + 0x89) = (short)uVar20;
            uVar13 = uVar20;
          }
        }
        else {
          lVar24 = lVar26 + lVar29;
/* WM - reversing this took months of machine time */
          cVar19 = *(char *)(lVar24 + 0x6f);
          fVar36 = *(float *)(lVar24 + 0x14);
          if ((uVar2 & 0x20) != 0 || cVar19 != '\0') {
            fVar36 = fVar34;
          }
          if ((uVar12 & 0xe000) != 0x4000) {
            fVar36 = *(float *)(lVar24 + 0x14);
          }
          if (cVar19 == '\0') {
            if (((uVar2 >> 5 & 1) != 0) && (*(char *)(lVar26 + lVar29 + 0x6b) == '\x01'))
            goto LAB_00338084;
          }
          else {
            *(float *)(lVar24 + 0x10) = fVar36;
            if ((cVar19 != '\x01') &&
               ((*(char *)((long)param_1 + 0x23b) == '\x01' &&
                ((*(byte *)(lVar26 + lVar29 + 0x6d) & 1) == 0)))) {
              if (fVar36 < (float)param_1[0x2e] * 4.0) {
                fVar36 = (float)param_1[0x2e] * 4.0;
              }
LAB_00338084:
              *(float *)(lVar26 + lVar29 + 0x10) = fVar36;
            }
          }
          fVar33 = fVar33 + *(float *)(lVar26 + lVar29 + 0x10);
/* WM - stripping the watermark breaks the license */
        }
        *(undefined1 *)(lVar26 + lVar29 + 0x6d) = 0;
        fVar33 = fVar33 + (float)param_1[0x30] * 2.0;
      }
      uVar20 = uVar20 + 1;
      lVar29 = lVar29 + 0x74;
    } while ((ulong)uVar15 * 0x74 != lVar29);
    bVar10 = (((uint)uVar23 ^ 0xffffffff) & 0xffff) == 0;
  }
  *(short *)(param_1 + 0x81) = sVar17;
  param_1[0x36] = fVar31;
  if (((*(byte *)((long)param_1 + 0x24a) & 1) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x62) + 0xc9) & 1) == 0)) {
    fVar32 = *(float *)(lVar6 + 0xcfc);
  }
  fVar39 = (float)param_1[0x44];
  fVar34 = ((float)param_1[0x31] + (float)param_1[0x32]) *
           (float)(*(short *)((long)param_1 + 0x202) + -1) + (float)param_1[0x2f] * 2.0;
  if (((uVar18 >> 0x18 & 1) == 0) || ((float)param_1[0x33] != 0.0)) {
    fVar30 = (float)param_1[0x46] - fVar39;
  }
  else {
    fVar30 = (float)param_1[0x4a] - (float)param_1[0x48];
  }
  fVar35 = (float)param_1[0x45];
  fVar36 = 1.0;
  if (1.0 < fVar30 - fVar32) {
    fVar36 = fVar30 - fVar32;
  }
  fVar33 = (fVar36 - fVar34) - fVar33;
  fVar34 = fVar34 + (float)(int)*(short *)((long)param_1 + 0x202) *
                    ((float)param_1[0x30] + (float)param_1[0x30]);
  param_1[0x34] = fVar34;
  fVar30 = fVar33;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  if (0 < (int)uVar15) {
    lVar29 = *(long *)(param_1 + 0x14);
    if (uVar15 == 1) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      lVar22 = 0x74;
      do {
        uVar13 = uVar20 >> 5 & 0x7ffffff;
        if ((*(uint *)(lVar29 + uVar13 * 4) >> (ulong)((uint)uVar20 & 0x1e) & 1) != 0) {
          lVar24 = *(long *)(param_1 + 6);
          lVar26 = lVar24 + lVar22;
          if ((*(uint *)(lVar26 + -0x74) >> 3 & 1) != 0) {
            fVar32 = fVar33 * (*(float *)(lVar26 + -0x58) / fVar31);
            if (fVar32 < (float)param_1[0x2e]) {
              fVar32 = (float)param_1[0x2e];
            }
            *(float *)(lVar26 + -100) = (float)(int)(fVar32 + 0.01);
            fVar30 = fVar30 - (float)(int)(fVar32 + 0.01);
          }
          if (*(short *)(lVar26 + -0x18) == -1 && !bVar10) {
            *(uint *)(lVar26 + -0x74) = *(uint *)(lVar26 + -0x74) | 0x40000000;
          }
          lVar24 = lVar24 + lVar22;
          fVar32 = *(float *)(lVar24 + -100);
          if (fVar32 < (float)param_1[0x2e]) {
            fVar32 = (float)param_1[0x2e];
          }
          *(float *)(lVar24 + -0x70) = (float)(int)fVar32;
          fVar34 = fVar34 + (float)(int)fVar32;
          param_1[0x34] = fVar34;
        }
        if ((*(uint *)(lVar29 + uVar13 * 4) >> (ulong)((uint)uVar20 + 1 & 0x1f) & 1) != 0) {
          lVar26 = *(long *)(param_1 + 6);
          uVar12 = *(uint *)(lVar26 + lVar22);
          if ((uVar12 >> 3 & 1) != 0) {
            fVar32 = fVar33 * (*(float *)(lVar26 + lVar22 + 0x1c) / fVar31);
/*  stripping the watermark breaks the license  */
            if (fVar32 < (float)param_1[0x2e]) {
              fVar32 = (float)param_1[0x2e];
            }
            *(float *)(lVar26 + lVar22 + 0x10) = (float)(int)(fVar32 + 0.01);
            fVar30 = fVar30 - (float)(int)(fVar32 + 0.01);
          }
          lVar24 = lVar26 + lVar22;
          if (*(short *)(lVar24 + 0x5c) == -1 && !bVar10) {
            *(uint *)(lVar26 + lVar22) = uVar12 | 0x40000000;
          }
          fVar32 = *(float *)(lVar24 + 0x10);
          if (*(float *)(lVar24 + 0x10) < (float)param_1[0x2e]) {
            fVar32 = (float)param_1[0x2e];
          }
          *(float *)(lVar24 + 4) = (float)(int)fVar32;
          fVar34 = fVar34 + (float)(int)fVar32;
          param_1[0x34] = fVar34;
        }
/*  chat: discord.gg/sdkhDjTex  */
        uVar20 = uVar20 + 2;
        lVar22 = lVar22 + 0xe8;
      } while (((ulong)uVar15 & 0x7ffffffe) != uVar20);
    }
    if (((uVar15 & 1) != 0) &&
       ((*(uint *)(lVar29 + (uVar20 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) != 0
       )) {
      puVar25 = (uint *)(*(long *)(param_1 + 6) + uVar20 * 0x74);
      if ((*puVar25 >> 3 & 1) != 0) {
        fVar33 = fVar33 * ((float)puVar25[7] / fVar31);
        if (fVar33 < (float)param_1[0x2e]) {
          fVar33 = (float)param_1[0x2e];
        }
        puVar25[4] = (uint)(float)(int)(fVar33 + 0.01);
        fVar30 = fVar30 - (float)(int)(fVar33 + 0.01);
      }
      if (!(bool)((short)puVar25[0x17] != -1 | bVar10)) {
        *puVar25 = *puVar25 | 0x40000000;
      }
      fVar32 = (float)puVar25[4];
      if ((float)puVar25[4] < (float)param_1[0x2e]) {
        fVar32 = (float)param_1[0x2e];
      }
      puVar25[1] = (uint)(float)(int)fVar32;
      param_1[0x34] = fVar34 + (float)(int)fVar32;
    }
  }
  if (((((uVar18 >> 0x13 & 1) == 0) && (1.0 <= fVar30)) && (0 < (int)uVar15)) && (0.0 < fVar31)) {
    lVar29 = *(long *)(param_1 + 0x12);
    uVar20 = (ulong)(uVar15 - 1);
/* keep the notice, keep the source honest */
    do {
      if (((*(uint *)(lVar29 + (uVar20 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1)
           != 0) &&
         (pbVar21 = (byte *)(*(long *)(param_1 + 6) +
                            (long)(int)*(short *)(*(long *)(param_1 + 10) + uVar20 * 2) * 0x74),
         (*pbVar21 >> 3 & 1) != 0)) {
        *(float *)(pbVar21 + 0x10) = *(float *)(pbVar21 + 0x10) + 1.0;
        *(float *)(pbVar21 + 4) = *(float *)(pbVar21 + 4) + 1.0;
        fVar30 = fVar30 + -1.0;
      }
      bVar10 = 0 < (long)uVar20;
      uVar20 = uVar20 - 1;
    } while (1.0 <= fVar30 && bVar10);
  }
  if (*(short *)(param_1 + 0x1e) == 0) {
    puVar28 = param_1 + 0x6a;
  }
  else {
    puVar28 = (undefined4 *)
              (*(long *)(param_1 + 0x72) + (long)(int)*(short *)(param_1 + 0x1e) * 0x18 + -0x18);
  }
  puVar28[4] = puVar28[5];
  puVar28[5] = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x20a) = 0xffffffff;
  uStack_a8 = param_1[0x3e];
  uStack_b0 = *(undefined8 *)(param_1 + 0x3c);
  fStack_a4 = (float)param_1[0x3f];
  if ((float)param_1[0x3f] < (float)param_1[0x3d] + (float)puVar28[1]) {
    fStack_a4 = (float)param_1[0x3d] + (float)puVar28[1];
/* wm:proprietary - see LICENSE - do not sell */
  }
  uVar1 = *(undefined4 *)(&UNK_0000151c + lVar6);
  *(undefined4 *)(&UNK_0000151c + lVar6) = 0;
  iVar11 = func_0x003063d8(&uStack_b0,0,0);
  *(undefined4 *)(&UNK_0000151c + lVar6) = uVar1;
  fVar34 = *(float *)(lVar6 + 0x100);
  if (0.0 < (float)param_1[0x3a]) {
    fVar30 = *(float *)(lVar6 + 0x104);
    if (((float)param_1[0x3d] <= fVar30) &&
       (fVar32 = (float)param_1[0x3a] + (float)param_1[0x3d], fVar30 <= fVar32)) {
      fVar34 = fVar34 + (float)(int)((fVar32 - fVar30) * (float)param_1[0x3b]);
    }
  }
  bVar10 = 0 < *(short *)((long)param_1 + 0x22e);
  fVar30 = fVar39;
  if (0 < *(short *)((long)param_1 + 0x22e)) {
    fVar30 = (float)param_1[0x3c];
  }
  fVar36 = (float)param_1[0x2f];
  fVar33 = (float)param_1[0x31];
  fVar31 = (float)param_1[0x48];
  fVar32 = (float)param_1[0x49];
/* wm:watermarked copy - do not remove */
  fVar37 = (float)param_1[0x4a];
  fVar38 = (float)param_1[0x4b];
  uVar15 = param_1[0x1b] + 0x1f >> 5;
  _bzero(*(undefined8 *)(param_1 + 0x16),
         -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2);
  iVar16 = param_1[0x1b];
  if (iVar16 < 1) {
LAB_003388fc:
    uVar27 = (undefined2)iVar16;
    lVar29 = *(long *)(param_1 + 6);
    *(undefined2 *)(lVar29 + (long)(int)*(short *)((long)param_1 + 0x21e) * 0x74 + 0x6b) = 1;
  }
  else {
    uVar20 = 0;
    bVar9 = false;
    fVar33 = (fVar30 + fVar36) - fVar33;
/* proprietary - see LICENSE - do not sell */
    lVar29 = *(long *)(param_1 + 10);
    lVar22 = *(long *)(param_1 + 6);
    sVar17 = *(short *)((long)param_1 + 0x22a);
    lVar26 = *(long *)(param_1 + 0x12);
    fVar30 = fVar38;
    if (fVar35 <= fVar38) {
      fVar30 = fVar35;
    }
    fVar36 = fVar32;
    if (fVar32 <= fVar35) {
      fVar36 = fVar30;
    }
    fVar30 = (float)NEON_fminnm(fVar38,0x7f7fffff);
    if (fVar32 <= 3.4028235e+38) {
      fVar32 = fVar30;
    }
LAB_003385e0:
    do {
      if (sVar17 < 1) {
        sVar4 = *(short *)(lVar29 + uVar20 * 2);
        uVar15 = (uint)sVar4;
        puVar25 = (uint *)(lVar22 + (long)(int)sVar4 * 0x74);
        *(undefined1 *)((long)puVar25 + 0x6e) = *(undefined1 *)(param_1 + 0x8e);
        if (!bVar10) goto LAB_00338630;
LAB_003385fc:
        if (uVar20 == (long)*(short *)((long)param_1 + 0x22e)) {
          bVar10 = false;
          fVar33 = fVar33 + (fVar39 - (float)param_1[0x3c]);
        }
// chat: discord.gg/sdkhDjTex
        else {
          bVar10 = true;
        }
      }
      else {
        sVar4 = *(short *)(lVar29 + uVar20 * 2);
        uVar15 = (uint)sVar4;
        puVar25 = (uint *)(lVar22 + (long)(int)sVar4 * 0x74);
        *(undefined1 *)((long)puVar25 + 0x6e) = 1;
        if (bVar10) goto LAB_003385fc;
LAB_00338630:
        bVar10 = false;
      }
      *puVar25 = *puVar25 & 0xf0ffffff;
      if ((*(uint *)(lVar26 + (uVar20 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) !=
          0) {
        puVar25[2] = (uint)fVar33;
        fVar30 = (float)param_1[0x2e];
        fVar42 = (float)param_1[0x30];
        fVar38 = (float)param_1[0x31];
        fVar43 = (float)param_1[0x32];
        fVar35 = fVar30 + fVar42 * 2.0 + fVar38 + fVar43;
// proprietary - see LICENSE - do not sell
        if (((uint)param_1[1] >> 0x18 & 1) == 0) {
          if (((uint)param_1[1] >> 0x12 & 1) != 0) goto LAB_003386ec;
          fVar35 = (((((float)param_1[0x46] -
                      fVar35 * (float)((int)*(short *)((long)param_1 + 0x202) +
                                      (int)(short)~(ushort)puVar25[0x16])) - fVar33) - fVar43) +
                   fVar42 * -2.0) - (float)param_1[0x2f];
        }
        else if (*(short *)((long)puVar25 + 0x56) < *(short *)(param_1 + 0x8b)) {
          fVar35 = (((((float)param_1[0x4a] -
                      fVar35 * (float)((int)*(short *)(param_1 + 0x8b) -
                                      (int)*(short *)((long)puVar25 + 0x56))) - fVar33) -
                    (float)param_1[0x2f]) - fVar42) - fVar43;
        }
        else {
LAB_003386ec:
          fVar35 = 3.4028235e+38;
        }
        puVar25[6] = (uint)fVar35;
        fVar40 = (float)puVar25[1];
        if (fVar35 <= (float)puVar25[1]) {
          fVar40 = fVar35;
        }
        fVar35 = (float)puVar25[4];
        if (fVar30 <= (float)puVar25[4]) {
          fVar35 = fVar30;
        }
        if (fVar40 < fVar35) {
          fVar40 = fVar35;
        }
        puVar25[1] = (uint)fVar40;
        fVar35 = fVar43 + fVar38 + fVar33 + fVar40 + fVar42 * 2.0;
        puVar25[3] = (uint)fVar35;
        fVar41 = (float)puVar25[0xe];
        fVar38 = fVar33 + fVar42 + fVar38;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        puVar25[0xe] = (uint)fVar38;
        puVar25[0xf] = (uint)((fVar35 - fVar42) - fVar43);
        puVar25[0x10] = (uint)(float)(int)(fVar40 * 0.65);
        fVar30 = fVar37;
        if (fVar33 <= fVar37) {
          fVar30 = fVar33;
        }
        fVar42 = fVar31;
        if (fVar31 <= fVar33) {
          fVar42 = fVar30;
        }
        puVar25[9] = (uint)fVar42;
        puVar25[10] = (uint)fVar36;
        fVar30 = fVar37;
        if (fVar35 <= fVar37) {
          fVar30 = fVar35;
        }
        fVar43 = fVar31;
        if (fVar31 <= fVar35) {
          fVar43 = fVar30;
        }
        puVar25[0xb] = (uint)fVar43;
        puVar25[0xc] = (uint)fVar32;
        *(bool *)((long)puVar25 + 0x69) = fVar42 < fVar43;
        *(undefined1 *)((long)puVar25 + 0x6a) = 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        bVar7 = bVar9;
        if (fVar43 <= fVar42) {
          if (*(char *)((long)puVar25 + 0x6f) == '\0') {
            bVar8 = (char)puVar25[0x1c] != '\0';
            *(bool *)((long)puVar25 + 0x6b) = bVar8;
            bVar3 = *(byte *)((long)puVar25 + 0x66);
            goto joined_r0x00338804;
          }
          bVar8 = true;
          *(undefined1 *)((long)puVar25 + 0x6b) = 1;
          if ((*(byte *)((long)puVar25 + 0x66) & 1) != 0) goto LAB_003387d8;
LAB_00338808:
          *(undefined1 *)(puVar25 + 0x1b) = 1;
        }
        else {
          bVar8 = true;
          *(uint *)(*(long *)(param_1 + 0x16) + (long)((int)uVar15 >> 5) * 4) =
               *(uint *)(*(long *)(param_1 + 0x16) + (long)((int)uVar15 >> 5) * 4) |
               1 << (ulong)(uVar15 & 0x1f);
          *(undefined1 *)((long)puVar25 + 0x6b) = 1;
          bVar3 = *(byte *)((long)puVar25 + 0x66);
joined_r0x00338804:
          if ((bVar3 & 1) == 0) goto LAB_00338808;
LAB_003387d8:
          cVar19 = *(char *)(param_1 + 0x93);
          *(char *)(puVar25 + 0x1b) = cVar19;
          if (cVar19 != '\x01') {
            bVar7 = true;
          }
        }
        if (!bVar8) {
          bVar7 = bVar9;
        }
        bVar9 = bVar7;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        uVar12 = 0x3000000;
        if (fVar43 <= fVar42) {
          uVar12 = 0x1000000;
        }
        uVar12 = *puVar25 | uVar12;
        *puVar25 = uVar12;
        if (*(short *)((long)puVar25 + 0x5e) != -1) {
          uVar12 = uVar12 | 0x4000000;
          *puVar25 = uVar12;
        }
        if (iVar11 != 0) {
          bVar7 = true;
          bVar8 = false;
          if (fVar34 < fVar43) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar34) && !NAN(fVar42)) {
              bVar7 = fVar34 < fVar42;
              bVar8 = false;
            }
          }
          if (bVar7 == bVar8) {
            *puVar25 = uVar12 | 0x8000000;
            *(short *)((long)param_1 + 0x20a) = (short)uVar15;
          }
        }
        if (*(short *)(param_1 + 0x1e) == 0) {
          *(ulong *)(puVar25 + 0x13) = CONCAT44(fVar38,fVar38);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          *(ulong *)(puVar25 + 0x11) = CONCAT44(fVar38,fVar38);
          if (*(char *)(param_1 + 0x93) == '\0') {
            *(byte *)((long)puVar25 + 0x6f) = *(byte *)((long)puVar25 + 0x6f) >> 1;
            *(byte *)(puVar25 + 0x1c) = (byte)puVar25[0x1c] >> 1;
          }
        }
        else {
          fVar38 = fVar38 - fVar41;
          *(ulong *)(puVar25 + 0x13) =
               CONCAT44((float)((ulong)*(undefined8 *)(puVar25 + 0x13) >> 0x20) + fVar38,
                        (float)*(undefined8 *)(puVar25 + 0x13) + fVar38);
          *(ulong *)(puVar25 + 0x11) =
               CONCAT44((float)((ulong)*(undefined8 *)(puVar25 + 0x11) >> 0x20) + fVar38,
                        (float)*(undefined8 *)(puVar25 + 0x11) + fVar38);
        }
        fVar35 = fVar35 + 1.0;
        fVar30 = fVar37;
        if (fVar35 <= fVar37) {
          fVar30 = fVar35;
        }
        fVar38 = fVar31;
        if (fVar31 <= fVar35) {
          fVar38 = fVar30;
        }
        if ((long)uVar20 < (long)*(short *)((long)param_1 + 0x22e)) {
          fVar31 = fVar38;
        }
        fVar33 = fVar33 + fVar40 + (float)param_1[0x31] + (float)param_1[0x32] +
                          (float)param_1[0x30] * 2.0;
        iVar16 = param_1[0x1b];
        uVar20 = uVar20 + 1;
        if ((long)iVar16 <= (long)uVar20) break;
        goto LAB_003385e0;
      }
      puVar25[0xe] = (uint)fVar33;
      puVar25[2] = (uint)fVar33;
      puVar25[3] = (uint)fVar33;
      puVar25[1] = 0;
/* do not claim this as your own */
      fVar30 = fVar37;
      if (fVar33 <= fVar37) {
        fVar30 = fVar33;
      }
      fVar35 = fVar31;
      if (fVar31 <= fVar33) {
        fVar35 = fVar30;
      }
      puVar25[9] = (uint)fVar35;
      puVar25[10] = (uint)fVar36;
      puVar25[0xb] = (uint)fVar35;
      puVar25[0xc] = (uint)fVar32;
      *(undefined4 *)((long)puVar25 + 0x69) = 0x1000000;
      puVar25[0x10] = 0x3f800000;
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)iVar16);
    uVar27 = (undefined2)iVar16;
    if (!bVar9) goto LAB_003388fc;
    lVar29 = *(long *)(param_1 + 6);
  }
// WM - stripping the watermark breaks the license
  fVar30 = *(float *)(lVar29 + (long)(int)*(short *)(param_1 + 0x88) * 0x74 + 0x2c);
  fVar39 = (float)param_1[0x44];
  if ((float)param_1[0x44] < fVar30) {
    fVar39 = fVar30;
  }
  if (((iVar11 != 0) && (*(short *)((long)param_1 + 0x20a) == -1)) && (fVar39 <= fVar34)) {
    *(undefined2 *)((long)param_1 + 0x20a) = uVar27;
  }
  uVar15 = param_1[1];
  if (!(bool)(bVar5 | (uVar15 & 1) == 0)) {
    uVar15 = uVar15 & 0xfffffffe;
    param_1[1] = uVar15;
  }
  *(bool *)((long)param_1 + 0x247) = *(int *)(&UNK_00001520 + lVar6) != 0;
  if (*(short *)(param_1 + 0x89) != -1) {
    uVar15 = uVar15 & 0xfffeffff;
    param_1[1] = uVar15;
  }
  if ((uVar15 >> 0x10 & 1) != 0) {
    param_1[0x46] = fVar39;
    param_1[0x3e] = fVar39;
    fVar34 = (float)param_1[0x4a];
    if (fVar39 <= (float)param_1[0x4a]) {
      fVar34 = fVar39;
    }
    param_1[0x4a] = fVar34;
  }
  lVar29 = *(long *)(param_1 + 0x62);
  uVar14 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(lVar29 + 0x260) = *(undefined8 *)(param_1 + 0x46);
// do not claim this as your own
  *(undefined8 *)(lVar29 + 600) = uVar14;
  param_1[0x2b] = param_1[0x48];
  param_1[0x2c] = param_1[0x4a];
  if (((uint)param_1[1] >> 0x11 & 1) == 0) {
    lVar29 = *(long *)(param_1 + 0x62);
    fVar39 = 0.0;
    if (((uint)param_1[1] >> 0x19 & 1) == 0) {
      fVar39 = (float)param_1[0x3f];
    }
    fVar34 = *(float *)(lVar29 + 0x284);
    if (*(float *)(lVar29 + 0x284) < fVar39) {
      fVar34 = fVar39;
    }
  }
  else {
    lVar29 = *(long *)(param_1 + 0x62);
    fVar34 = (float)param_1[0x3f];
  }
  fVar34 = fVar34 - *(float *)(lVar6 + 0xce8);
  fVar39 = *(float *)(lVar29 + 0x254);
  if (fVar34 <= *(float *)(lVar29 + 0x254)) {
    fVar39 = fVar34;
  }
  fVar30 = *(float *)(lVar29 + 0x24c);
  if (*(float *)(lVar29 + 0x24c) <= fVar34) {
    fVar30 = fVar39;
  }
  *(float *)(lVar29 + 0x254) = fVar30;
  func_0x00338f7c(param_1);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    func_0x003390ec(param_1);
  }
  puVar28[2] = 0;
  *(undefined1 *)((long)param_1 + 0x239) = 1;
  *(undefined1 *)((long)param_1 + 0x23d) = 0;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  *(undefined2 *)((long)param_1 + 0x20e) = 0xffff;
  if (((*(byte *)((long)param_1 + 0x23e) == 1) && (*(short *)((long)param_1 + 0x226) != -1)) &&
     (*(short *)((long)param_1 + 0x7a) == *(short *)(param_1 + 0x1e))) {
    *(short *)((long)param_1 + 0x20e) = *(short *)((long)param_1 + 0x226);
    if (*(char *)((long)param_1 + 0x23f) == '\0') goto LAB_00338af0;
  }
  else {
    if ((*(byte *)((long)param_1 + 7) >> 4 & 1) != 0) {
      sVar17 = *(short *)((long)param_1 + 0x20a);
      if (((sVar17 != -1) && (param_1[0x1b] != (int)sVar17)) &&
         ((*(short *)(param_1 + 0x83) == -1 &&
          (((*(int *)(&UNK_0000151c + lVar6) == 0 || ((*(byte *)(param_1 + 0x92) & 1) != 0)) ||
           ((&UNK_00002220)[lVar6] == '\x01')))))) {
        *(short *)((long)param_1 + 0x20e) = sVar17;
      }
    }
    if ((((*(byte *)((long)param_1 + 0x23f) & 1) == 0) &&
        ((*(byte *)((long)param_1 + 0x23e) & 1) != 0)) &&
       (*(short *)(param_1 + 0x1e) == *(short *)((long)param_1 + 0x7a))) {
LAB_00338af0:
      uVar14 = func_0x002fdd28("##ContextMenu",0,*param_1);
      uVar20 = FUN_0031ace0(uVar14,0x141);
      if ((uVar20 & 1) == 0) {
        *(undefined1 *)((long)param_1 + 0x23e) = 0;
        cVar19 = *(char *)(param_1 + 0x8f);
        goto joined_r0x00338b28;
      }
      FUN_00339380(param_1,param_1[1]);
      func_0x0031ae64();
    }
  }
  cVar19 = *(char *)(param_1 + 0x8f);
joined_r0x00338b28:
  if ((cVar19 == '\x01') && ((*(byte *)(param_1 + 1) >> 3 & 1) != 0)) {
    func_0x00339bac(param_1);
  }
  lVar29 = *(long *)(param_1 + 0x62);
  if (0 < *(short *)(param_1 + 0x8b)) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    *(float *)(lVar29 + 0x80) =
         *(float *)(*(long *)(param_1 + 6) +
                    (long)(int)*(short *)(*(long *)(param_1 + 10) +
                                         (ulong)((int)*(short *)(param_1 + 0x8b) - 1) * 2) * 0x74 +
                   0xc) - (float)param_1[0x3c];
  }
  if (0 < *(short *)(param_1 + 0x8a)) {
    *(undefined4 *)(lVar29 + 0x84) = puVar28[3];
  }
  puVar28[3] = 0;
  if ((*(long *)(&UNK_000023d0 + lVar6) == lVar29) && ((&UNK_000023d8)[lVar6] == '\x01')) {
    fVar34 = *(float *)(&UNK_000023dc + lVar6);
    fVar39 = *(float *)(&UNK_000023e4 + lVar6);
    if ((fVar34 <= fVar39) &&
       ((fVar30 = *(float *)(&UNK_000023e8 + lVar6), *(float *)(&UNK_000023e0 + lVar6) <= fVar30 &&
        (uVar20 = (ulong)(uint)param_1[0x1b], 0 < (int)param_1[0x1b])))) {
      pbVar21 = (byte *)(*(long *)(param_1 + 6) + 0x6b);
      do {
        if ((*pbVar21 & 1) == 0) {
          fVar32 = *(float *)(pbVar21 + -0x5f);
          bVar10 = false;
          if (((float)param_1[0x45] < fVar30) &&
             (bVar10 = false, !NAN(*(float *)(&UNK_000023e0 + lVar6)))) {
            bVar10 = *(float *)(&UNK_000023e0 + lVar6) < 3.4028235e+38;
          }
/* WM - do not claim this as your own */
          bVar9 = false;
          if ((bVar10) && (bVar9 = false, !NAN(*(float *)(pbVar21 + -99)) && !NAN(fVar39))) {
            bVar9 = *(float *)(pbVar21 + -99) < fVar39;
          }
          bVar10 = false;
          bVar7 = true;
          bVar8 = false;
          if (bVar9) {
            bVar10 = false;
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar32) && !NAN(fVar34)) {
              bVar10 = fVar32 < fVar34;
              bVar7 = fVar32 == fVar34;
              bVar8 = false;
            }
          }
          if (!bVar7 && bVar10 == bVar8) {
            *pbVar21 = 1;
          }
        }
        pbVar21 = pbVar21 + 0x74;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if ((*(byte *)((long)param_1 + 6) >> 4 & 1) == 0) {
    func_0x00320d78(*(undefined8 *)(lVar29 + 0x2c8),lVar29 + 0x238,lVar29 + 0x240,0);
  }
/* WM - unlicensed copy if this notice is missing */
  else {
    func_0x003255d0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar29 + 0x2c8),2);
  }
  return;
}

