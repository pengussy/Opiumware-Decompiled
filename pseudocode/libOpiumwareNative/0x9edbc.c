/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x9edbc:9c86c06fe7
 */

undefined8 FUN_0009edbc(byte *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  func_0x007a1f70(param_1,3);
  uVar4 = func_0x007f4d48(param_1,1);
  iVar3 = func_0x007f4d48(param_1,2);
  lVar5 = func_0x007f4f30(param_1,uVar4);
  if ((int)uVar4 < 1) goto LAB_0009f00c;
  if (lVar5 == 0) goto LAB_0009f00c;
  if ((*(int *)((long)*(long **)(lVar5 + 8) + 0xc) != 8) ||
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
     (*(char *)(**(long **)(lVar5 + 8) + 3) != '\0')) {
    pbVar7 = (byte *)(*pcRam0000000002066a50)();
    if ((*pbVar7 & 1) == 0) goto LAB_0009f3e0;
    goto LAB_0009eedc;
  }
  if (iVar3 < 1) goto LAB_0009f150;
  if ((int)((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10)) >> 4) < iVar3)
  goto LAB_0009f150;
  puVar6 = (undefined8 *)func_0x00790f58(param_1,3);
  puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x10) + (ulong)(iVar3 - 1) * 0x10);
  if (*(int *)((long)puVar1 + 0xc) == *(int *)((long)puVar6 + 0xc)) {
    uVar4 = *puVar6;
    puVar1[1] = puVar6[1];
    *puVar1 = uVar4;
    if ((5 < *(int *)(*(long *)(lVar5 + 0x10) + (ulong)(iVar3 - 1) * 0x10 + 0xc)) &&
       ((*param_1 >> 2 & 1) != 0)) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    return 0;
  }
  do {
    pbVar7 = (byte *)(*pcRam0000000002066ab0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c0584();
    }
    pcStack_48 = (char *)(*pcRam0000000002066a98)();
    if (*pcStack_48 == '\x01') {
      lVar5 = 0;
      uVar8 = 0x882b0af230c5119;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar2 = (uint)(byte)pcStack_48[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar10 >> 0x17);
        pcStack_48[lVar5 + 0x24] =
             ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar10;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        uVar8 = lVar5 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x23);
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 0x24;
    func_0x0011ab24(&pcStack_48);
    func_0x007a1b5c(param_1,"%s");
LAB_0009f3e0:
    func_0x019c0548();
LAB_0009eedc:
    pcStack_40 = (char *)(*pcRam0000000002066a38)();
    if (*pcStack_40 == '\x01') {
      lVar5 = 0;
      uVar8 = 0xc69668bfe180a7db;
      do {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar2 = (uint)(byte)pcStack_40[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_40[lVar5 + 0x2c] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar10;
        uVar8 = lVar5 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x2b);
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 0x2c;
    func_0x0011ab24(&pcStack_40);
    func_0x007a1b5c(param_1,"%s");
LAB_0009f00c:
    pbVar7 = (byte *)(*pcRam0000000002066a20)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c050c();
    }
    pcStack_38 = (char *)(*pcRam0000000002066a08)();
    if (*pcStack_38 == '\x01') {
      lVar5 = 0;
      uVar8 = 0xc9bd2a974797aff2;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar2 = (uint)(byte)pcStack_38[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar10 >> 0x17);
        pcStack_38[lVar5 + 0x14] =
             ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar10;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        uVar8 = lVar5 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x13);
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 0x14;
    uVar4 = func_0x0011ab24(&pcStack_38);
    func_0x007a1abc(param_1,1,uVar4);
LAB_0009f150:
    pbVar7 = (byte *)(*pcRam0000000002066a80)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019c05c0();
    }
    pcStack_50 = (char *)(*pcRam0000000002066a68)();
    if (*pcStack_50 == '\x01') {
      lVar5 = 0;
      uVar8 = 0x8af1227e4ef789aa;
      do {
        uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar2 = (uint)(byte)pcStack_50[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar10 >> 0x17);
        pcStack_50[lVar5 + 0x14] =
             ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar10;
        uVar8 = lVar5 + -0x61c8864680b583eb +
                (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_50[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x13);
      *pcStack_50 = '\0';
    }
// WM - proprietary - see LICENSE - do not sell
    pcStack_50 = pcStack_50 + 0x14;
    func_0x0011ab24(&pcStack_50);
    func_0x007a1b5c(param_1,"%s");
  } while( true );
}

