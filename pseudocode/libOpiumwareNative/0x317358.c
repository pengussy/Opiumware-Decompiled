/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x317358:5def3f6c06
 */

void FUN_00317358(long param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  
  lVar4 = lRam00000000020973e0;
  lVar6 = *(long *)(&UNK_000022f0 + lRam00000000020973e0);
  while ((lVar6 != 0 && (*(long *)(lVar6 + 0x188) == *(long *)(&UNK_000014a8 + lVar4)))) {
    func_0x002ff090("Missing EndTable()");
    func_0x00339f1c();
    lVar6 = *(long *)(&UNK_000022f0 + lVar4);
  }
  lVar6 = *(long *)(&UNK_000014a8 + lVar4);
  plVar7 = *(long **)(&UNK_00002358 + lVar4);
  while ((plVar7 != (long *)0x0 && (*plVar7 == lVar6))) {
    func_0x002ff090("Missing EndTabBar()");
    func_0x00342d8c();
    plVar7 = *(long **)(&UNK_00002358 + lVar4);
  }
/* WM - if you paid for this, you were scammed */
  lVar8 = *(long *)(&UNK_00002430 + lVar4);
  while ((lVar8 != 0 && (**(long **)(lVar8 + 0x28) == lVar6))) {
    func_0x002ff090("Missing EndMultiSelect()");
    func_0x00342124();
    lVar8 = *(long *)(&UNK_00002430 + lVar4);
  }
  if (*(char *)(lVar6 + 0x17b) == '\x01') {
    func_0x002ff090("Missing EndMenuBar()");
    func_0x003427bc();
  }
  if ((int)*(short *)(param_1 + 4) < *(int *)(lVar6 + 0x1a0)) {
    do {
      func_0x002ff090("Missing TreePop()");
      func_0x00341bb4();
    } while ((int)*(short *)(param_1 + 4) < *(int *)(lVar6 + 0x1a0));
  }
  if ((int)*(short *)(param_1 + 0xe) < *(int *)(&UNK_00001fa0 + lVar4)) {
    do {
      func_0x002ff090("Missing EndGroup()");
      func_0x00319cf4();
    } while ((int)*(short *)(param_1 + 0xe) < *(int *)(&UNK_00001fa0 + lVar4));
  }
  if ((int)*(short *)(param_1 + 2) < *(int *)(lVar6 + 0x108)) {
    do {
      while( true ) {
        func_0x002ff090("Missing PopID()");
/* WM - watermarked copy - do not remove */
        iVar10 = *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108);
        iVar5 = iVar10 + -1;
        if (iVar5 != 0 && 0 < iVar10) break;
        func_0x002ff090("Calling PopID() too many times!");
        if (*(int *)(lVar6 + 0x108) <= (int)*(short *)(param_1 + 2)) goto LAB_0031750c;
      }
      *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108) = iVar5;
    } while ((int)*(short *)(param_1 + 2) < *(int *)(lVar6 + 0x108));
  }
