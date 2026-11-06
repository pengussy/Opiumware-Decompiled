/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x339f1c:58dd358159
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00339f1c(void)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
// WM - more drops soon - github.com/pengussy
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_78;
  
  lVar9 = lRam00000000020973e0;
  lVar19 = *(long *)(&UNK_000022f0 + lRam00000000020973e0);
  if (lVar19 == 0) {
    lVar19 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
      (&UNK_00002840)[lRam00000000020973e0] = 0;
      cVar5 = *(char *)(lVar9 + 0x9f);
      goto joined_r0x002ff154;
/* wm:origin: github.com/pengussy */
    }
    if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
      if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
        *(int *)(&UNK_00002898 + lRam00000000020973e0) =
             *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
        goto LAB_002ff12c;
      }
      func_0x002fd6a4("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n");
      bVar6 = (&UNK_0000286c)[lVar9];
    }
    else {
LAB_002ff12c:
      bVar6 = (&UNK_0000286c)[lVar9];
    }
    if ((bVar6 & 1) == 0) {
      *(int *)(&UNK_00002898 + lVar9) = *(int *)(&UNK_00002898 + lVar9) + 1;
      (&UNK_00002840)[lVar9] = 0;
      cVar5 = *(char *)(lVar9 + 0x9f);
    }
    else {
      func_0x002fd6a4("[imgui-error] In window \'%s\': %s\n");
      (&UNK_00002840)[lVar9] = 0;
      cVar5 = *(char *)(lVar9 + 0x9f);
    }
joined_r0x002ff154:
    if (cVar5 == '\x01') {
      if ((*(char *)(lVar9 + 1) == '\x01') && (iVar11 = func_0x00319fac(), iVar11 != 0)) {
        iVar11 = *(int *)(&UNK_00002844 + lVar9);
        if (iVar11 < 0x14) {
          if (lVar19 == 0) {
            func_0x0033dd94("In window \'%s\': %s");
          }
          else {
            func_0x0033dd94("In window \'%s\': %s");
            if ((*(char *)(lVar19 + 0xd5) != '\x01') || (*(char *)(lVar19 + 0xcd) == '\x01')) {
              uVar13 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                       "##Foreground");
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
              func_0x003235ac(0,0x3f800000,uVar13,lVar19 + 0x28,(long)register0x00000008 + -0x38,
                              0xff0000ff,0);
            }
          }
          iVar11 = *(int *)(&UNK_00002844 + lVar9);
        }
        if (iVar11 == 0x14) {
          func_0x0033dd94("(and more errors)");
        }
        FUN_00314208();
      }
      *(int *)(&UNK_00002844 + lVar9) = *(int *)(&UNK_00002844 + lVar9) + 1;
      pcVar15 = *(code **)(&UNK_00002828 + lVar9);
    }
    else {
      pcVar15 = *(code **)(&UNK_00002828 + lVar9);
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(lVar9,*(undefined8 *)(&UNK_00002830 + lVar9),
                 "EndTable() call should only be done while in BeginTable() scope!");
    }
    return (ulong)*(byte *)(lVar9 + 0x9d);
  }
  if ((*(byte *)(lVar19 + 0x239) & 1) == 0) {
    func_0x00337c14(lVar19);
    uVar4 = *(uint *)(lVar19 + 4);
    lVar3 = *(long *)(lVar19 + 0x180);
    lVar18 = *(long *)(lVar19 + 0x188);
    lVar20 = *(long *)(lVar19 + 0x10);
    cVar5 = *(char *)(lVar19 + 0x23a);
  }
  else {
    uVar4 = *(uint *)(lVar19 + 4);
/*  donate: donate/README.md  */
    lVar3 = *(long *)(lVar19 + 0x180);
    lVar18 = *(long *)(lVar19 + 0x188);
    lVar20 = *(long *)(lVar19 + 0x10);
    cVar5 = *(char *)(lVar19 + 0x23a);
  }
  if (cVar5 == '\x01') {
    func_0x0033a76c(lVar19);
  }
  if (((((uVar4 >> 5 & 1) != 0) && (*(short *)(lVar19 + 0x20a) != -1)) &&
      (uVar12 = func_0x003150b0(), (uVar12 & 1) == 0)) && (iVar11 = func_0x0031978c(1), iVar11 != 0)
     ) {
    iVar11 = (int)*(short *)(lVar19 + 0x20a);
    puVar16 = *(undefined4 **)(&UNK_000022f0 + lRam00000000020973e0);
    if (*(short *)(lVar19 + 0x20a) == -1) {
      iVar11 = puVar16[0x1d];
    }
    if ((*(byte *)(puVar16 + 1) & 7) != 0) {
      *(undefined1 *)((long)puVar16 + 0x23e) = 1;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      if (iVar11 == puVar16[0x1b]) {
        iVar11 = -1;
      }
      *(short *)((long)puVar16 + 0x226) = (short)iVar11;
      *(undefined2 *)((long)puVar16 + 0x7a) = *(undefined2 *)(puVar16 + 0x1e);
      uVar13 = func_0x002fdd28("##ContextMenu",0,*puVar16);
      func_0x0031a68c(uVar13,0);
    }
  }
  if (*(short *)(lVar19 + 0x78) == 0) {
    piVar21 = (int *)(lVar19 + 0x1a8);
  }
  else {
    piVar21 = (int *)(*(long *)(lVar19 + 0x1c8) + (long)(int)*(short *)(lVar19 + 0x78) * 0x18 +
                     -0x18);
  }
  *(undefined8 *)(lVar18 + 0x148) = *(undefined8 *)(lVar20 + 0x60);
  *(undefined8 *)(lVar18 + 0x140) = *(undefined8 *)(lVar20 + 0x68);
  uVar13 = *(undefined8 *)(lVar20 + 0x70);
  *(undefined8 *)(lVar18 + 0x130) = uVar13;
  fVar26 = (float)(int)*(float *)(lVar19 + 0x80);
  if (lVar18 == lVar3) {
    if ((uVar4 >> 0x11 & 1) == 0) {
      fVar27 = *(float *)(lVar19 + 0xfc);
// keep the notice, keep the source honest
      if (*(float *)(lVar19 + 0xfc) < fVar26) {
        fVar27 = fVar26;
      }
      *(float *)(lVar19 + 0x10c) = fVar27;
      *(float *)(lVar19 + 0xfc) = fVar27;
    }
  }
  else {
    *(float *)(lVar18 + 0x134) = fVar26;
  }
  fVar22 = *(float *)(lVar19 + 0xfc);
  fVar27 = *(float *)(lVar19 + 0x11c);
  if (*(float *)(lVar19 + 0x11c) < fVar22) {
    fVar27 = fVar22;
  }
  *(float *)(lVar19 + 0x11c) = fVar27;
