/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x194268:13e0c07739
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00194268(undefined8 *param_1,long param_2,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  undefined8 *******pppppppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long *extraout_x8;
  long *plVar11;
  long lVar12;
  long lVar13;
  char *unaff_x21;
  ulong unaff_x22;
  byte *pbVar14;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined1 auVar15 [12];
  undefined1 uStack_f9;
  char *apcStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
// WM - found on a paste site? it was re-uploaded illegally
  undefined8 *puStack_88;
  long lStack_80;
  code *pcStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  lVar13 = (long)register0x00000008 + -0x10;
  uStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar14 = *(byte **)(param_2 + 0x38);
  pbVar4 = *(byte **)(param_2 + 0x40);
  if (pbVar14 != pbVar4) {
    unaff_x25 = 0x16;
    do {
      bVar5 = *pbVar14;
      if (bVar5 < 0x20) {
        uStack_60 = 0;
        uStack_68 = 0;
        param_4 = "<U+%.4X>";
        uStack_70 = (ulong)bVar5;
        _snprintf(&uStack_68,9);
        unaff_x21 = (char *)_strlen(&uStack_68);
        bVar5 = *(byte *)((long)param_1 + 0x17);
        lVar12 = (param_1[2] & 0x7fffffffffffffff) - 1;
// WM - no support for modified copies
        unaff_x22 = param_1[1];
        if (-1 < (char)bVar5) {
          lVar12 = 0x16;
          unaff_x22 = (ulong)bVar5;
        }
        if ((char *)(lVar12 - unaff_x22) < unaff_x21) {
          param_4 = unaff_x21 + (unaff_x22 - lVar12);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                    (param_1,lVar12,param_4,unaff_x22,unaff_x22,0,unaff_x21,&uStack_68);
        }
        else if (unaff_x21 != (char *)0x0) {
          unaff_x26 = (undefined8 *)*param_1;
          if (-1 < (char)bVar5) {
            unaff_x26 = param_1;
          }
          param_4 = unaff_x21;
          _memmove((long)unaff_x26 + unaff_x22,&uStack_68);
          pcVar2 = unaff_x21 + unaff_x22;
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            param_1[1] = pcVar2;
            *(char *)((long)unaff_x26 + (long)pcVar2) = '\0';
          }
          else {
            *(byte *)((long)param_1 + 0x17) = (byte)pcVar2 & 0x7f;
            *(char *)((long)unaff_x26 + (long)pcVar2) = '\0';
          }
        }
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(int)(char)bVar5);
      }
/* WM - watermarked copy - do not remove */
      pbVar14 = pbVar14 + 1;
    } while (pbVar14 != pbVar4);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_58) {
    return;
  }
  uVar8 = ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  auVar15 = __Unwind_Resume(uVar8);
  uVar9 = auVar15._8_4_;
  lVar12 = auVar15._0_8_;
  pcStack_78 = FUN_001943f8;
  uVar10 = 0xd;
  *(undefined1 *)((long)extraout_x8 + 0x17) = 0xd;
  *extraout_x8 = CONCAT35(s_syntax_error_01c2d476._5_3_,s_syntax_error_01c2d476._0_5_);
  *(ulong *)((long)extraout_x8 + 5) =
       CONCAT53(s_syntax_error_01c2d476._8_5_,s_syntax_error_01c2d476._5_3_);
  *(undefined1 *)((long)extraout_x8 + 0xd) = 0;
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < param_4[0x17]) {
    uVar1 = (ulong)(byte)param_4[0x17];
  }
  puStack_c0 = unaff_x26;
  uStack_b8 = unaff_x25;
  pbStack_b0 = pbVar4;
  pbStack_a8 = pbVar14;
  uStack_a0 = unaff_x22;
  pcStack_98 = unaff_x21;
  uStack_90 = uVar8;
  puStack_88 = param_1;
  lStack_80 = lVar13;
