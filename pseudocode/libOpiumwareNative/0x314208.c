/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x314208:2e07fe6fc2
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00314208(ulong param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  code *pcVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_c0 [128];
  
  lVar12 = lRam00000000020973e0;
  lVar13 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  iVar5 = *(int *)(&UNK_00001478 + lRam00000000020973e0);
  if ((1 < iVar5) || (*(char *)(lRam00000000020973e0 + 2) != '\x01')) {
    lVar14 = *(long *)(&UNK_00001480 + lRam00000000020973e0);
    uVar8 = *(uint *)(lVar13 + 0x14);
    if (((uVar8 >> 0x1a & 1) != 0) &&
       (*(int *)(&UNK_00001414 + lRam00000000020973e0) != *(int *)(lVar13 + 0x10))) {
      param_1 = FUN_002ff090("Must call EndPopup() and not End()!");
      uVar8 = *(uint *)(lVar13 + 0x14);
    }
    if (((uVar8 >> 0x18 & 1) != 0) && (*(int *)(&UNK_00001410 + lVar12) != *(int *)(lVar13 + 0x10)))
    {
      param_1 = FUN_002ff090("Must call EndChild() and not End()!");
    }
    if (*(long *)(lVar13 + 0x1c8) != 0) {
// if you paid for this, you were scammed
      param_1 = func_0x0033d608();
    }
    lVar14 = lVar14 + (long)iVar5 * 0x78;
    if ((*(byte *)(lVar13 + 0xd2) & 1) == 0) {
      lVar15 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
      *(undefined1 *)(lVar15 + 0xce) = 1;
      param_1 = func_0x00320e84(*(undefined8 *)(lVar15 + 0x2c8));
      lVar10 = *(long *)(*(long *)(lVar15 + 0x2c8) + 0xa8) +
               (long)*(int *)(*(long *)(lVar15 + 0x2c8) + 0xa0) * 0x10;
      uVar6 = *(undefined8 *)(lVar10 + -0x10);
      *(undefined8 *)(lVar15 + 0x270) = *(undefined8 *)(lVar10 + -8);
      *(undefined8 *)(lVar15 + 0x268) = uVar6;
    }
    lVar10 = lRam00000000020973e0;
    if ((int)*(short *)(*(long *)(&UNK_00002860 + lRam00000000020973e0) + 0xc) <
        *(int *)(lRam00000000020973e0 + 0x1f80)) {
      iVar5 = *(int *)(lRam00000000020973e0 + 0x1f80) + -1;
      *(int *)(lRam00000000020973e0 + 0x1f80) = iVar5;
      uVar11 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      if (iVar5 != 0) {
        uVar11 = *(undefined4 *)(*(long *)(&UNK_00001f88 + lVar10) + (long)iVar5 * 8 + -8);
      }
      *(undefined4 *)(&UNK_00001e3c + lVar10) = uVar11;
      cVar2 = *(char *)(lVar14 + -10);
      lVar10 = lRam00000000020973e0;
    }
    else {
      param_1 = FUN_002ff090("Calling PopFocusScope() too many times!");
      cVar2 = *(char *)(lVar14 + -10);
      lVar10 = lRam00000000020973e0;
    }
    lRam00000000020973e0 = lVar10;
    if ((cVar2 == '\x01') && (*(long *)(lVar13 + 0x3c0) == lVar13)) {
      *(short *)(&UNK_0000265c + lVar10) = *(short *)(&UNK_0000265c + lVar10) + -1;
      iVar5 = *(int *)(&UNK_00001f90 + lVar10);
      *(int *)(&UNK_00001f90 + lVar10) = (int)((long)iVar5 + -1);
      *(undefined4 *)(&UNK_00001e40 + lVar10) =
           *(undefined4 *)(*(long *)(&UNK_00001f98 + lVar10) + ((long)iVar5 + -1) * 4 + -4);
      *(undefined4 *)(lVar10 + 0xc84) =
           *(undefined4 *)
            (*(long *)(&UNK_00001480 + lVar10) + (long)*(int *)(&UNK_00001478 + lVar10) * 0x78 + -8)
      ;
      cVar2 = *(char *)(lVar13 + 0xd2);
    }
    else {
      cVar2 = *(char *)(lVar13 + 0xd2);
    }
    if (cVar2 == '\x01') {
      *(long *)(lVar13 + 0x2c8) = lVar13 + 0x2d0;
      lVar10 = *(long *)(&UNK_000027e8 + lVar12);
/* reversing this took months of machine time - github.com/pengussy */
    }
    else {
      lVar10 = *(long *)(&UNK_000027e8 + lVar12);
    }
    if (lVar10 == lVar13) {
      param_1 = func_0x003171ac();
      cVar2 = *(char *)(lVar13 + 0x159);
    }
    else {
      cVar2 = *(char *)(lVar13 + 0x159);
    }
    if (cVar2 == '\x01') {
      lVar10 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
      *(undefined1 *)(lVar10 + 0x159) = 0;
      if (((*(float *)(lVar10 + 0x130) < *(float *)(lVar10 + 0x118)) ||
          (*(float *)(lVar10 + 0x134) < *(float *)(lVar10 + 0x11c))) &&
         ((*(byte *)(lVar10 + 0xd1) & 1) == 0)) {
        param_1 = FUN_002ff090(
                              "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                              );
      }
    }
    uVar6 = *(undefined8 *)(lVar14 + -0x70);
    *(undefined8 *)(&UNK_00001e88 + lVar12) = *(undefined8 *)(lVar14 + -0x68);
    *(undefined8 *)(&UNK_00001e80 + lVar12) = uVar6;
    uVar17 = *(undefined8 *)(lVar14 + -0x58);
    uVar6 = *(undefined8 *)(lVar14 + -0x60);
    uVar19 = *(undefined8 *)(lVar14 + -0x48);
    uVar18 = *(undefined8 *)(lVar14 + -0x50);
    uVar21 = *(undefined8 *)(lVar14 + -0x38);
    uVar20 = *(undefined8 *)(lVar14 + -0x40);
    uVar22 = *(undefined8 *)(lVar14 + -0x30);
    *(undefined8 *)(&UNK_00001ec8 + lVar12) = *(undefined8 *)(lVar14 + -0x28);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    *(undefined8 *)(&UNK_00001ec0 + lVar12) = uVar22;
    *(undefined8 *)(&UNK_00001eb8 + lVar12) = uVar21;
    *(undefined8 *)(&UNK_00001eb0 + lVar12) = uVar20;
    *(undefined8 *)(&UNK_00001ea8 + lVar12) = uVar19;
    *(undefined8 *)(&UNK_00001ea0 + lVar12) = uVar18;
    *(undefined8 *)(&UNK_00001e98 + lVar12) = uVar17;
    *(undefined8 *)(&UNK_00001e90 + lVar12) = uVar6;
    uVar8 = *(uint *)(lVar13 + 0x14);
    if ((uVar8 >> 0x1c & 1) != 0) {
      *(int *)(&UNK_000025cc + lVar12) = *(int *)(&UNK_000025cc + lVar12) + -1;
    }
    if ((uVar8 >> 0x1a & 1) == 0) {
      cVar2 = *(char *)(lVar12 + 0x9c);
    }
    else {
      *(int *)(lVar12 + 0x1fc0) = *(int *)(lVar12 + 0x1fc0) + -1;
      cVar2 = *(char *)(lVar12 + 0x9c);
    }
    if (cVar2 == '\x01') {
      param_1 = FUN_00317358(lVar14 + -0x20);
      lVar13 = (long)*(int *)(&UNK_00001478 + lVar12) + -1;
      iVar5 = (int)lVar13;
      *(int *)(&UNK_00001478 + lVar12) = iVar5;
// WM - no support for modified copies
      lVar14 = lRam00000000020973e0;
    }
    else {
      lVar13 = (long)*(int *)(&UNK_00001478 + lVar12) + -1;
      iVar5 = (int)lVar13;
      *(int *)(&UNK_00001478 + lVar12) = iVar5;
      lVar14 = lRam00000000020973e0;
    }
    lRam00000000020973e0 = lVar14;
    if (iVar5 == 0) {
      *(undefined8 *)(&UNK_000014a8 + lVar14) = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(&UNK_00001480 + lVar12) + lVar13 * 0x78 + -0x78);
      *(long *)(&UNK_000014a8 + lVar14) = lVar12;
      if (lVar12 != 0) {
        *(long *)(&UNK_00002860 + lVar14) =
             *(long *)(&UNK_00001480 + lVar14) + (long)*(int *)(&UNK_00001478 + lVar14) * 0x78 +
             -0x20;
        if (*(int *)(lVar12 + 0x1d0) == -1) {
          *(undefined8 *)(&UNK_000022f0 + lVar14) = 0;
          pcVar1 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                   lVar14 + 0x10;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = -0x80;
          pcVar1[3] = '?';
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          bVar4 = *(byte *)(lVar14 + 0x2c);
        }
        else {
          *(long *)(&UNK_000022f0 + lVar14) =
               *(long *)(&UNK_00002318 + lVar14) + (long)*(int *)(lVar12 + 0x1d0) * 0x250;
          pcVar1 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                   lVar14 + 0x10;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = -0x80;
          pcVar1[3] = '?';
          bVar4 = *(byte *)(lVar14 + 0x2c);
        }
        if ((bVar4 >> 4 & 1) != 0) {
          fVar16 = *(float *)(*(long *)(lVar12 + 0x20) + 0x18);
          if (fVar16 == 0.0) {
            fVar16 = *(float *)(lVar14 + 0x38);
          }
          *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                    lVar14 + 0xc) = fVar16;
        }
        uVar3 = *(undefined1 *)(lVar12 + 0xd1);
        *(undefined1 *)(lVar12 + 0xd1) = 0;
        uVar7 = func_0x00317da8(0);
        *(undefined1 *)(lVar12 + 0xd1) = uVar3;
        lVar12 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
        if (*(long *)(&UNK_000022f0 + lRam00000000020973e0) == 0) {
          *(bool *)(lVar12 + 0x178) = *(long *)(lVar12 + 0x1c8) == 0;
          return uVar7;
        }
        *(undefined1 *)(lVar12 + 0x178) = 0;
        return uVar7;
      }
    }
    *(undefined8 *)(&UNK_00002860 + lVar14) = 0;
    *(undefined8 *)(&UNK_000022f0 + lVar14) = 0;
    pcVar1 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar14 + 0x10;
    pcVar1[0] = '\0';
/*  found on a paste site? it was re-uploaded illegally  */
    pcVar1[1] = '\0';
    pcVar1[2] = -0x80;
    pcVar1[3] = '?';
    return param_1;
  }
  lVar13 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar2 = *(char *)(lVar12 + 0x9f);
    goto joined_r0x002ff154;
  }
  if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
    if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
      *(int *)(&UNK_00002898 + lRam00000000020973e0) =
           *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
      goto LAB_002ff12c;
    }
    func_0x002fd6a4("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n");
    bVar4 = (&UNK_0000286c)[lVar12];
  }
  else {
LAB_002ff12c:
    bVar4 = (&UNK_0000286c)[lVar12];
  }
  if ((bVar4 & 1) == 0) {
    *(int *)(&UNK_00002898 + lVar12) = *(int *)(&UNK_00002898 + lVar12) + 1;
    (&UNK_00002840)[lVar12] = 0;
    cVar2 = *(char *)(lVar12 + 0x9f);
  }
  else {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    func_0x002fd6a4("[imgui-error] In window \'%s\': %s\n");
    (&UNK_00002840)[lVar12] = 0;
    cVar2 = *(char *)(lVar12 + 0x9f);
  }