/* wm:chat: discord.gg/sdkhDjTex */
  piVar21[1] = (int)(fVar22 - *(float *)(lVar19 + 0xf4));
  if ((*(uint *)(lVar19 + 4) >> 0x18 & 1) != 0) {
    fVar27 = (float)uVar13;
    if (*(short *)(lVar19 + 0x220) != -1) {
      fVar22 = 0.0;
      if ((*(uint *)(lVar19 + 4) & 0x400) != 0) {
        fVar22 = 1.0;
      }
      fVar22 = (*(float *)(*(long *)(lVar19 + 0x18) + (long)(int)*(short *)(lVar19 + 0x220) * 0x74 +
                          0x3c) + *(float *)(lVar19 + 0xc0) + *(float *)(lVar19 + 0xbc)) - fVar22;
      if (fVar27 < fVar22) {
        fVar27 = fVar22;
      }
    }
    if ((*(short *)(lVar19 + 0x212) != -1) && (fVar27 < *(float *)(lVar19 + 0xe0))) {
      fVar27 = *(float *)(lVar19 + 0xe0);
    }
    *(float *)(lVar18 + 0x130) = fVar27 + *(float *)(*(long *)(lVar19 + 0x10) + 0xc);
  }
  if ((uVar4 >> 0x14 & 1) == 0) {
    func_0x00320e84(*(undefined8 *)(lVar18 + 0x2c8));
  }
  lVar14 = *(long *)(lVar18 + 0x2c8);
  lVar17 = *(long *)(lVar14 + 0xa8) + (long)*(int *)(lVar14 + 0xa0) * 0x10;
  uVar13 = *(undefined8 *)(lVar17 + -0x10);
  *(undefined8 *)(lVar18 + 0x270) = *(undefined8 *)(lVar17 + -8);
  *(undefined8 *)(lVar18 + 0x268) = uVar13;
  if ((uVar4 & 0x780) != 0) {
    func_0x0033adec(lVar19);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    lVar14 = *(long *)(lVar18 + 0x2c8);
  }
  uVar13 = *(undefined8 *)(lVar19 + 0x1a0);
  func_0x003255d0(uVar13,lVar14,0);
  if ((*(byte *)(lVar19 + 6) >> 4 & 1) == 0) {
    func_0x0033b218(lVar19);
  }
  func_0x00320154(uVar13,*(undefined8 *)(lVar18 + 0x2c8));
  if ((int)*(uint *)(lVar19 + 0x6c) < 1) {
    fVar27 = 0.0;
    fVar22 = 0.0;
    fVar24 = 0.0;
  }
  else {
    lVar17 = 0;
    uVar12 = 0;
    fVar24 = 0.0;
    fVar22 = 0.0;
    fVar27 = 0.0;
    do {
      if ((*(uint *)(*(long *)(lVar19 + 0x50) + (uVar12 >> 5 & 0x7ffffff) * 4) >>
           (ulong)((uint)uVar12 & 0x1f) & 1) != 0) {
/* origin: github.com/pengussy - github.com/pengussy */
        lVar14 = *(long *)(lVar19 + 0x18);
        uVar4 = *(uint *)(lVar14 + lVar17);
        if ((uVar4 & 0x30) == 0x10) {
          fVar25 = *(float *)(lVar14 + lVar17 + 0x10);
        }
        else {
          lVar1 = lVar14 + lVar17;
          fVar25 = *(float *)(lVar1 + 0x44);
          if (*(float *)(lVar1 + 0x44) < *(float *)(lVar1 + 0x48)) {
            fVar25 = *(float *)(lVar1 + 0x48);
          }
          fVar25 = fVar25 - *(float *)(lVar1 + 0x38);
          if (((uVar4 >> 0xd & 1) == 0) &&
             (fVar23 = *(float *)(lVar1 + 0x50) - *(float *)(lVar1 + 0x38), fVar25 < fVar23)) {
            fVar25 = fVar23;
          }
          if ((((uVar4 >> 4 & 1) != 0) &&
              (fVar23 = *(float *)(lVar14 + lVar17 + 0x20), 0.0 < fVar23)) &&
             (((uVar4 & 0x20) == 0 & *(byte *)(lVar19 + 4)) == 0)) {
            fVar25 = fVar23;
          }
          if (fVar25 < *(float *)(lVar19 + 0xb8)) {
            fVar25 = *(float *)(lVar19 + 0xb8);
          }
        }
        fVar23 = fVar22 + fVar25;
        if ((uVar4 & 0x10) != 0) {
// no support for modified copies
          fVar24 = fVar24 + fVar25;
          fVar23 = fVar22;
        }
        fVar22 = fVar23;
        if ((((uVar4 ^ 0xffffffff) & 0x28) == 0) &&
           (fVar25 = fVar25 / (*(float *)(lVar14 + lVar17 + 0x1c) / *(float *)(lVar19 + 0xd8)),
           fVar27 < fVar25)) {
          fVar27 = fVar25;
        }
      }
      uVar12 = uVar12 + 1;
      lVar17 = lVar17 + 0x74;
    } while ((ulong)*(uint *)(lVar19 + 0x6c) * 0x74 != lVar17);
  }
  fVar25 = *(float *)(lVar19 + 0xc0);
  if (fVar22 < fVar27) {
    fVar22 = fVar27;
  }
  *(float *)(lVar19 + 0xd4) =
       fVar22 + fVar24 + (*(float *)(lVar19 + 0xc4) + *(float *)(lVar19 + 200)) *
                         (float)(*(short *)(lVar19 + 0x202) + -1) + *(float *)(lVar19 + 0xbc) * 2.0
                         + (float)(int)*(short *)(lVar19 + 0x202) * (fVar25 + fVar25);
  if ((lVar18 == lVar3) || ((*(uint *)(lVar19 + 4) >> 0x18 & 1) != 0)) {
/*  found on a paste site? it was re-uploaded illegally  */
    if ((*(short *)(lVar19 + 0x214) != -1) &&
       (((*(short *)(lVar19 + 0x212) == -1 && (*(char *)(lVar18 + 200) == '\x01')) &&
        (*(short *)(lVar19 + 0x7a) == *(short *)(lVar19 + 0x78))))) {
      fVar27 = *(float *)(lVar19 + 0xb8) + fVar25 * 2.0;
      fVar22 = *(float *)(*(long *)(lVar19 + 0x18) + (long)(int)*(short *)(lVar19 + 0x214) * 0x74 +
                         0xc);
      if (*(float *)(lVar19 + 0x120) <= fVar22) {
        if (fVar22 <= *(float *)(lVar19 + 0x128)) goto LAB_0033a3c4;
        fVar27 = fVar27 + (fVar22 - *(float *)(lVar18 + 0x28));
      }
      else {
        fVar27 = (fVar22 - *(float *)(lVar18 + 0x28)) - fVar27;
      }
      func_0x0031a42c(fVar27,0x3f800000,lVar18);
    }
  }
  else {
    *(undefined4 *)(lVar18 + 0x98) = 0;
  }
