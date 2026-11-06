/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x33e04c:81eb1678e1
 */

/* WARNING: Type propagation algorithm not settling */

byte FUN_0033e04c(undefined8 *param_1,undefined8 param_2,byte *param_3,undefined1 *param_4,
                 uint param_5)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  int iVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined4 uVar22;
  byte bVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  float fVar30;
  uint uStack_84;
  uint uStack_64;
  
  lVar6 = lRam00000000020973e0;
  bVar9 = false;
  pcVar1 = &UNK_00001528 + lRam00000000020973e0;
/*  donate: donate/README.md  */
  lVar24 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar24 + 0xce) = 1;
  iVar18 = (int)param_2;
  puVar3 = &UNK_00001e84;
  if (*(int *)(&UNK_00001e80 + lVar6) != iVar18) {
    puVar3 = &UNK_00001e40;
  }
  uVar4 = *(uint *)(puVar3 + lVar6);
  uVar2 = param_5;
  if ((uVar4 & 0x20000) != 0) {
    uVar2 = param_5 | 0x440000;
  }
  uVar21 = 0x20;
  if ((uVar4 & 8) != 0) {
    uVar21 = 0x10;
  }
  if ((uVar2 & 0x3f0) != 0) {
    uVar21 = 0;
  }
  if ((uVar2 & 7) == 0) {
    uVar21 = uVar21 + 1;
  }
  lVar29 = *(long *)(&UNK_000014b0 + lVar6);
  if (((uVar2 >> 0xb & 1) != 0) && (lVar29 != 0)) {
    if (*(long *)(lVar29 + 0x3c0) == *(long *)(lVar24 + 0x3c0)) {
      *(long *)(&UNK_000014b0 + lVar6) = lVar24;
      bVar9 = true;
    }
    else {
/* wm:keep the notice, keep the source honest */
      bVar9 = false;
    }
  }
  uStack_64 = FUN_003063d8(param_1,param_2,uVar4 | (param_5 & 0x1000) << 2);
  if ((&UNK_00002220)[lVar6] == '\x01') {
    if ((((uVar2 >> 9 & 1) == 0) || (((byte)(&UNK_00002224)[lVar6] >> 2 & 1) != 0)) ||
       (iVar12 = FUN_003060bc(0x80), iVar12 == 0)) {
      iVar12 = *(int *)(&UNK_000022a8 + lVar6);
joined_r0x0033e1b4:
      bVar23 = 0;
    }
    else {
      func_0x00305fbc(param_2);
      fVar30 = *(float *)(&UNK_00001510 + lVar6) - *(float *)(lVar6 + 0x40);
      bVar7 = false;
      bVar8 = true;
      if (0.7 <= *(float *)(&UNK_00001510 + lVar6)) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar30)) {
          bVar7 = fVar30 == 0.7;
          bVar8 = 0.7 <= fVar30;
        }
      }
      if (bVar8 && !bVar7) {
        uStack_64 = 1;
        iVar12 = *(int *)(&UNK_000022a8 + lVar6);
        goto joined_r0x0033e1b4;
      }
      *(int *)(&UNK_000022b0 + lVar6) = iVar18;
      FUN_00306d20(lVar24,0);
      uStack_64 = 1;
      bVar23 = 1;
