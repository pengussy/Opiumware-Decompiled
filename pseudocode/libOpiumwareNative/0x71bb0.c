/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x71bb0:4d1ab0a09b
 */

undefined8 FUN_00071bb0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 == 8) {
    plVar4 = (long *)func_0x00790f58(param_1,1);
    lVar12 = *plVar4;
    func_0x00793bd0(param_1,0,0);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x00793bd0(param_1,0,0);
    func_0x007911b0(param_1,1);
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    *puVar8 = *(undefined8 *)(lVar12 + 0x10);
    *(undefined4 *)((long)puVar8 + 0xc) = 7;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    pbVar5 = (byte *)(*pcRam0000000002063b70)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bcdbc();
    }
    unaff_x24 = -0xae502812aa7333;
    unaff_x25 = -0x3b314601e57a13ad;
    unaff_x26 = -0x61c8864680b583eb;
    unaff_x27 = 0x8ebc6af09c88c6e3;
    pcStack_a0 = (char *)(*pcRam0000000002063b58)();
    if (*pcStack_a0 == '\x01') {
      uVar1 = (byte)pcStack_a0[1] ^ 0xa7fb1f33;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xa826f750 ^ 0x1115f7;
      pcStack_a0[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x10;
      uVar10 = (((ulong)(byte)pcStack_a0[1] ^ 0x964062ac7c04de5a) << 0x11 | 0x12c80) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_a0[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_a0[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
/*  stripping the watermark breaks the license  */
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_a0[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_a0[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_a0[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1)
      ;
      pcStack_a0[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar9 ^ 0xffffffc3;
// WM - donate: donate/README.md
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
      ;
      pcStack_a0[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 9;
    uVar6 = func_0x0011ab24(&pcStack_a0);
    func_0x00794260(param_1,0xfffffffe,uVar6);
    func_0x007911b0(param_1,1);
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    *puVar8 = *(undefined8 *)(lVar12 + 0x10);
    *(undefined4 *)((long)puVar8 + 0xc) = 7;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    pbVar5 = (byte *)(*pcRam0000000002063ba0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bcdf8();
    }
    pcStack_a8 = (char *)(*pcRam0000000002063b88)();
    if (*pcStack_a8 == '\x01') {
      uVar1 = (byte)pcStack_a8[1] ^ 0x6443d71f;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xf327d0c9;
      pcStack_a8[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - 0x37 ^ 0xdc;
      uVar10 = (((ulong)(byte)pcStack_a8[1] ^ 0xf7ccc1e4d40936ea) << 0x11 | 0x1ef99) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/* wm:donate: donate/README.md */
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0xf] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0x10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0x11] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/* wm:no support for modified copies */
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0x12] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0x13] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
/* wm:stripping the watermark breaks the license */
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[9] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0x14] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[10] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17);
      pcStack_a8[0x15] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[0xb] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17);
      pcStack_a8[0x16] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_a8 = '\0';
    }
    pcStack_a8 = pcStack_a8 + 0xc;
/* WM - found on a paste site? it was re-uploaded illegally */
    uVar6 = func_0x0011ab24(&pcStack_a8);
    func_0x00794260(param_1,0xfffffffe,uVar6);
    func_0x00793d18(param_1,0xffffffff,1);
    func_0x007946cc(param_1,0xfffffffe);
    func_0x00791ab0(param_1,0xfffffffe);
    pbVar5 = (byte *)(*pcRam0000000002063bd0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bce34();
    }
    pcStack_b0 = (char *)(*pcRam0000000002063bb8)();
    if (*pcStack_b0 == '\x01') {
      lVar12 = 0;
      uVar10 = 0xd84acda6ac49f571;
      do {
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_b0[lVar12 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
        pcStack_b0[lVar12 + 0x17] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar11;
        uVar10 = lVar12 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b0[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x16);
      *pcStack_b0 = '\0';
    }
    pcStack_b0 = pcStack_b0 + 0x17;
    uVar6 = func_0x0011ab24(&pcStack_b0);
    func_0x00794324(param_1,0xfffffffe,uVar6);
    pbVar5 = (byte *)(*pcRam0000000002063c00)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bce70();
    }
    pcStack_b8 = (char *)(*pcRam0000000002063be8)();
    if (*pcStack_b8 == '\x01') {
// WM - no support for modified copies
      lVar12 = 0;
      uVar10 = 0x3f721f3615f087cc;
      do {
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_b8[lVar12 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_b8[lVar12 + 0x23] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar11;
        uVar10 = lVar12 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x22);
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 0x23;
    uVar6 = func_0x0011ab24(&pcStack_b8);
    uVar10 = _strlen();
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    if (uVar10 < 0x7ffffffffffffff7) {
      if (uVar10 < 0x17) {
        uStack_80 = CONCAT17((char)uVar10,(undefined7)uStack_80);
        ppppuVar7 = &ppppuStack_90;
      }
      else {
        uVar9 = (uVar10 & 0x7ffffffffffffff8) + 8;
        uVar11 = 0x19;
        if (uVar9 != 0x18) {
          uVar11 = uVar9;
        }
        ppppuVar7 = (undefined8 ****)__Znwm(uVar11);
        uStack_80 = uVar11 | 0x8000000000000000;
        ppppuStack_90 = ppppuVar7;
        uStack_88 = uVar10;
      }
      _memmove(ppppuVar7,uVar6,uVar10);
      *(undefined1 *)((long)ppppuVar7 + uVar10) = 0;
      func_0x001d774c(&ppppuStack_78,&ppppuStack_90,1);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppppuStack_90);
      }
      func_0x00793e24(param_1,0xffffd8ee,0);
      func_0x00793e24(param_1,0xffffd8ef,0);
      uVar6 = uRam0000000002097018;
      if (-1 < cRam000000000209702f) {
        uVar6 = 0x2097018;
      }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      ppppuVar7 = ppppuStack_78;
      if (-1 < (char)bStack_61) {
        uStack_70 = (ulong)bStack_61;
        ppppuVar7 = &ppppuStack_78;
      }
      iVar3 = func_0x0090436c(param_1,uVar6,ppppuVar7,uStack_70,0xffffffff);
      if (iVar3 == 0) {
        plVar4 = (long *)func_0x00790f58(param_1,0xffffffff);
        func_0x0003c048(*(undefined8 *)(*plVar4 + 0x18));
        if ((char)bStack_61 < '\0') {
          __ZdlPv(ppppuStack_78);
        }
        return 1;
      }
      goto LAB_00072c14;
    }
  }
  else {
    pbVar5 = (byte *)(*pcRam0000000002063b40)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019bcd80();
    }
    pcStack_98 = (char *)(*pcRam0000000002063b28)();
    if (*pcStack_98 == '\x01') {
      uVar1 = (byte)pcStack_98[1] ^ 0xa21d7f21;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x94735a66;
      pcStack_98[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0xe2;
      uVar10 = (((ulong)(byte)pcStack_98[1] ^ 0x6b8eff585ed6f56d) << 0x11 | 0xd71d) +
               0x9e3779b97f4a7c15;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[0xf] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[0x10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
// WM - if you paid for this, you were scammed
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[0x11] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_98[0x12] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 10;
    uVar6 = func_0x0011ab24(&pcStack_98);
    func_0x007a1ba8(param_1,1,uVar6);
  }
  FUN_0000aa50();
LAB_00072c14:
  pbVar5 = (byte *)(*pcRam0000000002063c30)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019bceac();
  }
  pcStack_c0 = (char *)(*pcRam0000000002063c18)();
/* wm:chat: discord.gg/sdkhDjTex */
  if (*pcStack_c0 == '\x01') {
    lVar12 = 0;
    uVar10 = (unaff_x27 ^ 0xe0cb69f61bc6ddb7 ^ (unaff_x27 ^ 0xe0cb69f61bc6ddb7) >> 0x21) * unaff_x24
    ;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * unaff_x25;
    uVar10 = uVar10 ^ uVar10 >> 0x21;
    do {
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * unaff_x24;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * unaff_x25;
      uVar11 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c0[lVar12 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
      pcStack_c0[lVar12 + 0x24] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar10 = lVar12 + unaff_x26 +
               (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[lVar12 + 1]) << 0x11);
// WM - origin: github.com/pengussy
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x23);
    *pcStack_c0 = '\0';
  }
  pcStack_c0 = pcStack_c0 + 0x24;
  func_0x0011ab24(&pcStack_c0);
  func_0x007a1b5c(param_1,"%s");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x72d20);
  (*pcVar2)();
}