LAB_0033a3c4:
  if ((*(short *)(lVar19 + 0x212) != -1) && (*(short *)(lVar19 + 0x78) == *(short *)(lVar19 + 0x7a))
     ) {
    *(float *)(lVar19 + 0xdc) =
         (float)(int)(((((*(float *)(lVar9 + 0x100) - *(float *)(&UNK_00001534 + lVar9)) +
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                        (float)(int)(*(float *)(
                                               "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                               + lVar9 + 0x10) * 4.0)) -
                       *(float *)(*(long *)(lVar19 + 0x18) +
                                  (long)(int)*(short *)(lVar19 + 0x212) * 0x74 + 8)) -
                      *(float *)(lVar19 + 0xc4)) + *(float *)(lVar19 + 0xc0) * -2.0);
  }
  bVar10 = false;
  if (*(int *)(&UNK_00001520 + lVar9) != 0) {
    bVar10 = *(char *)(lVar19 + 0x247) == '\0';
  }
  *(bool *)(lVar19 + 0x248) = bVar10;
  if (*(int *)(*(long *)(lVar18 + 0x110) + (long)*(int *)(lVar18 + 0x108) * 4 + -4) == *piVar21) {
    if (*(int *)(lVar20 + 0x80) <= *(int *)(lVar3 + 0x1f8)) goto LAB_0033a4b0;
LAB_0033a478:
    FUN_002ff090("Too many PopItemWidth!");
// found on a paste site? it was re-uploaded illegally
    sVar8 = *(short *)(lVar19 + 0x78);
  }
  else {
    FUN_002ff090("Mismatching PushID/PopID!");
    if (*(int *)(lVar3 + 0x1f8) < *(int *)(lVar20 + 0x80)) goto LAB_0033a478;
LAB_0033a4b0:
    sVar8 = *(short *)(lVar19 + 0x78);
  }
  if (0 < sVar8) {
    func_0x00318a2c();
  }
  func_0x00318a2c();
  fVar22 = *(float *)(lVar3 + 0x130);
  fVar27 = *(float *)(lVar3 + 0x134);
  uVar13 = *(undefined8 *)(lVar20 + 0x40);
  *(undefined8 *)(lVar18 + 0x250) = *(undefined8 *)(lVar20 + 0x48);
  *(undefined8 *)(lVar18 + 0x248) = uVar13;
  uVar13 = *(undefined8 *)(lVar20 + 0x50);
  *(undefined8 *)(lVar18 + 0x260) = *(undefined8 *)(lVar20 + 0x58);
  *(undefined8 *)(lVar18 + 600) = uVar13;
  *(undefined1 *)(lVar18 + 0xd1) = *(undefined1 *)(lVar19 + 0x24c);
  *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(lVar19 + 0xf0);
  *(undefined4 *)(lVar3 + 0x1e8) = *(undefined4 *)(lVar20 + 0x7c);
  *(undefined4 *)(lVar3 + 0x1f8) = *(undefined4 *)(lVar20 + 0x80);
  *(undefined4 *)(lVar3 + 0x160) = *(undefined4 *)(lVar20 + 0x78);
  if (lVar18 == lVar3) {
    *(int *)(lVar18 + 0x1a0) = *(int *)(lVar18 + 0x1a0) + -1;
    uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0xf8) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar19 + 0xf0) >> 0x20),
                         (float)*(undefined8 *)(lVar19 + 0xf8) -
                         (float)*(undefined8 *)(lVar19 + 0xf0));
    func_0x003154fc(0xbf800000,&uStack_78);
