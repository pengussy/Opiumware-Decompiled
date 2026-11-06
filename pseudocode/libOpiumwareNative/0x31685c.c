/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x31685c:7a38e87f9b
 */

undefined1  [16] FUN_0031685c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uStack_60;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = lRam00000000020973e0;
  uVar12 = *(undefined8 *)(**(long **)(&UNK_00001fe8 + lRam00000000020973e0) + 8);
  uVar16 = *(undefined8 *)(**(long **)(&UNK_00001fe8 + lRam00000000020973e0) + 0x10);
  fVar15 = (float)uVar12;
  fVar14 = fVar15 + (float)uVar16;
  fVar18 = (float)((ulong)uVar12 >> 0x20);
  fVar17 = fVar18 + (float)((ulong)uVar16 >> 0x20);
  fVar24 = fVar14 - fVar15;
  fVar26 = fVar17 - fVar18;
  fVar33 = (float)*(undefined8 *)(lRam00000000020973e0 + 0xd98);
  fVar35 = -fVar33;
  bVar27 = (byte)((uint)fVar35 >> 8);
  bVar28 = (byte)((uint)fVar35 >> 0x10);
  bVar29 = (byte)((uint)fVar35 >> 0x18);
  fVar20 = (float)((ulong)*(undefined8 *)(lRam00000000020973e0 + 0xd98) >> 0x20);
  fVar11 = -fVar20;
  bVar30 = (byte)((uint)fVar11 >> 8);
  bVar31 = (byte)((uint)fVar11 >> 0x10);
  bVar32 = (byte)((uint)fVar11 >> 0x18);
  iVar19 = -(uint)(fVar33 + fVar33 < fVar24);
  iVar21 = -(uint)(fVar20 + fVar20 < fVar26);
  iVar22 = -(uint)(fVar33 + fVar33 < fVar24);
  iVar23 = -(uint)(fVar20 + fVar20 < fVar26);
  fVar33 = (float)CONCAT13((byte)((uint)iVar19 >> 0x18) & bVar29,
/* wm:no support for modified copies */
                           CONCAT12((byte)((uint)iVar19 >> 0x10) & bVar28,
                                    CONCAT11((byte)((uint)iVar19 >> 8) & bVar27,
                                             (byte)iVar19 & SUB41(fVar35,0))));
  fVar35 = (float)CONCAT13((byte)((uint)iVar22 >> 0x18) & bVar29,
                           CONCAT12((byte)((uint)iVar22 >> 0x10) & bVar28,
                                    CONCAT11((byte)((uint)iVar22 >> 8) & bVar27,
                                             (byte)iVar22 & SUB41(fVar35,0))));
  fVar15 = fVar15 - fVar33;
  fVar18 = fVar18 - (float)(CONCAT17((byte)((uint)iVar21 >> 0x18) & bVar32,
                                     CONCAT16((byte)((uint)iVar21 >> 0x10) & bVar31,
                                              CONCAT15((byte)((uint)iVar21 >> 8) & bVar30,
                                                       CONCAT14((byte)iVar21 & SUB41(fVar11,0),
                                                                fVar33)))) >> 0x20);
  uVar12 = CONCAT44(fVar18,fVar15);
  fVar14 = fVar14 + fVar35;
  fVar17 = fVar17 + (float)(CONCAT17((byte)((uint)iVar23 >> 0x18) & bVar32,
                                     CONCAT16((byte)((uint)iVar23 >> 0x10) & bVar31,
                                              CONCAT15((byte)((uint)iVar23 >> 8) & bVar30,
                                                       CONCAT14((byte)iVar23 & SUB41(fVar11,0),
                                                                fVar35)))) >> 0x20);
  uStack_48 = CONCAT44(fVar17,fVar14);
  uVar2 = *(uint *)(param_1 + 0x14);
  uStack_50 = uVar12;
  if ((uVar2 >> 0x1c & 1) != 0) {
    lVar7 = *(long *)(*(long *)(&UNK_00001480 + lRam00000000020973e0) +
                      (long)*(int *)(&UNK_00001478 + lRam00000000020973e0) * 0x78 + -0xf0);
    if (*(char *)(lVar7 + 0x17b) == '\x01') {
      uVar25 = *(undefined4 *)(lVar7 + 0x26c);
      uVar10 = *(undefined4 *)(lVar7 + 0x274);
      fVar11 = 3.4028235e+38;
      fVar35 = -3.4028235e+38;
    }
    else {
      fVar35 = *(float *)(lRam00000000020973e0 + 0xcdc) + *(float *)(lVar7 + 0x28);
      fVar11 = ((*(float *)(lVar7 + 0x28) + *(float *)(lVar7 + 0x30)) -
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
               *(float *)(lRam00000000020973e0 + 0xcdc)) - *(float *)(lVar7 + 0xc0);
      uVar10 = 0x7f7fffff;
      uVar25 = 0xff7fffff;
    }
    uStack_60 = CONCAT44(uVar25,fVar35);
    uStack_58 = CONCAT44(uVar10,fVar11);
LAB_00316978:
    auVar13 = FUN_0031b13c(param_1 + 0x28,param_1 + 0x30,param_1 + 0xe4,&uStack_50,&uStack_60,0);
    return auVar13;
  }
  if ((uVar2 >> 0x1a & 1) != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uStack_60;
    goto LAB_00316978;
  }
  if ((uVar2 >> 0x19 & 1) == 0) {
    return ZEXT416(*(uint *)(param_1 + 0x28));
  }
  fVar33 = *(float *)(lRam00000000020973e0 + 0xda0);
  fVar11 = (float)func_0x0031a7ec(0x2000000);
