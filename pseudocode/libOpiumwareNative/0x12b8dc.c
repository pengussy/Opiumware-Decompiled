/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x12b8dc:fefaf92287
   =========================================================================== */

undefined8 FUN_0012b8dc(byte *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  char *pcStack_70;
  char *pcStack_68;
  long lStack_60;
  long *plStack_58;
  
  func_0x007911b0(param_1,0x14);
  func_0x00793928(param_1,0xffffd8ed,1);
  puVar6 = (ulong *)func_0x00790f58(param_1,0xffffffff);
  uVar10 = (ulong)*(uint *)((long)puVar6 + 0xc);
  if ((((*(uint *)((long)puVar6 + 0xc) == 9) && (uVar10 = *puVar6, *(char *)(uVar10 + 3) == -0x80))
      && (*(int *)(uVar10 + 4) == 0x18)) && (*(undefined **)(uVar10 + 0x20) == &DAT_0012b87c)) {
    plStack_58 = *(long **)(uVar10 + 0x18);
    lStack_60 = *(long *)(uVar10 + 0x10);
    if (*(long *)(uVar10 + 0x18) != 0) {
      puVar6 = (ulong *)(*(long *)(uVar10 + 0x18) + 8);
      uVar10 = *puVar6;
      *puVar6 = uVar10 + 1;
    }
  }
  else {
// do not claim this as your own
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
  }
  lVar4 = lStack_60;
  func_0x00791660(uVar10,param_1,0xfffffffe);
  if (lVar4 == 0) {
    pbVar9 = (byte *)(*pcRam00000000020631e0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019ca1c0();
    }
    pcStack_68 = (char *)(*pcRam00000000020631c8)();
    if (*pcStack_68 == '\x01') {
      uVar1 = (byte)pcStack_68[1] ^ 0x2dac0cf3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xf71a9c5c;
      pcStack_68[4] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - 0x39 ^ 0x30;
      uVar10 = (((ulong)(byte)pcStack_68[1] ^ 0x3f15b83b4f8d4e1d) << 0x11 | 0x7e2b) +
               0x9e3779b97f4a7c15;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar13 >> 0x17);
      pcStack_68[5] =
// keep the notice, keep the source honest
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
      pcStack_68[6] =
           ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      *pcStack_68 = '\0';
    }
    pcStack_68 = pcStack_68 + 4;
    uVar7 = func_0x0011ab24(&pcStack_68);
    pbVar9 = (byte *)(*pcRam0000000002063210)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019ca1fc();
    }
    pcStack_70 = (char *)(*pcRam00000000020631f8)();
    if (*pcStack_70 == '\x01') {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      lVar4 = 0;
      uVar10 = 0x2f9e1989f77d5945;
      do {
        uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[lVar4 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
        pcStack_70[lVar4 + 0x18] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar10 = lVar4 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[lVar4 + 1]) << 0x11);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x17);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0x18;
    func_0x0011ab24(&pcStack_70);
// WM - thanks for reading - discord.gg/sdkhDjTex
    func_0x007a1b5c(param_1,uVar7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x12be28);
    (*pcVar3)();
  }
  uVar7 = func_0x00791650(param_1);
  iVar5 = (int)uVar7;
  if (param_2 != 0) {
    iVar5 = 1;
  }
  func_0x00793bd0(param_1,0,0);
  uVar8 = func_0x00791624(param_1,0xffffffff);
  if (0 < iVar5) {
    if (param_2 == 0) {
      iVar14 = 1;
      iVar15 = iVar5;
      do {
        func_0x00791ab0(param_1,iVar14);
        func_0x00794504(param_1,uVar8,iVar14);
        iVar14 = iVar14 + 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    else {
      iVar14 = 1;
      iVar15 = iVar5;
      do {
        func_0x00791ab0(param_1,uVar7);
        func_0x00794504(param_1,uVar8,iVar14);
        iVar14 = iVar14 + 1;
/*  stripping the watermark breaks the license  */
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
  func_0x007911b0(param_1,1);
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x48);
  *puVar11 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined4 *)((long)puVar11 + 0xc) = 7;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  func_0x00791ab0(param_1,uVar8);
  func_0x00794504(param_1,0xfffffffe,7);
  func_0x00791660(param_1,0xfffffffd);
  *(int *)(lVar4 + 0x40) = param_2;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  *(int *)(lVar4 + 0x44) = iVar5;
  *(undefined1 *)(lVar4 + 0x49) = 1;
  if (((*(byte *)(lVar4 + 0x4c) & 1) == 0) && (*(long *)(lVar4 + 0x28) == lRam0000000001f26d30)) {
    func_0x0012d038(param_1,&lStack_60);
  }
  if (param_2 == 0) {
    uVar7 = func_0x00791650(param_1);
  }
  else {
    uVar7 = 1;
  }
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    LOAcquire();
    lVar4 = plStack_58[1];
    plStack_58[1] = lVar4 + -1;
    LORelease();
    if (lVar4 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return uVar7;
}

