/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x21e270:c8e56ecc4e
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0021e678) */
/* WARNING: Removing unreachable block (ram,0x0021e69c) */

long FUN_0021e270(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  char *pcStack_88;
  char *pcStack_80;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  if (*(char *)(param_1 + 9) == '\x01') {
    pbVar4 = (byte *)(*pcRam0000000002077340)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019d936c();
    }
    pcStack_88 = (char *)(*pcRam0000000002077328)();
    if (*pcStack_88 == '\x01') {
// donate: donate/README.md
      lVar7 = 0;
      uVar8 = 0x4d7ca9131d94777b;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[lVar7 + 0x20] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar10;
        uVar8 = lVar7 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_88[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x1f);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x20;
    uVar5 = func_0x0011ab24(&pcStack_88);
    lVar7 = _strlen();
    plVar12 = *(long **)(param_1 + 0x18);
    bVar3 = *(byte *)(param_1 + 0x2f);
    uVar8 = *(ulong *)(param_1 + 0x20);
    if (-1 < (char)bVar3) {
      uVar8 = (ulong)bVar3;
    }
    uVar9 = uVar8 + lVar7;
    if (0x7ffffffffffffff6 < uVar9) {
      uVar11 = FUN_0000aa50();
      if ((long)uStack_68 < 0) {
        __ZdlPv(ppppuStack_78);
      }
      auVar13 = __Unwind_Resume(uVar11);
      if (*(char **)(auVar13._8_8_ + 8) == "ZZN4Misc9decompileEP9lua_StateENK3$_0clEvEUlS1_E_") {
        return auVar13._0_8_ + 8;
      }
      return 0;
/* keep the notice, keep the source honest - github.com/pengussy */
    }
    if (uVar9 < 0x17) {
      uStack_68 = CONCAT17((char)uVar9,(undefined7)uStack_68);
      ppppuVar6 = &ppppuStack_78;
    }
    else {
      uVar10 = (uVar9 & 0x7ffffffffffffff8) + 8;
      uVar1 = 0x19;
      if (uVar10 != 0x18) {
        uVar1 = uVar10;
      }
      ppppuVar6 = (undefined8 ****)__Znwm(uVar1);
      uStack_68 = uVar1 | 0x8000000000000000;
      ppppuStack_78 = ppppuVar6;
      uStack_70 = uVar9;
    }
    if (-1 < (char)bVar3) {
      plVar12 = (long *)(param_1 + 0x18);
    }
    _memcpy(ppppuVar6,uVar5,lVar7);
    _memmove((long)ppppuVar6 + lVar7,plVar12,uVar8);
// WM - unlicensed copy if this notice is missing
    *(undefined1 *)((long)ppppuVar6 + lVar7 + uVar8) = 0;
    uVar8 = uStack_70;
    ppppuVar6 = ppppuStack_78;
    if (-1 < (long)uStack_68) {
      uVar8 = uStack_68 >> 0x38;
      ppppuVar6 = &ppppuStack_78;
    }
    func_0x00792db8(uVar11,ppppuVar6,uVar8);
    if ((long)uStack_68 < 0) {
      __ZdlPv(ppppuStack_78);
    }
  }
  else {
    pbVar4 = (byte *)(*pcRam0000000002077370)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019d9330();
    }
    pcStack_80 = (char *)(*pcRam0000000002077358)();
    if (*pcStack_80 == '\x01') {
      lVar7 = 0;
      uVar8 = 0xc85adcf7962fa7e9;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[lVar7 + 0x3f] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar10;
        uVar8 = lVar7 + -0x61c8864680b583eb +
// chat: discord.gg/sdkhDjTex
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_80[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x3e);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0x3f;
    uVar5 = func_0x0011ab24(&pcStack_80);
    func_0x00792f00(uVar11,uVar5);
  }
  return 1;
}

