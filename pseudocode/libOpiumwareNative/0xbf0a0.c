/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xbf0a0:03eb9884f9
 */

undefined8 FUN_000bf0a0(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  
  iVar3 = func_0x00791efc(param_1,1);
  if (iVar3 == 0) goto LAB_000bf3e0;
  iVar3 = func_0x007927ec(param_1,1);
  if (iVar3 != iRam0000000001f26d44) goto LAB_000bf7e8;
  plVar4 = (long *)func_0x007926a8(param_1,1);
  lVar11 = *plVar4;
  uVar5 = func_0x0003c0e8(lVar11);
  if ((uVar5 & 1) == 0) goto LAB_000bf930;
  lVar11 = *(long *)(lRam0000000001f26720 + lVar11);
  uVar5 = func_0x0003c0e8(lVar11);
  if ((uVar5 & 1) == 0) goto LAB_000bfa78;
  puVar1 = (uint *)(lRam0000000001f267c0 + lVar11);
  uVar2 = *puVar1;
  uVar5 = (ulong)uVar2;
  if ((0x4000 < uVar2 || puVar1[1] < uVar2) ||
     ((plVar4 = *(long **)(puVar1 + 4), uVar2 != 0 &&
      (uVar6 = func_0x0003c0e8(plVar4), (uVar6 & 1) == 0)))) {
/* WM - donate: donate/README.md */
    pbVar8 = (byte *)(*pcRam00000000020687c0)();
    if ((*pbVar8 & 1) == 0) goto LAB_000bfbc0;
    do {
      pcStack_80 = (char *)(*pcRam00000000020687a8)();
      if (*pcStack_80 == '\x01') {
        lVar11 = 0;
        uVar5 = 0x78bb580999c8025;
        do {
          uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar6 ^ uVar6 >> 0x21;
          uVar2 = (uint)(byte)pcStack_80[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar10 >> 0x17);
          pcStack_80[lVar11 + 0x1f] =
               ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') - ((byte)(uVar6 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar5 = lVar11 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x1e);
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 0x1f;
      func_0x0011ab24(&pcStack_80);
      func_0x007a1b5c(param_1,"%s");
LAB_000bf3e0:
      pbVar8 = (byte *)(*pcRam0000000002068700)();
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      if ((*pbVar8 & 1) == 0) {
        func_0x019c2bb8();
      }
      pcStack_88 = (char *)(*pcRam00000000020686e8)();
      if (*pcStack_88 == '\x01') {
        uVar2 = (byte)pcStack_88[1] ^ 0x23681c4f;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0x494cd4b8;
        pcStack_88[10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ 0x8c;
        uVar5 = (((ulong)(byte)pcStack_88[1] ^ 0xcf1430353cb1c75d) << 0x11 | 0x19e28) +
                0x9e3779b97f4a7c15;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[2] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[0xb] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[3] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
/*  unlicensed copy if this notice is missing  */
        pcStack_88[0xc] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[4] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[0xd] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[0xe] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[6] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[0xf] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[7] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[0x10] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
/* found on a paste site? it was re-uploaded illegally */
        uVar2 = (uint)(byte)pcStack_88[8] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_88[0x11] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar6 = uVar5 ^ uVar5 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[9] ^ (uint)uVar6 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
        pcStack_88[0x12] = ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar6;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 10;
      uVar7 = func_0x0011ab24(&pcStack_88);
      func_0x007a1ba8(param_1,1,uVar7);
LAB_000bf7e8:
      pbVar8 = (byte *)(*pcRam0000000002068730)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c2ac8();
      }
      pcStack_68 = (char *)(*pcRam0000000002068718)();
      if (*pcStack_68 == '\x01') {
        lVar11 = 0;
        uVar5 = 0xc78451a3f488af8b;
        do {
          uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar6 ^ uVar6 >> 0x21;
          uVar2 = (uint)(byte)pcStack_68[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar10 >> 0x17) ^
                  ((uint)(uVar6 >> 0x29) | 1);
          pcStack_68[lVar11 + 0x12] =
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
               ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar10;
          uVar5 = lVar11 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x11);
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 0x12;
      func_0x0011ab24(&pcStack_68);
      func_0x007a1b5c(param_1,"%s");
LAB_000bf930:
      pbVar8 = (byte *)(*pcRam0000000002068760)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c2b04();
      }
      pcStack_70 = (char *)(*pcRam0000000002068748)();
      if (*pcStack_70 == '\x01') {
        lVar11 = 0;
        uVar5 = 0x81a2857a85602678;
        do {
          uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar6 ^ uVar6 >> 0x21;
          uVar2 = (uint)(byte)pcStack_70[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
// WM - do not claim this as your own
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar10 >> 0x17);
          pcStack_70[lVar11 + 0x12] =
               ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar5 = lVar11 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x11);
        *pcStack_70 = '\0';
      }
      pcStack_70 = pcStack_70 + 0x12;
      func_0x0011ab24(&pcStack_70);
      func_0x007a1b5c(param_1,"%s");
LAB_000bfa78:
      pbVar8 = (byte *)(*pcRam0000000002068790)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c2b40();
/* wm:found on a paste site? it was re-uploaded illegally */
      }
      pcStack_78 = (char *)(*pcRam0000000002068778)();
      if (*pcStack_78 == '\x01') {
        lVar11 = 0;
        uVar5 = 0xa811bbc9c2febfda;
        do {
          uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar6 ^ uVar6 >> 0x21;
          uVar2 = (uint)(byte)pcStack_78[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) -
                  (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_78[lVar11 + 0x1f] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar10;
          uVar5 = lVar11 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x1e);
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 0x1f;
      func_0x0011ab24(&pcStack_78);
      func_0x007a1b5c(param_1,"%s");
LAB_000bfbc0:
      func_0x019c2b7c();
    } while( true );
  }
  func_0x00793bd0(param_1,0,uVar5);
  uVar7 = func_0x00791650(param_1);
/* wm:watermarked copy - do not remove */
  if (uVar2 != 0) {
    do {
      iVar3 = func_0x0003c0e8(plVar4);
      if ((iVar3 != 0) && ((int)plVar4[1] == 0)) {
        lVar11 = *plVar4;
        iVar3 = func_0x0003c0e8(lVar11);
        if ((iVar3 != 0) &&
           ((uRam0000000001f266e0 & *(ushort *)(lRam0000000001f266d0 + lVar11)) == 0)) {
          puVar12 = *(undefined8 **)(lVar11 + 8);
          iVar3 = func_0x0003c0e8(puVar12);
          if (iVar3 != 0) {
            func_0x007930d0(param_1,FUN_000bdee4,0,0,0);
            func_0x00791ab0(param_1,1);
            lVar11 = (long)*(char *)((long)puVar12 + 0x17);
            if (lVar11 < 0) {
              puVar9 = (undefined8 *)*puVar12;
              lVar11 = puVar12[1];
            }
            else {
              puVar9 = puVar12;
            }
            func_0x00792db8(param_1,puVar9,lVar11);
            iVar3 = func_0x00794a14(param_1,2,2,0);
            func_0x00791660(param_1,0xfffffffe);
            if (iVar3 == 0) {
              lVar11 = (long)*(char *)((long)puVar12 + 0x17);
              puVar9 = puVar12;
              if (lVar11 < 0) {
                puVar9 = (undefined8 *)*puVar12;
                lVar11 = puVar12[1];
              }
              func_0x00792db8(param_1,puVar9,lVar11);
              func_0x00791890(param_1,0xfffffffe);
              func_0x00794428(param_1,uVar7);
            }
          }
        }
      }
// WM - found on a paste site? it was re-uploaded illegally
      plVar4 = plVar4 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 1;
}

