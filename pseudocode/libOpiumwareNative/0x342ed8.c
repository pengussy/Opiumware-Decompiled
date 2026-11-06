/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x342ed8:250376583b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00342ed8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auVar6 [4];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined *puVar16;
  float *pfVar17;
  float *pfVar18;
  undefined4 uVar19;
  float *pfVar20;
  long lVar21;
  int *piVar22;
/* stripping the watermark breaks the license - github.com/pengussy */
  uint uVar23;
  int iVar24;
  ulong uVar25;
  undefined4 *puVar26;
  ulong uVar27;
  float *pfVar28;
  long lVar29;
  undefined8 *puVar30;
  uint uVar31;
  int *piVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  float *pfVar37;
  long lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
/*  keep the notice, keep the source honest  */
  undefined8 uVar46;
  float fVar47;
  undefined1 auVar48 [4];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  char *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int aiStack_11c [3];
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
/*  do not claim this as your own  */
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined5 uStack_bc;
  undefined3 uStack_b7;
  long lStack_b0;
  
  lVar33 = lRam00000000020973e0;
  lStack_b0 = *(long *)PTR____stack_chk_guard_01f20200;
  pfVar37 = (float *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x83) = 0;
  fVar44 = *(float *)(param_1 + 0x48);
  pfVar20 = (float *)(param_1 + 0x40);
  fVar39 = *pfVar20 - *pfVar37;
  *(float *)(param_1 + 0x48) = fVar39;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  _auStack_110 = 0;
  uVar12 = *(uint *)(param_1 + 8);
  if ((int)uVar12 < 1) {
    uVar23 = 0;
/* WM - keep the notice, keep the source honest */
    uVar31 = 0;
  }
  else {
    lVar21 = 0;
    uVar25 = 0;
    uVar31 = 0;
    uVar23 = 0;
    lVar29 = *(long *)(param_1 + 0x10);
    do {
      piVar22 = (int *)(lVar29 + lVar21);
      if ((piVar22[2] < *(int *)(param_1 + 0x34)) || ((char)piVar22[10] == '\x01')) {
        iVar14 = *piVar22;
        if (*(int *)(param_1 + 0x2c) == iVar14) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          if (*(int *)(param_1 + 0x20) != iVar14) goto LAB_00342ff4;
LAB_00343014:
          *(undefined4 *)(param_1 + 0x20) = 0;
          iVar24 = *(int *)(param_1 + 0x24);
        }
        else {
          if (*(int *)(param_1 + 0x20) == iVar14) goto LAB_00343014;
LAB_00342ff4:
          iVar24 = *(int *)(param_1 + 0x24);
        }
        if (iVar24 == iVar14) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        if (uVar25 != uVar31) {
          puVar30 = (undefined8 *)(lVar29 + (long)(int)uVar31 * 0x2c);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          uVar54 = *(undefined8 *)(piVar22 + 2);
          uVar15 = *(undefined8 *)piVar22;
          uVar43 = *(undefined8 *)(piVar22 + 6);
          uVar42 = *(undefined8 *)(piVar22 + 4);
          uVar46 = *(undefined8 *)((long)piVar22 + 0x19);
          *(undefined8 *)((long)puVar30 + 0x21) = *(undefined8 *)((long)piVar22 + 0x21);
          *(undefined8 *)((long)puVar30 + 0x19) = uVar46;
          puVar30[1] = uVar54;
          *puVar30 = uVar15;
          puVar30[3] = uVar43;
          puVar30[2] = uVar42;
          lVar29 = *(long *)(param_1 + 0x10);
        }
        lVar36 = lVar29 + (long)(int)uVar31 * 0x2c;
        *(short *)(lVar36 + 0x26) = (short)uVar31;
        uVar12 = *(uint *)(lVar36 + 4);
        lVar36 = 1;
        if ((uVar12 & 0x80) != 0) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
          lVar36 = 2;
        }
        lVar38 = 0;
        if ((uVar12 & 0x40) == 0) {
          lVar38 = lVar36;
        }
        if (0 < (int)uVar31) {
          uVar4 = *(uint *)(lVar29 + (ulong)uVar31 * 0x2c + -0x28);
          uVar1 = (uint)((uVar4 & 0x40) == 0) & uVar12 >> 6;
          if ((uVar4 & 0xc0) == 0x80 && (uVar12 & 0xc0) != 0x80) {
            uVar1 = 1;
          }
          uVar23 = uVar1 | uVar23;
        }
        aiStack_11c[lVar38 * 4 + 3] = aiStack_11c[lVar38 * 4 + 3] + 1;
        uVar31 = uVar31 + 1;
        uVar12 = *(uint *)(param_1 + 8);
      }
      uVar25 = uVar25 + 1;
      lVar21 = lVar21 + 0x2c;
    } while ((long)uVar25 < (long)(int)uVar12);
  }
