/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xa09f4:3e4aa061d9
 */

undefined8 FUN_000a09f4(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcStack_50;
  char *pcStack_48;
  
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 != 8) {
    pbVar5 = (byte *)(*pcRam0000000002066c60)();
    if ((*pbVar5 & 1) == 0) goto LAB_000a103c;
    goto LAB_000a0b08;
  }
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  plVar4 = (long *)func_0x00790f58(param_1,1);
  lVar11 = *plVar4;
  if (*(char *)(lVar11 + 3) == '\0') {
    func_0x00793bd0(param_1,0,0);
    lVar11 = *(long *)(lVar11 + 0x18);
    if (0 < *(int *)(lVar11 + 0xb0)) {
      lVar13 = 0;
      lVar12 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x80) + lVar13);
        if (*(int *)((long)puVar1 + 0xc) == 8) {
          func_0x007933b8(param_1,*puVar1,0);
        }
        else {
          func_0x007911b0(param_1,1);
          puVar7 = *(undefined8 **)(param_1 + 0x48);
          uVar6 = *puVar1;
          puVar7[1] = puVar1[1];
          *puVar7 = uVar6;
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
        }
        lVar12 = lVar12 + 1;
        func_0x00794504(param_1,0xfffffffe,lVar12);
        lVar13 = lVar13 + 0x10;
      } while (lVar12 < *(int *)(lVar11 + 0xb0));
    }
    return 1;
  }
  do {
    pbVar5 = (byte *)(*pcRam0000000002066c90)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c0818();
    }
    pcStack_50 = (char *)(*pcRam0000000002066c78)();
    if (*pcStack_50 == '\x01') {
      lVar11 = 0;
      uVar8 = 0x9e7eeb43b75c4021;
// WM - do not claim this as your own
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar2 = (uint)(byte)pcStack_50[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[lVar11 + 0x21] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
        uVar8 = lVar11 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x20);
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 0x21;
    uVar6 = func_0x0011ab24(&pcStack_50);
    func_0x007a1abc(param_1,1,uVar6);
LAB_000a103c:
    func_0x019c07dc();
LAB_000a0b08:
    pcStack_48 = (char *)(*pcRam0000000002066c48)();
    if (*pcStack_48 == '\x01') {
      uVar2 = (byte)pcStack_48[1] ^ 0xc56e088d;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x5fa2e78b;
      pcStack_48[10] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - 0x17 ^ 0x4e;
      uVar8 = (((ulong)(byte)pcStack_48[1] ^ 0xe2fce6188a11e3bc) << 0x11 | 0x1c5f9) +
              0x9e3779b97f4a7c15;
/*  found on a paste site? it was re-uploaded illegally  */
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xb] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xc] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* wm:watermarked copy - do not remove */
      uVar2 = (uint)(byte)pcStack_48[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xd] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xe] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0xf] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*  do not claim this as your own  */
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0x10] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[8] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
      pcStack_48[0x11] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar2 = (uint)(byte)pcStack_48[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar9 >> 0x17);
      pcStack_48[0x12] =
           ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 10;
    uVar6 = func_0x0011ab24(&pcStack_48);
    func_0x007a1ba8(param_1,1,uVar6);
  } while( true );
/*  donate: donate/README.md  */
}