joined_r0x002ff154:
  if (cVar2 == '\x01') {
    if ((*(char *)(lVar12 + 1) == '\x01') && (iVar5 = func_0x00319fac(), iVar5 != 0)) {
      iVar5 = *(int *)(&UNK_00002844 + lVar12);
      if (iVar5 < 0x14) {
        if (lVar13 == 0) {
          func_0x0033dd94("In window \'%s\': %s");
        }
        else {
          func_0x0033dd94("In window \'%s\': %s");
          if ((*(char *)(lVar13 + 0xd5) != '\x01') || (*(char *)(lVar13 + 0xcd) == '\x01')) {
            uVar6 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                    "##Foreground");
            func_0x003235ac(0,0x3f800000,uVar6,lVar13 + 0x28,auStack_c0 + 0x88,0xff0000ff,0);
          }
        }
        iVar5 = *(int *)(&UNK_00002844 + lVar12);
      }
      if (iVar5 == 0x14) {
        func_0x0033dd94("(and more errors)");
      }
      FUN_00314208();
    }
    *(int *)(&UNK_00002844 + lVar12) = *(int *)(&UNK_00002844 + lVar12) + 1;
    pcVar9 = *(code **)(&UNK_00002828 + lVar12);
  }
  else {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    pcVar9 = *(code **)(&UNK_00002828 + lVar12);
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(lVar12,*(undefined8 *)(&UNK_00002830 + lVar12),"Calling End() too many times!");
  }
  return (ulong)*(byte *)(lVar12 + 0x9d);
}

