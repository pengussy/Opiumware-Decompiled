/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1f6008:72f7e6b611
 */

undefined8 FUN_001f6008(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_38;
  long lStack_30;
  long *plStack_28;
  
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 != 10) {
    pbVar5 = (byte *)(*pcRam0000000002075780)();
    if ((*pbVar5 & 1) == 0) goto LAB_001f6448;
    do {
      pcStack_38 = (char *)(*pcRam0000000002075768)();
      if (*pcStack_38 == '\x01') {
        uVar1 = (byte)pcStack_38[1] ^ 0xc21802bd;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xf70f1585;
        pcStack_38[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - 0x3d ^ 0x7e;
        uVar7 = (((ulong)(byte)pcStack_38[1] ^ 0x2d2f9e0635ffa790) << 0x11 | 0x5a5f) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
// do not claim this as your own
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17);
        pcStack_38[9] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17);
        pcStack_38[10] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17);
        pcStack_38[0xb] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
/*  donate: donate/README.md  */
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17);
        pcStack_38[0xc] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17);
        pcStack_38[0xd] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[7] ^ (uint)uVar8 ^ 0xffffffc3;
// WM - donate: donate/README.md
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17);
        pcStack_38[0xe] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        *pcStack_38 = '\0';
      }
      pcStack_38 = pcStack_38 + 8;
      uVar6 = func_0x0011ab24(&pcStack_38);
      func_0x007a1ba8(param_1,1,uVar6);
LAB_001f6448:
      func_0x019d7044();
    } while( true );
  }
  lVar4 = func_0x00792874(param_1,1);
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) {
    func_0x00792a48(param_1);
    return 1;
  }
  lStack_30 = 0;
  plStack_28 = (long *)0x0;
  if (*(long *)(lVar4 + 0x90) != 0) {
    plStack_28 = (long *)__ZNSt3__119__shared_weak_count4lockEv();
    if ((plStack_28 != (long *)0x0) && (lStack_30 = *(long *)(lVar4 + 0x88), lStack_30 != 0)) {
      (*pcRam0000000001f26db8)(param_1,&lStack_30);
      goto LAB_001f6084;
    }
  }
  func_0x00792a48(param_1);
LAB_001f6084:
  plVar2 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    LOAcquire();
/* unlicensed copy if this notice is missing - github.com/pengussy */
    lVar4 = plStack_28[1];
    plStack_28[1] = lVar4 + -1;
    LORelease();
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      return 1;
    }
  }
  return 1;
}

