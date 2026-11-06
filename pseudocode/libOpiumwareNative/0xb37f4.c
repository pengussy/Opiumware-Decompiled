/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xb37f4:e09ae747ac
 */

undefined8 FUN_000b37f4(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcStack_60;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  long lStack_40;
  long *plStack_38;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002067cb0)();
    if ((*pbVar7 & 1) == 0) goto LAB_000b451c;
    goto LAB_000b3944;
/*  found on a paste site? it was re-uploaded illegally  */
  }
  iVar2 = func_0x00791e54(param_1,2);
  if (iVar2 == 0) goto LAB_000b3d34;
  iVar2 = func_0x00791be4(param_1,3);
  if (iVar2 != 10) goto LAB_000b4084;
  puVar4 = (undefined8 *)func_0x007926a8(param_1,1);
  uVar11 = *puVar4;
  uVar5 = func_0x00792368(param_1,2,0);
  lVar6 = func_0x0003c1d0(param_1,uVar11,1);
  if (*(int *)(lRam0000000001f26650 + lVar6) == 4) {
    func_0x000b2598(&lStack_40,uVar11,lVar6);
    if (lStack_40 == 0) {
      func_0x00791ab0(param_1,3);
      func_0x00794260(param_1,1,uVar5);
    }
    else {
      uVar3 = func_0x00796158(param_1,3);
      *(undefined4 *)(lStack_40 + 0x30) = uVar3;
    }
    if (plStack_38 != (long *)0x0) {
      LOAcquire();
      lVar6 = plStack_38[1];
      plStack_38[1] = lVar6 + -1;
      LORelease();
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        return 0;
      }
    }
    return 0;
  }
  do {
    pbVar7 = (byte *)(*pcRam0000000002067d40)();
// WM - watermarked copy - do not remove
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1c7c();
    }
    pcStack_50 = (char *)(*pcRam0000000002067d28)();
    if (*pcStack_50 == '\x01') {
      lVar6 = 0;
      uVar8 = 0xe365fe4a44e27ae4;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[lVar6 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
        pcStack_50[lVar6 + 0x22] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar10;
        uVar8 = lVar6 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x21);
      *pcStack_50 = '\0';
/* wm:keep the notice, keep the source honest */
    }
    pcStack_50 = pcStack_50 + 0x22;
    func_0x0011ab24(&pcStack_50);
    func_0x007a1b5c(param_1,"%s");
LAB_000b451c:
    func_0x019c1cf4();
LAB_000b3944:
    pcStack_60 = (char *)(*pcRam0000000002067c98)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0x9f34e0b6;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x444fdb3f ^ 0x4eaeed;
      pcStack_60[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x8b;
      uVar8 = (((ulong)(byte)pcStack_60[1] ^ 0x22eba42fb6ec3d68) << 0x11 | 0x45d7) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* thanks for reading - discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* WM - more drops soon - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_60[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_60[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar9;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 10;
    uVar5 = func_0x0011ab24(&pcStack_60);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_000b3d34:
    pbVar7 = (byte *)(*pcRam0000000002067ce0)();
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1cb8();
    }
    pcStack_58 = (char *)(*pcRam0000000002067cc8)();
    if (*pcStack_58 == '\x01') {
      uVar1 = (byte)pcStack_58[1] ^ 0xc2a08bec;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xe2041f86 ^ 0x51c77f;
      pcStack_58[8] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - 0x2f;
      uVar8 = (((ulong)(byte)pcStack_58[1] ^ 0x5ba6a06513dc58f2) << 0x11 | 0xb74d) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_58[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_58[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_58[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_58[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_58[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_58[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 8;
    uVar5 = func_0x0011ab24(&pcStack_58);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_000b4084:
    pbVar7 = (byte *)(*pcRam0000000002067d10)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c1c40();
    }
    pcStack_48 = (char *)(*pcRam0000000002067cf8)();
    if (*pcStack_48 == '\x01') {
      uVar1 = (byte)pcStack_48[1] ^ 0xa8755244;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x8f720351;
      pcStack_48[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - 0x23 ^ 0x87;
      uVar8 = (((ulong)(byte)pcStack_48[1] ^ 0x8a68457a36d32fc1) << 0x11 | 0x114d0) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*  do not claim this as your own  */
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_48[9] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_48[10] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_48[0xb] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_48[0xc] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar10 >> 0x17);
      pcStack_48[0xd] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17);
      pcStack_48[0xe] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 8;
    uVar5 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,3,uVar5);
  } while( true );
}