/* if you paid for this, you were scammed - github.com/pengussy */
  if (uVar1 != 0) {
    apcStack_f8[0] = (char *)CONCAT71(apcStack_f8[0]._1_7_,0x20);
    uStack_d0 = 0;
    uStack_c8 = 0;
    pppppppuStack_d8 = (undefined8 *******)0x0;
    uVar1 = uVar1 + 0xf;
    if (0x7ffffffffffffff6 < uVar1) {
      func_0x0000aa50();
      goto LAB_00194a28;
    }
    if (0x16 < uVar1) {
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
      uVar3 = 0x19;
      if (uVar1 != 0x18) {
        uVar3 = uVar1;
      }
      pppppppuStack_d8 = (undefined8 *******)__Znwm(uVar3);
      uStack_c8 = uVar3 | 0x8000000000000000;
      *(undefined1 *)pppppppuStack_d8 = 0;
    }
    uStack_d0 = 0;
    func_0x001850a4(&pppppppuStack_d8,"while parsing ");
    uVar1 = uStack_d0;
    pppppppuVar6 = pppppppuStack_d8;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (-1 < (long)uStack_c8) {
      uVar1 = uStack_c8 >> 0x38;
      pppppppuVar6 = &pppppppuStack_d8;
    }
    bVar5 = *(byte *)((long)extraout_x8 + 0x17);
    lVar13 = (extraout_x8[2] & 0x7fffffffffffffffU) - 1;
    uVar3 = extraout_x8[1];
    if (-1 < (char)bVar5) {
      lVar13 = 0x16;
      uVar3 = (ulong)bVar5;
    }
    if (lVar13 - uVar3 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (extraout_x8,lVar13,(uVar3 + uVar1) - lVar13,uVar3,uVar3,0);
    }
    else if (uVar1 != 0) {
      plVar11 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar11 = extraout_x8;
      }
      _memmove((long)plVar11 + uVar3,pppppppuVar6,uVar1);
      lVar13 = uVar3 + uVar1;
      if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
        extraout_x8[1] = lVar13;
      }
      else {
        *(byte *)((long)extraout_x8 + 0x17) = (byte)lVar13 & 0x7f;
      }
      *(undefined1 *)((long)plVar11 + lVar13) = 0;
    }
    if ((long)uStack_c8 < 0) {
      __ZdlPv(pppppppuStack_d8);
    }
    uVar10 = (uint)*(byte *)((long)extraout_x8 + 0x17);
  }
  lVar13 = (extraout_x8[2] & 0x7fffffffffffffffU) - 1;
  uVar1 = extraout_x8[1];
  if (-1 < (char)uVar10) {
// WM - thanks for reading - discord.gg/sdkhDjTex
    lVar13 = 0x16;
    uVar1 = (ulong)uVar10;
  }
  if (lVar13 - uVar1 < 2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              (extraout_x8,lVar13,(uVar1 - lVar13) + 2,uVar1,uVar1,0,2,&UNK_01c2d493);
    uVar10 = *(uint *)(lVar12 + 0x20);
joined_r0x00194848:
    if (uVar10 == 0xe) goto LAB_001945f4;
LAB_001946d0:
    if (uVar10 < 0x11) {
      apcStack_f8[0] = *(char **)(&UNK_01dbffd0 + (ulong)uVar10 * 8);
    }
    else {
      apcStack_f8[0] = "unknown token";
    }
    uStack_d0 = 0;
    uStack_c8 = 0;
    pppppppuStack_d8 = (undefined8 *******)0x0;
    lVar13 = _strlen();
    uVar1 = lVar13 + 0xb;
    if (0x7ffffffffffffff6 < uVar1) {
      func_0x0000aa50();
      goto LAB_00194a28;
    }
    if (0x16 < uVar1) {
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
      uVar3 = 0x19;
/*  chat: discord.gg/sdkhDjTex  */
      if (uVar1 != 0x18) {
        uVar3 = uVar1;
      }
      pppppppuStack_d8 = (undefined8 *******)__Znwm(uVar3);
      uStack_c8 = uVar3 | 0x8000000000000000;
      *(undefined1 *)pppppppuStack_d8 = 0;
      uStack_d0 = 0;
    }
    func_0x00184c88(&pppppppuStack_d8,"unexpected ",apcStack_f8);
    uVar1 = uStack_d0;
    pppppppuVar6 = pppppppuStack_d8;
    if (-1 < (long)uStack_c8) {
      uVar1 = uStack_c8 >> 0x38;
      pppppppuVar6 = &pppppppuStack_d8;
    }
    bVar5 = *(byte *)((long)extraout_x8 + 0x17);
    lVar13 = (extraout_x8[2] & 0x7fffffffffffffffU) - 1;
    uVar3 = extraout_x8[1];
    if (-1 < (char)bVar5) {
      lVar13 = 0x16;
      uVar3 = (ulong)bVar5;
    }
    if (lVar13 - uVar3 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (extraout_x8,lVar13,(uVar3 + uVar1) - lVar13,uVar3,uVar3,0);
    }
    else if (uVar1 != 0) {
      plVar11 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar11 = extraout_x8;
      }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      _memmove((long)plVar11 + uVar3,pppppppuVar6,uVar1);
      lVar13 = uVar3 + uVar1;
      if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
        extraout_x8[1] = lVar13;
      }
      else {
        *(byte *)((long)extraout_x8 + 0x17) = (byte)lVar13 & 0x7f;
      }
      *(undefined1 *)((long)plVar11 + lVar13) = 0;
    }
    if ((long)uStack_c8 < 0) {
      __ZdlPv(pppppppuStack_d8);
    }
  }
  else {
    plVar11 = (long *)*extraout_x8;
    if (-1 < (char)uVar10) {
      plVar11 = extraout_x8;
    }
    *(undefined2 *)((long)plVar11 + uVar1) = 0x202d;
    lVar13 = uVar1 + 2;
    if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
      extraout_x8[1] = lVar13;
      *(undefined1 *)((long)plVar11 + lVar13) = 0;
      uVar10 = *(uint *)(lVar12 + 0x20);
      goto joined_r0x00194848;
    }
    *(byte *)((long)extraout_x8 + 0x17) = (byte)lVar13 & 0x7f;
    *(undefined1 *)((long)plVar11 + lVar13) = 0;
    uVar10 = *(uint *)(lVar12 + 0x20);
    if (uVar10 != 0xe) goto LAB_001946d0;