// origin: github.com/pengussy
  bVar27 = *(byte *)(lVar7 + 0x1ff0);
  fVar35 = (float)uVar12;
  if (*(int *)(lVar7 + 0x118) == 1) {
    if ((bVar27 == 0) || ((&UNK_00001ff1)[lVar7] != '\x01' || *(long *)(lVar7 + 0x1ff8) == 0)) {
      fVar20 = fVar33 * 0.0 + fVar11 + *(float *)(param_1 + 0x30) * -0.5;
      fVar24 = (fVar35 + fVar33 * -20.0) - *(float *)(param_1 + 0x34);
      fVar26 = *(float *)(param_1 + 0x30) + fVar20;
      fVar34 = *(float *)(param_1 + 0x34) + fVar24;
      bVar3 = true;
      bVar6 = false;
      if (fVar15 <= fVar20) {
        bVar3 = false;
        bVar6 = true;
        if (!NAN(fVar24) && !NAN(fVar18)) {
          bVar3 = fVar24 < fVar18;
          bVar6 = false;
        }
      }
      bVar4 = false;
      bVar5 = true;
      if (bVar3 == bVar6) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar26) && !NAN(fVar14)) {
          bVar4 = fVar26 == fVar14;
          bVar5 = fVar14 <= fVar26;
        }
      }
      bVar3 = false;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      bVar6 = true;
      if (!bVar5 || bVar4) {
        bVar3 = false;
        bVar6 = true;
        if (!NAN(fVar34) && !NAN(fVar17)) {
          bVar3 = fVar34 == fVar17;
          bVar6 = fVar17 <= fVar34;
        }
      }
      if (!bVar6 || bVar3) {
        return ZEXT416((uint)fVar20);
      }
      goto joined_r0x00316a88;
    }
    fVar20 = fVar33 * 16.0 + fVar11;
    if ((&UNK_00001ff1)[lVar7] == '\x01') goto LAB_00316ac4;
