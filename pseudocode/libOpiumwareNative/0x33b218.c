/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x33b218:ca7ed44341
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033b218(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  byte bVar9;
  float fVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong extraout_x1;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined8 *puVar28;
  long lVar29;
  uint uVar30;
/* WM - found on a paste site? it was re-uploaded illegally */
  ulong uVar31;
  uint *puVar32;
  ulong uVar33;
  int iVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
/* wm:keep the notice, keep the source honest */
  undefined8 uVar64;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float afStack_e0 [2];
  ulong auStack_d8 [3];
  undefined4 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float fStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = lRam00000000020973e0;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar38 = *(long *)(param_1 + 0x1a0);
  sVar7 = *(short *)(param_1 + 0x22a);
  sVar8 = *(short *)(param_1 + 0x22e);
  uStack_f0 = 0;
  uStack_e8 = 0;
  afStack_e0[0] = 0.0;
  auStack_d8[1] = 0;
  auStack_d8[2] = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fStack_80 = 0.0;
  iVar27 = *(int *)(param_1 + 0x6c) * 2 + 0x23;
  uVar36 = iVar27 >> 3;
// keep the notice, keep the source honest
  uVar2 = uVar36 & 0xfffffffc;
  iVar34 = uVar2 * 5;
  if (*(int *)(&UNK_00002a74 + lRam00000000020973e0) < iVar34) {
    uVar12 = func_0x002fd6d8((long)iVar34);
    if (*(long *)(&UNK_00002a78 + lVar3) != 0) {
      _memcpy(uVar12,*(long *)(&UNK_00002a78 + lVar3),(long)*(int *)(&UNK_00002a70 + lVar3));
      func_0x002fda6c(*(undefined8 *)(&UNK_00002a78 + lVar3));
    }
    *(undefined8 *)(&UNK_00002a78 + lVar3) = uVar12;
    *(int *)(&UNK_00002a74 + lVar3) = iVar34;
  }
  else {
    uVar12 = *(undefined8 *)(&UNK_00002a78 + lRam00000000020973e0);
  }
  _bzero(uVar12,(long)iVar34);
  uVar44 = _UNK_01adf0a8;
  uVar12 = _UNK_01adf0a0;
  uVar40 = *(ulong *)(&UNK_00002a78 + lVar3);
  auStack_d8[0] = uVar40;
  lStack_b8 = uVar40 + (long)(int)uVar2;
  uVar31 = -(ulong)(uVar36 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
  lStack_98 = uVar40 + uVar31;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  lStack_78 = uVar40 + uVar31 + (long)(int)uVar2;
  puVar13 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x6c);
  uVar31 = extraout_x1;
  if ((int)*(uint *)(param_1 + 0x6c) < 1) {
LAB_0033b70c:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return;
    }
  }
  else {
    lVar29 = 0;
    uVar33 = 0;
    uVar30 = 0;
    uVar1 = uVar40 + (long)(int)(uVar2 << 2);
    lVar35 = *(long *)(param_1 + 0x58);
    uVar36 = 0;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    if (sVar7 < 1) {
      uVar36 = 2;
    }
    do {
      uVar37 = *(uint *)(lVar35 + (uVar33 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar33 & 0x1f);
      uVar31 = (ulong)uVar37;
      if ((uVar37 & 1) != 0) {
        lVar14 = *(long *)(param_1 + 0x18);
        uVar31 = lVar14 + lVar29;
        lVar19 = *(long *)(lVar38 + 0x10);
        uVar6 = *(ushort *)(uVar31 + 0x62);
        puVar32 = (uint *)(lVar19 + (ulong)uVar6 * 0x20);
        uVar37 = *puVar32;
        if (0 < (int)uVar37) {
          pfVar21 = *(float **)(puVar32 + 2);
          if ((pfVar21[(ulong)uVar37 * 0x12 + -8] == 0.0) &&
             (*(long *)(pfVar21 + (ulong)uVar37 * 0x12 + -6) == 0)) {
            uVar37 = uVar37 - 1;
            *puVar32 = uVar37;
          }
          if (uVar37 == 1) {
            if ((*(byte *)(uVar31 + 1) & 1) == 0) {
/*  origin: github.com/pengussy  */
              if (sVar7 < 1) {
                fVar43 = *(float *)(uVar31 + 0x48);
                if (*(float *)(uVar31 + 0x48) < *(float *)(uVar31 + 0x4c)) {
                  fVar43 = *(float *)(uVar31 + 0x4c);
                }
                if (fVar43 <= *(float *)(uVar31 + 0x2c)) goto LAB_0033b440;
              }
              else {
                fVar43 = *(float *)(uVar31 + 0x44);
                if (*(float *)(uVar31 + 0x44) < *(float *)(uVar31 + 0x4c)) {
                  fVar43 = *(float *)(uVar31 + 0x4c);
                }
                if (fVar43 <= *(float *)(uVar31 + 0x2c)) goto LAB_0033b440;
              }
            }
            else {
LAB_0033b440:
// WM - more drops soon - github.com/pengussy
              if (sVar8 < 1) {
                uVar18 = (ulong)(uVar36 | 1);
                pfVar22 = (float *)(&uStack_f0 + uVar18 * 4);
                fVar43 = afStack_e0[uVar18 * 8];
                if (fVar43 != 0.0) goto LAB_0033b464;
LAB_0033b480:
                *(undefined8 *)(pfVar22 + 2) = uVar44;
                *(undefined8 *)pfVar22 = uVar12;
                fVar42 = 3.4028235e+38;
              }
              else {
                uVar18 = (ulong)((long)*(short *)(param_1 + 0x22e) <= (long)uVar33 | uVar36);
                pfVar22 = (float *)(&uStack_f0 + uVar18 * 4);
                fVar43 = afStack_e0[uVar18 * 8];
                if (fVar43 == 0.0) goto LAB_0033b480;
LAB_0033b464:
                fVar42 = *pfVar22;
              }
              uVar24 = (ulong)(uVar6 >> 3) & 0x1ffc;
              *(uint *)(*(long *)(pfVar22 + 6) + uVar24) =
                   *(uint *)(*(long *)(pfVar22 + 6) + uVar24) | 1 << (ulong)(uVar6 & 0x1f);
              pfVar22[4] = (float)((int)fVar43 + 1);
              if (*pfVar21 < fVar42) {
                *pfVar22 = *pfVar21;
                fVar46 = pfVar21[1];
                fVar42 = pfVar21[2];
                fVar43 = pfVar21[3];
                if (pfVar22[1] <= fVar46) goto LAB_0033b4d0;
/*  chat: discord.gg/sdkhDjTex  */
LAB_0033b590:
                pfVar22[1] = fVar46;
                if (fVar42 <= pfVar22[2]) goto LAB_0033b4dc;
LAB_0033b5a0:
                pfVar22[2] = fVar42;
                if (pfVar22[3] < fVar43) goto LAB_0033b4e8;
              }
              else {
                fVar46 = pfVar21[1];
                fVar42 = pfVar21[2];
                fVar43 = pfVar21[3];
                if (fVar46 < pfVar22[1]) goto LAB_0033b590;
LAB_0033b4d0:
                if (pfVar22[2] < fVar42) goto LAB_0033b5a0;
LAB_0033b4dc:
                if (pfVar22[3] < fVar43) {
LAB_0033b4e8:
                  pfVar22[3] = fVar43;
                }
              }
              uVar30 = 1 << uVar18 | uVar30;
            }
          }
        }
        if (0 < sVar7) {
          uVar6 = *(ushort *)(lVar14 + lVar29 + 100);
/* wm:no support for modified copies */
          puVar32 = (uint *)(lVar19 + (ulong)uVar6 * 0x20);
          uVar37 = *puVar32;
          if (0 < (int)uVar37) {
            pfVar21 = *(float **)(puVar32 + 2);
            if ((pfVar21[(ulong)uVar37 * 0x12 + -8] == 0.0) &&
               (*(long *)(pfVar21 + (ulong)uVar37 * 0x12 + -6) == 0)) {
              *puVar32 = uVar37 - 1;
              uVar37 = uVar37 - 1;
            }
            if ((uVar37 == 1) &&
               (((*(byte *)(uVar31 + 1) & 1) != 0 ||
                (*(float *)(uVar31 + 0x48) <= *(float *)(uVar31 + 0x2c))))) {
              if (sVar8 < 1) {
                uVar18 = 3;
                pfVar22 = (float *)&uStack_90;
                fVar43 = fStack_80;
                if (fStack_80 != 0.0) goto LAB_0033b570;
LAB_0033b5dc:
                *(undefined8 *)(pfVar22 + 2) = uVar44;
                *(undefined8 *)pfVar22 = uVar12;
                fVar42 = 3.4028235e+38;
              }
              else {
                uVar37 = 2;
                if ((long)*(short *)(param_1 + 0x22e) <= (long)uVar33) {
                  uVar37 = 3;
                }
                uVar18 = (ulong)uVar37;
                pfVar22 = (float *)(&uStack_f0 + uVar18 * 4);
// donate: donate/README.md
                fVar43 = afStack_e0[uVar18 * 8];
                if (fVar43 == 0.0) goto LAB_0033b5dc;
LAB_0033b570:
                fVar42 = *pfVar22;
              }
              uVar31 = (ulong)(uVar6 >> 3) & 0x1ffc;
              *(uint *)(*(long *)(pfVar22 + 6) + uVar31) =
                   *(uint *)(*(long *)(pfVar22 + 6) + uVar31) | 1 << (ulong)(uVar6 & 0x1f);
              pfVar22[4] = (float)((int)fVar43 + 1);
              if (*pfVar21 < fVar42) {
                *pfVar22 = *pfVar21;
                fVar46 = pfVar21[1];
                fVar42 = pfVar21[2];
                fVar43 = pfVar21[3];
                if (pfVar22[1] <= fVar46) goto LAB_0033b62c;
LAB_0033b660:
                pfVar22[1] = fVar46;
                if (fVar42 <= pfVar22[2]) goto LAB_0033b638;
LAB_0033b670:
                pfVar22[2] = fVar42;
                if (pfVar22[3] < fVar43) goto LAB_0033b680;
              }
              else {
                fVar46 = pfVar21[1];
                fVar42 = pfVar21[2];
                fVar43 = pfVar21[3];
// unlicensed copy if this notice is missing
                if (fVar46 < pfVar22[1]) goto LAB_0033b660;
LAB_0033b62c:
                if (pfVar22[2] < fVar42) goto LAB_0033b670;
LAB_0033b638:
                if (pfVar22[3] < fVar43) {
LAB_0033b680:
                  pfVar22[3] = fVar43;
                }
              }
              uVar31 = (ulong)(uint)(1 << uVar18);
              uVar30 = 1 << uVar18 | uVar30;
            }
          }
        }
        *(undefined2 *)(lVar14 + lVar29 + 0x60) = 0xffff;
        puVar13 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x6c);
      }
      uVar33 = uVar33 + 1;
      lVar29 = lVar29 + 0x74;
    } while ((long)uVar33 < (long)(int)puVar13);
    if (uVar30 == 0) goto LAB_0033b70c;
    iVar34 = *(int *)(lVar38 + 4);
    uVar36 = iVar34 - 2;
    iVar4 = *(int *)(&UNK_0000234c + lVar3);
    if (iVar4 < (int)uVar36) {
      uVar30 = 8;
      if (iVar4 != 0) {
        uVar30 = iVar4 + iVar4 / 2;
      }
      if ((int)uVar30 <= (int)uVar36) {
        uVar30 = uVar36;
      }
      puVar15 = (undefined8 *)
                func_0x002fd6d8(-(ulong)(uVar30 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar30 << 5);
      if (*(long *)(&UNK_00002350 + lVar3) != 0) {
        _memcpy(puVar15,*(long *)(&UNK_00002350 + lVar3),(long)*(int *)(&UNK_00002348 + lVar3) << 5)
/* do not claim this as your own */
        ;
        func_0x002fda6c(*(undefined8 *)(&UNK_00002350 + lVar3));
      }
      *(undefined8 **)(&UNK_00002350 + lVar3) = puVar15;
      *(uint *)(&UNK_0000234c + lVar3) = uVar30;
      iVar34 = *(int *)(lVar38 + 4);
      *(uint *)(&UNK_00002348 + lVar3) = uVar36;
    }
    else {
      puVar15 = *(undefined8 **)(&UNK_00002350 + lVar3);
      *(uint *)(&UNK_00002348 + lVar3) = uVar36;
    }
    if (2 < iVar34) {
      uVar36 = 2;
      do {
        iVar4 = 0x20;
        if ((int)(iVar34 - 1U) <= (int)(uVar36 | 0x1f)) {
          iVar4 = (iVar34 - 1U & 0x1f) + 1;
        }
        *(uint *)(uVar1 + (long)((int)uVar36 >> 5) * 4) =
             -1 << (ulong)(uVar36 & 0x1f) & ((uint)(-1L << iVar4) ^ 0xffffffff) |
             *(uint *)(uVar1 + (long)((int)uVar36 >> 5) * 4);
        uVar36 = (uVar36 & 0xffffffe0) + 0x20;
      } while ((int)uVar36 < iVar34);
    }
    uVar31 = 0;
    uVar33 = (ulong)(*(ushort *)(param_1 + 0x236) >> 3) & 0x1ffc;
    *(uint *)(uVar1 + uVar33) =
         *(uint *)(uVar1 + uVar33) &
         (1 << (ulong)(*(ushort *)(param_1 + 0x236) & 0x1f) ^ 0xffffffffU);
    iVar34 = -3;
    if (sVar7 < 1) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      iVar34 = -2;
    }
    iVar34 = *(int *)(lVar38 + 4) + iVar34;
    fVar43 = *(float *)(param_1 + 0x160);
    fVar42 = *(float *)(param_1 + 0x164);
    fVar46 = *(float *)(param_1 + 0x168);
    uVar36 = iVar27 >> 5;
    uVar33 = (ulong)uVar36;
    fVar47 = *(float *)(param_1 + 0x16c);
    lVar29 = uVar40 + (long)(int)(uVar2 << 2);
    uVar40 = uVar33 & 0x7ffffff0;
    uVar18 = uVar33 & 0x7ffffffc;
    puVar13 = (undefined8 *)(lVar29 + 0x20);
    do {
      fVar20 = afStack_e0[uVar31 * 8];
      if (fVar20 != 0.0) {
        uVar2 = (uint)uVar31 & (uint)(0 < sVar8);
        fVar49 = *(float *)((long)&uStack_f0 + (uVar31 * 8 + 1) * 4);
        if (*(float *)(&uStack_f0 + uVar31 * 4) < fVar43) {
          uVar2 = 1;
        }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        fVar10 = *(float *)(&uStack_f0 + uVar31 * 4);
        if (uVar2 == 0) {
          fVar10 = fVar43;
        }
        fVar50 = afStack_e0[uVar31 * 8 + -2];
        fVar48 = afStack_e0[uVar31 * 8 + -1];
        bVar11 = true;
        if ((sVar7 < 1 || uVar31 < 2) && (bVar11 = false, !NAN(fVar49) && !NAN(fVar42))) {
          bVar11 = fVar49 < fVar42;
        }
        if (!bVar11) {
          fVar49 = fVar42;
        }
        fVar51 = fVar50;
        if (fVar50 < fVar46) {
          fVar51 = fVar46;
        }
        if ((uVar31 & 1) == 0) {
          fVar51 = fVar50;
        }
        if (((1 < uVar31) && ((*(byte *)(param_1 + 6) >> 1 & 1) == 0)) && (fVar48 < fVar47)) {
          fVar48 = fVar47;
        }
        if (0 < (int)uVar36) {
          uVar24 = auStack_d8[uVar31 * 4];
          if ((uVar36 < 4) || (uVar1 < uVar24 + uVar33 * 4 && uVar24 < lVar29 + uVar33 * 4)) {
            uVar23 = 0;
/* reversing this took months of machine time */
          }
          else {
            if (uVar36 < 0x10) {
              uVar23 = 0;
            }
            else {
              puVar26 = (undefined8 *)(uVar24 + 0x20);
              puVar28 = puVar13;
              uVar23 = uVar40;
              do {
                uVar44 = puVar26[-3];
                uVar12 = puVar26[-4];
                uVar52 = puVar26[-1];
                uVar45 = puVar26[-2];
                uVar54 = puVar26[1];
                uVar53 = *puVar26;
                uVar56 = puVar26[3];
                uVar55 = puVar26[2];
                uVar58 = puVar28[-3];
                uVar57 = puVar28[-4];
                uVar60 = puVar28[-1];
                uVar59 = puVar28[-2];
                uVar62 = puVar28[1];
                uVar61 = *puVar28;
/* WM - if you paid for this, you were scammed */
                uVar64 = puVar28[3];
                uVar63 = puVar28[2];
                puVar28[-3] = CONCAT17((byte)((ulong)uVar58 >> 0x38) &
                                       ~(byte)((ulong)uVar44 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar58 >> 0x30) &
                                                ~(byte)((ulong)uVar44 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar58 >> 0x28) &
                                                         ~(byte)((ulong)uVar44 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar58 >> 0x20) &
                                                                  ~(byte)((ulong)uVar44 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar58 >>
                                                                                 0x18) &
                                                                           ~(byte)((ulong)uVar44 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar58 >> 0x10) & ~(byte)((ulong)uVar44 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar58 >> 8) &
                                                           ~(byte)((ulong)uVar44 >> 8),
                                                           (byte)uVar58 & ~(byte)uVar44)))))));
                puVar28[-4] = CONCAT17((byte)((ulong)uVar57 >> 0x38) &
                                       ~(byte)((ulong)uVar12 >> 0x38),
// watermarked copy - do not remove
                                       CONCAT16((byte)((ulong)uVar57 >> 0x30) &
                                                ~(byte)((ulong)uVar12 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar57 >> 0x28) &
                                                         ~(byte)((ulong)uVar12 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar57 >> 0x20) &
                                                                  ~(byte)((ulong)uVar12 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar57 >>
                                                                                 0x18) &
                                                                           ~(byte)((ulong)uVar12 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) & ~(byte)((ulong)uVar12 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) &
                                                           ~(byte)((ulong)uVar12 >> 8),
                                                           (byte)uVar57 & ~(byte)uVar12)))))));
                puVar28[-1] = CONCAT17((byte)((ulong)uVar60 >> 0x38) &
                                       ~(byte)((ulong)uVar52 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar60 >> 0x30) &
                                                ~(byte)((ulong)uVar52 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar60 >> 0x28) &
                                                         ~(byte)((ulong)uVar52 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar60 >> 0x20) &
                                                                  ~(byte)((ulong)uVar52 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar60 >>
                                                                                 0x18) &
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                                                                           ~(byte)((ulong)uVar52 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar60 >> 0x10) & ~(byte)((ulong)uVar52 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar60 >> 8) &
                                                           ~(byte)((ulong)uVar52 >> 8),
                                                           (byte)uVar60 & ~(byte)uVar52)))))));
                puVar28[-2] = CONCAT17((byte)((ulong)uVar59 >> 0x38) &
                                       ~(byte)((ulong)uVar45 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar59 >> 0x30) &
                                                ~(byte)((ulong)uVar45 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar59 >> 0x28) &
                                                         ~(byte)((ulong)uVar45 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar59 >> 0x20) &
                                                                  ~(byte)((ulong)uVar45 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar59 >>
                                                                                 0x18) &
                                                                           ~(byte)((ulong)uVar45 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar59 >> 0x10) & ~(byte)((ulong)uVar45 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar59 >> 8) &
                                                           ~(byte)((ulong)uVar45 >> 8),
                                                           (byte)uVar59 & ~(byte)uVar45)))))));
                puVar28[1] = CONCAT17((byte)((ulong)uVar62 >> 0x38) & ~(byte)((ulong)uVar54 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar62 >> 0x30) &
                                                ~(byte)((ulong)uVar54 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar62 >> 0x28) &
                                                         ~(byte)((ulong)uVar54 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar62 >> 0x20) &
                                                                  ~(byte)((ulong)uVar54 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar62 >>
                                                                                 0x18) &
/* wm:more drops soon - github.com/pengussy */
                                                                           ~(byte)((ulong)uVar54 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar62 >> 0x10) & ~(byte)((ulong)uVar54 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar62 >> 8) &
                                                           ~(byte)((ulong)uVar54 >> 8),
                                                           (byte)uVar62 & ~(byte)uVar54)))))));
                *puVar28 = CONCAT17((byte)((ulong)uVar61 >> 0x38) & ~(byte)((ulong)uVar53 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar61 >> 0x30) &
                                             ~(byte)((ulong)uVar53 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar61 >> 0x28) &
                                                      ~(byte)((ulong)uVar53 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar61 >> 0x20) &
                                                               ~(byte)((ulong)uVar53 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar61 >> 0x18
                                                                              ) & ~(byte)((ulong)
                                                  uVar53 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar61 >> 0x10) &
                                                           ~(byte)((ulong)uVar53 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar61 >> 8) &
                                                                    ~(byte)((ulong)uVar53 >> 8),
                                                                    (byte)uVar61 & ~(byte)uVar53))))
                                                  )));
                puVar28[3] = CONCAT17((byte)((ulong)uVar64 >> 0x38) & ~(byte)((ulong)uVar56 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar64 >> 0x30) &
                                                ~(byte)((ulong)uVar56 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar64 >> 0x28) &
/* WM - reversing this took months of machine time */
                                                         ~(byte)((ulong)uVar56 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar64 >> 0x20) &
                                                                  ~(byte)((ulong)uVar56 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar64 >>
                                                                                 0x18) &
                                                                           ~(byte)((ulong)uVar56 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar64 >> 0x10) & ~(byte)((ulong)uVar56 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar64 >> 8) &
                                                           ~(byte)((ulong)uVar56 >> 8),
                                                           (byte)uVar64 & ~(byte)uVar56)))))));
                puVar28[2] = CONCAT17((byte)((ulong)uVar63 >> 0x38) & ~(byte)((ulong)uVar55 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar63 >> 0x30) &
                                                ~(byte)((ulong)uVar55 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar63 >> 0x28) &
                                                         ~(byte)((ulong)uVar55 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar63 >> 0x20) &
                                                                  ~(byte)((ulong)uVar55 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar63 >>
                                                                                 0x18) &
                                                                           ~(byte)((ulong)uVar55 >>
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar63 >> 0x10) & ~(byte)((ulong)uVar55 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar63 >> 8) &
                                                           ~(byte)((ulong)uVar55 >> 8),
                                                           (byte)uVar63 & ~(byte)uVar55)))))));
                uVar23 = uVar23 - 0x10;
                puVar26 = puVar26 + 8;
                puVar28 = puVar28 + 8;
              } while (uVar23 != 0);
              if (uVar40 == uVar33) goto LAB_0033b8fc;
              uVar23 = uVar40;
              if ((uVar36 & 0xc) == 0) goto LAB_0033b8d4;
            }
            lVar35 = uVar23 - uVar18;
            puVar26 = (undefined8 *)(lVar29 + uVar23 * 4);
            puVar28 = (undefined8 *)(uVar24 + uVar23 * 4);
            do {
              uVar44 = puVar28[1];
              uVar12 = *puVar28;
              uVar52 = puVar26[1];
              uVar45 = *puVar26;
              puVar26[1] = CONCAT17((byte)((ulong)uVar52 >> 0x38) & ~(byte)((ulong)uVar44 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar52 >> 0x30) &
                                             ~(byte)((ulong)uVar44 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar52 >> 0x28) &
                                                      ~(byte)((ulong)uVar44 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar52 >> 0x20) &
                                                               ~(byte)((ulong)uVar44 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar52 >> 0x18
                                                                              ) & ~(byte)((ulong)
                                                  uVar44 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar52 >> 0x10) &
                                                           ~(byte)((ulong)uVar44 >> 0x10),
/* WM - keep the notice, keep the source honest */
                                                           CONCAT11((byte)((ulong)uVar52 >> 8) &
                                                                    ~(byte)((ulong)uVar44 >> 8),
                                                                    (byte)uVar52 & ~(byte)uVar44))))
                                                  )));
              *puVar26 = CONCAT17((byte)((ulong)uVar45 >> 0x38) & ~(byte)((ulong)uVar12 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar45 >> 0x30) &
                                           ~(byte)((ulong)uVar12 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar45 >> 0x28) &
                                                    ~(byte)((ulong)uVar12 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar45 >> 0x20) &
                                                             ~(byte)((ulong)uVar12 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar45 >> 0x18)
                                                                      & ~(byte)((ulong)uVar12 >>
                                                                               0x18),
                                                                      CONCAT12((byte)((ulong)uVar45
                                                                                     >> 0x10) &
                                                                               ~(byte)((ulong)uVar12
                                                                                      >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar45 >> 8) & ~(byte)((ulong)uVar12 >> 8),
                                                  (byte)uVar45 & ~(byte)uVar12)))))));
              lVar35 = lVar35 + 4;
              puVar26 = puVar26 + 2;
              puVar28 = puVar28 + 2;
            } while (lVar35 != 0);
            uVar23 = uVar18;
            if (uVar18 == uVar33) goto LAB_0033b8fc;
          }