/*  watermarked copy - do not remove  */
    func_0x00315614(lVar19 + 0xf0,0,0,0);
    if ((*(byte *)(lVar19 + 6) & 1) == 0) goto LAB_0033a544;
LAB_0033a5b0:
    fVar24 = *(float *)(lVar19 + 0xf0) + *(float *)(lVar19 + 0xd4);
    if (fVar22 < fVar24) {
      fVar22 = fVar24;
    }
    *(float *)(lVar3 + 0x130) = fVar22;
    fVar22 = *(float *)(lVar20 + 0x24);
joined_r0x0033a658:
    if (0.0 < fVar22) goto LAB_0033a5d4;
LAB_0033a65c:
    pfVar2 = (float *)(lVar19 + 0x104);
    if (lVar18 != lVar3) {
      pfVar2 = (float *)(lVar18 + 300);
    }
    if (lVar18 == lVar3) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = *(float *)(lVar18 + 0xc4);
    }
    fVar24 = *(float *)(lVar19 + 0xf4) + (fVar26 - *pfVar2) + fVar24;
    fVar26 = *(float *)(lVar3 + 0x13c);
    if (*(float *)(lVar3 + 0x13c) < fVar24 - fVar22) {
      fVar26 = fVar24 - fVar22;
    }
    *(float *)(lVar3 + 0x13c) = fVar26;
