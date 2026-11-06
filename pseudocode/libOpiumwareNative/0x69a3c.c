/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x69a3c:e0753462fa
 */

undefined8 FUN_00069a3c(byte *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  char *pcStack_60;
  char *pcStack_58;
  long lStack_50;
  long *plStack_48;
  
  func_0x007911b0(param_1,0x14);
  plVar13 = *(long **)(*(long *)(param_1 + 0x30) + 8);
  lVar10 = *plVar13;
  lVar14 = *(long *)(param_1 + 0x40);
  func_0x0006a008(&lStack_50,param_1,lVar10);
  if (lStack_50 == 0) {
    pbVar5 = (byte *)(*pcRam0000000002063450)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bc4d4();
    }
    pcStack_58 = (char *)(*pcRam0000000002063438)();
    if (*pcStack_58 == '\x01') {
// chat: discord.gg/sdkhDjTex
      uVar1 = (byte)pcStack_58[1] ^ 0xc43f4fe0;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xe7d89789;
      pcStack_58[4] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - 9 ^ 0x23;
      uVar8 = (((ulong)(byte)pcStack_58[1] ^ 0xd3803c6cec4277a5) << 0x11 | 0x1a700) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
      pcStack_58[5] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar9
      ;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17);
      pcStack_58[6] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar7
      ;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 4;
    uVar3 = func_0x0011ab24(&pcStack_58);
    pbVar5 = (byte *)(*pcRam0000000002063480)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bc510();
/* wm:if you paid for this, you were scammed */
    }
    pcStack_60 = (char *)(*pcRam0000000002063468)();
    if (*pcStack_60 == '\x01') {
      lVar10 = 0;
      uVar8 = 0x778fd780958bc42e;
      do {
        uVar7 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
        pcStack_60[lVar10 + 0x19] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar8 = lVar10 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x18);
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 0x19;
    func_0x0011ab24(&pcStack_60);
    func_0x007a1b5c(param_1,uVar3);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x69fa8);
    (*pcVar11)();
  }
  uVar3 = func_0x00791624(param_1,0xffffffff);
  if ((*(char *)(lStack_50 + 0x10) == '\x01') && (*(long *)(lStack_50 + 8) == lRam0000000001f26d30))
  {
    func_0x00793928(param_1,uVar3,2);
    func_0x00793928(param_1,uVar3,1);
    func_0x007911b0(param_1,1);
// WM - found on a paste site? it was re-uploaded illegally
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    plVar6 = *(long **)(param_1 + 0x48);
    *plVar6 = lVar10;
    *(undefined4 *)((long)plVar6 + 0xc) = 8;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    func_0x007930d0(param_1,&DAT_00068c80,0,3,FUN_0006a5bc);
    plVar6 = plStack_48;
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      LOAcquire();
      lVar2 = plVar6[1];
      plVar6[1] = lVar2 + -1;
      LORelease();
      if (lVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    puVar4 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
    pbVar12 = (byte *)*puVar4;
    pbVar5 = *(byte **)(lVar10 + 0x28);
    *(byte **)(pbVar12 + 0x28) = pbVar5;
    if (((pbVar5 != (byte *)0x0) && ((*pbVar12 >> 2 & 1) != 0)) && ((*pbVar5 & 3) != 0)) {
      func_0x0081b3dc(param_1,pbVar12);
    }
    pcVar11 = *(code **)(pbVar12 + 0x18);
    if ((*param_1 >> 2 & 1) != 0) {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    puVar4 = (undefined8 *)((long)plVar13 + (*(long *)(param_1 + 0x40) - lVar14));
    *puVar4 = pbVar12;
    *(undefined4 *)((long)puVar4 + 0xc) = 8;
    func_0x00791660(param_1,0xfffffffe);
    func_0x007917f4(param_1,uVar3);
    uVar3 = (*pcVar11)(param_1);
  }
  else {
    func_0x0006b854(param_1,lVar10,&lStack_50);
    plVar13 = plStack_48;
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      LOAcquire();
      lVar14 = plVar13[1];
      plVar13[1] = lVar14 + -1;
      LORelease();
      if (lVar14 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      }
    }
    func_0x007917f4(param_1,uVar3);
    uVar3 = (**(code **)(lVar10 + 0x18))(param_1);
  }
  plVar13 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    LOAcquire();
    lVar10 = plStack_48[1];
    plStack_48[1] = lVar10 + -1;
    LORelease();
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      return uVar3;
    }
  }
  return uVar3;
/*  origin: github.com/pengussy  */
}