/* WM - more drops soon - github.com/pengussy */
  if (uVar12 != uVar31) {
    iVar14 = *(int *)(param_1 + 0xc);
    if (iVar14 < (int)uVar31) {
      uVar12 = 8;
      if (iVar14 != 0) {
        uVar12 = iVar14 + iVar14 / 2;
      }
      if ((int)uVar12 <= (int)uVar31) {
        uVar12 = uVar31;
      }
      uVar15 = func_0x002fd6d8((long)(int)uVar12 * 0x2c);
      if (*(long *)(param_1 + 0x10) != 0) {
        _memcpy(uVar15,*(long *)(param_1 + 0x10),(long)*(int *)(param_1 + 8) * 0x2c);
        func_0x002fda6c(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined8 *)(param_1 + 0x10) = uVar15;
      *(uint *)(param_1 + 0xc) = uVar12;
    }
    *(uint *)(param_1 + 8) = uVar31;
  }
  if (1 < uVar31 && ((uVar23 ^ 0xffffffff) & 1) == 0) {
    _qsort(*(undefined8 *)(param_1 + 0x10),(long)(int)uVar31,0x2c,&DAT_0034418c);
  }
  fVar51 = *(float *)(lVar33 + 0xcdc);
  auVar6 = auStack_110;
  uVar25 = (ulong)(int)auStack_110;
  iVar14 = (int)uStack_100;
  uVar34 = uStack_100 & 0xffffffff;
// WM - if you paid for this, you were scammed
  iVar24 = (int)uStack_f0;
  uVar35 = uStack_f0 & 0xffffffff;
  fVar53 = fVar51;
  if ((int)uStack_f0 + (int)uStack_100 < 1 || (long)uVar25 < 1) {
    fVar53 = 0.0;
  }
  fVar40 = fVar51;
  if ((int)uStack_f0 < 1 || (int)uStack_100 < 1) {
    fVar40 = 0.0;
  }
  uStack_108 = CONCAT44(fVar53,(float)uStack_108);
  uStack_f8 = CONCAT44(fVar40,(float)uStack_f8);
  fVar49 = *(float *)(param_1 + 0x28);
  if (fVar49 != 0.0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  fVar50 = *(float *)(param_1 + 0x24);
  if (fVar50 != 0.0) {
    *(float *)(param_1 + 0x20) = fVar50;
    *(undefined4 *)(param_1 + 0x24) = 0;
    fVar49 = fVar50;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar12 = *(uint *)(param_1 + 8);
    if (0 < (int)uVar12) {
      lVar21 = 0;
      piVar22 = *(int **)(param_1 + 0x10);
      do {
        if (*piVar22 == *(int *)(param_1 + 0x7c)) {
          if (((uint)piVar22[1] >> 5 & 1) == 0) {
            uVar31 = (int)*(short *)(param_1 + 0x80) - (int)lVar21;
            if (uVar31 < uVar12) {
              piVar32 = *(int **)(param_1 + 0x10) + (ulong)uVar31 * 0xb;
              if ((((uint)piVar32[1] >> 5 & 1) == 0) && (((piVar32[1] ^ piVar22[1]) & 0xc0U) == 0))
              {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                uStack_d8 = *(undefined8 *)(piVar22 + 2);
                uStack_e0 = *(undefined8 *)piVar22;
                uStack_d0 = *(undefined8 *)(piVar22 + 4);
                uStack_c8 = (undefined4)*(undefined8 *)(piVar22 + 6);
                uStack_bc = (undefined5)*(undefined8 *)(piVar22 + 9);
                uStack_b7 = (undefined3)((ulong)*(undefined8 *)(piVar22 + 9) >> 0x28);
                uStack_c4 = (undefined4)*(undefined8 *)(piVar22 + 7);
                uStack_c0 = (undefined4)((ulong)*(undefined8 *)(piVar22 + 7) >> 0x20);
                uVar12 = (uint)*(short *)(param_1 + 0x80);
                piVar5 = piVar22 + 0xb;
                if ((int)uVar12 < 1) {
                  piVar22 = piVar32 + 0xb;
                  piVar5 = piVar32;
                }
                uVar31 = -uVar12;
                if (-1 < (int)uVar12) {
                  uVar31 = uVar12;
                }
                _memmove(piVar22,piVar5,(ulong)uVar31 * 0x2c);
                *(ulong *)((long)piVar32 + 0x21) = CONCAT53(uStack_bc,uStack_c0._1_3_);
                *(ulong *)((long)piVar32 + 0x19) =
                     CONCAT17((undefined1)uStack_c0,CONCAT43(uStack_c4,uStack_c8._1_3_));
                *(ulong *)(piVar32 + 6) = CONCAT44(uStack_c4,uStack_c8);
                *(undefined8 *)(piVar32 + 4) = uStack_d0;
                *(undefined8 *)(piVar32 + 2) = uStack_d8;
                *(undefined8 *)piVar32 = uStack_e0;
                if ((*(byte *)(param_1 + 0x1a) >> 6 & 1) != 0) {
                  func_0x0031c2d8();
                }
                fVar50 = *(float *)(param_1 + 0x7c);
                if (*(float *)(param_1 + 0x7c) != *(float *)(param_1 + 0x20)) {
                  fVar50 = fVar49;
                }
                fVar49 = fVar50;
              }
            }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
          }
          break;
        }
        lVar21 = lVar21 + -1;
        piVar22 = piVar22 + 0xb;
      } while (-lVar21 != (ulong)uVar12);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  lVar21 = lRam00000000020973e0;
  if ((*(byte *)(param_1 + 0x18) >> 2 & 1) != 0) {
    lVar29 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    fVar50 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                       lRam00000000020973e0);
    fVar41 = *(float *)(lRam00000000020973e0 + 0xcc8);
    uVar15 = *(undefined8 *)(lVar29 + 0x118);
    uVar19 = *(undefined4 *)(param_1 + 0x3c);
    *(float *)(lVar29 + 0x118) = *(float *)(param_1 + 0x38) - fVar41;
    *(undefined4 *)(lVar29 + 0x11c) = uVar19;
    *(float *)(param_1 + 0x38) = fVar50 + fVar41 + *(float *)(param_1 + 0x38);
    uVar54 = *(undefined8 *)(lVar21 + 0xdb8);
    uStack_130 = *(undefined8 *)(lVar21 + 0xdb0);
    uStack_128._4_4_ = (float)((ulong)uVar54 >> 0x20);
    uStack_128 = CONCAT44(uStack_128._4_4_ * 0.5,(int)uVar54);
    func_0x002fefa0(0,&uStack_130);
    uStack_e0 = 0;
    uStack_d8 = 0;
    func_0x002fefa0(0x16,&uStack_e0);
    uVar27 = func_0x00340c48(&UNK_01c30b00,0,0x50);
    func_0x002ff010(2);
    if ((uVar27 & 1) == 0) {
/* WM - no support for modified copies */
      *(undefined8 *)(lVar29 + 0x118) = uVar15;
    }
    else {
      iVar11 = *(int *)(param_1 + 8);
      if (iVar11 < 1) {
        pfVar17 = (float *)0x0;
      }
      else {
        lVar36 = 0;
        lVar21 = 0;
        pfVar28 = (float *)0x0;
        do {
          pfVar18 = (float *)(*(long *)(param_1 + 0x10) + lVar36);
          pfVar17 = pfVar28;
          if ((*(byte *)((long)pfVar18 + 6) >> 5 & 1) == 0) {
            if (pfVar18[8] == -NAN) {
              puVar16 = &UNK_01c2edb5;
            }
            else {
              puVar16 = (undefined *)(*(long *)(param_1 + 0xa8) + (long)(int)pfVar18[8]);
            }
            uStack_e0 = 0;
            iVar11 = func_0x003412d0(puVar16,*(float *)(param_1 + 0x20) == *pfVar18,0,&uStack_e0);
            pfVar17 = pfVar18;
            if (iVar11 == 0) {
              pfVar17 = pfVar28;
            }
            iVar11 = *(int *)(param_1 + 8);
          }
          lVar21 = lVar21 + 1;
          lVar36 = lVar36 + 0x2c;
          pfVar28 = pfVar17;
        } while (lVar21 < iVar11);
      }
      lVar21 = lRam00000000020973e0;
      *(int *)(&UNK_000025d0 + lRam00000000020973e0) =
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
           *(int *)(&UNK_000025d0 + lRam00000000020973e0) + -1;
      func_0x002fdb28(&uStack_e0,0x10,"##Combo_%02d");
      iVar11 = _strcmp(*(undefined8 *)(*(long *)(&UNK_000014a8 + lVar21) + 8),&uStack_e0);
      if (iVar11 == 0) {
        func_0x0031ae64();
        *(undefined8 *)(lVar29 + 0x118) = uVar15;
      }
      else {
        FUN_002ff090("Calling EndCombo() in wrong window!");
        *(undefined8 *)(lVar29 + 0x118) = uVar15;
      }
      if (pfVar17 != (float *)0x0) {
        fVar49 = *pfVar17;
        *(float *)(param_1 + 0x20) = fVar49;
      }
    }
  }
  iVar11 = iVar24 + (int)auVar6;
  aiStack_11c[0] = 0;
  aiStack_11c[1] = iVar11;
  aiStack_11c[2] = (int)auVar6;
  iVar3 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(&UNK_0000239c + lVar33);
  if (iVar13 < iVar3) {
    iVar2 = 8;
    if (iVar13 != 0) {
      iVar2 = iVar13 + iVar13 / 2;
    }
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    uVar15 = func_0x002fd6d8((long)iVar2 * 0xc);
    if (*(long *)(&UNK_000023a0 + lVar33) != 0) {
/* WM - stripping the watermark breaks the license */
      _memcpy(uVar15,*(long *)(&UNK_000023a0 + lVar33),(long)*(int *)(&UNK_00002398 + lVar33) * 0xc)
      ;
      func_0x002fda6c(*(undefined8 *)(&UNK_000023a0 + lVar33));
    }
    *(undefined8 *)(&UNK_000023a0 + lVar33) = uVar15;
    *(int *)(&UNK_0000239c + lVar33) = iVar2;
    *(int *)(&UNK_00002398 + lVar33) = iVar3;
    uVar12 = *(uint *)(param_1 + 0x18);
    if ((uVar12 >> 7 & 1) == 0) goto LAB_0034348c;
LAB_00343778:
    fVar50 = *(float *)(lVar33 + 0xd28);
    if (0 < *(int *)(param_1 + 8)) goto LAB_0034349c;
LAB_0034378c:
    bVar9 = false;
    pfVar17 = (float *)0x0;
    bVar10 = false;
    fVar45 = 0.0;
    fVar57 = 0.0;
    fVar47 = 0.0;
    fVar51 = 0.0;
    fVar41 = 0.0;
    auVar48 = (undefined1  [4])0x0;
  }
  else {
    *(int *)(&UNK_00002398 + lVar33) = iVar3;
    uVar12 = *(uint *)(param_1 + 0x18);
    if ((uVar12 >> 7 & 1) != 0) goto LAB_00343778;
LAB_0034348c:
    fVar50 = 1.0;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    if (*(int *)(param_1 + 8) < 1) goto LAB_0034378c;
LAB_0034349c:
    lVar29 = 0;
    lVar21 = 0;
    pfVar17 = (float *)0x0;
    bVar9 = false;
    uVar12 = 0xffffffff;
    do {
      lVar36 = lRam00000000020973e0;
      lVar38 = *(long *)(param_1 + 0x10);
      pfVar28 = (float *)(lVar38 + lVar29);
      pfVar18 = pfVar17;
      if ((pfVar17 == (float *)0x0) || ((int)pfVar17[3] < (int)pfVar28[3])) {
        pfVar18 = pfVar28;
        if ((*(byte *)((long)pfVar28 + 6) & 0x20) != 0) {
          pfVar18 = pfVar17;
        }
        bVar10 = *pfVar28 == *(float *)(param_1 + 0x20);
        fVar41 = *pfVar28;
        if (fVar49 != 0.0) goto LAB_00343580;
LAB_003435d8:
        fVar49 = fVar41;
        if (*(float *)(&UNK_000021c4 + lVar33) != fVar49) {
          fVar49 = 0.0;
        }
        iVar3 = *(int *)(lVar38 + lVar29 + 0x20);
        if (iVar3 != -1) goto LAB_00343590;
LAB_003435f4:
        puVar16 = &UNK_01c2edb5;
        fVar41 = *(float *)(lVar38 + lVar29 + 0x1c);
        uVar31 = *(uint *)(lVar38 + lVar29 + 4);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        if (0.0 <= fVar41) goto LAB_003435a8;
LAB_0034360c:
        fVar41 = (float)func_0x002ffe24(0xbf800000,puVar16,0,1);
        fVar47 = 1.0;
        if ((uVar31 & 0x100001) != 0x100000) {
          fVar47 = *(float *)(lVar36 + 0xcdc) +
                   *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                             lVar36);
        }
        fVar41 = fVar41 + *(float *)(lVar36 + 0xcc4) + *(float *)(lVar36 + 0xcc4) + fVar47;
        if (*(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                      lRam00000000020973e0) * 20.0 <= fVar41) {
          fVar41 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                             lRam00000000020973e0) * 20.0;
        }
        uVar31 = *(uint *)(lVar38 + lVar29 + 4);
        *(float *)(lVar38 + lVar29 + 0x18) = fVar41;
        pfVar17 = pfVar18;
      }
      else {
        bVar10 = *pfVar28 == *(float *)(param_1 + 0x20);
        fVar41 = *pfVar28;
        if (fVar49 == 0.0) goto LAB_003435d8;
LAB_00343580:
        iVar3 = *(int *)(lVar38 + lVar29 + 0x20);
        if (iVar3 == -1) goto LAB_003435f4;
LAB_00343590:
        puVar16 = (undefined *)(*(long *)(param_1 + 0xa8) + (long)iVar3);
        fVar41 = *(float *)(lVar38 + lVar29 + 0x1c);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar31 = *(uint *)(lVar38 + lVar29 + 4);
        if (fVar41 < 0.0) goto LAB_0034360c;
LAB_003435a8:
        *(float *)(lVar38 + lVar29 + 0x18) = fVar41;
        pfVar17 = pfVar18;
      }
      if ((uVar31 >> 0x15 & 1) == 0) {
        if (fVar41 < *(float *)(lVar33 + 0xd24)) {
          fVar41 = *(float *)(lVar33 + 0xd24);
        }
        *(float *)(lVar38 + lVar29 + 0x18) = fVar41;
      }
      bVar9 = (bool)(bVar10 | bVar9);
      uVar23 = 1;
      if ((uVar31 & 0x80) != 0) {
        uVar23 = 2;
      }
      if ((uVar31 & 0x40) != 0) {
        uVar23 = 0;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      }
      fVar47 = fVar51;
      if (uVar23 != uVar12) {
        fVar47 = 0.0;
      }
      fVar45 = fVar41;
      if (fVar50 <= fVar41) {
        fVar45 = fVar50;
      }
      *(ulong *)(auStack_10c + (ulong)uVar23 * 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(auStack_10c + (ulong)uVar23 * 0x10) >> 0x20) +
                    fVar47 + fVar45,
                    (float)*(undefined8 *)(auStack_10c + (ulong)uVar23 * 0x10) + fVar47 + fVar41);
      iVar3 = aiStack_11c[uVar23];
      aiStack_11c[uVar23] = iVar3 + 1;
      puVar26 = (undefined4 *)(*(long *)(&UNK_000023a0 + lVar33) + (long)iVar3 * 0xc);
      *puVar26 = (int)lVar21;
      puVar26[1] = fVar41;
      puVar26[2] = fVar41;
      if (fVar41 <= 1.0) {
        fVar41 = 1.0;
      }
      *(float *)(lVar38 + lVar29 + 0x14) = fVar41;
      lVar21 = lVar21 + 1;
      lVar29 = lVar29 + 0x2c;
      uVar12 = uVar23;
    } while (lVar21 < *(int *)(param_1 + 8));
    auStack_10c = SUB84((ulong)_auStack_110 >> 0x20,0);
    uVar12 = *(uint *)(param_1 + 0x18);
    fVar57 = uStack_f0._4_4_ + 0.0;
    fVar45 = (float)uStack_e8 + 0.0;
    bVar10 = 1 < *(int *)(param_1 + 8);
    auVar48 = auStack_10c;
    fVar51 = uStack_100._4_4_;
    fVar41 = (float)uStack_108;
// do not claim this as your own
    fVar47 = (float)uStack_f8;
  }
  fVar56 = (float)auVar48 + fVar53;
  *(float *)(param_1 + 0x58) = fVar56 + 0.0 + fVar51 + fVar40 + fVar57;
  if ((uVar12 >> 9 & 1) == 0) {
    fVar45 = fVar53 + fVar41 + 0.0 + fVar40 + fVar47 + fVar45;
  }
  else {
    fVar45 = *(float *)(param_1 + 0x54);
  }
  fVar41 = *pfVar20;
  bVar7 = false;
  if (fVar41 - *pfVar37 < fVar45) {
    bVar7 = bVar10;
  }
  if (!bVar7) {
    *(undefined1 *)(param_1 + 0x86) = 0;
    bVar10 = false;
    bVar7 = true;
    bVar8 = false;
    if (fVar49 == 0.0) {
      bVar10 = false;
/* WM - do not claim this as your own */
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar44) && !NAN(fVar39)) {
        bVar10 = fVar44 < fVar39;
        bVar7 = fVar44 == fVar39;
        bVar8 = false;
      }
    }
    if (!(!bVar7 && bVar10 == bVar8)) goto LAB_00343844;
    goto LAB_00343a34;
  }
  bVar10 = (uVar12 & 0x10) == 0;
  bVar7 = (uVar12 & 0x280) != 0;
  *(bool *)(param_1 + 0x86) = bVar10 && bVar7;
  lVar21 = lRam00000000020973e0;
  if (bVar10 && bVar7) {
    lVar29 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    fVar45 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                       lRam00000000020973e0) + -2.0;
    fVar52 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                       lRam00000000020973e0) + *(float *)(lRam00000000020973e0 + 0xcc8) * 2.0;