// WM - origin: github.com/pengussy
    fVar26 = *(float *)(lVar19 + 0xfc);
    if (fVar24 <= *(float *)(lVar19 + 0xfc)) {
      fVar26 = fVar24;
    }
    if (fVar27 < fVar26) {
      fVar27 = fVar26;
    }
    *(float *)(lVar3 + 0x134) = fVar27;
    cVar5 = *(char *)(lVar19 + 0x241);
  }
  else {
    uVar7 = *(ushort *)(lVar18 + 0x174);
    *(ushort *)(lVar18 + 0x174) = uVar7 | (ushort)(1 << (ulong)(*(byte *)(lVar19 + 0x238) & 0x1f));
    *(undefined8 *)(&UNK_000022f0 + lVar9) = 0;
    func_0x00315308();
    *(long *)(&UNK_000022f0 + lVar9) = lVar19;
    *(ushort *)(lVar18 + 0x174) = uVar7;
    if ((*(byte *)(lVar19 + 6) & 1) != 0) goto LAB_0033a5b0;
LAB_0033a544:
    if (*(float *)(lVar20 + 0x20) <= 0.0) {
      if (lVar18 == lVar3) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = *(float *)(lVar18 + 0xc0);
      }
      fVar23 = *(float *)(lVar19 + 0xf0) + *(float *)(lVar19 + 0xd4) +
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
               *(float *)(*(long *)(lVar19 + 0x10) + 0xc) + fVar24;
      fVar25 = fVar23 - *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar3 + 0x138);
      if (*(float *)(lVar3 + 0x138) < fVar25) {
        fVar24 = fVar25;
      }
      *(float *)(lVar3 + 0x138) = fVar24;
      fVar24 = *(float *)(lVar19 + 0xf8);
      if (fVar23 <= *(float *)(lVar19 + 0xf8)) {
        fVar24 = fVar23;
      }
      if (fVar22 < fVar24) {
        fVar22 = fVar24;
      }
      *(float *)(lVar3 + 0x130) = fVar22;
      fVar22 = *(float *)(lVar20 + 0x24);
      goto joined_r0x0033a658;
    }
    if (fVar22 < *(float *)(lVar19 + 0xf8)) {
      fVar22 = *(float *)(lVar19 + 0xf8);
    }
    *(float *)(lVar3 + 0x130) = fVar22;
    fVar22 = *(float *)(lVar20 + 0x24);
    if (fVar22 <= 0.0) goto LAB_0033a65c;
LAB_0033a5d4:
    if (fVar27 < *(float *)(lVar19 + 0xfc)) {
/* wm:if you paid for this, you were scammed */
      fVar27 = *(float *)(lVar19 + 0xfc);
    }
    *(float *)(lVar3 + 0x134) = fVar27;
    cVar5 = *(char *)(lVar19 + 0x241);
  }
  if (cVar5 == '\x01') {
    func_0x0033bac0(lVar19);
  }
  *(undefined1 *)(lVar19 + 0x23b) = 0;
  uVar4 = *(uint *)(&UNK_000022fc + lVar9);
  *(uint *)(&UNK_000022fc + lVar9) = uVar4 - 1;
  if ((int)uVar4 < 2) {
LAB_0033a738:
    *(undefined8 *)(&UNK_000022f0 + lVar9) = 0;
  }
  else {
    lVar19 = *(long *)(&UNK_00002308 + lVar9) + (ulong)uVar4 * 0x88;
    piVar21 = (int *)(lVar19 + -0x110);
    if ((piVar21 == (int *)0x0) || (*piVar21 != *(int *)(lVar3 + 0x10))) goto LAB_0033a738;
    iVar11 = *(int *)(lVar19 + -0x10c);
// do not claim this as your own
    lVar18 = *(long *)(&UNK_00002318 + lVar9) + (long)iVar11 * 0x250;
    *(long *)(&UNK_000022f0 + lVar9) = lVar18;
    if (*(long *)(&UNK_00002318 + lVar9) != 0) {
      *(int **)(lVar18 + 0x10) = piVar21;
      *(long *)(lVar18 + 0x1a0) = lVar19 + -0xe8;
      goto LAB_0033a740;
    }
  }
  iVar11 = -1;
LAB_0033a740:
  *(int *)(lVar3 + 0x1d0) = iVar11;
  uVar12 = func_0x0031b91c();
  return uVar12;
}

