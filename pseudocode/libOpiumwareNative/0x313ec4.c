/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x313ec4:8ffc0516b4
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00314098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x002ff288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00314284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0031443c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00314344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00314288) */
/* WARNING: Removing unreachable block (ram,0x00314348) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00313ec4(ulong param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  char *unaff_x19;
  undefined8 uVar15;
  char *pcVar16;
  char *unaff_x20;
  undefined8 *puVar17;
  undefined8 *unaff_x21;
  long lVar18;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar19;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  ulong *unaff_x29;
  undefined *unaff_x30;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong auStack_30 [2];
  
  pcVar16 = pcRam00000000020973e0;
  puVar6 = auStack_30;
  if (*(int *)(&UNK_000014fc + (long)pcRam00000000020973e0) != 0) {
    if ((pcRam00000000020973e0[0x11c] & 1U) == 0) {
      *(undefined4 *)(&UNK_00002868 + (long)pcRam00000000020973e0) =
           *(undefined4 *)(&UNK_0000150c + (long)pcRam00000000020973e0);
      bVar4 = (&UNK_000028a9)[(long)pcVar16];
    }
    else {
      bVar4 = (&UNK_000028a9)[(long)pcRam00000000020973e0];
    }
    if (((bVar4 & 1) == 0) && (param_1 = func_0x00319fac(), (int)param_1 != 0)) {
      auStack_30[0] = (ulong)*(uint *)(&UNK_00002868 + (long)pcVar16);
      func_0x0033dd94("Programmer error: %d visible items with conflicting ID!");
      func_0x0033ded0(
                     "Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                     );
      func_0x0033ded0(
/* if you paid for this, you were scammed - github.com/pengussy */
                     "Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                     );
      func_0x0033ded0(
                     "Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                     );
      func_0x003404d8();
      if (pcVar16[0xa2] == '\x01') {
        func_0x0033dd94("(Hold Ctrl to: use ");
        lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
        if ((*(byte *)(lVar12 + 0xd1) & 1) == 0) {
          *(float *)(lVar12 + 0x118) = *(float *)(lVar12 + 0x120) + 0.0;
          *(undefined4 *)(lVar12 + 0x11c) = *(undefined4 *)(lVar12 + 0x124);
          *(undefined8 *)(lVar12 + 0x140) = *(undefined8 *)(lVar12 + 0x148);
          *(undefined4 *)(lVar12 + 0x150) = *(undefined4 *)(lVar12 + 0x154);
          *(undefined1 *)(lVar12 + 0x158) = 1;
          iVar8 = func_0x0033ea2c("Item Picker");
          if (iVar8 == 0) goto LAB_00313f90;
LAB_003141ec:
          pcVar5 = pcRam00000000020973e0;
          (&UNK_000028a9)[(long)pcRam00000000020973e0] = 1;
          lVar12 = *(long *)(&UNK_000014a8 + (long)pcVar5);
          bVar4 = *(byte *)(lVar12 + 0xd1);
        }
        else {
          iVar8 = func_0x0033ea2c("Item Picker");
          if (iVar8 != 0) goto LAB_003141ec;
LAB_00313f90:
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
          bVar4 = *(byte *)(lVar12 + 0xd1);
        }
        if ((bVar4 & 1) == 0) {
          *(float *)(lVar12 + 0x118) = *(float *)(lVar12 + 0x120) + 0.0;
          *(undefined4 *)(lVar12 + 0x11c) = *(undefined4 *)(lVar12 + 0x124);
          *(undefined8 *)(lVar12 + 0x140) = *(undefined8 *)(lVar12 + 0x148);
          *(undefined4 *)(lVar12 + 0x150) = *(undefined4 *)(lVar12 + 0x154);
          *(undefined1 *)(lVar12 + 0x158) = 1;
        }
        func_0x0033dd94(" to break in item call-stack, or ");
        lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
        bVar4 = *(byte *)(lVar12 + 0xd1);
      }
      else {
        func_0x0033dd94("(Hold Ctrl to: ");
/* do not claim this as your own - github.com/pengussy */
        lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
        bVar4 = *(byte *)(lVar12 + 0xd1);
      }
      if ((bVar4 & 1) == 0) {
        *(float *)(lVar12 + 0x118) = *(float *)(lVar12 + 0x120) + 0.0;
        *(undefined4 *)(lVar12 + 0x11c) = *(undefined4 *)(lVar12 + 0x124);
        *(undefined8 *)(lVar12 + 0x140) = *(undefined8 *)(lVar12 + 0x148);
        *(undefined4 *)(lVar12 + 0x150) = *(undefined4 *)(lVar12 + 0x154);
        *(undefined1 *)(lVar12 + 0x158) = 1;
      }
      func_0x00340214("read FAQ \"About ID Stack System\"",
                      "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
      lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
      if ((*(byte *)(lVar12 + 0xd1) & 1) == 0) {
        *(float *)(lVar12 + 0x118) = *(float *)(lVar12 + 0x120) + 0.0;
        *(undefined4 *)(lVar12 + 0x11c) = *(undefined4 *)(lVar12 + 0x124);
        *(undefined8 *)(lVar12 + 0x140) = *(undefined8 *)(lVar12 + 0x148);
        *(undefined4 *)(lVar12 + 0x150) = *(undefined4 *)(lVar12 + 0x154);
        *(undefined1 *)(lVar12 + 0x158) = 1;
      }
      uVar9 = func_0x0033dd94(&UNK_01c87452);
      unaff_x30 = (undefined *)0x31409c;
      register0x00000008 = (BADSPACEBASE *)auStack_30;
      unaff_x19 = (char *)0x2097000;
      unaff_x20 = pcVar16;
      unaff_x29 = puVar6 + 4;
      goto code_r0x00314208;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    }
  }
  if ((*(int *)(&UNK_00002844 + (long)pcVar16) < 1) ||
     (param_1 = func_0x00319fac(), (int)param_1 == 0)) {
    return param_1;
  }
  func_0x003404d8();
  func_0x0033dd94("(Hold Ctrl to: ");
  lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
  if ((*(byte *)(lVar12 + 0xd1) & 1) == 0) {
    *(float *)(lVar12 + 0x118) = *(float *)(lVar12 + 0x120) + 0.0;
    *(undefined4 *)(lVar12 + 0x11c) = *(undefined4 *)(lVar12 + 0x124);
    *(undefined8 *)(lVar12 + 0x140) = *(undefined8 *)(lVar12 + 0x148);
    *(undefined4 *)(lVar12 + 0x150) = *(undefined4 *)(lVar12 + 0x154);
    *(undefined1 *)(lVar12 + 0x158) = 1;
    iVar8 = func_0x0033ea2c("Enable Asserts");
    if (iVar8 == 0) goto LAB_003140e0;
/* WM - chat: discord.gg/sdkhDjTex */
LAB_0031418c:
    pcVar16[0x9d] = '\x01';
    lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
    bVar4 = *(byte *)(lVar12 + 0xd1);
  }
  else {
    iVar8 = func_0x0033ea2c("Enable Asserts");
    if (iVar8 != 0) goto LAB_0031418c;
LAB_003140e0:
    lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
    bVar4 = *(byte *)(lVar12 + 0xd1);
  }
  if ((bVar4 & 1) == 0) {
    *(float *)(lVar12 + 0x118) = *(float *)(lVar12 + 0x120) + 0.0;
    *(undefined4 *)(lVar12 + 0x11c) = *(undefined4 *)(lVar12 + 0x124);
    *(undefined8 *)(lVar12 + 0x140) = *(undefined8 *)(lVar12 + 0x148);
    *(undefined4 *)(lVar12 + 0x150) = *(undefined4 *)(lVar12 + 0x154);
    *(undefined1 *)(lVar12 + 0x158) = 1;
  }
  uVar9 = func_0x0033dd94(&UNK_01c87452);