/* wm:found on a paste site? it was re-uploaded illegally */
    fVar55 = fVar45 + fVar45;
    uVar15 = *(undefined8 *)(lVar29 + 0x118);
    uStack_e0 = *(undefined8 *)(lRam00000000020973e0 + 0xdb0);
    uStack_d8._4_4_ = (float)((ulong)*(undefined8 *)(lRam00000000020973e0 + 0xdb8) >> 0x20);
    uStack_d8 = CONCAT44(uStack_d8._4_4_ * 0.5,(int)*(undefined8 *)(lRam00000000020973e0 + 0xdb8));
    func_0x002fefa0(0,&uStack_e0);
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x002fefa0(0x16,&uStack_130);
    func_0x00317968(10,1);
    uVar54 = *(undefined8 *)(lVar21 + 0x94);
    *(undefined8 *)(lVar21 + 0x94) = _UNK_01ae5c78;
    fVar47 = *(float *)(param_1 + 0x40) - fVar55;
    fVar41 = *(float *)(param_1 + 0x38);
    if (*(float *)(param_1 + 0x38) < fVar47) {
      fVar41 = fVar47;
    }
    uVar19 = *(undefined4 *)(param_1 + 0x3c);
    *(float *)(lVar29 + 0x118) = fVar41;
    *(undefined4 *)(lVar29 + 0x11c) = uVar19;
    uVar12 = func_0x0033ea7c(fVar45,fVar52,&UNK_01c30b04,0,0x10);
    iVar3 = -(uVar12 & 1);
    uVar19 = *(undefined4 *)(param_1 + 0x3c);
    *(float *)(lVar29 + 0x118) = fVar45 + fVar41;
    *(undefined4 *)(lVar29 + 0x11c) = uVar19;
    iVar13 = func_0x0033ea7c(fVar45,fVar52,&UNK_01c30b08,1,0x10);
    if (iVar13 != 0) {
      iVar3 = 1;
    }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    func_0x003179b4();
    func_0x002ff010(2);
    *(undefined8 *)(lVar21 + 0x94) = uVar54;
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
      uVar12 = *(uint *)(param_1 + 8);
      if (0 < (int)uVar12) {
        uVar27 = 0;
        piVar22 = *(int **)(param_1 + 0x10);
        do {
          if (*piVar22 == *(int *)(param_1 + 0x20)) goto LAB_00344110;
          uVar27 = uVar27 + 1;
          piVar22 = piVar22 + 0xb;
        } while (uVar12 != uVar27);
      }
    }
    *(undefined8 *)(lVar29 + 0x118) = uVar15;
    fVar41 = *pfVar20 - (fVar55 + 1.0);
    *pfVar20 = fVar41;
    bVar10 = false;
    bVar7 = true;
    bVar8 = false;
    if (fVar49 == 0.0) {
      bVar10 = false;
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar44) && !NAN(fVar39)) {
        bVar10 = fVar44 < fVar39;
        bVar7 = fVar44 == fVar39;
        bVar8 = false;
      }
    }
    if (!(!bVar7 && bVar10 == bVar8)) goto LAB_00343844;
    goto LAB_00343a34;
  }
  bVar10 = false;