LAB_00316acc:
    fVar24 = fVar11 + fVar33 * 24.0;
    fVar33 = fVar35 + fVar33 * 24.0;
  }
  else {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    bVar27 = bVar27 & 1;
joined_r0x00316a88:
    fVar20 = fVar33 * 16.0 + fVar11;
    if ((bVar27 == 0) || ((&UNK_00001ff1)[lVar7] != '\x01')) goto LAB_00316acc;
LAB_00316ac4:
    if ((*(byte *)(lVar7 + 0x72) & 1) != 0) goto LAB_00316acc;
    fVar24 = fVar11 + 16.0;
    fVar33 = fVar35 + 8.0;
  }
  fVar11 = fVar11 + -16.0;
  fVar35 = fVar35 + -8.0;
  puVar8 = (uint *)(param_1 + 0xe4);
  uVar2 = *puVar8;
  fVar34 = *(float *)(param_1 + 0x30);
  fVar36 = *(float *)(param_1 + 0x34);
  fVar26 = fVar14 - fVar34;
  if (fVar20 <= fVar14 - fVar34) {
    fVar26 = fVar20;
  }
  fVar37 = fVar15;
  if (fVar15 <= fVar20) {
    fVar37 = fVar26;
  }
  puVar1 = puVar8;
  if (uVar2 == 0xffffffff) {
    puVar1 = (uint *)&UNK_01adf600;
  }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  uVar9 = *puVar1;
  bVar3 = uVar9 == 0;
  fVar26 = fVar11;
  if (!bVar3) {
    fVar26 = fVar14;
  }
  bVar6 = uVar9 == 1;
  fVar38 = fVar24;
  if (!bVar6) {
    fVar38 = fVar15;
  }
  if (fVar34 <= fVar26 - fVar38 || 1 < uVar9) {
    fVar26 = fVar35;
    if (uVar9 != 2) {
      fVar26 = fVar17;
    }
    fVar38 = fVar33;
    if (uVar9 != 3) {
      fVar38 = fVar18;
    }
    if (fVar36 <= fVar26 - fVar38 || (uVar9 & 0xfffffffe) != 2) goto LAB_00316cc4;
/* WM - if you paid for this, you were scammed */
  }
  uVar9 = *(uint *)(&UNK_01adf600 + (ulong)(uVar2 == 0xffffffff) * 4);
  if (uVar9 != uVar2) {
    fVar26 = fVar24;
    if (uVar2 == 0xffffffff) {
      fVar26 = fVar15;
    }
    if (fVar34 <= fVar14 - fVar26 || uVar2 == 0xffffffff) {
      fVar26 = fVar18;
      if (uVar2 == 0xffffffff) {
        fVar26 = fVar33;
      }
      if (fVar36 <= fVar17 - fVar26 || uVar2 != 0xffffffff) {
        bVar3 = false;
        bVar6 = uVar2 != 0xffffffff;
        goto LAB_00316cc4;
      }
    }
  }
  lVar7 = 4;
  if (uVar2 == 0xffffffff) {
    lVar7 = 8;
  }
  uVar9 = *(uint *)(&UNK_01adf600 + lVar7);
  if (uVar9 == uVar2) {
LAB_00316c14:
    lVar7 = 8;
    if (uVar2 == 0xffffffff) {
      lVar7 = 0xc;
    }
    uVar9 = *(uint *)(&UNK_01adf600 + lVar7);
    if (uVar9 != uVar2) {
      if (uVar2 == 0xffffffff) {
        fVar14 = fVar11;
      }
// proprietary - see LICENSE - do not sell
      if (fVar34 <= fVar14 - fVar15 || uVar2 != 0xffffffff) {
        bVar3 = uVar2 == 0xffffffff;
        if (bVar3) {
          fVar35 = fVar17;
        }
        if (fVar36 <= fVar35 - fVar18 || uVar2 == 0xffffffff) goto LAB_00316cc0;
      }
    }
    if (((uVar2 == 0xffffffff) || (uVar2 == 0)) || (fVar11 - fVar15 < fVar34)) {
      *puVar8 = 0xffffffff;
      return ZEXT416((uint)(fVar20 + 2.0));
    }
    uVar9 = 0;
    bVar6 = false;
    bVar3 = true;
  }
  else {
    fVar26 = fVar17;
    if (uVar2 == 0xffffffff) {
      fVar33 = fVar18;
      fVar26 = fVar35;
    }
    if (fVar26 - fVar33 < fVar36) goto LAB_00316c14;
    bVar3 = false;
LAB_00316cc0:
    bVar6 = false;
  }
LAB_00316cc4:
  if (!bVar6) {
    fVar24 = fVar37;
  }
  if (bVar3) {
    fVar24 = fVar11 - fVar34;
  }
  if (fVar24 < fVar15) {
    fVar24 = fVar15;
// stripping the watermark breaks the license
  }
  *puVar8 = uVar9;
  return ZEXT416((uint)fVar24);
}