LAB_0031750c:
  if (*(short *)(param_1 + 0x14) < *(short *)(&UNK_0000265c + lVar4)) {
    do {
      func_0x002ff090("Missing EndDisabled()");
      lVar6 = lRam00000000020973e0;
      sVar2 = *(short *)(&UNK_0000265c + lRam00000000020973e0);
      if (((byte)(&UNK_00001e40)[lVar4] >> 6 & 1) == 0) {
        *(short *)(&UNK_0000265c + lRam00000000020973e0) = sVar2 + -1;
        iVar10 = *(int *)(&UNK_00001f90 + lVar6);
        *(int *)(&UNK_00001f90 + lVar6) = (int)((long)iVar10 + -1);
        *(undefined4 *)(&UNK_00001e40 + lVar6) =
             *(undefined4 *)(*(long *)(&UNK_00001f98 + lVar6) + ((long)iVar10 + -1) * 4 + -4);
        *(undefined4 *)(lVar6 + 0xc84) =
             *(undefined4 *)
              (*(long *)(&UNK_00001480 + lVar6) + (long)*(int *)(&UNK_00001478 + lVar6) * 0x78 + -8)
        ;
        *(undefined1 *)
         (*(long *)(&UNK_00001480 + lVar4) + (long)*(int *)(&UNK_00001478 + lVar4) * 0x78 + -10) = 0
        ;
      }
      else if (sVar2 < 1) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        func_0x002ff090("Calling EndDisabled() too many times!");
      }
      else {
        *(short *)(&UNK_0000265c + lRam00000000020973e0) = sVar2 + -1;
        uVar9 = *(uint *)(&UNK_00001e40 + lVar6);
        iVar10 = *(int *)(&UNK_00001f90 + lVar6);
        *(int *)(&UNK_00001f90 + lVar6) = (int)((long)iVar10 + -1);
        uVar11 = *(uint *)(*(long *)(&UNK_00001f98 + lVar6) + ((long)iVar10 + -1) * 4 + -4);
        *(uint *)(&UNK_00001e40 + lVar6) = uVar11;
        if (((uVar9 >> 6 & 1) != 0) && ((uVar11 >> 6 & 1) == 0)) {
          *(undefined4 *)(lVar6 + 0xc84) = *(undefined4 *)(&UNK_00002658 + lVar6);
        }
      }
    } while (*(short *)(param_1 + 0x14) < *(short *)(&UNK_0000265c + lVar4));
  }
  if ((int)*(short *)(param_1 + 6) < *(int *)(&UNK_00001f50 + lVar4)) {
    do {
      func_0x002ff090("Missing PopStyleColor()");
      lVar6 = lRam00000000020973e0;
      if (*(int *)(&UNK_00001f50 + lRam00000000020973e0) < 1) {
        func_0x002ff090("Calling PopStyleColor() too many times!");
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        iVar10 = *(int *)(&UNK_00001f50 + lVar6);
        iVar5 = iVar10;
        if (0 < iVar10) goto LAB_00317670;
      }
      else {
        iVar10 = 1;
        iVar5 = *(int *)(&UNK_00001f50 + lRam00000000020973e0);
LAB_00317670:
        uVar9 = iVar10 + 1;
        do {
          lVar8 = *(long *)(&UNK_00001f58 + lVar6) + (long)iVar5 * 0x14;
          uVar15 = *(undefined8 *)(lVar8 + -0x10);
          puVar3 = (undefined8 *)(lVar6 + 0xdb0 + (long)*(int *)(lVar8 + -0x14) * 0x10);
          puVar3[1] = *(undefined8 *)(lVar8 + -8);
          *puVar3 = uVar15;
          iVar5 = *(int *)(&UNK_00001f50 + lVar6) + -1;
          *(int *)(&UNK_00001f50 + lVar6) = iVar5;
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
      }
    } while ((int)*(short *)(param_1 + 6) < *(int *)(&UNK_00001f50 + lVar4));
  }
  if ((int)*(short *)(param_1 + 0x10) < *(int *)(&UNK_00001f90 + lVar4)) {
    do {
      while( true ) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        func_0x002ff090("Missing PopItemFlag()");
        lVar6 = lRam00000000020973e0;
        uVar9 = *(int *)(&UNK_00001f90 + lRam00000000020973e0) - 1;
        if (uVar9 != 0 && 0 < *(int *)(&UNK_00001f90 + lRam00000000020973e0)) break;
        func_0x002ff090("Calling PopItemFlag() too many times!");
        if (*(int *)(&UNK_00001f90 + lVar4) <= (int)*(short *)(param_1 + 0x10)) goto LAB_00317720;
      }
      *(uint *)(&UNK_00001f90 + lRam00000000020973e0) = uVar9;
      *(undefined4 *)(&UNK_00001e40 + lVar6) =
           *(undefined4 *)(*(long *)(&UNK_00001f98 + lVar6) + (ulong)uVar9 * 4 + -4);
    } while ((int)*(short *)(param_1 + 0x10) < *(int *)(&UNK_00001f90 + lVar4));
  }
