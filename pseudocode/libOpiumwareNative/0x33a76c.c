/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x33a76c:738cb55559
 */

void FUN_0033a76c(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  float fVar10;
  bool bVar11;
  undefined4 uVar29;
  undefined1 extraout_q0 [16];
  undefined1 auVar35 [12];
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  float *pfVar17;
  undefined2 *puVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  undefined4 *puVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
/* no support for modified copies - github.com/pengussy */
  long lVar26;
  int iVar27;
  float fVar28;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  short sVar39;
  undefined2 uVar40;
  undefined2 uVar41;
  short sVar42;
  float fVar43;
  undefined4 uVar44;
  short sVar45;
  short sVar46;
  float fVar47;
  undefined8 uVar48;
// WM - if you paid for this, you were scammed
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar12 = lRam00000000020973e0;
  lVar26 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(int *)(param_1 + 0x74) != -1) {
    lVar24 = *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x74) * 0x74;
    lVar21 = *(long *)(param_1 + 0x188);
    if (*(char *)(lVar21 + 0x159) == '\x01') {
      FUN_00317310();
    }
    if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
      lVar14 = 0x48;
      if (*(char *)(param_1 + 0x245) == '\0') {
        lVar14 = 0x44;
      }
    }
    else {
      lVar14 = 0x4c;
    }
    fVar10 = *(float *)(lVar24 + lVar14);
    if (*(float *)(lVar24 + lVar14) < *(float *)(lVar21 + 0x130)) {
      fVar10 = *(float *)(lVar21 + 0x130);
    }
    *(float *)(lVar24 + lVar14) = fVar10;
    if (*(char *)(lVar24 + 0x66) == '\x01') {
      fVar36 = *(float *)(lVar21 + 0x134) + *(float *)(param_1 + 0x88);
      fVar10 = *(float *)(param_1 + 0x80);
      if (*(float *)(param_1 + 0x80) < fVar36) {
        fVar10 = fVar36;
      }
      *(float *)(param_1 + 0x80) = fVar10;
/* wm:if you paid for this, you were scammed */
    }
    *(undefined4 *)(lVar24 + 0x40) = *(undefined4 *)(lVar21 + 0x1e8);
    fVar10 = *(float *)(param_1 + 0x8c);
    if (*(float *)(param_1 + 0x8c) < *(float *)(lVar21 + 0x154)) {
      fVar10 = *(float *)(lVar21 + 0x154);
    }
    *(float *)(param_1 + 0x8c) = fVar10;
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  if ((&UNK_000027e0)[lVar12] == '\x01') {
    FUN_002ff798(0,&UNK_01c30828,0);
  }
  uVar48 = *(undefined8 *)(param_1 + 0x7c);
  fVar36 = *(float *)(param_1 + 0x80);
  *(float *)(lVar26 + 0x11c) = fVar36;
  iVar13 = *(int *)(param_1 + 0x70);
  fVar10 = (float)uVar48;
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar21 = param_1 + 0x1a8;
    sVar5 = *(short *)(param_1 + 0x22a);
    sVar6 = *(short *)(param_1 + 0x228);
    uVar3 = *(uint *)(param_1 + 0x94);
  }
  else {
    lVar21 = *(long *)(param_1 + 0x1c8) + (long)(int)*(short *)(param_1 + 0x78) * 0x18 + -0x18;
    sVar5 = *(short *)(param_1 + 0x22a);
    sVar6 = *(short *)(param_1 + 0x228);
    uVar3 = *(uint *)(param_1 + 0x94);
  }
  if (((uVar3 & 1) != 0) && ((iVar13 == 0 || ((uVar3 >> 0x10 & 1) != 0)))) {
    *(float *)(lVar21 + 8) = (fVar36 - fVar10) + *(float *)(lVar21 + 8);
  }
