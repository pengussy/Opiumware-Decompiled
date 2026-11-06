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
 *  file-id: 0x321160:7771958865
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00321160(float param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5,
                 uint param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  long lVar16;
/* WM - origin: github.com/pengussy */
  undefined8 uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  float *pfVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  float *pfVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  short *psVar30;
  undefined8 uVar31;
  ulong uVar32;
  long lVar33;
/* WM - watermarked copy - do not remove */
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  long lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  if ((1 < (int)param_4) && (param_5 >> 0x18 != 0)) {
    uVar31 = **(undefined8 **)(param_2 + 0x38);
    uVar13 = param_4 - 1;
    uVar25 = uVar13;
    if ((param_6 & 0x200) != 0) {
      uVar25 = param_4;
    }
    uVar32 = (ulong)uVar25;
    if ((*(uint *)(param_2 + 0x30) & 1) == 0) {
      func_0x00320fe8(param_2,uVar25 * 6,uVar25 << 2);
      lVar16 = _UNK_01adfa88;
      lVar33 = _UNK_01adfa80;
      pfVar22 = (float *)((long)param_3 + 4);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      uVar32 = 1;
      do {
        uVar18 = 0;
        if (param_4 != uVar32) {
          uVar18 = uVar32 & 0xffffffff;
        }
        pfVar3 = (float *)(param_3 + uVar18);
        fVar35 = *pfVar22;
        fVar39 = *pfVar3 - pfVar22[-1];
        fVar40 = pfVar3[1] - fVar35;
        fVar41 = fVar40 * fVar40 + fVar39 * fVar39;
        if (0.0 < fVar41) {
          fVar41 = 1.0 / SQRT(fVar41);
          fVar39 = fVar39 * fVar41;
          fVar40 = fVar40 * fVar41;
        }
        fVar39 = param_1 * 0.5 * fVar39;
        fVar40 = param_1 * 0.5 * fVar40;
        pfVar26 = *(float **)(param_2 + 0x40);
        *pfVar26 = pfVar22[-1] + fVar40;
        pfVar26[1] = fVar35 - fVar39;
        *(undefined8 *)(pfVar26 + 2) = uVar31;
/* do not claim this as your own */
        lVar27 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar27 + 0x10) = param_5;
        fVar35 = pfVar3[1];
        *(float *)(lVar27 + 0x14) = fVar40 + *pfVar3;
        *(float *)(lVar27 + 0x18) = fVar35 - fVar39;
        *(undefined8 *)(lVar27 + 0x1c) = uVar31;
        lVar27 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar27 + 0x24) = param_5;
        fVar35 = pfVar3[1];
        *(float *)(lVar27 + 0x28) = *pfVar3 - fVar40;
        *(float *)(lVar27 + 0x2c) = fVar39 + fVar35;
        *(undefined8 *)(lVar27 + 0x30) = uVar31;
        lVar27 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar27 + 0x38) = param_5;
        fVar35 = *pfVar22;
        *(float *)(lVar27 + 0x3c) = pfVar22[-1] - fVar40;
        *(float *)(lVar27 + 0x40) = fVar39 + fVar35;
        *(undefined8 *)(lVar27 + 0x44) = uVar31;
        iVar19 = *(int *)(param_2 + 0x34);
        sVar10 = (short)iVar19;
// WM - stripping the watermark breaks the license
        psVar30 = *(short **)(param_2 + 0x48);
        lVar38 = *(long *)(param_2 + 0x48);
        lVar27 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar27 + 0x4c) = param_5;
        *psVar30 = sVar10;
        psVar30[1] = sVar10 + 1;
        psVar30[2] = sVar10 + 2;
        psVar30[3] = sVar10;
        psVar30[4] = sVar10 + 2;
        psVar30[5] = sVar10 + 3;
        *(long *)(param_2 + 0x48) = lVar38 + lVar16;
        *(long *)(param_2 + 0x40) = lVar27 + lVar33;
        *(int *)(param_2 + 0x34) = iVar19 + 4;
        pfVar22 = pfVar22 + 2;
        uVar32 = uVar32 + 1;
      } while (uVar32 - uVar25 != 1);
    }
    else {
      fVar39 = *(float *)(param_2 + 0xd0);
      uVar4 = param_5 & 0xffffff;
      fVar35 = param_1;
      if (param_1 <= 1.0) {
        fVar35 = 1.0;
      }
      iVar19 = (int)fVar35;
      uVar5 = 0;
      if (fVar35 - (float)iVar19 <= 1e-05) {
        uVar5 = (uint)(iVar19 < 0x20) & *(uint *)(param_2 + 0x30) >> 1;
      }
      iVar20 = 0xc;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      if (fVar39 < param_1) {
        iVar20 = 0x12;
      }
      uVar5 = uVar5 & fVar39 == 1.0;
      iVar9 = 6;
      if (uVar5 == 0) {
        iVar9 = iVar20;
      }
      uVar6 = param_4 * 3;
      if (fVar39 < param_1) {
        uVar6 = param_4 << 2;
      }
      iVar20 = 3;
      if (fVar39 < param_1) {
        iVar20 = 5;
      }
      if (uVar5 == 1) {
        iVar20 = 3;
        uVar6 = param_4 << 1;
      }
      func_0x00320fe8(param_2,iVar9 * uVar25);
      lVar33 = *(long *)(param_2 + 0x38);
      uVar25 = iVar20 * param_4;
      if (*(int *)(lVar33 + 0x4c) < (int)uVar25) {
        if (*(long *)(lVar33 + 0x50) != 0) {
          func_0x002fda6c();
        }
        uVar17 = func_0x002fd6d8((ulong)uVar25 << 3);
        *(undefined8 *)(lVar33 + 0x50) = uVar17;
        *(uint *)(lVar33 + 0x4c) = uVar25;
        lVar33 = *(long *)(param_2 + 0x38);
      }
      puVar21 = *(undefined8 **)(lVar33 + 0x50);
/* wm:keep the notice, keep the source honest */
      uVar18 = (ulong)param_4;
      puVar23 = puVar21 + param_4;
      pfVar22 = (float *)((long)puVar21 + 4);
      uVar28 = 0;
      do {
        uVar2 = uVar28 + 1;
        uVar8 = 0;
        if (uVar18 - 1 != uVar28) {
          uVar8 = uVar2 & 0xffffffff;
        }
        fVar40 = (float)param_3[uVar8] - (float)param_3[uVar28];
        fVar41 = (float)((ulong)param_3[uVar8] >> 0x20) - (float)((ulong)param_3[uVar28] >> 0x20);
        fVar34 = fVar41 * fVar41 + fVar40 * fVar40;
        if (0.0 < fVar34) {
          fVar34 = 1.0 / SQRT(fVar34);
          fVar40 = fVar40 * fVar34;
          fVar41 = fVar41 * fVar34;
        }
        pfVar22[-1] = fVar41;
        *pfVar22 = -fVar40;
        pfVar22 = pfVar22 + 2;
        uVar28 = uVar2;
      } while (uVar32 != uVar2);
      if ((param_6 >> 9 & 1) == 0) {
        puVar21[uVar13] = puVar23[-2];
        if (uVar5 != 0 || param_1 <= fVar39) {
          fVar35 = fVar35 * 0.5 + 1.0;
          if (uVar5 == 0) {
            fVar35 = fVar39;
          }
          *puVar23 = CONCAT44((float)((ulong)*puVar21 >> 0x20) * fVar35 +
                              (float)((ulong)*param_3 >> 0x20),
                              (float)*puVar21 * fVar35 + (float)*param_3);
          puVar23[1] = CONCAT44((float)((ulong)*param_3 >> 0x20) -
                                (float)((ulong)*puVar21 >> 0x20) * fVar35,
// WM - unlicensed copy if this notice is missing
                                (float)*param_3 - (float)*puVar21 * fVar35);
          puVar23[uVar13 * 2] =
               CONCAT44((float)((ulong)puVar21[uVar13] >> 0x20) * fVar35 +
                        (float)((ulong)param_3[uVar13] >> 0x20),
                        (float)puVar21[uVar13] * fVar35 + (float)param_3[uVar13]);
          (puVar23 + uVar13 * 2)[1] =
               CONCAT44((float)((ulong)param_3[uVar13] >> 0x20) -
                        (float)((ulong)puVar21[uVar13] >> 0x20) * fVar35,
                        (float)param_3[uVar13] - (float)puVar21[uVar13] * fVar35);
LAB_00321524:
          iVar9 = *(int *)(param_2 + 0x34);
          iVar20 = 2;
          if (uVar5 == 0) {
            iVar20 = 3;
          }
          psVar30 = *(short **)(param_2 + 0x48);
          uVar28 = 1;
          puVar24 = puVar21;
          iVar29 = iVar9;
LAB_00321594:
          uVar25 = 0;
          if (uVar18 != uVar28) {
            uVar25 = (uint)uVar28;
          }
          iVar7 = iVar9;
          if (uVar18 != uVar28) {
            iVar7 = iVar29 + iVar20;
          }
          fVar39 = ((float)*puVar24 + (float)puVar21[uVar25]) * 0.5;
          fVar40 = ((float)((ulong)*puVar24 >> 0x20) + (float)((ulong)puVar21[uVar25] >> 0x20)) *
                   0.5;
          fVar41 = fVar40 * fVar40 + fVar39 * fVar39;
          if (1e-06 < fVar41) {
            fVar41 = 1.0 / fVar41;
            fVar34 = 100.0;
            if (fVar41 <= 100.0) {
/* reversing this took months of machine time */
              fVar34 = fVar41;
            }
            fVar39 = fVar39 * fVar34;
            fVar40 = fVar40 * fVar34;
          }
          puVar23[uVar25 << 1] =
               CONCAT44((float)((ulong)param_3[uVar25] >> 0x20) + fVar40 * fVar35,
                        (float)param_3[uVar25] + fVar39 * fVar35);
          (puVar23 + (uVar25 << 1))[1] =
               CONCAT44((float)((ulong)param_3[uVar25] >> 0x20) - fVar40 * fVar35,
                        (float)param_3[uVar25] - fVar39 * fVar35);
          sVar10 = (short)iVar7;
          *psVar30 = sVar10;
          sVar11 = (short)iVar29;
          psVar30[1] = sVar11;
          if (uVar5 == 0) {
            psVar30[2] = sVar11 + 2;
            psVar30[3] = sVar11 + 2;
            psVar30[4] = sVar10 + 2;
            psVar30[5] = sVar10;
            psVar30[6] = sVar10 + 1;
            psVar30[7] = sVar11 + 1;
            psVar30[8] = sVar11;
            psVar30[9] = sVar11;
            psVar30[10] = sVar10;
            psVar30[0xb] = sVar10 + 1;
            psVar30 = psVar30 + 0xc;
            *(short **)(param_2 + 0x48) = psVar30;
            if (uVar32 != uVar28) goto LAB_0032158c;
            puVar23 = *(undefined8 **)(param_2 + 0x40);
            puVar21 = puVar21 + uVar18 + 1;
            do {
              *puVar23 = *param_3;
              *(undefined8 *)(*(long *)(param_2 + 0x40) + 8) = uVar31;
              lVar33 = *(long *)(param_2 + 0x40);
              *(uint *)(lVar33 + 0x10) = param_5;
              *(undefined8 *)(lVar33 + 0x14) = puVar21[-1];
              *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x1c) = uVar31;
/* more drops soon - github.com/pengussy */
              lVar33 = *(long *)(param_2 + 0x40);
              *(uint *)(lVar33 + 0x24) = uVar4;
              *(undefined8 *)(lVar33 + 0x28) = *puVar21;
              *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x30) = uVar31;
              lVar33 = *(long *)(param_2 + 0x40);
              *(uint *)(lVar33 + 0x38) = uVar4;
              puVar23 = (undefined8 *)(lVar33 + 0x3c);
              *(undefined8 **)(param_2 + 0x40) = puVar23;
              uVar18 = uVar18 - 1;
              puVar21 = puVar21 + 2;
              param_3 = param_3 + 1;
            } while (uVar18 != 0);
          }
          else {
            psVar30[2] = sVar11 + 1;
            psVar30[3] = sVar10 + 1;
            psVar30[4] = sVar11 + 1;
            psVar30[5] = sVar10;
            psVar30 = psVar30 + 6;
            *(short **)(param_2 + 0x48) = psVar30;
            if (uVar32 != uVar28) goto LAB_0032158c;
            puVar24 = *(undefined8 **)(param_2 + 0x40);
            puVar23 = (undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + (long)iVar19 * 0x10)
            ;
            uVar31 = *puVar23;
            uVar17 = puVar23[1];
/*  found on a paste site? it was re-uploaded illegally  */
            puVar23 = puVar21 + uVar18 + 1;
            do {
              *puVar24 = puVar23[-1];
              *(undefined8 *)(*(long *)(param_2 + 0x40) + 8) = uVar31;
              lVar33 = *(long *)(param_2 + 0x40);
              *(uint *)(lVar33 + 0x10) = param_5;
              *(undefined8 *)(lVar33 + 0x14) = *puVar23;
              *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x1c) = uVar17;
              lVar33 = *(long *)(param_2 + 0x40);
              *(uint *)(lVar33 + 0x24) = param_5;
              puVar24 = (undefined8 *)(lVar33 + 0x28);
              *(undefined8 **)(param_2 + 0x40) = puVar24;
              uVar18 = uVar18 - 1;
              puVar23 = puVar23 + 2;
            } while (uVar18 != 0);
          }
          goto LAB_0032198c;
        }
        fVar35 = (fVar35 - fVar39) * 0.5;
        fVar40 = fVar39 + fVar35;
        *puVar23 = CONCAT44((float)((ulong)*puVar21 >> 0x20) * fVar40 +
                            (float)((ulong)*param_3 >> 0x20),
                            (float)*puVar21 * fVar40 + (float)*param_3);
        fVar41 = (float)*puVar21;
        fVar36 = fVar41 * fVar35;
        fVar34 = (float)((ulong)*puVar21 >> 0x20);
        fVar37 = fVar34 * fVar35;
        puVar23[1] = CONCAT44(fVar37 + (float)((ulong)*param_3 >> 0x20),fVar36 + (float)*param_3);
        puVar23[2] = CONCAT44((float)((ulong)*param_3 >> 0x20) - fVar37,(float)*param_3 - fVar36);
        puVar23[3] = CONCAT44((float)((ulong)*param_3 >> 0x20) - fVar34 * fVar40,
                              (float)*param_3 - fVar41 * fVar40);
        uVar25 = uVar13 * 4;
        puVar23[uVar25] =
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
             CONCAT44((float)((ulong)puVar21[uVar13] >> 0x20) * fVar40 +
                      (float)((ulong)param_3[uVar13] >> 0x20),
                      (float)puVar21[uVar13] * fVar40 + (float)param_3[uVar13]);
        puVar23[(long)(int)uVar25 + 1] =
             CONCAT44((float)((ulong)puVar21[uVar13] >> 0x20) * fVar35 +
                      (float)((ulong)param_3[uVar13] >> 0x20),
                      (float)puVar21[uVar13] * fVar35 + (float)param_3[uVar13]);
        puVar23[(long)(int)uVar25 + 2] =
             CONCAT44((float)((ulong)param_3[uVar13] >> 0x20) -
                      (float)((ulong)puVar21[uVar13] >> 0x20) * fVar35,
                      (float)param_3[uVar13] - (float)puVar21[uVar13] * fVar35);
        puVar23[(long)(int)uVar25 + 3] =
             CONCAT44((float)((ulong)param_3[uVar13] >> 0x20) -
                      (float)((ulong)puVar21[uVar13] >> 0x20) * fVar40,
                      (float)param_3[uVar13] - (float)puVar21[uVar13] * fVar40);
      }
      else {
        if (uVar5 != 0 || param_1 <= fVar39) {
          fVar35 = fVar35 * 0.5 + 1.0;
/* wm:chat: discord.gg/sdkhDjTex */
          if (uVar5 == 0) {
            fVar35 = fVar39;
          }
          goto LAB_00321524;
        }
        fVar35 = (fVar35 - fVar39) * 0.5;
      }
      iVar19 = *(int *)(param_2 + 0x34);
      psVar30 = *(short **)(param_2 + 0x48);
      uVar28 = 1;
      puVar24 = puVar21;
      iVar20 = iVar19;
      do {
        uVar25 = 0;
        if (uVar18 != uVar28) {
          uVar25 = (uint)uVar28;
        }
        iVar9 = iVar19;
// keep the notice, keep the source honest
        if (uVar18 != uVar28) {
          iVar9 = iVar20 + 4;
        }
        fVar40 = ((float)*puVar24 + (float)puVar21[uVar25]) * 0.5;
        fVar41 = ((float)((ulong)*puVar24 >> 0x20) + (float)((ulong)puVar21[uVar25] >> 0x20)) * 0.5;
        fVar34 = fVar41 * fVar41 + fVar40 * fVar40;
        if (1e-06 < fVar34) {
          fVar34 = 1.0 / fVar34;
          fVar36 = 100.0;
          if (fVar34 <= 100.0) {
            fVar36 = fVar34;
          }
          fVar40 = fVar40 * fVar36;
          fVar41 = fVar41 * fVar36;
        }
        fVar34 = fVar40 * (fVar39 + fVar35);
        fVar36 = fVar41 * (fVar39 + fVar35);
        puVar1 = puVar23 + (uVar25 << 2);
        *puVar1 = CONCAT44(fVar36 + (float)((ulong)param_3[uVar25] >> 0x20),
                           fVar34 + (float)param_3[uVar25]);
        puVar1[1] = CONCAT44(fVar41 * fVar35 + (float)((ulong)param_3[uVar25] >> 0x20),
                             fVar40 * fVar35 + (float)param_3[uVar25]);
        puVar1[2] = CONCAT44((float)((ulong)param_3[uVar25] >> 0x20) - fVar41 * fVar35,
                             (float)param_3[uVar25] - fVar40 * fVar35);
        puVar1[3] = CONCAT44((float)((ulong)param_3[uVar25] >> 0x20) - fVar36,
                             (float)param_3[uVar25] - fVar34);
        sVar14 = (short)iVar9;
        sVar10 = sVar14 + 1;
        *psVar30 = sVar10;
        sVar15 = (short)iVar20;
        psVar30[1] = sVar15 + 1;
        sVar11 = sVar15 + 2;
        psVar30[2] = sVar11;
        psVar30[3] = sVar11;
// do not claim this as your own
        sVar12 = sVar14 + 2;
        psVar30[4] = sVar12;
        psVar30[5] = sVar10;
        psVar30[6] = sVar10;
        psVar30[7] = sVar15 + 1;
        psVar30[8] = sVar15;
        psVar30[9] = sVar15;
        psVar30[10] = sVar14;
        psVar30[0xb] = sVar10;
        psVar30[0xc] = sVar12;
        psVar30[0xd] = sVar11;
        psVar30[0xe] = sVar15 + 3;
        psVar30[0xf] = sVar15 + 3;
        psVar30[0x10] = sVar14 + 3;
        psVar30[0x11] = sVar12;
        psVar30 = psVar30 + 0x12;
        uVar28 = uVar28 + 1;
        uVar32 = uVar32 - 1;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        puVar24 = puVar24 + 1;
        iVar20 = iVar9;
      } while (uVar32 != 0);
      *(short **)(param_2 + 0x48) = psVar30;
      puVar23 = *(undefined8 **)(param_2 + 0x40);
      puVar21 = puVar21 + uVar18 + 2;
      do {
        *puVar23 = puVar21[-2];
        *(undefined8 *)(*(long *)(param_2 + 0x40) + 8) = uVar31;
        lVar33 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar33 + 0x10) = uVar4;
        *(undefined8 *)(lVar33 + 0x14) = puVar21[-1];
        *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x1c) = uVar31;
        lVar33 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar33 + 0x24) = param_5;
        *(undefined8 *)(lVar33 + 0x28) = *puVar21;
        *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x30) = uVar31;
/*  donate: donate/README.md  */
        lVar33 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar33 + 0x38) = param_5;
        *(undefined8 *)(lVar33 + 0x3c) = puVar21[1];
        *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x44) = uVar31;
        lVar33 = *(long *)(param_2 + 0x40);
        *(uint *)(lVar33 + 0x4c) = uVar4;
        puVar23 = (undefined8 *)(lVar33 + 0x50);
        *(undefined8 **)(param_2 + 0x40) = puVar23;
        puVar21 = puVar21 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
LAB_0032198c:
      *(uint *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + (uVar6 & 0xffff);
    }
  }
  return;
LAB_0032158c:
  uVar28 = uVar28 + 1;
  puVar24 = puVar24 + 1;
  iVar29 = iVar7;
  goto LAB_00321594;
}
/*  more drops soon - github.com/pengussy  */

