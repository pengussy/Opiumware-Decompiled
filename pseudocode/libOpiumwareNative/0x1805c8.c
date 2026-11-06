/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x1805c8:8ddb67de28
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

void FUN_001805c8(long *param_1,long param_2,uint param_3,long param_4)

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
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  *(undefined1 *)((long)param_1 + 0xd) = 0;
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar1 != 0) {
    apcStack_88[0] = (char *)CONCAT71(apcStack_88[0]._1_7_,0x20);
    uStack_60 = 0;
    uStack_58 = 0;
    pppppppuStack_68 = (undefined8 *******)0x0;
    uVar1 = uVar1 + 0xf;
    if (0x7ffffffffffffff6 < uVar1) {
      func_0x0000aa50();
      goto LAB_00180bf8;
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
// found on a paste site? it was re-uploaded illegally
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
/* WM - keep the notice, keep the source honest */
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
joined_r0x00180a18:
    if (uVar7 == 0xe) goto LAB_001807c4;
LAB_001808a0:
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
/* WM - do not claim this as your own */
      goto LAB_00180bf8;
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
    }
    bVar4 = *(byte *)((long)param_1 + 0x17);
    lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
    uVar2 = param_1[1];
    if (-1 < (char)bVar4) {
      lVar8 = 0x16;
      uVar2 = (ulong)bVar4;
    }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
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
/* if you paid for this, you were scammed - github.com/pengussy */
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
    lVar8 = uVar1 + 2;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = lVar8;
      *(undefined1 *)((long)plVar3 + lVar8) = 0;
      uVar7 = *(uint *)(param_2 + 0x20);
      goto joined_r0x00180a18;
    }
    *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
    *(undefined1 *)((long)plVar3 + lVar8) = 0;
    uVar7 = *(uint *)(param_2 + 0x20);
    if (uVar7 != 0xe) goto LAB_001808a0;
LAB_001807c4:
    uStack_70 = *(undefined8 *)(param_2 + 0x90);
    func_0x001801f0(apcStack_88,param_2 + 0x28);
    uStack_89 = 0x27;
    func_0x001867e4(&pppppppuStack_68,&uStack_70,"; last read: \'",apcStack_88,&uStack_89);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
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
/*  origin: github.com/pengussy  */
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
    if (cStack_71 < '\0') {
      __ZdlPv(apcStack_88[0]);
    }
  }
  if (param_3 != 0) {
/* keep the notice, keep the source honest */
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
LAB_00180bf8:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x180bfc);
      (*pcVar6)();
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
    func_0x00184c88(&pppppppuStack_68,"; expected ",apcStack_88);
    uVar1 = uStack_60;
    pppppppuVar5 = pppppppuStack_68;
    if (-1 < (long)uStack_58) {
      uVar1 = uStack_58 >> 0x38;
      pppppppuVar5 = &pppppppuStack_68;
    }
    bVar4 = *(byte *)((long)param_1 + 0x17);
    lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
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
/* WM - origin: github.com/pengussy */
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