/* wm:no support for modified copies */
  iVar27 = (int)sVar5;
  iVar1 = iVar13 + 1;
  if ((*(float *)(param_1 + 0x124) <= fVar36) && (fVar10 <= *(float *)(param_1 + 300))) {
    if (*(short *)(param_1 + 0x20a) != -1) {
      fVar28 = *(float *)(lVar12 + 0x104);
      bVar11 = false;
      if ((fVar10 <= fVar28) && (bVar11 = false, !NAN(fVar28) && !NAN(fVar36))) {
        bVar11 = fVar28 < fVar36;
      }
      if ((bVar11) && (*(int *)(lVar21 + 0x14) < 0)) {
        *(int *)(lVar21 + 0x14) = iVar13;
      }
    }
    auVar35 = (undefined1  [12])0x0;
    uVar25 = (ulong)*(uint *)(param_1 + 0x9c);
    if (*(uint *)(param_1 + 0x9c) == 0x1000000) {
      if ((*(byte *)(param_1 + 4) >> 6 & 1) == 0) {
        uVar25 = 0;
        goto LAB_0033a944;
      }
      uVar25 = func_0x002febb0((*(uint *)(param_1 + 0x98) & 1) + 0x31);
      auVar35 = extraout_q0._4_12_;
      iVar20 = 0;
      if (*(int *)(param_1 + 0xa0) != 0x1000000) {
        iVar20 = *(int *)(param_1 + 0xa0);
      }
      if (0 < *(int *)(param_1 + 0x70)) goto LAB_0033a958;
LAB_0033a9b0:
/* WM - origin: github.com/pengussy */
      iVar13 = 0;
    }
    else {
LAB_0033a944:
      iVar20 = 0;
      if (*(int *)(param_1 + 0xa0) != 0x1000000) {
        iVar20 = *(int *)(param_1 + 0xa0);
      }
      if (iVar13 < 1) goto LAB_0033a9b0;
LAB_0033a958:
      if (-1 < *(char *)(param_1 + 4)) goto LAB_0033a9b0;
      lVar12 = 0xa8;
      if ((*(byte *)(param_1 + 0x96) & 1) != 0) {
        lVar12 = 0xa4;
      }
      iVar13 = *(int *)(param_1 + lVar12);
    }
    sVar5 = *(short *)(param_1 + 0x230);
    iVar23 = (int)uVar25;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    if (((iVar13 != 0 || (iVar20 != 0 || iVar23 != 0)) || (iVar1 == iVar27)) || (-1 < sVar5)) {
      if ((*(byte *)(param_1 + 6) >> 4 & 1) == 0) {
        lVar12 = *(long *)(lVar26 + 0x2c8);
        auVar30 = *(undefined1 (*) [16])(param_1 + 0x140);
        *(long *)(lVar12 + 0x68) = auVar30._8_8_;
        *(long *)(lVar12 + 0x60) = auVar30._0_8_;
      }
      else {
        lVar12 = *(long *)(lVar26 + 0x2c8);
      }
      auVar30 = func_0x003255d0(*(undefined8 *)(param_1 + 0x1a0),lVar12,0);
      auVar35 = auVar30._4_12_;
    }
    if (iVar20 != 0 || iVar23 != 0) {
      fVar28 = (float)((ulong)uVar48 >> 0x20);
      auVar31._0_8_ = auVar35._0_8_ << 0x20;
      auVar31._12_4_ = auVar35._8_4_;
      auVar31._8_4_ = fVar28;
      auVar35._4_8_ = auVar31._8_8_;
      auVar35._0_4_ = fVar10;
      auVar32._0_12_ = auVar35 << 0x20;
      auVar32._12_4_ = fVar28;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      auVar33._4_12_ = auVar32._4_12_;
      auVar33._0_4_ = *(float *)(param_1 + 0x110);
      fVar47 = (float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20);
      uVar7 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x130);
      fVar43 = (float)uVar7;
      fVar38 = (float)((ulong)uVar7 >> 0x20);
      auVar34._0_8_ = auVar33._0_8_;
      auVar34._8_4_ = *(float *)(param_1 + 0x118);
      auVar34._12_4_ = fVar28;
      sVar39 = -(ushort)(fVar43 <= auVar33._0_4_);
      sVar42 = -(ushort)(fVar38 <= fVar10);
      sVar45 = -(ushort)(auVar34._8_4_ < (float)*(undefined8 *)(param_1 + 0x138));
      sVar46 = -(ushort)(fVar28 < fVar47);
      auVar30._12_4_ = fVar47;
      auVar30._0_12_ = *(undefined1 (*) [12])(param_1 + 0x130);
      auVar8._4_2_ = sVar42;
      auVar8._0_4_ = (int)sVar39;
      auVar8._6_2_ = sVar42 >> 0xf;
      auVar8._8_2_ = sVar45;
      auVar8._10_2_ = sVar45 >> 0xf;
      auVar8._12_2_ = sVar46;
      auVar8._14_2_ = sVar46 >> 0xf;
      auVar34 = auVar34 ^ (auVar34 ^ auVar30) & ~auVar8;
      uStack_78 = auVar34._8_8_;
      uStack_80 = auVar34._0_8_;
      if ((iVar23 != 0) && (auVar34._4_4_ < auVar34._12_4_)) {
        func_0x00323668(ZEXT816(0),auVar34._12_4_,sVar39,
                        CONCAT22(-(ushort)(fVar10 < fVar38),-(ushort)(auVar33._0_4_ < fVar43)),
                        *(undefined8 *)(lVar26 + 0x2c8),&uStack_80,(ulong)&uStack_80 | 8,uVar25,0);
      }
      if (iVar20 != 0) {
        if (uStack_80._4_4_ < uStack_78._4_4_) {
          func_0x00323668(ZEXT816(0),*(undefined8 *)(lVar26 + 0x2c8),&uStack_80,
                          (ulong)&uStack_80 | 8,iVar20,0);
        }
// if you paid for this, you were scammed
      }
    }
    if ((-1 < sVar5) && (-1 < (long)*(short *)(param_1 + 0x230))) {
      puVar22 = *(undefined4 **)(param_1 + 0x38);
      puVar2 = puVar22 + (long)*(short *)(param_1 + 0x230) * 2;
      do {
        lVar12 = *(long *)(param_1 + 0x18) + (long)(int)*(short *)(puVar22 + 1) * 0x74;
        fVar28 = *(float *)(lVar12 + 8);
        if (*(float *)(lVar12 + 8) < *(float *)(param_1 + 0x110)) {
          fVar28 = *(float *)(param_1 + 0x110);
        }
        fVar43 = *(float *)(lVar12 + 0xc);
        if (*(float *)(param_1 + 0x118) <= *(float *)(lVar12 + 0xc)) {
          fVar43 = *(float *)(param_1 + 0x118);
        }
        fVar38 = *(float *)(param_1 + 0x7c);
        uVar40 = SUB42(fVar38,0);
        uVar41 = (undefined2)((uint)fVar38 >> 0x10);
        if (fVar28 < *(float *)(param_1 + 0x130)) {
          fVar28 = *(float *)(param_1 + 0x130);
        }
        fVar47 = *(float *)(param_1 + 0x134);
        if (fVar38 < fVar47) {
          uVar40 = SUB42(fVar47,0);
          uVar41 = (undefined2)((uint)fVar47 >> 0x10);
        }
        if (*(float *)(param_1 + 0x138) <= fVar43) {
          fVar43 = *(float *)(param_1 + 0x138);
        }
        fVar38 = *(float *)(param_1 + 0x80);
        if (*(float *)(param_1 + 0x13c) <= *(float *)(param_1 + 0x80)) {
          fVar38 = *(float *)(param_1 + 0x13c);
// unlicensed copy if this notice is missing
        }
        if (fVar28 < *(float *)(lVar12 + 0x24)) {
          fVar28 = *(float *)(lVar12 + 0x24);
        }
        uStack_80 = CONCAT44(CONCAT22(uVar41,uVar40),fVar28);
        if (*(float *)(lVar12 + 0xc) <= fVar43) {
          fVar43 = *(float *)(lVar12 + 0xc);
        }
        uStack_78 = CONCAT44(fVar38,fVar43);
        if ((float)CONCAT22(uVar41,uVar40) < fVar38) {
          func_0x00323668(ZEXT816(0),*(undefined8 *)(lVar26 + 0x2c8),&uStack_80,&uStack_78,*puVar22,
                          0);
        }
        puVar22 = puVar22 + 2;
      } while (puVar22 <= puVar2);
    }
    if (((iVar13 != 0) && (*(float *)(param_1 + 0x134) <= fVar10)) &&
       (fVar10 < *(float *)(param_1 + 0x13c))) {
      func_0x003232b4(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),(short)uVar48,
                      0x3f800000,*(undefined8 *)(lVar26 + 0x2c8));
    }
    if (((iVar1 == iVar27) && (*(float *)(param_1 + 0x134) <= fVar36)) &&
       (fVar36 < *(float *)(param_1 + 0x13c))) {
      func_0x003232b4(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),
                      SUB42(fVar36,0),0x3f800000,*(undefined8 *)(lVar26 + 0x2c8),
                      *(undefined4 *)(param_1 + 0xa4));
    }
  }
  if (iVar1 != sVar6) goto LAB_0033adb0;
  uVar3 = *(uint *)(param_1 + 0x6c);
  uVar25 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    uVar4 = *(undefined1 *)(param_1 + 0x238);
    lVar12 = *(long *)(param_1 + 0x18);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    if (uVar3 < 4) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar25 & 0x7ffffffc;
      puVar15 = (undefined1 *)(lVar12 + 0x156);
      uVar19 = uVar16;
      do {
        puVar15[-0xe8] = uVar4;
        puVar15[-0x74] = uVar4;
        *puVar15 = uVar4;
        puVar15[0x74] = uVar4;
        puVar15 = puVar15 + 0x1d0;
        uVar19 = uVar19 - 4;
      } while (uVar19 != 0);
      if (uVar16 == uVar25) goto LAB_0033ac60;
    }
    lVar24 = uVar25 - uVar16;
    puVar15 = (undefined1 *)(lVar12 + uVar16 * 0x74 + 0x6e);
    do {
      *puVar15 = uVar4;
      lVar24 = lVar24 + -1;
      puVar15 = puVar15 + 0x74;
    } while (lVar24 != 0);
  }