code_r0x00314208:
  do {
/*  origin: github.com/pengussy  */
    pcVar16 = pcRam00000000020973e0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(char **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(ulong **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar19 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar15 = 0x2097000;
    lVar18 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
    iVar8 = *(int *)(&UNK_00001478 + (long)pcRam00000000020973e0);
    lVar12 = (long)iVar8;
    if ((iVar8 < 2) && (pcRam00000000020973e0[2] == '\x01')) {
      unaff_x20 = "Calling End() too many times!";
      puVar19 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar11 = *(undefined **)((long)register0x00000008 + -8);
      pcVar16 = *(char **)((long)register0x00000008 + -0x20);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x18);
      lVar12 = *(long *)((long)register0x00000008 + -0x30);
      lVar18 = *(long *)((long)register0x00000008 + -0x28);
      unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
/* wm:watermarked copy - do not remove */
      unaff_x23 = *(long *)((long)register0x00000008 + -0x38);
      puVar7 = (undefined1 *)register0x00000008;
    }
    else {
      unaff_x23 = *(long *)(&UNK_00001480 + (long)pcRam00000000020973e0);
      unaff_x24 = 0x78;
      if (((*(uint *)(lVar18 + 0x14) >> 0x1a & 1) == 0) ||
         (*(int *)(&UNK_00001414 + (long)pcRam00000000020973e0) == *(int *)(lVar18 + 0x10))) {
        if (((*(uint *)(lVar18 + 0x14) >> 0x18 & 1) != 0) &&
           (*(int *)(&UNK_00001410 + (long)pcRam00000000020973e0) != *(int *)(lVar18 + 0x10))) {
          uVar9 = func_0x002ff090(&UNK_01c2e38f);
        }
        if (*(long *)(lVar18 + 0x1c8) != 0) {
          uVar9 = func_0x0033d608();
        }
        lVar12 = unaff_x23 + (long)iVar8 * 0x78;
        if ((*(byte *)(lVar18 + 0xd2) & 1) == 0) {
          unaff_x23 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
          *(undefined1 *)(unaff_x23 + 0xce) = 1;
          uVar9 = func_0x00320e84(*(undefined8 *)(unaff_x23 + 0x2c8));
          lVar13 = *(long *)(*(long *)(unaff_x23 + 0x2c8) + 0xa8) +
                   (long)*(int *)(*(long *)(unaff_x23 + 0x2c8) + 0xa0) * 0x10;
          uVar21 = *(undefined8 *)(lVar13 + -0x10);
          *(undefined8 *)(unaff_x23 + 0x270) = *(undefined8 *)(lVar13 + -8);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
          *(undefined8 *)(unaff_x23 + 0x268) = uVar21;
        }
        pcVar5 = pcRam00000000020973e0;
        if ((int)*(short *)(*(long *)(&UNK_00002860 + (long)pcRam00000000020973e0) + 0xc) <
            *(int *)(pcRam00000000020973e0 + 0x1f80)) {
          iVar8 = *(int *)(pcRam00000000020973e0 + 0x1f80) + -1;
          *(int *)(pcRam00000000020973e0 + 0x1f80) = iVar8;
          uVar14 = 0;
          if (iVar8 != 0) {
            uVar14 = *(undefined4 *)(*(long *)(&UNK_00001f88 + (long)pcVar5) + (long)iVar8 * 8 + -8)
            ;
          }
          *(undefined4 *)(&UNK_00001e3c + (long)pcVar5) = uVar14;
          pcVar5 = pcRam00000000020973e0;
          if ((*(char *)(lVar12 + -10) == '\x01') && (*(long *)(lVar18 + 0x3c0) == lVar18)) {
            *(short *)(&UNK_0000265c + (long)pcRam00000000020973e0) =
                 *(short *)(&UNK_0000265c + (long)pcRam00000000020973e0) + -1;
            iVar8 = *(int *)(&UNK_00001f90 + (long)pcVar5);
            *(int *)(&UNK_00001f90 + (long)pcVar5) = (int)((long)iVar8 + -1);
            *(undefined4 *)(&UNK_00001e40 + (long)pcVar5) =
                 *(undefined4 *)
                  (*(long *)(&UNK_00001f98 + (long)pcVar5) + ((long)iVar8 + -1) * 4 + -4);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
            *(undefined4 *)(pcVar5 + 0xc84) =
                 *(undefined4 *)
                  (*(long *)(&UNK_00001480 + (long)pcVar5) +
                   (long)*(int *)(&UNK_00001478 + (long)pcVar5) * 0x78 + -8);
            if (*(char *)(lVar18 + 0xd2) != '\x01') goto code_r0x0031436c;
code_r0x003143dc:
            *(long *)(lVar18 + 0x2c8) = lVar18 + 0x2d0;
            if (*(long *)(&UNK_000027e8 + (long)pcVar16) != lVar18) goto code_r0x00314378;
code_r0x003143f0:
            uVar9 = func_0x003171ac();
            cVar2 = *(char *)(lVar18 + 0x159);
          }
          else {
            if (*(char *)(lVar18 + 0xd2) == '\x01') goto code_r0x003143dc;
code_r0x0031436c:
            if (*(long *)(&UNK_000027e8 + (long)pcVar16) == lVar18) goto code_r0x003143f0;
code_r0x00314378:
            cVar2 = *(char *)(lVar18 + 0x159);
          }
          if (cVar2 != '\x01') {
code_r0x00314440:
            uVar15 = *(undefined8 *)(lVar12 + -0x70);
            *(undefined8 *)(&UNK_00001e88 + (long)pcVar16) = *(undefined8 *)(lVar12 + -0x68);
            *(undefined8 *)(&UNK_00001e80 + (long)pcVar16) = uVar15;
            uVar21 = *(undefined8 *)(lVar12 + -0x58);
            uVar15 = *(undefined8 *)(lVar12 + -0x60);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
            uVar23 = *(undefined8 *)(lVar12 + -0x48);
            uVar22 = *(undefined8 *)(lVar12 + -0x50);
            uVar25 = *(undefined8 *)(lVar12 + -0x38);
            uVar24 = *(undefined8 *)(lVar12 + -0x40);
            uVar26 = *(undefined8 *)(lVar12 + -0x30);
            *(undefined8 *)(&UNK_00001ec8 + (long)pcVar16) = *(undefined8 *)(lVar12 + -0x28);
            *(undefined8 *)(&UNK_00001ec0 + (long)pcVar16) = uVar26;
            *(undefined8 *)(&UNK_00001eb8 + (long)pcVar16) = uVar25;
            *(undefined8 *)(&UNK_00001eb0 + (long)pcVar16) = uVar24;
            *(undefined8 *)(&UNK_00001ea8 + (long)pcVar16) = uVar23;
            *(undefined8 *)(&UNK_00001ea0 + (long)pcVar16) = uVar22;
            *(undefined8 *)(&UNK_00001e98 + (long)pcVar16) = uVar21;
            *(undefined8 *)(&UNK_00001e90 + (long)pcVar16) = uVar15;
            uVar1 = *(uint *)(lVar18 + 0x14);
            if ((uVar1 >> 0x1c & 1) != 0) {
              *(int *)(&UNK_000025cc + (long)pcVar16) = *(int *)(&UNK_000025cc + (long)pcVar16) + -1
              ;
            }
            if ((uVar1 >> 0x1a & 1) == 0) {
              cVar2 = pcVar16[0x9c];
            }
            else {
              *(int *)(pcVar16 + 0x1fc0) = *(int *)(pcVar16 + 0x1fc0) + -1;
              cVar2 = pcVar16[0x9c];
            }
            if (cVar2 == '\x01') {
              uVar9 = FUN_00317358(lVar12 + -0x20);
              lVar12 = (long)*(int *)(&UNK_00001478 + (long)pcVar16) + -1;
              iVar8 = (int)lVar12;
              *(int *)(&UNK_00001478 + (long)pcVar16) = iVar8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
              pcVar5 = pcRam00000000020973e0;
            }
            else {
              lVar12 = (long)*(int *)(&UNK_00001478 + (long)pcVar16) + -1;
              iVar8 = (int)lVar12;
              *(int *)(&UNK_00001478 + (long)pcVar16) = iVar8;
              pcVar5 = pcRam00000000020973e0;
            }
            pcRam00000000020973e0 = pcVar5;
            if (iVar8 == 0) {
              *(undefined8 *)(&UNK_000014a8 + (long)pcVar5) = 0;
            }
            else {
              lVar12 = *(long *)(*(long *)(&UNK_00001480 + (long)pcVar16) + lVar12 * 0x78 + -0x78);
              *(long *)(&UNK_000014a8 + (long)pcVar5) = lVar12;
              if (lVar12 != 0) {
                *(long *)(&UNK_00002860 + (long)pcVar5) =
                     *(long *)(&UNK_00001480 + (long)pcVar5) +
                     (long)*(int *)(&UNK_00001478 + (long)pcVar5) * 0x78 + -0x20;
                if (*(int *)(lVar12 + 0x1d0) == -1) {
                  *(undefined8 *)(&UNK_000022f0 + (long)pcVar5) = 0;
                  pcVar16 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                            (long)(pcVar5 + 0x10);
                  pcVar16[0] = '\0';
                  pcVar16[1] = '\0';
                  pcVar16[2] = -0x80;
                  pcVar16[3] = '?';
                  bVar4 = pcVar5[0x2c];
                }
                else {
                  *(long *)(&UNK_000022f0 + (long)pcVar5) =
                       *(long *)(&UNK_00002318 + (long)pcVar5) +
                       (long)*(int *)(lVar12 + 0x1d0) * 0x250;
// no support for modified copies
                  pcVar16 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                            (long)(pcVar5 + 0x10);
                  pcVar16[0] = '\0';
                  pcVar16[1] = '\0';
                  pcVar16[2] = -0x80;
                  pcVar16[3] = '?';
                  bVar4 = pcVar5[0x2c];
                }
                if ((bVar4 >> 4 & 1) != 0) {
                  fVar20 = *(float *)(*(long *)(lVar12 + 0x20) + 0x18);
                  if (fVar20 == 0.0) {
                    fVar20 = *(float *)(pcVar5 + 0x38);
                  }
                  *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                            (long)(pcVar5 + 0xc)) = fVar20;
                }
                uVar3 = *(undefined1 *)(lVar12 + 0xd1);
                *(undefined1 *)(lVar12 + 0xd1) = 0;
                uVar9 = func_0x00317da8(0);
                *(undefined1 *)(lVar12 + 0xd1) = uVar3;
                lVar12 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
                if (*(long *)(&UNK_000022f0 + (long)pcRam00000000020973e0) == 0) {
                  *(bool *)(lVar12 + 0x178) = *(long *)(lVar12 + 0x1c8) == 0;
                  return uVar9;
                }
                *(undefined1 *)(lVar12 + 0x178) = 0;
                return uVar9;
              }
            }
            *(undefined8 *)(&UNK_00002860 + (long)pcVar5) = 0;
            *(undefined8 *)(&UNK_000022f0 + (long)pcVar5) = 0;
            pcVar16 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                      (long)(pcVar5 + 0x10);
            pcVar16[0] = '\0';
            pcVar16[1] = '\0';
            pcVar16[2] = -0x80;
            pcVar16[3] = '?';
            return uVar9;
/*  donate: donate/README.md  */
          }
          lVar13 = *(long *)(&UNK_000014a8 + (long)pcRam00000000020973e0);
          *(undefined1 *)(lVar13 + 0x159) = 0;
          if (((*(float *)(lVar13 + 0x118) <= *(float *)(lVar13 + 0x130)) &&
              (*(float *)(lVar13 + 0x11c) <= *(float *)(lVar13 + 0x134))) ||
             ((*(byte *)(lVar13 + 0xd1) & 1) != 0)) goto code_r0x00314440;
          unaff_x20 = 
          "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
          ;
          puVar11 = &UNK_00314440;
          puVar7 = (undefined1 *)((long)register0x00000008 + -0x40);
        }
        else {
          unaff_x20 = "Calling PopFocusScope() too many times!";
          puVar11 = &UNK_00314348;
        }
      }
      else {
        unaff_x20 = "Must call EndPopup() and not End()!";
// unlicensed copy if this notice is missing
        puVar11 = &UNK_00314288;
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x40);
      }
    }
    unaff_x19 = pcRam00000000020973e0;
    register0x00000008 = (BADSPACEBASE *)(puVar7 + -0x50);
    *(long *)(puVar7 + -0x30) = lVar12;
    *(long *)(puVar7 + -0x28) = lVar18;
    *(char **)(puVar7 + -0x20) = pcVar16;
    *(undefined8 *)(puVar7 + -0x18) = uVar15;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(undefined **)(puVar7 + -8) = puVar11;
    unaff_x29 = (ulong *)(puVar7 + -0x10);
    unaff_x22 = 0x2097000;
    unaff_x21 = *(undefined8 **)(&UNK_000014a8 + (long)pcRam00000000020973e0);
    if (pcRam00000000020973e0[0x9e] == '\x01') {
      if ((&UNK_00002840)[(long)pcRam00000000020973e0] == '\x01') {
        if (((&UNK_0000286c)[(long)pcRam00000000020973e0] & 1) == 0) {
          *(int *)(&UNK_00002898 + (long)pcRam00000000020973e0) =
// reversing this took months of machine time
               *(int *)(&UNK_00002898 + (long)pcRam00000000020973e0) + 1;
          goto code_r0x002ff12c;
        }
        bVar4 = pcRam00000000020973e0[0x9d];
        *(ulong *)(puVar7 + -0x40) = (ulong)(byte)pcRam00000000020973e0[0x9f];
        *(ulong *)(puVar7 + -0x50) = (ulong)bVar4;
        *(undefined8 *)(puVar7 + -0x48) = 1;
        func_0x002fd6a4(&UNK_01c2e7a7);
        bVar4 = (&UNK_0000286c)[(long)unaff_x19];
      }
      else {
code_r0x002ff12c:
        bVar4 = (&UNK_0000286c)[(long)unaff_x19];
      }
      if ((bVar4 & 1) == 0) {
        *(int *)(&UNK_00002898 + (long)unaff_x19) = *(int *)(&UNK_00002898 + (long)unaff_x19) + 1;
        (&UNK_00002840)[(long)unaff_x19] = 0;
        cVar2 = unaff_x19[0x9f];
      }
      else {
        if (unaff_x21 == (undefined8 *)0x0) {
          puVar11 = &UNK_01c2e80a;
        }
        else {
          puVar11 = (undefined *)unaff_x21[1];
        }
        *(undefined **)(puVar7 + -0x50) = puVar11;
        *(char **)(puVar7 + -0x48) = unaff_x20;
        func_0x002fd6a4(&UNK_01c2e7e8);
        (&UNK_00002840)[(long)unaff_x19] = 0;
        cVar2 = unaff_x19[0x9f];
      }
    }