/* WM - donate: donate/README.md */
  bVar7 = true;
  bVar8 = false;
  if (fVar49 == 0.0) {
    bVar10 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar44) && !NAN(fVar39)) {
      bVar10 = fVar44 < fVar39;
      bVar7 = fVar44 == fVar39;
      bVar8 = false;
    }
  }
  if (!(bVar7 || bVar10 != bVar8)) goto LAB_00343a34;
LAB_00343844:
  fVar41 = fVar41 - *pfVar37;
  if (fVar41 <= fVar56 + fVar57) goto LAB_00343a4c;
LAB_00343858:
  fVar39 = (fVar51 + fVar40) - ((fVar41 - fVar56) - fVar57);
  if (fVar39 < 0.0) {
    fVar39 = 0.0;
  }
LAB_00343a50:
  pcStack_138 = (char *)(param_1 + 0x86);
  fVar56 = fVar56 + fVar57;
  bVar10 = false;
  if (((*(ushort *)(param_1 + 0x18) & 0x180) == 0) && (bVar10 = false, !NAN(fVar56) && !NAN(fVar41))
     ) {
    bVar10 = fVar56 < fVar41;
  }
  if ((1.0 <= fVar39) && (!bVar10)) {
    iVar3 = iVar11;
    iVar13 = iVar14;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    if (fVar41 <= fVar56) {
      iVar3 = 0;
      iVar13 = iVar11;
    }
    func_0x00340814(fVar39,fVar50,*(long *)(&UNK_000023a0 + lVar33) + (long)iVar3 * 0xc,iVar13);
    if (0 < iVar13) {
      lVar21 = (long)iVar3;
      pfVar28 = (float *)(*(long *)(&UNK_000023a0 + lVar33) + (long)iVar3 * 0xc + 4);
      do {
        if (-1 < (int)*pfVar28) {
          lVar29 = *(long *)(param_1 + 0x10) + (long)(int)pfVar28[-1] * 0x2c;
          fVar44 = (float)(uint)(int)*pfVar28;
          fVar39 = 1.0;
          if (1.0 < fVar44) {
            fVar39 = fVar44;
          }
// keep the notice, keep the source honest
          lVar36 = 1;
          if ((*(uint *)(lVar29 + 4) & 0x80) != 0) {
            lVar36 = 2;
          }
          if ((*(uint *)(lVar29 + 4) & 0x40) != 0) {
            lVar36 = 0;
          }
          *(float *)(auStack_10c + lVar36 * 0x10) =
               *(float *)(auStack_10c + lVar36 * 0x10) - (*(float *)(lVar29 + 0x14) - fVar39);
          *(float *)(lVar29 + 0x14) = fVar39;
        }
        lVar21 = lVar21 + 1;
        pfVar28 = pfVar28 + 3;
      } while (lVar21 < iVar3 + iVar13);
    }
  }
  fVar39 = 0.0;
  if (0 < (int)auVar6) {
    uVar27 = 0;
    pfVar28 = (float *)(*(long *)(param_1 + 0x10) + 0x10);
    do {
      *pfVar28 = fVar39;
      pfVar28[4] = -NAN;
      fVar44 = 0.0;
      if (uVar27 < (int)auVar6 - 1) {
        fVar44 = *(float *)(lVar33 + 0xcdc);
      }
      fVar39 = fVar39 + pfVar28[1] + fVar44;
      uVar27 = uVar27 + 1;
      pfVar28 = pfVar28 + 0xb;
    } while (uVar25 != uVar27);
  }
  auVar48 = auStack_10c;
  fVar44 = (float)auStack_10c + fVar53;
  if (fVar44 < 0.0) {
    fVar44 = 0.0;
/* wm:unlicensed copy if this notice is missing */
  }
  fVar39 = fVar39 + fVar53;
  if (0 < iVar14) {
    uVar25 = 0;
    puVar26 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)(int)auVar6 * 0x2c + 0x20);
    do {
      puVar26[-4] = fVar39;
      *puVar26 = 0xffffffff;
      fVar51 = 0.0;
      if (uVar25 < iVar14 - 1) {
        fVar51 = *(float *)(lVar33 + 0xcdc);
      }
      pfVar28 = (float *)(puVar26 + -3);
      puVar26 = puVar26 + 0xb;
      fVar39 = fVar39 + *pfVar28 + fVar51;
      uVar25 = uVar25 + 1;
    } while (uVar34 != uVar25);
  }
  fVar51 = uStack_100._4_4_ + fVar40;
  if (fVar51 < 0.0) {
    fVar51 = 0.0;
  }
  fVar50 = uStack_f0._4_4_;
  if (0 < iVar24) {
    uVar25 = 0;
    fVar47 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) - uStack_f0._4_4_;
    fVar41 = 0.0;
    if (0.0 < fVar47) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      fVar41 = fVar47;
    }
    if (fVar39 + fVar40 <= fVar41) {
      fVar41 = fVar39 + fVar40;
    }
    puVar26 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)(iVar14 + (int)auVar6) * 0x2c + 0x20)
    ;
    do {
      puVar26[-4] = fVar41;
      *puVar26 = 0xffffffff;
      fVar39 = 0.0;
      if (uVar25 < iVar24 - 1) {
        fVar39 = *(float *)(lVar33 + 0xcdc);
      }
      pfVar28 = (float *)(puVar26 + -3);
      puVar26 = puVar26 + 0xb;
      fVar41 = fVar41 + *pfVar28 + fVar39;
      uVar25 = uVar25 + 1;
    } while (uVar35 != uVar25);