/* wm:stripping the watermark breaks the license */
LAB_0033b8d4:
          lVar35 = uVar33 - uVar23;
          puVar32 = (uint *)(uVar24 + uVar23 * 4);
          puVar25 = (uint *)(lVar29 + uVar23 * 4);
          do {
            *puVar25 = *puVar25 & (*puVar32 ^ 0xffffffff);
            lVar35 = lVar35 + -1;
            puVar32 = puVar32 + 1;
            puVar25 = puVar25 + 1;
          } while (lVar35 != 0);
        }
LAB_0033b8fc:
        iVar34 = iVar34 - (int)fVar20;
        iVar27 = *(int *)(lVar38 + 4);
        if (0 < iVar27) {
          lVar35 = 0;
          uVar24 = 0;
          uVar23 = auStack_d8[uVar31 * 4];
          puVar26 = puVar15;
          do {
            uVar39 = uVar24 >> 5 & 0x7ffffff;
            uVar2 = *(uint *)(uVar23 + uVar39 * 4);
            uVar30 = 1 << (ulong)((uint)uVar24 & 0x1f);
            puVar15 = puVar26;
            if ((uVar2 & uVar30) != 0) {
              *(uint *)(uVar23 + uVar39 * 4) = uVar2 & (uVar30 ^ 0xffffffff);
              fVar20 = (float)((int)fVar20 + -1);
              puVar28 = (undefined8 *)(*(long *)(lVar38 + 0x10) + lVar35);
              pfVar21 = (float *)puVar28[1];
              *pfVar21 = fVar10;
              pfVar21[1] = fVar49;
              pfVar21[2] = fVar51;
/* wm:unlicensed copy if this notice is missing */
              pfVar21[3] = fVar48;
              uVar12 = *puVar28;
              uVar45 = puVar28[3];
              uVar44 = puVar28[2];
              puVar15 = puVar26 + 4;
              puVar26[1] = puVar28[1];
              *puVar26 = uVar12;
              puVar26[3] = uVar45;
              puVar26[2] = uVar44;
              iVar27 = *(int *)(lVar38 + 4);
            }
            uVar24 = uVar24 + 1;
          } while (((long)uVar24 < (long)iVar27) &&
                  (lVar35 = lVar35 + 0x20, puVar26 = puVar15, fVar20 != 0.0));
        }
      }
      puVar26 = puVar15;
      if ((uVar31 == 1) && (0 < sVar7)) {
/* wm:origin: github.com/pengussy */
        puVar28 = (undefined8 *)
                  (*(long *)(lVar38 + 0x10) + (ulong)*(ushort *)(param_1 + 0x236) * 0x20);
        uVar12 = *puVar28;
        uVar45 = puVar28[3];
        uVar44 = puVar28[2];
        puVar26 = puVar15 + 4;
        puVar15[1] = puVar28[1];
        *puVar15 = uVar12;
        puVar15[3] = uVar45;
        puVar15[2] = uVar44;
      }
      uVar31 = uVar31 + 1;
      puVar15 = puVar26;
    } while (uVar31 != 4);
    uVar40 = (ulong)*(uint *)(lVar38 + 4);
    if (0 < (int)*(uint *)(lVar38 + 4) && iVar34 != 0) {
      lVar29 = 0;
      uVar31 = 0;
      do {
        puVar15 = puVar26;
        if ((*(uint *)(uVar1 + (uVar31 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar31 & 0x1f) & 1)
            != 0) {
          puVar28 = (undefined8 *)(*(long *)(lVar38 + 0x10) + lVar29);
          uVar12 = *puVar28;
          uVar45 = puVar28[3];
          uVar44 = puVar28[2];
          puVar15 = puVar26 + 4;
          puVar26[1] = puVar28[1];
          *puVar26 = uVar12;
          puVar26[3] = uVar45;
          puVar26[2] = uVar44;
          iVar34 = iVar34 + -1;
          uVar40 = (ulong)*(uint *)(lVar38 + 4);
        }
        uVar31 = uVar31 + 1;
      } while (((long)uVar31 < (long)(int)uVar40) &&
/* stripping the watermark breaks the license */
              (lVar29 = lVar29 + 0x20, puVar26 = puVar15, iVar34 != 0));
    }
    uVar31 = *(ulong *)(&UNK_00002350 + lVar3);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x01a17b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_01f24c08)
                (*(long *)(lVar38 + 0x10) + 0x40,uVar31,
                 (-(uVar40 >> 0x1f) & 0xffffffe000000000 | uVar40 << 5) - 0x40);
      return;
    }
  }
  puVar16 = (undefined4 *)___stack_chk_fail(puVar13,uVar31);
  *(undefined1 *)((long)puVar16 + 0x241) = 0;
  lVar3 = lRam00000000020973e0;
  if ((*(byte *)(puVar16 + 1) >> 4 & 1) != 0) {
    return;
  }
  if (puVar16[0x19] == -1) {
    iVar27 = puVar16[0x1b];
  }
  else {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    puVar17 = (undefined4 *)
              (*(long *)(&UNK_00002768 + lRam00000000020973e0) + (long)(int)puVar16[0x19]);
    iVar27 = puVar16[0x1b];
    if (iVar27 <= *(short *)((long)puVar17 + 0xe)) goto code_r0x0033bb40;
    *puVar17 = 0;
  }
  puVar17 = (undefined4 *)func_0x0033c49c(*puVar16,iVar27);
  puVar16[0x19] = (int)puVar17 - *(int *)(&UNK_00002768 + lVar3);
  iVar27 = puVar16[0x1b];
