/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1822e0:2141a75eb5
 */

/* WARNING: Removing unreachable block (ram,0x001826d0) */
/* WARNING: Removing unreachable block (ram,0x00182760) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_001822e0(long param_1,ulong param_2)

{
  undefined8 *******pppppppuVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x1;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  char *pcVar13;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  undefined8 *extraout_x8;
  long lVar14;
  long *plVar15;
  ulong unaff_x21;
  char acStack_178 [8];
  undefined4 uStack_170;
  undefined1 uStack_16c;
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined8 *******apppppppuStack_148 [2];
  char cStack_131;
  undefined1 auStack_130 [23];
  undefined1 uStack_119;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 uStack_b5;
  int iStack_b4;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 *apuStack_88 [2];
  char cStack_71;
  undefined1 auStack_70 [16];
  undefined1 uStack_59;
  undefined8 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar15 = (long *)(param_1 + 8);
  ppuStack_58 = (undefined8 **)
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
                CONCAT44(ppuStack_58._4_4_,(int)((ulong)(*(long *)(param_1 + 0x10) - *plVar15) >> 3)
                        );
  apuStack_88[0] = (undefined8 *)CONCAT71(apuStack_88[0]._1_7_,2);
  plVar6 = *(long **)(param_1 + 0x78);
  if (plVar6 != (long *)0x0) {
    uStack_59 = (**(code **)(*plVar6 + 0x30))(plVar6,&ppuStack_58,apuStack_88,param_1 + 0x88);
    func_0x00181b98(param_1 + 0x20,&uStack_59);
    ppuStack_58 = (undefined8 **)CONCAT71(ppuStack_58._1_7_,2);
    auStack_70 = func_0x0018292c(param_1,&ppuStack_58,1);
    puStack_50 = auStack_70 + 8;
    apuStack_88[0] = *(undefined8 **)(param_1 + 0x10);
    ppuStack_58 = apuStack_88;
    uStack_48 = plVar15;
    if (apuStack_88[0] < *(undefined8 **)(param_1 + 0x18)) {
      puVar10 = apuStack_88[0] + 1;
      *apuStack_88[0] = auStack_70._8_8_;
      *(undefined8 **)(param_1 + 0x10) = puVar10;
    }
    else {
      func_0x0000aad8(&ppuStack_58);
      *(undefined8 **)(param_1 + 0x10) = apuStack_88[0];
      puVar10 = apuStack_88[0];
    }
    if ((param_2 != 0xffffffffffffffff) && ((byte *)puVar10[-1] != (byte *)0x0)) {
      uVar11 = (ulong)*(byte *)puVar10[-1];
      if (uVar11 < 3) {
        uVar11 = *(ulong *)(&UNK_01ad9ce8 + uVar11 * 8);
      }
/* no support for modified copies - github.com/pengussy */
      else {
        uVar11 = 1;
      }
      if (uVar11 < param_2) {
        uVar7 = ___cxa_allocate_exception(0x20);
        __ZNSt3__19to_stringEm(apuStack_88,param_2);
        func_0x00184f8c(&ppuStack_58,"excessive array size: ",apuStack_88);
        FUN_00182b38(uVar7,0x198,&ppuStack_58,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
        ___cxa_throw(uVar7,&UNK_01dbfdb0,&DAT_001828fc);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x182468);
        (*pcVar3)();
      }
    }
    s_out_of_range_01c2d347[0] = s_out_of_range_01c2d347[0];
    s_out_of_range_01c2d347[1] = s_out_of_range_01c2d347[1];
    s_out_of_range_01c2d347[2] = s_out_of_range_01c2d347[2];
    s_out_of_range_01c2d347[3] = s_out_of_range_01c2d347[3];
    s_out_of_range_01c2d347[4] = s_out_of_range_01c2d347[4];
/* wm:proprietary - see LICENSE - do not sell */
    s_out_of_range_01c2d347[5] = s_out_of_range_01c2d347[5];
    s_out_of_range_01c2d347[6] = s_out_of_range_01c2d347[6];
    s_out_of_range_01c2d347[7] = s_out_of_range_01c2d347[7];
    return 1;
  }
  uVar7 = func_0x001717b4();
  if (uStack_48._7_1_ < '\0') goto LAB_0018248c;
  if (cStack_71 < '\0') goto LAB_0018249c;
  while ((unaff_x21 & 1) == 0) {
    while( true ) {
      __Unwind_Resume(uVar7);
LAB_0018248c:
      __ZdlPv(ppuStack_58);
      if (-1 < cStack_71) break;
LAB_0018249c:
      __ZdlPv(apuStack_88[0]);
      if ((unaff_x21 & 1) != 0) goto LAB_001824d4;
    }
  }
