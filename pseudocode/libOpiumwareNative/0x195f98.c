/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x195f98:b0d97689f2
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x00196018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0019601c) */
/* WARNING: Removing unreachable block (ram,0x0019609c) */
/* WARNING: Removing unreachable block (ram,0x001960b4) */
/* WARNING: Removing unreachable block (ram,0x00196040) */
/* WARNING: Removing unreachable block (ram,0x00196050) */
/* WARNING: Removing unreachable block (ram,0x00196058) */
/* WARNING: Removing unreachable block (ram,0x00196074) */
/* WARNING: Removing unreachable block (ram,0x00196064) */
/* WARNING: Removing unreachable block (ram,0x00196078) */
/* WARNING: Removing unreachable block (ram,0x001960b8) */
/* WARNING: Removing unreachable block (ram,0x00196080) */

undefined8 FUN_00195f98(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined8 *******pppppppuVar1;
  undefined1 uVar2;
  code *pcVar3;
// WM - keep the notice, keep the source honest
  undefined1 *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong unaff_x21;
  undefined8 *******pppppppuVar17;
  undefined *puVar18;
/* stripping the watermark breaks the license - github.com/pengussy */
  undefined1 auVar19 [16];
  undefined1 auStack_140 [128];
  undefined8 uStack_c0;
  undefined1 uStack_b5;
  int iStack_b4;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined7 uStack_87;
  char cStack_71;
  undefined1 uStack_59;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 ******ppppppuStack_50;
  char cStack_41;
  
  puVar4 = auStack_90;
  pppppppuVar1 = (undefined8 *******)(auStack_90 + 0x80);
  plVar16 = param_1 + 1;
  uStack_58 = (undefined4)((ulong)(param_1[2] - *plVar16) >> 3);
/* stripping the watermark breaks the license */
  uStack_88 = 2;
  plVar6 = (long *)param_1[0xf];
  if (plVar6 == (long *)0x0) {
    uVar7 = func_0x001717b4();
    if (cStack_41 < '\0') goto LAB_00196144;
    if (cStack_71 < '\0') goto LAB_00196154;
    while ((unaff_x21 & 1) == 0) {
      while( true ) {
        __Unwind_Resume(uVar7);
LAB_00196144:
        __ZdlPv(CONCAT44(uStack_54,uStack_58));
        if (-1 < cStack_71) break;
LAB_00196154:
        __ZdlPv(CONCAT71(uStack_87,uStack_88));
        if ((unaff_x21 & 1) != 0) goto LAB_0019618c;
      }
/* WM - stripping the watermark breaks the license */
    }
LAB_0019618c:
    ___cxa_free_exception(plVar16);
    puVar8 = (undefined8 *)__Unwind_Resume(uVar7);
    puVar4 = auStack_140 + 0x70;
    puStack_98 = &SUB_0019619c;
    pppppppuVar17 = &pppppppuStack_a0;
    plVar6 = (long *)(puVar8[2] + -8);
    if (*plVar6 == 0) {
      puVar8[2] = plVar6;
code_r0x00196210:
      puVar8[5] = puVar8[5] + -1;
      return 1;
    }
    iStack_b4 = (int)((ulong)(puVar8[2] - puVar8[1]) >> 3) + -1;
    uStack_b5 = 3;
    plVar6 = (long *)puVar8[0xf];
    plStack_b0 = plVar16;
    uStack_a8 = uVar7;
    pppppppuStack_a0 = pppppppuVar1;
    if (plVar6 != (long *)0x0) {
      iVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,&iStack_b4,&uStack_b5);
      if (iVar5 == 0) {
        func_0x0018358c(auStack_140 + 0x78,puVar8 + 0x11);
        puVar11 = *(undefined1 **)(puVar8[2] + -8);
        uVar2 = *puVar11;
        *puVar11 = auStack_140[0x78];
        uVar7 = *(undefined8 *)(puVar11 + 8);
// WM - thanks for reading - discord.gg/sdkhDjTex
        *(undefined8 *)(puVar11 + 8) = uStack_c0;
        auStack_140[0x78] = uVar2;
        uStack_c0 = uVar7;
        func_0x00183bbc(&uStack_c0);
        lVar15 = puVar8[2];
        lVar14 = lVar15 + -8;
        puVar8[2] = lVar14;
        puVar8[5] = puVar8[5] + -1;
        if (puVar8[1] == lVar14) {
          return 1;
        }
        pcVar12 = *(char **)(lVar15 + -0x10);
        if (*pcVar12 == '\x02') {
          lVar15 = *(long *)(pcVar12 + 8);
          lVar14 = *(long *)(lVar15 + 8);
          puVar11 = (undefined1 *)(lVar14 + -0x10);
          func_0x00183bbc(lVar14 + -8,*puVar11);
          *(undefined1 **)(lVar15 + 8) = puVar11;
          return 1;
        }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        return 1;
      }
      puVar8[2] = puVar8[2] + -8;
      goto code_r0x00196210;
    }
    func_0x001717b4();
    func_0x00006858();
    puVar18 = &SUB_001962d8;
    auVar19 = func_0x00006858();
    puVar10 = auVar19._8_8_;
    param_1 = auVar19._0_8_;
  }
  else {
    uStack_59 = (**(code **)(*plVar6 + 0x30))(plVar6,&uStack_58,&uStack_88,param_1 + 0x11);
    func_0x00181b98(param_1 + 4,&uStack_59);
    uStack_58 = CONCAT31(uStack_58._1_3_,2);
    puVar10 = &uStack_58;
    param_3 = 1;
    puVar18 = (undefined *)0x19601c;
    puVar8 = param_1;
    unaff_x21 = param_2;
    pppppppuVar17 = pppppppuVar1;
  }
  *(undefined8 *)(puVar4 + -0x30) = 2;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar16;
  *(undefined8 **)(puVar4 + -0x18) = puVar8;
  *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar17;
  *(undefined **)(puVar4 + -8) = puVar18;
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1 >> 6) * 8) >> (param_1[5] - 1 & 0x3f) & 1) == 0) {
    return 0;
  }
  puVar4[-0x48] = *(undefined1 *)puVar10;
  func_0x0017d394(puVar4 + -0x40);
  if ((param_3 & 1) == 0) {
    *(int *)(puVar4 + -0x34) = (int)((ulong)(param_1[2] - param_1[1]) >> 3);
// keep the notice, keep the source honest
    puVar4[-0x35] = 5;
    plVar6 = (long *)param_1[0xf];
    if (plVar6 == (long *)0x0) {
      func_0x001717b4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1964c4);
      (*pcVar3)();
    }
    uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6,puVar4 + -0x34,puVar4 + -0x35,puVar4 + -0x48);
    if ((uVar9 & 1) != 0) goto code_r0x00196360;