/* wm:more drops soon - github.com/pengussy */
  }
  fVar39 = uStack_f0._4_4_ + 0.0;
  if (uStack_f0._4_4_ < 0.0) {
    fVar39 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar44 + 0.0 + fVar51 + fVar39;
  if (*(int *)(param_1 + 0xa4) < 0) {
    uVar15 = func_0x002fd6d8(0);
    if (*(long *)(param_1 + 0xa8) != 0) {
      _memcpy(uVar15,*(long *)(param_1 + 0xa8),(long)*(int *)(param_1 + 0xa0));
      func_0x002fda6c(*(undefined8 *)(param_1 + 0xa8));
    }
    *(undefined8 *)(param_1 + 0xa8) = uVar15;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (bVar9 || *(int *)(param_1 + 0x34) + 1 < *(int *)(lVar33 + 4)) {
    fVar39 = *(float *)(param_1 + 0x20);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (*(float *)(param_1 + 0x20) == 0.0) {
      iVar14 = *(int *)(param_1 + 0x24);
      goto joined_r0x00343d78;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar14 = *(int *)(param_1 + 0x24);
joined_r0x00343d78:
    fVar39 = 0.0;
    if ((iVar14 == 0) && (fVar39 = 0.0, pfVar17 != (float *)0x0)) {
      fVar49 = *pfVar17;
      *(float *)(param_1 + 0x20) = fVar49;
      fVar39 = fVar49;
    }
  }
  *(float *)(param_1 + 0x2c) = fVar39;
  *(undefined1 *)(param_1 + 0x84) = 0;
  if (fVar49 == 0.0) {
    if (((*pcStack_138 == '\x01') && (iVar14 = func_0x00306764(pfVar37,pfVar20,1), iVar14 != 0)) &&
       (iVar14 = func_0x0030604c(*(undefined8 *)(&UNK_000014a8 + lVar33),0), iVar14 != 0)) {
      bVar10 = *(char *)(lVar33 + 0xb8a) == '\0';
/* wm:chat: discord.gg/sdkhDjTex */
      lVar21 = 0x110;
      if (bVar10) {
        lVar21 = 0x114;
      }
      fVar39 = *(float *)(lVar33 + lVar21);
      uVar19 = 0x295;
      if (!bVar10) {
        uVar19 = 0x296;
      }
      iVar14 = func_0x00319114(uVar19,*(undefined4 *)(param_1 + 0x1c));
      if ((iVar14 != 0) && (fVar39 != 0.0)) {
        fVar44 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 100) = 0;
        fVar39 = *(float *)(param_1 + 0x60) +
                 (fVar39 * (((fVar44 - (float)auVar48) - fVar50) - fVar40)) / -3.0;
        fVar44 = *(float *)(param_1 + 0x54) - fVar44;
        if (fVar44 <= fVar39) {
          fVar39 = fVar44;
        }
        if (fVar39 < 0.0) {
          fVar39 = 0.0;
        }
        *(float *)(param_1 + 0x60) = fVar39;
      }
      func_0x00319c24(uVar19,*(undefined4 *)(param_1 + 0x1c),0);
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 8);
    if (0 < (int)uVar12) {
      uVar25 = 0;
      pfVar20 = (float *)(*(long *)(param_1 + 0x10) + 0x14);
      do {
        if (pfVar20[-5] == fVar49) {
          if (((uint)pfVar20[-4] & 0xc0) != 0) break;
          fVar51 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                             lRam00000000020973e0);
/* no support for modified copies - github.com/pengussy */
          fVar44 = (((*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) - (float)auVar48) -
                   fVar50) - fVar40;
          fVar39 = -0.0;
          if ((int)auVar6 <= (int)uVar25) {
            fVar39 = fVar51;
          }
          fVar39 = (pfVar20[-1] - (float)auVar48) - fVar39;
          if ((int)(uVar12 - iVar24) <= (int)uVar25 + 1) {
            fVar51 = 1.0;
          }
          fVar51 = (pfVar20[-1] - (float)auVar48) + *pfVar20 + fVar51;
          *(undefined4 *)(param_1 + 100) = 0;
          bVar10 = false;
          bVar9 = false;
          if (*(float *)(param_1 + 0x60) <= fVar39) {
            bVar10 = false;
            bVar9 = true;
            if (!NAN(fVar51 - fVar39) && !NAN(fVar44)) {
              bVar10 = fVar51 - fVar39 < fVar44;
              bVar9 = false;
            }
          }
          if (bVar10 == bVar9) {
// WM - proprietary - see LICENSE - do not sell
            fVar51 = *(float *)(param_1 + 0x5c) - fVar51;
            fVar49 = fVar39;
          }
          else {
            fVar49 = fVar51 - fVar44;
            if (fVar49 <= *(float *)(param_1 + 0x60)) break;
            fVar51 = (fVar39 - fVar44) - *(float *)(param_1 + 0x5c);
          }
          if (fVar51 < 0.0) {
            fVar51 = 0.0;
          }
          *(float *)(param_1 + 0x60) = fVar49;
          *(float *)(param_1 + 100) = fVar51;
          break;
        }
        uVar25 = uVar25 + 1;
        pfVar20 = pfVar20 + 0xb;
      } while (uVar12 != uVar25);
    }
/* WM - unlicensed copy if this notice is missing */
  }
  fVar39 = *(float *)(param_1 + 0x54) - (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38));
  uVar25 = *(ulong *)(param_1 + 0x5c);
  uVar25 = CONCAT44(fVar39,fVar39) ^
           (CONCAT44(fVar39,fVar39) ^ uVar25) &
           CONCAT44(-(uint)((float)(uVar25 >> 0x20) < fVar39),-(uint)((float)uVar25 < fVar39));
  uVar25 = CONCAT44(-(uint)(0.0 <= (float)(uVar25 >> 0x20)),-(uint)(0.0 <= (float)uVar25)) & uVar25;
  *(ulong *)(param_1 + 0x5c) = uVar25;
  fVar44 = (float)(uVar25 >> 0x20);
  fVar39 = (float)uVar25;
  if (fVar39 == fVar44) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    goto LAB_00344024;
  }
  fVar49 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar33);
  fVar41 = fVar49 * 70.0;
  fVar51 = *(float *)(param_1 + 0x68);
  if (*(float *)(param_1 + 0x68) < fVar41) {
    fVar51 = fVar41;
  }
  fVar41 = ABS(fVar44 - fVar39) / 0.3;
  if (fVar51 < fVar41) {
    fVar51 = fVar41;
  }
  *(float *)(param_1 + 0x68) = fVar51;
  if ((*(int *)(lVar33 + 4) <= *(int *)(param_1 + 0x34) + 1) &&
     (*(float *)(param_1 + 100) <= fVar49 * 10.0)) {
    fVar51 = fVar51 * *(float *)(lVar33 + 0x40);
    if (fVar39 < fVar44) {
      fVar39 = fVar39 + fVar51;
      if (fVar44 <= fVar39) {
        fVar39 = fVar44;
      }
      *(float *)(param_1 + 0x5c) = fVar39;
      goto LAB_00344024;
// stripping the watermark breaks the license
    }
    if (fVar39 <= fVar44) {
      *(float *)(param_1 + 0x5c) = fVar39;
      goto LAB_00344024;
    }
    fVar39 = fVar39 - fVar51;
    if (fVar39 < fVar44) {
      fVar39 = fVar44;
    }
    fVar44 = fVar39;
  }
  *(float *)(param_1 + 0x5c) = fVar44;
