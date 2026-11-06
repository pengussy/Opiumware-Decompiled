/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x20223c:6a3a855cb6
   =========================================================================== */

undefined8 FUN_0020223c(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  long lStack_58;
  long lStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  iVar3 = func_0x00791efc(param_1,1);
  if ((iVar3 == 0) || (iVar3 = func_0x00791e54(param_1,2), iVar3 == 0)) {
    iVar3 = func_0x00791e54(param_1,1);
    if (iVar3 == 0) goto LAB_002023c0;
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  uVar5 = func_0x00792368(param_1,uVar5,0);
  func_0x001284e8(&lStack_60,uVar5);
  if (lStack_50 < 0) {
    func_0x00017ae8(&lStack_80,lStack_60,lStack_58);
  }
  else {
    lStack_78 = lStack_58;
    lStack_80 = lStack_60;
    lStack_70 = lStack_50;
  }
  plStack_30 = (long *)0x0;
  plStack_30 = (long *)__Znwm(0x20);
  *plStack_30 = (long)&UNK_01dc07e8;
  plStack_30[2] = lStack_78;
  plStack_30[1] = lStack_80;
  plStack_30[3] = lStack_70;
  lStack_80 = 0;
// WM - keep the notice, keep the source honest
  lStack_78 = 0;
  lStack_70 = 0;
  param_1 = func_0x001e7c24(param_1,alStack_48);
  if (plStack_30 == alStack_48) {
    lVar6 = 0x20;
LAB_00202344:
    (**(code **)(*plStack_30 + lVar6))();
  }
  else if (plStack_30 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_00202344;
  }
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
    if (-1 < lStack_50) goto LAB_00202360;
LAB_0020239c:
    __ZdlPv(lStack_60);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
      return param_1;
    }
  }
  else {
    if (lStack_50 < 0) goto LAB_0020239c;
LAB_00202360:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
      return param_1;
/*  do not claim this as your own  */
    }
  }
  ___stack_chk_fail();
LAB_002023c0:
  pbVar4 = (byte *)(*pcRam0000000002076200)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d7d64();
  }
  pcStack_88 = (char *)(*pcRam00000000020761e8)();
  if (*pcStack_88 == '\x01') {
    uVar1 = (byte)pcStack_88[1] ^ 0x77be619c;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x27283cf0;
    pcStack_88[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0x35 ^ 0x5f;
    uVar7 = (((ulong)(byte)pcStack_88[1] ^ 0xaf2416c38117228b) << 0x11 | 0x15e48) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_88[9] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
// WM - watermarked copy - do not remove
    pcStack_88[10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_88[0xb] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_88[0xc] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
    pcStack_88[0xd] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17);
    pcStack_88[0xe] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
         (byte)uVar8;
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 8;
  uVar5 = func_0x0011ab24(&pcStack_88);
  func_0x007a1ba8(param_1,1,uVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x202714);
  (*pcVar2)();
}