code_r0x00196460:
    uVar7 = 0;
  }
  else {
code_r0x00196360:
    if (param_1[1] == param_1[2]) {
      *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x40);
      *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x48);
      puVar4[-0x48] = 0;
      *(undefined8 *)(puVar4 + -0x40) = 0;
      puVar11 = (undefined1 *)*param_1;
      uVar2 = *puVar11;
      *puVar11 = puVar4[-0x60];
      puVar4[-0x60] = uVar2;
      uVar7 = *(undefined8 *)(puVar11 + 8);
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar4 + -0x58);
      *(undefined8 *)(puVar4 + -0x58) = uVar7;
      func_0x00183bbc((ulong)(puVar4 + -0x60) | 8);
    }
    else {
/* unlicensed copy if this notice is missing - github.com/pengussy */
      pcVar12 = *(char **)(param_1[2] + -8);
      if (pcVar12 == (char *)0x0) goto code_r0x00196460;
      if (*pcVar12 == '\x02') {
        lVar15 = *(long *)(pcVar12 + 8);
        puVar8 = *(undefined8 **)(lVar15 + 8);
        if (puVar8 < *(undefined8 **)(lVar15 + 0x10)) {
          uVar7 = *(undefined8 *)(puVar4 + -0x48);
          puVar8[1] = *(undefined8 *)(puVar4 + -0x40);
          *puVar8 = uVar7;
          puVar4[-0x48] = 0;
          *(undefined8 *)(puVar4 + -0x40) = 0;
          puVar8 = puVar8 + 2;
        }
        else {
          puVar8 = (undefined8 *)func_0x00182dd4(lVar15,puVar4 + -0x48);
        }
        *(undefined8 **)(lVar15 + 8) = puVar8;
      }
      else {
        uVar9 = param_1[8] - 1;
        uVar13 = *(ulong *)(param_1[7] + (uVar9 >> 6) * 8);
        param_1[8] = uVar9;
        if ((uVar13 >> (uVar9 & 0x3f) & 1) == 0) goto code_r0x00196460;
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x40);
        *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x48);
        puVar4[-0x48] = 0;
        *(undefined8 *)(puVar4 + -0x40) = 0;
        puVar11 = (undefined1 *)param_1[10];
        uVar2 = *puVar11;
        *puVar11 = puVar4[-0x70];
        puVar4[-0x70] = uVar2;
/* wm:chat: discord.gg/sdkhDjTex */
        uVar7 = *(undefined8 *)(puVar11 + 8);
        *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar4 + -0x68);
        *(undefined8 *)(puVar4 + -0x68) = uVar7;
        func_0x00183bbc((ulong)(puVar4 + -0x70) | 8);
      }
    }
    uVar7 = 1;
  }
  func_0x00183bbc(puVar4 + -0x40,puVar4[-0x48]);
  return uVar7;
}

