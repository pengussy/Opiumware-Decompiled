/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1943f8:464a6aaf3b
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_001943f8(long *param_1,long param_2,uint param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  uint uVar7;
  long lVar8;
  undefined1 uStack_89;
  char *apcStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar7 = 0xd;
  *(undefined1 *)((long)param_1 + 0x17) = 0xd;
  *param_1 = CONCAT35(s_syntax_error_01c2d476._5_3_,s_syntax_error_01c2d476._0_5_);
  *(ulong *)((long)param_1 + 5) =
       CONCAT53(s_syntax_error_01c2d476._8_5_,s_syntax_error_01c2d476._5_3_);
  *(undefined1 *)((long)param_1 + 0xd) = 0;
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  if (uVar1 != 0) {
    apcStack_88[0] = (char *)CONCAT71(apcStack_88[0]._1_7_,0x20);
    uStack_60 = 0;
    uStack_58 = 0;
    pppppppuStack_68 = (undefined8 *******)0x0;
    uVar1 = uVar1 + 0xf;
    if (0x7ffffffffffffff6 < uVar1) {
      func_0x0000aa50();
      goto LAB_00194a28;
    }
    if (0x16 < uVar1) {
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppppppuStack_68 = (undefined8 *******)__Znwm(uVar2);
      uStack_58 = uVar2 | 0x8000000000000000;
      *(undefined1 *)pppppppuStack_68 = 0;
    }
    uStack_60 = 0;
    func_0x001850a4(&pppppppuStack_68,"while parsing ",param_4,apcStack_88);
    uVar1 = uStack_60;
    pppppppuVar5 = pppppppuStack_68;
    if (-1 < (long)uStack_58) {
      uVar1 = uStack_58 >> 0x38;
      pppppppuVar5 = &pppppppuStack_68;
    }
    bVar4 = *(byte *)((long)param_1 + 0x17);
    lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
// found on a paste site? it was re-uploaded illegally
    uVar2 = param_1[1];
    if (-1 < (char)bVar4) {
      lVar8 = 0x16;
      uVar2 = (ulong)bVar4;
    }
    if (lVar8 - uVar2 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_1,lVar8,(uVar2 + uVar1) - lVar8,uVar2,uVar2,0);
    }
    else if (uVar1 != 0) {
      plVar3 = (long *)*param_1;
      if (-1 < (char)bVar4) {
        plVar3 = param_1;
      }
      _memmove((long)plVar3 + uVar2,pppppppuVar5,uVar1);
      lVar8 = uVar2 + uVar1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
/* unlicensed copy if this notice is missing */
        param_1[1] = lVar8;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
      }
      *(undefined1 *)((long)plVar3 + lVar8) = 0;
    }
    if ((long)uStack_58 < 0) {
      __ZdlPv(pppppppuStack_68);
    }
    uVar7 = (uint)*(byte *)((long)param_1 + 0x17);
  }
  lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
  uVar1 = param_1[1];
  if (-1 < (char)uVar7) {
    lVar8 = 0x16;
    uVar1 = (ulong)uVar7;
  }
  if (lVar8 - uVar1 < 2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              (param_1,lVar8,(uVar1 - lVar8) + 2,uVar1,uVar1,0,2,&UNK_01c2d493);
    uVar7 = *(uint *)(param_2 + 0x20);
/* WM - stripping the watermark breaks the license */
joined_r0x00194848:
    if (uVar7 == 0xe) goto LAB_001945f4;
LAB_001946d0:
    if (uVar7 < 0x11) {
      apcStack_88[0] = *(char **)(&UNK_01dbffd0 + (ulong)uVar7 * 8);
    }
    else {
      apcStack_88[0] = "unknown token";
    }
    uStack_60 = 0;
    uStack_58 = 0;
    pppppppuStack_68 = (undefined8 *******)0x0;
    lVar8 = _strlen();
    uVar1 = lVar8 + 0xb;
    if (0x7ffffffffffffff6 < uVar1) {
      func_0x0000aa50();
      goto LAB_00194a28;
    }
    if (0x16 < uVar1) {
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppppppuStack_68 = (undefined8 *******)__Znwm(uVar2);
      uStack_58 = uVar2 | 0x8000000000000000;
      *(undefined1 *)pppppppuStack_68 = 0;
      uStack_60 = 0;
    }
    func_0x00184c88(&pppppppuStack_68,"unexpected ",apcStack_88);
    uVar1 = uStack_60;
    pppppppuVar5 = pppppppuStack_68;
    if (-1 < (long)uStack_58) {
      uVar1 = uStack_58 >> 0x38;
      pppppppuVar5 = &pppppppuStack_68;
/* donate: donate/README.md */
    }
    bVar4 = *(byte *)((long)param_1 + 0x17);
    lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar2 = param_1[1];
    if (-1 < (char)bVar4) {
      lVar8 = 0x16;
      uVar2 = (ulong)bVar4;
    }
    if (lVar8 - uVar2 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_1,lVar8,(uVar2 + uVar1) - lVar8,uVar2,uVar2,0);
    }
    else if (uVar1 != 0) {
      plVar3 = (long *)*param_1;
      if (-1 < (char)bVar4) {
        plVar3 = param_1;
      }
      _memmove((long)plVar3 + uVar2,pppppppuVar5,uVar1);
      lVar8 = uVar2 + uVar1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = lVar8;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
      }
      *(undefined1 *)((long)plVar3 + lVar8) = 0;
    }
    if ((long)uStack_58 < 0) {
      __ZdlPv(pppppppuStack_68);
    }
  }
  else {
    plVar3 = (long *)*param_1;
    if (-1 < (char)uVar7) {
      plVar3 = param_1;
    }
    *(undefined2 *)((long)plVar3 + uVar1) = 0x202d;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    lVar8 = uVar1 + 2;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = lVar8;
      *(undefined1 *)((long)plVar3 + lVar8) = 0;
      uVar7 = *(uint *)(param_2 + 0x20);
      goto joined_r0x00194848;
    }
    *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
    *(undefined1 *)((long)plVar3 + lVar8) = 0;
    uVar7 = *(uint *)(param_2 + 0x20);
    if (uVar7 != 0xe) goto LAB_001946d0;
