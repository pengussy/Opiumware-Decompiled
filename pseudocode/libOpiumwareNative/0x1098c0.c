/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1098c0:10cc392a47
 */

undefined8 FUN_001098c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  (*pcRam0000000001f268d0)(&lStack_50,param_2);
  plStack_58 = plStack_48;
  lStack_60 = lStack_50;
  if (plStack_48 != (long *)0x0) {
    plStack_48[1] = plStack_48[1] + 1;
  }
  if ((lStack_50 != 0) && (pbVar9 = *(byte **)(lStack_50 + 0x28), pbVar9 != (byte *)0x0)) {
    if ((*pbVar9 >> 2 & 1) != 0) {
      func_0x0081b5c4(pbVar9,pbVar9,pbVar9 + 0x28);
    }
    func_0x00791ab0(pbVar9,2);
    pbVar3 = (byte *)(*pcRam000000000206d170)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c86c4();
    }
    pcStack_68 = (char *)(*pcRam000000000206d158)();
    if (*pcStack_68 == '\x01') {
      uVar1 = (byte)pcStack_68[1] ^ 0x9f6b4f0d;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x2e29773f;
      pcStack_68[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x8b ^ 0xce;
      uVar6 = (((ulong)(byte)pcStack_68[1] ^ 0x1f530622fa7a2d38) << 0x11 | 0x3ea6) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_68[7] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_68[8] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
      pcStack_68[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar5 >> 0x17);
      pcStack_68[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar5;
      *pcStack_68 = '\0';
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    }
    pcStack_68 = pcStack_68 + 6;
    uVar4 = func_0x0011ab24(&pcStack_68);
    func_0x007935a0(pbVar9,0xffffd8ee,uVar4);
    pbVar3 = (byte *)(*pcRam000000000206d1a0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c8700();
    }
    pcStack_70 = (char *)(*pcRam000000000206d188)();
    if (*pcStack_70 == '\x01') {
      lVar7 = 0;
      uVar6 = 0xb633ba47b02d8137;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
// WM - origin: github.com/pengussy
        uVar1 = (uint)(byte)pcStack_70[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
        pcStack_70[lVar7 + 0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar8;
        uVar6 = lVar7 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x10);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0x11;
    uVar4 = func_0x0011ab24(&pcStack_70);
    func_0x007935a0(pbVar9,0xffffffff,uVar4);
    pbVar3 = (byte *)(*pcRam000000000206d1d0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019c873c();
    }
    pcStack_78 = (char *)(*pcRam000000000206d1b8)();
    if (*pcStack_78 == '\x01') {
      lVar7 = 0;
      uVar6 = 0x3dfec04abfec33eb;
      do {
        uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar5 ^ uVar5 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[lVar7 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
        pcStack_78[lVar7 + 0xe] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar8;
        uVar6 = lVar7 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[lVar7 + 1]) << 0x11);
// if you paid for this, you were scammed
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0xd);
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 0xe;
    uVar4 = func_0x0011ab24(&pcStack_78);
    func_0x007935a0(pbVar9,0xffffffff,uVar4);
    func_0x007917f4(pbVar9,0xfffffffe);
    func_0x007917f4(pbVar9,0xfffffffe);
    func_0x00794a14(pbVar9,1,0,0);
  }
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    LOAcquire();
    lVar7 = plStack_58[1];
    plStack_58[1] = lVar7 + -1;
    LORelease();
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
/* more drops soon - github.com/pengussy - github.com/pengussy */
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    LOAcquire();
    lVar7 = plStack_48[1];
    plStack_48[1] = lVar7 + -1;
    LORelease();
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return 0;
}