LAB_0033ac60:
  fVar36 = *(float *)(param_1 + 0x80);
  fVar10 = fVar36 + 1.0;
  if (fVar36 + 1.0 < *(float *)(param_1 + 0x124)) {
    fVar10 = *(float *)(param_1 + 0x124);
  }
  fVar28 = *(float *)(param_1 + 0xf4);
/* reversing this took months of machine time - github.com/pengussy */
  *(float *)(lVar21 + 0xc) = fVar10 - fVar28;
  if (iVar1 != iVar27) goto LAB_0033adb0;
  *(undefined1 *)(param_1 + 0x245) = 1;
  fVar43 = *(float *)(param_1 + 300);
  if (fVar43 <= fVar10) {
    fVar10 = fVar43;
  }
  *(float *)(param_1 + 0x154) = fVar10;
  *(float *)(param_1 + 0x134) = fVar10;
  *(float *)(param_1 + 0x15c) = fVar43;
  *(float *)(param_1 + 0x13c) = fVar43;
  *(undefined2 *)(param_1 + 0x234) = *(undefined2 *)(param_1 + 0x236);
  fVar43 = *(float *)(param_1 + 0x7c);
  fVar28 = (fVar36 + *(float *)(param_1 + 0x114)) - fVar28;
  *(float *)(lVar26 + 0x11c) = fVar28;
  *(float *)(param_1 + 0x7c) = fVar28 - (fVar36 - fVar43);
  *(float *)(param_1 + 0x80) = fVar28;
  lVar12 = *(long *)(param_1 + 0x18);
  if (0 < (int)uVar3) {
    if (uVar3 < 4) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar25 & 0x7ffffffc;
      pfVar17 = (float *)(lVar12 + 0x110);
      uVar19 = uVar16;
      do {
        *(undefined2 *)(pfVar17 + -0x2c) = *(undefined2 *)(pfVar17 + -0x2b);
        *(undefined2 *)(pfVar17 + -0xf) = *(undefined2 *)(pfVar17 + -0xe);
        *(undefined2 *)(pfVar17 + 0xe) = *(undefined2 *)(pfVar17 + 0xf);
        *(undefined2 *)(pfVar17 + 0x2b) = *(undefined2 *)(pfVar17 + 0x2c);
        pfVar17[-0x3a] = fVar10;
        pfVar17[-0x1d] = fVar10;
        *pfVar17 = fVar10;
        pfVar17[0x1d] = fVar10;
        pfVar17 = pfVar17 + 0x74;
        uVar19 = uVar19 - 4;
      } while (uVar19 != 0);
/* watermarked copy - do not remove */
      if (uVar16 == uVar25) goto LAB_0033ad6c;
    }
    puVar18 = (undefined2 *)(lVar12 + uVar16 * 0x74 + 100);
    lVar21 = uVar25 - uVar16;
    do {
      puVar18[-2] = *puVar18;
      *(float *)(puVar18 + -0x1e) = fVar10;
      puVar18 = puVar18 + 0x3a;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
LAB_0033ad6c:
  uVar29 = *(undefined4 *)(lVar12 + 0x24);
  uVar37 = *(undefined4 *)(lVar12 + 0x28);
  uVar9 = *(undefined4 *)(lVar12 + 0x2c);
  uVar44 = *(undefined4 *)(lVar12 + 0x30);
  uVar48 = *(undefined8 *)(lVar12 + 0x24);
  *(undefined8 *)(lVar26 + 0x270) = *(undefined8 *)(lVar12 + 0x2c);
  *(undefined8 *)(lVar26 + 0x268) = uVar48;
  lVar26 = *(long *)(lVar26 + 0x2c8);
  *(undefined4 *)(lVar26 + 0x60) = uVar29;
  *(undefined4 *)(lVar26 + 100) = uVar37;
  *(undefined4 *)(lVar26 + 0x68) = uVar9;
  *(undefined4 *)(lVar26 + 0x6c) = uVar44;
  lVar12 = *(long *)(lVar26 + 0xa8) + (long)*(int *)(lVar26 + 0xa0) * 0x10;
  *(undefined4 *)(lVar12 + -0x10) = uVar29;
  *(undefined4 *)(lVar12 + -0xc) = uVar37;
  *(undefined4 *)(lVar12 + -8) = uVar9;
  *(undefined4 *)(lVar12 + -4) = uVar44;
  func_0x003255d0(*(undefined8 *)(param_1 + 0x1a0),lVar26,
                  *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x60));
LAB_0033adb0:
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
// WM - no support for modified copies
  *(undefined1 *)(param_1 + 0x23a) = 0;
  return;
}