// WM - do not claim this as your own
      iVar12 = *(int *)(&UNK_000022a8 + lVar6);
    }
    if (iVar12 == iVar18) {
      uStack_64 = uStack_64 | ((byte)(&UNK_0000229d)[lVar6] & 0x20) >> 5;
    }
  }
  else {
    bVar23 = 0;
  }
  iVar12 = iVar18;
  if (bVar9) {
    *(long *)(&UNK_000014b0 + lVar6) = lVar29;
    if ((uVar2 & 0x200000) != 0) {
      iVar12 = 0;
    }
  }
  else if ((uVar2 & 0x200000) != 0) {
    iVar12 = 0;
  }
  if ((uStack_64 & 1) != 0) {
    uStack_84 = uVar21 | uVar2;
    if ((uStack_84 & 1) == 0) {
      uVar25 = 0xffffffff;
      uVar27 = 0xffffffff;
    }
    else {
      iVar13 = func_0x003195fc(0,0,iVar12);
      uVar27 = iVar13 - 1;
      iVar13 = func_0x00319834(0,iVar12);
      uVar25 = iVar13 - 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      bVar10 = func_0x003195fc(1,0,iVar12);
      if ((bVar10 & uVar27 == 0xffffffff) != 0) {
        uVar27 = 1;
      }
/* wm:watermarked copy - do not remove */
      bVar10 = func_0x00319834(1,iVar12);
      if ((bVar10 & uVar25 == 0xffffffff) != 0) {
        uVar25 = 1;
      }
    }
    uVar26 = uVar25;
    uVar28 = uVar27;
    if ((uVar2 >> 2 & 1) == 0) {
      if ((uVar2 >> 0x10 & 1) != 0) goto LAB_0033e338;
LAB_0033e2d8:
      if ((uVar28 != 0xffffffff) && (*(int *)(&UNK_0000151c + lVar6) != iVar18)) {
        if ((uVar2 >> 0x14 & 1) == 0) {
          func_0x00319c24(uVar28 + 0x290,param_2,0);
        }
        uVar20 = (undefined1)uVar28;
        if ((uStack_84 & 0x60) != 0) {
          FUN_00305de0(param_2,lVar24);
          (&UNK_0000152f)[lVar6] = uVar20;
          if ((uVar2 >> 0x12 & 1) == 0) {
            FUN_0031b798(param_2,lVar24);
/* if you paid for this, you were scammed - github.com/pengussy */
            uVar19 = 0;
          }
          else {
            if ((uVar2 >> 0x16 & 1) != 0) goto LAB_0033e390;
            uVar19 = 1;
          }
          FUN_00306d20(lVar24,uVar19);
        }
LAB_0033e390:
        if (((uStack_84 >> 4 & 1) != 0) ||
           (((uVar2 >> 8 & 1) != 0 && (*(short *)(lVar6 + (ulong)uVar28 * 2 + 0xb3a) == 2)))) {
          if ((uVar2 >> 0x11 & 1) == 0) {
            FUN_00305de0(param_2,lVar24);
            (&UNK_0000152f)[lVar6] = uVar20;
            if ((uVar2 >> 0x12 & 1) != 0) goto LAB_0033e3c8;
LAB_0033e3e4:
            FUN_0031b798(param_2,lVar24);
            bVar23 = 0;
// WM - no support for modified copies
          }
          else {
            func_0x00305fb0();
            (&UNK_0000152f)[lVar6] = uVar20;
            if ((uVar2 >> 0x12 & 1) == 0) goto LAB_0033e3e4;
LAB_0033e3c8:
            bVar23 = 1;
            if ((uVar2 >> 0x16 & 1) != 0) goto LAB_0033e404;
          }
          FUN_00306d20(lVar24,bVar23);
          bVar23 = 1;
        }
LAB_0033e404:
        if ((uVar2 >> 7 & 1) != 0) {
          if ((uVar2 >> 0x11 & 1) == 0) {
            FUN_00305de0(param_2,lVar24);
          }
          (&UNK_0000152f)[lVar6] = uVar20;
        }
      }
      if (((uVar2 >> 7 & 1) != 0) && (uVar26 != 0xffffffff)) {
        if ((uVar4 >> 3 & 1) == 0) {
          bVar23 = 1;
        }
        else if (*(float *)(lVar6 + (ulong)uVar26 * 4 + 0xba0) < *(float *)(lVar6 + 0x94)) {
// do not claim this as your own
          bVar23 = 1;
        }
        if ((uVar2 >> 0x12 & 1) == 0) {
          FUN_0031b798(param_2,lVar24);
        }
        func_0x00305fb0();
      }
      if ((((uVar4 >> 3 & 1) == 0) || (*(int *)(&UNK_0000151c + lVar6) != iVar18)) ||
         (*(float *)(lVar6 + (long)(char)(&UNK_0000152f)[lVar6] * 4 + 0xb8c) <= 0.0))
      goto LAB_0033e4a8;
      uVar17 = func_0x003195fc((long)(char)(&UNK_0000152f)[lVar6],1,iVar12);
      if (bVar23 == 0 && (uVar17 & 1) == 0) {
        bVar23 = 0;
        goto LAB_0033e4c4;
      }
    }
    else {
      bVar10 = func_0x003195fc(2,0,iVar12);
      uVar28 = 2;
      if ((bVar10 & uVar27 == 0xffffffff) == 0) {
        uVar28 = uVar27;
      }
      bVar10 = func_0x00319834(2,iVar12);
      uVar26 = 2;
      if ((bVar10 & uVar25 == 0xffffffff) == 0) {
        uVar26 = uVar25;
      }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      if ((uVar2 >> 0x10 & 1) == 0) goto LAB_0033e2d8;
LAB_0033e338:
      if ((((*(byte *)(lVar6 + 0x11c) & 1) == 0) && ((*(byte *)(lVar6 + 0x11d) & 1) == 0)) &&
         ((*(byte *)(lVar6 + 0x11e) & 1) == 0)) goto LAB_0033e2d8;
LAB_0033e4a8:
      bVar9 = bVar23 == 0;
      bVar23 = 0;
      if (bVar9) goto LAB_0033e4c4;
    }
    if (*(char *)(lVar6 + 0x76) == '\x01') {
      *(undefined1 *)(lVar6 + 0x1ff0) = 0;
    }
    bVar23 = 1;
  }
