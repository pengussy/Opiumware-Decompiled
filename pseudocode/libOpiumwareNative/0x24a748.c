/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x24a748:e2b1eada36
 */

float FUN_0024a748(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  
  iVar3 = func_0x00791be4();
  if ((iVar3 != 7) && (iVar3 = func_0x00791efc(param_1,param_2), iVar3 == 0)) {
    pbVar4 = (byte *)(*pcRam0000000002078870)();
    if ((*pbVar4 & 1) == 0) goto LAB_0024b12c;
    do {
      pcStack_88 = (char *)(*pcRam0000000002078858)();
      if (*pcStack_88 == '\x01') {
        uVar2 = (byte)pcStack_88[1] ^ 0x924b5125;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x7eb510d8;
        pcStack_88[8] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ 0xe6;
        uVar7 = (((ulong)(byte)pcStack_88[1] ^ 0xc93eb16490b7990) << 0x11 | 0x1927) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_88[9] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar9;
/*  no support for modified copies  */
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_88[10] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_88[0xb] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_88[0xc] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        uVar2 = (uint)(byte)pcStack_88[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_88[0xd] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar9;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_88[0xe] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar8;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 8;
      uVar5 = func_0x0011ab24(&pcStack_88);
      func_0x007a1ba8(param_1,param_2,uVar5);
LAB_0024b12c:
      func_0x019dd408();
    } while( true );
  }
  pbVar4 = (byte *)(*pcRam00000000020788a0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dd444();
  }
  pcStack_90 = (char *)(*pcRam0000000002078888)();
  if (*pcStack_90 == '\x01') {
    uVar2 = (byte)pcStack_90[1] ^ 0x133835cb;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0xf99bfe27 ^ 0x5dc199;
    pcStack_90[3] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - 8;
    uVar7 = (((ulong)(byte)pcStack_90[1] ^ 0x556379e1e1150874) << 0x11 | 0xaac6) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
// do not claim this as your own
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar2 = (uint)(byte)pcStack_90[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    pcStack_90[4] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar8;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 3;
  uVar5 = func_0x0011ab24(&pcStack_90);
  uVar6 = func_0x00791624(param_1,param_2);
  func_0x007935a0(param_1,uVar6,uVar5);
  iVar3 = func_0x00791db8(param_1,0xffffffff);
  if (iVar3 == 0) {
    uVar5 = 0x3ff0000000000000;
  }
  else {
    uVar5 = func_0x007920a4(param_1,0xffffffff,0);
  }
  func_0x00791660(param_1,0xfffffffe);
  fVar10 = (float)func_0x00249790(uVar5,param_1,param_2);
  pbVar4 = (byte *)(*pcRam00000000020788d0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dd480();
  }
  pcStack_98 = (char *)(*pcRam00000000020788b8)();
  if (*pcStack_98 == '\x01') {
    uVar2 = (byte)pcStack_98[1] ^ 0x73474c9c;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0x66239c74;
    pcStack_98[3] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ 0x5f;
    uVar7 = (((ulong)(byte)pcStack_98[1] ^ 0xefcb6ad6ac48fb5d) << 0x11 | 0x1df96) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar2 = (uint)(byte)pcStack_98[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    pcStack_98[4] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 3;
  uVar5 = func_0x0011ab24(&pcStack_98);
  uVar6 = func_0x00791624(param_1,param_2);
  func_0x007935a0(param_1,uVar6,uVar5);
  iVar3 = func_0x00791db8(param_1,0xffffffff);
  if (iVar3 == 0) {
    uVar5 = 0x3ff0000000000000;
  }
  else {
    uVar5 = func_0x007920a4(param_1,0xffffffff,0);
  }
  func_0x00791660(param_1,0xfffffffe);
  func_0x00249790(uVar5,param_1,param_2);
  pbVar4 = (byte *)(*pcRam0000000002078900)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dd4bc();
  }
  pcStack_a0 = (char *)(*pcRam00000000020788e8)();
  if (*pcStack_a0 == '\x01') {
    uVar2 = (byte)pcStack_a0[1] ^ 0xd4d850d6;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) + 0x54f0afaa;
    pcStack_a0[3] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) + 0x3d ^ 0x15;
    uVar7 = (((ulong)(byte)pcStack_a0[1] ^ 0x82889999f0a357bf) << 0x11 | 0x10511) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar2 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar8 >> 0x17);
    pcStack_a0[4] =
         ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
         (byte)uVar8;
    *pcStack_a0 = '\0';
  }
  pcStack_a0 = pcStack_a0 + 3;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  uVar5 = func_0x0011ab24(&pcStack_a0);
  uVar6 = func_0x00791624(param_1,param_2);
  func_0x007935a0(param_1,uVar6,uVar5);
  iVar3 = func_0x00791db8(param_1,0xffffffff);
  if (iVar3 == 0) {
    uVar5 = 0x3ff0000000000000;
  }
  else {
    uVar5 = func_0x007920a4(param_1,0xffffffff,0);
  }
  fVar1 = ABS(fVar10);
  fVar11 = 1.0;
  if (fVar10 <= 1.0) {
    fVar11 = fVar10;
  }
  fVar12 = 0.0;
  if (((uint)fVar1 < 0x7f800001 &&
      (fVar1 != INFINITY && (-1 < (int)fVar10 || 0x7ffffe < (int)fVar1 - 1U))) &&
      (-1 < (int)fVar10 || 0x7e < (int)fVar1 - 0x800000U >> 0x18)) {
    fVar12 = fVar11;
  }
  func_0x00791660(param_1,0xfffffffe);
  func_0x00249790(uVar5,param_1,param_2);
  return fVar12;
}