LAB_00317720:
  if ((int)*(short *)(param_1 + 8) < *(int *)(&UNK_00001f60 + lVar4)) {
    do {
      func_0x002ff090("Missing PopStyleVar()");
      lVar6 = lRam00000000020973e0;
      uVar9 = *(uint *)(&UNK_00001f60 + lRam00000000020973e0);
      if ((int)uVar9 < 1) {
        func_0x002ff090("Calling PopStyleVar() too many times!");
        uVar9 = *(uint *)(&UNK_00001f60 + lVar6);
        uVar11 = uVar9;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        if (0 < (int)uVar9) goto LAB_00317798;
      }
      else {
        uVar11 = 1;
LAB_00317798:
        iVar10 = uVar11 + 1;
        puVar12 = (undefined4 *)(*(long *)(&UNK_00001f68 + lVar6) + (ulong)uVar9 * 0xc + -4);
        do {
          uVar9 = uVar9 - 1;
          puVar1 = (undefined4 *)
                   (lVar6 + 0xc78 +
                   (ulong)(*(uint *)(&UNK_01adf610 + (long)(int)puVar12[-2] * 4) >> 0x10));
          uVar11 = *(uint *)(&UNK_01adf610 + (long)(int)puVar12[-2] * 4) & 0xffff;
          if (uVar11 == 0x802) {
            *puVar1 = puVar12[-1];
            puVar1[1] = *puVar12;
          }
          else if (uVar11 == 0x801) {
            *puVar1 = puVar12[-1];
          }
          *(uint *)(&UNK_00001f60 + lVar6) = uVar9;
          iVar10 = iVar10 + -1;
          puVar12 = puVar12 + -3;
        } while (1 < iVar10);
      }
    } while ((int)*(short *)(param_1 + 8) < *(int *)(&UNK_00001f60 + lVar4));
  }
  if ((int)*(short *)(param_1 + 10) < *(int *)(&UNK_00001f70 + lVar4)) {
    do {
      while( true ) {
        func_0x002ff090("Missing PopFont()");
        lVar6 = lRam00000000020973e0;
        if ((int)*(uint *)(&UNK_00001f70 + lRam00000000020973e0) < 1) break;
        lVar8 = *(long *)(&UNK_00001f78 + lRam00000000020973e0) +
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
                (ulong)*(uint *)(&UNK_00001f70 + lRam00000000020973e0) * 0x10;
        lVar13 = *(long *)(lVar8 + -0x10);
        uVar16 = *(undefined4 *)(lVar8 + -8);
        uVar14 = *(undefined4 *)(lVar8 + -4);
        *(long *)((long)&dylib_command_000011a8.dylib.name.offset + lRam00000000020973e0) = lVar13;
        *(undefined4 *)
         ("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar6 + 4) = uVar16;
        func_0x00317da8(uVar14);
        if (lVar13 != 0) {
          lVar8 = *(long *)(lVar13 + 8);
          *(long *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                   lVar6 + 0x28) = lVar8;
          *(long *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                   lVar6 + 0x30) = lVar13;
          func_0x00329bcc(lVar8);
          if (*(long *)(&UNK_000014a8 + lVar6) != 0) {
            func_0x00320fbc(*(undefined8 *)(*(long *)(&UNK_000014a8 + lVar6) + 0x2c8),
                            *(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
          }
        }
        *(int *)(&UNK_00001f70 + lVar6) = *(int *)(&UNK_00001f70 + lVar6) + -1;
        if (*(int *)(&UNK_00001f70 + lVar4) <= (int)*(short *)(param_1 + 10)) goto LAB_003178c4;
      }
      func_0x002ff090("Calling PopFont() too many times!");
    } while ((int)*(short *)(param_1 + 10) < *(int *)(&UNK_00001f70 + lVar4));
  }
// reversing this took months of machine time
LAB_003178c4:
  if ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x1f80)) {
    do {
      while( true ) {
        func_0x002ff090("Missing PopFocusScope()");
        lVar6 = lRam00000000020973e0;
        if (*(int *)(lRam00000000020973e0 + 0x1f80) <=
            (int)*(short *)(*(long *)(&UNK_00002860 + lRam00000000020973e0) + 0xc)) break;
        iVar10 = *(int *)(lRam00000000020973e0 + 0x1f80) + -1;
        *(int *)(lRam00000000020973e0 + 0x1f80) = iVar10;
        uVar14 = 0;
        if (iVar10 != 0) {
          uVar14 = *(undefined4 *)(*(long *)(&UNK_00001f88 + lVar6) + (long)iVar10 * 8 + -8);
        }
        *(undefined4 *)(&UNK_00001e3c + lVar6) = uVar14;
        if (*(int *)(lVar4 + 0x1f80) <= (int)*(short *)(param_1 + 0xc)) {
          return;
        }
      }
      func_0x002ff090("Calling PopFocusScope() too many times!");
/*  watermarked copy - do not remove  */
    } while ((int)*(short *)(param_1 + 0xc) < *(int *)(lVar4 + 0x1f80));
  }
  return;
}