LAB_0033e4c4:
  uStack_84 = uVar21 | uVar2;
  if ((uVar4 >> 6 & 1) == 0) {
    if ((*(int *)(&UNK_00001ff4 + lVar6) == iVar18) && (*(char *)(lVar6 + 0x1ff0) == '\x01')) {
      uStack_64 = (byte)((uVar2 & 0x80000) == 0 & (&UNK_00001ff1)[lVar6]) | uStack_64;
    }
    if (*(int *)(&UNK_00002010 + lVar6) != iVar18) {
      bVar10 = 1;
      iVar13 = *(int *)(&UNK_0000151c + lVar6);
      goto joined_r0x0033e61c;
    }
    iVar13 = *(int *)(&UNK_0000200c + lVar6);
    bVar9 = *(int *)(&UNK_00002014 + lVar6) == iVar18;
// watermarked copy - do not remove
    if (((uVar4 >> 3 & 1) != 0) && (!bVar9)) {
      lVar29 = func_0x002fd2f4(lRam00000000020973e0,0x20c);
      lVar15 = func_0x002fd2f4(lRam00000000020973e0,0x20d);
      uVar22 = 0x27b;
      if (*(char *)(lVar6 + 0x71) == '\0') {
        uVar22 = 0x27d;
      }
      lVar16 = func_0x002fd2f4(lRam00000000020973e0,uVar22);
      fVar30 = *(float *)(lVar29 + 4);
      if (*(float *)(lVar29 + 4) < *(float *)(lVar15 + 4)) {
        fVar30 = *(float *)(lVar15 + 4);
      }
      if (fVar30 < *(float *)(lVar16 + 4)) {
        fVar30 = *(float *)(lVar16 + 4);
      }
      iVar14 = func_0x00318b2c(fVar30 - *(float *)(lVar6 + 0x40),fVar30,
                               *(undefined4 *)(lVar6 + 0x94),*(undefined4 *)(lVar6 + 0x98));
      bVar9 = 0 < iVar14;
    }
    if (iVar13 == iVar18 || bVar9) {
/* WM - found on a paste site? it was re-uploaded illegally */
      FUN_00305de0(param_2,lVar24);
      *(undefined4 *)(&UNK_0000153c + lVar6) = *(undefined4 *)(&UNK_00002048 + lVar6);
      if (((uVar2 >> 0x12 & 1) == 0) && (((byte)(&UNK_00002018)[lVar6] >> 4 & 1) == 0)) {
        FUN_0031b798(param_2,lVar24);
      }
      bVar10 = 1;
      if (((byte)(&UNK_00002018)[lVar6] >> 4 & 1) != 0) {
        (&UNK_0000152e)[lVar6] = 1;
      }
      bVar23 = 1;
      iVar13 = *(int *)(&UNK_0000151c + lVar6);
    }
    else {
      bVar10 = 1;
      iVar13 = *(int *)(&UNK_0000151c + lVar6);
    }
  }
  else {
    iVar13 = *(int *)(&UNK_0000151c + lVar6);
    bVar10 = (byte)uStack_64;
joined_r0x0033e61c:
  }
  if (iVar13 != iVar18) {
    uVar20 = 0;
    bVar11 = bVar23;
/* donate: donate/README.md */
    goto joined_r0x0033e668;
  }
  if (*(int *)(&UNK_0000153c + lVar6) - 2U < 2) {
    if (*(int *)(&UNK_00002010 + lVar6) == iVar18) {
      uVar20 = 1;
      goto joined_r0x0033e6f8;
    }
    func_0x00305fb0();
    uVar20 = 0;
    bVar11 = 0;
    if (bVar23 == 0) goto joined_r0x0033e668;
  }
  else {
    if (*(int *)(&UNK_0000153c + lVar6) == 1) {
      if (*pcVar1 == '\x01') {
        *(ulong *)(&UNK_00001534 + lVar6) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x100) >> 0x20) -
                      (float)((ulong)*param_1 >> 0x20),
                      (float)*(undefined8 *)(lVar6 + 0x100) - (float)*param_1);
      }
      cVar5 = (&UNK_0000152f)[lVar6];
      iVar13 = (int)cVar5;
      if (iVar13 == -1) {
LAB_0033e7e0:
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        func_0x00305fb0();
        uVar20 = 0;
      }
      else {
        uVar17 = func_0x00319504((long)cVar5,iVar12);
        if ((uVar17 & 1) == 0) {
          if ((((uVar2 >> 6 & 1) != 0) || ((uStack_64 & (uStack_84 & 0x20) >> 5) != 0)) &&
             (((&UNK_00002220)[lVar6] & 1) == 0)) {
            if (((uVar2 >> 8 & 1) == 0) || (*(char *)(lVar6 + iVar13 + 0xb4e) != '\x01')) {
              bVar9 = false;
            }
            else {
              bVar9 = *(short *)(lVar6 + (long)iVar13 * 2 + 0xb44) == 2;
            }
            if ((uVar4 >> 3 & 1) == 0) {
              bVar7 = false;
            }
            else {
              bVar7 = *(float *)(lVar6 + 0x94) <= *(float *)(lVar6 + (long)(int)cVar5 * 4 + 0xba0);
            }
            bVar11 = func_0x00319114(cVar5 + 0x290,iVar12);
            bVar23 = bVar23 | ((bVar9 | bVar7) ^ 1U) & bVar11;
          }
          goto LAB_0033e7e0;
        }
        uVar20 = 1;
      }
/* wm:origin: github.com/pengussy */
      if (((uVar2 >> 0x12 & 1) == 0) && (*(char *)(lVar6 + 0x76) == '\x01')) {
        *(undefined1 *)(lVar6 + 0x1ff0) = 0;
      }
    }
    else {
      uVar20 = 0;
    }
joined_r0x0033e6f8:
    if (bVar23 == 0) {
      bVar11 = 0;
      goto joined_r0x0033e668;
    }
  }
  bVar11 = 1;
  (&UNK_0000152b)[lVar6] = 1;
joined_r0x0033e668:
  if (param_3 != (byte *)0x0) {
    if (*(int *)(&UNK_00002030 + lVar6) != iVar18) {
      bVar10 = (byte)uStack_64;
    }
    *param_3 = bVar10 & 1;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar20;
  }
  return bVar11;
}