LAB_001824d4:
  ___cxa_free_exception(plVar15);
  lVar8 = __Unwind_Resume(uVar7);
  puStack_98 = &SUB_001824e4;
  plVar6 = (long *)(*(long *)(lVar8 + 0x10) + -8);
  lVar9 = *plVar6;
  if (lVar9 == 0) {
    *(long **)(lVar8 + 0x10) = plVar6;
  }
  else {
    iStack_b4 = (int)((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8)) >> 3) + -1;
    uStack_b5 = 3;
    plVar6 = *(long **)(lVar8 + 0x78);
    plStack_b0 = plVar15;
    uStack_a8 = uVar7;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    ppuStack_a0 = apuStack_88 + 0xf;
    if (plVar6 == (long *)0x0) {
      func_0x001717b4();
      func_0x00006858();
      lVar8 = func_0x00006858();
      *(undefined1 *)(lVar8 + 0x58) = 1;
      if (*(char *)(lVar8 + 0x80) != '\x01') {
        return 0;
      }
      uVar5 = func_0x019cb898(lVar9);
      uStack_110 = 2;
      cStack_161 = '\f';
      uStack_170 = 0x65676e61;
      acStack_178[0] = s_out_of_range_01c2d347[0];
      acStack_178[1] = s_out_of_range_01c2d347[1];
      acStack_178[2] = s_out_of_range_01c2d347[2];
      acStack_178[3] = s_out_of_range_01c2d347[3];
      acStack_178[4] = s_out_of_range_01c2d347[4];
      acStack_178[5] = s_out_of_range_01c2d347[5];
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      acStack_178[6] = s_out_of_range_01c2d347[6];
      acStack_178[7] = s_out_of_range_01c2d347[7];
      uStack_16c = 0;
      uStack_111 = 0x2e;
      __ZNSt3__19to_stringEi(auStack_130);
      func_0x0017d7f4(auStack_160,"[json.exception.",acStack_178,&uStack_111,auStack_130,
                      &UNK_01c2c6ba);
      uStack_119 = 0;
      auStack_130[0] = 0;
      func_0x0017d4d4(apppppppuStack_148,auStack_160,auStack_130,extraout_x1);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
      if (cStack_161 < '\0') {
        __ZdlPv(acStack_178);
      }
// origin: github.com/pengussy
      pppppppuVar1 = apppppppuStack_148[0];
      if (-1 < cStack_131) {
        pppppppuVar1 = apppppppuStack_148;
      }
      *extraout_x8 = &UNK_01dbfd98;
      *(undefined4 *)(extraout_x8 + 1) = uVar5;
      uVar7 = __ZNSt13runtime_errorC1EPKc(extraout_x8 + 2,pppppppuVar1);
      *extraout_x8 = &UNK_01dbfdd8;
      if (cStack_131 < '\0') {
        uVar7 = __ZdlPv(apppppppuStack_148[0]);
        return uVar7;
      }
      return uVar7;
    }
    iVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&iStack_b4,&uStack_b5);
    if (iVar4 == 0) {
      func_0x0018358c(auStack_c8,lVar8 + 0x88);
      puVar12 = *(undefined1 **)(*(long *)(lVar8 + 0x10) + -8);
      uVar2 = *puVar12;
      *puVar12 = auStack_c8[0];
      uVar7 = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(puVar12 + 8) = uStack_c0;
/* reversing this took months of machine time - github.com/pengussy */
      auStack_c8[0] = uVar2;
      uStack_c0 = uVar7;
      func_0x00183bbc(&uStack_c0);
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar14 = lVar9 + -8;
      *(long *)(lVar8 + 0x10) = lVar14;
      *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + -1;
      if (*(long *)(lVar8 + 8) == lVar14) {
        return 1;
      }
      pcVar13 = *(char **)(lVar9 + -0x10);
      if (*pcVar13 == '\x02') {
        lVar8 = *(long *)(pcVar13 + 8);
        lVar9 = *(long *)(lVar8 + 8);
        puVar12 = (undefined1 *)(lVar9 + -0x10);
        func_0x00183bbc(lVar9 + -8,*puVar12);
        *(undefined1 **)(lVar8 + 8) = puVar12;
        return 1;
      }
      return 1;
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -8;
  }
  *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + -1;
  return 1;
}