code_r0x0033bb40:
  *(short *)(puVar17 + 3) = (short)iVar27;
  puVar32 = *(uint **)(puVar16 + 6);
  uVar41 = 0;
  puVar17[1] = 0;
  if (0 < iVar27) {
    iVar27 = 0;
    bVar11 = false;
    pfVar21 = (float *)(puVar17 + 5);
    do {
      lVar3 = 0x10;
      if ((*puVar32 & 8) != 0) {
        lVar3 = 0x1c;
      }
      fVar43 = *(float *)((long)puVar32 + lVar3);
      *pfVar21 = fVar43;
      *(short *)(pfVar21 + 2) = (short)iVar27;
      *(undefined2 *)((long)pfVar21 + 10) = *(undefined2 *)((long)puVar32 + 0x56);
      *(undefined2 *)(pfVar21 + 3) = *(undefined2 *)((long)puVar32 + 0x5e);
      bVar5 = *(byte *)((long)pfVar21 + 0xe);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      bVar9 = *(byte *)((long)puVar32 + 0x71) & 3;
      *(byte *)((long)pfVar21 + 0xe) = bVar5 & 0xfc | bVar9;
      bVar9 = bVar5 & 0xf0 | bVar9 | *(char *)((long)puVar32 + 0x67) << 2;
      *(byte *)((long)pfVar21 + 0xe) = bVar9;
      *(byte *)((long)pfVar21 + 0xe) = ((byte)*puVar32 & 8) << 1 | bVar9 & 0xef;
      uVar2 = *puVar32;
      if (fVar43 != (float)puVar32[8]) {
        puVar17[1] = puVar17[1] | 1;
      }
      if (iVar27 != *(short *)((long)puVar32 + 0x56)) {
        puVar17[1] = puVar17[1] | 2;
      }
      if (*(short *)((long)puVar32 + 0x5e) != -1) {
        puVar17[1] = puVar17[1] | 8;
      }
      if ((uVar2 >> 1 & 1) == (uint)*(byte *)((long)puVar32 + 0x67)) {
        puVar17[1] = puVar17[1] | 4;
      }
      bVar11 = (bool)((uVar2 & 8) == 0 | bVar11);
      iVar27 = iVar27 + 1;
      puVar32 = puVar32 + 0x1d;
      pfVar21 = pfVar21 + 4;
    } while (iVar27 < (int)puVar16[0x1b]);
    puVar17[1] = puVar17[1] & puVar16[1];
    if (bVar11) {
      uVar41 = puVar16[0x39];
    }
  }
  puVar17[2] = uVar41;
  if (*(float *)(&UNK_0000272c + lRam00000000020973e0) <= 0.0) {
    *(undefined4 *)(&UNK_0000272c + lRam00000000020973e0) =
         *(undefined4 *)(lRam00000000020973e0 + 0x44);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  }
  return;
}

