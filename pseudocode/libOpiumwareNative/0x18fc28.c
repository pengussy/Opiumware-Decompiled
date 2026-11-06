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
 *  file-id: 0x18fc28:1cf6fd4b6d
 *  --------------------------------------------------------------------------*/

long * FUN_0018fc28(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar14 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((char)*param_1 != '\x03') {
    uVar9 = ___cxa_allocate_exception(0x20);
    uStack_50 = func_0x00184714(param_1);
    func_0x00188468(auStack_48,"type must be string, but is ",&uStack_50);
    FUN_00187cfc(uVar9,0x12e,auStack_48,param_1);
    ___cxa_throw(uVar9,&UNK_01dbfe30,&DAT_0018473c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x18fd44);
    (*pcVar5)();
  }
  plVar12 = (long *)param_1[1];
// thanks for reading - discord.gg/sdkhDjTex
  if (param_2 == plVar12) {
    return param_1;
  }
  bVar2 = *(byte *)((long)plVar12 + 0x17);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    unaff_x20 = plVar12[1];
    plVar4 = (long *)*plVar12;
    if (-1 < (char)bVar2) {
      unaff_x20 = (ulong)bVar2;
      plVar4 = plVar12;
    }
    puVar6 = auStack_48 + 8;
    unaff_x29 = auStack_48 + 0x38;
    unaff_x23 = param_2[2];
    if (unaff_x20 < (unaff_x23 & 0x7fffffffffffffff)) {
      lVar13 = *param_2;
      param_2[1] = unaff_x20;
      _memmove(lVar13,plVar4,unaff_x20);
      *(undefined1 *)(lVar13 + unaff_x20) = 0;
// found on a paste site? it was re-uploaded illegally
      return param_2;
    }
    if (unaff_x20 < 0x7ffffffffffffff7) {
      if ((long)unaff_x23 < 0) {
        uVar10 = (unaff_x23 & 0x7fffffffffffffff) - 1;
        if (0x3ffffffffffffff3 < uVar10) {
          lVar13 = __Znwm(0x7ffffffffffffff8);
          uVar10 = 0xfffffffffffffff8;
          goto joined_r0x00128760;
        }
      }
      else {
        uVar10 = 0x16;
      }
      uVar11 = unaff_x20;
      if (unaff_x20 <= uVar10 * 2) {
        uVar11 = uVar10 * 2;
      }
      uVar11 = (uVar11 & 0x7ffffffffffffff8) + 8;
      uVar10 = 0x19;
      if (uVar11 != 0x18) {
        uVar10 = uVar11;
      }
      lVar13 = __Znwm(uVar10);
      uVar10 = uVar10 | 0x8000000000000000;
joined_r0x00128760:
      if (unaff_x20 != 0) {
        _memcpy(lVar13,plVar4,unaff_x20);
      }
      *(undefined1 *)(lVar13 + unaff_x20) = 0;
      if ((long)unaff_x23 < 0) {
        __ZdlPv(*param_2);
      }
      *param_2 = lVar13;
      param_2[1] = unaff_x20;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      param_2[2] = uVar10;
      return param_2;
    }
    unaff_x30 = &SUB_001287e0;
    uVar10 = unaff_x20;
    auVar14 = func_0x0000aa50();
    lVar13 = auVar14._8_8_;
    plVar12 = auVar14._0_8_;
  }
  else {
    if (-1 < (char)bVar2) {
      lVar7 = plVar12[1];
      lVar13 = *plVar12;
      param_2[2] = plVar12[2];
      param_2[1] = lVar7;
      *param_2 = lVar13;
      return param_1;
    }
    lVar13 = *plVar12;
    uVar10 = plVar12[1];
    puVar6 = (undefined1 *)register0x00000008;
    plVar12 = param_2;
    param_2 = unaff_x19;
  }
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  *(ulong *)(puVar6 + -0x20) = unaff_x20;
  *(long **)(puVar6 + -0x18) = param_2;
  *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
  *(undefined **)(puVar6 + -8) = unaff_x30;
  if (uVar10 < 0x17) {
    *(char *)((long)plVar12 + 0x17) = (char)uVar10;
    _memmove(plVar12,lVar13,uVar10);
    *(undefined1 *)((long)plVar12 + uVar10) = 0;
    return plVar12;
  }
  if (0x7ffffffffffffff6 < uVar10) {
    puVar8 = (undefined8 *)func_0x0000aa50();
    *(undefined8 *)(puVar6 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x68) = unaff_x21;
    *(ulong *)(puVar6 + -0x60) = uVar10;
    *(long **)(puVar6 + -0x58) = plVar12;
    *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x48) = &DAT_00128914;
    puVar8[-2] = &UNK_01dbed58;
    puVar8[0xe] = &UNK_01dbeda8;
    *puVar8 = &UNK_01dbed80;
    puVar8[1] = &UNK_01dbef48;
    if (*(char *)((long)puVar8 + 0x5f) < '\0') {
      __ZdlPv(puVar8[9]);
    }
    puVar8[1] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
    __ZNSt3__16localeD1Ev(puVar8 + 2);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(puVar8 + -2,&UNK_01dbedc0);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                    /* WARNING: Could not recover jumptable at 0x01a172c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar12 = (long *)(*(code *)PTR___ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev_01f246a0)
                                (puVar8 + 0xe);
    return plVar12;
  }
  cVar3 = *(char *)((long)plVar12 + 0x17);
  if (cVar3 < '\0') {
    uVar11 = (plVar12[2] & 0x7fffffffffffffffU) - 1;
    if (uVar11 < 0x3ffffffffffffff4) goto code_r0x00128888;
    uVar11 = 0x7ffffffffffffff8;
    lVar7 = __Znwm(0x7ffffffffffffff8);
  }
  else {
    uVar11 = 0x16;
code_r0x00128888:
    uVar1 = uVar10;
    if (uVar10 <= uVar11 * 2) {
      uVar1 = uVar11 * 2;
    }
    uVar1 = (uVar1 & 0x7ffffffffffffff8) + 8;
// more drops soon - github.com/pengussy
    uVar11 = 0x19;
    if (uVar1 != 0x18) {
      uVar11 = uVar1;
    }
    lVar7 = __Znwm(uVar11);
    if (-1 < cVar3) {
      _memcpy(lVar7,lVar13,uVar10);
      *(undefined1 *)(lVar7 + uVar10) = 0;
      goto code_r0x001288ec;
    }
  }
  _memcpy(lVar7,lVar13,uVar10);
  *(undefined1 *)(lVar7 + uVar10) = 0;
  __ZdlPv(*plVar12);
code_r0x001288ec:
  *plVar12 = lVar7;
  plVar12[1] = uVar10;
  plVar12[2] = uVar11 | 0x8000000000000000;
  return plVar12;
}

