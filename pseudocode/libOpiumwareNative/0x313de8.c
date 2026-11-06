/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x313de8:3b6989df1f
 */

void FUN_00313de8(short *param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  
  lVar4 = lRam00000000020973e0;
  iVar5 = *(int *)(&UNK_00001478 + lRam00000000020973e0);
  sVar2 = *param_1;
  if (sVar2 < iVar5) {
    do {
      if ((*(byte *)(*(long *)(&UNK_000014a8 + lVar4) + 0x17) & 1) == 0) {
        FUN_002ff090("Missing End()");
        FUN_00314208();
      }
      else if ((*(long *)(&UNK_000022f0 + lVar4) == 0) ||
              (*(long *)(*(long *)(&UNK_000022f0 + lVar4) + 0x188) !=
               *(long *)(&UNK_000014a8 + lVar4))) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        FUN_002ff090("Missing EndChild()");
        func_0x00315308();
      }
      else {
        FUN_002ff090("Missing EndTable()");
        FUN_00339f1c();
      }
      iVar5 = *(int *)(&UNK_00001478 + lVar4);
      sVar2 = *param_1;
    } while (sVar2 < iVar5);
  }
  lVar4 = lRam00000000020973e0;
  if (iVar5 != sVar2) {
    return;
  }
  lVar7 = *(long *)(&UNK_000022f0 + lRam00000000020973e0);
  while ((lVar7 != 0 && (*(long *)(lVar7 + 0x188) == *(long *)(&UNK_000014a8 + lVar4)))) {
    FUN_002ff090("Missing EndTable()");
    FUN_00339f1c();
    lVar7 = *(long *)(&UNK_000022f0 + lVar4);
  }
  lVar7 = *(long *)(&UNK_000014a8 + lVar4);
  plVar8 = *(long **)(&UNK_00002358 + lVar4);
  while ((plVar8 != (long *)0x0 && (*plVar8 == lVar7))) {
    FUN_002ff090("Missing EndTabBar()");
    func_0x00342d8c();
    plVar8 = *(long **)(&UNK_00002358 + lVar4);
  }
  lVar9 = *(long *)(&UNK_00002430 + lVar4);
  while ((lVar9 != 0 && (**(long **)(lVar9 + 0x28) == lVar7))) {
    FUN_002ff090("Missing EndMultiSelect()");
    FUN_00342124();
    lVar9 = *(long *)(&UNK_00002430 + lVar4);
  }
  if (*(char *)(lVar7 + 0x17b) == '\x01') {
    FUN_002ff090("Missing EndMenuBar()");
    func_0x003427bc();
/* keep the notice, keep the source honest */
  }
  if ((int)param_1[2] < *(int *)(lVar7 + 0x1a0)) {
    do {
      FUN_002ff090("Missing TreePop()");
      func_0x00341bb4();
    } while ((int)param_1[2] < *(int *)(lVar7 + 0x1a0));
  }
  if ((int)param_1[7] < *(int *)(&UNK_00001fa0 + lVar4)) {
    do {
      FUN_002ff090("Missing EndGroup()");
      func_0x00319cf4();
    } while ((int)param_1[7] < *(int *)(&UNK_00001fa0 + lVar4));
  }
  if ((int)param_1[1] < *(int *)(lVar7 + 0x108)) {
    do {
      while( true ) {
        FUN_002ff090("Missing PopID()");
        iVar5 = *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108);
        iVar6 = iVar5 + -1;
        if (iVar6 != 0 && 0 < iVar5) break;
        FUN_002ff090("Calling PopID() too many times!");
        if (*(int *)(lVar7 + 0x108) <= (int)param_1[1]) goto LAB_0031750c;
      }
      *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108) = iVar6;
    } while ((int)param_1[1] < *(int *)(lVar7 + 0x108));
  }
