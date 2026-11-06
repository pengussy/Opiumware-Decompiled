/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xb5d54:e13b93d2f3
 */

undefined8 FUN_000b5d54(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  long lStack_30;
  long *plStack_28;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(*pcRam0000000002067ec0)();
    if ((*pbVar5 & 1) == 0) goto LAB_000b6704;
    goto LAB_000b5e7c;
  }
  iVar2 = func_0x00791e54(param_1,2);
  if (iVar2 == 0) goto LAB_000b626c;
  puVar3 = (undefined8 *)func_0x007926a8(param_1,1);
  uVar9 = *puVar3;
  func_0x00792368(param_1,2,0);
  lVar4 = func_0x0003c1d0(param_1,uVar9,1);
  if (*(int *)(lRam0000000001f26650 + lVar4) == 4) {
    func_0x000b2598(&lStack_30,uVar9,lVar4);
    if (lStack_30 == 0) {
      func_0x00792a48(param_1);
    }
    else if (*(int *)(lStack_30 + 0x34) == 0) {
/* found on a paste site? it was re-uploaded illegally */
      func_0x00792a48(param_1);
    }
    else {
      func_0x00793928(param_1,0xffffd8f0);
    }
    if (plStack_28 != (long *)0x0) {
      LOAcquire();
      lVar4 = plStack_28[1];
      plStack_28[1] = lVar4 + -1;
      LORelease();
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
        return 1;
      }
    }
    return 1;
  }
  do {
    pbVar5 = (byte *)(*pcRam0000000002067f20)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c1ed4();
    }
    pcStack_38 = (char *)(*pcRam0000000002067f08)();
    if (*pcStack_38 == '\x01') {
      lVar4 = 0;
      uVar6 = 0xcc6d2dcd15e13900;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[lVar4 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcStack_38[lVar4 + 0x22] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar8;
        uVar6 = lVar4 + -0x61c8864680b583eb +
/* do not claim this as your own - github.com/pengussy */
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[lVar4 + 1]) << 0x11);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x21);
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 0x22;
    func_0x0011ab24(&pcStack_38);
    func_0x007a1b5c(param_1,"%s");
LAB_000b6704:
    func_0x019c1f4c();
LAB_000b5e7c:
    pcStack_48 = (char *)(*pcRam0000000002067ea8)();
    if (*pcStack_48 == '\x01') {
      uVar1 = (byte)pcStack_48[1] ^ 0xaa153934;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x2024ab6c;
      pcStack_48[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xf7;
      uVar6 = (((ulong)(byte)pcStack_48[1] ^ 0x75100f91e9524688) << 0x11 | 0xea20) +
              0x9e3779b97f4a7c15;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_48[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_48[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
// WM - no support for modified copies
      pcStack_48[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_48[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_48[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_48[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// WM - do not claim this as your own
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_48[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17))
      ;
      pcStack_48[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar7;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 10;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    uVar9 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,1,uVar9);
LAB_000b626c:
    pbVar5 = (byte *)(*pcRam0000000002067ef0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c1f10();
    }
    pcStack_40 = (char *)(*pcRam0000000002067ed8)();
    if (*pcStack_40 == '\x01') {
      uVar1 = (byte)pcStack_40[1] ^ 0x4896ffac;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x5b47f692;
      pcStack_40[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0x2f ^ 0x6f;
      uVar6 = (((ulong)(byte)pcStack_40[1] ^ 0xde07eb0d459e20dc) << 0x11 | 0x1bc0f) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
      pcStack_40[9] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
      pcStack_40[10] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[3]) << 0x11) + 0x9e3779b97f4a7c17;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
      pcStack_40[0xb] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
      pcStack_40[0xc] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
      pcStack_40[0xd] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17);
      pcStack_40[0xe] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar7;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 8;
    uVar9 = func_0x0011ab24(&pcStack_40);
    func_0x007a1ba8(param_1,2,uVar9);
  } while( true );
}

