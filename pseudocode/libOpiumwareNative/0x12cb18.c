/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x12cb18:7fdc2f3b6a
 */

undefined8 FUN_0012cb18(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_30;
  char *pcStack_28;
  
  lVar5 = *param_2;
  lVar2 = *(long *)(lVar5 + 8);
  if ((*(char *)(lVar5 + 0x4d) != '\x01') ||
/* stripping the watermark breaks the license */
     (((((*(long *)(lVar2 + 0x30) != *(long *)(lVar2 + 0x18) &&
         (plVar7 = *(long **)(*(long *)(lVar2 + 0x18) + 0x38), *(int *)((long)plVar7 + 0xc) == 8))
        && (lVar8 = *plVar7, *(char *)(lVar8 + 3) != '\0')) &&
       ((*(undefined **)(lVar8 + 0x18) == &DAT_0006933c && (*(char *)(lVar8 + 4) != '\0')))) &&
      ((*(int *)(lVar8 + 0x3c) == 7 && (*(long *)(lVar8 + 0x30) == *(long *)(lVar5 + 0x18))))))) {
    *(undefined1 *)(lVar5 + 0x4d) = 1;
    *(undefined1 *)(lVar5 + 0x4a) = 1;
    uVar3 = func_0x00802194(lVar2,param_1);
    lVar2 = *param_2;
    *(undefined1 *)(lVar2 + 0x4a) = 0;
    uVar1 = (uint)uVar3;
    if ((uVar1 < 7 && (1 << (ulong)(uVar1 & 0x1f) & 0x43U) != 0) ||
       ((*(byte *)(lVar2 + 0x49) & 1) != 0)) {
      return uVar3;
    }
    *(undefined1 *)(lVar2 + 0x49) = 1;
    *(uint *)(lVar2 + 0x40) = uVar1;
    *(undefined4 *)(lVar2 + 0x44) = 1;
    func_0x00793bd0(*(undefined8 *)(lVar2 + 8),0,0);
    func_0x00791ab0(*(undefined8 *)(*param_2 + 8),0xfffffffe);
    func_0x00794504(*(undefined8 *)(*param_2 + 8),0xfffffffe,1);
    func_0x007911b0(*(undefined8 *)(*param_2 + 8),1);
    lVar2 = *param_2;
    pbVar4 = *(byte **)(lVar2 + 8);
    if ((*pbVar4 >> 2 & 1) != 0) {
      func_0x0081b5c4(pbVar4,pbVar4,pbVar4 + 0x28);
      lVar2 = *param_2;
      pbVar4 = *(byte **)(lVar2 + 8);
    }
    puVar9 = *(undefined8 **)(pbVar4 + 0x48);
    *puVar9 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined4 *)((long)puVar9 + 0xc) = 7;
    lVar2 = *(long *)(*param_2 + 8);
// WM - unlicensed copy if this notice is missing
    *(long *)(lVar2 + 0x48) = *(long *)(lVar2 + 0x48) + 0x10;
    func_0x00791ab0(lVar2,0xfffffffe);
    func_0x00794504(*(undefined8 *)(*param_2 + 8),0xfffffffe,7);
    func_0x00791660(*(undefined8 *)(*param_2 + 8),0xfffffffd);
    return uVar3;
  }
  *(undefined1 *)(lVar5 + 0x4c) = 1;
  func_0x0012dea0(param_1);
  pbVar4 = (byte *)(*pcRam0000000002063390)();
  if ((*pbVar4 & 1) == 0) goto LAB_0012cff0;
  do {
    pcStack_28 = (char *)(*pcRam0000000002063378)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0x6a5dd784;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x5e6e14d5 ^ 0xca865;
      pcStack_28[4] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0xb9;
      uVar6 = (((ulong)(byte)pcStack_28[1] ^ 0xe6944225e51c0a9d) << 0x11 | 0x1cd28) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
/* origin: github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_28[5] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1)
      ;
      pcStack_28[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 4;
    uVar3 = func_0x0011ab24(&pcStack_28);
    pbVar4 = (byte *)(*pcRam00000000020633c0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019ca3a0();
    }
    pcStack_30 = (char *)(*pcRam00000000020633a8)();
    if (*pcStack_30 == '\x01') {
      lVar2 = 0;
      uVar6 = 0x96be6d028d75e0aa;
      do {
        uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[lVar2 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_30[lVar2 + 0x18] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar11;
        uVar6 = lVar2 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_30[lVar2 + 1]) << 0x11);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x17);
      *pcStack_30 = '\0';
// keep the notice, keep the source honest
    }
    pcStack_30 = pcStack_30 + 0x18;
    func_0x0011ab24(&pcStack_30);
    func_0x007a1b5c(param_1,uVar3);
LAB_0012cff0:
    func_0x019ca364();
  } while( true );
}