LAB_0031750c:
  if (param_1[10] < *(short *)(&UNK_0000265c + lVar4)) {
    do {
      FUN_002ff090("Missing EndDisabled()");
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      lVar7 = lRam00000000020973e0;
      sVar2 = *(short *)(&UNK_0000265c + lRam00000000020973e0);
      if (((byte)(&UNK_00001e40)[lVar4] >> 6 & 1) == 0) {
        *(short *)(&UNK_0000265c + lRam00000000020973e0) = sVar2 + -1;
        iVar5 = *(int *)(&UNK_00001f90 + lVar7);
        *(int *)(&UNK_00001f90 + lVar7) = (int)((long)iVar5 + -1);
        *(undefined4 *)(&UNK_00001e40 + lVar7) =
             *(undefined4 *)(*(long *)(&UNK_00001f98 + lVar7) + ((long)iVar5 + -1) * 4 + -4);
        *(undefined4 *)(lVar7 + 0xc84) =
             *(undefined4 *)
              (*(long *)(&UNK_00001480 + lVar7) + (long)*(int *)(&UNK_00001478 + lVar7) * 0x78 + -8)
        ;
        *(undefined1 *)
         (*(long *)(&UNK_00001480 + lVar4) + (long)*(int *)(&UNK_00001478 + lVar4) * 0x78 + -10) = 0
        ;
      }
      else if (sVar2 < 1) {
        FUN_002ff090("Calling EndDisabled() too many times!");
      }
      else {
/* WM - origin: github.com/pengussy */
        *(short *)(&UNK_0000265c + lRam00000000020973e0) = sVar2 + -1;
        uVar10 = *(uint *)(&UNK_00001e40 + lVar7);
        iVar5 = *(int *)(&UNK_00001f90 + lVar7);
        *(int *)(&UNK_00001f90 + lVar7) = (int)((long)iVar5 + -1);
        uVar11 = *(uint *)(*(long *)(&UNK_00001f98 + lVar7) + ((long)iVar5 + -1) * 4 + -4);
        *(uint *)(&UNK_00001e40 + lVar7) = uVar11;
        if (((uVar10 >> 6 & 1) != 0) && ((uVar11 >> 6 & 1) == 0)) {
          *(undefined4 *)(lVar7 + 0xc84) = *(undefined4 *)(&UNK_00002658 + lVar7);
        }
      }
    } while (param_1[10] < *(short *)(&UNK_0000265c + lVar4));
  }
  if ((int)param_1[3] < *(int *)(&UNK_00001f50 + lVar4)) {
    do {
      FUN_002ff090("Missing PopStyleColor()");
      lVar7 = lRam00000000020973e0;
      if (*(int *)(&UNK_00001f50 + lRam00000000020973e0) < 1) {
        FUN_002ff090("Calling PopStyleColor() too many times!");
        iVar5 = *(int *)(&UNK_00001f50 + lVar7);
        iVar6 = iVar5;
        if (0 < iVar5) goto LAB_00317670;
      }
      else {
        iVar5 = 1;
        iVar6 = *(int *)(&UNK_00001f50 + lRam00000000020973e0);
LAB_00317670:
        uVar10 = iVar5 + 1;
/*  chat: discord.gg/sdkhDjTex  */
        do {
          lVar9 = *(long *)(&UNK_00001f58 + lVar7) + (long)iVar6 * 0x14;
          uVar15 = *(undefined8 *)(lVar9 + -0x10);
          puVar3 = (undefined8 *)(lVar7 + 0xdb0 + (long)*(int *)(lVar9 + -0x14) * 0x10);
          puVar3[1] = *(undefined8 *)(lVar9 + -8);
          *puVar3 = uVar15;
          iVar6 = *(int *)(&UNK_00001f50 + lVar7) + -1;
          *(int *)(&UNK_00001f50 + lVar7) = iVar6;
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
    } while ((int)param_1[3] < *(int *)(&UNK_00001f50 + lVar4));
  }
  if ((int)param_1[8] < *(int *)(&UNK_00001f90 + lVar4)) {
    do {
      while( true ) {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        FUN_002ff090("Missing PopItemFlag()");
        lVar7 = lRam00000000020973e0;
        uVar10 = *(int *)(&UNK_00001f90 + lRam00000000020973e0) - 1;
        if (uVar10 != 0 && 0 < *(int *)(&UNK_00001f90 + lRam00000000020973e0)) break;
        FUN_002ff090("Calling PopItemFlag() too many times!");
        if (*(int *)(&UNK_00001f90 + lVar4) <= (int)param_1[8]) goto LAB_00317720;
      }
      *(uint *)(&UNK_00001f90 + lRam00000000020973e0) = uVar10;
      *(undefined4 *)(&UNK_00001e40 + lVar7) =
           *(undefined4 *)(*(long *)(&UNK_00001f98 + lVar7) + (ulong)uVar10 * 4 + -4);
    } while ((int)param_1[8] < *(int *)(&UNK_00001f90 + lVar4));
  }
LAB_00317720:
  if ((int)param_1[4] < *(int *)(&UNK_00001f60 + lVar4)) {
    do {
      FUN_002ff090("Missing PopStyleVar()");
      lVar7 = lRam00000000020973e0;
      uVar10 = *(uint *)(&UNK_00001f60 + lRam00000000020973e0);
      if ((int)uVar10 < 1) {
        FUN_002ff090("Calling PopStyleVar() too many times!");
/*  donate: donate/README.md  */
        uVar10 = *(uint *)(&UNK_00001f60 + lVar7);
        uVar11 = uVar10;
        if (0 < (int)uVar10) goto LAB_00317798;
      }
      else {
        uVar11 = 1;
LAB_00317798:
        iVar5 = uVar11 + 1;
        puVar12 = (undefined4 *)(*(long *)(&UNK_00001f68 + lVar7) + (ulong)uVar10 * 0xc + -4);
        do {
          uVar10 = uVar10 - 1;
          puVar1 = (undefined4 *)
                   (lVar7 + 0xc78 +
                   (ulong)(*(uint *)(&UNK_01adf610 + (long)(int)puVar12[-2] * 4) >> 0x10));
          uVar11 = *(uint *)(&UNK_01adf610 + (long)(int)puVar12[-2] * 4) & 0xffff;
          if (uVar11 == 0x802) {
            *puVar1 = puVar12[-1];
            puVar1[1] = *puVar12;
          }
          else if (uVar11 == 0x801) {
            *puVar1 = puVar12[-1];
          }
          *(uint *)(&UNK_00001f60 + lVar7) = uVar10;
          iVar5 = iVar5 + -1;
          puVar12 = puVar12 + -3;
        } while (1 < iVar5);
      }
    } while ((int)param_1[4] < *(int *)(&UNK_00001f60 + lVar4));
  }
/* proprietary - see LICENSE - do not sell */
  if ((int)param_1[5] < *(int *)(&UNK_00001f70 + lVar4)) {
    do {
      while( true ) {
        FUN_002ff090("Missing PopFont()");
        lVar7 = lRam00000000020973e0;
        if ((int)*(uint *)(&UNK_00001f70 + lRam00000000020973e0) < 1) break;
        lVar9 = *(long *)(&UNK_00001f78 + lRam00000000020973e0) +
                (ulong)*(uint *)(&UNK_00001f70 + lRam00000000020973e0) * 0x10;
        lVar13 = *(long *)(lVar9 + -0x10);
        uVar16 = *(undefined4 *)(lVar9 + -8);
        uVar14 = *(undefined4 *)(lVar9 + -4);
        *(long *)((long)&dylib_command_000011a8.dylib.name.offset + lRam00000000020973e0) = lVar13;
        *(undefined4 *)
         ("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar7 + 4) = uVar16;
        func_0x00317da8(uVar14);
        if (lVar13 != 0) {
          lVar9 = *(long *)(lVar13 + 8);
          *(long *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                   lVar7 + 0x28) = lVar9;
          *(long *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                   lVar7 + 0x30) = lVar13;
          func_0x00329bcc(lVar9);
          if (*(long *)(&UNK_000014a8 + lVar7) != 0) {
            func_0x00320fbc(*(undefined8 *)(*(long *)(&UNK_000014a8 + lVar7) + 0x2c8),
                            *(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30));
          }
        }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        *(int *)(&UNK_00001f70 + lVar7) = *(int *)(&UNK_00001f70 + lVar7) + -1;
        if (*(int *)(&UNK_00001f70 + lVar4) <= (int)param_1[5]) goto LAB_003178c4;
      }
      FUN_002ff090("Calling PopFont() too many times!");
    } while ((int)param_1[5] < *(int *)(&UNK_00001f70 + lVar4));
  }
LAB_003178c4:
  if ((int)param_1[6] < *(int *)(lVar4 + 0x1f80)) {
    do {
      while( true ) {
        FUN_002ff090("Missing PopFocusScope()");
        lVar7 = lRam00000000020973e0;
        if (*(int *)(lRam00000000020973e0 + 0x1f80) <=
            (int)*(short *)(*(long *)(&UNK_00002860 + lRam00000000020973e0) + 0xc)) break;
        iVar5 = *(int *)(lRam00000000020973e0 + 0x1f80) + -1;
        *(int *)(lRam00000000020973e0 + 0x1f80) = iVar5;
        uVar14 = 0;
        if (iVar5 != 0) {
          uVar14 = *(undefined4 *)(*(long *)(&UNK_00001f88 + lVar7) + (long)iVar5 * 8 + -8);
        }
        *(undefined4 *)(&UNK_00001e3c + lVar7) = uVar14;
        if (*(int *)(lVar4 + 0x1f80) <= (int)param_1[6]) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          return;
        }
      }
      FUN_002ff090("Calling PopFocusScope() too many times!");
    } while ((int)param_1[6] < *(int *)(lVar4 + 0x1f80));
  }
  return;
}