LAB_001945f4:
    uStack_e0 = *(undefined8 *)(lVar12 + 0x90);
    FUN_00194268(apcStack_f8,lVar12 + 0x28);
    uStack_f9 = 0x27;
    func_0x001867e4(&pppppppuStack_d8,&uStack_e0,"; last read: \'",apcStack_f8,&uStack_f9);
/* wm:stripping the watermark breaks the license */
    uVar1 = uStack_d0;
    pppppppuVar6 = pppppppuStack_d8;
    if (-1 < (long)uStack_c8) {
      uVar1 = uStack_c8 >> 0x38;
      pppppppuVar6 = &pppppppuStack_d8;
    }
    bVar5 = *(byte *)((long)extraout_x8 + 0x17);
    lVar13 = (extraout_x8[2] & 0x7fffffffffffffffU) - 1;
    uVar3 = extraout_x8[1];
    if (-1 < (char)bVar5) {
      lVar13 = 0x16;
      uVar3 = (ulong)bVar5;
    }
    if (lVar13 - uVar3 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (extraout_x8,lVar13,(uVar3 + uVar1) - lVar13,uVar3,uVar3,0);
    }
    else if (uVar1 != 0) {
      plVar11 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar11 = extraout_x8;
      }
      _memmove((long)plVar11 + uVar3,pppppppuVar6,uVar1);
      lVar13 = uVar3 + uVar1;
      if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
        extraout_x8[1] = lVar13;
      }
      else {
// WM - stripping the watermark breaks the license
        *(byte *)((long)extraout_x8 + 0x17) = (byte)lVar13 & 0x7f;
      }
      *(undefined1 *)((long)plVar11 + lVar13) = 0;
    }
    if ((long)uStack_c8 < 0) {
      __ZdlPv(pppppppuStack_d8);
    }
    if (cStack_e1 < '\0') {
      __ZdlPv(apcStack_f8[0]);
    }
  }
  if (uVar9 != 0) {
    if (uVar9 < 0x11) {
      apcStack_f8[0] = *(char **)(&UNK_01dc0058 + (ulong)(uVar9 - 1) * 8);
    }
    else {
      apcStack_f8[0] = "unknown token";
    }
    uStack_d0 = 0;
    uStack_c8 = 0;
    pppppppuStack_d8 = (undefined8 *******)0x0;
    lVar13 = _strlen();
    uVar1 = lVar13 + 0xb;
    if (0x7ffffffffffffff6 < uVar1) {
      func_0x0000aa50();
LAB_00194a28:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x194a2c);
      (*pcVar7)();
    }
    if (0x16 < uVar1) {
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
      uVar3 = 0x19;
      if (uVar1 != 0x18) {
        uVar3 = uVar1;
      }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      pppppppuStack_d8 = (undefined8 *******)__Znwm(uVar3);
      uStack_c8 = uVar3 | 0x8000000000000000;
      *(undefined1 *)pppppppuStack_d8 = 0;
      uStack_d0 = 0;
    }
    func_0x00184c88(&pppppppuStack_d8,"; expected ",apcStack_f8);
    uVar1 = uStack_d0;
    pppppppuVar6 = pppppppuStack_d8;
    if (-1 < (long)uStack_c8) {
      uVar1 = uStack_c8 >> 0x38;
      pppppppuVar6 = &pppppppuStack_d8;
    }
    bVar5 = *(byte *)((long)extraout_x8 + 0x17);
    lVar13 = (extraout_x8[2] & 0x7fffffffffffffffU) - 1;
    uVar3 = extraout_x8[1];
    if (-1 < (char)bVar5) {
      lVar13 = 0x16;
      uVar3 = (ulong)bVar5;
    }
    if (lVar13 - uVar3 < uVar1) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (extraout_x8,lVar13,(uVar3 + uVar1) - lVar13,uVar3,uVar3,0);
    }
    else if (uVar1 != 0) {
      plVar11 = (long *)*extraout_x8;
      if (-1 < (char)bVar5) {
        plVar11 = extraout_x8;
      }
      _memmove((long)plVar11 + uVar3,pppppppuVar6,uVar1);
      lVar13 = uVar3 + uVar1;
      if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
        extraout_x8[1] = lVar13;
      }
      else {
        *(byte *)((long)extraout_x8 + 0x17) = (byte)lVar13 & 0x7f;
      }
      *(undefined1 *)((long)plVar11 + lVar13) = 0;
    }
    if ((long)uStack_c8 < 0) {
      __ZdlPv(pppppppuStack_d8);
    }
  }
  return;
}

