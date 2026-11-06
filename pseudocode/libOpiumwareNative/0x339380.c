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
 *  file-id: 0x339380:ecad1ff989
 *  --------------------------------------------------------------------------*/

void FUN_00339380(undefined1 param_1 [16],ulong param_2,long param_3,uint param_4)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  byte bVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  char *pcVar24;
  uint uVar25;
  undefined8 uVar26;
  char cVar27;
  uint *puVar28;
  long lVar29;
// WM - if you paid for this, you were scammed
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack_a8;
  undefined4 uStack_a4;
  
  lVar6 = lRam00000000020973e0;
  if ((*(byte *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0xd1) & 1) != 0) {
    return;
  }
  sVar2 = *(short *)(param_3 + 0x226);
  iVar11 = (int)sVar2;
  if ((sVar2 < 0) ||
     (*(int *)(param_3 + 0x6c) == (int)sVar2 || *(int *)(param_3 + 0x6c) < (int)sVar2)) {
    pbVar19 = (byte *)0x0;
    iVar11 = -1;
  }
  else {
    pbVar19 = (byte *)(*(long *)(param_3 + 0x18) + (long)(int)sVar2 * 0x74);
  }
  if ((param_4 & 1) != 0) {
    if (pbVar19 != (byte *)0x0) {
      if ((*pbVar19 >> 5 & 1) == 0) {
        bVar15 = pbVar19[0x66];
      }
      else {
        bVar15 = 0;
      }
      pcVar24 = "*Missing Text*";
      if (*(char **)(&UNK_00002798 + lRam00000000020973e0) != (char *)0x0) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        pcVar24 = *(char **)(&UNK_00002798 + lRam00000000020973e0);
      }
      iVar12 = func_0x003402d8(pcVar24,0,0,bVar15 & 1);
      if ((iVar12 != 0) &&
         (lVar29 = *(long *)(param_3 + 0x18) + (long)iVar11 * 0x74,
         *(char *)(lVar29 + 0x66) == '\x01')) {
        *(undefined1 *)(lVar29 + 0x70) = 1;
        *(short *)(param_3 + 0x210) = (short)iVar11;
      }
    }
    if ((*(short *)(param_3 + 0x204) == *(short *)(param_3 + 0x202)) &&
       ((*(uint *)(param_3 + 4) & 0xe000) != 0x4000)) {
      puVar20 = &UNK_000027a0;
    }
    else {
      puVar20 = &UNK_000027a8;
    }
    pcVar24 = "*Missing Text*";
    if (*(char **)(puVar20 + lRam00000000020973e0) != (char *)0x0) {
      pcVar24 = *(char **)(puVar20 + lRam00000000020973e0);
    }
    iVar11 = func_0x003402d8(pcVar24,0,0,1);
    if ((iVar11 != 0) &&
       (uVar14 = (ulong)*(uint *)(param_3 + 0x6c), 0 < (int)*(uint *)(param_3 + 0x6c))) {
      lVar29 = *(long *)(param_3 + 0x18) + 0x70;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      do {
        if (((*(byte *)(lVar29 + -10) & 1) != 0) || ((*(byte *)(lVar29 + -0x70) >> 3 & 1) != 0)) {
          *(undefined2 *)(lVar29 + -1) = 0x102;
        }
        lVar29 = lVar29 + 0x74;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  uVar25 = param_4 & 1;
  if ((param_4 >> 1 & 1) != 0) {
    pcVar24 = "*Missing Text*";
    if (*(char **)(&UNK_000027b0 + lRam00000000020973e0) != (char *)0x0) {
      pcVar24 = *(char **)(&UNK_000027b0 + lRam00000000020973e0);
    }
    uVar25 = 1;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    iVar11 = func_0x003402d8(pcVar24,0,0,(*(byte *)(param_3 + 0x242) ^ 0xff) & 1);
    if (iVar11 != 0) {
      *(undefined1 *)(param_3 + 0x244) = 1;
    }
  }
  if ((param_4 >> 2 & 1) == 0) {
    return;
  }
  if (uVar25 != 0) {
    func_0x003404d8();
  }
  if ((((*(int *)(&UNK_0000151c + lVar6) == 0) ||
       (*(long *)(&UNK_00001540 + lVar6) != *(long *)(&UNK_000014a8 + lVar6))) ||
      (*(short *)(param_3 + 0x21a) == -1)) || ((&UNK_0000152c)[lVar6] != '\x01')) {
    bVar1 = false;
    iVar11 = *(int *)(param_3 + 0x6c) + -1;
    iVar13 = 0;
    goto LAB_00339590;
  }
  lVar22 = *(long *)(param_3 + 0x18);
  sVar2 = *(short *)(lVar22 + (long)(int)*(short *)(param_3 + 0x21a) * 0x74 + 0x56);
/* wm:reversing this took months of machine time */
  iVar11 = (int)sVar2;
  iVar23 = (int)sVar2;
  lVar29 = (long)iVar23;
  iVar17 = *(int *)(param_3 + 0x6c);
  iVar12 = iVar17;
  if (0 < iVar17) {
    iVar12 = 1;
  }
  iVar12 = iVar12 + -1;
  iVar18 = (int)sVar2;
  iVar13 = iVar11;
  if (iVar12 != iVar23) {
    iVar5 = (int)*(short *)(param_3 + 0x22c);
    iVar13 = iVar12;
    if (iVar5 <= sVar2) {
      iVar13 = iVar5;
    }
    if (iVar5 < 1) {
      iVar13 = iVar12;
    }
    iVar12 = 1;
    lVar21 = lVar29;
    if (sVar2 < iVar13) {
      iVar12 = -1;
      do {
        if ((*(byte *)(lVar22 + (long)(int)*(short *)(*(long *)(param_3 + 0x28) + lVar21 * 2) * 0x74
                      ) >> 6 & 1) != 0) goto LAB_00339ab8;
        lVar21 = lVar21 + 1;
      } while ((long)iVar13 + 1 != lVar21);
    }
/* keep the notice, keep the source honest - github.com/pengussy */
    else if (iVar13 < sVar2) {
      do {
        if ((*(byte *)(lVar22 + (long)(int)*(short *)(*(long *)(param_3 + 0x28) + lVar21 * 2) * 0x74
                      ) >> 6 & 1) != 0) goto LAB_00339ab8;
        bVar1 = iVar13 < lVar21;
        lVar21 = lVar21 + -1;
      } while (bVar1);
    }
  }
LAB_00339ac4:
  if (iVar17 < 2) {
    iVar17 = 1;
  }
  iVar17 = iVar17 + -1;
  if (iVar17 == iVar18) {
LAB_00339b94:
    bVar1 = true;
  }
  else {
    sVar3 = *(short *)(param_3 + 0x22c);
/* stripping the watermark breaks the license - github.com/pengussy */
    iVar12 = iVar17;
    if (iVar17 <= sVar3) {
      iVar12 = (int)sVar3;
    }
    iVar5 = sVar3 + -1;
    iVar11 = iVar17;
    if (iVar5 <= iVar17) {
      iVar11 = iVar5;
    }
    if (iVar23 < sVar3) {
      iVar12 = iVar11;
    }
    iVar11 = iVar17;
    if (0 < sVar3) {
      iVar11 = iVar12;
    }
    iVar17 = (int)sVar2;
    iVar12 = 1;
/* WM - origin: github.com/pengussy */
    if (iVar11 == iVar17 || iVar11 < iVar18) {
      if (iVar17 <= iVar11) {
        bVar1 = true;
        goto LAB_00339590;
      }
      do {
        if ((*(byte *)(lVar22 + (long)(int)*(short *)(*(long *)(param_3 + 0x28) + lVar29 * 2) * 0x74
                      ) >> 6 & 1) != 0) goto LAB_00339b88;
        bVar1 = iVar11 < lVar29;
        lVar29 = lVar29 + -1;
      } while (bVar1);
    }
    else {
      iVar12 = -1;
      lVar29 = (long)iVar17;
      do {
        if ((*(byte *)(lVar22 + (long)(int)*(short *)(*(long *)(param_3 + 0x28) + lVar29 * 2) * 0x74
                      ) >> 6 & 1) != 0) goto LAB_00339b88;
        lVar29 = lVar29 + 1;
/* proprietary - see LICENSE - do not sell */
      } while ((long)iVar11 + 1 != lVar29);
    }
    bVar1 = true;
  }
LAB_00339590:
  func_0x00317968(0x10,0);
  if (*(int *)(param_3 + 0x6c) < 1) {
LAB_003399a4:
    func_0x003179b4();
    return;
  }
  lVar29 = 0;
LAB_003395fc:
  lVar22 = lRam00000000020973e0;
  uVar33 = (undefined4)param_2;
  sVar2 = *(short *)(*(long *)(param_3 + 0x28) + lVar29 * 2);
  puVar28 = (uint *)(*(long *)(param_3 + 0x18) + (long)(int)sVar2 * 0x74);
  uVar25 = *puVar28;
  if ((uVar25 & 1) == 0) {
    if ((((*(byte *)(param_3 + 0x239) & 1) == 0) && ((int)*(short *)(param_3 + 0x206) <= (int)sVar2)
        ) || (lVar21 = (long)*(short *)(*(long *)(param_3 + 0x18) + (long)(int)sVar2 * 0x74 + 0x54),
             lVar21 == -1)) {
      pcVar24 = "";
      if (UNK_01cb7848 == '\0') goto LAB_0033968c;
LAB_00339660:
      cVar27 = *(char *)((long)puVar28 + 0x67);
      if (cVar27 == '\x01') goto LAB_00339674;
LAB_003396a8:
      bVar9 = (uVar25 & 0x80) == 0;
    }
    else {
      if ((*(long *)(param_3 + 0x198) != 0) &&
         (pcVar24 = (char *)(*(long *)(param_3 + 0x198) + lVar21), *pcVar24 != '\0'))
/* WM - watermarked copy - do not remove */
      goto LAB_00339660;
LAB_0033968c:
      pcVar24 = "<Unknown>";
      cVar27 = *(char *)((long)puVar28 + 0x67);
      if (cVar27 != '\x01') goto LAB_003396a8;
LAB_00339674:
      bVar9 = false;
      bVar7 = true;
      bVar8 = false;
      if ((uVar25 & 0x80) == 0) {
        iVar12 = (int)*(short *)(param_3 + 0x202);
        bVar8 = SBORROW4(iVar12,1);
        bVar9 = iVar12 + -1 < 0;
        bVar7 = iVar12 == 1;
      }
      bVar9 = !bVar7 && bVar9 == bVar8;
    }
    if (bVar1) {
      bVar9 = (bool)((iVar13 <= *(short *)((long)puVar28 + 0x56) &&
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                     *(short *)((long)puVar28 + 0x56) <= iVar11) & bVar9);
    }
    lVar21 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    bVar15 = 1;
    uVar32 = func_0x002ffe24(0xbf800000,pcVar24,0,1);
    fVar30 = (float)func_0x003426d0(0,uVar32,0,
                                    (float)(int)(*(float *)(
                                                  "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                                  + lVar22) * 1.2),lVar21 + 0x184);
    fVar31 = (float)func_0x003150d8();
    param_2 = 0;
    fVar35 = 0.0;
    if (0.0 < fVar31 - fVar30) {
      fVar35 = fVar31 - fVar30;
    }
    fVar37 = *(float *)(lVar21 + 0x118);
    fVar31 = *(float *)(lVar21 + 0x11c);
    fVar36 = *(float *)(lVar21 + 0x150);
    iVar12 = func_0x00318a58(pcVar24);
    uVar16 = 0x1800020;
    if (*(int *)(&UNK_0000151c + lVar22) == iVar12) {
      bVar15 = (&UNK_0000152c)[lVar22] ^ 1;
    }
    else {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      uVar16 = 0x1800000;
    }
    func_0x003179ec(bVar9 ^ 1);
    fStack_a8 = fVar30;
    uStack_a4 = uVar33;
    bVar10 = func_0x003412d0(pcVar24,0,uVar16,&fStack_a8);
    if ((((&UNK_00001e89)[lVar22] & 1) != 0) && (cVar27 != '\0')) {
      uVar26 = *(undefined8 *)(lVar21 + 0x2c8);
      fVar30 = (float)NEON_ucvtf((uint)*(ushort *)(lVar21 + 0x194));
      fVar34 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                         lVar22);
      param_2 = (ulong)(uint)(fVar31 + fVar36 + fVar34 * 0.134 * 0.5);
      uVar32 = func_0x002febb0(0x3f800000,0);
      func_0x00334818(fVar37 + fVar35 + fVar30 + fVar34 * 0.4,param_2,
                      *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                + lVar22) * 0.866,uVar26,uVar32);
    }
    func_0x00317a64();
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if ((bVar10 & bVar15) == 1) {
      *(byte *)(puVar28 + 0x1a) = *(byte *)((long)puVar28 + 0x67) ^ 1;
    }
    iVar12 = func_0x00315080();
    if ((((iVar12 == 0) || (iVar12 = func_0x00319a00(0xbf800000,0), iVar12 == 0)) ||
        (*(int *)(&UNK_0000153c + lVar6) != 1)) || ((*(byte *)(param_3 + 4) >> 1 & 1) == 0))
    goto LAB_003395ec;
    (&UNK_0000152c)[lVar6] = 1;
    *(short *)(param_3 + 0x21a) = sVar2;
    uVar14 = func_0x003060bc(0);
    if ((uVar14 & 1) != 0) goto LAB_003395ec;
    fVar30 = *(float *)(lVar6 + 0x104);
    fVar31 = *(float *)(&UNK_00001e90 + lVar6);
    fVar36 = *(float *)(&UNK_00001e98 + lVar6);
    bVar9 = (fVar31 + fVar36) * 0.5 <= fVar30;
    fVar35 = fVar31 - fVar30;
    if (bVar9) {
      fVar35 = fVar30 - fVar36;
    }
    param_2 = (ulong)(uint)(fVar36 - fVar31);
    sVar3 = *(short *)((long)puVar28 + 0x56);
    iVar17 = (int)(fVar35 / (fVar36 - fVar31));
/* do not claim this as your own - github.com/pengussy */
    iVar12 = -iVar17;
    if (bVar9) {
      iVar12 = iVar17;
    }
    lVar22 = *(long *)(param_3 + 0x18);
    sVar4 = *(short *)(lVar22 + (long)(int)sVar2 * 0x74 + 0x56);
    *(short *)(param_3 + 0x21a) = sVar2;
    *(undefined2 *)(param_3 + 0x21c) = 0xffff;
    iVar23 = *(int *)(param_3 + 0x6c) + -1;
    iVar12 = iVar12 + sVar3;
    iVar17 = iVar12;
    if (iVar23 <= iVar12) {
      iVar17 = iVar23;
    }
    iVar23 = 0;
    if (-1 < iVar12) {
      iVar23 = iVar17;
    }
    if (iVar23 == sVar4) goto LAB_003395ec;
    lVar21 = (long)(int)sVar4;
    sVar2 = *(short *)(param_3 + 0x22c);
    iVar12 = iVar23;
    if (iVar23 <= sVar2) {
      iVar12 = (int)sVar2;
    }
    iVar18 = sVar2 + -1;
    iVar17 = iVar23;
    if (iVar18 <= iVar23) {
      iVar17 = iVar18;
    }
    iVar18 = (int)sVar4;
    if (iVar18 < sVar2) {
      iVar12 = iVar17;
    }
    if (0 < sVar2) {
      iVar23 = iVar12;
    }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    iVar12 = 1;
    if (iVar18 < iVar23) {
      iVar12 = -1;
    }
    iVar17 = (int)sVar4;
    if (iVar18 < iVar23) {
      do {
        if ((*(byte *)(lVar22 + (long)(int)*(short *)(*(long *)(param_3 + 0x28) + lVar21 * 2) * 0x74
                      ) >> 6 & 1) != 0) goto LAB_00339988;
        lVar21 = lVar21 + 1;
      } while ((long)iVar23 + 1 != lVar21);
    }
    else if (iVar23 < iVar18) {
      do {
        if ((*(byte *)(lVar22 + (long)(int)*(short *)(*(long *)(param_3 + 0x28) + lVar21 * 2) * 0x74
                      ) >> 6 & 1) != 0) goto LAB_00339988;
        bVar9 = iVar23 < lVar21;
        lVar21 = lVar21 + -1;
      } while (bVar9);
    }
    goto LAB_00339994;
  }
  goto LAB_003395ec;
LAB_00339ab8:
  iVar13 = iVar18;
  if (iVar18 != (int)lVar21) {
    iVar13 = iVar12 + (int)lVar21;
  }
  goto LAB_00339ac4;
LAB_00339b88:
  iVar11 = iVar17;
  if (iVar17 != (int)lVar29) {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    iVar11 = iVar12 + (int)lVar29;
  }
  goto LAB_00339b94;
LAB_00339988:
  iVar23 = iVar17;
  if (iVar17 != (int)lVar21) {
    iVar23 = iVar12 + (int)lVar21;
  }
LAB_00339994:
  if (iVar23 != iVar17) {
    *(short *)(param_3 + 0x21c) = (short)iVar23;
  }
LAB_003395ec:
  lVar29 = lVar29 + 1;
  if (*(int *)(param_3 + 0x6c) <= lVar29) goto LAB_003399a4;
  goto LAB_003395fc;
}