LAB_00344024:
  *(float *)(param_1 + 0x6c) = fVar53 + *(float *)(param_1 + 0x38) + (float)auVar48;
  *(float *)(param_1 + 0x70) = (*(float *)(param_1 + 0x40) - fVar50) - fVar40;
  lVar33 = *(long *)(&UNK_000014a8 + lVar33);
  *(undefined8 *)(lVar33 + 0x118) = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = CONCAT44(*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x54));
  uVar25 = func_0x003154fc(*(undefined4 *)(param_1 + 0x94),&uStack_e0);
  fVar44 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x58);
  fVar39 = *(float *)(lVar33 + 0x138);
  if (*(float *)(lVar33 + 0x138) < fVar44) {
    fVar39 = fVar44;
  }
  *(float *)(lVar33 + 0x138) = fVar39;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b0) {
    return uVar25;
  }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  auVar58 = ___stack_chk_fail();
  uVar12 = *(uint *)(auVar58._0_8_ + 4);
  iVar14 = 1;
  if ((uVar12 & 0x80) != 0) {
    iVar14 = 2;
  }
  if ((uVar12 & 0x40) != 0) {
    iVar14 = 0;
  }
  uVar12 = *(uint *)(auVar58._8_8_ + 4);
  iVar24 = 1;
  if ((uVar12 & 0x80) != 0) {
    iVar24 = 2;
  }
  if ((uVar12 & 0x40) != 0) {
    iVar24 = 0;
  }
  uVar12 = iVar14 - iVar24;
  if (uVar12 == 0) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    uVar12 = (int)*(short *)(auVar58._0_8_ + 0x26) - (int)*(short *)(auVar58._8_8_ + 0x26);
  }
  return (ulong)uVar12;
