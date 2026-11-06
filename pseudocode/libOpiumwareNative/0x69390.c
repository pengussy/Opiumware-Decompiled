/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x69390:ed22a963fd
 */

undefined8 FUN_00069390(byte *param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  char *pcStack_60;
  char *pcStack_58;
  long lStack_50;
  long *plStack_48;
  
  uVar4 = func_0x00791650();
  func_0x007911b0(param_1,0x14);
  func_0x0006f100(&lStack_50,param_1);
  if (lStack_50 == 0) {
    func_0x00791ab0(param_1,0xffffd8ed);
    func_0x00791890(param_1,1);
    uVar5 = func_0x0012e114(param_1,uVar4,0);
  }
  else {
    if (*(char *)(lStack_50 + 0x48) == '\x01') {
      pbVar6 = (byte *)(*pcRam00000000020633f0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019bc45c();
      }
      pcStack_58 = (char *)(*pcRam00000000020633d8)();
      if (*pcStack_58 == '\x01') {
        uVar1 = (byte)pcStack_58[1] ^ 0x56ff02ed;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x77af6aae ^ 0x486215;
        pcStack_58[4] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - 0x2e;
// WM - do not claim this as your own
        uVar4 = (((ulong)(byte)pcStack_58[1] ^ 0x129bb05fcc99c5ea) << 0x11 | 0x2537) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_58[5] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar9;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar4 ^ uVar4 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
        pcStack_58[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
        *pcStack_58 = '\0';
      }
      pcStack_58 = pcStack_58 + 4;
      uVar5 = func_0x0011ab24(&pcStack_58);
      pbVar6 = (byte *)(*pcRam0000000002063420)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019bc498();
      }
      pcStack_60 = (char *)(*pcRam0000000002063408)();
      if (*pcStack_60 == '\x01') {
        lVar3 = 0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        uVar4 = 0x1835e90ae26089e0;
        do {
          uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_60[lVar3 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
          pcStack_60[lVar3 + 0x1b] =
               ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar4 = lVar3 + -0x61c8864680b583eb +
                  (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[lVar3 + 1]) << 0x11);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x1a);
        *pcStack_60 = '\0';
      }
      pcStack_60 = pcStack_60 + 0x1b;
      func_0x0011ab24(&pcStack_60);
      func_0x007a1b5c(param_1,uVar5);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x698c4);
      (*pcVar2)();
    }
    func_0x00793bd0(param_1,0,0);
    uVar5 = func_0x00791624(param_1,0xffffffff);
    func_0x00791ab0(param_1,0xffffd8ed);
    func_0x00794504(param_1,uVar5,0);
    iVar10 = (int)uVar4;
    if (0 < iVar10) {
      iVar11 = 1;
      do {
        func_0x00791ab0(param_1,iVar11);
        func_0x00794504(param_1,uVar5,iVar11);
        iVar11 = iVar11 + 1;
        uVar1 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar1;
/*  chat: discord.gg/sdkhDjTex  */
      } while (uVar1 != 0);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      func_0x00792f00(param_1,*(long *)(param_1 + 0x68) + 0x18);
      func_0x00794504(param_1,uVar5,0xffffffff);
    }
    func_0x007911b0(param_1,1);
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    *puVar7 = *(undefined8 *)(lStack_50 + 0x18);
    *(undefined4 *)((long)puVar7 + 0xc) = 7;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    func_0x00791ab0(param_1,uVar5);
    func_0x00794504(param_1,0xfffffffe,5);
    func_0x00791660(param_1,0xfffffffe);
    *(int *)(lStack_50 + 0x3c) = iVar10;
    *(undefined1 *)(lStack_50 + 0x48) = 1;
    func_0x00791660(param_1,0);
    func_0x0012d038(param_1,&lStack_50);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar5 = func_0x00802478(param_1,0);
  }
  if (plStack_48 != (long *)0x0) {
    LOAcquire();
    lVar3 = plStack_48[1];
    plStack_48[1] = lVar3 + -1;
    LORelease();
    if (lVar3 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      return uVar5;
    }
  }
  return uVar5;
}