// WM - reversing this took months of machine time
    else {
      (&UNK_00002840)[(long)pcRam00000000020973e0] = 0;
      cVar2 = unaff_x19[0x9f];
    }
    if (cVar2 != '\x01') {
      pcVar10 = *(code **)(&UNK_00002828 + (long)unaff_x19);
      goto joined_r0x002ff0d8;
    }
    if ((unaff_x19[1] != '\x01') || (uVar9 = func_0x00319fac(), (int)uVar9 == 0)) {
      *(int *)(&UNK_00002844 + (long)unaff_x19) = *(int *)(&UNK_00002844 + (long)unaff_x19) + 1;
      pcVar10 = *(code **)(&UNK_00002828 + (long)unaff_x19);
joined_r0x002ff0d8:
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(unaff_x19,*(undefined8 *)(&UNK_00002830 + (long)unaff_x19),unaff_x20);
      }
      return (ulong)(byte)unaff_x19[0x9d];
    }
    iVar8 = *(int *)(&UNK_00002844 + (long)unaff_x19);
/* wm:donate: donate/README.md */
    if (iVar8 < 0x14) {
      if (unaff_x21 == (undefined8 *)0x0) {
        *(undefined **)(puVar7 + -0x50) = &UNK_01c2e80a;
        *(char **)(puVar7 + -0x48) = unaff_x20;
        uVar9 = func_0x0033dd94(&UNK_01c2e80f);
      }
      else {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x21[1];
        *(char **)(puVar7 + -0x48) = unaff_x20;
        uVar9 = func_0x0033dd94(&UNK_01c2e80f);
        if ((*(char *)((long)unaff_x21 + 0xd5) != '\x01') ||
           (*(char *)((long)unaff_x21 + 0xcd) == '\x01')) {
          uVar15 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + (long)pcRam00000000020973e0),1,
                                   &UNK_01c2e1fc);
          puVar17 = unaff_x21 + 5;
          *(ulong *)(puVar7 + -0x38) =
               CONCAT44((float)((ulong)*puVar17 >> 0x20) + (float)((ulong)unaff_x21[6] >> 0x20),
                        (float)*puVar17 + (float)unaff_x21[6]);
          uVar9 = func_0x003235ac(0,0x3f800000,uVar15,puVar17,puVar7 + -0x38,0xff0000ff,0);
          unaff_x21 = puVar17;
        }
      }
      iVar8 = *(int *)(&UNK_00002844 + (long)unaff_x19);
    }
    if (iVar8 == 0x14) {
      uVar9 = func_0x0033dd94(&UNK_01c2e822);
    }
    unaff_x30 = &UNK_002ff28c;
  } while( true );
}