LAB_00344110:
  do {
    uVar23 = (uint)uVar27;
    uVar31 = iVar3 + uVar23;
    if (uVar12 <= iVar3 + uVar23) {
      uVar31 = uVar23;
    }
    pfVar28 = (float *)(*(int **)(param_1 + 0x10) + (long)(int)uVar31 * 0xb);
  } while (((*(byte *)((long)pfVar28 + 6) >> 5 & 1) != 0) &&
          (uVar27 = (ulong)(uVar23 + iVar3), iVar3 + uVar23 + iVar3 < uVar12));
  *(undefined8 *)(lVar29 + 0x118) = uVar15;
  fVar41 = *pfVar20 - (fVar55 + 1.0);
  *pfVar20 = fVar41;
  fVar49 = *pfVar28;
  if ((*(byte *)((long)pfVar28 + 6) >> 5 & 1) == 0) {
    *(float *)(param_1 + 0x20) = fVar49;
  }
  bVar10 = false;
  bVar7 = true;
/* do not claim this as your own - github.com/pengussy */
  bVar8 = false;
  if (fVar49 == 0.0) {
    bVar10 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar44) && !NAN(fVar39)) {
      bVar10 = fVar44 < fVar39;
      bVar7 = fVar44 == fVar39;
      bVar8 = false;
    }
  }
  if (!(!bVar7 && bVar10 == bVar8)) goto LAB_00343844;
LAB_00343a34:
  fVar49 = *(float *)(param_1 + 0x20);
  fVar41 = fVar41 - *pfVar37;
  if (fVar56 + fVar57 < fVar41) goto LAB_00343858;
LAB_00343a4c:
  fVar39 = (fVar56 + fVar57) - fVar41;
  goto LAB_00343a50;
}