LAB_001945f4:
    uStack_70 = *(undefined8 *)(param_2 + 0x90);
    func_0x00194268(apcStack_88,param_2 + 0x28);
    uStack_89 = 0x27;
    func_0x001867e4(&pppppppuStack_68,&uStack_70,"; last read: \'",apcStack_88,&uStack_89);
    uVar1 = uStack_60;
    pppppppuVar5 = pppppppuStack_68;
    if (-1 < (long)uStack_58) {
      uVar1 = uStack_58 >> 0x38;
      pppppppuVar5 = &pppppppuStack_68;
    }
    bVar4 = *(byte *)((long)param_1 + 0x17);
    lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar2 = param_1[1];
    if (-1 < (char)bVar4) {
      lVar8 = 0x16;
      uVar2 = (ulong)bVar4;
    }
    if (lVar8 - uVar2 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_1,lVar8,(uVar2 + uVar1) - lVar8,uVar2,uVar2,0);
    }
    else if (uVar1 != 0) {
      plVar3 = (long *)*param_1;
      if (-1 < (char)bVar4) {
        plVar3 = param_1;
      }
// do not claim this as your own
      _memmove((long)plVar3 + uVar2,pppppppuVar5,uVar1);
      lVar8 = uVar2 + uVar1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = lVar8;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
      }
      *(undefined1 *)((long)plVar3 + lVar8) = 0;
    }
    if ((long)uStack_58 < 0) {
      __ZdlPv(pppppppuStack_68);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(apcStack_88[0]);
    }
  }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      apcStack_88[0] = *(char **)(&UNK_01dc0058 + (ulong)(param_3 - 1) * 8);
    }
    else {
      apcStack_88[0] = "unknown token";
    }
    uStack_60 = 0;
    uStack_58 = 0;
    pppppppuStack_68 = (undefined8 *******)0x0;
    lVar8 = _strlen();
    uVar1 = lVar8 + 0xb;
    if (0x7ffffffffffffff6 < uVar1) {
      func_0x0000aa50();
LAB_00194a28:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x194a2c);
      (*pcVar6)();
    }
    if (0x16 < uVar1) {
      uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
/* wm:keep the notice, keep the source honest */
      }
      pppppppuStack_68 = (undefined8 *******)__Znwm(uVar2);
      uStack_58 = uVar2 | 0x8000000000000000;
      *(undefined1 *)pppppppuStack_68 = 0;
      uStack_60 = 0;
    }
    func_0x00184c88(&pppppppuStack_68,"; expected ",apcStack_88);
    uVar1 = uStack_60;
    pppppppuVar5 = pppppppuStack_68;
    if (-1 < (long)uStack_58) {
      uVar1 = uStack_58 >> 0x38;
      pppppppuVar5 = &pppppppuStack_68;
    }
    bVar4 = *(byte *)((long)param_1 + 0x17);
    lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar2 = param_1[1];
    if (-1 < (char)bVar4) {
      lVar8 = 0x16;
      uVar2 = (ulong)bVar4;
    }
    if (lVar8 - uVar2 < uVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_1,lVar8,(uVar2 + uVar1) - lVar8,uVar2,uVar2,0);
    }
    else if (uVar1 != 0) {
      plVar3 = (long *)*param_1;
      if (-1 < (char)bVar4) {
        plVar3 = param_1;
/* keep the notice, keep the source honest */
      }
      _memmove((long)plVar3 + uVar2,pppppppuVar5,uVar1);
      lVar8 = uVar2 + uVar1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1[1] = lVar8;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
      }
      *(undefined1 *)((long)plVar3 + lVar8) = 0;
    }
    if ((long)uStack_58 < 0) {
      __ZdlPv(pppppppuStack_68);
    }
  }
  return;
}

