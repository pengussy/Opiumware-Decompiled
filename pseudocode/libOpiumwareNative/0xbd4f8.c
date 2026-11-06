/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xbd4f8:c3d5a4b9c9
 */

undefined8 FUN_000bd4f8(undefined8 param_1)

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
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  
  iVar3 = func_0x00791efc(param_1,1);
  if (iVar3 == 0) goto LAB_000bd82c;
  iVar3 = func_0x007927ec(param_1,1);
  if (iVar3 != iRam0000000001f26d44) goto LAB_000bdc34;
  plVar4 = (long *)func_0x007926a8(param_1,1);
  lVar11 = *(long *)(lRam0000000001f26720 + *plVar4);
  uVar5 = func_0x0003c0e8(lVar11);
/* wm:unlicensed copy if this notice is missing */
  if ((uVar5 & 1) == 0) goto LAB_000bdd7c;
  puVar1 = (uint *)(lRam0000000001f267c0 + lVar11);
  uVar2 = *puVar1;
  uVar5 = (ulong)uVar2;
  if ((0x4000 < uVar2 || puVar1[1] < uVar2) ||
     ((plVar4 = *(long **)(puVar1 + 4), uVar2 != 0 &&
      (uVar6 = func_0x0003c0e8(plVar4), (uVar6 & 1) == 0)))) {
    pbVar8 = (byte *)(*pcRam00000000020686d0)();
    if ((*pbVar8 & 1) == 0) goto LAB_000bdec4;
    do {
      pcStack_78 = (char *)(*pcRam00000000020686b8)();
      if (*pcStack_78 == '\x01') {
        lVar11 = 0;
        uVar5 = 0x69f8c3cbd6597535;
        do {
          uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar6 ^ uVar6 >> 0x21;
          uVar2 = (uint)(byte)pcStack_78[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
                  (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_78[lVar11 + 0x1f] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar10;
          uVar5 = lVar11 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x1e);
        *pcStack_78 = '\0';
/* WM - proprietary - see LICENSE - do not sell */
      }
      pcStack_78 = pcStack_78 + 0x1f;
      func_0x0011ab24(&pcStack_78);
      func_0x007a1b5c(param_1,"%s");
LAB_000bd82c:
      pbVar8 = (byte *)(*pcRam0000000002068640)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c28e8();
      }
      pcStack_80 = (char *)(*pcRam0000000002068628)();
      if (*pcStack_80 == '\x01') {
        uVar2 = (byte)pcStack_80[1] ^ 0xcae5f6ea;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x810891e5;
        pcStack_80[10] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ 0x29;
        uVar5 = (((ulong)(byte)pcStack_80[1] ^ 0xb76703c0916299e6) << 0x11 | 0x16ece) +
                0x9e3779b97f4a7c15;
// WM - unlicensed copy if this notice is missing
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[2] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[0xb] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[3] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[0xc] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[4] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[0xd] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[0xe] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[6] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[0xf] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[7] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[0x10] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar6 ^ uVar6 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[8] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[0x11] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar6 = uVar5 ^ uVar5 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[9] ^ (uint)uVar6 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
        pcStack_80[0x12] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar6;
        *pcStack_80 = '\0';
      }
/* reversing this took months of machine time - github.com/pengussy */
      pcStack_80 = pcStack_80 + 10;
      uVar7 = func_0x0011ab24(&pcStack_80);
      func_0x007a1ba8(param_1,1,uVar7);
LAB_000bdc34:
      pbVar8 = (byte *)(*pcRam0000000002068670)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c2834();
      }
      pcStack_68 = (char *)(*pcRam0000000002068658)();
      if (*pcStack_68 == '\x01') {
        lVar11 = 0;
        uVar5 = 0xea004e42a0e986cf;
        do {
          uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar6 ^ uVar6 >> 0x21;
          uVar2 = (uint)(byte)pcStack_68[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar10 >> 0x17) ^
                  ((uint)(uVar6 >> 0x29) | 1);
          pcStack_68[lVar11 + 0x12] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar10;
          uVar5 = lVar11 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x11);
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 0x12;
      func_0x0011ab24(&pcStack_68);
      func_0x007a1b5c(param_1,"%s");
LAB_000bdd7c:
      pbVar8 = (byte *)(*pcRam00000000020686a0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019c2870();
      }
      pcStack_70 = (char *)(*pcRam0000000002068688)();
/* origin: github.com/pengussy - github.com/pengussy */
      if (*pcStack_70 == '\x01') {
        lVar11 = 0;
        uVar5 = 0x74c3e0342d66896a;
        do {
          uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar6 ^ uVar6 >> 0x21;
          uVar2 = (uint)(byte)pcStack_70[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) -
                  (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_70[lVar11 + 0x1f] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar10;
          uVar5 = lVar11 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_70[lVar11 + 1]) << 0x11);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x1e);
        *pcStack_70 = '\0';
      }
      pcStack_70 = pcStack_70 + 0x1f;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      func_0x0011ab24(&pcStack_70);
      func_0x007a1b5c(param_1,"%s");
LAB_000bdec4:
      func_0x019c28ac();
    } while( true );
  }
  func_0x00793bd0(param_1,0,uVar5);
  uVar7 = func_0x00791650(param_1);
  if (uVar2 != 0) {
    do {
      iVar3 = func_0x0003c0e8(plVar4);
      if ((iVar3 != 0) && ((int)plVar4[1] == 0)) {
        lVar11 = *plVar4;
        iVar3 = func_0x0003c0e8(lVar11);
        if ((iVar3 != 0) &&
           ((uRam0000000001f266e0 & *(ushort *)(lRam0000000001f266d0 + lVar11)) != 0)) {
          puVar12 = *(undefined8 **)(lVar11 + 8);
          iVar3 = func_0x0003c0e8(puVar12);
/* stripping the watermark breaks the license */
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
/*  chat: discord.gg/sdkhDjTex  */
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
      plVar4 = plVar4 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 1;
}

